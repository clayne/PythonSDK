#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ConvertToString()
{
    py::class_< USeqAct_ConvertToString,  USequenceAction   >("USeqAct_ConvertToString")
        .def_readwrite("VarSeparator", &USeqAct_ConvertToString::VarSeparator)
        .def_readwrite("NumberOfInputs", &USeqAct_ConvertToString::NumberOfInputs)
        .def("StaticClass", &USeqAct_ConvertToString::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_ConvertToString::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}