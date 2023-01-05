#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0166[] = { 0 };

void ev0166_s_lightshoes(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_SerifPlay(1718);
		EV_Wait(1);
		EV_SetPos(player, 505.0f, -91.900002f, 858.0f);
		EV_SetAng(player, 0, 0x8050, 0);
		EV_Wait(1);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, player, 0.0f, 4.5f, 0.0f, 0);
		EV_CameraChaseRM(0, 500, player, 8.0f, 0, 54613, 0, 25.0f, 0, -100123, 0, 25.0f);
		tikal = CTikalLight_Create(
			player->twp->pos.x + 12.864f,
			player->twp->pos.y + 25.0f,
			player->twp->pos.z - 5.7670002f);
		EV_Wait(1);
		EV_SetMode(tikal, 0);
		EV_ClrPath(tikal);
		EV_SetPath(tikal, &epathtbl_ev0166_tk, 3.0f, 2);
		EV_Wait(10);
		EV_SerifWait();
		EV_SerifPlay(1865);
		EV_MsgW(0, (msgTbl_ev0166[TextLanguage])[0]); //"\aNow you've got Light Speed Shoes."
		EV_SetAction(player, &action_s_item_s0, &SONIC_TEXLIST, 0.1f, 0, 16);
		EV_Wait(33);
		EV_MsgW(0, (msgTbl_ev0166[TextLanguage])[1]); //"\aPress and hold the action button \nto"...
		EV_Wait(40);
		EventSe_Stop(0);
		EV_SetAction(player, &action_s_item_s1, &SONIC_TEXLIST, 0.60000002f, 1, 16);
		EV_Wait(50);
		EV_MsgW(40, (msgTbl_ev0166[TextLanguage])[2]); //"\aOnce you have enough power,"
		EV_MsgW(0, (msgTbl_ev0166[TextLanguage])[3]); //"\arelease the button and\nyou can do th"...
		EV_Wait(20);
		EventSe_Play(0, 760, 1800);
		EV_ClrPath(tikal);
		if(tikal){
			FreeTask(tikal);
			tikal = 0;
		}
		EV_Wait(60);
		EV_CameraTargetObj(1, 0, player, 0.0f, 4.5f, 0.0f, 0);
		EV_CameraChaseRM(0, 170, player, 5.0f, 0, 0x2AAB, 0, 15.0f, 0, -0x9554, 0, 15.0f);
		EV_MsgW(90, (msgTbl_ev0166[TextLanguage])[4]); //"\aThe Light Speed Dash lets you \nrace "...
		EV_Wait(1);
		tikalb = CTikalLight_Create(
			player->twp->pos.x + 12.864f,
			player->twp->pos.y + 25.0f,
			player->twp->pos.z - 5.7670002f);
		EV_Wait(1);
		EV_SetMode(tikalb, 0);
		EV_ClrPath(tikalb);
		EV_SetPath(tikalb, &epathtbl_ev0166_tk, 3.0f, 2);
		EV_Wait(1);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, 510.0f, -88.199997f, 870.29999f);
		EV_CameraAng(0, 0, 0x2D1, 0x9A7, 0);
		EV_CameraPos(0, 160, 495.20001f, -90.900002f, 812.5f);
		EV_CameraAng(0, 160, 0xAD1, 0xF318, 0);
		EV_Wait(50);
		EventSe_Volume(0, -120, 120);
		EV_MsgW(0, (msgTbl_ev0166[TextLanguage])[5]); //"\aAs long as there's a trail of rings,"...
		EV_SetAction(player, &action_s_item_s2, &SONIC_TEXLIST, 0.2f, 0, 16);
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(20);
		break;
	case 2:
		EV_CameraPos(0, 0, 495.20001f, -90.900002f, 812.5f);
		EV_CameraAng(0, 0, 0xAD1, 0xF318, 0);
		EV_Wait(1);
		EventSe_Close();
		EV_ClrPath(tikal);
		EV_ClrPath(tikalb);
		EV_InitPlayer(0);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_SerifStop();
		EV_MsgClose();
		if(tikal){
			FreeTask(tikal);
			tikal = 0;
		}
		if(tikalb){
			FreeTask(tikalb);
			tikalb = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		break;
	}
}