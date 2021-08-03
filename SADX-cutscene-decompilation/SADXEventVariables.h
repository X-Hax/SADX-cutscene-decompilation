#pragma once
#include "SADXModLoader.h"
#include "SADXEventStructs.h"

//Character Faces Table
DataArray(FACETBL, faceTable, 0x91CEC8, 160);

//Object variables, see objects.cpp
extern task* B_EME;
extern task* B_OUT;
extern task* BALL;
extern task* BLACK;
extern task* BLACK1;
extern task* BLACK2;
extern task* BLACK3;
extern task* BLACKOUT;
extern task* bird1;
extern task* bird2;
extern task* bird3;
extern task* bomb1;
extern task* bomb2;
extern task* BOY;
extern task* boy1;
extern task* BOY2;
extern task* BOYS_A;
extern task* BROKEN_EGG;
extern task* BROKEN_EGG2;
extern task* BROKEN_EGG4;
extern task* C_EME_P;
extern task* CAP_01;
extern task* cap1;
extern task* cap2;
extern task* cap3;
extern task* CAR;
extern task* CAR02;
extern task* CAR3;
extern task* CAR4;
extern task* CHA;
extern task* CHA2;
extern task* CHA3;
extern task* CHA4;
extern task* CHA5;
extern task* CHA6;
extern task* CHA7;
extern task* CHA8;
extern task* CHA9;
extern task* CHA10;
extern task* CHAO1;
extern task* CHAO2;
extern task* CHAO3;
extern task* CHAO4;
extern task* CHAO5;
extern task* CHAO6;
extern task* CHAO7;
extern task* CHAO8;
extern task* CHAO9;
extern task* CHAO10;
extern task* CHAO11;
extern task* CHAO12;
extern task* CHAO13;
extern task* CHAO14;
extern task* CHAO15;
extern task* CHAO16;
extern task* CHAOS;
extern task* e101;
extern task* E101KAI;
extern task* e103;
extern task* e104;
extern task* e105;
extern task* EC_KAGE;
extern task* egg_amy;
extern task* emerald;
extern task* ev_chaos0;
extern int eq_saved;
extern short equipment;
extern task* FAT;
extern task* FAT_A;
extern task* FAT_B;
extern task* FAT2;	
extern task* fatman_b;
extern task* FLASH;
extern task* Frog;	
extern task* Frog1;	
extern task* Frog2;	
extern task* Frog3;	
extern task* Frog4;	
extern task* G_EME;
extern task* GIRL;	
extern task* girl1;
extern task* GIRL2;
extern task* HAND_1;
extern task* HAND_2;
extern task* HAND_3;
extern task* HELI_01;
extern task* hogel;
extern task* hoge1;
extern task* hoge2;
extern task* hoge3;
extern task* hoge4;
extern task* hoge5;
extern task* IWA;
extern task* IWA2;
extern task* IWA3;
extern task* KOTORI;
extern task* KOUKYU;
extern task* KURAYAMI;
extern task* LADY_A;
extern task* LADY_B;
extern task* LADY_C;
extern task* LADY;
extern task* LADY2;
extern task* LIGHT_L;
extern task* LIGHT_R;
extern task* Mhand;
extern task* m_sonic;
extern task* NY_SKY;
//extern task* obj_amy;
extern task* obj_decoy;
extern task* obj_ver1_wing;
extern task* obj_ver2_wing;
extern task* obj_wing;
extern task* obj_wing1;
extern task* ol1;
extern task* oy1;
extern task* oy2;
extern task* OYAJI_A;
extern task* OYAJI_B;
extern task* OYAJI_C;
extern task* OYAJI;
extern task* OYAJI2;
extern task* p_Chaos0Task;
extern task* p_fpack1;
extern task* p_fpack2;
extern task* P_EME;
extern task* PAPA;
extern task* PLANE;
extern task* PAT_01;
extern task* PAT_02;
extern task* PAT_03;
extern task* PAT_04;
extern task* PL_NOR_01;
extern task* PL_NOR_02;
extern task* PL_NOR_03;
extern task* PL_NOR_04;
extern task* PL_NOR_05;
extern task* PL_NOR_07;
extern task* PL_NOR_08;
extern task* pmiles;
extern task* PURPLE;
extern task* R_EME;
extern task* RED;
extern task* S_EME;
extern task* SEPIA;
extern task* shadow;
extern task* SIRO;
extern task* SMOKE_01;
extern task* SMOKE_02;
extern task* SMOKE;
extern task* SMOKE1;
extern task* SMOKE2;
extern task* SONIC_JUMP;
extern task* SONIC_SKY_2;
extern task* SONIC_02SKY;
extern task* suki1_obj;
extern task* suki2_obj;
extern task* suki1_point;
extern task* suki2_point;
extern task* task_frame;
extern task* task_icm;
extern task* task_ichimaie;
extern task* task_recollect0;
extern task* task_recollect1;
extern task* task_skywalk;
extern task* task_skywalk2;
extern task* task_skywalk_3;
extern task* W_EME;
extern task* WING;
extern task* WHITE;
extern task* WHITE2;
extern task* W_OUT;
extern task* TALES_STEP;
extern task* TAMA_01;
extern task* TAMA_02;
extern task* TAMA_03;
extern task* TAMA_04;
extern task* TAMA_05;
extern task* TAMA_06;
extern task* TAMA_07;
extern task* TAMA_08;
extern task* TAMA_09;
extern task* TAMA_10;
extern task* TAMA_11;
extern task* TAMA_12;
extern task* TAMA_13;
extern task* TAMA_14;
extern task* TAMA_15;
extern task* TAMA_16;
extern task* TAMA_17;
extern task* TAMA_18;
extern task* TAMA_19;
extern task* TAMA_20;
extern task* TEPODON;
extern task* tikal;
extern task* tikalb;
extern task* Tik;
extern task* TR2;
extern task* TR2B;
extern task* Y_EME;
extern task* zan;

