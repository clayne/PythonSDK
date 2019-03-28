#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FResultEntry(py::module &m)
{
    py::class_< FResultEntry >(m, "FResultEntry")
        .def_readwrite("Game", &FResultEntry::Game)
        .def_readwrite("Name", &FResultEntry::Name)
        .def_readwrite("ExpLevel", &FResultEntry::ExpLevel)
        .def_readwrite("Mission", &FResultEntry::Mission)
        .def_readwrite("PlayThrough", &FResultEntry::PlayThrough)
        .def_readwrite("NumPlayers", &FResultEntry::NumPlayers)
        .def_readwrite("MaxPlayers", &FResultEntry::MaxPlayers)
        .def_readwrite("Ping", &FResultEntry::Ping)
  ;
}