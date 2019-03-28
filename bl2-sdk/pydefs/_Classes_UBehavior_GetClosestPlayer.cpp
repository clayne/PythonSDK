#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GetClosestPlayer(py::module &m)
{
    py::class_< UBehavior_GetClosestPlayer,  UBehaviorBase   >(m, "UBehavior_GetClosestPlayer")
		.def_static("StaticClass", &UBehavior_GetClosestPlayer::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_GetClosestPlayer::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetClosestPlayer::ApplyBehaviorToContext)
          ;
}