#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ShowPullThePinNotification(py::module &m)
{
    py::class_< UBehavior_ShowPullThePinNotification,  UBehaviorBase   >(m, "UBehavior_ShowPullThePinNotification")
		.def_static("StaticClass", &UBehavior_ShowPullThePinNotification::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ExternalClip", &UBehavior_ShowPullThePinNotification::ExternalClip)
        .def("ApplyBehaviorToContext", &UBehavior_ShowPullThePinNotification::ApplyBehaviorToContext)
        .def("ResolveController", &UBehavior_ShowPullThePinNotification::ResolveController, py::return_value_policy::reference)
          ;
}