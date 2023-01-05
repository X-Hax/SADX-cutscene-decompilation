#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev016F[] = { 0 };

void ev016F_e_jetbooster(int state)
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
        EV_SetPos(player, -73.169998f, 1.0f, -36.759998f);
        EV_SetAng(player, 0, 0xB79, 0);
        EV_Wait(1);
        EV_ClrAction(player);
        EV_SetAction(player, E102_ACTIONS[66], &E102_TEXLIST, 0.2f, 0, 8);
        EV_SerifPlay(1718);
        EV_Wait(1);
        EV_CameraChaseFree();
        EV_CameraTargetFree();
        EV_CameraTargetObj(1, 0, player, 0.0f, 13.5f, 0.0f, 0);
        EV_CameraChaseRM(0, 250, player, 18.0f, 0x71C, 0x638E, 0, 28.0f, 0, -0xF8E3, 0, 28.0f);
        EV_SetAction(player, E102_ACTIONS[67], &E102_TEXLIST, 0.40000001f, 1, 16);
        EV_Wait(10);
        EV_SerifWait();
        EV_SerifPlay(1554);
        EV_MsgW(0, msgTbl_ev016F[TextLanguage][0]); //"\aHere's the Jet Booster."
        tikal = CTikalLight_Create(
            player->twp->pos.x + 6.803f,
            player->twp->pos.y + 35.999699f,
            player->twp->pos.z + 30.68f);
        EV_Wait(1);
        EV_SetMode(tikal, 0);
        EV_ClrPath(tikal);
        EV_SetPath(tikal, &epathtag_ev0170_tk, 3.0f, 2);
        EV_Wait(25);
        EV_MsgW(60, msgTbl_ev016F[TextLanguage][1]); //"\aPress and hold the jump button \nand "...
        EV_Wait(5);
        EV_SetAction(player, E102_ACTIONS[68], &E102_TEXLIST, 0.40000001f, 0, 8);
        EV_Wait(40);
        EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 16);
        EV_Wait(40);
        EV_CameraChaseFree();
        EV_CameraTargetFree();
        EV_CameraPos(1, 100, -70.0f, 17.41f, -18.85f);
        EV_CameraAng(1, 100, 0xF982, 0x71D, 0);
        EventSe_Play(0, 760, 1800);
        EV_Wait(35);
        EventSe_Volume(0, -120, 120);
        EV_Wait(80);
        EV_MsgClose();
        EV_Wait(10);
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