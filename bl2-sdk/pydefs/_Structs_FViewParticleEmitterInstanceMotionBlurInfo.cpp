#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FViewParticleEmitterInstanceMotionBlurInfo(py::module &m)
{
    py::class_< FViewParticleEmitterInstanceMotionBlurInfo >(m, "FViewParticleEmitterInstanceMotionBlurInfo")
        .def_readwrite("EmitterInstanceMBInfoMap", &FViewParticleEmitterInstanceMotionBlurInfo::EmitterInstanceMBInfoMap)
  ;
}