//Character objects
extern task* player;
extern task* sonic;
extern task* tails;
extern task* knuckles;
extern task* amy;
extern task* big;
extern task* e102;
extern task* eggcarrier;
extern task* eggman;
extern task* eggmoble;
extern task* zero;

extern int enableUnusedCode;

//EV0001
DataArray(char, seqVars, 0x3B18808, 512);
DataPointer(NJS_ACTION, action_sspatcar_body, 0x2DC028C);
DataPointer(NJS_ACTION, action_c0_heli_body, 0x2DBD864);
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
DataPointer(task*, task_tornado, 0x3C8461C);
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
DataPointer(NJS_ACTION, action_m_em_purple, 0x2CECB5C);
DataPointer(NJS_ACTION, action_m_m0136d_m_em_purple, 0x2CED244);
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
DataPointer(NJS_TEXLIST, ev_effect_list3, 0x2C496C0);
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
DataPointer(NJS_TEXLIST, ev_effect_list10, 0x2C496F8);

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
DataPointer(NJS_TEXLIST, ev_effect_list9, 0x2C496F0);

//EV0055
DataPointer(EPATHTAG, epathtag_ev0055_tk, 0x2BE6BF0);

//EV0060
DataPointer(NJS_ACTION, action_a_a0100_amy, 0x3C85408);
DataPointer(NJS_ACTION, action_fp_0100_fpack, 0x328D44C);
DataPointer(NJS_TEXLIST, texlist_fpack, 0x3289B50);
DataPointer(NJS_TEXLIST, texlist_icm0060, 0x32CC570);
DataPointer(NJS_ACTION, action_a_a0101_amy, 0x3C85420);
DataPointer(NJS_ACTION, action_fp_0101_fpack, 0x328D894);
DataPointer(NJS_ACTION, action_a_a0102_amy, 0x3C85418);
DataPointer(NJS_ACTION, action_fp_0102_fpack, 0x328DC2C);
DataPointer(NJS_ACTION, action_a_a0103_amy, 0x3C85428);
DataPointer(NJS_ACTION, action_fp_0103_fpack, 0x328F614);
DataPointer(NJS_ACTION, action_a_a0104_amy, 0x3C853E8);
DataPointer(NJS_ACTION, action_fp_0104_fpack, 0x328FC7C);
DataPointer(NJS_ACTION, action_a_a0099_amy, 0x3C85400);
DataPointer(NJS_ACTION, action_s_s0076_sonic, 0x3C853F0);
DataPointer(EPATHTAG, epathtag_cube0060_1, 0x2BE4828);
DataPointer(EPATHTAG, epathtag_cube0060ms1, 0x2BE4D68);
DataPointer(EPATHTAG, epathtag_cube0060_2, 0x2BE4A30);
DataPointer(NJS_ACTION, action_ev_s_msbody, 0x32D6344);
DataPointer(NJS_TEXLIST, texlist_ev_s_msbody, 0x32D3F2C);
DataPointer(NJS_TEXLIST, ev_effect_list2, 0x2C496B8);
DataPointer(NJS_ACTION, action_a_a0109_amy, 0x3C853F8);
DataPointer(NJS_ACTION, action_fp_0109_fpack, 0x3292F94);
DataPointer(NJS_ACTION, action_a_a0105_amy, 0x3C85438);
DataPointer(NJS_ACTION, action_fp_0105_fpack, 0x3290504);
DataPointer(NJS_ACTION, action_a_a0106_amy, 0x3C853E0);
DataPointer(NJS_ACTION, action_fp_0106_fpack, 0x3290B6C);
DataPointer(NJS_ACTION, action_a_a0107_amy, 0x3C85410);
DataPointer(NJS_ACTION, action_fp_0107_fpack, 0x3291C44);
DataPointer(NJS_ACTION, action_a_a0108_amy, 0x3C85430);
DataPointer(NJS_ACTION, action_fp_0108_fpack, 0x329262C);

