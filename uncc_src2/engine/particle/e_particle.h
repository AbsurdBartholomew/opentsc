// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLE_H
#define C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLE_H

struct EParticle : EInstance {
	static ETypeInfo m_typeInfo;
	float m_radius;
	s8 m_type;
	s8 m_dead;
	u16 m_flags;
	EVec3 m_vPos;
	EVec3 m_vVel;
	float m_lifeTime;
	float m_totalTime;
	ERShader *m_pRShader;
	ERParticleType *m_pType;
	void *m_pOwnerList;
	EParticle *m_pLast;
	EParticle *m_pNext;
	EOrderTableData *m_pOT;
	
	EParticle& operator=();
	EParticle();
	static EParticle* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EParticle* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EParticle();
	/* vtable[6] */ virtual EParticle(EParticle*, int, void);
	/* vtable[24] */ virtual void Die();
	/* vtable[25] */ virtual void Create(EIParticleEmit *pEmit, float dt);
	/* vtable[10] */ virtual void Update(float dt);
	/* vtable[26] */ virtual bool Update();
	/* vtable[27] */ virtual void Impact();
	/* vtable[23] */ virtual void SetLevel(ERLevel *pLevel);
	/* vtable[11] */ virtual u32 VisibilityTest(EPortalWindow &win, u32 parentVis);
	/* vtable[28] */ virtual void DrawBegin(ERC *pRC, int num);
	/* vtable[29] */ virtual void DrawSingle(ERC *pRC);
	/* vtable[12] */ virtual void Draw(ERC *prc, u32 renderFlags);
	/* vtable[30] */ virtual void DrawEnd(ERC *pRC);
	static void OrderTableCallback(/* parameters unknown */);
	/* vtable[31] */ virtual EOrderTableData* CreateOrderTable();
	/* vtable[32] */ virtual void GetDir(EVec3 &vDir, EVec3 &vEmitDir);
};

extern ETypeInfo *gpTypeInfo_EParticle;
extern __vtbl_ptr_type EParticle virtual table[34];
extern ETypeInfo EParticle::m_typeInfo;

EStream& operator<<(EStream &s, EParticle *pD);
EStream& operator>>(EStream &s, EParticle *&pD);
void EParticle::~EParticle(int __in_chrg);
void global constructors keyed to gpTypeInfo_EParticle();

#endif // C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLE_H
