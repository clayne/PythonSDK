#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerInformation()
{
    py::class_< FPlayerInformation >("FPlayerInformation")
        .def_readwrite("ControllerName", &FPlayerInformation::ControllerName)
        .def_readwrite("PlayerName", &FPlayerInformation::PlayerName)
        .def_readwrite("UniqueId", &FPlayerInformation::UniqueId)
  ;
}