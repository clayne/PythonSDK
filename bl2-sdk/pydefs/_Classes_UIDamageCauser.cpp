#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIDamageCauser(py::module &m)
{
    py::class_< UIDamageCauser,  UInterface   >(m, "UIDamageCauser")
		.def_static("StaticClass", &UIDamageCauser::StaticClass, py::return_value_policy::reference)
        .def("GetControllerResponsibleForDamage", &UIDamageCauser::GetControllerResponsibleForDamage, py::return_value_policy::reference)
        .def("GetInstigator", &UIDamageCauser::GetInstigator, py::return_value_policy::reference)
        .def("GetInstigatorSelfDamageScale", &UIDamageCauser::GetInstigatorSelfDamageScale)
        .def("GetFireIntervalChanceModifier", &UIDamageCauser::GetFireIntervalChanceModifier)
        .def("GetStatusEffectBaseChanceModifier", &UIDamageCauser::GetStatusEffectBaseChanceModifier)
        .def("GetStatusEffectChanceModifier", &UIDamageCauser::GetStatusEffectChanceModifier)
        .def("GetStatusEffectBaseDamage", &UIDamageCauser::GetStatusEffectBaseDamage)
          ;
}