#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_Drive_AlongsideTarget(py::module &m)
{
    py::class_< UAction_Drive_AlongsideTarget,  UWillowActionSequencePawn   >(m, "UAction_Drive_AlongsideTarget")
		.def_static("StaticClass", &UAction_Drive_AlongsideTarget::StaticClass, py::return_value_policy::reference)
        .def_readwrite("IdealDistanceFromTarget", &UAction_Drive_AlongsideTarget::IdealDistanceFromTarget)
        .def_readwrite("IdealDistanceAheadOfTarget", &UAction_Drive_AlongsideTarget::IdealDistanceAheadOfTarget)
        .def_readwrite("MinSpeedMultiplierWhenAheadOfTarget", &UAction_Drive_AlongsideTarget::MinSpeedMultiplierWhenAheadOfTarget)
        .def_readwrite("MaxSpeedMultiplierWhenAheadOfTarget", &UAction_Drive_AlongsideTarget::MaxSpeedMultiplierWhenAheadOfTarget)
        .def_readwrite("SpeedDamperWhenRightAlongsideTarget", &UAction_Drive_AlongsideTarget::SpeedDamperWhenRightAlongsideTarget)
        .def_readwrite("DistanceAheadOfTargetToAimFor", &UAction_Drive_AlongsideTarget::DistanceAheadOfTargetToAimFor)
        .def_readwrite("NudgeDistance", &UAction_Drive_AlongsideTarget::NudgeDistance)
        .def_readwrite("TargetForwardVelocityStartAction", &UAction_Drive_Pursuit::TargetForwardVelocityStartAction)
        .def_readwrite("TargetForwardVelocityStopAction", &UAction_Drive_Pursuit::TargetForwardVelocityStopAction)
        .def_readwrite("TimeBeforeExitingActionIfTargetSlowsDown", &UAction_Drive_Pursuit::TimeBeforeExitingActionIfTargetSlowsDown)
        .def_readwrite("MaxSpeedMultiplier", &UAction_Drive_Pursuit::MaxSpeedMultiplier)
        .def_readwrite("SpeedMultiplierDuringSharpTurns", &UAction_Drive_Pursuit::SpeedMultiplierDuringSharpTurns)
        .def_readwrite("DistanceToTargetStartAction", &UAction_Drive_Pursuit::DistanceToTargetStartAction)
        .def_readwrite("DistanceToTargetStopAction", &UAction_Drive_Pursuit::DistanceToTargetStopAction)
        .def_readwrite("DistanceStopUsingBreadcrumbs", &UAction_Drive_Pursuit::DistanceStopUsingBreadcrumbs)
        .def_readwrite("DistanceToTargetPursue", &UAction_Drive_Pursuit::DistanceToTargetPursue)
        .def_readwrite("DistanceToTargetRetreat", &UAction_Drive_Pursuit::DistanceToTargetRetreat)
        .def_readwrite("CanUseHandbrakeSpeedThreshold", &UAction_Drive_Pursuit::CanUseHandbrakeSpeedThreshold)
        .def_readwrite("NoHandbrakeSpeedThreshold", &UAction_Drive_Pursuit::NoHandbrakeSpeedThreshold)
        .def_readwrite("MyVehicle", &UAction_Drive_Pursuit::MyVehicle)
        .def_readwrite("LastTimeTargetWasFastEnough", &UAction_Drive_Pursuit::LastTimeTargetWasFastEnough)
        .def_readwrite("PursuitPoint", &UAction_Drive_Pursuit::PursuitPoint)
        .def_readwrite("SpeedMultiplier", &UAction_Drive_Pursuit::SpeedMultiplier)
        .def_readwrite("TimeOfLastBraking", &UAction_Drive_Pursuit::TimeOfLastBraking)
        .def_readwrite("MyCombatArea", &UAction_Drive_Pursuit::MyCombatArea)
        .def_readwrite("TargetCombatArea", &UAction_Drive_Pursuit::TargetCombatArea)
        .def_readwrite("LastBoostTime", &UAction_Drive_Pursuit::LastBoostTime)
        .def_readwrite("TimeStampOutsideCombatArea", &UAction_Drive_Pursuit::TimeStampOutsideCombatArea)
        .def_readwrite("TargetVehicle", &UAction_Drive_Pursuit::TargetVehicle)
        .def_readwrite("EnemyPosBreadCrumbs", &UAction_Drive_Pursuit::EnemyPosBreadCrumbs)
        .def_readwrite("CurrentState", &UAction_Drive_Pursuit::CurrentState)
        .def_readwrite("I", &UAction_Drive_Pursuit::I)
        .def_readwrite("MinTimeSpentBraking", &UAction_Drive_Pursuit::MinTimeSpentBraking)
        .def_readwrite("RequiredDelayBetweenBrakings", &UAction_Drive_Pursuit::RequiredDelayBetweenBrakings)
        .def_readwrite("RequiredDelayBetweenBoosts", &UAction_Drive_Pursuit::RequiredDelayBetweenBoosts)
        .def_readwrite("BreadCrumbCoalesceThreshold", &UAction_Drive_Pursuit::BreadCrumbCoalesceThreshold)
        .def_readwrite("OutOfCombatAreaGracePeriod", &UAction_Drive_Pursuit::OutOfCombatAreaGracePeriod)
        .def("GetPursuitPointAndSpeedMultiplier", &UAction_Drive_AlongsideTarget::GetPursuitPointAndSpeedMultiplier)
        .def("DetermineClosestFlankPoint", &UAction_Drive_AlongsideTarget::DetermineClosestFlankPoint)
        .def("DisplayDebugBreadCrumbs", &UAction_Drive_Pursuit::DisplayDebugBreadCrumbs)
        .def("ReachedBreadCrumb", &UAction_Drive_Pursuit::ReachedBreadCrumb)
        .def("UpdateBreadCrumbs", &UAction_Drive_Pursuit::UpdateBreadCrumbs)
        .def("IsSharpTurn", &UAction_Drive_Pursuit::IsSharpTurn)
        .def("eventStop", &UAction_Drive_Pursuit::eventStop)
        .def("eventStart", &UAction_Drive_Pursuit::eventStart)
        .def("eventCanRun", &UAction_Drive_Pursuit::eventCanRun)
        .def("ComputeCurrentState", &UAction_Drive_Pursuit::ComputeCurrentState)
          ;
}