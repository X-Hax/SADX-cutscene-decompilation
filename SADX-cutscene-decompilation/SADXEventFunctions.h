#pragma once
#include "SADXModLoader.h"
#include "SADXEventStructs.h"

//Leaked Symbols
FunctionPointer(void, SetBankDir, (signed int soundlist), 0x4238E0);
FunctionPointer(void, dsPlay_oneshot, (int tone, int id, int pri, int volofs), 0x423D70);
FunctionPointer(void, dsPlay_timer, (int tone, int id, int pri, int volofs, int timer), 0x423F50);
FunctionPointer(void, dsPlay_timer_v, (int tone, int id, int pri, int volofs, int timer, float x, float y, float z), 0x424000);
FunctionPointer(void, dsStop_num, (int tone), 0x424210);
FunctionPointer(void, dsStop_id, (int id), 0x424240);
FunctionPointer(void, dsStop_all, (), 0x424460);
FunctionPointer(void, dsPlay_oneshot_v, (int tone, int id, int pri,
	int volofs, float x, float y, float z), 0x424FC0);
FunctionPointer(void, BGM_Play, (MusicIDs song), 0x425690);
VoidFunc(BGM_Stop, 0x4256B0);
VoidFunc(EV_PadOn, 0x42F610);
VoidFunc(EV_PadOff, 0x42F620);
VoidFunc(EV_CanselOn, 0x42F630);
FunctionPointer(void, EV_Msg, (char* str), 0x42FB20);
VoidFunc(EV_MsgClose, 0x42FBB0);
VoidFunc(EV_MsgCls, 0x42FC20);
FunctionPointer(task*, EV_GetPlayer, (int no), 0x42FC40);
FunctionPointer(void, EV_FreeObject, (task** tp), 0x42FC50);
FunctionPointer(void, EV_SetPos, (task* tp, float x, float y, float z), 0x42FC70);
FunctionPointer(void, EV_SetAng, (task* tp, int x, int y, int z), 0x42FCD0);
FunctionPointer(void, EV_SetMode, (task* tp, int mode), 0x42FD20);
FunctionPointer(void, EV_SetShadow, (task* tp, float size), 0x42FD40);
FunctionPointer(void, EV_SetColli, (task* tp, float size), 0x42FD60);
FunctionPointer(void, EV_CreatePlayer, (int n, void(__cdecl* func)(task*), float px, float py, float pz, int ax, int ay, int az), 0X42FD80);
FunctionPointer(void, EV_RemovePlayer, (int n), 0x42FDE0);
FunctionPointer(void, EV_SetAction, (task* tp, NJS_ACTION* ap, NJS_TEXLIST* lp, float speed, int mode, int linkframe), 0x42FE00);
FunctionPointer(void, EV_SetMotion, (task* tp, NJS_OBJECT* op, NJS_MOTION* mp, NJS_TEXLIST* lp, float speed, int mode, int linkframe), 0x42FE20);
FunctionPointer(void, EV_ClrAction, (task* tp), 0x42FE40);
FunctionPointer(void, EV_SetPath, (task* tp, EPATHTAG* path, float speed, int mode), 0x42FE60);
FunctionPointer(void, EV_ClrPath, (task* tp), 0x42FE80);
FunctionPointer(void, EV_LookFree, (task* tp), 0x42FFB0);
FunctionPointer(void, EV_LookObject, (task* tp, task* target, float x, float y, float z), 0x42FFD0);
FunctionPointer(void, EV_LookPoint, (task* tp, float x, float y, float z), 0x430000);
FunctionPointer(void, EV_LookAngle, (task* tp, int x, int y, int z), 0x430030);
FunctionPointer(void, EV_MoveFree, (task* tp), 0x430060);
FunctionPointer(void, EV_MovePoint, (task* tp, float x, float y, float z), 0x430080);
FunctionPointer(void, EV_MovePoint2, (task* tp, float x, float y, float z, float s, float a), 0x4300D0);
FunctionPointer(void, EV_MoveRotation, (task* tp, int x, int y, int z), 0x430120);
VoidFunc(EV_CameraOn, 0x4303E0);
VoidFunc(EV_CameraOff, 0x4304B0);
FunctionPointer(void, EV_CameraAng, (int mode, int time, int x, int y, int z), 0x430C90);
FunctionPointer(void, EV_CameraPos, (int mode, int time, float x, float y, float z), 0x430D00);
FunctionPointer(void, EV_CameraPosORY, (char mode, int time, task* tp, float x, float y, float z), 0x430D70);
VoidFunc(EV_CameraTargetFree, 0x430E50);
FunctionPointer(void, EV_CameraTargetPos, (int mode, int time, float x, float y, float z, float az), 0x430E60);
FunctionPointer(void, EV_CameraTargetObj, (int mode, int time, task* tp, float x, float y, float z, int az), 0x430EE0);
VoidFunc(EV_CameraChaseFree, 0x430F60);
FunctionPointer(void, EV_CameraChase, (task* tp), 0x430F70);
FunctionPointer(void, EV_CameraChaseRM, (int mode, int time, task* tp, float height, int x0, int y0, int z0, float d0, int x1, int y1, int z1, float d1)
	, 0x430FC0);
