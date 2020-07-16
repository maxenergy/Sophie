// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Message.proto

#include "Message.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_Alarm_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Alarm_Alarm_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_Algorithm_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Algorithm_Algorithm_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_Component_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Component_Component_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_Crew_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Crew_Crew_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_Device_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Device_Device_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_Status_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Status_Status_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_User_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_User_User_2eproto;
namespace msg {
class MSGDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<MSG> _instance;
} _MSG_default_instance_;
}  // namespace msg
static void InitDefaultsscc_info_MSG_Message_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::msg::_MSG_default_instance_;
    new (ptr) ::msg::MSG();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::msg::MSG::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<7> scc_info_MSG_Message_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 7, 0, InitDefaultsscc_info_MSG_Message_2eproto}, {
      &scc_info_Alarm_Alarm_2eproto.base,
      &scc_info_Algorithm_Algorithm_2eproto.base,
      &scc_info_Component_Component_2eproto.base,
      &scc_info_Crew_Crew_2eproto.base,
      &scc_info_Device_Device_2eproto.base,
      &scc_info_Status_Status_2eproto.base,
      &scc_info_User_User_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Message_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_Message_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Message_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Message_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::msg::MSG, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::msg::MSG, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::msg::MSG, type_),
  PROTOBUF_FIELD_OFFSET(::msg::MSG, sequence_),
  PROTOBUF_FIELD_OFFSET(::msg::MSG, timestamp_),
  PROTOBUF_FIELD_OFFSET(::msg::MSG, alarm_),
  PROTOBUF_FIELD_OFFSET(::msg::MSG, algorithm_),
  PROTOBUF_FIELD_OFFSET(::msg::MSG, component_),
  PROTOBUF_FIELD_OFFSET(::msg::MSG, crew_),
  PROTOBUF_FIELD_OFFSET(::msg::MSG, device_),
  PROTOBUF_FIELD_OFFSET(::msg::MSG, status_),
  PROTOBUF_FIELD_OFFSET(::msg::MSG, user_),
  9,
  7,
  8,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 15, sizeof(::msg::MSG)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::msg::_MSG_default_instance_),
};

const char descriptor_table_protodef_Message_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rMessage.proto\022\003msg\032\013Alarm.proto\032\017Algor"
  "ithm.proto\032\017Component.proto\032\nCrew.proto\032"
  "\014Device.proto\032\014Status.proto\032\nUser.proto\""
  "\201\003\n\003MSG\022!\n\004type\030\001 \002(\0162\r.msg.MSG.Type:\004NO"
  "NE\022\020\n\010sequence\030\002 \002(\003\022\021\n\ttimestamp\030\003 \002(\003\022"
  "\031\n\005alarm\030\004 \001(\0132\n.msg.Alarm\022!\n\talgorithm\030"
  "\005 \001(\0132\016.msg.Algorithm\022!\n\tcomponent\030\006 \001(\013"
  "2\016.msg.Component\022\027\n\004crew\030\007 \001(\0132\t.msg.Cre"
  "w\022\033\n\006device\030\010 \001(\0132\013.msg.Device\022\033\n\006status"
  "\030\t \001(\0132\013.msg.Status\022\027\n\004user\030\n \001(\0132\t.msg."
  "User\"e\n\004Type\022\010\n\004NONE\020\000\022\t\n\005ALARM\020\001\022\r\n\tALG"
  "ORITHM\020\002\022\r\n\tCOMPONENT\020\003\022\010\n\004CREW\020\004\022\n\n\006DEV"
  "ICE\020\005\022\n\n\006STATUS\020\006\022\010\n\004USER\020\007"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Message_2eproto_deps[7] = {
  &::descriptor_table_Alarm_2eproto,
  &::descriptor_table_Algorithm_2eproto,
  &::descriptor_table_Component_2eproto,
  &::descriptor_table_Crew_2eproto,
  &::descriptor_table_Device_2eproto,
  &::descriptor_table_Status_2eproto,
  &::descriptor_table_User_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Message_2eproto_sccs[1] = {
  &scc_info_MSG_Message_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Message_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Message_2eproto = {
  false, false, descriptor_table_protodef_Message_2eproto, "Message.proto", 507,
  &descriptor_table_Message_2eproto_once, descriptor_table_Message_2eproto_sccs, descriptor_table_Message_2eproto_deps, 1, 7,
  schemas, file_default_instances, TableStruct_Message_2eproto::offsets,
  file_level_metadata_Message_2eproto, 1, file_level_enum_descriptors_Message_2eproto, file_level_service_descriptors_Message_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Message_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Message_2eproto)), true);
