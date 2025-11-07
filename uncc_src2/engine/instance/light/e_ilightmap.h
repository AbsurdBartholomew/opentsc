// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_ILIGHTMAP_H
#define C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_ILIGHTMAP_H

typedef void* (*FnAllocAlign)(/* parameters unknown */);
typedef void (*FnFree)(/* parameters unknown */);
typedef TRedBlackTree<EInstance *,unsigned int> ELMInstanceSet;

struct EILightmap : EInstance {
	static ETypeInfo m_typeInfo;
protected:
	EOrderTableData m_orderTableData;
	ELMInstanceSet m_receivers;
	EBoundSphere m_boundSphere;
	EAllocGroup m_ag;
	EMat4 m_mTexture;
	EVec3 m_vPos;
	EVec3 m_vXDelta;
	EVec3 m_vYDelta;
	EVec3 m_vNormal;
	float m_area;
	int m_xRes;
	int m_yRes;
	int m_nSupersample;
	EShader *m_pShader;
	ETexture *m_pTexture;
	u8 **m_image;
	bool m_blur;
	static FnAllocAlign m_pfnAllocAlign;
	static FnFree m_pfnFree;
	
public:
	EILightmap& operator=();
	EILightmap();
	static EILightmap* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EILightmap* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EILightmap();
	/* vtable[6] */ virtual EILightmap(EILightmap*, int, void);
	bool Create(int xRes, int yRes);
	void Destroy();
	void SetPosition(EVec3 &vPos, EVec3 &vXDelta, EVec3 &vYDelta);
	void DrawPosition(ERC *prc);
	void Select(ERC *prc);
	void SetSupersampling(int nSupersample);
	void SetBlur(bool blur);
	void Compute();
	float GetArea();
	void AddReceiver(EInstance *pInstance);
	void RemoveReceiver(EInstance *pInstance);
	EMat4& GetTextureMatrix();
	/* vtable[11] */ virtual u32 VisibilityTest(EPortalWindow &win, u32 parentVis);
	/* vtable[12] */ virtual void Draw(ERC *prc, u32 renderFlags);
	/* vtable[20] */ virtual void GetBoundSphere(EBoundSphere &boundSphereOut);
	static void SetAllocAlignFn(/* parameters unknown */);
	static void SetFreeFn(/* parameters unknown */);
	static FnAllocAlign GetAllocAlignFn(/* parameters unknown */);
	static FnFree GetFreeFn(/* parameters unknown */);
	int GetXRes();
	int GetYRes();
	EVec3& GetPos();
	EVec3& GetNormal();
	EVec3& GetXDelta();
	EVec3& GetYDelta();
protected:
	bool AllocateImage();
	void DeallocateImage();
	void CalcBounds();
	void ZeroImage();
	void WriteImage();
	void AddLighting(EILight *pLight);
	static void OrderTableCallback(/* parameters unknown */);
	void DoDraw(ERC *prc, u32 renderFlags);
	void CalcPosition();
};

extern int _quantk;
extern float _lmoff2x;
extern float _lmoff2y;
extern FnAllocAlign EILightmap::m_pfnAllocAlign;
extern FnFree EILightmap::m_pfnFree;
extern ETypeInfo *gpTypeInfo_EILightmap;
extern __vtbl_ptr_type EILightmap virtual table[25];
extern ETypeInfo EILightmap::m_typeInfo;

EStream& operator<<(EStream &s, EILightmap *pD);
EStream& operator>>(EStream &s, EILightmap *&pD);
void EILightmap::~EILightmap(int __in_chrg);
void global constructors keyed to _quantk();

#endif // C__EOR_SRC2_ENGINE_INSTANCE_LIGHT_E_ILIGHTMAP_H
