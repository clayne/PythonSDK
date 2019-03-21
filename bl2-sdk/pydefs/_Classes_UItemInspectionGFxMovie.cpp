#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemInspectionGFxMovie()
{
    py::class_< UItemInspectionGFxMovie,  UWillowGFxMovie3D   >("UItemInspectionGFxMovie")
        .def_readwrite("MyInspDef", &UItemInspectionGFxMovie::MyInspDef)
        .def_readwrite("StartTime", &UItemInspectionGFxMovie::StartTime)
        .def_readwrite("MyInspectionMesh", &UItemInspectionGFxMovie::MyInspectionMesh)
        .def_readwrite("InvDef", &UItemInspectionGFxMovie::InvDef)
        .def_readwrite("MeshRotation", &UItemInspectionGFxMovie::MeshRotation)
        .def_readonly("UnknownData00", &UItemInspectionGFxMovie::UnknownData00)
        .def_readwrite("MeshRotationQuat", &UItemInspectionGFxMovie::MeshRotationQuat)
        .def_readwrite("MeshRotationPitchQuat", &UItemInspectionGFxMovie::MeshRotationPitchQuat)
        .def_readwrite("MeshRotationYawQuat", &UItemInspectionGFxMovie::MeshRotationYawQuat)
        .def_readwrite("CurrentItemScale", &UItemInspectionGFxMovie::CurrentItemScale)
        .def_readwrite("CurrentOffset", &UItemInspectionGFxMovie::CurrentOffset)
        .def_readwrite("StartFOV", &UItemInspectionGFxMovie::StartFOV)
        .def_readwrite("OffsetBounds", &UItemInspectionGFxMovie::OffsetBounds)
        .def_readwrite("DragMouseLoc", &UItemInspectionGFxMovie::DragMouseLoc)
        .def_readwrite("MouseDragScale_Rotate", &UItemInspectionGFxMovie::MouseDragScale_Rotate)
        .def_readwrite("MouseDragScale_Pan", &UItemInspectionGFxMovie::MouseDragScale_Pan)
        .def_readwrite("MouseWheelScale", &UItemInspectionGFxMovie::MouseWheelScale)
        .def_readwrite("KeyPanScale", &UItemInspectionGFxMovie::KeyPanScale)
        .def_readwrite("TooltipsText_Pan_Mouse", &UItemInspectionGFxMovie::TooltipsText_Pan_Mouse)
        .def_readwrite("TooltipsText_Pan_Controller", &UItemInspectionGFxMovie::TooltipsText_Pan_Controller)
        .def_readwrite("TooltipsText_Rotate_Mouse", &UItemInspectionGFxMovie::TooltipsText_Rotate_Mouse)
        .def_readwrite("TooltipsText_Rotate_Controller", &UItemInspectionGFxMovie::TooltipsText_Rotate_Controller)
        .def_readwrite("TooltipsText_Zoom_Mouse", &UItemInspectionGFxMovie::TooltipsText_Zoom_Mouse)
        .def_readwrite("TooltipsText_Zoom_Controller", &UItemInspectionGFxMovie::TooltipsText_Zoom_Controller)
        .def_readwrite("TooltipsText_Screenshot_Keyboard", &UItemInspectionGFxMovie::TooltipsText_Screenshot_Keyboard)
        .def_readwrite("TooltipsText_Screenshot_Controller", &UItemInspectionGFxMovie::TooltipsText_Screenshot_Controller)
        .def_readwrite("TooltipsText_Close", &UItemInspectionGFxMovie::TooltipsText_Close)
        .def_readwrite("RandomIntroRotation", &UItemInspectionGFxMovie::RandomIntroRotation)
        .def_readwrite("RandomIntroAlphaPower", &UItemInspectionGFxMovie::RandomIntroAlphaPower)
        .def_readwrite("ItemCard", &UItemInspectionGFxMovie::ItemCard)
        .def_readwrite("CardContents", &UItemInspectionGFxMovie::CardContents)
        .def_readwrite("ScreenShotCounter", &UItemInspectionGFxMovie::ScreenShotCounter)
        .def_readwrite("SerialNumberString", &UItemInspectionGFxMovie::SerialNumberString)
        .def_readwrite("DemoPerkCode", &UItemInspectionGFxMovie::DemoPerkCode)
        .def("StaticClass", &UItemInspectionGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("ShowDemoPerkCreatedDialog", &UItemInspectionGFxMovie::ShowDemoPerkCreatedDialog)
        .def("HandleCreateDemoPerkResponse", &UItemInspectionGFxMovie::HandleCreateDemoPerkResponse)
        .def("SaveDemoPerk", &UItemInspectionGFxMovie::SaveDemoPerk)
        .def("TrySaveDemoPerk", &UItemInspectionGFxMovie::TrySaveDemoPerk)
        .def("eventUpdateTooltips", &UItemInspectionGFxMovie::eventUpdateTooltips)
        .def("MakeQuatFromAxisAndAngle", &UItemInspectionGFxMovie::MakeQuatFromAxisAndAngle)
        .def("HandleMouseDrag", &UItemInspectionGFxMovie::HandleMouseDrag)
        .def("StopMouseDrag", &UItemInspectionGFxMovie::StopMouseDrag)
        .def("StartMouseDrag", &UItemInspectionGFxMovie::StartMouseDrag)
        .def("GetBoundsFor", &UItemInspectionGFxMovie::GetBoundsFor)
        .def("GetCurrentMeshScale", &UItemInspectionGFxMovie::GetCurrentMeshScale)
        .def("GetCurrentMeshRotation", &UItemInspectionGFxMovie::GetCurrentMeshRotation)
        .def("IntroAlpha", &UItemInspectionGFxMovie::IntroAlpha)
        .def("PlayingIntro", &UItemInspectionGFxMovie::PlayingIntro)
        .def("ScaleMesh", &UItemInspectionGFxMovie::ScaleMesh)
        .def("PanMesh", &UItemInspectionGFxMovie::PanMesh)
        .def("RotateMesh", &UItemInspectionGFxMovie::RotateMesh)
        .def("eventOnClose", &UItemInspectionGFxMovie::eventOnClose)
        .def("InspectItem", &UItemInspectionGFxMovie::InspectItem)
        .def("HandleInputAxis", &UItemInspectionGFxMovie::HandleInputAxis)
        .def("HandleInputKey", &UItemInspectionGFxMovie::HandleInputKey)
        .def("eventUpdateFrameForAspectRatio", &UItemInspectionGFxMovie::eventUpdateFrameForAspectRatio)
        .def("eventStart", &UItemInspectionGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}