FunctionPointer(void, EV_CameraPerspective, (int mode, int time, int ang), 0x431060);
FunctionPointer(void, EV_CameraPath, (cpathtag* path, float speed), 0x4310A0);
FunctionPointer(void, EV_SetFace, (task* tp, const char* str), 0x4310D0);
FunctionPointer(void, EV_ClrFace, (task* tp), 0x4310F0);
VoidFunc(EV_SerifStop, 0x431110);
FunctionPointer(void, EV_Wait, (int time), 0x4314D0);
FunctionPointer(void, EV_MsgW, (int time, char* str), 0x431640);
FunctionPointer(void, EV_CreateObject, (task** tp, float px, float py, float pz, int ax, int ay, int az), 0x431670);
FunctionPointer(void, EV_CreateObjectFunc, (task** a1, task* (*func)(void), float x, float y, float z, int rx, int ry, int rz), 0x4316C0);
FunctionPointer(void, EV_InitObject, (task* tp), 0x431730);
FunctionPointer(void, EV_InitPlayer, (int n), 0x431780);
FunctionPointer(void, EV_WaitAction, (task* tp), 0x431810);
FunctionPointer(void, EV_WaitPath, (task* tp), 0x431840);
FunctionPointer(void, EV_PlayPad, (int no, PADREC_DATA_TAG* tag), 0x431870);
FunctionPointer(void, EV_WaitMove, (task* tp), 0x4318D0);
VoidFunc(EV_SerifWait, 0x431900);
FunctionPointer(void, EV_SerifPlay, (int id), 0x431930);
FunctionPointer(void, tikal_dispSwitch, (int sw), 0x4A3520);
FunctionPointer(void, SetClip_0500, (int ClipLevel), 0x6007E0);
FunctionPointer(void, EventSe_Init, (int maxid), 0x64FC80);
VoidFunc(EventSe_Close, 0x64FCB0);
FunctionPointer(void, EventSe_Play, (int id, int se, int frame), 0x64FD00);
FunctionPointer(void, EventSe_Stop, (int id), 0x64FD40);
FunctionPointer(void, EventSe_Volume, (int id, int volume, int frame), 0x64FD80);
FunctionPointer(void, EventSe_Pan, (int id, int pan, int frame), 0x64FDB0);
FunctionPointer(void, EventSe_Pitch, (int id, int pitch, int frame), 0x64FDE0);
FunctionPointer(void, EventSe_Oneshot, (int se, int volume, int pan, int pitch), 0x64FE10);
FunctionPointer(void, shadowOn, (char num, float pos_x, float pos_y, float pos_z, signed int bigInt, signed int smallInt, float scaleMax), 0x6A6680);
FunctionPointer(void, stopObject, (task* tp), 0x6EBAB0);
VoidFunc(stopObjectAll, 0x6EBB00);
FunctionPointer(void, moveObject, (task* obj, float st_x, float st_y, float st_z, float end_x, float end_y, float end_z, int frame), 0x6EC2B0);
FunctionPointer(void, moveObjectAngle, (task* obj,
	float st_x, float st_y, float st_z,
	float end_x, float end_y, float end_z,
	float st_ang_x, float st_ang_y, float st_ang_z,
	float end_ang_x, float end_ang_y, float end_ang_z,
	signed int frame), 0x6EC3A0);
FunctionPointer(void, moveObjectAngle2, (task* obj, float st_x, float st_y, float st_z,
	float en_x, float en_y, float en_z, int st_ang_x, int st_ang_y, int st_ang_z,
	int en_ang_x, int en_ang_y, int en_ang_z, signed int frame), 0x6EC580);
