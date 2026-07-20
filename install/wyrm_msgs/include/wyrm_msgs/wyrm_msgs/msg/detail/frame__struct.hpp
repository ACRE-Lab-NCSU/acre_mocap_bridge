// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wyrm_msgs:msg/Frame.idl
// generated code does not contain a copyright notice

#ifndef WYRM_MSGS__MSG__DETAIL__FRAME__STRUCT_HPP_
#define WYRM_MSGS__MSG__DETAIL__FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bodies'
#include "wyrm_msgs/msg/detail/rigid_body__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wyrm_msgs__msg__Frame __attribute__((deprecated))
#else
# define DEPRECATED__wyrm_msgs__msg__Frame __declspec(deprecated)
#endif

namespace wyrm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Frame_
{
  using Type = Frame_<ContainerAllocator>;

  explicit Frame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = 0l;
      this->timestamp = 0.0;
      this->precision_timestamp_secs = 0ul;
      this->precision_timestamp_fractional_secs = 0ul;
      this->is_recording = false;
      this->model_list_changed = false;
      this->body_count = 0ul;
    }
  }

  explicit Frame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = 0l;
      this->timestamp = 0.0;
      this->precision_timestamp_secs = 0ul;
      this->precision_timestamp_fractional_secs = 0ul;
      this->is_recording = false;
      this->model_list_changed = false;
      this->body_count = 0ul;
    }
  }

  // field types and members
  using _frame_id_type =
    int32_t;
  _frame_id_type frame_id;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _precision_timestamp_secs_type =
    uint32_t;
  _precision_timestamp_secs_type precision_timestamp_secs;
  using _precision_timestamp_fractional_secs_type =
    uint32_t;
  _precision_timestamp_fractional_secs_type precision_timestamp_fractional_secs;
  using _is_recording_type =
    bool;
  _is_recording_type is_recording;
  using _model_list_changed_type =
    bool;
  _model_list_changed_type model_list_changed;
  using _body_count_type =
    uint32_t;
  _body_count_type body_count;
  using _bodies_type =
    std::vector<wyrm_msgs::msg::RigidBody_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wyrm_msgs::msg::RigidBody_<ContainerAllocator>>>;
  _bodies_type bodies;

  // setters for named parameter idiom
  Type & set__frame_id(
    const int32_t & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__precision_timestamp_secs(
    const uint32_t & _arg)
  {
    this->precision_timestamp_secs = _arg;
    return *this;
  }
  Type & set__precision_timestamp_fractional_secs(
    const uint32_t & _arg)
  {
    this->precision_timestamp_fractional_secs = _arg;
    return *this;
  }
  Type & set__is_recording(
    const bool & _arg)
  {
    this->is_recording = _arg;
    return *this;
  }
  Type & set__model_list_changed(
    const bool & _arg)
  {
    this->model_list_changed = _arg;
    return *this;
  }
  Type & set__body_count(
    const uint32_t & _arg)
  {
    this->body_count = _arg;
    return *this;
  }
  Type & set__bodies(
    const std::vector<wyrm_msgs::msg::RigidBody_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wyrm_msgs::msg::RigidBody_<ContainerAllocator>>> & _arg)
  {
    this->bodies = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wyrm_msgs::msg::Frame_<ContainerAllocator> *;
  using ConstRawPtr =
    const wyrm_msgs::msg::Frame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wyrm_msgs::msg::Frame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wyrm_msgs::msg::Frame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wyrm_msgs::msg::Frame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wyrm_msgs::msg::Frame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wyrm_msgs::msg::Frame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wyrm_msgs::msg::Frame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wyrm_msgs::msg::Frame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wyrm_msgs::msg::Frame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wyrm_msgs__msg__Frame
    std::shared_ptr<wyrm_msgs::msg::Frame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wyrm_msgs__msg__Frame
    std::shared_ptr<wyrm_msgs::msg::Frame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Frame_ & other) const
  {
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->precision_timestamp_secs != other.precision_timestamp_secs) {
      return false;
    }
    if (this->precision_timestamp_fractional_secs != other.precision_timestamp_fractional_secs) {
      return false;
    }
    if (this->is_recording != other.is_recording) {
      return false;
    }
    if (this->model_list_changed != other.model_list_changed) {
      return false;
    }
    if (this->body_count != other.body_count) {
      return false;
    }
    if (this->bodies != other.bodies) {
      return false;
    }
    return true;
  }
  bool operator!=(const Frame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Frame_

// alias to use template instance with default allocator
using Frame =
  wyrm_msgs::msg::Frame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wyrm_msgs

#endif  // WYRM_MSGS__MSG__DETAIL__FRAME__STRUCT_HPP_
