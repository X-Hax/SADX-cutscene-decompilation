#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0085[] = {
	(char*)("EV_K_PATYA"), ADV03_TEXLISTS[1],
	0
};

void ev0085_k_tikalfather(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		PAPA = 0;
		WHITE = 0;
		EventSe_Init(1);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_tical);
		EV_SetPos(player, 0.0f, 0.0f, 973.08002f);
		EV_SetAng(player, 0, 0, 0);
		EV_CreatePlayer(2, Tikal, 5.138f, 0.0f, 1212.25f, 0, 0xE800, 0);
		EV_Wait(1);
		tikal = EV_GetPlayer(2);
		EV_CreateObject(&PAPA,
			tikal->twp->pos.x - 10.0f,
			tikal->twp->pos.y + 7.0f,
			tikal->twp->pos.z + 10.0f,
			0, 14336, 0);
		EV_SetAction(PAPA, &action_p_p0003_patya, ADV03_TEXLISTS[1], 1.0f, 1, 4);
		EV_SetMode(PAPA, 0);
		EV_SetShadow(PAPA, 1.0f);
		EV_SetAction(tikal, &action_j_j0017_tikal, &TIKAL_TEXLIST, 1.0f, 1, 4);
		EV_Wait(1);
		EV_CameraPos(1, 0, 0.0f, 8.6540003f, 1237.928f);
		EV_CameraAng(1, 0, 0, 0, 0);
		EV_CameraPerspective(1, 1, 910);
		EV_Wait(1);
		EV_CameraPerspective(0, 120, 0x31C7);
		EV_Wait(120);
		EV_SetFace(tikal, "FD");
		EV_SerifPlay(0x400);
		EV_Msg(msgTbl_ev0085[TextLanguage][0]); //"\aFather!   Please don't!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_MsgClose();
		EV_CameraPos(1, 0, 7.3309999f, 4.3000002f, 1228.047f);
		EV_CameraAng(1, 0, 0xD00, 0x3C00, 0);
		EV_CameraAng(0, 160, 0xD00, 0x3000, 0);
		EV_SerifPlay(1025);
		EV_Msg(msgTbl_ev0085[TextLanguage][1]); //"\aTikal, the 7 Emeralds are \nessential"...
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(30);
		EV_SerifPlay(1026);
		EV_Msg(msgTbl_ev0085[TextLanguage][2]); //"\aIt is for the good of all \nour peopl"...
		EV_Wait(5);
		EV_CameraPos(1, 0, 0.27000001f, 6.9000001f, 1218.332f);
		EV_CameraAng(1, 0, 0, 0xE500, 0);
		EV_Wait(1);
		EV_SerifWait();
		EV_CameraPos(0, 8, 1.5f, 6.6999998f, 1216.755f);
		EV_SerifPlay(1027);
		EV_SetFace(tikal, "DF");
		EV_Msg(msgTbl_ev0085[TextLanguage][3]); //"\aHow can I make you understand?"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_MsgClose();
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0016_tikal, &TIKAL_TEXLIST, 0.40000001f, 0, 0);
		EV_SetAction(tikal, &action_j_j0027_tikal, &TIKAL_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0, -4.0369f, 4.3422799f, 1239.6677f);
		EV_CameraAng(1, 0, 0x600, 0x300, 0);
		EV_SetAng(tikal, 0, 0xE800, 0);
		EV_CameraPos(0, 200, -22.631599f, 6.277f, 1210.2318f);
		EV_CameraAng(0, 200, 0x400, 0xA700, 0);
		EV_SerifPlay(1028);
		EV_SetFace(tikal, "FEFDF");
		EV_Msg(msgTbl_ev0085[TextLanguage][4]); //"\aAttacking other countries,\nstealing "...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_Wait(30);
		EV_SerifPlay(1029);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(tikal, "FDF");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tikal, "FD");
		}
		EV_Msg(msgTbl_ev0085[TextLanguage][5]); //"\acan't be the right path \nto peace."
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(tikal);
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, -8.1999998f, 7.5999999f, 1233.9f);
		EV_CameraAng(1, 0, 0x91, 0xF970, 0);
		EV_CameraPos(1, 110, -4.1399999f, 7.6199999f, 1232.95f);
		EV_CameraAng(1, 110, 0x91, 0xFD70, 0);
		EV_SerifPlay(1030);
		EV_SetFace(tikal, "FCFC");
		EV_Msg(msgTbl_ev0085[TextLanguage][6]); //"\aNo one has the right to \ntake their "...
		EV_Wait(1);
		EV_SetAction(PAPA, &action_p_p0001_patya, ADV03_TEXLISTS[1], 0.5f, 0, 4);
		EV_SetAction(PAPA, &action_p_p0003_patya, ADV03_TEXLISTS[1], 1.0f, 1, 4);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_CameraPos(0, 0, 1.5f, 7.8499999f, 1216.755f);
		EV_CameraAng(1, 0, 0xF800, 0xE500, 0);
		EV_SetFace(tikal, "EA");
		EV_SetFace(tikal, "FE");
		EV_SerifPlay(1031);
		EV_Msg(msgTbl_ev0085[TextLanguage][7]); //"\aI beg you father!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_MsgClose();
		EV_CameraPos(1, 0, 0.296f, 2.0929999f, 1015.216f);
		EV_CameraAng(1, 0, 0x600, 0, 0);
		EV_CameraPerspective(1, 1, 0x4E39);
		EV_Wait(1);
		EV_CameraPos(0, 100, 0.296f, 7.375f, 979.60498f);
		EV_CameraPerspective(0, 100, 0x31C7);
		EV_Wait(30);
		EventSe_Play(0, 760, 88);
		WHITE = COverlayCreate(0.016666668f, 0.0f, 1.0f, 1.0f, 1.0f);
		EV_Wait(90);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EventSe_Close();
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_FreeObject(&PAPA);
		break;
	}
}