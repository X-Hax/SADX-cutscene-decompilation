#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0006_s_poolsidewithtails(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* tails = 0;
	ObjectMaster* KURAYAMI = 0; //Fadeout
	ObjectMaster* PURPLE = 0;

	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_SetPos(player, -460.98999f, 0.0099999998f, 2013.55f);
		EV_SetAng(player, 0, 25611, 0);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[3], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(3, Tails_Main,
			(player->Data1->Position.x - 20.0f),
			(player->Data1->Position.y),
			(player->Data1->Position.z + 10.0f),
			(player->Data1->Rotation.x),
			(0x4000 - player->Data1->Rotation.y),
			(player->Data1->Rotation.z));
		EV_Wait(1);
		tails = EV_GetPlayer(3);
		EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[80], &MILES_TEXLIST, 1.0f, 1, 0);
		EV_CreateObject(&PURPLE,
			tails->Data1->Position.x,
			tails->Data1->Position.y,
			tails->Data1->Position.z,
			tails->Data1->Rotation.x,
			0x4000 - tails->Data1->Rotation.y,
			tails->Data1->Rotation.z);
		EV_CameraAng(1, 0, 56320, 25088, 0);
		EV_CameraPos(1, 0, -386.45001f, 64.599998f, 1920.33f);
		EV_Wait(1);
		BGM_Play(MusicIDs_themiles);
		EV_LookObject(player, tails, 0.0f, 6.0f, 0.0f);
		EV_LookObject(tails, player, 0.0f, 6.0f, 0.0f);
		EV_Wait(1);
		EV_MovePoint2(player, -450.67001f, 0.0099999998f, 1901.05f, 0.57999998f, 0.059999999f);
		EV_MovePoint2(tails, -460.17001f, 1.01f, 1912.28f, 0.56f, 0.059999999f);
		EV_Wait(60);
		EV_CameraAng(0, 30, 64768, 0x8000, 0);
		EV_CameraPos(0, 30, -453.85999f, 8.0500002f, 1881.74f);
		EV_Wait(30);
		EV_ClrAction(tails);
		EV_ClrAction(player);
		EV_ClrFace(tails);
		EV_SetFace(tails, "EDCEDG");
		EV_SerifPlay(417);
		EV_Msg((msgTbl_ev0006[TextLanguage])[0]); // "\aHey Sonic.  \nLong time no see, huh?"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_MsgClose();
		EV_ClrFace(player);
		EV_SetFace(player, "EDCD");
		EV_SerifPlay(418);
		EV_Msg((msgTbl_ev0006[TextLanguage])[1]); // "\aI'm just glad you're okay."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgCls();
		EV_Wait(30);
		EV_SetAng(tails, 0, 26624, 0);
		EV_SetAng(player, 0, 57856, 0);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_LookFree(player);
		EV_CameraAng(0, 0, 63488, 6912, 0);
		EV_CameraPos(0, 0, -452.91f, 7.0700002f, 1927.46f);
		EV_CameraAng(0, 60, 64256, 2560, 0);
		EV_Wait(40);
		EV_ClrFace(player);
		EV_SetFace(player, "DCECEAADCDE");
		EV_SerifPlay(419);
		EV_Msg((msgTbl_ev0006[TextLanguage])[2]); // "\aWhat happened, anyway?"
		EV_Wait(1);
		EV_SerifWait();
		EV_SerifPlay(420);
		EV_Msg((msgTbl_ev0006[TextLanguage])[3]); // "\aYou're too good of a pilot \nto just "...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(5);
		EV_MovePoint2(tails,
			player->Data1->Position.x - 8.0f,
			player->Data1->Position.y,
			player->Data1->Position.z + 8.0f,
			0.56f, 0.059999999f);
		EV_CameraAng(0, 30, 64256, 1024, 0);
		EV_Wait(30);
		EV_ClrFace(tails);
		EV_SetFace(tails, "EDCDAAECDED");
		EV_SerifPlay(421);
		EV_MsgW(75, (msgTbl_ev0006[TextLanguage])[4]); // "\aThat was a test run using \na new pro"...
		EV_MsgW(35, (msgTbl_ev0006[TextLanguage])[5]); // "\aIt's got a few bugs to iron out."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_MsgClose();
		EV_ClrFace(player);
		EV_SetFace(player, "FDCCDFD");
		EV_SerifPlay(422);
		EV_Msg((msgTbl_ev0006[TextLanguage])[6]); //"\aWhy not just use my plane, \nthe Torn"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraAng(0, 0, 512, 21248, 0);
		EV_CameraPos(0, 0, -442.64999f, 5.5999999f, 1902.02f);
		EV_SetPos(PURPLE,
			tails->Data1->Position.x,
			tails->Data1->Position.y,
			tails->Data1->Position.z);
		EV_SetAng(PURPLE,
			tails->Data1->Rotation.x,
			0x4000 - tails->Data1->Rotation.y,
			tails->Data1->Rotation.z);
		EV_ClrFace(tails);
		if (!VoiceLanguage)
		{
			EV_SetFace(tails, "GCAAGDG");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(tails, "GGDG");
		}
		EV_SerifPlay(423);
		EV_Msg((msgTbl_ev0006[TextLanguage])[7]); //"\aThanks, but you gotta check out\nmy n"...
		EV_Wait(1);
		EV_SerifWait();
		EV_SerifPlay(424);
		EV_Msg((msgTbl_ev0006[TextLanguage])[8]); //"\aTa dahhh!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_MsgClose();
		EventSe_Oneshot(743, 0, 0, 0);
		EV_CameraAng(0, 0, 57600, 26368, 0);
		EV_CameraPos(0, 0, -444.47f, 26.940001f, 1889.1f);
		EV_SetAction(tails, &action_m_m0104_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(PURPLE, &action_m_m0104cp_m_em_purple, &M_EM_PURPLE_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		EV_CameraAng(0, 30, 57600, 26368, 0);
		EV_CameraPos(0, 30, -456.14001f, 6.0900002f, 1906.5699f);
		EV_Wait(90);
		EV_MsgClose();
		EV_CameraAng(0, 0, 64256, 57600, 0);
		EV_SetAction(player, &action_s_s0022_sonic, &SONIC_TEXLIST, 0.30000001f, 1, 8);
		EV_ClrFace(player);
		EV_SetFace(player, "IAADE");
		EV_SerifPlay(425);
		EV_Msg((msgTbl_ev0006[TextLanguage])[9]); //"\aWHOA!   \nA Chaos Emerald!"
		EV_Wait(1);
		EV_Wait(45);
		EV_MsgClose();
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_CameraAng(0, 0, 64768, 23808, 0);
		EV_CameraPos(0, 0, -450.79999f, 5.6100001f, 1901.96f);
		EV_CameraAng(0, 240, 64768, 9216, 0);
		EV_CameraPos(0, 240, -441.94f, 6.71f, 1917.03f);
		EV_Wait(1);
		EV_ClrFace(player);
		EV_Wait(30);
		EV_ClrFace(tails);
		if (!VoiceLanguage)
		{
			EV_SetFace(tails, "GEDCDCGDE");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(tails, "GEDE");
		}
		EV_SerifPlay(426);
		EV_MsgW(70, (msgTbl_ev0006[TextLanguage])[10]); //"\aYep! I just happened to find \none of"...
		EV_MsgW(30, (msgTbl_ev0006[TextLanguage])[11]); //"\aduring one of my test flights. "
		EV_Wait(1);
		EV_SerifWait();
		if (VoiceLanguage == 1)
		{
			EV_ClrFace(tails);
		}
		EV_Wait(20);
		EV_SerifPlay(427);
		EV_Msg((msgTbl_ev0006[TextLanguage])[12]); //"\aThis thing's got unlimited power,\nya"...
		if (VoiceLanguage == 1)
		{
			EV_SetFace(tails, "GEDE");
		}
		EV_Wait(1);
		EV_SerifWait();
		if (VoiceLanguage == 1)
		{
			EV_ClrFace(tails);
		}
		EV_SerifPlay(428);
		EV_Msg((msgTbl_ev0006[TextLanguage])[13]); //"\aSo I figured, why not use it \nto pow"...
		if (VoiceLanguage == 1)
		{
			EV_SetFace(tails, "GEDE");
		}
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_MsgCls();
		EV_Wait(45);
		EV_ClrFace(tails);
		if (!VoiceLanguage)
		{
			EV_SetFace(tails, "CG");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(tails, "CGG");
		}
		EV_SerifPlay(429);
		EV_MsgW(60, (msgTbl_ev0006[TextLanguage])[14]); //"\aYou gotta come over to \nmy workshop,"...
		EV_MsgW(60, (msgTbl_ev0006[TextLanguage])[15]); //"\aI've got something I've gotta \nshow "...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_LookObject(player, tails, 0.0f, 6.0f, 0.0f);
		EV_LookFree(tails);
		EV_LookPoint(tails,
			player->Data1->Position.x,
			player->Data1->Position.y,
			player->Data1->Position.z);
		EV_CameraPos(0, 0, -444.83499f, 6.5500002f, 1912.076f);
		EV_CameraAng(0, 0, 2816, 6144, 0);
		EV_ClrAction(tails);
		EV_ClrAction(PURPLE);
		EV_MovePoint2(tails, -463.14001f, 0.0f, 1878.86f, 0.46000001f, 0.050000001f);
		EV_Wait(10);
		EV_SetAng(player, 0, 51712, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 51200, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 50688, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 50176, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 49664, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 49152, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 48640, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 48128, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 47616, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 47104, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 46080, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 45568, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 45056, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 44544, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 44032, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 43520, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 43008, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 42496, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 41984, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 41472, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 40960, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 40448, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 39936, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 39424, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 38912, 0);
		EV_ClrFace(tails);
		EV_SetFace(tails, "GEGCG");
		EV_SerifPlay(430);
		EV_MsgW(70, (msgTbl_ev0006[TextLanguage])[16]); //"\aIt's in the Mystic Ruins.   \nThe fas"...
		EV_MsgW(40, (msgTbl_ev0006[TextLanguage])[17]); //"\aLet's go!"
		EV_MovePoint2(tails, -392.20999f, 0.0f, 1844.77f, 0.46000001f, 0.050000001f);
		EV_Wait(120);
		EV_MsgClose();
		EV_ClrFace(tails);
		KURAYAMI = COverlayCreate(0.016666668f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_Wait(70);
		break;
	case 2:
		EV_SetPos(player, -450.67001f, 0.0099999998f, 1901.05f);
		EV_SetAng(player, 0, 38912, 0);
		EV_FreeObject(&PURPLE);
		EV_RemovePlayer(3);
		EV_InitPlayer(0);
		FreeTask(KURAYAMI);
		KURAYAMI = 0;
		EventSe_Close();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}