// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wyrm_msgs:msg/Frame.idl
// generated code does not contain a copyright notice

#ifndef WYRM_MSGS__MSG__DETAIL__FRAME__BUILDER_HPP_
#define WYRM_MSGS__MSG__DETAIL__FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wyrm_msgs/msg/detail/frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wyrm_msgs
{

namespace msg
{

namespace builder
{

class Init_Frame_bodies
{
public:
  explicit Init_Frame_bodies(::wyrm_msgs::msg::Frame & msg)
  : msg_(msg)
  {}
  ::wyrm_msgs::msg::Frame bodies(::wyrm_msgs::msg::Frame::_bodies_type arg)
  {
    msg_.bodies = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wyrm_msgs::msg::Frame msg_;
};

class Init_Frame_body_count
{
public:
  explicit Init_Frame_body_count(::wyrm_msgs::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_bodies body_count(::wyrm_msgs::msg::Frame::_body_count_type arg)
  {
    msg_.body_count = std::move(arg);
    return Init_Frame_bodies(msg_);
  }

private:
  ::wyrm_msgs::msg::Frame msg_;
};

class Init_Frame_model_list_changed
{
public:
  explicit Init_Frame_model_list_changed(::wyrm_msgs::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_body_count model_list_changed(::wyrm_msgs::msg::Frame::_model_list_changed_type arg)
  {
    msg_.model_list_changed = std::move(arg);
    return Init_Frame_body_count(msg_);
  }

private:
  ::wyrm_msgs::msg::Frame msg_;
};

class Init_Frame_is_recording
{
public:
  explicit Init_Frame_is_recording(::wyrm_msgs::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_model_list_changed is_recording(::wyrm_msgs::msg::Frame::_is_recording_type arg)
  {
    msg_.is_recording = std::move(arg);
    return Init_Frame_model_list_changed(msg_);
  }

private:
  ::wyrm_msgs::msg::Frame msg_;
};

class Init_Frame_precision_timestamp_fractional_secs
{
public:
  explicit Init_Frame_precision_timestamp_fractional_secs(::wyrm_msgs::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_is_recording precision_timestamp_fractional_secs(::wyrm_msgs::msg::Frame::_precision_timestamp_fractional_secs_type arg)
  {
    msg_.precision_timestamp_fractional_secs = std::move(arg);
    return Init_Frame_is_recording(msg_);
  }

private:
  ::wyrm_msgs::msg::Frame msg_;
};

class Init_Frame_precision_timestamp_secs
{
public:
  explicit Init_Frame_precision_timestamp_secs(::wyrm_msgs::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_precision_timestamp_fractional_secs precision_timestamp_secs(::wyrm_msgs::msg::Frame::_precision_timestamp_secs_type arg)
  {
    msg_.precision_timestamp_secs = std::move(arg);
    return Init_Frame_precision_timestamp_fractional_secs(msg_);
  }

private:
  ::wyrm_msgs::msg::Frame msg_;
};

class Init_Frame_timestamp
{
public:
  explicit Init_Frame_timestamp(::wyrm_msgs::msg::Frame & msg)
  : msg_(msg)
  {}
  Init_Frame_precision_timestamp_secs timestamp(::wyrm_msgs::msg::Frame::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Frame_precision_timestamp_secs(msg_);
  }

private:
  ::wyrm_msgs::msg::Frame msg_;
};

class Init_Frame_frame_id
{
public:
  Init_Frame_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Frame_timestamp frame_id(::wyrm_msgs::msg::Frame::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_Frame_timestamp(msg_);
  }

private:
  ::wyrm_msgs::msg::Frame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wyrm_msgs::msg::Frame>()
{
  return wyrm_msgs::msg::builder::Init_Frame_frame_id();
}

}  // namespace wyrm_msgs

#endif  // WYRM_MSGS__MSG__DETAIL__FRAME__BUILDER_HPP_
