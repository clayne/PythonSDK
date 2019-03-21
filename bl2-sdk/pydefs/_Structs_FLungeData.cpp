#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLungeData()
{
    py::class_< FLungeData >("FLungeData")
        .def_readwrite("Target", &FLungeData::Target)
        .def_readwrite("Length", &FLungeData::Length)
        .def_readwrite("Start", &FLungeData::Start)
        .def_readwrite("SavedAccelRate", &FLungeData::SavedAccelRate)
  ;
}