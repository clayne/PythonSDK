#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionWeaponBalanceDefinition()
{
    py::class_< UMissionWeaponBalanceDefinition,  UInventoryBalanceDefinition   >("UMissionWeaponBalanceDefinition")
        .def_readwrite("MissionObjective", &UMissionWeaponBalanceDefinition::MissionObjective)
        .def_readwrite("WeaponPartListCollection", &UWeaponBalanceDefinition::WeaponPartListCollection)
        .def_readwrite("RuntimePartListCollection", &UWeaponBalanceDefinition::RuntimePartListCollection)
        .def("StaticClass", &UMissionWeaponBalanceDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}