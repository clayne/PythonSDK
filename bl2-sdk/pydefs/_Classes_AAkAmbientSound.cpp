#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AAkAmbientSound(py::module &m)
{
    py::class_< AAkAmbientSound,  AKeypoint   >(m, "AAkAmbientSound")
		.def_static("StaticClass", &AAkAmbientSound::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PlayEvent", &AAkAmbientSound::PlayEvent)
        .def_readwrite("Group", &AAkAmbientSound::Group)
          ;
}