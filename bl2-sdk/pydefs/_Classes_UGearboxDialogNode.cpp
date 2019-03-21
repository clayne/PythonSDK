#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogNode()
{
    py::class_< UGearboxDialogNode,  UObject   >("UGearboxDialogNode")
        .def_readwrite("NodeID", &UGearboxDialogNode::NodeID)
        .def_readwrite("Type", &UGearboxEditorNode::Type)
        .def_readwrite("OutputLinks", &UGearboxEditorNode::OutputLinks)
        .def_readwrite("InputLinks", &UGearboxEditorNode::InputLinks)
        .def_readwrite("VariableLinks", &UGearboxEditorNode::VariableLinks)
        .def_readwrite("SliderPosition", &UGearboxEditorNode::SliderPosition)
        .def("StaticClass", &UGearboxDialogNode::StaticClass, py::return_value_policy::reference)
        .def("ActivateOutput", &UGearboxDialogNode::ActivateOutput)
        .def("IsChild", &UGearboxEditorNode::IsChild)
        .staticmethod("StaticClass")
  ;
}