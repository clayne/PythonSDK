#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ClearStatusEffects(py::module &m)
{
    py::class_< UBehavior_ClearStatusEffects,  UBehaviorBase   >(m, "UBehavior_ClearStatusEffects")
		.def_static("StaticClass", &UBehavior_ClearStatusEffects::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ClearStatusEffects::ApplyBehaviorToContext)
          ;
}