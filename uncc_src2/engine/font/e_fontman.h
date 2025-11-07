// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_FONT_E_FONTMAN_H
#define C__EOR_SRC2_ENGINE_FONT_E_FONTMAN_H

struct EFontManager : EResourceManager {
	EFontManager& operator=();
	EFontManager();
	EFontManager();
	/* vtable[1] */ virtual EFontManager(EFontManager*, int, void);
	ERFont* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	ERFont* AddRef();
protected:
	/* vtable[5] */ virtual EResource* AllocateAndLoadResource(EStream &s);
};

extern EFontManager _fontman;
extern __vtbl_ptr_type EFontManager virtual table[7];

void EFontManager::~EFontManager(int __in_chrg);
void global constructors keyed to _fontman();
void global destructors keyed to _fontman();

#endif // C__EOR_SRC2_ENGINE_FONT_E_FONTMAN_H
