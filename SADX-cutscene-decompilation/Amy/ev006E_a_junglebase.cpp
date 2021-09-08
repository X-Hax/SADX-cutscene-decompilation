#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev006E[] = {
    (char*)("VER2_WING"), &VER2_WING_TEXLIST
};

void ev006E_a_junglebase(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        bird = 0;
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_InitPlayer(0);
        BGM_Play(MusicIDs_theamy);
        bird = SetEventBirdie0();
        EV_SetPos(bird, 74.419998f, 7.0f, -1743.58f);
        EV_SetAng(bird, 0, 0x5351, 0);
        EV_Wait(1);
        EV_SetMode(bird, 0);
        EV_SetPos(bird, 79.220001f, 6.0100002f, -1635.8101f);
        EV_SetAng(bird, 0, 0x9E6C, 0);
        EV_ClrAction(bird);
        EV_SetAction(bird, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
        EV_SetPos(player, 73.040001f, -0.41f, -1625.85f);
        EV_SetAng(player, 0, 0x85BE, 0);
        EV_Wait(1);
        EV_MovePoint2(player, 72.800003f, -0.41f, -1636.2f, 1.0f, 0.059999999f);
        EV_SetAction(player, AMY_ACTIONS[44], &AMY_TEXLIST, 1.0f, 0, 0);
        EV_CameraPos(0, 0, 56.27f, 6.6900001f, -1611.0699f);
        EV_CameraAng(0, 0, 0xFF28, 0xEE6C, 0);
        EV_Wait(8);
        EV_SetAction(player, &action_a_a0004_amy, &AMY_TEXLIST, 1.0f, 1, 16);
        EV_Wait(50);
        EV_CameraPos(0, 50, 67.959999f, 5.9499998f, -1645.84f);
        EV_CameraAng(0, 50, 0xFF28, 0x976C, 0);
        EV_Wait(50);
        EV_ClrFace(player);
        EV_SetFace(player, "DED");
        EV_SerifPlay(977);
        EV_MsgW(0, msgTbl_ev006E[TextLanguage][0]); //"\aHmmmm... \nI don't remember this brid"...
        EV_Wait(70);
        EV_CameraPos(0, 0, -13.79f, 36.59f, -1577.1801f);
        EV_CameraAng(0, 0, 0xF828, 0xED6C, 0);
        EV_CameraPos(0, 180, -13.6f, 38.790001f, -1577.5601f);
        EV_CameraAng(0, 200, 0xF828, 0xF1E6, 0);
        EV_Wait(120);
        EV_CameraPos(0, 0, 67.959999f, 5.9499998f, -1645.84f);
        EV_CameraAng(0, 0, 0xFF28, 0x976C, 0);
        EV_SetFace(player, "CD");
        EV_SerifPlay(978);
        EV_MsgW(0, msgTbl_ev006E[TextLanguage][1]); //"\aLooks dangerously suspicious!"
        EV_SetAction(player, &action_a_a0800_amy, &AMY_TEXLIST, 1.0f, 0, 16);
        EV_Wait(40);
        EV_SetAction(player, &action_a_a0828_amy, &AMY_TEXLIST, 1.0f, 0, 8);
        EV_Wait(30);
        EV_SetAction(player, &action_a_a0829_amy, &AMY_TEXLIST, 1.0f, 1, 0);
        EV_Wait(30);
        EV_MsgClose();
        EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 8);
        EV_Wait(60);
        EV_MsgW(0, msgTbl_ev006E[TextLanguage][2]); //"\a..."
        EV_Wait(30);
        EV_SetFace(player, "EE");
        EV_SerifPlay(979);
        EV_MsgW(0, msgTbl_ev006E[TextLanguage][3]); //"\aWanna go?"
        EV_Wait(60);
        EV_MsgClose();
        EV_Wait(10);
        break;
    case 2:
        EV_InitPlayer(0);
        EV_FreeObject(&bird);
        EV_SetPos(player, 72.800003f, -0.41f, -1636.2f);
        EV_SetAng(player, 0, 34238, 0);
        EV_Wait(1);
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}