#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_GenericAttack()
{
    py::class_< UAction_GenericAttack,  UAction_Burrow   >("UAction_GenericAttack")
        .def_readwrite("Limits", &UAction_GenericAttack::Limits)
        .def_readwrite("CrouchIdleChance", &UAction_GenericAttack::CrouchIdleChance)
        .def_readwrite("CrouchMoveChance", &UAction_GenericAttack::CrouchMoveChance)
        .def_readwrite("CheckRate", &UAction_GenericAttack::CheckRate)
        .def_readwrite("Type", &UAction_GenericAttack::Type)
        .def_readwrite("Validity", &UAction_GenericAttack::Validity)
        .def_readwrite("AttackLoc", &UAction_GenericAttack::AttackLoc)
        .def_readwrite("MyZone", &UAction_GenericAttack::MyZone)
        .def_readwrite("IdleTime", &UAction_GenericAttack::IdleTime)
        .def("StaticClass", &UAction_GenericAttack::StaticClass, py::return_value_policy::reference)
        .def("ReachedAttackLoc", &UAction_GenericAttack::ReachedAttackLoc)
        .def("HalfExposed", &UAction_GenericAttack::HalfExposed)
        .def("GetDotToTarget", &UAction_GenericAttack::GetDotToTarget)
        .def("TargetReachable", &UAction_GenericAttack::TargetReachable)
        .def("GetNearestLocationToTarget", &UAction_GenericAttack::GetNearestLocationToTarget)
        .def("eventPathFind", &UAction_GenericAttack::eventPathFind)
        .def("WantsPathFind", &UAction_GenericAttack::WantsPathFind)
        .def("CheckExpiredZone", &UAction_GenericAttack::CheckExpiredZone)
        .def("OnlyExpireMyZone", &UAction_GenericAttack::OnlyExpireMyZone)
        .def("CanCheckExpiredZone", &UAction_GenericAttack::CanCheckExpiredZone)
        .def("CheckForNewZone", &UAction_GenericAttack::CheckForNewZone)
        .def("CanClaimZones", &UAction_GenericAttack::CanClaimZones)
        .def("ValidLocation", &UAction_GenericAttack::ValidLocation)
        .def("CheckAttackLocation", &UAction_GenericAttack::CheckAttackLocation)
        .def("UnclaimMovement", &UAction_GenericAttack::UnclaimMovement)
        .def("ClaimMovement", &UAction_GenericAttack::ClaimMovement)
        .def("CanMove", &UAction_GenericAttack::CanMove)
        .def("CheckStateTransition", &UAction_GenericAttack::CheckStateTransition)
        .def("GetDesiredState", &UAction_GenericAttack::GetDesiredState)
        .def("TargetIsDownedPlayer", &UAction_GenericAttack::TargetIsDownedPlayer)
        .def("eventUpdate", &UAction_GenericAttack::eventUpdate)
        .def("eventStop", &UAction_GenericAttack::eventStop)
        .def("eventStart", &UAction_GenericAttack::eventStart)
        .def("eventCanRun", &UAction_GenericAttack::eventCanRun)
        .def("eventInit", &UAction_GenericAttack::eventInit)
        .def("InitData", &UAction_GenericAttack::InitData)
        .staticmethod("StaticClass")
  ;
}