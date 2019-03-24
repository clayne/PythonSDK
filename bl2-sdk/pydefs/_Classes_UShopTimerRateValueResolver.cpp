#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShopTimerRateValueResolver(py::module &m)
{
    py::class_< UShopTimerRateValueResolver,  UAttributeValueResolver   >(m, "UShopTimerRateValueResolver")
		.def_static("StaticClass", &UShopTimerRateValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}