/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/storage/e_typeinfo.h"

class EStream;

struct EStorable
{
    static ETypeInfo m_typeInfo;
    EStorable();

    static EStorable *New();
    /* vtable[1] */ virtual void SafeDelete();
    /* vtable[2] */ virtual ETypeInfo *GetTypeInfo();
    /* vtable[3] */ virtual char *GetTypeName();
    /* vtable[4] */ virtual u32 GetTypeKey();
    /* vtable[5] */ virtual u16 GetTypeVersion();
    static u16 GetReadVersion(/* parameters unknown */);
    static ETypeInfo *RegisterType(/* parameters unknown */);
    EStorable *CreateCopy();
    void AssertValid(/* a1 5 */ ETypeInfo *pType);
    bool IsDerivedFrom(/* s0 16 */ ETypeInfo *pType);
    bool IsExactType(/* s0 16 */ ETypeInfo *pType);
    EStorable *DynamicCast(/* a1 5 */ ETypeInfo *pType);
    /* vtable[7] */ virtual void Read(/* a1 5 */ EStream &s);
    /* vtable[8] */ virtual void Write(/* a1 5 */ EStream &s);
};