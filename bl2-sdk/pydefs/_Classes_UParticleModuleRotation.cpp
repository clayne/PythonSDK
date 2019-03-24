#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotation(py::module &m)
{
    py::class_< UParticleModuleRotation,  UParticleModule   >(m, "UParticleModuleRotation")
		.def_static("StaticClass", &UParticleModuleRotation::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StartRotation", &UParticleModuleRotation::StartRotation)
          ;
}