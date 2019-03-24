#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackBehaviors(py::module &m)
{
    py::class_< UInterpTrackBehaviors,  UInterpTrack   >(m, "UInterpTrackBehaviors")
		.def_static("StaticClass", &UInterpTrackBehaviors::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIConstructObject", &UInterpTrackBehaviors::VfTable_IIConstructObject)
        .def_readwrite("VfTable_IIBehaviorProvider", &UInterpTrackBehaviors::VfTable_IIBehaviorProvider)
        .def_readwrite("LastAddedKeyFrameName", &UInterpTrackBehaviors::LastAddedKeyFrameName)
        .def_readwrite("BehaviorEvents", &UInterpTrackBehaviors::BehaviorEvents)
        .def_readwrite("BehaviorProviderDefinition", &UInterpTrackBehaviors::BehaviorProviderDefinition)
        .def("BehaviorKeyFrameEvent", &UInterpTrackBehaviors::BehaviorKeyFrameEvent)
        .def("SetBehaviorProviderDefinition", &UInterpTrackBehaviors::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UInterpTrackBehaviors::GetBehaviorProviderDefinition, py::return_value_policy::reference)
          ;
}