/******************
 * OpenTSC Header *
 * Replace me     *
******************/
#pragma once

#include "ESRC/e_resourceman.h"

class ERleTextureManager : public EResourceManager {
public:
	ERleTextureManager();

	//ERRleTexture* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	//ERRleTexture* AddRef();
protected:
	///* vtable[5] */ virtual EResource* AllocateAndLoadResource(EStream &s);
};

extern ERleTextureManager _rletexman;