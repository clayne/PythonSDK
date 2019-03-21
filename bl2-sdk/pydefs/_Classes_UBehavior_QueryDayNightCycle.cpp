#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_QueryDayNightCycle()
{
    py::class_< UBehavior_QueryDayNightCycle,  UBehaviorBase   >("UBehavior_QueryDayNightCycle")
        .def("StaticClass", &UBehavior_QueryDayNightCycle::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_QueryDayNightCycle::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}