FunctionPointer(void, moveObjectOn, (task* tp, float x, float y, float z, int frame, task* dest_obj), 0x6EC6D0);
FunctionPointer(void, moveObjectOnAngle, (task* obj, float far_x, float far_y, float far_z, int ang_x, int ang_y, int ang_z, int frame, task* dest_obj), 0x6EC790);
FunctionPointer(void, moveObjectRightHand, (task* obj, char player_no, float far_x, float far_y, float far_z, int frame), 0x6ECA20);
FunctionPointer(void, addmotModel, (int model, NJS_ACTION* action, int mot_id), 0x6ECAC0);
FunctionPointer(void, playModel, (int model_id, int mot_id, float mot_spd, int loop_num), 0x6ECAE0);
FunctionPointer(task*, getobjModel, (int model_id), 0x6ECB40);
FunctionPointer(void, deleteModel, (int model_id), 0x6ECB50);
FunctionPointer(void, createModelEC, (float pos_x, float pos_y, float pos_z, int ang_x, int ang_y,
	int ang_z, float scl_x, float scl_y, float scl_z, NJS_OBJECT* model, NJS_TEXLIST* texlist,
	int model_id), 0x6ECF20);
FunctionPointer(task*, CTikalLight_Create, (float x, float y, float z), 0x6ED090);
FunctionPointer(void, effect_delete, (__int16 ef_num), 0x6ED490);
FunctionPointer(void, effect_create, (task* obj, __int16 ef_num, float ef_x, float ef_y, float ef_z, NJS_TEXLIST* ef_name), 0x6ED580);
FunctionPointer(void, effect_create2, (task* obj, int ef_num, float ef_x, float ef_y, float ef_z, NJS_TEXLIST* ef_name), 0x6ED770);
FunctionPointer(void, effect_color, (__int16 ef_num, float col_a, float col_r, float col_g, float col_b), 0x6ED910);
FunctionPointer(void, effect_size_change, (int ef_num, float speed_x, float speed_y), 0x6ED950);
VoidFunc(crushLightOff, 0x6ED9A0);
FunctionPointer(void, crushLightOn, (float pos_x, float pos_y, float pos_z, int crushLightNum, int life,
	float start_width, float end_width, unsigned int start_col, unsigned int end_col), 0x6EDA20);
FunctionPointer(void, effect_scl, (int ef_num, float sx, float sy), 0x6ED8E0);
VoidFunc(DeleteChaos0, 0x6EDAB0);
FunctionPointer(void, Jump2Chaos0, (float pos_x, float pos_y, float pos_z,
	float jumph, signed int frame), 0x6EDAD0);
FunctionPointer(void, Jump3Chaos0, (float pos_x, float pos_y, float pos_z,
	float jumph, signed int frame), 0x6EDBA0);
FunctionPointer(void, MoveChaos0, (float pos_x, float pos_y, float pos_z, signed int frame), 0x6EDC70);
FunctionPointer(task*, GetChaos0, (), 0x6EDCD0);
VoidFunc(ToWaterChaos0, 0x6EDD00);
VoidFunc(ToHumanChaos0, 0x6EDD20);
VoidFunc(SetWaterChaos0, 0x6EDD80);
FunctionPointer(void, ChangeMotspd, (float mod_spd), 0x6EDCE0);
FunctionPointer(void, SetPositionChaos0, (float pos_x, float pos_y, float pos_z), 0x6EDD40);
FunctionPointer(void, CreateChaos0, (float pos_x, float pos_y, float pos_z,
	int ang_x, int ang_y, int ang_z, signed int cng_int), 0x6EE930);
