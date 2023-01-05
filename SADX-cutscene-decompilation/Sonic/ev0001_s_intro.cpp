#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0001[] = {
	(char*)("ICM0001_3"), &ICM0001_3_TEXLIST,
	(char*)("SSPATCAR_BODY"), &SSPATCAR_BODY_TEXLIST,
	(char*)("EV_HELI"), &EV_HELI_TEXLIST,
	0
};

void ev0001_s_intro(int state)
{
	float fps = 1.0f; //testing for 60 FPS scenes
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait((int)fps * 1);
		SetBankDir(73);
		EV_InitPlayer(0);
		EventSe_Init(6);
		EV_SetPos(player, 362.5f, 0.0f, 1450.72f);
		EV_SetAng(player, 0, 0, 0);
		seqVars[1] = 1; //SSVAR_CAR_DISP
		EV_CreateObject(&PAT_01, 508.59f, 0.0f, 727.0f, 0, 0x8000, 0);
		EV_CreateObject(&PAT_02, 536.63f, 0.0f, 718.0f, 0, 0x8000, 0);
		EV_CreateObject(&PAT_03, 569.0f, 0.0f, 718.0f, 0, 0x8000, 0);
		EV_CreateObject(&PAT_04, 609.0f, 0.0f, 720.0f, 0, 0x8000, 0);
		EV_CreateObject(&HELI_01, 508.59f, 50.0f, 727.0f, 0, 0x8000, 0);
		NY_SKY = CIchimaie2_Create(&ICM0001_3_TEXLIST, 0);
		CIchimaie2_SetPriority(NY_SKY, -69.0f);
		BALL = CTikalLight_Create(536.63f, 30.0f, 718.0f);
		EV_CreateObject(&OYAJI_A, 131.44f, 9.8000002f, 1503.5699f, 0, 0x386F, 0);
		EV_CreateObject(&FAT_A, 32.360001f, 8.3000002f, 1504.04f, 0, 0x138E4, 0);
		EV_CreateObject(&BOYS_A, 19.67f, 5.6599998f, 1502.95f, 0, 0x47F3, 0);
		EV_CreateObject(&FAT_B, 580.54999f, 8.3000002f, 1063.28f, 0, 0x16AF9, 0);
		EV_CreateObject(&LADY_A, 330.06f, 10.85f, 1058.5699f, 0, 0xE18, 0);
		EV_CreateObject(&OYAJI_B, 377.54001f, 9.8000002f, 1158.5699f, 0, 0x9563, 0);
		EV_CreateObject(&LADY_B, 197.89f, 10.85f, 1152.89f, 0, 0x45CB, 0);
		EV_CreateObject(&LADY_C, 173.05f, 10.85f, 1270.47f, 0, 0xBA3A, 0);
		EV_CreateObject(&OYAJI_C, 183.28999f, 9.8000002f, 1265.27f, 0, 0xB9AC, 0);
		EV_Wait((int)fps * 1);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f / fps, 1, 0);
		EV_SetMode(PAT_01, 0);
		EV_SetMode(PAT_02, 0);
		EV_SetMode(PAT_03, 0);
		EV_SetMode(PAT_04, 0);
		EV_SetMode(HELI_01, 0);
		EV_SetMode(BALL, 0);
		EV_SetPos(PAT_01, 508.59f, 0.0f, 727.0f);
		EV_SetAng(PAT_01, 0, 0x8000, 0);
		EV_SetPos(PAT_02, 536.63f, 0.0f, 718.0f);
		EV_SetAng(PAT_02, 0, 0x8000, 0);
		EV_SetPos(PAT_03, 569.0f, 0.0f, 718.0f);
		EV_SetAng(PAT_03, 0, 0x8000, 0);
		EV_SetPos(PAT_04, 609.0f, 0.0f, 720.0f);
		EV_SetAng(PAT_04, 0, 0x8000, 0);
		EV_SetPos(HELI_01, 609.0f, 50.0f, 720.0f);
		EV_SetAng(HELI_01, 0, 0x8000, 0);
		EV_SetAction(PAT_01, &action_sspatcar_body, &SSPATCAR_BODY_TEXLIST, 1.0f / fps, 1, 0);
		EV_SetAction(PAT_02, &action_sspatcar_body, &SSPATCAR_BODY_TEXLIST, 1.0f / fps, 1, 0);
		EV_SetAction(PAT_03, &action_sspatcar_body, &SSPATCAR_BODY_TEXLIST, 1.0f / fps, 1, 0);
		EV_SetAction(PAT_04, &action_sspatcar_body, &SSPATCAR_BODY_TEXLIST, 1.0f / fps, 1, 0);
		EV_SetAction(HELI_01, &action_c0_heli_body, &EV_HELI_TEXLIST, 1.0f / fps, 73, 0);
		EV_SetMode(OYAJI_A, 0);
		EV_ClrAction(OYAJI_A);
		EV_SetMotion(OYAJI_A, *MODEL_SS_PEOPLE_OBJECTS, MODEL_SS_PEOPLE_MOTIONS[1], ADV00_TEXLISTS[6], 0.5f / fps, 1, 0);
		EV_SetMode(FAT_A, 0);
		EV_ClrAction(FAT_A);
		EV_SetMotion(FAT_A, MODEL_SS_PEOPLE_OBJECTS[15], MODEL_SS_PEOPLE_MOTIONS[18], ADV00_TEXLISTS[6], 0.5f / fps, 1, 0);
		EV_SetMode(BOYS_A, 0);
		EV_ClrAction(BOYS_A);
		EV_SetMotion(BOYS_A, MODEL_SS_PEOPLE_OBJECTS[17], MODEL_SS_PEOPLE_MOTIONS[25], ADV00_TEXLISTS[6], 0.5f / fps, 1, 0);
		EV_SetMode(FAT_B, 0);
		EV_ClrAction(FAT_B);
		EV_SetMotion(FAT_B, MODEL_SS_PEOPLE_OBJECTS[13], MODEL_SS_PEOPLE_MOTIONS[20], ADV00_TEXLISTS[6], 0.5f / fps, 1, 0);
		EV_SetMode(LADY_A, 0);
		EV_ClrAction(LADY_A);
		EV_SetMotion(LADY_A, MODEL_SS_PEOPLE_OBJECTS[7], MODEL_SS_PEOPLE_MOTIONS[5], ADV00_TEXLISTS[6], 0.5f / fps, 1, 0);
		EV_SetMode(OYAJI_B, 0);
		EV_ClrAction(OYAJI_B);
		EV_SetMotion(OYAJI_B, MODEL_SS_PEOPLE_OBJECTS[3], MODEL_SS_PEOPLE_MOTIONS[2], ADV00_TEXLISTS[6], 0.5f / fps / fps, 1, 0);
		EV_SetMode(LADY_B, 0);
		EV_ClrAction(LADY_B);
		EV_SetMotion(LADY_B, MODEL_SS_PEOPLE_OBJECTS[4], MODEL_SS_PEOPLE_MOTIONS[5], ADV00_TEXLISTS[6], 0.5f / fps, 1, 0);
		EV_SetMode(LADY_C, 0);
		EV_ClrAction(LADY_C);
		EV_SetMotion(LADY_C, MODEL_SS_PEOPLE_OBJECTS[6], MODEL_SS_PEOPLE_MOTIONS[5], ADV00_TEXLISTS[6], 0.5f / fps, 1, 0);
		EV_SetMode(OYAJI_C, 0);
		EV_ClrAction(OYAJI_C);
		EV_SetMotion(OYAJI_C, MODEL_SS_PEOPLE_OBJECTS[1], MODEL_SS_PEOPLE_MOTIONS[0], ADV00_TEXLISTS[6], 0.80000001f / fps, 1, 0);
		EV_SetShadow(OYAJI_A, 1.0f);
		EV_SetShadow(OYAJI_B, 1.0f);
		EV_SetShadow(OYAJI_C, 1.0f);
		EV_SetShadow(FAT_A, 1.0f);
		EV_SetShadow(FAT_B, 1.0f);
		EV_SetShadow(BOYS_A, 1.0f);
		EV_SetShadow(LADY_A, 1.0f);
		EV_SetShadow(LADY_B, 1.0f);
		EV_SetShadow(LADY_C, 1.0f);
		EV_Wait((int)fps * 1);
		BGM_Play(MusicIDs_s_square);
		tikal_dispSwitch(0);
		EV_CameraPerspective(0, 1, 0x2AAB);
		EV_CameraPos(0, 0, 116.84f, 14.44f, 1653.05f);
		EV_CameraAng(0, 0, 0x627, 0x12EB, 0);
		EV_CameraPos(0, (int)fps * 150, 161.53999f, 14.44f, 1630.65f);
		EV_Wait((int)fps * 110);
		moveObject(LADY_A, 307.23001f, 10.85f, 1054.78f, 365.69f, 10.85f, 1051.6801f, 2 * 200);
		moveObject(FAT_B, 610.07001f, 8.3000002f, 1053.4f, 508.42999f, 8.3000002f, 1099.62f, 2 * 550);
		EV_Wait((int)fps * 20);
		EV_CameraPos(0, 0, 232.67999f, 22.09f, 1144.67f);
		EV_CameraAng(0, 0, 0x23, 0xD1EB, 0);
		EV_CameraPos(0, (int)fps * 150, 250.72f, 22.09f, 1183.03f);
		EV_Wait((int)fps * 110);
		moveObject(LADY_B, 197.89f, 10.85f, 1152.89f, 197.46001f, 10.85f, 1209.71f, (int)fps * 210);
		EV_Wait((int)fps * 10);
		EV_CameraPos(0, 0, 297.07001f, 17.950001f, 1184.13f);
		EV_CameraAng(0, 0, 0x123, 0x4000, 0);
		EV_CameraPos(0, (int)fps * 150, 298.79999f, 17.940001f, 1271.98f);
		moveObject(LADY_C, 172.95f, 10.85f, 1296.21f, 172.67999f, 10.85f, 1206.63f, (int)fps * 240);
		moveObject(OYAJI_C, 182.66f, 9.8000002f, 1287.36f, 183.03999f, 10.85f, 1200.08f, (int)fps * 240);
		EV_Wait((int)fps * 120);
		EV_CameraPerspective(0, 1, 0x31C7);
		EV_CameraPos(1, 0, 621.21997f, 1.15f, 1035.13f);
		EV_CameraAng(1, 0, 0x1123, 0x49E8, 0);
		EV_CameraPos(1, (int)fps * 200, 614.96002f, 1.15f, 1009.89f);
		EV_SetPath(HELI_01, (EPATHTAG*)0x2C12710, 0.5f / fps, 0);
		EV_Wait((int)fps * 20);
		EventSe_Play(0, 1334, (int)fps * 1800);
		EventSe_Volume(0, -120, 1);
		EV_Wait((int)fps * 1);
		EventSe_Volume(0, 120, 90);
		EV_Wait((int)fps * 70);
		EV_SetPath(BALL, (EPATHTAG*)0x2C12BA8, 0.69999999f / fps, 0);
		EV_Wait((int)fps * 30);
		EventSe_Volume(0, -120, 60);
		EV_Wait((int)fps * 10);
		EventSe_Oneshot(1338, 100, 0, 0);
		EV_Wait((int)fps * 80);
		tikal_dispSwitch(1);
		EV_CameraPos(0, 0, 364.62f, 216.24001f, 1124.0f);
		EV_CameraAng(0, 0, 0xF700, 0xD4EB, 0);
		EV_CameraPos(0, (int)fps * 150, 292.38f, 234.87f, 1164.73f);
		EV_CameraAng(0, (int)fps * 150, 0xF700, 0xD4EB, 0);
		EV_SetPos(player, 623.65997f, 0.0f, 757.79999f);
		EV_SetAng(player, 0, 0xC000, 0);
		stopObjectAll();
		EV_Wait((int)fps * 10);
		EV_FreeObject(&OYAJI_A);
		EV_FreeObject(&FAT_A);
		EV_FreeObject(&BOYS_A);
		EV_FreeObject(&FAT_B);
		EV_FreeObject(&LADY_A);
		EV_FreeObject(&OYAJI_B);
		EV_FreeObject(&LADY_B);
		EV_FreeObject(&LADY_C);
		EV_FreeObject(&OYAJI_C);
		BGM_Play(MusicIDs_thesonic);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0089_sonic, &SONIC_TEXLIST, 0.25f / fps, 0, 0);
		EV_Wait((int)fps * 80);
		EventSe_Stop(0);
		EventSe_Oneshot(17, 100, 0, 0);
		EV_Wait((int)fps * 30);
		seqVars[1] = 0; //SSVAR_CAR_DISP
		EV_CameraPerspective(0, 1, 0x31C7);
		EV_CameraPos(0, 0, 12.69f, 770.32001f, 1382.84f);
		EV_CameraAng(0, 0, 0xF800, 0x4000, 0);
		CIchimaie2_SetDstAlpha(NY_SKY, 1.0f, 1);
		EV_SetPos(player, -46.549999f, 780.0f, 1381.84f);
		EV_SetAng(player, 0, 0xC000, 0);
		EV_ClrAction(player);
		SONIC_SKY = CSkyWalk_create2(player, 740.0f);
		EV_Wait((int)fps * 90);
		if(NY_SKY){
			FreeTask(NY_SKY);
			NY_SKY = 0;
		}
		if(SONIC_SKY){
			FreeTask(SONIC_SKY);
			SONIC_SKY = 0;
		}
		EV_CameraPos(0, 0, 306.10999f, 419.31f, 1376.84f);
		EV_CameraAng(0, 0, 0x1E00, 0xD500, 0);
		EV_CameraPos(1, (int)fps * 30, 362.84f, 478.39999f, 1344.7f);
		EV_SetPos(player, 370.0f, 480.0f, 1342.17f);
		EV_SetAng(player, 0, 0xC000, 0);
		SONIC_02SKY = CSkyWalk_create2(player, 480.0f);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f / fps, 1, 0);
		EV_Wait((int)fps * 30);
		EV_SetAction(player, &action_s_s0064_sonic, &SONIC_TEXLIST, 2.0f / fps, 0, (int)fps * 8);
		EV_SetAction(player, &action_s_s0065_sonic, &SONIC_TEXLIST, 2.0f / fps, 0, (int)fps * 15);
		EV_SetAction(player, &action_s_s0066_sonic, &SONIC_TEXLIST, 2.0f / fps, 1, (int)fps * 15);
		EV_SerifPlay(400);
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "CDE");
		}
		EV_Wait((int)fps * 20);
		EV_Msg(msgTbl_ev0001[TextLanguage][0]); // "\aAh, Yeah!  This is happenin'!"
		EV_Wait((int)fps * 5);
		if (VoiceLanguage == Languages_Japanese) //JP voice has a whistle so dialogue starts later
		{
			EV_SetFace(player, "CDE");
		}
		EV_Wait((int)fps * 10);
		EV_SerifPlay(401);
		EV_Wait((int)fps * 30);
		EV_ClrFace(player);
		EV_Wait((int)fps * 15);
		EV_MsgClose();
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f / fps, 1, 0);
		EV_CameraPos(0, 0, 364.98999f, 482.34f, 1344.7f);
		EV_CameraAng(0, 0, 0x1E00, 0xD300, 0);
		EventSe_Play(5, 1335, (int)fps * 1800);
		EventSe_Volume(5, 80, (int)fps * 120);
		EventSe_Play(3, 1336, (int)fps * 1800);
		EventSe_Volume(3, 100, (int)fps * 60);
		EV_Wait((int)fps * 15);
		EventSe_Play(4, 1336, (int)fps * 1800);
		EventSe_Volume(4, 100, (int)fps * 30);
		EV_SerifPlay(402);
		EV_LookPoint(player, -85.339996f, 8.0f, 1590.0f);
		EV_ClrFace(player);
		EV_SetFace(player, "C");
		EV_Wait((int)fps * 5);
		EV_ClrFace(player);
		EV_SetPath(PAT_01, &epathtag_EV0001_01PT, 1.0f / fps, 0);
		EV_SetPath(PAT_02, &epathtag_EV0001_02PT, 1.0f / fps, 0);
		EV_SetPath(PAT_03, &epathtag_EV0001_03PT, 1.0f / fps, 0);
		EV_Wait((int)fps * 25);
		EV_CameraPos(0, 0, 300.23001f, 493.31f, 1425.24f);
		EV_CameraAng(0, 0, 0xC900, 0x3A00, 0);
		EV_CameraPos(0, (int)fps * 200, 316.22f, 493.31f, 1317.41f);
		EV_SetPath(PAT_04, &epathtag_EV0001_04PT, 1.0f / fps, 0);
		EV_Wait((int)fps * 30);
		EventSe_Oneshot(1337, 100, 0, 0);
		EV_Wait((int)fps * 30);
		EV_ClrAction(player);
		if (fps == 1.0f) {
			EV_PlayPad(0, &EV0001_S_JUMP_0);
			if(SONIC_02SKY){
				FreeTask(SONIC_02SKY);
				SONIC_02SKY = 0;
			}
		}
		EV_Wait((int)fps * 10);
		EventSe_Oneshot(1337, 60, 0, 0);
		EV_Wait((int)fps * 30);
		if (fps == 2.0f) { //Move Sonic off the building later to account for faster fall speed.
			EV_PlayPad(0, &EV0001_S_JUMP_0);
			if(SONIC_02SKY){
				FreeTask(SONIC_02SKY);
				SONIC_02SKY = 0;
			}
		}
		EventSe_Oneshot(1337, 80, 0, 0);
		EventSe_Volume(5, -80, 120);
		EV_Wait((int)fps * 60);
		EV_FreeObject(&PAT_01);
		EV_FreeObject(&PAT_03);
		EventSe_Volume(4, -100, 2 * 80);
		EventSe_Volume(3, -100, (int)fps * 80);
		EV_LookFree(player);
		EV_ClrAction(player);
		EV_SetPos(player, 118.25f, 30.0f, 1509.55f);
		EV_SetAng(player, 0, 0x6000, 0);
		EV_ClrAction(player);
		EV_CameraPos(0, 0, 103.03f, 9.46f, 1534.3199f);
		EV_CameraTargetObj(0, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_Wait((int)fps * 60);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 0.2f / fps, 1, 0);
		EventSe_Stop(5);
		EV_FreeObject(&PAT_02);
		EV_FreeObject(&PAT_04);
		EV_CameraTargetFree();
		EV_CameraPerspective(0, (int)fps * 1, 0x2AAB);
		EV_CameraPos(0, 0, 123.08f, 2.2f, 1502.99f);
		EV_CameraAng(0, 0, 0x12C7, 0x6C4A, 0);
		EV_CameraPos(0, (int)fps * 90, 120.42f, 2.2f, 1501.59f);
		EV_Wait((int)fps * 10);
		EV_SerifPlay(403);
		EV_ClrFace(player);
		EV_SetFace(player, "E");
		EV_Msg(msgTbl_ev0001[TextLanguage][1]); // "\aWhat's up?"
		EV_Wait((int)fps * 60);
		EV_ClrFace(player);
		EV_MsgClose();
		EventSe_Stop(3);
		EventSe_Stop(4);
		EV_CameraPos(0, 0, 103.03f, 9.46f, 1534.3199f);
		EV_CameraAng(0, 0, 0xFCC7, 0xEA4A, 0);
		EV_CameraPos(0, (int)fps * 90, 116.24f, 8.3999996f, 1525.95f);
		EV_CameraTargetObj(0, (int)fps * 60, player, 0.0f, 6.0f, 0.0f, 0);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV0001_S_RUN);
		B_OUT = COverlayCreate(0.016666668f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait((int)fps * 90);
		break;
	case 2:
		tikal_dispSwitch(1);
		EV_CameraOff();
		EV_PadOn();
		EV_InitPlayer(0);
		EventSe_Close();
		stopObjectAll();
		if(NY_SKY){
			FreeTask(NY_SKY);
			NY_SKY = 0;
		}
		if(B_OUT){
			FreeTask(B_OUT);
			B_OUT = 0;
		}
		if(SONIC_SKY){
			FreeTask(SONIC_SKY);
			SONIC_SKY = 0;
		}
		if(SONIC_02SKY){
			FreeTask(SONIC_02SKY);
			FreeTask(BALL);
		}
		BALL = 0;
		EV_FreeObject(&PAT_01);
		EV_FreeObject(&PAT_02);
		EV_FreeObject(&PAT_03);
		EV_FreeObject(&PAT_04);
		EV_FreeObject(&HELI_01);
		EV_FreeObject(&OYAJI_A);
		EV_FreeObject(&FAT_A);
		EV_FreeObject(&BOYS_A);
		EV_FreeObject(&FAT_B);
		EV_FreeObject(&LADY_A);
		EV_FreeObject(&OYAJI_B);
		EV_FreeObject(&LADY_B);
		EV_FreeObject(&LADY_C);
		EV_FreeObject(&OYAJI_C);
		break;
	}
}