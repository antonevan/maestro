#!/bin/bash
source /opt/ros/diamondback/setup.sh
export PYTHONPATH=$PYTHONPATH:`openrave-config --python-dir`:/opt/ros/diamondback/ros/core/roslib/src:/opt/ros/diamondback/stacks/ros_comm/clients/rospy/src:/opt/ros/diamondback/stacks/ros_comm/messages/std_msgs/src
cp src/maestro.py /opt/ros/diamondback/stacks/openrave_planning/openrave_robot_control/.
chmod +x /opt/ros/diamondback/stacks/openrave_planning_openrave_robot_control/maestro.py
roslaunch openrave_robot_control jaemi_hubo.launch.xml
