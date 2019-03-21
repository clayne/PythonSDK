#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSubTrackGroup()
{
    py::class_< FSubTrackGroup >("FSubTrackGroup")
        .def_readwrite("GroupName", &FSubTrackGroup::GroupName)
        .def_readwrite("TrackIndices", &FSubTrackGroup::TrackIndices)
  ;
}