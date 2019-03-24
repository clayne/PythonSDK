#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DeactivateSkill(py::module &m)
{
    py::class_< UBehavior_DeactivateSkill,  UBehaviorBase   >(m, "UBehavior_DeactivateSkill")
		.def_static("StaticClass", &UBehavior_DeactivateSkill::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SkillToDeactivate", &UBehavior_DeactivateSkill::SkillToDeactivate)
        .def("ApplyBehaviorToContext", &UBehavior_DeactivateSkill::ApplyBehaviorToContext)
          ;
}