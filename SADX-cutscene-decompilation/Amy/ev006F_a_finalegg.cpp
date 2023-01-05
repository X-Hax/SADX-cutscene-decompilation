#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev006F[] = {
    (char*)("VER2_WING"), & VER2_WING_TEXLIST,
	0
};

void ev006F_a_finalegg(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        EventSe_Init(1);
        SetBankDir(78);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_InitPlayer(0);
        bird = SetEventBirdie0();
        EV_SetPos(bird, 174.92f, -160.97f, 522.31f);
        EV_SetAng(bird, 0, 0x8000, 0);
        EV_Wait(1);
        EV_SetPos(bird, 174.92f, -155.97f, 522.31f);
        EV_SetAng(bird, 0, 0x8000, 0);
        EV_SetMode(bird, 0);
        EV_ClrAction(bird);
        EV_SetAction(bird, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
        EV_SetPos(player, 169.87f, -167.00999f, 516.03003f);
        EV_SetAng(player, 0, 0x8000, 0);
        EV_Wait(1);
        EV_CameraPos(0, 0, 109.88f, -138.07001f, 410.57001f);
        EV_CameraAng(0, 0, 0xF993, 0x9A66, 0);
        EV_CameraPos(0, 100, 109.31f, -144.0f, 409.82001f);
        EV_CameraAng(0, 100, 0xF993, 0x9A66, 0);
        EV_Wait(1);
        //EV_ClrAction(EV_GetPlayer(1)); //Probably meant for Amy but fed the wrong player slot. Does nothing, because Amy isn't running a SetAction animation yet.
        EV_SetAction(player, &action_a_a0003_amy, &AMY_TEXLIST, 0.30000001f, 1, 8);
        EV_ClrFace(player);
        EV_SetFace(player, "AALAALAALAAALALAAAL");
        EV_CreatePlayer(2, EggrobForEvent0, 170.0f, 60.98f, 550.0f, 0, 0x5982, 0);
        EV_Wait(1);
        zero = EV_GetPlayer(2);
        EV_SetPos(zero, 170.0f, 70.980003f, 550.0f);
        EV_SetAng(zero, 0, 0x8000, 0);
        EventSe_Play(0, 1339, 1800);
        EventSe_Pitch(0, 8000, 1);
        EventSe_Volume(0, -100, 1);
        EV_Wait(1);
        EventSe_Pitch(0, -8000, 80);
        EventSe_Volume(0, 80, 80);
        EV_Wait(50);
        EV_CameraPos(0, 0, 181.42f, -132.98f, 559.12f);
        EV_CameraAng(0, 0, 0xE793, 0x766, 0);
        EV_Wait(10);
        EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 8);
        EV_Wait(20);
        EventSe_Stop(0);
        EventSe_Oneshot(297, 0, 0, 0);
        EV_Wait(40);
        EV_SetAction(player, &action_a_a0803_amy, &AMY_TEXLIST, 1.0f, 0, 0);
        EV_CameraPos(0, 0, 166.25f, -159.39999f, 505.98999f);
        EV_CameraAng(0, 0, 0xF793, 0x8F66, 0);
        EV_Wait(25);
        EV_SetAction(player, &action_a_a0804_amy, &AMY_TEXLIST, 1.0f, 1, 0);
        EV_Wait(40);
        EV_SetAction(player, &action_a_a0805_amy, &AMY_TEXLIST, 1.0f, 0, 0);
        EV_ClrFace(player);
        EV_SetFace(player, "OOOOO");
        EV_SerifPlay(980);
        EV_MsgW(0, msgTbl_ev006F[TextLanguage][0]); //"\aNot you again!"
        EV_WaitAction(player);
        moveObject(bird, 174.92f, -155.97f, 522.31f, 175.95f, -155.97f, 492.07999f, 60);
        EV_Wait(1);
        EV_CameraPos(0, 0, 177.28f, -162.59f, 480.70999f);
        EV_CameraAng(0, 0, 0x293, 0x6E66, 0xA00);
        EV_ClrAction(player);
        EV_SetAction(player, AMY_ACTIONS[44], &AMY_TEXLIST, 2.0f, 1, 0);
        EV_MovePoint2(player, 170.0f, -167.0f, 490.0f, 2.0f, 0.059999999f);
        EV_Wait(40);
        EV_MsgClose();
        EV_WaitMove(player);
        //EV_MoveFree(player); //This line is useless because it can't cancel a move command it's already been forced to finish with WaitMove.
        EV_ClrFace(player);
        stopObject(bird);
        break;
    case 2:
        EventSe_Close();
        stopObject(bird);
        EV_FreeObject(&bird);
        EV_InitPlayer(0);
        EV_InitPlayer(2);
        EV_MoveFree(player);
        EV_RemovePlayer(2);
        EV_SetPos(player, 170.0f, -167.0f, 490.0f);
        EV_SetAng(player, 0, 0x8000, 0);
        EV_Wait(1);
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}