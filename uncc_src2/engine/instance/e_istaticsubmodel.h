// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_INSTANCE_E_ISTATICSUBMODEL_H
#define C__EOR_SRC2_ENGINE_INSTANCE_E_ISTATICSUBMODEL_H

struct EIStaticSubModel : EInstance {
	static ETypeInfo m_typeInfo;
protected:
	EBoundSphere m_boundSphere;
	u32 m_modelId;
	u32 m_nSubModel;
	ETriggerList *m_pTriggerList;
	EOrderTableData *m_otds;
	ERModel *m_pModel;
	
public:
	EIStaticSubModel& operator=();
	EIStaticSubModel();
	static EIStaticSubModel* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIStaticSubModel* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EIStaticSubModel();
	/* vtable[6] */ virtual EIStaticSubModel(EIStaticSubModel*, int, void);
	/* vtable[11] */ virtual u32 VisibilityTest(EPortalWindow &win, u32 parentVis);
	/* vtable[12] */ virtual void Draw(ERC *prc, u32 renderFlags);
	/* vtable[13] */ virtual void DrawWireFrame(ERC *prc, u32 renderFlags);
	/* vtable[16] */ virtual bool CollidePointWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, u32 type, bool testOnly, EInstance *pInst);
	/* vtable[17] */ virtual bool CollideSphereWithInstance(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, float radius, u32 type, EInstance *pInst);
	/* vtable[18] */ virtual int CollideTest(EBound3 &b, u32 type);
	/* vtable[20] */ virtual void GetBoundSphere(EBoundSphere &boundSphereOut);
	/* vtable[21] */ virtual ETriggerList* GetTriggerList();
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
protected:
	void Deallocate();
	void DeallocateModel();
	void SetupModel();
	static void OrderTableCallback(/* parameters unknown */);
};

extern ETypeInfo *gpTypeInfo_EIStaticSubModel;
extern __vtbl_ptr_type EIStaticSubModel virtual table[25];
extern ETypeInfo EIStaticSubModel::m_typeInfo;

EStream& operator<<(EStream &s, EIStaticSubModel *pD);
EStream& operator>>(EStream &s, EIStaticSubModel *&pD);
void EIStaticSubModel::~EIStaticSubModel(int __in_chrg);
EStream& EStream & operator<<<ETrigger *>(EStream &s, TNodeList<ETrigger *> &d);
EStream& EStream & operator>><ETrigger *>(EStream &s, TNodeList<ETrigger *> &d);
void global constructors keyed to gpTypeInfo_EIStaticSubModel();

#endif // C__EOR_SRC2_ENGINE_INSTANCE_E_ISTATICSUBMODEL_H
