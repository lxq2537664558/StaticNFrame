// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: boat_battle.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "boat_battle.pb.h"

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
namespace message {

namespace {


}  // namespace


void protobuf_AssignDesc_boat_5fbattle_2eproto() {
  protobuf_AddDesc_boat_5fbattle_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "boat_battle.proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_boat_5fbattle_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_boat_5fbattle_2eproto() {
}

void protobuf_AddDesc_boat_5fbattle_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::proto::message::protobuf_AddDesc_common_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021boat_battle.proto\022\rproto.message\032\014comm"
    "on.proto", 48);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "boat_battle.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_boat_5fbattle_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_boat_5fbattle_2eproto {
  StaticDescriptorInitializer_boat_5fbattle_2eproto() {
    protobuf_AddDesc_boat_5fbattle_2eproto();
  }
} static_descriptor_initializer_boat_5fbattle_2eproto_;

// @@protoc_insertion_point(namespace_scope)

}  // namespace message
}  // namespace proto

// @@protoc_insertion_point(global_scope)
