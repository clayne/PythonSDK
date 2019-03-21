#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_MenuItems()
{
    py::class_< UUIDataStore_MenuItems,  UUIDataStore_GameResource   >("UUIDataStore_MenuItems")
        .def_readwrite("CurrentGameSettingsTag", &UUIDataStore_MenuItems::CurrentGameSettingsTag)
        .def_readwrite("OptionProviders", &UUIDataStore_MenuItems::OptionProviders)
        .def_readwrite("DynamicProviders", &UUIDataStore_MenuItems::DynamicProviders)
        .def("StaticClass", &UUIDataStore_MenuItems::StaticClass, py::return_value_policy::reference)
        .def("eventUnregistered", &UUIDataStore_MenuItems::eventUnregistered)
        .def("eventRegistered", &UUIDataStore_MenuItems::eventRegistered)
        .def("OnGameSettingsChanged", &UUIDataStore_MenuItems::OnGameSettingsChanged)
        .def("GetSet", &UUIDataStore_MenuItems::GetSet)
        .def("AppendToSet", &UUIDataStore_MenuItems::AppendToSet)
        .def("ClearSet", &UUIDataStore_MenuItems::ClearSet)
        .staticmethod("StaticClass")
  ;
}