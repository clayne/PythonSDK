#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowGFxDialogBox()
{
    py::class_< UWillowGFxDialogBox,  UWillowGFxMovie   >("UWillowGFxDialogBox")
        .def_readwrite("Layouts", &UWillowGFxDialogBox::Layouts)
        .def_readwrite("Buttons", &UWillowGFxDialogBox::Buttons)
        .def_readwrite("DlgCaptionMarkup", &UWillowGFxDialogBox::DlgCaptionMarkup)
        .def_readwrite("DlgTextMarkup", &UWillowGFxDialogBox::DlgTextMarkup)
        .def_readwrite("CancelButtonTag", &UWillowGFxDialogBox::CancelButtonTag)
        .def_readwrite("DialogResult", &UWillowGFxDialogBox::DialogResult)
        .def_readwrite("CurrentSelection", &UWillowGFxDialogBox::CurrentSelection)
        .def_readwrite("AutoLocFile", &UWillowGFxDialogBox::AutoLocFile)
        .def_readwrite("AutoLocSection", &UWillowGFxDialogBox::AutoLocSection)
        .def_readwrite("DefaultTooltips", &UWillowGFxDialogBox::DefaultTooltips)
        .def("StaticClass", &UWillowGFxDialogBox::StaticClass, py::return_value_policy::reference)
        .def("SetViewScaleMode", &UWillowGFxDialogBox::SetViewScaleMode)
        .def("GetFallbackLocSection", &UWillowGFxDialogBox::GetFallbackLocSection)
        .def("GetFallbackLocFile", &UWillowGFxDialogBox::GetFallbackLocFile)
        .def("SetButtonCaption", &UWillowGFxDialogBox::SetButtonCaption)
        .def("SetQuadrant", &UWillowGFxDialogBox::SetQuadrant)
        .def("SetAllowNonOwnerInput", &UWillowGFxDialogBox::SetAllowNonOwnerInput)
        .def("StorageDeviceChanged", &UWillowGFxDialogBox::StorageDeviceChanged)
        .def("SetTooltips", &UWillowGFxDialogBox::SetTooltips)
        .def("ShowTooltips", &UWillowGFxDialogBox::ShowTooltips)
        .def("DisplayBlockingBox", &UWillowGFxDialogBox::DisplayBlockingBox, py::return_value_policy::reference)
        .def("DisplayCustomYesNoBox", &UWillowGFxDialogBox::DisplayCustomYesNoBox)
        .def("DisplayYesNoBox", &UWillowGFxDialogBox::DisplayYesNoBox)
        .def("DisplayOkBoxTextFromSpark", &UWillowGFxDialogBox::DisplayOkBoxTextFromSpark, py::return_value_policy::reference)
        .def("DisplayOkBox", &UWillowGFxDialogBox::DisplayOkBox, py::return_value_policy::reference)
        .def("ApplySelection", &UWillowGFxDialogBox::ApplySelection)
        .def("OnWidgetClicked", &UWillowGFxDialogBox::OnWidgetClicked)
        .def("OnWidgetFocused", &UWillowGFxDialogBox::OnWidgetFocused)
        .def("OnWidget4Clicked", &UWillowGFxDialogBox::OnWidget4Clicked)
        .def("OnWidget3Clicked", &UWillowGFxDialogBox::OnWidget3Clicked)
        .def("OnWidget2Clicked", &UWillowGFxDialogBox::OnWidget2Clicked)
        .def("OnWidget1Clicked", &UWillowGFxDialogBox::OnWidget1Clicked)
        .def("OnWidget0Clicked", &UWillowGFxDialogBox::OnWidget0Clicked)
        .def("OnWidget4Focused", &UWillowGFxDialogBox::OnWidget4Focused)
        .def("OnWidget3Focused", &UWillowGFxDialogBox::OnWidget3Focused)
        .def("OnWidget2Focused", &UWillowGFxDialogBox::OnWidget2Focused)
        .def("OnWidget1Focused", &UWillowGFxDialogBox::OnWidget1Focused)
        .def("OnWidget0Focused", &UWillowGFxDialogBox::OnWidget0Focused)
        .def("AddEventListenersForWidget", &UWillowGFxDialogBox::AddEventListenersForWidget)
        .def("ApplyFlashButtons", &UWillowGFxDialogBox::ApplyFlashButtons)
        .def("GetWidgetIndex", &UWillowGFxDialogBox::GetWidgetIndex)
        .def("GetLogicalIndex", &UWillowGFxDialogBox::GetLogicalIndex)
        .def("ApplyFlashSelection", &UWillowGFxDialogBox::ApplyFlashSelection)
        .def("ApplyFlashText", &UWillowGFxDialogBox::ApplyFlashText)
        .def("ApplyLayout", &UWillowGFxDialogBox::ApplyLayout)
        .def("SetDefaultButton", &UWillowGFxDialogBox::SetDefaultButton)
        .def("ReplaceDialogCaption", &UWillowGFxDialogBox::ReplaceDialogCaption)
        .def("ReplaceDialogText", &UWillowGFxDialogBox::ReplaceDialogText)
        .def("SetLayout", &UWillowGFxDialogBox::SetLayout)
        .def("SetButtonTip", &UWillowGFxDialogBox::SetButtonTip)
        .def("SetButtonCallback", &UWillowGFxDialogBox::SetButtonCallback)
        .def("AutoAppendButton", &UWillowGFxDialogBox::AutoAppendButton)
        .def("AutoLoc", &UWillowGFxDialogBox::AutoLoc)
        .def("AutoLocEnablePrompt", &UWillowGFxDialogBox::AutoLocEnablePrompt)
        .def("AutoLocEnableCaption", &UWillowGFxDialogBox::AutoLocEnableCaption)
        .def("AutoLocEnable", &UWillowGFxDialogBox::AutoLocEnable)
        .def("AppendButton", &UWillowGFxDialogBox::AppendButton)
        .def("ClearButtons", &UWillowGFxDialogBox::ClearButtons)
        .def("SetText", &UWillowGFxDialogBox::SetText)
        .def("Accepted", &UWillowGFxDialogBox::Accepted)
        .def("Cancelled", &UWillowGFxDialogBox::Cancelled)
        .def("HandleInputKey", &UWillowGFxDialogBox::HandleInputKey)
        .def("eventOnClose", &UWillowGFxDialogBox::eventOnClose)
        .def("eventStart", &UWillowGFxDialogBox::eventStart)
        .def("OnHandleInputKey", &UWillowGFxDialogBox::OnHandleInputKey)
        .def("OnButtonClicked", &UWillowGFxDialogBox::OnButtonClicked)
        .def("OnStorageDeviceChanged", &UWillowGFxDialogBox::OnStorageDeviceChanged)
        .staticmethod("StaticClass")
  ;
}