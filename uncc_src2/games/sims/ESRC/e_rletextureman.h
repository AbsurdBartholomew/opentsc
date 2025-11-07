// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_E_RLETEXTUREMAN_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_E_RLETEXTUREMAN_H

struct ERleTextureManager : EResourceManager {
	ERleTextureManager& operator=();
	ERleTextureManager();
	ERleTextureManager();
	/* vtable[1] */ virtual ERleTextureManager(ERleTextureManager*, int, void);
	ERRleTexture* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	ERRleTexture* AddRef();
protected:
	/* vtable[5] */ virtual EResource* AllocateAndLoadResource(EStream &s);
};

extern ERleTextureManager _rletexman;
extern __vtbl_ptr_type ERleTextureManager virtual table[7];

void ERleTextureManager::~ERleTextureManager(int __in_chrg);
void global constructors keyed to _rletexman();
void global destructors keyed to _rletexman();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_E_RLETEXTUREMAN_H
