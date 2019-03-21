#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoalFilter_OutSideOfDotProductWedge()
{
    py::class_< UNavMeshGoalFilter_OutSideOfDotProductWedge,  UNavMeshGoal_Filter   >("UNavMeshGoalFilter_OutSideOfDotProductWedge")
        .def_readwrite("Location", &UNavMeshGoalFilter_OutSideOfDotProductWedge::Location)
        .def_readwrite("Rotation", &UNavMeshGoalFilter_OutSideOfDotProductWedge::Rotation)
        .def_readwrite("Epsilon", &UNavMeshGoalFilter_OutSideOfDotProductWedge::Epsilon)
        .def("StaticClass", &UNavMeshGoalFilter_OutSideOfDotProductWedge::StaticClass, py::return_value_policy::reference)
        .def("OutsideOfDotProductWedge", &UNavMeshGoalFilter_OutSideOfDotProductWedge::OutsideOfDotProductWedge)
        .staticmethod("StaticClass")
  ;
}