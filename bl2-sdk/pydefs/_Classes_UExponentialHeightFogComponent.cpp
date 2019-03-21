#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExponentialHeightFogComponent()
{
    py::class_< UExponentialHeightFogComponent,  UActorComponent   >("UExponentialHeightFogComponent")
        .def_readwrite("FogHeight", &UExponentialHeightFogComponent::FogHeight)
        .def_readwrite("FogDensity", &UExponentialHeightFogComponent::FogDensity)
        .def_readwrite("FogHeightFalloff", &UExponentialHeightFogComponent::FogHeightFalloff)
        .def_readwrite("FogMaxOpacity", &UExponentialHeightFogComponent::FogMaxOpacity)
        .def_readwrite("StartDistance", &UExponentialHeightFogComponent::StartDistance)
        .def_readwrite("LightTerminatorAngle", &UExponentialHeightFogComponent::LightTerminatorAngle)
        .def_readwrite("OppositeLightBrightness", &UExponentialHeightFogComponent::OppositeLightBrightness)
        .def_readwrite("OppositeLightColor", &UExponentialHeightFogComponent::OppositeLightColor)
        .def_readwrite("LightInscatteringBrightness", &UExponentialHeightFogComponent::LightInscatteringBrightness)
        .def_readwrite("LightInscatteringColor", &UExponentialHeightFogComponent::LightInscatteringColor)
        .def("StaticClass", &UExponentialHeightFogComponent::StaticClass, py::return_value_policy::reference)
        .def("SetEnabled", &UExponentialHeightFogComponent::SetEnabled)
        .staticmethod("StaticClass")
  ;
}