#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxTextListContainer()
{
    py::class_< UGFxTextListContainer,  UObject   >("UGFxTextListContainer")
        .def_readwrite("OneTimeArray", &UGFxTextListContainer::OneTimeArray)
        .def_readwrite("CategoryLabelsArray", &UGFxTextListContainer::CategoryLabelsArray)
        .def_readwrite("SortableArray", &UGFxTextListContainer::SortableArray)
        .def_readwrite("TextEntries", &UGFxTextListContainer::TextEntries)
        .def_readwrite("ParentMovie", &UGFxTextListContainer::ParentMovie)
        .def_readwrite("HighlightedEntry", &UGFxTextListContainer::HighlightedEntry)
        .def_readwrite("IndexOfTopEntry", &UGFxTextListContainer::IndexOfTopEntry)
        .def_readwrite("NumberEntriesPerPage", &UGFxTextListContainer::NumberEntriesPerPage)
        .def_readwrite("SavedHighlightedEntry", &UGFxTextListContainer::SavedHighlightedEntry)
        .def_readwrite("SavedIndexOfTopEntry", &UGFxTextListContainer::SavedIndexOfTopEntry)
        .def_readwrite("ListDef", &UGFxTextListContainer::ListDef)
        .def("StaticClass", &UGFxTextListContainer::StaticClass, py::return_value_policy::reference)
        .def("GetIndexOfNextCategory", &UGFxTextListContainer::GetIndexOfNextCategory)
        .def("GetIndexOfPreviousCategory", &UGFxTextListContainer::GetIndexOfPreviousCategory)
        .def("SetMoreBars", &UGFxTextListContainer::SetMoreBars)
        .def("UpdateTextEntries", &UGFxTextListContainer::UpdateTextEntries)
        .def("MoveHighlightBar", &UGFxTextListContainer::MoveHighlightBar)
        .def("GetTextEntryIndexOfFirstRealEntry", &UGFxTextListContainer::GetTextEntryIndexOfFirstRealEntry)
        .def("GetTextAndIconAtIndex", &UGFxTextListContainer::GetTextAndIconAtIndex)
        .def("GetTextEntryKindAtIndex", &UGFxTextListContainer::GetTextEntryKindAtIndex)
        .def("GetObjectAtIndex", &UGFxTextListContainer::GetObjectAtIndex, py::return_value_policy::reference)
        .def("RemoveObject", &UGFxTextListContainer::RemoveObject)
        .def("ScrollToBottomOfList", &UGFxTextListContainer::ScrollToBottomOfList)
        .def("SetIconOverrideFor", &UGFxTextListContainer::SetIconOverrideFor)
        .def("SetObjectHighlighted", &UGFxTextListContainer::SetObjectHighlighted)
        .def("FindObjectIndex", &UGFxTextListContainer::FindObjectIndex)
        .def("SetHighlightBarOff", &UGFxTextListContainer::SetHighlightBarOff)
        .def("SetHighlightBarNormal", &UGFxTextListContainer::SetHighlightBarNormal)
        .def("SetHighlightBarSelected", &UGFxTextListContainer::SetHighlightBarSelected)
        .def("UnHighlightAll", &UGFxTextListContainer::UnHighlightAll)
        .def("PositionHighlightBar", &UGFxTextListContainer::PositionHighlightBar)
        .def("ResetState", &UGFxTextListContainer::ResetState)
        .def("RestoreState", &UGFxTextListContainer::RestoreState)
        .def("SaveState", &UGFxTextListContainer::SaveState)
        .def("GetHighlightedText", &UGFxTextListContainer::GetHighlightedText)
        .def("GetHighlightedObject", &UGFxTextListContainer::GetHighlightedObject, py::return_value_policy::reference)
        .def("IsSlotValid", &UGFxTextListContainer::IsSlotValid)
        .def("SelectSlot", &UGFxTextListContainer::SelectSlot)
        .def("RepositionToFitIndex", &UGFxTextListContainer::RepositionToFitIndex)
        .def("Move", &UGFxTextListContainer::Move, py::return_value_policy::reference)
        .def("UpdateEntriesPerPage", &UGFxTextListContainer::UpdateEntriesPerPage)
        .def("AddDataEntry", &UGFxTextListContainer::AddDataEntry)
        .def("EmptyData", &UGFxTextListContainer::EmptyData)
        .def("Init", &UGFxTextListContainer::Init)
        .staticmethod("StaticClass")
  ;
}