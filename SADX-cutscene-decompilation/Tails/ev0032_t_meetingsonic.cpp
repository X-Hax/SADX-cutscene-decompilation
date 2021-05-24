#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0032_t_meetingsonic(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* sonic = 0;
	ObjectMaster* PURPLE = 0;

	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_thesonic);
		EV_SetPos(player, -470.98999f, 0.0099999998f, 2023.55f);
		EV_SetAng(player, 0, 25611, 0);
		EV_SetAction(player, MILES_ACTIONS[80], &MILES_TEXLIST, 1.0f, 1, 0);
		EV_CreateObject((ObjectMaster**)&PURPLE,
			player->Data1->Position.x,
			player->Data1->Position.y,
			player->Data1->Position.z,
			player->Data1->Rotation.x,
			0x4000 - player->Data1->Rotation.y,
			player->Data1->Rotation.z);
		EV_CreatePlayer(2, Sonic_Main,
			player->Data1->Position.x + 20.0f,
			player->Data1->Position.y,
			player->Data1->Position.z - 10.0f,
			player->Data1->Rotation.x,
			0x4000 - player->Data1->Rotation.y,
			player->Data1->Rotation.z);
		EV_Wait(1);
		sonic = EV_GetPlayer(2);
		EV_SetAction(sonic, SONIC_ACTIONS[3], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CameraAng(1, 0, 53760, 34048, 0);
		EV_CameraPos(1, 0, -439.70001f, 100.41f, 1916.5699f);
		EV_Wait(1);
		EV_LookObject(sonic, player, 0.0f, 6.0f, 0.0f);
		EV_LookObject(player, sonic, 0.0f, 6.0f, 0.0f);
		EV_Wait(1);
		EV_MovePoint2(sonic, -450.67001f, 0.0099999998f, 1901.05f, 0.57999998f, 3.0f);
		EV_MovePoint2(player, -460.17001f, 1.01f, 1912.28f, 0.56f, 3.0f);
		EV_CameraAng(0, 90, 53760, 34048, 0);
		EV_CameraPos(0, 90, -447.70001f, 66.970001f, 1931.85f);
		EV_Wait(90);
		EV_CameraAng(0, 0, 64768, 47104, 0);
		EV_CameraPos(0, 0, -495.04001f, 12.73f, 1963.4399f);
		EV_CameraAng(0, 110, 64768, 54272, 0);
		EV_CameraPos(0, 110, -467.96899f, 5.2385998f, 1920.849f);
		EV_Wait(60);
		EV_MoveFree(player);
		EV_MoveFree(sonic);
		EV_Wait(1);
		EV_MovePoint2(sonic, -450.67001f, 0.0099999998f, 1901.05f, 0.57999998f, 3.0f);
		EV_MovePoint2(player, -457.17001f, 1.01f, 1917.28f, 0.56f, 3.0f);
		EV_ClrAction(sonic);
		EV_ClrAction(player);
		EV_SetFace(sonic, "GG");
		EV_SerifPlay(625);
		EV_Msg(msgTbl_ev0032[TextLanguage][0]); //"\aBoy, you're lucky \nI saw you come do"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_MsgCls();
		EV_Wait(30);
		EV_SetAng(player, 0, 29184, 0);
		EV_SetAng(sonic, 0, 59904, 0);
		EV_LookFree(sonic);
		EV_CameraAng(0, 0, 64768, 46080, 0);
		EV_CameraPos(0, 0, -485.13f, 7.6700001f, 1917.63f);
		EV_CameraAng(0, 200, 64768, 50944, 0);
		EV_Wait(60);
		EV_CameraPos(0, 140, -475.29999f, 6.9299998f, 1915.92f);
		EV_SetFace(sonic, "CEAEDE");
		EV_SerifPlay(626);
		EV_Msg(msgTbl_ev0032[TextLanguage][1]); //"\aSo, what went wrong, anyway?"
		EV_Wait(1);
		EV_SerifWait();
		EV_SerifPlay(627);
		EV_Msg(msgTbl_ev0032[TextLanguage][2]); //"\aIt's not like you \nto crash like tha"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 16);
		EV_MsgClose();
		EV_MovePoint2(player, -457.17001f, 1.01f, 1913.28f, 0.56f, 0.059999999f);
		EV_CameraAng(0, 90, 64768, 37120, 0);
		EV_CameraPos(0, 90, -465.53799f, 7.6700001f, 1888.11f);
		EV_WaitMove(player);
		EV_SetAng(player, 0, 29184, 0);
		EV_Wait(40);
		EV_SetFace(player, "EDACG");
		EV_SerifPlay(628);
		EV_Msg(msgTbl_ev0032[TextLanguage][3]); //"\aYeah, it's just that I'm testing\na n"...
		EV_Wait(75);
		EV_Msg(msgTbl_ev0032[TextLanguage][4]); //"\aand it's not fully compatible\nyet!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(10);
		EV_ClrFace(sonic);
		if (!VoiceLanguage)
		{
			EV_SetFace(sonic, "FAF");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(sonic, "FAFE");
		}
		EV_SerifPlay(629);
		EV_Msg(msgTbl_ev0032[TextLanguage][5]); //"\aYou can always borrow my plane,\nthe "...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_Wait(1);
		EV_CameraTargetObj(1, 120, player, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraPos(0, 120, -458.13699f, 8.4370003f, 1883.174f);
		EV_SetPos(PURPLE,
			player->Data1->Position.x,
			player->Data1->Position.y,
			player->Data1->Position.z);
		EV_SetAng(PURPLE,
			player->Data1->Rotation.x,
			0x4000 - player->Data1->Rotation.y,
			player->Data1->Rotation.z);
		if (!VoiceLanguage)
		{
			EV_SetFace(player, "GAEAD");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(player, "GAEADGGA");
		}
		EV_SerifPlay(630);
		EV_Msg(msgTbl_ev0032[TextLanguage][6]); //"\aThanks, Sonic."
		EV_Wait(20);
		EV_Msg(msgTbl_ev0032[TextLanguage][7]); //"\aBut if I can make this work,\nit'll r"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(1);
		EV_SetFace(player, "EAG");
		EV_SerifPlay(631);
		EV_Msg(msgTbl_ev0032[TextLanguage][8]); //"\aCheck out this power supply!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraTargetFree();
		EV_Wait(1);
		EventSe_Oneshot(743, 0, 0, 0);
		EV_CameraAng(0, 0, 58112, 29952, 0);
		EV_CameraPos(0, 0, -451.03f, 21.110001f, 1891.95f);
		EV_SetAction(player, &action_m_m0104_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(PURPLE, &action_m_m0104cp_m_em_purple, &M_EM_PURPLE_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		EV_CameraAng(0, 20, 58112, 29952, 0);
		EV_CameraPos(0, 20, -455.47f, 6.7399998f, 1908.0f);
		EV_Wait(50);
		EV_SetAction(sonic, &action_s_s0022_sonic, &SONIC_TEXLIST, 0.30000001f, 1, 8);
		EV_ClrFace(sonic);
		if (!VoiceLanguage)
		{
			EV_SetFace(sonic, "IAADE");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(sonic, "EFI");
		}
		EV_SerifPlay(632);
		EV_Msg(msgTbl_ev0032[TextLanguage][9]); //"\aIt's a Chaos Emerald!   \nNo way!"
		EV_CameraAng(0, 0, 60416, 58112, 0);
		EV_CameraPos(0, 0, -453.28f, 8.2700005f, 1904.8199f);
		EV_CameraAng(0, 25, 256, 59136, 0);
		EV_CameraPos(0, 25, -457.60001f, 5.1199999f, 1911.6f);
		EV_Wait(25);
		EV_CameraAng(0, 50, 65024, 58112, 0);
		EV_CameraPos(0, 50, -462.28f, 6.27f, 1914.8199f);
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_CameraChaseRM(0, 240, player, 7.0f, 0, 0x8000, 0, 10.0f, 0, 0, 0, 10.0f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_ClrAction(sonic);
		EV_SetPos(sonic, -445.67001f, 0.0099999998f, 1901.05f);
		EV_SetFace(player, "EACADED");
		EV_SerifPlay(633);
		EV_Msg(msgTbl_ev0032[TextLanguage][10]); //"\aI was lucky to find \none of the 7 Ch"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(20);
		EV_SetFace(player, "DAC");
		EV_SerifPlay(634);
		EV_Msg(msgTbl_ev0032[TextLanguage][11]); //"\aThey have unlimited mystic\npowers."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(1);
		EV_SetFace(player, "DPCDE");
		EV_SerifPlay(635);
		EV_Msg(msgTbl_ev0032[TextLanguage][12]); //"\aNow I want to harness \nthat power to"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgCls();
		EV_Wait(60);
		EV_SetFace(player, "GGAG");
		EV_SerifPlay(636);
		EV_Msg(msgTbl_ev0032[TextLanguage][13]); //"\aLet's go to my workshop \nin the Myst"...
		EV_Wait(40);
		EV_Msg(msgTbl_ev0032[TextLanguage][14]); //"\aand I'll show you \nwhat I've been wo"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraTargetFree();
		EV_LookFree(player);
		EV_LookObject(player, sonic, 0.0f, 6.0f, 0.0f);
		EV_CameraChaseRM(0, 150, player, 7.0f, 0, 0x4000, 0, 10.0f, 0, -4096, 0, 40.0f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_MovePoint2(player, -450.29001f, 0.0099999998f, 1865.426f, 0.46000001f, 3.0f);
		EV_ClrAction(player);
		EV_ClrAction(PURPLE);
		EV_SetFace(player, "CDAD");
		EV_SerifPlay(637);
		EV_Msg(msgTbl_ev0032[TextLanguage][15]); //"\aWe'll go to the station,"
		EV_Wait(25);
		EV_Msg(msgTbl_ev0032[TextLanguage][16]); //"\ahop on a train\nand get there in no t"...
		EV_Wait(10);
		EV_Wait(30);
		EV_LookFree(player);
		EV_MovePoint2(player, -416.5f, 0.0099999998f, 1848.1169f, 0.46000001f, 3.0f);
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_RemovePlayer(2);
		EV_Wait(40);
		EV_CameraTargetFree();
		EV_Wait(1);
		break;
	case 2:
		EV_SetPos(player, -416.5f, 0.0099999998f, 1848.1169f);
		EV_SetAng(player, 0, 25709, 0);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_FreeObject(&PURPLE);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}