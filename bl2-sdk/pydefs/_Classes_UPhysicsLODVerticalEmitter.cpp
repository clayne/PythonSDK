#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicsLODVerticalEmitter()
{
    py::class_< UPhysicsLODVerticalEmitter,  UObject   >("UPhysicsLODVerticalEmitter")
        .def_readwrite("ParticlePercentage", &UPhysicsLODVerticalEmitter::ParticlePercentage)
        .def("StaticClass", &UPhysicsLODVerticalEmitter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}