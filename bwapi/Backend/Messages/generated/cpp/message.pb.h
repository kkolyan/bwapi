// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef PROTOBUF_INCLUDED_message_2eproto
#define PROTOBUF_INCLUDED_message_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "init.pb.h"
#include "game.pb.h"
#include "command.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_message_2eproto 

namespace protobuf_message_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_message_2eproto
namespace bwapi {
namespace message {
class Message;
class MessageDefaultTypeInternal;
extern MessageDefaultTypeInternal _Message_default_instance_;
}  // namespace message
}  // namespace bwapi
namespace google {
namespace protobuf {
template<> ::bwapi::message::Message* Arena::CreateMaybeMessage<::bwapi::message::Message>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace bwapi {
namespace message {

// ===================================================================

class Message : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:bwapi.message.Message) */ {
 public:
  Message();
  virtual ~Message();

  Message(const Message& from);

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Message(Message&& from) noexcept
    : Message() {
    *this = ::std::move(from);
  }

  inline Message& operator=(Message&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Message& default_instance();

  enum MsgCase {
    kInitBroadcast = 1,
    kInitResponse = 2,
    kInitResolution = 3,
    kFrameUpdate = 1000,
    kEndOfQueue = 4,
    kCommand = 5,
    MSG_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Message* internal_default_instance() {
    return reinterpret_cast<const Message*>(
               &_Message_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Message* other);
  friend void swap(Message& a, Message& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Message* New() const final {
    return CreateMaybeMessage<Message>(NULL);
  }

  Message* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Message>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Message& from);
  void MergeFrom(const Message& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Message* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .bwapi.init.ClientBroadcast initBroadcast = 1;
  bool has_initbroadcast() const;
  void clear_initbroadcast();
  static const int kInitBroadcastFieldNumber = 1;
  private:
  const ::bwapi::init::ClientBroadcast& _internal_initbroadcast() const;
  public:
  const ::bwapi::init::ClientBroadcast& initbroadcast() const;
  ::bwapi::init::ClientBroadcast* release_initbroadcast();
  ::bwapi::init::ClientBroadcast* mutable_initbroadcast();
  void set_allocated_initbroadcast(::bwapi::init::ClientBroadcast* initbroadcast);

  // .bwapi.init.ServerResponse initResponse = 2;
  bool has_initresponse() const;
  void clear_initresponse();
  static const int kInitResponseFieldNumber = 2;
  private:
  const ::bwapi::init::ServerResponse& _internal_initresponse() const;
  public:
  const ::bwapi::init::ServerResponse& initresponse() const;
  ::bwapi::init::ServerResponse* release_initresponse();
  ::bwapi::init::ServerResponse* mutable_initresponse();
  void set_allocated_initresponse(::bwapi::init::ServerResponse* initresponse);

  // .bwapi.init.ClientResolution initResolution = 3;
  bool has_initresolution() const;
  void clear_initresolution();
  static const int kInitResolutionFieldNumber = 3;
  private:
  const ::bwapi::init::ClientResolution& _internal_initresolution() const;
  public:
  const ::bwapi::init::ClientResolution& initresolution() const;
  ::bwapi::init::ClientResolution* release_initresolution();
  ::bwapi::init::ClientResolution* mutable_initresolution();
  void set_allocated_initresolution(::bwapi::init::ClientResolution* initresolution);

  // .bwapi.game.FrameUpdate frameUpdate = 1000;
  bool has_frameupdate() const;
  void clear_frameupdate();
  static const int kFrameUpdateFieldNumber = 1000;
  private:
  const ::bwapi::game::FrameUpdate& _internal_frameupdate() const;
  public:
  const ::bwapi::game::FrameUpdate& frameupdate() const;
  ::bwapi::game::FrameUpdate* release_frameupdate();
  ::bwapi::game::FrameUpdate* mutable_frameupdate();
  void set_allocated_frameupdate(::bwapi::game::FrameUpdate* frameupdate);

  // .bwapi.game.EndOfQueue endOfQueue = 4;
  bool has_endofqueue() const;
  void clear_endofqueue();
  static const int kEndOfQueueFieldNumber = 4;
  private:
  const ::bwapi::game::EndOfQueue& _internal_endofqueue() const;
  public:
  const ::bwapi::game::EndOfQueue& endofqueue() const;
  ::bwapi::game::EndOfQueue* release_endofqueue();
  ::bwapi::game::EndOfQueue* mutable_endofqueue();
  void set_allocated_endofqueue(::bwapi::game::EndOfQueue* endofqueue);

  // .bwapi.command.Command command = 5;
  bool has_command() const;
  void clear_command();
  static const int kCommandFieldNumber = 5;
  private:
  const ::bwapi::command::Command& _internal_command() const;
  public:
  const ::bwapi::command::Command& command() const;
  ::bwapi::command::Command* release_command();
  ::bwapi::command::Command* mutable_command();
  void set_allocated_command(::bwapi::command::Command* command);

  void clear_msg();
  MsgCase msg_case() const;
  // @@protoc_insertion_point(class_scope:bwapi.message.Message)
 private:
  void set_has_initbroadcast();
  void set_has_initresponse();
  void set_has_initresolution();
  void set_has_frameupdate();
  void set_has_endofqueue();
  void set_has_command();

  inline bool has_msg() const;
  inline void clear_has_msg();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  union MsgUnion {
    MsgUnion() {}
    ::bwapi::init::ClientBroadcast* initbroadcast_;
    ::bwapi::init::ServerResponse* initresponse_;
    ::bwapi::init::ClientResolution* initresolution_;
    ::bwapi::game::FrameUpdate* frameupdate_;
    ::bwapi::game::EndOfQueue* endofqueue_;
    ::bwapi::command::Command* command_;
  } msg_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_message_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Message

// .bwapi.init.ClientBroadcast initBroadcast = 1;
inline bool Message::has_initbroadcast() const {
  return msg_case() == kInitBroadcast;
}
inline void Message::set_has_initbroadcast() {
  _oneof_case_[0] = kInitBroadcast;
}
inline const ::bwapi::init::ClientBroadcast& Message::_internal_initbroadcast() const {
  return *msg_.initbroadcast_;
}
inline ::bwapi::init::ClientBroadcast* Message::release_initbroadcast() {
  // @@protoc_insertion_point(field_release:bwapi.message.Message.initBroadcast)
  if (has_initbroadcast()) {
    clear_has_msg();
      ::bwapi::init::ClientBroadcast* temp = msg_.initbroadcast_;
    msg_.initbroadcast_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::bwapi::init::ClientBroadcast& Message::initbroadcast() const {
  // @@protoc_insertion_point(field_get:bwapi.message.Message.initBroadcast)
  return has_initbroadcast()
      ? *msg_.initbroadcast_
      : *reinterpret_cast< ::bwapi::init::ClientBroadcast*>(&::bwapi::init::_ClientBroadcast_default_instance_);
}
inline ::bwapi::init::ClientBroadcast* Message::mutable_initbroadcast() {
  if (!has_initbroadcast()) {
    clear_msg();
    set_has_initbroadcast();
    msg_.initbroadcast_ = CreateMaybeMessage< ::bwapi::init::ClientBroadcast >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:bwapi.message.Message.initBroadcast)
  return msg_.initbroadcast_;
}

// .bwapi.init.ServerResponse initResponse = 2;
inline bool Message::has_initresponse() const {
  return msg_case() == kInitResponse;
}
inline void Message::set_has_initresponse() {
  _oneof_case_[0] = kInitResponse;
}
inline const ::bwapi::init::ServerResponse& Message::_internal_initresponse() const {
  return *msg_.initresponse_;
}
inline ::bwapi::init::ServerResponse* Message::release_initresponse() {
  // @@protoc_insertion_point(field_release:bwapi.message.Message.initResponse)
  if (has_initresponse()) {
    clear_has_msg();
      ::bwapi::init::ServerResponse* temp = msg_.initresponse_;
    msg_.initresponse_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::bwapi::init::ServerResponse& Message::initresponse() const {
  // @@protoc_insertion_point(field_get:bwapi.message.Message.initResponse)
  return has_initresponse()
      ? *msg_.initresponse_
      : *reinterpret_cast< ::bwapi::init::ServerResponse*>(&::bwapi::init::_ServerResponse_default_instance_);
}
inline ::bwapi::init::ServerResponse* Message::mutable_initresponse() {
  if (!has_initresponse()) {
    clear_msg();
    set_has_initresponse();
    msg_.initresponse_ = CreateMaybeMessage< ::bwapi::init::ServerResponse >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:bwapi.message.Message.initResponse)
  return msg_.initresponse_;
}

// .bwapi.init.ClientResolution initResolution = 3;
inline bool Message::has_initresolution() const {
  return msg_case() == kInitResolution;
}
inline void Message::set_has_initresolution() {
  _oneof_case_[0] = kInitResolution;
}
inline const ::bwapi::init::ClientResolution& Message::_internal_initresolution() const {
  return *msg_.initresolution_;
}
inline ::bwapi::init::ClientResolution* Message::release_initresolution() {
  // @@protoc_insertion_point(field_release:bwapi.message.Message.initResolution)
  if (has_initresolution()) {
    clear_has_msg();
      ::bwapi::init::ClientResolution* temp = msg_.initresolution_;
    msg_.initresolution_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::bwapi::init::ClientResolution& Message::initresolution() const {
  // @@protoc_insertion_point(field_get:bwapi.message.Message.initResolution)
  return has_initresolution()
      ? *msg_.initresolution_
      : *reinterpret_cast< ::bwapi::init::ClientResolution*>(&::bwapi::init::_ClientResolution_default_instance_);
}
inline ::bwapi::init::ClientResolution* Message::mutable_initresolution() {
  if (!has_initresolution()) {
    clear_msg();
    set_has_initresolution();
    msg_.initresolution_ = CreateMaybeMessage< ::bwapi::init::ClientResolution >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:bwapi.message.Message.initResolution)
  return msg_.initresolution_;
}

// .bwapi.game.FrameUpdate frameUpdate = 1000;
inline bool Message::has_frameupdate() const {
  return msg_case() == kFrameUpdate;
}
inline void Message::set_has_frameupdate() {
  _oneof_case_[0] = kFrameUpdate;
}
inline const ::bwapi::game::FrameUpdate& Message::_internal_frameupdate() const {
  return *msg_.frameupdate_;
}
inline ::bwapi::game::FrameUpdate* Message::release_frameupdate() {
  // @@protoc_insertion_point(field_release:bwapi.message.Message.frameUpdate)
  if (has_frameupdate()) {
    clear_has_msg();
      ::bwapi::game::FrameUpdate* temp = msg_.frameupdate_;
    msg_.frameupdate_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::bwapi::game::FrameUpdate& Message::frameupdate() const {
  // @@protoc_insertion_point(field_get:bwapi.message.Message.frameUpdate)
  return has_frameupdate()
      ? *msg_.frameupdate_
      : *reinterpret_cast< ::bwapi::game::FrameUpdate*>(&::bwapi::game::_FrameUpdate_default_instance_);
}
inline ::bwapi::game::FrameUpdate* Message::mutable_frameupdate() {
  if (!has_frameupdate()) {
    clear_msg();
    set_has_frameupdate();
    msg_.frameupdate_ = CreateMaybeMessage< ::bwapi::game::FrameUpdate >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:bwapi.message.Message.frameUpdate)
  return msg_.frameupdate_;
}

// .bwapi.game.EndOfQueue endOfQueue = 4;
inline bool Message::has_endofqueue() const {
  return msg_case() == kEndOfQueue;
}
inline void Message::set_has_endofqueue() {
  _oneof_case_[0] = kEndOfQueue;
}
inline const ::bwapi::game::EndOfQueue& Message::_internal_endofqueue() const {
  return *msg_.endofqueue_;
}
inline ::bwapi::game::EndOfQueue* Message::release_endofqueue() {
  // @@protoc_insertion_point(field_release:bwapi.message.Message.endOfQueue)
  if (has_endofqueue()) {
    clear_has_msg();
      ::bwapi::game::EndOfQueue* temp = msg_.endofqueue_;
    msg_.endofqueue_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::bwapi::game::EndOfQueue& Message::endofqueue() const {
  // @@protoc_insertion_point(field_get:bwapi.message.Message.endOfQueue)
  return has_endofqueue()
      ? *msg_.endofqueue_
      : *reinterpret_cast< ::bwapi::game::EndOfQueue*>(&::bwapi::game::_EndOfQueue_default_instance_);
}
inline ::bwapi::game::EndOfQueue* Message::mutable_endofqueue() {
  if (!has_endofqueue()) {
    clear_msg();
    set_has_endofqueue();
    msg_.endofqueue_ = CreateMaybeMessage< ::bwapi::game::EndOfQueue >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:bwapi.message.Message.endOfQueue)
  return msg_.endofqueue_;
}

// .bwapi.command.Command command = 5;
inline bool Message::has_command() const {
  return msg_case() == kCommand;
}
inline void Message::set_has_command() {
  _oneof_case_[0] = kCommand;
}
inline const ::bwapi::command::Command& Message::_internal_command() const {
  return *msg_.command_;
}
inline ::bwapi::command::Command* Message::release_command() {
  // @@protoc_insertion_point(field_release:bwapi.message.Message.command)
  if (has_command()) {
    clear_has_msg();
      ::bwapi::command::Command* temp = msg_.command_;
    msg_.command_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::bwapi::command::Command& Message::command() const {
  // @@protoc_insertion_point(field_get:bwapi.message.Message.command)
  return has_command()
      ? *msg_.command_
      : *reinterpret_cast< ::bwapi::command::Command*>(&::bwapi::command::_Command_default_instance_);
}
inline ::bwapi::command::Command* Message::mutable_command() {
  if (!has_command()) {
    clear_msg();
    set_has_command();
    msg_.command_ = CreateMaybeMessage< ::bwapi::command::Command >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:bwapi.message.Message.command)
  return msg_.command_;
}

inline bool Message::has_msg() const {
  return msg_case() != MSG_NOT_SET;
}
inline void Message::clear_has_msg() {
  _oneof_case_[0] = MSG_NOT_SET;
}
inline Message::MsgCase Message::msg_case() const {
  return Message::MsgCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace message
}  // namespace bwapi

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_message_2eproto
