#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetShieldColor()
{
    py::class_< UBehavior_SetShieldColor,  UBehaviorBase   >("UBehavior_SetShieldColor")
        .def_readwrite("NewShieldColor", &UBehavior_SetShieldColor::NewShieldColor)
        .def("StaticClass", &UBehavior_SetShieldColor::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetShieldColor::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}