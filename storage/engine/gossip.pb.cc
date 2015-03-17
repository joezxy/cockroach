// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gossip.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "gossip.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto {

namespace {

const ::google::protobuf::Descriptor* Addr_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Addr_reflection_ = NULL;
const ::google::protobuf::Descriptor* GossipRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GossipRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* GossipResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GossipResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_gossip_2eproto() {
  protobuf_AddDesc_gossip_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "gossip.proto");
  GOOGLE_CHECK(file != NULL);
  Addr_descriptor_ = file->message_type(0);
  static const int Addr_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Addr, network_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Addr, address_),
  };
  Addr_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Addr_descriptor_,
      Addr::default_instance_,
      Addr_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Addr, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Addr, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Addr));
  GossipRequest_descriptor_ = file->message_type(1);
  static const int GossipRequest_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GossipRequest, addr_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GossipRequest, l_addr_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GossipRequest, max_seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GossipRequest, delta_),
  };
  GossipRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GossipRequest_descriptor_,
      GossipRequest::default_instance_,
      GossipRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GossipRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GossipRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GossipRequest));
  GossipResponse_descriptor_ = file->message_type(2);
  static const int GossipResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GossipResponse, delta_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GossipResponse, alternate_),
  };
  GossipResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GossipResponse_descriptor_,
      GossipResponse::default_instance_,
      GossipResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GossipResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GossipResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GossipResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_gossip_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Addr_descriptor_, &Addr::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GossipRequest_descriptor_, &GossipRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GossipResponse_descriptor_, &GossipResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_gossip_2eproto() {
  delete Addr::default_instance_;
  delete Addr_reflection_;
  delete GossipRequest::default_instance_;
  delete GossipRequest_reflection_;
  delete GossipResponse::default_instance_;
  delete GossipResponse_reflection_;
}

void protobuf_AddDesc_gossip_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gogoproto::protobuf_AddDesc_github_2ecom_2fgogo_2fprotobuf_2fgogoproto_2fgogo_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014gossip.proto\022\005proto\032-github.com/gogo/p"
    "rotobuf/gogoproto/gogo.proto\"4\n\004Addr\022\025\n\007"
    "network\030\001 \001(\tB\004\310\336\037\000\022\025\n\007address\030\002 \001(\tB\004\310\336"
    "\037\000\"\177\n\rGossipRequest\022\037\n\004addr\030\001 \001(\0132\013.prot"
    "o.AddrB\004\310\336\037\000\022!\n\006l_addr\030\002 \001(\0132\013.proto.Add"
    "rB\004\310\336\037\000\022\025\n\007max_seq\030\003 \001(\003B\004\310\336\037\000\022\023\n\005delta\030"
    "\004 \001(\014B\004\310\336\037\000\"E\n\016GossipResponse\022\023\n\005delta\030\001"
    " \001(\014B\004\310\336\037\000\022\036\n\talternate\030\002 \001(\0132\013.proto.Ad"
    "dr", 322);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gossip.proto", &protobuf_RegisterTypes);
  Addr::default_instance_ = new Addr();
  GossipRequest::default_instance_ = new GossipRequest();
  GossipResponse::default_instance_ = new GossipResponse();
  Addr::default_instance_->InitAsDefaultInstance();
  GossipRequest::default_instance_->InitAsDefaultInstance();
  GossipResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_gossip_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_gossip_2eproto {
  StaticDescriptorInitializer_gossip_2eproto() {
    protobuf_AddDesc_gossip_2eproto();
  }
} static_descriptor_initializer_gossip_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Addr::kNetworkFieldNumber;
const int Addr::kAddressFieldNumber;
#endif  // !_MSC_VER

Addr::Addr()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.Addr)
}

void Addr::InitAsDefaultInstance() {
}

Addr::Addr(const Addr& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:proto.Addr)
}

void Addr::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  network_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  address_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Addr::~Addr() {
  // @@protoc_insertion_point(destructor:proto.Addr)
  SharedDtor();
}

void Addr::SharedDtor() {
  if (network_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete network_;
  }
  if (address_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete address_;
  }
  if (this != default_instance_) {
  }
}

void Addr::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Addr::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Addr_descriptor_;
}

const Addr& Addr::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_gossip_2eproto();
  return *default_instance_;
}

Addr* Addr::default_instance_ = NULL;

Addr* Addr::New() const {
  return new Addr;
}

