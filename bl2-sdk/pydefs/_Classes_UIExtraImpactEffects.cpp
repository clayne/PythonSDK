#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIExtraImpactEffects()
{
    py::class_< UIExtraImpactEffects,  UInterface   >("UIExtraImpactEffects")
        .def("StaticClass", &UIExtraImpactEffects::StaticClass, py::return_value_policy::reference)
        .def("PlayExtraImpactEffects", &UIExtraImpactEffects::PlayExtraImpactEffects)
        .def("SetExtraImpactEffect", &UIExtraImpactEffects::SetExtraImpactEffect)
        .staticmethod("StaticClass")
  ;
}