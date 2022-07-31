#ifndef THRUSTERED_VEHICLE_MOTION_CONTROLLER_H
#define THRUSTERED_VEHICLE_MOTION_CONTROLLER_H

class thrustered_vehicle_motion_controller
{
private:
    float linear_thrust[3],rotational_thrust[3];
public:
    thrustered_vehicle_motion_controller(/* args */);
    ~thrustered_vehicle_motion_controller();


    void setTargetX(float x);
    void setTargetY(float y);
    void setTargetZ(float z);
    void setTargetYaw(float yaw);
    void setTargetPitch(float pitch);
    void setTargetRoll(float roll);
    void setTargetCoordinates(float x, float y, float z);
    void setTargetAngles(float yaw, float pitch, float roll);


    void updateCurrentX(float x);
    void updateCurrentY(float y);
    void updateCurrentZ(float z);
    void updateCurrentYaw(float yaw);
    void updateCurrentPitch(float pitch);
    void updateCurrentRoll(float roll);
    void updateCurrentCoordinates(float x, float y, float z);
    void updateCurrentAngles(float yaw, float pitch, float roll);

    void setLinearThrustAlongX( float thrust);
    void setLinearThrustAlongY(float  thrust);
    void setLinearThrustAlongZ(float  thrust);
    void setRotationalThrustAboutX(float thrust);
    void setRotationalThrustAboutY(float thrust);
    void setRotationalThrustAboutZ(float thrust);
    void updateThrustValues();


};


#endif