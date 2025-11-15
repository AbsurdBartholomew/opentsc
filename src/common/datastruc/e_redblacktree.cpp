/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_redblacktree.h"
#include "common/datastruc/e_allocbucket.h"

ERedBlackTreeNode ERedBlackTree::m_sentinel;

ERedBlackTree::ERedBlackTree()
{
}

ERedBlackTree::ERedBlackTree(ERedBlackTree &s)
{
}

RBIterator ERedBlackTree::Find(RBKey key, RBValue *pOutValue)
{
    ERedBlackTreeNode *pCurrent;
    u32 uVar1;

    pCurrent = m_pRoot;
    if (pCurrent != &m_sentinel)
    {
        uVar1 = pCurrent->key;
        while (true)
        {
            if (key == uVar1)
            {
                if (pOutValue != NULL)
                {
                    *pOutValue = pCurrent->value;
                }
                return pCurrent->key; // TODO used to return pCurrent but i'm not sure how it's possible... returning its key for now
            }
            if (key < uVar1)
            {
                pCurrent = pCurrent->pLeft;
            }
            else
            {
                pCurrent = pCurrent->pRight;
            }
            if (pCurrent == &m_sentinel)
                break;
            uVar1 = pCurrent->key;
        }
    }
    return NULL;
}

void ERedBlackTree::Remove(RBIterator i, int d)
{
    ERedBlackTreeNode *z;
    ERedBlackTreeNode *y;
    ERedBlackTreeNode *x;
    bool swapY;
    ERedBlackTreeNode *pNode;
    void *p;

    ERedBlackTreeNode *pEVar1;
    RBNodeColor RVar2;
    ERedBlackTreeNode *pEVar3;
    ERedBlackTreeNode *pEVar4;

    /* inlined from c:/eor/src2/common/datastruc/e_linkedlist.h */
    if ((this->m_list).m_pHead == (ERedBlackTreeNode *)i)
    {
        (this->m_list).m_pHead = *(ERedBlackTreeNode **)(i + 0x10);
    }
    else
    {
        *(int *)(*(int *)(i + 0xc) + 0x10) = *(int *)(i + 0x10);
    }
    if ((this->m_list).m_pTail == (ERedBlackTreeNode *)i)
    {
        (this->m_list).m_pTail = *(ERedBlackTreeNode **)(i + 0xc);
    }
    else
    {
        *(int *)(*(int *)(i + 0x10) + 0xc) = *(int *)(i + 0xc);
    }
    /* end of inlined section */
    pEVar3 = (ERedBlackTreeNode *)i;
    if ((*(ERedBlackTreeNode **)i == &m_sentinel) ||
        (pEVar4 = *(ERedBlackTreeNode **)(i + 4), pEVar4 == &m_sentinel))
    {
    LAB_00321724:
        pEVar4 = pEVar3;
        pEVar3 = pEVar4->pLeft;
        if (pEVar3 != &m_sentinel)
        {
            pEVar1 = pEVar4->pParent;
            goto LAB_0032173c;
        }
    }
    else if (pEVar4->pLeft != &m_sentinel)
    {
        for (pEVar3 = pEVar4->pLeft; pEVar3->pLeft != &m_sentinel;
             pEVar3 = pEVar3->pLeft)
        {
        }
        goto LAB_00321724;
    }
    pEVar3 = pEVar4->pRight;
    pEVar1 = pEVar4->pParent;
LAB_0032173c:
    pEVar3->pParent = pEVar1;
    pEVar1 = pEVar4->pParent;
    if (pEVar1 == (ERedBlackTreeNode *)0x0)
    {
        this->m_pRoot = pEVar3;
    }
    else if (pEVar4 == pEVar1->pLeft)
    {
        pEVar1->pLeft = pEVar3;
    }
    else
    {
        pEVar1->pRight = pEVar3;
    }
    if (pEVar4 != (ERedBlackTreeNode *)i)
    {
        *(u32 *)(i + 0x18) = pEVar4->key;
        *(u32 *)(i + 0x1c) = pEVar4->value;
        RVar2 = pEVar4->color;
    }
    else
    {
        RVar2 = pEVar4->color;
    }
    if (RVar2 == RB_BLACK)
    {
        RemoveFixup(pEVar3);
    }
    if (pEVar4 != (ERedBlackTreeNode *)i)
    {
        pEVar4->color = *(RBNodeColor *)(i + 0x14);
        pEVar3 = *(ERedBlackTreeNode **)i;
        pEVar4->pLeft = pEVar3;
        if (pEVar3 != &m_sentinel)
        {
            pEVar3->pParent = pEVar4;
        }
        pEVar3 = *(ERedBlackTreeNode **)(i + 4);
        pEVar4->pRight = pEVar3;
        if (pEVar3 != &m_sentinel)
        {
            pEVar3->pParent = pEVar4;
        }
        pEVar3 = *(ERedBlackTreeNode **)(i + 8);
        pEVar4->pParent = pEVar3;
        if (pEVar3 != (ERedBlackTreeNode *)0x0)
        {
            if (pEVar3->pRight == (ERedBlackTreeNode *)i)
            {
                pEVar3->pRight = pEVar4;
            }
            else if (pEVar3->pLeft == (ERedBlackTreeNode *)i)
            {
                pEVar3->pLeft = pEVar4;
            }
        }
        if (this->m_pRoot == (ERedBlackTreeNode *)i)
        {
            this->m_pRoot = pEVar4;
        }
    }

    _allocBucketFree((void*)i, 0x20, 0x20);
}

bool ERedBlackTree::Remove(RBKey key)
{
    RBIterator i;

    i = Find(key, NULL);
    if (i != NULL)
    {
        Remove(i);
    }
    return i != NULL;
}

void ERedBlackTree::RemoveFixup(ERedBlackTreeNode *x)
{
    
}