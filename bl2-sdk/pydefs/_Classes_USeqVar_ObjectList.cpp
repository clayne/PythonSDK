#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_ObjectList()
{
    py::class_< USeqVar_ObjectList,  USeqVar_Object   >("USeqVar_ObjectList")
        .def_readwrite("ObjList", &USeqVar_ObjectList::ObjList)
        .def("StaticClass", &USeqVar_ObjectList::StaticClass, py::return_value_policy::reference)
        .def("SetObjectValue", &USeqVar_ObjectList::SetObjectValue)
        .def("GetObjectValue", &USeqVar_ObjectList::GetObjectValue, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}