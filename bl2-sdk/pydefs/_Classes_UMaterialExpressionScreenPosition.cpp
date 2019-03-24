#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionScreenPosition(py::module &m)
{
    py::class_< UMaterialExpressionScreenPosition,  UMaterialExpression   >(m, "UMaterialExpressionScreenPosition")
		.def_static("StaticClass", &UMaterialExpressionScreenPosition::StaticClass, py::return_value_policy::reference)
          ;
}