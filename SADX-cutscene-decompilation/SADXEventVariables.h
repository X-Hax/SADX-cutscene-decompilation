#pragma once
#include "SADXModLoader.h"
#include "SADXEventStructs.h"

//Cutscene List
DataArray(CutsceneData_*, CutsceneDataList_, 0x914790, 384);

//Character Faces Table
DataArray(FACETBL, faceTable, 0x91CEC8, 160);

//EntityData1 but it can do the bitwise stuff
DataArray(StupidBitStuff*, playertwp, 0x3B42E10, 8);

//Object variables, see objects.cpp
extern ObjectMaster* B_EME;
extern ObjectMaster* B_OUT;
extern ObjectMaster* BALL;
extern ObjectMaster* BLACK;
extern ObjectMaster* BLACK2;
extern ObjectMaster* BLACKOUT;
extern ObjectMaster* BOY;
extern ObjectMaster* BOY2;
extern ObjectMaster* BOYS_A;
extern ObjectMaster* BROKEN_EGG;
extern ObjectMaster* BROKEN_EGG2;
extern ObjectMaster* BROKEN_EGG4;
extern ObjectMaster* C_EME_P;
extern ObjectMaster* CAP_01;
extern ObjectMaster* cap1;
extern ObjectMaster* CAR;
extern ObjectMaster* CAR2;
extern ObjectMaster* CAR3;
extern ObjectMaster* CAR4;
extern ObjectMaster* CHA;
extern ObjectMaster* CHA2;
extern ObjectMaster* CHA3;
extern ObjectMaster* CHA4;
extern ObjectMaster* CHA5;
extern ObjectMaster* CHA6;
extern ObjectMaster* CHA7;
extern ObjectMaster* CHA8;
extern ObjectMaster* CHA9;
extern ObjectMaster* CHA10;
extern ObjectMaster* CHAOS;
extern ObjectMaster* EC_KAGE;
extern ObjectMaster* egg_amy;
extern ObjectMaster* emerald;
extern ObjectMaster* ev_chaos0;
extern int eq_saved;
extern short equipment;
extern ObjectMaster* FAT;
extern ObjectMaster* FAT_A;
extern ObjectMaster* FAT_B;
extern ObjectMaster* FAT2;	
extern ObjectMaster* FLASH;
extern ObjectMaster* Frog;	
extern ObjectMaster* G_EME;
extern ObjectMaster* GIRL;	
extern ObjectMaster* GIRL2;
extern ObjectMaster* HAND_1;
extern ObjectMaster* HAND_2;
extern ObjectMaster* HAND_3;
extern ObjectMaster* HELI_01;
extern ObjectMaster* hogel;
extern ObjectMaster* IWA;
extern ObjectMaster* IWA2;
extern ObjectMaster* IWA3;
extern ObjectMaster* KOTORI;
extern ObjectMaster* KOUKYU;
extern ObjectMaster* KURAYAMI;
extern ObjectMaster* LADY_A;
extern ObjectMaster* LADY_B;
extern ObjectMaster* LADY_C;
extern ObjectMaster* LADY;
extern ObjectMaster* LADY2;
extern ObjectMaster* Mhand;
extern ObjectMaster* NY_SKY;
extern ObjectMaster* obj_decoy;
extern ObjectMaster* obj_ver2_wing;
extern ObjectMaster* obj_wing1;
extern ObjectMaster* OYAJI_A;
extern ObjectMaster* OYAJI_B;
extern ObjectMaster* OYAJI_C;
extern ObjectMaster* OYAJI;
extern ObjectMaster* OYAJI2;
extern ObjectMaster* p_Chaos0Task;
extern ObjectMaster* PAPA;
extern ObjectMaster* PLANE;
extern ObjectMaster* PAT_01;
extern ObjectMaster* PAT_02;
extern ObjectMaster* PAT_03;
extern ObjectMaster* PAT_04;
extern ObjectMaster* PL_NOR_01;
extern ObjectMaster* PL_NOR_02;
extern ObjectMaster* PL_NOR_03;
extern ObjectMaster* PL_NOR_04;
extern ObjectMaster* PL_NOR_05;
extern ObjectMaster* PL_NOR_07;
extern ObjectMaster* PL_NOR_08;
extern ObjectMaster* pmiles;
extern ObjectMaster* PURPLE;
extern ObjectMaster* R_EME;
extern ObjectMaster* RED;
extern ObjectMaster* SEPIA;
extern ObjectMaster* SMOKE_01;
extern ObjectMaster* SMOKE_02;
extern ObjectMaster* SMOKE;
extern ObjectMaster* SMOKE2;
extern ObjectMaster* SONIC_JUMP;
extern ObjectMaster* SONIC_SKY_2;
extern ObjectMaster* SONIC_02SKY;
extern ObjectMaster* suki1_obj;
extern ObjectMaster* suki2_obj;
extern ObjectMaster* suki1_point;
extern ObjectMaster* suki2_point;
extern ObjectMaster* task_skywalk;
extern ObjectMaster* task_skywalk2;
extern ObjectMaster* W_EME;
extern ObjectMaster* WING;
extern ObjectMaster* WHITE;
extern ObjectMaster* TALES_STEP;
extern ObjectMaster* TAMA_01;
extern ObjectMaster* TAMA_02;
extern ObjectMaster* TAMA_03;
extern ObjectMaster* TAMA_04;
extern ObjectMaster* TAMA_05;
extern ObjectMaster* TAMA_06;
extern ObjectMaster* TAMA_07;
extern ObjectMaster* TAMA_08;
extern ObjectMaster* TAMA_09;
extern ObjectMaster* TAMA_10;
extern ObjectMaster* TAMA_11;
extern ObjectMaster* TAMA_12;
extern ObjectMaster* TAMA_13;
extern ObjectMaster* TAMA_14;
extern ObjectMaster* TAMA_15;
extern ObjectMaster* TAMA_16;
extern ObjectMaster* TAMA_17;
extern ObjectMaster* TAMA_18;
extern ObjectMaster* TAMA_19;
extern ObjectMaster* TAMA_20;
extern ObjectMaster* TEPODON;
extern ObjectMaster* tikal;
extern ObjectMaster* tikalb;
extern ObjectMaster* TR2;
extern ObjectMaster* TR2B;
extern ObjectMaster* zan;

