#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMarketplaceOffer()
{
    py::class_< FMarketplaceOffer >("FMarketplaceOffer")
        .def_readwrite("OfferId", &FMarketplaceOffer::OfferId)
        .def_readwrite("ContentCategory", &FMarketplaceOffer::ContentCategory)
        .def_readwrite("OfferName", &FMarketplaceOffer::OfferName)
        .def_readwrite("ContentId", &FMarketplaceOffer::ContentId)
        .def_readwrite("LicenseMask", &FMarketplaceOffer::LicenseMask)
  ;
}