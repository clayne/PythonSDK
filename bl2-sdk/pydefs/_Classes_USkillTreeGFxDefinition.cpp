#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillTreeGFxDefinition()
{
    py::class_< USkillTreeGFxDefinition,  UGBXDefinition   >("USkillTreeGFxDefinition")
        .def_readwrite("SkillMovieClip", &USkillTreeGFxDefinition::SkillMovieClip)
        .def_readwrite("ArtifactDialogMovieClip", &USkillTreeGFxDefinition::ArtifactDialogMovieClip)
        .def_readwrite("IconOnName", &USkillTreeGFxDefinition::IconOnName)
        .def_readwrite("IconOffName", &USkillTreeGFxDefinition::IconOffName)
        .def_readwrite("IconHiddenName", &USkillTreeGFxDefinition::IconHiddenName)
        .def_readwrite("IncendiaryArtifactName", &USkillTreeGFxDefinition::IncendiaryArtifactName)
        .def_readwrite("CorrosiveArtifactName", &USkillTreeGFxDefinition::CorrosiveArtifactName)
        .def_readwrite("ShockArtifactName", &USkillTreeGFxDefinition::ShockArtifactName)
        .def_readwrite("ExplosiveArtifactName", &USkillTreeGFxDefinition::ExplosiveArtifactName)
        .def_readwrite("ArtifactListSize", &USkillTreeGFxDefinition::ArtifactListSize)
        .def_readwrite("SkillSelectedName", &USkillTreeGFxDefinition::SkillSelectedName)
        .def_readwrite("SkillUnselectedName", &USkillTreeGFxDefinition::SkillUnselectedName)
        .def_readwrite("SkillDisabledName", &USkillTreeGFxDefinition::SkillDisabledName)
        .def_readwrite("SkillEnabledName", &USkillTreeGFxDefinition::SkillEnabledName)
        .def_readwrite("SkillPartialName", &USkillTreeGFxDefinition::SkillPartialName)
        .def_readwrite("SkillMaxedName", &USkillTreeGFxDefinition::SkillMaxedName)
        .def_readwrite("SkillSpentName", &USkillTreeGFxDefinition::SkillSpentName)
        .def_readwrite("SkillRushShowName", &USkillTreeGFxDefinition::SkillRushShowName)
        .def_readwrite("SkillRushHideName", &USkillTreeGFxDefinition::SkillRushHideName)
        .def_readwrite("SkillArtifactShowName", &USkillTreeGFxDefinition::SkillArtifactShowName)
        .def_readwrite("SkillArtifactHideName", &USkillTreeGFxDefinition::SkillArtifactHideName)
        .def_readwrite("SkillArtifactSelectionName", &USkillTreeGFxDefinition::SkillArtifactSelectionName)
        .def_readwrite("SkillArtifactIconName", &USkillTreeGFxDefinition::SkillArtifactIconName)
        .def_readwrite("SkillArtifactListItemName", &USkillTreeGFxDefinition::SkillArtifactListItemName)
        .def_readwrite("DescriptionBackgroundUnlockedName", &USkillTreeGFxDefinition::DescriptionBackgroundUnlockedName)
        .def_readwrite("DescriptionBackgroundLockedName", &USkillTreeGFxDefinition::DescriptionBackgroundLockedName)
        .def_readwrite("DescriptionBackgroundFirstName", &USkillTreeGFxDefinition::DescriptionBackgroundFirstName)
        .def_readwrite("DescriptionBackgroundSomeName", &USkillTreeGFxDefinition::DescriptionBackgroundSomeName)
        .def_readwrite("DescriptionBackgroundMaxedName", &USkillTreeGFxDefinition::DescriptionBackgroundMaxedName)
        .def_readwrite("KillSkillPrefix", &USkillTreeGFxDefinition::KillSkillPrefix)
        .def_readwrite("SkillPointsName", &USkillTreeGFxDefinition::SkillPointsName)
        .def_readwrite("SkillPointsSpentVersusTotalName", &USkillTreeGFxDefinition::SkillPointsSpentVersusTotalName)
        .def_readwrite("SkillPointsRemainingName", &USkillTreeGFxDefinition::SkillPointsRemainingName)
        .def_readwrite("SkillPointSpentName", &USkillTreeGFxDefinition::SkillPointSpentName)
        .def_readwrite("SkillRushName", &USkillTreeGFxDefinition::SkillRushName)
        .def_readwrite("DescriptionBackgroundName", &USkillTreeGFxDefinition::DescriptionBackgroundName)
        .def_readwrite("DescriptionName", &USkillTreeGFxDefinition::DescriptionName)
        .def_readwrite("SkillName", &USkillTreeGFxDefinition::SkillName)
        .def_readwrite("PortraitName", &USkillTreeGFxDefinition::PortraitName)
        .def_readwrite("InfoBoxName", &USkillTreeGFxDefinition::InfoBoxName)
        .def_readwrite("ClassModPath", &USkillTreeGFxDefinition::ClassModPath)
        .def_readwrite("ClassName", &USkillTreeGFxDefinition::ClassName)
        .def_readwrite("ArtifactName", &USkillTreeGFxDefinition::ArtifactName)
        .def_readwrite("SkillFirstTreeMovieClip", &USkillTreeGFxDefinition::SkillFirstTreeMovieClip)
        .def_readwrite("SkillLeftTreeMovieClip", &USkillTreeGFxDefinition::SkillLeftTreeMovieClip)
        .def_readwrite("SkillMiddleTreeMovieClip", &USkillTreeGFxDefinition::SkillMiddleTreeMovieClip)
        .def_readwrite("SkillRightTreeMovieClip", &USkillTreeGFxDefinition::SkillRightTreeMovieClip)
        .def_readwrite("FirstBranchProgressionMaskSize", &USkillTreeGFxDefinition::FirstBranchProgressionMaskSize)
        .def_readwrite("SkillBranchProgressionMaskSize", &USkillTreeGFxDefinition::SkillBranchProgressionMaskSize)
        .def_readwrite("BranchProgressionMaskSpeed", &USkillTreeGFxDefinition::BranchProgressionMaskSpeed)
        .def_readwrite("BranchProgressionMaskSpeedEnterScreen", &USkillTreeGFxDefinition::BranchProgressionMaskSpeedEnterScreen)
        .def_readwrite("NumBranchesPerTree", &USkillTreeGFxDefinition::NumBranchesPerTree)
        .def_readwrite("NumTiersPerBranch", &USkillTreeGFxDefinition::NumTiersPerBranch)
        .def_readwrite("NumCellsPerTier", &USkillTreeGFxDefinition::NumCellsPerTier)
        .def_readwrite("SelectedLocation", &USkillTreeGFxDefinition::SelectedLocation)
        .def_readwrite("UnselectedOffset", &USkillTreeGFxDefinition::UnselectedOffset)
        .def_readwrite("OverviewOffset", &USkillTreeGFxDefinition::OverviewOffset)
        .def_readwrite("OverviewGlobalOffset", &USkillTreeGFxDefinition::OverviewGlobalOffset)
        .def_readwrite("TweenDuration", &USkillTreeGFxDefinition::TweenDuration)
        .def_readwrite("SelectedScale", &USkillTreeGFxDefinition::SelectedScale)
        .def_readwrite("UnselectedScale", &USkillTreeGFxDefinition::UnselectedScale)
        .def_readwrite("OverviewScale", &USkillTreeGFxDefinition::OverviewScale)
        .def_readwrite("SelectedAlpha", &USkillTreeGFxDefinition::SelectedAlpha)
        .def_readwrite("UnselectedAlpha", &USkillTreeGFxDefinition::UnselectedAlpha)
        .def_readwrite("OverviewAlpha", &USkillTreeGFxDefinition::OverviewAlpha)
        .def_readwrite("SelectedSkillZOffset", &USkillTreeGFxDefinition::SelectedSkillZOffset)
        .def_readwrite("SelectedSkillZTweenTime", &USkillTreeGFxDefinition::SelectedSkillZTweenTime)
        .def("StaticClass", &USkillTreeGFxDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}