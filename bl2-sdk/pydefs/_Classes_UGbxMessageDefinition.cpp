#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGbxMessageDefinition(py::module &m)
{
    py::class_< UGbxMessageDefinition,  UGBXDefinition   >(m, "UGbxMessageDefinition")
		.def_static("StaticClass", &UGbxMessageDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NameKey", &UGbxMessageDefinition::NameKey)
        .def_readwrite("Radius", &UGbxMessageDefinition::Radius)
        .def_readwrite("SecondsBetweenSends", &UGbxMessageDefinition::SecondsBetweenSends)
        .def_readwrite("MaxTimeToKeepSending", &UGbxMessageDefinition::MaxTimeToKeepSending)
        .def_readwrite("DupeCriteria", &UGbxMessageDefinition::DupeCriteria)
        .def_readwrite("MaxRecipients", &UGbxMessageDefinition::MaxRecipients)
          ;
}