void Addr::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_network()) {
      if (network_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        network_->clear();
      }
    }
    if (has_address()) {
      if (address_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        address_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Addr::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.Addr)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string network = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_network()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->network().data(), this->network().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "network");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_address;
        break;
      }

      // optional string address = 2;
      case 2: {
        if (tag == 18) {
         parse_address:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_address()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->address().data(), this->address().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "address");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.Addr)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.Addr)
  return false;
#undef DO_
}

void Addr::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.Addr)
  // optional string network = 1;
  if (has_network()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->network().data(), this->network().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "network");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->network(), output);
  }

  // optional string address = 2;
  if (has_address()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->address().data(), this->address().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "address");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->address(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.Addr)
}

::google::protobuf::uint8* Addr::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto.Addr)
  // optional string network = 1;
  if (has_network()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->network().data(), this->network().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "network");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->network(), target);
  }

  // optional string address = 2;
  if (has_address()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->address().data(), this->address().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "address");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->address(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.Addr)
  return target;
}

int Addr::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string network = 1;
    if (has_network()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->network());
    }

    // optional string address = 2;
    if (has_address()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->address());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Addr::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Addr* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Addr*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Addr::MergeFrom(const Addr& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_network()) {
      set_network(from.network());
    }
    if (from.has_address()) {
      set_address(from.address());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Addr::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Addr::CopyFrom(const Addr& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Addr::IsInitialized() const {

  return true;
}

void Addr::Swap(Addr* other) {
  if (other != this) {
    std::swap(network_, other->network_);
    std::swap(address_, other->address_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Addr::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Addr_descriptor_;
  metadata.reflection = Addr_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int GossipRequest::kAddrFieldNumber;
const int GossipRequest::kLAddrFieldNumber;
const int GossipRequest::kMaxSeqFieldNumber;
const int GossipRequest::kDeltaFieldNumber;
#endif  // !_MSC_VER

GossipRequest::GossipRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.GossipRequest)
}

void GossipRequest::InitAsDefaultInstance() {
  addr_ = const_cast< ::proto::Addr*>(&::proto::Addr::default_instance());
  l_addr_ = const_cast< ::proto::Addr*>(&::proto::Addr::default_instance());
}

GossipRequest::GossipRequest(const GossipRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:proto.GossipRequest)
}

void GossipRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  addr_ = NULL;
  l_addr_ = NULL;
  max_seq_ = GOOGLE_LONGLONG(0);
  delta_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GossipRequest::~GossipRequest() {
  // @@protoc_insertion_point(destructor:proto.GossipRequest)
  SharedDtor();
}

void GossipRequest::SharedDtor() {
  if (delta_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete delta_;
  }
  if (this != default_instance_) {
    delete addr_;
    delete l_addr_;
  }
}

void GossipRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GossipRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GossipRequest_descriptor_;
}

const GossipRequest& GossipRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_gossip_2eproto();
  return *default_instance_;
}

GossipRequest* GossipRequest::default_instance_ = NULL;

GossipRequest* GossipRequest::New() const {
  return new GossipRequest;
}

void GossipRequest::Clear() {
  if (_has_bits_[0 / 32] & 15) {
    if (has_addr()) {
      if (addr_ != NULL) addr_->::proto::Addr::Clear();
    }
    if (has_l_addr()) {
      if (l_addr_ != NULL) l_addr_->::proto::Addr::Clear();
    }
    max_seq_ = GOOGLE_LONGLONG(0);
    if (has_delta()) {
      if (delta_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        delta_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GossipRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GossipRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .proto.Addr addr = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_addr()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_l_addr;
        break;
      }

      // optional .proto.Addr l_addr = 2;
      case 2: {
        if (tag == 18) {
         parse_l_addr:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_l_addr()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_max_seq;
        break;
      }

      // optional int64 max_seq = 3;
      case 3: {
        if (tag == 24) {
         parse_max_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &max_seq_)));
          set_has_max_seq();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_delta;
        break;
      }

      // optional bytes delta = 4;
      case 4: {
        if (tag == 34) {
         parse_delta:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_delta()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GossipRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GossipRequest)
  return false;
#undef DO_
}

void GossipRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GossipRequest)
  // optional .proto.Addr addr = 1;
  if (has_addr()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->addr(), output);
  }

  // optional .proto.Addr l_addr = 2;
  if (has_l_addr()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->l_addr(), output);
  }

  // optional int64 max_seq = 3;
  if (has_max_seq()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->max_seq(), output);
  }

  // optional bytes delta = 4;
  if (has_delta()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->delta(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GossipRequest)
}

