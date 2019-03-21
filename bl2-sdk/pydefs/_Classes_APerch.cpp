#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APerch()
{
    py::class_< APerch,  AGearboxAIMoveNode   >("APerch")
        .def_readwrite("VfTable_IIInstanceData", &APerch::VfTable_IIInstanceData)
        .def_readwrite("VfTable_IIBodyCompositionInstance", &APerch::VfTable_IIBodyCompositionInstance)
        .def_readwrite("VfTable_IIBehaviorConsumer", &APerch::VfTable_IIBehaviorConsumer)
        .def_readwrite("VfTable_FTickableObject", &APerch::VfTable_FTickableObject)
        .def_readwrite("PerchDef", &APerch::PerchDef)
        .def_readwrite("PreviewComponent", &APerch::PreviewComponent)
        .def_readwrite("UseRadius", &APerch::UseRadius)
        .def_readwrite("UseHeight", &APerch::UseHeight)
        .def_readwrite("LoopTimeOverride", &APerch::LoopTimeOverride)
        .def_readwrite("TargetVolumes", &APerch::TargetVolumes)
        .def_readwrite("User", &APerch::User)
        .def_readwrite("CooldownTime", &APerch::CooldownTime)
        .def_readwrite("NextPlayerInRangeCheckTime", &APerch::NextPlayerInRangeCheckTime)
        .def_readwrite("InstanceState", &APerch::InstanceState)
        .def_readwrite("ReplicatedInstanceDataState", &APerch::ReplicatedInstanceDataState)
        .def_readwrite("ConsumerHandle", &APerch::ConsumerHandle)
        .def_readwrite("ReplicatedBehaviorEvent", &APerch::ReplicatedBehaviorEvent)
        .def_readwrite("ReplicatedBehaviorConsumerState", &APerch::ReplicatedBehaviorConsumerState)
        .def_readwrite("DynamicLightEnvironment", &APerch::DynamicLightEnvironment)
        .def_readwrite("AlwaysRelevantDistanceSquared", &APerch::AlwaysRelevantDistanceSquared)
        .def_readwrite("VfTable_IInterface_NavigationHandle", &AWillowAIMoveNode::VfTable_IInterface_NavigationHandle)
        .def_readwrite("PawnArrivalRadius", &AWillowAIMoveNode::PawnArrivalRadius)
        .def_readwrite("AISpeedPercentageHere", &AWillowAIMoveNode::AISpeedPercentageHere)
        .def_readwrite("VehicleNodeType", &AWillowAIMoveNode::VehicleNodeType)
        .def("StaticClass", &APerch::StaticClass, py::return_value_policy::reference)
        .def("GetBehaviorConsumerHandle", &APerch::GetBehaviorConsumerHandle)
        .def("RegisterBehaviorConsumer", &APerch::RegisterBehaviorConsumer)
        .def("ClearBodyCompositionInstance", &APerch::ClearBodyCompositionInstance)
        .def("GetBodyInfoProvider", &APerch::GetBodyInfoProvider, py::return_value_policy::reference)
        .def("ApplyPreviewBodyComposition", &APerch::ApplyPreviewBodyComposition)
        .def("ChangeInstanceDataSwitch", &APerch::ChangeInstanceDataSwitch)
        .def("PostInitBodyComposition", &APerch::PostInitBodyComposition)
        .def("PreRemoveBodyComposition", &APerch::PreRemoveBodyComposition)
        .def("GetReplicatedInstanceDataState", &APerch::GetReplicatedInstanceDataState)
        .def("GetInstanceDataState", &APerch::GetInstanceDataState)
        .def("DestroyOwnedInstanceData", &APerch::DestroyOwnedInstanceData)
        .def("eventRemoveInstanceDataObject", &APerch::eventRemoveInstanceDataObject)
        .def("eventRemoveInstanceData", &APerch::eventRemoveInstanceData)
        .def("eventGetInstanceData", &APerch::eventGetInstanceData)
        .def("SetInstanceData", &APerch::SetInstanceData)
        .def("GetLoopRange", &APerch::GetLoopRange)
        .def("CheckStartReplication", &APerch::CheckStartReplication)
        .def("InitBody", &APerch::InitBody)
        .def("InitializeRBPhys", &APerch::InitializeRBPhys)
        .def("PostBeginPlay", &APerch::PostBeginPlay)
        .def("SetPerchDef", &APerch::SetPerchDef)
        .def("eventReplicatedEvent", &APerch::eventReplicatedEvent)
        .def("eventNotifyPathChanged", &AWillowAIMoveNode::eventNotifyPathChanged)
        .staticmethod("StaticClass")
  ;
}