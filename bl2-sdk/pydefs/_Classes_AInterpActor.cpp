#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AInterpActor(py::module &m)
{
    py::class_< AInterpActor,  AActor   >(m, "AInterpActor")
		.def_static("StaticClass", &AInterpActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MyMarker", &AInterpActor::MyMarker)
        .def_readwrite("MaxZVelocity", &AInterpActor::MaxZVelocity)
        .def_readwrite("StayOpenTime", &AInterpActor::StayOpenTime)
        .def_readwrite("OpenSound", &AInterpActor::OpenSound)
        .def_readwrite("OpeningAmbientSound", &AInterpActor::OpeningAmbientSound)
        .def_readwrite("OpenedSound", &AInterpActor::OpenedSound)
        .def_readwrite("CloseSound", &AInterpActor::CloseSound)
        .def_readwrite("ClosingAmbientSound", &AInterpActor::ClosingAmbientSound)
        .def_readwrite("ClosedSound", &AInterpActor::ClosedSound)
        .def_readwrite("AmbientSoundComponent", &AInterpActor::AmbientSoundComponent)
        .def_readwrite("BeforeStoppingVelocityZ", &AInterpActor::BeforeStoppingVelocityZ)
        .def_readwrite("StaticMeshComponent", &ADynamicSMActor::StaticMeshComponent)
        .def_readwrite("LightEnvironment", &ADynamicSMActor::LightEnvironment)
        .def_readwrite("ReplicatedMesh", &ADynamicSMActor::ReplicatedMesh)
        .def_readwrite("ReplicatedMaterial0", &ADynamicSMActor::ReplicatedMaterial0)
        .def_readwrite("ReplicatedMaterial1", &ADynamicSMActor::ReplicatedMaterial1)
        .def_readwrite("ReplicatedMeshTranslation", &ADynamicSMActor::ReplicatedMeshTranslation)
        .def_readwrite("ReplicatedMeshRotation", &ADynamicSMActor::ReplicatedMeshRotation)
        .def_readwrite("ReplicatedMeshScale3D", &ADynamicSMActor::ReplicatedMeshScale3D)
        .def("ApplyCheckpointRecord", &AInterpActor::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &AInterpActor::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &AInterpActor::ShouldSaveForCheckpoint)
        .def("ShutDown", &AInterpActor::ShutDown)
        .def("eventInterpolationChanged", &AInterpActor::eventInterpolationChanged)
        .def("eventInterpolationFinished", &AInterpActor::eventInterpolationFinished)
        .def("eventInterpolationStarted", &AInterpActor::eventInterpolationStarted)
        .def("PlayMovingSound", &AInterpActor::PlayMovingSound)
        .def("FinishedOpen", &AInterpActor::FinishedOpen)
        .def("Restart", &AInterpActor::Restart)
        .def("eventDetach", &AInterpActor::eventDetach)
        .def("eventAttach", &AInterpActor::eventAttach)
        .def("eventRigidBodyCollision", &AInterpActor::eventRigidBodyCollision)
        .def("eventRanInto", &AInterpActor::eventRanInto)
        .def("eventEncroachingOn", &AInterpActor::eventEncroachingOn)
        .def("ChildEncroachingOn", &AInterpActor::ChildEncroachingOn)
        .def("StopOnEncroach", &AInterpActor::StopOnEncroach)
        .def("eventPostBeginPlay", &AInterpActor::eventPostBeginPlay)
        .def("SetLightEnvironmentToNotBeDynamic", &ADynamicSMActor::SetLightEnvironmentToNotBeDynamic)
        .def("CanBasePawn", &ADynamicSMActor::CanBasePawn)
        .def("SetStaticMesh", &ADynamicSMActor::SetStaticMesh)
        .def("OnSetMaterial", &ADynamicSMActor::OnSetMaterial)
        .def("OnSetMesh", &ADynamicSMActor::OnSetMesh)
        .def("eventReplicatedEvent", &ADynamicSMActor::eventReplicatedEvent)
          ;
}