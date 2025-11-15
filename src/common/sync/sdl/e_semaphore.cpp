/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include <SDL2/SDL_mutex.h>
#include "e_semaphore.h"

int _semaphoreBreakId = -1;

ESemaphore::ESemaphore(int maxCount, int initialCount)
{
    Create(maxCount, initialCount);
}

ESemaphore::ESemaphore()
{

}

void ESemaphore::SetBreakId(int id)
{
    _semaphoreBreakId = id;
}

bool ESemaphore::Create(int maxCount, int initialCount)
{
    m_count = initialCount;
    m_maxCount = maxCount;

    m_sema = SDL_CreateSemaphore(1);

    return m_sema != NULL;
}

void ESemaphore::Destroy()
{
    SDL_DestroySemaphore(m_sema);
    m_id = -1;
}

bool ESemaphore::IsCreated()
{

}

bool ESemaphore::Acquire(u32 nTimeout)
{

}

bool ESemaphore::Release()
{

}

bool ESemaphore::iAcquire()
{

}

void ESemaphore::iRelease()
{

}

ESemaphore *ESemaphore::GetObject(int id)
{

}

int ESemaphore::GetCurrentCount()
{

}

int ESemaphore::GetMaxCount()
{

}