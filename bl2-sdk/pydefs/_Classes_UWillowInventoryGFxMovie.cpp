#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowInventoryGFxMovie(py::module &m)
{
    py::class_< UWillowInventoryGFxMovie,  UWillowGFxMovie3D   >(m, "UWillowInventoryGFxMovie")
		.def_static("StaticClass", &UWillowInventoryGFxMovie::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RTM", &UWillowInventoryGFxMovie::RTM)
        .def_readwrite("CardContents", &UWillowInventoryGFxMovie::CardContents)
        .def_readwrite("FrozenThing", &UWillowInventoryGFxMovie::FrozenThing)
        .def_readwrite("FrozenThingType", &UWillowInventoryGFxMovie::FrozenThingType)
        .def_readwrite("UsedInvTypes", &UWillowInventoryGFxMovie::UsedInvTypes)
        .def_readwrite("MyInventoryDef", &UWillowInventoryGFxMovie::MyInventoryDef)
        .def_readwrite("WInvMgr", &UWillowInventoryGFxMovie::WInvMgr)
        .def_readwrite("MyThirdPersonDefinition", &UWillowGFxThirdPersonMovie::MyThirdPersonDefinition)
        .def_readwrite("CameraYaw", &UWillowGFxThirdPersonMovie::CameraYaw)
        .def_readwrite("CameraPitch", &UWillowGFxThirdPersonMovie::CameraPitch)
        .def_readwrite("CameraRotation", &UWillowGFxThirdPersonMovie::CameraRotation)
        .def_readwrite("CameraLocation", &UWillowGFxThirdPersonMovie::CameraLocation)
        .def_readwrite("CameraSplitOffset", &UWillowGFxThirdPersonMovie::CameraSplitOffset)
        .def_readwrite("CameraSplitSpread", &UWillowGFxThirdPersonMovie::CameraSplitSpread)
        .def_readwrite("CameraFocusBoneName", &UWillowGFxThirdPersonMovie::CameraFocusBoneName)
        .def_readwrite("CameraFocusYaw", &UWillowGFxThirdPersonMovie::CameraFocusYaw)
        .def_readwrite("LastCameraPitchTime", &UWillowGFxThirdPersonMovie::LastCameraPitchTime)
        .def_readwrite("MenuYaw", &UWillowGFxThirdPersonMovie::MenuYaw)
        .def_readwrite("MenuPitch", &UWillowGFxThirdPersonMovie::MenuPitch)
        .def_readwrite("MenuRotation", &UWillowGFxThirdPersonMovie::MenuRotation)
        .def_readwrite("MenuLocation", &UWillowGFxThirdPersonMovie::MenuLocation)
        .def_readwrite("CloseTime", &UWillowGFxThirdPersonMovie::CloseTime)
        .def_readwrite("CloseCamLoc", &UWillowGFxThirdPersonMovie::CloseCamLoc)
        .def_readwrite("CloseCamRot", &UWillowGFxThirdPersonMovie::CloseCamRot)
        .def_readwrite("MenuSpringYaw", &UWillowGFxThirdPersonMovie::MenuSpringYaw)
        .def_readwrite("MenuSpringPitch", &UWillowGFxThirdPersonMovie::MenuSpringPitch)
        .def_readwrite("MenuSpringRotation", &UWillowGFxThirdPersonMovie::MenuSpringRotation)
        .def_readwrite("DragMouseLoc_Camera", &UWillowGFxThirdPersonMovie::DragMouseLoc_Camera)
        .def_readwrite("MouseDragScale_Camera", &UWillowGFxThirdPersonMovie::MouseDragScale_Camera)
        .def_readwrite("MouseDrag_Region_Left", &UWillowGFxThirdPersonMovie::MouseDrag_Region_Left)
        .def_readwrite("MouseDrag_Region_Right", &UWillowGFxThirdPersonMovie::MouseDrag_Region_Right)
        .def_readwrite("MouseDrag_Region_Top", &UWillowGFxThirdPersonMovie::MouseDrag_Region_Top)
        .def_readwrite("MouseDrag_Region_Bottom", &UWillowGFxThirdPersonMovie::MouseDrag_Region_Bottom)
        .def("GetPlayerThings", &UWillowInventoryGFxMovie::GetPlayerThings)
        .def("GetTotalCredits", &UWillowInventoryGFxMovie::GetTotalCredits)
        .def("EvaluateCurrentSelection", &UWillowInventoryGFxMovie::EvaluateCurrentSelection)
        .def("OnPanelRollOver", &UWillowInventoryGFxMovie::OnPanelRollOver)
        .def("GetEquippedAnalogue", &UWillowInventoryGFxMovie::GetEquippedAnalogue, py::return_value_policy::reference)
        .def("PressedHotkeyNumber", &UWillowInventoryGFxMovie::PressedHotkeyNumber)
        .def("OnInventoryPanelSetActive", &UWillowInventoryGFxMovie::OnInventoryPanelSetActive)
        .def("GetNextSortConfiguration", &UWillowInventoryGFxMovie::GetNextSortConfiguration)
        .def("GetPlayerPanelItems", &UWillowInventoryGFxMovie::GetPlayerPanelItems)
        .def("FillOutListOfPlayerThings", &UWillowInventoryGFxMovie::FillOutListOfPlayerThings)
        .def("HandleInputKey", &UWillowInventoryGFxMovie::HandleInputKey)
        .def("eventOnClose", &UWillowInventoryGFxMovie::eventOnClose)
        .def("eventStart", &UWillowInventoryGFxMovie::eventStart)
        .def("HandleMouseDrag_Camera", &UWillowGFxThirdPersonMovie::HandleMouseDrag_Camera)
        .def("Get3DRotationOffset", &UWillowGFxThirdPersonMovie::Get3DRotationOffset)
        .def("Get3DLocationOffset", &UWillowGFxThirdPersonMovie::Get3DLocationOffset)
        .def("ToggleControlMode", &UWillowGFxThirdPersonMovie::ToggleControlMode)
        .def("EnableControl", &UWillowGFxThirdPersonMovie::EnableControl)
        .def("SaveTabView", &UWillowGFxThirdPersonMovie::SaveTabView)
        .def("StopMouseDrag", &UWillowGFxThirdPersonMovie::StopMouseDrag)
        .def("TryStartMouseDrag", &UWillowGFxThirdPersonMovie::TryStartMouseDrag)
        .def("HandleKeyDefaults", &UWillowGFxThirdPersonMovie::HandleKeyDefaults)
        .def("HandleInputAxisPlayerCameraRotation", &UWillowGFxThirdPersonMovie::HandleInputAxisPlayerCameraRotation)
        .def("HandleCameraInputAxis", &UWillowGFxThirdPersonMovie::HandleCameraInputAxis)
        .def("UpdateDesiredCameraPosition", &UWillowGFxThirdPersonMovie::UpdateDesiredCameraPosition)
        .def("eventFinishClosing", &UWillowGFxThirdPersonMovie::eventFinishClosing)
        .def("eventBeginClosing", &UWillowGFxThirdPersonMovie::eventBeginClosing)
        .def("eventGetCurrentTab", &UWillowGFxThirdPersonMovie::eventGetCurrentTab)
        .def("AmITheStatusMenu", &UWillowGFxThirdPersonMovie::AmITheStatusMenu)
          ;
}