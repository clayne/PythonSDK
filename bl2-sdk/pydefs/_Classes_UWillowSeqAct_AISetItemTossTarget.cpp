#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AISetItemTossTarget()
{
    py::class_< UWillowSeqAct_AISetItemTossTarget,  USequenceAction   >("UWillowSeqAct_AISetItemTossTarget")
        .def_readwrite("TossTargets", &UWillowSeqAct_AISetItemTossTarget::TossTargets)
        .def("StaticClass", &UWillowSeqAct_AISetItemTossTarget::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}