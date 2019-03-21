#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_DuelChallengeAccepted()
{
    py::class_< UWillowSeqEvent_DuelChallengeAccepted,  USequenceEvent   >("UWillowSeqEvent_DuelChallengeAccepted")
        .def("StaticClass", &UWillowSeqEvent_DuelChallengeAccepted::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}