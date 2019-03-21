#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASplineLoftActor()
{
    py::class_< ASplineLoftActor,  ASplineActor   >("ASplineLoftActor")
        .def_readwrite("ScaleX", &ASplineLoftActor::ScaleX)
        .def_readwrite("ScaleY", &ASplineLoftActor::ScaleY)
        .def_readwrite("SplineMeshComps", &ASplineLoftActor::SplineMeshComps)
        .def_readwrite("DeformMesh", &ASplineLoftActor::DeformMesh)
        .def_readwrite("DeformMeshMaterials", &ASplineLoftActor::DeformMeshMaterials)
        .def_readwrite("Roll", &ASplineLoftActor::Roll)
        .def_readwrite("WorldXDir", &ASplineLoftActor::WorldXDir)
        .def_readwrite("Offset", &ASplineLoftActor::Offset)
        .def_readwrite("MeshLightEnvironment", &ASplineLoftActor::MeshLightEnvironment)
        .def_readwrite("MeshMaxDrawDistance", &ASplineLoftActor::MeshMaxDrawDistance)
        .def("StaticClass", &ASplineLoftActor::StaticClass, py::return_value_policy::reference)
        .def("UpdateSplineParams", &ASplineLoftActor::UpdateSplineParams)
        .def("ClearLoftMesh", &ASplineLoftActor::ClearLoftMesh)
        .staticmethod("StaticClass")
  ;
}