#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAICostExpressionEvaluator(py::module &m)
{
    py::class_< UAICostExpressionEvaluator,  UExpressionEvaluator   >(m, "UAICostExpressionEvaluator")
		.def_static("StaticClass", &UAICostExpressionEvaluator::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Multiplier", &UAICostExpressionEvaluator::Multiplier)
        .def_readwrite("PopDef", &UAICostExpressionEvaluator::PopDef)
        .def("Evaluate", &UAICostExpressionEvaluator::Evaluate)
          ;
}