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
        WriteJump((void*)0x6D3640, ev0020_s_mural);
       
    }
}