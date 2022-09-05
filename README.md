# thrustered_vehicle_motioncontroller
This repo implements a C++ based class to control the motion of thrustered vehicles such as Drones, AUVs,etc. The repo can also be used with python using pybind11.

# Why This Project?
 Be it drones, ROVs, AUVs or UAVs, Even though they are mechanically different and serve different purposes. There's one thing that remains constant. To control the vehicle you have to control the speed of the motors.
 The speed ratio, no of motors and combination required to achieve a particular motion varies from vehicle to vehicle. So, instead of writing the motion control code for every vehicle each and every time, I wanted to make an abstracted object where you can edit all the above parameters by simply editing the macros for each vehicle.
 
 # Output Method:
   The current version of code, gets command and publishes the PWM values in a topic called /pwm_values in ros. The pwm values range from from 1100 to 1900 meant for BlueRobotics Blue ESC. Depending on your application you can modify the thrusters_controller.cpp file to suit your output method.
   
 # Notations Used:
 Certain terms have been used in this code for ease of usage. As i strongly believe that No matter How obvious the terms are, If not defined before usage, They do more harm than good.
 We will define certain terms used to denote different kind of Motion:
 
## Surge:
    Linear Motion along X axis.
    
![surging-motion-example-surge-movement-on-cargo-ship-at-sea](https://user-images.githubusercontent.com/95476939/188467845-0a946327-43d7-4e03-b25f-b831507bea3e.gif)
GIF courtesy: FFQO.com
