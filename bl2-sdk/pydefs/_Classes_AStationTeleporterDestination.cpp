#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStationTeleporterDestination()
{
    py::class_< AStationTeleporterDestination,  ATeleporterDestination   >("AStationTeleporterDestination")
        .def_readwrite("ExitPointRadius", &AStationTeleporterDestination::ExitPointRadius)
        .def_readwrite("ExitPointHeight", &AStationTeleporterDestination::ExitPointHeight)
        .def("StaticClass", &AStationTeleporterDestination::StaticClass, py::return_value_policy::reference)
        .def("UpdateExitPointHeights", &AStationTeleporterDestination::UpdateExitPointHeights)
        .def("UpdateExitPointLocations", &AStationTeleporterDestination::UpdateExitPointLocations)
        .def("eventDestroyed", &AStationTeleporterDestination::eventDestroyed)
        .staticmethod("StaticClass")
  ;
}