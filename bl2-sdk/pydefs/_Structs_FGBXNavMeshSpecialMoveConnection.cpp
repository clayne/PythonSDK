#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshSpecialMoveConnection()
{
    py::class_< FGBXNavMeshSpecialMoveConnection >("FGBXNavMeshSpecialMoveConnection")
        .def_readwrite("SrcPoly", &FGBXNavMeshSpecialMoveConnection::SrcPoly)
        .def_readwrite("SrcLocation", &FGBXNavMeshSpecialMoveConnection::SrcLocation)
        .def_readwrite("DestPoly", &FGBXNavMeshSpecialMoveConnection::DestPoly)
        .def_readwrite("DestLocation", &FGBXNavMeshSpecialMoveConnection::DestLocation)
        .def_readwrite("MoveId", &FGBXNavMeshSpecialMoveConnection::MoveId)
  ;
}