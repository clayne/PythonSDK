#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowInventoryPartDefinition()
{
    py::class_< UWillowInventoryPartDefinition,  UGBXDefinition   >("UWillowInventoryPartDefinition")
        .def_readwrite("Material", &UWillowInventoryPartDefinition::Material)
        .def_readwrite("GestaltModeSkeletalMeshName", &UWillowInventoryPartDefinition::GestaltModeSkeletalMeshName)
        .def_readwrite("NongestaltSkeletalMesh", &UWillowInventoryPartDefinition::NongestaltSkeletalMesh)
        .def_readonly("AdditionalGestaltModeSkeletalMeshNames", &UWillowInventoryPartDefinition::AdditionalGestaltModeSkeletalMeshNames)
        .def_readwrite("AttributeSlotEffects", &UWillowInventoryPartDefinition::AttributeSlotEffects)
        .def_readwrite("AttributeSlotUpgrades", &UWillowInventoryPartDefinition::AttributeSlotUpgrades)
        .def_readwrite("MonetaryValueMod", &UWillowInventoryPartDefinition::MonetaryValueMod)
        .def_readwrite("Rarity", &UWillowInventoryPartDefinition::Rarity)
        .def_readwrite("MaterialVectorParameterValues", &UWillowInventoryPartDefinition::MaterialVectorParameterValues)
        .def("StaticClass", &UWillowInventoryPartDefinition::StaticClass, py::return_value_policy::reference)
        .def("ApplyMaterialModifiers", &UWillowInventoryPartDefinition::ApplyMaterialModifiers)
        .def("GetSkeletalMesh", &UWillowInventoryPartDefinition::GetSkeletalMesh, py::return_value_policy::reference)
        .def("AddAdditionalGestaltMeshNames", &UWillowInventoryPartDefinition::AddAdditionalGestaltMeshNames)
        .def("GetSkeletalMeshName", &UWillowInventoryPartDefinition::GetSkeletalMeshName)
        .def("GetRarityLevel", &UWillowInventoryPartDefinition::GetRarityLevel)
        .staticmethod("StaticClass")
  ;
}