//Character objects
extern ObjectMaster* player;
extern ObjectMaster* sonic;
extern ObjectMaster* tails;
extern ObjectMaster* knuckles;
extern ObjectMaster* amy;
extern ObjectMaster* big;
extern ObjectMaster* e102;
extern ObjectMaster* eggcarrier;
extern ObjectMaster* eggman;
extern ObjectMaster* eggmoble;
extern ObjectMaster* zero;

extern int enableUnusedCode;

//EV0001
DataArray(char, seqVars, 0x3B18808, 512);
DataPointer(NJS_ACTION, action_sspatcar_body, 0x2DC028C);
DataPointer(NJS_ACTION, action_c0_heli_body, 0x2DBD864);
DataPointer(NJS_MOTION**, MODEL_SS_PEOPLE_MOTION, 0x038F6EA4);
DataPointer(NJS_ACTION, action_s_s0089_sonic, 0x03C84A08);
DataPointer(NJS_ACTION, action_s_s0064_sonic, 0x03C84A10);
DataPointer(NJS_ACTION, action_s_s0065_sonic, 0x03C84A18);
DataPointer(NJS_ACTION, action_s_s0066_sonic, 0x03C84A20);
DataPointer(PADREC_DATA_TAG, EV0001_S_JUMP_0, 0x87B1C8);
DataPointer(PADREC_DATA_TAG, EV0001_S_RUN, 0x0087B2F8);
DataPointer(EPATHTAG, epathtag_EV0001_01PT, 0x02C0FE90);
DataPointer(EPATHTAG, epathtag_EV0001_02PT, 0x02C10BD8);
DataPointer(EPATHTAG, epathtag_EV0001_03PT, 0x02C115F0);
DataPointer(EPATHTAG, epathtag_EV0001_04PT, 0x02C121B8);

//EV0002
DataPointer(NJS_ACTION, action_s_s0029_sonic, 0x3C84998);
DataPointer(NJS_ACTION, action_g_g0006_eggman, 0x8A8A9C);

//EV0003
DataPointer(PADREC_DATA_TAG, EV0003S, 0x87AD90);
DataPointer(ObjectMaster*, task_tornado, 0x3C8461C);
DataPointer(NJS_ACTION, action_s_s0032_sonic, 0x3C851F0);
DataPointer(NJS_ACTION, action_s_s0031_sonic, 0x3C851F8);
DataPointer(NJS_ACTION, action_s_s0033_sonic, 0x3C85200);
DataPointer(NJS_ACTION, action_s_s0013_sonic, 0x3C85208);

//EV0006
DataPointer(NJS_ACTION, action_m_m0104cp_m_em_purple, 0x2CF270C);
DataPointer(NJS_ACTION, action_m_m0104_miles, 0x3C848D0);
DataPointer(NJS_ACTION, action_s_s0022_sonic, 0x3C848D8);

//EV0007
DataPointer(NJS_ACTION, action_gm_gm0001_eggmoble, 0x2EEC334);
DataPointer(NJS_ACTION, action_s_s0006_sonic, 0x3C84878);
DataPointer(NJS_ACTION, action_m_m0001_miles, 0x3C848C0);

//EV0008
DataPointer(NJS_POINT2, sukiari1, 0x2C0EC84); //Unofficial
DataPointer(NJS_POINT2, sukiari2, 0x2C0ECA4); //Unofficial
DataPointer(NJS_ACTION, action_s_s0038_sonic, 0x3C84888);
DataPointer(NJS_ACTION, action_s_s0044_sonic, 0x3C84890);
DataPointer(NJS_ACTION, action_s_s0009_sonic, 0x3C84898);
DataPointer(NJS_ACTION, action_s_s0042_sonic, 0x3C848A8);
DataPointer(NJS_ACTION, action_s_s0045_sonic, 0x3C848C8);
DataPointer(NJS_ACTION, action_m_m0136_miles, 0x3C84880);
DataPointer(NJS_ACTION, action_m_m0138_miles, 0x3C848B0);
DataPointer(NJS_ACTION, action_m_m0137_miles, 0x3C848B8);
DataPointer(NJS_ACTION, action_m_m0136d_m_em_purple, 0x2CECB5C);
DataPointer(NJS_ACTION, action_m_em_purple, 0x2CED244);
DataPointer(NJS_ACTION, action_gm_gm0023cp_m_em_purple, 0x3016AB4);
DataPointer(NJS_ACTION, action_gm_gm0020_eggmoble, 0x3018C44);
DataPointer(NJS_ACTION, action_gm_gm0021_eggmoble, 0x3019E5C);
DataPointer(NJS_ACTION, action_gm_gm0022_eggmoble, 0x301B074);
DataPointer(NJS_ACTION, action_gm_gm0023_eggmoble, 0x301C41C);
DataPointer(NJS_ACTION, action_gm_gm0024_eggmoble, 0x301DE94);
DataPointer(NJS_ACTION, action_gm_gm0025_eggmoble, 0x302015C);
DataPointer(NJS_ACTION, action_gm_gm0026_eggmoble, 0x3021854);
DataPointer(NJS_ACTION, action_gm_gm0028_eggmoble, 0x30220EC);

