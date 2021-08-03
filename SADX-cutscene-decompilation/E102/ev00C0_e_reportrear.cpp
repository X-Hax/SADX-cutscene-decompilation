#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00C0_e_reportrear(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_Wait(1);
        EV_InitPlayer(0);
        BGM_Play(MusicIDs_egcarer1);
        EV_InitPlayer(0);
        EV_ClrAction(player);
        EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 0.40000001f, 1, 0);
        EV_SetPos(player, 20.5f, 1.0f, -53.0f);
        EV_SetAng(player, 0, 0x4000, 0);
        EV_CameraPos(1, 0, 39.400002f, 3.8f, -56.16f);
        EV_CameraAng(1, 0, 939, 17435, 256);
        EV_CameraPos(1, 80, 40.049999f, 10.8f, -56.060001f);
        EV_CameraAng(0, 80, 5291, 17435, 256);
        EV_Wait(80);
        EV_CameraPos(1, 0, 38.759998f, 26.0f, -46.240002f);
        EV_CameraAng(1, 0, 59563, 11803, 256);
        EV_CameraPos(1, 180, 33.57f, 42.419998f, -22.200001f);
        EV_CameraAng(1, 180, 58283, 3867, 256);
        EV_Msg(msgTbl_ev00C0[TextLanguage][0]); //"\aI see you've got the Jet Booster."
        EV_SerifPlay(1273);
        EV_Wait(5);
        EV_SerifWait();
        EV_Wait(60);
        EV_Msg(msgTbl_ev00C0[TextLanguage][1]); //"\aReport to the rear of the ship."
        EV_SerifPlay(1274);
        EV_SerifWait();
        EV_Wait(130);
        EV_CameraPos(1, 0, 40.400002f, 9.8000002f, -66.099998f);
        EV_CameraAng(1, 0, 427, 22299, 256);
        EV_CameraAng(1, 20, 939, 22299, 256);
        EV_Msg(msgTbl_ev00C0[TextLanguage][2]); //"\aHurry!"
        EV_SerifPlay(1275);
        EV_SerifWait();
        EV_Wait(80);
        EV_MsgClose();
        break;
    case 2:
        EV_CameraOff();
        EV_PadOn();
        EV_InitPlayer(0);
        EV_SerifStop();
        break;
    }
}