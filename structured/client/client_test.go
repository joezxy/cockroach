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
// implied.  See the License for the specific language governing
// permissions and limitations under the License. See the AUTHORS file
// for names of contributors.
//
// Author: Spencer Kimball (spencer.kimball@gmail.com)

package client

import (
	"fmt"

	schema "github.com/cockroachdb/cockroach/structured/schema"
)

// User is a top-level table. User IDs are scattered, meaning a two
// byte hash of the ID from the UserID sequence is prepended to yield
// a randomly distributed keyspace.
type User struct {
	ID   int64  `roach:"id,pk,seq=UserID,scatter"`
	Name string `roach:"na"`
}

// Identity is a top-level table as identities must be queried by key
// at login.
type Identity struct {
	Key    string `roach:"ke,pk,scatter"` // (e.g. email:spencer.kimball@gmail.com, phone:6464174337)
	UserID int64  `roach:"ui,fk=User.ID,ondelete=setnull"`
}

// Photo is a top-level table. While photos can only be contributed by
// a single user, they are then shared and accessible to any number of
// other users. See notes on scatter option for User.ID.
type Photo struct {
	ID       int64          `roach:"id,pk,seq=PhotoID,scatter"`
	UserID   int64          `roach:"ui,fk=User.ID,ondelete=setnull"`
	Location schema.LatLong `roach:"lo,locationindex"`
}

// PhotoStream is a top-level table as streams are shared by multiple
// users. The user ID for a photo stream has an index so that all
// photo streams for a user may be easily queried. Photo stream titles
// are full-text indexed for public searching.
type PhotoStream struct {
	ID     int64  `roach:"id,pk,seq=PhotoStreamID,scatter"`
	UserID int64  `roach:"ui,fk=User.ID,index"`
	Title  string `roach:"ti,fulltextindex"`
}

// StreamPost is an interleaved join table (on PhotoStream), as the
// posts which link a Photo to a PhotoStream are scoped to a single
// PhotoStream. With interleaved tables, it's not necessary to specify
// the "ondelete" roach option, as it is always set to "cascade".
type StreamPost struct {
	PhotoStreamID int64 `roach:"si,pk,fk=PhotoStream.ID,interleave"`
	PhotoID       int64 `roach:"pi,pk,fk=Photo.ID"`
	Timestamp     int64 `roach:"ti"`
}

// Comment is an interleaved table (on PhotoStream), as comments are
// scoped to a single PhotoStream.
type Comment struct {
	PhotoStreamID int64  `roach:"si,pk,fk=PhotoStream,interleave"`
	ID            int64  `roach:"id,pk,seq=CommentID"`
	Message       string `roach:"me,fulltextindex"`
	Timestamp     int64  `roach:"ti"`
}

func ExampleGoSchema() {
	sm := map[string]interface{}{
		"us": User{},
		"id": Identity{},
		"ph": Photo{},
		"ps": PhotoStream{},
		"sp": StreamPost{},
		"co": Comment{},
	}
	s, _ := schema.NewGoSchema("PhotoDB", "pdb", sm)

	yaml, _ := s.ToYAML()
	fmt.Println(string(yaml))
	// Output:
	// db: PhotoDB
	// db_key: pdb
	// tables:
	// - table: User
	//   table_key: us
	//   columns:
	//   - column: ID
	//     column_key: id
	//     type: integer
	//   - column: Name
	//     column_key: na
	//     type: string
	// - table: Identity
	//   table_key: id
	//   columns:
	//   - column: Key
	//     column_key: ke
	//     type: string
	//   - column: UserID
	//     column_key: ui
	//     type: integer
	// - table: Photo
	//   table_key: ph
	//   columns:
	//   - column: ID
	//     column_key: id
	//     type: integer
	//   - column: UserID
	//     column_key: ui
	//     type: integer
	//   - column: Location
	//     column_key: lo
	//     type: latlong
	// - table: PhotoStream
	//   table_key: ps
	//   columns:
	//   - column: ID
	//     column_key: id
	//     type: integer
	//   - column: UserID
	//     column_key: ui
	//     type: integer
	//   - column: Title
	//     column_key: ti
	//     type: string
	// - table: StreamPost
	//   table_key: sp
	//   columns:
	//   - column: PhotoStreamID
	//     column_key: si
	//     type: integer
	//   - column: PhotoID
	//     column_key: pi
	//     type: integer
	//   - column: Timestamp
	//     column_key: ti
	//     type: integer
	// - table: Comment
	//   table_key: co
	//   columns:
	//   - column: PhotoStreamID
	//     column_key: si
	//     type: integer
	//   - column: ID
	//     column_key: id
	//     type: integer
	//   - column: Message
	//     column_key: me
	//     type: string
	//   - column: Timestamp
	//     column_key: ti
	//     type: integer
}