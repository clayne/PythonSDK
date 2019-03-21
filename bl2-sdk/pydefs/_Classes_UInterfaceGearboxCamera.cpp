#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterfaceGearboxCamera()
{
    py::class_< UInterfaceGearboxCamera,  UInterface   >("UInterfaceGearboxCamera")
        .def("StaticClass", &UInterfaceGearboxCamera::StaticClass, py::return_value_policy::reference)
        .def("eventFinishCameraLookAt", &UInterfaceGearboxCamera::eventFinishCameraLookAt)
        .def("EnableThirdPersonLookAt", &UInterfaceGearboxCamera::EnableThirdPersonLookAt)
        .def("BeginCameraLookAt", &UInterfaceGearboxCamera::BeginCameraLookAt)
        .staticmethod("StaticClass")
  ;
}