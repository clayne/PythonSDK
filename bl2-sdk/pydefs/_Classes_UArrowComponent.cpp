#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UArrowComponent()
{
    py::class_< UArrowComponent,  UPrimitiveComponent   >("UArrowComponent")
        .def_readwrite("ArrowColor", &UArrowComponent::ArrowColor)
        .def_readwrite("ArrowSize", &UArrowComponent::ArrowSize)
        .def("StaticClass", &UArrowComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}