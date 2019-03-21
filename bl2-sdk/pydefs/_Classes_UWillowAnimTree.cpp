#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimTree()
{
    py::class_< UWillowAnimTree,  UAnimTree   >("UWillowAnimTree")
        .def_readwrite("SimpleAnimNames", &UWillowAnimTree::SimpleAnimNames)
        .def_readwrite("PreviewWeapon", &UWillowAnimTree::PreviewWeapon)
        .def_readwrite("LeftHandAnimation", &UWillowAnimTree::LeftHandAnimation)
        .def("StaticClass", &UWillowAnimTree::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}