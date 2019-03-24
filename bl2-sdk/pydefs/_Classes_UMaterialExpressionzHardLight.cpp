#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionzHardLight(py::module &m)
{
    py::class_< UMaterialExpressionzHardLight,  UMaterialExpressionBlendModeBase   >(m, "UMaterialExpressionzHardLight")
		.def_static("StaticClass", &UMaterialExpressionzHardLight::StaticClass, py::return_value_policy::reference)
          ;
}