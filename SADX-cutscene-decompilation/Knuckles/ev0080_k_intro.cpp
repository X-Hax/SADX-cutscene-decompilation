#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0080[] = {
	(char*)("EV_ECCLOUD"), &EV_ECCLOUD_TEXLIST,
	(char*)("CHAOS0"), BOSSCHAOS0_TEXLISTS[0],
	(char*)("EV_CHAOS0_MANJU"), &EV_CHAOS0_MANJU_TEXLIST,
	(char*)("CHAOS_SURFACE"), &CHAOS_SURFACE_TEXLIST,
	0
};

void ev0080_k_intro(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(99);
		EventSe_Init(5);
		EV_LookFree(player);
		SMOKE = CObjSmoke_Create();
		EV_SetPos(SMOKE, -1.78f, -238.49249f, 2398.0f);
		CEcCloud_Start(2.5f, 10);
		seqVars[37] = 3;
		EV_SetPos(player, -3.0f, -157.08299f, 2251.0f);
		EV_SetAng(player, 0, 0, 0);
		EV_InitPlayer(0);
		EV_SetAction(player, &action_k_k0014_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(0, 0, -1231.86f, 262.35999f, 3331.5601f);
		EV_CameraAng(0, 0, 0xF500, 0xE200, 0);
		EV_CameraPos(0, 290, -859.09998f, 247.95f, 3485.73f);
		EV_CameraAng(0, 290, 0xF500, 0xE900, 0);
		EV_Wait(1);
		EV_SerifPlay(1000);
		EV_Msg(msgTbl_ev0080[TextLanguage][0]); //"\aAs far back as I can remember,"
		EV_Wait(45);
		EV_Msg(msgTbl_ev0080[TextLanguage][1]); //"\aI've been living here, \non this dark"...
		EV_Wait(75);
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(15);
		EV_SerifPlay(1001);
		EV_Msg(msgTbl_ev0080[TextLanguage][2]); //"\aAlways guarding \nthe Master Emerald"
		EV_Wait(60);
		EV_Msg(msgTbl_ev0080[TextLanguage][3]); //"\afrom anything \nthat could harm it."
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(20);
		EV_CameraPos(1, 0, 158.28f, -74.886002f, 2620.085f);
		EV_CameraAng(1, 0, 0xF100, 0x500, 0);
		EV_CameraPos(0, 240, -25.4f, -78.260002f, 2629.1699f);
		EV_CameraAng(0, 240, 0xF100, 0xFE00, 0);
		EV_SerifPlay(1002);
		EV_Msg(msgTbl_ev0080[TextLanguage][4]); //"\aI don't know \nwhy I was given this j"...
		EV_Wait(60);
		EV_Msg(msgTbl_ev0080[TextLanguage][5]); //"\aWhy it was my fate..."
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(30);
		EV_SetFace(player, "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV");
		EV_SerifPlay(1003);
		EV_Msg(msgTbl_ev0080[TextLanguage][6]); //"\aDestined to be here...\nforever!"
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPerspective(1, 1, 0x2E39);
		EV_CameraPos(0, 0, -6.27f, -139.60001f, 2262.5f);
		EV_CameraAng(0, 0, 0x300, 0xF9F7, 0xFF00);
		EV_CameraPos(0, 50, -6.3899999f, -148.39f, 2261.825f);
		EV_Wait(50);
		EV_CameraPos(0, 110, -6.4688001f, -154.37f, 2261.374f);
		EV_Wait(120);
		EV_CameraPos(0, 0, 5.4756999f, -150.7f, 2260.144f);
		EV_CameraAng(0, 0, 0xF200, 0x22F7, 0xA00);
		EV_CameraPos(0, 100, 5.4756999f, -151.39999f, 2260.144f);
		EV_CameraAng(0, 100, 0xF200, 0x22F7, 0xA00);
		EV_CameraPerspective(0, 100, 0x3111);
		CreateChaos0(-3.0f, -156.8f, 2190.0f, 0, 0x4000, 0, 90);
		ChangeMotspd(0.30000001f);
		seqVars[37] = 1;
		EV_Wait(100);
		RumbleA(0, 6);
		EventSe_Play(0, 1333, 1800);
		EV_CameraAng(0, 3, 0xFC00, 0x22F7, 0xA00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xE800, 0x22F7, 0xA00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xFB00, 0x22F7, 0xA00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xEB00, 0x22F7, 0xA00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xFB00, 0x22F7, 0xA00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xEA00, 0x22F7, 0xA00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xFC00, 0x22F7, 0xA00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xE900, 0x22F7, 0xA00);
		EV_Wait(2);
		EV_ClrFace(player);
		if (enableUnusedCode) {
			EV_SetFace(player, "X"); //Knuckles eyelid animation.
		}
		EV_LookPoint(player, -2.5f, -147.0f, 2262.8f);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_CameraAng(0, 3, 0xF800, 0x22F7, 0xA00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xEE00, 0x22F7, 0xA00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xFA00, 0x22F7, 0xA00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xEB00, 0x22F7, 0xA00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xF200, 0x22F7, 0xA00);
		EV_Wait(3);
		EventSe_Stop(0);
		EV_CameraPos(0, 60, 5.8200002f, -148.44f, 2260.3401f);
		EV_CameraAng(0, 60, 0xF200, 0x22F7, 0xA00);
		EV_SetAction(player, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 1.5f, 0, 10);
		EV_WaitAction(player);
		EV_CameraPos(0, 70, 5.4200001f, -155.5668f, 2249.22f);
		EV_CameraAng(0, 70, 0xC00, 0x41F7, 0x800);
		EV_SetAction(player, &action_k_k0023_knuckles, &KNUCKLES_TEXLIST, 1.3f, 0, 8);
		EV_LookFree(player);
		EV_SerifPlay(1004);
		EV_ClrFace(player);
		EV_SetFace(player, "E");
		EV_Msg(msgTbl_ev0080[TextLanguage][7]); //"\aWhat the...?"
		EV_SetAction(player, &action_k_k0024_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(55);
		BGM_Play(MusicIDs_evtbgm01);
		EV_CameraPos(0, 30, 4.4640002f, -155.2765f, 2249.2661f);
		EV_Wait(5);
		EV_MsgClose();
		EV_CameraPos(0, 0, -3.27f, -155.145f, 2260.26f);
		EV_CameraAng(0, 0, 0xB00, 0xBF7, 0xFF00);
		EV_SetAction(player, &action_k_k0024_knuckles, &KNUCKLES_TEXLIST, 0.80000001f, 1, 0);
		EV_CameraPos(0, 130, 0.54879999f, -155.24001f, 2259.0801f);
		EV_Wait(40);
		tikal = CTikalLight_Create(-2.5599999f, -135.623f, 2153.4199f);
		EV_Wait(40);
		moveObject(tikal, -2.5599999f, -135.623f, 2153.4199f, -19.200001f, -116.76f, 2157.8999f, 50);
		EV_Wait(50);
		moveObject(tikal, -19.200001f, -116.76f, 2157.8999f, 61.169998f, -38.143002f, 2157.8201f, 80);
		EV_CameraPerspective(1, 1, 0x2B61);
		EV_CameraPos(0, 0, 6.8232002f, -156.53f, 2198.575f);
		EV_CameraAng(0, 0, 0x200, 0x24F7, 0xFF00);
		EV_CameraPos(0, 70, 7.1999998f, -149.53999f, 2198.6499f);
		EV_Wait(69);
		EV_CameraPos(0, 0, -13.2855f, -152.32651f, 2182.0701f);
		EV_CameraAng(0, 0, 0x400, 0xA3F7, 0xFF00);
		EV_CameraPos(0, 70, -13.92f, -145.36f, 2181.7661f);
		EV_Wait(69);
		EV_CameraPos(0, 0, -8.0760002f, -147.166f, 2199.9299f);
		EV_CameraAng(0, 0, 0x1500, 0xE3F7, 0xFB00);
		EV_Wait(5);
		EV_CameraPos(0, 80, -14.356f, -156.2f, 2202.7549f);
		EV_CameraAng(0, 80, 0x1500, 0xE3F7, 0xFB00);
		EV_Wait(90);
		EV_SetPos(tikal, 15.95f, -187.42f, 2147.4399f);
		EV_CameraPos(0, 0, -5.5900002f, -152.8f, 2241.3999f);
		EV_CameraAng(0, 0, 0x1100, 0x82F7, 0xF900);
		EV_SerifPlay(1005);
		EV_ClrFace(player);
		EV_SetFace(player, "E");
		EV_Msg(msgTbl_ev0080[TextLanguage][8]); //"\aWhat's going on here?"
		EV_SerifWait();
		EV_Wait(5);
		EV_LookPoint(player, -0.52999997f, -147.5f, 2292.1699f);
		EV_SetFace(player, "H");
		EV_Msg(msgTbl_ev0080[TextLanguage][9]); //"\aOh no!"
		EV_SerifPlay(1006);
		EV_Wait(1);
		EV_SerifWait();
		EV_CameraPos(0, 0, -16.936001f, -150.87f, 2211.178f);
		EV_CameraAng(0, 0, 0x500, 0xF5F7, 0);
		ChangeMotspd(0.5f);
		EV_CameraPos(1, 30, -10.645f, -147.69f, 2186.157f);
		EV_SerifPlay(1007);
		EV_Msg(msgTbl_ev0080[TextLanguage][10]); //"\aSomething's happened to\nthe Master E"...
		EV_SetPos(player, -3.5f, -157.08f, 2226.0f);
		EV_SetAng(player, 0, 0x8000, 15);
		EV_ClrAction(player);
		EV_SetAction(player, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_LookFree(player);
		EV_Wait(35);
		EV_SerifWait();
		EV_CameraPos(0, 0, -11.54f, -147.886f, 2184.3779f);
		EV_CameraAng(0, 0, 0x400, 0xA0F0, 0);
		EV_CameraAng(0, 40, 0x400, 0x93F0, 0);
		EV_Wait(30);
		EV_CameraAng(0, 90, 0x400, 0x8EF0, 0);
		EV_SetAction(player, &action_k_k0012_knuckles, &KNUCKLES_TEXLIST, 1.2f, 0, 8);
		EV_SerifPlay(1008);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "FE");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "F");
		}
		EV_Msg(msgTbl_ev0080[TextLanguage][11]); //"\aHuh?   Who are you?"
		EV_SetAction(player, &action_k_k0013_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 8);
		EV_SerifWait();
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "AF");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "FAAF");
		}
		EV_SerifPlay(1009);
		EV_Msg(msgTbl_ev0080[TextLanguage][12]); //"\aDid you do this?   \nOhhh, I'll get y"...
		EV_Wait(50);
		EV_ClrAction(player);
		EV_PlayPad(0, &E0080K);
		ChangeMotspd(1.0f);
		EV_CameraPos(0, 70, -9.2296f, -149.258f, 2168.938f);
		EV_CameraAng(0, 70, 0x400, 0x89F0, 0);
		EV_MsgClose();
		EV_Wait(25);
		Jump2Chaos0(-3.0f, -162.0f, 2160.0f, 40.0f, 25);
		EV_Wait(25);
		Jump3Chaos0(-3.0f, -157.5f, 2222.0f, 70.0f, 115);
		EV_Wait(4);
		EV_ClrAction(player);
		EV_Wait(3);
		EV_SetAction(player, &action_k_k0002_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SetPos(player, -3.1998999f, -157.0768f, 2224.1001f);
		EV_LookPoint(player, -3.0f, -100.0f, 2160.0f);
		EV_CameraPerspective(1, 1, 0x4000);
		EV_CameraPos(0, 0, -3.3199999f, -130.5f, 2209.387f);
		EV_CameraAng(0, 0, 0x2300, 0x9F0, 0xFC00);
		EV_Wait(10);
		EV_CameraPos(0, 50, 0.55000001f, -153.7f, 2229.0f);
		EV_Wait(49);
		EV_CameraPos(0, 55, 1.0599999f, -156.73f, 2231.6001f);
		EV_Wait(43);
		EventSe_Oneshot(1335, 0, 0, 0);
		EV_SetAction(player, &action_k_k0015_knuckles, &KNUCKLES_TEXLIST, 0.80000001f, 0, 0);
		EV_Wait(3);
		moveObject(player, -3.1998999f, -157.0768f, 2224.1001f, -1.71f, -238.49249f, 2388.5859f, 100);
		EV_CameraAng(0, 3, 0x2800, 0x9F0, 0xFC00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x1F00, 0x9F0, 0xFC00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x2700, 0x9F0, 0xFC00);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x2000, 0x9F0, 0xFC00);
		EV_Wait(3);
		EV_Wait(10);
		EV_SerifPlay(1010);
		EV_Msg(msgTbl_ev0080[TextLanguage][13]); //"\aOoomph!"
		EV_CameraPos(0, 0, -4.0f, -166.0f, 2286.0801f);
		EV_CameraAng(0, 0, 0x1800, 0xF580, 0xFB00);
		EV_CameraPos(0, 70, -6.9629998f, -238.77299f, 2398.6201f);
		EV_CameraAng(0, 70, 0x1000, 61312, 0xFB00);
		EV_Wait(70);
		EventSe_Stop(1);
		EV_CameraPos(0, 20, -9.2200003f, -239.235f, 2404.5f);
		moveObject(player, -1.71f, -238.49249f, 2388.5859f, -1.78f, -238.49249f, 2398.0f, 16);
		EV_SetAction(player, &action_k_k0016_knuckles, &KNUCKLES_TEXLIST, 0.80000001f, 1, 0);
		EV_SetFace(player, "F");
		EV_SerifPlay(1011);
		EV_Msg(msgTbl_ev0080[TextLanguage][14]); //"\aUgh agh! Hey, no fair!"
		if (SMOKE)
		{
			SMOKE->twp->ang.y = 3;
			SMOKE->twp->ang.x = 3;
		}
		EV_Wait(10);
		if (SMOKE)
		{
			SMOKE->twp->ang.y = 0;
			SMOKE->twp->ang.x = 0;
		}
		EV_Wait(10);
		EV_MsgClose();
		EV_LookFree(player);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[57], &KNUCKLES_TEXLIST, 1.7f, 1, 8);
		EV_Wait(4);
		EV_MovePoint2(player, -3.1998999f, -157.0768f, 2239.1001f, 0.89999998f, 0.89999998f);
		EV_Wait(30);
		EV_CameraPerspective(1, 1, 0x2AAB);
		EV_CameraPos(0, 0, -0.47999999f, -154.0f, 2188.1599f);
		EV_CameraAng(0, 0, 0x500, 0x8680, 0xFD00);
		EV_CameraPos(0, 100, -4.5f, -153.3f, 2188.73f);
		EV_CameraAng(0, 100, 0x500, 0x8680, 0xFD00);
		SetPositionChaos0(-3.0f, -157.5f, 2193.0f);
		EV_Wait(40);
		EV_SetAction(player, KNUCKLES_ACTIONS[64], &KNUCKLES_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(player, &action_k_k0012_knuckles, &KNUCKLES_TEXLIST, 1.5f, 0, 4);
		EV_SetAction(player, &action_k_k0013_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(80);
		ToWaterChaos0();
		EventSe_Play(2, 1337, 1800);
		EV_CameraPos(0, 80, -6.0f, -154.5f, 2178.9299f);
		EV_CameraAng(0, 80, 0x500, 0x8680, 0xFD00);
		EV_Wait(80);
		EventSe_Stop(2);
		MoveChaos0(-3.0f, -165.0f, 2193.0f, 65);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "F");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "E");
		}
		EV_SerifPlay(1012);
		EV_Msg(msgTbl_ev0080[TextLanguage][15]); //"\aWait!"
		EV_Wait(20);
		EV_Wait(15);
		EV_MsgClose();
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 0, 16);
		EV_CameraPos(0, 0, -6.2470002f, -152.60001f, 2232.825f);
		EV_CameraAng(0, 0, 0x1300, 0x9680, 0xFD00);
		EV_CameraPos(0, 100, -7.0780001f, -152.66499f, 2233.375f);
		EV_CameraAng(0, 100, 0x1300, 0x9A80, 0xFD00);
		EV_LookPoint(player, -3.2f, -154.157f, 2228.1001f);
		EV_Wait(35);
		EV_SerifPlay(1013);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "C");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "DAAE");
		}
		EV_Msg(msgTbl_ev0080[TextLanguage][16]); //"\aWhat's happening to you?\nCome back h"...
		EV_SerifWait();
		EV_Wait(30);
		RumbleA(0, 5);
		EventSe_Play(0, 1333, 1800);
		EV_CameraAng(0, 4, 0x1E00, 0x9A80, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x800, 0x9A80, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x1C00, 0x9A80, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x600, 0x9A80, 0);
		EV_Wait(3);
		EventSe_Stop(0);
		EV_LookPoint(player, -3.2f, -149.0f, 2228.1001f);
		EV_SetFace(player, "H");
		EV_CameraAng(0, 4, 0x1D00, 0x9A80, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x700, 0x9A80, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x1C00, 0x9A80, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x600, 0x9A80, 0);
		EV_Wait(3);
		EV_CameraAng(0, 3, 0x1A00, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xA00, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x1B00, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xF00, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x1A00, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0xF00, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x1700, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x1000, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x1500, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x1300, 0x9A80, 0);
		EV_Wait(3);
		EV_SerifPlay(1014);
		EV_SetFace(player, "DDD");
		EV_Msg(msgTbl_ev0080[TextLanguage][17]); //"\aWow!   That was incredible!\nI've nev"...
		EV_CameraAng(0, 3, 0x1500, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x1100, 0x9A80, 0);
		EV_Wait(2);
		EV_LookPoint(player, 0.52999997f, -149.0f, 2231.0f);
		EV_CameraAng(0, 3, 0x1500, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x1200, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x1600, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x1100, 0x9A80, 0);
		EV_Wait(2);
		EV_LookPoint(player, -6.5500002f, -149.0f, 2234.0f);
		EV_CameraAng(0, 3, 0x1400, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x1200, 0x9A80, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 0x1300, 0x9A80, 0);
		EV_Wait(3);
		EV_SerifWait();
		EV_Wait(20);
		EV_SerifPlay(1015);
		EV_SetFace(player, "C");
		EV_Msg(msgTbl_ev0080[TextLanguage][18]); //"\aOh no!   \nIt's starting to happen."
		EV_SetAction(player, &action_k_k0023_knuckles, &KNUCKLES_TEXLIST, 1.3f, 0, 8);
		EV_WaitAction(player);
		EV_CameraPos(0, 0, -3.0999999f, -148.35699f, 2221.686f);
		EV_CameraAng(0, 0, 0xF600, 0x8000, 0);
		EV_CameraPerspective(0, 180, 0x38E4);
		EV_CameraPos(0, 180, -3.0999999f, -65.190002f, 2118.5664f);
		EV_CameraAng(0, 0, 0xE200, 0x8000, 0);
		EV_LookFree(player);
		EV_ClrAction(player);
		EV_SetPos(player, -3.0999999f, -157.0f, 2235.637f);
		EV_SetAng(player, 0, 9905, 0);
		EV_Wait(10);
		EV_SerifPlay(1016);
		EV_SetFace(player, "CD");
		EV_Msg(msgTbl_ev0080[TextLanguage][19]); //"\aWithout the Master Emerald's \npower,"
		EV_Wait(20);
		EV_SetAction(player, &action_k_k0034_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(player, &action_k_k0035_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_Msg(msgTbl_ev0080[TextLanguage][20]); //"\athis whole island will \nfall into th"...
		moveObject(tikal, -50.099998f, -76.050003f, 2142.4556f, 20.1f, -73.0f, 2131.7f, 160);
		EV_Wait(130);
		BLACK = COverlayCreate(0.016666668f, 0.1f, 0.0f, 0.0f, 0.0f);
		EV_Wait(40);
		EV_MsgClose();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		stopObjectAll();
		EV_SetPos(player, -3.0999999f, -157.0f, 2235.637f);
		EV_SetAng(player, 0, 0x26B1, 0);
		if (tikal)
		{
			FreeTask(tikal);
			tikal = 0;
		}
		EV_InitPlayer(0);
		DeleteChaos0();
		if (SMOKE)
		{
			FreeTask(SMOKE);
			SMOKE = 0;
		}
		CEcCloud_Stop();
		EventSe_Close();
		if (BLACK)
		{
			FreeTask(BLACK);
			BLACK = 0;
		}
		seqVars[37] = 0;
		break;
	}
}