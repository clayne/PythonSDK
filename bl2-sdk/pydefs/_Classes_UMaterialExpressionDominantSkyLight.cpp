#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDominantSkyLight(py::module &m)
{
    py::class_< UMaterialExpressionDominantSkyLight,  UMaterialExpression   >(m, "UMaterialExpressionDominantSkyLight")
		.def_static("StaticClass", &UMaterialExpressionDominantSkyLight::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TimeOfDayMax", &UMaterialExpressionDominantSkyLight::TimeOfDayMax)
        .def_readwrite("TimeOfDayMin", &UMaterialExpressionDominantSkyLight::TimeOfDayMin)
          ;
}