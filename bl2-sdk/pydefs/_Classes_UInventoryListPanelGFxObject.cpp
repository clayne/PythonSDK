#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryListPanelGFxObject()
{
    py::class_< UInventoryListPanelGFxObject,  UGFxObject   >("UInventoryListPanelGFxObject")
        .def_readwrite("DataProvider", &UInventoryListPanelGFxObject::DataProvider)
        .def_readwrite("InventoryList", &UInventoryListPanelGFxObject::InventoryList)
        .def_readwrite("CurrentSelectedIndex", &UInventoryListPanelGFxObject::CurrentSelectedIndex)
        .def_readwrite("CachedSelectedIndex", &UInventoryListPanelGFxObject::CachedSelectedIndex)
        .def_readwrite("InventoryCellsData", &UInventoryListPanelGFxObject::InventoryCellsData)
        .def_readwrite("RTM", &UInventoryListPanelGFxObject::RTM)
        .def_readwrite("PanelName", &UInventoryListPanelGFxObject::PanelName)
        .def_readwrite("CurrentSortFilterConfig", &UInventoryListPanelGFxObject::CurrentSortFilterConfig)
        .def_readwrite("PanelTitle", &UInventoryListPanelGFxObject::PanelTitle)
        .def_readwrite("OriginalTrashFavXPosition", &UInventoryListPanelGFxObject::OriginalTrashFavXPosition)
        .def_readwrite("Container", &UInventoryListPanelGFxObject::Container)
        .def_readwrite("HandleRollOverArgs", &UBaseInventoryPanelGFxObject::HandleRollOverArgs)
        .def_readwrite("CellObjects", &UBaseInventoryPanelGFxObject::CellObjects)
        .def_readwrite("EmptyWidgetObjects", &UBaseInventoryPanelGFxObject::EmptyWidgetObjects)
        .def_readwrite("ParentPanel", &UBaseInventoryPanelGFxObject::ParentPanel)
        .def_readwrite("OwningMovie", &UBaseInventoryPanelGFxObject::OwningMovie)
        .def_readwrite("OwningMovieDef", &UBaseInventoryPanelGFxObject::OwningMovieDef)
        .def("StaticClass", &UInventoryListPanelGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetCanDrag", &UInventoryListPanelGFxObject::SetCanDrag)
        .def("eventSetEmptyPanelWidget", &UInventoryListPanelGFxObject::eventSetEmptyPanelWidget)
        .def("SetPanelHighlight", &UInventoryListPanelGFxObject::SetPanelHighlight)
        .def("OnStartDrag", &UInventoryListPanelGFxObject::OnStartDrag)
        .def("RestoreState", &UInventoryListPanelGFxObject::RestoreState)
        .def("SaveState", &UInventoryListPanelGFxObject::SaveState)
        .def("ClearCell", &UInventoryListPanelGFxObject::ClearCell)
        .def("FreeCellData", &UInventoryListPanelGFxObject::FreeCellData)
        .def("GetCellObject", &UInventoryListPanelGFxObject::GetCellObject, py::return_value_policy::reference)
        .def("CycleSelectedThingAsTrashOrFavorite", &UInventoryListPanelGFxObject::CycleSelectedThingAsTrashOrFavorite)
        .def("extOnTrashFavChanged", &UInventoryListPanelGFxObject::extOnTrashFavChanged)
        .def("SetTrashFavoritesEnabled", &UInventoryListPanelGFxObject::SetTrashFavoritesEnabled)
        .def("SetCellTrashFavoritesEnabled", &UInventoryListPanelGFxObject::SetCellTrashFavoritesEnabled)
        .def("extOnNewBackpackRenderer", &UInventoryListPanelGFxObject::extOnNewBackpackRenderer)
        .def("SetRendererInfo", &UInventoryListPanelGFxObject::SetRendererInfo)
        .def("extOnCellUnselected", &UInventoryListPanelGFxObject::extOnCellUnselected)
        .def("extOnBackpackItemSelected", &UInventoryListPanelGFxObject::extOnBackpackItemSelected)
        .def("extOnCellPressed", &UInventoryListPanelGFxObject::extOnCellPressed)
        .def("FixupSelectedIndex", &UInventoryListPanelGFxObject::FixupSelectedIndex)
        .def("IsCurrentCellValid", &UInventoryListPanelGFxObject::IsCurrentCellValid)
        .def("GetThingByIndex", &UInventoryListPanelGFxObject::GetThingByIndex, py::return_value_policy::reference)
        .def("GetSelectedThing", &UInventoryListPanelGFxObject::GetSelectedThing, py::return_value_policy::reference)
        .def("UpdateList", &UInventoryListPanelGFxObject::UpdateList)
        .def("MoveDelta", &UInventoryListPanelGFxObject::MoveDelta)
        .def("Move", &UInventoryListPanelGFxObject::Move)
        .def("SetSelectedIndexByThing", &UInventoryListPanelGFxObject::SetSelectedIndexByThing)
        .def("extOnSetActive", &UInventoryListPanelGFxObject::extOnSetActive)
        .def("extOnPanelRollOver", &UInventoryListPanelGFxObject::extOnPanelRollOver)
        .def("extOnStoragePanelPressed", &UInventoryListPanelGFxObject::extOnStoragePanelPressed)
        .def("SetPanelTitleStorage", &UInventoryListPanelGFxObject::SetPanelTitleStorage)
        .def("SetPanelTitle", &UInventoryListPanelGFxObject::SetPanelTitle)
        .def("SetSortLabel", &UInventoryListPanelGFxObject::SetSortLabel)
        .def("extOnChangeSort", &UInventoryListPanelGFxObject::extOnChangeSort)
        .def("ApplySortConfiguration", &UInventoryListPanelGFxObject::ApplySortConfiguration)
        .def("SetList", &UInventoryListPanelGFxObject::SetList)
        .def("PanelOnInputKey", &UInventoryListPanelGFxObject::PanelOnInputKey)
        .def("SetHeaderIconClip", &UInventoryListPanelGFxObject::SetHeaderIconClip)
        .def("SetBackgroundTint", &UInventoryListPanelGFxObject::SetBackgroundTint)
        .def("SetBackground", &UInventoryListPanelGFxObject::SetBackground)
        .def("Init", &UInventoryListPanelGFxObject::Init)
        .def("OnListSort", &UInventoryListPanelGFxObject::OnListSort)
        .def("GetInventoryType", &UInventoryListPanelGFxObject::GetInventoryType)
        .def("InitializePlayerClasses", &UInventoryListPanelGFxObject::InitializePlayerClasses)
        .def("handleRollOver", &UBaseInventoryPanelGFxObject::handleRollOver)
        .def("handleRollOver2", &UBaseInventoryPanelGFxObject::handleRollOver2)
        .def("handleRollOver3", &UBaseInventoryPanelGFxObject::handleRollOver3)
        .def("handleRollOver4", &UBaseInventoryPanelGFxObject::handleRollOver4)
        .def("handleRollOver5", &UBaseInventoryPanelGFxObject::handleRollOver5)
        .def("handleRollOver6", &UBaseInventoryPanelGFxObject::handleRollOver6)
        .def("handleRollOver7", &UBaseInventoryPanelGFxObject::handleRollOver7)
        .def("handleRollOver8", &UBaseInventoryPanelGFxObject::handleRollOver8)
        .def("handleRollOver9", &UBaseInventoryPanelGFxObject::handleRollOver9)
        .def("handleRollOver_Generic", &UBaseInventoryPanelGFxObject::handleRollOver_Generic)
        .def("RedirectRollOver", &UBaseInventoryPanelGFxObject::RedirectRollOver)
        .def("FlourishActiveCell", &UBaseInventoryPanelGFxObject::FlourishActiveCell)
        .def("extStartDrag", &UBaseInventoryPanelGFxObject::extStartDrag, py::return_value_policy::reference)
        .def("OnSettingPanelForTransferring", &UBaseInventoryPanelGFxObject::OnSettingPanelForTransferring)
        .def("SetActive", &UBaseInventoryPanelGFxObject::SetActive)
        .def("InspectItem", &UBaseInventoryPanelGFxObject::InspectItem)
        .staticmethod("StaticClass")
  ;
}