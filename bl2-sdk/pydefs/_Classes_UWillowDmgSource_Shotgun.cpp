#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Shotgun(py::module &m)
{
    py::class_< UWillowDmgSource_Shotgun,  UWillowDmgSource_Bullet   >(m, "UWillowDmgSource_Shotgun")
		.def_static("StaticClass", &UWillowDmgSource_Shotgun::StaticClass, py::return_value_policy::reference)
          ;
}