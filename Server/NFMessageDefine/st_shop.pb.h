// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: st_shop.proto

#ifndef PROTOBUF_INCLUDED_st_5fshop_2eproto
#define PROTOBUF_INCLUDED_st_5fshop_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_st_5fshop_2eproto 

namespace protobuf_st_5fshop_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_st_5fshop_2eproto
namespace NFMsg {
class buymoneyinfo;
class buymoneyinfoDefaultTypeInternal;
extern buymoneyinfoDefaultTypeInternal _buymoneyinfo_default_instance_;
class payinfo;
class payinfoDefaultTypeInternal;
extern payinfoDefaultTypeInternal _payinfo_default_instance_;
}  // namespace NFMsg
namespace google {
namespace protobuf {
template<> ::NFMsg::buymoneyinfo* Arena::CreateMaybeMessage<::NFMsg::buymoneyinfo>(Arena*);
template<> ::NFMsg::payinfo* Arena::CreateMaybeMessage<::NFMsg::payinfo>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace NFMsg {

// ===================================================================

class payinfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NFMsg.payinfo) */ {
 public:
  payinfo();
  virtual ~payinfo();

  payinfo(const payinfo& from);

  inline payinfo& operator=(const payinfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  payinfo(payinfo&& from) noexcept
    : payinfo() {
    *this = ::std::move(from);
  }

  inline payinfo& operator=(payinfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const payinfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const payinfo* internal_default_instance() {
    return reinterpret_cast<const payinfo*>(
               &_payinfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(payinfo* other);
  friend void swap(payinfo& a, payinfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline payinfo* New() const final {
    return CreateMaybeMessage<payinfo>(NULL);
  }

  payinfo* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<payinfo>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const payinfo& from);
  void MergeFrom(const payinfo& from);
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
  void InternalSwap(payinfo* other);
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

  // optional string description = 2;
  bool has_description() const;
  void clear_description();
  static const int kDescriptionFieldNumber = 2;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  #if LANG_CXX11
  void set_description(::std::string&& value);
  #endif
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // optional string adddes = 7;
  bool has_adddes() const;
  void clear_adddes();
  static const int kAdddesFieldNumber = 7;
  const ::std::string& adddes() const;
  void set_adddes(const ::std::string& value);
  #if LANG_CXX11
  void set_adddes(::std::string&& value);
  #endif
  void set_adddes(const char* value);
  void set_adddes(const char* value, size_t size);
  ::std::string* mutable_adddes();
  ::std::string* release_adddes();
  void set_allocated_adddes(::std::string* adddes);

  // optional int32 payid = 1;
  bool has_payid() const;
  void clear_payid();
  static const int kPayidFieldNumber = 1;
  ::google::protobuf::int32 payid() const;
  void set_payid(::google::protobuf::int32 value);

  // optional int32 paymoney = 3;
  bool has_paymoney() const;
  void clear_paymoney();
  static const int kPaymoneyFieldNumber = 3;
  ::google::protobuf::int32 paymoney() const;
  void set_paymoney(::google::protobuf::int32 value);

  // optional int32 getmoney = 4;
  bool has_getmoney() const;
  void clear_getmoney();
  static const int kGetmoneyFieldNumber = 4;
  ::google::protobuf::int32 getmoney() const;
  void set_getmoney(::google::protobuf::int32 value);

  // optional int32 addtype = 5;
  bool has_addtype() const;
  void clear_addtype();
  static const int kAddtypeFieldNumber = 5;
  ::google::protobuf::int32 addtype() const;
  void set_addtype(::google::protobuf::int32 value);

  // optional int32 addamount = 6;
  bool has_addamount() const;
  void clear_addamount();
  static const int kAddamountFieldNumber = 6;
  ::google::protobuf::int32 addamount() const;
  void set_addamount(::google::protobuf::int32 value);

  // optional int32 addtime = 8;
  bool has_addtime() const;
  void clear_addtime();
  static const int kAddtimeFieldNumber = 8;
  ::google::protobuf::int32 addtime() const;
  void set_addtime(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:NFMsg.payinfo)
 private:
  void set_has_payid();
  void clear_has_payid();
  void set_has_description();
  void clear_has_description();
  void set_has_paymoney();
  void clear_has_paymoney();
  void set_has_getmoney();
  void clear_has_getmoney();
  void set_has_addtype();
  void clear_has_addtype();
  void set_has_addamount();
  void clear_has_addamount();
  void set_has_adddes();
  void clear_has_adddes();
  void set_has_addtime();
  void clear_has_addtime();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::internal::ArenaStringPtr adddes_;
  ::google::protobuf::int32 payid_;
  ::google::protobuf::int32 paymoney_;
  ::google::protobuf::int32 getmoney_;
  ::google::protobuf::int32 addtype_;
  ::google::protobuf::int32 addamount_;
  ::google::protobuf::int32 addtime_;
  friend struct ::protobuf_st_5fshop_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class buymoneyinfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NFMsg.buymoneyinfo) */ {
 public:
  buymoneyinfo();
  virtual ~buymoneyinfo();

  buymoneyinfo(const buymoneyinfo& from);

  inline buymoneyinfo& operator=(const buymoneyinfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  buymoneyinfo(buymoneyinfo&& from) noexcept
    : buymoneyinfo() {
    *this = ::std::move(from);
  }

  inline buymoneyinfo& operator=(buymoneyinfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const buymoneyinfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const buymoneyinfo* internal_default_instance() {
    return reinterpret_cast<const buymoneyinfo*>(
               &_buymoneyinfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(buymoneyinfo* other);
  friend void swap(buymoneyinfo& a, buymoneyinfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline buymoneyinfo* New() const final {
    return CreateMaybeMessage<buymoneyinfo>(NULL);
  }

  buymoneyinfo* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<buymoneyinfo>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const buymoneyinfo& from);
  void MergeFrom(const buymoneyinfo& from);
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
  void InternalSwap(buymoneyinfo* other);
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

  // optional string channel = 6;
  bool has_channel() const;
  void clear_channel();
  static const int kChannelFieldNumber = 6;
  const ::std::string& channel() const;
  void set_channel(const ::std::string& value);
  #if LANG_CXX11
  void set_channel(::std::string&& value);
  #endif
  void set_channel(const char* value);
  void set_channel(const char* value, size_t size);
  ::std::string* mutable_channel();
  ::std::string* release_channel();
  void set_allocated_channel(::std::string* channel);

  // optional string sign = 7;
  bool has_sign() const;
  void clear_sign();
  static const int kSignFieldNumber = 7;
  const ::std::string& sign() const;
  void set_sign(const ::std::string& value);
  #if LANG_CXX11
  void set_sign(::std::string&& value);
  #endif
  void set_sign(const char* value);
  void set_sign(const char* value, size_t size);
  ::std::string* mutable_sign();
  ::std::string* release_sign();
  void set_allocated_sign(::std::string* sign);

  // optional int32 orderid = 1;
  bool has_orderid() const;
  void clear_orderid();
  static const int kOrderidFieldNumber = 1;
  ::google::protobuf::int32 orderid() const;
  void set_orderid(::google::protobuf::int32 value);

  // optional int32 userid = 2;
  bool has_userid() const;
  void clear_userid();
  static const int kUseridFieldNumber = 2;
  ::google::protobuf::int32 userid() const;
  void set_userid(::google::protobuf::int32 value);

  // optional int32 buyid = 3;
  bool has_buyid() const;
  void clear_buyid();
  static const int kBuyidFieldNumber = 3;
  ::google::protobuf::int32 buyid() const;
  void set_buyid(::google::protobuf::int32 value);

  // optional int32 timeid = 4;
  bool has_timeid() const;
  void clear_timeid();
  static const int kTimeidFieldNumber = 4;
  ::google::protobuf::int32 timeid() const;
  void set_timeid(::google::protobuf::int32 value);

  // optional int32 status = 5;
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 5;
  ::google::protobuf::int32 status() const;
  void set_status(::google::protobuf::int32 value);

  // optional int32 shoptype = 8;
  bool has_shoptype() const;
  void clear_shoptype();
  static const int kShoptypeFieldNumber = 8;
  ::google::protobuf::int32 shoptype() const;
  void set_shoptype(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:NFMsg.buymoneyinfo)
 private:
  void set_has_orderid();
  void clear_has_orderid();
  void set_has_userid();
  void clear_has_userid();
  void set_has_buyid();
  void clear_has_buyid();
  void set_has_timeid();
  void clear_has_timeid();
  void set_has_status();
  void clear_has_status();
  void set_has_channel();
  void clear_has_channel();
  void set_has_sign();
  void clear_has_sign();
  void set_has_shoptype();
  void clear_has_shoptype();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr channel_;
  ::google::protobuf::internal::ArenaStringPtr sign_;
  ::google::protobuf::int32 orderid_;
  ::google::protobuf::int32 userid_;
  ::google::protobuf::int32 buyid_;
  ::google::protobuf::int32 timeid_;
  ::google::protobuf::int32 status_;
  ::google::protobuf::int32 shoptype_;
  friend struct ::protobuf_st_5fshop_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// payinfo

// optional int32 payid = 1;
inline bool payinfo::has_payid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void payinfo::set_has_payid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void payinfo::clear_has_payid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void payinfo::clear_payid() {
  payid_ = 0;
  clear_has_payid();
}
inline ::google::protobuf::int32 payinfo::payid() const {
  // @@protoc_insertion_point(field_get:NFMsg.payinfo.payid)
  return payid_;
}
inline void payinfo::set_payid(::google::protobuf::int32 value) {
  set_has_payid();
  payid_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.payinfo.payid)
}

// optional string description = 2;
inline bool payinfo::has_description() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void payinfo::set_has_description() {
  _has_bits_[0] |= 0x00000001u;
}
inline void payinfo::clear_has_description() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void payinfo::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_description();
}
inline const ::std::string& payinfo::description() const {
  // @@protoc_insertion_point(field_get:NFMsg.payinfo.description)
  return description_.GetNoArena();
}
inline void payinfo::set_description(const ::std::string& value) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NFMsg.payinfo.description)
}
#if LANG_CXX11
inline void payinfo::set_description(::std::string&& value) {
  set_has_description();
  description_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NFMsg.payinfo.description)
}
#endif
inline void payinfo::set_description(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NFMsg.payinfo.description)
}
inline void payinfo::set_description(const char* value, size_t size) {
  set_has_description();
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NFMsg.payinfo.description)
}
inline ::std::string* payinfo::mutable_description() {
  set_has_description();
  // @@protoc_insertion_point(field_mutable:NFMsg.payinfo.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* payinfo::release_description() {
  // @@protoc_insertion_point(field_release:NFMsg.payinfo.description)
  if (!has_description()) {
    return NULL;
  }
  clear_has_description();
  return description_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void payinfo::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    set_has_description();
  } else {
    clear_has_description();
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:NFMsg.payinfo.description)
}

// optional int32 paymoney = 3;
inline bool payinfo::has_paymoney() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void payinfo::set_has_paymoney() {
  _has_bits_[0] |= 0x00000008u;
}
inline void payinfo::clear_has_paymoney() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void payinfo::clear_paymoney() {
  paymoney_ = 0;
  clear_has_paymoney();
}
inline ::google::protobuf::int32 payinfo::paymoney() const {
  // @@protoc_insertion_point(field_get:NFMsg.payinfo.paymoney)
  return paymoney_;
}
inline void payinfo::set_paymoney(::google::protobuf::int32 value) {
  set_has_paymoney();
  paymoney_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.payinfo.paymoney)
}

// optional int32 getmoney = 4;
inline bool payinfo::has_getmoney() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void payinfo::set_has_getmoney() {
  _has_bits_[0] |= 0x00000010u;
}
inline void payinfo::clear_has_getmoney() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void payinfo::clear_getmoney() {
  getmoney_ = 0;
  clear_has_getmoney();
}
inline ::google::protobuf::int32 payinfo::getmoney() const {
  // @@protoc_insertion_point(field_get:NFMsg.payinfo.getmoney)
  return getmoney_;
}
inline void payinfo::set_getmoney(::google::protobuf::int32 value) {
  set_has_getmoney();
  getmoney_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.payinfo.getmoney)
}

// optional int32 addtype = 5;
inline bool payinfo::has_addtype() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void payinfo::set_has_addtype() {
  _has_bits_[0] |= 0x00000020u;
}
inline void payinfo::clear_has_addtype() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void payinfo::clear_addtype() {
  addtype_ = 0;
  clear_has_addtype();
}
inline ::google::protobuf::int32 payinfo::addtype() const {
  // @@protoc_insertion_point(field_get:NFMsg.payinfo.addtype)
  return addtype_;
}
inline void payinfo::set_addtype(::google::protobuf::int32 value) {
  set_has_addtype();
  addtype_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.payinfo.addtype)
}

