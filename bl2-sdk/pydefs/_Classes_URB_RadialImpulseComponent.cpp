#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_RadialImpulseComponent()
{
    py::class_< URB_RadialImpulseComponent,  UPrimitiveComponent   >("URB_RadialImpulseComponent")
        .def_readwrite("ImpulseFalloff", &URB_RadialImpulseComponent::ImpulseFalloff)
        .def_readwrite("ImpulseStrength", &URB_RadialImpulseComponent::ImpulseStrength)
        .def_readwrite("ImpulseRadius", &URB_RadialImpulseComponent::ImpulseRadius)
        .def_readwrite("PreviewSphere", &URB_RadialImpulseComponent::PreviewSphere)
        .def("StaticClass", &URB_RadialImpulseComponent::StaticClass, py::return_value_policy::reference)
        .def("FireImpulse", &URB_RadialImpulseComponent::FireImpulse)
        .staticmethod("StaticClass")
  ;
}