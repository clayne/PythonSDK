#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DropProjectile(py::module &m)
{
    py::class_< UBehavior_DropProjectile,  UBehaviorBase   >(m, "UBehavior_DropProjectile")
		.def_static("StaticClass", &UBehavior_DropProjectile::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InstanceDataName", &UBehavior_DropProjectile::InstanceDataName)
        .def_readwrite("ChildProjectileBaseValues", &UBehavior_DropProjectile::ChildProjectileBaseValues)
        .def_readwrite("ProjectileDef", &UBehavior_DropProjectile::ProjectileDef)
        .def_readwrite("SetProjectileSequenceState", &UBehavior_DropProjectile::SetProjectileSequenceState)
        .def("ApplyBehaviorToContext", &UBehavior_DropProjectile::ApplyBehaviorToContext)
          ;
}