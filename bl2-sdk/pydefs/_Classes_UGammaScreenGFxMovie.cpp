#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGammaScreenGFxMovie(py::module &m)
{
    py::class_< UGammaScreenGFxMovie,  UWillowGFxMovie3D   >(m, "UGammaScreenGFxMovie")
		.def_static("StaticClass", &UGammaScreenGFxMovie::StaticClass, py::return_value_policy::reference)
          ;
}