FunctionPointer(void, EV_Alife_FaceChange, (task* tp, int texid), 0x6EEFD0);
FunctionPointer(task*, EV_Alife, (), 0x6EF2C0);
FunctionPointer(task*, COverlayCreate, (float s, float a, float r, float g, float b), 0x6EF480);
FunctionPointer(void, COverlaySetSpeed, (task* _this, float s), 0x6EF4C0);
FunctionPointer(void, COverlaySetAlpha, (task* _this, float a), 0x6EF4D0);
FunctionPointer(void, COverlaySetColor, (task* _this, float r, float g, float b), 0x6EF4E0);
FunctionPointer(void, COverlaySetPriority, (task* _this, float p), 0x6EF500);
FunctionPointer(task*, CIchimaie2_Create, (NJS_TEXLIST* texlistp, char mode), 0x6EF680);
FunctionPointer(void, CIchimaie2_SetDstAlpha, (task* _this, float alpha, int frame), 0x6EF6F0);
FunctionPointer(task*, CIchimaie2_SetPriority, (task* _this, float pri), 0x6EF710);
FunctionPointer(task*, CIchimaie2_SetTextureId, (task* _this, int id), 0x6EF720);
FunctionPointer(void, CIchimaie2_SetBlendingMode, (task* _this, int index, char mode), 0x6EF730);
VoidFunc(deleteScanLine, 0x6EF750);
FunctionPointer(void, createScanLine, (unsigned __int8 a, unsigned __int8 r, unsigned __int8 g, unsigned __int8 b, int res), 0x6EF940);
FunctionPointer(task*, CSkyWalk_create2, (task* obj, float height), 0x6EF9C0);
FunctionPointer(void, efWhiteOn, (int in_int, int out_int), 0x6EFCA0);
FunctionPointer(task*, SetEventBirdie0, (), 0x6F0070);
FunctionPointer(task*, SetEventBirdie1, (), 0x6F00A0);
FunctionPointer(task*, SetEventBirdie2, (), 0x6F00D0);
FunctionPointer(void, create_eggmoble, (float x, float y, float z, int ax, int ay, int az), 0x6F0940);
VoidFunc(delete_eggmoble, 0x6F09A0);
FunctionPointer(void, ChgEggMobleMod, (char mode), 0x6F09C0);
FunctionPointer(void, ChgEggMobleSMod, (char mode), 0x6F09E0);
FunctionPointer(void, eggmoble_move_normal, (float x, float y, float z, signed int frame), 0x6F0A00);
FunctionPointer(void, eggmoble_move_rapid, (float x, float y, float z, signed int frame), 0x6F0A60);
FunctionPointer(void, eggmoble_turn, (signed int ax, signed int ay, signed int az, signed int frame, char efmode), 0x6F0AC0);
FunctionPointer(void, eggmoble_moveandturn, (float x, float y, float z, signed int ax, signed int ay, signed int az, signed int frame, char efmode), 0x6F0B20);
FunctionPointer(void, seteggmobleparam, (float updown_rat, int updown_acc), 0x6F0BC0);
FunctionPointer(task*, GetEggMobleTask, (), 0x6F0BF0);
FunctionPointer(task*, Create_SphereBomb, (float x, float y, float z, __int16 frame, float sphere_radius, float scl_spd), 0x6F0D10);
FunctionPointer(void, ChgSphereBombMode, (task* tp, char mode), 0x6F0D90);
FunctionPointer(void, createWaveCtrl, (float x, float y, float z, float a4, float a5, int a6, int a7, int a8), 0x6F1D30);
FunctionPointer(void, chg_frogshape, (char shapeNo), 0x6F1F60);
FunctionPointer(task*, set_shapefrog, (), 0x6F2330);
VoidFunc(StgChaos6CtrlOff, 0x6F2360);
FunctionPointer(void, StgChaos6SetPos, (float pos_x, float pos_y, float pos_z), 0x6F2400);
FunctionPointer(void, StgChaos6SetAng, (float ang_x, float ang_y, float ang_z), 0x6F2450);
FunctionPointer(void, StgChaos6CtrlOn, (float pos_x, float pos_y, float pos_z, int ang_x, int ang_y, int ang_z, int rot_spd), 0x6F24B0);
VoidFunc(DeleteChaos4, 0x6F25A0);
FunctionPointer(void, ChangeMotionSpeedChaos4, (float mod_spd), 0x6F25C0);
FunctionPointer(void, CreateChaos4, (float pos_, float pos_y, float pos_z, int ang_x, int ang_y, int ang_z, signed int cng_int), 0x6F2AB0);
FunctionPointer(void, EvCreateKiran2, (NJS_POINT3* pos, NJS_POINT3* velo, float scl, float scl_spd), 0x6F2C40);
FunctionPointer(void, Create_e102lightning, (float x, float y, float z, int childtask_num), 0x6F2F60);
VoidFunc(Delete_e102lightning, 0x6F2FB0);
FunctionPointer(void, sandStorm, (int frame, int alpha), 0x6F2FD0);
VoidFunc(deleteBoot, 0x6F3000);
FunctionPointer(void, createBoot, (int wait_frame, int sstorm_frame, int poweron_frame, int adjust_frame), 0x6F32E0);
VoidFunc(CreateBootSleep, 0x6F3350);
FunctionPointer(task*, CObjSmoke_Create, (), 0x6F3450);
FunctionPointer(void, SetE102Effect, (double x, double y, double z), 0x6F3650);
FunctionPointer(void, ChgEffectMod, (char mode), 0x6F3690);
VoidFunc(DelE102Effect, 0x6F36B0);
VoidFunc(E101Factory_Create, 0x6F3700);
VoidFunc(E101Factory_Delete, 0x6F3720);
FunctionPointer(task*, CreateCaptureBeam, (float x, float y, float z, int ax, int ay, int az), 0x6F39C0);
FunctionPointer(void, light_delete, (task* tp), 0x6F3A20);
FunctionPointer(void, ChgCaptureMod, (task* tp, char mode), 0x6F3A40);
FunctionPointer(void, SetCaptureParam, (task* tp, float sclx, float scly, float sclz, float scl_large_spd, float scl_small_spd, signed int rot_spd), 0x6F3A60);
FunctionPointer(task*, ev_e105, (), 0x6F3D10);
FunctionPointer(task*, ev_e104, (), 0x6F3F40);
FunctionPointer(task*, ev_e103, (), 0x6F4180);
FunctionPointer(task*, light_create, (float x, float y, float z), 0x6F43D0);
FunctionPointer(void, light_turn, (task* tp, float x, float y, float z), 0x6F4400);
VoidFunc(frog_create, 0x6F44F0);
VoidFunc(frog_delete, 0x6F4530);
VoidFunc(dark_on, 0x6F4600);
VoidFunc(dark_off, 0x6F4620);
FunctionPointer(task*, ev_e101, (), 0x6F49D0);
FunctionPointer(void, MemeCreate, (int num), 0x6F53B0);
VoidFunc(MemeDelete, 0x6F53D0);
VoidFunc(DeleteChaos2, 0x6F53F0);
VoidFunc(ToHumanChaos2, 0x6F5410);
FunctionPointer(void, ChangeMotionSpeedChaos2, (float mot_spd), 0x6F5430);
FunctionPointer(void, SetPositionChaos2, (float pos_x, float pos_y, float pos_z), 0x6F5450);
FunctionPointer(void, SetAngleChaos2, (int ang_x, int ang_y, int ang_z), 0x6F5470);
VoidFunc(SetWaterChaos2, 0x6F5490);
FunctionPointer(void, CreateChaos2, (float pos_x, float pos_y, float pos_z, int ang_x, int ang_y, int ang_z, signed int cng_int), 0x6F5A70);
FunctionPointer(void, throughplayer_on, (task* tp), 0x6F5B50);
FunctionPointer(void, throughplayer_off, (task* tp), 0x6F5B90);
VoidFunc(DeleteChaos1, 0x6F5BE0);
VoidFunc(ToWaterChaos1, 0x6F5C00);
VoidFunc(ToHumanChaos1, 0x6F5C20);
FunctionPointer(void, ChangeMotionSpeedChaos1, (float mot_spd), 0x6F5C40);
FunctionPointer(void, SetPositionChaos1, (float pos_x, float pos_y, float pos_z), 0x6F5C60);
VoidFunc(SetWaterChaos1, 0x6F5C80);
FunctionPointer(void, CreateChaos1, (float pos_x, float pos_y, float pos_z, int ang_x,
	int ang_y, int ang_z, int cng_int), 0x6F6120);
