#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProperty(py::module &m)
{
    py::class_< UProperty,  UField   >(m, "UProperty")
		.def_static("StaticClass", &UProperty::StaticClass, py::return_value_policy::reference)
          ;
}