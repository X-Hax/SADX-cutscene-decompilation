#pragma once
#include "SADXModLoader.h"
#include "SADXEventStructs.h"

//Leaked Symbols
ObjectFunc(FreeTask, 0x40B6C0);
FunctionPointer(void, SetBankDir, (signed int soundlist), 0x4238E0);
FunctionPointer(void, BGM_Play, (MusicIDs song), 0x425690);
FunctionPointer(void, dsStop_id, (int id), 0x424240);
FunctionPointer(void, dsStop_all, (), 0x424460);
FunctionPointer(void, dsPlay_oneshot_v, (int tone, int id, int pri,
	int volofs, float x, float y, float z), 0x424FC0);
VoidFunc(BGM_Stop, 0x4256B0);
VoidFunc(EV_PadOn, 0x42F610);
VoidFunc(EV_PadOff, 0x42F620);
VoidFunc(EV_CanselOn, 0x42F630);
FunctionPointer(void, EV_Msg, (char* str), 0x42FB20);
VoidFunc(EV_MsgClose, 0x42FBB0);
VoidFunc(EV_MsgCls, 0x42FC20);
FunctionPointer(ObjectMaster*, EV_GetPlayer, (int no), 0x42FC40);
FunctionPointer(void, EV_FreeObject, (ObjectMaster** tp), 0x42FC50);
FunctionPointer(void, EV_SetPos, (ObjectMaster* tp, float x, float y, float z), 0x42FC70);
FunctionPointer(void, EV_SetAng, (ObjectMaster* tp, int x, int y, int z), 0x42FCD0);
FunctionPointer(void, EV_SetMode, (ObjectMaster* tp, int mode), 0x42FD20);
FunctionPointer(void, EV_SetShadow, (ObjectMaster* tp, float size), 0x42FD40);
FunctionPointer(void, EV_CreatePlayer, (int n, void(__cdecl* func)(ObjectMaster*), float px, float py, float pz, int ax, int ay, int az), 0X42FD80);
FunctionPointer(void, EV_RemovePlayer, (int n), 0x42FDE0);
FunctionPointer(void, EV_SetAction, (ObjectMaster* tp, NJS_ACTION* ap, NJS_TEXLIST* lp, float speed, int mode, int linkframe), 0x42FE00);
FunctionPointer(void, EV_SetMotion, (ObjectMaster* tp, NJS_OBJECT* op, NJS_MOTION* mp, NJS_TEXLIST* lp, float speed, int mode, int linkframe), 0x42FE20);
ObjectFunc(EV_ClrAction, 0x42FE40);
FunctionPointer(void, EV_SetPath, (ObjectMaster* tp, EPATHTAG* path, float speed, int mode), 0x42FE60);
ObjectFunc(EV_ClrPath, 0x42FE80);
ObjectFunc(EV_LookFree, 0x42FFB0);
FunctionPointer(void, EV_LookObject, (ObjectMaster* tp, ObjectMaster* target, float x, float y, float z), 0x42FFD0);
FunctionPointer(void, EV_LookPoint, (ObjectMaster* tp, float x, float y, float z), 0x430000);
ObjectFunc(EV_MoveFree, 0x430060);
FunctionPointer(void, EV_MovePoint, (ObjectMaster* tp, float x, float y, float z), 0x430080);
FunctionPointer(void, EV_MovePoint2, (ObjectMaster* tp, float x, float y, float z, float s, float a), 0x4300D0);
FunctionPointer(void, EV_MoveRotation, (ObjectMaster* tp, int x, int y, int z), 0x430120);
VoidFunc(EV_CameraOn, 0x4303E0);
VoidFunc(EV_CameraOff, 0x4304B0);
FunctionPointer(void, EV_CameraAng, (int mode, int time, int x, int y, int z), 0x430C90);
FunctionPointer(void, EV_CameraPos, (int mode, int time, float x, float y, float z), 0x430D00);
VoidFunc(EV_CameraTargetFree, 0x430E50);
FunctionPointer(void, EV_CameraTargetObj, (int mode, int time, ObjectMaster* tp, float x, float y, float z, int az), 0x430EE0);
VoidFunc(EV_CameraChaseFree, 0x430F60);
ObjectFunc(EV_CameraChase, 0x430F70);
FunctionPointer(void, EV_CameraChaseRM, (int mode, int time, ObjectMaster* tp, float height, int x0, int y0, int z0, float d0, int x1, int y1, int z1, float d1)
	, 0x430FC0);
