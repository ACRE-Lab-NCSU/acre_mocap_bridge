// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wyrm_msgs:msg/Description.idl
// generated code does not contain a copyright notice

#ifndef WYRM_MSGS__MSG__DETAIL__DESCRIPTION__TRAITS_HPP_
#define WYRM_MSGS__MSG__DETAIL__DESCRIPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wyrm_msgs/msg/detail/description__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wyrm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Description & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: parent_id
  {
    out << "parent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_id, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: num_markers
  {
    out << "num_markers: ";
    rosidl_generator_traits::value_to_yaml(msg.num_markers, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Description & msg,
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

  // member: parent_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_id, out);
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

  // member: num_markers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_markers: ";
    rosidl_generator_traits::value_to_yaml(msg.num_markers, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Description & msg, bool use_flow_style = false)
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
  const wyrm_msgs::msg::Description & msg,
  std::ostream & out, size_t indentation = 0)
{
  wyrm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wyrm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wyrm_msgs::msg::Description & msg)
{
  return wyrm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wyrm_msgs::msg::Description>()
{
  return "wyrm_msgs::msg::Description";
}

template<>
inline const char * name<wyrm_msgs::msg::Description>()
{
  return "wyrm_msgs/msg/Description";
}

template<>
struct has_fixed_size<wyrm_msgs::msg::Description>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wyrm_msgs::msg::Description>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wyrm_msgs::msg::Description>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WYRM_MSGS__MSG__DETAIL__DESCRIPTION__TRAITS_HPP_
