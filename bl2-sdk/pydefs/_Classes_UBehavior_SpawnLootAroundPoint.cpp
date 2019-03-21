#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnLootAroundPoint()
{
    py::class_< UBehavior_SpawnLootAroundPoint,  UBehaviorBase   >("UBehavior_SpawnLootAroundPoint")
        .def_readwrite("CustomLocation", &UBehavior_SpawnLootAroundPoint::CustomLocation)
        .def_readwrite("CircularScatterRadius", &UBehavior_SpawnLootAroundPoint::CircularScatterRadius)
        .def_readwrite("SpawnVelocity", &UBehavior_SpawnLootAroundPoint::SpawnVelocity)
        .def_readwrite("SpawnVelocityRelativeTo", &UBehavior_SpawnLootAroundPoint::SpawnVelocityRelativeTo)
        .def_readwrite("ItemPools", &UBehavior_SpawnLoot::ItemPools)
        .def_readwrite("Torque", &UBehavior_SpawnLoot::Torque)
        .def("StaticClass", &UBehavior_SpawnLootAroundPoint::StaticClass, py::return_value_policy::reference)
        .def("ScatterItem", &UBehavior_SpawnLootAroundPoint::ScatterItem)
        .def("PlaceSpawnedItems", &UBehavior_SpawnLootAroundPoint::PlaceSpawnedItems)
        .def("GetOrientationFromContextObject", &UBehavior_SpawnLoot::GetOrientationFromContextObject)
        .def("GetLocationFromContextObject", &UBehavior_SpawnLoot::GetLocationFromContextObject)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnLoot::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}