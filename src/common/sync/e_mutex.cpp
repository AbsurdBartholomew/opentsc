/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_mutex.h"

EMutex::EMutex()
{
    m_sema = ESemaphore();
    m_sema.Create(1, -1);
}

EMutex::~EMutex()
{
}

bool EMutex::Acquire(u32 nTimeout)
{
    return m_sema.Acquire(nTimeout);
}

bool EMutex::Release()
{
    return m_sema.Release();
}

bool EMutex::iAcquire()
{
    return m_sema.iAcquire();
}

void EMutex::iRelease()
{
    m_sema.iRelease();
}

EMutex &EMutex::operator++()
{
    /*
    ESyncObject__vtable *pEVar1;

    pEVar1 = (this->field0_0x0).__vtable;
    (**(code **)(pEVar1 + 1))((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release, 0xffffffffffffffff);
    return this;*/
    return *this;
}

EMutex &EMutex::operator--()
{
    /*
    ESyncObject__vtable *pEVar1;

    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].Acquire)((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
    return this;*/
    return *this;
}

EAutoMutex::EAutoMutex(EMutex &mutex) : m_mutex(mutex)
{
    m_mutex.Release();
}