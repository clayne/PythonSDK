#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionMax()
{
    py::class_< UMaterialExpressionMax,  UMaterialExpression   >("UMaterialExpressionMax")
        .def_readwrite("A", &UMaterialExpressionMax::A)
        .def_readwrite("B", &UMaterialExpressionMax::B)
        .def("StaticClass", &UMaterialExpressionMax::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}