#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowVehicleFactory(py::module &m)
{
    py::class_< UActorFactoryWillowVehicleFactory,  UActorFactoryWillowVehicle   >(m, "UActorFactoryWillowVehicleFactory")
		.def_static("StaticClass", &UActorFactoryWillowVehicleFactory::StaticClass, py::return_value_policy::reference)
          ;
}