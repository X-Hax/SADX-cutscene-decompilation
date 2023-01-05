#pragma once
#include "SADXModLoader.h"

//Stuff that doesn't have an official name because it was part of the main event function in the 360 version:
VoidFunc(deleteChaos0_EV00F3, 0x6657C0);
VoidFunc(deleteChaos0_EV00F2, 0x6667B0);
VoidFunc(create_task_gattai_EV00C2, 0x674420);
VoidFunc(delete_task_gattai_EV00C2, 0x674480);
VoidFunc(create_task_gattai_EV006A, 0x69D3B0);
VoidFunc(delete_task_gattai_EV006A, 0x69D410);
VoidFunc(create_task_gattai_EV006D, 0x69BBD0);
VoidFunc(delete_task_gattai_EV006D, 0x69BC20);
FunctionPointer(void, DelObjTask_EV00BB, (int id), 0x67B5B0);
VoidFunc(destroy_task_light_EV009A, 0x686990);
FunctionPointer(void, create_p_ShadowTask_EV009A, (float pos_x, float pos_y, float pos_z, int slangx, int length, float path_ypos), 0x686B10);
VoidFunc(create_task_light_EV009A, 0x686970);
VoidFunc(destroy_p_ShadowTask_EV009A, 0x6869B0);
VoidFunc(deleteChaos0_EV0088, 0x6910F0);
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
VoidFunc(RemoveTornado2Emerald_EV00FA, 0x65F760);

//Usercall garbage
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
		add esp, 16
	}
}

static const void* const createChaos0_EV0088Ptr = (void*)0x691400;
static inline void createChaos0_EV0088(int ang, float pos_x, float pos_y, float pos_z)
{
	__asm
	{
		push[pos_z]
		push[pos_y]
		push[pos_x]
		mov edi, [ang]
		call[createChaos0_EV0088Ptr]
		add esp, 12
	}
}

static const void* const createChaos0_EV00F2Ptr = (void*)0x666A60;
static inline void createChaos0_EV00F2(int ang, float pos_x, float pos_y, float pos_z)
{
	__asm
	{
		push[pos_z]
		push[pos_y]
		push[pos_x]
		mov edi, [ang]
		call [createChaos0_EV00F2Ptr]
		add esp, 12
	}
}

static const void* const createChaos0_EV00F3Ptr = (void*)0x665A90;
static inline void createChaos0_EV00F3(int ang, float pos_x, float pos_y, float pos_z)
{
	__asm
	{
		push[pos_z]
		push[pos_y]
		push[pos_x]
		mov edi, [ang]
		call[createChaos0_EV00F3Ptr]
		add esp, 12
	}
}