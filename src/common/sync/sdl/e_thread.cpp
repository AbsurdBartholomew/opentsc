/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include <SDL2/SDL_thread.h>

#include "e_thread.h"
#include "engine/memory/e_memman.h"
#include "common/types.h"
#include "engine/e_app.h"

EThread::EThread()
{
    m_threadId = -1;
    m_szName = "";
    m_pStack = NULL;
    m_stackSize = 0;
    m_stackAutoAllocated = 0;
    m_pLastThread = NULL;
    m_pNextThread = NULL;
}

EThread::EThread(int priority, int stackSize, void *pStack)
{
    m_threadId = -1;
    Create(priority, stackSize, pStack);
}

EThread::~EThread()
{
}

bool EThread::Create(int priority, int stackSize, void *pStack)
{
    EThread *pNewNode;
    EThread *pNode;

    EThread *pEVar1;
    void *pvVar2;
    long lVar3;

    m_stackSize = stackSize;
    if(pStack == NULL)
    {
        pvVar2 = _memmanAlloc(stackSize, 0x60);
        m_pStack = pvVar2;

        if(pvVar2 == NULL) return false;

        m_stackAutoAllocated = true;
    }
    else
    {
        m_pStack = pStack;
        m_stackAutoAllocated = false;
    }


    m_thread = SDL_CreateThreadWithStackSize((SDL_ThreadFunction)EThread::ThreadEntryPoint, m_szName, m_stackSize, (void*)m_pStack);
    SDL_SetThreadPriority((SDL_ThreadPriority)priority);

    m_threadId = SDL_GetThreadID(m_thread);

    return m_threadId >= 0;
}

void EThread::Start()
{
    
}

void EThread::Stop()
{

}

void EThread::Destroy()
{
    
}

void EThread::AttachToCallingThread()
{
}

void EThread::SetPriority(int priority)
{
    SDL_SetThreadPriority((SDL_ThreadPriority)priority);
}

void EThread::Main()
{
}

int EThread::GetStackSize()
{
    return m_stackSize;
}

void EThread::ThreadEntryPoint(void *pThis)
{
    EThread *thread = (EThread*)pThis;

    _pApp->Init(); // TODO: find where to stick this as this isn't part of the original TheadEntryPoint function
    thread->Main();
}