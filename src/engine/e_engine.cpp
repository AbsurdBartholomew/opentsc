/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include <stdio.h>
#include "e_engine.h"

int _evenodd = 0;
int _framecount = 0;
int _retracecount = 0;
int _d_retraces = 1;
float _dt = 0.0166666675f;
float _invdt = 60.f;
int _fps = 60;
float _cputime = 0.0166666675f;
float _rendtime = 0.0166666675f;
double _time = 0;

float _retracetime = 0.f;

EEngine::EEngine()
{
    EEvent *event;
    int r;

    EGlobalManager::Register(this, 5);
    m_frameClock = EClock();
    // event->m_sema = new ESemaphore();
}

void EEngine::ManagedShutdown()
{
    
}

void EEngine::Line()
{
    // compiled out... think it would be like
    printf("=======================================================");
}

bool EEngine::Init()
{
    EEvent *event;
    u32 tableDepth;

    Line();
    PrintBanner();
    Line();
    PrintConfiguration();
    Line();
}

void EEngine::ShutdownThreads()
{
}

void EEngine::RetraceUpdate(float frameTime)
{
}

int EEngine::GetMinRatraces()
{
    int r = 1;

    if (m_frameRateSmoothing != 0)
    {
        r = _d_retraces;
    }
    return r;
}

void EEngine::EnterMovieMode()
{

}

void EEngine::ExitMovieMode()
{

}

void EEngine::PreFrameUpdate()
{

}

void EEngine::PostFrameUpdate()
{

}

void EEngine::FrameComplete()
{

}

void EEngine::PrintBanner()
{

}

void EEngine::PrintConfiguration()
{

}

bool EEngine::InitSubsystems()
{

}

bool EEngine::InitFileSystem()
{

}

bool EEngine::InitResourceManagers()
{

}

void EEngine::ShutdownResourceManagers()
{

}

void EEngine::Idle()
{
    while(1);
}

void EEngine::Reboot()
{

}

bool EEngine::ManagedStartup()
{
    return true;
}