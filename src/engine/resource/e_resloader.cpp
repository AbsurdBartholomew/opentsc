/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#include <stdio.h>
#include "e_resloader.h"

#include "engine/resource/e_resource.h"
#include "ESRC/e_resourceman.h"

static EResourceLoaderImpl _resLoader;
EResourceLoader *_pResLoader = NULL;

EResourceLoaderImpl::EResourceLoaderImpl()
{
    m_resManList.m_pTail = NULL;
    m_resManList.m_pHead = NULL;

    m_dataMutex = EMutex();
    m_flushMutex = EMutex();
    //m_cmdAllocPool = EFixedPool();
    //m_commandQueue = EMsgQueue();

    m_bInitialized = false;
    m_pGlobalIndex = 0;
    _pResLoader = this;
}

void EResourceLoaderImpl::Init()
{
    allocateGlobalIndex();
    //m_commandQueue.Init(32, NULL);
    m_szName = "Resource Loader";
    Create(0x61, 0x8000, NULL);
    Start();
    m_timerId = SDL_AddTimer(0xa0, (SDL_TimerCallback)_tAlarmCallback, this);

    m_bInitialized = true;
}

void EResourceLoaderImpl::Shutdown()
{

}

void EResourceLoaderImpl::TerminateThread()
{

}

void EResourceLoaderImpl::Update()
{

}

void EResourceLoaderImpl::Flush()
{

}

u32* EResourceLoaderImpl::AddManager(EResourceManager *pManager)
{

}

void EResourceLoaderImpl::RemoveManager(EResourceManager *pManager)
{

}

EResource* EResourceLoaderImpl::Load(EResourceManager *pManager, u32 id, EFile *pSourceFile, u32 uStartOffset, u32 uLength, bool bWait)
{

}

EResourceManager* EResourceLoaderImpl::FindResourceManager(char *szDataType)
{

}

void EResourceLoaderImpl::NewDataFiles()
{

}

void EResourceLoaderImpl::OpenFiles()
{

}

void EResourceLoaderImpl::CloseAllArchiveFiles()
{

}

void EResourceLoaderImpl::PrintAllLoadedResources()
{

}

void EResourceLoaderImpl::Main()
{

}

void EResourceLoaderImpl::deallocateGlobalIndex()
{

}

void EResourceLoaderImpl::allocateGlobalIndex()
{

}

u32* EResourceLoaderImpl::getIndexPointer(EString &dataType)
{

}

int EResourceLoaderImpl::getCommandCount()
{

}

void EResourceLoaderImpl::sendCommand(EResLoadCmd *pCmd)
{
    
}

void EResourceLoaderImpl::_tAlarmCallback(u32 interval, void *param)
{
    printf("ALARM!\n");
}