#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_SeeDeath(py::module &m)
{
    py::class_< USeqEvent_SeeDeath,  USequenceEvent   >(m, "USeqEvent_SeeDeath")
		.def_static("StaticClass", &USeqEvent_SeeDeath::StaticClass, py::return_value_policy::reference)
          ;
}