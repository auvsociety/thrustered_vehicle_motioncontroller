#ifndef THRUSTERED_VEHICLE_MOTION_CONTROLLER_H
#define THRUSTERED_VEHICLE_MOTION_CONTROLLER_H

#define CLOSED_LOOP_MODE  0
#define OPEN_LOOP_MODE    1

class ThrusteredVehicleMotionController
{
private:
    float surge_thrust,sway_thrust,heave_thrust;
    float yaw_thrust,pitch_thrust,roll_thrust;

    bool surge_control_mode,sway_control_mode,heave_control_mode;
    bool yaw_control_mode,pitch_control_mode,roll_control_mode;

    float current_surge_point,current_sway_point,current_heave_point;
    float current_yaw_angle,current_pitch_angle,current_roll_angle;

    float target_surge_point,target_sway_point,target_heave_point;
    float target_yaw_angle,target_pitch_angle,target_roll_angle;

    PIDController surge_controller,sway_controller,heave_controller;
    PIDController yaw_controller, pitch_controller,roll_controller;


    
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
     

    //Functions to adjust PID for each DoF
    void setSurgePIDConstants(float p,float i, float d, float integral_limit,float output_limit);
    void setSwayPIDConstants(float p,float i, float d, float integral_limit,float output_limit);
    void setHeavePIDConstants(float p,float i, float d, float integral_limit,float output_limit);
    void setYawPIDConstants(float p,float i, float d, float integral_limit,float output_limit);
    void setPitchPIDConstants(float p,float i, float d, float integral_limit,float output_limit);
    void setRollPIDConstants(float p,float i, float d, float integral_limit,float output_limit);

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
    void updateThrustValues();


};


#endif