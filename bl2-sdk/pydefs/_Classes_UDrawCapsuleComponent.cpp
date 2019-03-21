#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawCapsuleComponent()
{
    py::class_< UDrawCapsuleComponent,  UPrimitiveComponent   >("UDrawCapsuleComponent")
        .def_readwrite("CapsuleColor", &UDrawCapsuleComponent::CapsuleColor)
        .def_readwrite("CapsuleMaterial", &UDrawCapsuleComponent::CapsuleMaterial)
        .def_readwrite("CapsuleHeight", &UDrawCapsuleComponent::CapsuleHeight)
        .def_readwrite("CapsuleRadius", &UDrawCapsuleComponent::CapsuleRadius)
        .def("StaticClass", &UDrawCapsuleComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}