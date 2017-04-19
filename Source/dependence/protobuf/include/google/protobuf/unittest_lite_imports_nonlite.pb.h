// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_lite_imports_nonlite.proto

#ifndef PROTOBUF_google_2fprotobuf_2funittest_5flite_5fimports_5fnonlite_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2funittest_5flite_5fimports_5fnonlite_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unittest.pb.h>
// @@protoc_insertion_point(includes)

namespace protobuf_unittest {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fprotobuf_2funittest_5flite_5fimports_5fnonlite_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2funittest_5flite_5fimports_5fnonlite_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5flite_5fimports_5fnonlite_2eproto();

class TestLiteImportsNonlite;

// ===================================================================

class TestLiteImportsNonlite : public ::google::protobuf::MessageLite {
 public:
  TestLiteImportsNonlite();
  virtual ~TestLiteImportsNonlite();

  TestLiteImportsNonlite(const TestLiteImportsNonlite& from);

  inline TestLiteImportsNonlite& operator=(const TestLiteImportsNonlite& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const TestLiteImportsNonlite& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const TestLiteImportsNonlite* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(TestLiteImportsNonlite* other);

  // implements Message ----------------------------------------------

  inline TestLiteImportsNonlite* New() const { return New(NULL); }

  TestLiteImportsNonlite* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const TestLiteImportsNonlite& from);
  void MergeFrom(const TestLiteImportsNonlite& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(TestLiteImportsNonlite* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .protobuf_unittest.TestAllTypes message = 1;
  bool has_message() const;
  void clear_message();
  static const int kMessageFieldNumber = 1;
  const ::protobuf_unittest::TestAllTypes& message() const;
  ::protobuf_unittest::TestAllTypes* mutable_message();
  ::protobuf_unittest::TestAllTypes* release_message();
  void set_allocated_message(::protobuf_unittest::TestAllTypes* message);

  // @@protoc_insertion_point(class_scope:protobuf_unittest.TestLiteImportsNonlite)
 private:
  inline void set_has_message();
  inline void clear_has_message();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::protobuf_unittest::TestAllTypes* message_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5flite_5fimports_5fnonlite_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5flite_5fimports_5fnonlite_2eproto();
  #endif
  friend void protobuf_AssignDesc_google_2fprotobuf_2funittest_5flite_5fimports_5fnonlite_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5flite_5fimports_5fnonlite_2eproto();

  void InitAsDefaultInstance();
  static TestLiteImportsNonlite* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// TestLiteImportsNonlite

// optional .protobuf_unittest.TestAllTypes message = 1;
inline bool TestLiteImportsNonlite::has_message() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestLiteImportsNonlite::set_has_message() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestLiteImportsNonlite::clear_has_message() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestLiteImportsNonlite::clear_message() {
  if (message_ != NULL) message_->::protobuf_unittest::TestAllTypes::Clear();
  clear_has_message();
}
inline const ::protobuf_unittest::TestAllTypes& TestLiteImportsNonlite::message() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.TestLiteImportsNonlite.message)
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return message_ != NULL ? *message_ : *default_instance().message_;
#else
  return message_ != NULL ? *message_ : *default_instance_->message_;
#endif
}
inline ::protobuf_unittest::TestAllTypes* TestLiteImportsNonlite::mutable_message() {
  set_has_message();
  if (message_ == NULL) {
    message_ = new ::protobuf_unittest::TestAllTypes;
  }
  // @@protoc_insertion_point(field_mutable:protobuf_unittest.TestLiteImportsNonlite.message)
  return message_;
}
inline ::protobuf_unittest::TestAllTypes* TestLiteImportsNonlite::release_message() {
  // @@protoc_insertion_point(field_release:protobuf_unittest.TestLiteImportsNonlite.message)
  clear_has_message();
  ::protobuf_unittest::TestAllTypes* temp = message_;
  message_ = NULL;
  return temp;
}
inline void TestLiteImportsNonlite::set_allocated_message(::protobuf_unittest::TestAllTypes* message) {
  delete message_;
  if (message != NULL && message->GetArena() != NULL) {
    ::protobuf_unittest::TestAllTypes* new_message = new ::protobuf_unittest::TestAllTypes;
    new_message->CopyFrom(*message);
    message = new_message;
  }
  message_ = message;
  if (message) {
    set_has_message();
  } else {
    clear_has_message();
  }
  // @@protoc_insertion_point(field_set_allocated:protobuf_unittest.TestLiteImportsNonlite.message)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2funittest_5flite_5fimports_5fnonlite_2eproto__INCLUDED
