#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightValues()
{
    py::class_< FLightValues >("FLightValues")
        .def_readwrite("StartTime", &FLightValues::StartTime)
        .def_readwrite("Radius", &FLightValues::Radius)
        .def_readwrite("Brightness", &FLightValues::Brightness)
        .def_readwrite("LightColor", &FLightValues::LightColor)
  ;
}