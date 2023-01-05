#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0053[] = { 0 };

void ev0053_t_fmvplaceholder(int state)
{
	switch (state) {
	case 1:
		EV_MsgW(90, (char*)"\aev0053 Crash Movie\nNot ready yet."); // Original: "墜落ムービー\nまだできていません。".
		break;
	}
}