// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtoNPCSeller.proto

#ifndef PROTOBUF_ProtoNPCSeller_2eproto__INCLUDED
#define PROTOBUF_ProtoNPCSeller_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "DataCommon.pb.h"
// @@protoc_insertion_point(includes)

namespace ProtoNPCSeller {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ProtoNPCSeller_2eproto();
void protobuf_AssignDesc_ProtoNPCSeller_2eproto();
void protobuf_ShutdownFile_ProtoNPCSeller_2eproto();

class NPCSellerCPP;
class GetPropsDiscountReq;
class GetPropsDiscountResp;
class ResponseNPCSellerReq;
class ResponseNPCSellerResp;
class ChangeNPCSellerStatusReq;
class ChangeNPCSellerStatusResp;
class PushNPCSellerInfo;

// ===================================================================

class NPCSellerCPP : public ::google::protobuf::Message {
 public:
  NPCSellerCPP();
  virtual ~NPCSellerCPP();

  NPCSellerCPP(const NPCSellerCPP& from);

  inline NPCSellerCPP& operator=(const NPCSellerCPP& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NPCSellerCPP& default_instance();

  void Swap(NPCSellerCPP* other);

  // implements Message ----------------------------------------------

  NPCSellerCPP* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NPCSellerCPP& from);
  void MergeFrom(const NPCSellerCPP& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 propsId = 1;
  inline bool has_propsid() const;
  inline void clear_propsid();
  static const int kPropsIdFieldNumber = 1;
  inline ::google::protobuf::uint32 propsid() const;
  inline void set_propsid(::google::protobuf::uint32 value);

  // required uint32 propsCnt = 2;
  inline bool has_propscnt() const;
  inline void clear_propscnt();
  static const int kPropsCntFieldNumber = 2;
  inline ::google::protobuf::uint32 propscnt() const;
  inline void set_propscnt(::google::protobuf::uint32 value);

  // required uint32 propsDiscount = 3;
  inline bool has_propsdiscount() const;
  inline void clear_propsdiscount();
  static const int kPropsDiscountFieldNumber = 3;
  inline ::google::protobuf::uint32 propsdiscount() const;
  inline void set_propsdiscount(::google::protobuf::uint32 value);

  // required uint32 npcNextVisitTs = 4;
  inline bool has_npcnextvisitts() const;
  inline void clear_npcnextvisitts();
  static const int kNpcNextVisitTsFieldNumber = 4;
  inline ::google::protobuf::uint32 npcnextvisitts() const;
  inline void set_npcnextvisitts(::google::protobuf::uint32 value);

  // required uint32 npcSellerStatus = 5;
  inline bool has_npcsellerstatus() const;
  inline void clear_npcsellerstatus();
  static const int kNpcSellerStatusFieldNumber = 5;
  inline ::google::protobuf::uint32 npcsellerstatus() const;
  inline void set_npcsellerstatus(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:ProtoNPCSeller.NPCSellerCPP)
 private:
  inline void set_has_propsid();
  inline void clear_has_propsid();
  inline void set_has_propscnt();
  inline void clear_has_propscnt();
  inline void set_has_propsdiscount();
  inline void clear_has_propsdiscount();
  inline void set_has_npcnextvisitts();
  inline void clear_has_npcnextvisitts();
  inline void set_has_npcsellerstatus();
  inline void clear_has_npcsellerstatus();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 propsid_;
  ::google::protobuf::uint32 propscnt_;
  ::google::protobuf::uint32 propsdiscount_;
  ::google::protobuf::uint32 npcnextvisitts_;
  ::google::protobuf::uint32 npcsellerstatus_;
  friend void  protobuf_AddDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_AssignDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_ShutdownFile_ProtoNPCSeller_2eproto();

  void InitAsDefaultInstance();
  static NPCSellerCPP* default_instance_;
};
// -------------------------------------------------------------------

class GetPropsDiscountReq : public ::google::protobuf::Message {
 public:
  GetPropsDiscountReq();
  virtual ~GetPropsDiscountReq();

  GetPropsDiscountReq(const GetPropsDiscountReq& from);

