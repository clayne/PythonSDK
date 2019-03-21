#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStepConfiguration()
{
    py::class_< FStepConfiguration >("FStepConfiguration")
        .def_readwrite("FirstAttemptDelay", &FStepConfiguration::FirstAttemptDelay)
        .def_readwrite("BaseRetrySeconds", &FStepConfiguration::BaseRetrySeconds)
        .def_readwrite("RetryMultiplier", &FStepConfiguration::RetryMultiplier)
        .def_readwrite("MaxRetryAttempts", &FStepConfiguration::MaxRetryAttempts)
        .def_readwrite("RetryJitter", &FStepConfiguration::RetryJitter)
  ;
}