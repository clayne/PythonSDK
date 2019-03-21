#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGestaltPartMatricesCollectionDefinition()
{
    py::class_< UGestaltPartMatricesCollectionDefinition,  UGBXDefinition   >("UGestaltPartMatricesCollectionDefinition")
        .def_readwrite("Collection", &UGestaltPartMatricesCollectionDefinition::Collection)
        .def("StaticClass", &UGestaltPartMatricesCollectionDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}