  inline GetPropsDiscountReq& operator=(const GetPropsDiscountReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GetPropsDiscountReq& default_instance();

  void Swap(GetPropsDiscountReq* other);

  // implements Message ----------------------------------------------

  GetPropsDiscountReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetPropsDiscountReq& from);
  void MergeFrom(const GetPropsDiscountReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:ProtoNPCSeller.GetPropsDiscountReq)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_AssignDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_ShutdownFile_ProtoNPCSeller_2eproto();

  void InitAsDefaultInstance();
  static GetPropsDiscountReq* default_instance_;
};
// -------------------------------------------------------------------

class GetPropsDiscountResp : public ::google::protobuf::Message {
 public:
  GetPropsDiscountResp();
  virtual ~GetPropsDiscountResp();

  GetPropsDiscountResp(const GetPropsDiscountResp& from);

  inline GetPropsDiscountResp& operator=(const GetPropsDiscountResp& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GetPropsDiscountResp& default_instance();

  void Swap(GetPropsDiscountResp* other);

  // implements Message ----------------------------------------------

  GetPropsDiscountResp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetPropsDiscountResp& from);
  void MergeFrom(const GetPropsDiscountResp& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .ProtoNPCSeller.NPCSellerCPP npcSeller = 1;
  inline bool has_npcseller() const;
  inline void clear_npcseller();
  static const int kNpcSellerFieldNumber = 1;
  inline const ::ProtoNPCSeller::NPCSellerCPP& npcseller() const;
  inline ::ProtoNPCSeller::NPCSellerCPP* mutable_npcseller();
  inline ::ProtoNPCSeller::NPCSellerCPP* release_npcseller();
  inline void set_allocated_npcseller(::ProtoNPCSeller::NPCSellerCPP* npcseller);

  // @@protoc_insertion_point(class_scope:ProtoNPCSeller.GetPropsDiscountResp)
 private:
  inline void set_has_npcseller();
  inline void clear_has_npcseller();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::ProtoNPCSeller::NPCSellerCPP* npcseller_;
  friend void  protobuf_AddDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_AssignDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_ShutdownFile_ProtoNPCSeller_2eproto();

  void InitAsDefaultInstance();
  static GetPropsDiscountResp* default_instance_;
};
// -------------------------------------------------------------------

class ResponseNPCSellerReq : public ::google::protobuf::Message {
 public:
  ResponseNPCSellerReq();
  virtual ~ResponseNPCSellerReq();

  ResponseNPCSellerReq(const ResponseNPCSellerReq& from);

  inline ResponseNPCSellerReq& operator=(const ResponseNPCSellerReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResponseNPCSellerReq& default_instance();

  void Swap(ResponseNPCSellerReq* other);

  // implements Message ----------------------------------------------

  ResponseNPCSellerReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ResponseNPCSellerReq& from);
  void MergeFrom(const ResponseNPCSellerReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 responseFlag = 1;
  inline bool has_responseflag() const;
  inline void clear_responseflag();
  static const int kResponseFlagFieldNumber = 1;
  inline ::google::protobuf::uint32 responseflag() const;
  inline void set_responseflag(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:ProtoNPCSeller.ResponseNPCSellerReq)
 private:
  inline void set_has_responseflag();
  inline void clear_has_responseflag();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 responseflag_;
  friend void  protobuf_AddDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_AssignDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_ShutdownFile_ProtoNPCSeller_2eproto();

  void InitAsDefaultInstance();
  static ResponseNPCSellerReq* default_instance_;
};
// -------------------------------------------------------------------

class ResponseNPCSellerResp : public ::google::protobuf::Message {
 public:
  ResponseNPCSellerResp();
  virtual ~ResponseNPCSellerResp();

  ResponseNPCSellerResp(const ResponseNPCSellerResp& from);

