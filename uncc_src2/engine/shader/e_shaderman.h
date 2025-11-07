// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_SHADER_E_SHADERMAN_H
#define C__EOR_SRC2_ENGINE_SHADER_E_SHADERMAN_H

struct EShaderManager : EResourceManager {
	EShaderManager& operator=();
	EShaderManager();
	EShaderManager();
	/* vtable[1] */ virtual EShaderManager(EShaderManager*, int, void);
	ERShader* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	ERShader* AddRef();
protected:
	/* vtable[5] */ virtual EResource* AllocateAndLoadResource(EStream &s);
};

extern EShaderManager _shaderman;
extern __vtbl_ptr_type EShaderManager virtual table[7];

void EShaderManager::~EShaderManager(int __in_chrg);
void global constructors keyed to _shaderman();
void global destructors keyed to _shaderman();

#endif // C__EOR_SRC2_ENGINE_SHADER_E_SHADERMAN_H
