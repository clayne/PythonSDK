#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AKActorSpawnable()
{
    py::class_< AKActorSpawnable,  AKActor   >("AKActorSpawnable")
        .def("StaticClass", &AKActorSpawnable::StaticClass, py::return_value_policy::reference)
        .def("ResetComponents", &AKActorSpawnable::ResetComponents)
        .def("eventRecycleInternal", &AKActorSpawnable::eventRecycleInternal)
        .def("Recycle", &AKActorSpawnable::Recycle)
        .def("initialize", &AKActorSpawnable::initialize)
        .def("eventReplicatedEvent", &AKActorSpawnable::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}