#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_TriggerDialogName()
{
    py::class_< UGearboxSeqAct_TriggerDialogName,  UGearboxSeqAct_TriggerDialog   >("UGearboxSeqAct_TriggerDialogName")
        .def_readwrite("Group", &UGearboxSeqAct_TriggerDialogName::Group)
        .def("StaticClass", &UGearboxSeqAct_TriggerDialogName::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}