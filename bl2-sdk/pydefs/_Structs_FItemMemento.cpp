#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemMemento(py::module &m)
{
    py::class_< FItemMemento >(m, "FItemMemento")
        .def_readwrite("SerialNumber", &FItemMemento::SerialNumber)
  ;
}