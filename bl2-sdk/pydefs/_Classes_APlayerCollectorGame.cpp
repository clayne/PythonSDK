#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APlayerCollectorGame(py::module &m)
{
    py::class_< APlayerCollectorGame,  AGameInfo   >(m, "APlayerCollectorGame")
		.def_static("StaticClass", &APlayerCollectorGame::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NumberOfClientsToWaitFor", &APlayerCollectorGame::NumberOfClientsToWaitFor)
        .def_readwrite("URLToLoad", &APlayerCollectorGame::URLToLoad)
        .def("eventGetSeamlessTravelActorList", &APlayerCollectorGame::eventGetSeamlessTravelActorList)
        .def("eventLogin", &APlayerCollectorGame::eventLogin, py::return_value_policy::reference)
          ;
}