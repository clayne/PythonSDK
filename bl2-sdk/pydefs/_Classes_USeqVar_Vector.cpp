#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_Vector()
{
    py::class_< USeqVar_Vector,  USequenceVariable   >("USeqVar_Vector")
        .def_readwrite("VectValue", &USeqVar_Vector::VectValue)
        .def("StaticClass", &USeqVar_Vector::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}