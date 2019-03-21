#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnProjectileFromImpact()
{
    py::class_< UBehavior_SpawnProjectileFromImpact,  UBehaviorBase   >("UBehavior_SpawnProjectileFromImpact")
        .def_readwrite("OwnerContext", &UBehavior_SpawnProjectileFromImpact::OwnerContext)
        .def_readwrite("InstanceDataContext", &UBehavior_SpawnProjectileFromImpact::InstanceDataContext)
        .def_readwrite("SavedReferenceName", &UBehavior_SpawnProjectileFromImpact::SavedReferenceName)
        .def_readwrite("ProjectileDefinition", &UBehavior_SpawnProjectileFromImpact::ProjectileDefinition)
        .def_readwrite("SetProjectileSequenceState", &UBehavior_SpawnProjectileFromImpact::SetProjectileSequenceState)
        .def_readwrite("GearLikenessContext", &UBehavior_SpawnProjectileFromImpact::GearLikenessContext)
        .def("StaticClass", &UBehavior_SpawnProjectileFromImpact::StaticClass, py::return_value_policy::reference)
        .def("AttachProjectileToBase", &UBehavior_SpawnProjectileFromImpact::AttachProjectileToBase)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnProjectileFromImpact::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}