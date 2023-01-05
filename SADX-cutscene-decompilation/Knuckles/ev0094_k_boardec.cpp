#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0094[] = { 0 };

void ev0094_k_boardec(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_Wait(1);
        EV_InitPlayer(0);
        EV_SetPos(player, -246.60001f, 733.52002f, 1145.28f);
        EV_SetAng(player, 0, 0x6714, 0);
        EV_Wait(1);
        BGM_Play(MusicIDs_egcarer1);
        EV_CameraPos(0, 0, -212.31f, 738.56f, 1004.03f);
        EV_CameraTargetObj(1, 0, player, 0.0f, 6.0f, 0.0f, 0);
        EV_ClrAction(player);
        EV_SetAction(player, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 2.0f, 1, 0);
        EV_MovePoint2(player, -147.03f, 733.51001f, 1012.42f, 2.0f, 0.059999999f);
        EV_Wait(120);
        EV_ClrAction(player);
        EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 8);
        EV_Wait(30);
        EV_CameraTargetFree();
        EV_CameraPos(0, 0, -150.91f, 738.19f, 1002.91f);
        EV_CameraAng(0, 0, 0x823, 0x965F, 0);
        EV_CameraPos(0, 240, -141.78999f, 738.78998f, 1002.24f);
        EV_CameraAng(0, 240, 0x323, 0x735F, 0);
        EV_Wait(15);
        EV_ClrFace(player);
        EV_SetFace(player, "CDECDE");
        EV_SerifPlay(1126);
        EV_MsgW(70, msgTbl_ev0094[TextLanguage][0]); //"\aNow we'll see who's so \neasily trick"...
        EV_ClrFace(player);
        EV_MsgClose();
        EV_Wait(15);
        EV_ClrFace(player);
        EV_SetFace(player, "CDECDE");
        EV_SerifPlay(1127);
        EV_MsgW(90, msgTbl_ev0094[TextLanguage][1]); //"\aI can sense the Emeralds\nare here so"...
        EV_ClrFace(player);
        EV_MsgClose();
        EV_Wait(30);
        break;
    case 2:
        EV_InitPlayer(0);
        EV_SetPos(player, -146.97f, 733.52002f, 1012.34f);
        EV_SetAng(player, 0, 0x65D0, 0);
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}