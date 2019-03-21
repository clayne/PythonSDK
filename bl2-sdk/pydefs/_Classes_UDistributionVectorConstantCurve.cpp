#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVectorConstantCurve()
{
    py::class_< UDistributionVectorConstantCurve,  UDistributionVector   >("UDistributionVectorConstantCurve")
        .def_readwrite("ConstantCurve", &UDistributionVectorConstantCurve::ConstantCurve)
        .def_readwrite("LockedAxes", &UDistributionVectorConstantCurve::LockedAxes)
        .def("StaticClass", &UDistributionVectorConstantCurve::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}