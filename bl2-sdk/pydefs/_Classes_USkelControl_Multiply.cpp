#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkelControl_Multiply()
{
    py::class_< USkelControl_Multiply,  USkelControlBase   >("USkelControl_Multiply")
        .def_readwrite("Multiplier", &USkelControl_Multiply::Multiplier)
        .def("StaticClass", &USkelControl_Multiply::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}