#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0047[] = {
	(char*)("M_EM_RED"), &M_EM_RED_TEXLIST,
	(char*)("EV_TR2BEFORE_WITH_SONIC"), &tr2_texlist,
	0
};

void ev0047_t_tornado2(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		effect_create2(0, 0, 442.0f, -268.5f, 960.0f, &ev_effect_list10);
		effect_scl(0, 0.0f, 0.0f);
		SetBankDir(89);
		EventSe_Init(5);
		seqVars[35] = 0;
		EV_CreateObject(&TR2, -738.90002f, 1120.0f, 3336.6001f, 0, 0xF000, 0);
		EV_SetPos(player, 1413.8357f, 201.8f, 813.48999f);
		EV_SetAng(player, 0, 0x532D, 0);
		EV_CreateObject(&emerald, 0.0f, 5.5f, 0.0f, 0, 0x8000, 0);
		EV_SetMode(emerald, 0);
		EV_SetPos(emerald, 1413.8357f, 201.8f, 813.48999f);
		EV_SetAng(emerald, 0, 0x532D, 0);
		EV_ClrAction(player);
		EV_ClrAction(emerald);
		EV_SetAction(player, &action_m_m0113_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_SetAction(emerald, &action_m_m0113c_m_em_red, &texlist_m_em_red, 1.0f, 1, 8);
		EV_CameraPos(1, 0, 1377.38f, 271.60001f, 843.43701f);
		EV_CameraAng(1, 0, 0x1000, 0xDD00, 0xFF00);
		EV_CameraPos(0, 50, 1382.855f, 253.136f, 838.07001f);
		EV_Wait(10);
		EV_SetPos(player, 1413.8357f, 201.8f, 813.48999f);
		EV_SetAng(player, 0, 0x532D, 0);
		EV_Wait(35);
		EV_SetMode(TR2, 0);
		EV_SetPos(TR2, 439.37909f, -299.0f, 296.01819f);
		EV_SetAng(TR2, 0, 0x532D, 0);
		EV_CameraPos(0, 110, 1396.6801f, 209.71001f, 826.56f);
		EV_Wait(109);
		EV_CameraPos(0, 70, 1399.0f, 202.319f, 824.56f);
		EV_CameraAng(0, 70, 0xF00, 0xDD00, 0);
		EV_Wait(10);
		EV_ClrFace(player);
		EV_SetFace(player, "FED");
		EV_SerifPlay(753);
		EV_Msg(msgTbl_ev0047[TextLanguage][0]); //"\aThe time has come at last."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(10);
		EV_CameraPerspective(0, 100, 0x3C72);
		EV_CameraPos(0, 100, 1402.7273f, 202.86f, 816.85999f);
		EV_CameraAng(0, 100, 0x1016, 0xC0E8, 0xFFFF);
		EV_Wait(20);
		EV_SetFace(player, "DEC");
		EV_SerifPlay(754);
		EV_Msg(msgTbl_ev0047[TextLanguage][1]); //"\aThis new plane should work \na lot be"...
		EV_Wait(60);
		EV_CameraPos(0, 110, 1402.593f, 202.86f, 810.85999f);
		EV_Msg(msgTbl_ev0047[TextLanguage][2]); //"\aI've ironed out most of \nthe problem"...
		EV_Wait(110);
		EV_CameraPos(0, 0, 1421.04f, 205.3656f, 814.77551f);
		EV_CameraAng(0, 0, 0x1000, 0x3900, 0xFE00);
		EV_CameraPerspective(1, 30, 0x27D2);
		EV_SerifPlay(755);
		EV_SetFace(player, "FE");
		EV_Msg(msgTbl_ev0047[TextLanguage][3]); // "\aSo, here it goes!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_ClrAction(player);
		EV_ClrAction(emerald);
		EV_SetAction(player, &action_m_m0114_miles, &MILES_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(emerald, &action_m_m0114c_m_em_red, &texlist_m_em_red, 1.0f, 0, 8);
		EV_SetAction(player, &action_m_m0115_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(emerald, &action_m_m0115c_m_em_red, &texlist_m_em_red, 1.0f, 1, 0);
		EV_CameraPerspective(0, 110, 0x29F5);
		EV_CameraPos(0, 110, 1423.0f, 204.554f, 814.09998f);
		EV_CameraAng(0, 110, 0xE00, 0x3E00, 0xFE00);
		EV_SerifPlay(756);
		EV_SetFace(player, "D");
		EV_Msg(msgTbl_ev0047[TextLanguage][4]); //"\aEmerald, do your stuff!"
		EV_Wait(50);
		BGM_Play(MusicIDs_themiles);
		EV_SetAction(player, &action_m_m0116_miles, &MILES_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(emerald, &action_m_m0116c_m_em_red, &texlist_m_em_red, 1.0f, 0, 8);
		EV_SetAction(player, &action_m_m0117_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(emerald, &action_m_m0117c_m_em_red, &texlist_m_em_red, 1.0f, 1, 0);
		EV_Wait(40);
		EV_SerifPlay(757);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "EAEP");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "EAEPP");
		}
		EV_Msg(msgTbl_ev0047[TextLanguage][5]); //"\aReady Sonic?   Here I come!"
		EV_Wait(1);
		EV_SerifWait();
		BLACK = COverlayCreate(0.016666668f, 0.1f, 0.0f, 0.0f, 0.0f);
		EV_MsgClose();
		EV_ClrFace(player);
		EV_Wait(40);
		EventSe_Oneshot(1333, 0, 0, 0);
		EV_Wait(30);
		EventSe_Play(0, 1335, 1800);
		EV_SetPos(player, 1527.3f, 192.8f, 694.48999f);
		EV_SetAng(player, 0, 0x532D, 0);
		EV_SetPos(emerald, 1527.3f, 192.8f, 694.48999f);
		EV_SetAng(emerald, 0, 0x532D, 0);
		COverlaySetSpeed(BLACK, -0.1f);
		EV_SetAction(TR2, action_tr2a_s_t2b_body, &tr2_texlist, 0.0f, 1, 0);
		ChangeTornado2Model_EV0047();
		EV_SetPath(TR2, &epathtag_cube0047_1, 0.70999998f, 0);
		EV_CameraPos(0, 0, 453.89001f, -295.42001f, 295.17401f);
		EV_CameraAng(0, 0, 0x700, 0x44E0, 0xFFE0);
		EV_Wait(5);
		EV_CameraPos(0, 50, 453.79999f, -281.14999f, 305.88f);
		EV_CameraAng(0, 50, 0x1700, 0x64D0, 0xFF00);
		EV_Wait(50);
		EventSe_Stop(0);
		EV_CameraPos(0, 0, 404.88f, 374.5f, 1676.3f);
		EV_CameraAng(0, 0, 0xF1D0, 0x660, 0);
		EventSe_Play(1, 1338, 1800);
		EventSe_Volume(1, -30, 1);
		EV_CameraPos(0, 130, 416.45001f, 137.39999f, 1743.187f);
		EV_Wait(130);
		EventSe_Stop(1);
		EV_ClrAction(TR2);
		EV_SetAction(TR2, action_tr2a_s_t2b_body, &tr2_texlist, 1.0f, 1, 0);
		EV_CameraPerspective(0, 1, 0x471C);
		EV_CameraPos(0, 0, 435.28799f, -270.70001f, 291.5f);
		EV_CameraAng(0, 0, 0x149, 0x8381, 0xFF00);
		EventSe_Play(0, 1335, 1800);
		EventSe_Volume(0, -20, 1);
		EV_CameraPos(0, 60, 444.25f, -270.48999f, 291.73361f);
		EV_CameraPerspective(0, 60, 0x3111);
		EV_Wait(60);
		EventSe_Stop(0);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, 407.36301f, -248.89999f, 1034.23f);
		EV_CameraAng(0, 0, 0xBD4, 0xF561, 0);
		EventSe_Play(3, 1338, 1800);
		EV_CameraPos(0, 50, 410.47f, -289.32999f, 1022.538f);
		EV_Wait(49);
		EV_CameraPos(0, 70, 411.79501f, -306.39999f, 1017.653f);
		EV_Wait(10);
		seqVars[35] = 3;
		EventSe_Play(2, 1334, 1800);
		EventSe_Volume(2, 120, 1);
		EV_Wait(60);
		EventSe_Stop(2);
		EventSe_Stop(3);
		seqVars[35] = 0;
		EV_CameraPerspective(0, 1, 0x2000);
		EV_CameraPos(0, 0, 435.26001f, -274.0f, 308.0f);
		EV_CameraAng(0, 0, 0x5D0, 0x9600, 0x200);
		EV_CameraPos(0, 80, 433.60001f, -273.56601f, 311.66449f);
		EV_CameraAng(0, 80, 0x5D0, 0xAC00, 0x200);
		EV_Wait(5);
		seqVars[35] = 3;
		EventSe_Oneshot(1334, -40, 0, 0);
		EV_Wait(25);
		EV_ClrAction(TR2);
		EV_SetAction(TR2, action_tr2a_s_t2b_body, &tr2_texlist, 2.0f, 1, 0);
		EV_SerifPlay(758);
		EV_Msg(msgTbl_ev0047[TextLanguage][6]); //"\aTornado 2, \nclear for take off!"
		EV_Wait(60);
		EV_Msg(msgTbl_ev0047[TextLanguage][7]); //"\aAway we go!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		moveObject(TR2, 439.99261f, -271.0f, 321.01001f, 439.99261f, -268.0f, 846.0f, 120);
		EV_Wait(10);
		stopObjectAll();
		EV_ClrAction(TR2);
		EV_CameraPos(1, 0, 438.95001f, -275.0f, 370.88f);
		EV_CameraAng(0, 0, 0x200, 0x8000, 0);
		EventSe_Play(4, 1337, 1800);
		EV_CameraPos(0, 40, 438.86359f, -271.54999f, 961.09998f);
		EV_Wait(30);
		EV_SetAction(TR2, action_tr2a_s_t2b_body, &tr2_texlist, 2.0f, 1, 0);
		EV_Wait(4);
		EventSe_Oneshot(1339, 120, 0, 0);
		effect_scl(0, 1.8f, 1.8f);
		EV_Wait(6);
		effect_scl(0, 0.0f, 0.0f);
		EventSe_Stop(4);
		EV_CameraChaseFree();
		EV_ClrPath(TR2);
		EV_CameraPos(0, 0, 470.14499f, -292.86401f, 1009.935f);
		EV_CameraAng(0, 0, 0x8D0, 0xE00, 0xFF00);
		EV_SetPath(TR2, &epathtag_cube0047_3, 1.0f, 0);
		EV_CameraTargetObj(1, 1, TR2, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(54);
		EventSe_Oneshot(1339, 120, 0, 0);
		effect_scl(0, 1.8f, 1.8f);
		EV_Wait(83);
		BLACK2 = COverlayCreate(0.016666668f, 0.1f, 0.0f, 0.0f, 0.0f);
		EV_Wait(43);
		EV_ClrAction(TR2);
		EV_Wait(18);
		effect_delete(0);
		ChangeTornado2Model2_EV0047();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_ClrPath(TR2);
		ChangeTornado2Model2_EV0047();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_FreeObject(&emerald);
		EV_FreeObject(&TR2);
		EventSe_Close();
		if(BLACK){
			FreeTask(BLACK);
			BLACK = 0;
		}
		if(BLACK2){
			FreeTask(BLACK2);
			BLACK2 = 0;
		}
		effect_delete(0);
		break;
	}
}