// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_TEXTURE_E_TEXTUREMAN_H
#define C__EOR_SRC2_ENGINE_TEXTURE_E_TEXTUREMAN_H

struct ETextureManager : EResourceManager {
	ETextureManager& operator=();
	ETextureManager();
	ETextureManager();
	/* vtable[1] */ virtual ETextureManager(ETextureManager*, int, void);
	ERTexture* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	ERTexture* AddRef();
protected:
	/* vtable[5] */ virtual EResource* AllocateAndLoadResource(EStream &s);
};

extern ETextureManager _textureman;
extern __vtbl_ptr_type ETextureManager virtual table[7];

void ETextureManager::~ETextureManager(int __in_chrg);
void global constructors keyed to _textureman();
void global destructors keyed to _textureman();

#endif // C__EOR_SRC2_ENGINE_TEXTURE_E_TEXTUREMAN_H
