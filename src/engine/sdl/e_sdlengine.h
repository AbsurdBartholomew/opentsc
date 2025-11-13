/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include "engine/e_engine.h"

class ESdlEngine : public EEngine
{
public:
    ESdlEngine();
    static bool InitMemoryManager();
};

extern EEngine *_pEngine;