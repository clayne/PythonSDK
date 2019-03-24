#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations(py::module &m)
{
    py::class_< UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations,  UNavMeshPathConstraint   >(m, "UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations")
		.def_static("StaticClass", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Location", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Location)
        .def_readwrite("Rotation", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Rotation)
        .def_readwrite("DistanceToCheck", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::DistanceToCheck)
        .def_readwrite("LocationsToCheck", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::LocationsToCheck)
        .def("Recycle", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle)
        .def("BiasAgainstPolysWithinDistanceOfLocations", &UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::BiasAgainstPolysWithinDistanceOfLocations)
          ;
}