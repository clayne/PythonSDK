#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSavedRandomValue()
{
    py::class_< FSavedRandomValue >("FSavedRandomValue")
        .def_readwrite("ContextName", &FSavedRandomValue::ContextName)
        .def_readwrite("SavedValue", &FSavedRandomValue::SavedValue)
        .def_readwrite("ExpirationTime", &FSavedRandomValue::ExpirationTime)
  ;
}