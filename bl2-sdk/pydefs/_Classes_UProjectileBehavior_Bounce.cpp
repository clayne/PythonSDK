#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_Bounce()
{
    py::class_< UProjectileBehavior_Bounce,  UProjectileBehaviorBase   >("UProjectileBehavior_Bounce")
        .def_readwrite("BounceAkEvent", &UProjectileBehavior_Bounce::BounceAkEvent)
        .def_readwrite("ElasticityScaleFormula", &UProjectileBehavior_Bounce::ElasticityScaleFormula)
        .def_readwrite("HitNormal", &UProjectileBehavior_Bounce::HitNormal)
        .def_readwrite("ElasticityScale", &UProjectileBehavior_Bounce::ElasticityScale)
        .def("StaticClass", &UProjectileBehavior_Bounce::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_Bounce::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}