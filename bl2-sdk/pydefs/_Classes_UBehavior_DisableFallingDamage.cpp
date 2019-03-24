#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DisableFallingDamage(py::module &m)
{
    py::class_< UBehavior_DisableFallingDamage,  UBehaviorBase   >(m, "UBehavior_DisableFallingDamage")
		.def_static("StaticClass", &UBehavior_DisableFallingDamage::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_DisableFallingDamage::ApplyBehaviorToContext)
          ;
}