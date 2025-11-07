// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_MODEL_E_RMODEL_H
#define C__EOR_SRC2_ENGINE_MODEL_E_RMODEL_H

struct EWeldVert {
	void *pvPos;
	s8 *normal;
	bool changed;
};

struct TArray<ESubModel> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<ESubModel>*, int, void);
	ESubModel& operator[]();
	ESubModel& operator[]();
	ESubModel& operator[]();
	ESubModel& operator[]();
	TArray<ESubModel>& operator=();
	ESubModel* operator ESubModel *();
	ESubModel* operator ESubModel *();
	void SetGrowBy(TArray<ESubModel>*, int, void);
	int GetSize();
	void SetSize();
	void FreeUnusedBufferSpace();
	int Search();
	bool IsEmpty();
	void Empty();
	void RemoveAll();
	void Insert();
	void Insert();
	void Add();
	void Add();
	void Add();
	void Remove();
	void Delete();
	void SafeDelete();
	void DeleteAll();
	void SafeDeleteAll();
	void FreeAll();
};

struct ERModel : EResource {
	static ETypeInfo m_typeInfo;
	TArray<ESubModel> m_subModels;
	EBoundSphere m_boundSphere;
	EBound3 m_boundBox;
	ERHavokModel *m_pHavokModel;
	float m_scaler;
	bool m_hierarchical;
	bool m_intVerts;
	bool m_drawSorted;
protected:
	EMat4 *m_pmScale;
	static EMat4 m_mMatrixStack[256];
	
public:
	ERModel& operator=();
	ERModel();
	static ERModel* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERModel* CreateCopy();
	ERModel();
	/* vtable[6] */ virtual ERModel(ERModel*, int, void);
	void Draw(ERC *prc, u32 renderFlags);
	void DrawHierarchical(ERC *prc, EMat4 *pmNodes, int nNodes, u32 renderFlags);
	void DrawNormals(ERC *prc);
	void DrawWireFrame(ERC *prc);
	static void SetHierarchicalOrient(/* parameters unknown */);
	bool CollidePoint(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, bool testOnly);
	bool CollideSphere(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, float radius);
	static void CopyMatrices(/* parameters unknown */);
	void WeldSharedVerts(ERModel *pOther, float weldDistance);
	void CalcOrientedBoundSphere(EMat4 &mOrient, EBoundSphere &sphereOut);
	void CalcOrientedBoundBox(EMat4 &mOrient, EBound3 &boundBoxOut);
	int GetShaderCount();
	int GetVertCount();
	EMat4* GetScaleMatrix();
	void SetHavokModel(ERHavokModel *pModel);
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
	/* vtable[10] */ virtual void Reload(EStream &s);
protected:
	void DeallocateScaleMatrix();
	EVec3 GetWeldPos(EWeldVert *pwv);
	void SetWeldPos(EWeldVert *pwv, EVec3 &vPos);
};

extern EMat4 ERModel::m_mMatrixStack[256];
extern ETypeInfo *gpTypeInfo_ERModel;
extern __vtbl_ptr_type ERModel virtual table[13];
extern ETypeInfo ERModel::m_typeInfo;

EStream& operator<<(EStream &s, ERModel *pD);
EStream& operator>>(EStream &s, ERModel *&pD);
void ERModel::~ERModel(int __in_chrg);
void global constructors keyed to ERModel::m_mMatrixStack();

#endif // C__EOR_SRC2_ENGINE_MODEL_E_RMODEL_H
