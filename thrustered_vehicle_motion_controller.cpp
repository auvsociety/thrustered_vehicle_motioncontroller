#include "thrustered_vehicle_motion_controller.h"

void ThrusteredVehicleMotionController::setSurgeControlMode(bool mode){
    linear_control_mode[0] = mode;
}

void ThrusteredVehicleMotionController::setSwayControlMode(bool mode){
    linear_control_mode[1] = mode;
}

void ThrusteredVehicleMotionController::setHeaveControlMode(bool mode){
    linear_control_mode[2] = mode;
}

void ThrusteredVehicleMotionController::setYawControlMode(bool mode){
    rotational_control_mode[0] = mode;
}

void ThrusteredVehicleMotionController::setPitchControlMode(bool mode){
    rotational_control_mode[1] = mode;
}

void ThrusteredVehicleMotionController::setRollControlMode(bool mode){
    rotational_control_mode[2] = mode;
}