// using vector type data
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctime>
#include <vector>

// essential header for ROS-OpenCV operation
#include <ros/ros.h>

using namespace std;
using namespace ros;

class HelloWorldRos
{
public:                 //public으로 생성자와 소멸자 선언
  HelloWorldRos();
  ~HelloWorldRos();

  void MainLoop();  

private:
  void HelloFunction(string strIn);    //member function

  string strHello_;                    //member variable
};
