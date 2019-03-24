#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAIBlackboardComponent(py::module &m)
{
    py::class_< UWillowAIBlackboardComponent,  UWillowAIComponent   >(m, "UWillowAIBlackboardComponent")
		.def_static("StaticClass", &UWillowAIBlackboardComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Allegiance", &UWillowAIBlackboardComponent::Allegiance)
        .def("GetAllegiance", &UWillowAIBlackboardComponent::GetAllegiance, py::return_value_policy::reference)
        .def("GetTargets", &UWillowAIBlackboardComponent::GetTargets)
          ;
}