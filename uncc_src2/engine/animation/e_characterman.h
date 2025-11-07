// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_ANIMATION_E_CHARACTERMAN_H
#define C__EOR_SRC2_ENGINE_ANIMATION_E_CHARACTERMAN_H

struct ECharacterManager : EResourceManager {
	ECharacterManager& operator=();
	ECharacterManager();
	ECharacterManager();
	/* vtable[1] */ virtual ECharacterManager(ECharacterManager*, int, void);
	ERCharacter* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	ERCharacter* AddRef();
protected:
	/* vtable[5] */ virtual EResource* AllocateAndLoadResource(EStream &s);
};

extern ECharacterManager _characterman;
extern __vtbl_ptr_type ECharacterManager virtual table[7];

void ECharacterManager::~ECharacterManager(int __in_chrg);
void global constructors keyed to _characterman();
void global destructors keyed to _characterman();

#endif // C__EOR_SRC2_ENGINE_ANIMATION_E_CHARACTERMAN_H
