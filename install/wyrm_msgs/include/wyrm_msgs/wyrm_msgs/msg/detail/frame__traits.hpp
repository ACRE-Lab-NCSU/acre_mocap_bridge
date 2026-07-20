// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wyrm_msgs:msg/Frame.idl
// generated code does not contain a copyright notice

#ifndef WYRM_MSGS__MSG__DETAIL__FRAME__TRAITS_HPP_
#define WYRM_MSGS__MSG__DETAIL__FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wyrm_msgs/msg/detail/frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bodies'
#include "wyrm_msgs/msg/detail/rigid_body__traits.hpp"

namespace wyrm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Frame & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: precision_timestamp_secs
  {
    out << "precision_timestamp_secs: ";
    rosidl_generator_traits::value_to_yaml(msg.precision_timestamp_secs, out);
    out << ", ";
  }

  // member: precision_timestamp_fractional_secs
  {
    out << "precision_timestamp_fractional_secs: ";
    rosidl_generator_traits::value_to_yaml(msg.precision_timestamp_fractional_secs, out);
    out << ", ";
  }

  // member: is_recording
  {
    out << "is_recording: ";
    rosidl_generator_traits::value_to_yaml(msg.is_recording, out);
    out << ", ";
  }

  // member: model_list_changed
  {
    out << "model_list_changed: ";
    rosidl_generator_traits::value_to_yaml(msg.model_list_changed, out);
    out << ", ";
  }

  // member: body_count
  {
    out << "body_count: ";
    rosidl_generator_traits::value_to_yaml(msg.body_count, out);
    out << ", ";
  }

  // member: bodies
  {
    if (msg.bodies.size() == 0) {
      out << "bodies: []";
    } else {
      out << "bodies: [";
      size_t pending_items = msg.bodies.size();
      for (auto item : msg.bodies) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Frame & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: precision_timestamp_secs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "precision_timestamp_secs: ";
    rosidl_generator_traits::value_to_yaml(msg.precision_timestamp_secs, out);
    out << "\n";
  }

  // member: precision_timestamp_fractional_secs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "precision_timestamp_fractional_secs: ";
    rosidl_generator_traits::value_to_yaml(msg.precision_timestamp_fractional_secs, out);
    out << "\n";
  }

  // member: is_recording
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_recording: ";
    rosidl_generator_traits::value_to_yaml(msg.is_recording, out);
    out << "\n";
  }

  // member: model_list_changed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_list_changed: ";
    rosidl_generator_traits::value_to_yaml(msg.model_list_changed, out);
    out << "\n";
  }

  // member: body_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_count: ";
    rosidl_generator_traits::value_to_yaml(msg.body_count, out);
    out << "\n";
  }

  // member: bodies
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bodies.size() == 0) {
      out << "bodies: []\n";
    } else {
      out << "bodies:\n";
      for (auto item : msg.bodies) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Frame & msg, bool use_flow_style = false)
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
  const wyrm_msgs::msg::Frame & msg,
  std::ostream & out, size_t indentation = 0)
{
  wyrm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wyrm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wyrm_msgs::msg::Frame & msg)
{
  return wyrm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wyrm_msgs::msg::Frame>()
{
  return "wyrm_msgs::msg::Frame";
}

template<>
inline const char * name<wyrm_msgs::msg::Frame>()
{
  return "wyrm_msgs/msg/Frame";
}

template<>
struct has_fixed_size<wyrm_msgs::msg::Frame>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wyrm_msgs::msg::Frame>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wyrm_msgs::msg::Frame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WYRM_MSGS__MSG__DETAIL__FRAME__TRAITS_HPP_
