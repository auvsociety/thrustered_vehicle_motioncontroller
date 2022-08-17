#include "thrustered_vehicle_motion_controller.h"
#include  "PID-Controller/PID_controller.h"
#include  <iostream>


void ThrusteredVehicleMotionController::setSurgeControlMode(bool mode){
    surge_control_mode = mode;

    if (mode == CLOSED_LOOP_MODE)
    {
        surge_controller.reset();
    }
    
}

void ThrusteredVehicleMotionController::setSwayControlMode(bool mode){
    sway_control_mode = mode;

     if (mode == CLOSED_LOOP_MODE)
    {
        sway_controller.reset();
    }
}

void ThrusteredVehicleMotionController::setHeaveControlMode(bool mode){
    heave_control_mode = mode;

     if (mode == CLOSED_LOOP_MODE)
    {
        heave_controller.reset();
    }
}

void ThrusteredVehicleMotionController::setYawControlMode(bool mode){
    yaw_control_mode = mode;

     if (mode == CLOSED_LOOP_MODE)
    {
        yaw_controller.reset();
    }
}

void ThrusteredVehicleMotionController::setPitchControlMode(bool mode){
    pitch_control_mode = mode;

     if (mode == CLOSED_LOOP_MODE)
    {
        pitch_controller.reset();
    }
}

void ThrusteredVehicleMotionController::setRollControlMode(bool mode){
    roll_control_mode = mode;

     if (mode == CLOSED_LOOP_MODE)
    {
        roll_controller.reset();
    }
}

void ThrusteredVehicleMotionController::setSurgePIDConstants(float p,float i, float d, float integral_limit,float output_limit){
    
    surge_controller.setConstants(p, i, d, 0 );
    surge_controller.setMinMaxLimits( - output_limit, output_limit, - integral_limit, integral_limit);

}

void ThrusteredVehicleMotionController::setSwayPIDConstants(float p,float i, float d, float integral_limit,float output_limit){
    
    sway_controller.setConstants(p, i, d, 0 );
    sway_controller.setMinMaxLimits( - output_limit, output_limit, - integral_limit, integral_limit);

}

void ThrusteredVehicleMotionController::setHeavePIDConstants(float p,float i, float d, float integral_limit,float output_limit){
    
    heave_controller.setConstants(p, i, d, 0 );
    heave_controller.setMinMaxLimits( - output_limit, output_limit, - integral_limit, integral_limit);

}


void ThrusteredVehicleMotionController::setYawPIDConstants(float p,float i, float d, float integral_limit,float output_limit){
    
    yaw_controller.setConstants(p, i, d, 0 );
    yaw_controller.setMinMaxLimits( - output_limit, output_limit, - integral_limit, integral_limit);

}


void ThrusteredVehicleMotionController::setPitchPIDConstants(float p,float i, float d, float integral_limit,float output_limit){
    
    pitch_controller.setConstants(p, i, d, 0 );
    pitch_controller.setMinMaxLimits( - output_limit, output_limit, - integral_limit, integral_limit);

}


void ThrusteredVehicleMotionController::setRollPIDConstants(float p,float i, float d, float integral_limit,float output_limit){
    
    roll_controller.setConstants(p, i, d, 0 );
    roll_controller.setMinMaxLimits( - output_limit, output_limit, - integral_limit, integral_limit);

}

void ThrusteredVehicleMotionController::setTargetSurgePoint(float point){
    if (surge_control_mode == CLOSED_LOOP_MODE)
    {
        surge_controller.setTargetValue(point);
    }
    else
    {
        std::cout<<"Error, closed loop control not enabled"<<std::endl;
    }
    

}


void ThrusteredVehicleMotionController::setTargetSwayPoint(float point){
    if (sway_control_mode == CLOSED_LOOP_MODE)
    {
        sway_controller.setTargetValue(point);
    }
    else
    {
        std::cout<<"Error, closed loop control not enabled"<<std::endl;
    }
    

}

void ThrusteredVehicleMotionController::setTargetHeavePoint(float point){
    if (heave_control_mode == CLOSED_LOOP_MODE)
    {
        heave_controller.setTargetValue(point);
    }
    else
    {
        std::cout<<"Error, closed loop control not enabled"<<std::endl;
    }
    

}

void ThrusteredVehicleMotionController::setTargetYawAngle(float angle){
    if (yaw_control_mode == CLOSED_LOOP_MODE)
    {
        yaw_controller.setTargetValue(angle);
    }
    else
    {
        std::cout<<"Error, closed loop control not enabled"<<std::endl;
    }
    

}

void ThrusteredVehicleMotionController::setTargetPitchAngle(float angle){
    if (pitch_control_mode == CLOSED_LOOP_MODE)
    {
        pitch_controller.setTargetValue(angle);
    }
    else
    {
        std::cout<<"Error, closed loop control not enabled"<<std::endl;
    }
    

}

