#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_IntMath()
{
    py::class_< UBehavior_IntMath,  UBehaviorBase   >("UBehavior_IntMath")
        .def_readwrite("A", &UBehavior_IntMath::A)
        .def_readwrite("B", &UBehavior_IntMath::B)
        .def_readwrite("Operation", &UBehavior_IntMath::Operation)
        .def("StaticClass", &UBehavior_IntMath::StaticClass, py::return_value_policy::reference)
        .def("eventPublishBehaviorOutput", &UBehavior_IntMath::eventPublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_IntMath::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}