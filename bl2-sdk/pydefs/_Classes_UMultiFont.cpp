#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMultiFont(py::module &m)
{
    py::class_< UMultiFont,  UFont   >(m, "UMultiFont")
		.def_static("StaticClass", &UMultiFont::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ResolutionTestTable", &UMultiFont::ResolutionTestTable)
        .def("GetResolutionTestTableIndex", &UMultiFont::GetResolutionTestTableIndex)
          ;
}