#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARB_ConstraintActorSpawnable(py::module &m)
{
    py::class_< ARB_ConstraintActorSpawnable,  ARB_ConstraintActor   >(m, "ARB_ConstraintActorSpawnable")
		.def_static("StaticClass", &ARB_ConstraintActorSpawnable::StaticClass, py::return_value_policy::reference)
          ;
}