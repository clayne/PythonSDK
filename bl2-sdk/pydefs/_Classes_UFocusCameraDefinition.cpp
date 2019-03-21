#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFocusCameraDefinition()
{
    py::class_< UFocusCameraDefinition,  UGBXDefinition   >("UFocusCameraDefinition")
        .def_readwrite("CamReturnTime", &UFocusCameraDefinition::CamReturnTime)
        .def_readwrite("CamMovementThreshold", &UFocusCameraDefinition::CamMovementThreshold)
        .def_readwrite("CamMovementSpeed_Fast", &UFocusCameraDefinition::CamMovementSpeed_Fast)
        .def_readwrite("CamMovementSpeed_Slow", &UFocusCameraDefinition::CamMovementSpeed_Slow)
        .def("StaticClass", &UFocusCameraDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}