FunctionPointer(void, EV_CameraPerspective, (int mode, int time, int ang), 0x431060);
FunctionPointer(void, EV_SetFace, (ObjectMaster* tp, char* str), 0x4310D0);
ObjectFunc(EV_ClrFace, 0x4310F0);
VoidFunc(EV_SerifStop, 0x431110);
FunctionPointer(void, EV_Wait, (int time), 0x4314D0);
FunctionPointer(void, EV_MsgW, (int time, char* str), 0x431640);
FunctionPointer(void, EV_CreateObject, (ObjectMaster** tp, float px, float py, float pz, int ax, int ay, int az), 0x431670);
FunctionPointer(void, EV_InitPlayer, (int n), 0x431780);
ObjectFunc(EV_WaitAction, 0x431810);
ObjectFunc(EV_WaitPath, 0x431840);
FunctionPointer(void, EV_PlayPad, (int no, PADREC_DATA_TAG* tag), 0x431870);
ObjectFunc(EV_WaitMove, 0x4318D0);
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
ObjectFunc(stopObject, 0x6EBAB0);
VoidFunc(stopObjectAll, 0x6EBB00);
FunctionPointer(void, moveObject, (ObjectMaster* obj, float st_x, float st_y, float st_z, float end_x, float end_y, float end_z, int frame), 0x6EC2B0);
FunctionPointer(void, moveObjectAngle2, (ObjectMaster* obj, float st_x, float st_y, float st_z,
	float en_x, float en_y, float en_z, int st_ang_x, int st_ang_y, int st_ang_z,
	int en_ang_x, int en_ang_y, int en_ang_z, signed int frame), 0x6EC580);
FunctionPointer(void, moveObjectOn, (ObjectMaster* tp, float x, float y, float z, int frame, ObjectMaster* dest_obj), 0x6EC6D0);
FunctionPointer(void, addmotModel, (int model, NJS_ACTION* action, int mot_id), 0x6ECAC0);
FunctionPointer(void, playModel, (int model_id, int mot_id, float mot_spd, int loop_num), 0x6ECAE0);
FunctionPointer(ObjectMaster*, getobjModel, (int model_id), 0x6ECB40);
FunctionPointer(void, deleteModel, (int model_id), 0x6ECB50);
FunctionPointer(void, createModelEC, (float pos_x, float pos_y, float pos_z, int ang_x, int ang_y,
	int ang_z, float scl_x, float scl_y, float scl_z, NJS_OBJECT* model, NJS_TEXLIST* texlist,
	int model_id), 0x6ECF20);
FunctionPointer(ObjectMaster*, CTikalLight_Create, (float x, float y, float z), 0x6ED090);
FunctionPointer(void, effect_delete, (__int16 ef_num), 0x6ED490);
FunctionPointer(void, effect_create2, (ObjectMaster* obj, int ef_num, float ef_x,
	float ef_y, float ef_z, char* ef_name), 0x6ED770);
FunctionPointer(void, effect_size_change, (int ef_num, float speed_x, float speed_y), 0x6ED950);
VoidFunc(crushLightOff, 0x6ED9A0);
FunctionPointer(void, crushLightOn, (float pos_x, float pos_y, float pos_z, int crushLightNum, int life,
	float start_width, float end_width, int start_col, int end_col), 0x6EDA20);
FunctionPointer(void, effect_scl, (int ef_num, float sx, float sy), 0x6ED8E0);
VoidFunc(DeleteChaos0, 0x6EDAB0);
FunctionPointer(void, Jump2Chaos0, (float pos_x, float pos_y, float pos_z,
	float jumph, signed int frame), 0x6EDAD0);
FunctionPointer(void, Jump3Chaos0, (float pos_x, float pos_y, float pos_z,
	float jumph, signed int frame), 0x6EDBA0);
FunctionPointer(void, MoveChaos0, (float pos_x, float pos_y, float pos_z, signed int frame), 0x6EDC70);
FunctionPointer(ObjectMaster*, GetChaos0, (), 0x6EDCD0);
VoidFunc(ToWaterChaos0, 0x6EDD00);
VoidFunc(ToHumanChaos0, 0x6EDD20);
VoidFunc(SetWaterChaos0, 0x6EDD80);
FunctionPointer(void, CreateChaos0, (float pos_x, float pos_y, float pos_z,
	int ang_x, int ang_y, int ang_z, signed int cng_int), 0x6EE930);
