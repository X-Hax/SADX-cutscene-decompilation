#pragma once
#include "SADXModLoader.h"

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

struct cpathtbl
{
	__int16 roty;
	__int16 rotx;
	__int16 rotz;
	float camx;
	float camy;
	float camz;
};

struct cpathtag
{
	unsigned __int8 type;
	float points;
	cpathtbl* tblhead;
};
