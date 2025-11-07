// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_RESOURCE_E_RESLOADER_H
#define C__EOR_SRC2_ENGINE_RESOURCE_E_RESLOADER_H

typedef short unsigned int u_short;

struct EResourceLoader {
	__vtbl_ptr_type *$vf2675;
	
	EResourceLoader& operator=();
	EResourceLoader();
	EResourceLoader();
	/* vtable[1] */ virtual EResourceLoader(EResourceLoader*, int, void);
	/* vtable[2] */ virtual void Init();
	/* vtable[3] */ virtual void Shutdown();
	/* vtable[4] */ virtual void TerminateThread();
	/* vtable[5] */ virtual void Update();
	/* vtable[6] */ virtual void Flush();
	/* vtable[7] */ virtual u32* AddManager();
	/* vtable[8] */ virtual void RemoveManager();
	/* vtable[9] */ virtual EResource* Load();
	/* vtable[10] */ virtual EResourceManager* FindResourceManager();
	/* vtable[11] */ virtual void NewDataFiles();
	/* vtable[12] */ virtual void OpenFiles();
	/* vtable[13] */ virtual void CloseAllArchiveFiles();
	/* vtable[14] */ virtual void PrintAllLoadedResources();
};

extern bool EResourceLoaderImpl::m_bLowPriority;
extern __vtbl_ptr_type EResourceLoaderImpl::EThread virtual table[4];
extern __vtbl_ptr_type EResourceLoaderImpl virtual table[16];
extern __vtbl_ptr_type EResourceLoader virtual table[16];
extern EResourceLoader *_pResLoader;

void EResourceLoader::~EResourceLoader(int __in_chrg);
void EResourceLoaderImpl::~EResourceLoaderImpl(int __in_chrg);
void global constructors keyed to EResourceLoader::EResourceLoader();
void global destructors keyed to EResourceLoader::EResourceLoader();

#endif // C__EOR_SRC2_ENGINE_RESOURCE_E_RESLOADER_H
