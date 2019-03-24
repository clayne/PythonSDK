#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeSequenceBlendBase(py::module &m)
{
    py::class_< UAnimNodeSequenceBlendBase,  UAnimNodeSequence   >(m, "UAnimNodeSequenceBlendBase")
		.def_static("StaticClass", &UAnimNodeSequenceBlendBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Anims", &UAnimNodeSequenceBlendBase::Anims)
          ;
}