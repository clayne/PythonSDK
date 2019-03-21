#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_DialogEvent()
{
    py::class_< UAnimNotify_DialogEvent,  UAnimNotify   >("UAnimNotify_DialogEvent")
        .def_readwrite("EventTag", &UAnimNotify_DialogEvent::EventTag)
        .def_readwrite("Group", &UAnimNotify_DialogEvent::Group)
        .def("StaticClass", &UAnimNotify_DialogEvent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}