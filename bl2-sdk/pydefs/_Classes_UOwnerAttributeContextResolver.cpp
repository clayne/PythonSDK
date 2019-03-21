#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOwnerAttributeContextResolver()
{
    py::class_< UOwnerAttributeContextResolver,  UAttributeContextResolver   >("UOwnerAttributeContextResolver")
        .def("StaticClass", &UOwnerAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UOwnerAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}