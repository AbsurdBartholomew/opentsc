/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_allocbucket.h"

EAllocBucket _allocBucket;
TGrowPool<EAllocBucketNode> EAllocBucketNode::m_bucketNodePool;

EAllocBucketNode::EAllocBucketNode()
{
}

EAllocBucket::EAllocBucket()
{
}

void EAllocBucket::ManagedShutdown()
{
    /*
    int h;
    EAllocBucketNode *pNode;
    EAllocBucketNode *pNext;
    void *p;
    EAllocBucketNode *p;
    void *p;

    void **ppvVar1;
    void **ppvVar2;
    int iVar3;
    int iVar4;

    iVar4 = 0;
    iVar3 = 0;
    while (true)
    {
        iVar4 = iVar4 + 1;
        ppvVar1 = *(void ***)((int)this->m_pHashTable + iVar3);
        while (ppvVar2 = ppvVar1, ppvVar2 != (void **)0x0)
        {
            ppvVar1 = (void **)ppvVar2[1];
            if (ppvVar2 != (void **)0x0)
            {
                ___9EGrowPool((EGrowPool *)(ppvVar2 + 2), 2);
                *ppvVar2 = _16EAllocBucketNode_m_bucketNodePool.field0_0x0.m_pFreeObjHead;
                _16EAllocBucketNode_m_bucketNodePool.field0_0x0.m_pFreeObjHead = ppvVar2;
            }
        }
        if (0x34 < iVar4)
            break;
        iVar3 = iVar4 * 4;
    }
    return;*/
}

void *EAllocBucket::Alloc(u32 size, u32 hashKey)
{
    EAllocBucketNode *pNode;
    void *p;

    EAllocBucketNode *pEVar2;
    void **ppvVar3;
    u32 uVar4;
    EAllocBucketNode **ppEVar5;

    if (EGlobalManager::m_startupComplete == 0)
    {
        EGlobalManager::Startup();
    }

    m_mutex.Release();

    ppEVar5 = m_pHashTable + hashKey;
    pEVar2 = *ppEVar5;
    do
    {
        if (pEVar2 == (EAllocBucketNode *)0x0)
        {
        LAB_0032d208:
            if (pEVar2->m_bucketNodePool.m_pFreeObjHead == NULL)
            {
                pEVar2 = (EAllocBucketNode *)
                    pEVar2->m_bucketNodePool.AllocNewSeg();
            }
            else
            {
                // WARNING: Load size is inaccurate
                pEVar2 = (EAllocBucketNode *)pEVar2->m_bucketNodePool.m_pFreeObjHead;

                pEVar2->m_bucketNodePool.m_pFreeObjHead = pEVar2->m_bucketNodePool.m_pFreeObjHead;
            }

            pEVar2->m_elementPool = EGrowPool();
            ppvVar3 = NULL;

            if (pEVar2 != NULL)
            {
                uVar4 = 4;
                if (3 < (int)size)
                {
                    uVar4 = size;
                }
                (pEVar2->m_elementPool).m_blockSize = uVar4;
                pEVar2->m_elementSize = size;
                pEVar2->m_pNext = *ppEVar5;
                *ppEVar5 = pEVar2;
                ppvVar3 = (void **)(pEVar2->m_elementPool).m_pFreeObjHead;
            LAB_0032d26c:
                if (ppvVar3 == NULL)
                {
                    ppvVar3 = (void **)pEVar2->m_elementPool.AllocNewSeg();
                }
                else
                {
                    (pEVar2->m_elementPool).m_pFreeObjHead = *ppvVar3;
                }
                //pEVar1 = m_mutex;
                m_mutex.Acquire(1);
                //(*(code *)pEVar1[1].Acquire)((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
                /* end of inlined section */
            }
            return ppvVar3;
        }
        if (size == pEVar2->m_elementSize)
        {
            if (pEVar2 != (EAllocBucketNode *)0x0)
            {
                ppvVar3 = (void **)(pEVar2->m_elementPool).m_pFreeObjHead;
                goto LAB_0032d26c;
            }
            goto LAB_0032d208;
        }
        pEVar2 = pEVar2->m_pNext;
    } while (true);
}

void EAllocBucket::Free(void *pAddress, u32 size, u32 hashKey)
{
    EAllocBucketNode *pNode;
    void *p;

    EAllocBucketNode *pEVar1;

    if (pAddress != NULL)
    {
        //pEVar2 = (this->m_mutex).field0_0x0.__vtable;
        m_mutex.Release();

        for (pEVar1 = this->m_pHashTable[hashKey];
             (pEVar1 != (EAllocBucketNode *)0x0 && (size != pEVar1->m_elementSize));
             pEVar1 = pEVar1->m_pNext)
        {
        }

        if (pAddress == (void *)0x0)
        {

        }
        else
        {
            *(void **)pAddress = (pEVar1->m_elementPool).m_pFreeObjHead;
            (pEVar1->m_elementPool).m_pFreeObjHead = pAddress;
        }
        m_mutex.Acquire(1);
        //(*(code *)pEVar2[1].Acquire)((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar2[1].ESyncObject);
    }

    return;
}

void EAllocBucket::FreeUnusedSegments()
{
    int h;
    EAllocBucketNode *pNode;

    int iVar2;
    int iVar3;

    if (EGlobalManager::m_startupComplete == false)
    {
        EGlobalManager::Startup();
    }
    m_mutex.Release();

    iVar3 = 0;
    iVar2 = 0;
    do
    {
        iVar3 = iVar3 + 1;
        for (iVar2 = *(int *)((int)this->m_pHashTable + iVar2); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4))
        {
            //FreeUnusedSegments__9EGrowPool((EGrowPool *)(iVar2 + 8));
        }
        iVar2 = iVar3 * 4;
    } while (iVar3 < 0x35);

    m_mutex.Acquire(1);
    //(*(code *)pEVar1[1].Acquire)((int)&(this->m_mutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
}

void *_allocBucketAlloc(u32 size, u32 hashKey)
{
    return _allocBucket.Alloc(size, hashKey);
}

void _allocBucketFree(void *pAddress, u32 size, u32 hashKey)
{
    _allocBucket.Free(pAddress, size, hashKey);
}