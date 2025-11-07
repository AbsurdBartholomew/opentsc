// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLESPRITEROT_H
#define C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLESPRITEROT_H

struct EParticleSpriteRot : EParticleSprite {
	static ETypeInfo m_typeInfo;
protected:
	float m_rotSpeed;
	float m_rot;
	bool m_rot180;
	
public:
	EParticleSpriteRot& operator=();
	EParticleSpriteRot();
	EParticleSpriteRot();
	/* vtable[6] */ virtual EParticleSpriteRot(EParticleSpriteRot*, int, void);
	static EParticleSpriteRot* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EParticleSpriteRot* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[33] */ virtual void DrawFlush(ERC *pRC);
	/* vtable[25] */ virtual void Create(EIParticleEmit *pEmit, float dt);
	/* vtable[26] */ virtual bool Update(float dt);
	/* vtable[35] */ virtual void Rotate(float dt);
protected:
	/* vtable[34] */ virtual void FillPacked(EGEPackedParticle *pPacked);
};

extern ETypeInfo *gpTypeInfo_EParticleSpriteRot;
extern __vtbl_ptr_type EParticleSpriteRot virtual table[37];
extern ETypeInfo EParticleSpriteRot::m_typeInfo;

EStream& operator<<(EStream &s, EParticleSpriteRot *pD);
EStream& operator>>(EStream &s, EParticleSpriteRot *&pD);
void EParticleSpriteRot::~EParticleSpriteRot(int __in_chrg);
void global constructors keyed to gpTypeInfo_EParticleSpriteRot();

#endif // C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLESPRITEROT_H
