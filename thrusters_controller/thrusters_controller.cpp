#include "thrusters_controller.h"
#include "ros/ros.h"
#include "std_msgs/Int32MultiArray.h"
#include <iostream>


ros::NodeHandle* nh;
ros::Publisher* pwm_pub;
std_msgs::Int32MultiArray* pwm_msg;

void ThrustersController::init(){
    int argc = 0;
    ros::init(argc,NULL,"thrusters_controller");
    nh = new ros::NodeHandle;
    pwm_pub = new ros::Publisher;
    pwm_msg = new std_msgs::Int32MultiArray;
    *pwm_pub = nh->advertise<std_msgs::Int32MultiArray>("/pwm_values",50);
    pwm_msg->data.resize(NUMBER_OF_THRUSTERS);


}

void ThrustersController::writeThrusterValues(float* thrust_vector){
    for (int i = 0; i < NUMBER_OF_THRUSTERS; i++)
    {
         pwm_msg->data[i] = thrust_vector[i];
    }
    pwm_pub->publish(*pwm_msg);
}


void ThrustersController::refresh(){
    ros::spinOnce();
}


void ThrustersController::shutdown(){
    delete nh;
    delete pwm_pub;
    delete pwm_msg;

}