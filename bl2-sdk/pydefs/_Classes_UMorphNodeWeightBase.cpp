#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodeWeightBase(py::module &m)
{
    py::class_< UMorphNodeWeightBase,  UMorphNodeBase   >(m, "UMorphNodeWeightBase")
		.def_static("StaticClass", &UMorphNodeWeightBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NodeConns", &UMorphNodeWeightBase::NodeConns)
          ;
}