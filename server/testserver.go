// Copyright 2014 The Cockroach Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License. See the AUTHORS file
// for names of contributors.
//
// Author: Spencer Kimball (spencer.kimball@gmail.com)

package server

import (
	"time"

	"github.com/cockroachdb/cockroach/gossip"
	"github.com/cockroachdb/cockroach/proto"
	"github.com/cockroachdb/cockroach/storage"
	"github.com/cockroachdb/cockroach/storage/engine"
	"github.com/cockroachdb/cockroach/util"
	"github.com/cockroachdb/cockroach/util/hlc"
)

// A TestServer encapsulates an in-memory instantiation of a cockroach
// node with a single store. Example usage of a TestServer follows:
//
//   s := &server.TestServer{}
//   if err := s.Start(); err != nil {
//     t.Fatal(err)
//   }
//   defer s.Stop()
//
// TODO(spencer): add support for multiple stores.
type TestServer struct {
	// CertDir specifies the directory containing certs for SSL
	// connections. Default will load insecure TLS config.
	CertDir string
	// MaxOffset is the maximum offset for clocks in the cluster.
	// This is mostly irrelevant except when testing reads within
	// uncertainty intervals.
	MaxOffset time.Duration
	// Addr defaults to localhost with port set at time of call to
	// Start() to an available port.
	Addr          string
	SkipBootstrap bool
	// server is the embedded Cockroach server struct.
	*Server
	// Engine underlying the test server.
	Engine engine.Engine
}

// Gossip returns the gossip instance used by the TestServer.
func (ts *TestServer) Gossip() *gossip.Gossip {
	if ts != nil {
		return ts.gossip
	}
	return nil
}

// Clock returns the clock used by the TestServer.
func (ts *TestServer) Clock() *hlc.Clock {
	if ts != nil {
		return ts.clock
	}
	return nil
}

// Start starts the TestServer by bootstrapping an in-memory store
// (defaults to maximum of 100M). The server is started, launching the
// node RPC server and all HTTP endpoints. Use the value of
// TestServer.Addr after Start() for client connections. Use Stop()
// to shutdown the server after the test completes.
func (ts *TestServer) Start() error {
	// We update these with the actual port once the servers
	// have been launched for the purpose of this test.
	if ts.Addr == "" {
		ts.Addr = "127.0.0.1:0"
	}

	ctx := NewContext()
	ctx.Addr = ts.Addr
	ctx.Certs = ts.CertDir
	ctx.MaxOffset = ts.MaxOffset

	var err error
	ts.Server, err = NewServer(ctx, util.NewStopper())
	if err != nil {
		return util.Errorf("could not init server: %s", err)
	}

	if ts.Engine == nil {
		ts.Engine = engine.NewInMem(proto.Attributes{}, 100<<20)
	}
	ctx.Engines = []engine.Engine{ts.Engine}
	if !ts.SkipBootstrap {
		stopper := util.NewStopper()
		_, err := BootstrapCluster("cluster-1", ts.Engine, stopper)
		if err != nil {
			return util.Errorf("could not bootstrap cluster: %s", err)
		}
		stopper.Stop()
	}
	err = ts.Server.Start(true)
	if err != nil {
		return util.Errorf("could not start server: %s", err)
	}
	// Update the configuration variables to reflect the actual
	// ports bound.
	ts.Addr = ts.rpc.Addr().String()

	return nil
}

// Stop stops the TestServer.
func (ts *TestServer) Stop() {
	ts.Server.Stop()
}

// SetRangeRetryOptions sets the retry options for stores in TestServer.
func (ts *TestServer) SetRangeRetryOptions(ro util.RetryOptions) {
	ts.node.lSender.VisitStores(func(s *storage.Store) error {
		s.RetryOpts = ro
		return nil
	})
}
