#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Kill(py::module &m)
{
    py::class_< UBehavior_Kill,  UBehaviorBase   >(m, "UBehavior_Kill")
		.def_static("StaticClass", &UBehavior_Kill::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DeathType", &UBehavior_Kill::DeathType)
        .def_readwrite("DamageType", &UBehavior_Kill::DamageType)
        .def_readwrite("TargetContext", &UBehavior_Kill::TargetContext)
        .def("ApplyBehaviorToContext", &UBehavior_Kill::ApplyBehaviorToContext)
          ;
}