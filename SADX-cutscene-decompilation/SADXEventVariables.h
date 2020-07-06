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
DataArray(char**, msgTbl_ev0020, 0x2BF4044, 5);
DataArray(char**, msgTbl_ev002B, 0x2BF1458, 5);
