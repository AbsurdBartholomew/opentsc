// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLEEMIT_H
#define C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLEEMIT_H

struct EIParticleEmit : EIGameInstance {
	static ETypeInfo m_typeInfo;
protected:
	ERParticleType *m_pType;
	u32 m_particleTypeId;
	EQuat m_qOrient;
	bool m_active;
	float m_lastEmit;
	float m_shaderTime;
	EVec3 m_vPos;
	EVec3 m_vDir;
	EVec3 m_vVel;
	EVec3 m_vAcc;
	float m_scale;
	EParticleList m_particles;
	float m_age;
	float m_lifeTime;
	static bool m_allEnabled;
	EOrderTableData m_otd;
public:
	EIParticleEmit *pNext;
	EIParticleEmit *pLast;
	
	EIParticleEmit& operator=();
	EIParticleEmit(u32 type, EVec3 &vPos, EVec3 &vDir, ERLevel *pLevel, EInstance *pRefInstance);
	static EIParticleEmit* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIParticleEmit* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EIParticleEmit();
	/* vtable[6] */ virtual EIParticleEmit(EIParticleEmit*, int, void);
	EIParticleEmit();
	EIParticleEmit();
	/* vtable[9] */ virtual void Init();
	/* vtable[10] */ virtual void Update();
	void Move(float dt);
	void Type(ERParticleType *pType);
	void Type(EIParticleEmit*, int, void);
	void Type();
	ERShader* GetShader();
	EParticle* Emit(float dt);
	/* vtable[12] */ virtual void Draw(ERC *pRC, u32 renderFlags);
	void Active(bool on);
	/* vtable[23] */ virtual void SetLevel(ERLevel *pLevel);
	void SetDir(EVec3 &vDir);
	void GetDir(EVec3 &vDir);
	void SetPos(EVec3 &vPos);
	void GetPos(EVec3 &vPos);
	void GetVel(EVec3 &vVel);
	void SetVel(EVec3 &vVel);
	void SetAcc(EVec3 &vAcc);
	void SetScale(float scale);
	void SetLifetime(float lifeTime);
	float GetScale();
	/* vtable[11] */ virtual u32 VisibilityTest(EPortalWindow &win, u32 parentVis);
	/* vtable[20] */ virtual void GetBoundSphere(EBoundSphere &boundSphereOut);
	static bool EnableAll(/* parameters unknown */);
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
	/* vtable[22] */ virtual void ReadInstanceData(EStream &s);
protected:
	void AddParticlesToOrphanList();
	void DoSetup();
	void Die();
	static void DrawCallback(/* parameters unknown */);
};

extern ETypeInfo *gpTypeInfo_EIParticleEmit;
extern bool EIParticleEmit::m_allEnabled;
extern __vtbl_ptr_type EIParticleEmit virtual table[30];
extern ETypeInfo EIParticleEmit::m_typeInfo;

EStream& operator<<(EStream &s, EIParticleEmit *pD);
EStream& operator>>(EStream &s, EIParticleEmit *&pD);
void EIParticleEmit::~EIParticleEmit(int __in_chrg);
void global constructors keyed to gpTypeInfo_EIParticleEmit();

#endif // C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLEEMIT_H