::google::protobuf::uint8* GossipRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto.GossipRequest)
  // optional .proto.Addr addr = 1;
  if (has_addr()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->addr(), target);
  }

  // optional .proto.Addr l_addr = 2;
  if (has_l_addr()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->l_addr(), target);
  }

  // optional int64 max_seq = 3;
  if (has_max_seq()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->max_seq(), target);
  }

  // optional bytes delta = 4;
  if (has_delta()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->delta(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GossipRequest)
  return target;
}

int GossipRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .proto.Addr addr = 1;
    if (has_addr()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->addr());
    }

    // optional .proto.Addr l_addr = 2;
    if (has_l_addr()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->l_addr());
    }

    // optional int64 max_seq = 3;
    if (has_max_seq()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->max_seq());
    }

    // optional bytes delta = 4;
    if (has_delta()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->delta());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GossipRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GossipRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GossipRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GossipRequest::MergeFrom(const GossipRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_addr()) {
      mutable_addr()->::proto::Addr::MergeFrom(from.addr());
    }
    if (from.has_l_addr()) {
      mutable_l_addr()->::proto::Addr::MergeFrom(from.l_addr());
    }
    if (from.has_max_seq()) {
      set_max_seq(from.max_seq());
    }
    if (from.has_delta()) {
      set_delta(from.delta());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GossipRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GossipRequest::CopyFrom(const GossipRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GossipRequest::IsInitialized() const {

  return true;
}

void GossipRequest::Swap(GossipRequest* other) {
  if (other != this) {
    std::swap(addr_, other->addr_);
    std::swap(l_addr_, other->l_addr_);
    std::swap(max_seq_, other->max_seq_);
    std::swap(delta_, other->delta_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GossipRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GossipRequest_descriptor_;
  metadata.reflection = GossipRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int GossipResponse::kDeltaFieldNumber;
const int GossipResponse::kAlternateFieldNumber;
#endif  // !_MSC_VER

GossipResponse::GossipResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto.GossipResponse)
}

void GossipResponse::InitAsDefaultInstance() {
  alternate_ = const_cast< ::proto::Addr*>(&::proto::Addr::default_instance());
}

GossipResponse::GossipResponse(const GossipResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:proto.GossipResponse)
}

void GossipResponse::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  delta_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  alternate_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GossipResponse::~GossipResponse() {
  // @@protoc_insertion_point(destructor:proto.GossipResponse)
  SharedDtor();
}

void GossipResponse::SharedDtor() {
  if (delta_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete delta_;
  }
  if (this != default_instance_) {
    delete alternate_;
  }
}

void GossipResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GossipResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GossipResponse_descriptor_;
}

const GossipResponse& GossipResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_gossip_2eproto();
  return *default_instance_;
}

GossipResponse* GossipResponse::default_instance_ = NULL;

GossipResponse* GossipResponse::New() const {
  return new GossipResponse;
}

void GossipResponse::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_delta()) {
      if (delta_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        delta_->clear();
      }
    }
    if (has_alternate()) {
      if (alternate_ != NULL) alternate_->::proto::Addr::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GossipResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto.GossipResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes delta = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_delta()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_alternate;
        break;
      }

      // optional .proto.Addr alternate = 2;
      case 2: {
        if (tag == 18) {
         parse_alternate:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_alternate()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto.GossipResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto.GossipResponse)
  return false;
#undef DO_
}

void GossipResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto.GossipResponse)
  // optional bytes delta = 1;
  if (has_delta()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->delta(), output);
  }

  // optional .proto.Addr alternate = 2;
  if (has_alternate()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->alternate(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto.GossipResponse)
}

::google::protobuf::uint8* GossipResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto.GossipResponse)
  // optional bytes delta = 1;
  if (has_delta()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->delta(), target);
  }

  // optional .proto.Addr alternate = 2;
  if (has_alternate()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->alternate(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto.GossipResponse)
  return target;
}

int GossipResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bytes delta = 1;
    if (has_delta()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->delta());
    }

    // optional .proto.Addr alternate = 2;
    if (has_alternate()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->alternate());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GossipResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GossipResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GossipResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GossipResponse::MergeFrom(const GossipResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_delta()) {
      set_delta(from.delta());
    }
    if (from.has_alternate()) {
      mutable_alternate()->::proto::Addr::MergeFrom(from.alternate());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GossipResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GossipResponse::CopyFrom(const GossipResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GossipResponse::IsInitialized() const {

  return true;
}

void GossipResponse::Swap(GossipResponse* other) {
  if (other != this) {
    std::swap(delta_, other->delta_);
    std::swap(alternate_, other->alternate_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GossipResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GossipResponse_descriptor_;
  metadata.reflection = GossipResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto

// @@protoc_insertion_point(global_scope)
