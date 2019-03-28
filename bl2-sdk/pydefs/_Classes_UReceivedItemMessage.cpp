#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UReceivedItemMessage(py::module &m)
{
    py::class_< UReceivedItemMessage,  ULocalItemMessage   >(m, "UReceivedItemMessage")
		.def_static("StaticClass", &UReceivedItemMessage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ReceivedItem", &UReceivedItemMessage::ReceivedItem)
        .def_readwrite("SelfReceivedItem", &UReceivedItemMessage::SelfReceivedItem)
        .def("GetItemString", &UReceivedItemMessage::GetItemString)
          ;
}