namespace msg {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MSG_Type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_Message_2eproto);
  return file_level_enum_descriptors_Message_2eproto[0];
}
bool MSG_Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr MSG_Type MSG::NONE;
constexpr MSG_Type MSG::ALARM;
constexpr MSG_Type MSG::ALGORITHM;
constexpr MSG_Type MSG::COMPONENT;
constexpr MSG_Type MSG::CREW;
constexpr MSG_Type MSG::DEVICE;
constexpr MSG_Type MSG::STATUS;
constexpr MSG_Type MSG::USER;
constexpr MSG_Type MSG::Type_MIN;
constexpr MSG_Type MSG::Type_MAX;
constexpr int MSG::Type_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void MSG::InitAsDefaultInstance() {
  ::msg::_MSG_default_instance_._instance.get_mutable()->alarm_ = const_cast< ::msg::Alarm*>(
      ::msg::Alarm::internal_default_instance());
  ::msg::_MSG_default_instance_._instance.get_mutable()->algorithm_ = const_cast< ::msg::Algorithm*>(
      ::msg::Algorithm::internal_default_instance());
  ::msg::_MSG_default_instance_._instance.get_mutable()->component_ = const_cast< ::msg::Component*>(
      ::msg::Component::internal_default_instance());
  ::msg::_MSG_default_instance_._instance.get_mutable()->crew_ = const_cast< ::msg::Crew*>(
      ::msg::Crew::internal_default_instance());
  ::msg::_MSG_default_instance_._instance.get_mutable()->device_ = const_cast< ::msg::Device*>(
      ::msg::Device::internal_default_instance());
  ::msg::_MSG_default_instance_._instance.get_mutable()->status_ = const_cast< ::msg::Status*>(
      ::msg::Status::internal_default_instance());
  ::msg::_MSG_default_instance_._instance.get_mutable()->user_ = const_cast< ::msg::User*>(
      ::msg::User::internal_default_instance());
}
class MSG::_Internal {
 public:
  using HasBits = decltype(std::declval<MSG>()._has_bits_);
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_sequence(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static const ::msg::Alarm& alarm(const MSG* msg);
  static void set_has_alarm(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::msg::Algorithm& algorithm(const MSG* msg);
  static void set_has_algorithm(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::msg::Component& component(const MSG* msg);
  static void set_has_component(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::msg::Crew& crew(const MSG* msg);
  static void set_has_crew(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static const ::msg::Device& device(const MSG* msg);
  static void set_has_device(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static const ::msg::Status& status(const MSG* msg);
  static void set_has_status(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static const ::msg::User& user(const MSG* msg);
  static void set_has_user(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000380) ^ 0x00000380) != 0;
  }
};

const ::msg::Alarm&
MSG::_Internal::alarm(const MSG* msg) {
  return *msg->alarm_;
}
const ::msg::Algorithm&
MSG::_Internal::algorithm(const MSG* msg) {
  return *msg->algorithm_;
}
const ::msg::Component&
MSG::_Internal::component(const MSG* msg) {
  return *msg->component_;
}
const ::msg::Crew&
MSG::_Internal::crew(const MSG* msg) {
  return *msg->crew_;
}
const ::msg::Device&
MSG::_Internal::device(const MSG* msg) {
  return *msg->device_;
}
const ::msg::Status&
MSG::_Internal::status(const MSG* msg) {
  return *msg->status_;
}
const ::msg::User&
MSG::_Internal::user(const MSG* msg) {
  return *msg->user_;
}
void MSG::clear_alarm() {
  if (alarm_ != nullptr) alarm_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void MSG::clear_algorithm() {
  if (algorithm_ != nullptr) algorithm_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void MSG::clear_component() {
  if (component_ != nullptr) component_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void MSG::clear_crew() {
  if (crew_ != nullptr) crew_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
void MSG::clear_device() {
  if (device_ != nullptr) device_->Clear();
  _has_bits_[0] &= ~0x00000010u;
}
void MSG::clear_status() {
  if (status_ != nullptr) status_->Clear();
  _has_bits_[0] &= ~0x00000020u;
}
void MSG::clear_user() {
  if (user_ != nullptr) user_->Clear();
  _has_bits_[0] &= ~0x00000040u;
}
MSG::MSG(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:msg.MSG)
}
MSG::MSG(const MSG& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_alarm()) {
    alarm_ = new ::msg::Alarm(*from.alarm_);
  } else {
    alarm_ = nullptr;
  }
  if (from._internal_has_algorithm()) {
    algorithm_ = new ::msg::Algorithm(*from.algorithm_);
  } else {
    algorithm_ = nullptr;
  }
  if (from._internal_has_component()) {
    component_ = new ::msg::Component(*from.component_);
  } else {
    component_ = nullptr;
  }
  if (from._internal_has_crew()) {
    crew_ = new ::msg::Crew(*from.crew_);
  } else {
    crew_ = nullptr;
  }
  if (from._internal_has_device()) {
    device_ = new ::msg::Device(*from.device_);
  } else {
    device_ = nullptr;
  }
  if (from._internal_has_status()) {
    status_ = new ::msg::Status(*from.status_);
  } else {
    status_ = nullptr;
  }
  if (from._internal_has_user()) {
    user_ = new ::msg::User(*from.user_);
  } else {
    user_ = nullptr;
  }
  ::memcpy(&sequence_, &from.sequence_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&sequence_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:msg.MSG)
}

void MSG::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_MSG_Message_2eproto.base);
  ::memset(&alarm_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&alarm_)) + sizeof(type_));
}

MSG::~MSG() {
  // @@protoc_insertion_point(destructor:msg.MSG)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void MSG::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete alarm_;
  if (this != internal_default_instance()) delete algorithm_;
  if (this != internal_default_instance()) delete component_;
  if (this != internal_default_instance()) delete crew_;
  if (this != internal_default_instance()) delete device_;
  if (this != internal_default_instance()) delete status_;
  if (this != internal_default_instance()) delete user_;
}

void MSG::ArenaDtor(void* object) {
  MSG* _this = reinterpret_cast< MSG* >(object);
  (void)_this;
}
void MSG::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void MSG::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const MSG& MSG::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_MSG_Message_2eproto.base);
  return *internal_default_instance();
}


void MSG::Clear() {
// @@protoc_insertion_point(message_clear_start:msg.MSG)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(alarm_ != nullptr);
      alarm_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(algorithm_ != nullptr);
      algorithm_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(component_ != nullptr);
      component_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(crew_ != nullptr);
      crew_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(device_ != nullptr);
      device_->Clear();
    }
    if (cached_has_bits & 0x00000020u) {
      GOOGLE_DCHECK(status_ != nullptr);
      status_->Clear();
    }
    if (cached_has_bits & 0x00000040u) {
      GOOGLE_DCHECK(user_ != nullptr);
      user_->Clear();
    }
  }
  sequence_ = PROTOBUF_LONGLONG(0);
  if (cached_has_bits & 0x00000300u) {
    ::memset(&timestamp_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&type_) -
        reinterpret_cast<char*>(&timestamp_)) + sizeof(type_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MSG::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .msg.MSG.Type type = 1 [default = NONE];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::msg::MSG_Type_IsValid(val))) {
            _internal_set_type(static_cast<::msg::MSG_Type>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // required int64 sequence = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_sequence(&has_bits);
          sequence_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int64 timestamp = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_timestamp(&has_bits);
          timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .msg.Alarm alarm = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_alarm(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .msg.Algorithm algorithm = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_algorithm(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .msg.Component component = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_component(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .msg.Crew crew = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_crew(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .msg.Device device = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_device(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .msg.Status status = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          ptr = ctx->ParseMessage(_internal_mutable_status(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .msg.User user = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 82)) {
          ptr = ctx->ParseMessage(_internal_mutable_user(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* MSG::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:msg.MSG)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .msg.MSG.Type type = 1 [default = NONE];
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // required int64 sequence = 2;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_sequence(), target);
  }

  // required int64 timestamp = 3;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(3, this->_internal_timestamp(), target);
  }

  // optional .msg.Alarm alarm = 4;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::alarm(this), target, stream);
  }

  // optional .msg.Algorithm algorithm = 5;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::algorithm(this), target, stream);
  }

  // optional .msg.Component component = 6;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::component(this), target, stream);
  }

  // optional .msg.Crew crew = 7;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        7, _Internal::crew(this), target, stream);
  }

  // optional .msg.Device device = 8;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        8, _Internal::device(this), target, stream);
  }

  // optional .msg.Status status = 9;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        9, _Internal::status(this), target, stream);
  }

  // optional .msg.User user = 10;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        10, _Internal::user(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:msg.MSG)
  return target;
}

