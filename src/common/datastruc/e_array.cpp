/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_array.h"

#include "engine/memory/e_memman.h"

EArray::EArray()
{
    m_p = (void *)0x0;
    m_growBy = 0x100;
    m_allocSize = 0;
    m_size = 0;
    m_elementSize = 0;
}

void EArray::Deallocate()
{
    _memmanFree(m_p);
    m_size = 0;
    m_p = (void *)0x0;
    m_allocSize = 0;
    return;
}

void EArray::SetSize(int size, int allocSize)
{
    void *pNew;
    u32 bufferSize;

    void *pDest;
    u32 alignment;
    int iVar1;
    int iVar2;

    iVar2 = size;
    if (allocSize != 0)
    {
        iVar2 = allocSize;
    }
    if (iVar2 == 0)
    {
        Deallocate();
    }
    else if (m_allocSize == iVar2)
    {
        m_size = size;
    }
    else
    {
        alignment = 4;
        if (0xf < m_elementSize)
        {
            alignment = 0x10;
        }
        pDest = _memmanAlloc(iVar2 * m_elementSize, alignment);
        if (pDest != (void *)0x0)
        {
            if (m_p == (void *)0x0)
            {
                m_allocSize = iVar2;
            }
            else
            {
                iVar1 = m_size;
                if (size <= m_size)
                {
                    iVar1 = size;
                }
                memcpy(pDest, m_p, iVar1 * m_elementSize);
                _memmanFree(m_p);
                m_allocSize = iVar2;
            }
            m_p = pDest;
            m_size = size;
        }
    }
    return;
}

void EArray::Insert(int pos, int count)
{
    int oldSize;
    int newSize;
    void *pSrc;
    void *pDest;
    int length;
    int growSize;

    int iVar1;
    size_t __n;
    int iVar2;
    int allocSize;

    iVar1 = m_size;
    iVar2 = iVar1 + count;
    if (m_allocSize < iVar2)
    {
        allocSize = iVar1 + m_growBy;
        if (allocSize < iVar2)
        {
            allocSize = iVar2;
        }
        SetSize(iVar2, allocSize);
        iVar2 = m_elementSize;
    }
    else
    {
        m_size = iVar2;
        iVar2 = m_elementSize;
    }
    __n = (size_t)((iVar1 - pos) * iVar2);
    if (__n != 0)
    {
        memmove((void *)((pos + count) * iVar2 + (int)m_p), (void *)((int)m_p + pos * iVar2),
                __n);
    }
    return;
}

void EArray::Remove(int pos, int count)
{
    void *pSrc;
    void *pDest;
    int length;

    int iVar1;
    size_t __n;

    iVar1 = m_elementSize;
    __n = (size_t)((m_size - (pos + count)) * iVar1);
    if (__n != 0)
    {
        memmove((void *)(pos * iVar1 + (int)m_p), (void *)((int)m_p + (pos + count) * iVar1),
                __n);
    }
    m_size = m_size - count;
    return;
}

void EArray::FreeUnusedBufferSpace()
{
    
}