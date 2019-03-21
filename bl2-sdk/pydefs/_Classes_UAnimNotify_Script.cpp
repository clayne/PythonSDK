#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_Script()
{
    py::class_< UAnimNotify_Script,  UAnimNotify   >("UAnimNotify_Script")
        .def_readwrite("NotifyName", &UAnimNotify_Script::NotifyName)
        .def_readwrite("NotifyTickName", &UAnimNotify_Script::NotifyTickName)
        .def_readwrite("NotifyEndName", &UAnimNotify_Script::NotifyEndName)
        .def("StaticClass", &UAnimNotify_Script::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}