VoidFunc(StgChaos2CtrlOff, 0x6F6210);
VoidFunc(StgChaos2Human2Water, 0x6F6290);
VoidFunc(StgChaos2Water2Human, 0x6F62A0);
FunctionPointer(void, StgChaos2Action, (float ratio), 0x6F62B0);
FunctionPointer(void, StgChaos2BubbleAdd, (float num), 0x6F62C0);
FunctionPointer(void, StgChaos2SetPos, (float pos_x, float pos_y, float pos_z), 0x6F62D0);
FunctionPointer(void, StgChaos2SetAng, (int ang_x, int ang_y, int ang_z), 0x6F6320);
FunctionPointer(void, StgChaos2CtrlOn, (float pos_x, float pos_y, float pos_z, int ang_x, int ang_y, int ang_z, int rot_spd), 0x6F6380);
VoidFunc(CEcCloud_Stop, 0x6F6690);
FunctionPointer(void, CEcCloud_Start, (float scale, int num), 0x6F6810);
FunctionPointer(task*, set_amy, (), 0x6F6B20);
FunctionPointer(void, setamyparam, (float spd), 0x6F6B40);
FunctionPointer(task*, mghand_init, (float x, float y, float z, int ax, int ay, int az), 0x6F6F30);
FunctionPointer(void, chgMghandMod, (task* obj, char a2), 0x6F6FC0);
FunctionPointer(void, mghandsetspd, (task* obj, int angspd_x, int angspd_y), 0x6F6FE0);
VoidFunc(fadein_delete, 0x6F7000);
VoidFunc(DeleteEggmoble1, 0x6F7020);
FunctionPointer(void, MoveEggmoble1, (float tar_x, float tar_y, float tar_z), 0x6F7040);
FunctionPointer(void, SetEggmoble1, (float pos_x, float pos_y, float pos_z, int ang_x, int ang_y, int ang_z), 0x6F7090);
VoidFunc(JetNoneEggmoble1, 0x6F70D0);
VoidFunc(JetNormalEggmoble1, 0x6F70E0);
VoidFunc(JetLargeEggmoble1, 0x6F70F0);
VoidFunc(JetMaxEggmoble1, 0x6F7100);
FunctionPointer(void, ChangeSpeedEggmoble1, (float speed), 0x6F7110);
FunctionPointer(void, CreateEggmoble1, (float x, float y, float z, int angx, int angy, int angz), 0x6F78A0);
FunctionPointer(void, EV_eggmoble2, (float x, float y, float z, int ax, int ay, int az), 0x6F7D80);
FunctionPointer(void, ChgEgg2Mod, (char mode), 0x6F7DF0);
VoidFunc(EV_deleggmoble2, 0x6F7E00);
FunctionPointer(void, ShadowEggmoble2, (float size, float height), 0x6F7E20);
FunctionPointer(task*, SetEventObjectSSCar, (), 0x6F7FE0);
FunctionPointer(void, SetEggMissileParam, (task*, float), 0x6F8300);
FunctionPointer(void, SetMissileEffect, (task*, char), 0x6F8320);
FunctionPointer(task*, object_tr1_s_t1_body_s_t1_body, (), 0x6F89A0);
FunctionPointer(task*, CSukiari_Create, (int color, NJS_POINT2* a2, int pointn), 0x6F8AB0);
FunctionPointer(void, CSukiari_Alpha, (task* a1, unsigned char alpha, int frame), 0x6F8B40);
FunctionPointer(task*, miles_with_ptr, (), 0x6F9570);
FunctionPointer(void, miles_motchg, (int num, float spd), 0x6F95A0);
VoidFunc(StgChaos0CtrlOff, 0x6F95D0);
FunctionPointer(void, StgChaos0SetPos, (float pos_x, float pos_y, float pos_z), 0x6F9650);
FunctionPointer(void, StgChaos0SetAng, (int ang_x, int ang_y, int ang_z), 0x6F96A0);
FunctionPointer(void, StgChaos0CtrlOn, (float pos_x, float pos_y, float pos_z,
	int ang_x, int ang_y, int ang_z, int rot_spd), 0x6F9840);
