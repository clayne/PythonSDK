#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponBoneControl()
{
    py::class_< UBehavior_WeaponBoneControl,  UBehaviorBase   >("UBehavior_WeaponBoneControl")
        .def_readwrite("BoneControlName", &UBehavior_WeaponBoneControl::BoneControlName)
        .def_readwrite("WeaponEventType", &UBehavior_WeaponBoneControl::WeaponEventType)
        .def("StaticClass", &UBehavior_WeaponBoneControl::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_WeaponBoneControl::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}