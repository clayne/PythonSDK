#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawFrustumComponent()
{
    py::class_< UDrawFrustumComponent,  UPrimitiveComponent   >("UDrawFrustumComponent")
        .def_readwrite("FrustumColor", &UDrawFrustumComponent::FrustumColor)
        .def_readwrite("FrustumAngle", &UDrawFrustumComponent::FrustumAngle)
        .def_readwrite("FrustumAspectRatio", &UDrawFrustumComponent::FrustumAspectRatio)
        .def_readwrite("FrustumStartDist", &UDrawFrustumComponent::FrustumStartDist)
        .def_readwrite("FrustumEndDist", &UDrawFrustumComponent::FrustumEndDist)
        .def_readwrite("Texture", &UDrawFrustumComponent::Texture)
        .def("StaticClass", &UDrawFrustumComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}