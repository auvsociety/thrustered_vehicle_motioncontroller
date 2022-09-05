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
          * Currently i am not providing any prebuilt library, So the user has to build it on his own. Create your own ROS package. Clone this repo on your package/src folder. add this subdirectory. Include the header file and use the API in your code. And finally, In your CMakeLists.txt file, while building your ros node, add this line. For example, you are using this library inside a node called "ros_node".
          
          
    
         '''
         target_link_libraries( ros_node thrustered_vehicle_motion_controller
         
         '''
 
      
 
 ## Python (ROS):
 
 ## Custom Output :
 
 
