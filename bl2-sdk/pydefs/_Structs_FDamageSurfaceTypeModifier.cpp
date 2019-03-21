#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageSurfaceTypeModifier()
{
    py::class_< FDamageSurfaceTypeModifier >("FDamageSurfaceTypeModifier")
        .def_readwrite("SurfaceType", &FDamageSurfaceTypeModifier::SurfaceType)
        .def_readwrite("BaseChance", &FDamageSurfaceTypeModifier::BaseChance)
        .def_readwrite("BaseSpreadChance", &FDamageSurfaceTypeModifier::BaseSpreadChance)
        .def_readwrite("SpreadChanceDecayMultiplier", &FDamageSurfaceTypeModifier::SpreadChanceDecayMultiplier)
  ;
}