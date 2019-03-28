#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDominantShadowInfo(py::module &m)
{
    py::class_< FDominantShadowInfo >(m, "FDominantShadowInfo")
        .def_readwrite("WorldToLight", &FDominantShadowInfo::WorldToLight)
        .def_readwrite("LightToWorld", &FDominantShadowInfo::LightToWorld)
        .def_readwrite("LightSpaceImportanceBounds", &FDominantShadowInfo::LightSpaceImportanceBounds)
        .def_readwrite("ShadowMapSizeX", &FDominantShadowInfo::ShadowMapSizeX)
        .def_readwrite("ShadowMapSizeY", &FDominantShadowInfo::ShadowMapSizeY)
  ;
}