#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FModifierValuePresentationData()
{
    py::class_< FModifierValuePresentationData >("FModifierValuePresentationData")
        .def_readwrite("AttributePresentation", &FModifierValuePresentationData::AttributePresentation)
        .def_readwrite("OptionalConstraintPresentation", &FModifierValuePresentationData::OptionalConstraintPresentation)
        .def_readwrite("ModifierValue", &FModifierValuePresentationData::ModifierValue)
  ;
}