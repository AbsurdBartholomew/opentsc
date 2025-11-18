/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_app.h"
#include "common/types.h"
#include "common/sync/sdl/e_thread.h"
#include "engine/sdl/e_sdlengine.h"
#include "engine/memory/e_memman.h"

EApp *_pApp = NULL;

EApp::EApp()
{
    m_done = 0;
    // m_appState = E_APPSTATE_NORMAL;
    // m_appNextState = E_APPSTATE_NORMAL;
    // m_pRMovie = (ERMovie *)0x0;
    m_uNextMovieID = 0;

    _pApp = this;
}

EApp::~EApp()
{
    _pApp = NULL;
}

char *EApp::GetDataDirectory()
{
    char *pcVar1;

    pcVar1 = GetArg("-dp");
    if (pcVar1 == (char *)0x0)
    {
        pcVar1 = "\\eor\\src2\\games\\testdata\\test.out\\data\\";
    }
    return pcVar1;
}

void EApp::Main()
{
    long lVar3;

    lVar3 = _pEngine->m_retraceHistoryCpu[2];

    if(lVar3 != 0)
    {
        while(m_done != false)
        {
            Update();
        }
    }
}

void EApp::CreateAndStartAppThread()
{
    EThread *thread = new EThread();
    int stackSize = thread->GetStackSize();

    thread->Create(98, stackSize, NULL);
    thread->SetThreadName("Application");
    thread->Start();
}

void EApp::SystemInit()
{
}

void EApp::SystemUpdate()
{
    bool bVar3;
    EAppState state;

    if(m_appState == E_APPSTATE_MOVIEPLAY)
    {
        if (m_appNextState == E_APPSTATE_MOVIEPLAY) {
            state = m_appNextState;
        }
        else
        {
            //_pGfx->ManagedShutdown();
        }
    }
}

void EApp::PlayMovie(u32 resid, int x, int y)
{
}

FnAlloc EApp::GetMovieAllocator()
{
    //return (FnAlloc)_memmanAlloc;
    return 0;
}

FnAllocAlign EApp::GetMovieAllocatorAlign()
{
    return 0;
}

FnFree EApp::GetMovieDeallocator()
{
    return 0;
}

void EApp::StopMovie()
{
}

bool EApp::IsMoviePlaying()
{
}

void EApp::SetArgs(int nArgc, char **ppszArgv)
{
    m_ppszArgv = ppszArgv;
    m_nArgc = nArgc;
}

char *EApp::GetArg(char *pszFlag)
{
    // TODO
    return "TEMP";
}

char *EApp::GetModuleDirectory()
{
    return "\\eor\\bin\\iop";
}

#define STR_IMPL(A) #A
#define STR(A) STR_IMPL(A)

#define BUILD_VERSION STR(EOR Engine v2.0 built __TIME__ __DATE__)

char *EApp::GetBuildVersion()
{
    return BUILD_VERSION;
}

char *EApp::GetAppName()
{
    return "Untitled";
}

int EApp::GetEventTableSize()
{
    return 8;
}

void EApp::Init()
{
}

void EApp::Update()
{
}

int EApp::GetAppStackSize()
{
    return 0x10000;
}

void EApp::Shutdown()
{
}
