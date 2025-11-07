// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLEPOINT_H
#define C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLEPOINT_H

struct EParticlePoint : EParticle {
	static ETypeInfo m_typeInfo;
	float m_v;
protected:
	static float *m_positions;
	static float *m_texCoords;
	static u8 *m_colors;
	static bool m_inBegin;
public:
	static int m_nDrawQueued;
	static int m_nDrawOffset;
	
	EParticlePoint& operator=();
	EParticlePoint();
	EParticlePoint();
	/* vtable[6] */ virtual EParticlePoint(EParticlePoint*, int, void);
	static EParticlePoint* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EParticlePoint* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[25] */ virtual void Create(EIParticleEmit *pEmit, float dt);
	/* vtable[28] */ virtual void DrawBegin(ERC *pRC, int num);
	/* vtable[29] */ virtual void DrawSingle(ERC *pRC);
	/* vtable[30] */ virtual void DrawEnd(ERC *pRC);
	void DrawFlush(ERC *pRC);
	/* vtable[31] */ virtual EOrderTableData* CreateOrderTable();
};

extern ETypeInfo *gpTypeInfo_EParticlePoint;
extern bool EParticlePoint::m_inBegin;
extern __vtbl_ptr_type EParticlePoint virtual table[34];
extern ETypeInfo EParticlePoint::m_typeInfo;
extern float *EParticlePoint::m_positions;
extern float *EParticlePoint::m_texCoords;
extern u8 *EParticlePoint::m_colors;
extern int EParticlePoint::m_nDrawQueued;
extern int EParticlePoint::m_nDrawOffset;

EStream& operator<<(EStream &s, EParticlePoint *pD);
EStream& operator>>(EStream &s, EParticlePoint *&pD);
void EParticlePoint::~EParticlePoint(int __in_chrg);
void global constructors keyed to gpTypeInfo_EParticlePoint();

#endif // C__EOR_SRC2_ENGINE_PARTICLE_E_PARTICLEPOINT_H