// optional int32 addamount = 6;
inline bool payinfo::has_addamount() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void payinfo::set_has_addamount() {
  _has_bits_[0] |= 0x00000040u;
}
inline void payinfo::clear_has_addamount() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void payinfo::clear_addamount() {
  addamount_ = 0;
  clear_has_addamount();
}
inline ::google::protobuf::int32 payinfo::addamount() const {
  // @@protoc_insertion_point(field_get:NFMsg.payinfo.addamount)
  return addamount_;
}
inline void payinfo::set_addamount(::google::protobuf::int32 value) {
  set_has_addamount();
  addamount_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.payinfo.addamount)
}

// optional string adddes = 7;
inline bool payinfo::has_adddes() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void payinfo::set_has_adddes() {
  _has_bits_[0] |= 0x00000002u;
}
inline void payinfo::clear_has_adddes() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void payinfo::clear_adddes() {
  adddes_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_adddes();
}
inline const ::std::string& payinfo::adddes() const {
  // @@protoc_insertion_point(field_get:NFMsg.payinfo.adddes)
  return adddes_.GetNoArena();
}
inline void payinfo::set_adddes(const ::std::string& value) {
  set_has_adddes();
  adddes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NFMsg.payinfo.adddes)
}
#if LANG_CXX11
inline void payinfo::set_adddes(::std::string&& value) {
  set_has_adddes();
  adddes_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NFMsg.payinfo.adddes)
}
#endif
inline void payinfo::set_adddes(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_adddes();
  adddes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NFMsg.payinfo.adddes)
}
inline void payinfo::set_adddes(const char* value, size_t size) {
  set_has_adddes();
  adddes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NFMsg.payinfo.adddes)
}
inline ::std::string* payinfo::mutable_adddes() {
  set_has_adddes();
  // @@protoc_insertion_point(field_mutable:NFMsg.payinfo.adddes)
  return adddes_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* payinfo::release_adddes() {
  // @@protoc_insertion_point(field_release:NFMsg.payinfo.adddes)
  if (!has_adddes()) {
    return NULL;
  }
  clear_has_adddes();
  return adddes_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void payinfo::set_allocated_adddes(::std::string* adddes) {
  if (adddes != NULL) {
    set_has_adddes();
  } else {
    clear_has_adddes();
  }
  adddes_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), adddes);
  // @@protoc_insertion_point(field_set_allocated:NFMsg.payinfo.adddes)
}

