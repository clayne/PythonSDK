#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowTradeManager()
{
    py::class_< AWillowTradeManager,  AActor   >("AWillowTradeManager")
        .def_readwrite("Status", &AWillowTradeManager::Status)
        .def_readwrite("Stance", &AWillowTradeManager::Stance)
        .def_readwrite("PartnerStance", &AWillowTradeManager::PartnerStance)
        .def_readwrite("UnresolvedFlags", &AWillowTradeManager::UnresolvedFlags)
        .def_readwrite("TransactionHash", &AWillowTradeManager::TransactionHash)
        .def_readwrite("Partner", &AWillowTradeManager::Partner)
        .def_readwrite("PartnerWPC", &AWillowTradeManager::PartnerWPC)
        .def_readwrite("PartnerPRI", &AWillowTradeManager::PartnerPRI)
        .def_readwrite("MaxPartnerReceivableInventory", &AWillowTradeManager::MaxPartnerReceivableInventory)
        .def_readwrite("PartnerCashOffered", &AWillowTradeManager::PartnerCashOffered)
        .def_readonly("PartnerInvOffered", &AWillowTradeManager::PartnerInvOffered)
        .def_readwrite("MyCashOffered", &AWillowTradeManager::MyCashOffered)
        .def_readonly("MyInvOffered", &AWillowTradeManager::MyInvOffered)
        .def_readwrite("DuelInfo", &AWillowTradeManager::DuelInfo)
        .def_readwrite("MaxMyReceivableInventory", &AWillowTradeManager::MaxMyReceivableInventory)
        .def("StaticClass", &AWillowTradeManager::StaticClass, py::return_value_policy::reference)
        .def("OnPartnerInvChanged", &AWillowTradeManager::OnPartnerInvChanged)
        .def("FindInventorySlot", &AWillowTradeManager::FindInventorySlot)
        .def("CanDrop", &AWillowTradeManager::CanDrop)
        .def("OnUIClosed", &AWillowTradeManager::OnUIClosed)
        .def("IsForTrade", &AWillowTradeManager::IsForTrade)
        .def("IsPendingItemSale", &AWillowTradeManager::IsPendingItemSale)
        .def("IsPendingWeaponSale", &AWillowTradeManager::IsPendingWeaponSale)
        .def("IsResolving", &AWillowTradeManager::IsResolving)
        .def("UpdateInventoryOffered", &AWillowTradeManager::UpdateInventoryOffered)
        .def("UpdatePartnerInventoryRefs", &AWillowTradeManager::UpdatePartnerInventoryRefs)
        .def("DuelFinished", &AWillowTradeManager::DuelFinished)
        .def("IsDueling", &AWillowTradeManager::IsDueling)
        .def("IsTradeInitialized", &AWillowTradeManager::IsTradeInitialized)
        .def("UpdateCashOffered", &AWillowTradeManager::UpdateCashOffered)
        .def("UpdateStance", &AWillowTradeManager::UpdateStance)
        .def("eventCancelTrade", &AWillowTradeManager::eventCancelTrade)
        .def("RejectPendingRequest", &AWillowTradeManager::RejectPendingRequest)
        .def("AcceptPendingRequest", &AWillowTradeManager::AcceptPendingRequest)
        .def("SharedInit", &AWillowTradeManager::SharedInit)
        .def("InitAsRequestee", &AWillowTradeManager::InitAsRequestee)
        .def("InitAsRequester", &AWillowTradeManager::InitAsRequester)
        .def("FindAndRemoveInv", &AWillowTradeManager::FindAndRemoveInv)
        .def("InventoryMatch", &AWillowTradeManager::InventoryMatch)
        .def("GetTradingWidget", &AWillowTradeManager::GetTradingWidget, py::return_value_policy::reference)
        .def("OnAccepted", &AWillowTradeManager::OnAccepted)
        .def("OnInitialized", &AWillowTradeManager::OnInitialized)
        .def("CheckAcceptance", &AWillowTradeManager::CheckAcceptance)
        .def("CheckInitialization", &AWillowTradeManager::CheckInitialization)
        .def("LogCurrentTrade", &AWillowTradeManager::LogCurrentTrade)
        .def("GetInvDesc", &AWillowTradeManager::GetInvDesc)
        .def("GetInvDescSub", &AWillowTradeManager::GetInvDescSub)
        .def("GetInvHash", &AWillowTradeManager::GetInvHash)
        .def("DoUpdateStance", &AWillowTradeManager::DoUpdateStance)
        .def("DoUpdateCashOffered", &AWillowTradeManager::DoUpdateCashOffered)
        .def("GetWPC", &AWillowTradeManager::GetWPC, py::return_value_policy::reference)
        .def("CalcTransactionHash", &AWillowTradeManager::CalcTransactionHash)
        .def("TradeParametersUpdated", &AWillowTradeManager::TradeParametersUpdated)
        .def("BreakTradeBond", &AWillowTradeManager::BreakTradeBond)
        .def("IsTradeHalfValid", &AWillowTradeManager::IsTradeHalfValid)
        .def("BeginDuel", &AWillowTradeManager::BeginDuel)
        .def("ResolveDuel", &AWillowTradeManager::ResolveDuel)
        .def("SetAssideDuelAssets", &AWillowTradeManager::SetAssideDuelAssets)
        .def("HashCheck", &AWillowTradeManager::HashCheck)
        .def("CheckTradeComplete", &AWillowTradeManager::CheckTradeComplete)
        .def("ResolveDuelWin", &AWillowTradeManager::ResolveDuelWin)
        .def("ResolveDuelDraw", &AWillowTradeManager::ResolveDuelDraw)
        .def("ResolveDuelLoss", &AWillowTradeManager::ResolveDuelLoss)
        .def("ResolveTrade", &AWillowTradeManager::ResolveTrade)
        .def("PerformTransaction", &AWillowTradeManager::PerformTransaction)
        .def("TerminateTrade", &AWillowTradeManager::TerminateTrade)
        .def("eventKillTrade", &AWillowTradeManager::eventKillTrade)
        .def("InvalidateStance", &AWillowTradeManager::InvalidateStance)
        .def("ServerTradeComplete", &AWillowTradeManager::ServerTradeComplete)
        .def("ClientResolveTrade", &AWillowTradeManager::ClientResolveTrade)
        .def("ServerOfferItem", &AWillowTradeManager::ServerOfferItem)
        .def("ServerOfferWeapon", &AWillowTradeManager::ServerOfferWeapon)
        .def("ServerEmptyInvSlot", &AWillowTradeManager::ServerEmptyInvSlot)
        .def("ClientStanceReset", &AWillowTradeManager::ClientStanceReset)
        .def("ServerUpdateCashOffered", &AWillowTradeManager::ServerUpdateCashOffered)
        .def("ForceCancelTrade", &AWillowTradeManager::ForceCancelTrade)
        .def("ServerCancelTrade", &AWillowTradeManager::ServerCancelTrade)
        .def("ServerUpdateStance", &AWillowTradeManager::ServerUpdateStance)
        .def("ServerAcceptPendingRequest", &AWillowTradeManager::ServerAcceptPendingRequest)
        .def("ServerRejectPendingRequest", &AWillowTradeManager::ServerRejectPendingRequest)
        .def("eventDestroyed", &AWillowTradeManager::eventDestroyed)
        .def("eventReplicatedEvent", &AWillowTradeManager::eventReplicatedEvent)
        .def("CanRetractOffer", &AWillowTradeManager::CanRetractOffer)
        .def("CanStartOffer", &AWillowTradeManager::CanStartOffer)
        .staticmethod("StaticClass")
  ;
}