#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0092_k_followgamma(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        KURAYAMI = 0;
        EV_InitPlayer(0);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        BGM_Play(MusicIDs_thee102);
        EV_CreatePlayer(2, Gamma_Main, -108.464f, 0.0f, -1699.866f, 65519, 13249, 0);
        EV_Wait(1);
        e102 = EV_GetPlayer(2);
        EV_SetAction(e102, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
        EV_SetPos(player, -367.72f, 0.0f, -1676.064f);
        EV_SetAng(player, 65506, 24276, 29);
        EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 0.5f, 1, 0);
        EV_CameraPos(1, 0, -380.13901f, 7.5879998f, -1679.489f);
        EV_CameraAng(1, 0, 63488, 48812, 0);
        EV_CameraPos(0, 200, -378.17801f, 7.198f, -1679.425f);
        EV_Wait(60);
        EV_CameraPos(1, 0, -84.848f, 15.529f, -1713.205f);
        EV_CameraAng(1, 0, 63488, 21164, 0);
        EV_MovePoint2(e102, 64.163002f, -0.44f, -1688.433f, 0.2f, 0.2f);
        EV_SetAction(e102, E102_ACTIONS[3], &E102_TEXLIST, 1.0f, 1, 0);
        EV_Wait(120);
        EV_MoveFree(e102);
        EV_Wait(1);
        EV_SetPos(e102, 64.163002f, -0.44f, -1608.433f);
        EV_SetAng(e102, 0, 0x8000, 0);
        EV_Wait(1);
        EV_CameraPos(1, 0, 66.852997f, 20.636f, -1565.666f);
        EV_CameraAng(1, 0, 64512, 0, 0);
        EV_MovePoint2(e102, 71.587997f, -0.57200003f, -1761.806f, 0.2f, 0.2f);
        EV_Wait(60);
        EV_CameraPos(1, 0, -380.13901f, 7.5879998f, -1599.489f);
        EV_CameraTargetObj(1, 0, player, 0.0f, 5.0f, 0.0f, 0);
        EV_RemovePlayer(2);
        EV_ClrAction(player);
        EV_SetAction(player, KNUCKLES_ACTIONS[83], &KNUCKLES_TEXLIST, 0.80000001f, 1, 0);
        EV_MovePoint2(player, -298.54901f, -0.461f, -1725.037f, 0.5f, 0.5f);
        EV_Wait(60);
        EV_CameraTargetFree();
        EV_CameraPos(1, 0, 35.901001f, 6.4660001f, -1605.8669f);
        EV_CameraAng(1, 0, 0, 64172, 0);
        EV_SetPos(player, 0.89700001f, -0.38f, -1587.124f);
        EV_SetAng(player, 65518, 25995, 65533);
        EV_Wait(1);
        EV_MovePoint2(player, 35.269001f, -0.45100001f, -1619.8979f, 0.69999999f, 0.69999999f);
        EV_Wait(1);
        EV_WaitMove(player);
        EV_ClrAction(player);
        EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 0.80000001f, 1, 0);
        EV_SetFace(player, "D");
        EV_SerifPlay(1124);
        EV_Msg(msgTbl_ev0092[TextLanguage][0]); //"\aHmmm, just what I thought."
        EV_Wait(1);
        EV_SerifWait();
        EV_ClrFace(player);
        EV_SetFace(player, "ED");
        EV_SerifPlay(1125);
        EV_Msg(msgTbl_ev0092[TextLanguage][1]); //"\aTime to make a house call!"
        EV_Wait(1);
        EV_SerifWait();
        EV_MsgClose();
        EV_ClrAction(player);
        EV_SetAction(player, KNUCKLES_ACTIONS[83], &KNUCKLES_TEXLIST, 0.80000001f, 1, 0);
        EV_MovePoint2(player, 71.587997f, -0.57200003f, -1761.806f, 0.2f, 0.2f);
        KURAYAMI = COverlayCreate(0.016666668f, 0.0f, 0.0f, 0.0f, 0.0f);
        EV_Wait(90);
        break;
    case 2:
        EV_RemovePlayer(2);
        EV_InitPlayer(0);
        if (KURAYAMI)
        {
            FreeTask(KURAYAMI);
            KURAYAMI = 0;
        }
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}