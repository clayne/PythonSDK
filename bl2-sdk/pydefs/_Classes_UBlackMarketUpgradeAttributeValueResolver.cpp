#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBlackMarketUpgradeAttributeValueResolver()
{
    py::class_< UBlackMarketUpgradeAttributeValueResolver,  UAttributeValueResolver   >("UBlackMarketUpgradeAttributeValueResolver")
        .def_readwrite("AssociatedBlackMarketUpgrade", &UBlackMarketUpgradeAttributeValueResolver::AssociatedBlackMarketUpgrade)
        .def("StaticClass", &UBlackMarketUpgradeAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}