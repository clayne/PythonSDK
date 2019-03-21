#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionBumpOffsetSloped()
{
    py::class_< UMaterialExpressionBumpOffsetSloped,  UMaterialExpression   >("UMaterialExpressionBumpOffsetSloped")
        .def_readwrite("Coordinate", &UMaterialExpressionBumpOffsetSloped::Coordinate)
        .def_readwrite("NormalTexture", &UMaterialExpressionBumpOffsetSloped::NormalTexture)
        .def_readwrite("HeightTexture", &UMaterialExpressionBumpOffsetSloped::HeightTexture)
        .def_readwrite("HeightRatio", &UMaterialExpressionBumpOffsetSloped::HeightRatio)
        .def_readwrite("ReferencePlane", &UMaterialExpressionBumpOffsetSloped::ReferencePlane)
        .def_readwrite("Iterations", &UMaterialExpressionBumpOffsetSloped::Iterations)
        .def("StaticClass", &UMaterialExpressionBumpOffsetSloped::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}