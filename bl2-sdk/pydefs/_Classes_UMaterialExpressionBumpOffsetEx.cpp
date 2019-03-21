#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionBumpOffsetEx()
{
    py::class_< UMaterialExpressionBumpOffsetEx,  UMaterialExpression   >("UMaterialExpressionBumpOffsetEx")
        .def_readwrite("Coordinate", &UMaterialExpressionBumpOffsetEx::Coordinate)
        .def_readwrite("Height", &UMaterialExpressionBumpOffsetEx::Height)
        .def_readwrite("HeightRatio", &UMaterialExpressionBumpOffsetEx::HeightRatio)
        .def_readwrite("ReferencePlane", &UMaterialExpressionBumpOffsetEx::ReferencePlane)
        .def("StaticClass", &UMaterialExpressionBumpOffsetEx::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}