#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineSubsystem(py::module &m)
{
    py::class_< UOnlineSubsystem,  UObject   >(m, "UOnlineSubsystem")
		.def_static("StaticClass", &UOnlineSubsystem::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_FTickableObject", &UOnlineSubsystem::VfTable_FTickableObject)
        .def_readwrite("AccountInterface", &UOnlineSubsystem::AccountInterface)
        .def_readwrite("PlayerInterface", &UOnlineSubsystem::PlayerInterface)
        .def_readwrite("PlayerInterfaceEx", &UOnlineSubsystem::PlayerInterfaceEx)
        .def_readwrite("SystemInterface", &UOnlineSubsystem::SystemInterface)
        .def_readwrite("GameInterface", &UOnlineSubsystem::GameInterface)
        .def_readwrite("ContentInterface", &UOnlineSubsystem::ContentInterface)
        .def_readwrite("VoiceInterface", &UOnlineSubsystem::VoiceInterface)
        .def_readwrite("StatsInterface", &UOnlineSubsystem::StatsInterface)
        .def_readwrite("NewsInterface", &UOnlineSubsystem::NewsInterface)
        .def_readwrite("PartyChatInterface", &UOnlineSubsystem::PartyChatInterface)
        .def_readwrite("TitleFileInterface", &UOnlineSubsystem::TitleFileInterface)
        .def_readwrite("AuthInterface", &UOnlineSubsystem::AuthInterface)
        .def_readwrite("NamedInterfaces", &UOnlineSubsystem::NamedInterfaces)
        .def_readwrite("NamedInterfaceDefs", &UOnlineSubsystem::NamedInterfaceDefs)
        .def_readwrite("Sessions", &UOnlineSubsystem::Sessions)
        .def_readwrite("BuildIdOverride", &UOnlineSubsystem::BuildIdOverride)
        .def_readwrite("IniLocPatcherClassName", &UOnlineSubsystem::IniLocPatcherClassName)
        .def_readwrite("Patcher", &UOnlineSubsystem::Patcher)
        .def_readwrite("AsyncMinCompletionTime", &UOnlineSubsystem::AsyncMinCompletionTime)
        .def("ProcessCompressedConfig", &UOnlineSubsystem::ProcessCompressedConfig)
        .def("FindUniqueId", &UOnlineSubsystem::FindUniqueId)
        .def("ClearCachedProfile", &UOnlineSubsystem::ClearCachedProfile)
        .def("SetDebugSpewLevel", &UOnlineSubsystem::SetDebugSpewLevel)
        .def("DumpVoiceRegistration", &UOnlineSubsystem::DumpVoiceRegistration)
        .def("DumpSessionState", &UOnlineSubsystem::DumpSessionState)
        .def("DumpGameSettings", &UOnlineSubsystem::DumpGameSettings)
        .def("GetNumSupportedLogins", &UOnlineSubsystem::GetNumSupportedLogins)
        .def("GetBuildUniqueId", &UOnlineSubsystem::GetBuildUniqueId)
        .def("eventGetPlayerUniqueNetIdFromIndex", &UOnlineSubsystem::eventGetPlayerUniqueNetIdFromIndex)
        .def("StringToUniqueNetId", &UOnlineSubsystem::StringToUniqueNetId)
        .def("UniqueNetIdToString", &UOnlineSubsystem::UniqueNetIdToString)
        .def("eventGetNamedInterface", &UOnlineSubsystem::eventGetNamedInterface, py::return_value_policy::reference)
        .def("eventSetNamedInterface", &UOnlineSubsystem::eventSetNamedInterface)
        .def("eventSetAuthInterface", &UOnlineSubsystem::eventSetAuthInterface)
        .def("eventSetTitleFileInterface", &UOnlineSubsystem::eventSetTitleFileInterface)
        .def("eventSetPartyChatInterface", &UOnlineSubsystem::eventSetPartyChatInterface)
        .def("eventSetNewsInterface", &UOnlineSubsystem::eventSetNewsInterface)
        .def("eventSetStatsInterface", &UOnlineSubsystem::eventSetStatsInterface)
        .def("eventSetVoiceInterface", &UOnlineSubsystem::eventSetVoiceInterface)
        .def("eventSetContentInterface", &UOnlineSubsystem::eventSetContentInterface)
        .def("eventSetGameInterface", &UOnlineSubsystem::eventSetGameInterface)
        .def("eventSetSystemInterface", &UOnlineSubsystem::eventSetSystemInterface)
        .def("eventSetPlayerInterfaceEx", &UOnlineSubsystem::eventSetPlayerInterfaceEx)
        .def("eventSetPlayerInterface", &UOnlineSubsystem::eventSetPlayerInterface)
        .def("eventSetAccountInterface", &UOnlineSubsystem::eventSetAccountInterface)
        .def("eventExit", &UOnlineSubsystem::eventExit)
        .def("eventPostInit", &UOnlineSubsystem::eventPostInit)
        .def("eventInit", &UOnlineSubsystem::eventInit)
          ;
}