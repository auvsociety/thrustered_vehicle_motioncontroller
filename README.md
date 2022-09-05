# thrustered_vehicle_motioncontroller
This repo implements a C++ based class to control the motion of thrustered vehicles such as Drones, AUVs,etc. The repo can also be used with python using pybind11.

# Why This Project?
 Be it drones, ROVs, AUVs or UAVs, Even though they are mechanically different and serve different purposes. There's one thing that remains constant. To control the vehicle you have to control the speed of the motors.
 The speed ratio, no of motors and combination required to achieve a particular motion varies from vehicle to vehicle. So, instead of writing the motion control code for every vehicle each and every time, I wanted to make an abstracted object where you can edit all the above parameters by simply editing the macros for each vehicle.
 
 # Output Method:
   The current version of code, gets command and publishes the PWM values in a topic called /pwm_values in ros. The pwm values range from from 1100 to 1900 meant for BlueRobotics Blue ESC. Depending on your application you can modify the thrusters_controller.cpp file to suit your output method.
   
 # Terms and Notations Used:
 Certain terms have been used in this code for ease of usage. As i strongly believe that No matter How obvious the terms are, If not defined before usage, They do more harm than good.
 We will define certain terms used to denote different kind of Motion:
 ![motion_surge_sway_heave](https://user-images.githubusercontent.com/95476939/188468785-ba8f401e-fe0a-43a6-a1b7-d7d45ca949e3.jpg)
 Image courtesy: Formula one directory


## Surge:
    Linear Motion along X axis.
    
![surging-motion-example-surge-movement-on-cargo-ship-at-sea](https://user-images.githubusercontent.com/95476939/188467845-0a946327-43d7-4e03-b25f-b831507bea3e.gif)
GIF courtesy: FFQO.com

## Sway:
  Linear motion along Y axis.
   

## Heave:
   Linear motion along Z axis.

## Yaw:
   Rotational motion about Z axis
## pitch:
   Rotational motion about Y axis
## Roll:
  Rotational motion about X axis
 
 # Installation :
 ## C++ (ROS) :
          Currently i am not providing any prebuilt library, So the user has to build it on his own. Create your own ROS package. Clone this repo on your package/src folder. add this subdirectory. Include the header file and use the API in your code. And finally, In your CMakeLists.txt file, while building your ros node, add this line. For example, you are using this library inside a node called "ros_node".
```
      target_link_libraries( ros_node OBJECT thrustered_vehicle_motioncontroller)
```
        
 
      
 
 ## Python (ROS):
            Just add this to your ros package src folder and add this as subdirectory in the CMakeLists.txt file inside the src folder. Python Module will be automatically compiled and will be placed in your catkin_ws/devel/lib folder. import and use the module like any other python code.
 
 ## Custom Output :
             Just define your own output function and add this repo as subdirectory  in your own CMake File and  add this line:
```
      target_link_libraries( ros_node OBJECT thrustered_vehicle_motioncontroller)
``` 
 API Usage:
    
    * This code does not differentiate between any degree of freedom. So, it makes sense to define api usage for a single degree of freedom let's say Surge. this applies equall to remaining 5 Degrees. This library allows the bot to be controlled either using Open loop mode or PID (closed loop mode). The mode should be set manually before using controls on that degree of freedom. Also the updateThrustValues should be called everytime you change any of the thrust values. This can be automatically done, But I have designed it purposely so that the user can change multiple degrees of freedom simultaneously.
    
## setSurgeControlMode( bool control_mode ):
              Changes the control mode, 0 means open loop and 1 means Closed Loop.
##  setSurgeThrust( int thrust):
               Changes the thrust value, limits thrust to defined MIN,Max values in config file. Works only in Open Loop Mode.
## setTargetSurgePoint[Angle for rotation Degree of Freedoms](float point):
               Sets the target point for closed loop control.
## setCurrentSurgePoint[Angle for rotation Degree of Freedoms](float point):
               Sets the current point for closed loop control and update the pid values and sets thrust.
##  updateThrustValues()
              Updates the Previously set thrust Values
##  resetAllThrsuters()
             Sets  All thruster value to zero.
 ## refresh:
              Should be called often so that thruster values get updated in ROS.
             
# Configuring for custom Vehicles:
             All the custom values such as default control  mode, thruster combination, no of thrusers for each of the six degree of freedom3 should be modified in the vehice_config.h file. Also Number of thrusters, Max pwm and min pwm should be modified in the thrusters_controller.h file.
               
 
   
