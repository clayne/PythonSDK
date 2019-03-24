#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUVDirect(py::module &m)
{
    py::class_< UParticleModuleSubUVDirect,  UParticleModuleSubUVBase   >(m, "UParticleModuleSubUVDirect")
		.def_static("StaticClass", &UParticleModuleSubUVDirect::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SubUVPosition", &UParticleModuleSubUVDirect::SubUVPosition)
        .def_readwrite("SubUVSize", &UParticleModuleSubUVDirect::SubUVSize)
          ;
}