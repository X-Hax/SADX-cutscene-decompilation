#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev009F[] = { 0 };

void ev009F_k_outro(int state)
{
    NJS_POINT3 Kiran2_1_EV009F = { 120.0f, 60.0f, 2140.0f };
    NJS_POINT3 Kiran2_2_EV009F = { -2.0f, -3.0f, 3.0f };
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_SetPos(player, -3.0f, -157.08299f, 2251.0f);
        EV_SetAng(player, 0, 0, 0);
        EV_InitPlayer(0);
        EV_SetAction(player, &action_k_k0014_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
        EV_SetFace(player, "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV");
        seqVars[37] = 3;
        EV_Wait(1);
        EV_CameraPos(1, 0, 158.28f, -74.886002f, 2620.085f);
        EV_CameraAng(1, 0, 0xF100, 0x800, 0);
        EV_CameraPos(0, 180, -25.4f, -78.260002f, 2629.1699f);
        EV_CameraAng(0, 180, 0xF100, 0xFE00, 0);
        EV_Wait(30);
        EV_SerifPlay(1163);
        EV_Msg(msgTbl_ev009F[TextLanguage][0]); //"\aI'll probably be on \nthis floating i"...
        EV_Wait(1);
        EV_SerifWait();
        EV_Wait(25);
        EV_MsgClose();
        EV_CameraPerspective(1, 1, 0x2E39);
        EV_CameraPos(0, 0, -6.27f, -139.60001f, 2262.5f);
        EV_CameraAng(0, 0, 0x300, 0xF9F7, 0xFF00);
        EV_CameraPos(0, 70, -6.3899999f, -148.39f, 2261.825f);
        EV_Wait(70);
        EV_CameraPos(0, 130, -6.4688001f, -154.37f, 2261.374f);
        EV_Wait(10);
        EV_SerifPlay(1164);
        EV_Msg(msgTbl_ev009F[TextLanguage][1]); //"\aGuarding the Master Emerald,\nagain."
        EV_Wait(120);
        EV_MsgClose();
        EV_CameraPos(0, 0, -49.119999f, -122.21f, 2084.614f);
        EV_CameraAng(0, 0, 0xF700, 0x9500, 0xFF00);
        EV_CameraPerspective(0, 1, 0x3111);
        EV_CameraAng(0, 140, 0x1200, 0x9500, 0xFF00);
        EV_Wait(50);
        EV_SerifPlay(1165);
        EV_Msg(msgTbl_ev009F[TextLanguage][2]); //"\aI may not know the whole story \nbehi"...
        EV_Wait(90);
        effect_create(0, 0, 120.0f, 60.0f, 2140.0f, &ev_effect_list8); //Spawn electricity effect in the sky??
        effect_scl(0, -9.0f, -9.0f);
        EV_Wait(8);
        effect_delete(0);
        EV_Wait(10);
        EvCreateKiran2(&Kiran2_1_EV009F, &Kiran2_2_EV009F, 1.0f, 0.89999998f); //Moving sparkle in the sky.
        EV_CameraAng(0, 150, 0x1700, 0x9500, 0xFF00);
        EV_Wait(20);
        EV_SerifPlay(1166);
        EV_Msg(msgTbl_ev009F[TextLanguage][3]); //"\aBut perhaps \nit's better that way."
        EV_Wait(60);
        EV_Msg(msgTbl_ev009F[TextLanguage][4]); // "\aI am at peace once more."
        EV_Wait(90);
        break;
    case 2:
        EV_CameraOff();
        effect_delete(0);
        EV_Wait(1);
        EV_InitPlayer(0);
        break;
    }
}