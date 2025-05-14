#include "LIVMapper.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "laserMapping");
  ros::NodeHandle nh;
  image_transport::ImageTransport it(nh);//创建一个ImageTransport对象it，用于处理ROS中的图像消息。
  LIVMapper mapper(nh); 
  mapper.initializeSubscribersAndPublishers(nh, it);//初始化该类的订阅者和发布者
  mapper.run();
  return 0;
}