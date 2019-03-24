#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_AIOperation(py::module &m)
{
    py::class_< URES_AIOperation,  UActionResource   >(m, "URES_AIOperation")
		.def_static("StaticClass", &URES_AIOperation::StaticClass, py::return_value_policy::reference)
          ;
}