  inline ResponseNPCSellerResp& operator=(const ResponseNPCSellerResp& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResponseNPCSellerResp& default_instance();

  void Swap(ResponseNPCSellerResp* other);

  // implements Message ----------------------------------------------

  ResponseNPCSellerResp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ResponseNPCSellerResp& from);
  void MergeFrom(const ResponseNPCSellerResp& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .ProtoNPCSeller.NPCSellerCPP npcSeller = 1;
  inline bool has_npcseller() const;
  inline void clear_npcseller();
  static const int kNpcSellerFieldNumber = 1;
  inline const ::ProtoNPCSeller::NPCSellerCPP& npcseller() const;
  inline ::ProtoNPCSeller::NPCSellerCPP* mutable_npcseller();
  inline ::ProtoNPCSeller::NPCSellerCPP* release_npcseller();
  inline void set_allocated_npcseller(::ProtoNPCSeller::NPCSellerCPP* npcseller);

  // optional .DataCommon.CommonItemsCPP commons = 2;
  inline bool has_commons() const;
  inline void clear_commons();
  static const int kCommonsFieldNumber = 2;
  inline const ::DataCommon::CommonItemsCPP& commons() const;
  inline ::DataCommon::CommonItemsCPP* mutable_commons();
  inline ::DataCommon::CommonItemsCPP* release_commons();
  inline void set_allocated_commons(::DataCommon::CommonItemsCPP* commons);

  // @@protoc_insertion_point(class_scope:ProtoNPCSeller.ResponseNPCSellerResp)
 private:
  inline void set_has_npcseller();
  inline void clear_has_npcseller();
  inline void set_has_commons();
  inline void clear_has_commons();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::ProtoNPCSeller::NPCSellerCPP* npcseller_;
  ::DataCommon::CommonItemsCPP* commons_;
  friend void  protobuf_AddDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_AssignDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_ShutdownFile_ProtoNPCSeller_2eproto();

  void InitAsDefaultInstance();
  static ResponseNPCSellerResp* default_instance_;
};
// -------------------------------------------------------------------

class ChangeNPCSellerStatusReq : public ::google::protobuf::Message {
 public:
  ChangeNPCSellerStatusReq();
  virtual ~ChangeNPCSellerStatusReq();

  ChangeNPCSellerStatusReq(const ChangeNPCSellerStatusReq& from);

  inline ChangeNPCSellerStatusReq& operator=(const ChangeNPCSellerStatusReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ChangeNPCSellerStatusReq& default_instance();

  void Swap(ChangeNPCSellerStatusReq* other);

  // implements Message ----------------------------------------------

  ChangeNPCSellerStatusReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChangeNPCSellerStatusReq& from);
  void MergeFrom(const ChangeNPCSellerStatusReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:ProtoNPCSeller.ChangeNPCSellerStatusReq)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_AssignDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_ShutdownFile_ProtoNPCSeller_2eproto();

  void InitAsDefaultInstance();
  static ChangeNPCSellerStatusReq* default_instance_;
};
// -------------------------------------------------------------------

class ChangeNPCSellerStatusResp : public ::google::protobuf::Message {
 public:
  ChangeNPCSellerStatusResp();
  virtual ~ChangeNPCSellerStatusResp();

  ChangeNPCSellerStatusResp(const ChangeNPCSellerStatusResp& from);

  inline ChangeNPCSellerStatusResp& operator=(const ChangeNPCSellerStatusResp& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ChangeNPCSellerStatusResp& default_instance();

  void Swap(ChangeNPCSellerStatusResp* other);

  // implements Message ----------------------------------------------

  ChangeNPCSellerStatusResp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ChangeNPCSellerStatusResp& from);
  void MergeFrom(const ChangeNPCSellerStatusResp& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .ProtoNPCSeller.NPCSellerCPP npcSeller = 1;
  inline bool has_npcseller() const;
  inline void clear_npcseller();
  static const int kNpcSellerFieldNumber = 1;
  inline const ::ProtoNPCSeller::NPCSellerCPP& npcseller() const;
  inline ::ProtoNPCSeller::NPCSellerCPP* mutable_npcseller();
  inline ::ProtoNPCSeller::NPCSellerCPP* release_npcseller();
  inline void set_allocated_npcseller(::ProtoNPCSeller::NPCSellerCPP* npcseller);

  // @@protoc_insertion_point(class_scope:ProtoNPCSeller.ChangeNPCSellerStatusResp)
 private:
  inline void set_has_npcseller();
  inline void clear_has_npcseller();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::ProtoNPCSeller::NPCSellerCPP* npcseller_;
  friend void  protobuf_AddDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_AssignDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_ShutdownFile_ProtoNPCSeller_2eproto();

  void InitAsDefaultInstance();
  static ChangeNPCSellerStatusResp* default_instance_;
};
// -------------------------------------------------------------------

class PushNPCSellerInfo : public ::google::protobuf::Message {
 public:
  PushNPCSellerInfo();
  virtual ~PushNPCSellerInfo();

