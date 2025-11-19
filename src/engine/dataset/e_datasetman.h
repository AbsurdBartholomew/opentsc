/******************
 * OpenTSC Header *
 * Replace me     *
 ******************/
#pragma once
#include "ESRC/e_resourceman.h"
#include "common/file/e_file.h"
#include "engine/dataset/e_rdataset.h"

struct EDatasetManager : public EResourceManager {
protected:
	float m_fLoadProgress;
	
public:
	EDatasetManager();

	ERDataset* AddRef(char *szName, EFile *pSourceStream, int seekIfLoaded);
	ERDataset* AddRef(u32 id, EFile *pSourceStream, int seekIfLoaded);
	ERDataset* AddRefAsync(u32 id);
	ERDataset* GetRefAsync(u32 id, bool bWait);

	float GetLoadProgress();
protected:
	/* vtable[4] */ virtual EResource* AllocateAndLoadResource(EFile *pFile, u32 uLength);
	void SetLoadProgress(float progress);
};

extern EDatasetManager _datasetman;