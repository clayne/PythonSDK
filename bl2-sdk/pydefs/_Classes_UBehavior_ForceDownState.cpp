#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ForceDownState()
{
    py::class_< UBehavior_ForceDownState,  UBehaviorBase   >("UBehavior_ForceDownState")
        .def("StaticClass", &UBehavior_ForceDownState::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ForceDownState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}