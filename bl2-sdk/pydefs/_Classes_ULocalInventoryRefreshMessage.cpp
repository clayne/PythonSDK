#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalInventoryRefreshMessage(py::module &m)
{
    py::class_< ULocalInventoryRefreshMessage,  UWillowLocalMessage   >(m, "ULocalInventoryRefreshMessage")
		.def_static("StaticClass", &ULocalInventoryRefreshMessage::StaticClass, py::return_value_policy::reference)
        .def("ClientInventoryRefresh", &ULocalInventoryRefreshMessage::ClientInventoryRefresh)
          ;
}