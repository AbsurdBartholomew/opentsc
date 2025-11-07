// STATUS: NOT STARTED

#ifndef C__EOR_SRC2_GAMES_SIMS_ESRC_EROOM_H
#define C__EOR_SRC2_GAMES_SIMS_ESRC_EROOM_H

typedef short unsigned int UInt16;

enum EWallUpDownStateType {
	WallUP = 0,
	WallHalfUP = 1,
	WallDown = 2,
	WallHalfUP_Head = 3,
	WallHalfUP_Tail = 4,
	WallRoofUP = 5
};

enum DiagonalSideSelector {
	kNotSpecified = 0,
	kLeft = 1,
	kTop = 2,
	kRight = 3,
	kBottom = 4
};

typedef TNodeList<ERoomWall *> ERoomWallList;
typedef TNodeList<EIWallPart2 *> EISimsWallPartPtrList;

struct EIWallPart2 : EIStaticModel {
	static ETypeInfo m_typeInfo;
	TileWallsSegment m_seg;
	CTilePt m_point;
	ERShader *m_pPaperShader;
	WallMode m_mode;
	PortalType m_portal;
	u32 m_modelIdUp;
	u32 m_modelIdHalf;
	u32 m_modelIdLMCompute;
	static ERShader *m_pWallDownShader;
	
	EIWallPart2& operator=();
	EIWallPart2();
	static EIWallPart2* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIWallPart2* CreateCopy();
	EIWallPart2();
	EIWallPart2();
	/* vtable[6] */ virtual EIWallPart2(EIWallPart2*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
protected:
	/* vtable[24] */ virtual EMat4* GetDrawMatrix(ERC *prc);
public:
	void ChangeWallpaper(u32 id);
	void ChangeWallpaperForHalfDown();
	void SetWallState(EWallUpDownStateType state);
	void SetVisible(bool vis);
	u32 GetModelId(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side);
	bool IsPortal();
	bool IsDown();
	CTilePt& GetPoint();
	void BeginLmCompute();
	void EndLmCompute();
	bool CollideWallListWithCusorForHalfDown(EVec3 &v0, EVec3 &v1, EVec3 &vWallNorm);
};

struct EIFenceWall : EIWallPart2 {
	static ETypeInfo m_typeInfo;
	static int m_nInstances;
	
	EIFenceWall& operator=();
	EIFenceWall();
	static EIFenceWall* New(/* parameters unknown */);
	/* vtable[1] */ virtual void SafeDelete();
	/* vtable[2] */ virtual ETypeInfo* GetTypeInfo();
	/* vtable[3] */ virtual char* GetTypeName();
	/* vtable[4] */ virtual u32 GetTypeKey();
	/* vtable[5] */ virtual u16 GetTypeVersion();
	static u16 GetReadVersion(/* parameters unknown */);
	static ETypeInfo* RegisterType(/* parameters unknown */);
	EIFenceWall* CreateCopy();
	static void* operator new(/* parameters unknown */);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	EIFenceWall();
	EIFenceWall();
	/* vtable[6] */ virtual EIFenceWall(EIFenceWall*, int, void);
	static float GetFenceMeterValue(/* parameters unknown */);
};

struct ERoomWall {
	CTilePt m_c0;
	CTilePt m_c1;
	EVec3 m_vNormal;
	EILightmap m_lightmap;
	EISimsWallPartPtrList m_wallInstances;
	TileWallsSegment m_seg;
	DiagonalSideSelector m_side;
	static u32 m_wallCount;
	static u32 m_tileCount;
	UInt16 m_roomId;
	__vtbl_ptr_type *$vf4428;
	
