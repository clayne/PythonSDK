#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ReloadComplete()
{
    py::class_< UBehavior_ReloadComplete,  UBehaviorBase   >("UBehavior_ReloadComplete")
        .def("StaticClass", &UBehavior_ReloadComplete::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ReloadComplete::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}