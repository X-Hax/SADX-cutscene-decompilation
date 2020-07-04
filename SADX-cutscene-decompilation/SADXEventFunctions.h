#pragma once
#include "SADXModLoader.h"

//Leaked Symbols
ObjectFunc(FreeTask, 0x40B6C0);
FunctionPointer(void, SetBankDir, (signed int soundlist), 0x4238E0);
FunctionPointer(void, BGM_Play, (MusicIDs song), 0x425690);
VoidFunc(EV_PadOn, 0x42F610);
VoidFunc(EV_PadOff, 0x42F620);
VoidFunc(EV_CanselOn, 0x42F630);
FunctionPointer(void, EV_Msg, (char* str), 0x42FB20);
VoidFunc(EV_MsgClose, 0x42FBB0);
FunctionPointer(ObjectMaster*, EV_GetPlayer, (int no), 0x42FC40);
FunctionPointer(void, EV_FreeObject, (ObjectMaster** tp), 0x42FC50);
FunctionPointer(void, EV_SetPos, (ObjectMaster* tp, float x, float y, float z), 0x42FC70);
FunctionPointer(void, EV_SetAng, (ObjectMaster* tp, int x, int y, int z), 0x42FCD0);
FunctionPointer(void, EV_SetMode, (ObjectMaster* tp, int mode), 0x42FD20);
FunctionPointer(void, EV_SetAction, (ObjectMaster* tp, NJS_ACTION* ap, NJS_TEXLIST* lp, float speed, int mode, int linkframe), 0x42FE00);
ObjectFunc(EV_ClrAction, 0x42FE40);
ObjectFunc(EV_LookFree, 0x42FFB0);
FunctionPointer(void, EV_LookPoint, (ObjectMaster* tp, float x, float y, float z), 0x430000);
FunctionPointer(void, EV_MovePoint2, (ObjectMaster* tp, float x, float y, float z, float s, float a), 0x4300D0);
VoidFunc(EV_CameraOn, 0x4303E0);
VoidFunc(EV_CameraOff, 0x4304B0);
FunctionPointer(void, EV_CameraAng, (int mode, int time, int x, int y, int z), 0x430C90);
FunctionPointer(void, EV_CameraPos, (int mode, int time, float x, float y, float z), 0x430D00);
VoidFunc(EV_CameraTargetFree, 0x430E50);
FunctionPointer(void, EV_CameraTargetObj, (int mode, int time, ObjectMaster* tp, float x, float y, float z, int az), 0x430EE0);
VoidFunc(EV_CameraChaseFree, 0x430F60);
FunctionPointer(void, EV_CameraChaseRM, (int mode, int time, ObjectMaster* tp, float height, int x0, int y0, int z0, float d0, int x1, int y1, int z1, float d1)
    , 0x430FC0);
FunctionPointer(void, EV_SetFace, (ObjectMaster* tp, char* str), 0x4310D0);
ObjectFunc(EV_ClrFace, 0x4310F0);
FunctionPointer(void, EV_Wait, (int time), 0x4314D0);
FunctionPointer(void, EV_MsgW, (int time, char* str), 0x431640);
FunctionPointer(void, EV_InitPlayer, (int n), 0x431780);
FunctionPointer(void, EV_SerifPlay, (int id), 0x431930);
FunctionPointer(void, EventSe_Init, (int maxid), 0x64FC80);
VoidFunc(EventSe_Close, 0x64FCB0);
FunctionPointer(void, EventSe_Stop, (int id), 0x64FD40);
FunctionPointer(void, EventSe_Play, (int id, int se, int frame), 0x64FD00);
FunctionPointer(void, EventSe_Volume, (int id, int volume, int frame), 0x64FD80);
FunctionPointer(void, EventSe_Oneshot, (int se, int volume, int pan, int pitch), 0x64FE10);
VoidFunc(stopObjectAll, 0x6EBB00);
FunctionPointer(void, moveObject, (ObjectMaster* obj, float st_x, float st_y, float st_z, float end_x, float end_y, float end_z, int frame), 0x6EC2B0);
FunctionPointer(ObjectMaster*, CTikalLight_Create, (float x, float y, float z), 0x6ED090);

//Unofficial names
FunctionPointer(void, EV_CreateWaterRipple, (float x, float y, float z, float a4, float a5, int a6, int a7, int a8), 0x6F1D30);
FunctionPointer(void, EV_FreeWaterRipple, (int a1), 0x6F1B80);
FunctionPointer(void, EV_FadeToWhite, (int a1, int a2, int a3), 0x6EFD00);
VoidFunc(EV_FreeFadeToWhite, 0x6EFB30);

//Dialogue Tables
DataArray(char**, EV0020_MsgTbl, 0x2BF4044, 5);//Unofficial Name