//EV0061
DataPointer(NJS_ACTION, action_a_a0110_amy, 0x3C85380);
DataPointer(cpathtag, cpathtag_e0061cam_22, 0x2BE4418);
DataPointer(NJS_ACTION, action_a_a0111_amy, 0x3C85370);
DataPointer(NJS_ACTION, action_w_w0123_wing, 0x32283C4);
DataPointer(NJS_ACTION, action_a_a0112_amy, 0x3C85348);
DataPointer(NJS_ACTION, action_a_a0113_amy, 0x3C85350);
DataPointer(NJS_ACTION, action_a_a0123_amy, 0x3C85360);
DataPointer(NJS_ACTION, action_w_w0126_wing, 0x322B91C);
DataPointer(NJS_ACTION, action_a_a0125_amy, 0x3C85340);
DataPointer(NJS_ACTION, action_w_w0125_wing, 0x322A3D4);
DataPointer(NJS_ACTION, action_a_a0127_amy, 0x3C85388);
DataPointer(NJS_ACTION, action_w_w0127_wing, 0x322C9E4);
DataPointer(NJS_ACTION, action_a_a0128_amy, 0x3C85368);
DataPointer(NJS_ACTION, action_w_w0128_wing, 0x322D50C);
DataPointer(NJS_ACTION, action_a_a0129_amy, 0x3C85358);
DataPointer(NJS_ACTION, action_w_w0129_wing, 0x322E754);
DataPointer(NJS_ACTION, action_a_a0131_amy, 0x3C85378);
DataPointer(NJS_ACTION, action_w_w0131_wing, 0x322F27C);
DataPointer(NJS_ACTION, action_w_w0121ver3_wing, 0x322781C);
DataPointer(NJS_TEXLIST, texlist_ver3_wing, 0x321FB60);

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

//EV008D
DataPointer(EPATHTAG, epathtag_e008DTK, 0x2BDF938);

//EV008F
DataPointer(NJS_ACTION, action_j_j0018_tikal, 0x2FB1F1C);
DataPointer(NJS_ACTION, action_j_j0019_tikal, 0x2FBFAA4);
DataPointer(NJS_ACTION, action_al_stand_al_model, 0x3C84EBC);
DataPointer(NJS_ACTION, action_ti_walk, 0x8FC8DC);

//EV0091
DataPointer(NJS_ACTION, action_k_k0009_knuckles, 0x3C848E0);
DataPointer(NJS_ACTION, action_k_k0010_knuckles, 0x3C851B8);
DataPointer(NJS_ACTION, action_k_k0011_knuckles, 0x3C851C0);
DataPointer(NJS_ACTION, action_k_k0018_knuckles, 0x3C851C8);

