#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00F6[] = { 0  };

void ev00F6_l_past(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        WHITE = 0;
        EV_PadOff();
        EV_CanselOn();
        EventSe_Init(1);
        WHITE = COverlayCreate(1.0f, 0.1f, 1.0f, 1.0f, 1.0f);
        EventSe_Play(0, 760, 1800);
        EventSe_Volume(0, -120, 120);
        EV_SetPos(player, 15.1f, -43.459999f, 1447.05f);
        EV_SetAng(player, 0xFCA0, 0x8C00, 0xFED0);
        EV_InitPlayer(0);
        EV_SetFace(player, "VVVVVVVVVVVVVVVVVVVVVV");
        EV_SetAction(player, &action_s_s0049_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
        EV_Wait(1);
        EV_CameraOn();
        EV_CameraAng(1, 0, 0x300, 0x6500, 0);
        EV_CameraPos(1, 0, 19.9f, -37.599998f, 1441.1f);
        EV_Wait(30);
        EV_CameraAng(0, 80, 0x300, 0x7900, 0xFD00);
        EV_CameraPos(0, 80, 16.475f, -37.599998f, 1439.2f);
        if (WHITE)
        {
            COverlaySetSpeed(WHITE, -0.016666668f);
        }
        EV_Wait(30);
        EV_SetFace(player, "XW");
        EV_Wait(50);
        EV_SetAction(player, &action_s_s0027_sonic, &SONIC_TEXLIST, 0.40000001f, 1, 8);
        EV_SerifPlay(1428);
        EV_ClrFace(player);
        EV_SetFace(player, "EAAAAAF");
        EV_Msg(msgTbl_ev00F6[TextLanguage][0]); //"\aThis place...  It looks familiar!"
        EV_Wait(45);
        EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 0.5f, 1, 8);
        EV_SerifWait();
        EV_CameraAng(1, 0, 0x300, 0x2600, 0xFD00);
        EV_CameraPos(1, 0, 22.049999f, -40.624001f, 1450.0f);
        EV_CameraAng(0, 90, 0x300, 0x300, 0xFD00);
        EV_CameraPos(0, 90, 20.08f, -40.700001f, 1453.16f);
        EV_Wait(10);
        EV_Msg(msgTbl_ev00F6[TextLanguage][1]); //"\aIt's not a dream, after all."
        EV_SerifPlay(1429);
        EV_Wait(1);
        EV_SerifWait();
        EV_MsgClose();
        EV_Wait(15);
        break;
    case 2:
        EV_CameraOff();
        EV_PadOn();
        EV_InitPlayer(0);
        EV_SetPos(player, 15.1f, -43.459999f, 1447.05f);
        EV_SetAng(player, 0xFCA0, 0x8C00, 0xFED0);
        if (WHITE)
        {
            FreeTask(WHITE);
            WHITE = 0;
        }
        EventSe_Close();
        break;
    }
}