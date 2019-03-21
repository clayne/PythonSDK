#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SimpleMath()
{
    py::class_< UBehavior_SimpleMath,  UBehaviorBase   >("UBehavior_SimpleMath")
        .def_readwrite("A", &UBehavior_SimpleMath::A)
        .def_readwrite("B", &UBehavior_SimpleMath::B)
        .def_readwrite("Operation", &UBehavior_SimpleMath::Operation)
        .def("StaticClass", &UBehavior_SimpleMath::StaticClass, py::return_value_policy::reference)
        .def("eventPublishBehaviorOutput", &UBehavior_SimpleMath::eventPublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_SimpleMath::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}