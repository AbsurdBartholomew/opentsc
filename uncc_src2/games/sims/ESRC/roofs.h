// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_ROOFS_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_ROOFS_H

struct ERoofVert {
	EVec3 VertPos;
	EVec2 VertUV;
	EVec3 VertNormal;
};

struct EHeightArray {
private:
	int &m_row[128];
	
public:
	EHeightArray& operator=();
	EHeightArray();
	EHeightArray();
	int& operator[]();
};

struct EHeightArray2D {
private:
	int m_array[128][128];
	
public:
	EHeightArray2D& operator=();
	EHeightArray2D();
	EHeightArray2D();
	EHeightArray operator[]();
};

struct EVertArray {
private:
	int m_iCount;
	ERoofVert *m_pScratchArray;
	TSegArray<ERoofVert> *m_pArray;
	bool m_bIsNeighborhood;
	
public:
	EVertArray& operator=();
	EVertArray();
	EVertArray();
	EVertArray(EVertArray*, int, void);
	void init(int iSize);
	ERoofVert& operator[](int index);
};

struct ERoofSetup {
	EHeightArray2D m_heightArray;
	int m_iGridSize;
	EVertArray m_vertArray;
	int m_iVertCount;
	int m_iMinX;
	int m_iMaxX;
	int m_iMinY;
	int m_iMaxY;
	
	ERoofSetup& operator=();
	ERoofSetup();
	ERoofSetup();
	ERoofSetup(ERoofSetup*, int, void);
	void AddWall(int x, int y, TileWallsSegment Seg);
	void AddTri(int x, int y, int Dir);
};

struct ERoofs : EInstance {
	static ETypeInfo m_typeInfo;
protected:
	ERShader *m_pRoofShader;
	EDL *m_pdl;
	EBound3 m_bound;
	
public:
	ERoofs& operator=();
	ERoofs();
	static ERoofs* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	ERoofs* CreateCopy();
	ERoofs();
	/* vtable[6] */ virtual ERoofs(ERoofs*, int, void);
	/* vtable[12] */ virtual void Draw(ERC *prc, u32 renderFlags);
	/* vtable[11] */ virtual u32 VisibilityTest(EPortalWindow &win, u32 parentVis);
	void CreateRoof(EVec3 &Offset, bool UseLargeTexture);
	void DrawRoof(ERC *prc, bool useShaders);
	void SetVisible(bool vis);
	void DrawBound(ERC *prc);
protected:
	void SetupRoofEdges(ERoofSetup &S);
	void SetupFillInRoof(ERoofSetup &S);
	void SetupAddLedges(ERoofSetup &S);
	void SetupTriangles(ERoofSetup &S);
	void SetupUVCoords(ERoofSetup &S);
	void SetupConvertTrisToVertexStrip(ERoofSetup &S, EVec3 &Offset, bool UseLargeTexture);
};

extern ETypeInfo *gpTypeInfo_ERoofs;
extern __vtbl_ptr_type ERoofs virtual table[25];
extern ETypeInfo ERoofs::m_typeInfo;

EStream& operator<<(EStream &s, ERoofs *pD);
EStream& operator>>(EStream &s, ERoofs *&pD);
void ERoofSetup::~ERoofSetup(int __in_chrg);
void ERoofs::~ERoofs(int __in_chrg);
void ERoofSetup::EVertArray::~EVertArray(int __in_chrg);
void global constructors keyed to gpTypeInfo_ERoofs();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_ROOFS_H