//EV0009
DataPointer(PADREC_DATA_TAG, EV0009S, 0x87852C);
DataPointer(PADREC_DATA_TAG, EV0009M, 0x878648);
DataPointer(NJS_ACTION, action_ce_0001_m_em_white, 0x2D23464);
DataPointer(NJS_ACTION, action_ce_0002_m_em_white, 0x2D2356C);
DataPointer(NJS_ACTION, action_s_s0051_sonic, 0x3C84908);
DataPointer(NJS_ACTION, action_s_s0052_sonic, 0x3C84928);
DataPointer(NJS_ACTION, action_m_m0112_miles, 0x3C84918);

//EV000B
DataPointer(NJS_ACTION, action_s_s0046_sonic, 0x3C84948);
DataPointer(NJS_ACTION, action_s_s9001_sonic, 0x3C84958);
DataPointer(NJS_ACTION, action_s_s9000_sonic, 0x3C84960);
DataPointer(NJS_ACTION, action_s_s0002_sonic, 0x3C84968);
DataPointer(NJS_ACTION, action_k_k0038_knuckles, 0x3C84940);
DataPointer(NJS_ACTION, action_k_k0034_knuckles, 0x3C84950);
DataPointer(NJS_ACTION, action_k_k0033_knuckles, 0x3C84970);
DataPointer(NJS_ACTION, action_k_k0035_knuckles, 0x3C84978);
DataPointer(NJS_ACTION, action_k_k0039_knuckles, 0x3C84980);
DataPointer(NJS_ACTION, action_ce_0003_m_em_blue, 0x2D3E084);
DataPointer(NJS_ACTION, action_ce_0004_m_em_blue, 0x2D3E18C);
DataPointer(NJS_ACTION, action_gm_gm0030cb_m_em_blue, 0x2D3E3F4);
DataPointer(NJS_ACTION, action_gm_gm0032cb_m_em_blue, 0x2D3E84C);
DataPointer(NJS_ACTION, action_ce_0005_m_em_green, 0x2D3FFB4);
DataPointer(NJS_ACTION, action_ce_0006_m_em_green, 0x2D400BC);
DataPointer(NJS_ACTION, action_gm_0030cg_m_em_green, 0x2D40324);
DataPointer(NJS_ACTION, action_gm_gm0032cg_m_em_green, 0x2D4075C);
DataPointer(NJS_ACTION, action_gm_gm0002_eggmoble, 0x2D41A34);
DataPointer(NJS_ACTION, action_gm_gm0030_eggmoble, 0x2D42BBC);
DataPointer(NJS_ACTION, action_gm_gm0032_eggmoble, 0x2D44434);

//EV000C
DataPointer(NJS_OBJECT, object_ecff_bf_s_fbody_bf_s_fbody, 0x24960A8);
DataPointer(NJS_TEXLIST, texlist_ec_light, 0x2BF4F2C);
DataPointer(NJS_ACTION, action_ecff_bf_s_fbody, 0x24983CC);

//EV000D
//DataPointer(NJS_ACTION, action_tr1_s_t1_body, 0x3261BBC); //Original plane pointer. Add & to all references if using this.
DataPointer(NJS_ACTION*, action_tr1_s_t1_body, 0x6BF039); //Pointer to vanilla reference, so DC Characters doesn't break it.
DataPointer(NJS_ACTION, action_s_s0028_sonic, 0x3C853B8);
DataPointer(EPATHTAG, epathtag_E000DTR, 0x2C0E730);
DataPointer(PADREC_DATA_TAG, E000DSS, 0x08778C0);

//EV0011
DataPointer(NJS_ACTION, action_s_s0025_sonic, 0x3C84EC4);
DataPointer(NJS_ACTION, action_s_s0026_sonic, 0x3C84ECC);
DataPointer(NJS_ACTION, action_s_s0024_sonic, 0x3C84ED4);
DataPointer(NJS_ACTION, action_s_s0027_sonic, 0x3C84EDC);

//EV0012
DataPointer(NJS_TEXLIST, VER1_WING_TEXLIST, 0x2F02820);
DataPointer(NJS_ACTION, action_a_a0010_amy, 0x3C84C70);
DataPointer(NJS_ACTION, action_s_s0037_sonic, 0x3C84C78);
DataPointer(NJS_ACTION, action_w_w0121_wing, 0x2F04024);
DataPointer(NJS_ACTION, action_w_w9001_wing, 0x2F0A9AC);

//EV0013
DataPointer(NJS_ACTION, action_a_a0121_amy, 0x3C84C88);
DataPointer(NJS_ACTION, action_s_s0004_sonic, 0x3C848A0);
DataPointer(NJS_ACTION, action_s_s0017_sonic, 0x3C84C80);
DataPointer(NJS_ACTION, action_s_s0001_sonic, 0x3C84C90);
DataPointer(PADREC_DATA_TAG, E0013SS, 0x8766B0);

//EV0016
DataPointer(PADREC_DATA_TAG, EV0016_S_JUMP, 0x875C10);

//EV0017
DataPointer(EPATHTAG, epathtag_TR2_st, 0x2BF4E28);
DataPointer(PADREC_DATA_TAG, EV0017_JUMP, 0x875A34);
//DataPointer(NJS_ACTION, action_tr2a_s_t2b_body, 0x2C0DB54); //Original plane pointer. Add & to all references if using this.
DataPointer(NJS_ACTION*, action_tr2a_s_t2b_body, 0x6B9527); //Pointer to vanilla reference, so DC Characters doesn't break it.
DataPointer(NJS_TEXLIST, tr2_texlist, 0x2BF513C);
DataPointer(NJS_ACTION, action_s_s0058_sonic, 0x3C84C98);

