#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowLocalMessage()
{
    py::class_< UWillowLocalMessage,  ULocalMessage   >("UWillowLocalMessage")
        .def("StaticClass", &UWillowLocalMessage::StaticClass, py::return_value_policy::reference)
        .def("CloseFontColorTag", &UWillowLocalMessage::CloseFontColorTag)
        .def("OpenFontColorTag", &UWillowLocalMessage::OpenFontColorTag)
        .def("TrimWhitespace", &UWillowLocalMessage::TrimWhitespace)
        .staticmethod("StaticClass")
  ;
}