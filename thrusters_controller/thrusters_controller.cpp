#include "thrusters_controller.h"
#include "ros/ros.h"
#include "std_msgs/Int32MultiArray.h"
#include <iostream>


ros::NodeHandle* nh;
ros::Publisher* pwm_pub;
std_msgs::Int32MultiArray* pwm_msg;
float limitToRange(float value, float minimum, float maximum);

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
         
         pwm_msg->data[i] = ZERO_THRUST_PWM + thrust_vector[i]* (MAX_PWM - ZERO_THRUST_PWM)/FULL_THRUST;
         pwm_msg->data[i] = limitToRange(pwm_msg->data[i],MIN_PWM,MAX_PWM);
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


float limitToRange(float value, float minimum, float maximum){
    if (value > maximum)
    {
        return maximum;
    }
    else if (value < minimum)
    {
        return minimum;
    }
    else
    {
        return value;
    }
    
    
    
}