/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/storage/e_storable.h"
#include "common/storage/e_storage.h"
#include "common/datastruc/e_nodelist.h"
#include "common/datastruc/e_redblacktree.h"
#include "common/file/e_file.h"
#include "common/datastruc/e_string.h"

class EStream
{
protected:
    bool m_streamingStructure;
    EIntList *m_pPointerOffsets;
    TNodeList<EStorable *> *m_pObjectsToStore;
    TRedBlackTree<EStorable *, int> *m_pStoredObjectsToIndices;
    EStorable **m_pObjectsToLoad;

public:
    EStream();
    bool IsStreamingStructure();
    int ReadString(char *szBuffer, int bufferSize);
    int WriteString(char *szBuffer);
    int ReadU16String(u16 *szBuffer, int bufferSize);
    int WriteU16String(u16 *szBuffer);

    void operator<<(EString &d)
    {
        WriteString(d.m_p);
    }

    void operator>>(EString &d)
    {
        char szBuffer[1024];

        ReadString(szBuffer, 1024);
        

        d = szBuffer;
    }

    /* vtable[2] */ virtual int GetPos();
    /* vtable[3] */ virtual int Read();
    /* vtable[4] */ virtual int Write();

protected:
    EStorable *ReadStructure(u32 FirstWord, int *pnBytesRead);
    int WriteStructure(EStorable &Root);
};

enum FSReadWriteMode
{
    FS_READ = 0,
    FS_WRITE = 1
};

struct EFileStream : EStream
{
protected:
    EFile *m_pFile;
    FSReadWriteMode m_mode;
    bool m_bOwn;

public:
    EFileStream();
    bool Open(char *filename, FSReadWriteMode mode);
    void Close();
    void Attach(EFile *pFile, FSReadWriteMode mode, int pos, bool bOwn);
    void Detach();
    /* vtable[2] */ virtual int GetPos();
    /* vtable[3] */ virtual int Read(void *pData, int size);
    /* vtable[4] */ virtual int Write(void *pData, int size);
};