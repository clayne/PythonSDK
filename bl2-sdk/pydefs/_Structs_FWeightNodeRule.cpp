#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeightNodeRule()
{
    py::class_< FWeightNodeRule >("FWeightNodeRule")
        .def_readwrite("NodeName", &FWeightNodeRule::NodeName)
        .def_readwrite("CachedNode", &FWeightNodeRule::CachedNode)
        .def_readwrite("CachedSlotNode", &FWeightNodeRule::CachedSlotNode)
        .def_readwrite("WeightCheck", &FWeightNodeRule::WeightCheck)
        .def_readwrite("ChildIndex", &FWeightNodeRule::ChildIndex)
  ;
}