// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLEMAN_H
#define C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLEMAN_H

typedef TLinkedList<EParticle,184,188> EParticleList;
typedef TLinkedList<EIParticleEmit,288,284> EIParticleEmitList;

struct EParticleClass {
	int size;
};

struct EParticleMan {
	EParticleClass m_pclClasses[5];
	EIParticleEmitList m_emitList;
	EIParticleEmit *m_pNextUpdateEmit;
	EParticleList m_orphanParticles;
	void *m_pData;
	int m_nVtxs;
	bool m_init;
	float m_timeScale;
	static ERShader *m_pLastRShader;
	__vtbl_ptr_type *$vf3978;
	
	EParticleMan& operator=();
	EParticleMan();
	EParticleMan();
	/* vtable[1] */ virtual EParticleMan(EParticleMan*, int, void);
	void Init();
	void Update();
	void Draw(ERC *pRC);
	EParticle* Get(int type);
	void Free(EParticle *pPcl, int type);
	void AddEmit(EIParticleEmit *pEmit);
	void RemoveEmit(EIParticleEmit *pEmit);
	void AddOrphan(EParticle *pPcl);
	void Emit(int id, EVec3 &vPos, EVec3 &vVel, ERLevel *pLevel);
	void Emit();
	void DestroyOrphans();
	void SetTimeScale(float scale);
	float GetTimeScale();
};

extern EParticleMan _pclman;
extern ERShader *EParticleMan::m_pLastRShader;
extern __vtbl_ptr_type EParticleMan virtual table[3];

void EParticleMan::~EParticleMan(int __in_chrg);
void global constructors keyed to _pclman();
void global destructors keyed to _pclman();

#endif // C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLEMAN_H
