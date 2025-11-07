// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLESPRITE_H
#define C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLESPRITE_H

struct EParticleSprite : EParticle {
	static ETypeInfo m_typeInfo;
	float m_xSize;
	float m_ySize;
	float m_xVel;
	float m_yVel;
protected:
	static EGEPackedParticle *m_pPacked;
	static bool m_inBegin;
public:
	static int m_nDrawQueued;
	static int m_nDrawOffset;
	
	EParticleSprite& operator=();
	EParticleSprite();
	EParticleSprite();
	/* vtable[6] */ virtual EParticleSprite(EParticleSprite*, int, void);
	static EParticleSprite* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EParticleSprite* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[25] */ virtual void Create(EIParticleEmit *pEmit, float dt);
	/* vtable[26] */ virtual bool Update(float dt);
	/* vtable[28] */ virtual void DrawBegin(ERC *pRC, int num);
	/* vtable[29] */ virtual void DrawSingle(ERC *pRC);
	/* vtable[30] */ virtual void DrawEnd(ERC *pRC);
	/* vtable[33] */ virtual void DrawFlush(ERC *pRC);
	/* vtable[31] */ virtual EOrderTableData* CreateOrderTable();
protected:
	/* vtable[34] */ virtual void FillPacked(EGEPackedParticle *pPacked);
};

extern ETypeInfo *gpTypeInfo_EParticleSprite;
extern bool EParticleSprite::m_inBegin;
extern __vtbl_ptr_type EParticleSprite virtual table[36];
extern ETypeInfo EParticleSprite::m_typeInfo;
extern EGEPackedParticle *EParticleSprite::m_pPacked;
extern int EParticleSprite::m_nDrawQueued;
extern int EParticleSprite::m_nDrawOffset;

EStream& operator<<(EStream &s, EParticleSprite *pD);
EStream& operator>>(EStream &s, EParticleSprite *&pD);
void EParticleSprite::~EParticleSprite(int __in_chrg);
void global constructors keyed to gpTypeInfo_EParticleSprite();

#endif // C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLESPRITE_H
