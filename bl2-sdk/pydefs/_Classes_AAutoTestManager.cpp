#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AAutoTestManager()
{
    py::class_< AAutoTestManager,  AInfo   >("AAutoTestManager")
        .def_readwrite("AutomatedPerfRemainingTime", &AAutoTestManager::AutomatedPerfRemainingTime)
        .def_readwrite("AutomatedTestingMapIndex", &AAutoTestManager::AutomatedTestingMapIndex)
        .def_readwrite("AutomatedMapTestingList", &AAutoTestManager::AutomatedMapTestingList)
        .def_readwrite("AutomatedMapDLC1TestingList", &AAutoTestManager::AutomatedMapDLC1TestingList)
        .def_readwrite("NumAutomatedMapTestingCycles", &AAutoTestManager::NumAutomatedMapTestingCycles)
        .def_readwrite("NumberOfMatchesPlayed", &AAutoTestManager::NumberOfMatchesPlayed)
        .def_readwrite("NumMapListCyclesDone", &AAutoTestManager::NumMapListCyclesDone)
        .def_readwrite("AutomatedTestingExecCommandToRunAtStartMatch", &AAutoTestManager::AutomatedTestingExecCommandToRunAtStartMatch)
        .def_readwrite("AutomatedMapTestingTransitionMap", &AAutoTestManager::AutomatedMapTestingTransitionMap)
        .def_readwrite("SentinelTaskDescription", &AAutoTestManager::SentinelTaskDescription)
        .def_readwrite("SentinelTaskParameter", &AAutoTestManager::SentinelTaskParameter)
        .def_readwrite("SentinelTagDesc", &AAutoTestManager::SentinelTagDesc)
        .def_readwrite("SentinelPC", &AAutoTestManager::SentinelPC)
        .def_readwrite("SentinelTravelArray", &AAutoTestManager::SentinelTravelArray)
        .def_readwrite("SentinelNavigationIdx", &AAutoTestManager::SentinelNavigationIdx)
        .def_readwrite("SentinelIdx", &AAutoTestManager::SentinelIdx)
        .def_readwrite("NumRotationsIncrement", &AAutoTestManager::NumRotationsIncrement)
        .def_readwrite("TravelPointsIncrement", &AAutoTestManager::TravelPointsIncrement)
        .def_readwrite("NumMinutesPerMap", &AAutoTestManager::NumMinutesPerMap)
        .def_readwrite("CommandsToRunAtEachTravelTheWorldNode", &AAutoTestManager::CommandsToRunAtEachTravelTheWorldNode)
        .def_readwrite("CommandStringToExec", &AAutoTestManager::CommandStringToExec)
        .def_readwrite("SelectedCharacterClass", &AAutoTestManager::SelectedCharacterClass)
        .def_readwrite("StationDefName", &AAutoTestManager::StationDefName)
        .def_readwrite("AutomatedTestingTravelType", &AAutoTestManager::AutomatedTestingTravelType)
        .def_readwrite("NumOfDLCsToIncludeInRun", &AAutoTestManager::NumOfDLCsToIncludeInRun)
        .def("StaticClass", &AAutoTestManager::StaticClass, py::return_value_policy::reference)
        .def("CheckForSentinelRun", &AAutoTestManager::CheckForSentinelRun)
        .def("StartMatch", &AAutoTestManager::StartMatch)
        .def("StopTraversal", &AAutoTestManager::StopTraversal)
        .def("GetNextAutomatedTestingMap", &AAutoTestManager::GetNextAutomatedTestingMap)
        .def("IncrementNumberOfMatchesPlayed", &AAutoTestManager::IncrementNumberOfMatchesPlayed)
        .def("IncrementAutomatedTestingMapIndex", &AAutoTestManager::IncrementAutomatedTestingMapIndex)
        .def("CloseAutomatedMapTestTimer", &AAutoTestManager::CloseAutomatedMapTestTimer)
        .def("StartAutomatedMapTestTimerWorker", &AAutoTestManager::StartAutomatedMapTestTimerWorker)
        .def("eventStartAutomatedMapTestTimer", &AAutoTestManager::eventStartAutomatedMapTestTimer)
        .def("eventStartMenuTimer", &AAutoTestManager::eventStartMenuTimer)
        .def("DoSentinel_TakeManualMemSnapshot", &AAutoTestManager::DoSentinel_TakeManualMemSnapshot)
        .def("DoMemoryTracking", &AAutoTestManager::DoMemoryTracking)
        .def("DoTimeBasedSentinelStatGathering", &AAutoTestManager::DoTimeBasedSentinelStatGathering)
        .def("DoSentinel_ViewDependentMemoryAtSpecificLocation", &AAutoTestManager::DoSentinel_ViewDependentMemoryAtSpecificLocation)
        .def("DoSentinel_PerfAtSpecificLocation", &AAutoTestManager::DoSentinel_PerfAtSpecificLocation)
        .def("DoSentinel_MemoryAtSpecificLocation", &AAutoTestManager::DoSentinel_MemoryAtSpecificLocation)
        .def("GetTravelLocations", &AAutoTestManager::GetTravelLocations)
        .def("HandlePerLoadedMapAudioStats", &AAutoTestManager::HandlePerLoadedMapAudioStats)
        .def("DoSentinelActionPerLoadedMap", &AAutoTestManager::DoSentinelActionPerLoadedMap)
        .def("DoAutomatedSmokeTest", &AAutoTestManager::DoAutomatedSmokeTest)
        .def("DoUIAutoMemTest", &AAutoTestManager::DoUIAutoMemTest)
        .def("DoTravelTheWorld", &AAutoTestManager::DoTravelTheWorld)
        .def("EndSentinelRun", &AAutoTestManager::EndSentinelRun)
        .def("AddSentinelPerTimePeriodStats", &AAutoTestManager::AddSentinelPerTimePeriodStats)
        .def("BeginSentinelRun", &AAutoTestManager::BeginSentinelRun)
        .def("PopulateFullAutomatedTestingMapList", &AAutoTestManager::PopulateFullAutomatedTestingMapList)
        .def("InitializeOptions", &AAutoTestManager::InitializeOptions)
        .def("eventTimer", &AAutoTestManager::eventTimer)
        .def("eventPostBeginPlay", &AAutoTestManager::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}