//EV0095
DataPointer(EPATHTAG, epathtag_E0095TK, 0x2BDD610);

//EV0097
DataPointer(NJS_ACTION, action_j_j0008_tikal, 0x2D4B2DC);
DataPointer(NJS_ACTION, action_k_k0007_knuckles, 0x3C84990);
DataPointer(NJS_ACTION, action_j_j0009_tikal, 0x2D53284);
DataPointer(NJS_ACTION, action_k_k0008_knuckles, 0x3C84988);
DataPointer(NJS_ACTION, action_j_j0010_tikal, 0x2D5C1FC);
DataPointer(NJS_ACTION, action_j_j0043_tikal, 0x2D61174);

//EV009B
DataPointer(NJS_ACTION, action_m_em_blue, 0x2CBE0F4);

//EV00A0
DataPointer(NJS_ACTION, action_g_0011_eggman, 0x3141254);

//EV00B0
DataPointer(NJS_ACTION, action_g_0010_eggman, 0x303D284);
DataPointer(NJS_ACTION, action_g_0015_eggman, 0x03041A44);
DataPointer(NJS_ACTION, action_e_e0019_e102, 0x3C85068);
DataPointer(NJS_ACTION, action_g_0012_eggman, 0x303EE9C);
DataPointer(NJS_ACTION, action_g_g0002_eggman, 0x8A094C);
DataPointer(NJS_ACTION, action_g_g0005_eggman, 0x8A6BF4);

//EV00B1
DataPointer(NJS_ACTION, action_g_0014_eggman, 0x3142C4C);

//EV00B2
DataPointer(NJS_ACTION, action_e_e0033_e102, 0x3C85060);

//EV00B3
DataPointer(NJS_ACTION, action_g_0016_eggman, 0x313EB3C);
DataPointer(NJS_ACTION, action_e_e0015_e102, 0x3C85188);
DataPointer(NJS_ACTION, action_g_g0020_eggman, 0x2D027EC);
DataPointer(NJS_ACTION, action_e_e0018_e102, 0x3C85180);

//EV00B4
DataPointer(NJS_ACTION, action_e_e0006_e102, 0x3C850AC);
DataPointer(NJS_ACTION, action_g_0019_eggman, 0x304E9AC);
DataPointer(NJS_ACTION, action_e_hwait0_e101, 0x304FF54);
DataPointer(NJS_ACTION, action_e_e0007_e102, 0x3C85084);
DataPointer(NJS_ACTION, action_e_wait1_e101, 0x305277C);
DataPointer(NJS_ACTION, action_e_wait2_e101, 0x30539C4);
DataPointer(NJS_TEXLIST, texlist_ev_e101_body, 0x312C12C);

//EV00B5
DataPointer(NJS_ACTION, action_e_run0_e101, 0x313911C);
DataPointer(NJS_ACTION, action_e_wait0_e101, 0x313A654);
DataPointer(NJS_ACTION, action_g_0018_eggman, 0x3136234);

//EV00B7
DataPointer(NJS_ACTION, action_e_wait0_e103, 0x310DE9C);
DataPointer(NJS_ACTION, action_e_wait0_e104, 0x311B1C4);
DataPointer(NJS_ACTION, action_e_wait0_e105, 0x31284EC);
DataPointer(NJS_TEXLIST, texlist_ev_e103_body, 0x30A7AF8);
DataPointer(NJS_TEXLIST, texlist_ev_e104_body, 0x309F378);
DataPointer(NJS_TEXLIST, texlist_ev_e105_body, 0x3096CD0);
DataPointer(NJS_ACTION, action_e_wait1_e103, 0x31106C4);
DataPointer(NJS_ACTION, action_e_wait1_e104, 0x311D9EC);
DataPointer(NJS_ACTION, action_e_wait1_e105, 0x312AD14);
DataPointer(NJS_ACTION, action_e_wait2_e103, 0x311190C);
DataPointer(NJS_ACTION, action_e_wait2_e104, 0x311EC34);
DataPointer(NJS_ACTION, action_e_wait2_e105, 0x312BF5C);
DataPointer(NJS_ACTION, action_e_e0007_e103, 0x3109A7C);
DataPointer(NJS_ACTION, action_e_e0007_e104, 0x3116DA4);
DataPointer(NJS_ACTION, action_e_e0007_e105, 0x31240CC);
DataPointer(NJS_ACTION, action_e_run0_e103, 0x310C964);
DataPointer(NJS_ACTION, action_e_run0_e104, 0x3119C8C);
DataPointer(NJS_ACTION, action_e_run0_e105, 0x3126FB4);

