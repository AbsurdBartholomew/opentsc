// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLEQUAD_H
#define C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLEQUAD_H

struct EParticleQuad : EParticle {
	static ETypeInfo m_typeInfo;
	EVec3 m_vGrowthVel;
	EVec3 m_vSize;
	EMat4 m_mPos;
	
	EParticleQuad& operator=();
	EParticleQuad();
	EParticleQuad();
	/* vtable[6] */ virtual EParticleQuad(EParticleQuad*, int, void);
	static EParticleQuad* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EParticleQuad* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[25] */ virtual void Create(EIParticleEmit *pEmit, float dt);
	/* vtable[26] */ virtual bool Update(float dt);
	/* vtable[28] */ virtual void DrawBegin(ERC *pRC, int num);
	/* vtable[29] */ virtual void DrawSingle(ERC *pRC);
	/* vtable[30] */ virtual void DrawEnd(ERC *pRC);
	/* vtable[33] */ virtual void Rotate(float dt);
};

extern ETypeInfo *gpTypeInfo_EParticleQuad;
extern __vtbl_ptr_type EParticleQuad virtual table[35];
extern ETypeInfo EParticleQuad::m_typeInfo;

EStream& operator<<(EStream &s, EParticleQuad *pD);
EStream& operator>>(EStream &s, EParticleQuad *&pD);
void EParticleQuad::~EParticleQuad(int __in_chrg);
void global constructors keyed to gpTypeInfo_EParticleQuad();

#endif // C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLEQUAD_H
