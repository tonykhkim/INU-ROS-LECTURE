#include "hello_world_ros.h"

using namespace std;
using namespace ros;

/*--------------------------------------------------------------------
 * main()
 * Main function to set up ROS node.
 *------------------------------------------------------------------*/

int main(int argc, char** argv)
{
  // Set up ROS.
  init(argc, argv, "hello_world_ros_node");
  NodeHandle nh("");

  HelloWorldRos helloWorldRos;     //classname  objectname  

  // Tell ROS how fast to run this node.
  Rate loopRate(30);

  // Main loop.
  while (ok())
  {
    helloWorldRos.MainLoop();

    spinOnce();
    loopRate.sleep();
  }

  helloWorldRos.~HelloWorldRos();        //ctrl+C로 종료 안될때 사용하는 소멸자 선언

  return 0;
}  // end main()
