#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UnlockAvatarAward()
{
    py::class_< UBehavior_UnlockAvatarAward,  UBehaviorBase   >("UBehavior_UnlockAvatarAward")
        .def_readwrite("AvatarAward", &UBehavior_UnlockAvatarAward::AvatarAward)
        .def("StaticClass", &UBehavior_UnlockAvatarAward::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_UnlockAvatarAward::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}