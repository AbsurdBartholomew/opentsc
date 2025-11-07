// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_MODEL_E_MODELMAN_H
#define C__EOR_SRC2_ENGINE_MODEL_E_MODELMAN_H

struct EModelManager : EResourceManager {
protected:
	int m_nTrisLoaded;
	int m_nStripsLoaded;
	
public:
	EModelManager& operator=();
	EModelManager();
	EModelManager();
	/* vtable[1] */ virtual EModelManager(EModelManager*, int, void);
	ERModel* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	ERModel* AddRef();
	void TrisLoaded(int nTris);
	void StripsLoaded(int nStrips);
protected:
	/* vtable[5] */ virtual EResource* AllocateAndLoadResource(EStream &s);
	void ResetLoadCounters();
};

extern EModelManager _modelman;
extern __vtbl_ptr_type EModelManager virtual table[7];

void EModelManager::~EModelManager(int __in_chrg);
void global constructors keyed to _modelman();
void global destructors keyed to _modelman();

#endif // C__EOR_SRC2_ENGINE_MODEL_E_MODELMAN_H
