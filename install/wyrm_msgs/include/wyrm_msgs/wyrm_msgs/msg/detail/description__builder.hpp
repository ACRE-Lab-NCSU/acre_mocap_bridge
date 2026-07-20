// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wyrm_msgs:msg/Description.idl
// generated code does not contain a copyright notice

#ifndef WYRM_MSGS__MSG__DETAIL__DESCRIPTION__BUILDER_HPP_
#define WYRM_MSGS__MSG__DETAIL__DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wyrm_msgs/msg/detail/description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wyrm_msgs
{

namespace msg
{

namespace builder
{

class Init_Description_num_markers
{
public:
  explicit Init_Description_num_markers(::wyrm_msgs::msg::Description & msg)
  : msg_(msg)
  {}
  ::wyrm_msgs::msg::Description num_markers(::wyrm_msgs::msg::Description::_num_markers_type arg)
  {
    msg_.num_markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wyrm_msgs::msg::Description msg_;
};

class Init_Description_name
{
public:
  explicit Init_Description_name(::wyrm_msgs::msg::Description & msg)
  : msg_(msg)
  {}
  Init_Description_num_markers name(::wyrm_msgs::msg::Description::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Description_num_markers(msg_);
  }

private:
  ::wyrm_msgs::msg::Description msg_;
};

class Init_Description_parent_id
{
public:
  explicit Init_Description_parent_id(::wyrm_msgs::msg::Description & msg)
  : msg_(msg)
  {}
  Init_Description_name parent_id(::wyrm_msgs::msg::Description::_parent_id_type arg)
  {
    msg_.parent_id = std::move(arg);
    return Init_Description_name(msg_);
  }

private:
  ::wyrm_msgs::msg::Description msg_;
};

class Init_Description_id
{
public:
  Init_Description_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Description_parent_id id(::wyrm_msgs::msg::Description::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Description_parent_id(msg_);
  }

private:
  ::wyrm_msgs::msg::Description msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wyrm_msgs::msg::Description>()
{
  return wyrm_msgs::msg::builder::Init_Description_id();
}

}  // namespace wyrm_msgs

#endif  // WYRM_MSGS__MSG__DETAIL__DESCRIPTION__BUILDER_HPP_
