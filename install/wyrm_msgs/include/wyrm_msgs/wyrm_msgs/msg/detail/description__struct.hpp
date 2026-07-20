// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wyrm_msgs:msg/Description.idl
// generated code does not contain a copyright notice

#ifndef WYRM_MSGS__MSG__DETAIL__DESCRIPTION__STRUCT_HPP_
#define WYRM_MSGS__MSG__DETAIL__DESCRIPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wyrm_msgs__msg__Description __attribute__((deprecated))
#else
# define DEPRECATED__wyrm_msgs__msg__Description __declspec(deprecated)
#endif

namespace wyrm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Description_
{
  using Type = Description_<ContainerAllocator>;

  explicit Description_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->parent_id = 0l;
      this->name = "";
      this->num_markers = 0l;
    }
  }

  explicit Description_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->parent_id = 0l;
      this->name = "";
      this->num_markers = 0l;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _parent_id_type =
    int32_t;
  _parent_id_type parent_id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _num_markers_type =
    int32_t;
  _num_markers_type num_markers;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__parent_id(
    const int32_t & _arg)
  {
    this->parent_id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__num_markers(
    const int32_t & _arg)
  {
    this->num_markers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wyrm_msgs::msg::Description_<ContainerAllocator> *;
  using ConstRawPtr =
    const wyrm_msgs::msg::Description_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wyrm_msgs::msg::Description_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wyrm_msgs::msg::Description_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wyrm_msgs::msg::Description_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wyrm_msgs::msg::Description_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wyrm_msgs::msg::Description_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wyrm_msgs::msg::Description_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wyrm_msgs::msg::Description_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wyrm_msgs::msg::Description_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wyrm_msgs__msg__Description
    std::shared_ptr<wyrm_msgs::msg::Description_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wyrm_msgs__msg__Description
    std::shared_ptr<wyrm_msgs::msg::Description_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Description_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->parent_id != other.parent_id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->num_markers != other.num_markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const Description_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Description_

// alias to use template instance with default allocator
using Description =
  wyrm_msgs::msg::Description_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wyrm_msgs

#endif  // WYRM_MSGS__MSG__DETAIL__DESCRIPTION__STRUCT_HPP_
