/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_syncobject.h"

ESyncObject::ESyncObject()
{
}

bool ESyncObject::Acquire()
{
    return true;
}

bool ESyncObject::Release(u32 nCount, u32 *pPrevCount)
{
    /*
    short sVar1;
    int uVar2;

    sVar1 = *(short *)&this->__vtable[1].ESyncObject;
    uVar2 = (*(code *)this->__vtable[1].Acquire)((int)&this->__vtable + (int)sVar1, sVar1, pPrevCount);*/
    
    //return (bool)uVar2;

    return true;
}