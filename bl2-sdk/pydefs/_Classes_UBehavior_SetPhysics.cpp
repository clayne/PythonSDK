#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetPhysics()
{
    py::class_< UBehavior_SetPhysics,  UBehaviorBase   >("UBehavior_SetPhysics")
        .def_readwrite("Physics", &UBehavior_SetPhysics::Physics)
        .def_readwrite("BodyAction", &UBehavior_SetPhysics::BodyAction)
        .def_readwrite("SimulationAction", &UBehavior_SetPhysics::SimulationAction)
        .def("StaticClass", &UBehavior_SetPhysics::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetPhysics::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}