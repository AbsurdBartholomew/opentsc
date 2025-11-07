// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_MODEL_E_SUBMODEL_H
#define C__EOR_SRC2_ENGINE_MODEL_E_SUBMODEL_H

struct TArray<ESubModelShader> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<ESubModelShader>*, int, void);
	ESubModelShader& operator[]();
	ESubModelShader& operator[]();
	ESubModelShader& operator[]();
	ESubModelShader& operator[]();
	TArray<ESubModelShader>& operator=();
	ESubModelShader* operator ESubModelShader *();
	ESubModelShader* operator ESubModelShader *();
	void SetGrowBy(TArray<ESubModelShader>*, int, void);
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

struct ESubModel {
	TArray<ESubModelShader> m_subModelShaders;
	int m_nNode;
	
	ESubModel& operator=();
	ESubModel();
	ESubModel();
	ESubModel(ESubModel*, int, void);
	void Draw(ERC *prc, u32 renderFlags);
	void DrawNormals(ERC *prc);
	void DrawWireFrame(ERC *prc);
	bool CollidePoint(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, bool testOnly);
	bool CollideSphere(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, float radius);
	int CollideTest(EBound3 &b);
	bool IsCollideable();
	bool IsVisible();
	int GetVertCount();
};

void ESubModel::~ESubModel(int __in_chrg);
EStream& operator>>(EStream &s, ESubModel &m);

#endif // C__EOR_SRC2_ENGINE_MODEL_E_SUBMODEL_H
