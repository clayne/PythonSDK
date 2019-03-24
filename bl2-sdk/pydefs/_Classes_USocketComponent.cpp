#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USocketComponent(py::module &m)
{
    py::class_< USocketComponent,  UPrimitiveComponent   >(m, "USocketComponent")
		.def_static("StaticClass", &USocketComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SocketName", &USocketComponent::SocketName)
          ;
}