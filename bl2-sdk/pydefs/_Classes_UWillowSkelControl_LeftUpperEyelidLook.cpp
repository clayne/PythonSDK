#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_LeftUpperEyelidLook()
{
    py::class_< UWillowSkelControl_LeftUpperEyelidLook,  UWillowSkelControl_UpperEyelidLook   >("UWillowSkelControl_LeftUpperEyelidLook")
        .def("StaticClass", &UWillowSkelControl_LeftUpperEyelidLook::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}