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