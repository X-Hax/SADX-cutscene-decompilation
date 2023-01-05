#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0098[] = { 0 };

void ev0098_k_leavepastthird(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        W_OUT = 0;
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_Wait(1);
        EV_InitPlayer(0);
        EventSe_Init(1);
        EV_SetPos(player, -15.89f, -67.0f, 0.0f);
        EV_SetAng(player, 0, 0x4000, 0);
        W_OUT = COverlayCreate(-0.0012000001f, 1.0f, 1.0f, 1.0f, 1.0f);
        EventSe_Play(0, 760, 1800);
        EventSe_Volume(0, -120, 120);
        EV_Wait(25);
        EV_CameraPerspective(0, 1, 0x238E);
        EV_CameraPos(0, 0, -6.8099999f, -61.59f, -4.0300002f);
        EV_CameraAng(0, 0, 0x55C, 0x57CF, 0);
        EV_CameraPos(0, 120, 11.38f, -64.470001f, -16.059999f);
        if (W_OUT)
        {
            COverlaySetSpeed(W_OUT, -0.016000001f);
        }
        EV_Wait(40);
        EV_ClrAction(player);
        EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 8);
        EV_Wait(100);
        EventSe_Stop(0);
        EV_CameraPos(0, 0, -2.9200001f, -64.059998f, 5.04f);
        EV_CameraAng(0, 0, 0x95C, 0x25CF, 0);
        EV_CameraPos(0, 200, -6.52f, -64.059998f, 9.8400002f);
        EV_SerifPlay(1144);
        EV_Wait(5);
        EV_ClrFace(player);
        EV_SetFace(player, "EE");
        EV_MsgW(40, msgTbl_ev0098[TextLanguage][0]); //"\aIs this a dream?"
        EV_ClrFace(player);
        EV_MsgClose();
        EV_Wait(10);
        EV_SetFace(player, "DF");
        EV_Wait(15);
        EV_SerifPlay(1145);
        EV_MsgW(60, msgTbl_ev0098[TextLanguage][1]); //"\aIt's more like a nightmare!"
        EV_ClrFace(player);
        EV_MsgClose();
        EV_Wait(30);
        break;
    case 2:
        EventSe_Close();
        EV_InitPlayer(0);
        if (W_OUT)
        {
            FreeTask(W_OUT);
            W_OUT = 0;
        }
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}