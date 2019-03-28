#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimDefinition(py::module &m)
{
    py::class_< UWillowAnimDefinition,  UGearboxAnimDefinition   >(m, "UWillowAnimDefinition")
		.def_static("StaticClass", &UWillowAnimDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InstanceDataName", &UWillowAnimDefinition::InstanceDataName)
        .def("GetSMNode", &UWillowAnimDefinition::GetSMNode, py::return_value_policy::reference)
        .def("eventClientFinished", &UWillowAnimDefinition::eventClientFinished)
        .def("eventClientStarted", &UWillowAnimDefinition::eventClientStarted)
        .def("eventServerFinished", &UWillowAnimDefinition::eventServerFinished)
        .def("eventServerStarted", &UWillowAnimDefinition::eventServerStarted)
        .def("eventAuthorityCanPlay", &UWillowAnimDefinition::eventAuthorityCanPlay)
          ;
}