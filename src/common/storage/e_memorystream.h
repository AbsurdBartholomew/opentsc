/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/datastruc/e_array.h"
#include "common/storage/e_filestream.h"

class EMemoryReadStream : EStream
{

public:
    EMemoryReadStream(void *pData);
    EMemoryReadStream();

    /* vtable[2] */ virtual int GetPos();
    /* vtable[3] */ virtual int Read(void *pData, int size);
    /* vtable[4] */ virtual int Write(void *pData, int Size);

    friend class EStorable;
protected:
    u8 *m_pData;
    u32 m_pos;
};

class EMemoryWriteStream : EStream
{
public:
    EMemoryWriteStream();
    u8 operator[](int pos);
    //u8 &operator[]();
    void *AllocAndCopyToBuffer();
    static void FreeBuffer(void *p);
    void WriteToStream(EStream &stream, int pos, int count);
    /* vtable[2] */ virtual int GetPos();
    /* vtable[3] */ virtual int Read(void *pData, int size);
    /* vtable[4] */ virtual int Write(void *pData, int size);

    friend class EStorable;
protected:
    u32 m_pos;
    TArray<unsigned char *> m_blocks;
};