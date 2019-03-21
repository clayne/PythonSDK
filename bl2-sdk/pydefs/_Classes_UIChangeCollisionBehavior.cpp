#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIChangeCollisionBehavior()
{
    py::class_< UIChangeCollisionBehavior,  UInterface   >("UIChangeCollisionBehavior")
        .def("StaticClass", &UIChangeCollisionBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_ChangeCollisionSize", &UIChangeCollisionBehavior::Behavior_ChangeCollisionSize)
        .def("Behavior_ChangeCollision", &UIChangeCollisionBehavior::Behavior_ChangeCollision)
        .staticmethod("StaticClass")
  ;
}