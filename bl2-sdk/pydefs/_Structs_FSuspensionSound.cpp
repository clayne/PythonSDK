#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSuspensionSound()
{
    py::class_< FSuspensionSound >("FSuspensionSound")
        .def_readwrite("LastSuspensionTravel", &FSuspensionSound::LastSuspensionTravel)
        .def_readwrite("LastPlayTime", &FSuspensionSound::LastPlayTime)
        .def_readwrite("PlayingInfo", &FSuspensionSound::PlayingInfo)
  ;
}