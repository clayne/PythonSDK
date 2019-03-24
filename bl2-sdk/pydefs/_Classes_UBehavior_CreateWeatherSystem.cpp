#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CreateWeatherSystem(py::module &m)
{
    py::class_< UBehavior_CreateWeatherSystem,  UBehaviorBase   >(m, "UBehavior_CreateWeatherSystem")
		.def_static("StaticClass", &UBehavior_CreateWeatherSystem::StaticClass, py::return_value_policy::reference)
        .def_readwrite("WeatherSystemTemplate", &UBehavior_CreateWeatherSystem::WeatherSystemTemplate)
        .def_readwrite("ScreenEffectTemplate", &UBehavior_CreateWeatherSystem::ScreenEffectTemplate)
        .def("ApplyBehaviorToContext", &UBehavior_CreateWeatherSystem::ApplyBehaviorToContext)
          ;
}