#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryDominantDirectionalLightMovable()
{
    py::class_< UActorFactoryDominantDirectionalLightMovable,  UObject   >("UActorFactoryDominantDirectionalLightMovable")
        .def_readwrite("GameplayActorClass", &UActorFactory::GameplayActorClass)
        .def_readwrite("MenuName", &UActorFactory::MenuName)
        .def_readwrite("MenuPriority", &UActorFactory::MenuPriority)
        .def_readwrite("AlternateMenuPriority", &UActorFactory::AlternateMenuPriority)
        .def_readwrite("NewActorClass", &UActorFactory::NewActorClass)
        .def_readwrite("SpecificGameName", &UActorFactory::SpecificGameName)
        .def_readwrite("CustomPropertyEditorDelegateClassName", &UActorFactory::CustomPropertyEditorDelegateClassName)
        .def_readwrite("CustomPropertyEditorDelegateInstance", &UActorFactory::CustomPropertyEditorDelegateInstance)
        .def_readwrite("CustomPropertyEditorDelegateTargetClass", &UActorFactory::CustomPropertyEditorDelegateTargetClass)
        .def("StaticClass", &UActorFactoryDominantDirectionalLightMovable::StaticClass, py::return_value_policy::reference)
        .def("eventPostCreateActor", &UActorFactory::eventPostCreateActor)
        .staticmethod("StaticClass")
  ;
}