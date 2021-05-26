#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev001E_s_lostworld(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* tikal = 0;

	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(82);
		EventSe_Init(5);
		seqVars[156] = 0;  // FLAG_SONIC_MR_ENTRANCE_RUIN
		EV_SetPos(player, -441.3367f, -0.40000001f, -328.0f);
		EV_CameraPerspective(1, 1, 0x4000);
		EV_Wait(1);
		EV_CameraPos(1, 0, -533.5f, 457.67999f, -581.70001f);
		EV_CameraAng(1, 0, 49408, 61440, 0);
		seqVars[156] = 1;  // FLAG_SONIC_MR_ENTRANCE_RUIN
		EV_CameraPerspective(1, 180, 10741);
		EV_CameraPos(1, 180, -529.19f, 0.94999999f, -592.03198f);
		EV_CameraAng(0, 55, 49408, 61440, 7168);
		EV_Wait(55);
		EV_CameraAng(0, 85, 49408, 61440, 58112);
		EV_Wait(67);
		EventSe_Oneshot(1335, -20, 0, 0);
		EV_Wait(18);
		EV_SetPos(player, -569.19f, 1.0f, -592.03198f);
		EV_SetAng(player, 10, 19968, 0);
		EV_SetAction(player, &action_s_s0019_sonic, &SONIC_TEXLIST, 0.80000001f, 0, 0);
		EV_CameraPos(1, 0, -553.88202f, 2.0f, -611.27502f);
		EV_CameraAng(1, 0, 8704, 25856, 0);
		EV_Wait(5);
		EV_CameraAng(1, 30, 1792, 25856, 0);
		EV_Wait(25);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_WaitAction(player);
		EV_SetAction(player, &action_s_s0020_sonic, &SONIC_TEXLIST, 1.5f, 0, 0);
		EV_WaitAction(player);
		EV_SerifPlay(582);
		EV_SetAction(player, &action_s_s0029_sonic, &SONIC_TEXLIST, 0.5f, 0, 14);
		EV_SetAction(player, &action_s_s0030_sonic, &SONIC_TEXLIST, 0.5f, 1, 10);
		EV_Wait(2);
		EV_SetFace(player, "FAE");
		EV_Msg((msgTbl_ev001E[TextLanguage])[0]); //"\aAarrgh!  \nI hate Eggman!"
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(20);
		EV_CameraPos(0, 0, -554.40002f, 4.9000001f, -592.79999f);
		EV_CameraAng(0, 0, 65648, 16732, 0);
		EV_CameraPos(0, 100, -558.59998f, 4.9000001f, -601.70001f);
		EV_CameraAng(0, 100, 65648, 22812, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0027_sonic, &SONIC_TEXLIST, 0.5f, 1, 10);
		EV_Wait(10);
		EV_SerifPlay(583);
		EV_SetFace(player, "E");
		EV_Msg((msgTbl_ev001E[TextLanguage])[1]); //"\aWhere's this?"
		EV_Wait(30);
		EventSe_Play(2, 1114, 1800);
		EV_SetAction(player, &action_s_s0038_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_MsgClose();
		EV_Wait(30);
		EV_CameraPerspective(1, 1, 7282);
		EV_CameraPos(0, 0, -552.14001f, 45.700001f, -704.65997f);
		EV_CameraAng(0, 0, 3584, 64256, 0);
		EV_CameraPos(1, 20, -566.5556f, 3.5999999f, -587.85999f);
		EV_Wait(1);
		EV_CameraPerspective(1, 65, 12561);
		EV_Wait(23);
		EV_CameraPos(0, 55, -567.35999f, 1.24f, -581.29999f);
		EV_Wait(75);
		EventSe_Volume(2, 90, 1);
		EV_CameraPos(0, 0, -350.47f, 67.830002f, -851.96002f);
		EV_CameraAng(0, 0, 2816, 8704, 1024);
		EV_CameraPos(0, 110, -398.75f, 44.119999f, -787.59998f);
		EV_CameraAng(0, 110, 2816, 4352, 1024);
		EV_Wait(110);
		EV_CameraPos(0, 110, -466.5f, 7.4899998f, -768.65002f);
		EV_CameraAng(0, 110, 3840, 1536, 1024);
		EV_Wait(110);
		EV_CameraPos(0, 300, -602.23999f, 3.454f, -849.46997f);
		EV_CameraAng(0, 300, 3840, 63488, 0);
		EventSe_Volume(2, -60, 300);
		EV_Wait(300);
		EV_SetAng(player, 10, 30208, 2);
		EV_ClrAction(player);
		EV_CameraPos(0, 0, -564.67798f, 0.31659999f, -603.04498f);
		EV_CameraAng(0, 0, 4352, 28416, 0);
		EV_CameraPos(0, 40, -566.90002f, 2.7479999f, -598.03003f);
		EV_CameraAng(0, 40, 4352, 28416, 0);
		EV_SetAction(player, &action_s_s0021_sonic, &SONIC_TEXLIST, 0.40000001f, 1, 0);
		tikal = CTikalLight_Create(-514.7547f, 14.636f, -650.21503f);
		EV_Wait(20);
		EV_SetMode(tikal, 0);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 6);
		EV_Wait(20);
		EV_SerifPlay(584);
		EV_Msg((msgTbl_ev001E[TextLanguage])[2]); //"\aHmm?"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EventSe_Stop(2);
		BGM_Play(MusicIDs_tical);
		EventSe_Play(3, 760, 1800); // SE_C_TIKAL
		EventSe_Volume(3, 0, 1);
		EV_CameraPos(1, 0, -566.5f, 2.77f, -578.93298f);
		EV_CameraAng(1, 0, 2560, 63488, 0);
		EV_CameraPos(0, 170, -565.55499f, 3.9849999f, -583.69f);
		EV_Wait(1);
		EventSe_Volume(3, -20, 180);
		EV_Wait(30);
		EV_SetPath(tikal, &epathtag_cube001E_1, 0.2f, 0);
		EV_Wait(150);
		EV_CameraPos(1, 0, -564.76001f, -0.1f, -599.0f);
		EV_CameraAng(1, 0, 5888, 27136, 0);
		EV_CameraPos(0, 90, -564.20001f, 1.6f, -599.95001f);
		EV_SerifPlay(585);
		EV_SetFace(player, "AE");
		EV_Msg((msgTbl_ev001E[TextLanguage])[3]); //"\aThat light!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(1, 0, -560.70001f, 4.5300002f, -581.84998f);
		EV_CameraAng(1, 0, 2304, 0, 0);
		EV_CameraPos(0, 240, -548.15997f, 47.0f, -776.34998f);
		EV_CameraAng(0, 240, 2304, 64000, 0);
		EV_SerifPlay(586);
		EV_SetFace(player, "DE");
		EV_Msg((msgTbl_ev001E[TextLanguage])[4]); //"\aI think it's trying to \nshow me some"...
		EV_SerifWait();
		EV_Wait(180);
		EV_MsgClose();
		EV_Wait(20);
		EventSe_Stop(3);
		EV_CameraPos(1, 0, -564.12402f, -0.44499999f, -600.0f);
		EV_CameraAng(1, 0, 5888, 26624, 0);
		EV_CameraPos(0, 70, -566.0f, 1.6950001f, -597.17999f);
		EV_Wait(70);
		EV_CameraPos(1, 0, -560.44f, 1.8f, -580.0f);
		EV_CameraAng(1, 0, 3072, 0, 0);
		EV_CameraPos(0, 60, -566.37f, 1.8f, -581.09998f);
		EV_CameraAng(0, 60, 3072, 64000, 0);
		EV_Wait(80);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_SetPos(player, -569.19f, -0.36399999f, -592.03552f);
		EV_SetAng(player, 10, 32512, 2);
		EV_InitPlayer(0);
		FreeTask(tikal);
		tikal = 0;
		EventSe_Close();
		EV_CameraPos(1, 0, -566.09998f, 5.4499998f, -577.90002f);
		EV_CameraAng(1, 0, 2048, 65280, 0);
		EV_Wait(1);
		break;
	}
}