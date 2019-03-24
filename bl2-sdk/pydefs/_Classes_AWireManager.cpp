#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWireManager(py::module &m)
{
    py::class_< AWireManager,  AActor   >(m, "AWireManager")
		.def_static("StaticClass", &AWireManager::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DefaultMaterial", &AWireManager::DefaultMaterial)
          ;
}