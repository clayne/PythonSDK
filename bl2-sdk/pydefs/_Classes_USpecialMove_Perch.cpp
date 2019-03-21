#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Perch()
{
    py::class_< USpecialMove_Perch,  UWillowAnimDefinition   >("USpecialMove_Perch")
        .def("StaticClass", &USpecialMove_Perch::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}