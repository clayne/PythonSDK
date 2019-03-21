#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStoreSubscriber()
{
    py::class_< UUIDataStoreSubscriber,  UInterface   >("UUIDataStoreSubscriber")
        .def("StaticClass", &UUIDataStoreSubscriber::StaticClass, py::return_value_policy::reference)
        .def("ClearBoundDataStores", &UUIDataStoreSubscriber::ClearBoundDataStores)
        .def("GetBoundDataStores", &UUIDataStoreSubscriber::GetBoundDataStores)
        .def("NotifyDataStoreValueUpdated", &UUIDataStoreSubscriber::NotifyDataStoreValueUpdated)
        .def("RefreshSubscriberValue", &UUIDataStoreSubscriber::RefreshSubscriberValue)
        .def("GetDataStoreBinding", &UUIDataStoreSubscriber::GetDataStoreBinding)
        .def("SetDataStoreBinding", &UUIDataStoreSubscriber::SetDataStoreBinding)
        .staticmethod("StaticClass")
  ;
}