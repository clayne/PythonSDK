#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ToggleCinematicModeAffectsAll(py::module &m)
{
    py::class_< UWillowSeqAct_ToggleCinematicModeAffectsAll,  USequenceAction   >(m, "UWillowSeqAct_ToggleCinematicModeAffectsAll")
		.def_static("StaticClass", &UWillowSeqAct_ToggleCinematicModeAffectsAll::StaticClass, py::return_value_policy::reference)
          ;
}