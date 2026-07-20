// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wyrm_msgs:msg/RigidBody.idl
// generated code does not contain a copyright notice

#ifndef WYRM_MSGS__MSG__DETAIL__RIGID_BODY__BUILDER_HPP_
#define WYRM_MSGS__MSG__DETAIL__RIGID_BODY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wyrm_msgs/msg/detail/rigid_body__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wyrm_msgs
{

namespace msg
{

namespace builder
{

class Init_RigidBody_model_filled
{
public:
  explicit Init_RigidBody_model_filled(::wyrm_msgs::msg::RigidBody & msg)
  : msg_(msg)
  {}
  ::wyrm_msgs::msg::RigidBody model_filled(::wyrm_msgs::msg::RigidBody::_model_filled_type arg)
  {
    msg_.model_filled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wyrm_msgs::msg::RigidBody msg_;
};

class Init_RigidBody_tracking_lost
{
public:
  explicit Init_RigidBody_tracking_lost(::wyrm_msgs::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_model_filled tracking_lost(::wyrm_msgs::msg::RigidBody::_tracking_lost_type arg)
  {
    msg_.tracking_lost = std::move(arg);
    return Init_RigidBody_model_filled(msg_);
  }

private:
  ::wyrm_msgs::msg::RigidBody msg_;
};

class Init_RigidBody_mean_error
{
public:
  explicit Init_RigidBody_mean_error(::wyrm_msgs::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_tracking_lost mean_error(::wyrm_msgs::msg::RigidBody::_mean_error_type arg)
  {
    msg_.mean_error = std::move(arg);
    return Init_RigidBody_tracking_lost(msg_);
  }

private:
  ::wyrm_msgs::msg::RigidBody msg_;
};

class Init_RigidBody_orientation
{
public:
  explicit Init_RigidBody_orientation(::wyrm_msgs::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_mean_error orientation(::wyrm_msgs::msg::RigidBody::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_RigidBody_mean_error(msg_);
  }

private:
  ::wyrm_msgs::msg::RigidBody msg_;
};

class Init_RigidBody_position
{
public:
  explicit Init_RigidBody_position(::wyrm_msgs::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_orientation position(::wyrm_msgs::msg::RigidBody::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RigidBody_orientation(msg_);
  }

private:
  ::wyrm_msgs::msg::RigidBody msg_;
};

class Init_RigidBody_name
{
public:
  explicit Init_RigidBody_name(::wyrm_msgs::msg::RigidBody & msg)
  : msg_(msg)
  {}
  Init_RigidBody_position name(::wyrm_msgs::msg::RigidBody::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RigidBody_position(msg_);
  }

private:
  ::wyrm_msgs::msg::RigidBody msg_;
};

class Init_RigidBody_id
{
public:
  Init_RigidBody_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RigidBody_name id(::wyrm_msgs::msg::RigidBody::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RigidBody_name(msg_);
  }

private:
  ::wyrm_msgs::msg::RigidBody msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wyrm_msgs::msg::RigidBody>()
{
  return wyrm_msgs::msg::builder::Init_RigidBody_id();
}

}  // namespace wyrm_msgs

#endif  // WYRM_MSGS__MSG__DETAIL__RIGID_BODY__BUILDER_HPP_
