#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPursuitGridDefinition(py::module &m)
{
    py::class_< UWillowPursuitGridDefinition,  UGBXDefinition   >(m, "UWillowPursuitGridDefinition")
		.def_static("StaticClass", &UWillowPursuitGridDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PursuitNodes", &UWillowPursuitGridDefinition::PursuitNodes)
        .def_readwrite("GridName", &UWillowPursuitGridDefinition::GridName)
          ;
}