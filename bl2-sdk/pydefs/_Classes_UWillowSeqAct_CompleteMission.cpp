#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_CompleteMission()
{
    py::class_< UWillowSeqAct_CompleteMission,  USequenceAction   >("UWillowSeqAct_CompleteMission")
        .def_readwrite("AssociatedMission", &UWillowSeqAct_CompleteMission::AssociatedMission)
        .def("StaticClass", &UWillowSeqAct_CompleteMission::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}