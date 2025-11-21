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
    void *AddRef(EResource *pResource);
    EResource *AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded);
    EResource *AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
    //void AddRef();
    void DelRef(EResource *pResource);
    void DelRef(char *szName);
    void DelRef(u32 id);

    void Reload(char *szName);
    void Reload();

    bool IsValid(char *szName);
    bool IsValid(u32 id);

    bool IsLoaded(char *szName);
    bool IsLoaded();

    u32 GetSize(u32 id);
    u32 GetSize();
    void GetIds(u32 *&idsOut, int &idCountOut);
    EResource *GetRef(char *szName);
    EResource *GetRef(u32 id);
    EResource *AddRefAsync(u32 id);
    EResource *GetRefAsync(u32 id, bool bWait);
    static u32 CalcId(char *szName);
    inline static void SetTraceState(bool state) { m_bTraceEnabled = state; }
    inline static bool GetTraceState() { return m_bTraceEnabled; }
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
    static int BinarySearch(u32 searchKey, u32 *keys, int count);
    static bool LookupId(u32 id, u32 &posOut, u32 &lengthOut);

private:
    EResource *addRef(u32 id, EFile *pSourceFile, int seekIfLoaded, bool bWait);

protected:
    /* vtable[4] */ virtual EResource *AllocateAndLoadResource(EFile *pFile, u32 uLength);
    /* vtable[5] */ virtual EResource *AllocateAndLoadResource();

    void *_AddRef(EResource *pResource) { AddRef(pResource); }
    EResource *_AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded) { return AddRef(id, pSourceFile, seekIfLoaded); }
    EResource *_AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded) { return AddRef(szName, pSourceFile, seekIfLoaded); }
    void _DelRef(EResource *pResource) { DelRef(pResource); }
    void _DelRef(char *szName) { DelRef(szName); }
    void _DelRef(u32 id) { DelRef(id); }
    EResource *_AddRefAsync(u32 id) { return AddRefAsync(id); }
    EResource *_GetRefAsync(u32 id, bool bWait) { return GetRefAsync(id, bWait); }
};