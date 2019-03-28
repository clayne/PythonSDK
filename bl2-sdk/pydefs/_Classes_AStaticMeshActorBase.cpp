#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStaticMeshActorBase(py::module &m)
{
    py::class_< AStaticMeshActorBase,  AActor   >(m, "AStaticMeshActorBase")
		.def_static("StaticClass", &AStaticMeshActorBase::StaticClass, py::return_value_policy::reference)
          ;
}