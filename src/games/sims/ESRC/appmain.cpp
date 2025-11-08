/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "appmain.h"
#include <SDL2/SDL.h>
#include "common/util/e_globalmanager.h"
#include "engine/e_main.h"
#include "icon.h"

ESimsApp::ESimsApp()
{
    m_pGameStateMan = NULL;
}

ESimsApp::~ESimsApp()
{

}

char *ESimsApp::GetModuleDirectory()
{
    return ".";
}

char *ESimsApp::GetDataDirectory()
{
    return "./data";
}

char *ESimsApp::GetBuildVersion()
{
    return BUILD_VERSION;
}

char *ESimsApp::GetAppName()
{
    return APP_NAME;
}

void ESimsApp::PlayMovie(u32 resid, int x, int y)
{

}
void ESimsApp::StopMovie()
{

}
bool ESimsApp::IsMoviePlaying()
{
    return false;
}

int ESimsApp::GetEventTableSize()
{
    return 0;
}

void ESimsApp::Init()
{
    int language;
    int SimsLanguage;
    int iLanguage;
    void *ptr;

    EGlobalManagerClient *mgr;

    SDL_Surface* surf = SDL_CreateRGBSurface(0, SIMS1_WIDTH, SIMS1_HEIGHT, 32, 0xff000000,0x00ff0000,0x0000ff00,0x00000ff);
    if(surf)
    {
        SDL_SetWindowIcon(win, surf);
    }
}

void ESimsApp::Main()
{

}

void ESimsApp::Update()
{

}

void ESimsApp::Shutdown()
{
    
}