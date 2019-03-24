#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationGFxDefinition(py::module &m)
{
    py::class_< UCustomizationGFxDefinition,  UWillowGFxThirdPersonDefinition   >(m, "UCustomizationGFxDefinition")
		.def_static("StaticClass", &UCustomizationGFxDefinition::StaticClass, py::return_value_policy::reference)
          ;
}