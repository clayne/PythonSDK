#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControlLerpSingleBone(py::module &m)
{
    py::class_< UWillowSkelControlLerpSingleBone,  USkelControlSingleBone   >(m, "UWillowSkelControlLerpSingleBone")
		.def_static("StaticClass", &UWillowSkelControlLerpSingleBone::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIWeaponBoneController", &UWillowSkelControlLerpSingleBone::VfTable_IIWeaponBoneController)
        .def_readwrite("RotationExtent", &UWillowSkelControlLerpSingleBone::RotationExtent)
        .def_readwrite("RotationRate", &UWillowSkelControlLerpSingleBone::RotationRate)
        .def_readwrite("IncrementSize", &UWillowSkelControlLerpSingleBone::IncrementSize)
        .def_readwrite("StartRotation", &UWillowSkelControlLerpSingleBone::StartRotation)
        .def_readwrite("DestinationRotation", &UWillowSkelControlLerpSingleBone::DestinationRotation)
        .def_readwrite("RemainingRotations", &UWillowSkelControlLerpSingleBone::RemainingRotations)
        .def_readwrite("CurrentRotationRate", &UWillowSkelControlLerpSingleBone::CurrentRotationRate)
        .def("UnPause", &UWillowSkelControlLerpSingleBone::UnPause)
        .def("Pause", &UWillowSkelControlLerpSingleBone::Pause)
        .def("Stop", &UWillowSkelControlLerpSingleBone::Stop)
        .def("SpinImpulseOnFire", &UWillowSkelControlLerpSingleBone::SpinImpulseOnFire)
        .def("EndFire", &UWillowSkelControlLerpSingleBone::EndFire)
        .def("BeginFire", &UWillowSkelControlLerpSingleBone::BeginFire)
        .def("IncrementWeaponBoneControl", &UWillowSkelControlLerpSingleBone::IncrementWeaponBoneControl)
        .def("GetControlName", &UWillowSkelControlLerpSingleBone::GetControlName)
          ;
}