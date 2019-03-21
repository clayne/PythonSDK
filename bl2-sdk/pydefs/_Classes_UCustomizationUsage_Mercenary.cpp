#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_Mercenary()
{
    py::class_< UCustomizationUsage_Mercenary,  UCustomizationUsage_Player   >("UCustomizationUsage_Mercenary")
        .def("StaticClass", &UCustomizationUsage_Mercenary::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}