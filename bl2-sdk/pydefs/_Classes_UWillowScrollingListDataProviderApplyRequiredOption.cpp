#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderApplyRequiredOption(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderApplyRequiredOption,  UWillowScrollingListDataProviderOptionsBase   >(m, "UWillowScrollingListDataProviderApplyRequiredOption")
		.def_static("StaticClass", &UWillowScrollingListDataProviderApplyRequiredOption::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CurrentSettingValue", &UWillowScrollingListDataProviderApplyRequiredOption::CurrentSettingValue)
        .def_readwrite("CurrentSpinnerValue", &UWillowScrollingListDataProviderApplyRequiredOption::CurrentSpinnerValue)
        .def_readwrite("SettingName", &UWillowScrollingListDataProviderApplyRequiredOption::SettingName)
        .def_readwrite("LocalizedSettingCaptionString", &UWillowScrollingListDataProviderApplyRequiredOption::LocalizedSettingCaptionString)
        .def_readwrite("LocalizedSettingDescriptionString", &UWillowScrollingListDataProviderApplyRequiredOption::LocalizedSettingDescriptionString)
        .def("HandleSpinnerChange", &UWillowScrollingListDataProviderApplyRequiredOption::HandleSpinnerChange)
        .def("Populate", &UWillowScrollingListDataProviderApplyRequiredOption::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderApplyRequiredOption::HandleClick)
          ;
}