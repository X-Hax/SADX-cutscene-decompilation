#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventList.h"

extern "C"
{

    __declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
    __declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
    {
        //TODO: Figure out how to replace the CutsceneData entry properly lol
        WriteJump((void*)0x6EA520, ev0001_s_intro);
        WriteJump((void*)0x6CA590, ev002B_s_beforechaos0);
        WriteJump((void*)0x6E9E00, ev0002_s_chaos0defeated);
        WriteJump((void*)0x6E8E50, ev0003_s_tailscrash);
        WriteJump((void*)0x6E7720, ev0006_s_poolsidewithtails);
        WriteJump((void*)0x6E6640, ev0007_s_egghornetintro);
        WriteJump((void*)0x6E41B0, ev0008_s_chaos1);
        WriteJump((void*)0x6E3220, ev0009_s_aftercasinopolis);
        WriteJump((void*)0x6E0E00, ev000B_s_beforechaos4);
        WriteJump((void*)0x6DFF20, ev000C_s_afterchaos4);
        WriteJump((void*)0x6DF460, ev000D_s_tornado1);
        WriteJump((void*)0x6DEAC0, ev0011_s_fallingtoSS);
        WriteJump((void*)0x6DD870, ev0012_s_meetingamy);
        WriteJump((void*)0x6DC840, ev0013_s_beforetwinklepark);
        WriteJump((void*)0x6DC430, ev0014_s_aftertwinklepark);
        WriteJump((void*)0x6DBD80, ev0015_s_chasingzero);
        WriteJump((void*)0x6D3640, ev0020_s_mural);
        WriteJump((void*)0x650460, ev0176_s_icestone);
        WriteJump((void*)0x653380, ev0165_s_crystalring);
        WriteJump((void*)0x652E70, ev0166_s_lightshoes);
        WriteJump((void*)0x652760, ev0167_s_ancientlight);
        WriteJump((void*)0x650270, ev0179_s_idcard);
        WriteJump((void*)0x650180, ev017A_s_angelislandwall);
        WriteJump((void*)0x64FE70, ev0180_s_redmountainintro);
    }
}