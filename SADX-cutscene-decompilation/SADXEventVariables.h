#pragma once
#include "SADXModLoader.h"
#include "SADXEventStructs.h"

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
DataPointer(NJS_ACTION, action_s_s0013_sonic, 0x3C851F0);
DataPointer(NJS_ACTION, action_s_s0031_sonic, 0x3C851F8);
DataPointer(NJS_ACTION, action_s_s0032_sonic, 0x3C85200);
DataPointer(NJS_ACTION, action_s_s0033_sonic, 0x3C85208);

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
DataPointer(NJS_ACTION, action_s_s0009_sonic, 0x3C84888);
DataPointer(NJS_ACTION, action_s_s0038_sonic, 0x3C84890);
DataPointer(NJS_ACTION, action_s_s0042_sonic, 0x3C84898);
DataPointer(NJS_ACTION, action_s_s0044_sonic, 0x3C848A8);
DataPointer(NJS_ACTION, action_s_s0045_sonic, 0x3C848C8);
DataPointer(NJS_ACTION, action_m_m0136_miles, 0x3C84880);
DataPointer(NJS_ACTION, action_m_m0137_miles, 0x3C848B0);
DataPointer(NJS_ACTION, action_m_m0138_miles, 0x3C848B8);
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
DataPointer(NJS_ACTION, action_s_s0002_sonic, 0x3C84948);
DataPointer(NJS_ACTION, action_s_s0046_sonic, 0x3C84958);
DataPointer(NJS_ACTION, action_s_s9000_sonic, 0x3C84960);
DataPointer(NJS_ACTION, action_s_s9001_sonic, 0x3C84968);
DataPointer(NJS_ACTION, action_k_k0033_knuckles, 0x3C84940);
DataPointer(NJS_ACTION, action_k_k0038_knuckles, 0x3C84950);
DataPointer(NJS_ACTION, action_k_k0039_knuckles, 0x3C84970);
DataPointer(NJS_ACTION, action_k_k0034_knuckles, 0x3C84978);
DataPointer(NJS_ACTION, action_k_k0035_knuckles, 0x3C84980);
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
DataPointer(NJS_ACTION, action_tr1_s_t1_body, 0x3261BBC);
DataPointer(NJS_ACTION, action_s_s0028_sonic, 0x3C853B8);
DataPointer(EPATHTAG, epathtag_E000DTR, 0x2C0E730);
DataPointer(PADREC_DATA_TAG, E000DSS, 0x08778C0);

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
DataArray(char**, msgTbl_ev0020, 0x2BF4044, 5);
DataArray(char**, msgTbl_ev002B, 0x2BF1458, 5);
