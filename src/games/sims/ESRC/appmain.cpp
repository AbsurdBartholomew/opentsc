/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "appmain.h"
#include "common/util/e_globalmanager.h"

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