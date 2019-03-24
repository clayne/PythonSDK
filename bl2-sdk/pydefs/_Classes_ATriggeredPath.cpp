#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATriggeredPath(py::module &m)
{
    py::class_< ATriggeredPath,  ANavigationPoint   >(m, "ATriggeredPath")
		.def_static("StaticClass", &ATriggeredPath::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MyTrigger", &ATriggeredPath::MyTrigger)
        .def("eventSuggestMovePreparation", &ATriggeredPath::eventSuggestMovePreparation)
        .def("eventSpecialHandling", &ATriggeredPath::eventSpecialHandling, py::return_value_policy::reference)
        .def("OnToggle", &ATriggeredPath::OnToggle)
          ;
}