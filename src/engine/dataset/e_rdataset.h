/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "engine/e_metrics.h"
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
    virtual ~ERDataset();
    
    DECLARE_TYPEINFO(ERDataset)
    
    void Load(EFile *pFile, u32 uLength);

protected:
    void Deallocate();
};

extern ETypeInfo *gpTypeInfo_ERDataset;