FunctionPointer(ObjectMaster*, EV_Alife, (), 0x6EF2C0);
FunctionPointer(ObjectMaster*, COverlayCreate, (float s, float a, float r, float g, float b), 0x6EF480);
FunctionPointer(void, COverlaySetSpeed, (ObjectMaster* _this, float s), 0x6EF4C0);
FunctionPointer(ObjectMaster*, CIchimaie2_Create, (NJS_TEXLIST* texlistp, char mode), 0x6EF680);
FunctionPointer(void, CIchimaie2_SetDstAlpha, (ObjectMaster* _this, float alpha, int frame), 0x6EF6F0);
FunctionPointer(ObjectMaster*, CIchimaie2_SetPriority, (ObjectMaster* _this, float pri), 0x6EF710);
FunctionPointer(ObjectMaster*, CSkyWalk_create2, (ObjectMaster* obj, float height), 0x6EF9C0);
FunctionPointer(ObjectMaster*, SetEventBirdie0, (), 0x6F0070);
FunctionPointer(ObjectMaster*, SetEventBirdie1, (), 0x6F00A0);
FunctionPointer(ObjectMaster*, SetEventBirdie2, (), 0x6F00D0);
FunctionPointer(void, create_eggmoble, (float x, float y, float z, int ax, int ay, int az), 0x6F0940);
VoidFunc(delete_eggmoble, 0x6F09A0);
FunctionPointer(void, ChgEggMobleMod, (char mode), 0x6F09C0);
FunctionPointer(void, ChgEggMobleSMod, (char mode), 0x6F09E0);
FunctionPointer(void, eggmoble_move_normal, (float x, float y, float z, signed int frame), 0x6F0A00);
FunctionPointer(void, eggmoble_move_rapid, (float x, float y, float z, signed int frame), 0x6F0A60);
FunctionPointer(void, eggmoble_turn, (signed int ax, signed int ay, signed int az, signed int frame, char efmode), 0x6F0AC0);
FunctionPointer(void, eggmoble_moveandturn, (float x, float y, float z, signed int ax, signed int ay, signed int az, signed int frame, char efmode), 0x6F0B20);
FunctionPointer(void, seteggmobleparam, (float updown_rat, int updown_acc), 0x6F0BC0);
FunctionPointer(ObjectMaster*, GetEggMobleTask, (), 0x6F0BF0);
FunctionPointer(void, chg_frogshape, (char shapeNo), 0x6F1F60);
FunctionPointer(ObjectMaster*, set_shapefrog, (), 0x6F2330);
VoidFunc(StgChaos6CtrlOff, 0x6F2360);
FunctionPointer(void, StgChaos6CtrlOn, (float pos_x, float pos_y, float pos_z, int ang_x, int ang_y, int ang_z, int rot_spd), 0x6F24B0);
VoidFunc(DeleteChaos4, 0x6F25A0);
FunctionPointer(void, ChangeMotionSpeedChaos4, (float mod_spd), 0x6F25C0);
FunctionPointer(void, CreateChaos4, (float pos_, float pos_y, float pos_z, int ang_x, int ang_y, int ang_z, signed int cng_int), 0x6F2AB0);
FunctionPointer(void, Create_e102lightning, (float x, float y, float z, int childtask_num), 0x6F2F60);
VoidFunc(Delete_e102lightning, 0x6F2FB0);
FunctionPointer(ObjectMaster*, CObjSmoke_Create, (), 0x6F3450);
FunctionPointer(ObjectMaster*, CreateCaptureBeam, (float x, float y, float z, int ax, int ay, int az), 0x6F39C0);
ObjectFunc(delete_capturebeam, 0x6F3A20);
FunctionPointer(void, ChgCaptureMod, (ObjectMaster* tp, char mode), 0x6F3A40);
FunctionPointer(void, SetCaptureParam, (ObjectMaster* tp, float sclx, float scly, float sclz, float scl_large_spd, float scl_small_spd, signed int rot_spd), 0x6F3A60);
VoidFunc(DeleteChaos2, 0x6F53F0);
VoidFunc(ToHumanChaos2, 0x6F5410);
FunctionPointer(void, ChangeMotionSpeedChaos2, (float mot_spd), 0x6F5430);
FunctionPointer(void, SetPositionChaos2, (float pos_x, float pos_y, float pos_z), 0x6F5450);
FunctionPointer(void, SetAngleChaos2, (int ang_x, int ang_y, int ang_z), 0x6F5470);
VoidFunc(SetWaterChaos2, 0x6F5490);
FunctionPointer(void, CreateChaos2, (float pos_x, float pos_y, float pos_z, int ang_x, int ang_y, int ang_z, signed int cng_int), 0x6F5A70);
ObjectFunc(throughplayer_on, 0x6F5B50);
ObjectFunc(throughplayer_off, 0x6F5B90);
VoidFunc(DeleteChaos1, 0x6F5BE0);
VoidFunc(ToHumanChaos1, 0x6F5C20);
FunctionPointer(void, ChangeMotionSpeedChaos1, (float mot_spd), 0x6F5C40);
VoidFunc(SetWaterChaos1, 0x6F5C80);
FunctionPointer(void, CreateChaos1, (float pos_x, float pos_y, float pos_z, int ang_x,
	int ang_y, int ang_z, int cng_int), 0x6F6120);