//EV00B8
DataPointer(EPATHTAG, epathtag_E00B8TK, 0x2BDC580);
DataPointer(NJS_ACTION, action_f_f0003_frog, 0x30330CC);

//EV00BA
DataPointer(NJS_ACTION, action_al_sing_al_model, 0x3C85128);
DataPointer(NJS_ACTION, action_j_j0030_tikal, 0x30DF19C);
DataPointer(NJS_ACTION, action_j_j0031_tikal, 0x30E6944);
DataPointer(NJS_ACTION, action_j_j0032_tikal, 0x30EE53C);
DataPointer(NJS_ACTION, action_j_j0033_tikal, 0x30F6004);

//EV00BB
DataPointer(NJS_ACTION, action_e_hwait0_e103, 0x30B6344);
DataPointer(NJS_ACTION, action_e_hwait0_e104, 0x30BB44C);
DataPointer(NJS_ACTION, action_e_hwait0_e105, 0x30C0554);
DataPointer(NJS_ACTION, _action_f_f0003_frog, 0x30C8D7C);
DataPointer(NJS_OBJECT, object_f_frog1_f_frog1, 0x30CB4F8);
DataPointer(NJS_OBJECT, object_f_frog2_f_frog2, 0x30CDB28);
DataPointer(NJS_OBJECT, object_f_frog3_f_frog3, 0x30D0160);
DataPointer(NJS_MOTION, motion_ff_00001, 0x30D24A8);
DataPointer(NJS_MOTION, motion_ff_00002, 0x30D54B0);
DataPointer(NJS_MOTION, motion_ff_00003, 0x30D7878);
DataPointer(NJS_TEXLIST, texlist_frog1, 0x30C8DDC);
DataPointer(NJS_TEXLIST, texlist_frog2, 0x30C8E3C);
DataPointer(NJS_TEXLIST, texlist_frog3, 0x30C8EA8);
DataPointer(NJS_ACTION, action_g_g0032_eggman, 0x30C7E34);
DataPointer(NJS_ACTION, action_g_g0004_eggman, 0x8A513C);
DataPointer(NJS_ACTION, action_g_g0031_eggman, 0x30C62BC);
DataPointer(NJS_ACTION, action_e_e0010_e103, 0x30B9EA4);
DataPointer(NJS_ACTION, action_e_e0009_e104, 0x30BD194);
DataPointer(NJS_ACTION, action_e_e0011_e105, 0x30C20FC);

//EV00BC
DataPointer(PADREC_DATA_TAG, KAITEN_00BC, 0x85648C);

//EV00BD
DataPointer(NJS_ACTION, action_e_e0016_e102, 0x3C850E4);

//EV00BF
DataPointer(NJS_ACTION, action_a_a0115_amy, 0x3C850CC);
DataPointer(NJS_ACTION, action_w_w0114_wing, 0x305BA4C);
DataPointer(NJS_ACTION, action_w_w0116_wing, 0x305C894);
DataPointer(NJS_ACTION, action_a_a0117_amy, 0x3C8509C);
DataPointer(NJS_ACTION, action_w_w0117_wing, 0x305DE4C);
DataPointer(NJS_ACTION, action_a_a0118_amy, 0x3C850C4);
DataPointer(NJS_ACTION, action_w_w0118_wing, 0x305E954);
DataPointer(NJS_ACTION, action_a_a0119_amy, 0x3C850BC);
DataPointer(NJS_ACTION, action_w_w0119_wing, 0x30602DC);
DataPointer(NJS_ACTION, action_a_a0120_amy, 0x3C850DC);
DataPointer(NJS_ACTION, action_w_w0120_wing, 0x3069EB4);
DataPointer(NJS_ACTION, action_e_e0024_e102, 0x3C850D4);
DataPointer(NJS_ACTION, action_e_e0025_e102, 0x3C850B4);

