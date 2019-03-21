#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationPrimitiveBase()
{
    py::class_< UParticleModuleLocationPrimitiveBase,  UParticleModuleLocationBase   >("UParticleModuleLocationPrimitiveBase")
        .def_readwrite("VelocityScale", &UParticleModuleLocationPrimitiveBase::VelocityScale)
        .def_readwrite("StartLocation", &UParticleModuleLocationPrimitiveBase::StartLocation)
        .def("StaticClass", &UParticleModuleLocationPrimitiveBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}