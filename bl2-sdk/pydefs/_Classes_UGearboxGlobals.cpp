#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxGlobals()
{
    py::class_< UGearboxGlobals,  UGearboxEngineGlobals   >("UGearboxGlobals")
        .def_readwrite("TheGlobalsDefinition", &UGearboxGlobals::TheGlobalsDefinition)
        .def_readwrite("ExposureUtilityClass", &UGearboxGlobals::ExposureUtilityClass)
        .def_readwrite("ExposureUtilityStrategyClass", &UGearboxGlobals::ExposureUtilityStrategyClass)
        .def_readwrite("TheExposureUtility", &UGearboxGlobals::TheExposureUtility)
        .def_readwrite("TheAIFactory", &UGearboxGlobals::TheAIFactory)
        .def_readwrite("TheRuleEngineLoadBalanceManager", &UGearboxGlobals::TheRuleEngineLoadBalanceManager)
        .def_readwrite("TheGBXActorList", &UGearboxGlobals::TheGBXActorList)
        .def_readwrite("TheGBXObjectList", &UGearboxGlobals::TheGBXObjectList)
        .def_readwrite("ValidNameList", &UGearboxGlobals::ValidNameList)
        .def_readwrite("TheWireMgr", &UGearboxGlobals::TheWireMgr)
        .def_readwrite("TheMessageManager", &UGearboxGlobals::TheMessageManager)
        .def_readwrite("TheDynamicTextureActorList", &UGearboxGlobals::TheDynamicTextureActorList)
        .def_readwrite("ThePopulationMaster", &UGearboxGlobals::ThePopulationMaster)
        .def_readwrite("TheBehaviorKernel", &UGearboxGlobals::TheBehaviorKernel)
        .def_readwrite("TheScreenSpaceManager", &UGearboxGlobals::TheScreenSpaceManager)
        .def_readwrite("TheGFxManager", &UGearboxGlobals::TheGFxManager)
        .def_readwrite("TheRenderTextureManager", &UGearboxGlobals::TheRenderTextureManager)
        .def_readwrite("GlobalInstanceClassName", &UGearboxGlobals::GlobalInstanceClassName)
        .def_readwrite("DefaultMaxPopulationActorCost", &UGearboxGlobals::DefaultMaxPopulationActorCost)
        .def_readwrite("StateRecords", &UGearboxGlobals::StateRecords)
        .def_readwrite("UIAudioComponent", &UGearboxGlobals::UIAudioComponent)
        .def_readwrite("TheDialogManager", &UGearboxGlobals::TheDialogManager)
        .def("StaticClass", &UGearboxGlobals::StaticClass, py::return_value_policy::reference)
        .def("GetBehaviorKernel", &UGearboxGlobals::GetBehaviorKernel, py::return_value_policy::reference)
        .def("GetDialogManager", &UGearboxGlobals::GetDialogManager, py::return_value_policy::reference)
        .def("GetPopulationRespawnDelay", &UGearboxGlobals::GetPopulationRespawnDelay)
        .def("eventShowDialog", &UGearboxGlobals::eventShowDialog, py::return_value_policy::reference)
        .def("NotifyActorDied", &UGearboxGlobals::NotifyActorDied)
        .def("DoesLOSIntersectSpecialOccluder", &UGearboxGlobals::DoesLOSIntersectSpecialOccluder)
        .def("HasPhysXCapableGPU", &UGearboxGlobals::HasPhysXCapableGPU)
        .def("GetPlatform", &UGearboxGlobals::GetPlatform)
        .def("ValidatePlayerName", &UGearboxGlobals::ValidatePlayerName)
        .def("RegisterStateKey", &UGearboxGlobals::RegisterStateKey)
        .def("DoesStateKeyExist", &UGearboxGlobals::DoesStateKeyExist)
        .def("FreeTexture2D", &UGearboxGlobals::FreeTexture2D)
        .def("GetTexture2D", &UGearboxGlobals::GetTexture2D, py::return_value_policy::reference)
        .def("GetRenderTextureManager", &UGearboxGlobals::GetRenderTextureManager, py::return_value_policy::reference)
        .def("GetGFxManager", &UGearboxGlobals::GetGFxManager, py::return_value_policy::reference)
        .def("GetScreenSpaceManager", &UGearboxGlobals::GetScreenSpaceManager, py::return_value_policy::reference)
        .def("GetMessageManager", &UGearboxGlobals::GetMessageManager, py::return_value_policy::reference)
        .def("RegDynamicTextureStreaming", &UGearboxGlobals::RegDynamicTextureStreaming)
        .def("GetDynamicTextureActorList", &UGearboxGlobals::GetDynamicTextureActorList, py::return_value_policy::reference)
        .def("GetPopulationMaster", &UGearboxGlobals::GetPopulationMaster, py::return_value_policy::reference)
        .def("GetWireManager", &UGearboxGlobals::GetWireManager, py::return_value_policy::reference)
        .def("GetGBXObjectList", &UGearboxGlobals::GetGBXObjectList, py::return_value_policy::reference)
        .def("GetGBXActorList", &UGearboxGlobals::GetGBXActorList, py::return_value_policy::reference)
        .def("GetRuleEngineLoadBalanceManager", &UGearboxGlobals::GetRuleEngineLoadBalanceManager, py::return_value_policy::reference)
        .def("GetGearboxAIFactory", &UGearboxGlobals::GetGearboxAIFactory, py::return_value_policy::reference)
        .def("GetExposureUtility", &UGearboxGlobals::GetExposureUtility, py::return_value_policy::reference)
        .def("GetGearboxGlobals", &UGearboxGlobals::GetGearboxGlobals, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}