void ThrusteredVehicleMotionController::setTargetRollAngle(float angle){
    if (roll_control_mode == CLOSED_LOOP_MODE)
    {
        roll_controller.setTargetValue(angle);
    }
    else
    {
        std::cout<<"Error, closed loop control not enabled"<<std::endl;
    }
    

}

void ThrusteredVehicleMotionController::updateCurrentSurgePoint(float point){

    if (surge_control_mode == CLOSED_LOOP_MODE)
    {
         surge_controller.setCurrentValue(point);
         surge_thrust =  surge_controller.updateOutput();
    }
    else
    {
        std::cout<<"Error, closed loop control not enabled"<<std::endl;
    }

}


void ThrusteredVehicleMotionController::updateCurrentSwayPoint(float point){

    if (sway_control_mode == CLOSED_LOOP_MODE)
    {
         sway_controller.setCurrentValue(point);
         sway_thrust =  sway_controller.updateOutput();
    }
    else
    {
        std::cout<<"Error, closed loop control not enabled"<<std::endl;
    }

}

void ThrusteredVehicleMotionController::updateCurrentHeavePoint(float point){

    if (heave_control_mode == CLOSED_LOOP_MODE)
    {
         heave_controller.setCurrentValue(point);
         heave_thrust =  heave_controller.updateOutput();
    }
    else
    {
        std::cout<<"Error, closed loop control not enabled"<<std::endl;
    }

}

void ThrusteredVehicleMotionController::updateCurrentYawAngle(float angle){

    if (yaw_control_mode == CLOSED_LOOP_MODE)
    {
         yaw_controller.setCurrentValue(angle);
         yaw_thrust =  yaw_controller.updateOutput();
    }
    else
    {
        std::cout<<"Error, closed loop control not enabled"<<std::endl;
    }

}

void ThrusteredVehicleMotionController::updateCurrentPitchAngle(float angle){

    if (pitch_control_mode == CLOSED_LOOP_MODE)
    {
         pitch_controller.setCurrentValue(angle);
         pitch_thrust =  pitch_controller.updateOutput();
    }
    else
    {
        std::cout<<"Error, closed loop control not enabled"<<std::endl;
    }

}

void ThrusteredVehicleMotionController::updateCurrentRollAngle(float angle){

    if (roll_control_mode == CLOSED_LOOP_MODE)
    {
         roll_controller.setCurrentValue(angle);
         roll_thrust =  roll_controller.updateOutput();
    }
    else
    {
        std::cout<<"Error, closed loop control not enabled"<<std::endl;
    }

}


void ThrusteredVehicleMotionController::setSurgeThrust(float thrust){
     if (surge_control_mode != CLOSED_LOOP_MODE)
    {
         
         surge_thrust =  thrust;
    }
    else
    {
        std::cout<<"Error, closed loop control enabled, cannot  set thrust manually."<<std::endl;
    }

}

void ThrusteredVehicleMotionController::setSwayThrust(float thrust){
     if (sway_control_mode != CLOSED_LOOP_MODE)
    {
         
         sway_thrust =  thrust;
    }
    else
    {
        std::cout<<"Error, closed loop control enabled, cannot  set thrust manually."<<std::endl;
    }

}

void ThrusteredVehicleMotionController::setHeaveThrust(float thrust){
     if (heave_control_mode != CLOSED_LOOP_MODE)
    {
         
         heave_thrust =  thrust;
    }
    else
    {
        std::cout<<"Error, closed loop control enabled, cannot  set thrust manually."<<std::endl;
    }

}


void ThrusteredVehicleMotionController::setYawThrust(float thrust){
     if (yaw_control_mode != CLOSED_LOOP_MODE)
    {
         
         yaw_thrust =  thrust;
    }
    else
    {
        std::cout<<"Error, closed loop control enabled, cannot  set thrust manually."<<std::endl;
    }

}

void ThrusteredVehicleMotionController::setPitchThrust(float thrust){
     if (pitch_control_mode != CLOSED_LOOP_MODE)
    {
         
         pitch_thrust =  thrust;
    }
    else
    {
        std::cout<<"Error, closed loop control enabled, cannot  set thrust manually."<<std::endl;
    }

}


void ThrusteredVehicleMotionController::setRollThrust(float thrust){
     if (roll_control_mode != CLOSED_LOOP_MODE)
    {
         
         roll_thrust =  thrust;
    }
    else
    {
        std::cout<<"Error, closed loop control enabled, cannot  set thrust manually."<<std::endl;
    }

}

void ThrusteredVehicleMotionController::resetAllThrusters(){
    surge_thrust = sway_thrust = heave_thrust = yaw_thrust = pitch_thrust = roll_thrust = 0;
}


 void ThrusteredVehicleMotionController::updateThrustValues(){
    
 }
