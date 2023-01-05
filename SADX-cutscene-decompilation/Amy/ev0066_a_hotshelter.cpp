#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0066[] = { 0 };

void ev0066_a_hotshelter(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        tikal = 0;
        EventSe_Init(1);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        EV_InitPlayer(0);
        createModel(0.0f, 0.0f, 0.0f, 0, 0, 0, 0.5f, 0.5f, 0.5f, &object_baloon_esc_baloon_esc_baloon, &OBJ_REGULAR_TEXLIST, 0);
        EV_SetPos(player, 7.0f, 545.0f, -3613.0f);
        EV_SetAng(player, 0, 0x38A6, 0);
        EV_Wait(1);
        EV_ClrAction(player);
        EV_SetMode(player, 0);
        EV_SetAction(player, AMY_ACTIONS[66], &AMY_TEXLIST, 0.5f, 1, 8);
        moveObjectRightHand(getobjModel(0), 0, -0.5f, -1.0f, -0.5f, 380);
        EV_ClrPath(player);
        EV_SetPath(player, &epathtag_ev0066_amy, 0.0012000001f, 2);
        EV_Wait(1);
        BGM_Play(MusicIDs_tical);
        EV_CameraChaseFree();
        EV_CameraTargetFree();
        EV_CameraTargetObj(1, 0, player, 5.0f, 5.0f, 0.0f, 0);
        EV_CameraChaseRM(0, 1, player, 12.0f, 0, 47332, 0, 7.0f, 0, 47332, 0, 7.0f);
        EV_Wait(80);
        EV_CameraTargetObj(1, 0, player, 0.0f, 3.0f, 0.0f, 0);
        EV_CameraChaseRM(0, 350, player, 0.0f, -9101, 0, 0, 70.0f, 0x71C, -41869, 0, 30.0f);
        tikal = CTikalLight_Create(
            player->twp->pos.x - 5.1599002f,
            player->twp->pos.y + 200.0f,
            player->twp->pos.z + 0.31999999f);
        EV_SetMode(tikal, 0);
        EV_Wait(50);
        EventSe_Play(0, 760, 1800);
        moveObject(tikal,
            player->twp->pos.x - 30.159901f,
            player->twp->pos.y + 200.0f,
            player->twp->pos.z - 30.32f,
            player->twp->pos.x - 5.1599002f,
            player->twp->pos.y + 80.0f,
            player->twp->pos.z + 0.31999999f,
            100);
        EV_Wait(95);
        moveObject(tikal,
            player->twp->pos.x - 5.1599002f,
            player->twp->pos.y + 5.0f,
            player->twp->pos.z + 0.31999999f,
            player->twp->pos.x - 5.1599002f,
            player->twp->pos.y + 180.0f,
            player->twp->pos.z + 0.31999999f,
            230);
        EV_Wait(1);
        EV_SerifPlay(916);
        EV_Wait(1);
        EV_ClrFace(player);
        EV_SetFace(player, "I");
        EV_CameraTargetObj(1, 0, player, 0.0f, 6.0f, 0.0f, 0);
        EV_CameraChaseRM(0, 200, player, 0.0f, 0, -9101, 0, 10.0f, 0, -18203, 0, 10.0f);
        efWhiteOn2(60, 30, 0);
        EV_Wait(90);
        stopObjectAll();
        EV_ClrPath(player);
        if (tikal)
        {
            FreeTask(tikal);
            tikal = 0;
        }
        deleteModel(0);
        break;
    case 2:
        EventSe_Close();
        EV_ClrPath(player);
        EV_CameraChaseFree();
        EV_CameraTargetFree();
        stopObjectAll();
        if (tikal)
        {
            FreeTask(tikal);
            tikal = 0;
        }
        deleteModel(0);
        EV_InitPlayer(0);
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}