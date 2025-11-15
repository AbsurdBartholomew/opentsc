/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_memorystream.h"
#include "engine/memory/e_memman.h"

EMemoryReadStream::EMemoryReadStream()
{
}

EMemoryReadStream::EMemoryReadStream(void *pData)
{
}

int EMemoryReadStream::GetPos()
{
    return 0;
}

int EMemoryReadStream::Read(void *pData, int size)
{
    return 0;
}

int EMemoryReadStream::Write(void *pData, int Size)
{
    return 0;
}

/*******************************************************************/

EMemoryWriteStream::EMemoryWriteStream()
{
}

void EMemoryWriteStream::FreeBuffer(void *p)
{
    _memmanFree(p);
    return;
}

int EMemoryWriteStream::GetPos()
{
    return 0;
}

int EMemoryWriteStream::Read(void *pData, int size)
{
    return 0;
}

int EMemoryWriteStream::Write(void *pData, int Size)
{
    return 0;
}

void *EMemoryWriteStream::AllocAndCopyToBuffer()
{
    u8 *pBuffer;
    u32 i;

    u8 uVar1;
    void *pvVar2;
    u32 pos;

    pvVar2 = _memmanAlloc(this->m_pos, 4);
    if ((pvVar2 != (void *)0x0) && (pos = 0, this->m_pos != 0))
    {
        do
        {
            //uVar1 = __vc__C18EMemoryWriteStreami(this, pos);
            //*(u8 *)((int)pvVar2 + pos) = uVar1;
            pos = pos + 1;
        } while (pos < this->m_pos);
    }
    return pvVar2;
}