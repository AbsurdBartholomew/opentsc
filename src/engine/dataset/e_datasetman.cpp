/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#include "e_datasetman.h"

EDatasetManager _datasetman;

EDatasetManager::EDatasetManager()
{
    m_bSeqAccess = 1;
    m_fLoadProgress = -1.0f;
}

EResource *EDatasetManager::AllocateAndLoadResource(EFile *pFile, u32 uLength)
{
    ERDataset *pRDataset;
    pRDataset = new ERDataset();
    pRDataset->Load(pFile, uLength);

    return pRDataset;
}

ERDataset *EDatasetManager::AddRef(u32 id, EFile *pSourceStream, int seekIfLoaded)
{
    ERDataset *pEVar1;

    pEVar1 = (ERDataset *)AddRef(id, (EFile*)NULL, 0);
    return pEVar1;
}

ERDataset *EDatasetManager::AddRef(char *szName, EFile *pSourceStream, int seekIfLoaded)
{
    ERDataset *pEVar1;

    pEVar1 = (ERDataset *)AddRef(szName, (EFile *)NULL, 0);
    return pEVar1;
}

ERDataset *EDatasetManager::AddRefAsync(u32 id)
{
    ERDataset *pEVar1;

    pEVar1 = (ERDataset *)AddRefAsync(id);
    return pEVar1;
}

ERDataset *EDatasetManager::GetRefAsync(u32 id, bool bWait)
{
    ERDataset *pEVar1;

    pEVar1 = (ERDataset *)GetRefAsync(id, bWait);
    return pEVar1;
}

float EDatasetManager::GetLoadProgress()
{
    return this->m_fLoadProgress;
}

void EDatasetManager::SetLoadProgress(float progress)
{
    this->m_fLoadProgress = progress;
    return;
}