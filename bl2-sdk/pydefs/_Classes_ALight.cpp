#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ALight()
{
    py::class_< ALight,  AActor   >("ALight")
        .def_readwrite("LightComponent", &ALight::LightComponent)
        .def("StaticClass", &ALight::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &ALight::OnToggle)
        .def("eventReplicatedEvent", &ALight::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}