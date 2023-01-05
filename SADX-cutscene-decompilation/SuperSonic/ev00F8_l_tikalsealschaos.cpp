#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00F8[] = { 0 };

void ev00F8_l_tikalsealschaos(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		WHITE = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(117);
		EventSe_Init(3);
		EV_SetPos(player, -4.2800002f, 88.0f, 70.0f);
		EV_SetAng(player, 0, 0x7D00, 0);
		EV_CreatePlayer(2, Tikal, 0.0f, 90.0f, 39.0f, 0, 0x8000, 0);
		EV_CameraPos(1, 0, -72.849998f, 100.0f, 80.0f);
		EV_CameraAng(1, 0, 0, 0xEF00, 0);
		EV_CameraPos(0, 110, -3.4400001f, 100.0f, 90.0f);
		EV_CameraAng(0, 110, 0, 0x200, 0);
		EV_Wait(1);
		BGM_Play(MusicIDs_tical);
		EV_SetPos(player, -4.2800002f, 88.0f, 70.0f);
		EV_SetAng(player, 0, 0x7D00, 0);
		EV_SetAction(player, &action_s_s0077_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		tikal = EV_GetPlayer(2);
		EV_SetAction(tikal, &action_j_j0022_tikal, &TIKAL_TEXLIST, 0.80000001f, 1, 0);
		EV_SerifPlay(1445);
		EV_Msg(msgTbl_ev00F8[TextLanguage][0]); //"\aThe 7 Emeralds are the servers."
		EV_Wait(1);
		EV_SetPos(player, -4.2800002f, 88.0f, 70.0f);
		EV_SetAng(player, 0, 0x7D00, 0);
		EV_SerifWait();
		EV_CameraPos(1, 0, -6.5999999f, 92.550003f, 45.040001f);
		EV_CameraAng(1, 0, 0x1700, 0xED00, 0x200);
		EV_CameraPos(0, 110, 5.8379998f, 92.550003f, 48.330002f);
		EV_CameraAng(0, 110, 0x1700, 0x500, 0xFD00);
		EV_SerifPlay(1446);
		EV_Msg(msgTbl_ev00F8[TextLanguage][1]); //"\aChaos is power, enriched by the heart"...
		EV_Wait(1);
		EV_SerifWait();
		EV_CameraPos(1, 0, -2.45f, 94.099998f, 33.799999f);
		EV_CameraAng(1, 0, 0x1700, 0x9400, 0x300);
		EV_CameraPos(0, 90, 3.3800001f, 95.324997f, 34.0f);
		EV_CameraAng(0, 90, 0x800, 0x6600, 0xFD00);
		EV_CameraPos(0, 90, 2.4400001f, 93.425003f, 34.02f);
		EV_CameraAng(0, 90, 0x1700, 0x6C00, 0xFD00);
		EV_Msg(msgTbl_ev00F8[TextLanguage][2]); //"\aThe controller serves to unify \nthe "...
		EV_SerifPlay(1447);
		EV_SetFace(tikal, "FEDC");
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_SetAction(tikal, &action_j_j0023_tikal, &TIKAL_TEXLIST, 0.5f, 0, 8);
		EV_SetAction(tikal, &action_j_j0022_tikal, &TIKAL_TEXLIST, 0.60000002f, 1, 14);
		EV_SerifPlay(1448);
		EV_SetFace(tikal, "RRAACADC");
		EV_MsgClose();
		EV_Wait(110);
		EV_Msg(msgTbl_ev00F8[TextLanguage][3]); //"\aUhh... The 7 Emeralds can change\nour"...
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_CameraPos(0, 90, 2.1199999f, 95.5f, 34.299999f);
		EV_CameraAng(0, 90, 0xC00, 0x6C00, 0xFD00);
		EV_SerifPlay(1449);
		EV_SetFace(tikal, "FEFE");
		EV_Msg(msgTbl_ev00F8[TextLanguage][4]); //"\aIf this Emerald controls that power.."...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_SerifPlay(1450);
		EV_SetFace(tikal, "EFDC");
		EV_SetAction(tikal, &action_j_j0025_tikal, &TIKAL_TEXLIST, 1.0f, 0, 12);
		EV_SetAction(tikal, &action_j_j9000_tikal, &TIKAL_TEXLIST, 1.2f, 0, 2);
		EV_SetAction(tikal, &action_j_j9001_tikal, &TIKAL_TEXLIST, 0.40000001f, 1, 0);
		EV_Msg(msgTbl_ev00F8[TextLanguage][5]); //"\aPlease, you must stop him!"
		EV_Wait(50);
		EV_CameraPos(1, 25, 4.6799998f, 93.199997f, 30.33f);
		EV_CameraAng(1, 25, 0x1100, 0x6C00, 0xFD00);
		EV_SerifWait();
		EV_ClrFace(tikal);
		crushLightOn(0.0f, 96.0f, 30.0f, 15, 20, 0.029999999f, 0.02f, 0x88FFFFFF, 0x88FFFFFF);
		EventSe_Play(0, 1335, 1800);
		EventSe_Play(1, 1336, 1800);
		EventSe_Play(2, 1338, 1800);
		EventSe_Volume(0, 120, 1);
		EventSe_Volume(1, 120, 1);
		EventSe_Volume(2, 120, 1);
		EV_Wait(30);
		effect2_create(tikal, 0, 2.3f, 0.0f, -1.5f, &ev_effect_list5, 0);
		effect2_create(tikal, 1, 2.3f, 3.5f, -1.5f, &ev_effect_list5, 0);
		EV_Wait(1);
		effect2_scl(0, 0.0099999998f, 0.0099999998f);
		effect2_scl(1, 0.89999998f, 0.89999998f);
		effect2_angle(1, 0, 546);
		effect2_color(1, 0.1f, 0.69999999f, 0.69999999f, 0.69999999f);
		effect2_color(0, 1.0f, 0.2f, 1.0f, 0.2f);
		EV_Wait(6);
		effect2_size_change(0, 0.22f, 0.22f);
		EV_MsgClose();
		EV_Wait(35);
		effect2_delete(0);
		effect2_delete(1);
		WHITE = COverlayCreate(0.1f, 0.1f, 0.69999999f, 1.0f, 0.69999999f);
		EV_Wait(10);
		EventSe_Stop(0);
		EventSe_Stop(1);
		EventSe_Stop(2);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		EventSe_Close();
		effect2_delete(0);
		effect2_delete(1);
		crushLightOff();
		break;
	}
}