#ifndef THRUSTERED_VEHICLE_MOTION_CONTROLLER_H
#define THRUSTERED_VEHICLE_MOTION_CONTROLLER_H
#include  "PID-Controller/PID_controller.h"
#include "vehicle_config.h"

#define CLOSED_LOOP_MODE  0
#define OPEN_LOOP_MODE    1

class ThrusteredVehicleMotionController
{
private:
    float surge_thrust ,sway_thrust,heave_thrust;
    float yaw_thrust ,pitch_thrust ,roll_thrust ;

    bool surge_control_mode,sway_control_mode,heave_control_mode;
    bool yaw_control_mode,pitch_control_mode,roll_control_mode;

    PIDController surge_controller,sway_controller,heave_controller;
    PIDController yaw_controller, pitch_controller,roll_controller;

    float surge_vector[NUMBER_OF_THRUSTERS] = SURGE_VECTOR, sway_vector[NUMBER_OF_THRUSTERS] = SWAY_VECTOR, heave_vector[NUMBER_OF_THRUSTERS] = HEAVE_VECTOR;
    float yaw_vector[NUMBER_OF_THRUSTERS]  = YAW_VECTOR,    pitch_vector[NUMBER_OF_THRUSTERS] = PITCH_VECTOR, roll_vector[NUMBER_OF_THRUSTERS] = ROLL_VECTOR;
    float thrust_vector[NUMBER_OF_THRUSTERS];



    
public:
    ThrusteredVehicleMotionController(/* args */);
    ~ThrusteredVehicleMotionController();

    //Functions to change control mode for each DoF
    void setSurgeControlMode(bool mode);
    void setSwayControlMode(bool mode); 
    void setHeaveControlMode(bool mode);
    void setYawControlMode(bool mode);
    void setPitchControlMode(bool mode);
    void setRollControlMode(bool mode);
     

    //Functions to adjust PID  constants for each DoF
    void setSurgePIDConstants(float kp,float ki, float kd, float acceptable_error);
    void setSwayPIDConstants(float kp,float ki, float kd, float acceptable_error);
    void setHeavePIDConstants(float kp,float ki, float kd, float acceptable_error);
    void setYawPIDConstants(float kp,float ki, float kd, float acceptable_error);
    void setPitchPIDConstants(float kp,float ki, float kd, float acceptable_error);
    void setRollPIDConstants(float kp,float ki, float kd, float acceptable_error);

    //Functions to adjust pid limits in each DoF
    void setSurgePIDLimits(float output_min,float output_max, float integral_min, float integral_max);
    void setSwayPIDLimits(float output_min,float output_max, float integral_min, float integral_max);
    void setHeavePIDLimits(float output_min,float output_max, float integral_min, float integral_max);
    void setYawPIDLimits(float output_min,float output_max, float integral_min, float integral_max);
    void setPitchPIDLimits(float output_min,float output_max, float integral_min, float integral_max);
    void setRollPIDLimits(float output_min,float output_max, float integral_min, float integral_max);

    //Functins to set target values in each DoF, Works only if pid mode is enabled
    void setTargetSurgePoint(float point);
    void setTargetSwayPoint(float point);
    void setTargetHeavePoint(float point);
    void setTargetYawAngle(float angle);
    void setTargetPitchAngle(float angle);
    void setTargetRollAngle(float angle);

    //Setting current values in each DoF, Works only if pid mode is enabled
    void updateCurrentSurgePoint(float point);
    void updateCurrentSwayPoint(float point);
    void updateCurrentHeavePoint(float point);
    void updateCurrentYawAngle(float angle);
    void updateCurrentPitchAngle(float angle);
    void updateCurrentRollAngle(float angle);

    //Functions to set Thrust for each DoF 
    void setSurgeThrust( float thrust);
    void setSwayThrust(float  thrust);
    void setHeaveThrust(float  thrust);
    void setYawThrust(float thrust);
    void setPitchThrust(float thrust);
    void setRollThrust(float thrust);

    void resetAllThrusters();
    void refresh();
    void updateThrustValues();

private:
   float limitToRange(float value,float minimum,float maximum);
};


#endif