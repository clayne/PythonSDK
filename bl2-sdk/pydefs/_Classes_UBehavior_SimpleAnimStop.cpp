#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SimpleAnimStop()
{
    py::class_< UBehavior_SimpleAnimStop,  UBehaviorBase   >("UBehavior_SimpleAnimStop")
        .def_readwrite("Tree", &UBehavior_SimpleAnimStop::Tree)
        .def_readwrite("AnimName", &UBehavior_SimpleAnimStop::AnimName)
        .def("StaticClass", &UBehavior_SimpleAnimStop::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SimpleAnimStop::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}