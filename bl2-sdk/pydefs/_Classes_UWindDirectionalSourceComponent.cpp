#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWindDirectionalSourceComponent()
{
    py::class_< UWindDirectionalSourceComponent,  UActorComponent   >("UWindDirectionalSourceComponent")
        .def_readwrite("SceneProxy", &UWindDirectionalSourceComponent::SceneProxy)
        .def_readwrite("Strength", &UWindDirectionalSourceComponent::Strength)
        .def_readwrite("Phase", &UWindDirectionalSourceComponent::Phase)
        .def_readwrite("Frequency", &UWindDirectionalSourceComponent::Frequency)
        .def_readwrite("Speed", &UWindDirectionalSourceComponent::Speed)
        .def("StaticClass", &UWindDirectionalSourceComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}