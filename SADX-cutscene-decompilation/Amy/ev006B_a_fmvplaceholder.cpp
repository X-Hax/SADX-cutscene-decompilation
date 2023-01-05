#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev006B[] = { 0 };

void ev006B_a_fmvplaceholder(int state)
{
    switch(state){
    case 1:
        EV_MsgW(90, (char*)"\aev006B Crash Movie\nNot ready yet."); // Original: "墜落ムービー\nまだできていません。".
        break;
    }
}