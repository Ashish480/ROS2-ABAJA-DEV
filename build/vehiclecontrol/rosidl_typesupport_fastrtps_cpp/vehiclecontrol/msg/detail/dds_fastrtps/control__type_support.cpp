// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from vehiclecontrol:msg/Control.idl
// generated code does not contain a copyright notice
#include "vehiclecontrol/msg/detail/control__rosidl_typesupport_fastrtps_cpp.hpp"
#include "vehiclecontrol/msg/detail/control__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace vehiclecontrol
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehiclecontrol
cdr_serialize(
  const vehiclecontrol::msg::Control & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: steering
  cdr << ros_message.steering;
  // Member: throttle
  cdr << ros_message.throttle;
  // Member: brake
  cdr << ros_message.brake;
  // Member: longswitch
  cdr << ros_message.longswitch;
  // Member: latswitch
  cdr << ros_message.latswitch;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehiclecontrol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vehiclecontrol::msg::Control & ros_message)
{
  // Member: steering
  cdr >> ros_message.steering;

  // Member: throttle
  cdr >> ros_message.throttle;

  // Member: brake
  cdr >> ros_message.brake;

  // Member: longswitch
  cdr >> ros_message.longswitch;

  // Member: latswitch
  cdr >> ros_message.latswitch;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehiclecontrol
get_serialized_size(
  const vehiclecontrol::msg::Control & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: steering
  {
    size_t item_size = sizeof(ros_message.steering);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle
  {
    size_t item_size = sizeof(ros_message.throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brake
  {
    size_t item_size = sizeof(ros_message.brake);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longswitch
  {
    size_t item_size = sizeof(ros_message.longswitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latswitch
  {
    size_t item_size = sizeof(ros_message.latswitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vehiclecontrol
max_serialized_size_Control(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: steering
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brake
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: longswitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: latswitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vehiclecontrol::msg::Control;
    is_plain =
      (
      offsetof(DataType, latswitch) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Control__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const vehiclecontrol::msg::Control *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Control__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<vehiclecontrol::msg::Control *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Control__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const vehiclecontrol::msg::Control *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Control__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Control(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Control__callbacks = {
  "vehiclecontrol::msg",
  "Control",
  _Control__cdr_serialize,
  _Control__cdr_deserialize,
  _Control__get_serialized_size,
  _Control__max_serialized_size
};

static rosidl_message_type_support_t _Control__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Control__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace vehiclecontrol

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_vehiclecontrol
const rosidl_message_type_support_t *
get_message_type_support_handle<vehiclecontrol::msg::Control>()
{
  return &vehiclecontrol::msg::typesupport_fastrtps_cpp::_Control__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vehiclecontrol, msg, Control)() {
  return &vehiclecontrol::msg::typesupport_fastrtps_cpp::_Control__handle;
}

#ifdef __cplusplus
}
#endif
