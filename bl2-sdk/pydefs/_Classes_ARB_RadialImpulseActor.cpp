#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_RadialImpulseActor()
{
    py::class_< ARB_RadialImpulseActor,  ARigidBodyBase   >("ARB_RadialImpulseActor")
        .def_readwrite("RenderComponent", &ARB_RadialImpulseActor::RenderComponent)
        .def_readwrite("ImpulseComponent", &ARB_RadialImpulseActor::ImpulseComponent)
        .def_readwrite("ImpulseCount", &ARB_RadialImpulseActor::ImpulseCount)
        .def("StaticClass", &ARB_RadialImpulseActor::StaticClass, py::return_value_policy::reference)
        .def("eventReplicatedEvent", &ARB_RadialImpulseActor::eventReplicatedEvent)
        .def("OnToggle", &ARB_RadialImpulseActor::OnToggle)
        .staticmethod("StaticClass")
  ;
}