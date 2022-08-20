#include "thrusters_controller.h"
#include <iostream>
void ThrustersController::init(){

}

void ThrustersController::writeThrusterValues(float* thrust_vector){
    for (int i = 0; i < 6; i++)
    {
        std::cout<<thrust_vector[i]<<std::endl;
    }
    
    


}