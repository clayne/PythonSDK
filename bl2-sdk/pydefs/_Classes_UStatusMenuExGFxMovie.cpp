#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStatusMenuExGFxMovie()
{
    py::class_< UStatusMenuExGFxMovie,  UWillowGFxMovie3D   >("UStatusMenuExGFxMovie")
        .def_readwrite("StatusDef", &UStatusMenuExGFxMovie::StatusDef)
        .def_readwrite("SkillDef", &UStatusMenuExGFxMovie::SkillDef)
        .def_readwrite("InventoryTabString", &UStatusMenuExGFxMovie::InventoryTabString)
        .def_readwrite("LogTabString", &UStatusMenuExGFxMovie::LogTabString)
        .def_readwrite("MapTabString", &UStatusMenuExGFxMovie::MapTabString)
        .def_readwrite("LevelString", &UStatusMenuExGFxMovie::LevelString)
        .def_readwrite("XPString", &UStatusMenuExGFxMovie::XPString)
        .def_readwrite("NextString", &UStatusMenuExGFxMovie::NextString)
        .def_readwrite("PoweredByString", &UStatusMenuExGFxMovie::PoweredByString)
        .def_readwrite("NoMissionsString", &UStatusMenuExGFxMovie::NoMissionsString)
        .def_readwrite("NoClassModString", &UStatusMenuExGFxMovie::NoClassModString)
        .def_readwrite("EmptyInventorySlotText", &UStatusMenuExGFxMovie::EmptyInventorySlotText)
        .def_readwrite("AlreadyEquipped", &UStatusMenuExGFxMovie::AlreadyEquipped)
        .def_readwrite("Leg_Trans", &UStatusMenuExGFxMovie::Leg_Trans)
        .def_readwrite("Leg_Outpost", &UStatusMenuExGFxMovie::Leg_Outpost)
        .def_readwrite("Leg_POI", &UStatusMenuExGFxMovie::Leg_POI)
        .def_readwrite("Leg_Player", &UStatusMenuExGFxMovie::Leg_Player)
        .def_readwrite("Leg_Buddy", &UStatusMenuExGFxMovie::Leg_Buddy)
        .def_readwrite("Leg_Waypoint", &UStatusMenuExGFxMovie::Leg_Waypoint)
        .def_readwrite("Leg_Vss", &UStatusMenuExGFxMovie::Leg_Vss)
        .def_readwrite("Leg_BB", &UStatusMenuExGFxMovie::Leg_BB)
        .def_readwrite("Leg_Health", &UStatusMenuExGFxMovie::Leg_Health)
        .def_readwrite("Leg_Shop", &UStatusMenuExGFxMovie::Leg_Shop)
        .def_readwrite("Leg_Unknown", &UStatusMenuExGFxMovie::Leg_Unknown)
        .def_readwrite("Leg_Vehicle", &UStatusMenuExGFxMovie::Leg_Vehicle)
        .def_readwrite("Leg_CustomWaypoint", &UStatusMenuExGFxMovie::Leg_CustomWaypoint)
        .def_readwrite("Leg_Customization", &UStatusMenuExGFxMovie::Leg_Customization)
        .def_readwrite("MissionLogTooltip_Replay", &UStatusMenuExGFxMovie::MissionLogTooltip_Replay)
        .def_readwrite("MissionLogTooltip_Track", &UStatusMenuExGFxMovie::MissionLogTooltip_Track)
        .def_readwrite("MissionLogTooltip_Scroll", &UStatusMenuExGFxMovie::MissionLogTooltip_Scroll)
        .def_readwrite("MissionLogTooltip_Sort", &UStatusMenuExGFxMovie::MissionLogTooltip_Sort)
        .def_readwrite("MissionLogTooltip_ViewWorldMissions", &UStatusMenuExGFxMovie::MissionLogTooltip_ViewWorldMissions)
        .def_readwrite("MissionLogTooltip_ViewMyMissions", &UStatusMenuExGFxMovie::MissionLogTooltip_ViewMyMissions)
        .def_readwrite("MissionLogTooltip_Ignore", &UStatusMenuExGFxMovie::MissionLogTooltip_Ignore)
        .def_readwrite("MissionLogTooltip_Unignore", &UStatusMenuExGFxMovie::MissionLogTooltip_Unignore)
        .def_readwrite("MissionLogTooltip_Cancel", &UStatusMenuExGFxMovie::MissionLogTooltip_Cancel)
        .def_readwrite("ClientMissions", &UStatusMenuExGFxMovie::ClientMissions)
        .def_readwrite("ClientActiveMissionIndex", &UStatusMenuExGFxMovie::ClientActiveMissionIndex)
        .def_readwrite("WorldMissions", &UStatusMenuExGFxMovie::WorldMissions)
        .def_readwrite("MissionSortType", &UStatusMenuExGFxMovie::MissionSortType)
        .def_readwrite("CurrentScreen", &UStatusMenuExGFxMovie::CurrentScreen)
        .def_readwrite("MaxCapacity", &UStatusMenuExGFxMovie::MaxCapacity)
        .def_readwrite("SlotsUsed", &UStatusMenuExGFxMovie::SlotsUsed)
        .def_readwrite("InventoryRefreshRate", &UStatusMenuExGFxMovie::InventoryRefreshRate)
        .def_readwrite("CachedMaxCapacity", &UStatusMenuExGFxMovie::CachedMaxCapacity)
        .def_readwrite("NewSlots", &UStatusMenuExGFxMovie::NewSlots)
        .def_readwrite("CachedMaxReadied", &UStatusMenuExGFxMovie::CachedMaxReadied)
        .def_readwrite("MaxReadiedWeapons", &UStatusMenuExGFxMovie::MaxReadiedWeapons)
        .def_readwrite("CachedInventory", &UStatusMenuExGFxMovie::CachedInventory)
        .def_readwrite("SkillTreePanel", &UStatusMenuExGFxMovie::SkillTreePanel)
        .def_readwrite("StatusMenuMap", &UStatusMenuExGFxMovie::StatusMenuMap)
        .def_readonly("EquippedContents", &UStatusMenuExGFxMovie::EquippedContents)
        .def_readwrite("BackpackThings", &UStatusMenuExGFxMovie::BackpackThings)
        .def_readwrite("AllThings", &UStatusMenuExGFxMovie::AllThings)
        .def_readwrite("CurrentCellName", &UStatusMenuExGFxMovie::CurrentCellName)
        .def_readwrite("LastMainAction", &UStatusMenuExGFxMovie::LastMainAction)
        .def_readwrite("PlayerName", &UStatusMenuExGFxMovie::PlayerName)
        .def_readwrite("ChangingCard", &UStatusMenuExGFxMovie::ChangingCard)
        .def_readwrite("UsedManufacturers", &UStatusMenuExGFxMovie::UsedManufacturers)
        .def_readwrite("UsedWeaponTypes", &UStatusMenuExGFxMovie::UsedWeaponTypes)
        .def_readwrite("EquippedLabels", &UStatusMenuExGFxMovie::EquippedLabels)
        .def_readwrite("CompareConfiguration", &UStatusMenuExGFxMovie::CompareConfiguration)
        .def_readwrite("SortConfigurations", &UStatusMenuExGFxMovie::SortConfigurations)
        .def_readwrite("LeftSideSortConfigIndex", &UStatusMenuExGFxMovie::LeftSideSortConfigIndex)
        .def_readwrite("ScreenExitKey", &UStatusMenuExGFxMovie::ScreenExitKey)
        .def_readwrite("MissionLogTextList", &UStatusMenuExGFxMovie::MissionLogTextList)
        .def_readwrite("MissionCategories", &UStatusMenuExGFxMovie::MissionCategories)
        .def_readwrite("MoreArrowsDirection", &UStatusMenuExGFxMovie::MoreArrowsDirection)
        .def_readwrite("MoveHighlightRepeatRate", &UStatusMenuExGFxMovie::MoveHighlightRepeatRate)
        .def_readwrite("DragMouseLoc", &UStatusMenuExGFxMovie::DragMouseLoc)
        .def_readwrite("MouseDragScale", &UStatusMenuExGFxMovie::MouseDragScale)
        .def_readwrite("InventoryPanel", &UStatusMenuExGFxMovie::InventoryPanel)
        .def_readwrite("ChallengesPanel", &UStatusMenuExGFxMovie::ChallengesPanel)
        .def_readwrite("CurrentScreenTime", &UStatusMenuExGFxMovie::CurrentScreenTime)
        .def_readwrite("CurrMapZoomAudioLoopCounter", &UStatusMenuExGFxMovie::CurrMapZoomAudioLoopCounter)
        .def_readwrite("PrevMapZoomAudioLoopCounter", &UStatusMenuExGFxMovie::PrevMapZoomAudioLoopCounter)
        .def_readwrite("MapZoomAudioRefireDelay", &UStatusMenuExGFxMovie::MapZoomAudioRefireDelay)
        .def_readwrite("MapZoomAudioRefireDuration", &UStatusMenuExGFxMovie::MapZoomAudioRefireDuration)
        .def_readwrite("LastMissionLogTickTime", &UStatusMenuExGFxMovie::LastMissionLogTickTime)
        .def_readwrite("TicksUntilPanelSwitchAllowed", &UStatusMenuExGFxMovie::TicksUntilPanelSwitchAllowed)
        .def_readwrite("PCContextMenu", &UStatusMenuExGFxMovie::PCContextMenu)
        .def_readwrite("RTM", &UWillowInventoryGFxMovie::RTM)
        .def_readwrite("CardContents", &UWillowInventoryGFxMovie::CardContents)
        .def_readwrite("FrozenThing", &UWillowInventoryGFxMovie::FrozenThing)
        .def_readwrite("FrozenThingType", &UWillowInventoryGFxMovie::FrozenThingType)
        .def_readwrite("UsedInvTypes", &UWillowInventoryGFxMovie::UsedInvTypes)
        .def_readwrite("MyInventoryDef", &UWillowInventoryGFxMovie::MyInventoryDef)
        .def_readwrite("WInvMgr", &UWillowInventoryGFxMovie::WInvMgr)
        .def_readwrite("MyThirdPersonDefinition", &UWillowGFxThirdPersonMovie::MyThirdPersonDefinition)
        .def_readwrite("CameraYaw", &UWillowGFxThirdPersonMovie::CameraYaw)
        .def_readwrite("CameraPitch", &UWillowGFxThirdPersonMovie::CameraPitch)
        .def_readwrite("CameraRotation", &UWillowGFxThirdPersonMovie::CameraRotation)
        .def_readwrite("CameraLocation", &UWillowGFxThirdPersonMovie::CameraLocation)
        .def_readwrite("CameraSplitOffset", &UWillowGFxThirdPersonMovie::CameraSplitOffset)
        .def_readwrite("CameraSplitSpread", &UWillowGFxThirdPersonMovie::CameraSplitSpread)
        .def_readwrite("CameraFocusBoneName", &UWillowGFxThirdPersonMovie::CameraFocusBoneName)
        .def_readwrite("CameraFocusYaw", &UWillowGFxThirdPersonMovie::CameraFocusYaw)
        .def_readwrite("LastCameraPitchTime", &UWillowGFxThirdPersonMovie::LastCameraPitchTime)
        .def_readwrite("MenuYaw", &UWillowGFxThirdPersonMovie::MenuYaw)
        .def_readwrite("MenuPitch", &UWillowGFxThirdPersonMovie::MenuPitch)
        .def_readwrite("MenuRotation", &UWillowGFxThirdPersonMovie::MenuRotation)
        .def_readwrite("MenuLocation", &UWillowGFxThirdPersonMovie::MenuLocation)
        .def_readwrite("CloseTime", &UWillowGFxThirdPersonMovie::CloseTime)
        .def_readwrite("CloseCamLoc", &UWillowGFxThirdPersonMovie::CloseCamLoc)
        .def_readwrite("CloseCamRot", &UWillowGFxThirdPersonMovie::CloseCamRot)
        .def_readwrite("MenuSpringYaw", &UWillowGFxThirdPersonMovie::MenuSpringYaw)
        .def_readwrite("MenuSpringPitch", &UWillowGFxThirdPersonMovie::MenuSpringPitch)
        .def_readwrite("MenuSpringRotation", &UWillowGFxThirdPersonMovie::MenuSpringRotation)
        .def_readwrite("DragMouseLoc_Camera", &UWillowGFxThirdPersonMovie::DragMouseLoc_Camera)
        .def_readwrite("MouseDragScale_Camera", &UWillowGFxThirdPersonMovie::MouseDragScale_Camera)
        .def_readwrite("MouseDrag_Region_Left", &UWillowGFxThirdPersonMovie::MouseDrag_Region_Left)
        .def_readwrite("MouseDrag_Region_Right", &UWillowGFxThirdPersonMovie::MouseDrag_Region_Right)
        .def_readwrite("MouseDrag_Region_Top", &UWillowGFxThirdPersonMovie::MouseDrag_Region_Top)
        .def_readwrite("MouseDrag_Region_Bottom", &UWillowGFxThirdPersonMovie::MouseDrag_Region_Bottom)
        .def("StaticClass", &UStatusMenuExGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("TrySwitchToScreen", &UStatusMenuExGFxMovie::TrySwitchToScreen)
        .def("extChallLogDown", &UStatusMenuExGFxMovie::extChallLogDown)
        .def("extChallLogUp", &UStatusMenuExGFxMovie::extChallLogUp)
        .def("extGenericButtonClicked", &UStatusMenuExGFxMovie::extGenericButtonClicked)
        .def("extCellRolledOver", &UStatusMenuExGFxMovie::extCellRolledOver)
        .def("extCellClicked", &UStatusMenuExGFxMovie::extCellClicked)
        .def("EnableControl", &UStatusMenuExGFxMovie::EnableControl)
        .def("extArtifactClose", &UStatusMenuExGFxMovie::extArtifactClose)
        .def("extArtifactSelect", &UStatusMenuExGFxMovie::extArtifactSelect)
        .def("extSkillActivate", &UStatusMenuExGFxMovie::extSkillActivate)
        .def("extHoverSkillCell", &UStatusMenuExGFxMovie::extHoverSkillCell)
        .def("NotifySkillPointsChanged", &UStatusMenuExGFxMovie::NotifySkillPointsChanged)
        .def("InvalidateQuickAccess", &UStatusMenuExGFxMovie::InvalidateQuickAccess)
        .def("SetupSkillTree", &UStatusMenuExGFxMovie::SetupSkillTree)
        .def("PanMap", &UStatusMenuExGFxMovie::PanMap)
        .def("eventHandleMouseDrag", &UStatusMenuExGFxMovie::eventHandleMouseDrag)
        .def("StopMouseDrag", &UStatusMenuExGFxMovie::StopMouseDrag)
        .def("HandleMapZoom", &UStatusMenuExGFxMovie::HandleMapZoom)
        .def("HandleMapInputAxis", &UStatusMenuExGFxMovie::HandleMapInputAxis)
        .def("HandleMapInputKey", &UStatusMenuExGFxMovie::HandleMapInputKey)
        .def("HandleSkillsInputKey", &UStatusMenuExGFxMovie::HandleSkillsInputKey)
        .def("CanToggleMissionView", &UStatusMenuExGFxMovie::CanToggleMissionView)
        .def("CanShowWorldMissionView", &UStatusMenuExGFxMovie::CanShowWorldMissionView)
        .def("CanShowClientMissionView", &UStatusMenuExGFxMovie::CanShowClientMissionView)
        .def("HandleInputKey", &UStatusMenuExGFxMovie::HandleInputKey)
        .def("GotoNextTab", &UStatusMenuExGFxMovie::GotoNextTab)
        .def("GotoPrevTab", &UStatusMenuExGFxMovie::GotoPrevTab)
        .def("HasVehicleRestrictions", &UStatusMenuExGFxMovie::HasVehicleRestrictions)
        .def("ToggleUndiscoveredMissionVisibility", &UStatusMenuExGFxMovie::ToggleUndiscoveredMissionVisibility)
        .def("RepositionMissionLog", &UStatusMenuExGFxMovie::RepositionMissionLog)
        .def("OnMissionFilteredChanged", &UStatusMenuExGFxMovie::OnMissionFilteredChanged)
        .def("ToggleMissionFiltered", &UStatusMenuExGFxMovie::ToggleMissionFiltered)
        .def("IsHighlightedMissionFiltered", &UStatusMenuExGFxMovie::IsHighlightedMissionFiltered)
        .def("CanToggleHighlightedMissionFilter", &UStatusMenuExGFxMovie::CanToggleHighlightedMissionFilter)
        .def("extStatusMenuMapPostMapMovieLoad", &UStatusMenuExGFxMovie::extStatusMenuMapPostMapMovieLoad)
        .def("UpdateMousePositionForMap", &UStatusMenuExGFxMovie::UpdateMousePositionForMap)
        .def("extStatusMenuMapOnLoad", &UStatusMenuExGFxMovie::extStatusMenuMapOnLoad)
        .def("ShowPopupModal", &UStatusMenuExGFxMovie::ShowPopupModal)
        .def("ShowPopup", &UStatusMenuExGFxMovie::ShowPopup)
        .def("extSetupNoMissionsPage", &UStatusMenuExGFxMovie::extSetupNoMissionsPage)
        .def("GotoRegularMissions", &UStatusMenuExGFxMovie::GotoRegularMissions)
        .def("GotoNoMissions", &UStatusMenuExGFxMovie::GotoNoMissions)
        .def("ResetScroll", &UStatusMenuExGFxMovie::ResetScroll)
        .def("UpdateActiveMissionIcon", &UStatusMenuExGFxMovie::UpdateActiveMissionIcon)
        .def("OnActiveMissionChanged", &UStatusMenuExGFxMovie::OnActiveMissionChanged)
        .def("HitEnterOnLog", &UStatusMenuExGFxMovie::HitEnterOnLog)
        .def("ScrollSidePanel", &UStatusMenuExGFxMovie::ScrollSidePanel)
        .def("SetDescriptionScrollValue", &UStatusMenuExGFxMovie::SetDescriptionScrollValue)
        .def("extSetDescriptionScrollValue", &UStatusMenuExGFxMovie::extSetDescriptionScrollValue)
        .def("extChallListTrack", &UStatusMenuExGFxMovie::extChallListTrack)
        .def("extChallListRollOver", &UStatusMenuExGFxMovie::extChallListRollOver)
        .def("extLogListTrack", &UStatusMenuExGFxMovie::extLogListTrack)
        .def("extLogListRollOver", &UStatusMenuExGFxMovie::extLogListRollOver)
        .def("extLogDown", &UStatusMenuExGFxMovie::extLogDown)
        .def("LogDown", &UStatusMenuExGFxMovie::LogDown)
        .def("extLogUp", &UStatusMenuExGFxMovie::extLogUp)
        .def("LogUp", &UStatusMenuExGFxMovie::LogUp)
        .def("SetLevelAndDifficulty", &UStatusMenuExGFxMovie::SetLevelAndDifficulty)
        .def("SetRewardsItem", &UStatusMenuExGFxMovie::SetRewardsItem)
        .def("SetRewardsXP", &UStatusMenuExGFxMovie::SetRewardsXP)
        .def("SetPlayerXP", &UStatusMenuExGFxMovie::SetPlayerXP)
        .def("SetPlayerLevel", &UStatusMenuExGFxMovie::SetPlayerLevel)
        .def("SetRewardsTotalOtherCurrency", &UStatusMenuExGFxMovie::SetRewardsTotalOtherCurrency)
        .def("SetRewardsTotalCredits", &UStatusMenuExGFxMovie::SetRewardsTotalCredits)
        .def("SetPlayerDisplayedEridium", &UStatusMenuExGFxMovie::SetPlayerDisplayedEridium)
        .def("SetPlayerTotalEridium", &UStatusMenuExGFxMovie::SetPlayerTotalEridium)
        .def("SetPlayerDisplayedCredits", &UStatusMenuExGFxMovie::SetPlayerDisplayedCredits)
        .def("SetPlayerTotalCredits", &UStatusMenuExGFxMovie::SetPlayerTotalCredits)
        .def("SetRewardCard", &UStatusMenuExGFxMovie::SetRewardCard)
        .def("SetInnerReward", &UStatusMenuExGFxMovie::SetInnerReward)
        .def("GetRewardPresentations", &UStatusMenuExGFxMovie::GetRewardPresentations)
        .def("SetScrollArrows", &UStatusMenuExGFxMovie::SetScrollArrows)
        .def("eventUpdateGeneralDetails", &UStatusMenuExGFxMovie::eventUpdateGeneralDetails)
        .def("GetRightMostDelimited", &UStatusMenuExGFxMovie::GetRightMostDelimited)
        .def("UpdateMissionDetails", &UStatusMenuExGFxMovie::UpdateMissionDetails)
        .def("OnMissionObjectivesChanged", &UStatusMenuExGFxMovie::OnMissionObjectivesChanged)
        .def("SetActiveMission", &UStatusMenuExGFxMovie::SetActiveMission)
        .def("UpdateListOfMissionTitles", &UStatusMenuExGFxMovie::UpdateListOfMissionTitles)
        .def("FilterMissions", &UStatusMenuExGFxMovie::FilterMissions)
        .def("StaticFilterMissions", &UStatusMenuExGFxMovie::StaticFilterMissions)
        .def("GetHighestPlotMissionDependency", &UStatusMenuExGFxMovie::GetHighestPlotMissionDependency, py::return_value_policy::reference)
        .def("ArePlotMissionsInSequence", &UStatusMenuExGFxMovie::ArePlotMissionsInSequence)
        .def("GetHighestChainedPlotMissionCompleted", &UStatusMenuExGFxMovie::GetHighestChainedPlotMissionCompleted, py::return_value_policy::reference)
        .def("AllSideMissionDependenciesComplete", &UStatusMenuExGFxMovie::AllSideMissionDependenciesComplete)
        .def("GetUndiscoveredMissions", &UStatusMenuExGFxMovie::GetUndiscoveredMissions)
        .def("eventGetAllUndiscoveredMissions", &UStatusMenuExGFxMovie::eventGetAllUndiscoveredMissions)
        .def("GetFirstMissionNumber", &UStatusMenuExGFxMovie::GetFirstMissionNumber)
        .def("UpdateMissionTextList", &UStatusMenuExGFxMovie::UpdateMissionTextList)
        .def("SetAvailability", &UStatusMenuExGFxMovie::SetAvailability)
        .def("SetupChallengesScreen", &UStatusMenuExGFxMovie::SetupChallengesScreen)
        .def("IsPrimaryHostPlayer", &UStatusMenuExGFxMovie::IsPrimaryHostPlayer)
        .def("extSetupMissionLogScreen", &UStatusMenuExGFxMovie::extSetupMissionLogScreen)
        .def("OnMissionStatusChanged", &UStatusMenuExGFxMovie::OnMissionStatusChanged)
        .def("ChangeMissionLogSorting", &UStatusMenuExGFxMovie::ChangeMissionLogSorting)
        .def("GetNextMissionSortType", &UStatusMenuExGFxMovie::GetNextMissionSortType)
        .def("eventSetupGenericLogs", &UStatusMenuExGFxMovie::eventSetupGenericLogs)
        .def("SetCellsForWeaponEquipping", &UStatusMenuExGFxMovie::SetCellsForWeaponEquipping)
        .def("EnterCellsView", &UStatusMenuExGFxMovie::EnterCellsView)
        .def("SwitchToCellsView", &UStatusMenuExGFxMovie::SwitchToCellsView)
        .def("EnterListView", &UStatusMenuExGFxMovie::EnterListView)
        .def("SwitchToListView", &UStatusMenuExGFxMovie::SwitchToListView)
        .def("ConditionallyScroll", &UStatusMenuExGFxMovie::ConditionallyScroll)
        .def("MoveHighlight", &UStatusMenuExGFxMovie::MoveHighlight)
        .def("StopMovingHighlight", &UStatusMenuExGFxMovie::StopMovingHighlight)
        .def("StartMovingHighlight", &UStatusMenuExGFxMovie::StartMovingHighlight)
        .def("extInventoryListSet", &UStatusMenuExGFxMovie::extInventoryListSet)
        .def("extInventoryListMove", &UStatusMenuExGFxMovie::extInventoryListMove)
        .def("extCellsSet", &UStatusMenuExGFxMovie::extCellsSet)
        .def("IsCellValid", &UStatusMenuExGFxMovie::IsCellValid)
        .def("TryToFindNextValidCell", &UStatusMenuExGFxMovie::TryToFindNextValidCell)
        .def("ProcessCellMove", &UStatusMenuExGFxMovie::ProcessCellMove)
        .def("extInventoryCellMove", &UStatusMenuExGFxMovie::extInventoryCellMove)
        .def("UpdateCardPanel", &UStatusMenuExGFxMovie::UpdateCardPanel)
        .def("AddCell", &UStatusMenuExGFxMovie::AddCell)
        .def("SetDissimilarCells", &UStatusMenuExGFxMovie::SetDissimilarCells)
        .def("FlourishDrop", &UStatusMenuExGFxMovie::FlourishDrop)
        .def("extDropItem", &UStatusMenuExGFxMovie::extDropItem)
        .def("EquipFlourish", &UStatusMenuExGFxMovie::EquipFlourish)
        .def("DetachCell", &UStatusMenuExGFxMovie::DetachCell)
        .def("UpdateCellData", &UStatusMenuExGFxMovie::UpdateCellData)
        .def("FreeCellData", &UStatusMenuExGFxMovie::FreeCellData)
        .def("InitCellData", &UStatusMenuExGFxMovie::InitCellData)
        .def("extContextMenuClicked", &UStatusMenuExGFxMovie::extContextMenuClicked)
        .def("ShowContextMenuWrapper", &UStatusMenuExGFxMovie::ShowContextMenuWrapper)
        .def("ShowContextMenu", &UStatusMenuExGFxMovie::ShowContextMenu)
        .def("Cancel", &UStatusMenuExGFxMovie::Cancel)
        .def("SetSelectedState", &UStatusMenuExGFxMovie::SetSelectedState)
        .def("RestoreAllNormalState", &UStatusMenuExGFxMovie::RestoreAllNormalState)
        .def("DisableCancel", &UStatusMenuExGFxMovie::DisableCancel)
        .def("EnableCancel", &UStatusMenuExGFxMovie::EnableCancel)
        .def("extUpdateBackpackListSize", &UStatusMenuExGFxMovie::extUpdateBackpackListSize)
        .def("PrepareForCompare_Equipped", &UStatusMenuExGFxMovie::PrepareForCompare_Equipped)
        .def("PrepareForCompare_Backpack", &UStatusMenuExGFxMovie::PrepareForCompare_Backpack)
        .def("CleanupCompare", &UStatusMenuExGFxMovie::CleanupCompare)
        .def("extQuitCompare", &UStatusMenuExGFxMovie::extQuitCompare)
        .def("extCard2Visible", &UStatusMenuExGFxMovie::extCard2Visible)
        .def("extCompare", &UStatusMenuExGFxMovie::extCompare)
        .def("GetEquippedCellInventory", &UStatusMenuExGFxMovie::GetEquippedCellInventory, py::return_value_policy::reference)
        .def("GetHighlightedCellEntry", &UStatusMenuExGFxMovie::GetHighlightedCellEntry, py::return_value_policy::reference)
        .def("GetHighlightedRightSideEntry", &UStatusMenuExGFxMovie::GetHighlightedRightSideEntry, py::return_value_policy::reference)
        .def("GetHighlightedLeftSideEntry", &UStatusMenuExGFxMovie::GetHighlightedLeftSideEntry, py::return_value_policy::reference)
        .def("GetCurrentHighlightedObject", &UStatusMenuExGFxMovie::GetCurrentHighlightedObject, py::return_value_policy::reference)
        .def("ClearInventoryRefreshTimer", &UStatusMenuExGFxMovie::ClearInventoryRefreshTimer)
        .def("SetInventoryRefreshTimer", &UStatusMenuExGFxMovie::SetInventoryRefreshTimer)
        .def("RefreshInventoryScreen", &UStatusMenuExGFxMovie::RefreshInventoryScreen)
        .def("HasAnyBackpackOfCorrectType", &UStatusMenuExGFxMovie::HasAnyBackpackOfCorrectType)
        .def("CanSort", &UStatusMenuExGFxMovie::CanSort)
        .def("CanSwap", &UStatusMenuExGFxMovie::CanSwap)
        .def("CanUnready", &UStatusMenuExGFxMovie::CanUnready)
        .def("CanReady", &UStatusMenuExGFxMovie::CanReady)
        .def("CanDrop", &UStatusMenuExGFxMovie::CanDrop)
        .def("CanCompare", &UStatusMenuExGFxMovie::CanCompare)
        .def("SetInventoryTooltipsText", &UStatusMenuExGFxMovie::SetInventoryTooltipsText)
        .def("SetTooltipsText", &UStatusMenuExGFxMovie::SetTooltipsText)
        .def("GetSortString", &UStatusMenuExGFxMovie::GetSortString)
        .def("CanTrackHighlightedMission", &UStatusMenuExGFxMovie::CanTrackHighlightedMission)
        .def("GetCurrentMainAction", &UStatusMenuExGFxMovie::GetCurrentMainAction)
        .def("extToggleSort", &UStatusMenuExGFxMovie::extToggleSort)
        .def("extUpdateLeftSideListSize", &UStatusMenuExGFxMovie::extUpdateLeftSideListSize)
        .def("extSetInitialHighlightBar", &UStatusMenuExGFxMovie::extSetInitialHighlightBar)
        .def("SortContainer", &UStatusMenuExGFxMovie::SortContainer)
        .def("UpdateCachedInventoryMarkForThing", &UStatusMenuExGFxMovie::UpdateCachedInventoryMarkForThing)
        .def("UpdateCachedInventoryMarks", &UStatusMenuExGFxMovie::UpdateCachedInventoryMarks)
        .def("PrepareListOfAllInventory", &UStatusMenuExGFxMovie::PrepareListOfAllInventory)
        .def("eventIsComparing", &UStatusMenuExGFxMovie::eventIsComparing)
        .def("SetupInventoryScreen", &UStatusMenuExGFxMovie::SetupInventoryScreen)
        .def("InventoryPanelInputKey", &UStatusMenuExGFxMovie::InventoryPanelInputKey)
        .def("ShowInventoryContextMenu", &UStatusMenuExGFxMovie::ShowInventoryContextMenu)
        .def("InventoryContextMenuClosed", &UStatusMenuExGFxMovie::InventoryContextMenuClosed)
        .def("InventoryContextMenuActivated", &UStatusMenuExGFxMovie::InventoryContextMenuActivated)
        .def("GetPlayerThings", &UStatusMenuExGFxMovie::GetPlayerThings)
        .def("SetPlayerCardInfo", &UStatusMenuExGFxMovie::SetPlayerCardInfo)
        .def("SetCondensedHealthWidget_Wrapper", &UStatusMenuExGFxMovie::SetCondensedHealthWidget_Wrapper)
        .def("SetCondensedHealthWidget", &UStatusMenuExGFxMovie::SetCondensedHealthWidget)
        .def("eventDisplayMarketingUnlockDialogIfNecessary", &UStatusMenuExGFxMovie::eventDisplayMarketingUnlockDialogIfNecessary)
        .def("HandleCurrencyChanged", &UStatusMenuExGFxMovie::HandleCurrencyChanged)
        .def("eventOnClose", &UStatusMenuExGFxMovie::eventOnClose)
        .def("GetScreenByName", &UStatusMenuExGFxMovie::GetScreenByName)
        .def("CleanupScreen", &UStatusMenuExGFxMovie::CleanupScreen)
        .def("extSetCurrentScreen", &UStatusMenuExGFxMovie::extSetCurrentScreen)
        .def("Flash_SetMissionLogEnabled", &UStatusMenuExGFxMovie::Flash_SetMissionLogEnabled)
        .def("Flash_SetVehicleRestrictions", &UStatusMenuExGFxMovie::Flash_SetVehicleRestrictions)
        .def("Flash_SetCurrentScreen", &UStatusMenuExGFxMovie::Flash_SetCurrentScreen)
        .def("GetInitialScreen", &UStatusMenuExGFxMovie::GetInitialScreen)
        .def("GetInitialMissionSortType", &UStatusMenuExGFxMovie::GetInitialMissionSortType)
        .def("eventGetCurrentTab", &UStatusMenuExGFxMovie::eventGetCurrentTab)
        .def("eventFinishClosing", &UStatusMenuExGFxMovie::eventFinishClosing)
        .def("Hide", &UStatusMenuExGFxMovie::Hide)
        .def("DisplayRewardsPanel", &UStatusMenuExGFxMovie::DisplayRewardsPanel)
        .def("TryDisplayRewardPanel", &UStatusMenuExGFxMovie::TryDisplayRewardPanel)
        .def("eventGetAllWorldMissions", &UStatusMenuExGFxMovie::eventGetAllWorldMissions)
        .def("RegisterMissionDelegates", &UStatusMenuExGFxMovie::RegisterMissionDelegates)
        .def("InitForConsole", &UStatusMenuExGFxMovie::InitForConsole)
        .def("InitForPC", &UStatusMenuExGFxMovie::InitForPC)
        .def("AmITheStatusMenu", &UStatusMenuExGFxMovie::AmITheStatusMenu)
        .def("eventStart", &UStatusMenuExGFxMovie::eventStart)
        .def("GetTotalCredits", &UWillowInventoryGFxMovie::GetTotalCredits)
        .def("EvaluateCurrentSelection", &UWillowInventoryGFxMovie::EvaluateCurrentSelection)
        .def("OnPanelRollOver", &UWillowInventoryGFxMovie::OnPanelRollOver)
        .def("GetEquippedAnalogue", &UWillowInventoryGFxMovie::GetEquippedAnalogue, py::return_value_policy::reference)
        .def("PressedHotkeyNumber", &UWillowInventoryGFxMovie::PressedHotkeyNumber)
        .def("OnInventoryPanelSetActive", &UWillowInventoryGFxMovie::OnInventoryPanelSetActive)
        .def("GetNextSortConfiguration", &UWillowInventoryGFxMovie::GetNextSortConfiguration)
        .def("GetPlayerPanelItems", &UWillowInventoryGFxMovie::GetPlayerPanelItems)
        .def("FillOutListOfPlayerThings", &UWillowInventoryGFxMovie::FillOutListOfPlayerThings)
        .def("HandleMouseDrag_Camera", &UWillowGFxThirdPersonMovie::HandleMouseDrag_Camera)
        .def("Get3DRotationOffset", &UWillowGFxThirdPersonMovie::Get3DRotationOffset)
        .def("Get3DLocationOffset", &UWillowGFxThirdPersonMovie::Get3DLocationOffset)
        .def("ToggleControlMode", &UWillowGFxThirdPersonMovie::ToggleControlMode)
        .def("SaveTabView", &UWillowGFxThirdPersonMovie::SaveTabView)
        .def("TryStartMouseDrag", &UWillowGFxThirdPersonMovie::TryStartMouseDrag)
        .def("HandleKeyDefaults", &UWillowGFxThirdPersonMovie::HandleKeyDefaults)
        .def("HandleInputAxisPlayerCameraRotation", &UWillowGFxThirdPersonMovie::HandleInputAxisPlayerCameraRotation)
        .def("HandleCameraInputAxis", &UWillowGFxThirdPersonMovie::HandleCameraInputAxis)
        .def("UpdateDesiredCameraPosition", &UWillowGFxThirdPersonMovie::UpdateDesiredCameraPosition)
        .def("eventBeginClosing", &UWillowGFxThirdPersonMovie::eventBeginClosing)
        .staticmethod("StaticClass")
  ;
}