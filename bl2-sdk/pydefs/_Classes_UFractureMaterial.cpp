#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFractureMaterial()
{
    py::class_< UFractureMaterial,  UObject   >("UFractureMaterial")
        .def_readwrite("FractureEffect", &UFractureMaterial::FractureEffect)
        .def_readwrite("FractureSound", &UFractureMaterial::FractureSound)
        .def("StaticClass", &UFractureMaterial::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}