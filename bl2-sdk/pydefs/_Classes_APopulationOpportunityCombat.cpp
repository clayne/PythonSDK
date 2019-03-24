#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APopulationOpportunityCombat(py::module &m)
{
    py::class_< APopulationOpportunityCombat,  APopulationOpportunity   >(m, "APopulationOpportunityCombat")
		.def_static("StaticClass", &APopulationOpportunityCombat::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIGbxMessageListener", &APopulationOpportunityCombat::VfTable_IIGbxMessageListener)
        .def_readwrite("ParentEncounter", &APopulationOpportunityCombat::ParentEncounter)
        .def_readwrite("ParentEncounterWave", &APopulationOpportunityCombat::ParentEncounterWave)
        .def_readwrite("PopulationDef", &APopulationOpportunityCombat::PopulationDef)
        .def_readwrite("MaxTotalActorsFormula", &APopulationOpportunityCombat::MaxTotalActorsFormula)
        .def_readwrite("MaxTotalActors", &APopulationOpportunityCombat::MaxTotalActors)
        .def_readwrite("MaxActiveActorsIsNormal", &APopulationOpportunityCombat::MaxActiveActorsIsNormal)
        .def_readwrite("MaxActiveActorsThreatened", &APopulationOpportunityCombat::MaxActiveActorsThreatened)
        .def_readwrite("RespawnDelayFormula", &APopulationOpportunityCombat::RespawnDelayFormula)
        .def_readwrite("DetectionVolumes", &APopulationOpportunityCombat::DetectionVolumes)
        .def_readwrite("DetectionRadius", &APopulationOpportunityCombat::DetectionRadius)
        .def_readwrite("OpportunityHeight", &APopulationOpportunityCombat::OpportunityHeight)
        .def_readwrite("RadiusDebugColor", &APopulationOpportunityCombat::RadiusDebugColor)
        .def_readwrite("RespawnDelay", &APopulationOpportunityCombat::RespawnDelay)
        .def_readwrite("DetectionDrawSphere", &APopulationOpportunityCombat::DetectionDrawSphere)
        .def_readwrite("ActivePlayerScale", &APopulationOpportunityCombat::ActivePlayerScale)
        .def_readwrite("SpawnedMembers", &APopulationOpportunityCombat::SpawnedMembers)
        .def_readwrite("SpawnData", &APopulationOpportunityCombat::SpawnData)
        .def_readwrite("PlayersDetected", &APopulationOpportunityCombat::PlayersDetected)
        .def_readwrite("NumPlayersDetected", &APopulationOpportunityCombat::NumPlayersDetected)
        .def("ApplyPreviewBodyComposition", &APopulationOpportunityCombat::ApplyPreviewBodyComposition)
        .def("GetBodyInfoProvider", &APopulationOpportunityCombat::GetBodyInfoProvider, py::return_value_policy::reference)
        .def("eventTriggerKismetSingleDeathEvent", &APopulationOpportunityCombat::eventTriggerKismetSingleDeathEvent)
        .def("eventTriggerKismetDeathEvent", &APopulationOpportunityCombat::eventTriggerKismetDeathEvent)
        .def("GetNumSpawned", &APopulationOpportunityCombat::GetNumSpawned)
        .def("GetNumAlive", &APopulationOpportunityCombat::GetNumAlive)
        .def("GetNumDied", &APopulationOpportunityCombat::GetNumDied)
        .def("WantsToStopListening", &APopulationOpportunityCombat::WantsToStopListening)
        .def("GetActor", &APopulationOpportunityCombat::GetActor, py::return_value_policy::reference)
        .def("GetListenerLocation", &APopulationOpportunityCombat::GetListenerLocation)
        .def("GetAllegiance", &APopulationOpportunityCombat::GetAllegiance, py::return_value_policy::reference)
        .def("ReceiveMessage", &APopulationOpportunityCombat::ReceiveMessage)
        .def("CaresAboutMessage", &APopulationOpportunityCombat::CaresAboutMessage)
        .def("PostBeginPlay", &APopulationOpportunityCombat::PostBeginPlay)
        .def("EnableDebugging", &APopulationOpportunityCombat::EnableDebugging)
        .def("RespawnKilledActors", &APopulationOpportunityCombat::RespawnKilledActors)
        .def("DoSpawning", &APopulationOpportunityCombat::DoSpawning)
          ;
}