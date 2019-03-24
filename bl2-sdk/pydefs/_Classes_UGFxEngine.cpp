#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxEngine(py::module &m)
{
    py::class_< UGFxEngine,  UObject   >(m, "UGFxEngine")
		.def_static("StaticClass", &UGFxEngine::StaticClass, py::return_value_policy::reference)
        .def_readwrite("GCReferences", &UGFxEngine::GCReferences)
        .def_readwrite("RefCount", &UGFxEngine::RefCount)
          ;
}