size_t MSG::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:msg.MSG)
  size_t total_size = 0;

  if (_internal_has_sequence()) {
    // required int64 sequence = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_sequence());
  }

  if (_internal_has_timestamp()) {
    // required int64 timestamp = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_timestamp());
  }

  if (_internal_has_type()) {
    // required .msg.MSG.Type type = 1 [default = NONE];
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());
  }

  return total_size;
}
size_t MSG::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:msg.MSG)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000380) ^ 0x00000380) == 0) {  // All required fields are present.
    // required int64 sequence = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_sequence());

    // required int64 timestamp = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_timestamp());

    // required .msg.MSG.Type type = 1 [default = NONE];
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    // optional .msg.Alarm alarm = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *alarm_);
    }

    // optional .msg.Algorithm algorithm = 5;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *algorithm_);
    }

    // optional .msg.Component component = 6;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *component_);
    }

    // optional .msg.Crew crew = 7;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *crew_);
    }

    // optional .msg.Device device = 8;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *device_);
    }

    // optional .msg.Status status = 9;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *status_);
    }

    // optional .msg.User user = 10;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *user_);
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MSG::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:msg.MSG)
  GOOGLE_DCHECK_NE(&from, this);
  const MSG* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<MSG>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:msg.MSG)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:msg.MSG)
    MergeFrom(*source);
  }
}

