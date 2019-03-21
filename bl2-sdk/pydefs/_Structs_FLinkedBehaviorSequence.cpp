#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLinkedBehaviorSequence()
{
    py::class_< FLinkedBehaviorSequence >("FLinkedBehaviorSequence")
        .def_readwrite("ConsumerHandle", &FLinkedBehaviorSequence::ConsumerHandle)
        .def_readwrite("SequenceState", &FLinkedBehaviorSequence::SequenceState)
  ;
}