#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeExpression(py::module &m)
{
    py::class_< UAttributeExpression,  UObject   >(m, "UAttributeExpression")
		.def_static("StaticClass", &UAttributeExpression::StaticClass, py::return_value_policy::reference)
        .def("SelectAkEvent", &UAttributeExpression::SelectAkEvent, py::return_value_policy::reference)
        .def("SelectSoundCue", &UAttributeExpression::SelectSoundCue, py::return_value_policy::reference)
        .def("EvaluateExpression", &UAttributeExpression::EvaluateExpression)
        .def("EvaluateExpressions", &UAttributeExpression::EvaluateExpressions)
          ;
}