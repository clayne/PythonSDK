#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStableArray_Mirror()
{
    py::class_< FStableArray_Mirror >("FStableArray_Mirror")
        .def_readwrite("ArrayNumInUse", &FStableArray_Mirror::ArrayNumInUse)
        .def_readwrite("ArrayNumAllocated", &FStableArray_Mirror::ArrayNumAllocated)
        .def_readwrite("ArrayCapacity", &FStableArray_Mirror::ArrayCapacity)
        .def_readwrite("FreeListHeadIndex", &FStableArray_Mirror::FreeListHeadIndex)
        .def_readwrite("Chunks", &FStableArray_Mirror::Chunks)
  ;
}