//EV00C2
DataPointer(NJS_ACTION, action_e_e0034_e102, 0x3C8508C);
DataPointer(NJS_ACTION, action_e_e0035_e102, 0x3C85094);
DataPointer(NJS_ACTION, action_a_a0006_amy, 0x3C84CA0);
DataPointer(NJS_ACTION, action_a_a0015_amy, 0x3C84CA8);
DataPointer(task *, obj_amy, 0x3C83E28);

//EV00C3
DataPointer(NJS_TEXLIST, texlist_icm00C3, 0x3041A88);
DataPointer(PADREC_DATA_TAG, E00C3, 0x853E18);
DataPointer(EPATHTAG, epathtag_cube00C3, 0x2BDB7C0);

//EV00C5
DataPointer(NJS_TEXLIST, texlist_icm00C5, 0x3033170);

//EV00C7
DataPointer(NJS_TEXLIST, texlist_icm00C7, 0x2DB3358);
DataPointer(NJS_TEXLIST, texlist_wing_t, 0x2E1E81C);
DataPointer(NJS_TEXLIST, texlist_ev_e101kai, 0x2D9FE30);
DataPointer(NJS_TEXLIST, texlist_wing_p, 0x2E19B94);
DataPointer(NJS_ACTION, action_w_t0004_wing_t, 0x2E2760C);
DataPointer(NJS_ACTION, action_saigo_e101kai_e101kai, 0x2DACABC);
DataPointer(NJS_ACTION, action_taiki_e101kai_null11, 0x2DAB634);
DataPointer(NJS_ACTION, action_e_e0020_e102, 0x3C849C8);
DataPointer(NJS_ACTION, action_hadou_e101kai_e101kai, 0x2DAFF04);
DataPointer(NJS_ACTION, action_e_e0037_e102, 0x3C849B8);
DataPointer(NJS_ACTION, action_e_e0038_e102, 0x3C849F0);
DataPointer(NJS_ACTION, action_w_t0001_wing_t, 0x2DB191C);
DataPointer(NJS_ACTION, action_e_e0039_e102, 0x3C849C0);
DataPointer(NJS_ACTION, action_e_e0043_e102, 0x3C849E0);
DataPointer(NJS_ACTION, action_e_e0040_e102, 0x3C849D0);
DataPointer(EPATHTAG, epathtag_cube00C7_1, 0x2BDA170);
DataPointer(NJS_ACTION, action_e_e0044_e102, 0x3C849E8);
DataPointer(NJS_ACTION, action_e_e0042_e102, 0x3C849F8);
DataPointer(NJS_ACTION, action_w_p0001_wing_p, 0x2DB3344);
DataPointer(EPATHTAG, epathtag_cube00C7_4, 0x2BDAAE8);

//EV0142
DataPointer(NJS_ACTION, action_e_e0036_e102, 0x3C849B0);
DataPointer(NJS_ACTION, action_e_e0026_e102, 0x3C849A8);
DataPointer(NJS_ACTION, action_e_e0027_e102, 0x3C849A0);
DataPointer(EPATHTAG, epathtag_cube0142_10, 0x2BD4480);
DataPointer(NJS_TEXLIST, texlist_icm0142, 0x2D6FFE4);

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
DataPointer(NJS_TEXLIST, ev_effect_list8, 0x2C496E8);
DataPointer(EPATHTAG, epathtbl_ev0167_tk, 0x2BCEAB8);

//EV0168
DataPointer(NJS_ACTION, action_m_item_s0, 0x3C84750);
DataPointer(NJS_ACTION, action_m_item_s1, 0x3C84748);
DataPointer(NJS_ACTION, action_m_item_s2, 0x3C84740);

//EV0169
DataPointer(NJS_ACTION, action_m_item_b0, 0x3C84738);
DataPointer(NJS_ACTION, action_m_item_b1, 0x3C84728);
DataPointer(NJS_ACTION, action_m_item_b2, 0x3C84730);