// optional int32 addtime = 8;
inline bool payinfo::has_addtime() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void payinfo::set_has_addtime() {
  _has_bits_[0] |= 0x00000080u;
}
inline void payinfo::clear_has_addtime() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void payinfo::clear_addtime() {
  addtime_ = 0;
  clear_has_addtime();
}
inline ::google::protobuf::int32 payinfo::addtime() const {
  // @@protoc_insertion_point(field_get:NFMsg.payinfo.addtime)
  return addtime_;
}
inline void payinfo::set_addtime(::google::protobuf::int32 value) {
  set_has_addtime();
  addtime_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.payinfo.addtime)
}

// -------------------------------------------------------------------

// buymoneyinfo

// optional int32 orderid = 1;
inline bool buymoneyinfo::has_orderid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void buymoneyinfo::set_has_orderid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void buymoneyinfo::clear_has_orderid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void buymoneyinfo::clear_orderid() {
  orderid_ = 0;
  clear_has_orderid();
}
inline ::google::protobuf::int32 buymoneyinfo::orderid() const {
  // @@protoc_insertion_point(field_get:NFMsg.buymoneyinfo.orderid)
  return orderid_;
}
inline void buymoneyinfo::set_orderid(::google::protobuf::int32 value) {
  set_has_orderid();
  orderid_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.buymoneyinfo.orderid)
}

