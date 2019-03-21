#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstant2Vector()
{
    py::class_< UMaterialExpressionConstant2Vector,  UMaterialExpression   >("UMaterialExpressionConstant2Vector")
        .def_readwrite("R", &UMaterialExpressionConstant2Vector::R)
        .def_readwrite("G", &UMaterialExpressionConstant2Vector::G)
        .def("StaticClass", &UMaterialExpressionConstant2Vector::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}