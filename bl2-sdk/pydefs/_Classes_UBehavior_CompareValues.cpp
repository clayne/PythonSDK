#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CompareValues()
{
    py::class_< UBehavior_CompareValues,  UBehaviorBase   >("UBehavior_CompareValues")
        .def_readwrite("ValueA", &UBehavior_CompareValues::ValueA)
        .def_readwrite("ContextB", &UBehavior_CompareValues::ContextB)
        .def_readwrite("ValueB", &UBehavior_CompareValues::ValueB)
        .def("StaticClass", &UBehavior_CompareValues::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_CompareValues::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}