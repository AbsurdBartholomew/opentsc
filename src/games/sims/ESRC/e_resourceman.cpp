/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_resourceman.h"

#include "common/datastruc/e_redblacktree.h"
#include "common/util/e_checksum.h"
#include "engine/resource/e_resloader.h"
#include "common/sdl/e_sdlfilesystem.h"

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
    if(m_resourceMap.GetList()->m_pHead != NULL)
    {
        PrintLoadedResources();
    }
    m_resourceMap.RemoveAll();

    if(_pResLoader != NULL)
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
    EAutoMutex mutex = EAutoMutex(m_dataMutex);
    u32 key;

    //(**(code **)(pEVar1 + 1))((int)&(this->m_dataMutex).field0_0x0.__vtable + (int)*(short *)&pEVar1->Release,
    //                          0xffffffffffffffff);
    m_resourceMap.Find(id, (u32 *)((u32)&mutex | 4));
    DelRef((EResource *)NULL);
    // Find__C13ERedBlackTreeUiPUi(&(this->m_resourceMap).field0_0x0, id, (uint *)((uint)&mutex | 4));
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

EResource *EResourceManager::AddRef(EResource *pResource)
{

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
    char* dataType;

    dataType = (char*)m_dataType;
    if(8 < m_path.GetLength())
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

    if(m_pArchiveFile != NULL)
    {
        _eorFileSys.Destroy(pArchiveFile);
    }
}

EResource *EResourceManager::AllocateAndLoadResource(EFile *pFile, u32 uLength)
{

}