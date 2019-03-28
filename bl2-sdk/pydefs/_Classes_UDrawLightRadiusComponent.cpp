#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawLightRadiusComponent(py::module &m)
{
    py::class_< UDrawLightRadiusComponent,  UDrawSphereComponent   >(m, "UDrawLightRadiusComponent")
		.def_static("StaticClass", &UDrawLightRadiusComponent::StaticClass, py::return_value_policy::reference)
          ;
}