/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "engine/e_app.h"
#include "games/sims/esrc/gamestate.h"

// #define APP_NAME "The Sims For PS2"
#define BUILD_VERSION "EoR PS2 Sims Build 1.11.10.3-1f"

class ESimsApp : public EApp
{
    ERC *m_prc;
    bool m_bLoadedIntroDataSet;
    //EWindow *m_pFullWindow;

protected:
    //ERShader *m_pSplashScreenShader;
    int m_InitializationState;

public:
    EGameStateMan *m_pGameStateMan;

    ESimsApp();
    virtual ~ESimsApp();

    char *GetDataDirectory();
    char *GetModuleDirectory();
    char *GetBuildVersion();
    char *GetAppName();

    void PlayMovie(u32 resid, int x, int y);
    void StopMovie();
    bool IsMoviePlaying();

    int GetEventTableSize();

protected:
    void Main();
    void Init();
    void Update();
    void Shutdown();

    void SystemInit() { ; }
    void SystemUpdate() { ; }
    int GetAppStackSize() { ; }
};

extern ESimsApp _app;