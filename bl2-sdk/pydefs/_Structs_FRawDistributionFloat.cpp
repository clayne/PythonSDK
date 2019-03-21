#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRawDistributionFloat()
{
    py::class_< FRawDistributionFloat >("FRawDistributionFloat")
        .def_readwrite("Distribution", &FRawDistributionFloat::Distribution)
        .def_readwrite("Type", &FRawDistribution::Type)
        .def_readwrite("Op", &FRawDistribution::Op)
        .def_readwrite("LookupTableNumElements", &FRawDistribution::LookupTableNumElements)
        .def_readwrite("LookupTableChunkSize", &FRawDistribution::LookupTableChunkSize)
        .def_readwrite("LookupTable", &FRawDistribution::LookupTable)
        .def_readwrite("LookupTableTimeScale", &FRawDistribution::LookupTableTimeScale)
        .def_readwrite("LookupTableStartTime", &FRawDistribution::LookupTableStartTime)
  ;
}