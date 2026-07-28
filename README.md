# acre_mocap_bridge
## Introduction
the **acre_mocap_bridge** package is a ROS2 package used to bridge Motive MOCAP data published by [Wyrm](https://github.com/nick-Sutton/wyrm) and publish individual robot pose topics. Before using **acre_mocap_bridge** please familiarize yourself with [Mocap System](https://github.com/ACRE-Lab-NCSU/ACRE-Wiki/wiki/Mocap-System).

## Before using acre_mocap_bridge
There are some commands that must be run on the local host machine in order to enable successful networking between the **Wyrm** and **acre_mocap_bridge** packages. Open a terminal of your choice and enter the following commands:

```code
sudo ip link set lo multicast on
sudo ufw alllow out proto udp to 224.0.0.0/4
sudo ufw allow in proto udp from 224.0.0.0/4
```

These commands enable UDP multicast on the loopback port, so that the ROS2 package builds and runs with no errors.

## Using acre_mocap_bridge
To run the **acre_mocap_bridge** package, clone the repository into a local workspace and then either open the repository in [VS Code](https://code.visualstudio.com/download?_exp_download=fb315fc982) OR your preferred IDE with Docker support OR run the run.sh script from your terminal of choice if you prefer to run your Docker containers strictly from the command line. 

### Opening the container in VS Code
Upon opening the repository within VS Code, you will be prompted to re-open and build the Docker Container. Before this, you must navigate to .devcontainer/devcontainer.json and replace the "remoteUser" field with your username:

```code
 "remoteUser": "YOUR_USERNAME",
```

You can then build the Docker container with: _Ctrl + Shift + P -> Rebuild and Reopen in Container._

## Packages
Once the container has completed building, navigate to the source workspace folder and run:

```code
colcon build
source ./install/setup.bash
```

This will build both the **wyrm_msgs** and **wyrm_mocap_bridge_pkg packages**, and source them for ROS. 


### Wyrm_mocap_bridge_pkg


### Wyrm_msgs


