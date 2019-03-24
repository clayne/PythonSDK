#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_ArrivedAtMoveNode(py::module &m)
{
    py::class_< USeqEvent_ArrivedAtMoveNode,  USequenceEvent   >(m, "USeqEvent_ArrivedAtMoveNode")
		.def_static("StaticClass", &USeqEvent_ArrivedAtMoveNode::StaticClass, py::return_value_policy::reference)
          ;
}