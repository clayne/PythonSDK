#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCodecMovie()
{
    py::class_< UCodecMovie,  UObject   >("UCodecMovie")
        .def_readwrite("PlaybackDuration", &UCodecMovie::PlaybackDuration)
        .def("StaticClass", &UCodecMovie::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}