//EV001A
DataPointer(NJS_ACTION, action_a_a0124_amy, 0x3C84840);
DataPointer(NJS_ACTION, action_a_a0001_amy, 0x3C84858);
DataPointer(NJS_ACTION, action_a_a0126_amy, 0x3C84870);
DataPointer(NJS_ACTION, action_w_w0124_wing, 0x2CD021C);
DataPointer(NJS_ACTION, action_w_w9006_wing, 0x2CD2E24);
DataPointer(NJS_ACTION, action_gm_gm0035_eggmoble, 0x2CD594C);
DataPointer(NJS_ACTION, action_gm_gm9000_eggmoble, 0x2CD6904);
DataPointer(NJS_ACTION, action_gm_gm0023cs_m_em_sky, 0x2CD79CC);
DataPointer(PADREC_DATA_TAG, EV001AS3, 0x87532C);
DataPointer(PADREC_DATA_TAG, EV01AS4, 0x8754CC);

//EV001B
DataPointer(NJS_ACTION, action_a_a0002_amy, 0x3C84A80);
DataPointer(NJS_ACTION, action_a_a0003_amy, 0x3C84A98);
DataPointer(NJS_ACTION, action_e_e0004_e102, 0x3C84A70);
DataPointer(NJS_ACTION, action_e_e0003_e102, 0x3C84A88);
DataPointer(NJS_ACTION, action_e_e0005_e102, 0x3C84AA8);
DataPointer(NJS_ACTION, action_e_e0002_e102, 0x3C84AB0);
DataPointer(NJS_ACTION, action_s_s0007_sonic, 0x3C84A78);
DataPointer(NJS_ACTION, action_s_s0005_sonic, 0x3C84A90);
DataPointer(NJS_ACTION, action_s_s0012_sonic, 0x3C84AA0);
DataPointer(NJS_OBJECT, object_sonic_s_r_a5_01_s_r_a5_01, 0x2DD8708);

//EV001C
DataPointer(NJS_ACTION, action_b_b0014_big, 0x3C84A28);
DataPointer(NJS_ACTION, action_b_b0013_big, 0x3C84A30);
DataPointer(NJS_ACTION, action_b_b0012_big, 0x3C84A40);
DataPointer(NJS_ACTION, action_gm_gm0004_eggmoble, 0x2CD393C);
DataPointer(NJS_ACTION, action_gm_gm0003_eggmoble, 0x2DCDB14);
DataPointer(NJS_ACTION, action_f_f0010_frog, 0x301684C);
DataPointer(NJS_ACTION, action_s_s0067_sonic, 0x3C84A38);
DataPointer(NJS_TEXLIST, texlist_big_kaeru, 0x2FF2960);

//EV001D
DataPointer(PADREC_DATA_TAG, EV001D_S_JUMP, 0x873FD8);

//EV001E
DataPointer(NJS_ACTION, action_s_s0021_sonic, 0x3C853C0);
DataPointer(NJS_ACTION, action_s_s0019_sonic, 0x3C853C8);
DataPointer(NJS_ACTION, action_s_s0030_sonic, 0x3C853D0);
DataPointer(NJS_ACTION, action_s_s0020_sonic, 0x3C853D8);
DataPointer(EPATHTAG, epathtag_cube001E_1, 0x2BF46D8);

//EV0021
DataPointer(NJS_ACTION, action_s_s0011_sonic, 0x3C8507C);

//EV0022
DataPointer(NJS_ACTION, action_j_j0007_tikal, 0x2F1CBB4);
DataPointer(NJS_ACTION, action_j_j0012_tikal, 0x2F21B8C);
DataPointer(NJS_ACTION, action_j_j0020_tikal, 0x2F2D344);
DataPointer(NJS_ACTION, action_j_j0023_tikal, 0x2F33DFC);

//EV0023
DataPointer(NJS_ACTION, action_s_s0018_sonic, 0x3C85074);

//EV0024
DataPointer(PADREC_DATA_TAG, e0024s, 0x8734F4);

//EV0026
DataPointer(NJS_ACTION, action_s_s0071_sonic, 0x3C85218);
DataPointer(NJS_ACTION, action_s_s0070_sonic, 0x3C85220);
DataPointer(NJS_ACTION, action_s_s0068_sonic, 0x3C85228);
DataPointer(NJS_MOTION*, motion_m_m0150_miles, 0x3C85234);
DataPointer(NJS_MOTION*, motion_m_m9014_miles, 0x3C8523C);
DataPointer(PADREC_DATA_TAG, EV0026S2, 0x873458);
DataPointer(EPATHTAG, epathtag_cube0026_s2, 0x2BF2A88);
DataPointer(EPATHTAG, epathtag_cube0026_t1, 0x2BF3460);
DataPointer(EPATHTAG, epathtag_cube0026_t2, 0x2BF3E18);

//EV0028
DataPointer(NJS_ACTION, action_s_s0036_sonic, 0x3C85190);
DataPointer(NJS_ACTION, action_s_s0035_sonic, 0x3C851A0);
DataPointer(NJS_ACTION, action_k_k0013_knuckles, 0x3C85198);
DataPointer(NJS_ACTION, action_k_k0012_knuckles, 0x3C851A8);
DataPointer(NJS_ACTION, action_k_k0005_knuckles, 0x3C851B0);
DataPointer(PADREC_DATA_TAG, EV0028_KN_PUNCH, 0x87306C);

//EV0029
DataPointer(NJS_ACTION, action_tr2b_s_tru2_body, 0x32ECE0C);
DataPointer(NJS_TEXLIST, texlist_tr2b_s_tru2_body, 0x32D6548);
DataPointer(EPATHTAG, epathtag_cube0029_2, 0x2BF1F20);

