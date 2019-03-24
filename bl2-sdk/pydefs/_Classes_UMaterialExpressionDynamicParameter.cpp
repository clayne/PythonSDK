#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDynamicParameter(py::module &m)
{
    py::class_< UMaterialExpressionDynamicParameter,  UMaterialExpression   >(m, "UMaterialExpressionDynamicParameter")
		.def_static("StaticClass", &UMaterialExpressionDynamicParameter::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ParamNames", &UMaterialExpressionDynamicParameter::ParamNames)
          ;
}