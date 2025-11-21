/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_resourceman.h"

#include "common/datastruc/e_redblacktree.h"
#include "common/util/e_checksum.h"
#include "engine/resource/e_resloader.h"
#include "common/sdl/e_sdlfilesystem.h"

bool EResourceManager::m_bTraceEnabled;

EResourceManager::EResourceManager()
{
}

void EResourceManager::Init(char *szDataType)
{
    m_dataType = EString();
    m_dataType = szDataType;
    CalcPath();

    m_initialized = true;
}

void EResourceManager::Shutdown()
{
    if (m_resourceMap.GetList()->m_pHead != NULL)
    {
        PrintLoadedResources();
    }
    m_resourceMap.RemoveAll();

    if (_pResLoader != NULL)
    {
    }

    CloseArchiveFile();
    m_initialized = false;
}

EResource *EResourceManager::AllocateAndLoadResource()
{
}

void EResourceManager::DelRef(u32 id)
{
    EResource *pResource;
    EAutoMutex mutex = m_dataMutex;
    u32 key;

    //(**(code **)(pEVar1 + 1))((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
    //                          0xffffffffffffffff);
    m_resourceMap.Find(id, (u32 *)((u32)&mutex | 4));
    DelRef((EResource *)NULL);
    // Find__C13ERedBlackTreeUiPUi(&(this->m_resourceMap).field0_0x0, id, (u32 *)((u32)&mutex | 4));
    // pEVar1 = ((mutex.m_mutex)->field0_0x0).__vtable;
    //(*(code *)pEVar1[1].Acquire)((int)&((mutex.m_mutex)->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
    /* end of inlined section */
    // DelRef__16EResourceManagerP9EResource(this, (EResource *)0x0);
}

void EResourceManager::DelRef(char *szName)
{
    u32 id;

    id = CalcId(szName);
    DelRef(id);
}

void *EResourceManager::AddRef(EResource *pResource)
{
    EAutoMutex mutex = m_dataMutex;

    m_dataMutex.Release();
    pResource->m_nRefs = pResource->m_nRefs + 1;

    m_dataMutex.Acquire(1);
}

EResource *EResourceManager::AddRef(u32 id, EFile *pSourceFile, int seekIfLoaded)
{
    return addRef(id, pSourceFile, seekIfLoaded, true);
}

EResource *EResourceManager::AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded)
{
    u32 id;
    EResource *pEVar2;

    id = CalcId(szName);
    if (IsValid(id))
    {
        pEVar2 = addRef(id, pSourceFile, seekIfLoaded, true);
    }
    else
    {
        pEVar2 = NULL;
    }
    return pEVar2;
}

EResource *EResourceManager::AddRefAsync(u32 id)
{
    return addRef(id, (EFile *)NULL, 0, false);
}

EResource *EResourceManager::GetRef(u32 id)
{
    /*
    EResource *pResource;
    EAutoMutex mutex;
    EMutex & mutex;
    u32 key;

    ESyncObject__vtable *pEVar1;
    undefined1 *puVar2;
    EAutoMutex mutex;
    EResource *pResource;

    if (id == 0)
    {
        pResource = (EResource *)0x0;
    }
    else
    {
        pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
        mutex.m_mutex = &this->m_dataMutex;
        (**(code **)(pEVar1 + 1))((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
                                  0xffffffffffffffff);
        puVar2 = Find__C13ERedBlackTreeUiPUi(&(this->m_resourceMap).field0_0x0, id, (u32 *)((u32)&mutex | 4));
        if (puVar2 == (undefined1 *)0x0)
        {
            pEVar1 = ((mutex.m_mutex)->field0_0x0).__vtable;
            (*(code *)pEVar1[1].Acquire)((int)&((mutex.m_mutex)->field0_0x0).__vtable +
                                         (int)*(short *)&pEVar1[1].ESyncObject);
            pResource = (EResource *)0x0;
        }
        else
        {
            pEVar1 = ((mutex.m_mutex)->field0_0x0).__vtable;
            (*(code *)pEVar1[1].Acquire)((int)&((mutex.m_mutex)->field0_0x0).__vtable +
                                         (int)*(short *)&pEVar1[1].ESyncObject);
        }
    }
    return pResource;*/
}

EResource *EResourceManager::GetRefAsync(u32 id, bool bWait)
{
    EResource *result;

    EResource *pEVar1;

    result = GetRef(id);
    if ((result == NULL) && (bWait))
    {
        _pResLoader->CloseAllArchiveFiles();
        _pResLoader->OpenFiles();
        //(*(code *)_pResLoader->__vtable->CloseAllArchiveFiles)((int)&_pResLoader->__vtable + (int)*(short *)&_pResLoader->__vtable->OpenFiles);
        result = GetRef(id);
    }
    return result;
}

