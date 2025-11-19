/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_nodelist.h"
#include "common/datastruc/e_allocbucket.h"

void ENodeList::Remove(NLIterator i)
{
    ENodeListNode *pNode;
    void *p;

    if (m_l.m_pHead == (ENodeListNode *)i)
    {
        m_l.m_pHead = *(ENodeListNode **)(i + 8);
    }
    else
    {
        *(u32 *)(*(int *)(i + 4) + 8) = *(u32 *)(i + 8);
    }
    if (m_l.m_pTail == (ENodeListNode *)i)
    {
        m_l.m_pTail = *(ENodeListNode **)(i + 4);
    }
    else
    {
        *(u32 *)(*(int *)(i + 8) + 4) = *(u32 *)(i + 4);
    }
    _allocBucketFree(i, 0xc, 0xc);
}