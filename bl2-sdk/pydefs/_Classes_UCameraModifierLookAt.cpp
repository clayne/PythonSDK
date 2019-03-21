#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCameraModifierLookAt()
{
    py::class_< UCameraModifierLookAt,  UCameraModifier   >("UCameraModifierLookAt")
        .def_readwrite("LookAtMode", &UCameraModifierLookAt::LookAtMode)
        .def_readwrite("Duration", &UCameraModifierLookAt::Duration)
        .def_readwrite("TimeElapsed", &UCameraModifierLookAt::TimeElapsed)
        .def_readwrite("ThirdPersonPullBackDistance", &UCameraModifierLookAt::ThirdPersonPullBackDistance)
        .def_readwrite("ThirdPersonPushSideDistance", &UCameraModifierLookAt::ThirdPersonPushSideDistance)
        .def_readwrite("ThirdPersonRaiseUpDistance", &UCameraModifierLookAt::ThirdPersonRaiseUpDistance)
        .def_readwrite("Zoom", &UCameraModifierLookAt::Zoom)
        .def_readwrite("TransitionInTime", &UCameraModifierLookAt::TransitionInTime)
        .def_readwrite("TransitionOutTime", &UCameraModifierLookAt::TransitionOutTime)
        .def_readwrite("LookAtTarget", &UCameraModifierLookAt::LookAtTarget)
        .def_readwrite("LookAtBone", &UCameraModifierLookAt::LookAtBone)
        .def_readwrite("GBXCameraOwner", &UGearboxCameraModifier::GBXCameraOwner)
        .def_readwrite("DesiredPOV", &UGearboxCameraModifier::DesiredPOV)
        .def_readwrite("MasterFadeValue", &UGearboxCameraModifier::MasterFadeValue)
        .def_readwrite("FadeElapsedTime", &UGearboxCameraModifier::FadeElapsedTime)
        .def_readwrite("FadeTimeSpan", &UGearboxCameraModifier::FadeTimeSpan)
        .def_readwrite("FadeMode", &UGearboxCameraModifier::FadeMode)
        .def("StaticClass", &UCameraModifierLookAt::StaticClass, py::return_value_policy::reference)
        .def("ExecuteFadeIfNeeded", &UCameraModifierLookAt::ExecuteFadeIfNeeded)
        .def("GetDesiredLocation", &UCameraModifierLookAt::GetDesiredLocation)
        .def("ModifyCamera", &UCameraModifierLookAt::ModifyCamera)
        .def("GetBoneLocation", &UCameraModifierLookAt::GetBoneLocation)
        .def("SetLookAtBone", &UCameraModifierLookAt::SetLookAtBone)
        .def("SetLookAtTarget", &UCameraModifierLookAt::SetLookAtTarget)
        .def("SetTargetLocation", &UCameraModifierLookAt::SetTargetLocation)
        .def("SetDuration", &UCameraModifierLookAt::SetDuration)
        .def("SetTransitionTimes", &UCameraModifierLookAt::SetTransitionTimes)
        .def("SetZoomFOV", &UCameraModifierLookAt::SetZoomFOV)
        .def("SetThirdPersonDistances", &UCameraModifierLookAt::SetThirdPersonDistances)
        .def("SetLookAtMode", &UCameraModifierLookAt::SetLookAtMode)
        .def("DisableModifier", &UCameraModifierLookAt::DisableModifier)
        .def("EnableModifier", &UCameraModifierLookAt::EnableModifier)
        .def("LerpFOV", &UGearboxCameraModifier::LerpFOV)
        .def("LerpRotation", &UGearboxCameraModifier::LerpRotation)
        .def("LerpLocation", &UGearboxCameraModifier::LerpLocation)
        .def("UpdateAllLerps", &UGearboxCameraModifier::UpdateAllLerps)
        .def("UpdateMasterFadePercentage", &UGearboxCameraModifier::UpdateMasterFadePercentage)
        .def("IsFadingDownwards", &UGearboxCameraModifier::IsFadingDownwards)
        .def("IsFadingUpwards", &UGearboxCameraModifier::IsFadingUpwards)
        .def("IsFadeInProgress", &UGearboxCameraModifier::IsFadeInProgress)
        .def("StartFadeOut", &UGearboxCameraModifier::StartFadeOut)
        .def("StartFadeIn", &UGearboxCameraModifier::StartFadeIn)
        .def("SetDesiredCamera", &UGearboxCameraModifier::SetDesiredCamera)
        .def("SetGBXCameraOwner", &UGearboxCameraModifier::SetGBXCameraOwner)
        .def("AddCameraModifier", &UGearboxCameraModifier::AddCameraModifier)
        .staticmethod("StaticClass")
  ;
}