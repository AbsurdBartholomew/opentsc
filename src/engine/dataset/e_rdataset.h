/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/datastruc/e_nodelist.h"
#include "common/storage/e_typeinfo.h"

#include "engine/resource/e_resource.h"

class ERDataset : public EResource
{
    static ETypeInfo m_typeInfo;

protected:
    TNodeList<EResource*> m_resourceList;

public:
    ERDataset();
    
    static ERDataset *New(/* parameters unknown */);
    /* vtable[1] */ virtual void SafeDelete();
    /* vtable[2] */ virtual ETypeInfo *GetTypeInfo();
    /* vtable[3] */ virtual char *GetTypeName();
    /* vtable[4] */ virtual u32 GetTypeKey();
    /* vtable[5] */ virtual u16 GetTypeVersion();
    static u16 GetReadVersion(/* parameters unknown */);
    static ETypeInfo *RegisterType(u16 version);
    ERDataset *CreateCopy();
    void Load(EFile *pFile, u32 uLength);

protected:
    void Deallocate();
};

extern ETypeInfo *gpTypeInfo_ERDataset;