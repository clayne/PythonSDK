#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSettings_DataStore()
{
    py::class_< UWillowOnlineGameSettings_DataStore,  UUIDataStore_OnlineGameSettings   >("UWillowOnlineGameSettings_DataStore")
        .def("StaticClass", &UWillowOnlineGameSettings_DataStore::StaticClass, py::return_value_policy::reference)
        .def("GetPlaythrough", &UWillowOnlineGameSettings_DataStore::GetPlaythrough)
        .def("GetLevel", &UWillowOnlineGameSettings_DataStore::GetLevel)
        .def("OnGameCreated", &UWillowOnlineGameSettings_DataStore::OnGameCreated)
        .def("eventCreateGame", &UWillowOnlineGameSettings_DataStore::eventCreateGame)
        .staticmethod("StaticClass")
  ;
}