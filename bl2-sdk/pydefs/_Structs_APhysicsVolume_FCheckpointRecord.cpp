#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APhysicsVolume_FCheckpointRecord(py::module &m)
{
    py::class_< APhysicsVolume_FCheckpointRecord >(m, "APhysicsVolume_FCheckpointRecord")
  ;
}