#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev001C_s_beforechaos6(int state)
{
    ObjectMaster* player = EV_GetPlayer(0);
    ObjectMaster* big;
    ObjectMaster* eggmoble;

    ObjectMaster* Frog = 0;

    switch(state){
    case 1:
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_InitPlayer(0);
        EV_CameraPerspective(1, 1, 10012);
        EV_SetPos(player, 104.3f, 744.0f, -522.0f);
        EV_SetAng(player, 63529, 50857, 0);
        EV_InitPlayer(0);
        EV_ClrAction(player);
        EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 0.69999999f, 1, 16);
        EV_CreatePlayer(2, Big_Main, 115.0f, 744.0f, -480.0f, 0, 47273, 0);
        LoadEventObject(&Frog, set_shapefrog, 18.254999f, 773.79999f, -524.37f, 0, 0x8000, 0);
        StgChaos6CtrlOn(5.3000002f, 745.0f, -500.70001f, 0, -1280, 0, 910);
        create_eggmoble(20.0f, 780.0f, -421.0f, 0, 40960, 0);
        EV_Wait(1);
        BGM_Play(MusicIDs_evtbgm01);
        EV_SetMode(Frog, 0);
        EV_SetPos(Frog, 24.459999f, 763.88501f, -516.44f);
        EV_SetAng(Frog, 63488, -42544, 0);
        EV_SetAction(Frog, &action_f_f0010_frog, &texlist_big_kaeru, 0.2f, 1, 0);
        big = EV_GetPlayer(2);
        EV_SetAction(big, &action_b_b0014_big, &BIG_TEXLIST, 0.69999999f, 1, 16);
        chg_frogshape(2);
        EV_CameraPos(1, 0, 111.932f, 748.60797f, -522.70001f);
        EV_CameraAng(0, 0, 3881, 17065, 65504);
        EV_Wait(10);
        ChgEggMobleMod(0);
        EV_CameraPos(0, 130, 138.3f, 744.74597f, -521.203f);
        EV_CameraAng(0, 130, 3881, 15785, 65504);
        EV_CameraPerspective(0, 130, 12743);
        EV_Wait(129);
        EV_CameraPos(0, 50, 133.57201f, 744.35101f, -516.46002f);
        EV_CameraAng(0, 50, 3881, 15785, 65504);
        EV_Wait(49);
        EV_CameraPos(0, 55, 134.14999f, 747.17102f, -507.42001f);
        EV_CameraAng(0, 55, 3113, 15017, 65504);
        EV_Wait(55);
        EV_CameraPos(0, 0, 98.0f, 746.06f, -516.06f);
        EV_CameraAng(0, 0, 4144, 57520, 64512);
        EV_CameraPos(0, 90, 99.300003f, 746.83002f, -517.40002f);
        EV_SerifPlay(561);
        if (!VoiceLanguage)
        {
            EV_SetFace(player, (char*)"FE");
        }
        if (VoiceLanguage == 1)
        {
            EV_SetFace(player, (char*)"FBBBD");
        }
        EV_Msg((msgTbl_ev001C[TextLanguage])[0]); //"\aOh no!  Not again!"
        EV_SerifWait();
        EV_ClrFace(player);
        EV_MsgClose();
        EV_CameraPos(0, 0, 77.620003f, 750.47998f, -531.90002f);
        EV_CameraAng(0, 0, 4144, 16816, 0);
        EV_CameraPos(0, 110, 79.110001f, 750.47998f, -496.0f);
        EV_Wait(30);
        EV_SerifPlay(565);
        EV_SetFace(player, (char*)"EAADC");
        EV_Msg((msgTbl_ev001C[TextLanguage])[1]); //"\aChaos!   \nCould this be the same bea"...
        EV_Wait(50);
        EV_CameraPerspective(0, 1, 9102);
        EV_CameraPos(0, 0, 98.739998f, 746.0f, -515.40002f);
        EV_CameraAng(0, 0, 4144, 57520, 64512);
        EV_CameraPos(0, 60, 97.260002f, 746.15002f, -516.70001f);
        EV_SerifWait();
        EV_ClrFace(player);
        EV_MsgClose();
        EV_SerifPlay(562);
        EV_Msg((msgTbl_ev001C[TextLanguage])[2]); //\aHa ha ha ha ha! "
        EV_SetAction(player, &action_s_s0001_sonic, &SONIC_TEXLIST, 1.0f, 1, 8);
        EV_MsgClose();
        EV_SetAng(player, 63529, 49833, 0);
        EV_CameraPerspective(1, 80, 12743);
        EV_CameraPos(1, 60, 103.0f, 746.59003f, -531.34003f);
        EV_CameraAng(1, 60, 4144, 31408, 64512);
        EV_SerifPlay(563);
        EV_Msg((msgTbl_ev001C[TextLanguage])[3]); //"\aOh, yes!  \nAttack Sonic, now!"
        EV_Wait(60);
        EV_CameraPos(0, 140, 96.839996f, 746.16803f, -539.78003f);
        EV_CameraAng(0, 140, 2601, 32169, 0);
        EV_SerifWait();
        EV_MovePoint2(big, 110.0f, 746.0f, -482.42999f, 0.60000002f, 0.0f);
        EV_SerifPlay(564);
        EV_Msg((msgTbl_ev001C[TextLanguage])[4]); //"\aFroggy!"
        EV_Wait(1);
        EV_SerifWait();
        EV_MsgClose();
        EV_CameraPos(0, 0, 44.82f, 757.46997f, -531.28003f);
        EV_CameraAng(0, 0, 2601, 22953, 65504);
        EV_CameraPerspective(0, 70, 7282);
        EV_CameraPos(0, 70, 39.34f, 759.20001f, -527.28003f);
        EV_SerifPlay(566);
        EV_Msg((msgTbl_ev001C[TextLanguage])[5]); //"\aI must save Froggy!"
        EV_Wait(60);
        EV_MsgClose();
        EV_ClrAction(big);
        EV_CameraPos(0, 0, 87.540001f, 745.79999f, -539.62f);
        EV_CameraAng(0, 0, 1833, 38832, 0);
        EV_Wait(1);
        EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.60000002f, 1, 8);
        EV_SerifPlay(567);
        EV_MsgW(60, (msgTbl_ev001C[TextLanguage])[6]); // "\aIf he's your friend, \nI'll help you."
        EV_SetAction(big, &action_b_b0013_big, &BIG_TEXLIST, 0.80000001f, 0, 8);
        EV_SetAction(big, &action_b_b0012_big, &BIG_TEXLIST, 0.80000001f, 1, 0);
        EV_MsgClose();
        EV_CameraPos(1, 80, 91.769997f, 745.59998f, -543.84003f);
        EV_CameraAng(1, 80, 1833, 38464, 0);
        EV_Wait(20);
        EV_SetAction(player, &action_s_s0067_sonic, &SONIC_TEXLIST, 0.69999999f, 0, 8);
        EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 8);
        EV_SerifPlay(568);
        EV_SetFace(player, (char*)"FEF");
        EV_Msg((msgTbl_ev001C[TextLanguage])[7]); //"\aJust leave it to me!"
        EV_Wait(1);
        EV_SerifWait();
        EV_CameraPerspective(1, 40, 12743);
        EV_ClrFace(player);
        EV_ClrAction(big);
        EV_MovePoint2(big, 91.0f, 757.0f, -290.0f, 0.0f, 2.0f);
        EV_MsgClose();
        EV_Wait(10);
        EV_CameraPerspective(1, 1, 12743);
        EV_CameraPos(1, 0, 27.6f, 788.85999f, -420.79999f);
        EV_CameraAng(1, 0, 3120, 17328, 512);
        eggmoble = GetEggMobleTask();
        EV_ClrAction(eggmoble);
        EV_SetAction(eggmoble, &action_gm_gm0003_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
        EV_SerifPlay(569);
        EV_Msg((msgTbl_ev001C[TextLanguage])[8]); //"\aHa ha ha ha ha!"
        EV_RemovePlayer(2);
        EV_SerifWait();
        EV_CameraPerspective(0, 260, 10559);
        EV_CameraPos(0, 260, 38.7356f, 807.90002f, -390.44601f);
        EV_CameraAng(0, 260, 61544, 435, 0);
        EV_SerifPlay(570);
        EV_SetAction(eggmoble, &action_gm_gm0020_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 8);
        EV_SetAction(eggmoble, &action_gm_gm0021_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 8);
        EV_SetAction(eggmoble, &action_gm_gm0021_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 8);
        EV_SetAction(eggmoble, &action_gm_gm0020_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 8);
        EV_Msg((msgTbl_ev001C[TextLanguage])[9]); // "\aNow I have 6 of \nthe Chaos Emeralds."
        EV_Wait(1);
        EV_SerifWait();
        EV_SerifPlay(571);
        EV_Msg((msgTbl_ev001C[TextLanguage])[10]); // "\aThere's only one more \nleft to find."
        EV_Wait(1);
        EV_SetAction(eggmoble, &action_gm_gm0025_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 16);
        EV_SerifWait();
        EV_SerifPlay(572);
        EV_Msg((msgTbl_ev001C[TextLanguage])[11]); //"\aI even found \nChaos' missing tail!"
        EV_Wait(1);
        EV_WaitAction(eggmoble);
        EV_CameraPos(1, 0, 73.755997f, 754.0f, -515.62f);
        EV_CameraAng(1, 0, 63273, 51369, 256);
        EV_CameraPos(0, 40, 92.667999f, 744.0f, -514.70001f);
        EV_CameraAng(1, 30, 4905, 55881, 512);
        EV_CameraPerspective(0, 40, 6372);
        EV_SerifPlay(573);
        EV_SetFace(player, (char*)"FEF");
        EV_Msg((msgTbl_ev001C[TextLanguage])[12]); //"\aYou won't get away \nwith this, you m"...
        EV_SetAction(player, &action_s_s0007_sonic, &SONIC_TEXLIST, 0.80000001f, 0, 4);
        EV_SetAction(player, &action_s_s0005_sonic, &SONIC_TEXLIST, 0.80000001f, 1, 4);
        EV_Wait(20);
        EV_CameraPos(0, 50, 93.25f, 744.0f, -513.88849f);
        EV_CameraAng(0, 50, 4905, 57001, 512);
        EV_Wait(45);
        EV_CameraPerspective(0, 1, 10012);
        EV_CameraPos(1, 0, 45.169998f, 785.5f, -432.39999f);
        EV_CameraAng(1, 0, 2304, 20480, 512);
        EV_CameraPos(0, 200, 38.068001f, 793.89001f, -418.56699f);
        EV_CameraAng(0, 200, 0, 0x4000, 0);
        EV_ClrAction(eggmoble);
        EV_SetAction(eggmoble, &action_gm_gm0025_eggmoble, &EV_EGGMOBLE0_TEXLIST, 0.40000001f, 0, 8);
        EV_SetAction(eggmoble, &action_gm_gm0022_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 8);
        EV_SetAction(eggmoble, &action_gm_gm0004_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.3f, 1, 6);
        EV_SerifPlay(574);
        EV_Msg((msgTbl_ev001C[TextLanguage])[13]); //"\aI will!"
        EV_SerifWait();
        EV_SerifPlay(575);
        EV_Msg((msgTbl_ev001C[TextLanguage])[14]); //"\aYou're no match for Chaos - even\ntho"...
        EV_SerifWait();
        EV_SetAction(eggmoble, &action_gm_gm0024_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 6);
        EV_SetAction(eggmoble, &action_gm_gm0020_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 8);
        EV_MsgClose();
        EV_SetAction(player, &action_s_s0042_sonic, &SONIC_TEXLIST, 0.80000001f, 1, 8);
        EV_SerifPlay(576);
        EV_Msg((msgTbl_ev001C[TextLanguage])[15]); // "\aOkay Chaos! Destroy them all...\nImme"...
        EV_Wait(45);
        EV_CameraPos(1, 40, 119.05f, 744.28998f, -519.79999f);
        EV_CameraAng(1, 40, 3840, 17152, 512);
        EV_MsgClose();
        EV_Wait(20);
        EV_CameraPos(1, 50, 118.88f, 744.42999f, -522.70001f);
        EV_CameraAng(1, 50, 3840, 17152, 512);
        EV_Wait(70); 
        break;
    case 2:
        EV_CameraOff();
        EV_PadOn();
        EV_InitPlayer(0);
        EV_RemovePlayer(2);
        EV_FreeObject(&Frog);
        StgChaos6CtrlOff();
        delete_eggmoble();
        break;
    }
}