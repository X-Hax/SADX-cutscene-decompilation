#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0058[] = { 0 };

void ev0058_a_preintro(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        KURAYAMI = 0;
        EV_CanselOn();
        EV_Wait(1);
        SetBankDir(84);
        EventSe_Init(5);
        EV_InitPlayer(0);
        EV_PadOff();
        KURAYAMI = COverlayCreate(1.0, 0.0, 0.0, 0.0, 0.0);
        EV_SetPos(player, 19.0, -1695.0, 2850.0);
        EV_SetAng(player, 0, 0, 0);
        EV_Wait(50);
        EventSe_Stop(0);
        EventSe_Stop(1);
        EV_SetPos(player, 19.0, -1695.0, 2850.0);
        EV_SetAng(player, 0, 0, 0);
        break;
    case 2:
        EV_SetPos(player, 19.0, -1695.0, 2850.0);
        EV_SetAng(player, 0, 0, 0);
        EV_CameraOff();
        EV_PadOn();
        EV_InitPlayer(0);
        EventSe_Close();
        if (KURAYAMI)
        {
            FreeTask(KURAYAMI);
            KURAYAMI = 0;
        }
        break;
    }
}