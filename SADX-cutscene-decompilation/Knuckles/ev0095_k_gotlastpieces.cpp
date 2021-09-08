#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0095[] = { 0 };

void ev0095_k_gotlastpieces(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        KOUKYU = 0;
        SIRO = 0;
        EventSe_Init(1);
        EV_InitPlayer(0);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        BGM_Play(MusicIDs_tical);
        EV_SetPos(player, 636.0f, 200.0f, 0.0f);
        EV_SetAng(player, 0, 0x4000, 0);
        KOUKYU = CTikalLight_Create(
            player->twp->pos.x + 9.1700001f,
            player->twp->pos.y + 32.0f,
            player->twp->pos.z + 15.19f);
        EV_SetMode(KOUKYU, 0);
        EV_Wait(2);
        EV_CameraPos(1, 0,
            player->twp->pos.x + 16.450001f,
            player->twp->pos.y + 7.25f,
            player->twp->pos.z - 0.75f);
        EV_CameraTargetObj(1, 0, player, 0.0f, 5.0f, 0.0f, 0);
        EV_SetAction(player, &action_k_k0001_knuckles, &KNUCKLES_TEXLIST, 0.5f, 0, 16);
        EV_SetAction(player, &action_k_k0002_knuckles, &KNUCKLES_TEXLIST, 0.5f, 1, 8);
        EV_SetFace(player, "DC");
        EV_SerifPlay(1132);
        EV_Msg(msgTbl_ev0095[TextLanguage][0]); //"\aThe last missing piece! \nAll right!"
        EV_Wait(1);
        EV_SerifWait();
        EV_MsgCls();
        EV_ClrFace(player);
        EV_Wait(1);
        EV_SetFace(player, "DEC");
        EV_SerifPlay(1133);
        EV_Msg(msgTbl_ev0095[TextLanguage][1]); //"\aNow to restore \nthe Master Emerald!"
        EV_Wait(60);
        EV_SetPath(KOUKYU, &epathtag_E0095TK, 0.80000001f, 2);
        EV_Wait(20);
        EV_ClrFace(player);
        EV_MsgCls();
        EV_Wait(1);
        EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 0, 8);
        EV_SetFace(player, "AE");
        EV_SerifPlay(1134);
        EV_Msg(msgTbl_ev0095[TextLanguage][2]); //"\aHuh?"
        EV_SerifWait();
        EV_ClrFace(player);
        EV_MsgClose();
        EV_Wait(40);
        EV_LookObject(player, KOUKYU, 4.0f, -3.0f, 3.0f);
        EV_Wait(10);
        EV_CameraTargetFree();
        EV_CameraPos(1, 100,
            player->twp->pos.x + 12.2f,
            player->twp->pos.y + 8.8199997f,
            player->twp->pos.z - 4.0f);
        EV_CameraAng(1, 100,
            player->twp->ang.x - 640,
            0x4178 - player->twp->ang.y,
            player->twp->ang.z);
        EV_Wait(50);
        EventSe_Play(0, 760, 88);
        SIRO = COverlayCreate(0.016666668f, 0.0f, 1.0f, 1.0f, 1.0f);
        EV_Wait(90);
        break;
    case 2:
        if (SIRO)
        {
            FreeTask(SIRO);
            SIRO = 0;
        }
        EventSe_Close();
        EV_InitPlayer(0);
        EV_ClrPath(KOUKYU);
        if (KOUKYU)
        {
            FreeTask(KOUKYU);
            KOUKYU = 0;
        }
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}