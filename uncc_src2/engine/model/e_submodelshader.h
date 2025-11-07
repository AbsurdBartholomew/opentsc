// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_ENGINE_MODEL_E_SUBMODELSHADER_H
#define C__EOR_SRC2_ENGINE_MODEL_E_SUBMODELSHADER_H

typedef long unsigned int u64;

struct EModelCollisionNode {
	u32 orient : 1;
	u32 nVerts : 5;
	u32 nNodes : 6;
	u32 zmask : 4;
	u32 xmask : 8;
	u32 ymask : 8;
};

struct EModelCollisionData {
	TArray<unsigned int> cols;
	EVec3 vScale;
	EVec3 vOffset;
};

struct TArray<ESMSStrip> : private EArray {
	TArray();
	TArray();
	TArray();
	TArray();
	TArray(TArray<ESMSStrip>*, int, void);
	ESMSStrip& operator[]();
	ESMSStrip& operator[]();
	ESMSStrip& operator[]();
	ESMSStrip& operator[]();
	TArray<ESMSStrip>& operator=();
	ESMSStrip* operator ESMSStrip *();
	ESMSStrip* operator ESMSStrip *();
	void SetGrowBy(TArray<ESMSStrip>*, int, void);
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

struct ESubModelShader {
	EDL *m_pDL;
	ERShader *m_pRShader;
	u32 m_flags;
	EModelCollisionData m_col;
	TArray<ESMSStrip> m_strips;
	
	ESubModelShader& operator=();
	ESubModelShader();
	ESubModelShader();
	ESubModelShader(ESubModelShader*, int, void);
	void Draw(ERC *prc, u32 renderFlags);
	void DrawGeometry(ERC *prc);
	void DrawNormals(ERC *prc);
	void DrawWireFrame(ERC *prc);
	bool CollidePoint(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, bool testOnly);
	bool CollideSphere(ECollisionInfo &ciOut, EVec3 &vStart, EVec3 &vEnd, float radius);
	int CollideTest(EBound3 &b);
	bool IsCollideable();
	bool IsVisible();
	int GetVertCount();
	void Read(EStream &s);
protected:
	void Deallocate();
	bool BuildBoundMask(EBound3 &b, unsigned int *dmasks);
	bool BuildLineMask(EVec3 &vStart, EVec3 &vEnd, u64 &xymask, u32 &zmask);
	void SetUpVerts(EModelCollisionNode *pNode, int vertPos, EVec3 **pvsOut);
};

void ESubModelShader::~ESubModelShader(int __in_chrg);

#endif // C__EOR_SRC2_ENGINE_MODEL_E_SUBMODELSHADER_H