//EV002A
DataPointer(NJS_ACTION, action_s_s0053_sonic, 0x3C827C0);
DataPointer(NJS_ACTION, action_s_s0057_sonic, 0x3C84E34);
DataPointer(NJS_ACTION, action_s_s0054_sonic, 0x3C84E3C);
DataPointer(NJS_ACTION, action_m_m0106_miles, 0x3C827C8);
DataPointer(NJS_ACTION, action_m_m0110_miles, 0x3C84E0C);
DataPointer(NJS_ACTION, action_m_m0131_miles, 0x3C84E14);
DataPointer(NJS_ACTION, action_m_m0108_miles, 0x3C84E24);
DataPointer(NJS_ACTION, action_m_m0130_miles, 0x3C84E2C);
DataPointer(NJS_ACTION, action_m_m0109_miles, 0x3C84E44);
DataPointer(NJS_ACTION, action_m_m0111_miles, 0x3C84E4C);

//EV002B
DataPointer(int, pause_flg, 0x3B28114);
DataPointer(NJS_ACTION, action_mp_10001_POLICE, 0x337E734);
DataPointer(NJS_ACTION, action_mp_10002_POLICE, 0x3380B7C);
DataPointer(NJS_ACTION, action_mp_10003_POLICE, 0x3382FB4);
DataPointer(NJS_ACTION, action_mp_10004_POLICE, 0x338510C);
DataPointer(NJS_ACTION, action_mp_10005_POLICE, 0x3387984);
DataPointer(NJS_ACTION, action_mp_10011_POLICE, 0x338954C);
DataPointer(NJS_ACTION, action_mp_10012_POLICE, 0x338B934);
DataPointer(NJS_ACTION, action_mp_10013_POLICE, 0x338E22C);
DataPointer(NJS_ACTION, action_mp_10015_POLICE, 0x3392554);
DataPointer(NJS_ACTION, action_mp_10016_POLICE, 0x33958DC);
DataPointer(NJS_ACTION, action_mp_10018_POLICE, 0x3398454);
DataPointer(NJS_TEXLIST, texlist_mp_10000_POLICE, 0x3375ED4);
DataPointer(char, efname_eff_regular, 0x2C496C0);
DataPointer(NJS_ACTION, action_yak_02_bullet, 0x339984C);
DataPointer(NJS_ACTION, action_yak_04_bullet, 0x339A7D4);
DataPointer(NJS_TEXLIST, texlist_bullet, 0x339848C);
DataPointer(EPATHTAG, epathtag_EV002B_02NR, 0x2BF1540);
DataPointer(EPATHTAG, epathtag_EV002B_04NR, 0x2BF1618);
DataPointer(EPATHTAG, epathtag_EV002B_07NR, 0x2BF1710);
DataPointer(EPATHTAG, epathtag_EV002B_08NR, 0x2BF17C8);
DataPointer(PADREC_DATA_TAG, EV002B_S_JUMP, 0x8724CC);

//EV0030
DataPointer(EPATHTAG, epathtag_cube0030_19, 0x2BF0090);
DataPointer(EPATHTAG, epathtag_cube0030_14, 0x2BF0D18);
DataPointer(EPATHTAG, epathtag_CUBE0030_4, 0x2BF13B0);

//EV0031
DataPointer(NJS_ACTION, action_m_m0118_miles, 0x3C5E418);
DataPointer(NJS_ACTION, action_m_m0119_miles, 0x3C84DA4);
DataPointer(NJS_ACTION, action_m_m0120_miles, 0x3C84DB4);
DataPointer(NJS_ACTION, action_s_s0055_sonic, 0x3C84D94);
DataPointer(NJS_ACTION, action_s_s0056_sonic, 0x3C84DAC);

//EV0035
DataPointer(NJS_ACTION, action_m_m0105_miles, 0x3C84DBC);
DataPointer(NJS_ACTION, action_m_m9002_miles, 0x3C84DC4);
DataPointer(NJS_ACTION, action_m_m9001_miles, 0x3C84DCC);
DataPointer(PADREC_DATA_TAG, EV0035m, 0x86F470);

//EV0038
DataPointer(NJS_ACTION, action_m_m0103_miles, 0x3C854D4);
DataPointer(PADREC_DATA_TAG, _EV0028_KN_PUNCH, 0x86F0DC);

//EV0039
DataPointer(NJS_ACTION, action_m_m9011_miles, 0x3C854BC);
DataPointer(NJS_ACTION, action_m_m9012_miles, 0x3C854C4);
DataPointer(NJS_ACTION, action_m_m9010_miles, 0x3C854CC);

//EV003B
DataPointer(PADREC_DATA_TAG, E003BSS, 0x86DD8C);
DataPointer(PADREC_DATA_TAG, E003BT, 0x86DE98);

//EV003E
DataPointer(NJS_ACTION, action_m_m0123_miles, 0x3C85494);
DataPointer(NJS_ACTION, action_m_m0122_miles, 0x3C8549C);
DataPointer(NJS_ACTION, action_m_m0121_miles, 0x3C854B4);
DataPointer(EPATHTAG, epathtag_EV003E_RUNNING, 0x2BEEF30);

//EV0040
DataPointer(NJS_ACTION, action_m_m0127_miles, 0x3C84A48);
DataPointer(NJS_ACTION, action_m_m0125_miles, 0x3C84A50);
DataPointer(NJS_ACTION, action_m_m0126_miles, 0x3C84A58);
DataPointer(NJS_ACTION, action_m_m0124_miles, 0x3C84A60);
DataPointer(NJS_ACTION, action_m_m0128_miles, 0x3C854A4);
DataPointer(NJS_ACTION, action_m_m0129_miles, 0x3C854AC);

//EV0042
DataPointer(NJS_ACTION, action_m_em_red, 0x2CBDF44);
DataPointer(NJS_TEXLIST, texlist_m_em_red, 0x2CBCF48);
DataPointer(NJS_ACTION, _action_f_f0001_frog, 0x2CBB4DC);
DataPointer(NJS_TEXLIST, texlist_frog, 0x2DC95D8);
DataPointer(NJS_ACTION, _action_f_f0002_frog, 0x2CBCF34);

