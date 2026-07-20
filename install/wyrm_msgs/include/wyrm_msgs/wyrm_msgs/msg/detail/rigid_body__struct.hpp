// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wyrm_msgs:msg/RigidBody.idl
// generated code does not contain a copyright notice

#ifndef WYRM_MSGS__MSG__DETAIL__RIGID_BODY__STRUCT_HPP_
#define WYRM_MSGS__MSG__DETAIL__RIGID_BODY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wyrm_msgs__msg__RigidBody __attribute__((deprecated))
#else
# define DEPRECATED__wyrm_msgs__msg__RigidBody __declspec(deprecated)
#endif

namespace wyrm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RigidBody_
{
  using Type = RigidBody_<ContainerAllocator>;

  explicit RigidBody_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    orientation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->name = "";
      this->mean_error = 0.0;
      this->tracking_lost = false;
      this->model_filled = false;
    }
  }

  explicit RigidBody_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    position(_alloc, _init),
    orientation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->name = "";
      this->mean_error = 0.0;
      this->tracking_lost = false;
      this->model_filled = false;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _mean_error_type =
    double;
  _mean_error_type mean_error;
  using _tracking_lost_type =
    bool;
  _tracking_lost_type tracking_lost;
  using _model_filled_type =
    bool;
  _model_filled_type model_filled;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__mean_error(
    const double & _arg)
  {
    this->mean_error = _arg;
    return *this;
  }
  Type & set__tracking_lost(
    const bool & _arg)
  {
    this->tracking_lost = _arg;
    return *this;
  }
  Type & set__model_filled(
    const bool & _arg)
  {
    this->model_filled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wyrm_msgs::msg::RigidBody_<ContainerAllocator> *;
  using ConstRawPtr =
    const wyrm_msgs::msg::RigidBody_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wyrm_msgs::msg::RigidBody_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wyrm_msgs::msg::RigidBody_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wyrm_msgs::msg::RigidBody_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wyrm_msgs::msg::RigidBody_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wyrm_msgs::msg::RigidBody_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wyrm_msgs::msg::RigidBody_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wyrm_msgs::msg::RigidBody_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wyrm_msgs::msg::RigidBody_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wyrm_msgs__msg__RigidBody
    std::shared_ptr<wyrm_msgs::msg::RigidBody_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wyrm_msgs__msg__RigidBody
    std::shared_ptr<wyrm_msgs::msg::RigidBody_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RigidBody_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->mean_error != other.mean_error) {
      return false;
    }
    if (this->tracking_lost != other.tracking_lost) {
      return false;
    }
    if (this->model_filled != other.model_filled) {
      return false;
    }
    return true;
  }
  bool operator!=(const RigidBody_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RigidBody_

// alias to use template instance with default allocator
using RigidBody =
  wyrm_msgs::msg::RigidBody_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wyrm_msgs

#endif  // WYRM_MSGS__MSG__DETAIL__RIGID_BODY__STRUCT_HPP_
