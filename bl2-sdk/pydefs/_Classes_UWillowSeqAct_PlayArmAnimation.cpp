#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_PlayArmAnimation()
{
    py::class_< UWillowSeqAct_PlayArmAnimation,  USequenceAction   >("UWillowSeqAct_PlayArmAnimation")
        .def_readwrite("AnimationType", &UWillowSeqAct_PlayArmAnimation::AnimationType)
        .def("StaticClass", &UWillowSeqAct_PlayArmAnimation::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}