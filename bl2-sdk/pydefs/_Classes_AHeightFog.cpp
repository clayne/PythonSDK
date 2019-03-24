#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AHeightFog(py::module &m)
{
    py::class_< AHeightFog,  AInfo   >(m, "AHeightFog")
		.def_static("StaticClass", &AHeightFog::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Component", &AHeightFog::Component)
        .def("OnToggle", &AHeightFog::OnToggle)
        .def("eventReplicatedEvent", &AHeightFog::eventReplicatedEvent)
        .def("eventPostBeginPlay", &AHeightFog::eventPostBeginPlay)
          ;
}