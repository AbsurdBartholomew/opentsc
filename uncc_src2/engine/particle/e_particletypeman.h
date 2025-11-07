// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLETYPEMAN_H
#define C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLETYPEMAN_H

struct EParticleTypeManager : EResourceManager {
	EParticleTypeManager& operator=();
	EParticleTypeManager();
	EParticleTypeManager();
	/* vtable[1] */ virtual EParticleTypeManager(EParticleTypeManager*, int, void);
	ERParticleType* AddRef(char *szName, EFile *pSourceFile, int seekIfLoaded);
	ERParticleType* AddRef();
protected:
	/* vtable[5] */ virtual EResource* AllocateAndLoadResource(EStream &s);
};

extern EParticleTypeManager _particletypeman;
extern __vtbl_ptr_type EParticleTypeManager virtual table[7];

void EParticleTypeManager::~EParticleTypeManager(int __in_chrg);
void global constructors keyed to _particletypeman();
void global destructors keyed to _particletypeman();

#endif // C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLETYPEMAN_H
