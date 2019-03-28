#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpecialMoveStop(py::module &m)
{
    py::class_< UBehavior_SpecialMoveStop,  UBehaviorBase   >(m, "UBehavior_SpecialMoveStop")
		.def_static("StaticClass", &UBehavior_SpecialMoveStop::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SpecificMove", &UBehavior_SpecialMoveStop::SpecificMove)
        .def("ApplyBehaviorToContext", &UBehavior_SpecialMoveStop::ApplyBehaviorToContext)
          ;
}