#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxPawnSnapshotRecord(py::module &m)
{
    py::class_< UGearboxPawnSnapshotRecord,  USnapshotRecord   >(m, "UGearboxPawnSnapshotRecord")
		.def_static("StaticClass", &UGearboxPawnSnapshotRecord::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PawnIconZOffset", &UGearboxPawnSnapshotRecord::PawnIconZOffset)
        .def_readwrite("PawnExposureZOffset", &UGearboxPawnSnapshotRecord::PawnExposureZOffset)
        .def_readwrite("CollectionNameOffset", &UGearboxPawnSnapshotRecord::CollectionNameOffset)
        .def_readwrite("LastVisibleConnectionColor", &UGearboxPawnSnapshotRecord::LastVisibleConnectionColor)
        .def_readwrite("RouteColor", &UGearboxPawnSnapshotRecord::RouteColor)
        .def_readwrite("OriginalRouteColor", &UGearboxPawnSnapshotRecord::OriginalRouteColor)
        .def_readwrite("DestLineColor", &UGearboxPawnSnapshotRecord::DestLineColor)
        .def_readwrite("BestCoverColor", &UGearboxPawnSnapshotRecord::BestCoverColor)
        .def_readwrite("PotentialCoverColor", &UGearboxPawnSnapshotRecord::PotentialCoverColor)
        .def_readwrite("StandardCoverColor", &UGearboxPawnSnapshotRecord::StandardCoverColor)
        .def_readwrite("AIDebugTexture", &UGearboxPawnSnapshotRecord::AIDebugTexture)
        .def_readwrite("MyPawnName", &UGearboxPawnSnapshotRecord::MyPawnName)
        .def_readwrite("MyArchetypeName", &UGearboxPawnSnapshotRecord::MyArchetypeName)
        .def_readwrite("CurrentHealth", &UGearboxPawnSnapshotRecord::CurrentHealth)
        .def_readwrite("MaxHealth", &UGearboxPawnSnapshotRecord::MaxHealth)
        .def_readwrite("DistanceToBestTarget", &UGearboxPawnSnapshotRecord::DistanceToBestTarget)
        .def_readwrite("AwarenessZones", &UGearboxPawnSnapshotRecord::AwarenessZones)
        .def_readwrite("AwarenessCollectionName", &UGearboxPawnSnapshotRecord::AwarenessCollectionName)
        .def_readwrite("BestTarget", &UGearboxPawnSnapshotRecord::BestTarget)
        .def_readwrite("TargetLocs", &UGearboxPawnSnapshotRecord::TargetLocs)
        .def_readwrite("LastVisibleTargetLocs", &UGearboxPawnSnapshotRecord::LastVisibleTargetLocs)
        .def_readwrite("AnimTree", &UGearboxPawnSnapshotRecord::AnimTree)
        .def_readwrite("Bones", &UGearboxPawnSnapshotRecord::Bones)
        .def_readwrite("ForgottenTargets", &UGearboxPawnSnapshotRecord::ForgottenTargets)
        .def_readwrite("NewEnemyName", &UGearboxPawnSnapshotRecord::NewEnemyName)
        .def_readwrite("NewEnemyArchName", &UGearboxPawnSnapshotRecord::NewEnemyArchName)
        .def_readwrite("NewEnemyAwarenessReason", &UGearboxPawnSnapshotRecord::NewEnemyAwarenessReason)
        .def_readwrite("CurrentMoveSpeed", &UGearboxPawnSnapshotRecord::CurrentMoveSpeed)
        .def_readwrite("MaxDesiredMoveSpeed", &UGearboxPawnSnapshotRecord::MaxDesiredMoveSpeed)
        .def_readwrite("ReasonForMovementFinish", &UGearboxPawnSnapshotRecord::ReasonForMovementFinish)
        .def_readwrite("Exposure", &UGearboxPawnSnapshotRecord::Exposure)
        .def_readwrite("DummyMesh", &UGearboxPawnSnapshotRecord::DummyMesh)
        .def_readwrite("DummyMesh_LOD", &UGearboxPawnSnapshotRecord::DummyMesh_LOD)
        .def_readwrite("TargetViewCones", &UGearboxPawnSnapshotRecord::TargetViewCones)
        .def_readwrite("PawnLocalDestination", &UGearboxPawnSnapshotRecord::PawnLocalDestination)
        .def_readwrite("FailedMoveSpots", &UGearboxPawnSnapshotRecord::FailedMoveSpots)
        .def_readwrite("RouteCache", &UGearboxPawnSnapshotRecord::RouteCache)
        .def_readwrite("OriginalRouteCache", &UGearboxPawnSnapshotRecord::OriginalRouteCache)
        .def_readwrite("DesiredCoverLocation", &UGearboxPawnSnapshotRecord::DesiredCoverLocation)
        .def_readwrite("CurrentCoverLocation", &UGearboxPawnSnapshotRecord::CurrentCoverLocation)
        .def_readwrite("ScriptedMoveTargetLocation", &UGearboxPawnSnapshotRecord::ScriptedMoveTargetLocation)
        .def_readwrite("CoverSearchInnerRadius", &UGearboxPawnSnapshotRecord::CoverSearchInnerRadius)
        .def_readwrite("CoverSearchOuterRadius", &UGearboxPawnSnapshotRecord::CoverSearchOuterRadius)
        .def_readwrite("CoverSearchAngle", &UGearboxPawnSnapshotRecord::CoverSearchAngle)
        .def_readwrite("CoverSearchOrigin", &UGearboxPawnSnapshotRecord::CoverSearchOrigin)
        .def_readwrite("CoverSearchDirection", &UGearboxPawnSnapshotRecord::CoverSearchDirection)
        .def_readwrite("CoverSlotDebugList", &UGearboxPawnSnapshotRecord::CoverSlotDebugList)
        .def_readwrite("ICON_BLUELOCATION", &UGearboxPawnSnapshotRecord::ICON_BLUELOCATION)
        .def_readwrite("ICON_YELLOWLOCATION", &UGearboxPawnSnapshotRecord::ICON_YELLOWLOCATION)
        .def_readwrite("ICON_QUESTIONMARK", &UGearboxPawnSnapshotRecord::ICON_QUESTIONMARK)
        .def_readwrite("ICON_EXCLAMATIONPOINT", &UGearboxPawnSnapshotRecord::ICON_EXCLAMATIONPOINT)
        .def_readwrite("ICON_REDARROW", &UGearboxPawnSnapshotRecord::ICON_REDARROW)
        .def_readwrite("ICON_GREENARROW", &UGearboxPawnSnapshotRecord::ICON_GREENARROW)
        .def_readwrite("ICON_FAILED_MOVE_DEST", &UGearboxPawnSnapshotRecord::ICON_FAILED_MOVE_DEST)
        .def_readwrite("ICON_GREENCIRCLE", &UGearboxPawnSnapshotRecord::ICON_GREENCIRCLE)
        .def_readwrite("ICON_PATHPOINT", &UGearboxPawnSnapshotRecord::ICON_PATHPOINT)
        .def_readwrite("ICON_CURRENTCOVER", &UGearboxPawnSnapshotRecord::ICON_CURRENTCOVER)
        .def_readwrite("ICON_DESIREDCOVER", &UGearboxPawnSnapshotRecord::ICON_DESIREDCOVER)
        .def_readwrite("ICON_SCRIPTEDMOVETARGET", &UGearboxPawnSnapshotRecord::ICON_SCRIPTEDMOVETARGET)
        .def_readwrite("TargetData", &UGearboxPawnSnapshotRecord::TargetData)
        .def_readwrite("Holds", &UGearboxPawnSnapshotRecord::Holds)
        .def_readwrite("TargetHolds", &UGearboxPawnSnapshotRecord::TargetHolds)
        .def_readwrite("MovementHolds", &UGearboxPawnSnapshotRecord::MovementHolds)
        .def_readwrite("DemigodHolds", &UGearboxPawnSnapshotRecord::DemigodHolds)
        .def_readwrite("GodHolds", &UGearboxPawnSnapshotRecord::GodHolds)
          ;
}