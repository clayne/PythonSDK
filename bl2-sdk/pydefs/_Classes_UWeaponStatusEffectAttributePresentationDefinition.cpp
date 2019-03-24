#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponStatusEffectAttributePresentationDefinition(py::module &m)
{
    py::class_< UWeaponStatusEffectAttributePresentationDefinition,  UAttributePresentationDefinition   >(m, "UWeaponStatusEffectAttributePresentationDefinition")
		.def_static("StaticClass", &UWeaponStatusEffectAttributePresentationDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MappingData", &UWeaponStatusEffectAttributePresentationDefinition::MappingData)
          ;
}