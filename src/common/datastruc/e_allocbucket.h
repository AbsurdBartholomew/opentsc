/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/util/e_globalmanager.h"
#include "common/sync/e_mutex.h"
#include "common/datastruc/e_growpool.h"

struct EAllocBucketNode;

struct EAllocBucketNode
{
    static TGrowPool<EAllocBucketNode> m_bucketNodePool;
    u32 m_elementSize;
    EAllocBucketNode *m_pNext;
    EGrowPool m_elementPool;

    //EAllocBucketNode &operator=();
    EAllocBucketNode();
};

struct EAllocBucket : EGlobalManagerClient
{
protected:
    EAllocBucketNode *m_pHashTable[53];
    EMutex m_mutex;

public:
    EAllocBucket();

protected:
    /* vtable[3] */ virtual void ManagedShutdown();

public:
    void *Alloc(u32 size);
    void *Alloc(u32 size, u32 hashKey);
    void Free(void *pAddress, u32 size);
    void Free(void *pAddress, u32 size, u32 hashKey);
    void FreeUnusedSegments();
};

extern EAllocBucket _allocBucket;

void* _allocBucketAlloc(u32 size, u32 hashKey);
void _allocBucketFree(void *pAddress, u32 size, u32 hashKey);