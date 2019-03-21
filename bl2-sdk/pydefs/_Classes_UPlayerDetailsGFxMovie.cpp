#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerDetailsGFxMovie()
{
    py::class_< UPlayerDetailsGFxMovie,  UWillowGFxMovie   >("UPlayerDetailsGFxMovie")
        .def_readwrite("PlayerDetailsObject", &UPlayerDetailsGFxMovie::PlayerDetailsObject)
        .def_readwrite("OwningMovie", &UPlayerDetailsGFxMovie::OwningMovie)
        .def_readonly("UnknownData00", &UPlayerDetailsGFxMovie::UnknownData00)
        .def("StaticClass", &UPlayerDetailsGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("HandleInputKey", &UPlayerDetailsGFxMovie::HandleInputKey)
        .def("extClosed", &UPlayerDetailsGFxMovie::extClosed)
        .def("extOnLoad", &UPlayerDetailsGFxMovie::extOnLoad)
        .def("eventOnClose", &UPlayerDetailsGFxMovie::eventOnClose)
        .def("eventStart", &UPlayerDetailsGFxMovie::eventStart)
        .def("OnLoad", &UPlayerDetailsGFxMovie::OnLoad)
        .staticmethod("StaticClass")
  ;
}