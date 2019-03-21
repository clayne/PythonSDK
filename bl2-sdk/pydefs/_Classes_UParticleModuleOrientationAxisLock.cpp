#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleOrientationAxisLock()
{
    py::class_< UParticleModuleOrientationAxisLock,  UParticleModuleOrientationBase   >("UParticleModuleOrientationAxisLock")
        .def_readwrite("LockAxisFlags", &UParticleModuleOrientationAxisLock::LockAxisFlags)
        .def("StaticClass", &UParticleModuleOrientationAxisLock::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}