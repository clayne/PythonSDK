#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FClipRect()
{
    py::class_< FClipRect >("FClipRect")
        .def_readwrite("Top", &FClipRect::Top)
        .def_readwrite("Right", &FClipRect::Right)
        .def_readwrite("Bottom", &FClipRect::Bottom)
        .def_readwrite("Left", &FClipRect::Left)
  ;
}