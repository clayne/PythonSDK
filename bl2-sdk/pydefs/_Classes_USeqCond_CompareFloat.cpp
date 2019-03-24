#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_CompareFloat(py::module &m)
{
    py::class_< USeqCond_CompareFloat,  USequenceCondition   >(m, "USeqCond_CompareFloat")
		.def_static("StaticClass", &USeqCond_CompareFloat::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ValueA", &USeqCond_CompareFloat::ValueA)
        .def_readwrite("ValueB", &USeqCond_CompareFloat::ValueB)
          ;
}