#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RotatePawn()
{
    py::class_< UBehavior_RotatePawn,  UBehaviorBase   >("UBehavior_RotatePawn")
        .def_readwrite("RotateDirection", &UBehavior_RotatePawn::RotateDirection)
        .def_readwrite("Time", &UBehavior_RotatePawn::Time)
        .def("StaticClass", &UBehavior_RotatePawn::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_RotatePawn::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}