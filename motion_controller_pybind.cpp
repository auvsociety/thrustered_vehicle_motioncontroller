#include <pybind11/pybind11.h>
namespace py = pybind11;

#include "thrustered_vehicle_motion_controller.h"

PYBIND11_PLUGIN(motion_controller) {

    py::module m("motion_controller");

    py::class_<ThrusteredVehicleMotionController> thrusteredvehiclemotioncontroller(m, "ThrusteredVehicleMotionController");
    thrusteredvehiclemotioncontroller
      .def(py::init<>())
      .def("setSurgeControlMode", &ThrusteredVehicleMotionController::setSurgeControlMode)
      .def("setSwayControlMode", &ThrusteredVehicleMotionController::setSwayControlMode)
      .def("setHeaveControlMode", &ThrusteredVehicleMotionController::setHeaveControlMode)
      .def("setYawControlMode", &ThrusteredVehicleMotionController::setYawControlMode)
      .def("setPitchControlMode", &ThrusteredVehicleMotionController::setPitchControlMode)
      .def("setRollControlMode", &ThrusteredVehicleMotionController::setRollControlMode)
      .def("setSurgePIDConstants", &ThrusteredVehicleMotionController::setSurgePIDConstants)
      .def("setSwayPIDConstants", &ThrusteredVehicleMotionController::setSwayPIDConstants)
      .def("setHeavePIDConstants", &ThrusteredVehicleMotionController::setHeavePIDConstants)
      .def("setYawPIDConstants", &ThrusteredVehicleMotionController::setYawPIDConstants)
      .def("setPitchPIDConstants", &ThrusteredVehicleMotionController::setPitchPIDConstants)
      .def("setRollPIDConstants", &ThrusteredVehicleMotionController::setRollPIDConstants)
      .def("setSurgePIDLimits", &ThrusteredVehicleMotionController::setSurgePIDLimits)
      .def("setSwayPIDLimits", &ThrusteredVehicleMotionController::setSwayPIDLimits)
      .def("setHeavePIDLimits", &ThrusteredVehicleMotionController::setHeavePIDLimits)
      .def("setYawPIDLimits", &ThrusteredVehicleMotionController::setYawPIDLimits)
      .def("setPitchPIDLimits", &ThrusteredVehicleMotionController::setPitchPIDLimits)
      .def("setRollPIDLimits", &ThrusteredVehicleMotionController::setRollPIDLimits)
      .def("setTargetSurgePoint", &ThrusteredVehicleMotionController::setTargetSurgePoint)
      .def("setTargetSwayPoint", &ThrusteredVehicleMotionController::setTargetSwayPoint)
      .def("setTargetHeavePoint", &ThrusteredVehicleMotionController::setTargetHeavePoint)
      .def("setTargetYawAngle", &ThrusteredVehicleMotionController::setTargetYawAngle)
      .def("setTargetPitchAngle", &ThrusteredVehicleMotionController::setTargetPitchAngle)
      .def("setTargetRollAngle", &ThrusteredVehicleMotionController::setTargetRollAngle)
      .def("updateCurrentSurgePoint", &ThrusteredVehicleMotionController::updateCurrentSurgePoint)
      .def("updateCurrentSwayPoint", &ThrusteredVehicleMotionController::updateCurrentSwayPoint)
      .def("updateCurrentHeavePoint", &ThrusteredVehicleMotionController::updateCurrentHeavePoint)
      .def("updateCurrentYawAngle", &ThrusteredVehicleMotionController::updateCurrentYawAngle)
      .def("updateCurrentPitchAngle", &ThrusteredVehicleMotionController::updateCurrentPitchAngle)
      .def("updateCurrentRollAngle", &ThrusteredVehicleMotionController::updateCurrentRollAngle)
      .def("setSurgeThrust", &ThrusteredVehicleMotionController::setSurgeThrust)
      .def("setSwayThrust", &ThrusteredVehicleMotionController::setSwayThrust)
      .def("setHeaveThrust", &ThrusteredVehicleMotionController::setHeaveThrust)
      .def("setYawThrust", &ThrusteredVehicleMotionController::setYawThrust)
      .def("setPitchThrust", &ThrusteredVehicleMotionController::setPitchThrust)
      .def("setRollThrust", &ThrusteredVehicleMotionController::setRollThrust)
      .def("resetAllThrusters", &ThrusteredVehicleMotionController::resetAllThrusters)
      .def("refresh", &ThrusteredVehicleMotionController::refresh)
      .def("updateThrustValues", &ThrusteredVehicleMotionController::updateThrustValues);
    

    return m.ptr();
}

