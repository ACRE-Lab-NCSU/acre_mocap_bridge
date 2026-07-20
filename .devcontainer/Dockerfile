FROM ros:humble
ARG USERNAME=USERNAME
ARG USER_UID=1000
ARG USER_GID=$USER_UID

# Delete user if it exists in container
RUN if id -u $USER_UID ; then userdel `id -un $USER_UID` ; fi

# Create the user
RUN groupadd --gid $USER_GID $USERNAME \
    && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME \
    #
    # [Optional] Add sudo support
    && apt-get update \
    && apt-get install -y sudo \
    && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
    && chmod 0440 /etc/sudoers.d/$USERNAME

# Package installation
RUN apt-get update && apt-get upgrade -y
RUN apt-get install -y \
    python3-pip \
    ros-humble-demo-nodes-cpp \
    ros-humble-demo-nodes-py \
    git \
    wget \
    curl \
    python3-colcon-common-extensions \
    cmake \
    ros-humble-rmw-cyclonedds-cpp \
    ros-humble-rosidl-generator-dds-idl \
    libyaml-cpp-dev \
    ros-humble-librealsense2* \
    ros-humble-realsense2-camera \
    ros-humble-realsense2-description \
    ros-humble-rko-lio \
    && rm -rf /var/lib/apt/lists/*

# Environment configuration
ENV SHELL /bin/bash

# Source ROS for developer user
RUN echo "source /opt/ros/humble/setup.bash" >> /home/$USERNAME/.bashrc

# Build packages
RUN echo "colcon build"
RUN echo "source ./install/setup.bash"

# [Optional] Set the default user. Omit if you want to keep the default as root.
USER $USERNAME
CMD ["/bin/bash"]
