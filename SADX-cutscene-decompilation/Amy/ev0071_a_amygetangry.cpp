#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0071[] = {
	(char*)("VER2_WING"), &VER2_WING_TEXLIST,
	(char*)("WING_P"), &texlist_wing_p,
	(char*)("WING_T"), &texlist_wing_t
};

void ev0071_a_amygetangry(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		obj_wing2 = 0;
		obj_wing_p = 0;
		obj_wing_t = 0;
		FLASH = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(98);
		EventSe_Init(3);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_Wait(1);
		EV_SetPos(player, -151.10001f, 733.0f, 585.0f);
		EV_SetAng(player, 0xF800, 0xF000, 0);
		obj_wing2 = SetEventBirdie0();
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 1.0f,
			player->twp->pos.y + 100.5f,
			player->twp->pos.z + 0.1f);
		EV_SetAng(obj_wing2,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_CreatePlayer(2, EggrobForEvent0, 195.8f, 747.29999f, 330.0f, 0, 0xF000, 0);
		EV_Wait(1);
		EV_SetMode(obj_wing2, 0);
		obj_wing_p = SetEventBirdie1();
		EV_SetPos(obj_wing_p, 3.5999999f, 759.70001f, -444.20001f);
		EV_SetAng(obj_wing_p, 0, 0, 0);
		obj_wing_t = SetEventBirdie2();
		EV_SetPos(obj_wing_t, 6.5999999f, 759.70001f, -444.20001f);
		EV_SetAng(obj_wing_t, 0, 0, 0);
		EV_Wait(1);
		EV_SetPos(obj_wing_p, -5.0f, 750.0f, -393.0f);
		EV_SetAng(obj_wing_p, 0, 0, 0);
		EV_SetPos(obj_wing_t, 5.0f, 750.0f, -393.0f);
		EV_SetAng(obj_wing_t, 0, 0, 0);
		EV_SetAction(obj_wing_p, &action_w_p0003_wing_p, &texlist_wing_p, 3.0f, 1, 0);
		EV_SetAction(obj_wing_t, &action_w_t0003_wing_t, &texlist_wing_t, 3.0f, 1, 0);
		EV_SetMode(obj_wing_p, 0);
		EV_SetMode(obj_wing_t, 0);
		EV_SetShadow(obj_wing2, 0.60000002f);
		EV_SetShadow(obj_wing_p, 0.5f);
		EV_SetShadow(obj_wing_t, 0.5f);
		BGM_Play(MusicIDs_evtbgm04);
		EV_CameraPos(1, 0, -147.7f, 780.40002f, -323.70001f);
		EV_CameraAng(1, 0, 0x5B3, 0x7733, 0x200);
		EV_CameraPos(1, 140, -150.0f, 747.40002f, -319.70001f);
		EV_CameraAng(1, 140, 0x5B3, 0x9033, 0x200);
		EV_SetPos(player, -140.8f, 743.5f, -289.89999f);
		EV_SetAng(player, 0, 0xFD7C, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 0xFD7C, 0);
		EV_Wait(160);
		EV_CameraPos(1, 0, 2.7f, 748.0f, -261.70001f);
		EV_CameraAng(1, 0, 0x1583, 0x8F6, 0);
		EV_CameraPos(1, 90, 6.5f, 746.20001f, -263.0f);
		EV_CameraAng(1, 90, 0x1583, 0xBF6, 0);
		EV_SetPos(player, -24.799999f, 743.5f, -273.10001f);
		EV_SetAng(player, 0, 0x440C, 0);
		EV_MovePoint2(player, 0.0f, 746.59998f, -276.89999f, 0.5f, 0.059999999f);
		EV_WaitMove(player);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		EV_SetPos(obj_wing2, -10.5f, 790.29999f, -270.88f);
		EV_SetAng(obj_wing2, 0xFD00, 0x6B00, 0);
		EV_SetAction(obj_wing2, &action_w_w9001_wing, &VER2_WING_TEXLIST, 2.4000001f, 1, 0);
		moveObject(obj_wing2, -10.5f, 800.29999f, -265.88f, -0.5f, 750.0f, -379.39999f, 107);
		EV_Wait(40);
		EV_LookObject(player, obj_wing2, 0.0f, 0.0f, 0.0f);
		EV_Wait(100);
		EV_LookFree(player);
		EV_Wait(1);
		EV_SetPos(player, 0.0f, 746.59998f, -276.89999f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_CameraPos(1, 0, 2.5999999f, 754.0f, -285.0f);
		EV_CameraAng(1, 0, 0xFC83, 0x72F6, 0);
		EV_CameraPos(1, 30, 1.29f, 754.0f, -284.45999f);
		EV_CameraAng(1, 30, 0xFF83, 0x77F6, 0);
		EV_Wait(36);
		EV_CameraPos(1, 9, 0.07f, 753.29999f, -281.5f);
		EV_CameraAng(1, 9, 0xFA83, 0x7FF6, 0);
		EV_Wait(30);
		EV_CameraPos(1, 0, 2.9000001f, 755.40002f, -268.29999f);
		EV_CameraAng(1, 0, 0xF433, 0x6B6, 0);
		EV_CameraPos(0, 30, 4.1999998f, 749.79999f, -263.20001f);
		EV_CameraAng(0, 30, 0xA83, 0x6F6, 0);
		BGM_Stop();
		EV_SetAction(obj_wing2, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.8f, 1, 0);
		EV_SetAction(obj_wing_p, &action_w_p0003_wing_p, &texlist_wing_p, 3.7f, 1, 0);
		EV_SetAction(obj_wing_t, &action_w_t0003_wing_t, &texlist_wing_t, 3.7f, 1, 0);
		EV_SetPos(obj_wing_p, -5.0f, 770.0f, -393.0f);
		EV_SetPos(obj_wing_t, 5.0f, 770.0f, -393.0f);
		moveObjectAngle2(obj_wing2, 0.0f, 750.0f, -385.0f, 0.0f, 803.0f, -340.0f, 0, 0x4000, 0, 0, 0x4000, 0, 130);
		moveObjectAngle2(obj_wing_p, -5.0f, 750.0f, -393.0f, -14.0f, 801.20001f, -354.0f, 0, 0x4000, 0, 0, 0x4000, 0, 130);
		moveObjectAngle2(obj_wing_t, 5.0f, 750.0f, -393.0f, 14.0f, 801.20001f, -354.0f, 0, 0x4000, 0, 0, 0x4000, 0, 130);
		BGM_Play(MusicIDs_theamy);
		EV_Wait(50);
		EV_SerifPlay(986);
		EV_ClrFace(player);
		EV_SetFace(player, "ACCA0");
		EV_Msg(msgTbl_ev0071[TextLanguage][0]); //"\aYeah, it's them!"
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0818_amy, &AMY_TEXLIST, 1.2f, 1, 16);
		EV_CameraPos(0, 80, 5.5999999f, 747.0f, -257.10999f);
		EV_CameraAng(0, 80, 0x1083, 0x6F6, 0x100);
		EV_CameraPerspective(1, 80, 0x2889);
		EV_Wait(85);
		EV_ClrFace(player);
		EV_ClrAction(player);
		EV_CameraPos(1, 0, 11.55f, 766.38f, -330.76001f);
		EV_CameraTargetObj(1, 0, obj_wing2, 0.0f, 0.0f, 0.0f, 0);
		moveObjectAngle2(obj_wing2, 0.0f, 795.0f, -345.0f, 0.0f, 765.79999f, -313.29999f, 0, 0x4000, 0, 0, 0x4000, 0, 100);
		moveObjectAngle2(obj_wing_p, -7.0f, 790.0f, -350.0f, -8.0f, 769.20001f, -315.0f, 0, 0x4000, 0, 0, 0x4000, 0, 110);
		moveObjectAngle2(obj_wing_t, 7.0f, 790.0f, -350.0f, 8.0f, 769.20001f, -315.0f, 0, 0x4000, 0, 0, 0x4000, 0, 110);
		EV_Wait(101);
		zero = EV_GetPlayer(2);
		EV_SetPos(zero, 0.40000001f, 753.29999f, -226.0f);
		EV_SetAng(zero, 0xFE00, 0x3930, 0);
		EV_CameraPos(1, 0, -10.4f, 747.70001f, -264.70001f);
		EV_CameraAng(1, 0, 0xB00, 0xEBA0, 0x200);
		EV_CameraPos(1, 120, -4.3000002f, 757.40002f, -293.5f);
		EV_CameraAng(1, 120, 0xD00, 0xF7A0, 0x200);
		moveObjectAngle2(
			obj_wing2,
			0.0f, 765.79999f, -313.29999f,
			0.0f, 765.79999f, -303.29999f,
			0, 0x4000, 0,
			0, 0x4000, 0,
			100);
		EV_Wait(40);
		EggrobForEvent0_RP_Set(&obj_wing2->twp->pos);
		EV_Wait(50);
		EV_SetPos(player, 78.0f, 901.29999f, -1180.0f);
		EV_SetAng(player, 0xFE00, 0x3930, 0);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[44], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_Wait(19);
		BGM_Stop();
		EV_SetAction(obj_wing2, &action_w_w9002_wing, &VER2_WING_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(obj_wing2, &action_w_w9003_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		EventSe_Oneshot(1333, 120, 0, 0);
		EV_Wait(20);
		moveObjectAngle2(
			obj_wing_p,
			-8.0f, 769.20001f, -315.0f,
			-12.0f, 779.20001f, -325.0f,
			0, 0x4000, 0,
			0, 0x4000, 0x4000,
			30);
		moveObjectAngle2(
			obj_wing_t,
			8.0f, 769.20001f, -315.0f,
			15.0f, 789.20001f, -325.0f,
			0, 0x4000, 0,
			0x5000, 0x4000, 0,
			30);
		EV_CameraTargetFree();
		moveObjectAngle2(
			obj_wing2,
			0.0f, 775.79999f, -309.29999f,
			-2.0f, 748.09998f, -292.29999f,
			0, 0x4000, 0,
			0x4000, 0x4000, 0,
			30);
		EV_SetPos(player, 0.0f, 746.59998f, -244.89999f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_MovePoint2(player, -1.5f, 747.20001f, -287.89999f, 0.89999998f, 0.059999999f);
		EV_CameraPos(1, 0, 7.4000001f, 746.20001f, -262.70001f);
		EV_CameraAng(1, 0, 0xF00, 0x8A0, 0x200);
		EV_SerifPlay(987);
		EV_Msg(msgTbl_ev0071[TextLanguage][1]); //"\aGasp!"
		EV_Wait(20);
		EV_SetAction(obj_wing2, &action_w_w9001_wing, &VER2_WING_TEXLIST, 0.02f, 1, 0);
		moveObjectAngle2(
			obj_wing_p,
			-12.0f, 779.20001f, -325.0f,
			-15.0f, 759.20001f, -315.0f,
			0, 0x4000, 0x4000,
			0, 0x2000, 0,
			30);
		moveObjectAngle2(
			obj_wing_t,
			15.0f, 789.20001f, -325.0f,
			12.0f, 762.20001f, -319.0f,
			0x5000, 0x4000, 0,
			0, 0x7000, 0,
			45);
		EV_Wait(30);
		EV_MsgClose();
		EventSe_Oneshot(1334, 120, 120, 0);
		EV_SetPos(zero, 0.40000001f, 753.29999f, -229.0f);
		EV_SetAng(zero, 0xFE00, 0x8030, 0);
		EV_WaitMove(player);
		EV_SetAction(player, &action_a_a0823_amy, &AMY_TEXLIST, 0.60000002f, 1, 8);
		BGM_Play(MusicIDs_eggrobo);
		EventSe_Oneshot(1334, 90, -40, 0);
		EV_MovePoint2(zero, 0.40000001f, 753.29999f, -263.0f, 0.050000001f, 0.0060000001f);
		EV_CameraPos(0, 0, 2.2f, 749.08002f, -299.0f);
		EV_CameraAng(0, 0, 0x248, 0x8D50, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "ACCA0");
		EV_SerifPlay(988);
		EV_Msg(msgTbl_ev0071[TextLanguage][2]); //"\aOh no!   Are you okay?"
		EV_CameraPos(0, 90, -6.4499998f, 749.46997f, -296.5f);
		EV_CameraAng(0, 90, 0x248, 0x9456, 0);
		EV_Wait(90);
		EV_CameraPos(0, 160, -8.4799995f, 749.15002f, -298.92001f);
		EV_CameraAng(0, 160, 0x648, 0x9256, 0);
		EV_Wait(90);
		EV_SetAction(player, &action_a_a0824_amy, &AMY_TEXLIST, 0.60000002f, 1, 8);
		EV_ClrFace(player);
		EV_SetFace(player, "ACCA0");
		EV_SerifPlay(989);
		EV_Msg(msgTbl_ev0071[TextLanguage][3]); //"\aYou idiot! How could you do this!"
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetAng(player, 0, 2163, 0);
		EV_CameraPos(0, 0, -10.45f, 754.5f, -284.5f);
		EV_CameraAng(0, 0, 0xF048, 0xDC56, 0);
		EV_CameraPos(0, 50, -7.9000001f, 755.78998f, -280.79999f);
		EV_CameraAng(0, 50, 0xF448, 0xEB56, 0);
		EV_SetAction(player, &action_a_a0825_amy, &AMY_TEXLIST, 0.89999998f, 0, 8);
		AmyForEventHammerScaleIm(0, 1.3f);
		EV_Wait(50);
		EV_CameraPos(0, 30, -14.9f, 747.09998f, -281.79999f);
		EV_CameraAng(0, 30, 0xE48, 0xC856, 0x900);
		EV_Wait(30);
		EventSe_Oneshot(1336, 128, 10, 0);
		FLASH = COverlayCreate(0.00011f, 0.80000001f, 1.0f, 0.99000001f, 0.99000001f);
		EV_Wait(3);
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, 0.2f);
		}
		EV_Wait(4);
		if (FLASH)
		{
			FreeTask(FLASH);
			FLASH = 0;
		}
		EV_SetAction(player, &action_a_a0826_amy, &AMY_TEXLIST, 1.0f, 1, 8);
		EV_SetMode(zero, 0);
		EV_Wait(1);
		moveObjectAngle2(
			zero,
			148.5f, 884.29999f, -317.89999f,
			152.5f, 752.0f, -309.56f,
			0x8000, 0x2000, 0x7000,
			0x7000, 0xD000, 0,
			130);
		EV_Wait(20);
		EV_MsgClose();
		EV_CameraPerspective(0, 80, 0x2CCD);
		EV_Wait(79);
		EventSe_Oneshot(1335, 70, 120, 0);
		EV_Wait(80);
		AmyForEventHammerScaleIm(0, 1.15f);
		EV_CameraPos(1, 0, 7.3499999f, 752.0f, -276.5f);
		EV_CameraAng(1, 0, 0x548, 0x2D56, 0x900);
		EV_CameraPos(0, 160, 12.7f, 749.79999f, -288.20001f);
		EV_CameraAng(0, 160, 0x648, 0x4456, 0x800);
		EV_SetAng(player, 0, 0x2800, 0);
		EV_SetAction(player, &action_a_a0838_amy, &AMY_TEXLIST, 0.60000002f, 0, 16);
		EV_SetAction(player, &action_a_a0839_amy, &AMY_TEXLIST, 0.60000002f, 1, 16);
		EV_Wait(120);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "FBF0");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "FF0");
		}
		EV_SerifPlay(990);
		EV_Msg(msgTbl_ev0071[TextLanguage][4]); //"\aNow you're gonna get it!"
		EV_Wait(40);
		EV_CameraPos(0, 100, 7.8000002f, 750.29999f, -287.67999f);
		EV_CameraAng(0, 100, 0x948, 0x4456, 0x800);
		EV_Wait(110);
		EV_ClrFace(player);
		EV_MsgClose();
		break;
	case 2:
		AmyForEventHammerScaleIm(0, 0.0f);
		EventSe_Close();
		stopObjectAll();
		EV_InitObject(player);
		EV_RemovePlayer(2);
		EV_FreeObject(&obj_wing2);
		EV_FreeObject(&obj_wing_p);
		EV_FreeObject(&obj_wing_t);
		if (FLASH)
		{
			FreeTask(FLASH);
			FLASH = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}