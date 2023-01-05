#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00B2[] = { 0 };

void ev00B2_e_afterfinalegg(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_InitPlayer(0);
        BGM_Play(MusicIDs_thee102);
        EV_SetPos(player, -125.1f, 0.31f, -16.18f);
        EV_SetAng(player, 0, 0xE5FF, 0);
        EV_Wait(1);
        EV_ClrAction(player);
        EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
        EV_CreatePlayer(2, Eggman, -162.8f, 0.20999999f, 22.26f, 0, 0x5982, 0);
        EV_Wait(1);
        eggman = EV_GetPlayer(2);
        EV_SetPos(eggman, -140.36f, 0.27000001f, 5.4400001f);
        EV_SetAng(eggman, 0, 0x5982, 0);
        EV_CameraPos(0, 0, -117.88f, 21.809999f, -14.69f);
        EV_CameraAng(0, 0, 0xF1A5, 0x5C50, 0);
        EV_ClrAction(eggman);
        EV_SetAction(eggman, &action_g_g0008_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
        EV_SerifPlay(1181);
        EV_MsgW(0, msgTbl_ev00B2[TextLanguage][0]); //"\aGood job, Gamma!"
        EV_Wait(1);
        EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 30);
        EV_Wait(40);
        EV_SetPos(eggman, -140.36f, 0.27000001f, 5.4400001f);
        EV_SetAng(eggman, 0, 0x5982, 0);
        EV_ClrAction(eggman);
        EV_SetAction(eggman, &action_g_g0002_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
        EV_CameraPos(0, 0, -134.55f, 11.18f, -35.080002f);
        EV_CameraAng(0, 0, 0, 0x80F2, 0);
        EV_MovePoint2(eggman, -0.74000001f, 0.41999999f, 4.7199998f, 0.30000001f, 0.059999999f);
        EV_SerifPlay(1182);
        EV_MsgW(0, msgTbl_ev00B2[TextLanguage][1]); //"\aI didn't think \nyou had what it take"...
        EV_Wait(30);
        EV_SetAction(player, &action_e_e0033_e102, &E102_TEXLIST, 1.0f, 0, 16);
        EV_Wait(10);
        EV_WaitAction(player);
        EV_SetPos(player, -125.1f, 0.31f, -16.18f);
        EV_SetAng(player, 0, 0x3A55, 0);
        EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
        EV_CameraPos(0, 0, -88.379997f, 16.059999f, -20.040001f);
        EV_CameraAng(0, 0, 0xFA00, 0x50F2, 0);
        EV_MsgClose();
        EV_Wait(50);
        break;
    case 2:
        EV_SetPos(player, -125.1f, 0.31f, -16.18f);
        EV_SetAng(player, 0, 0x3A55, 0);
        EV_Wait(1);
        EV_InitPlayer(0);
        EV_InitPlayer(2);
        EV_RemovePlayer(2);
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}