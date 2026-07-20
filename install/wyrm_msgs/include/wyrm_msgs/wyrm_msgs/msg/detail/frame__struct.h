// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wyrm_msgs:msg/Frame.idl
// generated code does not contain a copyright notice

#ifndef WYRM_MSGS__MSG__DETAIL__FRAME__STRUCT_H_
#define WYRM_MSGS__MSG__DETAIL__FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bodies'
#include "wyrm_msgs/msg/detail/rigid_body__struct.h"

/// Struct defined in msg/Frame in the package wyrm_msgs.
typedef struct wyrm_msgs__msg__Frame
{
  int32_t frame_id;
  double timestamp;
  uint32_t precision_timestamp_secs;
  uint32_t precision_timestamp_fractional_secs;
  bool is_recording;
  bool model_list_changed;
  uint32_t body_count;
  wyrm_msgs__msg__RigidBody__Sequence bodies;
} wyrm_msgs__msg__Frame;

// Struct for a sequence of wyrm_msgs__msg__Frame.
typedef struct wyrm_msgs__msg__Frame__Sequence
{
  wyrm_msgs__msg__Frame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wyrm_msgs__msg__Frame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WYRM_MSGS__MSG__DETAIL__FRAME__STRUCT_H_
