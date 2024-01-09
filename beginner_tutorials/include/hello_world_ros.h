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
public:                 //declaring constructors and destructors as public
  HelloWorldRos();             //constructors
  ~HelloWorldRos();            //destructors

  void MainLoop();  

private:
  void HelloFunction(string strIn);    //member function

  string strHello_;                    //member variable
};
