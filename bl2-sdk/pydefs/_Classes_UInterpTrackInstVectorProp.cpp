#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstVectorProp()
{
    py::class_< UInterpTrackInstVectorProp,  UInterpTrackInstProperty   >("UInterpTrackInstVectorProp")
        .def_readwrite("VectorProp", &UInterpTrackInstVectorProp::VectorProp)
        .def_readwrite("ResetVector", &UInterpTrackInstVectorProp::ResetVector)
        .def("StaticClass", &UInterpTrackInstVectorProp::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}