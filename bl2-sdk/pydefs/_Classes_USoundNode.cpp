#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USoundNode()
{
    py::class_< USoundNode,  UObject   >("USoundNode")
        .def_readwrite("NodeUpdateHint", &USoundNode::NodeUpdateHint)
        .def_readwrite("ChildNodes", &USoundNode::ChildNodes)
        .def("StaticClass", &USoundNode::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}