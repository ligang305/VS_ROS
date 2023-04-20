#include "ros/ros.h"

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "HelloVSCode");
    ROS_INFO("HELLO vscode ... 嘿嘿嘿嘻嘻嘻...");
    return 0;
}
