// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_INSTANCE_E_ISTATICMODEL_H
#define C__EOR_SRC2_ENGINE_INSTANCE_E_ISTATICMODEL_H

struct EIStaticModel : EInstance {
	static ETypeInfo m_typeInfo;
protected:
	EMat4 m_mOrient;
	EMat4 m_mInvOrient;
	bool m_dynamiclyLit;
	u32 m_modelId;
	EBoundSphere m_boundSphere;
	EOrderTableData *m_otds;
	ERModel *m_pModel;
	
public:
	EIStaticModel& operator=();
	EIStaticModel();
	static EIStaticModel* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIStaticModel* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EIStaticModel();
	/* vtable[6] */ virtual EIStaticModel(EIStaticModel*, int, void);
	/* vtable[11] */ virtual u32 VisibilityTest(EPortalWindow &win, u32 parentVis);
	/* vtable[12] */ virtual void Draw(ERC *prc, u32 renderFlags);
	/* vtable[16] */ virtual bool CollidePointWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, u32 type, bool testOnly, EInstance *pInst);
	/* vtable[17] */ virtual bool CollideSphereWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, float radius, u32 type, EInstance *pInst);
	/* vtable[20] */ virtual void GetBoundSphere(EBoundSphere &boundSphereOut);
	void SetModel(char *szName);
	void SetModel();
	/* vtable[14] */ virtual void SetOrient(EMat4 &mOrient);
	void GetOrient(EMat4 &mOrientOut);
	u32 GetModelId();
	bool GetDynamiclyLit();
	void SetDynamiclyLit(bool dynamiclyLit);
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
protected:
	static void OrderTableCallback(/* parameters unknown */);
	void DeallocateModel();
	void Setup();
	void SetupModel();
	void SetupBounds();
	/* vtable[24] */ virtual EMat4* GetDrawMatrix(ERC *prc);
};

extern ETypeInfo *gpTypeInfo_EIStaticModel;
extern __vtbl_ptr_type EIStaticModel virtual table[26];
extern ETypeInfo EIStaticModel::m_typeInfo;

EStream& operator<<(EStream &s, EIStaticModel *pD);
EStream& operator>>(EStream &s, EIStaticModel *&pD);
void EIStaticModel::~EIStaticModel(int __in_chrg);
void global constructors keyed to gpTypeInfo_EIStaticModel();

#endif // C__EOR_SRC2_ENGINE_INSTANCE_E_ISTATICMODEL_H
