#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWaveMotionData()
{
    py::class_< FWaveMotionData >("FWaveMotionData")
        .def_readwrite("WaveFreq", &FWaveMotionData::WaveFreq)
        .def_readwrite("WaveAmp", &FWaveMotionData::WaveAmp)
        .def_readwrite("WavePhase", &FWaveMotionData::WavePhase)
  ;
}