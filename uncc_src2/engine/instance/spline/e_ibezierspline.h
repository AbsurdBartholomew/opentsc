// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_INSTANCE_SPLINE_E_IBEZIERSPLINE_H
#define C__EOR_SRC2_ENGINE_INSTANCE_SPLINE_E_IBEZIERSPLINE_H

struct TArray<EBSControlPoint> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<EBSControlPoint>*, int, void);
	EBSControlPoint& operator[]();
	EBSControlPoint& operator[]();
	EBSControlPoint& operator[]();
	EBSControlPoint& operator[]();
	TArray<EBSControlPoint>& operator=();
	EBSControlPoint* operator EBSControlPoint *();
	EBSControlPoint* operator EBSControlPoint *();
	void SetGrowBy(TArray<EBSControlPoint>*, int, void);
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

struct EIBezierSpline : EIGameInstance {
	static ETypeInfo m_typeInfo;
protected:
	u32 m_NumSplines;
	u32 m_NumControlPoints;
	TArray<EBSControlPoint> m_ControlPoints;
	EGEVert *m_pGeneratedPoints;
	
public:
	EIBezierSpline& operator=();
	EIBezierSpline();
	static EIBezierSpline* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIBezierSpline* CreateCopy();
	EIBezierSpline();
	/* vtable[6] */ virtual EIBezierSpline(EIBezierSpline*, int, void);
	/* vtable[7] */ virtual void Read(EStream &s);
	/* vtable[8] */ virtual void Write(EStream &s);
	/* vtable[12] */ virtual void Draw(ERC *prc, u32 renderFlags);
	/* vtable[11] */ virtual u32 VisibilityTest(EPortalWindow &win, u32 parentVis);
	/* vtable[29] */ virtual void BuildVertList();
	u32 AddPoint(EVec3 Point);
	EVec3 ComputeSplinePoint(f32 Interpolant);
	EVec3 GetControlPoint(u32 PointIndex);
	u32 GetNumControlPoints();
	u32 GetNumSplines();
	EVec3 GetStartPoint();
	EVec3 GetEndPoint();
};

extern ETypeInfo *gpTypeInfo_EIBezierSpline;
extern __vtbl_ptr_type EIBezierSpline virtual table[31];
extern ETypeInfo EIBezierSpline::m_typeInfo;

EStream& operator<<(EStream &s, EIBezierSpline *pD);
EStream& operator>>(EStream &s, EIBezierSpline *&pD);
void EIBezierSpline::~EIBezierSpline(int __in_chrg);
void global constructors keyed to gpTypeInfo_EIBezierSpline();

#endif // C__EOR_SRC2_ENGINE_INSTANCE_SPLINE_E_IBEZIERSPLINE_H
