#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStatusMenuGFxDefinition()
{
    py::class_< UStatusMenuGFxDefinition,  UWillowInventoryGFxDefinition   >("UStatusMenuGFxDefinition")
        .def_readwrite("Directions", &UStatusMenuGFxDefinition::Directions)
        .def_readwrite("NumEntriesOnMissionLog", &UStatusMenuGFxDefinition::NumEntriesOnMissionLog)
        .def_readwrite("MissionLogTextDefinition", &UStatusMenuGFxDefinition::MissionLogTextDefinition)
        .def_readwrite("Pres_Active", &UStatusMenuGFxDefinition::Pres_Active)
        .def_readwrite("Pres_ActivePlot", &UStatusMenuGFxDefinition::Pres_ActivePlot)
        .def_readwrite("Pres_ReadyToTurnIn", &UStatusMenuGFxDefinition::Pres_ReadyToTurnIn)
        .def_readwrite("Pres_NotStarted", &UStatusMenuGFxDefinition::Pres_NotStarted)
        .def_readwrite("Pres_Complete", &UStatusMenuGFxDefinition::Pres_Complete)
        .def_readwrite("Pres_Ineligible", &UStatusMenuGFxDefinition::Pres_Ineligible)
        .def_readwrite("Pres_Failed", &UStatusMenuGFxDefinition::Pres_Failed)
        .def_readwrite("UnselectedChallengeLogTextColor", &UStatusMenuGFxDefinition::UnselectedChallengeLogTextColor)
        .def_readwrite("ChallengeLogTextDefinition", &UStatusMenuGFxDefinition::ChallengeLogTextDefinition)
        .def_readwrite("EmptyInventorySlotColor", &UStatusMenuGFxDefinition::EmptyInventorySlotColor)
        .def_readwrite("Up", &UStatusMenuGFxDefinition::Up)
        .def_readwrite("Down", &UStatusMenuGFxDefinition::Down)
        .def_readwrite("Left", &UStatusMenuGFxDefinition::Left)
        .def_readwrite("Right", &UStatusMenuGFxDefinition::Right)
        .def_readwrite("Shield", &UStatusMenuGFxDefinition::Shield)
        .def_readwrite("mod", &UStatusMenuGFxDefinition::mod)
        .def_readwrite("Deck", &UStatusMenuGFxDefinition::Deck)
        .def_readwrite("ReadyWeaponUpIdx", &UStatusMenuGFxDefinition::ReadyWeaponUpIdx)
        .def_readwrite("ReadyWeaponDownIdx", &UStatusMenuGFxDefinition::ReadyWeaponDownIdx)
        .def_readwrite("ReadyWeaponLeftIdx", &UStatusMenuGFxDefinition::ReadyWeaponLeftIdx)
        .def_readwrite("ReadyWeaponRightIdx", &UStatusMenuGFxDefinition::ReadyWeaponRightIdx)
        .def_readwrite("EquippedShieldIdx", &UStatusMenuGFxDefinition::EquippedShieldIdx)
        .def_readwrite("EquippedGrenadeModIdx", &UStatusMenuGFxDefinition::EquippedGrenadeModIdx)
        .def_readwrite("EquippedClassModIdx", &UStatusMenuGFxDefinition::EquippedClassModIdx)
        .def_readwrite("EquippedArtifactIdx", &UStatusMenuGFxDefinition::EquippedArtifactIdx)
        .def_readwrite("ReadyWeaponUpSuffix", &UStatusMenuGFxDefinition::ReadyWeaponUpSuffix)
        .def_readwrite("ReadyWeaponDownSuffix", &UStatusMenuGFxDefinition::ReadyWeaponDownSuffix)
        .def_readwrite("ReadyWeaponLeftSuffix", &UStatusMenuGFxDefinition::ReadyWeaponLeftSuffix)
        .def_readwrite("ReadyWeaponRightSuffix", &UStatusMenuGFxDefinition::ReadyWeaponRightSuffix)
        .def_readwrite("EquippedShieldSuffix", &UStatusMenuGFxDefinition::EquippedShieldSuffix)
        .def_readwrite("EquippedGrenadeModSuffix", &UStatusMenuGFxDefinition::EquippedGrenadeModSuffix)
        .def_readwrite("EquippedClassModSuffix", &UStatusMenuGFxDefinition::EquippedClassModSuffix)
        .def_readwrite("EquippedArtifactSuffix", &UStatusMenuGFxDefinition::EquippedArtifactSuffix)
        .def_readwrite("EquippedCellWidth", &UStatusMenuGFxDefinition::EquippedCellWidth)
        .def_readwrite("EquippedCellHeight", &UStatusMenuGFxDefinition::EquippedCellHeight)
        .def_readwrite("EquippedSmCellWidth", &UStatusMenuGFxDefinition::EquippedSmCellWidth)
        .def_readwrite("EquippedSmCellHeight", &UStatusMenuGFxDefinition::EquippedSmCellHeight)
        .def_readwrite("EquippedTextureWidth", &UStatusMenuGFxDefinition::EquippedTextureWidth)
        .def_readwrite("EquippedTextureHeight", &UStatusMenuGFxDefinition::EquippedTextureHeight)
        .def_readwrite("CardCellWidth", &UStatusMenuGFxDefinition::CardCellWidth)
        .def_readwrite("CardCellHeight", &UStatusMenuGFxDefinition::CardCellHeight)
        .def_readwrite("CardTextureWidth", &UStatusMenuGFxDefinition::CardTextureWidth)
        .def_readwrite("CardTextureHeight", &UStatusMenuGFxDefinition::CardTextureHeight)
        .def_readwrite("BackpackCellWidth", &UStatusMenuGFxDefinition::BackpackCellWidth)
        .def_readwrite("BackpackCellHeight", &UStatusMenuGFxDefinition::BackpackCellHeight)
        .def_readwrite("SkillDef", &UStatusMenuGFxDefinition::SkillDef)
        .def_readwrite("InventoryPanelPath", &UStatusMenuGFxDefinition::InventoryPanelPath)
        .def_readwrite("ChallengesPanelDef", &UStatusMenuGFxDefinition::ChallengesPanelDef)
        .def_readwrite("LatentRewardDef", &UStatusMenuGFxDefinition::LatentRewardDef)
        .def("StaticClass", &UStatusMenuGFxDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}