//EV0045
DataPointer(NJS_ACTION, action_j_j0003_tikal, 0x30F854C);
DataPointer(NJS_ACTION, action_j_j0013_tikal, 0x3100084);
DataPointer(NJS_ACTION, action_j_j0015_tikal, 0x3103DCC);

//EV0046
DataPointer(NJS_ACTION, action_m_m9004_miles, 0x3C84BAC);
DataPointer(NJS_ACTION, action_b_b0010_big, 0x3C84B9C);
DataPointer(NJS_ACTION, action_f_f0019_frog, 0x2E60694);
DataPointer(NJS_ACTION, action_b_b0003_big, 0x03C84BBC);
DataPointer(NJS_ACTION, action_b_b0004_big, 0x3C84BCC);
DataPointer(NJS_ACTION, action_m_m9007_miles, 0x3C84B94);
DataPointer(NJS_ACTION, action_f_f0024_frog, 0x2E64BBC);
DataPointer(NJS_ACTION, action_m_m9005_miles, 0x3C84BDC);
DataPointer(NJS_ACTION, action_f_f0002_frog, 0x2EA191C);
DataPointer(NJS_ACTION, action_f_f0020_frog, 0x2E62D14);
DataPointer(NJS_ACTION, action_m_m0113_miles, 0x3C84BA4);
DataPointer(NJS_ACTION, action_m_m0113c_m_em_red, 0x2E652A4);
DataPointer(NJS_ACTION, action_m_m0114_miles, 0x3C84BC4);
DataPointer(NJS_ACTION, action_m_m0114c_m_em_red, 0x2E657AC);
DataPointer(NJS_ACTION, action_m_m0115_miles, 0x3C84B8C);
DataPointer(NJS_ACTION, action_m_m0115c_m_em_red, 0x2E65E54);
DataPointer(NJS_ACTION, action_m_m0116_miles, 0x3C84BB4);
DataPointer(NJS_ACTION, action_m_m0116c_m_em_red, 0x2E661DC);
DataPointer(NJS_ACTION, action_m_m0117_miles, 0x3C84BD4);
DataPointer(NJS_ACTION, action_m_m0117c_m_em_red, 0x2E66894);

//EV0047
DataPointer(EPATHTAG, epathtag_cube0047_1, 0x2BED038);
DataPointer(EPATHTAG, epathtag_cube0047_3, 0x2BEDE38);
DataPointer(char, ev_effect_list10, 0x2C496F8);

//EV0048
DataPointer(PADREC_DATA_TAG, EV0048_JUMP, 0x86BBD4);

//EV004B
DataPointer(PADREC_DATA_TAG, E004BT, 0x086B5C8);

//EV004C
DataPointer(NJS_ACTION, action_a_a0004_amy, 0x3C84A68);
DataPointer(NJS_ACTION, action_a_a0014_amy, 0x3C6003C);
DataPointer(NJS_MOTION*, ev_motion_m_m0002_miles, 0x3C85334);
DataPointer(EPATHTAG, epathtag_cube004c_14, 0x2BEAA58);
DataPointer(EPATHTAG, epathtag_cube004c_22, 0x2BEC368);
DataPointer(EPATHTAG, epathtag_cube004c_19, 0x2BEB6E0);

//EV004D
DataPointer(int, ssActNumber, 0x3B22DEC);
DataPointer(NJS_POINT3, gSkyScale, 0x3ABDC94);
DataPointer(NJS_ACTION, action_m_m0002_miles, 0x3C60034);
DataPointer(EPATHTAG, epathtag_cube_006d_14, 0x2BE9A18);
DataPointer(NJS_ACTION, action_a_a0011_amy, 0x3C84868);
DataPointer(NJS_ACTION, action_m_m0139_miles, 0x3C85310);
DataPointer(NJS_ACTION, action_m_m0140_miles, 0x3C85308);
DataPointer(NJS_ACTION, action_gm_gm0029_eggmoble, 0x2CD46F4);
DataPointer(NJS_ACTION, action_gm_gm0034_eggmoble, 0x321A55C);

//EV004E
DataPointer(PADREC_DATA_TAG, E004eT, 0x869F60);
DataPointer(NJS_ACTION, action_m_m0141_miles, 0x3C85320);
DataPointer(NJS_ACTION, action_m_m0142_miles, 0x3C85318);

//EV0050
DataPointer(NJS_ACTION, action_m_m0101_miles, 0x3C85484);
DataPointer(PADREC_DATA_TAG, EV0051_M_JUMP, 0x869844);

//EV0052
DataPointer(EPATHTAG, epathtag_cube0052_t1, 0x2BE7420);
DataPointer(EPATHTAG, epathtag_cube0052_t4, 0x2BE8458);
DataPointer(EPATHTAG, epathtag_cube0052_t2, 0x2BE8288);
DataPointer(EPATHTAG, epathtag_cube0052_t3, 0x2BE82B0);
DataPointer(EPATHTAG, epathtag_cube0052_s1, 0x2BE90F0);
DataPointer(NJS_MOTION*, motion_m_m9015_miles, 0x3C85478);
DataPointer(NJS_MOTION*, motion_m_m9016_miles, 0x3C85458);
DataPointer(NJS_MOTION*, motion_m_m9017_miles, 0x3C85468);
DataPointer(NJS_MOTION*, motion_m_m9018_miles, 0x3C85480);
DataPointer(NJS_MOTION*, motion_m_m0149_miles, 0x3C85448);
DataPointer(NJS_ACTION, action_s_s0069_sonic, 0x3C8544C);
DataPointer(NJS_ACTION, action_m_m0151_miles, 0x3C8546C);
DataPointer(NJS_ACTION, action_m_m0152_miles, 0x3C8545C);
DataPointer(PADREC_DATA_TAG, EV0052T, 0x8694FC);

//EV0054
DataPointer(char, ev_effect_list9, 0x2C496F0);

