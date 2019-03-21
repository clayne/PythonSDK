#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetAIFlag()
{
    py::class_< UBehavior_SetAIFlag,  UBehaviorBase   >("UBehavior_SetAIFlag")
        .def_readwrite("FlagDef", &UBehavior_SetAIFlag::FlagDef)
        .def("StaticClass", &UBehavior_SetAIFlag::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetAIFlag::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}