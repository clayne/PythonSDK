#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowVehicle(py::module &m)
{
    py::class_< UActorFactoryWillowVehicle,  UActorFactory   >(m, "UActorFactoryWillowVehicle")
		.def_static("StaticClass", &UActorFactoryWillowVehicle::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VehicleArchetype", &UActorFactoryWillowVehicle::VehicleArchetype)
          ;
}