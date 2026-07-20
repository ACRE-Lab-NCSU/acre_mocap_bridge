// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wyrm_msgs:msg/Description.idl
// generated code does not contain a copyright notice

#ifndef WYRM_MSGS__MSG__DETAIL__DESCRIPTION__STRUCT_H_
#define WYRM_MSGS__MSG__DETAIL__DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Description in the package wyrm_msgs.
typedef struct wyrm_msgs__msg__Description
{
  int32_t id;
  int32_t parent_id;
  rosidl_runtime_c__String name;
  int32_t num_markers;
} wyrm_msgs__msg__Description;

// Struct for a sequence of wyrm_msgs__msg__Description.
typedef struct wyrm_msgs__msg__Description__Sequence
{
  wyrm_msgs__msg__Description * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wyrm_msgs__msg__Description__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WYRM_MSGS__MSG__DETAIL__DESCRIPTION__STRUCT_H_
