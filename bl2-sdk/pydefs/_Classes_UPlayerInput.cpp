#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerInput(py::module &m)
{
    py::class_< UPlayerInput,  UObject   >(m, "UPlayerInput")
		.def_static("StaticClass", &UPlayerInput::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LastAxisKeyName", &UPlayerInput::LastAxisKeyName)
        .def_readwrite("DoubleClickTimer", &UPlayerInput::DoubleClickTimer)
        .def_readwrite("DoubleClickTime", &UPlayerInput::DoubleClickTime)
        .def_readwrite("MouseSensitivity", &UPlayerInput::MouseSensitivity)
        .def_readwrite("aBaseX", &UPlayerInput::aBaseX)
        .def_readwrite("aBaseY", &UPlayerInput::aBaseY)
        .def_readwrite("aBaseZ", &UPlayerInput::aBaseZ)
        .def_readwrite("aMouseX", &UPlayerInput::aMouseX)
        .def_readwrite("aMouseY", &UPlayerInput::aMouseY)
        .def_readwrite("aForward", &UPlayerInput::aForward)
        .def_readwrite("aTurn", &UPlayerInput::aTurn)
        .def_readwrite("aStrafe", &UPlayerInput::aStrafe)
        .def_readwrite("aUp", &UPlayerInput::aUp)
        .def_readwrite("aLookUp", &UPlayerInput::aLookUp)
        .def_readwrite("aRightAnalogTrigger", &UPlayerInput::aRightAnalogTrigger)
        .def_readwrite("aLeftAnalogTrigger", &UPlayerInput::aLeftAnalogTrigger)
        .def_readwrite("aPS3AccelX", &UPlayerInput::aPS3AccelX)
        .def_readwrite("aPS3AccelY", &UPlayerInput::aPS3AccelY)
        .def_readwrite("aPS3AccelZ", &UPlayerInput::aPS3AccelZ)
        .def_readwrite("aPS3Gyro", &UPlayerInput::aPS3Gyro)
        .def_readwrite("RawJoyUp", &UPlayerInput::RawJoyUp)
        .def_readwrite("RawJoyRight", &UPlayerInput::RawJoyRight)
        .def_readwrite("RawJoyLookRight", &UPlayerInput::RawJoyLookRight)
        .def_readwrite("RawJoyLookUp", &UPlayerInput::RawJoyLookUp)
        .def_readwrite("MoveForwardSpeed", &UPlayerInput::MoveForwardSpeed)
        .def_readwrite("MoveStrafeSpeed", &UPlayerInput::MoveStrafeSpeed)
        .def_readwrite("LookRightScale", &UPlayerInput::LookRightScale)
        .def_readwrite("LookUpScale", &UPlayerInput::LookUpScale)
        .def_readwrite("bStrafe", &UPlayerInput::bStrafe)
        .def_readwrite("bXAxis", &UPlayerInput::bXAxis)
        .def_readwrite("bYAxis", &UPlayerInput::bYAxis)
        .def_readwrite("MouseSamples", &UPlayerInput::MouseSamples)
        .def_readwrite("MouseSamplingTotal", &UPlayerInput::MouseSamplingTotal)
        .def_readwrite("AutoUnlockTurnTime", &UPlayerInput::AutoUnlockTurnTime)
        .def_readwrite("Bindings", &UInput::Bindings)
        .def_readwrite("PressedKeys", &UInput::PressedKeys)
        .def_readwrite("CurrentEvent", &UInput::CurrentEvent)
        .def_readwrite("CurrentDelta", &UInput::CurrentDelta)
        .def_readwrite("CurrentDeltaTime", &UInput::CurrentDeltaTime)
        .def_readwrite("AxisArray", &UInput::AxisArray)
        .def_readwrite("BadCapsLocContexts", &UUIRoot::BadCapsLocContexts)
        .def("PreClientTravel", &UPlayerInput::PreClientTravel)
        .def("ClientInitInputSystem", &UPlayerInput::ClientInitInputSystem)
        .def("InitInputSystem", &UPlayerInput::InitInputSystem)
        .def("SmoothMouse", &UPlayerInput::SmoothMouse)
        .def("ClearSmoothing", &UPlayerInput::ClearSmoothing)
        .def("SmartJump", &UPlayerInput::SmartJump)
        .def("Jump", &UPlayerInput::Jump)
        .def("ProcessInputMatching", &UPlayerInput::ProcessInputMatching)
        .def("CheckForDoubleClickMove", &UPlayerInput::CheckForDoubleClickMove)
        .def("CatchDoubleClickInput", &UPlayerInput::CatchDoubleClickInput)
        .def("eventPlayerInput", &UPlayerInput::eventPlayerInput)
        .def("PIProcessInput", &UPlayerInput::PIProcessInput)
        .def("PIPostAdjustInput", &UPlayerInput::PIPostAdjustInput)
        .def("AdjustMouseSensitivity", &UPlayerInput::AdjustMouseSensitivity)
        .def("PostProcessInput", &UPlayerInput::PostProcessInput)
        .def("PreProcessInput", &UPlayerInput::PreProcessInput)
        .def("DrawHUD", &UPlayerInput::DrawHUD)
        .def("SetSensitivity", &UPlayerInput::SetSensitivity)
        .def("InvertTurn", &UPlayerInput::InvertTurn)
        .def("InvertGamepad", &UPlayerInput::InvertGamepad)
        .def("InvertMouse", &UPlayerInput::InvertMouse)
        .def("SetBind", &UInput::SetBind)
        .def("GetBind", &UInput::GetBind)
        .def("ResetInput", &UInput::ResetInput)
        .def("NotifyPlayerRemoved", &UInteraction::NotifyPlayerRemoved)
        .def("NotifyPlayerAdded", &UInteraction::NotifyPlayerAdded)
        .def("NotifyGameSessionEnded", &UInteraction::NotifyGameSessionEnded)
        .def("Initialized", &UInteraction::Initialized)
        .def("Oninitialize", &UInteraction::Oninitialize)
        .def("Init", &UInteraction::Init)
        .def("eventPostRender", &UInteraction::eventPostRender)
        .def("eventTick", &UInteraction::eventTick)
        .def("OnReceivedNativeInputChar", &UInteraction::OnReceivedNativeInputChar)
        .def("OnReceivedNativeInputAxis", &UInteraction::OnReceivedNativeInputAxis)
        .def("OnReceivedNativeInputKey", &UInteraction::OnReceivedNativeInputKey)
        .def("SafeCaps", &UUIRoot::SafeCaps)
        .def("GetOnlinePlayerInterfaceEx", &UUIRoot::GetOnlinePlayerInterfaceEx, py::return_value_policy::reference)
        .def("GetOnlinePlayerInterface", &UUIRoot::GetOnlinePlayerInterface, py::return_value_policy::reference)
        .def("GetOnlineGameInterface", &UUIRoot::GetOnlineGameInterface, py::return_value_policy::reference)
        .def("GetDataStoreStringValue", &UUIRoot::GetDataStoreStringValue)
        .def("GetDataStoreFieldValue", &UUIRoot::GetDataStoreFieldValue)
        .def("SetDataStoreStringValue", &UUIRoot::SetDataStoreStringValue)
        .def("SetDataStoreFieldValue", &UUIRoot::SetDataStoreFieldValue)
        .def("StaticResolveDataStore", &UUIRoot::StaticResolveDataStore, py::return_value_policy::reference)
        .def("GetSceneClient", &UUIRoot::GetSceneClient, py::return_value_policy::reference)
        .def("GetCurrentUIController", &UUIRoot::GetCurrentUIController, py::return_value_policy::reference)
        .def("GetInputPlatformType", &UUIRoot::GetInputPlatformType)
          ;
}