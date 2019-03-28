#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKeyBindInfo(py::module &m)
{
    py::class_< FKeyBindInfo >(m, "FKeyBindInfo")
        .def_readwrite("Tag", &FKeyBindInfo::Tag)
        .def_readwrite("ActionName", &FKeyBindInfo::ActionName)
        .def_readwrite("Caption", &FKeyBindInfo::Caption)
        .def_readwrite("CurrentKey", &FKeyBindInfo::CurrentKey)
        .def_readwrite("Object", &FKeyBindInfo::Object)
  ;
}