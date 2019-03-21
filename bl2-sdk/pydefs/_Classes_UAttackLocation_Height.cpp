#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttackLocation_Height()
{
    py::class_< UAttackLocation_Height,  UAttackLocation   >("UAttackLocation_Height")
        .def_readwrite("Restriction", &UAttackLocation_Height::Restriction)
        .def_readwrite("Height", &UAttackLocation_Height::Height)
        .def("StaticClass", &UAttackLocation_Height::StaticClass, py::return_value_policy::reference)
        .def("ValidLocation", &UAttackLocation_Height::ValidLocation)
        .staticmethod("StaticClass")
  ;
}