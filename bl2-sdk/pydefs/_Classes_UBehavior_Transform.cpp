#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Transform(py::module &m)
{
    py::class_< UBehavior_Transform,  UBehaviorBase   >(m, "UBehavior_Transform")
		.def_static("StaticClass", &UBehavior_Transform::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Transform", &UBehavior_Transform::Transform)
        .def("ApplyBehaviorToContext", &UBehavior_Transform::ApplyBehaviorToContext)
          ;
}