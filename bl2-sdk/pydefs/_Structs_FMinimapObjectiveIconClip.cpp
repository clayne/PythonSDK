#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMinimapObjectiveIconClip()
{
    py::class_< FMinimapObjectiveIconClip >("FMinimapObjectiveIconClip")
        .def_readwrite("OptionalClip", &FMinimapObjectiveIconClip::OptionalClip)
        .def_readwrite("AboveClip", &FMinimapObjectiveIconClip::AboveClip)
        .def_readwrite("BelowClip", &FMinimapObjectiveIconClip::BelowClip)
        .def_readwrite("Object", &FMinimapIconClip::Object)
        .def_readwrite("MapPos", &FMinimapIconClip::MapPos)
  ;
}