void MSG::MergeFrom(const MSG& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:msg.MSG)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_alarm()->::msg::Alarm::MergeFrom(from._internal_alarm());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_algorithm()->::msg::Algorithm::MergeFrom(from._internal_algorithm());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_component()->::msg::Component::MergeFrom(from._internal_component());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_crew()->::msg::Crew::MergeFrom(from._internal_crew());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_mutable_device()->::msg::Device::MergeFrom(from._internal_device());
    }
    if (cached_has_bits & 0x00000020u) {
      _internal_mutable_status()->::msg::Status::MergeFrom(from._internal_status());
    }
    if (cached_has_bits & 0x00000040u) {
      _internal_mutable_user()->::msg::User::MergeFrom(from._internal_user());
    }
    if (cached_has_bits & 0x00000080u) {
      sequence_ = from.sequence_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000300u) {
    if (cached_has_bits & 0x00000100u) {
      timestamp_ = from.timestamp_;
    }
    if (cached_has_bits & 0x00000200u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void MSG::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:msg.MSG)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG::CopyFrom(const MSG& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:msg.MSG)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (_internal_has_alarm()) {
    if (!alarm_->IsInitialized()) return false;
  }
  if (_internal_has_algorithm()) {
    if (!algorithm_->IsInitialized()) return false;
  }
  if (_internal_has_component()) {
    if (!component_->IsInitialized()) return false;
  }
  if (_internal_has_crew()) {
    if (!crew_->IsInitialized()) return false;
  }
  if (_internal_has_device()) {
    if (!device_->IsInitialized()) return false;
  }
  if (_internal_has_status()) {
    if (!status_->IsInitialized()) return false;
  }
  if (_internal_has_user()) {
    if (!user_->IsInitialized()) return false;
  }
  return true;
}

void MSG::InternalSwap(MSG* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MSG, type_)
      + sizeof(MSG::type_)
      - PROTOBUF_FIELD_OFFSET(MSG, alarm_)>(
          reinterpret_cast<char*>(&alarm_),
          reinterpret_cast<char*>(&other->alarm_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MSG::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msg
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::msg::MSG* Arena::CreateMaybeMessage< ::msg::MSG >(Arena* arena) {
  return Arena::CreateMessageInternal< ::msg::MSG >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
