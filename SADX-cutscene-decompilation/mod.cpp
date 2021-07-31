#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventList.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		CutsceneDataList_[0x0001]->Function = ev0001_s_intro;
		CutsceneDataList_[0x0002]->Function = ev0002_s_chaos0defeated;
		CutsceneDataList_[0x0003]->Function = ev0003_s_tailscrash;
		CutsceneDataList_[0x0006]->Function = ev0006_s_poolsidewithtails;
		CutsceneDataList_[0x0007]->Function = ev0007_s_egghornetintro;
		CutsceneDataList_[0x0008]->Function = ev0008_s_chaos1;
		CutsceneDataList_[0x0009]->Function = ev0009_s_aftercasinopolis;
		CutsceneDataList_[0x000B]->Function = ev000B_s_beforechaos4;
		CutsceneDataList_[0x000C]->Function = ev000C_s_afterchaos4;
		CutsceneDataList_[0x000D]->Function = ev000D_s_tornado1;
		CutsceneDataList_[0x0011]->Function = ev0011_s_fallingtoSS;
		CutsceneDataList_[0x0012]->Function = ev0012_s_meetingamy;
		CutsceneDataList_[0x0013]->Function = ev0013_s_beforetwinklepark;
		CutsceneDataList_[0x0014]->Function = ev0014_s_aftertwinklepark;
		CutsceneDataList_[0x0015]->Function = ev0015_s_chasingzero;
		CutsceneDataList_[0x0016]->Function = ev0016_s_zeroboardsec;
		CutsceneDataList_[0x0017]->Function = ev0017_s_tailsreunion;
		CutsceneDataList_[0x001A]->Function = ev001A_s_eggmantakesbirdie;
		CutsceneDataList_[0x001B]->Function = ev001B_s_aftergamma;
		CutsceneDataList_[0x001C]->Function = ev001C_s_beforechaos6;
		CutsceneDataList_[0x001D]->Function = ev001D_s_afterchaos6;
		CutsceneDataList_[0x001E]->Function = ev001E_s_lostworld;
		CutsceneDataList_[0x0020]->Function = ev0020_s_mural;
		CutsceneDataList_[0x0021]->Function = ev0021_s_enterpast;
		CutsceneDataList_[0x0022]->Function = ev0022_s_pastaltar;
		CutsceneDataList_[0x0023]->Function = ev0023_s_afterpast;
		CutsceneDataList_[0x0024]->Function = ev0024_s_eggviper;
		CutsceneDataList_[0x0026]->Function = ev0026_s_outro;
		CutsceneDataList_[0x0028]->Function = ev0028_s_sonicvsknuckles;
		CutsceneDataList_[0x0029]->Function = ev0029_s_eclanding;
		CutsceneDataList_[0x002A]->Function = ev002A_s_casinowake;
		CutsceneDataList_[0x002B]->Function = ev002B_s_beforechaos0;
		CutsceneDataList_[0x0030]->Function = ev0030_t_intro;
		CutsceneDataList_[0x0031]->Function = ev0031_t_emeraldcoast;
		CutsceneDataList_[0x0032]->Function = ev0032_t_meetingsonic;
		CutsceneDataList_[0x0033]->Function = ev0033_t_egghornet;
		CutsceneDataList_[0x0034]->Function = ev0034_t_chaos1;
		CutsceneDataList_[0x0035]->Function = ev0035_t_aftercasinopolis;
		CutsceneDataList_[0x0038]->Function = ev0038_t_vsknuckles;
		CutsceneDataList_[0x0039]->Function = ev0039_t_beforechaos4;
		CutsceneDataList_[0x003A]->Function = ev003A_t_afterchaos4;
		CutsceneDataList_[0x003B]->Function = ev003B_t_tornado1;
		CutsceneDataList_[0x003E]->Function = ev003E_t_flashback;
		CutsceneDataList_[0x0040]->Function = ev0040_t_afterflashback;
		CutsceneDataList_[0x0042]->Function = ev0042_t_froggyjungle;
		CutsceneDataList_[0x0044]->Function = ev0044_t_enterpast;
		CutsceneDataList_[0x0045]->Function = ev0045_t_tikal;
		CutsceneDataList_[0x0046]->Function = ev0046_t_big;
		CutsceneDataList_[0x0047]->Function = ev0047_t_tornado2;
		CutsceneDataList_[0x0048]->Function = ev0048_t_sonicreunion;
		CutsceneDataList_[0x004B]->Function = ev004B_t_eggmantakesbirdie;
		CutsceneDataList_[0x004C]->Function = ev004C_t_escapecarrier;
		CutsceneDataList_[0x004D]->Function = ev004D_t_missile;
		CutsceneDataList_[0x004E]->Function = ev004E_t_speedhighway;
		CutsceneDataList_[0x0050]->Function = ev0050_t_eggwalker;
		CutsceneDataList_[0x0051]->Function = ev0051_t_walkerdefeated;
		CutsceneDataList_[0x0052]->Function = ev0052_t_outro;
		CutsceneDataList_[0x0053]->Function = ev0053_t_fmvplaceholder;
		CutsceneDataList_[0x0054]->Function = ev0054_t_eclanding;
		CutsceneDataList_[0x0055]->Function = ev0055_t_sandhill;
		CutsceneDataList_[0x0056]->Function = ev0056_t_casinowake;
		CutsceneDataList_[0x0080]->Function = ev0080_k_intro;
		CutsceneDataList_[0x0082]->Function = ev0082_k_beginhunt;
		CutsceneDataList_[0x0083]->Function = ev0083_k_casinopolis;
		CutsceneDataList_[0x0084]->Function = ev0084_k_pastfirst;
		CutsceneDataList_[0x0085]->Function = ev0085_k_tikalfather;
		CutsceneDataList_[0x0086]->Function = ev0086_k_leavepastfirst;
		CutsceneDataList_[0x0087]->Function = ev0087_k_chaos2;
		CutsceneDataList_[0x0088]->Function = ev0088_k_eggmantricksknuckles;
		CutsceneDataList_[0x0089]->Function = ev0089_k_chasesonic;
		CutsceneDataList_[0x008A]->Function = ev008A_k_vssonic;
		CutsceneDataList_[0x008B]->Function = ev008B_k_chaos4;
		CutsceneDataList_[0x008C]->Function = ev008C_k_afterchaos4;
		CutsceneDataList_[0x008D]->Function = ev008D_k_lostpast;
		CutsceneDataList_[0x008E]->Function = ev008E_k_pastsecond;
		CutsceneDataList_[0x008F]->Function = ev008F_k_tikalaltar;
		CutsceneDataList_[0x0091]->Function = ev0091_k_leavepastsecond;
		CutsceneDataList_[0x0092]->Function = ev0092_k_followgamma;
		CutsceneDataList_[0x0094]->Function = ev0094_k_boardec;
		CutsceneDataList_[0x0095]->Function = ev0095_k_gotlastpieces;
		CutsceneDataList_[0x0096]->Function = ev0096_k_pastthird;
		CutsceneDataList_[0x0097]->Function = ev0097_k_tikalfire;
		CutsceneDataList_[0x0098]->Function = ev0098_k_leavepastthird;
		CutsceneDataList_[0x0099]->Function = ev0099_k_beforechaos6;
		CutsceneDataList_[0x009A]->Function = ev009A_k_glubglub;
		CutsceneDataList_[0x009B]->Function = ev009B_k_afterchaos6;
		CutsceneDataList_[0x009C]->Function = ev009C_k_fmvplaceholder;
		CutsceneDataList_[0x009D]->Function = ev009D_k_restoreme;
		CutsceneDataList_[0x009F]->Function = ev009F_k_outro;
		CutsceneDataList_[0x00A0]->Function = ev00A0_k_eggmanhotel;
		CutsceneDataList_[0x00B0]->Function = ev00B0_e_intro;
		CutsceneDataList_[0x00B1]->Function = ev00B1_e_finalegg;
		CutsceneDataList_[0x00B2]->Function = ev00B2_e_afterfinalegg;
		CutsceneDataList_[0x00B3]->Function = ev00B3_e_uselessmachine;
		CutsceneDataList_[0x00B4]->Function = ev00B4_e_e101;
		CutsceneDataList_[0x00B5]->Function = ev00B5_e_betadefeated;
		CutsceneDataList_[0x00B7]->Function = ev00B7_e_fanfare;
		CutsceneDataList_[0x00B8]->Function = ev00B8_e_emeraldcoast;
		CutsceneDataList_[0x00B9]->Function = ev00B9_e_past;
		CutsceneDataList_[0x00BA]->Function = ev00BA_e_tikal;
		CutsceneDataList_[0x00BB]->Function = ev00BB_e_deliverfrog;
		CutsceneDataList_[0x00BC]->Function = ev00BC_e_enterwrongroom;
		CutsceneDataList_[0x00BD]->Function = ev00BD_e_e101factory;
		CutsceneDataList_[0x0100]->Function = ev0100_s_ecafterlanding;
		CutsceneDataList_[0x0101]->Function = ev0101_s_ecfools;
		CutsceneDataList_[0x0102]->Function = ev0102_s_ecaftertransforming;
		CutsceneDataList_[0x0103]->Function = ev0103_s_skydeck;
		CutsceneDataList_[0x0104]->Function = ev0104_s_afterskydeck;
		CutsceneDataList_[0x0106]->Function = ev0106_s_originalshape;
		CutsceneDataList_[0x0107]->Function = ev0107_s_alertcancelled;
		CutsceneDataList_[0x0110]->Function = ev0110_t_ecafterlanding;
		CutsceneDataList_[0x0111]->Function = ev0111_t_ecfools;
		CutsceneDataList_[0x0112]->Function = ev0112_t_ecaftertransforming;
		CutsceneDataList_[0x0113]->Function = ev0113_t_skydeck;
		CutsceneDataList_[0x0114]->Function = ev0114_t_afterskydeck;
		CutsceneDataList_[0x0120]->Function = ev0120_k_ectransform1;
		CutsceneDataList_[0x0121]->Function = ev0121_k_ectransform2;
		CutsceneDataList_[0x0122]->Function = ev0122_k_outsideskydeck;
		CutsceneDataList_[0x0165]->Function = ev0165_s_crystalring;
		CutsceneDataList_[0x0166]->Function = ev0166_s_lightshoes;
		CutsceneDataList_[0x0167]->Function = ev0167_s_ancientlight;
		CutsceneDataList_[0x0168]->Function = ev0168_t_jetanklet;
		CutsceneDataList_[0x0169]->Function = ev0169_t_rhythmbadge;
		CutsceneDataList_[0x016A]->Function = ev016A_k_fightgloves;
		CutsceneDataList_[0x016B]->Function = ev016B_k_shovelclaw;
		CutsceneDataList_[0x0176]->Function = ev0176_s_icestone;
		CutsceneDataList_[0x0177]->Function = ev0177_t_icestone;
		CutsceneDataList_[0x0179]->Function = ev0179_s_idcard;
		CutsceneDataList_[0x017A]->Function = ev017A_s_angelislandwall;
		CutsceneDataList_[0x017B]->Function = ev017B_t_angelislandwall;
		CutsceneDataList_[0x0180]->Function = ev0180_s_redmountainintro;

		//60 FPS faces
		//for (int i = 0; i < faceTable_Length; i++) faceTable[i].nbFrame = faceTable[i].nbFrame * 2;
	}
}