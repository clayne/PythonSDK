#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStoredFoliageInstance()
{
    py::class_< FStoredFoliageInstance >("FStoredFoliageInstance")
        .def_readonly("StaticLighting", &FStoredFoliageInstance::StaticLighting)
        .def_readwrite("Location", &FFoliageInstanceBase::Location)
        .def_readwrite("XAxis", &FFoliageInstanceBase::XAxis)
        .def_readwrite("YAxis", &FFoliageInstanceBase::YAxis)
        .def_readwrite("ZAxis", &FFoliageInstanceBase::ZAxis)
        .def_readwrite("DistanceFactorSquared", &FFoliageInstanceBase::DistanceFactorSquared)
  ;
}