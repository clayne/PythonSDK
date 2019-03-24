#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVendingMachineFeedbackGFxObject(py::module &m)
{
    py::class_< UVendingMachineFeedbackGFxObject,  UGFxObject   >(m, "UVendingMachineFeedbackGFxObject")
		.def_static("StaticClass", &UVendingMachineFeedbackGFxObject::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PurchasedLabel", &UVendingMachineFeedbackGFxObject::PurchasedLabel)
        .def_readwrite("SoldLabel", &UVendingMachineFeedbackGFxObject::SoldLabel)
        .def_readwrite("InsufficientFundsLabel", &UVendingMachineFeedbackGFxObject::InsufficientFundsLabel)
        .def_readwrite("FullLabel", &UVendingMachineFeedbackGFxObject::FullLabel)
        .def("Trigger", &UVendingMachineFeedbackGFxObject::Trigger)
        .def("TriggerCannotCarryOrUse", &UVendingMachineFeedbackGFxObject::TriggerCannotCarryOrUse)
        .def("TriggerCannotAfford", &UVendingMachineFeedbackGFxObject::TriggerCannotAfford)
        .def("TriggerSold", &UVendingMachineFeedbackGFxObject::TriggerSold)
        .def("TriggerPurchased", &UVendingMachineFeedbackGFxObject::TriggerPurchased)
          ;
}