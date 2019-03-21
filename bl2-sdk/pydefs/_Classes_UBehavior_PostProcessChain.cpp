#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PostProcessChain()
{
    py::class_< UBehavior_PostProcessChain,  UBehaviorBase   >("UBehavior_PostProcessChain")
        .def_readwrite("MaterialEffectModifiers", &UBehavior_PostProcessChain::MaterialEffectModifiers)
        .def_readwrite("Action", &UBehavior_PostProcessChain::Action)
        .def_readwrite("Chain", &UBehavior_PostProcessChain::Chain)
        .def_readwrite("DOFEffectModifier", &UBehavior_PostProcessChain::DOFEffectModifier)
        .def("StaticClass", &UBehavior_PostProcessChain::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_PostProcessChain::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}