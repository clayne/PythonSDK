#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterface_NavMeshPathObject(py::module &m)
{
    py::class_< UInterface_NavMeshPathObject,  UInterface   >(m, "UInterface_NavMeshPathObject")
		.def_static("StaticClass", &UInterface_NavMeshPathObject::StaticClass, py::return_value_policy::reference)
          ;
}