#ifndef THRUSTERS_CONTROLLER_H
#define THRUSTERS_CONTROLLER_H

#define NUMBER_OF_THRUSTERS    6
#define ZERO_THRUST_PWM        1500
#define MIN_PWM                1100
#define MAX_PWM                1900
#define FULL_THRUST             100
namespace ThrustersController{
    void init();
    void writeThrusterValues(float* thrust_vector);
    void refresh();
    void shutdown();
}
#endif