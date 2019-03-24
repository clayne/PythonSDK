#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationData_Skin(py::module &m)
{
    py::class_< UCustomizationData_Skin,  UCustomizationData   >(m, "UCustomizationData_Skin")
		.def_static("StaticClass", &UCustomizationData_Skin::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BodyMaterial", &UCustomizationData_Skin::BodyMaterial)
        .def_readwrite("HeadMaterial", &UCustomizationData_Skin::HeadMaterial)
        .def("ApplySkinToMaterial", &UCustomizationData_Skin::ApplySkinToMaterial)
        .def("ApplyCustomizationToInstanceDataSet", &UCustomizationData_Skin::ApplyCustomizationToInstanceDataSet)
          ;
}