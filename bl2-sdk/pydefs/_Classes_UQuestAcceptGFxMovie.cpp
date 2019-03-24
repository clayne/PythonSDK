#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UQuestAcceptGFxMovie(py::module &m)
{
    py::class_< UQuestAcceptGFxMovie,  UWillowGFxMovie3D   >(m, "UQuestAcceptGFxMovie")
		.def_static("StaticClass", &UQuestAcceptGFxMovie::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MissionUIDef", &UQuestAcceptGFxMovie::MissionUIDef)
        .def_readwrite("MissionTextList", &UQuestAcceptGFxMovie::MissionTextList)
        .def_readwrite("MissionCategories", &UQuestAcceptGFxMovie::MissionCategories)
        .def_readwrite("MissionDirector", &UQuestAcceptGFxMovie::MissionDirector)
        .def_readwrite("FocusSubject", &UQuestAcceptGFxMovie::FocusSubject)
        .def_readwrite("ContextNPC", &UQuestAcceptGFxMovie::ContextNPC)
        .def_readwrite("RedeemableCount", &UQuestAcceptGFxMovie::RedeemableCount)
        .def_readwrite("EligibleCount", &UQuestAcceptGFxMovie::EligibleCount)
        .def_readwrite("InProgressCount", &UQuestAcceptGFxMovie::InProgressCount)
        .def_readwrite("MissionList", &UQuestAcceptGFxMovie::MissionList)
        .def_readwrite("InProgressMissionList", &UQuestAcceptGFxMovie::InProgressMissionList)
        .def_readwrite("MissionDefForRewardPage", &UQuestAcceptGFxMovie::MissionDefForRewardPage)
        .def_readwrite("RewardObject", &UQuestAcceptGFxMovie::RewardObject)
        .def_readwrite("WantsAcceptCounter", &UQuestAcceptGFxMovie::WantsAcceptCounter)
        .def("extGenericButtonClicked", &UQuestAcceptGFxMovie::extGenericButtonClicked)
        .def("eventOnTick", &UQuestAcceptGFxMovie::eventOnTick)
        .def("InitForConsole", &UQuestAcceptGFxMovie::InitForConsole)
        .def("InitForPC", &UQuestAcceptGFxMovie::InitForPC)
        .def("OnClosedOnDeath", &UQuestAcceptGFxMovie::OnClosedOnDeath)
        .def("UpdateMissionList", &UQuestAcceptGFxMovie::UpdateMissionList)
        .def("HandleInputKey", &UQuestAcceptGFxMovie::HandleInputKey)
        .def("MoveHighlight", &UQuestAcceptGFxMovie::MoveHighlight)
        .def("StopMovingHighlight", &UQuestAcceptGFxMovie::StopMovingHighlight)
        .def("StartMovingHighlight", &UQuestAcceptGFxMovie::StartMovingHighlight)
        .def("SetDescriptionScrollValue", &UQuestAcceptGFxMovie::SetDescriptionScrollValue)
        .def("extSetDescriptionScrollValue", &UQuestAcceptGFxMovie::extSetDescriptionScrollValue)
        .def("extLogDown", &UQuestAcceptGFxMovie::extLogDown)
        .def("LogDown", &UQuestAcceptGFxMovie::LogDown)
        .def("extLogUp", &UQuestAcceptGFxMovie::extLogUp)
        .def("LogUp", &UQuestAcceptGFxMovie::LogUp)
        .def("ConditionallyScroll", &UQuestAcceptGFxMovie::ConditionallyScroll)
        .def("SetFocus", &UQuestAcceptGFxMovie::SetFocus)
        .def("UpdateMissionTextList", &UQuestAcceptGFxMovie::UpdateMissionTextList)
        .def("SetScrollArrows", &UQuestAcceptGFxMovie::SetScrollArrows)
        .def("SetLevelAndDifficulty", &UQuestAcceptGFxMovie::SetLevelAndDifficulty)
        .def("SetRewardsItem", &UQuestAcceptGFxMovie::SetRewardsItem)
        .def("SetRewardsXP", &UQuestAcceptGFxMovie::SetRewardsXP)
        .def("SetPlayerXP", &UQuestAcceptGFxMovie::SetPlayerXP)
        .def("SetRewardsTotalOtherCurrency", &UQuestAcceptGFxMovie::SetRewardsTotalOtherCurrency)
        .def("SetRewardsTotalCredits", &UQuestAcceptGFxMovie::SetRewardsTotalCredits)
        .def("SetPlayerDisplayedCredits", &UQuestAcceptGFxMovie::SetPlayerDisplayedCredits)
        .def("SetPlayerTotalCredits", &UQuestAcceptGFxMovie::SetPlayerTotalCredits)
        .def("eventOnClose", &UQuestAcceptGFxMovie::eventOnClose)
        .def("extChoiceConfirmed", &UQuestAcceptGFxMovie::extChoiceConfirmed)
        .def("extChoiceCancelled", &UQuestAcceptGFxMovie::extChoiceCancelled)
        .def("extHover", &UQuestAcceptGFxMovie::extHover)
        .def("extLogListTrack", &UQuestAcceptGFxMovie::extLogListTrack)
        .def("extLogListRollOver", &UQuestAcceptGFxMovie::extLogListRollOver)
        .def("extNavigateDown", &UQuestAcceptGFxMovie::extNavigateDown)
        .def("extNavigateUp", &UQuestAcceptGFxMovie::extNavigateUp)
        .def("extOnRolloverChoice", &UQuestAcceptGFxMovie::extOnRolloverChoice)
        .def("extOnFocusedChoice", &UQuestAcceptGFxMovie::extOnFocusedChoice)
        .def("AcceptReward", &UQuestAcceptGFxMovie::AcceptReward)
        .def("extOnClickedChoice", &UQuestAcceptGFxMovie::extOnClickedChoice)
        .def("HandleRewardInputKey", &UQuestAcceptGFxMovie::HandleRewardInputKey)
        .def("ShowNoRewardScreen", &UQuestAcceptGFxMovie::ShowNoRewardScreen)
        .def("DisplayRewardsPage", &UQuestAcceptGFxMovie::DisplayRewardsPage)
        .def("extCompleteConfirmed", &UQuestAcceptGFxMovie::extCompleteConfirmed)
        .def("extAcceptConfirmed", &UQuestAcceptGFxMovie::extAcceptConfirmed)
        .def("SetRewardCard", &UQuestAcceptGFxMovie::SetRewardCard)
        .def("SetInnerReward", &UQuestAcceptGFxMovie::SetInnerReward)
        .def("GetRewardPresentations", &UQuestAcceptGFxMovie::GetRewardPresentations)
        .def("ProtectedFillOutCommonScreenDetails", &UQuestAcceptGFxMovie::ProtectedFillOutCommonScreenDetails)
        .def("extFillOutQuestAllScreenDetails", &UQuestAcceptGFxMovie::extFillOutQuestAllScreenDetails)
        .def("GetSelectedIndex", &UQuestAcceptGFxMovie::GetSelectedIndex)
        .def("UpdateMissionDetails", &UQuestAcceptGFxMovie::UpdateMissionDetails)
        .def("GotoCorrectPartOfMovie", &UQuestAcceptGFxMovie::GotoCorrectPartOfMovie)
        .def("SetQuestTitle", &UQuestAcceptGFxMovie::SetQuestTitle)
        .def("extPopulateQuestEntries", &UQuestAcceptGFxMovie::extPopulateQuestEntries)
        .def("QuestTitlesPrevFrame", &UQuestAcceptGFxMovie::QuestTitlesPrevFrame)
        .def("QuestTitlesNextFrame", &UQuestAcceptGFxMovie::QuestTitlesNextFrame)
        .def("DetermineQuestEntries", &UQuestAcceptGFxMovie::DetermineQuestEntries)
        .def("HandleInputAxis", &UQuestAcceptGFxMovie::HandleInputAxis)
        .def("HideTopPanel", &UQuestAcceptGFxMovie::HideTopPanel)
        .def("eventStart", &UQuestAcceptGFxMovie::eventStart)
          ;
}