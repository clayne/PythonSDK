#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimationCompressionAlgorithm()
{
    py::class_< UAnimationCompressionAlgorithm,  UObject   >("UAnimationCompressionAlgorithm")
        .def_readwrite("Description", &UAnimationCompressionAlgorithm::Description)
        .def_readwrite("TranslationCompressionChoice", &UAnimationCompressionAlgorithm::TranslationCompressionChoice)
        .def_readwrite("RotationCompressionChoice", &UAnimationCompressionAlgorithm::RotationCompressionChoice)
        .def("StaticClass", &UAnimationCompressionAlgorithm::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}