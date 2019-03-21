#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRigidBodyContactInfo()
{
    py::class_< FRigidBodyContactInfo >("FRigidBodyContactInfo")
        .def_readwrite("ContactPosition", &FRigidBodyContactInfo::ContactPosition)
        .def_readwrite("ContactNormal", &FRigidBodyContactInfo::ContactNormal)
        .def_readwrite("ContactPenetration", &FRigidBodyContactInfo::ContactPenetration)
        .def_readonly("ContactVelocity", &FRigidBodyContactInfo::ContactVelocity)
        .def_readonly("PhysMaterial", &FRigidBodyContactInfo::PhysMaterial)
  ;
}