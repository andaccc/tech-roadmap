# Gazebo Ros Simulation 

## Environment
Gazebo Harmonic
Ros Iron (ros2)

### Install Gazebo
https://gazebosim.org/docs/harmonic/install_ubuntu
```shell
sudo apt-get update
sudo apt-get install lsb-release wget gnupg

sudo wget https://packages.osrfoundation.org/gazebo.gpg -O /usr/share/keyrings/pkgs-osrf-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/pkgs-osrf-archive-keyring.gpg] http://packages.osrfoundation.org/gazebo/ubuntu-stable $(lsb_release -cs) main" | sudo tee /etc/apt/sources.list.d/gazebo-stable.list > /dev/null
sudo apt-get update
sudo apt-get install gz-harmonic
```

### Test Gazebo
https://gazebosim.org/docs

```shell
# Start gazebo sim
gz sim -v 4 -r visualize_lidar.sdf

# Test control
gz topic -e -t /model/vehicle_blue/cmd_vel

gz topic -t /model/vehicle_blue/cmd_vel -m gz.msgs.Twist -p "linear: { x: 0.1 }”
```

![image](https://github.com/andaccc/tech-roadmap/assets/8611553/0cb81ed4-a6cf-45a1-af4e-d39f27bf0b26)


### Install Ros gz bridge
ros topic: `/model/vehicle_blue/cmd_vel`, Type `geometry_msgs/msg/Twist`

to 

gz topic: `/model/vehicle_blue/cmd_vel`, Type `gz.msgs.Twist`


```shell
sudo apt install ros-iron-ros-gzharmonic-bridge

ros2 run ros_gz_bridge parameter_bridge /model/vehicle_blue/cmd_vel@geometry_msgs/msg/Twist]gz.msgs.Twist

# Test
ros2 topic pub /model/vehicle_blue/cmd_vel geometry_msgs/Twist "linear: { x: 0.1 }”
```

### Install keyboard control
```shell
sudo apt install ros-iron-teleop-twist-keyboard

ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/model/vehicle_blue/cmd_vel
```

### Rviz

Lidar Data
```shell
ros2 run ros_gz_bridge parameter_bridge /lidar2@sensor_msgs/msg/LaserScan[gz.msgs.LaserScan --ros-args -r /lidar2:=/laser_scan

rviz2
```
`Global Options` -> `Fixed Frame` to `vehicle_blue/lidar_link/gpu_lidar`

![image](https://github.com/andaccc/tech-roadmap/assets/8611553/8473ff28-2267-4793-ac8d-5cd6976650ee)


# Reference 
https://docs.ros.org/en/iron/Tutorials/Advanced/Simulators/Gazebo/Gazebo.html
