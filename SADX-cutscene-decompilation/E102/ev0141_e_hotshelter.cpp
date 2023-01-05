#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0141[] = { 0 };

void ev0141_e_hotshelter(int state)
{
    switch(state){
    case 1:
        player = EV_GetPlayer(0);
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        BGM_Play(MusicIDs_egcarer2);
        EV_CameraPosORY(0, 0, player, -10.0f, 3.0f, 15.0f);
        EV_CameraTargetObj(0, 0, player, 0.0f, 15.0f, 0.0f, 0);
        EV_CameraPosORY(0, 960, player, 10.0f, 3.0f, 15.0f);
        EV_SerifPlay(1307);
        EV_Msg(msgTbl_ev0141[TextLanguage][0]); //"\aE-series data.   Beginning search."
        EV_SerifWait();
        EV_Msg(msgTbl_ev0141[TextLanguage][1]); //"\a......"
        EV_Wait(120);
        EV_SerifPlay(1308);
        EV_Msg(msgTbl_ev0141[TextLanguage][2]); //"\aAccessing data…"
        EV_SerifPlay(1309);
        EV_Msg(msgTbl_ev0141[TextLanguage][3]); //"\aHot Shelter: \nE-series location conf"...
        EV_SerifPlay(1310);
        EV_Msg(msgTbl_ev0141[TextLanguage][4]); //"\aUnlocking Hot Shelter sector, now."
        EV_CameraPos(0, 60,
            player->twp->pos.x,
            player->twp->pos.y + 20.0f,
            player->twp->pos.z - 40.0f);
        EV_CameraTargetPos(1, 1, 0.0f, 733.0f, 536.0f, 0.0f);
        EV_Wait(1);
        EV_SerifWait();
        EV_MsgClose();
        break;
    case 2: 
        EV_CameraPos(0, 1,
            player->twp->pos.x,
            player->twp->pos.y + 20.0f,
            player->twp->pos.z - 40.0f);
        EV_CameraTargetPos(1, 1, 0.0f, 733.0f, 536.0f, 0.0f);
        EV_Wait(1);
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}