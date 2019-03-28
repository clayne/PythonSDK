#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFrontendMenuGFxObject(py::module &m)
{
    py::class_< UFrontendMenuGFxObject,  UGFxObject   >(m, "UFrontendMenuGFxObject")
		.def_static("StaticClass", &UFrontendMenuGFxObject::StaticClass, py::return_value_policy::reference)
        .def("FadeLobbyDeco", &UFrontendMenuGFxObject::FadeLobbyDeco)
        .def("SetDecoVisible", &UFrontendMenuGFxObject::SetDecoVisible)
        .def("ApplyPriorityVisibilityEffect", &UFrontendMenuGFxObject::ApplyPriorityVisibilityEffect)
        .def("ApplyPriorityBlurEffect", &UFrontendMenuGFxObject::ApplyPriorityBlurEffect)
          ;
}