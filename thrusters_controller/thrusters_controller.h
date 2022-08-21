#ifndef THRUSTERS_CONTROLLER_H
#define THRUSTERS_CONTROLLER_H

#define NUMBER_OF_THRUSTERS    6
namespace ThrustersController{
    void init();
    void writeThrusterValues(float* thrust_vector);
    void refresh();
    void shutdown();
}
#endif