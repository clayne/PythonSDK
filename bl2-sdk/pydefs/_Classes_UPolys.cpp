#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPolys()
{
    py::class_< UPolys,  UObject   >("UPolys")
        .def_readonly("UnknownData00", &UPolys::UnknownData00)
        .def("StaticClass", &UPolys::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}