/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_sdlclock.h"
#include "engine/memory/e_memman.h"

ESdlClockMan _sdlClockMan;
EClockMan *_pClockMan;

ESdlClockMan::ESdlClockMan()
{
    m_lastCounter = 0;
    m_nWraps = 0;

    _pClockMan = (EClockMan *)&_sdlClockMan;
}

ESdlClockMan::~ESdlClockMan()
{
    _memmanFree(this);
}

void ESdlClockMan::Init()
{
}

void ESdlClockMan::Update()
{
}

void ESdlClockMan::Start(void *pVoid)
{
    u32 counter;
    counter = SDL_GetTicks();

    if (counter < m_lastCounter)
    {
        m_nWraps++;
        m_lastCounter = counter;
    }
    else
    {
        m_lastCounter = counter;
    }

    *(u32 *)((int)pVoid + sizeof(counter)) = counter;
    *(u32 *)pVoid = m_nWraps;
}

void *ESdlClockMan::GetInstanceData()
{
}

void ESdlClockMan::FreeInstanceData(void *data)
{
}

float ESdlClockMan::GetSec(void *pVoid)
{
    u32 counter;
    u32 nWraps;
    int nWrapCount;
    int nCounts;
    float wrapTime;
    float counterTime;

    //DIntr();
    counter = SDL_GetTicks();
    if (counter < m_lastCounter)
    {
        m_nWraps++;
        m_lastCounter = counter;
    }
    else
    {
        m_lastCounter = counter;
    }
    nWraps = m_nWraps;
    //EIntr();

    /* WARNING: Load size is inaccurate */
    return (float)(nWraps - (u32)pVoid) * 4.06 + (float)(counter - *(int *)((int)pVoid + 4)) * 6.195068e-05;
}

double ESdlClockMan::GetSecDouble(void *pVoid)
{
    u32 counter;
    u32 nWraps;
    int nWrapCount;
    int nCounts;
    float wrapTime;
    float counterTime;

    //DIntr();
    counter = SDL_GetTicks64();
    if (counter < m_lastCounter)
    {
        m_nWraps++;
        m_lastCounter = counter;
    }
    else
    {
        m_lastCounter = counter;
    }
    nWraps = m_nWraps;
    //EIntr();

    /* WARNING: Load size is inaccurate */
    return (long)((double)(long)(int)(nWraps - (u32)pVoid) * 4.059999942779541 +
               (double)(long)(int)(counter - *(int *)((int)pVoid + 4)) * 6.195068272063509e-05);
}