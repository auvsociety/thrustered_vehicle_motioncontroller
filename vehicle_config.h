#ifndef VEHICLE_CONFIG_H
#define VEHICLE_CONFIG_H

#define NUMBER_OF_THRUSTERS 6



//define the vectors for each DoF
#define SURGE_VECTOR {1,1,1,1,1,1}
#define SWAY_VECTOR  {1,1,1,1,1,1}
#define HEAVE_VECTOR {1,1,1,1,1,1}
#define YAW_VECTOR   {1,1,1,1,1,1}
#define PITCH_VECTOR {1,1,1,1,1,1} 
#define ROLL_VECTOR  {1,1,1,1,1,1}

//define whether pid loop is enabled, if not the degree of freedom will be controlled manually
#define SURGE_PID_ENABLE false
#define SWAY_PID_ENABLE  false
#define HEAVE_PID_ENABLE true
#define YAW_PID_ENABLE   true
#define PITCH_PID_ENABLE true
#define ROLL_PID_ENABLE  true

//Default PID Constants
//Surge
//Sway
//Heave
//Yaw 
//Pitch
//Roll



#endif