#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGoal_Null(py::module &m)
{
    py::class_< UGoal_Null,  UPathGoalEvaluator   >(m, "UGoal_Null")
		.def_static("StaticClass", &UGoal_Null::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UGoal_Null::Recycle)
        .def("GoUntilBust", &UGoal_Null::GoUntilBust)
          ;
}