cmake_minimum_required(VERSION 3.8)
project(wyrm_msgs)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)

# Generate the messages
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Description.msg"
  "msg/RigidBody.msg"
  "msg/Frame.msg"
  DEPENDENCIES geometry_msgs
)

# This tells CMake how to install the package interfaces cleanly
ament_export_dependencies(rosidl_default_generators)

ament_package()
