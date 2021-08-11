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
		CutsceneDataList[0x0001]->Function = ev0001_s_intro;
		CutsceneDataList[0x0002]->Function = ev0002_s_chaos0defeated;
		CutsceneDataList[0x0003]->Function = ev0003_s_tailscrash;
		CutsceneDataList[0x0006]->Function = ev0006_s_poolsidewithtails;
		CutsceneDataList[0x0007]->Function = ev0007_s_egghornetintro;
		CutsceneDataList[0x0008]->Function = ev0008_s_chaos1;
		CutsceneDataList[0x0009]->Function = ev0009_s_aftercasinopolis;
		CutsceneDataList[0x000B]->Function = ev000B_s_beforechaos4;
		CutsceneDataList[0x000C]->Function = ev000C_s_afterchaos4;
		CutsceneDataList[0x000D]->Function = ev000D_s_tornado1;
		CutsceneDataList[0x0011]->Function = ev0011_s_fallingtoSS;
		CutsceneDataList[0x0012]->Function = ev0012_s_meetingamy;
		CutsceneDataList[0x0013]->Function = ev0013_s_beforetwinklepark;
		CutsceneDataList[0x0014]->Function = ev0014_s_aftertwinklepark;
		CutsceneDataList[0x0015]->Function = ev0015_s_chasingzero;
		CutsceneDataList[0x0016]->Function = ev0016_s_zeroboardsec;
		CutsceneDataList[0x0017]->Function = ev0017_s_tailsreunion;
		CutsceneDataList[0x001A]->Function = ev001A_s_eggmantakesbirdie;
		CutsceneDataList[0x001B]->Function = ev001B_s_aftergamma;
		CutsceneDataList[0x001C]->Function = ev001C_s_beforechaos6;
		CutsceneDataList[0x001D]->Function = ev001D_s_afterchaos6;
		CutsceneDataList[0x001E]->Function = ev001E_s_lostworld;
		CutsceneDataList[0x0020]->Function = ev0020_s_mural;
		CutsceneDataList[0x0021]->Function = ev0021_s_enterpast;
		CutsceneDataList[0x0022]->Function = ev0022_s_pastaltar;
		CutsceneDataList[0x0023]->Function = ev0023_s_afterpast;
		CutsceneDataList[0x0024]->Function = ev0024_s_eggviper;
		CutsceneDataList[0x0026]->Function = ev0026_s_outro;
		CutsceneDataList[0x0028]->Function = ev0028_s_sonicvsknuckles;
		CutsceneDataList[0x0029]->Function = ev0029_s_eclanding;
		CutsceneDataList[0x002A]->Function = ev002A_s_casinowake;
		CutsceneDataList[0x002B]->Function = ev002B_s_beforechaos0;
		CutsceneDataList[0x0030]->Function = ev0030_t_intro;
		CutsceneDataList[0x0031]->Function = ev0031_t_emeraldcoast;
		CutsceneDataList[0x0032]->Function = ev0032_t_meetingsonic;
		CutsceneDataList[0x0033]->Function = ev0033_t_egghornet;
		CutsceneDataList[0x0034]->Function = ev0034_t_chaos1;
		CutsceneDataList[0x0035]->Function = ev0035_t_aftercasinopolis;
		CutsceneDataList[0x0038]->Function = ev0038_t_vsknuckles;
		CutsceneDataList[0x0039]->Function = ev0039_t_beforechaos4;
		CutsceneDataList[0x003A]->Function = ev003A_t_afterchaos4;
		CutsceneDataList[0x003B]->Function = ev003B_t_tornado1;
		CutsceneDataList[0x003E]->Function = ev003E_t_flashback;
		CutsceneDataList[0x0040]->Function = ev0040_t_afterflashback;
		CutsceneDataList[0x0042]->Function = ev0042_t_froggyjungle;
		CutsceneDataList[0x0044]->Function = ev0044_t_enterpast;
		CutsceneDataList[0x0045]->Function = ev0045_t_tikal;
		CutsceneDataList[0x0046]->Function = ev0046_t_big;
		CutsceneDataList[0x0047]->Function = ev0047_t_tornado2;
		CutsceneDataList[0x0048]->Function = ev0048_t_sonicreunion;
		CutsceneDataList[0x004B]->Function = ev004B_t_eggmantakesbirdie;
		CutsceneDataList[0x004C]->Function = ev004C_t_escapecarrier;
		CutsceneDataList[0x004D]->Function = ev004D_t_missile;
		CutsceneDataList[0x004E]->Function = ev004E_t_speedhighway;
		CutsceneDataList[0x0050]->Function = ev0050_t_eggwalker;
		CutsceneDataList[0x0051]->Function = ev0051_t_walkerdefeated;
		CutsceneDataList[0x0052]->Function = ev0052_t_outro;
		CutsceneDataList[0x0053]->Function = ev0053_t_fmvplaceholder;
		CutsceneDataList[0x0054]->Function = ev0054_t_eclanding;
		CutsceneDataList[0x0055]->Function = ev0055_t_sandhill;
		CutsceneDataList[0x0056]->Function = ev0056_t_casinowake;
		CutsceneDataList[0x0058]->Function = ev0058_a_preintro;
		CutsceneDataList[0x0060]->Function = ev0060_a_intro1;
		CutsceneDataList[0x0061]->Function = ev0061_a_intro2;
		CutsceneDataList[0x0062]->Function = ev0062_a_meetsonic;
		CutsceneDataList[0x0063]->Function = ev0063_a_twinklepark;
		CutsceneDataList[0x0064]->Function = ev0064_a_kidnapped;
		CutsceneDataList[0x0065]->Function = ev0065_a_prison;
		CutsceneDataList[0x0066]->Function = ev0066_a_hotshelter;
		CutsceneDataList[0x0067]->Function = ev0067_a_past;
		CutsceneDataList[0x0068]->Function = ev0068_a_tikal;
		CutsceneDataList[0x0080]->Function = ev0080_k_intro;
		CutsceneDataList[0x0082]->Function = ev0082_k_beginhunt;
		CutsceneDataList[0x0083]->Function = ev0083_k_casinopolis;
		CutsceneDataList[0x0084]->Function = ev0084_k_pastfirst;
		CutsceneDataList[0x0085]->Function = ev0085_k_tikalfather;
		CutsceneDataList[0x0086]->Function = ev0086_k_leavepastfirst;
		CutsceneDataList[0x0087]->Function = ev0087_k_chaos2;
		CutsceneDataList[0x0088]->Function = ev0088_k_eggmantricksknuckles;
		CutsceneDataList[0x0089]->Function = ev0089_k_chasesonic;
		CutsceneDataList[0x008A]->Function = ev008A_k_vssonic;
		CutsceneDataList[0x008B]->Function = ev008B_k_chaos4;
		CutsceneDataList[0x008C]->Function = ev008C_k_afterchaos4;
		CutsceneDataList[0x008D]->Function = ev008D_k_lostpast;
		CutsceneDataList[0x008E]->Function = ev008E_k_pastsecond;
		CutsceneDataList[0x008F]->Function = ev008F_k_tikalaltar;
		CutsceneDataList[0x0091]->Function = ev0091_k_leavepastsecond;
		CutsceneDataList[0x0092]->Function = ev0092_k_followgamma;
		CutsceneDataList[0x0094]->Function = ev0094_k_boardec;
		CutsceneDataList[0x0095]->Function = ev0095_k_gotlastpieces;
		CutsceneDataList[0x0096]->Function = ev0096_k_pastthird;
		CutsceneDataList[0x0097]->Function = ev0097_k_tikalfire;
		CutsceneDataList[0x0098]->Function = ev0098_k_leavepastthird;
		CutsceneDataList[0x0099]->Function = ev0099_k_beforechaos6;
		CutsceneDataList[0x009A]->Function = ev009A_k_glubglub;
		CutsceneDataList[0x009B]->Function = ev009B_k_afterchaos6;
		CutsceneDataList[0x009C]->Function = ev009C_k_fmvplaceholder;
		CutsceneDataList[0x009D]->Function = ev009D_k_restoreme;
		CutsceneDataList[0x009F]->Function = ev009F_k_outro;
		CutsceneDataList[0x00A0]->Function = ev00A0_k_eggmanhotel;
		CutsceneDataList[0x00B0]->Function = ev00B0_e_intro;
		CutsceneDataList[0x00B1]->Function = ev00B1_e_finalegg;
		CutsceneDataList[0x00B2]->Function = ev00B2_e_afterfinalegg;
		CutsceneDataList[0x00B3]->Function = ev00B3_e_uselessmachine;
		CutsceneDataList[0x00B4]->Function = ev00B4_e_e101;
		CutsceneDataList[0x00B5]->Function = ev00B5_e_betadefeated;
		CutsceneDataList[0x00B7]->Function = ev00B7_e_fanfare;
		CutsceneDataList[0x00B8]->Function = ev00B8_e_emeraldcoast;
		CutsceneDataList[0x00B9]->Function = ev00B9_e_past;
		CutsceneDataList[0x00BA]->Function = ev00BA_e_tikal;
		CutsceneDataList[0x00BB]->Function = ev00BB_e_deliverfrog;
		CutsceneDataList[0x00BC]->Function = ev00BC_e_enterwrongroom;
		CutsceneDataList[0x00BD]->Function = ev00BD_e_e101factory;
		CutsceneDataList[0x00BE]->Function = ev00BE_e_exitwrongroom;
		CutsceneDataList[0x00BF]->Function = ev00BF_e_prison;
		CutsceneDataList[0x00C0]->Function = ev00C0_e_reportrear;
		CutsceneDataList[0x00C1]->Function = ev00C1_e_sonic;
		CutsceneDataList[0x00C2]->Function = ev00C2_e_escapecarrier;
		CutsceneDataList[0x00C3]->Function = ev00C3_e_objectivechanged;
		CutsceneDataList[0x00C5]->Function = ev00C5_e_rememberbros;
		CutsceneDataList[0x00C7]->Function = ev00C7_e_outro;
		CutsceneDataList[0x0100]->Function = ev0100_s_ecafterlanding;
		CutsceneDataList[0x0101]->Function = ev0101_s_ecfools;
		CutsceneDataList[0x0102]->Function = ev0102_s_ecaftertransforming;
		CutsceneDataList[0x0103]->Function = ev0103_s_skydeck;
		CutsceneDataList[0x0104]->Function = ev0104_s_afterskydeck;
		CutsceneDataList[0x0106]->Function = ev0106_s_originalshape;
		CutsceneDataList[0x0107]->Function = ev0107_s_alertcancelled;
		CutsceneDataList[0x0110]->Function = ev0110_t_ecafterlanding;
		CutsceneDataList[0x0111]->Function = ev0111_t_ecfools;
		CutsceneDataList[0x0112]->Function = ev0112_t_ecaftertransforming;
		CutsceneDataList[0x0113]->Function = ev0113_t_skydeck;
		CutsceneDataList[0x0114]->Function = ev0114_t_afterskydeck;
		CutsceneDataList[0x0120]->Function = ev0120_k_ectransform1;
		CutsceneDataList[0x0121]->Function = ev0121_k_ectransform2;
		CutsceneDataList[0x0122]->Function = ev0122_k_outsideskydeck;
		CutsceneDataList[0x0140]->Function = ev0140_e_findjetbooster;
		CutsceneDataList[0x0141]->Function = ev0141_e_hotshelter;
		CutsceneDataList[0x0142]->Function = ev0142_e_betamk2;
		CutsceneDataList[0x0165]->Function = ev0165_s_crystalring;
		CutsceneDataList[0x0166]->Function = ev0166_s_lightshoes;
		CutsceneDataList[0x0167]->Function = ev0167_s_ancientlight;
		CutsceneDataList[0x0168]->Function = ev0168_t_jetanklet;
		CutsceneDataList[0x0169]->Function = ev0169_t_rhythmbadge;
		CutsceneDataList[0x016A]->Function = ev016A_k_fightgloves;
		CutsceneDataList[0x016B]->Function = ev016B_k_shovelclaw;
		CutsceneDataList[0x016E]->Function = ev016E_e_laserblaster;
		CutsceneDataList[0x016F]->Function = ev0016F_e_jetbooster;
		CutsceneDataList[0x0176]->Function = ev0176_s_icestone;
		CutsceneDataList[0x0177]->Function = ev0177_t_icestone;
		CutsceneDataList[0x0179]->Function = ev0179_s_idcard;
		CutsceneDataList[0x017A]->Function = ev017A_s_angelislandwall;
		CutsceneDataList[0x017B]->Function = ev017B_t_angelislandwall;
		CutsceneDataList[0x0180]->Function = ev0180_s_redmountainintro;

		//60 FPS faces
		//for (int i = 0; i < faceTable_Length; i++) faceTable[i].nbFrame = faceTable[i].nbFrame * 2;
	}
}