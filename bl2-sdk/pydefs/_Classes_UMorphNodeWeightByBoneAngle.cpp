#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodeWeightByBoneAngle()
{
    py::class_< UMorphNodeWeightByBoneAngle,  UMorphNodeWeightBase   >("UMorphNodeWeightByBoneAngle")
        .def_readwrite("Angle", &UMorphNodeWeightByBoneAngle::Angle)
        .def_readwrite("NodeWeight", &UMorphNodeWeightByBoneAngle::NodeWeight)
        .def_readwrite("BaseBoneName", &UMorphNodeWeightByBoneAngle::BaseBoneName)
        .def_readwrite("BaseBoneAxis", &UMorphNodeWeightByBoneAngle::BaseBoneAxis)
        .def_readwrite("AngleBoneAxis", &UMorphNodeWeightByBoneAngle::AngleBoneAxis)
        .def_readwrite("AngleBoneName", &UMorphNodeWeightByBoneAngle::AngleBoneName)
        .def_readwrite("MaterialSlotId", &UMorphNodeWeightByBoneAngle::MaterialSlotId)
        .def_readwrite("ScalarParameterName", &UMorphNodeWeightByBoneAngle::ScalarParameterName)
        .def_readwrite("MaterialInstanceConstant", &UMorphNodeWeightByBoneAngle::MaterialInstanceConstant)
        .def_readwrite("WeightArray", &UMorphNodeWeightByBoneAngle::WeightArray)
        .def("StaticClass", &UMorphNodeWeightByBoneAngle::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}