VoidFunc(CEcCloud_Stop, 0x6F6690);
FunctionPointer(void, CEcCloud_Start, (float scale, int num), 0x6F6810);
FunctionPointer(ObjectMaster*, set_amy, (), 0x6F6B20);
FunctionPointer(void, setamyparam, (float spd), 0x6F6B40);
FunctionPointer(ObjectMaster*, mghand_init, (float x, float y, float z, int ax, int ay, int az), 0x6F6F30);
FunctionPointer(void, chgMghandMod, (ObjectMaster* obj, char a2), 0x6F6FC0);
FunctionPointer(void, mghandsetspd, (ObjectMaster* obj, int angspd_x, int angspd_y), 0x6F6FE0);
VoidFunc(DeleteEggmoble1, 0x6F7020);
FunctionPointer(void, MoveEggmoble1, (float tar_x, float tar_y, float tar_z), 0x6F7040);
FunctionPointer(void, SetEggmoble1, (float pos_x, float pos_y, float pos_z, int ang_x, int ang_y, int ang_z), 0x6F7090);
VoidFunc(JetNoneEggmoble1, 0x6F70D0);
VoidFunc(JetNormalEggmoble1, 0x6F70E0);
VoidFunc(JetLargeEggmoble1, 0x6F70F0);
VoidFunc(JetMaxEggmoble1, 0x6F7100);
FunctionPointer(void, ChangeSpeedEggmoble1, (float speed), 0x6F7110);
FunctionPointer(void, CreateEggmoble1, (float x, float y, float z, int angx, int angy, int angz), 0x6F78A0);
FunctionPointer(ObjectMaster*, object_tr1_s_t1_body_s_t1_body, (), 0x6F89A0);
FunctionPointer(ObjectMaster*, CSukiari_Create, (int color, NJS_POINT2* a2, int pointn), 0x6F8AB0);
FunctionPointer(void, CSukiari_Alpha, (ObjectMaster* a1, unsigned char alpha, int frame), 0x6F8B40);
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


/*Unofficial names, a few of these seem to be local to specific events
so I'll probably add them to their files eventually.*/
FunctionPointer(void, SetClip_ECScene, (int clipLevel), 0x52F400);
FunctionPointer(void, SetClip_EV0016, (), 0x52FB20);
VoidFunc(SonicModel_EV0017, 0x6DA2B0);
VoidFunc(SonicModel_initializer_EV0017, 0x6DA2C0);
VoidFunc(tornado_cons_EV0003, 0x6E8E10);
VoidFunc(tornado_dest_EV0003, 0x6E8E30);
FunctionPointer(void, MoveChaosPuddle_EV0002, (float pos_x, float pos_y, float pos_z, signed int frame), 0x6E9A60);
FunctionPointer(void, Chaos0_EnterDrain_EV0002, (signed int spd), 0x6E9AC0);
FunctionPointer(void, initElemChaos0Task_EV0002, (float xPos, float yPos, float zPos, int yAng), 0x6E9D90);
VoidFunc(EV_FreeFadeToWhite, 0x6EFB30);
FunctionPointer(void, EV_FadeToWhite, (int a1, int a2, int a3), 0x6EFD00);
FunctionPointer(void, EV_FreeWaterRipple, (int a1), 0x6F1B80);
FunctionPointer(void, EV_CreateWaterRipple, (float x, float y, float z, float a4, float a5, int a6, int a7, int a8), 0x6F1D30);
VoidFunc(p_SonicObj_initializer_EV000D, 0x6DF420);
VoidFunc(p_SonicObj_EV000D, 0x6DF440);
FunctionPointer(ObjectMaster*, EggViperDebrisGenerator, (float x, float y, float z, float sx,
	float sy, float sz, __int16 a7), 0x6F9B40);










