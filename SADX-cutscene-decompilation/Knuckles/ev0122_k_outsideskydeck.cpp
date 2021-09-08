#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0122[] = { 0 };

void ev0122_k_outsideskydeck(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        BGM_Play(MusicIDs_egcarer1);
        EV_SerifPlay(1130);
        EV_SetFace(player, "DD");
        EV_MsgW(60, msgTbl_ev0122[TextLanguage][0]); //"\aI sense the Master Emerald."
        EV_LookPoint(player, -80.0f, -67.0f, 0.0f);
        EV_SerifPlay(1131);
        EV_SetFace(player, "CCDDEDC");
        EV_MsgW(120, msgTbl_ev0122[TextLanguage][1]); //"\aIt can't be far from here."
        EV_MsgCls();
        EV_SerifWait();
        EV_ClrFace(player);
        EV_LookFree(player);
        break;
    case 2:
        EV_InitPlayer(0);
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}