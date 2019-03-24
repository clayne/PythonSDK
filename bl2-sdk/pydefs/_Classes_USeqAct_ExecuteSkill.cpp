#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ExecuteSkill(py::module &m)
{
    py::class_< USeqAct_ExecuteSkill,  USequenceAction   >(m, "USeqAct_ExecuteSkill")
		.def_static("StaticClass", &USeqAct_ExecuteSkill::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SkillEffect", &USeqAct_ExecuteSkill::SkillEffect)
        .def("eventExecuteSkill", &USeqAct_ExecuteSkill::eventExecuteSkill)
          ;
}