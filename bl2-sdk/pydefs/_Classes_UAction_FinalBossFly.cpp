#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_FinalBossFly()
{
    py::class_< UAction_FinalBossFly,  UAction_FollowPath   >("UAction_FinalBossFly")
        .def_readwrite("LandPerchID", &UAction_FinalBossFly::LandPerchID)
        .def_readwrite("FlightSplineName", &UAction_FinalBossFly::FlightSplineName)
        .def_readwrite("FlightSplineReverseName", &UAction_FinalBossFly::FlightSplineReverseName)
        .def_readwrite("FlightAnimNodeRName", &UAction_FinalBossFly::FlightAnimNodeRName)
        .def_readwrite("FlightAnimNodeLName", &UAction_FinalBossFly::FlightAnimNodeLName)
        .def_readwrite("FlyToPerch", &UAction_FinalBossFly::FlyToPerch)
        .def_readwrite("FlightSpline", &UAction_FinalBossFly::FlightSpline)
        .def_readwrite("MyAnimSeqR", &UAction_FinalBossFly::MyAnimSeqR)
        .def_readwrite("MyAnimSeqL", &UAction_FinalBossFly::MyAnimSeqL)
        .def("StaticClass", &UAction_FinalBossFly::StaticClass, py::return_value_policy::reference)
        .def("eventStop", &UAction_FinalBossFly::eventStop)
        .def("eventStart", &UAction_FinalBossFly::eventStart)
        .def("eventCanRun", &UAction_FinalBossFly::eventCanRun)
        .staticmethod("StaticClass")
  ;
}