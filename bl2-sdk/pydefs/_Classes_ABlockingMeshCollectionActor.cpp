#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ABlockingMeshCollectionActor(py::module &m)
{
    py::class_< ABlockingMeshCollectionActor,  AStaticMeshActorBase   >(m, "ABlockingMeshCollectionActor")
		.def_static("StaticClass", &ABlockingMeshCollectionActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BlockingMeshComponents", &ABlockingMeshCollectionActor::BlockingMeshComponents)
        .def_readwrite("MaxBlockingMeshComponents", &ABlockingMeshCollectionActor::MaxBlockingMeshComponents)
          ;
}