  PushNPCSellerInfo(const PushNPCSellerInfo& from);

  inline PushNPCSellerInfo& operator=(const PushNPCSellerInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PushNPCSellerInfo& default_instance();

  void Swap(PushNPCSellerInfo* other);

  // implements Message ----------------------------------------------

  PushNPCSellerInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PushNPCSellerInfo& from);
  void MergeFrom(const PushNPCSellerInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .ProtoNPCSeller.NPCSellerCPP npcSeller = 1;
  inline bool has_npcseller() const;
  inline void clear_npcseller();
  static const int kNpcSellerFieldNumber = 1;
  inline const ::ProtoNPCSeller::NPCSellerCPP& npcseller() const;
  inline ::ProtoNPCSeller::NPCSellerCPP* mutable_npcseller();
  inline ::ProtoNPCSeller::NPCSellerCPP* release_npcseller();
  inline void set_allocated_npcseller(::ProtoNPCSeller::NPCSellerCPP* npcseller);

  // @@protoc_insertion_point(class_scope:ProtoNPCSeller.PushNPCSellerInfo)
 private:
  inline void set_has_npcseller();
  inline void clear_has_npcseller();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::ProtoNPCSeller::NPCSellerCPP* npcseller_;
  friend void  protobuf_AddDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_AssignDesc_ProtoNPCSeller_2eproto();
  friend void protobuf_ShutdownFile_ProtoNPCSeller_2eproto();

  void InitAsDefaultInstance();
  static PushNPCSellerInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// NPCSellerCPP

// required uint32 propsId = 1;
inline bool NPCSellerCPP::has_propsid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NPCSellerCPP::set_has_propsid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NPCSellerCPP::clear_has_propsid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NPCSellerCPP::clear_propsid() {
  propsid_ = 0u;
  clear_has_propsid();
}
inline ::google::protobuf::uint32 NPCSellerCPP::propsid() const {
  // @@protoc_insertion_point(field_get:ProtoNPCSeller.NPCSellerCPP.propsId)
  return propsid_;
}
inline void NPCSellerCPP::set_propsid(::google::protobuf::uint32 value) {
  set_has_propsid();
  propsid_ = value;
  // @@protoc_insertion_point(field_set:ProtoNPCSeller.NPCSellerCPP.propsId)
}

// required uint32 propsCnt = 2;
inline bool NPCSellerCPP::has_propscnt() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NPCSellerCPP::set_has_propscnt() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NPCSellerCPP::clear_has_propscnt() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NPCSellerCPP::clear_propscnt() {
  propscnt_ = 0u;
  clear_has_propscnt();
}
inline ::google::protobuf::uint32 NPCSellerCPP::propscnt() const {
  // @@protoc_insertion_point(field_get:ProtoNPCSeller.NPCSellerCPP.propsCnt)
  return propscnt_;
}
inline void NPCSellerCPP::set_propscnt(::google::protobuf::uint32 value) {
  set_has_propscnt();
  propscnt_ = value;
  // @@protoc_insertion_point(field_set:ProtoNPCSeller.NPCSellerCPP.propsCnt)
}

// required uint32 propsDiscount = 3;
inline bool NPCSellerCPP::has_propsdiscount() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NPCSellerCPP::set_has_propsdiscount() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NPCSellerCPP::clear_has_propsdiscount() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NPCSellerCPP::clear_propsdiscount() {
  propsdiscount_ = 0u;
  clear_has_propsdiscount();
}
inline ::google::protobuf::uint32 NPCSellerCPP::propsdiscount() const {
  // @@protoc_insertion_point(field_get:ProtoNPCSeller.NPCSellerCPP.propsDiscount)
  return propsdiscount_;
}
inline void NPCSellerCPP::set_propsdiscount(::google::protobuf::uint32 value) {
  set_has_propsdiscount();
  propsdiscount_ = value;
  // @@protoc_insertion_point(field_set:ProtoNPCSeller.NPCSellerCPP.propsDiscount)
}

// required uint32 npcNextVisitTs = 4;
inline bool NPCSellerCPP::has_npcnextvisitts() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void NPCSellerCPP::set_has_npcnextvisitts() {
  _has_bits_[0] |= 0x00000008u;
}
inline void NPCSellerCPP::clear_has_npcnextvisitts() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void NPCSellerCPP::clear_npcnextvisitts() {
  npcnextvisitts_ = 0u;
  clear_has_npcnextvisitts();
}
inline ::google::protobuf::uint32 NPCSellerCPP::npcnextvisitts() const {
  // @@protoc_insertion_point(field_get:ProtoNPCSeller.NPCSellerCPP.npcNextVisitTs)
  return npcnextvisitts_;
}
inline void NPCSellerCPP::set_npcnextvisitts(::google::protobuf::uint32 value) {
  set_has_npcnextvisitts();
  npcnextvisitts_ = value;
  // @@protoc_insertion_point(field_set:ProtoNPCSeller.NPCSellerCPP.npcNextVisitTs)
}

// required uint32 npcSellerStatus = 5;
inline bool NPCSellerCPP::has_npcsellerstatus() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void NPCSellerCPP::set_has_npcsellerstatus() {
  _has_bits_[0] |= 0x00000010u;
}
inline void NPCSellerCPP::clear_has_npcsellerstatus() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void NPCSellerCPP::clear_npcsellerstatus() {
  npcsellerstatus_ = 0u;
  clear_has_npcsellerstatus();
}
inline ::google::protobuf::uint32 NPCSellerCPP::npcsellerstatus() const {
  // @@protoc_insertion_point(field_get:ProtoNPCSeller.NPCSellerCPP.npcSellerStatus)
  return npcsellerstatus_;
}
inline void NPCSellerCPP::set_npcsellerstatus(::google::protobuf::uint32 value) {
  set_has_npcsellerstatus();
  npcsellerstatus_ = value;
  // @@protoc_insertion_point(field_set:ProtoNPCSeller.NPCSellerCPP.npcSellerStatus)
}

// -------------------------------------------------------------------

// GetPropsDiscountReq

// -------------------------------------------------------------------

// GetPropsDiscountResp

// required .ProtoNPCSeller.NPCSellerCPP npcSeller = 1;
inline bool GetPropsDiscountResp::has_npcseller() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetPropsDiscountResp::set_has_npcseller() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetPropsDiscountResp::clear_has_npcseller() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetPropsDiscountResp::clear_npcseller() {
  if (npcseller_ != NULL) npcseller_->::ProtoNPCSeller::NPCSellerCPP::Clear();
  clear_has_npcseller();
}
inline const ::ProtoNPCSeller::NPCSellerCPP& GetPropsDiscountResp::npcseller() const {
  // @@protoc_insertion_point(field_get:ProtoNPCSeller.GetPropsDiscountResp.npcSeller)
  return npcseller_ != NULL ? *npcseller_ : *default_instance_->npcseller_;
}
inline ::ProtoNPCSeller::NPCSellerCPP* GetPropsDiscountResp::mutable_npcseller() {
  set_has_npcseller();
  if (npcseller_ == NULL) npcseller_ = new ::ProtoNPCSeller::NPCSellerCPP;
  // @@protoc_insertion_point(field_mutable:ProtoNPCSeller.GetPropsDiscountResp.npcSeller)
  return npcseller_;
}
inline ::ProtoNPCSeller::NPCSellerCPP* GetPropsDiscountResp::release_npcseller() {
  clear_has_npcseller();
  ::ProtoNPCSeller::NPCSellerCPP* temp = npcseller_;
  npcseller_ = NULL;
  return temp;
}
inline void GetPropsDiscountResp::set_allocated_npcseller(::ProtoNPCSeller::NPCSellerCPP* npcseller) {
  delete npcseller_;
  npcseller_ = npcseller;
  if (npcseller) {
    set_has_npcseller();
  } else {
    clear_has_npcseller();
  }
  // @@protoc_insertion_point(field_set_allocated:ProtoNPCSeller.GetPropsDiscountResp.npcSeller)
}

// -------------------------------------------------------------------

// ResponseNPCSellerReq

// required uint32 responseFlag = 1;
inline bool ResponseNPCSellerReq::has_responseflag() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ResponseNPCSellerReq::set_has_responseflag() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ResponseNPCSellerReq::clear_has_responseflag() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ResponseNPCSellerReq::clear_responseflag() {
  responseflag_ = 0u;
  clear_has_responseflag();
}
inline ::google::protobuf::uint32 ResponseNPCSellerReq::responseflag() const {
  // @@protoc_insertion_point(field_get:ProtoNPCSeller.ResponseNPCSellerReq.responseFlag)
  return responseflag_;
}
inline void ResponseNPCSellerReq::set_responseflag(::google::protobuf::uint32 value) {
  set_has_responseflag();
  responseflag_ = value;
  // @@protoc_insertion_point(field_set:ProtoNPCSeller.ResponseNPCSellerReq.responseFlag)
}

// -------------------------------------------------------------------

// ResponseNPCSellerResp

// required .ProtoNPCSeller.NPCSellerCPP npcSeller = 1;
inline bool ResponseNPCSellerResp::has_npcseller() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ResponseNPCSellerResp::set_has_npcseller() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ResponseNPCSellerResp::clear_has_npcseller() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ResponseNPCSellerResp::clear_npcseller() {
  if (npcseller_ != NULL) npcseller_->::ProtoNPCSeller::NPCSellerCPP::Clear();
  clear_has_npcseller();
}
inline const ::ProtoNPCSeller::NPCSellerCPP& ResponseNPCSellerResp::npcseller() const {
  // @@protoc_insertion_point(field_get:ProtoNPCSeller.ResponseNPCSellerResp.npcSeller)
  return npcseller_ != NULL ? *npcseller_ : *default_instance_->npcseller_;
}
inline ::ProtoNPCSeller::NPCSellerCPP* ResponseNPCSellerResp::mutable_npcseller() {
  set_has_npcseller();
  if (npcseller_ == NULL) npcseller_ = new ::ProtoNPCSeller::NPCSellerCPP;
  // @@protoc_insertion_point(field_mutable:ProtoNPCSeller.ResponseNPCSellerResp.npcSeller)
  return npcseller_;
}
inline ::ProtoNPCSeller::NPCSellerCPP* ResponseNPCSellerResp::release_npcseller() {
  clear_has_npcseller();
  ::ProtoNPCSeller::NPCSellerCPP* temp = npcseller_;
  npcseller_ = NULL;
  return temp;
}
inline void ResponseNPCSellerResp::set_allocated_npcseller(::ProtoNPCSeller::NPCSellerCPP* npcseller) {
  delete npcseller_;
  npcseller_ = npcseller;
  if (npcseller) {
    set_has_npcseller();
  } else {
    clear_has_npcseller();
  }
  // @@protoc_insertion_point(field_set_allocated:ProtoNPCSeller.ResponseNPCSellerResp.npcSeller)
}

// optional .DataCommon.CommonItemsCPP commons = 2;
inline bool ResponseNPCSellerResp::has_commons() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ResponseNPCSellerResp::set_has_commons() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ResponseNPCSellerResp::clear_has_commons() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ResponseNPCSellerResp::clear_commons() {
  if (commons_ != NULL) commons_->::DataCommon::CommonItemsCPP::Clear();
  clear_has_commons();
}
inline const ::DataCommon::CommonItemsCPP& ResponseNPCSellerResp::commons() const {
  // @@protoc_insertion_point(field_get:ProtoNPCSeller.ResponseNPCSellerResp.commons)
  return commons_ != NULL ? *commons_ : *default_instance_->commons_;
}
inline ::DataCommon::CommonItemsCPP* ResponseNPCSellerResp::mutable_commons() {
  set_has_commons();
  if (commons_ == NULL) commons_ = new ::DataCommon::CommonItemsCPP;
  // @@protoc_insertion_point(field_mutable:ProtoNPCSeller.ResponseNPCSellerResp.commons)
  return commons_;
}
inline ::DataCommon::CommonItemsCPP* ResponseNPCSellerResp::release_commons() {
  clear_has_commons();
  ::DataCommon::CommonItemsCPP* temp = commons_;
  commons_ = NULL;
  return temp;
}
inline void ResponseNPCSellerResp::set_allocated_commons(::DataCommon::CommonItemsCPP* commons) {
  delete commons_;
  commons_ = commons;
  if (commons) {
    set_has_commons();
  } else {
    clear_has_commons();
  }
  // @@protoc_insertion_point(field_set_allocated:ProtoNPCSeller.ResponseNPCSellerResp.commons)
}

// -------------------------------------------------------------------

// ChangeNPCSellerStatusReq

// -------------------------------------------------------------------

// ChangeNPCSellerStatusResp

// required .ProtoNPCSeller.NPCSellerCPP npcSeller = 1;
inline bool ChangeNPCSellerStatusResp::has_npcseller() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChangeNPCSellerStatusResp::set_has_npcseller() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ChangeNPCSellerStatusResp::clear_has_npcseller() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ChangeNPCSellerStatusResp::clear_npcseller() {
  if (npcseller_ != NULL) npcseller_->::ProtoNPCSeller::NPCSellerCPP::Clear();
  clear_has_npcseller();
}
inline const ::ProtoNPCSeller::NPCSellerCPP& ChangeNPCSellerStatusResp::npcseller() const {
  // @@protoc_insertion_point(field_get:ProtoNPCSeller.ChangeNPCSellerStatusResp.npcSeller)
  return npcseller_ != NULL ? *npcseller_ : *default_instance_->npcseller_;
}
inline ::ProtoNPCSeller::NPCSellerCPP* ChangeNPCSellerStatusResp::mutable_npcseller() {
  set_has_npcseller();
  if (npcseller_ == NULL) npcseller_ = new ::ProtoNPCSeller::NPCSellerCPP;
  // @@protoc_insertion_point(field_mutable:ProtoNPCSeller.ChangeNPCSellerStatusResp.npcSeller)
  return npcseller_;
}
inline ::ProtoNPCSeller::NPCSellerCPP* ChangeNPCSellerStatusResp::release_npcseller() {
  clear_has_npcseller();
  ::ProtoNPCSeller::NPCSellerCPP* temp = npcseller_;
  npcseller_ = NULL;
  return temp;
}
inline void ChangeNPCSellerStatusResp::set_allocated_npcseller(::ProtoNPCSeller::NPCSellerCPP* npcseller) {
  delete npcseller_;
  npcseller_ = npcseller;
  if (npcseller) {
    set_has_npcseller();
  } else {
    clear_has_npcseller();
  }
  // @@protoc_insertion_point(field_set_allocated:ProtoNPCSeller.ChangeNPCSellerStatusResp.npcSeller)
}

// -------------------------------------------------------------------

// PushNPCSellerInfo

// required .ProtoNPCSeller.NPCSellerCPP npcSeller = 1;
inline bool PushNPCSellerInfo::has_npcseller() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PushNPCSellerInfo::set_has_npcseller() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PushNPCSellerInfo::clear_has_npcseller() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PushNPCSellerInfo::clear_npcseller() {
  if (npcseller_ != NULL) npcseller_->::ProtoNPCSeller::NPCSellerCPP::Clear();
  clear_has_npcseller();
}
inline const ::ProtoNPCSeller::NPCSellerCPP& PushNPCSellerInfo::npcseller() const {
  // @@protoc_insertion_point(field_get:ProtoNPCSeller.PushNPCSellerInfo.npcSeller)
  return npcseller_ != NULL ? *npcseller_ : *default_instance_->npcseller_;
}
inline ::ProtoNPCSeller::NPCSellerCPP* PushNPCSellerInfo::mutable_npcseller() {
  set_has_npcseller();
  if (npcseller_ == NULL) npcseller_ = new ::ProtoNPCSeller::NPCSellerCPP;
  // @@protoc_insertion_point(field_mutable:ProtoNPCSeller.PushNPCSellerInfo.npcSeller)
  return npcseller_;
}
inline ::ProtoNPCSeller::NPCSellerCPP* PushNPCSellerInfo::release_npcseller() {
  clear_has_npcseller();
  ::ProtoNPCSeller::NPCSellerCPP* temp = npcseller_;
  npcseller_ = NULL;
  return temp;
}
inline void PushNPCSellerInfo::set_allocated_npcseller(::ProtoNPCSeller::NPCSellerCPP* npcseller) {
  delete npcseller_;
  npcseller_ = npcseller;
  if (npcseller) {
    set_has_npcseller();
  } else {
    clear_has_npcseller();
  }
  // @@protoc_insertion_point(field_set_allocated:ProtoNPCSeller.PushNPCSellerInfo.npcSeller)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ProtoNPCSeller

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ProtoNPCSeller_2eproto__INCLUDED
