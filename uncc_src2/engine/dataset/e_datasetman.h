// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_DATASET_E_DATASETMAN_H
#define C__EOR_SRC2_ENGINE_DATASET_E_DATASETMAN_H

struct EDatasetManager : EResourceManager {
protected:
	float m_fLoadProgress;
	
public:
	EDatasetManager& operator=();
	EDatasetManager();
	/* vtable[1] */ virtual EDatasetManager(EDatasetManager*, int, void);
	EDatasetManager();
	ERDataset* AddRef(char *szName, EFile *pSourceStream, int seekIfLoaded);
	ERDataset* AddRef();
	ERDataset* AddRefAsync(u32 id);
	ERDataset* GetRefAsync(u32 id, bool bWait);
	float GetLoadProgress();
protected:
	/* vtable[4] */ virtual EResource* AllocateAndLoadResource(EFile *pFile, u32 uLength);
	void SetLoadProgress(float progress);
};

extern EDatasetManager _datasetman;
extern __vtbl_ptr_type EDatasetManager virtual table[7];

void EDatasetManager::~EDatasetManager(int __in_chrg);
void global constructors keyed to _datasetman();
void global destructors keyed to _datasetman();

#endif // C__EOR_SRC2_ENGINE_DATASET_E_DATASETMAN_H
