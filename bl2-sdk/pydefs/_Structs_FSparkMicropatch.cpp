#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSparkMicropatch()
{
    py::class_< FSparkMicropatch >("FSparkMicropatch")
        .def_readwrite("ObjectPath", &FSparkMicropatch::ObjectPath)
        .def_readwrite("PropertyPath", &FSparkMicropatch::PropertyPath)
        .def_readwrite("OriginalValue", &FSparkMicropatch::OriginalValue)
        .def_readwrite("NewValue", &FSparkMicropatch::NewValue)
  ;
}