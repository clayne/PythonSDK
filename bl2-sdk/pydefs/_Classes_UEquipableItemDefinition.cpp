#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEquipableItemDefinition()
{
    py::class_< UEquipableItemDefinition,  UItemDefinition   >("UEquipableItemDefinition")
        .def_readwrite("DamageTypeIcon", &UEquipableItemDefinition::DamageTypeIcon)
        .def_readwrite("EquipSounds", &UEquipableItemDefinition::EquipSounds)
        .def_readwrite("UnequipSounds", &UEquipableItemDefinition::UnequipSounds)
        .def("StaticClass", &UEquipableItemDefinition::StaticClass, py::return_value_policy::reference)
        .def("OnUnequipped", &UEquipableItemDefinition::OnUnequipped)
        .def("OnEquipped", &UEquipableItemDefinition::OnEquipped)
        .staticmethod("StaticClass")
  ;
}