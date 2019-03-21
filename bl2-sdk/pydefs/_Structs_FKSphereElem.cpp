#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKSphereElem()
{
    py::class_< FKSphereElem >("FKSphereElem")
        .def_readwrite("TM", &FKSphereElem::TM)
        .def_readwrite("Radius", &FKSphereElem::Radius)
  ;
}