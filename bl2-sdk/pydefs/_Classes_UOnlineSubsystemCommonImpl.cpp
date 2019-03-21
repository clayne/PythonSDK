#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineSubsystemCommonImpl()
{
    py::class_< UOnlineSubsystemCommonImpl,  UOnlineSubsystem   >("UOnlineSubsystemCommonImpl")
        .def_readwrite("VoiceEngine", &UOnlineSubsystemCommonImpl::VoiceEngine)
        .def_readwrite("MaxLocalTalkers", &UOnlineSubsystemCommonImpl::MaxLocalTalkers)
        .def_readwrite("MaxRemoteTalkers", &UOnlineSubsystemCommonImpl::MaxRemoteTalkers)
        .def_readwrite("GameInterfaceImpl", &UOnlineSubsystemCommonImpl::GameInterfaceImpl)
        .def_readwrite("AuthInterfaceImpl", &UOnlineSubsystemCommonImpl::AuthInterfaceImpl)
        .def("StaticClass", &UOnlineSubsystemCommonImpl::StaticClass, py::return_value_policy::reference)
        .def("GetRegisteredPlayers", &UOnlineSubsystemCommonImpl::GetRegisteredPlayers)
        .def("IsPlayerInSession", &UOnlineSubsystemCommonImpl::IsPlayerInSession)
        .def("eventGetPlayerNicknameFromIndex", &UOnlineSubsystemCommonImpl::eventGetPlayerNicknameFromIndex)
        .staticmethod("StaticClass")
  ;
}