//EV016E
DataPointer(EPATHTAG, epathtag_ev0170_tk, 0x2BD9B58);

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
DataArray(char**, msgTbl_ev0060, 0x2BE4E60, 5);
DataArray(char**, msgTbl_ev0061, 0x2BE4528, 5);
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
DataArray(char**, msgTbl_ev008E, 0x2BDD928, 5);
DataArray(char**, msgTbl_ev008F, 0x2BDD8C4, 5);
DataArray(char**, msgTbl_ev0091, 0x2BDD7D0, 5);
DataArray(char**, msgTbl_ev0092, 0x2BDD68C, 5);
DataArray(char**, msgTbl_ev0094, 0x2BDD648, 5);
DataArray(char**, msgTbl_ev0095, 0x2BDCF0C, 5);
DataArray(char**, msgTbl_ev0096, 0x2BDCEB0, 5);
DataArray(char**, msgTbl_ev0097, 0x2BDCE5C, 5);
DataArray(char**, msgTbl_ev0098, 0x2BDCDB4, 5);
DataArray(char**, msgTbl_ev0099, 0x2BDCD58, 5);
DataArray(char**, msgTbl_ev009A, 0x2BDCC58, 5);
DataArray(char**, msgTbl_ev009B, 0x2BDCBB4, 5);
DataArray(char**, msgTbl_ev009D, 0x2BDCB54, 5);
DataArray(char**, msgTbl_ev009F, 0x2BDCB10, 5);
DataArray(char**, msgTbl_ev00A0, 0x2BDCA80, 5);
DataArray(char**, msgTbl_ev00B0, 0x2BDCA04, 5);
DataArray(char**, msgTbl_ev00B1, 0x2BDC970, 5);
DataArray(char**, msgTbl_ev00B2, 0x2BDC8F4, 5);
DataArray(char**, msgTbl_ev00B3, 0x2BDC8A0, 5);
DataArray(char**, msgTbl_ev00B4, 0x2BDC830, 5);
DataArray(char**, msgTbl_ev00B5, 0x2BDC748, 5);
DataArray(char**, msgTbl_ev00B7, 0x2BDC668, 5);
DataArray(char**, msgTbl_ev00B9, 0x2BDC0F4, 5);
DataArray(char**, msgTbl_ev00BA, 0x2BDC068, 5);
DataArray(char**, msgTbl_ev00BB, 0x2BDBF34, 5);
DataArray(char**, msgTbl_ev00BC, 0x2BDBE14, 5);
DataArray(char**, msgTbl_ev00BD, 0x2BDBDD4, 5);
DataArray(char**, msgTbl_ev00BE, 0x2BDBDA4, 5);
DataArray(char**, msgTbl_ev00BF, 0x2BDBD40, 5);
DataArray(char**, msgTbl_ev00C0, 0x2BDBAF0, 5);
DataArray(char**, msgTbl_ev00C1, 0x2BDBA70, 5);
DataArray(char**, msgTbl_ev00C2, 0x2BDB9C0, 5);
DataArray(char**, msgTbl_ev00C3, 0x2BDB804, 5);
DataArray(char**, msgTbl_ev00C5, 0x2BDAB64, 5);
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
DataArray(char**, msgTbl_ev0120, 0x2BD4690, 5);
DataArray(char**, msgTbl_ev0121, 0x2BD4660, 5);
DataArray(char**, msgTbl_ev0122, 0x2BD4630, 5);
DataArray(char**, msgTbl_ev0140, 0x2BD4578, 5);
DataArray(char**, msgTbl_ev0141, 0x2BD450C, 5);
DataArray(char**, msgTbl_ev0142, 0x2BD3CD8, 5);
DataArray(char**, msgTbl_ev0165, 0x2BD3B6C, 5);
DataArray(char**, msgTbl_ev0166, 0x2BD3B28, 5);
DataArray(char**, msgTbl_ev0167, 0x2BD0A5C, 5);
DataArray(char**, msgTbl_ev0168, 0x2BD0A04, 5);
DataArray(char**, msgTbl_ev0169, 0x2BD09C0, 5);
DataArray(char**, msgTbl_ev016A, 0x2BCEBF0, 5);
DataArray(char**, msgTbl_ev016B, 0x2BCEB84, 5);
DataArray(char**, msgTbl_ev016E, 0x2BCCC68, 5);
DataArray(char**, msgTbl_ev016F, 0x2BCCC24, 5);

