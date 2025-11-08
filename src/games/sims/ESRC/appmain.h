/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include "engine/e_app.h"
#include "games/sims/esrc/gamestate.h"

#define APP_NAME "The Sims For PS2"
#define BUILD_VERSION "EoR PS2 Sims Build 1.11.10.3-1f"

class ESimsApp : public EApp
{
public:
    EGameStateMan *m_pGameStateMan;
    
    ESimsApp();

    char* GetAppName();
};