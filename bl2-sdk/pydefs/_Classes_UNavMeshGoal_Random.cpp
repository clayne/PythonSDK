#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_Random()
{
    py::class_< UNavMeshGoal_Random,  UNavMeshPathGoalEvaluator   >("UNavMeshGoal_Random")
        .def_readwrite("MinDist", &UNavMeshGoal_Random::MinDist)
        .def_readwrite("BestRating", &UNavMeshGoal_Random::BestRating)
        .def_readwrite("PartialGoal", &UNavMeshGoal_Random::PartialGoal)
        .def("StaticClass", &UNavMeshGoal_Random::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UNavMeshGoal_Random::Recycle)
        .def("RecycleNative", &UNavMeshGoal_Random::RecycleNative)
        .def("FindRandom", &UNavMeshGoal_Random::FindRandom)
        .staticmethod("StaticClass")
  ;
}