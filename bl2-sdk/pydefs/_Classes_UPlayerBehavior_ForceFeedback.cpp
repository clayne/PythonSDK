#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ForceFeedback(py::module &m)
{
    py::class_< UPlayerBehavior_ForceFeedback,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_ForceFeedback")
		.def_static("StaticClass", &UPlayerBehavior_ForceFeedback::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FFWaveform", &UPlayerBehavior_ForceFeedback::FFWaveform)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ForceFeedback::ApplyBehaviorToContext)
          ;
}