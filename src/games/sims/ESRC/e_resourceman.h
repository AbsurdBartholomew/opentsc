/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once

#include "common/datastruc/e_redblacktree.h"
#include "common/sync/e_mutex.h"
#include "common/sdl/e_sdlfileio.h"
#include "engine/resource/e_resource.h"

typedef TRedBlackTree<unsigned int,EResource *> EResourceMap;

class EResourceManager
{
protected:
    EMutex m_dataMutex;
    EResourceMap m_resourceMap;
    EString m_dataType;
    EString m_path;
    bool m_initialized;
    u32 *m_pIndex;
    EFile *m_pArchiveFile;
    bool m_bSeqAccess;
    static bool m_bTraceEnabled;

public:
    EResourceManager *m_pLast;
    EResourceManager *m_pNext;

    EResourceManager();
    /* vtable[2] */ virtual void Init(char *szDataType);
    /* vtable[3] */ virtual void Shutdown();
    EResource *AddRef(EResource *pResource);
    EResource *AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded);
    //void AddRef();
    void DelRef(EResource *pResource);
    void DelRef(char *szName);
    void DelRef(u32 id);

    void Reload(char *szName);
    void Reload();

    bool IsValid(char *szName);
    bool IsValid();

    bool IsLoaded(char *szName);
    bool IsLoaded();

    u32 GetSize(u32 id);
    u32 GetSize();
    void GetIds(u32 *&idsOut, int &idCountOut);
    EResource *GetRef(char *szName);
    EResource *GetRef();
    EResource *AddRefAsync(u32 id);
    EResource *GetRefAsync(u32 id, bool bWait);
    static u32 CalcId(char *szName);
    static void SetTraceState(/* parameters unknown */);
    static bool GetTraceState(/* parameters unknown */);
    void PrintLoadedResources();
    u32 GetFirstLoadedId();
    u32 GetNextLoadedId(u32 prevId);
    void OpenArchiveFile();

protected:
    void ResourceDestructing(EResource *pResource);
    void CloseArchiveFile();
    void CalcPath();
    bool LookupId(EResourceManager *pManager, u32 id, u32 &posOut, u32 &lengthOut);
    void AddResource(EResource *pResource, u32 id);
    static int BinarySearch(/* parameters unknown */);
    static bool LookupId(/* parameters unknown */);

private:
    EResource *addRef(u32 id, EFile *pSourceFile, int seekIfLoaded, bool bWait);

protected:
    /* vtable[4] */ virtual EResource *AllocateAndLoadResource(EFile *pFile, u32 uLength);
    /* vtable[5] */ virtual EResource *AllocateAndLoadResource();
};