// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wyrm_msgs:msg/Frame.idl
// generated code does not contain a copyright notice
#include "wyrm_msgs/msg/detail/frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bodies`
#include "wyrm_msgs/msg/detail/rigid_body__functions.h"

bool
wyrm_msgs__msg__Frame__init(wyrm_msgs__msg__Frame * msg)
{
  if (!msg) {
    return false;
  }
  // frame_id
  // timestamp
  // precision_timestamp_secs
  // precision_timestamp_fractional_secs
  // is_recording
  // model_list_changed
  // body_count
  // bodies
  if (!wyrm_msgs__msg__RigidBody__Sequence__init(&msg->bodies, 0)) {
    wyrm_msgs__msg__Frame__fini(msg);
    return false;
  }
  return true;
}

void
wyrm_msgs__msg__Frame__fini(wyrm_msgs__msg__Frame * msg)
{
  if (!msg) {
    return;
  }
  // frame_id
  // timestamp
  // precision_timestamp_secs
  // precision_timestamp_fractional_secs
  // is_recording
  // model_list_changed
  // body_count
  // bodies
  wyrm_msgs__msg__RigidBody__Sequence__fini(&msg->bodies);
}

bool
wyrm_msgs__msg__Frame__are_equal(const wyrm_msgs__msg__Frame * lhs, const wyrm_msgs__msg__Frame * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame_id
  if (lhs->frame_id != rhs->frame_id) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // precision_timestamp_secs
  if (lhs->precision_timestamp_secs != rhs->precision_timestamp_secs) {
    return false;
  }
  // precision_timestamp_fractional_secs
  if (lhs->precision_timestamp_fractional_secs != rhs->precision_timestamp_fractional_secs) {
    return false;
  }
  // is_recording
  if (lhs->is_recording != rhs->is_recording) {
    return false;
  }
  // model_list_changed
  if (lhs->model_list_changed != rhs->model_list_changed) {
    return false;
  }
  // body_count
  if (lhs->body_count != rhs->body_count) {
    return false;
  }
  // bodies
  if (!wyrm_msgs__msg__RigidBody__Sequence__are_equal(
      &(lhs->bodies), &(rhs->bodies)))
  {
    return false;
  }
  return true;
}

bool
wyrm_msgs__msg__Frame__copy(
  const wyrm_msgs__msg__Frame * input,
  wyrm_msgs__msg__Frame * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_id
  output->frame_id = input->frame_id;
  // timestamp
  output->timestamp = input->timestamp;
  // precision_timestamp_secs
  output->precision_timestamp_secs = input->precision_timestamp_secs;
  // precision_timestamp_fractional_secs
  output->precision_timestamp_fractional_secs = input->precision_timestamp_fractional_secs;
  // is_recording
  output->is_recording = input->is_recording;
  // model_list_changed
  output->model_list_changed = input->model_list_changed;
  // body_count
  output->body_count = input->body_count;
  // bodies
  if (!wyrm_msgs__msg__RigidBody__Sequence__copy(
      &(input->bodies), &(output->bodies)))
  {
    return false;
  }
  return true;
}

wyrm_msgs__msg__Frame *
wyrm_msgs__msg__Frame__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wyrm_msgs__msg__Frame * msg = (wyrm_msgs__msg__Frame *)allocator.allocate(sizeof(wyrm_msgs__msg__Frame), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wyrm_msgs__msg__Frame));
  bool success = wyrm_msgs__msg__Frame__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wyrm_msgs__msg__Frame__destroy(wyrm_msgs__msg__Frame * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wyrm_msgs__msg__Frame__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wyrm_msgs__msg__Frame__Sequence__init(wyrm_msgs__msg__Frame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wyrm_msgs__msg__Frame * data = NULL;

  if (size) {
    data = (wyrm_msgs__msg__Frame *)allocator.zero_allocate(size, sizeof(wyrm_msgs__msg__Frame), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wyrm_msgs__msg__Frame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wyrm_msgs__msg__Frame__fini(&data[i - 1]);
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
wyrm_msgs__msg__Frame__Sequence__fini(wyrm_msgs__msg__Frame__Sequence * array)
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
      wyrm_msgs__msg__Frame__fini(&array->data[i]);
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

wyrm_msgs__msg__Frame__Sequence *
wyrm_msgs__msg__Frame__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wyrm_msgs__msg__Frame__Sequence * array = (wyrm_msgs__msg__Frame__Sequence *)allocator.allocate(sizeof(wyrm_msgs__msg__Frame__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wyrm_msgs__msg__Frame__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wyrm_msgs__msg__Frame__Sequence__destroy(wyrm_msgs__msg__Frame__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wyrm_msgs__msg__Frame__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wyrm_msgs__msg__Frame__Sequence__are_equal(const wyrm_msgs__msg__Frame__Sequence * lhs, const wyrm_msgs__msg__Frame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wyrm_msgs__msg__Frame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wyrm_msgs__msg__Frame__Sequence__copy(
  const wyrm_msgs__msg__Frame__Sequence * input,
  wyrm_msgs__msg__Frame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wyrm_msgs__msg__Frame);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wyrm_msgs__msg__Frame * data =
      (wyrm_msgs__msg__Frame *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wyrm_msgs__msg__Frame__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wyrm_msgs__msg__Frame__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wyrm_msgs__msg__Frame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
