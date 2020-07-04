#include "SADXModLoader.h"
#include "SADXEventFunctions.h"

void ev0020_s_mural(int a1)
{
    DataPointer(ObjectMaster*, EV0020_TikalBall, 0x3C844F8);//Unofficial Name
    ObjectMaster* player;

    if (a1 == 1)
    {
        EV0020_TikalBall = 0;
        SetBankDir(97);
        EventSe_Init(1);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_InitPlayer(0);
        BGM_Play(MusicIDs_evtbgm04);
        EV0020_TikalBall = CTikalLight_Create(-23.139999, 25.0, -1.6);
        EV_Wait(1);
        EV_SetMode(EV0020_TikalBall, 0);
        player = EV_GetPlayer(0);
        EV_SetPos(player, 0.41, 10.0, 2.6700001);
        EV_SetAng(player, 0, 48561, 0);
        EV_Wait(1);
        EV_ClrAction(player);
        EventSe_Play(0, 760, 1800);
        EventSe_Volume(0, -100, 200);
        EV_LookPoint(player, -23.139999, 25.0, -1.6);
        EV_CameraPos(1, 0, 6.5300002, 11.85, 20.959999);
        EV_CameraAng(1, 0, 2816, 5734, 0);
        EV_CameraPos(1, 100, 9.0, 11.85, 19.27);
        EV_CameraAng(1, 100, 2816, 6502, 0);
        EV_Wait(80);
        moveObject(EV0020_TikalBall, -23.139999, 25.0, -1.6, -445.76001, 25.0, -11.85, 300);
        EV_Wait(20);
        EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.5, 1, 16);
        EV_MovePoint2(player, -385.39001, 30.02, 4.6500001, 1.72, 0.059999999);
        EV_Wait(10);
        EV_LookFree(player);
        EV_Wait(20);
        EV_CameraPos(1, 0, -109.36, 24.08, 46.09);
        EV_CameraAng(1, 0, 1024, 55398, 0);
        EV_Wait(50);
        EventSe_Stop(0);
        EV_CameraPos(0, 0, -257.51999, 222.07001, -125.52);
        EV_CameraAng(0, 0, 56832, 41062, 0);
        EV_CameraPos(0, 150, -260.42001, 211.64999, -128.35001);
        EV_CameraAng(0, 150, 56832, 41062, 0);
        EV_Wait(60);
        EV_CameraChaseFree();
        EV_CameraTargetFree();
        EventSe_Oneshot(768, 0, 0, 0);
        EV_CameraTargetObj(1, 0, player, 0.0, 6.0, 0.0, 0);
        EV_CameraChaseRM(0, 80, player, 2.0, 0, -18203, 0, 11.0, 0, -27306, 0, 30.0);
        EV_Wait(65);
        EV_CameraChaseFree();
        EV_CameraTargetFree();
        EV_CreateWaterRipple(-183.74001, 5.8400002, 56.889999, 0.40000001, 1.0, 3, 10, 1);
        EV_CameraPos(0, 0, -197.12, 28.84, 29.299999);
        EV_CameraAng(0, 0, 59104, 39701, 0);
        EventSe_Oneshot(1335, 100, 0, 0);
        EV_Wait(30);
        EV_CreateWaterRipple(-183.74001, 5.8400002, 56.889999, 0.40000001, 1.0, 3, 10, 1);
        EV_Wait(40);
        EV_ClrAction(player);
        EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.0, 1, 0);
        EV_FreeWaterRipple(1);
        EV_FreeObject(&EV0020_TikalBall);
        stopObjectAll();
        EV_Wait(10);
        EV_SetPos(player, -365.35001, 30.02, 7.0900002);
        EV_SetAng(player, 0, 48172, 0);
        EV_Wait(1);
        EV_MovePoint2(player, -385.39001, 30.02, 4.6500001, 0.5, 0.059999999);
        EV_Wait(20);
        EV_CameraPos(0, 0, -402.53, 35.209999, 13.82);
        EV_CameraAng(0, 0, 256, 54630, 0);
        EV_Wait(20);
        EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0, 1, 8);
        EV_Wait(30);
        EV_SetAction(player, (NJS_ACTION*)0x3C84C98, &SONIC_TEXLIST, 0.2, 1, 16);
        EV_Wait(60);
        EV_CameraPos(0, 0, -476.79999, 159.23, -30.030001);
        EV_CameraAng(0, 0, 55264, 42773, 0);
        EV_CameraPos(0, 200, -465.89001, 159.23, -45.59);
        EV_CameraAng(0, 200, 55264, 42773, 0);
        EV_Wait(10);
        EV_ClrFace(player);
        EV_SetFace(player, (char*)0x851518);
        EV_SerifPlay(587);
        EV_Msg((EV0020_MsgTbl[TextLanguage])[0]);
        EV_Wait(70);
        EV_CameraPos(1, 0, -400.47, 33.889999, -6.3499999);
        EV_CameraAng(1, 0, 474, 42342, 0);
        EV_CameraPos(1, 60, -368.01001, 33.59, -0.49000001);
        EV_CameraAng(1, 60, 1689, 15568, 0);
        EV_Wait(30);
        EV_SerifPlay(588);
        EV_ClrFace(player);
        EV_SetFace(player, (char*)0x7DDEA4);
        EV_MsgW(0, (EV0020_MsgTbl[TextLanguage])[1]);
        EV_Wait(30);
        EV_MsgClose();
        EV_MsgClose();
        EV_CameraPos(1, 60, -370.10001, 31.0, -2.55);
        EV_CameraAng(1, 60, 7898, 16230, 0);
        EV_Wait(60);
        EV_CameraPos(1, 500, -470.37, 152.22, -43.990002);
        EV_CameraAng(1, 500, 8666, 16486, 0);
        EV_Wait(250);
        EventSe_Play(1, 110, 1800);
        EV_FadeToWhite(60, 30, 0);
        EV_Wait(90);
    }
    else if (a1 != 2)
    {
        return;
    }
    EV_FreeObject(&EV0020_TikalBall);
    stopObjectAll();
    EV_CameraChaseFree();
    EV_CameraTargetFree();
    EventSe_Close();
    EV_InitPlayer(0);
    EV_CameraOff();
    EV_PadOn();
    if (EV0020_TikalBall)
    {
        FreeTask(EV0020_TikalBall);
        EV0020_TikalBall = 0;
    }
    EV_FreeFadeToWhite();
}