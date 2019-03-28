#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_RemoveInstanceData(py::module &m)
{
    py::class_< UBehavior_RemoveInstanceData,  UBehaviorBase   >(m, "UBehavior_RemoveInstanceData")
		.def_static("StaticClass", &UBehavior_RemoveInstanceData::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InstanceData", &UBehavior_RemoveInstanceData::InstanceData)
        .def("ApplyBehaviorToContext", &UBehavior_RemoveInstanceData::ApplyBehaviorToContext)
          ;
}