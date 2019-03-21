#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNPCLoadBalancer()
{
    py::class_< UNPCLoadBalancer,  UObject   >("UNPCLoadBalancer")
        .def_readwrite("TheList", &UNPCLoadBalancer::TheList)
        .def_readwrite("LastPathTime", &UNPCLoadBalancer::LastPathTime)
        .def_readwrite("NumberNPCsMoving", &UNPCLoadBalancer::NumberNPCsMoving)
        .def_readwrite("LastUpdateTime", &UNPCLoadBalancer::LastUpdateTime)
        .def_readwrite("MaxNumberPathing", &UNPCLoadBalancer::MaxNumberPathing)
        .def_readwrite("TimeBetweenUpdates", &UNPCLoadBalancer::TimeBetweenUpdates)
        .def("StaticClass", &UNPCLoadBalancer::StaticClass, py::return_value_policy::reference)
        .def("CheckPathing", &UNPCLoadBalancer::CheckPathing)
        .def("WantsToPath", &UNPCLoadBalancer::WantsToPath)
        .def("PathFailed", &UNPCLoadBalancer::PathFailed)
        .def("ClearList", &UNPCLoadBalancer::ClearList)
        .def("OnPerch", &UNPCLoadBalancer::OnPerch)
        .def("IsPathing", &UNPCLoadBalancer::IsPathing)
        .def("CanContinuePath", &UNPCLoadBalancer::CanContinuePath)
        .def("CanStartPath", &UNPCLoadBalancer::CanStartPath)
        .staticmethod("StaticClass")
  ;
}