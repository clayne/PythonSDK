#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWindPointSource()
{
    py::class_< AWindPointSource,  AInfo   >("AWindPointSource")
        .def_readwrite("Component", &AWindPointSource::Component)
        .def("StaticClass", &AWindPointSource::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}