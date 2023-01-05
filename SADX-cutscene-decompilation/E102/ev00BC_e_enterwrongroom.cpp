#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00BC[] = { 0 };

void ev00BC_e_enterwrongroom(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(107);
		EventSe_Init(2);
		BGM_Play(MusicIDs_thee102);
		EV_SetPos(player, 0.0f, -5.0f, 26.370001f);
		EV_SetAng(player, 0, 0, 0);
		seqVars[37] |= 1u;
		EV_CameraPos(0, 0, -0.69999999f, 51.400002f, -8.1999998f);
		EV_CameraAng(0, 0, 0xF900, 0x7F00, 0);
		EV_CameraPos(0, 100, 0.2f, 48.099998f, -46.299999f);
		EV_CameraAng(0, 100, 0xFB00, 0x7F00, 0);
		EV_Wait(100);
		seqVars[37] |= 1u;
		EV_CameraPos(1, 100, 0.30000001f, 18.5f, -50.5f);
		EV_CameraAng(1, 100, 0xFF00, 0x7F00, 0);
		EV_Wait(100);
		seqVars[37] |= 1u;
		EV_CameraPos(1, 170, 44.0f, 12.7f, -9.0f);
		EV_CameraAng(1, 170, 0xFF00, 0x6B00, 0);
		EV_Wait(100);
		seqVars[37] |= 1u;
		EV_SerifPlay(1239);
		EV_Msg(msgTbl_ev00BC[TextLanguage][0]); //"\aIs this the one?"
		EV_Wait(50);
		EV_MsgClose();
		seqVars[37] |= 1u;
		EV_Wait(30);
		seqVars[37] |= 1u;
		EV_PlayPad(0, &KAITEN_00BC);
		seqVars[37] |= 1u;
		EV_Wait(30);
		EV_CameraPos(1, 0, -12.6f, 18.299999f, 232.3f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 10.0f, 0.0f, 0);
		seqVars[37] |= 1u;
		EV_Wait(40);
		seqVars[37] |= 1u;
		EV_Wait(50);
		seqVars[37] |= 1u;
		EV_Wait(40);
		EventSe_Oneshot(1334, 128, 0, 0);
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, -2.5f, 15.7f, 15.6f);
		EV_CameraAng(1, 0, 0x200, 0x8600, 0);
		EV_CameraPos(1, 80, -2.5f, 11.7f, 15.8f);
		EV_CameraAng(1, 80, 0x200, 0x8100, 0);
		EV_SetPos(player, -6.0999999f, 6.5f, -193.60001f);
		EV_SetAng(player, 0, 0, 0);
		EV_Wait(80);
		seqVars[37] |= 1u;
		EV_CameraPos(1, 120, -2.5999999f, 52.700001f, 21.540001f);
		EV_CameraAng(1, 120, 0xF400, 0x8000, 0);
		EV_Wait(80);
		seqVars[37] |= 1u;
		EV_Wait(80);
		break;
	case 2:
		EventSe_Close();
		EV_Wait(1);
		EV_CameraOff();
		EV_PadOn();
		EV_InitPlayer(0);
		break;
	}
}