// optional int32 userid = 2;
inline bool buymoneyinfo::has_userid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void buymoneyinfo::set_has_userid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void buymoneyinfo::clear_has_userid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void buymoneyinfo::clear_userid() {
  userid_ = 0;
  clear_has_userid();
}
inline ::google::protobuf::int32 buymoneyinfo::userid() const {
  // @@protoc_insertion_point(field_get:NFMsg.buymoneyinfo.userid)
  return userid_;
}
inline void buymoneyinfo::set_userid(::google::protobuf::int32 value) {
  set_has_userid();
  userid_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.buymoneyinfo.userid)
}

// optional int32 buyid = 3;
inline bool buymoneyinfo::has_buyid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void buymoneyinfo::set_has_buyid() {
  _has_bits_[0] |= 0x00000010u;
}
inline void buymoneyinfo::clear_has_buyid() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void buymoneyinfo::clear_buyid() {
  buyid_ = 0;
  clear_has_buyid();
}
inline ::google::protobuf::int32 buymoneyinfo::buyid() const {
  // @@protoc_insertion_point(field_get:NFMsg.buymoneyinfo.buyid)
  return buyid_;
}
inline void buymoneyinfo::set_buyid(::google::protobuf::int32 value) {
  set_has_buyid();
  buyid_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.buymoneyinfo.buyid)
}

