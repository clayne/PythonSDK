#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AEmitter()
{
    py::class_< AEmitter,  AActor   >("AEmitter")
        .def_readwrite("ParticleSystemComponent", &AEmitter::ParticleSystemComponent)
        .def_readwrite("LightEnvironment", &AEmitter::LightEnvironment)
        .def("StaticClass", &AEmitter::StaticClass, py::return_value_policy::reference)
        .def("Behavior_Destroy", &AEmitter::Behavior_Destroy)
        .def("HideSelf", &AEmitter::HideSelf)
        .def("ApplyCheckpointRecord", &AEmitter::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &AEmitter::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &AEmitter::ShouldSaveForCheckpoint)
        .def("OnSetParticleSysParam", &AEmitter::OnSetParticleSysParam)
        .def("SetActorParameter", &AEmitter::SetActorParameter)
        .def("SetExtColorParameter", &AEmitter::SetExtColorParameter)
        .def("SetColorParameter", &AEmitter::SetColorParameter)
        .def("SetVectorParameter", &AEmitter::SetVectorParameter)
        .def("SetFloatParameter", &AEmitter::SetFloatParameter)
        .def("ShutDown", &AEmitter::ShutDown)
        .def("OnParticleEventGenerator", &AEmitter::OnParticleEventGenerator)
        .def("OnToggle", &AEmitter::OnToggle)
        .def("OnParticleSystemFinished", &AEmitter::OnParticleSystemFinished)
        .def("eventReplicatedEvent", &AEmitter::eventReplicatedEvent)
        .def("eventPostBeginPlay", &AEmitter::eventPostBeginPlay)
        .def("eventSetTemplate", &AEmitter::eventSetTemplate)
        .staticmethod("StaticClass")
  ;
}