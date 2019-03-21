#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectReferencer()
{
    py::class_< UObjectReferencer,  UObject   >("UObjectReferencer")
        .def_readwrite("ReferencedObjects", &UObjectReferencer::ReferencedObjects)
        .def("StaticClass", &UObjectReferencer::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}