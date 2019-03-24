#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AISetFlight(py::module &m)
{
    py::class_< UBehavior_AISetFlight,  UBehaviorBase   >(m, "UBehavior_AISetFlight")
		.def_static("StaticClass", &UBehavior_AISetFlight::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Mode", &UBehavior_AISetFlight::Mode)
        .def("ApplyBehaviorToContext", &UBehavior_AISetFlight::ApplyBehaviorToContext)
          ;
}