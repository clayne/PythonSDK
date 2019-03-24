#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPackageAssetLibrary(py::module &m)
{
    py::class_< UPackageAssetLibrary,  UGBXDefinition   >(m, "UPackageAssetLibrary")
		.def_static("StaticClass", &UPackageAssetLibrary::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LibraryType", &UPackageAssetLibrary::LibraryType)
        .def_readwrite("Sublibraries", &UPackageAssetLibrary::Sublibraries)
        .def_readwrite("SublibraryLinks", &UPackageAssetLibrary::SublibraryLinks)
          ;
}