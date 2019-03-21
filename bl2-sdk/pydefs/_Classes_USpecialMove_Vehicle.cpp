#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Vehicle()
{
    py::class_< USpecialMove_Vehicle,  UWillowAnimDefinition   >("USpecialMove_Vehicle")
        .def_readwrite("TransitionType", &USpecialMove_Vehicle::TransitionType)
        .def_readwrite("CameraLerpKeyFrames", &USpecialMove_Vehicle::CameraLerpKeyFrames)
        .def("StaticClass", &USpecialMove_Vehicle::StaticClass, py::return_value_policy::reference)
        .def("PlayAnim", &USpecialMove_Vehicle::PlayAnim)
        .def("eventAuthorityCanPlay", &USpecialMove_Vehicle::eventAuthorityCanPlay)
        .staticmethod("StaticClass")
  ;
}