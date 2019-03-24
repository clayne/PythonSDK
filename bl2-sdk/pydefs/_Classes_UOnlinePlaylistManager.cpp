#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlinePlaylistManager(py::module &m)
{
    py::class_< UOnlinePlaylistManager,  UObject   >(m, "UOnlinePlaylistManager")
		.def_static("StaticClass", &UOnlinePlaylistManager::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_FTickableObject", &UOnlinePlaylistManager::VfTable_FTickableObject)
        .def_readwrite("Playlists", &UOnlinePlaylistManager::Playlists)
        .def_readwrite("PlaylistFileNames", &UOnlinePlaylistManager::PlaylistFileNames)
        .def_readwrite("DatastoresToRefresh", &UOnlinePlaylistManager::DatastoresToRefresh)
        .def_readwrite("DownloadCount", &UOnlinePlaylistManager::DownloadCount)
        .def_readwrite("SuccessfulCount", &UOnlinePlaylistManager::SuccessfulCount)
        .def_readwrite("VersionNumber", &UOnlinePlaylistManager::VersionNumber)
        .def_readwrite("PopulationData", &UOnlinePlaylistManager::PopulationData)
        .def_readwrite("WorldwideTotalPlayers", &UOnlinePlaylistManager::WorldwideTotalPlayers)
        .def_readwrite("RegionTotalPlayers", &UOnlinePlaylistManager::RegionTotalPlayers)
        .def_readwrite("TitleFileInterface", &UOnlinePlaylistManager::TitleFileInterface)
        .def_readwrite("PopulationFileName", &UOnlinePlaylistManager::PopulationFileName)
        .def_readwrite("NextPlaylistPopulationUpdateTime", &UOnlinePlaylistManager::NextPlaylistPopulationUpdateTime)
        .def_readwrite("PlaylistPopulationUpdateInterval", &UOnlinePlaylistManager::PlaylistPopulationUpdateInterval)
        .def_readwrite("MinPlaylistIdToReport", &UOnlinePlaylistManager::MinPlaylistIdToReport)
        .def_readwrite("CurrentPlaylistId", &UOnlinePlaylistManager::CurrentPlaylistId)
        .def_readwrite("EventsInterfaceName", &UOnlinePlaylistManager::EventsInterfaceName)
        .def_readwrite("DataCenterId", &UOnlinePlaylistManager::DataCenterId)
        .def_readwrite("DataCenterFileName", &UOnlinePlaylistManager::DataCenterFileName)
        .def_readwrite("LastPlaylistDownloadTime", &UOnlinePlaylistManager::LastPlaylistDownloadTime)
        .def_readwrite("PlaylistRefreshInterval", &UOnlinePlaylistManager::PlaylistRefreshInterval)
        .def("ParseDataCenterId", &UOnlinePlaylistManager::ParseDataCenterId)
        .def("OnReadDataCenterIdComplete", &UOnlinePlaylistManager::OnReadDataCenterIdComplete)
        .def("ReadDataCenterId", &UOnlinePlaylistManager::ReadDataCenterId)
        .def("eventSendPlaylistPopulationUpdate", &UOnlinePlaylistManager::eventSendPlaylistPopulationUpdate)
        .def("GetPopulationInfoFromPlaylist", &UOnlinePlaylistManager::GetPopulationInfoFromPlaylist)
        .def("ParsePlaylistPopulationData", &UOnlinePlaylistManager::ParsePlaylistPopulationData)
        .def("OnPlaylistPopulationDataUpdated", &UOnlinePlaylistManager::OnPlaylistPopulationDataUpdated)
        .def("OnReadPlaylistPopulationComplete", &UOnlinePlaylistManager::OnReadPlaylistPopulationComplete)
        .def("ReadPlaylistPopulation", &UOnlinePlaylistManager::ReadPlaylistPopulation)
        .def("Reset", &UOnlinePlaylistManager::Reset)
        .def("GetContentIdsFromPlaylist", &UOnlinePlaylistManager::GetContentIdsFromPlaylist)
        .def("GetInventorySwapFromPlaylist", &UOnlinePlaylistManager::GetInventorySwapFromPlaylist, py::return_value_policy::reference)
        .def("GetMapCycleFromPlaylist", &UOnlinePlaylistManager::GetMapCycleFromPlaylist)
        .def("GetUrlFromPlaylist", &UOnlinePlaylistManager::GetUrlFromPlaylist)
        .def("GetMatchType", &UOnlinePlaylistManager::GetMatchType)
        .def("IsPlaylistArbitrated", &UOnlinePlaylistManager::IsPlaylistArbitrated)
        .def("GetLoadBalanceIdFromPlaylist", &UOnlinePlaylistManager::GetLoadBalanceIdFromPlaylist)
        .def("GetTeamInfoFromPlaylist", &UOnlinePlaylistManager::GetTeamInfoFromPlaylist)
        .def("PlaylistSupportsDedicatedServers", &UOnlinePlaylistManager::PlaylistSupportsDedicatedServers)
        .def("HasAnyGameSettings", &UOnlinePlaylistManager::HasAnyGameSettings)
        .def("GetGameSettings", &UOnlinePlaylistManager::GetGameSettings, py::return_value_policy::reference)
        .def("FinalizePlaylistObjects", &UOnlinePlaylistManager::FinalizePlaylistObjects)
        .def("OnReadTitleFileComplete", &UOnlinePlaylistManager::OnReadTitleFileComplete)
        .def("ShouldRefreshPlaylists", &UOnlinePlaylistManager::ShouldRefreshPlaylists)
        .def("DetermineFilesToDownload", &UOnlinePlaylistManager::DetermineFilesToDownload)
        .def("DownloadPlaylist", &UOnlinePlaylistManager::DownloadPlaylist)
        .def("OnReadPlaylistComplete", &UOnlinePlaylistManager::OnReadPlaylistComplete)
          ;
}