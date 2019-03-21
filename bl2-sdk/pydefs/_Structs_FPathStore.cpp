#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPathStore()
{
    py::class_< FPathStore >("FPathStore")
        .def_readwrite("EdgeList", &FPathStore::EdgeList)
        .def_readwrite("PathDistances", &FPathStore::PathDistances)
  ;
}