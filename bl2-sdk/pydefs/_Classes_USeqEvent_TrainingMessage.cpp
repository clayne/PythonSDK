#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_TrainingMessage(py::module &m)
{
    py::class_< USeqEvent_TrainingMessage,  USequenceEvent   >(m, "USeqEvent_TrainingMessage")
		.def_static("StaticClass", &USeqEvent_TrainingMessage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TrainingMessageDefinition", &USeqEvent_TrainingMessage::TrainingMessageDefinition)
          ;
}