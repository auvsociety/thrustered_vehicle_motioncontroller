#ifndef THRUSTERED_VEHICLE_MOTION_CONTROLLER_H
#define THRUSTERED_VEHICLE_MOTION_CONTROLLER_H

class ThrusteredVehicleMotionController
{
private:
    float linear_thrust[3],rotational_thrust[3];
    bool linear_control_mode[3],rotational_control_mode[3];
    float current_coordinates[3],current_angles[3];
    float target_coordinates[3],target_angles[3];



    
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
    void setTargetCoordinates(float x, float y, float z);
    void setTargetAngles(float yaw, float pitch, float roll);

    //Setting current values in each DoF, Works only if pid mode is enabled
    void updateCurrentSurgePoint(float point);
    void updateCurrentSwayPoint(float point);
    void updateCurrentHeavePoint(float point);
    void updateCurrentYawAngle(float yaw);
    void updateCurrentPitchAngle(float pitch);
    void updateCurrentRollAngle(float roll);
    void updateCurrentCoordinates(float x, float y, float z);
    void updateCurrentAngles(float yaw, float pitch, float roll);

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