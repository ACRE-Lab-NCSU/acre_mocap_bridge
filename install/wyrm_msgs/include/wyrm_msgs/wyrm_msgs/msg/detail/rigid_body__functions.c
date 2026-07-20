// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wyrm_msgs:msg/RigidBody.idl
// generated code does not contain a copyright notice
#include "wyrm_msgs/msg/detail/rigid_body__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
wyrm_msgs__msg__RigidBody__init(wyrm_msgs__msg__RigidBody * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    wyrm_msgs__msg__RigidBody__fini(msg);
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    wyrm_msgs__msg__RigidBody__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    wyrm_msgs__msg__RigidBody__fini(msg);
    return false;
  }
  // mean_error
  // tracking_lost
  // model_filled
  return true;
}

void
wyrm_msgs__msg__RigidBody__fini(wyrm_msgs__msg__RigidBody * msg)
{
  if (!msg) {
    return;
  }
  // id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // mean_error
  // tracking_lost
  // model_filled
}

bool
wyrm_msgs__msg__RigidBody__are_equal(const wyrm_msgs__msg__RigidBody * lhs, const wyrm_msgs__msg__RigidBody * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // mean_error
  if (lhs->mean_error != rhs->mean_error) {
    return false;
  }
  // tracking_lost
  if (lhs->tracking_lost != rhs->tracking_lost) {
    return false;
  }
  // model_filled
  if (lhs->model_filled != rhs->model_filled) {
    return false;
  }
  return true;
}

bool
wyrm_msgs__msg__RigidBody__copy(
  const wyrm_msgs__msg__RigidBody * input,
  wyrm_msgs__msg__RigidBody * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // mean_error
  output->mean_error = input->mean_error;
  // tracking_lost
  output->tracking_lost = input->tracking_lost;
  // model_filled
  output->model_filled = input->model_filled;
  return true;
}

wyrm_msgs__msg__RigidBody *
wyrm_msgs__msg__RigidBody__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wyrm_msgs__msg__RigidBody * msg = (wyrm_msgs__msg__RigidBody *)allocator.allocate(sizeof(wyrm_msgs__msg__RigidBody), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wyrm_msgs__msg__RigidBody));
  bool success = wyrm_msgs__msg__RigidBody__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wyrm_msgs__msg__RigidBody__destroy(wyrm_msgs__msg__RigidBody * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wyrm_msgs__msg__RigidBody__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wyrm_msgs__msg__RigidBody__Sequence__init(wyrm_msgs__msg__RigidBody__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wyrm_msgs__msg__RigidBody * data = NULL;

  if (size) {
    data = (wyrm_msgs__msg__RigidBody *)allocator.zero_allocate(size, sizeof(wyrm_msgs__msg__RigidBody), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wyrm_msgs__msg__RigidBody__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wyrm_msgs__msg__RigidBody__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
wyrm_msgs__msg__RigidBody__Sequence__fini(wyrm_msgs__msg__RigidBody__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      wyrm_msgs__msg__RigidBody__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

wyrm_msgs__msg__RigidBody__Sequence *
wyrm_msgs__msg__RigidBody__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wyrm_msgs__msg__RigidBody__Sequence * array = (wyrm_msgs__msg__RigidBody__Sequence *)allocator.allocate(sizeof(wyrm_msgs__msg__RigidBody__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wyrm_msgs__msg__RigidBody__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wyrm_msgs__msg__RigidBody__Sequence__destroy(wyrm_msgs__msg__RigidBody__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wyrm_msgs__msg__RigidBody__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wyrm_msgs__msg__RigidBody__Sequence__are_equal(const wyrm_msgs__msg__RigidBody__Sequence * lhs, const wyrm_msgs__msg__RigidBody__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wyrm_msgs__msg__RigidBody__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wyrm_msgs__msg__RigidBody__Sequence__copy(
  const wyrm_msgs__msg__RigidBody__Sequence * input,
  wyrm_msgs__msg__RigidBody__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wyrm_msgs__msg__RigidBody);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wyrm_msgs__msg__RigidBody * data =
      (wyrm_msgs__msg__RigidBody *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wyrm_msgs__msg__RigidBody__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wyrm_msgs__msg__RigidBody__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wyrm_msgs__msg__RigidBody__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
