// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_ANIMATION_E_ANIMMAN_H
#define C__EOR_SRC2_ENGINE_ANIMATION_E_ANIMMAN_H

struct EAnimManager : EResourceManager {
	EAnimManager& operator=();
	EAnimManager();
	EAnimManager();
	/* vtable[1] */ virtual EAnimManager(EAnimManager*, int, void);
	ERAnim* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	ERAnim* AddRef();
protected:
	/* vtable[5] */ virtual EResource* AllocateAndLoadResource(EStream &s);
};

extern EAnimManager _animman;
extern __vtbl_ptr_type EAnimManager virtual table[7];

void EAnimManager::~EAnimManager(int __in_chrg);
void global constructors keyed to _animman();
void global destructors keyed to _animman();

#endif // C__EOR_SRC2_ENGINE_ANIMATION_E_ANIMMAN_H
