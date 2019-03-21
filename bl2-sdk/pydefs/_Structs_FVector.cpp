#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVector()
{
    py::class_< FVector >("FVector")
        .def_readwrite("X", &FVector::X)
        .def_readwrite("Y", &FVector::Y)
        .def_readwrite("Z", &FVector::Z)
  ;
}