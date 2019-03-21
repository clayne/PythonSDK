#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMotionBlurEffect()
{
    py::class_< UMotionBlurEffect,  UPostProcessEffect   >("UMotionBlurEffect")
        .def_readwrite("MaxVelocity", &UMotionBlurEffect::MaxVelocity)
        .def_readwrite("MotionBlurAmount", &UMotionBlurEffect::MotionBlurAmount)
        .def_readwrite("CameraRotationThreshold", &UMotionBlurEffect::CameraRotationThreshold)
        .def_readwrite("CameraTranslationThreshold", &UMotionBlurEffect::CameraTranslationThreshold)
        .def("StaticClass", &UMotionBlurEffect::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}