//EV0055
DataPointer(EPATHTAG, epathtag_ev0055_tk, 0x2BE6BF0);

//EV0080
DataPointer(NJS_ACTION, action_k_k0014_knuckles, 0x3C84F2C);
DataPointer(NJS_ACTION, action_k_k0023_knuckles, 0x3C84F44);
DataPointer(NJS_ACTION, action_k_k0024_knuckles, 0x3C84F54);
DataPointer(NJS_ACTION, action_k_k0002_knuckles, 0x3C84F34);
DataPointer(NJS_ACTION, action_k_k0015_knuckles, 0x3C84F4C);
DataPointer(NJS_ACTION, action_k_k0016_knuckles, 0x3C84F3C);
DataPointer(PADREC_DATA_TAG, E0080K, 0x861220);

//EV0082
DataPointer(NJS_ACTION, action_k_k0003_knuckles, 0x3C851DC);
DataPointer(NJS_ACTION, action_k_k0004_knuckles, 0x3C851D4);

//EV0083
DataPointer(EPATHTAG, epathtag_e0083TK, 0x2BE0D08);

//EV0085
DataPointer(NJS_ACTION, action_p_p0001_patya, 0x3C84CB8);
DataPointer(NJS_ACTION, action_p_p0003_patya, 0x3C84CB0);
DataPointer(NJS_ACTION, action_j_j0016_tikal, 0x2F12A34);
DataPointer(NJS_ACTION, action_j_j0017_tikal, 0x2F1694C);
DataPointer(NJS_ACTION, action_j_j0027_tikal, 0x2F180B4);

//EV0086
DataPointer(NJS_ACTION, action_k_k0019_knuckles, 0x3C851E4);

//EV0087
DataPointer(NJS_ACTION, action_g_g0001_eggman, 0x89E254);
DataPointer(NJS_ACTION, action_m_em_white, 0x2D0ADBC);
DataPointer(NJS_ACTION, action_k_k0006_knuckles, 0x3C848F0);
DataPointer(NJS_ACTION, action_g_g0022_eggman, 0x2D06F6C);
DataPointer(NJS_ACTION, action_g_g0029_eggman, 0x2D08DF4);
DataPointer(NJS_ACTION, action_g_g0007_eggman, 0x8AC3F4);
DataPointer(NJS_ACTION, action_g_g0030_eggman, 0x2D0AC0C);

//EV0088
DataPointer(NJS_ACTION, action_g_g0008_eggman, 0x8B1CCC);
DataPointer(NJS_ACTION, action_g_g0009_eggman, 0x2D00DF4);
DataPointer(NJS_ACTION, action_k_k0001_knuckles, 0x3C848E8);
DataPointer(NJS_ACTION, action_k_k0017_knuckles, 0x3C848F8);
DataPointer(PADREC_DATA_TAG, E0088E, 0x85EED0);

//EV008A
DataPointer(NJS_ACTION, action_s_s0034_sonic, 0x3C84938);
DataPointer(NJS_ACTION, action_m_em_green, 0x2D2633C);
DataPointer(PADREC_DATA_TAG, EV008A_KN_PUNCH, 0x85E5C4);

//EV0165
DataPointer(NJS_ACTION, action_s_item_r0, 0x3C847E8);
DataPointer(NJS_ACTION, action_s_item_r2, 0x3C847E0);
DataPointer(NJS_ACTION, action_s_item_r1, 0x3C847D8);
DataPointer(EPATHTAG, epathtbl_ev0165_tk, 0x2BD0990);

//EV0166
DataPointer(EPATHTAG, epathtbl_ev0166_tk, 0x2BD3AA8);
DataPointer(NJS_ACTION, action_s_item_s1, 0x3C847C0);
DataPointer(NJS_ACTION, action_s_item_s0, 0x3C847C8);
DataPointer(NJS_ACTION, action_s_item_s2, 0x3C847D0);

//EV0167
DataPointer(NJS_ACTION, action_s_item_l0, 0x3C84758);
DataPointer(NJS_ACTION, action_s_item_l1, 0x3C84760);
DataPointer(NJS_ACTION, action_s_item_l2, 0x3C84768);
DataPointer(char, ef_name, 0x2C496E8);
DataPointer(EPATHTAG, epathtbl_ev0167_tk, 0x2BCEAB8);

//EV0168
DataPointer(NJS_ACTION, action_m_item_s0, 0x3C84750);
DataPointer(NJS_ACTION, action_m_item_s1, 0x3C84748);
DataPointer(NJS_ACTION, action_m_item_s2, 0x3C84740);

//EV0169
DataPointer(NJS_ACTION, action_m_item_b0, 0x3C84738);
DataPointer(NJS_ACTION, action_m_item_b1, 0x3C84728);
DataPointer(NJS_ACTION, action_m_item_b2, 0x3C84730);

