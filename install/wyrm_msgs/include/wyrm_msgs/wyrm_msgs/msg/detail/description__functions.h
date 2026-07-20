// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wyrm_msgs:msg/Description.idl
// generated code does not contain a copyright notice

#ifndef WYRM_MSGS__MSG__DETAIL__DESCRIPTION__FUNCTIONS_H_
#define WYRM_MSGS__MSG__DETAIL__DESCRIPTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wyrm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wyrm_msgs/msg/detail/description__struct.h"

/// Initialize msg/Description message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wyrm_msgs__msg__Description
 * )) before or use
 * wyrm_msgs__msg__Description__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wyrm_msgs
bool
wyrm_msgs__msg__Description__init(wyrm_msgs__msg__Description * msg);

/// Finalize msg/Description message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wyrm_msgs
void
wyrm_msgs__msg__Description__fini(wyrm_msgs__msg__Description * msg);

/// Create msg/Description message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wyrm_msgs__msg__Description__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wyrm_msgs
wyrm_msgs__msg__Description *
wyrm_msgs__msg__Description__create();

/// Destroy msg/Description message.
/**
 * It calls
 * wyrm_msgs__msg__Description__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wyrm_msgs
void
wyrm_msgs__msg__Description__destroy(wyrm_msgs__msg__Description * msg);

/// Check for msg/Description message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wyrm_msgs
bool
wyrm_msgs__msg__Description__are_equal(const wyrm_msgs__msg__Description * lhs, const wyrm_msgs__msg__Description * rhs);

/// Copy a msg/Description message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wyrm_msgs
bool
wyrm_msgs__msg__Description__copy(
  const wyrm_msgs__msg__Description * input,
  wyrm_msgs__msg__Description * output);

/// Initialize array of msg/Description messages.
/**
 * It allocates the memory for the number of elements and calls
 * wyrm_msgs__msg__Description__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wyrm_msgs
bool
wyrm_msgs__msg__Description__Sequence__init(wyrm_msgs__msg__Description__Sequence * array, size_t size);

/// Finalize array of msg/Description messages.
/**
 * It calls
 * wyrm_msgs__msg__Description__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wyrm_msgs
void
wyrm_msgs__msg__Description__Sequence__fini(wyrm_msgs__msg__Description__Sequence * array);

/// Create array of msg/Description messages.
/**
 * It allocates the memory for the array and calls
 * wyrm_msgs__msg__Description__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wyrm_msgs
wyrm_msgs__msg__Description__Sequence *
wyrm_msgs__msg__Description__Sequence__create(size_t size);

/// Destroy array of msg/Description messages.
/**
 * It calls
 * wyrm_msgs__msg__Description__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wyrm_msgs
void
wyrm_msgs__msg__Description__Sequence__destroy(wyrm_msgs__msg__Description__Sequence * array);

/// Check for msg/Description message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wyrm_msgs
bool
wyrm_msgs__msg__Description__Sequence__are_equal(const wyrm_msgs__msg__Description__Sequence * lhs, const wyrm_msgs__msg__Description__Sequence * rhs);

/// Copy an array of msg/Description messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wyrm_msgs
bool
wyrm_msgs__msg__Description__Sequence__copy(
  const wyrm_msgs__msg__Description__Sequence * input,
  wyrm_msgs__msg__Description__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WYRM_MSGS__MSG__DETAIL__DESCRIPTION__FUNCTIONS_H_
