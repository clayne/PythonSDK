#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionLinearInterpolate()
{
    py::class_< UMaterialExpressionLinearInterpolate,  UMaterialExpression   >("UMaterialExpressionLinearInterpolate")
        .def_readwrite("A", &UMaterialExpressionLinearInterpolate::A)
        .def_readwrite("B", &UMaterialExpressionLinearInterpolate::B)
        .def_readwrite("Alpha", &UMaterialExpressionLinearInterpolate::Alpha)
        .def("StaticClass", &UMaterialExpressionLinearInterpolate::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}