#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFeatherBoneBlendDefinition(py::module &m)
{
    py::class_< UFeatherBoneBlendDefinition,  UGBXDefinition   >(m, "UFeatherBoneBlendDefinition")
		.def_static("StaticClass", &UFeatherBoneBlendDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BoneBlends", &UFeatherBoneBlendDefinition::BoneBlends)
          ;
}