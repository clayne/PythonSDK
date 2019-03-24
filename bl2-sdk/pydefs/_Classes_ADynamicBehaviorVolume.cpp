#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicBehaviorVolume(py::module &m)
{
    py::class_< ADynamicBehaviorVolume,  APhysicsVolume   >(m, "ADynamicBehaviorVolume")
		.def_static("StaticClass", &ADynamicBehaviorVolume::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIBehaviorConsumer", &ABehaviorVolume::VfTable_IIBehaviorConsumer)
        .def_readwrite("VfTable_IIInstanceData", &ABehaviorVolume::VfTable_IIInstanceData)
        .def_readwrite("VfTable_IIBalancedActor", &ABehaviorVolume::VfTable_IIBalancedActor)
        .def_readwrite("VfTable_IIDesignerAttributeProvider", &ABehaviorVolume::VfTable_IIDesignerAttributeProvider)
        .def_readwrite("Definition", &ABehaviorVolume::Definition)
        .def_readwrite("ConsumerHandle", &ABehaviorVolume::ConsumerHandle)
        .def_readwrite("RadiusForSearch", &ABehaviorVolume::RadiusForSearch)
        .def_readwrite("TouchingActors", &ABehaviorVolume::TouchingActors)
        .def_readwrite("TickRate", &ABehaviorVolume::TickRate)
        .def_readwrite("NextTickTime", &ABehaviorVolume::NextTickTime)
        .def_readwrite("VehicleCrewNdx", &ABehaviorVolume::VehicleCrewNdx)
        .def_readwrite("InstanceDataState", &ABehaviorVolume::InstanceDataState)
        .def_readwrite("ReplicatedInstanceDataState", &ABehaviorVolume::ReplicatedInstanceDataState)
        .def_readwrite("BalanceToRegionDef", &ABehaviorVolume::BalanceToRegionDef)
        .def_readwrite("ExpLevel", &ABehaviorVolume::ExpLevel)
        .def_readwrite("GameStage", &ABehaviorVolume::GameStage)
        .def_readwrite("AwesomeLevel", &ABehaviorVolume::AwesomeLevel)
        .def_readwrite("AttributeStartingValues", &ABehaviorVolume::AttributeStartingValues)
        .def_readwrite("DesignerAttributes", &ABehaviorVolume::DesignerAttributes)
        .def("eventGetInstancedDesignerAttribute", &ABehaviorVolume::eventGetInstancedDesignerAttribute, py::return_value_policy::reference)
        .def("CreateDesignerAttribute", &ABehaviorVolume::CreateDesignerAttribute, py::return_value_policy::reference)
        .def("InitializeAttributeStartingValues", &ABehaviorVolume::InitializeAttributeStartingValues)
        .def("GetBalancedActorTypeIdentifier", &ABehaviorVolume::GetBalancedActorTypeIdentifier)
        .def("SetExpLevel", &ABehaviorVolume::SetExpLevel)
        .def("SetAwesomeLevel", &ABehaviorVolume::SetAwesomeLevel)
        .def("SetGameStage", &ABehaviorVolume::SetGameStage)
        .def("GetExpLevelForEquip", &ABehaviorVolume::GetExpLevelForEquip)
        .def("GetExpLevel", &ABehaviorVolume::GetExpLevel)
        .def("GetAwesomeLevel", &ABehaviorVolume::GetAwesomeLevel)
        .def("GetGameStage", &ABehaviorVolume::GetGameStage)
        .def("GetReplicatedInstanceDataState", &ABehaviorVolume::GetReplicatedInstanceDataState)
        .def("GetInstanceDataState", &ABehaviorVolume::GetInstanceDataState)
        .def("DestroyOwnedInstanceData", &ABehaviorVolume::DestroyOwnedInstanceData)
        .def("eventRemoveInstanceDataObject", &ABehaviorVolume::eventRemoveInstanceDataObject)
        .def("eventRemoveInstanceData", &ABehaviorVolume::eventRemoveInstanceData)
        .def("eventGetInstanceData", &ABehaviorVolume::eventGetInstanceData)
        .def("SetInstanceData", &ABehaviorVolume::SetInstanceData)
        .def("ClearTouchList", &ABehaviorVolume::ClearTouchList)
        .def("HandleDisabled", &ABehaviorVolume::HandleDisabled)
        .def("OnToggle", &ABehaviorVolume::OnToggle)
        .def("eventCanSplashNativeWrapper", &ABehaviorVolume::eventCanSplashNativeWrapper)
        .def("IsWaterVolume", &ABehaviorVolume::IsWaterVolume)
        .def("eventBehaviorVolumeImpact", &ABehaviorVolume::eventBehaviorVolumeImpact)
        .def("eventTakeDamage", &ABehaviorVolume::eventTakeDamage)
        .def("eventTraceTouch", &ABehaviorVolume::eventTraceTouch)
        .def("eventUnTouch", &ABehaviorVolume::eventUnTouch)
        .def("eventTouch", &ABehaviorVolume::eventTouch)
        .def("StopsProjectile", &ABehaviorVolume::StopsProjectile)
        .def("eventPostBeginPlay", &ABehaviorVolume::eventPostBeginPlay)
        .def("GetBehaviorConsumerHandle", &ABehaviorVolume::GetBehaviorConsumerHandle)
        .def("eventReplicatedEvent", &ABehaviorVolume::eventReplicatedEvent)
          ;
}