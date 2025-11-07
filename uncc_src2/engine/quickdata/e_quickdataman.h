// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_QUICKDATA_E_QUICKDATAMAN_H
#define C__EOR_SRC2_ENGINE_QUICKDATA_E_QUICKDATAMAN_H

struct EQuickdataManager : EResourceManager {
private:
	int m_iLanguage;
	
public:
	EQuickdataManager& operator=();
	EQuickdataManager();
	/* vtable[1] */ virtual EQuickdataManager(EQuickdataManager*, int, void);
	ERQuickdata* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	ERQuickdata* AddRef();
	EQuickdataManager();
	int GetCurrentLanguage();
	void SetCurrentLanguage(int iLanguage);
protected:
	/* vtable[4] */ virtual EResource* AllocateAndLoadResource(EFile *pFile, u32 uLength);
};

extern EQuickdataManager _quickdataman;
extern __vtbl_ptr_type EQuickdataManager virtual table[7];

void EQuickdataManager::~EQuickdataManager(int __in_chrg);
void global constructors keyed to _quickdataman();
void global destructors keyed to _quickdataman();

#endif // C__EOR_SRC2_ENGINE_QUICKDATA_E_QUICKDATAMAN_H
