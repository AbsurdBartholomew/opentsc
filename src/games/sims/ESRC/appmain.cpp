/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "appmain.h"

#include "common/util/e_globalmanager.h"

#include "engine/e_main.h"

#include "ESRC/global.h"
#include "ESRC/e_rletextureman.h"

ESimsApp _app;

ESimsApp::ESimsApp()
{
    m_pGameStateMan = NULL;
    m_bLoadedIntroDataSet = false;
    // m_pFullWindow = NULL;
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

    _rletexman.Init("rletextures");
    printf("Initialized\n");
}

void ESimsApp::Update()
{
}

void ESimsApp::Shutdown()
{
    _globals.BeginSaveGame();
    m_pGameStateMan->DeleteAllStates();

    if (m_pGameStateMan == NULL) // ?????
    {
        m_pGameStateMan = NULL;
    }
    else
    {
        m_pGameStateMan = new EGameStateMan();
        m_pGameStateMan = NULL;
    }

    _globals.Reset();
    //_pclMan.DestroyOrphans();
    _rletexman.Shutdown();
    if (m_bLoadedIntroDataSet != false)
    {
        //_datasetman.DelRef(0xed510790);
        //m_bLoadedIntroDataSet = false;
    }

/*
    if(m_pFullWindow != NULL)
    {
        m_pFullWindow->WindowMatrixChanged(); // ((int)&(pEVar1->m_mWindow).field0_0x0 + (int)*(short *)&pEVar1->__vtable->Select,3);
    }*/
}