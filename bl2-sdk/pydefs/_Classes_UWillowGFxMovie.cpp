#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxMovie(py::module &m)
{
    py::class_< UWillowGFxMovie,  UGearboxGFxMovie   >(m, "UWillowGFxMovie")
		.def_static("StaticClass", &UWillowGFxMovie::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DefaultRTTSize_PC", &UWillowGFxMovie::DefaultRTTSize_PC)
        .def_readwrite("DefaultRTTSize_Console", &UWillowGFxMovie::DefaultRTTSize_Console)
        .def_readwrite("WPCOwner", &UWillowGFxMovie::WPCOwner)
        .def("GetQuadrantForControllerId", &UWillowGFxMovie::GetQuadrantForControllerId)
        .def("extConditionalBeginSway", &UWillowGFxMovie::extConditionalBeginSway)
        .def("GetRecommendedRTTSizesFor", &UWillowGFxMovie::GetRecommendedRTTSizesFor)
        .def("GetRecommendedThumbnail", &UWillowGFxMovie::GetRecommendedThumbnail, py::return_value_policy::reference)
        .def("eventFreeGFxThumbnails", &UWillowGFxMovie::eventFreeGFxThumbnails)
        .def("eventFreeGFxThumbnail", &UWillowGFxMovie::eventFreeGFxThumbnail)
        .def("eventGetGFxThumbnail", &UWillowGFxMovie::eventGetGFxThumbnail, py::return_value_policy::reference)
        .def("ResolveMission", &UWillowGFxMovie::ResolveMission)
        .def("IsPresenceContextMatch", &UWillowGFxMovie::IsPresenceContextMatch)
        .def("GetFriendCharacterClassAndLevel", &UWillowGFxMovie::GetFriendCharacterClassAndLevel)
        .def("GetFriendLocation", &UWillowGFxMovie::GetFriendLocation)
        .def("GetInviteType", &UWillowGFxMovie::GetInviteType)
        .def("GetNetworkType", &UWillowGFxMovie::GetNetworkType)
        .def("GetCappedDisplayCurrencyAmount", &UWillowGFxMovie::GetCappedDisplayCurrencyAmount)
        .def("GFxColoredText", &UWillowGFxMovie::GFxColoredText)
        .def("ConditionalLoadGame", &UWillowGFxMovie::ConditionalLoadGame)
        .def("NotifyLoadGameStarted", &UWillowGFxMovie::NotifyLoadGameStarted)
        .def("DoDeviceSelection", &UWillowGFxMovie::DoDeviceSelection)
        .def("GetGameInterface", &UWillowGFxMovie::GetGameInterface, py::return_value_policy::reference)
        .def("ShowGamerCardUI", &UWillowGFxMovie::ShowGamerCardUI)
        .def("ShowLivePartyUI", &UWillowGFxMovie::ShowLivePartyUI)
        .def("ShowAchievementsUI", &UWillowGFxMovie::ShowAchievementsUI)
        .def("CheckControllerStatus", &UWillowGFxMovie::CheckControllerStatus)
        .def("FocusOn", &UWillowGFxMovie::FocusOn)
        .def("GetControllerId", &UWillowGFxMovie::GetControllerId)
        .def("GetInputPlayerIndex", &UWillowGFxMovie::GetInputPlayerIndex)
        .def("GetWillowOwner", &UWillowGFxMovie::GetWillowOwner, py::return_value_policy::reference)
        .def("Movie_IsPlaying", &UWillowGFxMovie::Movie_IsPlaying)
        .def("Movie_Stop", &UWillowGFxMovie::Movie_Stop)
        .def("Movie_Play", &UWillowGFxMovie::Movie_Play)
        .def("LocText", &UWillowGFxMovie::LocText)
        .def("GetFallbackLocSection", &UWillowGFxMovie::GetFallbackLocSection)
        .def("GetFallbackLocFile", &UWillowGFxMovie::GetFallbackLocFile)
        .def("LookupFallbackAkEventFromGlobalsDefinition", &UWillowGFxMovie::LookupFallbackAkEventFromGlobalsDefinition, py::return_value_policy::reference)
        .def("UpdateHUDVisibility", &UWillowGFxMovie::UpdateHUDVisibility)
        .def("eventOnClose", &UWillowGFxMovie::eventOnClose)
        .def("eventStart", &UWillowGFxMovie::eventStart)
        .def("CleanupDestroyedMovies", &UWillowGFxMovie::CleanupDestroyedMovies)
        .def("SingleArgInvokeSF", &UWillowGFxMovie::SingleArgInvokeSF)
          ;
}