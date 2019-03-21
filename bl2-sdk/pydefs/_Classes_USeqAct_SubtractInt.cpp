#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SubtractInt()
{
    py::class_< USeqAct_SubtractInt,  USeqAct_SetSequenceVariable   >("USeqAct_SubtractInt")
        .def_readwrite("ValueA", &USeqAct_SubtractInt::ValueA)
        .def_readwrite("ValueB", &USeqAct_SubtractInt::ValueB)
        .def_readwrite("FloatResult", &USeqAct_SubtractInt::FloatResult)
        .def_readwrite("IntResult", &USeqAct_SubtractInt::IntResult)
        .def("StaticClass", &USeqAct_SubtractInt::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}