#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMechromancerInputContextSelector(py::module &m)
{
    py::class_< UMechromancerInputContextSelector,  UDefaultInputContextSelector   >(m, "UMechromancerInputContextSelector")
		.def_static("StaticClass", &UMechromancerInputContextSelector::StaticClass, py::return_value_policy::reference)
        .def("SelectContext", &UMechromancerInputContextSelector::SelectContext)
          ;
}