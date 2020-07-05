#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void __cdecl ev0001_s_intro(int state)
{
    ObjectMaster* player = EV_GetPlayer(0);
    ObjectMaster* PAT_01 = 0;
    ObjectMaster* PAT_02 = 0;
    ObjectMaster* PAT_03 = 0;
    ObjectMaster* PAT_04 = 0;
    ObjectMaster* HELI_01 = 0;
    ObjectMaster* SONIC_SKY_2 = 0;
    ObjectMaster* SONIC_02SKY = 0;
    ObjectMaster* NY_SKY = 0;
    ObjectMaster* BALL_0 = 0;
    ObjectMaster* B_OUT_13 = 0;
    ObjectMaster* OYAJI_A = 0;
    ObjectMaster* OYAJI_B = 0;
    ObjectMaster* OYAJI_C = 0;
    ObjectMaster* FAT_A = 0;
    ObjectMaster* FAT_B_0 = 0;
    ObjectMaster* LADY_A = 0;
    ObjectMaster* LADY_B = 0;
    ObjectMaster* LADY_C = 0;
    ObjectMaster* BOYS_A = 0;

    switch(state){
    case 1:
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_Wait(1);
        SetBankDir(73);
        EV_InitPlayer(0);
        EventSe_Init(6);
        EV_SetPos(player, 362.5, 0.0, 1450.72);
        EV_SetAng(player, 0, 0, 0);
        seqVars[1] = 1;
        EV_CreateObject(&PAT_01, 508.59, 0.0, 727.0, 0, 0x8000, 0);
        EV_CreateObject(&PAT_02, 536.63, 0.0, 718.0, 0, 0x8000, 0);
        EV_CreateObject(&PAT_03, 569.0, 0.0, 718.0, 0, 0x8000, 0);
        EV_CreateObject(&PAT_04, 609.0, 0.0, 720.0, 0, 0x8000, 0);
        EV_CreateObject(&HELI_01, 508.59, 50.0, 727.0, 0, 0x8000, 0);
        NY_SKY = CIchimaie2_Create(&ICM0001_3_TEXLIST, 0);
        CIchimaie2_SetPriority(NY_SKY, -69.0);
        BALL_0 = CTikalLight_Create(536.63, 30.0, 718.0);
        EV_CreateObject(&OYAJI_A, 131.44, 9.8000002, 1503.5699, 0, 14447, 0);
        EV_CreateObject(&FAT_A, 32.360001, 8.3000002, 1504.04, 0, 80100, 0);
        EV_CreateObject(&BOYS_A, 19.67, 5.6599998, 1502.95, 0, 18419, 0);
        EV_CreateObject(&FAT_B_0, 580.54999, 8.3000002, 1063.28, 0, 92921, 0);
        EV_CreateObject(&LADY_A, 330.06, 10.85, 1058.5699, 0, 3608, 0);
        EV_CreateObject(&OYAJI_B, 377.54001, 9.8000002, 1158.5699, 0, 38243, 0);
        EV_CreateObject(&LADY_B, 197.89, 10.85, 1152.89, 0, 17867, 0);
        EV_CreateObject(&LADY_C, 173.05, 10.85, 1270.47, 0, 47674, 0);
        EV_CreateObject(&OYAJI_C, 183.28999, 9.8000002, 1265.27, 0, 47532, 0);
        EV_Wait(1);
        EV_ClrAction(player);
        EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0, 1, 0);
        EV_SetMode(PAT_01, 0);
        EV_SetMode(PAT_02, 0);
        EV_SetMode(PAT_03, 0);
        EV_SetMode(PAT_04, 0);
        EV_SetMode(HELI_01, 0);
        EV_SetMode(BALL_0, 0);
        EV_SetPos(PAT_01, 508.59, 0.0, 727.0);
        EV_SetAng(PAT_01, 0, 0x8000, 0);
        EV_SetPos(PAT_02, 536.63, 0.0, 718.0);
        EV_SetAng(PAT_02, 0, 0x8000, 0);
        EV_SetPos(PAT_03, 569.0, 0.0, 718.0);
        EV_SetAng(PAT_03, 0, 0x8000, 0);
        EV_SetPos(PAT_04, 609.0, 0.0, 720.0);
        EV_SetAng(PAT_04, 0, 0x8000, 0);
        EV_SetPos(HELI_01, 609.0, 50.0, 720.0);
        EV_SetAng(HELI_01, 0, 0x8000, 0);
        EV_SetAction(PAT_01, &action_sspatcar_body, &SSPATCAR_BODY_TEXLIST, 1.0, 1, 0);
        EV_SetAction(PAT_02, &action_sspatcar_body, &SSPATCAR_BODY_TEXLIST, 1.0, 1, 0);
        EV_SetAction(PAT_03, &action_sspatcar_body, &SSPATCAR_BODY_TEXLIST, 1.0, 1, 0);
        EV_SetAction(PAT_04, &action_sspatcar_body, &SSPATCAR_BODY_TEXLIST, 1.0, 1, 0);
        EV_SetAction(HELI_01, &action_c0_heli_body, &EV_HELI_TEXLIST, 1.0, 73, 0);
        EV_SetMode(OYAJI_A, 0);
        EV_ClrAction(OYAJI_A);
        EV_SetMotion(OYAJI_A, *MODEL_SS_PEOPLE_OBJECTS,  MODEL_SS_PEOPLE_MOTION[1], ADV00_TEXLISTS[6], 0.5, 1, 0);
        EV_SetMode(FAT_A, 0);
        EV_ClrAction(FAT_A);
        EV_SetMotion(FAT_A, MODEL_SS_PEOPLE_OBJECTS[15], MODEL_SS_PEOPLE_MOTION[18], ADV00_TEXLISTS[6], 0.5, 1, 0);
        EV_SetMode(BOYS_A, 0);
        EV_ClrAction(BOYS_A);
        EV_SetMotion(BOYS_A, MODEL_SS_PEOPLE_OBJECTS[17], MODEL_SS_PEOPLE_MOTION[25], ADV00_TEXLISTS[6], 0.5, 1, 0);
        EV_SetMode(FAT_B_0, 0);
        EV_ClrAction(FAT_B_0);
        EV_SetMotion(FAT_B_0, MODEL_SS_PEOPLE_OBJECTS[13], MODEL_SS_PEOPLE_MOTION[20], ADV00_TEXLISTS[6], 0.5, 1, 0);
        EV_SetMode(LADY_A, 0);
        EV_ClrAction(LADY_A);
        EV_SetMotion(LADY_A, MODEL_SS_PEOPLE_OBJECTS[7], MODEL_SS_PEOPLE_MOTION[5], ADV00_TEXLISTS[6], 0.5, 1, 0);
        EV_SetMode(OYAJI_B, 0);
        EV_ClrAction(OYAJI_B);
        EV_SetMotion(OYAJI_B, MODEL_SS_PEOPLE_OBJECTS[3], MODEL_SS_PEOPLE_MOTION[2], ADV00_TEXLISTS[6], 0.5, 1, 0);
        EV_SetMode(LADY_B, 0);
        EV_ClrAction(LADY_B);
        EV_SetMotion(LADY_B, MODEL_SS_PEOPLE_OBJECTS[4], MODEL_SS_PEOPLE_MOTION[5], ADV00_TEXLISTS[6], 0.5, 1, 0);
        EV_SetMode(LADY_C, 0);
        EV_ClrAction(LADY_C);
        EV_SetMotion(LADY_C, MODEL_SS_PEOPLE_OBJECTS[6], MODEL_SS_PEOPLE_MOTION[5], ADV00_TEXLISTS[6], 0.5, 1, 0);
        EV_SetMode(OYAJI_C, 0);
        EV_ClrAction(OYAJI_C);
        EV_SetMotion(OYAJI_C, MODEL_SS_PEOPLE_OBJECTS[1], MODEL_SS_PEOPLE_MOTION[0], ADV00_TEXLISTS[6], 0.80000001, 1, 0);
        EV_SetShadow(OYAJI_A, 1.0);
        EV_SetShadow(OYAJI_B, 1.0);
        EV_SetShadow(OYAJI_C, 1.0);
        EV_SetShadow(FAT_A, 1.0);
        EV_SetShadow(FAT_B_0, 1.0);
        EV_SetShadow(BOYS_A, 1.0);
        EV_SetShadow(LADY_A, 1.0);
        EV_SetShadow(LADY_B, 1.0);
        EV_SetShadow(LADY_C, 1.0);
        EV_Wait(1);
        BGM_Play(MusicIDs_s_square);
        tikal_dispSwitch(0);
        EV_CameraPerspective(0, 1, 10923);
        EV_CameraPos(0, 0, 116.84, 14.44, 1653.05);
        EV_CameraAng(0, 0, 1575, 4843, 0);
        EV_CameraPos(0, 150, 161.53999, 14.44, 1630.65);
        EV_Wait(110);
        moveObject(LADY_A, 307.23001, 10.85, 1054.78, 365.69, 10.85, 1051.6801, 200);
        moveObject(FAT_B_0, 610.07001, 8.3000002, 1053.4, 508.42999, 8.3000002, 1099.62, 550);
        EV_Wait(10);
        EV_CameraPos(0, 0, 232.67999, 22.09, 1144.67);
        EV_CameraAng(0, 0, 35, 53739, 0);
        EV_CameraPos(0, 150, 250.72, 22.09, 1183.03);
        EV_Wait(110);
        moveObject(LADY_B, 197.89, 10.85, 1152.89, 197.46001, 10.85, 1209.71, 210);
        EV_Wait(10);
        EV_CameraPos(0, 0, 297.07001, 17.950001, 1184.13);
        EV_CameraAng(0, 0, 291, 0x4000, 0);
        EV_CameraPos(0, 150, 298.79999, 17.940001, 1271.98);
        moveObject(LADY_C, 172.95, 10.85, 1296.21, 172.67999, 10.85, 1206.63, 240);
        moveObject(OYAJI_C, 182.66, 9.8000002, 1287.36, 183.03999, 10.85, 1200.08, 240);
        EV_Wait(120);
        EV_CameraPerspective(0, 1, 12743);
        EV_CameraPos(1, 0, 621.21997, 1.15, 1035.13);
        EV_CameraAng(1, 0, 4387, 18920, 0);
        EV_CameraPos(1, 200, 614.96002, 1.15, 1009.89);
        EV_SetPath(HELI_01, (EPATHTAG*)0x2C12710, 0.5, 0);
        EV_Wait(20);
        EventSe_Play(0, 1334, 1800);
        EventSe_Volume(0, -120, 1);
        EV_Wait(1);
        EventSe_Volume(0, 120, 90);
        EV_Wait(70);
        EV_SetPath(BALL_0, (EPATHTAG*)0x2C12BA8, 0.69999999, 0);
        EV_Wait(30);
        EventSe_Volume(0, -120, 60);
        EV_Wait(10);
        EventSe_Oneshot(1338, 100, 0, 0);
        EV_Wait(80);
        tikal_dispSwitch(1);
        EV_CameraPos(0, 0, 364.62, 216.24001, 1124.0);
        EV_CameraAng(0, 0, 63232, 54507, 0);
        EV_CameraPos(0, 150, 292.38, 234.87, 1164.73);
        EV_CameraAng(0, 150, 63232, 54507, 0);
        EV_SetPos(player, 623.65997, 0.0, 757.79999);
        EV_SetAng(player, 0, 49152, 0);
        stopObjectAll();
        EV_Wait(10);
        EV_FreeObject(&OYAJI_A);
        EV_FreeObject(&FAT_A);
        EV_FreeObject(&BOYS_A);
        EV_FreeObject(&FAT_B_0);
        EV_FreeObject(&LADY_A);
        EV_FreeObject(&OYAJI_B);
        EV_FreeObject(&LADY_B);
        EV_FreeObject(&LADY_C);
        EV_FreeObject(&OYAJI_C);
        BGM_Play(MusicIDs_thesonic);
        EV_ClrAction(player);
        EV_SetAction(player, &action_s_s0089_sonic, &SONIC_TEXLIST, 0.25, 0, 0);
        EV_Wait(80);
        EventSe_Stop(0);
        EventSe_Oneshot(17, 100, 0, 0);
        EV_Wait(30);
        seqVars[1] = 0;
        EV_CameraPerspective(0, 1, 12743);
        EV_CameraPos(0, 0, 12.69, 770.32001, 1382.84);
        EV_CameraAng(0, 0, 63488, 0x4000, 0);
        CIchimaie2_SetDstAlpha(NY_SKY, 1.0, 1);
        EV_SetPos(player, -46.549999, 780.0, 1381.84);
        EV_SetAng(player, 0, 49152, 0);
        EV_ClrAction(player);
        SONIC_SKY_2 = CSkyWalk_create2(player, 740.0);
        EV_Wait(90);

        FreeTask(NY_SKY);
        NY_SKY = 0;
        FreeTask(SONIC_SKY_2);
        SONIC_SKY_2 = 0;

        EV_CameraPos(0, 0, 306.10999, 419.31, 1376.84);
        EV_CameraAng(0, 0, 7680, 54528, 0);
        EV_CameraPos(1, 30, 362.84, 478.39999, 1344.7);
        EV_SetPos(player, 370.0, 480.0, 1342.17);
        EV_SetAng(player, 0, 49152, 0);
        SONIC_02SKY = CSkyWalk_create2(player, 480.0);
        EV_ClrAction(player);
        EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0, 1, 0);
        EV_Wait(30);
        EV_SetAction(player, &action_s_s0064_sonic, &SONIC_TEXLIST, 2.0, 0, 8);
        EV_SetAction(player, &action_s_s0065_sonic, &SONIC_TEXLIST, 2.0, 0, 15);
         EV_SetAction(player, &action_s_s0066_sonic, &SONIC_TEXLIST, 2.0, 1, 15);
        EV_SerifPlay(400);
        if (VoiceLanguage == 1)
        {
             EV_SetFace(player, (char*)0x84C1CC);
        }
        EV_Wait(20);
        EV_Msg(*msgTbl_ev0001[TextLanguage]); //Ah yeah, this is happenin'!
        EV_Wait(5);
        if (!VoiceLanguage) //JP voice has a whistle so dialogue starts later
        {
            EV_SetFace(player, (char*)0x84C1CC);
        }
        EV_Wait(10);
        EV_SerifPlay(401);
        EV_Wait(30);
        EV_ClrFace(player);
        EV_Wait(15);
        EV_MsgClose();
        EV_ClrAction(player);
        EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0, 1, 0);
        EV_CameraPos(0, 0, 364.98999, 482.34, 1344.7);
        EV_CameraAng(0, 0, 7680, 54016, 0);
        EventSe_Play(5, 1335, 1800);
        EventSe_Volume(5, 80, 120);
        EventSe_Play(3, 1336, 1800);
        EventSe_Volume(3, 100, 60);
        EV_Wait(15);
        EventSe_Play(4, 1336, 1800);
        EventSe_Volume(4, 100, 30);
        EV_SerifPlay(402);
        EV_LookPoint(player, -85.339996, 8.0, 1590.0);
        EV_ClrFace(player);
        EV_SetFace(player, (char*)0x8514F8);
        EV_Wait(5);
        EV_ClrFace(player);
        EV_SetPath(PAT_01, &epathtag_EV0001_01PT, 1.0, 0);
        EV_SetPath(PAT_02, &epathtag_EV0001_02PT, 1.0, 0);
        EV_SetPath(PAT_03, &epathtag_EV0001_03PT, 1.0, 0);
        EV_Wait(25);
        EV_CameraPos(0, 0, 300.23001, 493.31, 1425.24);
        EV_CameraAng(0, 0, 51456, 14848, 0);
        EV_CameraPos(0, 200, 316.22, 493.31, 1317.41);
        EV_SetPath(PAT_04, &epathtag_EV0001_04PT, 1.0, 0);
        EV_Wait(30);
        EventSe_Oneshot(1337, 100, 0, 0);
        EV_Wait(30);
        EV_ClrAction(player);
        EV_PlayPad(0, &EV0001_S_JUMP_0);
        EV_Wait(10);

        FreeTask(SONIC_02SKY);
        SONIC_02SKY = 0;

        EventSe_Oneshot(1337, 60, 0, 0);
        EV_Wait(30);
        EventSe_Oneshot(1337, 80, 0, 0);
        EventSe_Volume(5, -80, 120);
        EV_Wait(60);
        EV_FreeObject(&PAT_01);
        EV_FreeObject(&PAT_03);
        EventSe_Volume(4, -100, 80);
        EventSe_Volume(3, -100, 80);
        EV_LookFree(player);
        EV_ClrAction(player);
        EV_SetPos(player, 118.25, 30.0, 1509.55);
        EV_SetAng(player, 0, 24576, 0);
        EV_ClrAction(player);
        EV_CameraPos(0, 0, 103.03, 9.46, 1534.3199);
        EV_CameraTargetObj(0, 0, player, 0.0, 6.0, 0.0, 0);
        EV_Wait(60);
        EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 0.2, 1, 0);
        EventSe_Stop(5);
        EV_FreeObject(&PAT_02);
        EV_FreeObject(&PAT_04);
        EV_CameraTargetFree();
        EV_CameraPerspective(0, 1, 10923);
        EV_CameraPos(0, 0, 123.08, 2.2, 1502.99);
        EV_CameraAng(0, 0, 4807, 27722, 0);
        EV_CameraPos(0, 90, 120.42, 2.2, 1501.59);
        EV_Wait(10);
        EV_SerifPlay(403);
        EV_ClrFace(player);
        EV_SetFace(player, (char*)0x7DDEA4);
        EV_Msg(msgTbl_ev0001[TextLanguage][1]); //What's up?
        EV_Wait(60);
        EV_ClrFace(player);
        EV_MsgClose();
        EventSe_Stop(3);
        EventSe_Stop(4);
        EV_CameraPos(0, 0, 103.03, 9.46, 1534.3199);
        EV_CameraAng(0, 0, 64711, 59978, 0);
        EV_CameraPos(0, 90, 116.24, 8.3999996, 1525.95);
        EV_CameraTargetObj(0, 60, player, 0.0, 6.0, 0.0, 0);
        EV_ClrAction(player);
        EV_PlayPad(0, &EV0001_S_RUN);
        B_OUT_13 = COverlayCreate(0.016666668, 0.2, 0.0, 0.0, 0.0);
        EV_Wait(90);
        break;
    case 2:
        tikal_dispSwitch(1);
        EV_CameraOff();
        EV_PadOn();
        EV_InitPlayer(0);
        EventSe_Close();
        stopObjectAll();
        if (NY_SKY)
        {
            FreeTask(NY_SKY);
            NY_SKY = 0;
        }
        if (B_OUT_13)
        {
            FreeTask(B_OUT_13);
            B_OUT_13 = 0;
        }
        if (SONIC_SKY_2)
        {
            FreeTask(SONIC_SKY_2);
            SONIC_SKY_2 = 0;
        }
        if (SONIC_02SKY)
        {
            FreeTask(SONIC_02SKY);
            SONIC_02SKY = 0;
        }
        if (BALL_0)
        {
            FreeTask(BALL_0);
            BALL_0 = 0;
        }
        EV_FreeObject(&PAT_01);
        EV_FreeObject(&PAT_02);
        EV_FreeObject(&PAT_03);
        EV_FreeObject(&PAT_04);
        EV_FreeObject(&HELI_01);
        EV_FreeObject(&OYAJI_A);
        EV_FreeObject(&FAT_A);
        EV_FreeObject(&BOYS_A);
        EV_FreeObject(&FAT_B_0);
        EV_FreeObject(&LADY_A);
        EV_FreeObject(&OYAJI_B);
        EV_FreeObject(&LADY_B);
        EV_FreeObject(&LADY_C);
        EV_FreeObject(&OYAJI_C);
        break;
    }
}