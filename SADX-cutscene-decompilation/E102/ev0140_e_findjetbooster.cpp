#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0140[] = { 0 };

void ev0140_e_findjetbooster(int state)
{
    switch(state){
    case 1:
        EV_CameraOn();
        EV_PadOff();
        EV_CanselOn();
        BGM_Play(MusicIDs_egcarer1);
        EV_SerifPlay(1270);
        EV_Msg(msgTbl_ev0140[TextLanguage][0]); //"\aUh, uh, testing 1, 2, 3..."
        EV_SerifPlay(1271);
        EV_Msg(msgTbl_ev0140[TextLanguage][1]); //"\aGamma!\nGet ready for battle instruct"...
        EV_SerifPlay(1272);
        EV_MsgW(70, msgTbl_ev0140[TextLanguage][2]); //"\aGet the Jet Booster from \nthe ammuni"...
        EV_Msg(msgTbl_ev0140[TextLanguage][3]); //"\aand get up to the deck.\nThe ammuniti"...
        EV_SerifWait();
        EV_MsgCls();
        break;
    case 2:
        EV_CameraOff();
        EV_PadOn();
        break;
    }
}