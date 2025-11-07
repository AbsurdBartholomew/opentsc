// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_BINARY_E_BINARYMAN_H
#define C__EOR_SRC2_ENGINE_BINARY_E_BINARYMAN_H

struct EBinaryManager : EResourceManager {
	EBinaryManager& operator=();
	EBinaryManager();
	EBinaryManager();
	/* vtable[1] */ virtual EBinaryManager(EBinaryManager*, int, void);
	ERBinary* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	ERBinary* AddRef();
protected:
	/* vtable[4] */ virtual EResource* AllocateAndLoadResource(EFile *pFile, u32 uLength);
};

extern EBinaryManager _binaryman;
extern __vtbl_ptr_type EBinaryManager virtual table[7];

void EBinaryManager::~EBinaryManager(int __in_chrg);
void global constructors keyed to _binaryman();
void global destructors keyed to _binaryman();

#endif // C__EOR_SRC2_ENGINE_BINARY_E_BINARYMAN_H
