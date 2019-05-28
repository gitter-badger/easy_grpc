// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef PROTOBUF_INCLUDED_test_2eproto
#define PROTOBUF_INCLUDED_test_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_test_2eproto 

namespace protobuf_test_2eproto {
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
}  // namespace protobuf_test_2eproto
namespace tests {
class TestReply;
class TestReplyDefaultTypeInternal;
extern TestReplyDefaultTypeInternal _TestReply_default_instance_;
class TestRequest;
class TestRequestDefaultTypeInternal;
extern TestRequestDefaultTypeInternal _TestRequest_default_instance_;
}  // namespace tests
namespace google {
namespace protobuf {
template<> ::tests::TestReply* Arena::CreateMaybeMessage<::tests::TestReply>(Arena*);
template<> ::tests::TestRequest* Arena::CreateMaybeMessage<::tests::TestRequest>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace tests {

// ===================================================================

class TestRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tests.TestRequest) */ {
 public:
  TestRequest();
  virtual ~TestRequest();

  TestRequest(const TestRequest& from);

  inline TestRequest& operator=(const TestRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestRequest(TestRequest&& from) noexcept
    : TestRequest() {
    *this = ::std::move(from);
  }

  inline TestRequest& operator=(TestRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestRequest* internal_default_instance() {
    return reinterpret_cast<const TestRequest*>(
               &_TestRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TestRequest* other);
  friend void swap(TestRequest& a, TestRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestRequest* New() const final {
    return CreateMaybeMessage<TestRequest>(NULL);
  }

  TestRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TestRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TestRequest& from);
  void MergeFrom(const TestRequest& from);
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
  void InternalSwap(TestRequest* other);
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

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:tests.TestRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_test_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TestReply : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tests.TestReply) */ {
 public:
  TestReply();
  virtual ~TestReply();

  TestReply(const TestReply& from);

  inline TestReply& operator=(const TestReply& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestReply(TestReply&& from) noexcept
    : TestReply() {
    *this = ::std::move(from);
  }

  inline TestReply& operator=(TestReply&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestReply* internal_default_instance() {
    return reinterpret_cast<const TestReply*>(
               &_TestReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(TestReply* other);
  friend void swap(TestReply& a, TestReply& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestReply* New() const final {
    return CreateMaybeMessage<TestReply>(NULL);
  }

  TestReply* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TestReply>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TestReply& from);
  void MergeFrom(const TestReply& from);
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
  void InternalSwap(TestReply* other);
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

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:tests.TestReply)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_test_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestRequest

// string name = 1;
inline void TestRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TestRequest::name() const {
  // @@protoc_insertion_point(field_get:tests.TestRequest.name)
  return name_.GetNoArena();
}
inline void TestRequest::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tests.TestRequest.name)
}
#if LANG_CXX11
inline void TestRequest::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tests.TestRequest.name)
}
#endif
inline void TestRequest::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tests.TestRequest.name)
}
inline void TestRequest::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tests.TestRequest.name)
}
inline ::std::string* TestRequest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tests.TestRequest.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TestRequest::release_name() {
  // @@protoc_insertion_point(field_release:tests.TestRequest.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TestRequest::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:tests.TestRequest.name)
}

// -------------------------------------------------------------------

// TestReply

// string name = 1;
inline void TestReply::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TestReply::name() const {
  // @@protoc_insertion_point(field_get:tests.TestReply.name)
  return name_.GetNoArena();
}
inline void TestReply::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tests.TestReply.name)
}
#if LANG_CXX11
inline void TestReply::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:tests.TestReply.name)
}
#endif
inline void TestReply::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tests.TestReply.name)
}
inline void TestReply::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tests.TestReply.name)
}
inline ::std::string* TestReply::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tests.TestReply.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TestReply::release_name() {
  // @@protoc_insertion_point(field_release:tests.TestReply.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TestReply::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:tests.TestReply.name)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tests

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_test_2eproto
