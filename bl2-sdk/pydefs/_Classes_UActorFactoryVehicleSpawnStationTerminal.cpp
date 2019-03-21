#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryVehicleSpawnStationTerminal()
{
    py::class_< UActorFactoryVehicleSpawnStationTerminal,  UActorFactory   >("UActorFactoryVehicleSpawnStationTerminal")
        .def_readwrite("Definition", &UActorFactoryInteractiveObject::Definition)
        .def("StaticClass", &UActorFactoryVehicleSpawnStationTerminal::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}