VoidFunc(EV_EggViperKesu, 0x7B5500);
VoidFunc(EV_EggViperEggmanToujou, 0x7B5570);
VoidFunc(EV_EggViperEggmanShaberu, 0x7B5580);
VoidFunc(EV_EggViperEggmanShaberiYame, 0x7B5590);
VoidFunc(EV_EggViperEggmanHikkomu, 0x7B55A0);
VoidFunc(EV_EggViperJoushou, 0x7B55B0);
FunctionPointer(void, EV_EggViperArawaru, (float xpos, float ypos, float zpos, int yang), 0x7B5CF0);

//Unofficial names
FunctionPointer(void, SetClip_ECScene, (int clipLevel), 0x52F400);
FunctionPointer(void, SetClip_EV0016, (), 0x52FB20);
VoidFunc(EV_FreeFadeToWhite, 0x6EFB30);
FunctionPointer(void, EV_FadeToWhite, (int a1, int a2, int a3), 0x6EFD00);
FunctionPointer(void, EV_FreeWaterRipple, (int a1), 0x6F1B80);
FunctionPointer(void, ptr_crashed, (task* tp), 0x6F9390);
FunctionPointer(task*, EggViperDebrisGenerator, (float x, float y, float z, float sx,
	float sy, float sz, __int16 a7), 0x6F9B40);
