#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AICloak()
{
    py::class_< UBehavior_AICloak,  UBehaviorBase   >("UBehavior_AICloak")
        .def_readwrite("NewCloakBehavior", &UBehavior_AICloak::NewCloakBehavior)
        .def("StaticClass", &UBehavior_AICloak::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AICloak::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}