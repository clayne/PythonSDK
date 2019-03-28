#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Melee(py::module &m)
{
    py::class_< UWillowDmgSource_Melee,  UWillowDamageSource   >(m, "UWillowDmgSource_Melee")
		.def_static("StaticClass", &UWillowDmgSource_Melee::StaticClass, py::return_value_policy::reference)
          ;
}