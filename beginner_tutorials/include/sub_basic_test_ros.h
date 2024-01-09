// using vector type data
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctime>
#include <vector>

// essential header for ROS-OpenCV operation
#include <ros/ros.h>

// for using standard messages
#include <std_msgs/Float32MultiArray.h>
#include <std_msgs/String.h>

using namespace std;
using namespace ros;

class SubBasicTestNode
{
public:
  SubBasicTestNode();
  ~SubBasicTestNode();

  void MainLoop();

private:
  void SubBasicTestFunc();
  
  // node handler in class
  NodeHandle nh_;

  // subscriber, string
  void currStrCbLoop(const std_msgs::String::ConstPtr& msgRaw);    //callback function
  Subscriber subHelloWorldStr_;                                    //Subscriber
  std_msgs::String msgHelloWorldStr_;                              //msg type
  bool bStrCbLoop;                                                 //tell wheter callback loop is alive

  // subscriber, float32 multi-array
  void currFloat32MtArrayCbLoop(const std_msgs::Float32MultiArray::ConstPtr& msgRaw);
  Subscriber subFloat32MultiArray_;
  std_msgs::Float32MultiArray msgFloat32MultiArray_;
  bool bF32ArrayCbLoop;
};