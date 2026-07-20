// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wyrm_msgs:msg/RigidBody.idl
// generated code does not contain a copyright notice

#ifndef WYRM_MSGS__MSG__DETAIL__RIGID_BODY__STRUCT_H_
#define WYRM_MSGS__MSG__DETAIL__RIGID_BODY__STRUCT_H_

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
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

/// Struct defined in msg/RigidBody in the package wyrm_msgs.
typedef struct wyrm_msgs__msg__RigidBody
{
  int32_t id;
  rosidl_runtime_c__String name;
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Quaternion orientation;
  double mean_error;
  bool tracking_lost;
  bool model_filled;
} wyrm_msgs__msg__RigidBody;

// Struct for a sequence of wyrm_msgs__msg__RigidBody.
typedef struct wyrm_msgs__msg__RigidBody__Sequence
{
  wyrm_msgs__msg__RigidBody * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wyrm_msgs__msg__RigidBody__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WYRM_MSGS__MSG__DETAIL__RIGID_BODY__STRUCT_H_
