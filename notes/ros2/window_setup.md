# Window installation

docs.ros.org/en/crystal/Installation/Windows-Install-Binary.html

### Choco

https://chocolatey.org/install#individual



### Open SSL
- No Light version
- Path `C:\OpenSSL-Win64\bin\` to Env Var

slproweb.com/products/Win32OpenSSL.html


### ROS 2

Unzip and install by PowerShell
`C:\dev\ros2-windows\local_setup.ps1`

Require DDS
https://answers.ros.org/question/379164/rti-connext-dds-environment-script-not-found-ros2-on-windows/

---
## WSL2 
install Ubuntu 22.04 LTS
- ```wsl --install -d Ubuntu-22.04```

### Install Ros 2 Iron
https://docs.ros.org/en/iron/Installation/Ubuntu-Install-Debians.html

### UI (for RViz / Gazebo)
https://zenn.dev/toitoy8/articles/220514_py-roslibpy_rosbridge

- `sudo apt install x11-apps -y `
- to `~/.bashrc`
  - `export DISPLAY=$(cat /etc/resolv.conf | grep nameserver | awk '{print $2}'):0`
- window install VcXsrv
- start `Xlaunch` 
  - configure `-ac -nowgl`

- test
  - `sudo apt install -y ros-$ROS_DISTRO-rosbridge-suite` 
  - `ros2 launch rosbridge_server rosbridge_websocket_launch.xml`
  - `ros2 run turtlesim turtlesim_node`  
  - Window
     `pip3 install roslibpy`
```python
# -*- coding:utf8 -*-
import time
from roslibpy import Message, Ros, Topic
def main():
    
    # roscoreを実行しているサーバーへ接続
    ros_client = Ros('localhost', 9090)
    # Publishするtopicを指定
    publisher = Topic(ros_client, '/turtle1/cmd_vel', 'geometry_msgs/Twist')
    def start_sending():
        while True:
            if not ros_client.is_connected:
                break
            
            # 送信するTwistメッセージの内容
            publisher.publish(Message({
                'linear': {
                    'x': 2.0,
                    'y': 0,
                    'z': 0
                },
                'angular': {
                    'x': 0,
                    'y': 0,
                    'z': 1.8
                }
            }))
            time.sleep(0.1)
        publisher.unadvertise()
    # Publish開始
    ros_client.on_ready(start_sending, run_in_thread=True)
    ros_client.run_forever()
if __name__ == '__main__':
    main()
 ```

---
# Rviz

- window start `Xlaunch`
- `$ rviz2`
