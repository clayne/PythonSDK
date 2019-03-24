#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARadialBlurActor(py::module &m)
{
    py::class_< ARadialBlurActor,  AActor   >(m, "ARadialBlurActor")
		.def_static("StaticClass", &ARadialBlurActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RadialBlur", &ARadialBlurActor::RadialBlur)
          ;
}