#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0016_s_zeroboardsec(int state)
{
    ObjectMaster* player = EV_GetPlayer(0);
    ObjectMaster* eggcarrier = 0;

    ObjectMaster* egg_amy = 0;
    ObjectMaster* CAP_01 = 0;
    ObjectMaster* EC_KAGE = 0;
    int defClipLevel = 0;

    switch(state){
    case 1:
        SetClip_ECScene(0);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        defClipLevel = ClipLevel; //store default clip level
        EV_Wait(1);
        EV_InitPlayer(0);
        SetBankDir(77);
        EV_SetPos(player, -52.189999f, 204.99001f, 1020.98f);
        EV_SetAng(player, 0, 42499, 0);
        LoadEventObject(&egg_amy, set_amy, -157.48f, 78.0f, 1060.33f, 0, 51712, 0);
        createModelEC(
            50.0f,
            -1600.0f,
            1050.0f,
            0,
            0x8000,
            0,
            0.12f,
            0.12f,
            0.12f,
            &object_ecff_bf_s_fbody_bf_s_fbody,
            &texlist_ec_light,
            0);
        addmotModel(0, &action_ecff_bf_s_fbody, 0);
        CAP_01 = CreateCaptureBeam(-176.84f, 78.0f, 941.54999f, 1792, 0, -5376);
        EV_Wait(1);
        BGM_Play(MusicIDs_eggrobo);
        EV_ClrAction(player);
        EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
        EV_LookObject(player, egg_amy, 0.0f, 6.0f, 0.0f);
        EV_SetMode(egg_amy, 0);
        EV_SetShadow(egg_amy, 1.2f);
        playModel(0, 0, 1.0f, -1);
        SetCaptureParam(CAP_01, 0.23f, 0.0f, 0.23f, 0.0f, 0.0f, 0);
        SetCaptureParam(CAP_01, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f, 0);
        SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.001f, 0.0f, 0);
        SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.0f, 0.001f, 0);
        SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
        EV_Wait(1);
        EV_CameraPerspective(0, 1, 9102);
        EV_CameraPos(0, 0, -171.32001f, 91.57f, 1056.03f);
        EV_CameraAng(0, 0, 690, 54819, 0);
        EV_CameraChase(egg_amy);
        EV_Msg((msgTbl_ev0016[TextLanguage])[0]); //"\aLet me go you hunka junk, \nI mean it"...
        moveObject(egg_amy, -157.48f, 78.0f, 1060.33f, -176.84f, 78.0f, 941.54999f, 150);
        EV_Wait(10);
        EV_SerifPlay(519);
        EV_Wait(50);
        EV_MsgClose();
        EV_CameraChaseFree();
        EV_CameraPos(0, 0, -210.12f, 76.110001f, 917.42999f);
        EV_CameraTargetObj(0, 0, egg_amy, 0.0f, 6.0f, 0.0f, 0);
        EV_CameraPerspective(0, 90, 11833);
        EV_Wait(45);
        EV_SerifPlay(520);
        EV_Wait(30);
        EV_Msg((msgTbl_ev0016[TextLanguage])[1]); //"\aHey there, bolt brain!"
        EV_Wait(25);
        EV_Msg((msgTbl_ev0016[TextLanguage])[2]); //"\aYou better give Amy to me,\nor I'll s"...
        stopObject(egg_amy);
        EV_Wait(40);
        EV_CameraTargetFree();
        EV_CameraChaseFree();
        EV_CameraTargetObj(0, 15, player, 0.0f, 6.0f, 0.0f, 0);
        EV_Wait(15);
        EV_CameraPos(0, 40, -63.91f, 202.25f, 1014.03f);
        EV_Wait(40);
        EV_MsgClose();
        EV_SetAng(egg_amy, 0, 55296, 0);
        EV_CameraPos(0, 60, -61.02f, 204.42999f, 1015.73f);
        EV_Wait(10);
        EV_Wait(30);
        EV_CameraPos(0, 30, -44.970001f, 224.14f, 1001.23f);
        EV_Wait(30);
        EV_CameraPos(0, 60, -42.349998f, 228.91f, 994.06f);
        EV_ClrAction(player);
        EV_PlayPad(0, &EV0016_S_JUMP);
        EV_Wait(70);
        EV_CameraTargetFree();
        EV_CameraChaseFree();
        EV_CameraPerspective(0, 1, 7282);
        EV_CameraPos(0, 0, -95.339996f, 66.110001f, 959.46997f);
        EV_CameraAng(0, 0, 1850, 15211, 0);
        EV_CameraPos(0, 140, -141.74001f, 68.779999f, 1014.53f);
        EV_CameraAng(0, 140, 1594, 3691, 0);
        EV_Wait(30);
        EV_ClrAction(player);
        EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 8);
        EV_Wait(100);
        EV_CameraPerspective(0, 1, 9102);
        EV_CameraPos(0, 0, -152.17f, 65.43f, 954.42999f);
        EV_CameraAng(0, 0, 5434, 37224, 0);
        EV_CameraPos(0, 200, -153.25f, 63.939999f, 952.06f);
        EV_Wait(60);
        BGM_Stop();
        EC_KAGE = COverlayCreate(0.1f, 0.0f, 0.0f, 0.0f, 0.0f);
        EV_Wait(6);
        COverlaySetSpeed(EC_KAGE, 0.0f);
        EV_SetAction(player, &action_s_s0027_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
        EV_Wait(20);
        EV_ClrFace(player);
        if (!VoiceLanguage) EV_SetFace(player, (char*)"F");
        EV_Wait(15);
        EV_SerifPlay(521);
        if (VoiceLanguage == 1) EV_SetFace(player, (char*)"FE");
        EV_Msg((msgTbl_ev0016[TextLanguage])[3]); //"\aHey, what's happening here?"
        EV_Wait(5);
        if (!VoiceLanguage) EV_ClrFace(player);
        EV_MsgClose();
        EV_Wait(10);
        if (VoiceLanguage == 1) EV_ClrFace(player);
        eggcarrier = getobjModel(0);
        EV_SetPos(eggcarrier, 50.0f, 600.0f, 1050.0f);
        EV_CameraPos(0, 0, -248.82001f, 109.03f, 960.87f);
        EV_CameraAng(0, 0, 62115, 50604, 0);
        EV_CameraPos(0, 60, -270.19f, 116.44f, 963.89001f);
        EV_Wait(60);
        EV_CameraPos(0, 60, -362.23999f, 112.42f, 616.79999f);
        EV_CameraAng(0, 60, 5512, 40633, 0);
        BGM_Play(MusicIDs_egcarer1);
        EV_Wait(20);
        COverlaySetSpeed(EC_KAGE, -0.0099999998f);
        EV_Wait(40);
        EV_CameraPerspective(0, 240, 12561);
        EV_Wait(90);
        moveObject(eggcarrier, 50.0f, 600.0f, 1050.0f, 100.0f, 650.0f, 1150.0f, 100);
        EV_ClrAction(player);
        EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 8);
        EV_CameraPerspective(0, 1, 9102);
        EV_CameraPos(0, 0, -134.08f, 74.160004f, 1011.57f);
        EV_CameraAng(0, 0, 955, 4233, 0);
        EV_CameraPos(0, 45, -154.39f, 74.160004f, 1016.64f);
        EV_CameraAng(0, 45, 955, 1417, 0);
        EV_Wait(45);
        ChgCaptureMod(CAP_01, 1);
        QueueSound_XYZ(1336, (EntityData1*)0xCB80001, 1, 100, 300, 100.0f, 600.0f, 1150.0f);
        EV_CameraTargetObj(0, 60, egg_amy, 0.0f, 5.5f, 0.0f, 0);
        EV_CameraPos(0, 200, -252.03999f, 95.900002f, 938.23999f);
        EV_Wait(90);
        EV_SerifPlay(523);
        EV_Msg((msgTbl_ev0016[TextLanguage])[4]); //"\aStop!"
        moveObject(egg_amy, -176.84f, 78.0f, 941.54999f, 232.52f, 800.02002f, 1089.03f, 300);
        EV_Wait(30);
        EV_MsgClose();
        EV_Wait(120);
        EV_SerifPlay(524);
        EV_Msg((msgTbl_ev0016[TextLanguage])[5]); //"\aSonic!   Help me!"
        EV_Wait(30);
        EV_MsgClose();
        ChgCaptureMod(CAP_01, 2);
        stopObject(egg_amy);
        EV_FreeObject(&egg_amy);
        EV_CameraTargetFree();
        EV_Wait(15);
        DoSoundQueueThing(1336);
        EV_SetPos(player, -181.24001f, 64.099998f, 958.96997f);
        EV_SetAng(player, 65374, 9179, 65486);
        EV_Wait(1);
        EV_ClrAction(player);
        EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
        EV_Wait(1);
        EV_LookFree(player);
        EV_LookPoint(player, 100.0f, 200.0f, 1150.0f);
        EV_Wait(30);
        EV_CameraPerspective(1, 1, 10923);
        EV_CameraPos(1, 0, -170.5f, 66.879997f, 958.85999f);
        EV_CameraAng(1, 0, 3740, 17898, 0);
        EV_CameraPos(1, 200, -173.27f, 67.940002f, 959.26001f);
        EV_ClrFace(player);
        if (!VoiceLanguage) EV_SetFace(player, (char*)"CDE");
        EV_Wait(15);
        EV_SerifPlay(522);
        if (VoiceLanguage == 1) EV_SetFace(player, (char*)"CBE");
        EV_Msg((msgTbl_ev0016[TextLanguage])[6]); //"\aShoot, I've lost her again!"
        EV_Wait(5);
        EV_MsgClose();
        if (!VoiceLanguage) EV_ClrFace(player);
        EV_Wait(10);
        if (VoiceLanguage == 1) EV_ClrFace(player);
        EV_Wait(10);
        EV_CameraPos(0, 0, -254.81f, 88.5f, 809.78003f);
        EV_CameraTargetObj(0, 0, eggcarrier, 0.0f, 0.0f, 0.0f, 0);
        EventSe_Oneshot(1341, 120, 0, 0);
        ClipLevel = 0;
        SetClip_EV0016();
        moveObjectAngle2(eggcarrier, 100.0f, 600.0f, 1150.0f, 600.0f, 1500.0f, 1250.0f, 0, 0x8000, 0, 0, 17664, -8192, 250);
        EV_Wait(150);
        EV_CameraTargetFree();
        EV_CameraPos(0, 0, -21.98f, 204.03999f, 921.53998f);
        EV_CameraAng(0, 0, 15104, 15301, 0);
        EV_CameraPos(0, 120, -5.4200001f, 69.059998f, 923.26001f);
        stopObject(eggcarrier);
        EV_SetPos(eggcarrier, 50.0f, -1600.0f, 1050.0f);
        EventSe_Oneshot(1341, 120, 0, 0);
        EV_Wait(15);
        moveObjectAngle2(eggcarrier, 1300.0f, 2500.0f, 750.0f, -1400.0f, 2500.0f, 770.0f, 0, 17664, 0, 0, 17664, 0, 150);
        EV_Wait(100);
        EV_CameraAng(0, 60, 2048, 14789, 0);
        EV_Wait(20);
        EV_LookFree(player);
        EV_ClrAction(player);
        EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.5f, 1, 0);
        EV_MovePoint2(player, -239.58f, 65.199997f, 921.73999f, 1.75f, 0.059999999f);
        EV_Wait(40);
        EV_CameraPos(0, 200, 8.1499996f, 66.330002f, 925.34998f);
        EV_WaitMove(player);
        EV_ClrAction(player);
        stopObject(eggcarrier);
        ClipLevel = defClipLevel;
        SetClip_EV0016();
        EV_Wait(60);
        break;
    case 2:
        dsStop_all();
        ClipLevel = defClipLevel;
        SetClip_EV0016();
        EV_InitPlayer(0);
        EV_SetPos(player, -239.58f, 65.199997f, 921.73999f);
        EV_SetAng(player, 65308, 45926, 65148);
        stopObjectAll();
        EV_FreeObject(&egg_amy);
        deleteModel(0);
        if (EC_KAGE)
        {
            FreeTask(EC_KAGE);
            EC_KAGE = 0;
        }
        delete_capturebeam(CAP_01);
        CAP_01 = 0;
        EV_CameraOff();
        EV_PadOn();
        SetClip_ECScene(ClipLevel);
        break;
    }
}