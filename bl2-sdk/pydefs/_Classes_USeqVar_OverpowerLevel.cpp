#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqVar_OverpowerLevel(py::module &m)
{
    py::class_< USeqVar_OverpowerLevel,  USeqVar_Int   >(m, "USeqVar_OverpowerLevel")
		.def_static("StaticClass", &USeqVar_OverpowerLevel::StaticClass, py::return_value_policy::reference)
          ;
}