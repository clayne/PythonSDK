#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowVehicleBase(py::module &m)
{
    py::class_< AWillowVehicleBase,  ASVehicle   >(m, "AWillowVehicleBase")
		.def_static("StaticClass", &AWillowVehicleBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIResourcePoolProvider", &AWillowVehicleBase::VfTable_IIResourcePoolProvider)
        .def_readwrite("VfTable_IIBodyPawn", &AWillowVehicleBase::VfTable_IIBodyPawn)
        .def_readwrite("CustomGravityZ", &AWillowVehicleBase::CustomGravityZ)
        .def_readwrite("SightOriginType", &AWillowVehicleBase::SightOriginType)
        .def_readwrite("SightOffset", &AWillowVehicleBase::SightOffset)
        .def_readwrite("SightSocket", &AWillowVehicleBase::SightSocket)
        .def_readwrite("LookingYaw", &AWillowVehicleBase::LookingYaw)
        .def_readwrite("LookingYawSpeed", &AWillowVehicleBase::LookingYawSpeed)
        .def_readwrite("LightProjMgr", &AWillowVehicleBase::LightProjMgr)
        .def_readwrite("WeaponAmmo", &AWillowVehicleBase::WeaponAmmo)
        .def_readwrite("MaxWeaponAmmo", &AWillowVehicleBase::MaxWeaponAmmo)
        .def_readwrite("WeaponTypeScaleformName", &AWillowVehicleBase::WeaponTypeScaleformName)
        .def_readwrite("WeaponTypeScaleformDLCClip", &AWillowVehicleBase::WeaponTypeScaleformDLCClip)
        .def_readwrite("ExitAnimationInUse", &AWillowVehicleBase::ExitAnimationInUse)
        .def("Destroyed_HandleDriver", &AWillowVehicleBase::Destroyed_HandleDriver)
        .def("TeleportVehicleToStation", &AWillowVehicleBase::TeleportVehicleToStation)
        .def("TeleportVehicleToLocation", &AWillowVehicleBase::TeleportVehicleToLocation)
        .def("NoFailSetPawnLocation", &AWillowVehicleBase::NoFailSetPawnLocation)
        .def("UnsitAnimFinished", &AWillowVehicleBase::UnsitAnimFinished)
        .def("TeleportExitingDriver", &AWillowVehicleBase::TeleportExitingDriver)
        .def("FindAutoExitGearbox", &AWillowVehicleBase::FindAutoExitGearbox)
        .def("PlaceExitingDriver", &AWillowVehicleBase::PlaceExitingDriver)
        .def("ExitAnimIsSafeToUse", &AWillowVehicleBase::ExitAnimIsSafeToUse)
        .def("GetExitLocationForAnim", &AWillowVehicleBase::GetExitLocationForAnim)
        .def("ExitLocationIsSafeToUse", &AWillowVehicleBase::ExitLocationIsSafeToUse)
        .def("ResurrectVehicle", &AWillowVehicleBase::ResurrectVehicle)
        .def("GetWillowVehicle", &AWillowVehicleBase::GetWillowVehicle, py::return_value_policy::reference)
        .def("ClientUnsitDriver", &AWillowVehicleBase::ClientUnsitDriver)
        .def("GetDefaultExitLocation", &AWillowVehicleBase::GetDefaultExitLocation)
        .def("GetLightProjMgrFor", &AWillowVehicleBase::GetLightProjMgrFor, py::return_value_policy::reference)
        .def("IsOccupantAllowedToTakeDamage", &AWillowVehicleBase::IsOccupantAllowedToTakeDamage)
        .def("CanBeBaseForPawn", &AWillowVehicleBase::CanBeBaseForPawn)
        .def("GetPawnToTeleport", &AWillowVehicleBase::GetPawnToTeleport, py::return_value_policy::reference)
        .def("ProcessViewRotationInVehicle", &AWillowVehicleBase::ProcessViewRotationInVehicle)
        .def("ComputeViewPitchRange", [](AWillowVehicleBase &self , class UPassengerCameraDefinition* Camera, struct FRotator VehicleRotation, struct FRotator ViewRotation) { float* pyout_ViewPitchHorizontal = (float*)malloc(sizeof(float)) ; float* pyout_ViewPitchMin = (float*)malloc(sizeof(float)) ; float* pyout_ViewPitchMax = (float*)malloc(sizeof(float)) ;   self.ComputeViewPitchRange(Camera, VehicleRotation, ViewRotation, pyout_ViewPitchHorizontal, pyout_ViewPitchMin, pyout_ViewPitchMax); return py::make_tuple(*pyout_ViewPitchHorizontal, *pyout_ViewPitchMin, *pyout_ViewPitchMax); })
        .def("GetAWillowAIPawn", &AWillowVehicleBase::GetAWillowAIPawn, py::return_value_policy::reference)
        .def("GetAWillowPlayerPawn", &AWillowVehicleBase::GetAWillowPlayerPawn, py::return_value_policy::reference)
        .def("GetAWillowPawn", &AWillowVehicleBase::GetAWillowPawn, py::return_value_policy::reference)
        .def("GetResourcePoolForResourceDefinition", &AWillowVehicleBase::GetResourcePoolForResourceDefinition)
        .def("VehicleAdjustInput", [](AWillowVehicleBase &self ) { float* pyaTurn = (float*)malloc(sizeof(float)) ; float* pyaLookUp = (float*)malloc(sizeof(float)) ; float* pyaForward = (float*)malloc(sizeof(float)) ; float* pyaStrafe = (float*)malloc(sizeof(float)) ;   self.VehicleAdjustInput(pyaTurn, pyaLookUp, pyaForward, pyaStrafe); return py::make_tuple(*pyaTurn, *pyaLookUp, *pyaForward, *pyaStrafe); })
        .def("VehicleNoLookBack", &AWillowVehicleBase::VehicleNoLookBack)
        .def("VehicleLookBack", &AWillowVehicleBase::VehicleLookBack)
        .def("GetExitAnimEndPosition", &AWillowVehicleBase::GetExitAnimEndPosition)
        .def("AttachDriver", &AWillowVehicleBase::AttachDriver)
        .def("eventDriverLeave", &AWillowVehicleBase::eventDriverLeave)
        .def("DriverAllowedToLeave", &AWillowVehicleBase::DriverAllowedToLeave)
        .def("DriverEnter", &AWillowVehicleBase::DriverEnter)
        .def("UnPossessed", &AWillowVehicleBase::UnPossessed)
        .def("NeedToTurn", &AWillowVehicleBase::NeedToTurn)
        .def("GetDamageScaling", &AWillowVehicleBase::GetDamageScaling)
        .def("BotFire", &AWillowVehicleBase::BotFire)
        .def("ChooseFireMode", &AWillowVehicleBase::ChooseFireMode)
        .def("Suicide", &AWillowVehicleBase::Suicide)
        .def("ServerChangeSeat", &AWillowVehicleBase::ServerChangeSeat)
        .def("AdjacentSeat", &AWillowVehicleBase::AdjacentSeat)
        .def("OnTurretStatusChange", &AWillowVehicleBase::OnTurretStatusChange)
        .def("IsTargetable", &AWillowVehicleBase::IsTargetable)
        .def("GetVehicleAndSeatIndex", [](AWillowVehicleBase &self ) { class AWillowVehicle** pyWVehicle = 0 ; int* pySeatIndex = (int*)malloc(sizeof(int)) ;  bool ret =  self.GetVehicleAndSeatIndex(pyWVehicle, pySeatIndex); return py::make_tuple(ret, *pyWVehicle, *pySeatIndex); })
        .def("TickReplicatedAmmoCount", &AWillowVehicleBase::TickReplicatedAmmoCount)
          ;
}