	ERoomWall& operator=();
	ERoomWall();
	ERoomWall();
	ERoomWall();
	/* vtable[1] */ virtual ERoomWall(ERoomWall*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	static void ResetPool(/* parameters unknown */);
	/* vtable[2] */ virtual void SafeDelete();
	void AddTile(CTilePt &tilePt, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side, bool doAlloc);
	void DrawWall(ERC *prc);
	void DrawWallpaperPreview(ERC *prc);
	void InitLightMap();
	void BeginLmCompute();
	void EndLmCompute();
	void ComputeLightmap();
	void ComputeLightmapsList(ERoomWall*, int, void);
	void EnableShadows(bool enable);
	static void GetWallDims(/* parameters unknown */);
	bool CollideWallListWithCusorForHalfDown();
	void SetWallUpDownMode(EWallUpDownStateType mode);
	bool HasSegment(TileWallsSegment seg, CTilePt &c0, CTilePt &c1);
	void RemoveWallsFromWorld();
	void DeleteWallAtTile(CTilePt &tile);
	static float GetWallMeterValue(/* parameters unknown */);
	EIWallPart2* GetWallAtTile(CTilePt &tile);
	int CountWalls();
	s32 GetWallPaperCost(s32 costNew, UInt16 room);
};

struct EFenceWall : ERoomWall {
	EFenceWall& operator=();
	EFenceWall(TileWallsSegment &theSeg, CTilePt &thePt, WallStyle style);
	/* vtable[1] */ virtual EFenceWall(EFenceWall*, int, void);
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	/* vtable[2] */ virtual void SafeDelete();
	EFenceWall();
};

struct ERoomWallPTR {
private:
	ERoomWall *pCurEWall;
	
public:
	ERoomWallPTR& operator=();
	ERoomWallPTR();
	ERoomWallPTR();
	ERoomWallPTR(ERoomWallPTR*, int, void);
	void Delete();
	ERoomWall* GetPtr();
	void SetPtr();
};

extern ERShader *EIWallPart2::m_pWallDownShader;
extern u32 ERoomWall::m_tileCount;
extern u32 ERoomWall::m_wallCount;
extern u32 (*_wallEndCapFnTab[8])(/* parameters unknown */);
extern bool (*_WallSplitTestFnTab[6])(/* parameters unknown */);
extern int EIFenceWall::m_nInstances;
extern ETypeInfo *gpTypeInfo_EIFenceWall;
extern ETypeInfo *gpTypeInfo_EIWallPart2;
extern TileWallsSegment _segTab[6];
extern __vtbl_ptr_type EFenceWall virtual table[4];
extern __vtbl_ptr_type ERoomWall virtual table[4];
extern __vtbl_ptr_type EIFenceWall virtual table[26];
extern __vtbl_ptr_type EIWallPart2 virtual table[26];
extern ETypeInfo EIWallPart2::m_typeInfo;
extern ETypeInfo EIFenceWall::m_typeInfo;

bool HasWallsNotFences(TileWalls &walls);
u32 _kBottomLeftWallsEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side);
u32 _kTopRightWallsEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side);
u32 _kBottomRightWallsEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side);
u32 _kTopLeftWallsEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side);
u32 _kHorizDiagWallskTopEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side);
u32 _kHorizDiagWallskBottomEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side);
u32 _kVertDiagWallskLeftEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side);
u32 _kVertDiagWallskRightEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side);
bool SplitWallkBottomRight(TileWalls &walls, CTilePt &point);
bool SplitWallkTopLeft(TileWalls &walls, CTilePt &point);
bool SplitWallkBottomLeft(TileWalls &walls, CTilePt &point);
bool SplitWallkTopRight(TileWalls &walls, CTilePt &point);
bool SplitWallkHorizDiag(TileWalls &walls, CTilePt &point);
bool SplitWallkVertDiag(TileWalls &walls, CTilePt &point);
EStream& operator<<(EStream &s, EIFenceWall *pD);
EStream& operator>>(EStream &s, EIFenceWall *&pD);
void EIFenceWall::~EIFenceWall(int __in_chrg);
EStream& operator<<(EStream &s, EIWallPart2 *pD);
EStream& operator>>(EStream &s, EIWallPart2 *&pD);
void EIWallPart2::~EIWallPart2(int __in_chrg);
void ERoomWall::~ERoomWall(int __in_chrg);
void ERoom::~ERoom(int __in_chrg);
void ComputeLightmapsForList(ERoomWallList &list);
void EnableShadowsForList(ERoomWallList &list, bool enable);
void DrawList(ERC *prc, ERoomWallList &list);
void SetAllUpOrDownForList(bool up, ERoomWallList &list);
bool DoHalfUpCollisonEIWallPart2ForList(EVec3 *vList, int nVecPairs, EVec3 &vNorm, EISimsWallPartPtrList &list);
void DoHalfUpCollisonForList(EVec3 *vList, int nVecPairs, ERoomWallList &list);
void DoLightmapInitForList(ERoomWallList &list);
bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2);
void EFenceWall::~EFenceWall(int __in_chrg);
void global constructors keyed to EIWallPart2::m_pWallDownShader();

#endif // C__EOR_SRC2_GAMES_SIMS_ESRC_EROOM_H
