#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00BE[] = { 0 };

void ev00BE_e_exitwrongroom(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        BGM_Play(MusicIDs_thee102);
        EV_SetPos(player, 54.689999f, 0.0f, 185.71201f);
        EV_SetAng(player, 0, 0xA851, 0);
        EV_CameraPos(1, 0, 38.5f, 7.0f, 190.3f);
        EV_CameraAng(1, 0, 0xF00, 0xB200, 0);
        EV_ClrAction(player);
        EV_SetAction(player, E102_ACTIONS[3], &E102_TEXLIST, 0.69999999f, 1, 1);
        EV_MovePoint2(player, 29.200001f, 0.0f, 157.8f, 0.80000001f, 0.059999999f);
        EV_CameraPos(1, 40, 38.5f, 8.5f, 190.3f);
        EV_CameraTargetObj(1, 0, player, 0.0f, 15.0f, 0.0f, 0x100);
        EV_WaitMove(player);
        EV_CameraTargetFree();
        EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 0.60000002f, 1, 16);
        EV_Wait(60);
        EV_CameraPos(1, 0, 13.0f, 3.7f, 141.5f);
        EV_CameraAng(1, 0, 0x200, 0x9F00, 0);
        EV_CameraPos(1, 160, 13.0f, 11.7f, 141.5f);
        EV_CameraAng(1, 0, 0x200, 0x9F00, 0);
        EV_MsgW(100, msgTbl_ev00BE[TextLanguage][0]); //"\a..."
        EV_MsgCls();
        EV_Wait(30);
        EV_SerifPlay(1241);
        EV_MsgW(80, msgTbl_ev00BE[TextLanguage][1]); //"\aThis is the wrong room."
        EV_Wait(90);
        EV_MsgCls();
        break;
    case 2:
        EV_CameraOff();
        EV_PadOn();
        EV_InitPlayer(0);
        break;
    }
}