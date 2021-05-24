#pragma once
#include "SADXModLoader.h"

struct EPATHTAG
{
	int points;
	LoopHead** tblHead;
};

struct PADREC_DATA
{
	BYTE on;
	BYTE angle;
	BYTE stroke;
};

struct PADREC_DATA_TAG
{
	PADREC_DATA** data;
	int size;
};

struct CutsceneData_
{
	void(__cdecl* Function)(int a1);
	PVMEntry* Textures;
};

struct FACETBL
{
	BYTE nbFrame;
	BYTE faceNo;
};


union SegaGarbage
{
	void* Pointer;
	NJS_OBJECT* Object;
	NJS_ACTION* Action;
	Sint32 SInteger;
	Uint32 UInteger;
	float Single;
	Sint16 SShort[2];
	Uint16 UShort[2];
	Sint8 SByte[4];
	Uint8 UByte[4];
	ObjectMaster* Master;
};

struct StupidBitStuff
{
	char Action;
	char NextAction;
	char Unknown;
	char Index;
	short Status;
	short InvulnerableTime;
	char CharIndex;
	char CharID;
	short field_A;
	SegaGarbage Object;
	Loop* LoopData;
	Rotation3 Rotation;
	NJS_VECTOR Position;
	NJS_VECTOR Scale;
	CollisionInfo* CollisionInfo;
	void* field_3C;
};