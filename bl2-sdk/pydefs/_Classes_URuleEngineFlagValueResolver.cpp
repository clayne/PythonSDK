#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URuleEngineFlagValueResolver(py::module &m)
{
    py::class_< URuleEngineFlagValueResolver,  UFlagValueResolver   >(m, "URuleEngineFlagValueResolver")
		.def_static("StaticClass", &URuleEngineFlagValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}