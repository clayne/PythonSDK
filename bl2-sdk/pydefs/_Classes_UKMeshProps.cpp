#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UKMeshProps()
{
    py::class_< UKMeshProps,  UObject   >("UKMeshProps")
        .def_readwrite("COMNudge", &UKMeshProps::COMNudge)
        .def_readwrite("AggGeom", &UKMeshProps::AggGeom)
        .def("StaticClass", &UKMeshProps::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}