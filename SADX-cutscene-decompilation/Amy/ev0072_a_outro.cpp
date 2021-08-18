#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0072_a_outro(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		obj_wing1 = 0;
		obj_wing2 = 0;
		obj_wing_p = 0;
		obj_wing_t = 0;
		BLACKOUT = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(93);
		EventSe_Init(3);
		EV_Wait(1);
		EV_InitPlayer(0);
		BLACKOUT = COverlayCreate(1.0e-32f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_SetPos(player, -78.699997f, 752.29999f, -361.29999f);
		EV_SetAng(player, 248, 44465, 767);
		EV_SetAction(player, AMY_ACTIONS[44], &AMY_TEXLIST, 0.80000001f, 1, 8);
		EV_ClrFace(player);
		EV_SetFace(player, "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN");
		EV_LookPoint(player, -142.5f, 749.5f, -380.0f);
		obj_wing1 = SetEventBirdie0();
		EV_SetPos(obj_wing1, -137.5f, 747.90002f, -381.0f);
		EV_SetAng(obj_wing1, 248, 44465, 767);
		obj_wing2 = SetEventBirdie0();
		EV_SetPos(obj_wing1, -137.5f, 747.90002f, -381.0f);
		EV_SetAng(obj_wing1, 248, 44465, 767);
		obj_wing_p = SetEventBirdie1();
		EV_SetPos(obj_wing_p, -134.0f, 751.79999f, -385.0f);
		EV_SetAng(obj_wing_p, 248, 44033, 767);
		obj_wing_t = SetEventBirdie2();
		EV_SetPos(obj_wing_t, -134.0f, 751.79999f, -385.0f);
		EV_SetAng(obj_wing_t, 248, 44033, 767);
		EV_Wait(1);
		EV_SetPos(obj_wing1, -137.5f, 748.20001f, -381.0f);
		EV_SetAng(obj_wing1, 0, 57344, 0x4000);
		EV_SetMode(obj_wing1, 0);
		EV_SetShadow(obj_wing1, 0.5f);
		EV_SetAction(obj_wing1, &action_w_w9001_wing, &VER2_WING_TEXLIST, 0.02f, 1, 16);
		EV_SetPos(obj_wing2, -137.5f, 710.0f, -381.0f);
		EV_SetAng(obj_wing2, 16632, 28081, 767);
		EV_SetShadow(obj_wing2, 0.0099999998f);
		EV_SetMode(obj_wing2, 0);
		EV_SetAction(obj_wing2, &action_w_w0840a_wing, &texlist_ver4_wing, 0.1f, 1, 0);
		EV_SetPos(obj_wing_p, -135.7f, 749.59998f, -382.29999f);
		EV_SetAng(obj_wing_p, 248, 53248, 767);
		EV_SetMode(obj_wing_p, 0);
		EV_SetShadow(obj_wing_p, 0.5f);
		EV_SetAction(obj_wing_p, &action_w_p0003_wing_p, &texlist_wing_p, 0.89999998f, 1, 16);
		EV_SetPos(obj_wing_t, -136.60001f, 750.65997f, -376.10001f);
		EV_SetAng(obj_wing_t, 0, 34481, 1535);
		EV_SetMode(obj_wing_t, 0);
		EV_SetShadow(obj_wing_t, 0.5f);
		EV_SetAction(obj_wing_t, &action_w_p0003_wing_p, &texlist_wing_t, 0.89999998f, 1, 16);
		EV_SetAction(obj_wing_t, &action_w_p0003_wing_p, &texlist_wing_t, 0.89999998f, 1, 16);
		EV_SetFace(player, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
		BGM_Play(MusicIDs_evtbgm00);
		EV_CameraPos(1, 0, -140.89999f, 748.0f, -382.0f);
		EV_CameraPos(1, 90, -141.0f, 748.0f, -381.0f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 5.0f, 0.0f, 0);
		EV_MovePoint2(player, -137.5f, 747.0f, -380.0f, 0.050000001f, 0.0099999998f);
		EV_Wait(90);
		EV_CameraTargetFree();
		EV_Wait(5);
		EV_MoveFree(player);
		EV_SetPos(player, -133.3f, 747.29999f, -379.85001f);
		EV_SetAng(player, 0, 53289, 809);
		EV_SetPos(obj_wing_p, -137.5f, 751.29999f, -383.29999f);
		EV_SetAng(obj_wing_p, 504, 8704, 767);
		EV_SetPos(obj_wing_t, -134.60001f, 755.40002f, -376.20001f);
		EV_SetAng(obj_wing_t, 0, 35328, 767);
		EV_SetAction(player, &action_a_a0840_amy, &AMY_TEXLIST, 0.89999998f, 1, 16);
		EV_SetPos(obj_wing1, -137.5f, 717.90002f, -381.0f);
		EV_SetAng(obj_wing1, 0, 53248, 767);
		EV_SetPos(obj_wing2, -134.5f, 747.0f, -376.5f);
		EV_SetAng(obj_wing2, 50432, 59904, 0);
		EV_CameraPos(1, 0, -150.0f, 761.09998f, -384.5f);
		EV_CameraAng(1, 0, 4474, 46121, 0);
		EV_CameraPos(1, 150, -147.7f, 750.59998f, -383.79999f);
		EV_CameraAng(1, 150, 1146, 46121, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "ACCCCCA0");
		EV_SerifPlay(991);
		EV_Msg(msgTbl_ev0072[TextLanguage][0]); //"\aPlease, wake up, birdie."
		EV_Wait(90);
		EV_ClrFace(player);
		EV_Wait(60);
		EV_CameraPerspective(1, 130, 7282);
		EV_Wait(1);
		EV_CameraPos(1, 0, -139.3f, 755.40002f, -375.0f);
		EV_CameraAng(1, 0, 59524, 59177, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "ACCC0");
		EV_SerifPlay(992);
		EV_Msg(msgTbl_ev0072[TextLanguage][1]); //"\aAre you okay?   Can you fly?"
		EV_Wait(80);
		EV_ClrFace(player);
		EV_ClrAction(obj_wing2);
		EV_SetAction(obj_wing2, &action_w_w0840b_wing, &texlist_ver4_wing, 0.60000002f, 0, 0);
		EV_Wait(50);
		EV_MsgClose();
		EV_CameraPerspective(1, 1, 12561);
		EV_Wait(1);
		EV_ClrAction(obj_wing2);
		EV_SetAction(obj_wing2, &action_w_w9005_wing, &texlist_ver4_wing, 0.89999998f, 1, 0);
		EV_Wait(1);
		EV_SetPos(obj_wing2, -135.39999f, 752.29999f, -380.10001f);
		EV_SetAng(obj_wing2, 0, 51889, 0);
		moveObject(obj_wing2, -135.39999f, 752.29999f, -380.10001f, -192.39999f, 762.40002f, -383.60001f, 160);
		EV_LookFree(player);
		EV_CameraPos(1, 0, -143.0f, 752.29999f, -385.89999f);
		EV_CameraAng(1, 0, 378, 42281, 0);
		EV_CameraPos(1, 30, -144.89999f, 753.20001f, -385.70001f);
		EV_CameraAng(1, 30, 65402, 42793, 0);
		EV_SetAng(player, 0, 50217, 809);
		EV_SetPos(obj_wing_p, -133.2f, 752.70001f, -384.60001f);
		EV_SetAng(obj_wing_p, 504, 49152, 767);
		EV_SetAction(obj_wing_p, &action_w_p0003_wing_p, &texlist_wing_p, 3.4000001f, 1, 16);
		EV_SetPos(obj_wing_t, -134.60001f, 755.40002f, -376.20001f);
		EV_SetAng(obj_wing_t, 0, 49920, 767);
		EV_SetAction(obj_wing_t, &action_w_p0003_wing_p, &texlist_wing_t, 3.4000001f, 1, 16);
		EV_SetAction(player, &action_a_a0841_amy, &AMY_TEXLIST, 1.0f, 1, 8);
		EV_LookObject(player, obj_wing2, 0.0f, 0.0f, 0.0f);
		EV_Wait(30);
		EV_CameraPos(1, 35, -159.5f, 747.5f, -395.70001f);
		EV_CameraAng(1, 45, 3962, 39209, 1280);
		EV_Wait(60);
		EV_CameraPos(1, 0, -127.6f, 749.5f, -367.29999f);
		EV_CameraAng(1, 0, 1658, 7977, 0);
		EV_CameraPos(1, 80, -125.4f, 749.40002f, -369.29999f);
		EV_CameraAng(1, 80, 1658, 11305, 0);
		EV_Wait(80);
		EV_CameraPos(1, 0, -181.7f, 759.90002f, -384.70001f);
		EV_CameraAng(1, 0, 1658, 17449, 0);
		EV_CameraChase(obj_wing2);
		moveObject(obj_wing2, -192.39999f, 762.40002f, -383.60001f, -261.20001f, 774.76001f, -382.95999f, 60);
		EV_Wait(75);
		EV_CameraChaseFree();
		BGM_Stop();
		moveObjectAngle2(
			obj_wing2,
			-261.20001f, 774.76001f, -382.95999f,
			-273.89999f, 745.0f, -382.95999f,
			0, 0x8AB1, 0,
			0x5000, 0x8FB1, 0x3000,
			65);
		EV_Wait(65);
		EV_CameraPos(1, 0, -141.7f, 750.5f, -381.0f);
		EV_CameraAng(1, 0, 3194, 47401, 0);
		EV_CameraPos(1, 10, -139.8f, 751.09998f, -380.70001f);
		EV_ClrFace(player);
		EV_SetFace(player, "DC0");
		EV_Wait(20);
		EV_ClrFace(player);
		EV_LookFree(player);
		EV_Wait(20);
		EV_SetAction(player, AMY_ACTIONS[44], &AMY_TEXLIST, 1.0f, 1, 1);
		EV_Wait(10);
		EV_MovePoint2(player, -179.39999f, 744.5f, -378.0f, 0.40000001f, 0.059999999f);
		EV_Wait(10);
		EV_SetPos(player, -179.39999f, 744.5f, -378.0f);
		EV_SetAng(player, 0, 48937, 809);
		EV_CameraPos(1, 0, -191.89999f, 755.0f, -380.0f);
		EV_CameraAng(1, 0, 62712, 45198, 0);
		EV_CameraTargetObj(1, 20, player, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraPos(0, 40, -172.5f, 750.5f, -382.39999f);
		EV_Wait(40);
		BGM_Play(MusicIDs_evtbgm03);
		EV_CameraTargetFree();
		EV_WaitMove(player);
		EV_SetAction(player, &action_a_a0818_amy, &AMY_TEXLIST, 1.0f, 1, 8);
		EV_CameraPos(0, 70, -166.3f, 744.92999f, -382.0f);
		EV_CameraAng(0, 70, 5368, 18830, 64768);
		EV_FreeObject(&obj_wing2);
		EV_SetPath(obj_wing1, &epathtag_0087LIDY, 0.075000003f, 0);
		EV_SetAction(obj_wing1, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 16);
		EV_Wait(40);
		EV_CameraPos(0, 90, -160.8f, 746.5f, -378.5f);
		EV_CameraAng(0, 20, 4290, 16656, 0);
		EV_CameraTargetFree();
		EV_SetPath(obj_wing_p, &epathtag_0087PATY, 0.090000004f, 0);
		EV_SetPath(obj_wing_t, &epathtag_0087TEDY, 0.090000004f, 0);
		EV_Wait(60);
		EV_Wait(35);
		EV_ClrPath(obj_wing1);
		EV_ClrPath(obj_wing_p);
		EV_ClrPath(obj_wing_t);
		EV_Wait(5);
		EV_CameraPos(1, 0, -182.75999f, 752.70001f, -379.5f);
		EV_CameraAng(1, 0, 59608, 45663, 64640);
		EV_CameraPos(0, 100, -182.64999f, 753.5f, -378.29999f);
		EV_CameraAng(0, 100, 57808, 47711, 64640);
		EV_Wait(100);
		EV_CameraTargetFree();
		EV_InitPlayer(0);
		EV_SetPos(player, -179.39999f, 744.5f, -378.0f);
		EV_SetAng(player, 0, 45056, 809);
		EV_Wait(1);
		EV_CameraPos(1, 0, -201.61f, 768.79999f, -371.42001f);
		EV_CameraAng(1, 0, 57571, 53995, 0);
		EV_CameraPos(0, 60, -184.61f, 762.70001f, -370.60001f);
		EV_CameraAng(0, 60, 55697, 60141, 0);
		EV_SetAction(player, &action_a_a0843_amy, &AMY_TEXLIST, 1.3f, 1, 8);
		EV_Wait(40);
		EV_SetAng(obj_wing1, 65024, 0x8000, 0);
		moveObject(obj_wing1, -178.2f, 755.5f, -371.29999f, -188.8f, 753.20001f, -417.0f, 36);
		EV_SetAction(obj_wing1, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_SetAng(obj_wing_p, 0, 0x8000, 0);
		moveObject(obj_wing_p, -182.2f, 754.5f, -371.0f, -185.8f, 750.20001f, -417.0f, 36);
		EV_SetAng(obj_wing_t, 0, 34304, 0);
		moveObject(obj_wing_t, -174.2f, 753.5f, -372.79999f, -191.8f, 748.20001f, -417.0f, 36);
		EV_CameraPos(0, 0, -179.60001f, 752.0f, -373.39999f);
		EV_CameraAng(0, 0, 61425, 63819, 0);
		EV_CameraPos(0, 40, -179.75999f, 750.5f, -372.39999f);
		EV_CameraAng(0, 40, 65169, 64075, 0);
		EV_SetAction(player, &action_a_a0844_amy, &AMY_TEXLIST, 1.1799999f, 0, 4);
		EV_SetAction(player, &action_a_a0845_amy, &AMY_TEXLIST, 1.1799999f, 1, 4);
		EV_Wait(26);
		EV_MoveFree(obj_wing1);
		moveObject(obj_wing1, -188.8f, 753.20001f, -417.0f, -183.8f, 773.20001f, -427.0f, 33);
		EV_Wait(10);
		EV_MoveFree(obj_wing_p);
		EV_MoveFree(obj_wing_t);
		moveObject(obj_wing_p, -185.8f, 750.20001f, -417.0f, -180.8f, 770.20001f, -427.0f, 34);
		moveObject(obj_wing_t, -191.8f, 748.20001f, -417.0f, -186.8f, 778.20001f, -427.0f, 34);
		EV_Wait(50);
		EV_CameraPos(0, 0, -169.89999f, 755.09998f, -371.89999f);
		EV_CameraAng(0, 0, 65521, 13643, 0);
		EV_CameraPos(0, 60, -169.89999f, 749.09998f, -371.89999f);
		EV_CameraAng(0, 60, 65521, 13643, 0);
		EV_MoveFree(obj_wing1);
		EV_MoveFree(obj_wing_p);
		EV_MoveFree(obj_wing_t);
		EV_SetPos(obj_wing_p, -133.2f, 852.70001f, -384.60001f);
		EV_SetAng(obj_wing_p, 504, 49152, 767);
		EV_SetPos(obj_wing_t, -134.60001f, 855.40002f, -376.20001f);
		EV_SetAng(obj_wing_t, 0, 49920, 767);
		EV_SetPos(obj_wing1, -135.39999f, 852.29999f, -380.10001f);
		EV_SetAng(obj_wing1, 0, 51889, 0);
		EV_SetAng(obj_wing1, 65024, 0x8000, 0);
		moveObject(obj_wing1, -178.2f, 759.5f, -371.29999f, -177.8f, 750.20001f, -371.0f, 55);
		EV_ClrAction(obj_wing1);
		EV_SetAction(obj_wing1, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 1);
		EV_ClrFace(player);
		EV_SetFace(player, "GCDC");
		EV_SerifPlay(993);
		EV_Msg(msgTbl_ev0072[TextLanguage][2]); //"\aWhoa!"
		EV_SetAng(obj_wing_p, 0, 30720, 0);
		moveObject(obj_wing_p, -182.2f, 759.5f, -371.0f, -180.8f, 749.29999f, -374.0f, 52);
		EV_SetAng(obj_wing_t, 0, 34304, 0);
		moveObject(obj_wing_t, -174.2f, 759.5f, -372.79999f, -175.5f, 748.0f, -371.0f, 52);
		EV_Wait(100);
		EV_ClrFace(player);
		EV_CameraPos(0, 60, -168.89999f, 749.09998f, -371.60001f);
		EV_CameraAng(0, 60, 65521, 14122, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "GCDCDCCCDCCD");
		EV_SerifPlay(994);
		EV_Msg(msgTbl_ev0072[TextLanguage][3]); //"\aYou did it!\nNow you three can live i"...
		EV_Wait(100);
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraTargetObj(1, 60, player, 0.0f, 5.0f, 0.0f, 0);
		EV_CameraPos(1, 160, -176.39999f, 800.0f, -361.70001f);
		EV_MoveFree(obj_wing1);
		EV_MoveFree(obj_wing_p);
		EV_MoveFree(obj_wing_t);
		EV_Wait(20);
		EV_SetAction(player, &action_a_a0846_amy, &AMY_TEXLIST, 1.3f, 0, 8);
		EV_SetAction(player, &action_a_a0847_amy, &AMY_TEXLIST, 1.3f, 1, 8);
		EV_SetAng(obj_wing1, -4096, 0x8000, 0);
		moveObject(obj_wing1, -177.8f, 750.20001f, -371.0f, -177.8f, 794.20001f, -363.0f, 145);
		EV_SetAction(obj_wing1, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_SetAng(obj_wing_p, 0, 0x8000, 0);
		moveObject(obj_wing_p, -180.8f, 748.29999f, -372.60001f, -185.0f, 788.0f, -367.0f, 140);
		EV_SetAng(obj_wing_t, 0, 31488, 0);
		moveObject(obj_wing_t, -175.5f, 748.0f, -371.0f, -169.0f, 788.0f, -365.0f, 140);
		EV_Wait(145);
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, -177.5f, 782.20001f, -371.79999f);
		EV_CameraAng(1, 0, 6751, 23195, 3024);
		EV_CameraPos(0, 90, -174.8f, 789.40002f, -368.88f);
		EV_CameraAng(0, 90, 6751, 25499, 3536);
		EV_Wait(90);
		EV_CameraPos(0, 70, -165.8f, 784.20001f, -368.88f);
		EV_CameraAng(0, 70, 6495, 19867, 3536);
		EV_Wait(70);
		EV_CameraPos(0, 50, -164.2f, 783.0f, -369.39999f);
		EV_CameraAng(0, 50, 6495, 19867, 3536);
		EV_Wait(50);
		EV_CameraPos(1, 0, -173.8f, 798.20001f, -364.60001f);
		EV_CameraAng(1, 0, 51807, 5787, 512);
		EV_CameraPos(1, 40, -175.0f, 799.79999f, -363.39999f);
		EV_CameraAng(1, 40, 52319, 7323, 2512);
		EV_Wait(38);
		EV_InitPlayer(0);
		EV_SetPos(player, -179.39999f, 744.5f, -378.0f);
		EV_SetAng(player, 0, 49152, 809);
		moveObjectAngle2(
			obj_wing1,
			-247.0f, 811.0f, -373.0f,
			-359.0f, 830.0f, -360.0f,
			0, 0x8000, 0x1000,
			0, 0x8000, 0x1000,
			280);
		moveObjectAngle2(
			obj_wing_p,
			-247.0f, 800.0f, -366.0f,
			-353.0f, 820.0f, -350.0f,
			0, 0x8000, 0xF000,
			0, 0x8000, 0xF000,
			280);
		moveObjectAngle2(
			obj_wing_t,
			-247.0f, 800.0f,-380.0f,
			-353.0f, 820.0f, -370.0f,
			0, 0x8000, 0xF000,
			0, 0x8000, 0xF000,
			280);
		EV_CameraPos(1, 0, -170.28f, 746.20001f, -371.0f);
		EV_CameraAng(1, 0, 4359, 14065, 48);
		EV_CameraPos(1, 160, -168.60001f, 745.0f, -385.39999f);
		EV_CameraAng(1, 160, 4871, 19953, 816);
		EV_SetAction(player, &action_a_a0818_amy, &AMY_TEXLIST, 0.89999998f, 1, 4);
		EV_Wait(170);
		EV_SetAction(player, &action_a_a0822_amy, &AMY_TEXLIST, 0.89999998f, 1, 4);
		EV_Wait(120);
		EV_CameraPos(1, 0, -185.2f, 750.79999f, -382.20001f);
		EV_CameraAng(1, 0, 1543, 42225, 65328);
		EV_CameraAng(1, 130, 263, 42225, 65328);
		EV_ClrFace(player);
		EV_SetFace(player, "ACCC");
		EV_SerifPlay(995);
		EV_Msg(msgTbl_ev0072[TextLanguage][4]); //"\aI'm so happy!"
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(90);
		EV_CameraPos(1, 90, -184.39999f, 750.79999f, -381.60001f);
		EV_ClrFace(player);
		EV_SetFace(player, "ACGCDCGGDCC");
		EV_SerifPlay(996);
		EV_MsgW(80, msgTbl_ev0072[TextLanguage][5]); //"\aI'm going to try my best, too!"
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(30);
		if (BLACKOUT)
		{
			COverlaySetSpeed(BLACKOUT, 0.02f);
		}
		EV_Wait(70);
		EV_ClrAction(player);
		EV_Wait(10);
		if (BLACKOUT)
		{
			COverlaySetSpeed(BLACKOUT, -0.029999999f);
		}
		EV_LookFree(player);
		BGM_Play(MusicIDs_theamy);
		EV_SetPos(player, 234.0f, 569.0f, -639.0f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_CameraPos(1, 0, 242.2f, 587.79999f, -655.70001f);
		EV_CameraAng(1, 0, 5383, 27681, 65328);
		EV_CameraPos(1, 60, 238.2f, 571.40002f, -647.20001f);
		EV_CameraAng(1, 60, 5383, 27937, 65328);
		EV_Wait(60);
		EV_SetAction(player, AMY_ACTIONS[70], &AMY_TEXLIST, 0.80000001f, 1, 0);
		EV_Wait(2);
		EV_MovePoint2(player, 234.39999f, 571.0f, -724.0f, 0.40000001f, 0.02f);
		EV_CameraPos(1, 40, 238.2f, 574.40002f, -647.20001f);
		EV_CameraTargetObj(1, 20, player, 0.0f, 5.0f, 0.0f, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "ACGCDCGGDDGCCC");
		EV_SerifPlay(997);
		EV_Msg(msgTbl_ev0072[TextLanguage][6]); //"\aJust watch me."
		EV_SerifWait();
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, 226.2f, 569.79999f, -731.70001f);
		EV_CameraAng(1, 0, 4096, 32545, 65280);
		EV_CameraPos(1, 150, 244.5f, 572.79999f, -731.70001f);
		EV_CameraAng(1, 150, 4096, 29217, 65280);
		EV_ClrFace(player);
		EV_SetFace(player, "ACGCDCGGDDGCCC");
		EV_SerifPlay(998);
		EV_MsgW(120, msgTbl_ev0072[TextLanguage][7]); //"\aI'll make that Sonic respect me!"
		EV_CameraChaseFree();
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MoveFree(player);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetPos(player, 304.0f, 569.0f, -723.0f);
		EV_SetAng(player, 0, 0x4000, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 0x4000, 0);
		EV_CameraPos(1, 0, 302.89999f, 573.0f, -712.0f);
		EV_CameraAng(1, 0, 256, 63777, 65280);
		EV_CameraPos(0, 30, 310.89999f, 575.79999f, -714.5f);
		EV_CameraAng(0, 30, 63488, 6433, 65280);
		EV_ClrFace(player);
		EV_SetFace(player, "APPPPPPPPbbbDGCCC");
		EV_SerifPlay(999);
		EV_Msg(msgTbl_ev0072[TextLanguage][8]); //"\aAnd by that time \nit's gonna be too "...
		EV_Wait(10);
		EV_SetAction(player, AMY_ACTIONS[29], &AMY_TEXLIST, 0.60000002f, 0, 16);
		EV_Wait(20);
		EV_CameraPos(0, 15, 312.89999f, 575.0f, -726.70001f);
		EV_CameraAng(0, 15, 2304, 20513, 65280);
		EV_Wait(15);
		EV_CameraPos(0, 100, 315.70001f, 572.5f, -727.70001f);
		EV_CameraAng(0, 100, 2560, 20513, 2048);
		EV_Wait(15);
		EV_SerifWait();
		EV_MsgClose();
		if (BLACKOUT)
		{
			FreeTask(BLACKOUT);
			BLACKOUT = 0;
		}
		BLACKOUT = COverlayCreate(0.016666668f, 0.40000001f, 0.0f, 0.0f, 0.0f); //Line added in SADX to hide animation weirdness at the end.
		EV_Wait(90);
		break;
	case 2:
		EV_CameraOff();
		stopObjectAll();
		EV_SerifStop();
		EV_InitObject(player);
		EventSe_Close();
		EV_FreeObject(&obj_wing1);
		EV_FreeObject(&obj_wing2);
		EV_FreeObject(&obj_wing_p);
		EV_FreeObject(&obj_wing_t);
		if (BLACKOUT)
		{
			FreeTask(BLACKOUT);
			BLACKOUT = 0;
		}
		break;
	}
}