// optional int32 timeid = 4;
inline bool buymoneyinfo::has_timeid() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void buymoneyinfo::set_has_timeid() {
  _has_bits_[0] |= 0x00000020u;
}
inline void buymoneyinfo::clear_has_timeid() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void buymoneyinfo::clear_timeid() {
  timeid_ = 0;
  clear_has_timeid();
}
inline ::google::protobuf::int32 buymoneyinfo::timeid() const {
  // @@protoc_insertion_point(field_get:NFMsg.buymoneyinfo.timeid)
  return timeid_;
}
inline void buymoneyinfo::set_timeid(::google::protobuf::int32 value) {
  set_has_timeid();
  timeid_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.buymoneyinfo.timeid)
}

// optional int32 status = 5;
inline bool buymoneyinfo::has_status() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void buymoneyinfo::set_has_status() {
  _has_bits_[0] |= 0x00000040u;
}
inline void buymoneyinfo::clear_has_status() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void buymoneyinfo::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::google::protobuf::int32 buymoneyinfo::status() const {
  // @@protoc_insertion_point(field_get:NFMsg.buymoneyinfo.status)
  return status_;
}
inline void buymoneyinfo::set_status(::google::protobuf::int32 value) {
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.buymoneyinfo.status)
}

// optional string channel = 6;
inline bool buymoneyinfo::has_channel() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void buymoneyinfo::set_has_channel() {
  _has_bits_[0] |= 0x00000001u;
}
inline void buymoneyinfo::clear_has_channel() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void buymoneyinfo::clear_channel() {
  channel_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_channel();
}
inline const ::std::string& buymoneyinfo::channel() const {
  // @@protoc_insertion_point(field_get:NFMsg.buymoneyinfo.channel)
  return channel_.GetNoArena();
}
inline void buymoneyinfo::set_channel(const ::std::string& value) {
  set_has_channel();
  channel_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NFMsg.buymoneyinfo.channel)
}
#if LANG_CXX11
inline void buymoneyinfo::set_channel(::std::string&& value) {
  set_has_channel();
  channel_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NFMsg.buymoneyinfo.channel)
}
#endif
inline void buymoneyinfo::set_channel(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_channel();
  channel_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NFMsg.buymoneyinfo.channel)
}
inline void buymoneyinfo::set_channel(const char* value, size_t size) {
  set_has_channel();
  channel_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NFMsg.buymoneyinfo.channel)
}
inline ::std::string* buymoneyinfo::mutable_channel() {
  set_has_channel();
  // @@protoc_insertion_point(field_mutable:NFMsg.buymoneyinfo.channel)
  return channel_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* buymoneyinfo::release_channel() {
  // @@protoc_insertion_point(field_release:NFMsg.buymoneyinfo.channel)
  if (!has_channel()) {
    return NULL;
  }
  clear_has_channel();
  return channel_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void buymoneyinfo::set_allocated_channel(::std::string* channel) {
  if (channel != NULL) {
    set_has_channel();
  } else {
    clear_has_channel();
  }
  channel_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), channel);
  // @@protoc_insertion_point(field_set_allocated:NFMsg.buymoneyinfo.channel)
}