//Dialogue Tables
DataArray(char**, msgTbl_ev0001, 0x2C12BD8, 5);
DataArray(char**, msgTbl_ev0002, 0x2C0F2B8, 5);
DataArray(char**, msgTbl_ev0003, 0x2C0F064, 5);
DataArray(char**, msgTbl_ev0006, 0x2C0EFC8, 5);
DataArray(char**, msgTbl_ev0007, 0x2C0EE08, 5);
DataArray(char**, msgTbl_ev0008, 0x2C0EC70, 5);
DataArray(char**, msgTbl_ev0009, 0x2C0EA98, 5);
DataArray(char**, msgTbl_ev000B, 0x2C0E9AC, 5);
DataArray(char**, msgTbl_ev000C, 0x2C0E840, 5);
DataArray(char**, msgTbl_ev000D, 0x2C0DF7C, 5);
DataArray(char**, msgTbl_ev0011, 0x2C0DF20, 5);
DataArray(char**, msgTbl_ev0012, 0x2C0DE94, 5);
DataArray(char**, msgTbl_ev0013, 0x2C0DDB8, 5);
DataArray(char**, msgTbl_ev0014, 0x2C0DCE8, 5);
DataArray(char**, msgTbl_ev0015, 0x2C0DC80, 5);
DataArray(char**, msgTbl_ev0016, 0x2C0DC08, 5);
DataArray(char**, msgTbl_ev0017, 0x2BF4BD0, 5);
DataArray(char**, msgTbl_ev001A, 0x2BF4B20, 5);
DataArray(char**, msgTbl_ev001B, 0x2BF49F0, 5);
DataArray(char**, msgTbl_ev001C, 0x2BF48D8, 5);
DataArray(char**, msgTbl_ev001D, 0x2BF4760, 5);
DataArray(char**, msgTbl_ev001E, 0x2BF40D4, 5);
DataArray(char**, msgTbl_ev0020, 0x2BF4044, 5);
DataArray(char**, msgTbl_ev0021, 0x2BF4000, 5);
DataArray(char**, msgTbl_ev0022, 0x2BF3FA4, 5);
DataArray(char**, msgTbl_ev0023, 0x2BF3F28, 5);
DataArray(char**, msgTbl_ev0024, 0x2BF3E84, 5);
DataArray(char**, msgTbl_ev0028, 0x2BF1FA4, 5);
DataArray(char**, msgTbl_ev0029, 0x2BF190C, 5);
DataArray(char**, msgTbl_ev002A, 0x2BF1854, 5);
DataArray(char**, msgTbl_ev002B, 0x2BF1458, 5);
DataArray(char**, msgTbl_ev0030, 0x2BEFA3C, 5);
DataArray(char**, msgTbl_ev0032, 0x2BEF93C, 5);
DataArray(char**, msgTbl_ev0033, 0x2BEF784, 5);
DataArray(char**, msgTbl_ev0034, 0x2BEF5D8, 5);
DataArray(char**, msgTbl_ev0035, 0x2BEF3D8, 5);
DataArray(char**, msgTbl_ev0038, 0x2BEF32C, 5);
DataArray(char**, msgTbl_ev0039, 0x2BEF254, 5);
DataArray(char**, msgTbl_ev003A, 0x2BEF0A0, 5);
DataArray(char**, msgTbl_ev003B, 0x2BEEF7C, 5);
DataArray(char**, msgTbl_ev0040, 0x2BEE1C0, 5);
DataArray(char**, msgTbl_ev0042, 0x2BEE0EC, 5);
DataArray(char**, msgTbl_ev0044, 0x2BEE094, 5);
DataArray(char**, msgTbl_ev0045, 0x2BEE040, 5);
DataArray(char**, msgTbl_ev0046, 0x2BEDED8, 5);
DataArray(char**, msgTbl_ev0047, 0x2BECD00, 5);
DataArray(char**, msgTbl_ev0048, 0x2BECC28, 5);
DataArray(char**, msgTbl_ev004B, 0x2BEC49C, 5);
DataArray(char**, msgTbl_ev004C, 0x2BE9B40, 5);
DataArray(char**, msgTbl_ev004D, 0x2BE93A4, 5);
DataArray(char**, msgTbl_ev004E, 0x2BE929C, 5);
DataArray(char**, msgTbl_ev0050, 0x2BE91D4, 5);
DataArray(char**, msgTbl_ev0051, 0x2BE9140, 5);
DataArray(char**, msgTbl_ev0054, 0x2BE6C9C, 5);
DataArray(char**, msgTbl_ev0056, 0x2BE4F10, 5);
DataArray(char**, msgTbl_ev0080, 0x2BE0F4C, 5);
DataArray(char**, msgTbl_ev0082, 0x2BE0D7C, 5);
DataArray(char**, msgTbl_ev0084, 0x2BE01C8, 5);
DataArray(char**, msgTbl_ev0085, 0x2BE0144, 5);
DataArray(char**, msgTbl_ev0086, 0x2BE0088, 5);
DataArray(char**, msgTbl_ev0087, 0x2BE0008, 5);
DataArray(char**, msgTbl_ev0088, 0x2BDFE88, 5);
DataArray(char**, msgTbl_ev0089, 0x2BDFD68, 5);
DataArray(char**, msgTbl_ev008A, 0x2BDFD04, 5);
DataArray(char**, msgTbl_ev008B, 0x2BDFBD8, 5);
DataArray(char**, msgTbl_ev008C, 0x2BDFA4C, 5);
DataArray(char**, msgTbl_ev0100, 0x2BD4AD8, 5);
DataArray(char**, msgTbl_ev0101, 0x2BD4A80, 5);
DataArray(char**, msgTbl_ev0102, 0x2BD4A28, 5);
DataArray(char**, msgTbl_ev0103, 0x2BD496C, 5);
DataArray(char**, msgTbl_ev0104, 0x2BD493C, 5);
DataArray(char**, msgTbl_ev0106, 0x2BD48F8, 5);
DataArray(char**, msgTbl_ev0107, 0x2BD48B4, 5);
DataArray(char**, msgTbl_ev0110, 0x2BD4884, 5);
DataArray(char**, msgTbl_ev0111, 0x2BD4884, 5);
DataArray(char**, msgTbl_ev0112, 0x2BD47D4, 5);
DataArray(char**, msgTbl_ev0113, 0x2BD4704, 5);
DataArray(char**, msgTbl_ev0114, 0x2BD46D4, 5);
DataArray(char**, msgTbl_ev0165, 0x2BD3B6C, 5);
DataArray(char**, msgTbl_ev0166, 0x2BD3B28, 5);
DataArray(char**, msgTbl_ev0167, 0x2BD0A5C, 5);
DataArray(char**, msgTbl_ev0168, 0x2BD0A04, 5);
DataArray(char**, msgTbl_ev0169, 0x2BD09C0, 5);

