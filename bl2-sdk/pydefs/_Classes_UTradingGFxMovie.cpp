#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTradingGFxMovie()
{
    py::class_< UTradingGFxMovie,  UWillowInventoryGFxMovie   >("UTradingGFxMovie")
        .def_readwrite("OfferingString", &UTradingGFxMovie::OfferingString)
        .def_readwrite("ReceivingString", &UTradingGFxMovie::ReceivingString)
        .def_readwrite("TooltipString", &UTradingGFxMovie::TooltipString)
        .def_readwrite("ToolTipString_Split", &UTradingGFxMovie::ToolTipString_Split)
        .def_readwrite("ReadyString", &UTradingGFxMovie::ReadyString)
        .def_readwrite("TradeString", &UTradingGFxMovie::TradeString)
        .def_readwrite("DuelString", &UTradingGFxMovie::DuelString)
        .def_readwrite("CancelDuelString", &UTradingGFxMovie::CancelDuelString)
        .def_readwrite("CancelTradeString", &UTradingGFxMovie::CancelTradeString)
        .def_readwrite("WinnerTakeAllString", &UTradingGFxMovie::WinnerTakeAllString)
        .def_readwrite("NoRoomForItemsString", &UTradingGFxMovie::NoRoomForItemsString)
        .def_readwrite("MyMoneyOffer", &UTradingGFxMovie::MyMoneyOffer)
        .def_readwrite("CachedPartnerMoneyOffer", &UTradingGFxMovie::CachedPartnerMoneyOffer)
        .def_readwrite("CachedMyStance", &UTradingGFxMovie::CachedMyStance)
        .def_readwrite("CachedPartnerStance", &UTradingGFxMovie::CachedPartnerStance)
        .def_readonly("OfferedContents", &UTradingGFxMovie::OfferedContents)
        .def_readwrite("BackpackThings", &UTradingGFxMovie::BackpackThings)
        .def_readwrite("TradingPanel", &UTradingGFxMovie::TradingPanel)
        .def_readwrite("TradingDef", &UTradingGFxMovie::TradingDef)
        .def_readwrite("CompareConfiguration", &UTradingGFxMovie::CompareConfiguration)
        .def_readwrite("GenericSortConfigurations", &UTradingGFxMovie::GenericSortConfigurations)
        .def_readwrite("GenericSortConfigIndex", &UTradingGFxMovie::GenericSortConfigIndex)
        .def_readwrite("LastMoneyOfferString", &UTradingGFxMovie::LastMoneyOfferString)
        .def("StaticClass", &UTradingGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("UpdateMoneyOfferFromTextbox", &UTradingGFxMovie::UpdateMoneyOfferFromTextbox)
        .def("extGenericButtonClicked", &UTradingGFxMovie::extGenericButtonClicked)
        .def("extMoneyWidgetActivated", &UTradingGFxMovie::extMoneyWidgetActivated)
        .def("FreeCellData", &UTradingGFxMovie::FreeCellData)
        .def("GetLocalInvForTradeSlot", &UTradingGFxMovie::GetLocalInvForTradeSlot, py::return_value_policy::reference)
        .def("OnPartnerInvChanged", &UTradingGFxMovie::OnPartnerInvChanged)
        .def("GetOfferedCellInventory", &UTradingGFxMovie::GetOfferedCellInventory, py::return_value_policy::reference)
        .def("UpdateTimer", &UTradingGFxMovie::UpdateTimer)
        .def("extSetDuel", &UTradingGFxMovie::extSetDuel)
        .def("extSetTrade", &UTradingGFxMovie::extSetTrade)
        .def("eventUnselectActionButtons", &UTradingGFxMovie::eventUnselectActionButtons)
        .def("eventSetPlayerInventoryMoney", &UTradingGFxMovie::eventSetPlayerInventoryMoney)
        .def("eventSetPartnerMoneyOffer", &UTradingGFxMovie::eventSetPartnerMoneyOffer)
        .def("eventSetPlayerMoneyOffer", &UTradingGFxMovie::eventSetPlayerMoneyOffer)
        .def("eventOnClose", &UTradingGFxMovie::eventOnClose)
        .def("UpdateMoneyOffer", &UTradingGFxMovie::UpdateMoneyOffer)
        .def("extExitMoneyWidget", &UTradingGFxMovie::extExitMoneyWidget)
        .def("TweenOut", &UTradingGFxMovie::TweenOut)
        .def("eventBeginClosing", &UTradingGFxMovie::eventBeginClosing)
        .def("InitTradingScreen", &UTradingGFxMovie::InitTradingScreen)
        .def("SetTooltips", &UTradingGFxMovie::SetTooltips)
        .def("GetTradeManager", &UTradingGFxMovie::GetTradeManager, py::return_value_policy::reference)
        .def("InitCellData", &UTradingGFxMovie::InitCellData)
        .def("IsOffering", &UTradingGFxMovie::IsOffering)
        .def("AddInventory", &UTradingGFxMovie::AddInventory)
        .def("PrepareListOfAllInventory", &UTradingGFxMovie::PrepareListOfAllInventory)
        .def("RefreshContents", &UTradingGFxMovie::RefreshContents)
        .def("InitForConsole", &UTradingGFxMovie::InitForConsole)
        .def("InitForPC", &UTradingGFxMovie::InitForPC)
        .def("eventStart", &UTradingGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}