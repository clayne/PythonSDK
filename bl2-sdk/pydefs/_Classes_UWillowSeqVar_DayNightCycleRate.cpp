#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqVar_DayNightCycleRate(py::module &m)
{
    py::class_< UWillowSeqVar_DayNightCycleRate,  UWillowSeqVar_DayNightCycleVariable   >(m, "UWillowSeqVar_DayNightCycleRate")
		.def_static("StaticClass", &UWillowSeqVar_DayNightCycleRate::StaticClass, py::return_value_policy::reference)
          ;
}