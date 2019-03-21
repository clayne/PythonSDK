#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowInventoryGFxDefinition()
{
    py::class_< UWillowInventoryGFxDefinition,  UWillowGFxThirdPersonDefinition   >("UWillowInventoryGFxDefinition")
        .def_readwrite("TF_Standard", &UWillowInventoryGFxDefinition::TF_Standard)
        .def_readwrite("TF_Trash", &UWillowInventoryGFxDefinition::TF_Trash)
        .def_readwrite("TF_Favorite", &UWillowInventoryGFxDefinition::TF_Favorite)
        .def_readwrite("TweenTime", &UWillowInventoryGFxDefinition::TweenTime)
        .def_readwrite("Panels", &UWillowInventoryGFxDefinition::Panels)
        .def_readwrite("Cards", &UWillowInventoryGFxDefinition::Cards)
        .def_readwrite("ExternalTextureMap", &UWillowInventoryGFxDefinition::ExternalTextureMap)
        .def_readwrite("CardExternalTextureMap", &UWillowInventoryGFxDefinition::CardExternalTextureMap)
        .def("StaticClass", &UWillowInventoryGFxDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}