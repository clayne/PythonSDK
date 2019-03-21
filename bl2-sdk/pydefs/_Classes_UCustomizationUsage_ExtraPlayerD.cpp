#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerD()
{
    py::class_< UCustomizationUsage_ExtraPlayerD,  UCustomizationUsage_Player   >("UCustomizationUsage_ExtraPlayerD")
        .def("StaticClass", &UCustomizationUsage_ExtraPlayerD::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}