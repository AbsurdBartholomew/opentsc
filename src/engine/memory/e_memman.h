/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once
#include <stdio.h>
#include <string.h>

#include "engine/e_metrics.h"
#include "common/types.h"

struct EMMSubAllocator
{
    // EHeap heap;
    int listPos;
    EMMSubAllocator *pLast;
    EMMSubAllocator *pNext;
};

typedef TLinkedList<EMMSubAllocator, 28, 32> EMMSAList;

class EMemoryManager
{
protected:
    static bool m_constructed;
    //EHeap m_heap;
    //EMutex m_heapMutex;
   // EMutex m_segPoolMutex;
    u32 m_segmentBlockSize;
    u32 m_nSegments;
    u32 m_segmentPad;
    void *m_pFreeSegmentHead;
    void *m_pSegmentBlock;
    void *m_pTopOfHeap;
    TLinkedList<EMMSubAllocator, 28, 32> m_subAllocPowerLists[12];
};

void *_memmanAlloc(u32 size, u32 alignment, char *szFile, u32 line);
void *_memmanAllocTop(u32 size, u32 alignment, char *szFile, u32 line);
void *_memmanAllocAt(void *pAddress, u32 size, char *szFile, u32 line);
void _memmanFree(void *pAddress);
void *_memmanAlloc(u32 size, u32 alignment);
void *_memmanAllocTop(u32 size, u32 alignment);
void *_memmanAllocAt(void *pAddress, u32 size);