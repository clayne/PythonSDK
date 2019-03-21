#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUniqueNetId()
{
    py::class_< FUniqueNetId >("FUniqueNetId")
        .def_readwrite("Uid", &FUniqueNetId::Uid)
        .def_readonly("NpId", &FUniqueNetId::NpId)
  ;
}