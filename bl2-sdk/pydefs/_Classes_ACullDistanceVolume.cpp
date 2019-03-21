#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ACullDistanceVolume()
{
    py::class_< ACullDistanceVolume,  AVolume   >("ACullDistanceVolume")
        .def_readwrite("CullDistances", &ACullDistanceVolume::CullDistances)
        .def("StaticClass", &ACullDistanceVolume::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}