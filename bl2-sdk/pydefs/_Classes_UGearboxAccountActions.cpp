#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxAccountActions()
{
    py::class_< UGearboxAccountActions,  UObject   >("UGearboxAccountActions")
        .def_readwrite("CurrentConsumeCount", &UGearboxAccountActions::CurrentConsumeCount)
        .def_readwrite("CurrentControllerId", &UGearboxAccountActions::CurrentControllerId)
        .def_readwrite("CurrentEntitlement", &UGearboxAccountActions::CurrentEntitlement)
        .def_readwrite("CurrentBulkConsumeEntitlements", &UGearboxAccountActions::CurrentBulkConsumeEntitlements)
        .def_readwrite("CurrentBulkConsumeControllerIds", &UGearboxAccountActions::CurrentBulkConsumeControllerIds)
        .def_readwrite("CurrentBulkConsumeCounts", &UGearboxAccountActions::CurrentBulkConsumeCounts)
        .def("StaticClass", &UGearboxAccountActions::StaticClass, py::return_value_policy::reference)
        .def("HandleOffersNotifiedResponse", &UGearboxAccountActions::HandleOffersNotifiedResponse)
        .def("HandleBulkEntitlementsConsumedResponse", &UGearboxAccountActions::HandleBulkEntitlementsConsumedResponse)
        .def("HandleEntitlementConsumedResponse", &UGearboxAccountActions::HandleEntitlementConsumedResponse)
        .def("HandleCodeRedeemedResponse", &UGearboxAccountActions::HandleCodeRedeemedResponse)
        .def("HandleResetPasswordResponse", &UGearboxAccountActions::HandleResetPasswordResponse)
        .def("HandleSignUpResponse", &UGearboxAccountActions::HandleSignUpResponse)
        .def("HandleSignInResponse", &UGearboxAccountActions::HandleSignInResponse)
        .def("ExtractArchwayResult", &UGearboxAccountActions::ExtractArchwayResult)
        .def("MarkOffersNotified", &UGearboxAccountActions::MarkOffersNotified)
        .def("LocallyConsumeEntitlementWithCount", &UGearboxAccountActions::LocallyConsumeEntitlementWithCount)
        .def("eventConsumeEntitlementsWithCounts", &UGearboxAccountActions::eventConsumeEntitlementsWithCounts)
        .def("ConsumeEntitlementWithCount", &UGearboxAccountActions::ConsumeEntitlementWithCount)
        .def("RedeemCode", &UGearboxAccountActions::RedeemCode)
        .def("ResetPasswordGearboxAccount", &UGearboxAccountActions::ResetPasswordGearboxAccount)
        .def("EscapeJson", &UGearboxAccountActions::EscapeJson)
        .def("SignUpGearboxAccount", &UGearboxAccountActions::SignUpGearboxAccount)
        .def("SignInGearboxAccount", &UGearboxAccountActions::SignInGearboxAccount)
        .def("OnEntitlementConsumed", &UGearboxAccountActions::OnEntitlementConsumed)
        .def("OnCodeRedeemed", &UGearboxAccountActions::OnCodeRedeemed)
        .def("OnResetPasswordGearboxAccount", &UGearboxAccountActions::OnResetPasswordGearboxAccount)
        .def("OnSignUpGearboxAccount", &UGearboxAccountActions::OnSignUpGearboxAccount)
        .def("OnSignInGearboxAccount", &UGearboxAccountActions::OnSignInGearboxAccount)
        .staticmethod("StaticClass")
  ;
}