#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationUsage_ExtraPlayerG(py::module &m)
{
    py::class_< UCustomizationUsage_ExtraPlayerG,  UCustomizationUsage_Player   >(m, "UCustomizationUsage_ExtraPlayerG")
		.def_static("StaticClass", &UCustomizationUsage_ExtraPlayerG::StaticClass, py::return_value_policy::reference)
          ;
}