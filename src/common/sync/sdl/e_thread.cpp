/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_thread.h"
#include "common/types.h"

EThread table[4];

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
    ThreadParam param;
    int id;
    EThread *pNewNode;
    EThread *pNode;

    EThread *pEVar1;
    void *pvVar2;
    long lVar3;


}

void EThread::AttachToCallingThread()
{

}

void EThread::SetPriority(int priority)
{

}

void EThread::Main()
{
    
}