#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev016E[] = { 0 };

void ev016E_e_laserblaster(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        tikal = 0;
        EventSe_Init(1);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_InitPlayer(0);
        EV_SerifPlay(1718);
        EV_Wait(1);
        EV_SetAng(player, 0, 0xB643, 0);
        EV_Wait(1);
        EV_ClrAction(player);
        EV_SetAction(player, E102_ACTIONS[69], &E102_TEXLIST, 0.30000001f, 0, 16);
        EV_CameraChaseFree();
        EV_CameraTargetFree();
        EV_CameraTargetObj(1, 0, player, 0.0f, 14.5f, 0.0f, 0);
        EV_CameraChaseRM(0, 250, player, 10.0f, 0, 0x10E39, 0, 30.0f, 0, -0x471B, 0, 30.0f);
        EV_SetAction(player, E102_ACTIONS[70], &E102_TEXLIST, 0.5f, 1, 8);
        EV_Wait(10);
        EV_SerifWait();
        EV_SerifPlay(1555);
        EV_MsgW(0, msgTbl_ev016E[TextLanguage][0]); //"\aHere's your Laser Blaster."
        tikal = CTikalLight_Create(
            player->twp->pos.x + 6.803f,
            player->twp->pos.y + 35.999699f,
            player->twp->pos.z + 30.68f);
        EV_Wait(1);
        EV_SetMode(tikal, 0);
        EV_ClrPath(tikal);
        EV_SetPath(tikal, &epathtag_ev0170_tk, 3.0f, 2);
        EV_Wait(35);
        EV_MsgW(60, msgTbl_ev016E[TextLanguage][1]); //"\aIts blast damages enemies \nin a wide"...
        EV_Wait(5);
        EV_SetAction(player, E102_ACTIONS[71], &E102_TEXLIST, 0.40000001f, 0, 16);
        EV_Wait(35);
        EV_CameraChaseFree();
        EV_CameraTargetFree();
        EventSe_Play(0, 760, 1800);
        EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 16);
        EV_Wait(40);
        EV_MsgClose();
        EventSe_Volume(0, -120, 120);
        EV_Wait(70);
        EV_ClrPath(tikal);
        if (tikal)
        {
            FreeTask(tikal);
            tikal = 0;
        }
        EV_Wait(1);
        EV_SerifWait();
        break;
    case 2:
        EventSe_Close();
        EV_ClrPath(tikal);
        EV_InitPlayer(0);
        EV_CameraChaseFree();
        EV_CameraTargetFree();
        if (tikal)
        {
            FreeTask(tikal);
            tikal = 0;
        }
        EV_CameraOff();
        EV_PadOn();
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}