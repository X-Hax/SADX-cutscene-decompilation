#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev004E[] = {
	(char*)("EV_EGGMOBLE0"), &EV_EGGMOBLE0_TEXLIST,
	0
};

void ev004E_t_speedhighway(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		SetBankDir(92);
		EventSe_Init(5);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetEventFlag((EventFlags)(EventFlags_Sonic_HotelToCasinoOpen | 0x40)); //idk if this is right
		BGM_Play(MusicIDs_evtbgm01);
		create_eggmoble(316.95999f, 10.01f, 1374.8199f, 0, 0x7800, 0);
		EV_SetPos(player, 340.01001f, 0.0099999998f, 1650.25f);
		EV_SetAng(player, 0, 0x7800, 0);
		EV_CameraPos(1, 0, 312.20999f, 13.23f, 1587.09f);
		EV_CameraAng(1, 0, 0xF800, 0xE300, 0);
		SMOKE = CObjSmoke_Create();
		SMOKE2 = CObjSmoke_Create();
		if (SMOKE) {
			SMOKE->twp->ang.y = 5;
			SMOKE->twp->ang.x = 5;
			*(float*)SMOKE->twp->value.l = 10.0f;
			*(float*)(SMOKE->twp->value.l + 32) = -30.0f;
			*(float*)(SMOKE->twp->value.l + 36) = 0.0f;
			*(float*)(SMOKE->twp->value.l + 40) = 0.0f;
		}
		if (SMOKE2) {
			SMOKE2->twp->ang.y = 10;
			SMOKE2->twp->ang.x = 10;
			*(float*)SMOKE2->twp->value.l = 20.0f;
		}
		EV_ClrAction(player);
		EV_PlayPad(0, &E004eT);
		EV_Wait(80);
		EV_CameraPos(0, 80, 328.81f, 7.0100002f, 1575.926f);
		EV_CameraAng(0, 80, 0xFF00, 0xF700, 0);
		EV_CameraPerspective(0, 80, 0x2000);
		EV_Wait(80);
		EventSe_Oneshot(1333, 0, 0, 0);
		EV_SetPos(SMOKE, 370.55499f, 1.045f, 1360.7209f);
		EV_ClrFace(player);
		EV_SetFace(player, "F");
		EV_SerifPlay(804);
		EV_MsgW(60, msgTbl_ev004E[TextLanguage][0]); //"\aI see it!"
		EV_ClrFace(player);
		EventSe_Play(0, 1338, 1800);
		ChgEggMobleSMod(1);
		EV_Wait(3);
		EventSe_Volume(0, -10, 100);
		eggmoble_move_rapid(443.07101f, 21.999001f, 1371.183f, 60);
		EV_Wait(5);
		EV_MovePoint2(player, 341.37f, 0.0f, 1372.9f, 0.0f, 0.0f);
		EV_Wait(20);
		EV_SetPos(SMOKE2, 340.73999f, 11.38f, 1371.89f);
		EV_Wait(5);
		SMOKE2->twp->ang.y = 60;
		SMOKE2->twp->ang.x = 60;
		EV_Wait(5);
		EV_CameraPos(1, 0, 308.97f, 11.38f, 1328.77f);
		EV_CameraAng(1, 0, 0xFD00, 0x9900, 0);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_Wait(5);
		EV_MsgCls();
		eggmoble_move_rapid(615.60602f, 17.837f, 1382.1899f, 60);
		EV_CameraPos(1, 60, 330.20999f, 8.6499996f, 1358.9301f);
		EV_Wait(60);
		SMOKE2->twp->ang.y = 0;
		SMOKE2->twp->ang.x = 0;
		EV_WaitMove(player);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0109_miles, &MILES_TEXLIST, 1.0f, 0, 8);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0141_miles, &MILES_TEXLIST, 2.0f, 0, 0);
		EV_WaitAction(player);
		EventSe_Stop(0);
		EV_SetPos(player, 342.37f, 0.0f, 1371.9f);
		EV_SetAng(player, 0, 0x4000, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0109_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_Wait(30);
		SMOKE->twp->ang.y = 0;
		SMOKE->twp->ang.x = 0;
		EV_ClrFace(player);
		EV_SetFace(player, "DADE");
		EV_SerifPlay(805);
		EV_MsgW(60, msgTbl_ev004E[TextLanguage][1]); //"\aI've gotta get it \nbefore Eggman."
		EV_ClrFace(player);
		EV_CameraPos(1, 120, 353.60001f, 13.59f, 1360.97f);
		EV_CameraAng(1, 120, 0xEF00, 0x5F00, 0);
		EV_LookPoint(player,
			player->twp->pos.x + 20.0f,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_Wait(40);
		EV_ClrFace(player);
		EV_SetFace(player, "NAANON");
		EV_SerifPlay(806);
		EV_MsgW(60, msgTbl_ev004E[TextLanguage][2]); //"\aThe fate of Station Square \ndepends "...
		EV_ClrFace(player);
		EV_Wait(60);
		EV_LookPoint(player,
			player->twp->pos.x + 10.0f,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_SerifPlay(807);
		EV_Msg(msgTbl_ev004E[TextLanguage][3]); //"\aSonic!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgCls();
		EV_Wait(60);
		EV_ClrFace(player);
		EV_SetFace(player, "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVV");
		EV_LookFree(player);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0142_miles, &MILES_TEXLIST, 0.40000001f, 0, 20);
		EV_Wait(30);
		EV_LookFree(player);
		EV_ClrFace(player);
		EV_SetFace(player, "R");
		EV_Wait(20);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0109_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "CAED");
		EV_SerifPlay(808);
		EV_MsgW(90, msgTbl_ev004E[TextLanguage][4]); //"\aI've changed a lot since \nI started "...
		EV_ClrFace(player);
		EV_Wait(60);
		EV_CameraPos(1, 0, 351.26001f, 0.36000001f, 1382.4f);
		EV_CameraAng(1, 0, 0x1100, 0x2000, 0);
		EV_CameraPos(0, 200, 346.73999f, 3.1900001f, 1377.87f);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "CAED");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "CE");
		}
		EV_SerifPlay(809);
		EV_MsgW(90, msgTbl_ev004E[TextLanguage][5]); //"\aBut I can't depend on him\nforever."
		EV_ClrFace(player);
		EV_Wait(60);
		EV_CameraPos(1, 0, 352.5f, 0.13f, 1361.89f);
		EV_CameraAng(1, 0, 0x1100, 0x6000, 0);
		EV_CameraPos(0, 200, 346.69f, 3.77f, 1367.71f);
		EV_ClrFace(player);
		EV_SetFace(player, "CEDEDC");
		EV_SerifPlay(810);
		EV_Msg(msgTbl_ev004E[TextLanguage][6]); //"\aI know I can do this by myself... \nO"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(10);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0, 306.79999f, 7.0599999f, 1374.22f);
		EV_CameraAng(1, 0, 0xFF00, 0xC000, 0);
		EV_CameraPos(1, 300, 208.78f, 6.27f, 1374.22f);
		EV_CameraAng(1, 300, 0x500, 0xC000, 0);
		EV_ClrAction(player);
		EV_MovePoint2(player, 443.47f, 11.99f, 1371.1801f, 0.0f, 0.0f);
		EV_Wait(40);
		KURAYAMI = COverlayCreate(0.016666668f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EventSe_Close();
		EV_InitPlayer(0);
		if (SMOKE) {
			FreeTask(SMOKE);
			SMOKE = 0;
		}
		if (SMOKE2) {
			FreeTask(SMOKE2);
			SMOKE2 = 0;
		}
		delete_eggmoble();
		if (KURAYAMI) {
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		break;
	}
}
