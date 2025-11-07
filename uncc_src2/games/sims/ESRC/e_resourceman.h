// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_E_RESOURCEMAN_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_E_RESOURCEMAN_H

typedef TRedBlackTree<unsigned int,EResource *> EResourceMap;

struct EResourceManager {
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
	__vtbl_ptr_type *$vf1914;
	
	EResourceManager& operator=();
	EResourceManager();
	EResourceManager();
	/* vtable[1] */ virtual EResourceManager(EResourceManager*, int, void);
	/* vtable[2] */ virtual void Init(char *szDataType);
	/* vtable[3] */ virtual void Shutdown();
	EResource* AddRef(EResource *pResource);
	EResource* AddRef();
	void AddRef();
	void DelRef(EResource *pResource);
	void DelRef();
	void DelRef();
	void Reload(char *szName);
	void Reload();
	bool IsValid(char *szName);
	bool IsValid();
	bool IsLoaded(char *szName);
	bool IsLoaded();
	u32 GetSize(u32 id);
	u32 GetSize();
	void GetIds(u32 *&idsOut, int &idCountOut);
	EResource* GetRef(char *szName);
	EResource* GetRef();
	EResource* AddRefAsync(u32 id);
	EResource* GetRefAsync(u32 id, bool bWait);
	static u32 CalcId(/* parameters unknown */);
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
	EResource* addRef(u32 id, EFile *pSourceFile, int seekIfLoaded, bool bWait);
protected:
	/* vtable[4] */ virtual EResource* AllocateAndLoadResource(EFile *pFile, u32 uLength);
	/* vtable[5] */ virtual EResource* AllocateAndLoadResource();
};

extern bool EResourceManager::m_bTraceEnabled;
extern __vtbl_ptr_type EResourceManager virtual table[7];

void EResourceManager::~EResourceManager(int __in_chrg);

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_E_RESOURCEMAN_H
