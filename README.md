# acre_mocap_bridge
## Introduction
**acre_mocap_bridge** is a ROS2 package that bridges Motive MOCAP data published by [Wyrm](https://github.com/nick-Sutton/wyrm) and republishes it as individual robot pose topics for use within ROS2. 
Before using **acre_mocap_bridge** please familiarize yourself with [Mocap System wiki page](https://github.com/ACRE-Lab-NCSU/ACRE-Wiki/wiki/Mocap-System).

## Before using acre_mocap_bridge
Wyrm and acre_mocap_bridge communicate over CyclonDDS using UDP multicast on loopback. Before running acre_mocap_bridge, run the following commands on your **host machine** (not inside the container) to enable this networking:

```code
sudo ip link set lo multicast on
sudo ufw alllow out proto udp to 224.0.0.0/4
sudo ufw allow in proto udp from 224.0.0.0/4
```

These commands enable UDP multicast on the loopback interface so DDS discovery traffic between Wyrm and acre_mocap_bridge can reach both processes. Without this, the package will build and run without error, but the bridge node will never see any Wyrm topics.

## Getting Started
To run the **acre_mocap_bridge** package, clone the repository into a local workspace using one of the following methods:

- [VS Code](https://code.visualstudio.com/download?_exp_download=fb315fc982) with the Dev Containers extension (recommended)
- Any other **IDE** with Docker/devcontainer support
- The command line, using the included `run.sh` script **(*not available yet)**

### Option 1: VS Code
1. Open the cloned repository in VS Code.
2. Before building the container, open `.devcontainer/devcontainer.json` and replace the `remoteUser` field with your username:

```json
 "remoteUser": "YOUR_USERNAME",
```

3. Build and enter the container: `Ctrl+Shift+P` -> **Dev Containers: Rebuild and Reopen in Container**


## Building the Packages
Once the container has completed building, navigate to the workspace source folder and run:

```code
colcon build
source ./install/setup.bash
```

This builds both the **wyrm_msgs** and **wyrm_mocap_bridge_pkg** pacakges and sources the workspace so ROS2 can find them. 

## Package Descriptions

### wyrm_mocap_bridge_pkg
**wyrm_mocap_bridge** subscribes to the `/WyrmFrame` and `/WyrmDescription` topics published by **Wyrm** and republishes each traced rigid body as it's own individual ROS2 pose topic (`/geom_msg/PoseStamped`). Downstream nodes can then consume per-robot pose data without needing to parse the full **WyrmFrame** repetitively. Topics are published as:

```
rt/robot_name_pos
```

### wyrm_msgs
**wyrm_msgs** provides msg files for the ros-idl-generator to generate the relevant idl files for ROS to interpret the `/WyrmFrame` and `/WyrmDescription` topic messages. Wyrm publishes messages via cyclonedds, so a specific idl structure is required for ROS to recognize Wyrm topics as valid ROS topics. 


