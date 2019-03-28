#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PlayAIMissionContextDialog(py::module &m)
{
    py::class_< UBehavior_PlayAIMissionContextDialog,  UBehaviorBase   >(m, "UBehavior_PlayAIMissionContextDialog")
		.def_static("StaticClass", &UBehavior_PlayAIMissionContextDialog::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PlayerWhoUsedMe", &UBehavior_PlayAIMissionContextDialog::PlayerWhoUsedMe)
        .def("ApplyBehaviorToContext", &UBehavior_PlayAIMissionContextDialog::ApplyBehaviorToContext)
          ;
}