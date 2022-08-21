#ifndef VEHICLE_CONFIG_H
#define VEHICLE_CONFIG_H

#define NUMBER_OF_THRUSTERS 6

#define CLOSED_LOOP_MODE  0
#define OPEN_LOOP_MODE    1

#define MAX_THRUST       100
#define MIN_THRUST      -100

//define the vectors for each DoF
#define SURGE_VECTOR {1,1,1,1,1,1}
#define SWAY_VECTOR  {1,1,1,1,1,1}
#define HEAVE_VECTOR {1,1,1,1,1,1}
#define YAW_VECTOR   {1,1,1,1,1,1}
#define PITCH_VECTOR {1,1,1,1,1,1} 
#define ROLL_VECTOR  {1,1,1,1,1,1}

//define whether pid loop is enabled, if not the degree of freedom will be controlled manually
#define SURGE_CONTROL_MODE  OPEN_LOOP_MODE
#define SWAY_CONTROL_MODE   OPEN_LOOP_MODE
#define HEAVE_CONTROL_MODE  CLOSED_LOOP_MODE
#define YAW_CONTROL_MODE    CLOSED_LOOP_MODE
#define PITCH_CONTROL_MODE  CLOSED_LOOP_MODE
#define ROLL_CONTROL_MODE   CLOSED_LOOP_MODE

//Default PID Constants
//Surge  
#define SURGE_K_P             1
#define SURGE_K_I             1
#define SURGE_K_D             1
#define SURGE_ACCEPTABLE_ERROR 0.001
#define SURGE_OUTPUT_MIN     -100
#define SURGE_OUTPUT_MAX      100
#define SURGE_INTEGRAL_MIN    -50
#define SURGE_INTEGRAL_MAX     50
//Sway
#define SWAY_K_P               1
#define SWAY_K_I               1
#define SWAY_K_D               1
#define SWAY_ACCEPTABLE_ERROR 0.001
#define SWAY_OUTPUT_MIN      -100
#define SWAY_OUTPUT_MAX       100
#define SWAY_INTEGRAL_MIN     -50 
#define SWAY_INTEGRAL_MAX      50
//Heave
#define HEAVE_K_P              1
#define HEAVE_K_I              1
#define HEAVE_K_D              1
#define HEAVE_ACCEPTABLE_ERROR 0.001
#define HEAVE_OUTPUT_MIN       -100
#define HEAVE_OUTPUT_MAX       100
#define HEAVE_INTEGRAL_MIN      -50
#define HEAVE_INTEGRAL_MAX       50
//Yaw 
#define YAW_K_P              1
#define YAW_K_I              1
#define YAW_K_D              1
#define YAW_ACCEPTABLE_ERROR 0.001
#define YAW_OUTPUT_MIN       -100
#define YAW_OUTPUT_MAX       100
#define YAW_INTEGRAL_MIN      -50
#define YAW_INTEGRAL_MAX       50
//Pitch
#define PITCH_K_P              1
#define PITCH_K_I              1
#define PITCH_K_D              1
#define PITCH_ACCEPTABLE_ERROR 0.001
#define PITCH_OUTPUT_MIN       -100
#define PITCH_OUTPUT_MAX       100
#define PITCH_INTEGRAL_MIN      -50
#define PITCH_INTEGRAL_MAX       50
//Roll
#define ROLL_K_P              1
#define ROLL_K_I              1
#define ROLL_K_D              1
#define ROLL_ACCEPTABLE_ERROR 0.001
#define ROLL_OUTPUT_MIN       -100
#define ROLL_OUTPUT_MAX       100
#define ROLL_INTEGRAL_MIN      -50
#define ROLL_INTEGRAL_MAX       50


#endif