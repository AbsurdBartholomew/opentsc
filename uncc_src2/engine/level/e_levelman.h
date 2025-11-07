// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_LEVEL_E_LEVELMAN_H
#define C__EOR_SRC2_ENGINE_LEVEL_E_LEVELMAN_H

struct ELevelManager : EResourceManager {
	ELevelManager& operator=();
	ELevelManager();
	ELevelManager();
	/* vtable[1] */ virtual ELevelManager(ELevelManager*, int, void);
	ERLevel* AddRef();
	ERLevel* AddRef();
};

extern ELevelManager _levelman;
extern __vtbl_ptr_type ELevelManager virtual table[7];

void ELevelManager::~ELevelManager(int __in_chrg);
void global constructors keyed to _levelman();
void global destructors keyed to _levelman();

#endif // C__EOR_SRC2_ENGINE_LEVEL_E_LEVELMAN_H