// optional string sign = 7;
inline bool buymoneyinfo::has_sign() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void buymoneyinfo::set_has_sign() {
  _has_bits_[0] |= 0x00000002u;
}
inline void buymoneyinfo::clear_has_sign() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void buymoneyinfo::clear_sign() {
  sign_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_sign();
}
inline const ::std::string& buymoneyinfo::sign() const {
  // @@protoc_insertion_point(field_get:NFMsg.buymoneyinfo.sign)
  return sign_.GetNoArena();
}
inline void buymoneyinfo::set_sign(const ::std::string& value) {
  set_has_sign();
  sign_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NFMsg.buymoneyinfo.sign)
}
#if LANG_CXX11
inline void buymoneyinfo::set_sign(::std::string&& value) {
  set_has_sign();
  sign_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NFMsg.buymoneyinfo.sign)
}
#endif
inline void buymoneyinfo::set_sign(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_sign();
  sign_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NFMsg.buymoneyinfo.sign)
}
inline void buymoneyinfo::set_sign(const char* value, size_t size) {
  set_has_sign();
  sign_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NFMsg.buymoneyinfo.sign)
}
inline ::std::string* buymoneyinfo::mutable_sign() {
  set_has_sign();
  // @@protoc_insertion_point(field_mutable:NFMsg.buymoneyinfo.sign)
  return sign_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* buymoneyinfo::release_sign() {
  // @@protoc_insertion_point(field_release:NFMsg.buymoneyinfo.sign)
  if (!has_sign()) {
    return NULL;
  }
  clear_has_sign();
  return sign_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void buymoneyinfo::set_allocated_sign(::std::string* sign) {
  if (sign != NULL) {
    set_has_sign();
  } else {
    clear_has_sign();
  }
  sign_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sign);
  // @@protoc_insertion_point(field_set_allocated:NFMsg.buymoneyinfo.sign)
}

// optional int32 shoptype = 8;
inline bool buymoneyinfo::has_shoptype() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void buymoneyinfo::set_has_shoptype() {
  _has_bits_[0] |= 0x00000080u;
}
inline void buymoneyinfo::clear_has_shoptype() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void buymoneyinfo::clear_shoptype() {
  shoptype_ = 0;
  clear_has_shoptype();
}
inline ::google::protobuf::int32 buymoneyinfo::shoptype() const {
  // @@protoc_insertion_point(field_get:NFMsg.buymoneyinfo.shoptype)
  return shoptype_;
}
inline void buymoneyinfo::set_shoptype(::google::protobuf::int32 value) {
  set_has_shoptype();
  shoptype_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.buymoneyinfo.shoptype)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace NFMsg

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_st_5fshop_2eproto