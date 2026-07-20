// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wyrm_msgs:msg/RigidBody.idl
// generated code does not contain a copyright notice

#ifndef WYRM_MSGS__MSG__DETAIL__RIGID_BODY__TRAITS_HPP_
#define WYRM_MSGS__MSG__DETAIL__RIGID_BODY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wyrm_msgs/msg/detail/rigid_body__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace wyrm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RigidBody & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: mean_error
  {
    out << "mean_error: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_error, out);
    out << ", ";
  }

  // member: tracking_lost
  {
    out << "tracking_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_lost, out);
    out << ", ";
  }

  // member: model_filled
  {
    out << "model_filled: ";
    rosidl_generator_traits::value_to_yaml(msg.model_filled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RigidBody & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: mean_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_error: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_error, out);
    out << "\n";
  }

  // member: tracking_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.tracking_lost, out);
    out << "\n";
  }

  // member: model_filled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_filled: ";
    rosidl_generator_traits::value_to_yaml(msg.model_filled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RigidBody & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wyrm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wyrm_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wyrm_msgs::msg::RigidBody & msg,
  std::ostream & out, size_t indentation = 0)
{
  wyrm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wyrm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wyrm_msgs::msg::RigidBody & msg)
{
  return wyrm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wyrm_msgs::msg::RigidBody>()
{
  return "wyrm_msgs::msg::RigidBody";
}

template<>
inline const char * name<wyrm_msgs::msg::RigidBody>()
{
  return "wyrm_msgs/msg/RigidBody";
}

template<>
struct has_fixed_size<wyrm_msgs::msg::RigidBody>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wyrm_msgs::msg::RigidBody>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wyrm_msgs::msg::RigidBody>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WYRM_MSGS__MSG__DETAIL__RIGID_BODY__TRAITS_HPP_
