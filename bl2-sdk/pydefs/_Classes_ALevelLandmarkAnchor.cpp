#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALevelLandmarkAnchor()
{
    py::class_< ALevelLandmarkAnchor,  ALevelLandmark   >("ALevelLandmarkAnchor")
        .def_readwrite("Texture", &ALevelLandmarkAnchor::Texture)
        .def_readwrite("Opacity", &ALevelLandmarkAnchor::Opacity)
        .def_readwrite("TextureSizeX", &ALevelLandmarkAnchor::TextureSizeX)
        .def_readwrite("TextureSizeY", &ALevelLandmarkAnchor::TextureSizeY)
        .def_readwrite("MapFrame", &ALevelLandmarkAnchor::MapFrame)
        .def_readwrite("DLCMap", &ALevelLandmarkAnchor::DLCMap)
        .def("StaticClass", &ALevelLandmarkAnchor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}