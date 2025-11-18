/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_clock.h"
#include "common/types.h"
#include "engine/sdl/e_sdlclock.h"

EClock::EClock()
{
    m_pData = NULL;
}

EClock::~EClock()
{
}

float EClock::GetSec()
{
    return _pClockMan->GetSec(m_pData);
}

double EClock::GetSecDouble()
{
    return _pClockMan->GetSecDouble(m_pData);
}

void EClock::Start()
{
    if(m_pData == NULL)
    {
        _pClockMan->Init();
        m_pData = _pClockMan->GetInstanceData();
    }
}