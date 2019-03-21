#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowItem()
{
    py::class_< AWillowItem,  AWillowInventory   >("AWillowItem")
        .def_readwrite("VfTable_IIInstanceData", &AWillowItem::VfTable_IIInstanceData)
        .def_readwrite("VfTable_IIMissionInventory", &AWillowItem::VfTable_IIMissionInventory)
        .def_readwrite("VfTable_IIBehaviorConsumer", &AWillowItem::VfTable_IIBehaviorConsumer)
        .def_readwrite("VfTable_IIItemCardable", &AWillowItem::VfTable_IIItemCardable)
        .def_readwrite("DefinitionData", &AWillowItem::DefinitionData)
        .def_readwrite("PartListCollection", &AWillowItem::PartListCollection)
        .def_readwrite("HUDMaterialInstance", &AWillowItem::HUDMaterialInstance)
        .def_readwrite("Mesh", &AWillowItem::Mesh)
        .def_readwrite("ItemSkeletalMesh", &AWillowItem::ItemSkeletalMesh)
        .def_readwrite("ItemStaticMesh", &AWillowItem::ItemStaticMesh)
        .def_readwrite("ItemMaterial", &AWillowItem::ItemMaterial)
        .def_readwrite("ExternalAttributeModifiers", &AWillowItem::ExternalAttributeModifiers)
        .def_readwrite("PartExternalAttributeModifiers", &AWillowItem::PartExternalAttributeModifiers)
        .def_readwrite("ItemAttributeModifiers", &AWillowItem::ItemAttributeModifiers)
        .def_readwrite("ItemCardModifierStats", &AWillowItem::ItemCardModifierStats)
        .def_readonly("ReplicatedItemCardModifierValues", &AWillowItem::ReplicatedItemCardModifierValues)
        .def_readwrite("UIStatModifiers", &AWillowItem::UIStatModifiers)
        .def_readwrite("InstanceDataState", &AWillowItem::InstanceDataState)
        .def_readwrite("ConsumerHandle", &AWillowItem::ConsumerHandle)
        .def_readwrite("ReplicatedBehaviorConsumerState", &AWillowItem::ReplicatedBehaviorConsumerState)
        .def_readwrite("ReplicatedBehaviorEvent", &AWillowItem::ReplicatedBehaviorEvent)
        .def("StaticClass", &AWillowItem::StaticClass, py::return_value_policy::reference)
        .def("IsUsefulToThisPlayer", &AWillowItem::IsUsefulToThisPlayer)
        .def("CheckDefMatch", &AWillowItem::CheckDefMatch)
        .def("SerialNumberMatchesDef", &AWillowItem::SerialNumberMatchesDef)
        .def("CreateItemFromSerialNumber", &AWillowItem::CreateItemFromSerialNumber, py::return_value_policy::reference)
        .def("UnpackSerialNumber", &AWillowItem::UnpackSerialNumber)
        .def("PackSerialNumber", &AWillowItem::PackSerialNumber)
        .def("CreateSerialNumber", &AWillowItem::CreateSerialNumber)
        .def("DefinitionFromHashString", &AWillowItem::DefinitionFromHashString)
        .def("GetHashString", &AWillowItem::GetHashString)
        .def("CreateItemFromDef", &AWillowItem::CreateItemFromDef, py::return_value_policy::reference)
        .def("eventGetCategoryKey", &AWillowItem::eventGetCategoryKey)
        .def("CreateItemFromMemento", &AWillowItem::CreateItemFromMemento, py::return_value_policy::reference)
        .def("GetMemento", &AWillowItem::GetMemento)
        .def("GetModelName", &AWillowItem::GetModelName)
        .def("GetItemCardTopSectionString", &AWillowItem::GetItemCardTopSectionString)
        .def("eventGetRainGrenadeIcon", &AWillowItem::eventGetRainGrenadeIcon)
        .def("eventGetTechIconFrame", &AWillowItem::eventGetTechIconFrame)
        .def("eventGetInstanceData", &AWillowItem::eventGetInstanceData)
        .def("GetReplicatedInstanceDataState", &AWillowItem::GetReplicatedInstanceDataState)
        .def("GetInstanceDataState", &AWillowItem::GetInstanceDataState)
        .def("DestroyOwnedInstanceData", &AWillowItem::DestroyOwnedInstanceData)
        .def("eventRemoveInstanceDataObject", &AWillowItem::eventRemoveInstanceDataObject)
        .def("eventRemoveInstanceData", &AWillowItem::eventRemoveInstanceData)
        .def("SetInstanceData", &AWillowItem::SetInstanceData)
        .def("GetDroppedImpactDefinition", &AWillowItem::GetDroppedImpactDefinition, py::return_value_policy::reference)
        .def("GetItemDebug", &AWillowItem::GetItemDebug)
        .def("eventLogInventoryDebug", &AWillowItem::eventLogInventoryDebug)
        .def("FormatFunStatsText", &AWillowItem::FormatFunStatsText)
        .def("GenerateFunStatsText", &AWillowItem::GenerateFunStatsText)
        .def("GetInventoryStatTextData", &AWillowItem::GetInventoryStatTextData)
        .def("GetInventoryStatNumberData", &AWillowItem::GetInventoryStatNumberData)
        .def("CacheItemCard", &AWillowItem::CacheItemCard)
        .def("CanCompareUIStat", &AWillowItem::CanCompareUIStat)
        .def("CompareUIStat", &AWillowItem::CompareUIStat)
        .def("CanBeUsedBy", &AWillowItem::CanBeUsedBy)
        .def("eventTranslateUseFailure", &AWillowItem::eventTranslateUseFailure)
        .def("GenerateHumanReadableNameFromDefinitionParts", &AWillowItem::GenerateHumanReadableNameFromDefinitionParts)
        .def("GenerateHumanReadableNameFromDefinition", &AWillowItem::GenerateHumanReadableNameFromDefinition)
        .def("eventGetInventoryCardString", &AWillowItem::eventGetInventoryCardString)
        .def("eventGetShortHumanReadableName", &AWillowItem::eventGetShortHumanReadableName)
        .def("GenerateHumanReadableName", &AWillowItem::GenerateHumanReadableName)
        .def("GetPresentationDefinition", &AWillowItem::GetPresentationDefinition, py::return_value_policy::reference)
        .def("GetLocalString", &AWillowItem::GetLocalString)
        .def("ServerReselectItem", &AWillowItem::ServerReselectItem)
        .def("DenyPickupQuery", &AWillowItem::DenyPickupQuery)
        .def("CreateClone", &AWillowItem::CreateClone, py::return_value_policy::reference)
        .def("DropFrom", &AWillowItem::DropFrom, py::return_value_policy::reference)
        .def("GivenTo", &AWillowItem::GivenTo)
        .def("eventIsPlayerRestricted", &AWillowItem::eventIsPlayerRestricted)
        .def("RemoveFromShop", &AWillowItem::RemoveFromShop)
        .def("GetProjectileDefinition", &AWillowItem::GetProjectileDefinition, py::return_value_policy::reference)
        .def("UpdateUIStateModifierCompareValues", &AWillowItem::UpdateUIStateModifierCompareValues)
        .def("GetAttributePresentationOverride", &AWillowItem::GetAttributePresentationOverride, py::return_value_policy::reference)
        .def("InitUIStats", &AWillowItem::InitUIStats)
        .def("RemoveAllPartExternalAttributeEffects", &AWillowItem::RemoveAllPartExternalAttributeEffects)
        .def("RemoveAllExternalAttributeEffects", &AWillowItem::RemoveAllExternalAttributeEffects)
        .def("ApplyAllExternalAttributeEffects", &AWillowItem::ApplyAllExternalAttributeEffects)
        .def("RemoveAllItemAttributeEffects", &AWillowItem::RemoveAllItemAttributeEffects)
        .def("ApplyNamePartItemAttributeEffects", &AWillowItem::ApplyNamePartItemAttributeEffects)
        .def("ApplyAllItemAttributeEffects", &AWillowItem::ApplyAllItemAttributeEffects)
        .def("DeactivateAttributeSlotSkill", &AWillowItem::DeactivateAttributeSlotSkill)
        .def("ActivateAttributeSlotSkill", &AWillowItem::ActivateAttributeSlotSkill)
        .def("ComputeValueOfParts", &AWillowItem::ComputeValueOfParts)
        .def("StaticCalculateItemRarityLevel", &AWillowItem::StaticCalculateItemRarityLevel)
        .def("CalculateItemRarityLevel", &AWillowItem::CalculateItemRarityLevel)
        .def("IsAllPartsDebugEnabled", &AWillowItem::IsAllPartsDebugEnabled)
        .def("ToggleAllPartsDebug", &AWillowItem::ToggleAllPartsDebug)
        .def("SelectNamePartFromList", &AWillowItem::SelectNamePartFromList, py::return_value_policy::reference)
        .def("ChooseRandomNameParts", &AWillowItem::ChooseRandomNameParts)
        .def("ChooseRandomParts", &AWillowItem::ChooseRandomParts)
        .def("ChoosePartListCollection", &AWillowItem::ChoosePartListCollection)
        .def("ClonePrimaryMesh", &AWillowItem::ClonePrimaryMesh, py::return_value_policy::reference)
        .def("eventCloneAppearance", &AWillowItem::eventCloneAppearance)
        .def("AttachMeshToPickup", &AWillowItem::AttachMeshToPickup)
        .def("PickupDisassociated", &AWillowItem::PickupDisassociated)
        .def("PickupAssociated", &AWillowItem::PickupAssociated)
        .def("InitMeshes", &AWillowItem::InitMeshes)
        .def("eventInitConstructPreview", &AWillowItem::eventInitConstructPreview, py::return_value_policy::reference)
        .def("BuildItemMaterial", &AWillowItem::BuildItemMaterial, py::return_value_policy::reference)
        .def("BuildCompositeMesh", &AWillowItem::BuildCompositeMesh, py::return_value_policy::reference)
        .def("ClientInitializeFromItemDefinition", &AWillowItem::ClientInitializeFromItemDefinition)
        .def("ValidateDefinitions", &AWillowItem::ValidateDefinitions)
        .def("RecomputeAttributeBaseValues", &AWillowItem::RecomputeAttributeBaseValues)
        .def("CalculateItemBaseValues", &AWillowItem::CalculateItemBaseValues)
        .def("InitializeInternal", &AWillowItem::InitializeInternal)
        .def("eventInitializeFromDefinitionData", &AWillowItem::eventInitializeFromDefinitionData)
        .def("eventInitializeInventory", &AWillowItem::eventInitializeInventory)
        .def("AllParts", &AWillowItem::AllParts)
        .def("CheckItemAgainstBackpackInventoryBeingEquipped", &AWillowItem::CheckItemAgainstBackpackInventoryBeingEquipped)
        .def("eventReplicatedEvent", &AWillowItem::eventReplicatedEvent)
        .def("IsEquipped", &AWillowItem::IsEquipped)
        .def("eventGetEquipmentLocation", &AWillowItem::eventGetEquipmentLocation)
        .def("OnPickupDisassociated", &AWillowItem::OnPickupDisassociated)
        .def("OnPickupAssociated", &AWillowItem::OnPickupAssociated)
        .def("OnCreate", &AWillowItem::OnCreate)
        .def("GetBehaviorConsumerHandle", &AWillowItem::GetBehaviorConsumerHandle)
        .staticmethod("StaticClass")
  ;
}