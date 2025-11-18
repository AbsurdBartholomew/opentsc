/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include <stdio.h>
#include "e_engine.h"

#include "common/math/e_mat4.h"

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
EMat4 _mId;

float _retracetime = 0.f;
EEngine *_pEngine = NULL;

EEngine::EEngine()
{
    int r;

    EGlobalManager::Register(this, 5);
    m_frameClock = EClock();
    m_frameEvent.m_sema = ESemaphore();
    m_frameEvent.m_sema.Create(2, 0);
    m_cpuClock = EClock();

    m_initialized = true;
    _retracetime = 0.01666667;
    m_frameRateSmoothing = true;

    //if(_iVideoMode == 1)
    //{
    //    _retracetime = 0.02;
    //}

    //_mId.Id();

    _pEngine = this;
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