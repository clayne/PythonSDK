#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GFxMoviePlay()
{
    py::class_< UBehavior_GFxMoviePlay,  UBehaviorBase   >("UBehavior_GFxMoviePlay")
        .def_readwrite("MovieDefinition", &UBehavior_GFxMoviePlay::MovieDefinition)
        .def_readwrite("OtherContext", &UBehavior_GFxMoviePlay::OtherContext)
        .def_readwrite("Tag", &UBehavior_GFxMoviePlay::Tag)
        .def("StaticClass", &UBehavior_GFxMoviePlay::StaticClass, py::return_value_policy::reference)
        .def("ResolveController", &UBehavior_GFxMoviePlay::ResolveController, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_GFxMoviePlay::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}