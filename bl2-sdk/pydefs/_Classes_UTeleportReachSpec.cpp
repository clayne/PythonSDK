#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTeleportReachSpec(py::module &m)
{
    py::class_< UTeleportReachSpec,  UReachSpec   >(m, "UTeleportReachSpec")
		.def_static("StaticClass", &UTeleportReachSpec::StaticClass, py::return_value_policy::reference)
          ;
}