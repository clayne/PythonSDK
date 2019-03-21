#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_CameraShake()
{
    py::class_< UGearboxSeqAct_CameraShake,  USequenceAction   >("UGearboxSeqAct_CameraShake")
        .def_readwrite("CameraShake", &UGearboxSeqAct_CameraShake::CameraShake)
        .def("StaticClass", &UGearboxSeqAct_CameraShake::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}