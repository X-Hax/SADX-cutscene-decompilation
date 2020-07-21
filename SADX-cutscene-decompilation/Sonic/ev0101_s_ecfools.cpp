#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0101_s_ecfools(int state)
{
	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_eggmbl23);
		EV_CameraPos(0, 0, -537.96002f, 623.21997f, -1462.91f);
		EV_CameraAng(0, 0, 64896, 34861, 62464);
		EV_CameraPos(0, 300, -123.0f, 1000.0f, -706.0f);
		EV_CameraAng(0, 300, 64896, 34861, 64512);
		EV_SerifPlay(1516);
		EV_MsgW(60, msgTbl_ev0101[TextLanguage][0]); //"\aDon't get too many ideas, \nyou fools"...
		EV_SerifWait();
		EV_Wait(50);
		EV_SerifPlay(1517);
		EV_Msg(msgTbl_ev0101[TextLanguage][1]); //"\aYou haven't seen the power \nthis ves"...
		EV_Wait(90);
		EV_CameraPos(0, 0, -64.620003f, 766.69f, -134.78999f);
		EV_CameraAng(0, 0, 1152, 33325, 64521);
		EV_CameraPos(0, 180, 68.620003f, 780.69f, -143.78999f);
		EV_CameraAng(0, 180, 1152, 33325, 0);
		EV_Wait(90);
		EV_SerifPlay(1518);
		EV_MsgW(60, msgTbl_ev0101[TextLanguage][2]); //"\aGet a load of this!"
		EV_Wait(120);
		EV_MsgCls();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}