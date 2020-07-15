#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0015_s_chasingzero(int state)
{
    ObjectMaster* player = EV_GetPlayer(0);
    ObjectMaster* Amy = 0;

    switch(state){
    case 1:
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_InitPlayer(0);
        EV_CreatePlayer(0, Sonic_Main, -427.0f, -2.8f, 1113.3f, 0, 0x8000, 0);
        EV_Wait(1);
        EV_SetPos(player, -427.0f, -1.0f, 1113.3f);
        EV_SetAng(player, 0, 0x8000, 0);
        LoadEventObject(&Amy, set_amy, -304.0f, 175.0f, 1241.0f, 0, 0, 0);
        EV_Wait(1);
        EV_SetMode(Amy, 0);
        setamyparam(0.80000001f);
        EV_CameraPos(1, 0, -424.70001f, -0.30000001f, 997.5f);
        EV_CameraAng(1, 0, 63744, 31488, 0);
        EV_SetPos(player, -426.0f, -1.0f, 1007.3f);
        EV_SetAng(player, 0, 0x8000, 0);
        EV_SetAction(player, &action_s_s0028_sonic, &SONIC_TEXLIST, 0.60000002f, 1, 8);
        EV_CameraPos(0, 90, -424.5f, 0.30000001f, 996.09998f);
        EV_CameraAng(0, 90, 1792, 31232, 0);
        EV_ClrFace(player);
        EV_SetFace(player, (char*)"DDDEDDAAEDDECAA0");
        EV_SerifPlay(516);
        EV_Msg((msgTbl_ev0015[TextLanguage])[0]);
        EV_Wait(60);
        EV_CameraPos(0, 75, -425.0f, 2.0f, 999.29999f);
        EV_CameraAng(0, 75, 2304, 31232, 0);
        EV_Wait(20);
        EV_ClrFace(player);
        EV_Wait(40);
        EV_SerifPlay(517);
        EV_Msg((msgTbl_ev0015[TextLanguage])[1]);
        EV_SetAction(player, &action_s_s0038_sonic, &SONIC_TEXLIST, 2.7f, 0, 8);
        EV_WaitAction(player);
        BGM_Play(MusicIDs_eggrobo);
        EV_CameraAng(0, 25, 6144, 33024, 0);
        EV_SetAction(player, &action_s_s9001_sonic, &SONIC_TEXLIST, 0.89999998f, 0, 16);
        EV_CameraPerspective(0, 8, 12197);
        EV_Wait(8);
        EV_CameraPerspective(0, 10, 12561);
        EV_Wait(30);
        EV_SetAng(player, 0, 12800, 0);
        EV_ClrAction(player);
        EV_SetAction(player, &action_s_s0017_sonic, &SONIC_TEXLIST, 1.3f, 0, 16);
        EV_SetAction(player, &action_s_s0006_sonic, &SONIC_TEXLIST, 1.1f, 1, 8);
        EV_CameraPerspective(1, 0, 10194);
        EV_LookPoint(player, -469.0f, 184.0f, 1231.4f);
        moveObject(Amy, -304.0f, 180.0f, 1240.0f, -740.0f, 169.0f, 1248.0f, 290);
        EV_CameraPos(1, 0, -416.20001f, 28.4f, 1040.8f);
        EV_CameraAng(1, 0, 5280, 35760, 0);
        EV_CameraPos(1, 50, -433.0f, -1.6f, 987.29999f);
        EV_CameraAng(1, 50, 4992, 32960, 0);
        EV_Wait(55);
        EV_SetAng(player, 0, 4096, 0);
        EV_CameraPos(1, 0, -521.79999f, 124.2f, 1161.1801f);
        EV_CameraAng(1, 0, 5455, 37616, 3328);
        EV_CameraPos(1, 55, -545.5f, 155.60001f, 1182.7f);
        EV_CameraAng(1, 55, 4175, 37616, 3328);
        EV_Wait(55);
        EV_ClrFace(player);
        EV_SetFace(player, (char*)"GGGGIIJJJ");
        EV_SerifPlay(518);
        EV_Msg((msgTbl_ev0015[TextLanguage])[2]);
        EV_Wait(30);
        EV_MsgClose();
        EV_CameraPos(0, 0, -413.0f, 3.2f, 1033.6f);
        EV_CameraAng(0, 0, 4872, 29248, 65024);
        EV_CameraChaseFree();
        EV_CameraPerspective(1, 1, 12561);
        EV_ClrFace(player);
        EV_SetPos(player, -428.39999f, -2.5f, 1052.8f);
        EV_SetAng(player, 0, 4096, 0);
        EV_LookObject(player, Amy, 0.0f, 8.0f, 0.0f);
        EV_CameraPos(0, 50, -413.39999f, -1.3f, 1035.5f);
        EV_CameraAng(0, 50, 4871, 29248, 65024);
        EV_Wait(50);
        EV_CameraPos(0, 70, -434.26001f, -0.23999999f, 1034.6f);
        EV_CameraAng(0, 70, 4360, 38208, 64512);
        EV_Wait(80);
        EV_CameraPerspective(1, 0, 12561);
        EV_Wait(1);
        EV_ClrFace(player);
        stopObjectAll();
        EV_MsgClose();
        break;
    case 2:
        EV_SetPos(player, -428.39999f, -2.5f, 1052.8f);
        EV_InitPlayer(0);
        EV_LookFree(player);
        EV_FreeObject(&Amy);
        BGM_Stop();
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}