FunctionPointer(task*, missilefunc, (), 0x6F8610);
FunctionPointer(void, createChaos0_EV0088, (float pos_x, float pos_y, float pos_z, int ang), 0x691400);
VoidFunc(deleteChaos0_EV0088, 0x6910F0);


//Stuff that doesn't have an official name because it was part of the main event function in the 360 version:
VoidFunc(create_task_gattai_EV00C2, 0x674420);
VoidFunc(delete_task_gattai_EV00C2, 0x674480);
FunctionPointer(void, DelObjTask_EV00BB, (int id), 0x67B5B0);
VoidFunc(destroy_task_light_EV009A, 0x686990);
FunctionPointer(void, create_p_ShadowTask_EV009A, (float pos_x, float pos_y, float pos_z, int slangx, int length, float path_ypos), 0x686B10);
VoidFunc(create_task_light_EV009A, 0x686970);
VoidFunc(destroy_p_ShadowTask_EV009A, 0x6869B0);
VoidFunc(ChangeTornado2Model_EV0047, 0x6BA0A0);
VoidFunc(ChangeTornado2Model2_EV0047, 0x6BA0B0);
VoidFunc(ChangeTornado2Model_EV0048, 0x6B9280);
VoidFunc(ChangeTornado2Model2_EV0048, 0x6B9290);
VoidFunc(g_SonicObj_EV003B, 0x6BEE80);
VoidFunc(g_SonicObj_initializer_EV003B, 0x6BEEA0);
VoidFunc(g_SonicOrgObj_p_EV003B, 0x6BEEC0);
VoidFunc(g_SonicOrgObj_p_initializer_EV003B, 0x6BEF10);
VoidFunc(SonicModel_EV0017, 0x6DA2B0);
VoidFunc(SonicModel_initializer_EV0017, 0x6DA2C0);
VoidFunc(tornado_cons_EV0003, 0x6E8E10);
VoidFunc(tornado_dest_EV0003, 0x6E8E30);
FunctionPointer(void, MoveChaosPuddle_EV0002, (float pos_x, float pos_y, float pos_z, signed int frame), 0x6E9A60);
FunctionPointer(void, Chaos0_EnterDrain_EV0002, (signed int spd), 0x6E9AC0);
FunctionPointer(void, initElemChaos0Task_EV0002, (float xPos, float yPos, float zPos, int yAng), 0x6E9D90);
VoidFunc(p_SonicObj_initializer_EV000D, 0x6DF420);
VoidFunc(p_SonicObj_EV000D, 0x6DF440);
VoidFunc(CreateTaskGattaiEV004C, 0x6B5E40);
VoidFunc(FreeTaskGattaiEV004C, 0x6B5EA0);
VoidFunc(create_task_gattai_EV004D, 0x6B3250);
VoidFunc(kill_task_gattai_EV004D, 0x6B32B0);
FunctionPointer(void, MoveChaosPuddle_EV0088, (float pos_x, float pos_y, float pos_z, int frame), 0x691140);
FunctionPointer(void, destroy_p_shadowTask_EV0064, (char id), 0x6A6520);

//Character Functions
FunctionPointer(void, MilesTalesPrower, (task*), 0x461700);
FunctionPointer(void, KnucklesTheEchidna, (task*), 0x47A770);
FunctionPointer(void, E102, (task*), 0x483430);
FunctionPointer(void, AmyRose, (task*), 0x48ABF0);
FunctionPointer(void, BigTheCat, (task*), 0x490A00);
FunctionPointer(void, SonicTheHedgehog, (task*), 0x49A9B0);
FunctionPointer(void, Tikal, (task*), 0x7B40C0);
FunctionPointer(void, Eggman, (task*), 0x7B4EF0);
FunctionPointer(void, EggrobForEvent0, (task*), 0x4D3E00);

static const void* const deleteObjectPtr = (void*)0x67B6B0;
static inline void deleteObject(task** obj, int id, float scl_x, float scl_y, float scl_z, signed int frame)
{
	__asm
	{
		push [frame]
		push [scl_z]
		push [scl_y]
		push [scl_x]
		mov eax, [id]
		mov edi, [obj]
		call deleteObjectPtr
	}
}