EResource *EResourceManager::addRef(u32 id, EFile *pSourceFile, int seekIfLoaded, bool bWait)
{
    EResource *pResource;
    bool bInMutex;
    u32 key;
    EFile *pUseFile;
    u32 pos;
    u32 length;
    u32 startOffset;
    u32 testPos;
    u32 testLength;
    u32 key;
    EResource *pAlreadyThere;

    bool bVar3;

    if (id == 0)
    {
        return NULL;
    }
    pResource = NULL;

    m_dataMutex.Acquire(0xffffffff);
    bInMutex = true;

    key = m_resourceMap.Find(id, (u32 *)&pResource);
    /* end of inlined section */
    if (key != NULL)
    {
        pResource->m_nRefs = pResource->m_nRefs + 1;
        if (seekIfLoaded != 0)
        {
            pSourceFile->GetAccessMode();
            //(*(code *)pSourceFile->__vtable->GetAccessMode)((int)&pSourceFile->__vtable + (int)*(short *)&pSourceFile->__vtable->GetIOMode,
            //                                                seekIfLoaded, 1);
        }
        goto LAB_00133f20;
    }
    bInMutex = false;
    pos = 0;
    length = seekIfLoaded;
    m_dataMutex.Release();

    if (pSourceFile == (EFile *)NULL)
    {
        bVar3 = LookupId(id, (u32 *)((u32)&pResource | 0xc), &length);
        if (!bVar3)
            goto LAB_00133f20;
        if (this->m_pArchiveFile == NULL)
        {
            OpenArchiveFile();
            pSourceFile = this->m_pArchiveFile;
            //uVar5 = pos;
        }
        else
        {
            pSourceFile = this->m_pArchiveFile;
           // uVar5 = pos;
        }
    }
    else
    {
       // uVar5 = (*(code *)pSourceFile->__vtable->GetDrive)((int)&pSourceFile->__vtable +
       //                                                    (int)*(short *)&pSourceFile->__vtable->GetDeviceType);
        //LookupId(id, (u32 *)((u32)&pResource | 4), (u32 *)((u32)&pResource | 8));
    }
    //lVar6 = (*(code *)_pResLoader->__vtable[1].TerminateThread)((int)&_pResLoader->__vtable + (int)*(short *)&_pResLoader->__vtable[1].Shutdown, this, id, pSourceFile, uVar5, length, bWait);
   // pResource = (EResource *)lVar6;
  //  if (lVar6 == 0)
    {
        if (!bWait)
            goto LAB_00133f20;
       // if (this == &_pAudiosampleman->field0_0x0)
        {
            //(*(code *)pSourceFile->__vtable->GetAccessMode)((int)&pSourceFile->__vtable + (int)*(short *)&pSourceFile->__vtable->GetIOMode,
            //                                                uVar5 + length, 0);
        }
        if (pResource == (EResource *)0x0)
            goto LAB_00133f20;
    }
    m_dataMutex.Acquire(0xffffffff);
    bInMutex = true;
    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    /* end of inlined section */
    pResource->m_pManager = this;
    pResource->m_resId = id;
    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pos = m_resourceMap.Insert(id, (u32)pResource, false);
    //puVar4 = Insert__13ERedBlackTreeUiUib(&this_00->field0_0x0, id, (u32)pResource, false);
    /* end of inlined section */
    if (pos == NULL)
    {
        /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        m_resourceMap.Find(id, (u32 *)&pAlreadyThere);
        /* end of inlined section */
        pResource->m_nRefs = pResource->m_nRefs + 1;
    }
    else
    {
        m_dataMutex.Release();
        bInMutex = false;
    //    pEVar1 = (pResource->field0_0x0).__vtable;
    //    (*(code *)pEVar1[2].SafeDelete)((int)&(pResource->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 2));
    }
LAB_00133f20:
    if (bInMutex)
    {
        m_dataMutex.Release();
    }
    return pResource;
}

void EResourceManager::DelRef(EResource *pResource)
{
    int iVar2;

    m_dataMutex.Acquire(0xffffffff);
    iVar2 = pResource->m_nRefs + -1;
    pResource->m_nRefs = iVar2;
    if (iVar2 == 0)
    {
        m_resourceMap.Remove(pResource->m_resId);
        m_dataMutex.Release();
        // pEVar1 = (pResource->field0_0x0).__vtable;
        //(*(code *)pEVar1->GetTypeName)((int)&(pResource->field0_0x0).__vtable + (int)*(short *)&pEVar1->GetTypeInfo);
    }
    else
    {
        m_dataMutex.Release();
    }
}

u32 EResourceManager::CalcId(char *szName)
{
    return EChecksum::ComputeSymbol(szName);
}

void EResourceManager::CalcPath()
{
    EString m_pathPrefix;
    char *dataType;

    dataType = (char *)m_dataType;
    if (8 < m_path.GetLength())
    {
        m_pathPrefix.Left(m_path.GetLength());
        m_path = m_pathPrefix;
    }
}

void EResourceManager::PrintLoadedResources()
{
}

void EResourceManager::CloseArchiveFile()
{
    EFile *pArchiveFile = m_pArchiveFile;

    m_dataMutex.Acquire(0xffffffff);
    m_pArchiveFile = NULL;
    m_dataMutex.Release();

    if (m_pArchiveFile != NULL)
    {
        _eorFileSys.Destroy(pArchiveFile);
    }
}

EResource *EResourceManager::AllocateAndLoadResource(EFile *pFile, u32 uLength)
{
}

bool EResourceManager::IsValid(u32 id)
{
    u32 pos;
    u32 length;

    // return LookupId(id, &pos, (u32 *)((u32)&pos | 4));
    return true;
}

bool EResourceManager::IsValid(char *szName)
{
    u32 id;
    id = CalcId(szName);

    return IsValid(id);
}

bool EResourceManager::LookupId(u32 id, u32 &posOut, u32 &lengthOut)
{
    /*
    EMutex mutex;
    int count;
    int pos;
    int dataPos;

    int iVar2;
    int iVar3;

    pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
    (**(code **)(pEVar1 + 1))((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
                              0xffffffffffffffff);
    count = *this->m_pIndex;
    iVar2 = BinarySearch(id, m_pIndex + 1, count);
    if (iVar2 == -1)
    {
        pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
        (*(code *)pEVar1[1].Acquire)((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
    }
    else
    {
        iVar3 = count + iVar2 * 2 + 1;
        *posOut = this->m_pIndex[iVar3];
        *lengthOut = this->m_pIndex[iVar3 + 1];
        pEVar1 = (this->m_dataMutex).field0_0x0.__vtable;
        (*(code *)pEVar1[1].Acquire)((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
    }*/
    // return iVar2 != -1;
    return true;
}