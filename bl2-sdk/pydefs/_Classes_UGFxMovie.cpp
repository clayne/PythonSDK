#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovie(py::module &m)
{
    py::class_< UGFxMovie,  UObject   >(m, "UGFxMovie")
		.def_static("StaticClass", &UGFxMovie::StaticClass, py::return_value_policy::reference)
        .def_readwrite("pMovie", &UGFxMoviePlayer::pMovie)
        .def_readwrite("pCaptureKeys", &UGFxMoviePlayer::pCaptureKeys)
        .def_readwrite("pFocusIgnoreKeys", &UGFxMoviePlayer::pFocusIgnoreKeys)
        .def_readwrite("NextASUObject", &UGFxMoviePlayer::NextASUObject)
        .def_readwrite("MovieInfo", &UGFxMoviePlayer::MovieInfo)
        .def_readwrite("RenderTexture", &UGFxMoviePlayer::RenderTexture)
        .def_readwrite("LocalPlayerOwnerIndex", &UGFxMoviePlayer::LocalPlayerOwnerIndex)
        .def_readwrite("ExternalInterface", &UGFxMoviePlayer::ExternalInterface)
        .def_readwrite("CaptureKeys", &UGFxMoviePlayer::CaptureKeys)
        .def_readwrite("FocusIgnoreKeys", &UGFxMoviePlayer::FocusIgnoreKeys)
        .def_readwrite("SceneDPG", &UGFxMoviePlayer::SceneDPG)
        .def_readwrite("TimingMode", &UGFxMoviePlayer::TimingMode)
        .def_readwrite("RenderTextureMode", &UGFxMoviePlayer::RenderTextureMode)
        .def_readwrite("Priority", &UGFxMoviePlayer::Priority)
        .def_readwrite("ExternalTextures", &UGFxMoviePlayer::ExternalTextures)
        .def_readwrite("SoundThemes", &UGFxMoviePlayer::SoundThemes)
        .def_readwrite("DataStoreBindings", &UGFxMoviePlayer::DataStoreBindings)
        .def_readwrite("DataStoreSubscriber", &UGFxMoviePlayer::DataStoreSubscriber)
        .def_readwrite("WidgetBindings", &UGFxMoviePlayer::WidgetBindings)
        .def_readwrite("SplitscreenLayoutObject", &UGFxMoviePlayer::SplitscreenLayoutObject)
        .def_readwrite("SplitscreenLayoutYAdjust", &UGFxMoviePlayer::SplitscreenLayoutYAdjust)
        .def_readwrite("DepthPriority", &UGFxMoviePlayer::DepthPriority)
        .def_readwrite("LastKeyInputTime", &UGFxMoviePlayer::LastKeyInputTime)
        .def("UnregisterGFxObject", &UGFxMoviePlayer::UnregisterGFxObject)
        .def("RegisterGFxObject", &UGFxMoviePlayer::RegisterGFxObject)
        .def("SendMousePos", &UGFxMoviePlayer::SendMousePos)
        .def("IsShowingFlashMouse", &UGFxMoviePlayer::IsShowingFlashMouse)
        .def("HookSaveScreenshot", &UGFxMoviePlayer::HookSaveScreenshot)
        .def("UpdateRenderTexture", &UGFxMoviePlayer::UpdateRenderTexture)
        .def("OnInputKey", &UGFxMoviePlayer::OnInputKey)
        .def("WantsInput", &UGFxMoviePlayer::WantsInput)
        .def("WantsControllerInput", &UGFxMoviePlayer::WantsControllerInput)
        .def("InputKey", &UGFxMoviePlayer::InputKey)
        .def("GetGFxManager", &UGFxMoviePlayer::GetGFxManager, py::return_value_policy::reference)
        .def("ResolveDataStoreMarkup", &UGFxMoviePlayer::ResolveDataStoreMarkup)
        .def("UpdateSplitscreenLayout", &UGFxMoviePlayer::UpdateSplitscreenLayout)
        .def("ApplyPriorityVisibilityEffect", &UGFxMoviePlayer::ApplyPriorityVisibilityEffect)
        .def("ApplyPriorityBlurEffect", &UGFxMoviePlayer::ApplyPriorityBlurEffect)
        .def("eventApplyPriorityEffect", &UGFxMoviePlayer::eventApplyPriorityEffect)
        .def("PlaySoundFromTheme", &UGFxMoviePlayer::PlaySoundFromTheme)
        .def("eventOnFocusLost", &UGFxMoviePlayer::eventOnFocusLost)
        .def("eventOnFocusGained", &UGFxMoviePlayer::eventOnFocusGained)
        .def("ConsoleCommand", &UGFxMoviePlayer::ConsoleCommand)
        .def("SetLP", &UGFxMoviePlayer::SetLP)
        .def("GetPC", &UGFxMoviePlayer::GetPC, py::return_value_policy::reference)
        .def("GetLP", &UGFxMoviePlayer::GetLP, py::return_value_policy::reference)
        .def("Init", &UGFxMoviePlayer::Init)
        .def("SetWidgetPathBinding", &UGFxMoviePlayer::SetWidgetPathBinding)
        .def("eventPostWidgetInit", &UGFxMoviePlayer::eventPostWidgetInit)
        .def("eventWidgetUnloaded", &UGFxMoviePlayer::eventWidgetUnloaded)
        .def("eventWidgetInitialized", &UGFxMoviePlayer::eventWidgetInitialized)
        .def("ActionScriptObject", &UGFxMoviePlayer::ActionScriptObject, py::return_value_policy::reference)
        .def("ActionScriptString", &UGFxMoviePlayer::ActionScriptString)
        .def("ActionScriptFloat", &UGFxMoviePlayer::ActionScriptFloat)
        .def("ActionScriptInt", &UGFxMoviePlayer::ActionScriptInt)
        .def("ActionScriptVoid", &UGFxMoviePlayer::ActionScriptVoid)
        .def("ActionScript", &UGFxMoviePlayer::ActionScript)
        .def("Invoke", &UGFxMoviePlayer::Invoke)
        .def("ActionScriptSetFunction", &UGFxMoviePlayer::ActionScriptSetFunction)
        .def("CreateArray", &UGFxMoviePlayer::CreateArray, py::return_value_policy::reference)
        .def("CreateObject", &UGFxMoviePlayer::CreateObject, py::return_value_policy::reference)
        .def("SetVariableStringArray", &UGFxMoviePlayer::SetVariableStringArray)
        .def("SetVariableFloatArray", &UGFxMoviePlayer::SetVariableFloatArray)
        .def("SetVariableIntArray", &UGFxMoviePlayer::SetVariableIntArray)
        .def("SetVariableArray", &UGFxMoviePlayer::SetVariableArray)
        .def("GetVariableStringArray", &UGFxMoviePlayer::GetVariableStringArray)
        .def("GetVariableFloatArray", &UGFxMoviePlayer::GetVariableFloatArray)
        .def("GetVariableIntArray", &UGFxMoviePlayer::GetVariableIntArray)
        .def("GetVariableArray", &UGFxMoviePlayer::GetVariableArray)
        .def("SetVariableObject", &UGFxMoviePlayer::SetVariableObject)
        .def("SetVariableString", &UGFxMoviePlayer::SetVariableString)
        .def("SetVariableNumber", &UGFxMoviePlayer::SetVariableNumber)
        .def("SetVariableBool", &UGFxMoviePlayer::SetVariableBool)
        .def("SetVariable", &UGFxMoviePlayer::SetVariable)
        .def("GetVariableObject", &UGFxMoviePlayer::GetVariableObject, py::return_value_policy::reference)
        .def("GetVariableString", &UGFxMoviePlayer::GetVariableString)
        .def("GetVariableNumber", &UGFxMoviePlayer::GetVariableNumber)
        .def("GetVariableBool", &UGFxMoviePlayer::GetVariableBool)
        .def("GetVariable", &UGFxMoviePlayer::GetVariable)
        .def("eventFilterAxisInput", &UGFxMoviePlayer::eventFilterAxisInput)
        .def("eventFilterButtonInput", &UGFxMoviePlayer::eventFilterButtonInput)
        .def("FlushPlayerInput", &UGFxMoviePlayer::FlushPlayerInput)
        .def("ClearFocusIgnoreKeys", &UGFxMoviePlayer::ClearFocusIgnoreKeys)
        .def("AddFocusIgnoreKey", &UGFxMoviePlayer::AddFocusIgnoreKey)
        .def("ClearCaptureKeys", &UGFxMoviePlayer::ClearCaptureKeys)
        .def("AddCaptureKey", &UGFxMoviePlayer::AddCaptureKey)
        .def("SetMovieCanReceiveInput", &UGFxMoviePlayer::SetMovieCanReceiveInput)
        .def("SetMovieCanReceiveFocus", &UGFxMoviePlayer::SetMovieCanReceiveFocus)
        .def("SetSceneDPG", &UGFxMoviePlayer::SetSceneDPG)
        .def("SetPerspective3D", &UGFxMoviePlayer::SetPerspective3D)
        .def("SetView3D", &UGFxMoviePlayer::SetView3D)
        .def("GetVisibleFrameRect", &UGFxMoviePlayer::GetVisibleFrameRect)
        .def("SetAlignment", &UGFxMoviePlayer::SetAlignment)
        .def("SetViewScaleMode", &UGFxMoviePlayer::SetViewScaleMode)
        .def("eventOnSetViewport", &UGFxMoviePlayer::eventOnSetViewport)
        .def("SetViewport", &UGFxMoviePlayer::SetViewport)
        .def("GetGameViewportClient", &UGFxMoviePlayer::GetGameViewportClient, py::return_value_policy::reference)
        .def("SetPriority", &UGFxMoviePlayer::SetPriority)
        .def("PublishDataStoreValues", &UGFxMoviePlayer::PublishDataStoreValues)
        .def("RefreshDataStoreBindings", &UGFxMoviePlayer::RefreshDataStoreBindings)
        .def("SetExternalTexture", &UGFxMoviePlayer::SetExternalTexture)
        .def("SetExternalInterface", &UGFxMoviePlayer::SetExternalInterface)
        .def("SetTimingMode", &UGFxMoviePlayer::SetTimingMode)
        .def("SetMovieInfo", &UGFxMoviePlayer::SetMovieInfo)
        .def("eventConditionalClearPause", &UGFxMoviePlayer::eventConditionalClearPause)
        .def("eventOnCleanup", &UGFxMoviePlayer::eventOnCleanup)
        .def("eventOnClose", &UGFxMoviePlayer::eventOnClose)
        .def("Close", &UGFxMoviePlayer::Close)
        .def("SetPause", &UGFxMoviePlayer::SetPause)
        .def("OnPostAdvance", &UGFxMoviePlayer::OnPostAdvance)
        .def("PostAdvance", &UGFxMoviePlayer::PostAdvance)
        .def("Advance", &UGFxMoviePlayer::Advance)
        .def("eventStart", &UGFxMoviePlayer::eventStart)
          ;
}