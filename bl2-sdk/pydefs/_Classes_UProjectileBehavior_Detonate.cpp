#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_Detonate()
{
    py::class_< UProjectileBehavior_Detonate,  UProjectileBehaviorBase   >("UProjectileBehavior_Detonate")
        .def_readwrite("TargetAllegiance", &UProjectileBehavior_Detonate::TargetAllegiance)
        .def("StaticClass", &UProjectileBehavior_Detonate::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_Detonate::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}