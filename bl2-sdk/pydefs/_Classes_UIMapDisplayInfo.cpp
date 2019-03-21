#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMapDisplayInfo()
{
    py::class_< UIMapDisplayInfo,  UInterface   >("UIMapDisplayInfo")
        .def("StaticClass", &UIMapDisplayInfo::StaticClass, py::return_value_policy::reference)
        .def("eventGetMapDisplayName", &UIMapDisplayInfo::eventGetMapDisplayName)
        .def("eventGetMapDisplayHeader", &UIMapDisplayInfo::eventGetMapDisplayHeader)
        .staticmethod("StaticClass")
  ;
}