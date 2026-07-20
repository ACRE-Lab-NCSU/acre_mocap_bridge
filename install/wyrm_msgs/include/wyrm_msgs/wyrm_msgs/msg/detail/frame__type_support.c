// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wyrm_msgs:msg/Frame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wyrm_msgs/msg/detail/frame__rosidl_typesupport_introspection_c.h"
#include "wyrm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wyrm_msgs/msg/detail/frame__functions.h"
#include "wyrm_msgs/msg/detail/frame__struct.h"


// Include directives for member types
// Member `bodies`
#include "wyrm_msgs/msg/rigid_body.h"
// Member `bodies`
#include "wyrm_msgs/msg/detail/rigid_body__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wyrm_msgs__msg__Frame__init(message_memory);
}

void wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_fini_function(void * message_memory)
{
  wyrm_msgs__msg__Frame__fini(message_memory);
}

size_t wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__size_function__Frame__bodies(
  const void * untyped_member)
{
  const wyrm_msgs__msg__RigidBody__Sequence * member =
    (const wyrm_msgs__msg__RigidBody__Sequence *)(untyped_member);
  return member->size;
}

const void * wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__get_const_function__Frame__bodies(
  const void * untyped_member, size_t index)
{
  const wyrm_msgs__msg__RigidBody__Sequence * member =
    (const wyrm_msgs__msg__RigidBody__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__get_function__Frame__bodies(
  void * untyped_member, size_t index)
{
  wyrm_msgs__msg__RigidBody__Sequence * member =
    (wyrm_msgs__msg__RigidBody__Sequence *)(untyped_member);
  return &member->data[index];
}

void wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__fetch_function__Frame__bodies(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const wyrm_msgs__msg__RigidBody * item =
    ((const wyrm_msgs__msg__RigidBody *)
    wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__get_const_function__Frame__bodies(untyped_member, index));
  wyrm_msgs__msg__RigidBody * value =
    (wyrm_msgs__msg__RigidBody *)(untyped_value);
  *value = *item;
}

void wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__assign_function__Frame__bodies(
  void * untyped_member, size_t index, const void * untyped_value)
{
  wyrm_msgs__msg__RigidBody * item =
    ((wyrm_msgs__msg__RigidBody *)
    wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__get_function__Frame__bodies(untyped_member, index));
  const wyrm_msgs__msg__RigidBody * value =
    (const wyrm_msgs__msg__RigidBody *)(untyped_value);
  *item = *value;
}

bool wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__resize_function__Frame__bodies(
  void * untyped_member, size_t size)
{
  wyrm_msgs__msg__RigidBody__Sequence * member =
    (wyrm_msgs__msg__RigidBody__Sequence *)(untyped_member);
  wyrm_msgs__msg__RigidBody__Sequence__fini(member);
  return wyrm_msgs__msg__RigidBody__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_member_array[8] = {
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wyrm_msgs__msg__Frame, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wyrm_msgs__msg__Frame, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "precision_timestamp_secs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wyrm_msgs__msg__Frame, precision_timestamp_secs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "precision_timestamp_fractional_secs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wyrm_msgs__msg__Frame, precision_timestamp_fractional_secs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_recording",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wyrm_msgs__msg__Frame, is_recording),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_list_changed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wyrm_msgs__msg__Frame, model_list_changed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "body_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wyrm_msgs__msg__Frame, body_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bodies",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wyrm_msgs__msg__Frame, bodies),  // bytes offset in struct
    NULL,  // default value
    wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__size_function__Frame__bodies,  // size() function pointer
    wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__get_const_function__Frame__bodies,  // get_const(index) function pointer
    wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__get_function__Frame__bodies,  // get(index) function pointer
    wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__fetch_function__Frame__bodies,  // fetch(index, &value) function pointer
    wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__assign_function__Frame__bodies,  // assign(index, value) function pointer
    wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__resize_function__Frame__bodies  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_members = {
  "wyrm_msgs__msg",  // message namespace
  "Frame",  // message name
  8,  // number of fields
  sizeof(wyrm_msgs__msg__Frame),
  wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_member_array,  // message members
  wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_init_function,  // function to initialize message memory (memory has to be allocated)
  wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_type_support_handle = {
  0,
  &wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wyrm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wyrm_msgs, msg, Frame)() {
  wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wyrm_msgs, msg, RigidBody)();
  if (!wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_type_support_handle.typesupport_identifier) {
    wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wyrm_msgs__msg__Frame__rosidl_typesupport_introspection_c__Frame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
