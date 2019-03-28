#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AssignBoolVariable(py::module &m)
{
    py::class_< UBehavior_AssignBoolVariable,  UBehaviorBase   >(m, "UBehavior_AssignBoolVariable")
		.def_static("StaticClass", &UBehavior_AssignBoolVariable::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_AssignBoolVariable::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_AssignBoolVariable::ApplyBehaviorToContext)
          ;
}