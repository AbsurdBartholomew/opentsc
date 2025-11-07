// STATUS: NOT STARTED

#include "eroom.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb1767;
	__vtbl_ptr_type *$vf1831;
	
	cXObject& operator=();
	cXObject();
protected:
	cXObject();
	/* vtable[1] */ virtual cXObject(cXObject*, int, void);
	void setObjectImpl();
	void setPersonImpl();
	void setMTObjectImpl();
	void setCursorObjectImpl();
	void setPortalImpl();
public:
	/* vtable[1] */ virtual void Kill();
	/* vtable[2] */ virtual Int GetNumAttr();
	/* vtable[3] */ virtual float CalcDistance();
	/* vtable[4] */ virtual float CalcShortDistance();
	/* vtable[5] */ virtual float CalcShortDistance();
	/* vtable[6] */ virtual SpriteSlot& GetSpriteSlot();
	/* vtable[7] */ virtual void SetHilite(cXObject*, int, void);
	/* vtable[8] */ virtual Int GetHilite();
	/* vtable[9] */ virtual void SetMiscFlag();
	/* vtable[10] */ virtual bool GetMiscFlag();
	/* vtable[11] */ virtual void UpdateSimFlags();
	/* vtable[12] */ virtual void Dirty();
	/* vtable[13] */ virtual void SetRenderLayer();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[15] */ virtual RenderLayer GetRenderLayer();
	/* vtable[16] */ virtual bool IsRenderingRoot();
	/* vtable[17] */ virtual RECT& GetLastDamage();
	/* vtable[18] */ virtual void SetLastDamage();
	/* vtable[19] */ virtual void ResetDamage();
	/* vtable[20] */ virtual bool IsEmissive();
	/* vtable[21] */ virtual bool IsBeingDraggedAround();
	/* vtable[22] */ virtual void CenterHouseViewOnMe();
	/* vtable[23] */ virtual void SetDrawLabel();
	/* vtable[24] */ virtual bool IsSpriteVisible();
	/* vtable[25] */ virtual bool RunTree();
	/* vtable[26] */ virtual bool RunTree();
	/* vtable[27] */ virtual bool RunTree();
	/* vtable[28] */ virtual void ParseUIString();
	static bool GetFreeWill(/* parameters unknown */);
	static void SetFreeWill(/* parameters unknown */);
	static bool GetAutoCenter(/* parameters unknown */);
	static void SetAutoCenter(/* parameters unknown */);
	static bool GetAutoReset(/* parameters unknown */);
	static void SetAutoReset(/* parameters unknown */);
	/* vtable[29] */ virtual void Error();
	/* vtable[30] */ virtual void HandleError();
	/* vtable[31] */ virtual void Turn();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[35] */ virtual bool IsPartOfMe();
	/* vtable[36] */ virtual bool UserCanPlace();
	/* vtable[37] */ virtual void UserPlace();
	/* vtable[38] */ virtual bool UserCanPickup();
	/* vtable[39] */ virtual void UserPickup();
	/* vtable[40] */ virtual bool UserCanDelete();
	/* vtable[41] */ virtual bool FindGoodLocation();
	/* vtable[42] */ virtual void GetPlacementInfo();
	/* vtable[43] */ virtual bool IsInWorld();
	/* vtable[44] */ virtual bool TestIntersection();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[46] */ virtual ObjFnTable* GetFnTable();
	/* vtable[47] */ virtual SInt16 GetTreeID();
	/* vtable[48] */ virtual void SetLevel(cXObject*, int, void);
	/* vtable[49] */ virtual bool IsOccupied();
	/* vtable[50] */ virtual void SetData();
	/* vtable[51] */ virtual void SetTemp();
	/* vtable[52] */ virtual void SetAttr();
	/* vtable[53] */ virtual ObjectProbe* GetObjectProbe();
	/* vtable[54] */ virtual void SetObjectProbe();
	/* vtable[55] */ virtual cXObject* GetInteractionLeader();
	/* vtable[56] */ virtual Int GetFrontFaceDirection();
	/* vtable[57] */ virtual ObjectFolder* GetFolder();
	/* vtable[58] */ virtual bool SimIndependent();
	/* vtable[59] */ virtual bool SimEnabled();
	/* vtable[60] */ virtual void EnableSim();
	/* vtable[61] */ virtual int GetIdleStatus();
	/* vtable[62] */ virtual void SetIdleStatus(cXObject*, int, void);
	/* vtable[63] */ virtual void ClearIdleStatus();
	/* vtable[64] */ virtual FTileRect& GetRect();
	/* vtable[65] */ virtual SInt16 GetData();
	/* vtable[66] */ virtual SInt16 GetTemp();
	/* vtable[67] */ virtual SInt16 GetAttr();
	/* vtable[68] */ virtual ObjectModule* GetModule();
	/* vtable[69] */ virtual AnimTable* GetAdultAnimTable();
	/* vtable[70] */ virtual AnimTable* GetChildAnimTable();
	/* vtable[71] */ virtual bool HideForCutaway();
	/* vtable[72] */ virtual TileWallsSegment GetRequiredSegment();
	/* vtable[73] */ virtual Int CountObjectSlots();
	/* vtable[74] */ virtual ObjectSlot* GetObjectSlot();
	/* vtable[75] */ virtual cXObject* GetContainedObject();
	/* vtable[76] */ virtual float GetSlotHeight();
	/* vtable[77] */ virtual cXObject* GetContainer();
	/* vtable[78] */ virtual bool IsContained();
	/* vtable[79] */ virtual SInt16 GetContainerID();
	/* vtable[80] */ virtual SInt16 GetContainedSlotNum();
	/* vtable[81] */ virtual cXObject* GetNextObjectSibling();
	/* vtable[82] */ virtual cXObject* GetPrevObjectSibling();
	/* vtable[83] */ virtual RoomID GetRoom();
	/* vtable[84] */ virtual ObjDefinition* GetDef();
	/* vtable[85] */ virtual SInt16 GetType();
	/* vtable[86] */ virtual void GetTypeName();
	/* vtable[87] */ virtual SInt16 GetID();
	/* vtable[88] */ virtual void GetLocation();
	/* vtable[89] */ virtual FTilePt& GetLocation();
	/* vtable[90] */ virtual int GetLevel();
	/* vtable[91] */ virtual CTilePt GetCTilePt();
	/* vtable[92] */ virtual TreeTable* GetTreeTab();
	/* vtable[93] */ virtual ObjSelector* GetSelector();
	/* vtable[94] */ virtual Behavior* GetBehavior();
	/* vtable[95] */ virtual iResFile* GetSelFile();
	static Int GetPersonWidth(/* parameters unknown */);
	/* vtable[96] */ virtual Int GetTileWidth();
	/* vtable[97] */ virtual bool IsMultiTile();
	/* vtable[98] */ virtual StdPrm GetFlags();
	/* vtable[99] */ virtual SInt16 GetWallPlacementFlags();
	/* vtable[100] */ virtual RelMatrix& GetRelMatrix();
	/* vtable[101] */ virtual cXObject* GetObstacleAtLocation();
	/* vtable[102] */ virtual int GetNumRoutingSlots();
	/* vtable[103] */ virtual RoutingSlot& GetRoutingSlot();
	/* vtable[104] */ virtual SInt16 GetCurrentValue();
	/* vtable[105] */ virtual SInt16 GetSize();
	/* vtable[106] */ virtual cSimulator* GetSim();
	/* vtable[107] */ virtual void GetErrorString();
	/* vtable[108] */ virtual Int GetAgeInMinutes();
	/* vtable[109] */ virtual bool CanChooseAutonomously();
	/* vtable[110] */ virtual int GetBuildModeType();
	/* vtable[111] */ virtual bool IsSupport();
	/* vtable[112] */ virtual bool ShouldAutoRotate();
	/* vtable[113] */ virtual bool CanContributeLight();
	/* vtable[114] */ virtual Int GetLightingContribution();
	/* vtable[115] */ virtual ObjectLightSource GetObjectLightSource();
	/* vtable[116] */ virtual bool IsDeletedByEvict();
	/* vtable[117] */ virtual bool IsFromCatalog();
	/* vtable[118] */ virtual bool IsBroken();
	/* vtable[119] */ virtual bool IsDirty();
	/* vtable[120] */ virtual bool IsBurning();
	/* vtable[121] */ virtual bool CanBurn();
	/* vtable[122] */ virtual bool IsFireproof();
	/* vtable[123] */ virtual bool HasZeroExtent();
	/* vtable[124] */ virtual bool CanIntersectPeople();
	/* vtable[125] */ virtual bool IsChair();
	/* vtable[126] */ virtual cXObject* GetObjectFromID();
	/* vtable[127] */ virtual cXObject* GetNext();
	/* vtable[128] */ virtual cXObject* GetFirst();
	/* vtable[129] */ virtual Int GetWallBlockFlags();
	static Int GetWallBlockFlagsAtTile(/* parameters unknown */);
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[132] */ virtual void ReconSlots();
	/* vtable[133] */ virtual void ReconHeader();
	/* vtable[134] */ virtual void Backtrace();
	/* vtable[135] */ virtual char* GetName();
	/* vtable[136] */ virtual int GetDebugName();
	/* vtable[137] */ virtual void AdvanceGraphic();
	/* vtable[138] */ virtual cXObjectImpl* GetObjectImplementation();
	cXObjectImpl* CAST_IMPL();
};

// warning: multiple differing types with the same name (name not equal)
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2541;
protected:
	struct {
		short int __delta;
		short int __index;
		union {
			s32 (*__pfn)();
			short int __delta2;
		} __pfn_or_delta2;
	} m_ToolValueCalcFnTab[7];
	CursorMode m_mode;
	bool m_bUndoable;
	bool m_bNewObject;
	EVec3 m_vLastPos;
	EVec3 m_vPos;
	EVec2 m_vCursorAnchor;
	EVec2 m_vCursorAnchorCenter;
	ESimsCam *m_pCam;
	EDL *m_pdl;
	EDL *m_pLineDl;
	EPiMenu *m_pPiMenu;
	cXCursorObject *m_pCursorObject;
	float m_fCursorTheta;
	int m_wallPaperSide;
	ERShader *m_pLineShdr;
	ERShader *m_pFloorShd;
	ERShader *m_pWPaperShd;
	ERModel *m_pMainBase;
	ERModel *m_pMainBaseH;
	ERModel *m_pMainCirDash;
	ERModel *m_pArrow;
	ERModel *m_pArrowH;
	ERModel *m_pTrackBase;
	ERModel *m_pTrackH;
	ERModel *m_pTrackCirDash;
	ERModel *m_pBuild;
	ERModel *m_pBuild02;
	ERModel *m_pBuildH;
	ERModel *m_pBuy;
	ERModel *m_pBuy02;
	ERModel *m_pBuyH;
	EIParticleEmit *m_pEmit;
	ERParticleType *m_pType;
	ISimInstanceList m_objList;
	CursorFloorTilePtrList m_floorList;
	WallTile *m_pToolResMap;
	FTilePt m_undoLoc;
	SInt16 m_undoDir;
	SInt32 m_refund;
	SInt32 m_ring_S0;
	SInt32 m_ring_S1;
	float m_scaletime;
	WallStyle m_fenctype;
	u32 m_toolUnitPrice;
	static EBound3 m_lotBound;
	static bool m_bGridInit;
	static EDL *m_pGridDl;
	static ERShader *m_pWhiteLineShader;
	static ERShader *m_pWallUnderConstructionShd;
public:
	static ERShader *m_pBuildToolGuideShd;
	
	ESimsCursor& operator=();
	ESimsCursor();
	ESimsCursor();
	/* vtable[1] */ virtual ESimsCursor(ESimsCursor*, int, void);
	bool CanUserSell();
	void ClearPlacementError();
	void Init();
	void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[7] */ virtual void Message();
	/* vtable[14] */ virtual void SetFlag();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawMenu();
	void Draw_Curs();
	void GetCamOff();
	void SnapToDefPos();
	void SetCam();
	ESimsCam* GetCam();
	void GetPos();
	EVec3& GetPos();
	/* vtable[4] */ virtual void SetPos();
	u32 GetPlayerId();
	float GetCurorRad();
	void SetCursorObject();
	bool SafeToUnPause();
	void MoveCursor();
	void InitFloorTool();
	void SnapToWallVert();
	void FindWallDragVert();
	EVec2 GetSnapPos();
	void GetSnapPos();
	void LiveUpdate();
	void PauseUpdate();
	void BuyUpdate();
	bool CheckForXPressLive();
	void GetListofObjectsInCusorRad();
	bool HasGrabObject();
	cXObject* GetGrabObject();
	bool CheckForXPressBuyBuild();
	void Float();
	cXObject* PointToObject();
	bool TurnToWall();
	void TurnObject();
	bool InPiMenu();
	bool PiMenuCanUpdate();
	void CancelCursor();
	void UpdateHouse();
	bool TryUndoObjectPlacement();
	void FloorUpdate();
	CursorFloorTile* CreateCursorFloorTile();
	CursorMode GetCursorMode();
	bool CursorHasObject();
	void ExitFloorTool();
	void DrawCursorFloorList();
	bool InToolMode();
	bool InFloorMode();
	bool InWallMode();
	void DrawFloorPrevew();
	void DrawDeletePrevew();
	void DrawPrevewRect();
	void DrawRoomFillPrevew();
	void SetFloor();
	void BeginWallTool();
	void ExitWallTool();
	void WallToolUpdate();
	void DrawWallPreview();
	void DrawWallDelPreview();
	void DrawWallRoomPreview();
	bool FinalizeWallPlacement();
	bool FinalizeWallDel();
	bool FinalizeRoom();
	s32 GetWallLineCost();
	bool CanChangeTileAdd();
	bool CanChangeTileDelete();
	bool SubmitLine();
	static bool KillArchitecturalObject(/* parameters unknown */);
	bool AddWallAtTile();
	void VertPosToTile();
	static void ConvertVertsToTiles(/* parameters unknown */);
	static TilePtDir GetTileDirection(/* parameters unknown */);
	void DeleteWallAtTile();
	bool LegalWallTile();
	bool InPaperTool();
	void BeginPaperTool();
	void ExitPaperTool();
	void PaperToolUpdate();
	void DrawPaperPreview();
	void DrawPaperDelPreview();
	void DrawPaperRoomPreview();
	bool FinalizePaperPlacement();
	bool FinalizePaperDel();
	bool FinalizePaperForRoom();
	void AddPaperAtTile();
	void DeletePaperAtTile();
	void ChangeTile();
	int GetSideOfWall();
	bool SubmitPaperLine();
	int GetPaperLineCost();
	static void UpdateLot(/* parameters unknown */);
	s32 _GetkDefaultToolValue();
	s32 _GetkFloorToolValue();
	s32 _GetkWallToolValue();
	s32 _GetkPaperToolValue();
	s32 _GetkFenceToolValue();
	s32 GetCurToolValue();
	static void CleanUpGrid(/* parameters unknown */);
	static void SetUpGrid(/* parameters unknown */);
	static void DrawGrid(/* parameters unknown */);
};

typedef u32 (*WallEndCapTestFn)(/* parameters unknown */);
typedef bool (*WallSplitTestFn)(/* parameters unknown */);

enum ETileWallSegment {
	EkTopLeft = 0,
	EkTopRight = 1,
	EkBottomRight = 2,
	EkBottomLeft = 3,
	EkHorizDiag = 4,
	EkVertDiag = 5
};

struct ProcStandardWallsInfo {
	ERoomWallList *pSegWallList;
	TileWallsSegment seg;
};

ERShader *EIWallPart2::m_pWallDownShader = NULL;
u32 ERoomWall::m_tileCount = 0;
u32 ERoomWall::m_wallCount = 0;

u32 (*_wallEndCapFnTab[8])(/* parameters unknown */) = {
	/* [0] = */ &_kTopLeftWallsEndCapTestFn,
	/* [1] = */ &_kTopRightWallsEndCapTestFn,
	/* [2] = */ &_kBottomRightWallsEndCapTestFn,
	/* [3] = */ &_kBottomLeftWallsEndCapTestFn,
	/* [4] = */ &_kHorizDiagWallskTopEndCapTestFn,
	/* [5] = */ &_kVertDiagWallskLeftEndCapTestFn,
	/* [6] = */ &_kHorizDiagWallskBottomEndCapTestFn,
	/* [7] = */ &_kVertDiagWallskRightEndCapTestFn
};

bool (*_WallSplitTestFnTab[6])(/* parameters unknown */) = {
	/* [0] = */ &SplitWallkTopLeft,
	/* [1] = */ &SplitWallkTopRight,
	/* [2] = */ &SplitWallkBottomRight,
	/* [3] = */ &SplitWallkBottomLeft,
	/* [4] = */ &SplitWallkHorizDiag,
	/* [5] = */ &SplitWallkVertDiag
};

int EIFenceWall::m_nInstances = 0;
ETypeInfo *gpTypeInfo_EIFenceWall = NULL;
ETypeInfo *gpTypeInfo_EIWallPart2 = NULL;

TileWallsSegment _segTab[6] = {
	/* [0] = */ kTopLeft,
	/* [1] = */ kTopRight,
	/* [2] = */ kBottomRight,
	/* [3] = */ kBottomLeft,
	/* [4] = */ kHorizDiag,
	/* [5] = */ kVertDiag
};

__vtbl_ptr_type EFenceWall virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFenceWall::~EFenceWall,
		/* .__delta2 = */ -15840
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFenceWall::SafeDelete,
		/* .__delta2 = */ -15760
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ERoomWall virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERoomWall::~ERoomWall,
		/* .__delta2 = */ -31696
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERoomWall::SafeDelete,
		/* .__delta2 = */ -15896
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EIFenceWall virtual table[26] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFenceWall::SafeDelete,
		/* .__delta2 = */ -16376
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFenceWall::GetTypeInfo,
		/* .__delta2 = */ -16320
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFenceWall::GetTypeName,
		/* .__delta2 = */ -16304
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFenceWall::GetTypeKey,
		/* .__delta2 = */ -16288
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFenceWall::GetTypeVersion,
		/* .__delta2 = */ -16272
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIFenceWall::~EIFenceWall,
		/* .__delta2 = */ 29488
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Read,
		/* .__delta2 = */ -25112
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Write,
		/* .__delta2 = */ -25208
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Init,
		/* .__delta2 = */ -5208
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Update,
		/* .__delta2 = */ -5200
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::VisibilityTest,
		/* .__delta2 = */ -23936
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Draw,
		/* .__delta2 = */ -23776
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::DrawWireFrame,
		/* .__delta2 = */ -5176
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::SetOrient,
		/* .__delta2 = */ -24728
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetUpdatePriority,
		/* .__delta2 = */ -5160
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollidePointWithInstance,
		/* .__delta2 = */ -23320
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollideSphereWithInstance,
		/* .__delta2 = */ -22192
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideTest,
		/* .__delta2 = */ -5136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CalcLights3,
		/* .__delta2 = */ -7600
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::GetBoundSphere,
		/* .__delta2 = */ -25000
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTriggerList,
		/* .__delta2 = */ -5104
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::ReadInstanceData,
		/* .__delta2 = */ -5096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetLevel,
		/* .__delta2 = */ -5088
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWallPart2::GetDrawMatrix,
		/* .__delta2 = */ -32664
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EIWallPart2 virtual table[26] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWallPart2::SafeDelete,
		/* .__delta2 = */ -16784
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWallPart2::GetTypeInfo,
		/* .__delta2 = */ -16728
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWallPart2::GetTypeName,
		/* .__delta2 = */ -16712
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWallPart2::GetTypeKey,
		/* .__delta2 = */ -16696
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWallPart2::GetTypeVersion,
		/* .__delta2 = */ -16680
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWallPart2::~EIWallPart2,
		/* .__delta2 = */ 30128
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Read,
		/* .__delta2 = */ -25112
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Write,
		/* .__delta2 = */ -25208
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Init,
		/* .__delta2 = */ -5208
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Update,
		/* .__delta2 = */ -5200
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::VisibilityTest,
		/* .__delta2 = */ -23936
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Draw,
		/* .__delta2 = */ -23776
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::DrawWireFrame,
		/* .__delta2 = */ -5176
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::SetOrient,
		/* .__delta2 = */ -24728
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetUpdatePriority,
		/* .__delta2 = */ -5160
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollidePointWithInstance,
		/* .__delta2 = */ -23320
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::CollideSphereWithInstance,
		/* .__delta2 = */ -22192
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideTest,
		/* .__delta2 = */ -5136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CalcLights3,
		/* .__delta2 = */ -7600
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::GetBoundSphere,
		/* .__delta2 = */ -25000
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTriggerList,
		/* .__delta2 = */ -5104
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::ReadInstanceData,
		/* .__delta2 = */ -5096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetLevel,
		/* .__delta2 = */ -5088
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIWallPart2::GetDrawMatrix,
		/* .__delta2 = */ -32664
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EIWallPart2::m_typeInfo;
ETypeInfo EIFenceWall::m_typeInfo;

bool HasWallsNotFences(TileWalls &walls) {
	TileWallsSegment seg;
	
  bool bVar1;
  TileWallsSegment inSeg;
  WallStyle WVar2;
  
  bVar1 = HasWall__C9TileWalls(walls);
  if (bVar1) {
    for (inSeg = First__C9TileWalls(walls); inSeg != kNoWalls;
        inSeg = Next__C9TileWalls16TileWallsSegment(walls,inSeg)) {
      WVar2 = GetStyle__C9TileWalls16TileWallsSegment(walls,inSeg);
                    /* inlined from ../MSrc/wallStyles.h */
      if (WVar2 == kFenceStyle1) {
        bVar1 = true;
      }
      else if (WVar2 == kFenceStyle2) {
        bVar1 = true;
      }
      else if (WVar2 == kFenceStyle3) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
        if (WVar2 == kFenceStyle4) {
          bVar1 = true;
        }
      }
                    /* end of inlined section */
      if (bVar1) goto LAB_001450a4;
    }
    bVar1 = true;
  }
  else {
LAB_001450a4:
    bVar1 = false;
  }
  return bVar1;
}

u32 _kBottomLeftWallsEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side) {
	bool topcap;
	bool bottomcap;
	CTilePt nwNeighbor;
	TileWalls nwstor;
	CTilePt seNeighbor;
	TileWalls sestor;
	CTilePt wNeighbor;
	TileWalls wstor;
	CTilePt sNeighbor;
	TileWalls sstor;
	
  cFixedWorld *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  CTilePt nwNeighbor;
  TileWalls nwstor;
  CTilePt seNeighbor;
  TileWalls wstor;
  TileWalls sestor;
  TileWalls sstor;
  bool topcap;
  
  pcVar1 = _5Globs_pFixedWorld;
  bVar4 = false;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  __pl__C7CTilePtRC7CTilePt(&nwNeighbor,point);
  bVar3 = false;
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&nwstor,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &nwNeighbor);
  bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&nwstor,seg);
  if ((!bVar2) &&
     (bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&nwstor,kBottomRight), !bVar2)) {
    __pl__C7CTilePtRC7CTilePt(&seNeighbor,point);
    (*(code *)pcVar1->__vtable->ComputeArchValue)
              (&wstor,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
               &seNeighbor);
    bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&wstor,kBottomRight);
    ___9TileWalls(&wstor,2);
    ___7CTilePt(&seNeighbor,2);
  }
  __pl__C7CTilePtRC7CTilePt(&seNeighbor,point);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&sestor,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &seNeighbor);
  bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&sestor,seg);
  if ((!bVar2) && (bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&sestor,kTopLeft), !bVar2)
     ) {
    __pl__C7CTilePtRC7CTilePt((CTilePt *)&wstor,point);
    (*(code *)pcVar1->__vtable->ComputeArchValue)
              (&sstor,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,&wstor
              );
    bVar4 = HasWallNotFence__C9TileWalls16TileWallsSegment(&sstor,kTopLeft);
    ___9TileWalls(&sstor,2);
    ___7CTilePt((CTilePt *)&wstor,2);
  }
  if (bVar3 == false) {
    if (bVar4 == false) {
      ___9TileWalls(&sestor,2);
      ___7CTilePt(&seNeighbor,2);
      ___9TileWalls(&nwstor,2);
      ___7CTilePt(&nwNeighbor,2);
      uVar5 = 0;
    }
    else {
      ___9TileWalls(&sestor,2);
      ___7CTilePt(&seNeighbor,2);
      ___9TileWalls(&nwstor,2);
      ___7CTilePt(&nwNeighbor,2);
      uVar5 = 3;
    }
  }
  else if (bVar4 == false) {
    ___9TileWalls(&sestor,2);
    ___7CTilePt(&seNeighbor,2);
    ___9TileWalls(&nwstor,2);
    ___7CTilePt(&nwNeighbor,2);
    uVar5 = 2;
  }
  else {
    ___9TileWalls(&sestor,2);
    ___7CTilePt(&seNeighbor,2);
    ___9TileWalls(&nwstor,2);
    ___7CTilePt(&nwNeighbor,2);
    uVar5 = 1;
  }
  return uVar5;
}

u32 _kTopRightWallsEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side) {
	bool topcap;
	bool bottomcap;
	CTilePt nwNeighbor;
	TileWalls nwstor;
	CTilePt seNeighbor;
	TileWalls sestor;
	CTilePt nNeighbor;
	TileWalls nstor;
	CTilePt eNeighbor;
	TileWalls estor;
	
  cFixedWorld *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  CTilePt nwNeighbor;
  TileWalls nwstor;
  CTilePt seNeighbor;
  CTilePt eNeighbor;
  TileWalls sestor;
  TileWalls estor;
  bool topcap;
  
  pcVar1 = _5Globs_pFixedWorld;
  bVar4 = false;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  __pl__C7CTilePtRC7CTilePt(&nwNeighbor,point);
  bVar3 = false;
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&nwstor,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &nwNeighbor);
  bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&nwstor,seg);
  if ((!bVar2) &&
     (bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&nwstor,kBottomRight), !bVar2)) {
    __pl__C7CTilePtRC7CTilePt(&seNeighbor,point);
    (*(code *)pcVar1->__vtable->ComputeArchValue)
              ((TileWalls *)&eNeighbor,
               (int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,&seNeighbor);
    bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment((TileWalls *)&eNeighbor,kBottomRight);
    ___9TileWalls((TileWalls *)&eNeighbor,2);
    ___7CTilePt(&seNeighbor,2);
  }
  __pl__C7CTilePtRC7CTilePt(&seNeighbor,point);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&sestor,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &seNeighbor);
  bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&sestor,seg);
  if ((!bVar2) && (bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&sestor,kTopLeft), !bVar2)
     ) {
    __pl__C7CTilePtRC7CTilePt(&eNeighbor,point);
    (*(code *)pcVar1->__vtable->ComputeArchValue)
              (&estor,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
               &eNeighbor);
    bVar4 = HasWallNotFence__C9TileWalls16TileWallsSegment(&estor,kTopLeft);
    ___9TileWalls(&estor,2);
    ___7CTilePt(&eNeighbor,2);
  }
  if (bVar3 == false) {
    if (bVar4 == false) {
      ___9TileWalls(&sestor,2);
      ___7CTilePt(&seNeighbor,2);
      ___9TileWalls(&nwstor,2);
      ___7CTilePt(&nwNeighbor,2);
      uVar5 = 0;
    }
    else {
      ___9TileWalls(&sestor,2);
      ___7CTilePt(&seNeighbor,2);
      ___9TileWalls(&nwstor,2);
      ___7CTilePt(&nwNeighbor,2);
      uVar5 = 3;
    }
  }
  else if (bVar4 == false) {
    ___9TileWalls(&sestor,2);
    ___7CTilePt(&seNeighbor,2);
    ___9TileWalls(&nwstor,2);
    ___7CTilePt(&nwNeighbor,2);
    uVar5 = 2;
  }
  else {
    ___9TileWalls(&sestor,2);
    ___7CTilePt(&seNeighbor,2);
    ___9TileWalls(&nwstor,2);
    ___7CTilePt(&nwNeighbor,2);
    uVar5 = 1;
  }
  return uVar5;
}

u32 _kBottomRightWallsEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side) {
	bool topcap;
	bool bottomcap;
	CTilePt swNeighbor;
	TileWalls swstor;
	CTilePt neNeighbor;
	TileWalls nestor;
	CTilePt sNeighbor;
	TileWalls sstor;
	CTilePt eNeighbor;
	TileWalls estor;
	
  cFixedWorld *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  CTilePt swNeighbor;
  TileWalls swstor;
  CTilePt sNeighbor;
  CTilePt eNeighbor;
  TileWalls nestor;
  TileWalls estor;
  bool topcap;
  
  pcVar1 = _5Globs_pFixedWorld;
  bVar4 = false;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  __pl__C7CTilePtRC7CTilePt(&swNeighbor,point);
  bVar3 = false;
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&swstor,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &swNeighbor);
  bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&swstor,seg);
  if ((!bVar2) &&
     (bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&swstor,kTopRight), !bVar2)) {
    __pl__C7CTilePtRC7CTilePt(&sNeighbor,point);
    (*(code *)pcVar1->__vtable->ComputeArchValue)
              ((TileWalls *)&eNeighbor,
               (int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,&sNeighbor);
    bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment((TileWalls *)&eNeighbor,kTopRight);
    ___9TileWalls((TileWalls *)&eNeighbor,2);
    ___7CTilePt(&sNeighbor,2);
  }
  __pl__C7CTilePtRC7CTilePt(&sNeighbor,point);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&nestor,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &sNeighbor);
  bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&nestor,seg);
  if ((!bVar2) &&
     (bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&nestor,kBottomLeft), !bVar2)) {
    __pl__C7CTilePtRC7CTilePt(&eNeighbor,point);
    (*(code *)pcVar1->__vtable->ComputeArchValue)
              (&estor,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
               &eNeighbor);
    bVar4 = HasWallNotFence__C9TileWalls16TileWallsSegment(&estor,kBottomLeft);
    ___9TileWalls(&estor,2);
    ___7CTilePt(&eNeighbor,2);
  }
  if (bVar3 == false) {
    if (bVar4 == false) {
      ___9TileWalls(&nestor,2);
      ___7CTilePt(&sNeighbor,2);
      ___9TileWalls(&swstor,2);
      ___7CTilePt(&swNeighbor,2);
      uVar5 = 0;
    }
    else {
      ___9TileWalls(&nestor,2);
      ___7CTilePt(&sNeighbor,2);
      ___9TileWalls(&swstor,2);
      ___7CTilePt(&swNeighbor,2);
      uVar5 = 2;
    }
  }
  else if (bVar4 == false) {
    ___9TileWalls(&nestor,2);
    ___7CTilePt(&sNeighbor,2);
    ___9TileWalls(&swstor,2);
    ___7CTilePt(&swNeighbor,2);
    uVar5 = 3;
  }
  else {
    ___9TileWalls(&nestor,2);
    ___7CTilePt(&sNeighbor,2);
    ___9TileWalls(&swstor,2);
    ___7CTilePt(&swNeighbor,2);
    uVar5 = 1;
  }
  return uVar5;
}

u32 _kTopLeftWallsEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side) {
	bool topcap;
	bool bottomcap;
	CTilePt swNeighbor;
	TileWalls swstor;
	CTilePt neNeighbor;
	TileWalls nestor;
	CTilePt west;
	TileWalls westWall;
	CTilePt eNeighbor;
	TileWalls estor;
	
  cFixedWorld *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  TileWallStorage *in;
  uint uVar5;
  CTilePt swNeighbor;
  TileWalls swstor;
  CTilePt west;
  CTilePt eNeighbor;
  TileWalls nestor;
  TileWalls estor;
  bool topcap;
  
  pcVar1 = _5Globs_pFixedWorld;
  bVar4 = false;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  __pl__C7CTilePtRC7CTilePt(&swNeighbor,point);
  bVar3 = false;
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&swstor,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &swNeighbor);
  bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&swstor,seg);
  if ((!bVar2) &&
     (bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&swstor,kTopRight), !bVar2)) {
    __pl__C7CTilePtRC7CTilePt(&west,point);
    (*(code *)pcVar1->__vtable->ComputeArchValue)
              ((TileWalls *)&eNeighbor,
               (int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,&west);
    bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment((TileWalls *)&eNeighbor,kTopRight);
    ___9TileWalls((TileWalls *)&eNeighbor,2);
    ___7CTilePt(&west,2);
  }
  __pl__C7CTilePtRC7CTilePt(&west,point);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&nestor,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,&west);
  bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&nestor,seg);
  if ((!bVar2) &&
     (bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&nestor,kBottomLeft), !bVar2)) {
    __pl__C7CTilePtRC7CTilePt(&eNeighbor,point);
    in = (TileWallStorage *)
         (*(code *)pcVar1->__vtable[1].DoCommand)
                   ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable[1].Load,&eNeighbor);
    __9TileWallsRC15TileWallStorage(&estor,in);
    bVar4 = HasWallNotFence__C9TileWalls16TileWallsSegment(&estor,kBottomLeft);
    ___9TileWalls(&estor,2);
    ___7CTilePt(&eNeighbor,2);
  }
  if (bVar3 == false) {
    if (bVar4 == false) {
      ___9TileWalls(&nestor,2);
      ___7CTilePt(&west,2);
      ___9TileWalls(&swstor,2);
      ___7CTilePt(&swNeighbor,2);
      uVar5 = 0;
    }
    else {
      ___9TileWalls(&nestor,2);
      ___7CTilePt(&west,2);
      ___9TileWalls(&swstor,2);
      ___7CTilePt(&swNeighbor,2);
      uVar5 = 2;
    }
  }
  else if (bVar4 == false) {
    ___9TileWalls(&nestor,2);
    ___7CTilePt(&west,2);
    ___9TileWalls(&swstor,2);
    ___7CTilePt(&swNeighbor,2);
    uVar5 = 3;
  }
  else {
    ___9TileWalls(&nestor,2);
    ___7CTilePt(&west,2);
    ___9TileWalls(&swstor,2);
    ___7CTilePt(&swNeighbor,2);
    uVar5 = 1;
  }
  return uVar5;
}

u32 _kHorizDiagWallskTopEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side) {
	CTilePt east;
	CTilePt southEast;
	CTilePt west;
	CTilePt southWest;
	TileWalls eastWall;
	TileWalls southEastWall;
	TileWalls westWall;
	TileWalls southWestWall;
	bool eastCap;
	bool westCap;
	
  cFixedWorld *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  CTilePt east;
  CTilePt southEast;
  CTilePt west;
  CTilePt southWest;
  TileWalls eastWall;
  TileWalls southEastWall;
  TileWalls westWall;
  TileWalls southWestWall;
  bool eastCap;
  
  pcVar1 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  bVar3 = false;
  __pl__C7CTilePtRC7CTilePt(&east,point);
  __pl__C7CTilePtRC7CTilePt(&southEast,point);
  __pl__C7CTilePtRC7CTilePt(&west,point);
  __pl__C7CTilePtRC7CTilePt(&southWest,point);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&eastWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,&east
            );
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&southEastWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &southEast);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&westWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,&west
            );
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&southWestWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &southWest);
  bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&eastWall,kBottomLeft);
  if (bVar2) {
    bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&eastWall,kTopLeft);
    bVar3 = !bVar3;
  }
  bVar2 = false;
  if ((bVar3) ||
     (bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&southEastWall,kVertDiag), bVar3)) {
    bVar2 = true;
  }
  bVar3 = false;
  bVar4 = HasWallNotFence__C9TileWalls16TileWallsSegment(&westWall,kBottomRight);
  if (bVar4) {
    bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&westWall,kTopRight);
    bVar3 = !bVar3;
  }
  bVar4 = false;
  if ((bVar3) ||
     (bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&southWestWall,kVertDiag), bVar3)) {
    bVar4 = true;
  }
  if (bVar2) {
    if (bVar4) {
      ___9TileWalls(&southWestWall,2);
      ___9TileWalls(&westWall,2);
      ___9TileWalls(&southEastWall,2);
      ___9TileWalls(&eastWall,2);
      ___7CTilePt(&southWest,2);
      ___7CTilePt(&west,2);
      ___7CTilePt(&southEast,2);
      ___7CTilePt(&east,2);
      uVar5 = 1;
    }
    else {
      ___9TileWalls(&southWestWall,2);
      ___9TileWalls(&westWall,2);
      ___9TileWalls(&southEastWall,2);
      ___9TileWalls(&eastWall,2);
      ___7CTilePt(&southWest,2);
      ___7CTilePt(&west,2);
      ___7CTilePt(&southEast,2);
      ___7CTilePt(&east,2);
      uVar5 = 2;
    }
  }
  else if (bVar4) {
    ___9TileWalls(&southWestWall,2);
    ___9TileWalls(&westWall,2);
    ___9TileWalls(&southEastWall,2);
    ___9TileWalls(&eastWall,2);
    ___7CTilePt(&southWest,2);
    ___7CTilePt(&west,2);
    ___7CTilePt(&southEast,2);
    ___7CTilePt(&east,2);
    uVar5 = 3;
  }
  else {
    ___9TileWalls(&southWestWall,2);
    ___9TileWalls(&westWall,2);
    ___9TileWalls(&southEastWall,2);
    ___9TileWalls(&eastWall,2);
    ___7CTilePt(&southWest,2);
    ___7CTilePt(&west,2);
    ___7CTilePt(&southEast,2);
    ___7CTilePt(&east,2);
    uVar5 = 0;
  }
  return uVar5;
}

u32 _kHorizDiagWallskBottomEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side) {
	CTilePt east;
	CTilePt northEast;
	CTilePt west;
	CTilePt northWest;
	TileWalls eastWall;
	TileWalls northEastWall;
	TileWalls westWall;
	TileWalls northWestWall;
	bool eastCap;
	bool westCap;
	
  cFixedWorld *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  CTilePt east;
  CTilePt northEast;
  CTilePt west;
  CTilePt northWest;
  TileWalls eastWall;
  TileWalls northEastWall;
  TileWalls westWall;
  TileWalls northWestWall;
  bool eastCap;
  
  pcVar1 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  __pl__C7CTilePtRC7CTilePt(&east,point);
  __pl__C7CTilePtRC7CTilePt(&northEast,point);
  __pl__C7CTilePtRC7CTilePt(&west,point);
  __pl__C7CTilePtRC7CTilePt(&northWest,point);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&eastWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,&east
            );
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&northEastWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &northEast);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&westWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,&west
            );
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&northWestWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &northWest);
  bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&eastWall,kBottomLeft);
  bVar3 = false;
  if (!bVar2) {
    bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&eastWall,kTopLeft);
  }
  bVar2 = false;
  if ((bVar3 != false) ||
     (bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&northEastWall,kVertDiag), bVar3)) {
    bVar2 = true;
  }
  bVar4 = false;
  bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&westWall,kBottomRight);
  if (!bVar3) {
    bVar4 = HasWallNotFence__C9TileWalls16TileWallsSegment(&westWall,kTopRight);
  }
  bVar3 = false;
  if ((bVar4 != false) ||
     (bVar4 = HasWallNotFence__C9TileWalls16TileWallsSegment(&northWestWall,kVertDiag), bVar4)) {
    bVar3 = true;
  }
  if (bVar2) {
    if (bVar3) {
      ___9TileWalls(&northWestWall,2);
      ___9TileWalls(&westWall,2);
      ___9TileWalls(&northEastWall,2);
      ___9TileWalls(&eastWall,2);
      ___7CTilePt(&northWest,2);
      ___7CTilePt(&west,2);
      ___7CTilePt(&northEast,2);
      ___7CTilePt(&east,2);
      uVar5 = 1;
    }
    else {
      ___9TileWalls(&northWestWall,2);
      ___9TileWalls(&westWall,2);
      ___9TileWalls(&northEastWall,2);
      ___9TileWalls(&eastWall,2);
      ___7CTilePt(&northWest,2);
      ___7CTilePt(&west,2);
      ___7CTilePt(&northEast,2);
      ___7CTilePt(&east,2);
      uVar5 = 3;
    }
  }
  else if (bVar3) {
    ___9TileWalls(&northWestWall,2);
    ___9TileWalls(&westWall,2);
    ___9TileWalls(&northEastWall,2);
    ___9TileWalls(&eastWall,2);
    ___7CTilePt(&northWest,2);
    ___7CTilePt(&west,2);
    ___7CTilePt(&northEast,2);
    ___7CTilePt(&east,2);
    uVar5 = 2;
  }
  else {
    ___9TileWalls(&northWestWall,2);
    ___9TileWalls(&westWall,2);
    ___9TileWalls(&northEastWall,2);
    ___9TileWalls(&eastWall,2);
    ___7CTilePt(&northWest,2);
    ___7CTilePt(&west,2);
    ___7CTilePt(&northEast,2);
    ___7CTilePt(&east,2);
    uVar5 = 0;
  }
  return uVar5;
}

u32 _kVertDiagWallskLeftEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side) {
	CTilePt south;
	CTilePt southEast;
	CTilePt north;
	CTilePt northEast;
	TileWalls southWall;
	TileWalls southEastWall;
	TileWalls northWall;
	TileWalls northEastWall;
	bool southCap;
	bool northCap;
	
  cFixedWorld *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  CTilePt south;
  CTilePt southEast;
  CTilePt north;
  CTilePt northEast;
  TileWalls southWall;
  TileWalls southEastWall;
  TileWalls northWall;
  TileWalls northEastWall;
  bool southCap;
  
  pcVar1 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  bVar3 = false;
  __pl__C7CTilePtRC7CTilePt(&south,point);
  __pl__C7CTilePtRC7CTilePt(&southEast,point);
  __pl__C7CTilePtRC7CTilePt(&north,point);
  __pl__C7CTilePtRC7CTilePt(&northEast,point);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&southWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &south);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&southEastWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &southEast);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&northWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &north);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&northEastWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &northEast);
  bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&southWall,kTopRight);
  if (bVar2) {
    bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&southWall,kTopLeft);
    bVar3 = !bVar3;
  }
  bVar2 = false;
  if ((bVar3) ||
     (bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&southEastWall,kHorizDiag), bVar3)) {
    bVar2 = true;
  }
  bVar3 = false;
  bVar4 = HasWallNotFence__C9TileWalls16TileWallsSegment(&northWall,kBottomRight);
  if (bVar4) {
    bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&northWall,kBottomLeft);
    bVar3 = !bVar3;
  }
  bVar4 = false;
  if ((bVar3) ||
     (bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&northEastWall,kHorizDiag), bVar3)) {
    bVar4 = true;
  }
  if (bVar2) {
    if (bVar4) {
      ___9TileWalls(&northEastWall,2);
      ___9TileWalls(&northWall,2);
      ___9TileWalls(&southEastWall,2);
      ___9TileWalls(&southWall,2);
      ___7CTilePt(&northEast,2);
      ___7CTilePt(&north,2);
      ___7CTilePt(&southEast,2);
      ___7CTilePt(&south,2);
      uVar5 = 1;
    }
    else {
      ___9TileWalls(&northEastWall,2);
      ___9TileWalls(&northWall,2);
      ___9TileWalls(&southEastWall,2);
      ___9TileWalls(&southWall,2);
      ___7CTilePt(&northEast,2);
      ___7CTilePt(&north,2);
      ___7CTilePt(&southEast,2);
      ___7CTilePt(&south,2);
      uVar5 = 3;
    }
  }
  else if (bVar4) {
    ___9TileWalls(&northEastWall,2);
    ___9TileWalls(&northWall,2);
    ___9TileWalls(&southEastWall,2);
    ___9TileWalls(&southWall,2);
    ___7CTilePt(&northEast,2);
    ___7CTilePt(&north,2);
    ___7CTilePt(&southEast,2);
    ___7CTilePt(&south,2);
    uVar5 = 2;
  }
  else {
    ___9TileWalls(&northEastWall,2);
    ___9TileWalls(&northWall,2);
    ___9TileWalls(&southEastWall,2);
    ___9TileWalls(&southWall,2);
    ___7CTilePt(&northEast,2);
    ___7CTilePt(&north,2);
    ___7CTilePt(&southEast,2);
    ___7CTilePt(&south,2);
    uVar5 = 0;
  }
  return uVar5;
}

u32 _kVertDiagWallskRightEndCapTestFn(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side) {
	CTilePt south;
	CTilePt southWest;
	CTilePt north;
	CTilePt northWest;
	TileWalls southWall;
	TileWalls southWestWall;
	TileWalls northWall;
	TileWalls northWestWall;
	bool southCap;
	bool northCap;
	
  cFixedWorld *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  CTilePt south;
  CTilePt southWest;
  CTilePt north;
  CTilePt northWest;
  TileWalls southWall;
  TileWalls southWestWall;
  TileWalls northWall;
  TileWalls northWestWall;
  bool southCap;
  
  pcVar1 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  bVar3 = false;
  __pl__C7CTilePtRC7CTilePt(&south,point);
  __pl__C7CTilePtRC7CTilePt(&southWest,point);
  __pl__C7CTilePtRC7CTilePt(&north,point);
  __pl__C7CTilePtRC7CTilePt(&northWest,point);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&southWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &south);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&southWestWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &southWest);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&northWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &north);
  (*(code *)pcVar1->__vtable->ComputeArchValue)
            (&northWestWall,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
             &northWest);
  bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&southWall,kTopLeft);
  if (bVar2) {
    bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&southWall,kTopRight);
    bVar3 = !bVar3;
  }
  bVar2 = false;
  if ((bVar3) ||
     (bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&southWestWall,kHorizDiag), bVar3)) {
    bVar2 = true;
  }
  bVar3 = false;
  bVar4 = HasWallNotFence__C9TileWalls16TileWallsSegment(&northWall,kBottomLeft);
  if (bVar4) {
    bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&northWall,kBottomRight);
    bVar3 = !bVar3;
  }
  bVar4 = false;
  if ((bVar3) ||
     (bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&northWestWall,kHorizDiag), bVar3)) {
    bVar4 = true;
  }
  if (bVar2) {
    if (bVar4) {
      ___9TileWalls(&northWestWall,2);
      ___9TileWalls(&northWall,2);
      ___9TileWalls(&southWestWall,2);
      ___9TileWalls(&southWall,2);
      ___7CTilePt(&northWest,2);
      ___7CTilePt(&north,2);
      ___7CTilePt(&southWest,2);
      ___7CTilePt(&south,2);
      uVar5 = 1;
    }
    else {
      ___9TileWalls(&northWestWall,2);
      ___9TileWalls(&northWall,2);
      ___9TileWalls(&southWestWall,2);
      ___9TileWalls(&southWall,2);
      ___7CTilePt(&northWest,2);
      ___7CTilePt(&north,2);
      ___7CTilePt(&southWest,2);
      ___7CTilePt(&south,2);
      uVar5 = 2;
    }
  }
  else if (bVar4) {
    ___9TileWalls(&northWestWall,2);
    ___9TileWalls(&northWall,2);
    ___9TileWalls(&southWestWall,2);
    ___9TileWalls(&southWall,2);
    ___7CTilePt(&northWest,2);
    ___7CTilePt(&north,2);
    ___7CTilePt(&southWest,2);
    ___7CTilePt(&south,2);
    uVar5 = 3;
  }
  else {
    ___9TileWalls(&northWestWall,2);
    ___9TileWalls(&northWall,2);
    ___9TileWalls(&southWestWall,2);
    ___9TileWalls(&southWall,2);
    ___7CTilePt(&northWest,2);
    ___7CTilePt(&north,2);
    ___7CTilePt(&southWest,2);
    ___7CTilePt(&south,2);
    uVar5 = 0;
  }
  return uVar5;
}

bool SplitWallkBottomRight(TileWalls &walls, CTilePt &point) {
  bool bVar1;
  
  bVar1 = HasWallNotFence__C9TileWalls16TileWallsSegment(walls,kTopRight);
  return bVar1;
}

bool SplitWallkTopLeft(TileWalls &walls, CTilePt &point) {
  bool bVar1;
  
  bVar1 = HasWallNotFence__C9TileWalls16TileWallsSegment(walls,kTopRight);
  return bVar1;
}

bool SplitWallkBottomLeft(TileWalls &walls, CTilePt &point) {
  bool bVar1;
  
  bVar1 = HasWallNotFence__C9TileWalls16TileWallsSegment(walls,kTopLeft);
  return bVar1;
}

bool SplitWallkTopRight(TileWalls &walls, CTilePt &point) {
  bool bVar1;
  
  bVar1 = HasWallNotFence__C9TileWalls16TileWallsSegment(walls,kTopLeft);
  return bVar1;
}

bool SplitWallkHorizDiag(TileWalls &walls, CTilePt &point) {
	int size;
	CTilePt lastPoint1;
	CTilePt lastPoint2;
	
  int iVar1;
  byte *pbVar2;
  long lVar3;
  CTilePt lastPoint1;
  CTilePt lastPoint2;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar1 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
  __7CTilePtiii(&lastPoint1,iVar1 - point->mX,(int)point->mY,1);
  __7CTilePtiii(&lastPoint2,(iVar1 - point->mX) + -1,point->mY + -1,1);
  if ((long)lastPoint1.mX < 0) {
LAB_00146be4:
    lVar3 = (long)lastPoint2.mX;
  }
  else {
    lVar3 = (long)lastPoint2.mX;
    if ((long)lastPoint1.mX <= (long)(iVar1 + -1)) {
      if (-1 < (long)(int)lastPoint1.mY) {
        lVar3 = (long)lastPoint2.mX;
        if ((long)(iVar1 + -1) < (long)(int)lastPoint1.mY) goto LAB_00146be8;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        pbVar2 = (byte *)(*(code *)_5Globs_pFixedWorld->__vtable[1].DoCommand)
                                   ((int)&_5Globs_pFixedWorld->__vtable +
                                    (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].Load,
                                    &lastPoint1);
                    /* inlined from ../MSrc/tilewallstorage.h */
                    /* end of inlined section */
        if ((*pbVar2 & 0x20) != 0) goto LAB_00146c40;
      }
      goto LAB_00146be4;
    }
  }
LAB_00146be8:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/tilewallstorage.h */
                    /* end of inlined section */
  if ((((lVar3 < 0) || (iVar1 + -1 < lVar3)) || ((long)lastPoint2.mY < 0)) ||
     (((long)(iVar1 + -1) < (long)lastPoint2.mY ||
      (pbVar2 = (byte *)(*(code *)_5Globs_pFixedWorld->__vtable[1].DoCommand)
                                  ((int)&_5Globs_pFixedWorld->__vtable +
                                   (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].Load,&lastPoint2
                                  ), (*pbVar2 & 0x20) == 0)))) {
    ___7CTilePt(&lastPoint2,2);
    ___7CTilePt(&lastPoint1,2);
    return false;
  }
LAB_00146c40:
  ___7CTilePt(&lastPoint2,2);
  ___7CTilePt(&lastPoint1,2);
  return true;
}

bool SplitWallkVertDiag(TileWalls &walls, CTilePt &point) {
	int size;
	CTilePt lastPoint1;
	CTilePt lastPoint2;
	
  int iVar1;
  byte *pbVar2;
  long lVar3;
  CTilePt lastPoint1;
  CTilePt lastPoint2;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar1 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
  __7CTilePtiii(&lastPoint1,point->mX + -1,(int)point->mY,1);
  __7CTilePtiii(&lastPoint2,(int)point->mX,point->mY + -1,1);
  if ((long)lastPoint1.mX < 0) {
LAB_00146d5c:
    lVar3 = (long)lastPoint2.mX;
  }
  else {
    lVar3 = (long)lastPoint2.mX;
    if ((long)lastPoint1.mX <= (long)(iVar1 + -1)) {
      if (-1 < (long)(int)lastPoint1.mY) {
        lVar3 = (long)lastPoint2.mX;
        if ((long)(iVar1 + -1) < (long)(int)lastPoint1.mY) goto LAB_00146d60;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        pbVar2 = (byte *)(*(code *)_5Globs_pFixedWorld->__vtable[1].DoCommand)
                                   ((int)&_5Globs_pFixedWorld->__vtable +
                                    (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].Load,
                                    &lastPoint1);
                    /* inlined from ../MSrc/tilewallstorage.h */
                    /* end of inlined section */
        if ((*pbVar2 & 0x10) != 0) goto LAB_00146db8;
      }
      goto LAB_00146d5c;
    }
  }
LAB_00146d60:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/tilewallstorage.h */
                    /* end of inlined section */
  if ((((lVar3 < 0) || (iVar1 + -1 < lVar3)) || ((long)lastPoint2.mY < 0)) ||
     (((long)(iVar1 + -1) < (long)lastPoint2.mY ||
      (pbVar2 = (byte *)(*(code *)_5Globs_pFixedWorld->__vtable[1].DoCommand)
                                  ((int)&_5Globs_pFixedWorld->__vtable +
                                   (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].Load,&lastPoint2
                                  ), (*pbVar2 & 0x10) == 0)))) {
    ___7CTilePt(&lastPoint2,2);
    ___7CTilePt(&lastPoint1,2);
    return false;
  }
LAB_00146db8:
  ___7CTilePt(&lastPoint2,2);
  ___7CTilePt(&lastPoint1,2);
  return true;
}

float EIFenceWall::GetFenceMeterValue() {
  return (float)_11EIFenceWall_m_nInstances * 0.0078125;
}

float ERoomWall::GetWallMeterValue() {
	int nRooms;
	RoomManagerImpl *pRoommanImpl;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > roomItr;
	float roomratio;
	float tileratio;
	float planeratio;
	float retval;
	RoomManagerImpl *this;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	RoomManagerImpl *this;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	
  int iVar1;
  __rb_tree_base_iterator _Var2;
  long lVar3;
  __rb_tree_base_iterator _Var4;
  __rb_tree_node_base *p_Var5;
  int iVar6;
  __rb_tree_node_base **pp_Var7;
  float fVar8;
  float fVar9;
  float fVar10;
  __rb_tree_const_iterator_pair_const_short_unsigned_int_RoomImpl_____ roomItr;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar6 = 0;
  (*(code *)_5Globs_pFixedWorld->__vtable[1].SetVertexConfig)
            ((int)&_5Globs_pFixedWorld->__vtable +
             (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetVertexConfig,0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar1 = (*(code *)_5Globs_pRoomManager->__vtable->GetRoomCount)
                    ((int)&_5Globs_pRoomManager->__vtable +
                     (int)*(short *)&_5Globs_pRoomManager->__vtable->ComputeCutaway);
                    /* inlined from ../MSrc/Tree.h */
  roomItr.field0_0x0.node = *(__rb_tree_base_iterator *)(*(int *)(iVar1 + 4) + 8);
                    /* end of inlined section */
  pp_Var7 = (__rb_tree_node_base **)(iVar1 + 4);
  if (roomItr.field0_0x0.node != (__rb_tree_base_iterator)*(__rb_tree_node_base **)(iVar1 + 4)) {
                    /* inlined from ../MSrc/roomsimpl.h */
    p_Var5 = ((__rb_tree_node_base *)((int)roomItr.field0_0x0.node + 0x10))->parent;
    while( true ) {
      lVar3 = (**(code **)(*(int *)p_Var5 + 0x4c))
                        (&p_Var5->color + *(short *)(*(int *)p_Var5 + 0x48));
      if (lVar3 != 0) {
        lVar3 = (**(code **)(*(int *)p_Var5 + 100))
                          (&p_Var5->color + *(short *)(*(int *)p_Var5 + 0x60));
        if (lVar3 == 0) {
          iVar6 = iVar6 + 1;
        }
      }
      _Var2.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0xc);
      if (_Var2.node == (__rb_tree_node_base *)0x0) {
        _Var2.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 4);
        if (roomItr.field0_0x0.node == (__rb_tree_base_iterator)(_Var2.node)->right) {
          do {
            roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
            _Var2.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 4);
          } while (roomItr.field0_0x0.node == (__rb_tree_base_iterator)(_Var2.node)->right);
        }
        if (*(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0xc) != _Var2.node) {
          roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
        }
                    /* end of inlined section */
        _Var4.node = *pp_Var7;
      }
      else if ((_Var2.node)->left == (__rb_tree_node_base *)0x0) {
        _Var4.node = *pp_Var7;
        roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
      }
      else {
        do {
          _Var2.node = (_Var2.node)->left;
        } while ((_Var2.node)->left != (__rb_tree_node_base *)0x0);
        _Var4.node = *pp_Var7;
        roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
      }
                    /* inlined from ../MSrc/Tree.h */
                    /* end of inlined section */
      if (roomItr.field0_0x0.node == (__rb_tree_base_iterator)_Var4.node) break;
      p_Var5 = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0x14);
    }
  }
  fVar8 = (float)iVar6 * 0.05;
  if ((int)_9ERoomWall_m_tileCount < 0) {
    fVar9 = (float)(_9ERoomWall_m_tileCount & 1 | _9ERoomWall_m_tileCount >> 1);
    fVar9 = fVar9 + fVar9;
  }
  else {
    fVar9 = (float)_9ERoomWall_m_tileCount;
  }
  fVar9 = fVar9 * 0.001953125;
  if ((int)_9ERoomWall_m_wallCount < 0) {
    fVar10 = (float)(_9ERoomWall_m_wallCount & 1 | _9ERoomWall_m_wallCount >> 1);
    fVar10 = fVar10 + fVar10;
  }
  else {
    fVar10 = (float)_9ERoomWall_m_wallCount;
  }
  fVar10 = fVar10 * 0.003355705;
  fVar9 = (float)((int)fVar9 * (uint)(fVar10 < fVar9) | (int)fVar10 * (uint)(fVar10 >= fVar9));
  return (float)((int)fVar8 * (uint)(fVar9 < fVar8) | (int)fVar9 * (uint)(fVar9 >= fVar8));
}

void* EIWallPart2::operator new(unsigned int size) {
	void *p;
	
  void *__s;
  
  __s = _allocBucketAlloc__FUiUi(0x150,0x12);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EIWallPart2::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x150,0x12);
  return;
}

EStream& operator<<(EStream &s, EIFenceWall *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIFenceWall *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (EIFenceWall *)pStorable;
  return s;
}

EIFenceWall* EIFenceWall::EIFenceWall(TileWallsSegment &seg, CTilePt &tile, WallStyle style) {
	EIWallPart2 *this;
	bool isdiag;
	u32 modelid;
	EMat4 mRot;
	EWallSetup setup;
	EVec2 vWallOff;
	EHouse *this;
	EHouse *this;
	
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint modelId;
  CTilePt *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  EMat4 mRot;
  EWallSetup setup;
  EVec2 vWallOff;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
  __13EIStaticModel((EIStaticModel *)this);
  this_00 = &(this->field0_0x0).m_point;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_11EIWallPart2;
  __7CTilePt(this_00);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
  *(undefined4 *)&(this->field0_0x0).field_0x13c = 0;
                    /* end of inlined section */
  _11EIFenceWall_m_nInstances = _11EIFenceWall_m_nInstances + 1;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_11EIFenceWall;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
  *(undefined4 *)&(this->field0_0x0).field_0x140 = 0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
  (this->field0_0x0).m_pPaperShader = (ERShader *)0x0;
                    /* end of inlined section */
  __as__7CTilePtRC7CTilePt(this_00,tile);
  bVar1 = false;
  if ((*seg == kHorizDiag) || (*seg == kVertDiag)) {
    bVar1 = true;
  }
  modelId = 0;
  if (style == kFenceStyle2) {
    modelId = 0x5c05f1da;
    uVar2 = 0x73ff3c67;
  }
  else {
    if ((int)style < 0xd) {
      if (style != kFenceStyle1) goto LAB_00147220;
    }
    else {
      if (style == kFenceStyle3) {
        modelId = 0x9d1a20de;
        uVar2 = 0xfc047088;
        goto LAB_0014721c;
      }
      if (style != kFenceStyle4) goto LAB_00147220;
    }
    modelId = 0x40006ee5;
    uVar2 = 0xb86b32a0;
  }
LAB_0014721c:
  if (bVar1) {
    modelId = uVar2;
  }
LAB_00147220:
  SetModel__13EIStaticModelUi((EIStaticModel *)this,modelId);
  iVar3 = RemapWallCfgIdx__F16TileWallsSegment(*seg);
                    /* inlined from c:/eor/src2/games/sims/ESRC/ewallutil.h */
  memcpy(&setup,_EWallConfigs + iVar3,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
  local_70 = ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[0];
  local_6c = ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[1];
                    /* end of inlined section */
  Id__5EMat4(&mRot);
  RotateZ__5EMat4f(&mRot,setup.rot * 0.7853982);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_68 = 0;
                    /* end of inlined section */
  local_6c = (float)(int)tile->mY + setup.xoff + local_6c;
  local_70 = (float)(int)tile->mX + setup.yoff + local_70;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  PostTranslate__5EMat4RC5EVec3(&mRot,(EVec3 *)&local_70);
  SwapXY__FR5EMat4(&mRot);
  SetOrient__13EIStaticModelRC5EMat4((EIStaticModel *)this,&mRot);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  InsertInstance__7ERLevelP9EInstanceT1
            ((_globals._pCurHouse)->m_pLevel,(EInstance *)this,(EInstance *)0x0);
  return this;
}

void EIFenceWall::~EIFenceWall(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_11EIFenceWall;
  _11EIFenceWall_m_nInstances = _11EIFenceWall_m_nInstances + -1;
  ___11EIWallPart2(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
    _allocBucketFree__FPvUiUi(this,0x150,0x12);
  }
                    /* end of inlined section */
  return;
}

EStream& operator<<(EStream &s, EIWallPart2 *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIWallPart2 *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (EIWallPart2 *)pStorable;
  return s;
}

EIWallPart2* EIWallPart2::EIWallPart2(TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side, CTilePt &point) {
	u32 modelId;
	u32 wallpaperShaderId;
	EMat4 mat;
	EHouse *this;
	EInstance *this;
	EHouse *this;
	NLIterator i;
	NLIterator i;
	EInstance *this;
	
  uint uVar1;
  WallPattern patt;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  EMat4 mat;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __13EIStaticModel(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_11EIWallPart2;
  __7CTilePt(&this->m_point);
  *(undefined4 *)&this->field_0x140 = 0;
  this->m_pPaperShader = (ERShader *)0x0;
  this->m_seg = seg;
  __as__7CTilePtRC7CTilePt(&this->m_point,point);
  uVar1 = GetModelId__11EIWallPart2RC7CTilePtR9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                    (this,point,walls,seg,side);
  if (uVar1 != 0) {
    SetModel__13EIStaticModelUi(&this->field0_0x0,uVar1);
    patt = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                     (walls,seg,side);
    uVar1 = RemapWallpaperId__FUi(patt);
    if (uVar1 != 0) {
      ChangeWallpaper__11EIWallPart2Ui(this,uVar1);
    }
                    /* end of inlined section */
    Id__5EMat4(&mat);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    local_7c = (float)(int)point->mX + ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_78 = 0;
                    /* end of inlined section */
    local_80 = (float)(int)point->mY + ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    Translate__5EMat4RC5EVec3(&mat,(EVec3 *)&local_80);
                    /* end of inlined section */
    SetOrient__13EIStaticModelRC5EMat4(&this->field0_0x0,&mat);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
    InsertInstance__7ERLevelP9EInstanceT1
              ((_globals._pCurHouse)->m_pLevel,(EInstance *)this,(EInstance *)0x0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    local_80 = (float)**(int **)(_app.m_pGameStateMan)->m_nliCurGame;
                    /* end of inlined section */
    if (local_80 == 2.802597e-45) {
      SetOverlapCauseFlags__9EInstanceUi((EInstance *)this,0);
      SetOverlapReceiveFlags__9EInstanceUi((EInstance *)this,0);
    }
    else {
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
                    /* end of inlined section */
      SetOverlapReceiveFlags__9EInstanceUi
                ((EInstance *)this,(this->field0_0x0).field0_0x0.m_otd.m_receiveFlags | 0x10000);
    }
  }
  return this;
}

void EIWallPart2::~EIWallPart2(int __in_chrg) {
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_11EIWallPart2;
  RemoveFromLevel__9EInstance((EInstance *)this);
  while (this->m_pPaperShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pPaperShader->field0_0x0);
    this->m_pPaperShader = (ERShader *)0x0;
  }
  ___7CTilePt(&this->m_point,2);
  ___13EIStaticModel(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    __dl__11EIWallPart2Pv(this);
  }
  return;
}

void ERoom::CollectWallLighMaps(TRedBlackTree<EILightmap *,EILightmap *> &tree) {
	int i;
	ERoomWallList *plist;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	TRedBlackTree<EILightmap *,EILightmap *> *this;
	EILightmap *key;
	
  int **ppiVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 0;
  while( true ) {
    ppiVar1 = *(int ***)((int)this->m_listTab + iVar2);
    iVar4 = iVar4 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    if ((ppiVar1 != (int **)0x0) && (piVar3 = *ppiVar1, piVar3 != (int *)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      iVar2 = *piVar3;
      while( true ) {
        Insert__13ERedBlackTreeUiUib(&tree->field0_0x0,iVar2 + 0x20U,iVar2 + 0x20U,false);
        piVar3 = (int *)piVar3[2];
                    /* end of inlined section */
        if (piVar3 == (int *)0x0) break;
        iVar2 = *piVar3;
      }
    }
    if (7 < iVar4) break;
    iVar2 = iVar4 * 4;
  }
  return;
}

void EIWallPart2::BeginLmCompute() {
  if (this->m_modelIdLMCompute != this->m_modelIdUp) {
    SetModel__13EIStaticModelUi(&this->field0_0x0,this->m_modelIdLMCompute);
    if (this->m_pPaperShader != (ERShader *)0x0) {
                    /* end of inlined section */
      ChangeWallpaper__11EIWallPart2Ui(this,(this->m_pPaperShader->field0_0x0).m_resId);
    }
  }
  return;
}

void EIWallPart2::EndLmCompute() {
  if (this->m_modelIdLMCompute != this->m_modelIdUp) {
    SetModel__13EIStaticModelUi(&this->field0_0x0,this->m_modelIdUp);
    if (this->m_pPaperShader != (ERShader *)0x0) {
                    /* end of inlined section */
      ChangeWallpaper__11EIWallPart2Ui(this,(this->m_pPaperShader->field0_0x0).m_resId);
    }
  }
  return;
}

u32 EIWallPart2::GetModelId(CTilePt &point, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side) {
	ERoomWallModelIdTableNode *wallModelTable;
	int segIndex;
	int capId;
	WallStyle style;
	NLIterator i;
	NLIterator i;
	WallStyle in;
	ObjectIterator objitr;
	cXObject *pObj;
	ISimInstance *pModelInst;
	u32 modelInstResId;
	CTilePt &location;
	cXPortal *pPortal;
	cXObject *ptr;
	EIStaticModel *this;
	WallStyle in;
	ObjectIterator objitr;
	cXObject *pObj;
	CTilePt &location;
	cXPortal *pPortal;
	cXObject *ptr;
	ObjSelector *pMasterSel;
	CTilePt neighborPoint;
	bool isWindowOnWall;
	ObjectIterator nitr;
	cXObject *pnObj;
	cXPortal *pNPortal;
	cXObject *ptr;
	NLIterator i;
	NLIterator i;
	cXObject *ptr;
	u32 modelInstResId;
	
  TreeSim__vtable *pTVar1;
  cXObject__15_2008 *pcVar2;
  bool bVar3;
  ERoomWallModelIdTableNode *pEVar4;
  int iVar5;
  WallStyle WVar6;
  void *pvVar7;
  ObjSelector *pOVar8;
  ObjSelector *pOVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  cXObject__15_2008 *pcVar15;
  int iVar16;
  ulong in_hi;
  long lVar17;
  ObjectIterator objitr;
  ObjectIterator OStack_e0;
  CTilePt neighborPoint;
  ObjectIterator nitr;
  ERoomWallModelIdTableNode *wallModelTable;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  objitr.fRoot = **(cXObject__15_2008 ***)(_app.m_pGameStateMan)->m_nliCurGame;
                    /* end of inlined section */
  if (objitr.fRoot == (cXObject__15_2008 *)&pModelMats) {
    pEVar4 = _ERoomWallModelIdTableNHood;
  }
  else {
    pEVar4 = _ERoomWallModelIdTable;
  }
                    /* end of inlined section */
  iVar5 = log2down__Fi(seg);
  iVar16 = iVar5 + 2;
  if (1 < side + ~kTop) {
    iVar16 = iVar5;
  }
  iVar5 = (*(code *)_wallEndCapFnTab[iVar16])(point,walls,seg,side);
  WVar6 = GetStyle__C9TileWalls16TileWallsSegment(walls,seg);
                    /* inlined from ../MSrc/wallStyles.h */
  if ((((WVar6 == kDoorStyle) || (WVar6 == kDoorLeftStyle)) || (WVar6 == kDoorRightStyle)) ||
     ((WVar6 == kFrenchDoorStyle || (bVar3 = false, WVar6 == kCustomDoorStyle)))) {
    bVar3 = true;
  }
                    /* end of inlined section */
  if (!bVar3) {
                    /* inlined from ../MSrc/wallStyles.h */
                    /* end of inlined section */
    if (WVar6 == kCustomWindowStyle) {
      *(undefined4 *)&this->field_0x140 = 1;
                    /* inlined from ../MSrc/objectiterator.h */
      init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&objitr,point,kAll);
                    /* end of inlined section */
      iVar5 = iVar5 * 4;
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
      pcVar15 = (cXObject__15_2008 *)0x0;
      if (objitr.fCurrent != (cXObject__15_2008 *)0x0) {
                    /* inlined from ../MSrc/objectiterator.h */
        do {
          pcVar15 = objitr.fCurrent;
          pvVar7 = (void *)0x0;
          if (objitr.fCurrent != (cXObject__15_2008 *)0x0) {
            pvVar7 = _dyncastimpl__7TreeSim4SCID((objitr.fCurrent)->_vb3534,cXPortalID);
          }
                    /* end of inlined section */
          bVar3 = false;
          if (pvVar7 != (void *)0x0) {
            pOVar8 = (ObjSelector *)
                     (*(code *)pcVar15->__vtable[1].SetLevel)
                               ((int)&pcVar15->_vb3534 +
                                (int)*(short *)&pcVar15->__vtable[1].GetTreeID);
            pOVar8 = GetMasterSelector__11ObjSelector(pOVar8);
            __7CTilePt(&neighborPoint);
            _neighborPoint =
                 _neighborPoint & 0xff000000 | (uint)(byte)point->mLevel << 0x10 |
                 (uint)*(ushort *)point;
            GetAdjacentTile__9TileWalls16TileWallsSegmentP7CTilePt(seg,&neighborPoint);
                    /* inlined from ../MSrc/objectiterator.h */
            init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType
                      (&nitr,&neighborPoint,kAll);
            pcVar2 = nitr.fCurrent;
                    /* end of inlined section */
            while (nitr.fCurrent = pcVar2, pcVar2 != (cXObject__15_2008 *)0x0) {
              pvVar7 = (void *)0x0;
              if (pcVar2 != (cXObject__15_2008 *)0x0) {
                pvVar7 = _dyncastimpl__7TreeSim4SCID(pcVar2->_vb3534,cXPortalID);
              }
                    /* end of inlined section */
              if (pvVar7 != (void *)0x0) {
                pOVar9 = (ObjSelector *)
                         (*(code *)pcVar2->__vtable[1].SetLevel)
                                   ((int)&pcVar2->_vb3534 +
                                    (int)*(short *)&pcVar2->__vtable[1].GetTreeID);
                pOVar9 = GetMasterSelector__11ObjSelector(pOVar9);
                if (pOVar9 == pOVar8) {
                  bVar3 = true;
                  break;
                }
              }
              __pp__14ObjectIterator(&nitr);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
              pcVar2 = nitr.fCurrent;
            }
            if (bVar3) {
              ___7CTilePt(&neighborPoint,2);
              break;
            }
            ___7CTilePt(&neighborPoint,2);
          }
          __pp__14ObjectIterator(&objitr);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
        } while (objitr.fCurrent != (cXObject__15_2008 *)0x0);
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      _neighborPoint = **(int **)(_app.m_pGameStateMan)->m_nliCurGame;
                    /* end of inlined section */
                    /* end of inlined section */
      if (_neighborPoint != 2) {
                    /* inlined from ../MSrc/SCID.h */
        pvVar7 = (void *)0x0;
        if (pcVar15 != (cXObject__15_2008 *)0x0) {
          pvVar7 = _dyncastimpl__7TreeSim4SCID(pcVar15->_vb3534,cXPortalID);
        }
                    /* end of inlined section */
        if (pvVar7 == (void *)0x0) {
          *(undefined4 *)&this->field_0x140 = 0;
          puVar10 = (uint *)(((uint)pEVar4 | (uint)in_hi) + iVar16 * 0x50 + iVar5);
          goto LAB_00147cd8;
        }
      }
      if (pcVar15 == (cXObject__15_2008 *)0x0) {
        uVar14 = *(uint *)(((uint)pEVar4 | (uint)in_hi) + iVar16 * 0x50 + iVar5 + 0x20);
        this->m_modelIdHalf = uVar14;
        this->m_modelIdUp = uVar14;
        this->m_modelIdLMCompute = uVar14;
      }
      else {
        pTVar1 = pcVar15->_vb3534->__vtable;
        iVar11 = (*(code *)pTVar1[1].GetISimInstance)
                           ((int)&pcVar15->_vb3534->m_pObject +
                            (int)*(short *)&pTVar1[1].GetLastResult);
                    /* inlined from /eor/src2/engine/instance/e_istaticmodel.h */
        uVar14 = *(uint *)(iVar11 + 0x114);
                    /* end of inlined section */
        if (uVar14 == 0x92751a1a) {
          lVar12 = ((long)(int)pEVar4 | in_hi) + (long)(iVar16 * 0x50);
          uVar13 = (uint)((ulong)lVar12 >> 0x20);
          uVar14 = *(uint *)((int)lVar12 + iVar5 + 0x40);
        }
        else if ((uVar14 < 0x92751a1b) && (uVar14 == 0x40e93a9)) {
          lVar12 = ((long)(int)pEVar4 | in_hi) + (long)(iVar16 * 0x50);
          uVar13 = (uint)((ulong)lVar12 >> 0x20);
          uVar14 = *(uint *)((int)lVar12 + iVar5 + 0x30);
        }
        else {
          lVar12 = ((long)(int)pEVar4 | in_hi) + (long)(iVar16 * 0x50);
          uVar13 = (uint)((ulong)lVar12 >> 0x20);
          uVar14 = *(uint *)((int)lVar12 + iVar5 + 0x20);
        }
        this->m_modelIdUp = uVar14;
        this->m_modelIdLMCompute = this->m_modelIdUp;
        this->m_modelIdHalf = *(uint *)(((uint)pEVar4 | uVar13) + iVar16 * 0x50 + iVar5);
      }
    }
    else {
      *(undefined4 *)&this->field_0x140 = 0;
      bVar3 = HasDiagonal__C9TileWalls(walls);
      if (bVar3) {
        iVar11 = iVar16 + 3;
        if (-1 < iVar16) {
          iVar11 = iVar16;
        }
        uVar14 = _EDiagRoomWallModelIdTable[iVar16 + (iVar11 >> 2) * -4].standardEndCapidx[iVar5];
        this->m_modelIdLMCompute = uVar14;
        this->m_modelIdUp = uVar14;
        this->m_modelIdHalf = uVar14;
        goto LAB_00147d2c;
      }
      puVar10 = (uint *)(((uint)pEVar4 | (uint)in_hi) + iVar16 * 0x50 + iVar5 * 4);
LAB_00147cd8:
      uVar14 = *puVar10;
      this->m_modelIdLMCompute = uVar14;
      this->m_modelIdUp = uVar14;
      this->m_modelIdHalf = uVar14;
    }
    goto LAB_00147d2c;
  }
  iVar5 = iVar5 * 4;
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
  lVar12 = ((long)(int)pEVar4 | in_hi) + (long)(iVar16 * 0x50);
  lVar17 = (long)(int)((ulong)lVar12 >> 0x20);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/objectiterator.h */
  this->m_modelIdUp = *(uint *)((int)lVar12 + iVar5 + 0x10);
  init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&OStack_e0,point,kAll);
  pcVar15 = (cXObject__15_2008 *)0x0;
                    /* end of inlined section */
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
  while (pcVar2 = OStack_e0.fCurrent, uVar14 = (uint)lVar17,
        OStack_e0.fCurrent != (cXObject__15_2008 *)0x0) {
                    /* inlined from ../MSrc/objectiterator.h */
    pvVar7 = (void *)0x0;
    if (OStack_e0.fCurrent != (cXObject__15_2008 *)0x0) {
      pvVar7 = _dyncastimpl__7TreeSim4SCID((OStack_e0.fCurrent)->_vb3534,cXPortalID);
    }
    uVar14 = (uint)lVar17;
                    /* end of inlined section */
    pcVar15 = pcVar2;
    if (pvVar7 != (void *)0x0) break;
    __pp__14ObjectIterator(&OStack_e0);
  }
  lVar12 = 0;
  if (pcVar15 != (cXObject__15_2008 *)0x0) {
    pTVar1 = pcVar15->_vb3534->__vtable;
    lVar12 = (*(code *)pTVar1[1].GetISimInstance)
                       ((int)&pcVar15->_vb3534->m_pObject + (int)*(short *)&pTVar1[1].GetLastResult)
    ;
  }
  uVar13 = 0;
  if (lVar12 != 0) {
    uVar13 = *(uint *)((int)lVar12 + 0x114);
  }
                    /* end of inlined section */
  if (uVar13 == 0x8e4e8777) {
LAB_001479e0:
    *(undefined4 *)&this->field_0x140 = 2;
    uVar13 = this->m_modelIdUp;
    uVar14 = *(uint *)(((uint)pEVar4 | uVar14) + iVar16 * 0x50 + iVar5);
  }
  else if (uVar13 < 0x8e4e8778) {
    if (uVar13 == 0x50eea53d) {
      *(undefined4 *)&this->field_0x140 = 3;
      this->m_modelIdHalf = this->m_modelIdUp;
      this->m_modelIdLMCompute = this->m_modelIdUp;
      goto LAB_00147d2c;
    }
    if (uVar13 != 0x63d8dce1) goto LAB_001479e0;
    *(undefined4 *)&this->field_0x140 = 2;
    uVar13 = this->m_modelIdUp;
    uVar14 = *(uint *)(((uint)pEVar4 | uVar14) + iVar16 * 0x50 + iVar5 + 0x20);
  }
  else {
    if ((uVar13 == 0x92e55148) || (uVar13 != 0xe67026f1)) goto LAB_001479e0;
    *(undefined4 *)&this->field_0x140 = 2;
    uVar13 = this->m_modelIdUp;
    uVar14 = *(uint *)(((uint)pEVar4 | uVar14) + iVar16 * 0x50 + iVar5 + 0x30);
  }
  this->m_modelIdHalf = uVar13;
  this->m_modelIdLMCompute = uVar14;
LAB_00147d2c:
  return this->m_modelIdUp;
}

void EIWallPart2::ChangeWallpaperForHalfDown() {
	u32 searchID;
	ERShader *pNewShader;
	int csm;
	EOrderTableData *potd;
	int index;
	int csms;
	int index;
	EResource *this;
	
  int iVar1;
  EGlobalManagerClient__vtable *pEVar2;
  ERShader *pEVar3;
  ERModel *pEVar4;
  int iVar5;
  EOrderTableData *pEVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  pEVar3 = _11EIWallPart2_m_pWallDownShader;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar1 = (((this->field0_0x0).m_pModel)->m_subModels).field0_0x0.m_size;
                    /* end of inlined section */
  iVar9 = 0;
  if (0 < iVar1) {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
    pEVar4 = (this->field0_0x0).m_pModel;
    while( true ) {
      iVar5 = iVar9 * 0x18;
                    /* end of inlined section */
      iVar9 = iVar9 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      piVar8 = (int *)((int)(pEVar4->m_subModels).field0_0x0.m_p + iVar5);
      iVar5 = piVar8[1];
                    /* end of inlined section */
      pEVar6 = (this->field0_0x0).m_otds;
      if (0 < iVar5) {
        iVar7 = 0;
        do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
          if (*(int *)(*(int *)(*piVar8 + iVar7 + 4) + 0xc) == 0x2b7ef272) {
            pEVar6->pShader = pEVar3->m_pShader;
          }
          pEVar6 = pEVar6 + 1;
          iVar5 = iVar5 + -1;
          iVar7 = iVar7 + 0x4c;
        } while (iVar5 != 0);
      }
      if (iVar1 <= iVar9) break;
      pEVar4 = (this->field0_0x0).m_pModel;
    }
  }
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[3].ManagedStartup);
  return;
}

void EIWallPart2::ChangeWallpaper(u32 id) {
	u32 searchID;
	ERShader *pNewShader;
	int csm;
	EOrderTableData *potd;
	int index;
	int csms;
	int index;
	EResource *this;
	
  int iVar1;
  EGlobalManagerClient__vtable *pEVar2;
  ERShader *pEVar3;
  ERModel *pEVar4;
  int iVar5;
  EOrderTableData *pEVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar3 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,id,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
  iVar1 = (((this->field0_0x0).m_pModel)->m_subModels).field0_0x0.m_size;
                    /* end of inlined section */
  iVar9 = 0;
  if (0 < iVar1) {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
    pEVar4 = (this->field0_0x0).m_pModel;
    while( true ) {
      iVar5 = iVar9 * 0x18;
                    /* end of inlined section */
      iVar9 = iVar9 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      piVar8 = (int *)((int)(pEVar4->m_subModels).field0_0x0.m_p + iVar5);
      iVar5 = piVar8[1];
                    /* end of inlined section */
      pEVar6 = (this->field0_0x0).m_otds;
      if (0 < iVar5) {
        iVar7 = 0;
        do {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
          if (*(int *)(*(int *)(*piVar8 + iVar7 + 4) + 0xc) == 0x2b7ef272) {
            pEVar6->pShader = pEVar3->m_pShader;
          }
          pEVar6 = pEVar6 + 1;
          iVar5 = iVar5 + -1;
          iVar7 = iVar7 + 0x4c;
        } while (iVar5 != 0);
      }
      if (iVar1 <= iVar9) break;
      pEVar4 = (this->field0_0x0).m_pModel;
    }
  }
  while (this->m_pPaperShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pPaperShader->field0_0x0);
    this->m_pPaperShader = (ERShader *)0x0;
  }
  this->m_pPaperShader = pEVar3;
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[3].ManagedStartup);
  return;
}

void EIWallPart2::SetVisible(bool vis) {
	u32 flags;
	
  uint uVar1;
  
  uVar1 = (this->field0_0x0).field0_0x0.m_instanceFlags;
  if (vis) {
    uVar1 = uVar1 | 1;
  }
  else {
    uVar1 = uVar1 & 0xfffffffe;
  }
  (this->field0_0x0).field0_0x0.m_instanceFlags = uVar1;
  return;
}

void EIWallPart2::SetWallState(EWallUpDownStateType state) {
	EResource *this;
	EMat4 mat;
	
  EStorable__vtable *pEVar1;
  int iVar2;
  uint modelId;
  EMat4 mat;
  
  if (*(int *)&this->field_0x13c == 0) {
    if (state == WallUP) {
                    /* inlined from /eor/src2/engine/resource/e_resource.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/resource/e_resource.h */
                    /* end of inlined section */
      if (this->m_modelIdUp == (((this->field0_0x0).m_pModel)->field0_0x0).m_resId) {
        return;
      }
      iVar2 = *(int *)&this->field_0x13c;
    }
    else {
      iVar2 = *(int *)&this->field_0x13c;
    }
  }
  else {
    iVar2 = *(int *)&this->field_0x13c;
  }
                    /* end of inlined section */
  if ((iVar2 != 1) || (state == WallUP)) {
    if (state == WallUP) {
      SetVisible__11EIWallPart2b(this,true);
      SetModel__13EIStaticModelUi(&this->field0_0x0,this->m_modelIdUp);
      if (this->m_pPaperShader != (ERShader *)0x0) {
                    /* end of inlined section */
        ChangeWallpaper__11EIWallPart2Ui(this,(this->m_pPaperShader->field0_0x0).m_resId);
                    /* end of inlined section */
      }
      GetOrient__13EIStaticModelR5EMat4(&this->field0_0x0,&mat);
      mat.field0_0x0.d[3][2] = 0.0;
      pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[3].GetTypeInfo)
                ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar1[3].SafeDelete,&mat);
      *(undefined4 *)&this->field_0x13c = 0;
    }
    else {
      if (*(int *)&this->field_0x140 == 2) {
        SetVisible__11EIWallPart2b(this,false);
        modelId = this->m_modelIdHalf;
      }
      else if (*(int *)&this->field_0x140 == 3) {
        SetVisible__11EIWallPart2b(this,false);
        modelId = this->m_modelIdHalf;
      }
      else {
        modelId = this->m_modelIdHalf;
      }
      SetModel__13EIStaticModelUi(&this->field0_0x0,modelId);
      ChangeWallpaperForHalfDown__11EIWallPart2(this);
      *(undefined4 *)&this->field_0x13c = 1;
    }
  }
  return;
}

EMat4* EIWallPart2::GetDrawMatrix(ERC *prc) {
	EMat4 mat;
	ERC *this;
	
  EStorable__vtable *pEVar1;
  EMat4 *this_00;
  EMat4 mat;
  
  if (*(int *)&this->field_0x13c == 0) {
                    /* end of inlined section */
    this_00 = &(this->field0_0x0).m_mOrient;
  }
  else {
    GetOrient__13EIStaticModelR5EMat4(&this->field0_0x0,&mat);
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    mat.field0_0x0.d[3][2] = -2.75;
    (*(code *)pEVar1[3].GetTypeInfo)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[3].SafeDelete,&mat);
                    /* inlined from /eor/src2/engine/e_dl.h */
    this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
    __as__5EMat4RC5EMat4(this_00,&(this->field0_0x0).m_mOrient);
  }
  return this_00;
}

EFenceWall* EFenceWall::EFenceWall(TileWallsSegment &theSeg, CTilePt &thePt, WallStyle style) {
	ERoomWall *this;
	TNodeList<EIWallPart2 *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  EIFenceWall *pEVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
  (this->field0_0x0).__vtable = (ERoomWall__vtable *)_vt_9ERoomWall;
  __7CTilePt((CTilePt *)this);
  __7CTilePt(&(this->field0_0x0).m_c1);
  __10EILightmap((EILightmap__0_4024 *)&(this->field0_0x0).m_lightmap);
  (this->field0_0x0).m_wallInstances.field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->field0_0x0).m_wallInstances.field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (ERoomWall__vtable *)_vt_10EFenceWall;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
  pEVar1 = (EIFenceWall *)_allocBucketAlloc__FUiUi(0x150,0x12);
                    /* end of inlined section */
  pEVar1 = __11EIFenceWallR16TileWallsSegmentR7CTilePt9WallStyle(pEVar1,theSeg,thePt,style);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&(this->field0_0x0).m_wallInstances.field0_0x0,(uint)pEVar1);
                    /* end of inlined section */
  return this;
}

void* ERoomWall::operator new(unsigned int size) {
	void *ptr;
	
  void *__s;
  
  __s = _allocBucketAlloc__FUiUi(0x1b0,8);
  memset(__s,0,(long)(int)size);
  return __s;
}

void ERoomWall::operator delete(void *ptr) {
  _allocBucketFree__FPvUiUi(ptr,0x1b0,8);
  return;
}

ERoomWall* ERoomWall::ERoomWall(TileWallsSegment theSeg, DiagonalSideSelector side, CTilePt &thePt, bool doAlloc) {
	TileWalls walls;
	Room *r1;
	Room *r2;
	Sides s1;
	Sides s2;
	UInt16 room;
	
  cFixedWorld__vtable *pcVar1;
  cFixedWorld *pcVar2;
  short sVar3;
  EIWallPart2 *pEVar4;
  long lVar5;
  Room__vtable *pRVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  TileWalls walls;
  Room *r1;
  Room *r2;
  Sides s1;
  Sides s2;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  this->__vtable = (ERoomWall__vtable *)_vt_9ERoomWall;
  __7CTilePt(&this->m_c0);
  __7CTilePt(&this->m_c1);
  __10EILightmap((EILightmap__0_4024 *)&this->m_lightmap);
  pcVar2 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_wallInstances).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_wallInstances).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  pcVar1 = pcVar2->__vtable;
  (*(code *)pcVar1->ComputeArchValue)
            (&walls,(int)&pcVar2->__vtable + (int)*(short *)&pcVar1->ComputeRooms,thePt);
  __as__7CTilePtRC7CTilePt(&this->m_c0,thePt);
  __as__7CTilePtRC7CTilePt(&this->m_c1,thePt);
  this->m_seg = theSeg;
  this->m_side = side;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar5 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,this);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  if (lVar5 != 0xfffb) {
    this->m_roomId = (short)lVar5;
    goto LAB_001483b0;
  }
  (*(code *)_5Globs_pRoomManager->__vtable[1].GetRoomManagerImpl)
            ((int)&_5Globs_pRoomManager->__vtable +
             (int)*(short *)&_5Globs_pRoomManager->__vtable[1].RoomManager,this,&r1,&r2,&s1,&s2);
  if ((side == kLeft) || (side == kRight)) {
    if (s1 == side) {
LAB_00148378:
      sVar3 = (*(code *)r1->__vtable->GetObjectDensity)
                        ((int)&r1->__vtable + (int)*(short *)&r1->__vtable->InvalidateRoom);
      this->m_roomId = sVar3;
      goto LAB_001483b0;
    }
    pRVar6 = r2->__vtable;
  }
  else if (side == kTop) {
    if (s1 == kAbove) goto LAB_00148378;
    pRVar6 = r2->__vtable;
  }
  else {
    if (side != kBottom) goto LAB_001483b0;
    if (s1 == kBelow) goto LAB_00148378;
    pRVar6 = r2->__vtable;
  }
  sVar3 = (*(code *)pRVar6->GetObjectDensity)
                    ((int)&r2->__vtable + (int)*(short *)&pRVar6->InvalidateRoom);
  this->m_roomId = sVar3;
LAB_001483b0:
  if (doAlloc) {
    pEVar4 = (EIWallPart2 *)__nw__11EIWallPart2Ui(0x150);
    pEVar4 = __11EIWallPart2R9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelectorRC7CTilePt
                       (pEVar4,&walls,theSeg,side,thePt);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&(this->m_wallInstances).field0_0x0,(uint)pEVar4);
                    /* end of inlined section */
    ___9TileWalls(&walls,2);
  }
  else {
    ___9TileWalls(&walls,2);
  }
  return this;
}

void ERoomWall::~ERoomWall(int __in_chrg) {
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  int *piVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_wallInstances).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  this->__vtable = (ERoomWall__vtable *)_vt_9ERoomWall;
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    piVar1 = (int *)pEVar2->data;
    while( true ) {
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8));
      if (pEVar2 == (ENodeListNode *)0x0) break;
      piVar1 = (int *)pEVar2->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_wallInstances).field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_wallInstances).field0_0x0);
                    /* end of inlined section */
  ___10EILightmap((EILightmap__0_4024 *)&this->m_lightmap,2);
  ___7CTilePt(&this->m_c1,2);
  ___7CTilePt(&this->m_c0,2);
  if ((__in_chrg & 1U) != 0) {
    __dl__9ERoomWallPv(this);
  }
  return;
}

void ERoomWall::GetWallDims(TileWallsSegment seg, DiagonalSideSelector side, EVec3 &v0, EVec3 &v1) {
	EVec3 vdiagoff;
	EVec3 *this;
	EVec3 *this;
	EHouse *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 vline;
	EVec3 vlineNorm;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 vline;
	EVec3 vlineNorm;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  EHouse__26_3190 *pEVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EVec3 vdiagoff;
  EVec3 vline;
  EVec3 vlineNorm;
  
  (v0->field0_0x0).d[2] = 0.0;
  (v1->field0_0x0).d[2] = 0.0;
  pEVar4 = _globals._pCurHouse;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar5 = (v0->field0_0x0).d[1];
  (v0->field0_0x0).d[0] =
       (v0->field0_0x0).d[0] + ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (v0->field0_0x0).d[1] = fVar5 + (pEVar4->m_vHouse_off).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar5 = (v1->field0_0x0).d[1];
  (v1->field0_0x0).d[0] = (v1->field0_0x0).d[0] + (pEVar4->m_vHouse_off).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (v1->field0_0x0).d[1] = fVar5 + (pEVar4->m_vHouse_off).field0_0x0.d[1];
  switch(seg) {
  case kTopLeft:
                    /* end of inlined section */
    (v0->field0_0x0).d[0] = (v0->field0_0x0).d[0] - 0.55;
    (v1->field0_0x0).d[0] = (v1->field0_0x0).d[0] + 0.55;
    (v0->field0_0x0).d[1] = (v0->field0_0x0).d[1] - 0.45;
    (v1->field0_0x0).d[1] = (v1->field0_0x0).d[1] - 0.45;
    break;
  case kTopRight:
                    /* end of inlined section */
    (v0->field0_0x0).d[1] = (v0->field0_0x0).d[1] - 0.55;
    (v1->field0_0x0).d[1] = (v1->field0_0x0).d[1] + 0.55;
    (v0->field0_0x0).d[0] = (v0->field0_0x0).d[0] - 0.45;
    (v1->field0_0x0).d[0] = (v1->field0_0x0).d[0] - 0.45;
    break;
  case kBottomRight:
                    /* end of inlined section */
    (v0->field0_0x0).d[0] = (v0->field0_0x0).d[0] - 0.55;
    (v1->field0_0x0).d[0] = (v1->field0_0x0).d[0] + 0.55;
    (v0->field0_0x0).d[1] = (v0->field0_0x0).d[1] + 0.45;
    (v1->field0_0x0).d[1] = (v1->field0_0x0).d[1] + 0.45;
    break;
  case kBottomLeft:
                    /* end of inlined section */
    (v0->field0_0x0).d[1] = (v0->field0_0x0).d[1] - 0.55;
    (v1->field0_0x0).d[1] = (v1->field0_0x0).d[1] + 0.55;
    (v0->field0_0x0).d[0] = (v0->field0_0x0).d[0] + 0.45;
    (v1->field0_0x0).d[0] = (v1->field0_0x0).d[0] + 0.45;
    break;
  case kHorizDiag:
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar6 = (v0->field0_0x0).d[1];
    fVar8 = (v0->field0_0x0).d[2];
    vlineNorm.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    fVar5 = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    (v0->field0_0x0).d[0] = (v0->field0_0x0).d[0] + 0.5;
    (v0->field0_0x0).d[1] = fVar6 + 0.5;
    (v0->field0_0x0).d[2] = fVar8 + 0.0;
    fVar6 = (v1->field0_0x0).d[1];
    fVar8 = (v1->field0_0x0).d[2];
    (v1->field0_0x0).d[0] = (v1->field0_0x0).d[0] - 0.5;
    (v1->field0_0x0).d[1] = fVar6 - 0.5;
    (v1->field0_0x0).d[2] = fVar8 - 0.0;
                    /* end of inlined section */
    (v0->field0_0x0).d[0] = (v0->field0_0x0).d[0] - 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar8 = (v1->field0_0x0).d[1];
                    /* end of inlined section */
    fVar6 = (v1->field0_0x0).d[0] + 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    (v1->field0_0x0).d[0] = fVar6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vlineNorm.field0_0x0.d[0] = fVar8 - (v0->field0_0x0).d[1];
                    /* end of inlined section */
    vlineNorm.field0_0x0.d[1] = -(fVar6 - (v0->field0_0x0).d[0]);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar6 = sqrtf(vlineNorm.field0_0x0.d[0] * vlineNorm.field0_0x0.d[0] +
                  vlineNorm.field0_0x0.d[1] * vlineNorm.field0_0x0.d[1]);
    if (fVar6 != 0.0) {
      fVar5 = fVar5 / fVar6;
      vlineNorm.field0_0x0.d[0] = vlineNorm.field0_0x0.d[0] * fVar5;
      vlineNorm.field0_0x0.d[1] = vlineNorm.field0_0x0.d[1] * fVar5;
      vlineNorm.field0_0x0.d[2] = vlineNorm.field0_0x0.d[2] * fVar5;
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar6 = vlineNorm.field0_0x0.d[0] * 0.05;
    fVar5 = vlineNorm.field0_0x0.d[1] * 0.05;
    vlineNorm.field0_0x0.d[2] = vlineNorm.field0_0x0.d[2] * 0.05;
                    /* end of inlined section */
    vlineNorm.field0_0x0._0_8_ = CONCAT44(fVar5,fVar6);
    puVar1 = (undefined *)((int)&vlineNorm.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
              (ulong)vlineNorm.field0_0x0._0_8_ >> (7 - uVar2) * 8;
    if (side == kTop) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar8 = (v0->field0_0x0).d[1];
      fVar7 = (v0->field0_0x0).d[2];
      (v0->field0_0x0).d[0] = (v0->field0_0x0).d[0] + fVar6;
      (v0->field0_0x0).d[1] = fVar8 + fVar5;
      (v0->field0_0x0).d[2] = fVar7 + vlineNorm.field0_0x0.d[2];
      fVar6 = (v1->field0_0x0).d[0] + fVar6;
      fVar5 = (v1->field0_0x0).d[1] + fVar5;
                    /* end of inlined section */
      fVar8 = (v1->field0_0x0).d[2] + vlineNorm.field0_0x0.d[2];
    }
    else {
LAB_001489e0:
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar5 = (v0->field0_0x0).d[1];
      fVar8 = (v0->field0_0x0).d[2];
      (v0->field0_0x0).d[0] = (v0->field0_0x0).d[0] - fVar6;
      (v0->field0_0x0).d[1] = fVar5 - vlineNorm.field0_0x0.d[1];
      (v0->field0_0x0).d[2] = fVar8 - vlineNorm.field0_0x0.d[2];
      fVar6 = (v1->field0_0x0).d[0] - fVar6;
      fVar5 = (v1->field0_0x0).d[1] - vlineNorm.field0_0x0.d[1];
      fVar8 = (v1->field0_0x0).d[2] - vlineNorm.field0_0x0.d[2];
    }
    goto LAB_00148a24;
  case kVertDiag:
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar5 = (v0->field0_0x0).d[1];
    fVar6 = (v0->field0_0x0).d[2];
    vlineNorm.field0_0x0.d[2] = 0.0;
    (v0->field0_0x0).d[0] = (v0->field0_0x0).d[0] - 0.5;
    (v0->field0_0x0).d[1] = fVar5 - 0.5;
    (v0->field0_0x0).d[2] = fVar6 - 0.0;
    fVar8 = (v1->field0_0x0).d[2];
    fVar6 = (v1->field0_0x0).d[0] + 0.5;
    fVar5 = (v1->field0_0x0).d[1] + 0.5;
    (v1->field0_0x0).d[0] = fVar6;
    (v1->field0_0x0).d[1] = fVar5;
    (v1->field0_0x0).d[2] = fVar8 + 0.0;
    vlineNorm.field0_0x0.d[0] = fVar5 - (v0->field0_0x0).d[1];
                    /* end of inlined section */
    vlineNorm.field0_0x0.d[1] = -(fVar6 - (v0->field0_0x0).d[0]);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar5 = sqrtf(vlineNorm.field0_0x0.d[0] * vlineNorm.field0_0x0.d[0] +
                  vlineNorm.field0_0x0.d[1] * vlineNorm.field0_0x0.d[1]);
    if (fVar5 != 0.0) {
      fVar5 = 1.0 / fVar5;
      vlineNorm.field0_0x0.d[0] = vlineNorm.field0_0x0.d[0] * fVar5;
      vlineNorm.field0_0x0.d[1] = vlineNorm.field0_0x0.d[1] * fVar5;
      vlineNorm.field0_0x0.d[2] = vlineNorm.field0_0x0.d[2] * fVar5;
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar6 = vlineNorm.field0_0x0.d[0] * 0.05;
    fVar5 = vlineNorm.field0_0x0.d[1] * 0.05;
    vlineNorm.field0_0x0.d[2] = vlineNorm.field0_0x0.d[2] * 0.05;
                    /* end of inlined section */
    vlineNorm.field0_0x0._0_8_ = CONCAT44(fVar5,fVar6);
    puVar1 = (undefined *)((int)&vlineNorm.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
              (ulong)vlineNorm.field0_0x0._0_8_ >> (7 - uVar2) * 8;
    if (side != kLeft) goto LAB_001489e0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar8 = (v0->field0_0x0).d[1];
    fVar7 = (v0->field0_0x0).d[2];
    (v0->field0_0x0).d[0] = (v0->field0_0x0).d[0] + fVar6;
    (v0->field0_0x0).d[1] = fVar8 + fVar5;
    (v0->field0_0x0).d[2] = fVar7 + vlineNorm.field0_0x0.d[2];
    fVar6 = (v1->field0_0x0).d[0] + fVar6;
    fVar5 = (v1->field0_0x0).d[1] + fVar5;
                    /* end of inlined section */
    fVar8 = (v1->field0_0x0).d[2] + vlineNorm.field0_0x0.d[2];
LAB_00148a24:
    (v1->field0_0x0).d[0] = fVar6;
    (v1->field0_0x0).d[1] = fVar5;
    (v1->field0_0x0).d[2] = fVar8;
  }
                    /* end of inlined section */
  return;
}

void ERoomWall::InitLightMap() {
	NLIterator i;
	EVec3 v0;
	EVec3 v1;
	EVec3 vlowerLeft;
	EVec3 vUp;
	EVec3 vLine;
	NLIterator i;
	NLIterator i;
	float x;
	float y;
	EHouse *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  ulong uVar6;
  EInstance *pInstance;
  EVec3 *vXDelta;
  EVec3 *pEVar7;
  ENodeListNode *pEVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  EVec3 v0;
  EVec3 v1;
  EVec3 vlowerLeft;
  EVec3 vUp;
  EVec3 vLine;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar8 = (this->m_wallInstances).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  pEVar7 = &vUp;
  if (pEVar8 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    pInstance = (EInstance *)pEVar8->data;
    while( true ) {
      AddReceiver__10EILightmapP9EInstance((EILightmap__0_4024 *)&this->m_lightmap,pInstance);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar8 = pEVar8->pNext;
                    /* end of inlined section */
      if (pEVar8 == (ENodeListNode *)0x0) break;
      pInstance = (EInstance *)pEVar8->data;
    }
  }
  GetEVec3M__C7CTilePt(&v0,&this->m_c0);
  GetEVec3M__C7CTilePt(&v1,&this->m_c1);
  GetWallDims__9ERoomWall16TileWallsSegmentQ29TileWalls20DiagonalSideSelectorR5EVec3T3
            (this->m_seg,this->m_side,&v0,&v1);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vlowerLeft.field0_0x0.d[0] = v0.field0_0x0.d[0];
  vlowerLeft.field0_0x0.d[1] = v0.field0_0x0.d[1];
  vlowerLeft.field0_0x0.d[2] = 0.0;
  vUp.field0_0x0.d[0] = 0.0;
  vUp.field0_0x0.d[1] = 0.0;
  vUp.field0_0x0.d[2] = 3.0;
  vLine.field0_0x0.d[0] = v1.field0_0x0.d[0] - v0.field0_0x0.d[0];
  vLine.field0_0x0.d[1] = v1.field0_0x0.d[1] - v0.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vLine.field0_0x0.d[2] = v1.field0_0x0.d[2] - v0.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
  switch(this->m_seg) {
  case kTopLeft:
  case kBottomLeft:
    break;
  case kTopRight:
  case kBottomRight:
    vXDelta = &vLine;
    goto LAB_00148bc8;
  default:
    goto LAB_00148bf8;
  case kHorizDiag:
    if (this->m_side != kBottom) {
      if (this->m_side == kTop) {
        SetPosition__10EILightmapRC5EVec3N21
                  ((EILightmap__0_4024 *)&this->m_lightmap,&vlowerLeft,&vLine,pEVar7);
      }
      goto LAB_00148bf8;
    }
    break;
  case kVertDiag:
    if (this->m_side != kRight) {
      if (this->m_side == kLeft) {
        SetPosition__10EILightmapRC5EVec3N21
                  ((EILightmap__0_4024 *)&this->m_lightmap,&vlowerLeft,&vLine,pEVar7);
      }
      goto LAB_00148bf8;
    }
  }
  vXDelta = pEVar7;
  pEVar7 = &vLine;
LAB_00148bc8:
  SetPosition__10EILightmapRC5EVec3N21
            ((EILightmap__0_4024 *)&this->m_lightmap,&vlowerLeft,vXDelta,pEVar7);
LAB_00148bf8:
  bVar5 = Create__10EILightmapii((EILightmap__0_4024 *)&this->m_lightmap,0x20,0x20);
  puVar1 = (undefined *)((int)&(this->m_lightmap).m_vNormal.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  pEVar7 = &(this->m_lightmap).m_vNormal;
  uVar3 = (uint)pEVar7 & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          (long)bVar5 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)pEVar7 - uVar3) >> uVar3 * 8;
  fVar9 = (this->m_lightmap).m_vNormal.field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vNormal).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vNormal & 7;
  puVar4 = (ulong *)((int)&this->m_vNormal - uVar2);
  *puVar4 = uVar6 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vNormal).field0_0x0.d[2] = fVar9;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar10 = (this->m_vNormal).field0_0x0.d[0];
  fVar9 = (this->m_vNormal).field0_0x0.d[1];
  fVar11 = (this->m_vNormal).field0_0x0.d[2];
  fVar9 = sqrtf(fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11);
  if (fVar9 != 0.0) {
    fVar9 = 1.0 / fVar9;
    (this->m_vNormal).field0_0x0.d[0] = (this->m_vNormal).field0_0x0.d[0] * fVar9;
    fVar10 = (this->m_vNormal).field0_0x0.d[2];
    (this->m_vNormal).field0_0x0.d[1] = (this->m_vNormal).field0_0x0.d[1] * fVar9;
    (this->m_vNormal).field0_0x0.d[2] = fVar10 * fVar9;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  InsertInstance__7ERLevelP9EInstanceT1
            ((_globals._pCurHouse)->m_pLevel,&(this->m_lightmap).field0_0x0,(EInstance *)0x0);
  return;
}

void ERoomWall::ComputeLightmap() {
	EILightmap *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
                    /* inlined from /eor/src2/engine/instance/light/e_ilightmap.h */
                    /* end of inlined section */
  if ((this->m_lightmap).m_xRes != 0) {
                    /* end of inlined section */
    Compute__10EILightmap((EILightmap__0_4024 *)&this->m_lightmap);
  }
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  return;
}

void ERoomWall::EnableShadows(bool enable) {
	u32 flags;
	
  uint uVar1;
  
  uVar1 = (this->m_lightmap).field0_0x0.m_instanceFlags;
  if (enable) {
    uVar1 = uVar1 | 1;
  }
  else {
    uVar1 = uVar1 & 0xfffffffe;
  }
  (this->m_lightmap).field0_0x0.m_instanceFlags = uVar1;
  return;
}

void ERoomWall::SetWallUpDownMode(EWallUpDownStateType mode) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EIWallPart2 *pEVar1;
  ENodeListNode *pEVar2;
  
  if (mode == WallHalfUP) {
    EnableShadows__9ERoomWallb(this,false);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar2 = (this->m_wallInstances).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    if (pEVar2 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
      pEVar1 = (EIWallPart2 *)pEVar2->data;
      while( true ) {
        SetWallState__11EIWallPart220EWallUpDownStateType(pEVar1,WallHalfUP);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar2 = (ENodeListNode *)(&pEVar2->data)[2];
                    /* end of inlined section */
        if (pEVar2 == (ENodeListNode *)0x0) break;
        pEVar1 = (EIWallPart2 *)pEVar2->data;
      }
    }
  }
  else {
    if (mode == WallUP) {
      EnableShadows__9ERoomWallb(this,true);
      pEVar2 = (this->m_wallInstances).field0_0x0.m_l.m_pHead;
    }
    else if (mode == WallDown) {
      EnableShadows__9ERoomWallb(this,false);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = (this->m_wallInstances).field0_0x0.m_l.m_pHead;
    }
    else {
      pEVar2 = (this->m_wallInstances).field0_0x0.m_l.m_pHead;
    }
                    /* end of inlined section */
    if (pEVar2 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
      pEVar1 = (EIWallPart2 *)pEVar2->data;
      while( true ) {
        SetWallState__11EIWallPart220EWallUpDownStateType(pEVar1,mode);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar2 = (ENodeListNode *)(&pEVar2->data)[2];
                    /* end of inlined section */
        if (pEVar2 == (ENodeListNode *)0x0) break;
        pEVar1 = (EIWallPart2 *)pEVar2->data;
      }
    }
  }
  return;
}

void ERoomWall::AddTile(CTilePt &tilePt, TileWalls &walls, TileWallsSegment seg, DiagonalSideSelector side, bool doAlloc) {
  EIWallPart2 *pEVar1;
  
  __as__7CTilePtRC7CTilePt(&this->m_c1,tilePt);
  if (doAlloc) {
    pEVar1 = (EIWallPart2 *)__nw__11EIWallPart2Ui(0x150);
    pEVar1 = __11EIWallPart2R9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelectorRC7CTilePt
                       (pEVar1,walls,seg,side,tilePt);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&(this->m_wallInstances).field0_0x0,(uint)pEVar1);
                    /* end of inlined section */
  }
  return;
}

void ERoomWall::DrawWall(ERC *prc) {
  return;
}

void ERoomWall::DrawWallpaperPreview(ERC *prc) {
	EVec3 v0;
	EVec3 v1;
	float offset;
	int tilerep;
	float scaler;
	EVec3 &vVec;
	float scaler;
	ERC *this;
	float x;
	float y;
	float x;
	float y;
	EVec4 *this;
	float x;
	float y;
	float x;
	float y;
	
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  int iVar13;
  float fVar14;
  EVec3 v0;
  EVec3 v1;
  
  GetEVec3M__C7CTilePt(&v0,&this->m_c0);
  GetEVec3M__C7CTilePt(&v1,&this->m_c1);
  GetWallDims__9ERoomWall16TileWallsSegmentQ29TileWalls20DiagonalSideSelectorR5EVec3T3
            (this->m_seg,this->m_side,&v0,&v1);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar14 = (this->m_vNormal).field0_0x0.d[0] * 0.08;
  v0.field0_0x0.d[0] = v0.field0_0x0.d[0] + fVar14;
  v0.field0_0x0.d[1] = v0.field0_0x0.d[1] + (this->m_vNormal).field0_0x0.d[1] * 0.08;
  v0.field0_0x0.d[2] = v0.field0_0x0.d[2] + (this->m_vNormal).field0_0x0.d[2] * 0.08;
  v1.field0_0x0.d[0] = v1.field0_0x0.d[0] + fVar14;
  v1.field0_0x0.d[1] = v1.field0_0x0.d[1] + (this->m_vNormal).field0_0x0.d[1] * 0.08;
  v1.field0_0x0.d[2] = v1.field0_0x0.d[2] + (this->m_vNormal).field0_0x0.d[2] * 0.08;
  fVar14 = sqrtf((v0.field0_0x0.d[0] - v1.field0_0x0.d[0]) *
                 (v0.field0_0x0.d[0] - v1.field0_0x0.d[0]) +
                 (v0.field0_0x0.d[1] - v1.field0_0x0.d[1]) *
                 (v0.field0_0x0.d[1] - v1.field0_0x0.d[1]) +
                 (v0.field0_0x0.d[2] - v1.field0_0x0.d[2]) *
                 (v0.field0_0x0.d[2] - v1.field0_0x0.d[2]));
                    /* end of inlined section */
  iVar13 = (int)fVar14;
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
  if (iVar13 < 1) {
    iVar13 = 1;
  }
  puVar3 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x140,0x10);
                    /* end of inlined section */
  *(undefined4 *)((int)puVar3 + 0x14) = 0x7f;
  *(undefined4 *)((int)puVar3 + 0x3c) = 0x80;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  *(undefined4 *)(puVar3 + 6) = 0x80;
  *(undefined4 *)((int)puVar3 + 0x34) = 0x80;
  *(undefined4 *)(puVar3 + 7) = 0x80;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((int)puVar3 + 0x1c) = 0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(float *)puVar3 = v0.field0_0x0.d[0];
  *(float *)((int)puVar3 + 4) = v0.field0_0x0.d[1];
  *(undefined4 *)(puVar3 + 1) = 0x40400000;
  puVar4 = puVar3 + 10;
  puVar8 = puVar3;
  do {
    puVar7 = puVar8;
    puVar11 = puVar4;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar5 = *(undefined4 *)(puVar7 + 1);
    uVar6 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar9 = *(undefined4 *)(puVar7 + 3);
    uVar10 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar5;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar6;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar9;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar10;
    puVar8 = puVar7 + 4;
    puVar4 = puVar11 + 4;
  } while (puVar8 != puVar3 + 8);
  uVar5 = *(undefined4 *)((int)puVar7 + 0x24);
  uVar6 = *(undefined4 *)(puVar7 + 5);
  uVar9 = *(undefined4 *)((int)puVar7 + 0x2c);
  *(undefined4 *)(puVar11 + 4) = *(undefined4 *)puVar8;
  *(undefined4 *)((int)puVar11 + 0x24) = uVar5;
  *(undefined4 *)(puVar11 + 5) = uVar6;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar9;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(float *)(puVar3 + 10) = v1.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(float *)((int)puVar3 + 0x54) = v1.field0_0x0.d[1];
  *(undefined4 *)(puVar3 + 0xb) = 0x40400000;
  puVar4 = puVar3 + 0x14;
  puVar8 = puVar3;
  do {
    puVar7 = puVar8;
    puVar11 = puVar4;
                    /* end of inlined section */
    uVar5 = *(undefined4 *)((int)puVar7 + 4);
    uVar6 = *(undefined4 *)(puVar7 + 1);
    uVar9 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar1 = puVar7[2];
    uVar10 = *(undefined4 *)(puVar7 + 3);
    uVar12 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(undefined4 *)puVar11 = *(undefined4 *)puVar7;
    *(undefined4 *)((int)puVar11 + 4) = uVar5;
    *(undefined4 *)(puVar11 + 1) = uVar6;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar9;
    *(int *)(puVar11 + 2) = (int)uVar1;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar10;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar12;
    puVar8 = puVar7 + 4;
    puVar4 = puVar11 + 4;
  } while (puVar8 != puVar3 + 8);
  uVar1 = *puVar8;
  uVar5 = *(undefined4 *)(puVar7 + 5);
  uVar6 = *(undefined4 *)((int)puVar7 + 0x2c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar5;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(float *)(puVar3 + 0x14) = v0.field0_0x0.d[0];
  *(float *)((int)puVar3 + 0xa4) = v0.field0_0x0.d[1];
  *(undefined4 *)(puVar3 + 0x15) = 0;
  puVar4 = puVar3;
  puVar8 = puVar3 + 0x1e;
  do {
    puVar11 = puVar8;
    puVar7 = puVar4;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar5 = *(undefined4 *)(puVar7 + 1);
    uVar6 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar9 = *(undefined4 *)(puVar7 + 3);
    uVar10 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar5;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar6;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar9;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar10;
    puVar4 = puVar7 + 4;
    puVar8 = puVar11 + 4;
  } while (puVar4 != puVar3 + 8);
  uVar1 = *puVar4;
  uVar5 = *(undefined4 *)(puVar7 + 5);
  uVar6 = *(undefined4 *)((int)puVar7 + 0x2c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar5;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(float *)(puVar3 + 0x1e) = v1.field0_0x0.d[0];
  *(float *)((int)puVar3 + 0xf4) = v1.field0_0x0.d[1];
  *(undefined4 *)(puVar3 + 0x1f) = 0;
  *(undefined4 *)(puVar3 + 4) = 0x3f800000;
  *(float *)((int)puVar3 + 0x24) = (float)-iVar13;
  *(undefined4 *)(puVar3 + 0xe) = 0x3f800000;
  *(undefined4 *)((int)puVar3 + 0x74) = 0;
  *(undefined4 *)(puVar3 + 0x18) = 0;
  *(float *)((int)puVar3 + 0xc4) = (float)-iVar13;
  *(undefined4 *)(puVar3 + 0x22) = 0;
  *(undefined4 *)((int)puVar3 + 0x114) = 0;
                    /* end of inlined section */
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar3,4);
  return;
}

ERoom* ERoom::ERoom(bool useLightMaps) {
	TNodeList<ERoomWall *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TNodeList<ERoomWall *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TNodeList<ERoomWall *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TNodeList<ERoomWall *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TNodeList<ERoomWall *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TNodeList<ERoomWall *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TNodeList<ERoomWall *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TNodeList<ERoomWall *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TNodeList<ERoomWall *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  (this->m_kBottomLeftWalls).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_kBottomLeftWalls).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  (this->m_kBottomRightWalls).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_kBottomRightWalls).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  (this->m_kTopRightWalls).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_kTopRightWalls).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  (this->m_kTopLeftWalls).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_kTopLeftWalls).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  (this->m_kHorizDiagWallskTop).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_kHorizDiagWallskTop).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  (this->m_kHorizDiagWallskBottom).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_kHorizDiagWallskBottom).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  (this->m_kVertDiagWallskLeft).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_kVertDiagWallskLeft).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  (this->m_kVertDiagWallskRight).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_kVertDiagWallskRight).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  (this->m_fenceWalls).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_fenceWalls).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  __13ERedBlackTree(&(this->m_roomLookup).field0_0x0);
                    /* end of inlined section */
  this->m_listTab[0] = &this->m_kBottomLeftWalls;
  *(int *)&this->m_useLightMaps = (int)useLightMaps;
  this->m_listTab[2] = &this->m_kTopRightWalls;
  this->m_listTab[3] = &this->m_kTopLeftWalls;
  this->m_listTab[4] = &this->m_kHorizDiagWallskTop;
  this->m_listTab[5] = &this->m_kHorizDiagWallskBottom;
  this->m_listTab[6] = &this->m_kVertDiagWallskLeft;
  this->m_listTab[7] = &this->m_kVertDiagWallskRight;
  this->m_listTab[8] = &this->m_fenceWalls;
  this->m_listTab[1] = &this->m_kBottomRightWalls;
  *(undefined4 *)this = 0;
  return this;
}

void ERoom::~ERoom(int __in_chrg) {
	TNodeList<ERoomWall *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	TNodeList<ERoomWall *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator next;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	void *pAddress;
	
  uint uVar1;
  ENodeList *this_00;
  ERedBlackTreeNode *pEVar2;
  ENodeListNode *pEVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  pEVar3 = (this->m_kBottomLeftWalls).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar1 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      (**(code **)(*(int *)(uVar1 + 0x1a4) + 0x14))
                (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x1a4) + 0x10));
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_kBottomLeftWalls).field0_0x0);
  pEVar3 = (this->m_kBottomRightWalls).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar1 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      (**(code **)(*(int *)(uVar1 + 0x1a4) + 0x14))
                (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x1a4) + 0x10));
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_kBottomRightWalls).field0_0x0);
  pEVar3 = (this->m_kTopRightWalls).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar1 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      (**(code **)(*(int *)(uVar1 + 0x1a4) + 0x14))
                (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x1a4) + 0x10));
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_kTopRightWalls).field0_0x0);
  pEVar3 = (this->m_kTopLeftWalls).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar1 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      (**(code **)(*(int *)(uVar1 + 0x1a4) + 0x14))
                (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x1a4) + 0x10));
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_kTopLeftWalls).field0_0x0);
  pEVar3 = (this->m_kHorizDiagWallskTop).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar1 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      (**(code **)(*(int *)(uVar1 + 0x1a4) + 0x14))
                (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x1a4) + 0x10));
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_kHorizDiagWallskTop).field0_0x0);
  pEVar3 = (this->m_kHorizDiagWallskBottom).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar1 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      (**(code **)(*(int *)(uVar1 + 0x1a4) + 0x14))
                (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x1a4) + 0x10));
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_kHorizDiagWallskBottom).field0_0x0);
  pEVar3 = (this->m_kVertDiagWallskLeft).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar1 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      (**(code **)(*(int *)(uVar1 + 0x1a4) + 0x14))
                (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x1a4) + 0x10));
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_kVertDiagWallskLeft).field0_0x0);
  pEVar3 = (this->m_kVertDiagWallskRight).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar1 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      (**(code **)(*(int *)(uVar1 + 0x1a4) + 0x14))
                (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x1a4) + 0x10));
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_kVertDiagWallskRight).field0_0x0);
  pEVar3 = (this->m_fenceWalls).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar1 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      (**(code **)(*(int *)(uVar1 + 0x1a4) + 0x14))
                (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x1a4) + 0x10));
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_fenceWalls).field0_0x0);
  pEVar2 = (this->m_roomLookup).field0_0x0.m_list.m_pHead;
  if (pEVar2 != (ERedBlackTreeNode *)0x0) {
    this_00 = (ENodeList *)pEVar2->value;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      if (this_00 != (ENodeList *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        RemoveAll__9ENodeList(this_00);
        _memmanFree__FPv(this_00);
      }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
      this_00 = (ENodeList *)pEVar2->value;
    }
  }
  RemoveAll__13ERedBlackTree(&(this->m_roomLookup).field0_0x0);
  while (_11EIWallPart2_m_pWallDownShader != (ERShader *)0x0) {
    DelRef__9EResource(&_11EIWallPart2_m_pWallDownShader->field0_0x0);
    _11EIWallPart2_m_pWallDownShader = (ERShader *)0x0;
  }
  *(undefined4 *)this = 0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  RemoveAll__13ERedBlackTree(&(this->m_roomLookup).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_fenceWalls).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_kVertDiagWallskRight).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_kVertDiagWallskLeft).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_kHorizDiagWallskBottom).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_kHorizDiagWallskTop).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_kTopLeftWalls).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_kTopRightWalls).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_kBottomRightWalls).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_kBottomLeftWalls).field0_0x0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ComputeLightmapsForList(ERoomWallList &list) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (list->field0_0x0).m_l.m_pHead; pEVar1 != (ENodeListNode *)0x0;
      pEVar1 = pEVar1->pNext) {
                    /* end of inlined section */
    ComputeLightmap__9ERoomWall((ERoomWall *)pEVar1->data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  }
  return;
}

void ERoom::ComputeLightmapsList(int which) {
  ComputeLightmapsForList__FRt9TNodeList1ZP9ERoomWall(this->m_listTab[which]);
  return;
}

void ERoomWall::BeginLmCompute() {
	NLIterator itr;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_wallInstances).field0_0x0.m_l.m_pHead; pEVar1 != (ENodeListNode *)0x0;
      pEVar1 = (ENodeListNode *)(&pEVar1->data)[2]) {
                    /* end of inlined section */
    BeginLmCompute__11EIWallPart2((EIWallPart2 *)pEVar1->data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  }
  return;
}

void ERoomWall::EndLmCompute() {
	NLIterator itr;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_wallInstances).field0_0x0.m_l.m_pHead; pEVar1 != (ENodeListNode *)0x0;
      pEVar1 = (ENodeListNode *)(&pEVar1->data)[2]) {
                    /* end of inlined section */
    EndLmCompute__11EIWallPart2((EIWallPart2 *)pEVar1->data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  }
  return;
}

void ERoom::BeginLmCompute() {
	int i;
	NLIterator itr;
	NLIterator i;
	NLIterator i;
	
  ERoomWall *pEVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined4 *)this = 1;
  iVar2 = 0;
  while( true ) {
    iVar3 = iVar3 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    for (pEVar1 = **(ERoomWall ***)((int)this->m_listTab + iVar2); pEVar1 != (ERoomWall *)0x0;
        pEVar1 = *(ERoomWall **)&(pEVar1->m_vNormal).field0_0x0) {
                    /* end of inlined section */
      BeginLmCompute__9ERoomWall(*(ERoomWall **)pEVar1);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    }
    if (7 < iVar3) break;
    iVar2 = iVar3 * 4;
  }
  return;
}

void ERoom::EndLmCompute() {
	int i;
	NLIterator itr;
	NLIterator i;
	NLIterator i;
	
  ERoomWall *pEVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    iVar3 = iVar3 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    for (pEVar1 = **(ERoomWall ***)((int)this->m_listTab + iVar2); pEVar1 != (ERoomWall *)0x0;
        pEVar1 = *(ERoomWall **)&(pEVar1->m_vNormal).field0_0x0) {
                    /* end of inlined section */
      EndLmCompute__9ERoomWall(*(ERoomWall **)pEVar1);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    }
    if (7 < iVar3) break;
    iVar2 = iVar3 * 4;
  }
  return;
}

void ERoom::ComputeLightmaps() {
  if (*(int *)&this->m_useLightMaps != 0) {
    ComputeLightmapsForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kBottomLeftWalls);
    ComputeLightmapsForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kBottomRightWalls);
    ComputeLightmapsForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kTopRightWalls);
    ComputeLightmapsForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kTopLeftWalls);
    ComputeLightmapsForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kHorizDiagWallskTop);
    ComputeLightmapsForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kHorizDiagWallskBottom);
    ComputeLightmapsForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kVertDiagWallskLeft);
    ComputeLightmapsForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kVertDiagWallskRight);
  }
  return;
}

void EnableShadowsForList(ERoomWallList &list, bool enable) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  ERoomWall *this;
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (list->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    this = (ERoomWall *)pEVar1->data;
    while( true ) {
      EnableShadows__9ERoomWallb(this,enable);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      this = (ERoomWall *)pEVar1->data;
    }
  }
  return;
}

void ERoom::EnableShadows(bool enable) {
  EnableShadowsForList__FRt9TNodeList1ZP9ERoomWallb(&this->m_kBottomLeftWalls,enable);
  EnableShadowsForList__FRt9TNodeList1ZP9ERoomWallb(&this->m_kBottomRightWalls,enable);
  EnableShadowsForList__FRt9TNodeList1ZP9ERoomWallb(&this->m_kTopRightWalls,enable);
  EnableShadowsForList__FRt9TNodeList1ZP9ERoomWallb(&this->m_kTopLeftWalls,enable);
  EnableShadowsForList__FRt9TNodeList1ZP9ERoomWallb(&this->m_kHorizDiagWallskTop,enable);
  EnableShadowsForList__FRt9TNodeList1ZP9ERoomWallb(&this->m_kHorizDiagWallskBottom,enable);
  EnableShadowsForList__FRt9TNodeList1ZP9ERoomWallb(&this->m_kVertDiagWallskLeft,enable);
  EnableShadowsForList__FRt9TNodeList1ZP9ERoomWallb(&this->m_kVertDiagWallskRight,enable);
  return;
}

void ERoom::InitRoomLookupTab() {
	TRedBlackTree<int,TNodeList<ERoomWall *> *> *this;
	RBIterator i;
	ERedBlackTree *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	RBIterator i;
	RBIterator next;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	int i;
	ERoomWallList *plist;
	NLIterator i;
	u32 roomid;
	NLIterator i;
	NLIterator i;
	TRedBlackTree<int,TNodeList<ERoomWall *> *> *this;
	int key;
	int key;
	
  ushort uVar1;
  uint **ppuVar2;
  uint data;
  ERedBlackTreeNode *pEVar3;
  int iVar4;
  undefined1 *puVar5;
  ENodeList *pEVar6;
  uint *puVar7;
  int iVar8;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  pEVar3 = (this->m_roomLookup).field0_0x0.m_list.m_pHead;
  if (pEVar3 != (ERedBlackTreeNode *)0x0) {
    pEVar6 = (ENodeList *)pEVar3->value;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      if (pEVar6 != (ENodeList *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        RemoveAll__9ENodeList(pEVar6);
        _memmanFree__FPv(pEVar6);
      }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      if (pEVar3 == (ERedBlackTreeNode *)0x0) break;
      pEVar6 = (ENodeList *)pEVar3->value;
    }
  }
  RemoveAll__13ERedBlackTree(&(this->m_roomLookup).field0_0x0);
                    /* end of inlined section */
  iVar8 = 0;
  iVar4 = 0;
  while( true ) {
    ppuVar2 = *(uint ***)((int)this->m_listTab + iVar4);
    iVar8 = iVar8 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    if ((ppuVar2 != (uint **)0x0) && (puVar7 = *ppuVar2, puVar7 != (uint *)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      data = *puVar7;
      while( true ) {
                    /* end of inlined section */
        uVar1 = *(ushort *)(data + 0x1a0);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        puVar5 = Find__C13ERedBlackTreeUiPUi
                           (&(this->m_roomLookup).field0_0x0,(uint)uVar1,(uint *)0x0);
                    /* end of inlined section */
        if (puVar5 == (undefined1 *)0x0) {
          pEVar6 = (ENodeList *)__builtin_new(8);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
          (pEVar6->m_l).m_pTail = (ENodeListNode *)0x0;
          (pEVar6->m_l).m_pHead = (ENodeListNode *)0x0;
          Insert__13ERedBlackTreeUiUib
                    (&(this->m_roomLookup).field0_0x0,(uint)uVar1,(uint)pEVar6,false);
          AddTail__9ENodeListUi(pEVar6,data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          puVar7 = (uint *)puVar7[2];
        }
        else {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
          AddTail__9ENodeListUi(*(ENodeList **)(puVar5 + 0x1c),data);
                    /* end of inlined section */
          puVar7 = (uint *)puVar7[2];
        }
                    /* end of inlined section */
        if (puVar7 == (uint *)0x0) break;
        data = *puVar7;
      }
    }
    if (7 < iVar8) break;
    iVar4 = iVar8 * 4;
  }
  return;
}

s32 ERoomWall::GetWallPaperCost(s32 costNew, UInt16 room) {
	s32 totalCost;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	u32 resid;
	int j;
	unsigned int n;
	unsigned int n;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  int iVar3;
  uint uVar4;
  WallTile *pWVar5;
  ENodeListNode *pEVar6;
  WallTile **ppWVar7;
  float fVar8;
  
  if (costNew == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar6 = (this->m_wallInstances).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    iVar3 = 0;
    if (pEVar6 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      uVar4 = pEVar6->data;
      while( true ) {
        pEVar2 = pEVar6->pNext;
        if ((uVar4 != 0) && (*(int *)(uVar4 + 0x138) != 0)) {
                    /* inlined from /eor/src2/engine/resource/e_resource.h */
          ppWVar7 = ((_globals._pWallSet)->field0_0x0).pData;
          if (ppWVar7 == (WallTile **)0x0) {
            pWVar5 = (WallTile *)0x0;
          }
          else {
            pWVar5 = ppWVar7[-1];
          }
                    /* end of inlined section */
          pEVar2 = pEVar6->pNext;
          if (0 < (int)pWVar5) {
            ppWVar7 = ((_globals._pWallSet)->field0_0x0).pData;
            do {
                    /* end of inlined section */
              if (*(uint *)(*(int *)(uVar4 + 0x138) + 0xc) == (*ppWVar7)->shaderID) {
                    /* end of inlined section */
                uVar1 = (*ppWVar7)->cost;
                if ((int)uVar1 < 0) {
                  fVar8 = (float)(uVar1 & 1 | uVar1 >> 1);
                  fVar8 = fVar8 + fVar8;
                }
                else {
                  fVar8 = (float)uVar1;
                }
                iVar3 = iVar3 - (int)(fVar8 * 0.8);
              }
              pWVar5 = (WallTile *)((int)&pWVar5[-1].category + 3);
              ppWVar7 = ppWVar7 + 1;
            } while (pWVar5 != (WallTile *)0x0);
          }
        }
        pEVar6 = pEVar2;
                    /* end of inlined section */
        if (pEVar6 == (ENodeListNode *)0x0) break;
        uVar4 = pEVar6->data;
      }
    }
  }
  else {
    iVar3 = CountWalls__9ERoomWall(this);
    iVar3 = costNew * iVar3;
  }
  return iVar3;
}

s32 ERoom::GetWallPaperCost(u32 newShdId, UInt16 room) {
	s32 costNew;
	s32 totalCost;
	int j;
	unsigned int n;
	unsigned int n;
	int key;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  WallTile **ppWVar1;
  WallTile *pWVar2;
  ERoomWall *pEVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  WallTile *pWVar7;
  uint costNew;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  costNew = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  ppWVar1 = ((_globals._pWallSet)->field0_0x0).pData;
  pWVar7 = (WallTile *)0x0;
  if (ppWVar1 != (WallTile **)0x0) {
    pWVar7 = ppWVar1[-1];
  }
                    /* end of inlined section */
  if (0 < (int)pWVar7) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    ppWVar1 = ((_globals._pWallSet)->field0_0x0).pData;
                    /* end of inlined section */
    pWVar2 = *ppWVar1;
    iVar6 = 1;
    if (newShdId == pWVar2->shaderID) {
      costNew = pWVar2->cost;
    }
    else {
      do {
        if ((int)pWVar7 <= iVar6) goto LAB_00149cd4;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        pWVar2 = ppWVar1[iVar6];
        iVar6 = iVar6 + 1;
      } while (newShdId != pWVar2->shaderID);
      costNew = pWVar2->cost;
    }
  }
LAB_00149cd4:
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  puVar4 = Find__C13ERedBlackTreeUiPUi
                     (&(this->m_roomLookup).field0_0x0,(int)room & 0xffffU,(uint *)0x0);
                    /* end of inlined section */
  if (puVar4 == (undefined1 *)0x0) {
    iVar6 = 0;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    if (*(ERoomWall ***)(puVar4 + 0x1c) == (ERoomWall **)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
      for (pEVar3 = **(ERoomWall ***)(puVar4 + 0x1c); pEVar3 != (ERoomWall *)0x0;
          pEVar3 = *(ERoomWall **)&(pEVar3->m_vNormal).field0_0x0) {
                    /* end of inlined section */
        iVar5 = GetWallPaperCost__9ERoomWalliUs
                          (*(ERoomWall **)pEVar3,costNew,(short)((int)room & 0xffffU));
                    /* end of inlined section */
        iVar6 = iVar6 + iVar5;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      }
    }
  }
  return iVar6;
}

void ERoom::DrawWallpaperPreview(ERC *prc, UInt16 room) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  undefined1 *puVar1;
  ERoomWall *this_00;
  ERoomWall *pEVar2;
  
  (*(code *)prc->__vtable->ZTest)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  puVar1 = Find__C13ERedBlackTreeUiPUi
                     (&(this->m_roomLookup).field0_0x0,(int)room & 0xffff,(uint *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if (((puVar1 != (undefined1 *)0x0) && (*(ERoomWall ***)(puVar1 + 0x1c) != (ERoomWall **)0x0)) &&
     (pEVar2 = **(ERoomWall ***)(puVar1 + 0x1c), pEVar2 != (ERoomWall *)0x0)) {
                    /* end of inlined section */
    this_00 = *(ERoomWall **)pEVar2;
    while( true ) {
      DrawWallpaperPreview__9ERoomWallP3ERC(this_00,prc);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = *(ERoomWall **)&(pEVar2->m_vNormal).field0_0x0;
                    /* end of inlined section */
      if (pEVar2 == (ERoomWall *)0x0) break;
      this_00 = *(ERoomWall **)pEVar2;
    }
  }
  return;
}

void DrawList(ERC *prc, ERoomWallList &list) {
  return;
}

void ERoom::DrawWallsDebug(ERC *prc) {
  return;
}

bool EIWallPart2::CollideWallListWithCusorForHalfDown(EVec3 &v0, EVec3 &v1, EVec3 &vWallNorm) {
	EBound3 wallBounds;
	EVec3 vdir;
	EVec3 vLine;
	EVec3 vNorm;
	EVec3 vLToVMax;
	EVec3 vLToVMin;
	EInstance *this;
	EVec3 &vVec;
	EVec3 *this;
	EVec3 &v;
	EVec3 &v;
	EVec3 &v;
	
  EOTData *pEVar1;
  undefined *puVar2;
  EVec3 *pEVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  bool bVar7;
  ulong in_v0;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  EBound3 wallBounds;
  EVec3 vdir;
  EVec3 vLine;
  EVec3 vNorm;
  EVec3 vLToVMax;
  EVec3 vLToVMin;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar11 = (vWallNorm->field0_0x0).d[1];
  puVar2 = (undefined *)((int)&(this->field0_0x0).field0_0x0.m_otd.m_bPos.vMin.field0_0x0 + 7);
  uVar4 = (uint)puVar2 & 7;
  pEVar1 = &(this->field0_0x0).field0_0x0.m_otd;
  uVar5 = (uint)pEVar1 & 7;
  uVar8 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
          *(ulong *)((int)pEVar1 - uVar5) >> uVar5 * 8;
  puVar2 = (undefined *)((int)&wallBounds.vMin.field0_0x0 + 7);
  uVar4 = (uint)puVar2 & 7;
  puVar6 = (ulong *)(puVar2 + -uVar4);
  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar8 >> (7 - uVar4) * 8;
  fVar10 = (vWallNorm->field0_0x0).d[0];
  puVar2 = (undefined *)((int)&(this->field0_0x0).field0_0x0.m_otd.m_bPos.vMax.field0_0x0 + 7);
  uVar4 = (uint)puVar2 & 7;
  pEVar3 = &(this->field0_0x0).field0_0x0.m_otd.m_bPos.vMax;
  uVar5 = (uint)pEVar3 & 7;
  uVar9 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
          uVar8 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
          *(ulong *)((int)pEVar3 - uVar5) >> uVar5 * 8;
  puVar2 = (undefined *)((int)&wallBounds.vMax.field0_0x0 + 7);
  uVar4 = (uint)puVar2 & 7;
  puVar6 = (ulong *)(puVar2 + -uVar4);
  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
  uVar4 = (uint)&wallBounds.vMax & 7;
  puVar6 = (ulong *)((int)&wallBounds.vMax - uVar4);
  *puVar6 = uVar9 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  fVar11 = fVar11 * 0.05;
  fVar10 = fVar10 * 0.05;
  fVar12 = (v0->field0_0x0).d[0];
  fVar13 = (v0->field0_0x0).d[1];
  wallBounds.vMin.field0_0x0.d[0] = (float)uVar8;
  fVar15 = (v1->field0_0x0).d[1] - fVar13;
  wallBounds.vMin.field0_0x0.d[1] = (float)(uVar8 >> 0x20);
                    /* end of inlined section */
  fVar14 = -((v1->field0_0x0).d[0] - fVar12);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  if (0.0 <= ((wallBounds.vMax.field0_0x0.d[0] - fVar10) - fVar12) * fVar15 +
             ((wallBounds.vMax.field0_0x0.d[1] - fVar11) - fVar13) * fVar14) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    bVar7 = true;
    if (0.0 <= ((wallBounds.vMin.field0_0x0.d[0] - fVar10) - fVar12) * fVar15 +
               ((wallBounds.vMin.field0_0x0.d[1] - fVar11) - fVar13) * fVar14) {
      bVar7 = false;
    }
  }
  else {
    bVar7 = true;
  }
  return bVar7;
}

void SetAllUpOrDownForList(bool up, ERoomWallList &list) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	EHouse *this;
	
  ERoomWall *this;
  bool enable;
  ENodeListNode *pEVar1;
  EWallUpDownStateType mode;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (list->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
    mode = WallDown;
    if (up) {
      mode = WallUP;
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this = (ERoomWall *)pEVar1->data;
    while( true ) {
      SetWallUpDownMode__9ERoomWall20EWallUpDownStateType(this,mode);
      enable = false;
      if (up) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
        enable = *(int *)&(_globals._pCurHouse)->m_bShadows != 0;
      }
      EnableShadows__9ERoomWallb(this,enable);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      this = (ERoomWall *)pEVar1->data;
    }
  }
  return;
}

void ERoom::SetWallState(EWallUpDownStateType state) {
	bool bWallUP;
	bool bHalfUp;
	
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar1 = state == WallUP;
  bVar2 = state == WallHalfUP;
  bVar3 = false;
  if ((bVar1) || (bVar2)) {
    bVar3 = true;
  }
  SetAllUpOrDownForList__FbRt9TNodeList1ZP9ERoomWall(bVar3,&this->m_kBottomLeftWalls);
  bVar3 = false;
  if ((bVar1) || (bVar2)) {
    bVar3 = true;
  }
  SetAllUpOrDownForList__FbRt9TNodeList1ZP9ERoomWall(bVar3,&this->m_kBottomRightWalls);
  bVar3 = false;
  if ((bVar1) || (bVar2)) {
    bVar3 = true;
  }
  SetAllUpOrDownForList__FbRt9TNodeList1ZP9ERoomWall(bVar3,&this->m_kTopRightWalls);
  bVar3 = false;
  if ((bVar1) || (bVar2)) {
    bVar3 = true;
  }
  SetAllUpOrDownForList__FbRt9TNodeList1ZP9ERoomWall(bVar3,&this->m_kTopLeftWalls);
  bVar3 = false;
  if ((bVar1) || (bVar2)) {
    bVar3 = true;
  }
  SetAllUpOrDownForList__FbRt9TNodeList1ZP9ERoomWall(bVar3,&this->m_kHorizDiagWallskTop);
  bVar3 = false;
  if ((bVar1) || (bVar2)) {
    bVar3 = true;
  }
  SetAllUpOrDownForList__FbRt9TNodeList1ZP9ERoomWall(bVar3,&this->m_kHorizDiagWallskBottom);
  bVar3 = false;
  if ((bVar1) || (bVar2)) {
    bVar3 = true;
  }
  SetAllUpOrDownForList__FbRt9TNodeList1ZP9ERoomWall(bVar3,&this->m_kVertDiagWallskLeft);
  bVar3 = false;
  if ((bVar1) || (bVar2)) {
    bVar3 = true;
  }
  SetAllUpOrDownForList__FbRt9TNodeList1ZP9ERoomWall(bVar3,&this->m_kVertDiagWallskRight);
  return;
}

bool DoHalfUpCollisonEIWallPart2ForList(EVec3 *vList, int nVecPairs, EVec3 &vNorm, EISimsWallPartPtrList &list) {
	bool gotCollis;
	NLIterator i;
	bool gotCollisOnTile;
	int nPoints;
	NLIterator i;
	NLIterator i;
	int n;
	
  EIWallPart2 *this;
  bool bVar1;
  bool bVar2;
  EVec3 *v0;
  EVec3 *v1;
  int iVar3;
  ENodeListNode *pEVar4;
  bool gotCollis;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar4 = (list->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  gotCollis = false;
  if (pEVar4 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this = (EIWallPart2 *)pEVar4->data;
    gotCollis = false;
    while( true ) {
                    /* end of inlined section */
      bVar1 = true;
      iVar3 = 0;
      if (0 < nVecPairs << 1) {
        v1 = vList + 1;
        v0 = vList;
        do {
          bVar2 = CollideWallListWithCusorForHalfDown__11EIWallPart2RC5EVec3N21(this,v0,v1,vNorm);
          if (!bVar2) {
            bVar1 = false;
            SetWallState__11EIWallPart220EWallUpDownStateType(this,WallUP);
          }
          iVar3 = iVar3 + 2;
          v1 = v1 + 2;
          v0 = v0 + 2;
        } while (iVar3 < nVecPairs << 1);
      }
      if (bVar1) {
        gotCollis = true;
        SetWallState__11EIWallPart220EWallUpDownStateType(this,WallHalfUP);
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar4 = (ENodeListNode *)(&pEVar4->data)[2];
                    /* end of inlined section */
      if (pEVar4 == (ENodeListNode *)0x0) break;
      this = (EIWallPart2 *)pEVar4->data;
    }
  }
  return gotCollis;
}

void DoHalfUpCollisonForList(EVec3 *vList, int nVecPairs, ERoomWallList &list) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (list->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar1 = pEVar2->data;
    while( true ) {
                    /* end of inlined section */
      DoHalfUpCollisonEIWallPart2ForList__FP5EVec3iR5EVec3Rt9TNodeList1ZP11EIWallPart2
                (vList,nVecPairs,(EVec3 *)(uVar1 + 8),(TNodeList_EIWallPart2___ *)(uVar1 + 400));
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar2->data;
    }
  }
  return;
}

void ERoom::UpdateWallsHalfUp(int player) {
	EHouse *this;
	EVec3 vCurs;
	EVec3 &vEye;
	EVec3 vEyetoCursor;
	EVec3 vEyetoCursorPerp;
	float cursrad;
	float cursrad2;
	EVec3 vPoints[6];
	EVec3 &vB;
	EVec3 *this;
	EVec3 &v;
	float scaler;
	EVec3 *this;
	float scaler;
	float scaler;
	float scaler;
	EVec3 *this;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ESimsCursor__67_3982 *pEVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  EVec3 vCurs;
  float local_150;
  float local_14c;
  float local_148;
  EVec3 vEyetoCursor;
  EVec3 vEyetoCursorPerp;
  EVec3 vPoints [6];
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  if ((_globals._pCurHouse)->m_wallUpDownState == WallHalfUP) {
    pEVar4 = _globals._pCursor[player];
    if (pEVar4 == (ESimsCursor__67_3982 *)0x0) {
      vCurs.field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vCurs.field0_0x0._0_8_ = 0;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
      vCurs.field0_0x0._0_8_ = *(undefined8 *)&(pEVar4->m_vPos).field0_0x0;
                    /* end of inlined section */
      vCurs.field0_0x0.d[2] = (pEVar4->m_vPos).field0_0x0.d[2];
    }
                    /* end of inlined section */
    if (_globals._pCurCam == (ESimsCam *)0x0) {
      local_148 = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_14c = 0.0;
      local_150 = 0.0;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
      local_150 = ((_globals._pCurCam)->m_vEye).field0_0x0.d[0];
      local_14c = ((_globals._pCurCam)->m_vEye).field0_0x0.d[1];
      local_148 = ((_globals._pCurCam)->m_vEye).field0_0x0.d[2];
                    /* end of inlined section */
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar9 = vCurs.field0_0x0.d[1] + (local_14c - vCurs.field0_0x0.d[1]) * 0.01;
    vCurs.field0_0x0.d[2] = vCurs.field0_0x0.d[2] + (local_148 - vCurs.field0_0x0.d[2]) * 0.01;
    fVar10 = vCurs.field0_0x0.d[0] + (local_150 - vCurs.field0_0x0.d[0]) * 0.01;
    vCurs.field0_0x0._0_8_ = CONCAT44(fVar9,fVar10);
    puVar1 = (undefined *)((int)&vCurs.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | (ulong)vCurs.field0_0x0._0_8_ >> (7 - uVar5) * 8;
    vEyetoCursorPerp.field0_0x0.d[0] = fVar9 - local_14c;
                    /* end of inlined section */
    vEyetoCursorPerp.field0_0x0.d[1] = -(fVar10 - local_150);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vEyetoCursorPerp.field0_0x0.d[2] = 0.0;
    fVar9 = sqrtf(vEyetoCursorPerp.field0_0x0.d[0] * vEyetoCursorPerp.field0_0x0.d[0] +
                  vEyetoCursorPerp.field0_0x0.d[1] * vEyetoCursorPerp.field0_0x0.d[1]);
    if (fVar9 != 0.0) {
      fVar9 = 1.0 / fVar9;
      vEyetoCursorPerp.field0_0x0.d[0] = vEyetoCursorPerp.field0_0x0.d[0] * fVar9;
      vEyetoCursorPerp.field0_0x0.d[2] = fVar9 * 0.0;
      vEyetoCursorPerp.field0_0x0.d[1] = vEyetoCursorPerp.field0_0x0.d[1] * fVar9;
    }
                    /* end of inlined section */
                    /* end of inlined section */
    iVar8 = 4;
    do {
      bVar2 = iVar8 != -1;
      iVar8 = iVar8 + -1;
    } while (bVar2);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vPoints[0].field0_0x0._8_4_ = local_148 + vEyetoCursorPerp.field0_0x0.d[2] * 20.0;
                    /* end of inlined section */
    vPoints[0].field0_0x0._0_8_ =
         CONCAT44(local_14c + vEyetoCursorPerp.field0_0x0.d[1] * 20.0,
                  local_150 + vEyetoCursorPerp.field0_0x0.d[0] * 20.0);
    puVar1 = (undefined *)((int)&vPoints[0].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | vPoints[0].field0_0x0._0_8_ >> (7 - uVar5) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vPoints[2].field0_0x0._8_4_ = vCurs.field0_0x0.d[2] + vEyetoCursorPerp.field0_0x0.d[2] * 4.0;
                    /* end of inlined section */
    uVar7 = CONCAT44(vCurs.field0_0x0.d[1] + vEyetoCursorPerp.field0_0x0.d[1] * 4.0,
                     vCurs.field0_0x0.d[0] + vEyetoCursorPerp.field0_0x0.d[0] * 4.0);
    puVar1 = (undefined *)((int)&vPoints[1].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
    uVar5 = (uint)(vPoints + 1) & 7;
    puVar6 = (ulong *)((int)(vPoints + 1) - uVar5);
    *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    vPoints[1].field0_0x0._8_4_ = vPoints[2].field0_0x0._8_4_;
    puVar1 = (undefined *)((int)&vPoints[1].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    uVar3 = (uint)(vPoints + 1) & 7;
    vPoints[2].field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
         uVar7 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)(vPoints + 1) - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&vPoints[2].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | vPoints[2].field0_0x0._0_8_ >> (7 - uVar5) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vPoints[4].field0_0x0._8_4_ = vCurs.field0_0x0.d[2] - vEyetoCursorPerp.field0_0x0.d[2] * 4.0;
                    /* end of inlined section */
    uVar7 = CONCAT44(vCurs.field0_0x0.d[1] - vEyetoCursorPerp.field0_0x0.d[1] * 4.0,
                     vCurs.field0_0x0.d[0] - vEyetoCursorPerp.field0_0x0.d[0] * 4.0);
    puVar1 = (undefined *)((int)&vPoints[3].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
    uVar5 = (uint)(vPoints + 3) & 7;
    puVar6 = (ulong *)((int)(vPoints + 3) - uVar5);
    *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    vPoints[3].field0_0x0._8_4_ = vPoints[4].field0_0x0._8_4_;
    puVar1 = (undefined *)((int)&vPoints[3].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    uVar3 = (uint)(vPoints + 3) & 7;
    vPoints[4].field0_0x0._0_8_ =
         (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
         uVar7 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)(vPoints + 3) - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&vPoints[4].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | vPoints[4].field0_0x0._0_8_ >> (7 - uVar5) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vPoints[5].field0_0x0._8_4_ = local_148 - vEyetoCursorPerp.field0_0x0.d[2] * 20.0;
                    /* end of inlined section */
    uVar7 = CONCAT44(local_14c - vEyetoCursorPerp.field0_0x0.d[1] * 20.0,
                     local_150 - vEyetoCursorPerp.field0_0x0.d[0] * 20.0);
    puVar1 = (undefined *)((int)&vPoints[5].field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar7 >> (7 - uVar5) * 8;
    uVar5 = (uint)(vPoints + 5) & 7;
    puVar6 = (ulong *)((int)(vPoints + 5) - uVar5);
    *puVar6 = uVar7 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    DoHalfUpCollisonForList__FP5EVec3iRt9TNodeList1ZP9ERoomWall(vPoints,3,&this->m_kBottomLeftWalls)
    ;
    DoHalfUpCollisonForList__FP5EVec3iRt9TNodeList1ZP9ERoomWall
              (vPoints,3,&this->m_kBottomRightWalls);
    DoHalfUpCollisonForList__FP5EVec3iRt9TNodeList1ZP9ERoomWall(vPoints,3,&this->m_kTopRightWalls);
    DoHalfUpCollisonForList__FP5EVec3iRt9TNodeList1ZP9ERoomWall(vPoints,3,&this->m_kTopLeftWalls);
    DoHalfUpCollisonForList__FP5EVec3iRt9TNodeList1ZP9ERoomWall
              (vPoints,3,&this->m_kHorizDiagWallskTop);
    DoHalfUpCollisonForList__FP5EVec3iRt9TNodeList1ZP9ERoomWall
              (vPoints,3,&this->m_kHorizDiagWallskBottom);
    DoHalfUpCollisonForList__FP5EVec3iRt9TNodeList1ZP9ERoomWall
              (vPoints,3,&this->m_kVertDiagWallskLeft);
    DoHalfUpCollisonForList__FP5EVec3iRt9TNodeList1ZP9ERoomWall
              (vPoints,3,&this->m_kVertDiagWallskRight);
  }
  return;
}

void ERoom::Init() {
	int wallcount;
	int tilecount;
	EHouse *this;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int wallcount;
  int tilecount;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  while (_11EIWallPart2_m_pWallDownShader != (ERShader *)0x0) {
    DelRef__9EResource(&_11EIWallPart2_m_pWallDownShader->field0_0x0);
    _11EIWallPart2_m_pWallDownShader = (ERShader *)0x0;
  }
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  _11EIWallPart2_m_pWallDownShader =
       (ERShader *)
       AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xb745aa7c,(EFile *)0x0,0);
                    /* end of inlined section */
  wallcount = 0;
  tilecount = 0;
  ProcStandardWalls__5ERoombRiT2T1(this,true,&wallcount,&tilecount,true);
  ProcStandardWalls__5ERoombRiT2T1(this,false,&wallcount,&tilecount,true);
  ProcDiagonalWalls__5ERoomRiT1b(this,&wallcount,&tilecount,true);
  InitRoomLookupTab__5ERoom(this);
  if (*(int *)&this->m_useLightMaps != 0) {
    InitLightmaps__5ERoom(this);
  }
  _9ERoomWall_m_wallCount = wallcount;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  _9ERoomWall_m_tileCount = tilecount;
  SetWallState__5ERoom20EWallUpDownStateType(this,(_globals._pCurHouse)->m_wallUpDownState);
  UpdateWallsHalfUp__5ERoomi(this,0);
  return;
}

void ERoom::ProcStandardWalls(bool row, int &wallcount, int &tilecount, bool doAlloc) {
	cFixedWorld *gWorld;
	int listidx;
	ProcStandardWallsInfo listTab[2][2];
	ERoomWallPTR curEWall;
	int i;
	int k;
	ERoomWallList &curList;
	TileWallsSegment theSeg;
	int segidx;
	int j;
	CTilePt thePt;
	TileWalls walls;
	
  TileWallsSegment theSeg;
  TNodeList_ERoomWall___ *curList;
  cFixedWorld *pcVar1;
  cFixedWorld__vtable *pcVar2;
  int iVar3;
  int iVar4;
  int x;
  int iVar5;
  ProcStandardWallsInfo listTab [2] [2];
  ERoomWallPTR curEWall;
  CTilePt thePt;
  TileWalls walls;
  int listidx;
  int i;
  
  pcVar1 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  memset(listTab,0,8);
  listTab[0][0].seg = kTopLeft;
  listTab[0][0].pSegWallList = &this->m_kTopLeftWalls;
  memset(listTab + 1,0,8);
  listTab[0][1].seg = kBottomRight;
  listTab[0][1].pSegWallList = &this->m_kBottomRightWalls;
  i = 0;
  memset(listTab[1],0,8);
  listTab[1][0].pSegWallList = &this->m_kTopRightWalls;
  listTab[1][0].seg = kTopRight;
  memset(listTab[1] + 1,0,8);
  listTab[1][1].seg = kBottomLeft;
  listTab[1][1].pSegWallList = &this->m_kBottomLeftWalls;
  iVar4 = i;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
                    /* end of inlined section */
  while( true ) {
    i = iVar4;
    curEWall.pCurEWall = (ERoomWall *)0x0;
    iVar4 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
    if (iVar4 <= i) break;
    iVar5 = 0;
    do {
      x = 0;
      theSeg = listTab[!row][iVar5].seg;
      curList = listTab[!row][iVar5].pSegWallList;
      iVar4 = log2down__Fi(theSeg);
      iVar5 = iVar5 + 1;
      while( true ) {
        iVar3 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                          ((int)&_5Globs_pFixedWorld->__vtable +
                           (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
        if (iVar3 <= x) break;
        __7CTilePtiii(&thePt,0,0,1);
        if (row) {
          Set__7CTilePtiii(&thePt,i,x,1);
          pcVar2 = pcVar1->__vtable;
        }
        else {
          Set__7CTilePtiii(&thePt,x,i,1);
          pcVar2 = pcVar1->__vtable;
        }
        x = x + 1;
        (*(code *)pcVar2->ComputeArchValue)
                  (&walls,(int)&pcVar1->__vtable + (int)*(short *)&pcVar2->ComputeRooms,&thePt);
        ProcessCell__5ERoomRt9TNodeList1ZP9ERoomWallR12ERoomWallPTRR7CTilePt16TileWallsSegmentQ29TileWalls20DiagonalSideSelectorR9TileWallsiRiT8b
                  (this,curList,&curEWall,&thePt,theSeg,kNotSpecified,&walls,iVar4,wallcount,
                   tilecount,doAlloc);
        ___9TileWalls(&walls,2);
        ___7CTilePt(&thePt,2);
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
      if ((!doAlloc) && (curEWall.pCurEWall != (ERoomWall *)0x0)) {
        (*(code *)(curEWall.pCurEWall)->__vtable[1].SafeDelete)
                  (&((curEWall.pCurEWall)->m_c0).mX +
                   *(short *)&(curEWall.pCurEWall)->__vtable[1].ERoomWall);
                    /* end of inlined section */
      }
                    /* end of inlined section */
      curEWall.pCurEWall = (ERoomWall *)0x0;
      iVar4 = i + 1;
    } while (iVar5 < 2);
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
  return;
}

void ERoom::ProcDiagonalWalls(int &wallcount, int &tilecount, bool doAlloc) {
	cFixedWorld *gWorld;
	int size;
	ERoomWallPTR curEWall[2];
	int k;
	int jstart;
	int i;
	int j;
	int xstart;
	int ystart;
	int x;
	int y;
	CTilePt thePoint;
	TileWalls walls;
	CTilePt thePoint;
	TileWalls walls;
	ERoomWallPTR *this;
	void *pAddress;
	
  int iVar1;
  ERoomWallPTR *pEVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint y;
  uint x;
  int x_00;
  ERoomWallPTR curEWall [2];
  ERoomWallPTR aEStack_168 [2];
  CTilePt thePoint;
  TileWalls TStack_150;
  TileWalls walls;
  int *local_d0;
  int *local_cc;
  cFixedWorld *gWorld;
  int k;
  int i;
  ERoomWallPTR *local_ac;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
  gWorld = _5Globs_pFixedWorld;
                    /* end of inlined section */
  iVar1 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
  local_ac = aEStack_168;
  pEVar2 = curEWall;
  iVar4 = 1;
  local_d0 = wallcount;
  local_cc = tilecount;
  do {
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
    pEVar2->pCurEWall = (ERoomWall *)0x0;
                    /* end of inlined section */
    iVar4 = iVar4 + -1;
    pEVar2 = pEVar2 + 1;
  } while (iVar4 != -1);
  k = 0;
  do {
    i = 0;
    iVar4 = k + 1;
    uVar5 = 0;
    do {
      uVar3 = uVar5 + 1;
      iVar6 = i + 1;
      while ((int)uVar5 < iVar1) {
        x = 0;
        y = uVar5;
        if (i == 0) {
          x = uVar5;
          y = 0;
        }
        uVar5 = uVar5 + 1;
        if (((int)x < iVar1) && ((int)y < iVar1)) {
          x_00 = ~x + iVar1;
          do {
            if (k == 0) {
              __7CTilePtiii(&thePoint,x_00,y,1);
              (*(code *)gWorld->__vtable->ComputeArchValue)
                        (&TStack_150,
                         (int)&gWorld->__vtable + (int)*(short *)&gWorld->__vtable->ComputeRooms,
                         &thePoint);
              ProcessCell__5ERoomRt9TNodeList1ZP9ERoomWallR12ERoomWallPTRR7CTilePt16TileWallsSegmentQ29TileWalls20DiagonalSideSelectorR9TileWallsiRiT8b
                        (this,&this->m_kHorizDiagWallskTop,curEWall,&thePoint,kHorizDiag,kTop,
                         &TStack_150,4,local_d0,local_cc,doAlloc);
              ProcessCell__5ERoomRt9TNodeList1ZP9ERoomWallR12ERoomWallPTRR7CTilePt16TileWallsSegmentQ29TileWalls20DiagonalSideSelectorR9TileWallsiRiT8b
                        (this,&this->m_kHorizDiagWallskBottom,curEWall + 1,&thePoint,kHorizDiag,
                         kBottom,&TStack_150,4,local_d0,local_cc,doAlloc);
              ___9TileWalls(&TStack_150,2);
              ___7CTilePt(&thePoint,2);
            }
            else {
              __7CTilePtiii(&thePoint,x,y,1);
              (*(code *)gWorld->__vtable->ComputeArchValue)
                        (&walls,(int)&gWorld->__vtable +
                                (int)*(short *)&gWorld->__vtable->ComputeRooms,&thePoint);
              ProcessCell__5ERoomRt9TNodeList1ZP9ERoomWallR12ERoomWallPTRR7CTilePt16TileWallsSegmentQ29TileWalls20DiagonalSideSelectorR9TileWallsiRiT8b
                        (this,&this->m_kVertDiagWallskLeft,curEWall,&thePoint,kVertDiag,kRight,
                         &walls,5,local_d0,local_cc,doAlloc);
              ProcessCell__5ERoomRt9TNodeList1ZP9ERoomWallR12ERoomWallPTRR7CTilePt16TileWallsSegmentQ29TileWalls20DiagonalSideSelectorR9TileWallsiRiT8b
                        (this,&this->m_kVertDiagWallskRight,curEWall + 1,&thePoint,kVertDiag,kLeft,
                         &walls,5,local_d0,local_cc,doAlloc);
              ___9TileWalls(&walls,2);
              ___7CTilePt(&thePoint,2);
            }
            x = x + 1;
            x_00 = x_00 + -1;
            y = y + 1;
          } while (((int)x < iVar1) && ((int)y < iVar1));
        }
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
        if ((!doAlloc) && (curEWall[0].pCurEWall != (ERoomWall *)0x0)) {
          (*(code *)(curEWall[0].pCurEWall)->__vtable[1].SafeDelete)
                    (&((curEWall[0].pCurEWall)->m_c0).mX +
                     *(short *)&(curEWall[0].pCurEWall)->__vtable[1].ERoomWall);
        }
                    /* end of inlined section */
        curEWall[0].pCurEWall = (ERoomWall *)0x0;
                    /* end of inlined section */
        curEWall[1].pCurEWall = (ERoomWall *)0x0;
      }
      i = iVar6;
      uVar5 = uVar3;
    } while (iVar6 < 2);
    k = iVar4;
  } while (iVar4 < 2);
  while (curEWall != local_ac) {
    local_ac = local_ac + -1;
                    /* end of inlined section */
    local_ac->pCurEWall = (ERoomWall *)0x0;
  }
  return;
}

void ERoom::ProcessCell(ERoomWallList &curList, ERoomWallPTR &curEWall, CTilePt &thePt, TileWallsSegment theSeg, DiagonalSideSelector side, TileWalls &walls, int segidx, int &wallcount, int &tilecount, bool doAlloc) {
	int &wallcount;
	int &tilecount;
	bool doAlloc;
	bool hasWall;
	bool isFence;
	ERoomWallPTR *this;
	ERoomWallPTR *this;
	ERoomWallPTR *this;
	TNodeList<ERoomWall *> *this;
	ERoomWallPTR *this;
	ERoomWallPTR *this;
	ERoomWallPTR *this;
	ERoomWallPTR *this;
	TNodeList<ERoomWall *> *this;
	ERoomWallPTR *this;
	ERoomWallPTR *this;
	ERoomWallPTR *this;
	NLIterator i;
	NLIterator i;
	WallStyle style;
	ERoomWallPTR *this;
	ERoomWallPTR *this;
	ERoomWallPTR *this;
	ERoomWallPTR *this;
	ERoomWallPTR *this;
	
  bool bVar1;
  bool bVar2;
  WallStyle WVar3;
  ERoomWall *pEVar4;
  int iVar5;
  EFenceWall *pEVar6;
  long lVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  undefined3 in_stack_00000011;
  TileWallsSegment local_b0;
  ERoom *local_ac;
  TNodeList_ERoomWall___ *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_b0 = theSeg;
  local_ac = this;
  local_a8 = curList;
  bVar2 = HasWall__C9TileWalls16TileWallsSegment(walls,theSeg);
  if (bVar2) {
    WVar3 = GetStyle__C9TileWalls16TileWallsSegment(walls,local_b0);
                    /* inlined from ../MSrc/wallStyles.h */
    bVar1 = true;
    if (((WVar3 != kFenceStyle1) && (bVar1 = true, WVar3 != kFenceStyle2)) &&
       (bVar1 = true, WVar3 != kFenceStyle3)) {
      if (WVar3 == kFenceStyle4) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar2) {
    if (!bVar1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
                    /* end of inlined section */
      if (curEWall->pCurEWall == (ERoomWall *)0x0) {
        if (_doAlloc == 0) {
                    /* end of inlined section */
          curEWall->pCurEWall = (ERoomWall *)0x0;
LAB_0014affc:
                    /* end of inlined section */
          pEVar4 = (ERoomWall *)__nw__9ERoomWallUi(0x1b0);
          pEVar4 = __9ERoomWall16TileWallsSegmentQ29TileWalls20DiagonalSideSelectorR7CTilePtb
                             (pEVar4,local_b0,side,thePt,false);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
          curEWall->pCurEWall = pEVar4;
                    /* end of inlined section */
          iVar5 = *wallcount;
          goto LAB_0014b024;
        }
      }
      else {
        lVar7 = (*(code *)_WallSplitTestFnTab[segidx])(walls,thePt);
        if (lVar7 == 0) {
          if (_doAlloc != 0) {
                    /* end of inlined section */
            AddTile__9ERoomWallRC7CTilePtR9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelectorb
                      (curEWall->pCurEWall,thePt,walls,local_b0,side,doAlloc);
          }
          *tilecount = *tilecount + 1;
          return;
        }
        if (_doAlloc == 0) {
          pEVar4 = curEWall->pCurEWall;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
          if (pEVar4 == (ERoomWall *)0x0) {
            curEWall->pCurEWall = (ERoomWall *)0x0;
          }
          else {
            (*(code *)pEVar4->__vtable[1].SafeDelete)
                      (&(pEVar4->m_c0).mX + *(short *)&pEVar4->__vtable[1].ERoomWall);
            curEWall->pCurEWall = (ERoomWall *)0x0;
          }
          goto LAB_0014affc;
        }
      }
      pEVar4 = (ERoomWall *)__nw__9ERoomWallUi(0x1b0);
      pEVar4 = __9ERoomWall16TileWallsSegmentQ29TileWalls20DiagonalSideSelectorR7CTilePtb
                         (pEVar4,local_b0,side,thePt,doAlloc);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      curEWall->pCurEWall = pEVar4;
      AddTail__9ENodeListUi(&local_a8->field0_0x0,(uint)pEVar4);
                    /* end of inlined section */
      iVar5 = *wallcount;
LAB_0014b024:
      *wallcount = iVar5 + 1;
      *tilecount = *tilecount + 1;
      return;
    }
  }
  else if (!bVar1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
    pEVar4 = curEWall->pCurEWall;
                    /* end of inlined section */
    if (pEVar4 == (ERoomWall *)0x0) {
      return;
    }
    if (_doAlloc != 0) {
      curEWall->pCurEWall = (ERoomWall *)0x0;
      return;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
    (*(code *)pEVar4->__vtable[1].SafeDelete)
              (&(pEVar4->m_c0).mX + *(short *)&pEVar4->__vtable[1].ERoomWall);
    curEWall->pCurEWall = (ERoomWall *)0x0;
    goto LAB_0014b148;
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* end of inlined section */
  if (**(int **)(_app.m_pGameStateMan)->m_nliCurGame == 2) {
LAB_0014b0ec:
    if (_doAlloc != 0) {
      curEWall->pCurEWall = (ERoomWall *)0x0;
      return;
    }
  }
  else if (_doAlloc != 0) {
    if (1 < local_b0 + ~kNoWalls) {
      WVar3 = GetStyle__C9TileWalls16TileWallsSegment(walls,local_b0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
      pEVar6 = (EFenceWall *)_allocBucketAlloc__FUiUi(0x1b0,8);
                    /* end of inlined section */
      pEVar6 = __10EFenceWallR16TileWallsSegmentR7CTilePt9WallStyle(pEVar6,&local_b0,thePt,WVar3);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&(local_ac->m_fenceWalls).field0_0x0,(uint)pEVar6);
                    /* end of inlined section */
      curEWall->pCurEWall = (ERoomWall *)0x0;
      return;
    }
    goto LAB_0014b0ec;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
  pEVar4 = curEWall->pCurEWall;
  if (pEVar4 == (ERoomWall *)0x0) {
    curEWall->pCurEWall = (ERoomWall *)0x0;
  }
  else {
    (*(code *)pEVar4->__vtable[1].SafeDelete)
              (&(pEVar4->m_c0).mX + *(short *)&pEVar4->__vtable[1].ERoomWall);
                    /* end of inlined section */
    curEWall->pCurEWall = (ERoomWall *)0x0;
  }
LAB_0014b148:
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
  curEWall->pCurEWall = (ERoomWall *)0x0;
  return;
}

void DoLightmapInitForList(ERoomWallList &list) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (list->field0_0x0).m_l.m_pHead; pEVar1 != (ENodeListNode *)0x0;
      pEVar1 = pEVar1->pNext) {
                    /* end of inlined section */
    InitLightMap__9ERoomWall((ERoomWall *)pEVar1->data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  }
  return;
}

void ERoom::InitLightmaps() {
  DoLightmapInitForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kBottomLeftWalls);
  DoLightmapInitForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kBottomRightWalls);
  DoLightmapInitForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kTopRightWalls);
  DoLightmapInitForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kTopLeftWalls);
  DoLightmapInitForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kHorizDiagWallskTop);
  DoLightmapInitForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kHorizDiagWallskBottom);
  DoLightmapInitForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kVertDiagWallskLeft);
  DoLightmapInitForList__FRt9TNodeList1ZP9ERoomWall(&this->m_kVertDiagWallskRight);
  return;
}

bool ERoom::PreviewWallBuild(bool testFences) {
	int nRooms;
	RoomManagerImpl *pRoommanImpl;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > roomItr;
	int wallcount;
	int tilecount;
	int nfences;
	int size;
	CTilePt point;
	TileWalls walls;
	u8 x;
	u8 y;
	TileWallsSegment seg;
	RoomManagerImpl *this;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	RoomManagerImpl *this;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	
  cFixedWorld__vtable *pcVar1;
  cFixedWorld *pcVar2;
  bool bVar3;
  int iVar4;
  TileWallsSegment inSeg;
  WallStyle WVar5;
  int iVar6;
  __rb_tree_base_iterator _Var7;
  long lVar8;
  __rb_tree_base_iterator _Var9;
  uint uVar10;
  __rb_tree_node_base *p_Var11;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  __rb_tree_node_base **pp_Var12;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  CTilePt point;
  TileWalls walls;
  TileWalls TStack_100;
  __rb_tree_const_iterator_pair_const_short_unsigned_int_RoomImpl_____ roomItr;
  int wallcount;
  int tilecount;
  int nfences;
  uchar x;
  uint local_ac;
  uint local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  pcVar2 = _5Globs_pFixedWorld;
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (testFences) {
                    /* end of inlined section */
    nfences = 0;
    _x = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar4 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
    iVar4 = iVar4 + -1;
    __7CTilePt(&point);
    __9TileWalls(&walls);
    point.mLevel = '\x01';
    while ((int)_x < iVar4) {
      uVar10 = 1;
      local_ac = _x + 1;
      if (1 < iVar4) {
        point.mY = '\x01';
        while( true ) {
          local_a8 = uVar10 + 1;
          point.mX = (char)_x;
          pcVar1 = pcVar2->__vtable;
          (*(code *)pcVar1->ComputeArchValue)
                    (&TStack_100,(int)&pcVar2->__vtable + (int)*(short *)&pcVar1->ComputeRooms,
                     &point);
          __as__9TileWallsRC9TileWalls(&walls,&TStack_100);
          ___9TileWalls(&TStack_100,2);
          for (inSeg = First__C9TileWalls(&walls); inSeg != kNoWalls;
              inSeg = Next__C9TileWalls16TileWallsSegment(&walls,inSeg)) {
            if (1 < inSeg + ~kNoWalls) {
              WVar5 = GetStyle__C9TileWalls16TileWallsSegment(&walls,inSeg);
                    /* inlined from ../MSrc/wallStyles.h */
              if (WVar5 == kFenceStyle1) {
                iVar6 = 1;
              }
              else if (WVar5 == kFenceStyle2) {
                iVar6 = 1;
              }
              else if (WVar5 == kFenceStyle3) {
                iVar6 = 1;
              }
              else {
                iVar6 = 0;
                if (WVar5 == kFenceStyle4) {
                  iVar6 = 1;
                }
              }
                    /* end of inlined section */
              nfences = nfences + iVar6;
            }
          }
          uVar10 = local_a8 & 0xff;
          if (iVar4 <= (int)uVar10) break;
          point.mY = (char)uVar10;
        }
      }
      _x = local_ac & 0xff;
    }
    if (nfences < 0x80) {
      ___9TileWalls(&walls,2);
      ___7CTilePt(&point,2);
      bVar3 = true;
    }
    else {
      ___9TileWalls(&walls,2);
      ___7CTilePt(&point,2);
      bVar3 = false;
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar4 = 0;
    (*(code *)_5Globs_pFixedWorld->__vtable[1].SetVertexConfig)
              ((int)&_5Globs_pFixedWorld->__vtable +
               (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetVertexConfig,0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar6 = (*(code *)_5Globs_pRoomManager->__vtable->GetRoomCount)
                      ((int)&_5Globs_pRoomManager->__vtable +
                       (int)*(short *)&_5Globs_pRoomManager->__vtable->ComputeCutaway);
                    /* inlined from ../MSrc/Tree.h */
    roomItr.field0_0x0.node = *(__rb_tree_base_iterator *)(*(int *)(iVar6 + 4) + 8);
                    /* end of inlined section */
    pp_Var12 = (__rb_tree_node_base **)(iVar6 + 4);
    if (roomItr.field0_0x0.node != (__rb_tree_base_iterator)*(__rb_tree_node_base **)(iVar6 + 4)) {
                    /* inlined from ../MSrc/roomsimpl.h */
      p_Var11 = ((__rb_tree_node_base *)((int)roomItr.field0_0x0.node + 0x10))->parent;
      while( true ) {
                    /* end of inlined section */
        lVar8 = (**(code **)(*(int *)p_Var11 + 0x4c))
                          (&p_Var11->color + *(short *)(*(int *)p_Var11 + 0x48));
        if (lVar8 != 0) {
          lVar8 = (**(code **)(*(int *)p_Var11 + 100))
                            (&p_Var11->color + *(short *)(*(int *)p_Var11 + 0x60));
          if (lVar8 == 0) {
            iVar4 = iVar4 + 1;
          }
        }
        _Var7.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0xc);
        if (_Var7.node == (__rb_tree_node_base *)0x0) {
          _Var7.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 4);
          if (roomItr.field0_0x0.node == (__rb_tree_base_iterator)(_Var7.node)->right) {
            do {
              roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var7.node
              ;
              _Var7.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 4);
            } while (roomItr.field0_0x0.node == (__rb_tree_base_iterator)(_Var7.node)->right);
          }
          if (*(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0xc) != _Var7.node) {
            roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var7.node;
          }
                    /* end of inlined section */
          _Var9.node = *pp_Var12;
        }
        else if ((_Var7.node)->left == (__rb_tree_node_base *)0x0) {
          _Var9.node = *pp_Var12;
          roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var7.node;
        }
        else {
          do {
            _Var7.node = (_Var7.node)->left;
          } while ((_Var7.node)->left != (__rb_tree_node_base *)0x0);
          _Var9.node = *pp_Var12;
          roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var7.node;
        }
                    /* inlined from ../MSrc/Tree.h */
                    /* end of inlined section */
        if (roomItr.field0_0x0.node == (__rb_tree_base_iterator)_Var9.node) break;
        p_Var11 = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0x14);
      }
    }
    if (iVar4 < 0x14) {
      wallcount = 0;
      tilecount = 0;
      ProcStandardWalls__5ERoombRiT2T1(this,true,&wallcount,&tilecount,false);
      ProcStandardWalls__5ERoombRiT2T1(this,false,&wallcount,&tilecount,false);
      ProcDiagonalWalls__5ERoomRiT1b(this,&wallcount,&tilecount,false);
      if (wallcount < 0x12a) {
        return tilecount < 0x200;
      }
    }
    bVar3 = false;
  }
  return bVar3;
}

int ERoomWall::CountWalls() {
	int count;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  int iVar2;
  uint *puVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_wallInstances).field0_0x0.m_l.m_pHead;
  iVar2 = 0;
                    /* end of inlined section */
  while (pEVar1 != (ENodeListNode *)0x0) {
    puVar3 = &pEVar1->data;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
    if (*puVar3 != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

bool ERoomWall::HasSegment(TileWallsSegment seg, CTilePt &c0, CTilePt &c1) {
	TilePtDir tileDir;
	bool c0in;
	bool c1in;
	CTilePt cCur;
	
  bool bVar1;
  bool bVar2;
  bool bVar3;
  CTilePt *in;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  CTilePt cCur;
  CTilePt aCStack_a0 [5];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from ../MSrc/Function.h */
                    /* end of inlined section */
  if (this->m_seg == seg) {
    in = &this->m_c1;
    bVar1 = __eq__C7CTilePtRC7CTilePt(&this->m_c0,in);
    if (((bVar1) && (bVar1 = __eq__C7CTilePtRC7CTilePt(c0,c1), bVar1)) &&
       (bVar1 = __eq__C7CTilePtRC7CTilePt(c0,&this->m_c0), bVar1)) {
      return true;
    }
    GetTileDirection__11ESimsCursorRC7CTilePtT1(&this->m_c0,in);
    bVar1 = false;
    __7CTilePtRC7CTilePt(&cCur,&this->m_c0);
    bVar3 = false;
    __pl__C7CTilePtRC7CTilePt(aCStack_a0,&cCur);
    __as__7CTilePtRC7CTilePt(&cCur,aCStack_a0);
    ___7CTilePt(aCStack_a0,2);
    while (bVar2 = __ne__C7CTilePtRC7CTilePt(&cCur,in), bVar2) {
      if (!bVar1) {
        bVar1 = __eq__C7CTilePtRC7CTilePt(&cCur,c0);
      }
      if (!bVar3) {
        bVar3 = __eq__C7CTilePtRC7CTilePt(&cCur,c1);
      }
      __pl__C7CTilePtRC7CTilePt(aCStack_a0,&cCur);
      __as__7CTilePtRC7CTilePt(&cCur,aCStack_a0);
      ___7CTilePt(aCStack_a0,2);
    }
    if (!bVar1) {
      bVar1 = __eq__C7CTilePtRC7CTilePt(&cCur,c0);
    }
    if (!bVar3) {
      bVar3 = __eq__C7CTilePtRC7CTilePt(&cCur,c1);
    }
    if ((bVar1) && (bVar3)) {
      ___7CTilePt(&cCur,2);
      return true;
    }
    ___7CTilePt(&cCur,2);
  }
  return false;
}

void ERoomWall::DeleteWallAtTile(CTilePt &tile) {
	CTilePt adjTile;
	TileWalls walls;
	int refund;
	WallStyle style;
	WallStyle in;
	WallStyle in;
	DiagonalSideSelector sel;
	
  short sVar1;
  cFixedWorld__vtable *pcVar2;
  bool bVar3;
  cFixedWorld *pcVar4;
  WallStyle WVar5;
  FloorPattern FVar6;
  long lVar7;
  TileWallsSegment TVar8;
  DiagonalSideSelector inSelector;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  CTilePt adjTile;
  TileWalls walls;
  TileWalls TStack_c0;
  int refund;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  pcVar4 = _5Globs_pFixedWorld;
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  __7CTilePt(&adjTile);
                    /* inlined from ../MSrc/wallStyles.h */
                    /* end of inlined section */
  (*(code *)pcVar4->__vtable->ComputeArchValue)
            (&walls,(int)&pcVar4->__vtable + (int)*(short *)&pcVar4->__vtable->ComputeRooms,tile);
  HasWall__C9TileWalls16TileWallsSegment(&walls,this->m_seg);
  refund = 0;
  WVar5 = GetStyle__C9TileWalls16TileWallsSegment(&walls,this->m_seg);
                    /* inlined from ../MSrc/wallStyles.h */
  if ((((WVar5 == kDoorStyle) || (WVar5 == kDoorLeftStyle)) || (WVar5 == kDoorRightStyle)) ||
     ((WVar5 == kFrenchDoorStyle || (bVar3 = false, WVar5 == kCustomDoorStyle)))) {
    bVar3 = true;
  }
                    /* end of inlined section */
  if (bVar3) {
    TVar8 = this->m_seg;
  }
  else {
                    /* inlined from ../MSrc/wallStyles.h */
                    /* end of inlined section */
    if (WVar5 != kCustomWindowStyle) {
      TVar8 = this->m_seg;
      goto LAB_0014b8dc;
    }
    TVar8 = this->m_seg;
  }
  KillArchitecturalObject__11ESimsCursorRC7CTilePt16TileWallsSegmentRi(tile,TVar8,&refund);
  TVar8 = this->m_seg;
LAB_0014b8dc:
  if ((TVar8 == kHorizDiag) || (TVar8 == kVertDiag)) {
    lVar7 = (*(code *)pcVar4->__vtable->GetVertexConfig)
                      ((int)&pcVar4->__vtable + (int)*(short *)&pcVar4->__vtable->IsOutside,tile);
    if (lVar7 == 0xff) {
      pcVar2 = pcVar4->__vtable;
      inSelector = kBottom;
      sVar1 = *(short *)&pcVar2->SetVertexConfig;
      if (this->m_seg != kHorizDiag) {
        inSelector = kRight;
      }
      FVar6 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(&walls,inSelector);
      (*(code *)pcVar2->AnalyzeWallVertex)((int)&pcVar4->__vtable + (int)sVar1,tile,FVar6);
      TVar8 = this->m_seg;
    }
    else {
      TVar8 = this->m_seg;
    }
  }
  else {
    TVar8 = this->m_seg;
  }
  RemoveWall__9TileWalls16TileWallsSegment(&walls,TVar8);
  __9TileWallsRC9TileWalls(&TStack_c0,&walls);
  (*(code *)pcVar4->__vtable->GetLightLayer)
            ((int)&pcVar4->__vtable + (int)*(short *)&pcVar4->__vtable->GetWallManager,tile,
             &TStack_c0);
  ___9TileWalls(&walls,2);
  ___7CTilePt(&adjTile,2);
  return;
}

void ERoomWall::RemoveWallsFromWorld() {
	TilePtDir tileDir;
	CTilePt cCur;
	
  bool bVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  CTilePt *end;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  CTilePt cCur;
  CTilePt aCStack_90 [5];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  end = &this->m_c1;
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  GetTileDirection__11ESimsCursorRC7CTilePtT1(&this->m_c0,end);
  __7CTilePtRC7CTilePt(&cCur,&this->m_c0);
  DeleteWallAtTile__9ERoomWallR7CTilePt(this,&cCur);
  __pl__C7CTilePtRC7CTilePt(aCStack_90,&cCur);
  __as__7CTilePtRC7CTilePt(&cCur,aCStack_90);
  ___7CTilePt(aCStack_90,2);
  bVar1 = __ne__C7CTilePtRC7CTilePt(&this->m_c0,end);
  if (bVar1) {
    while (bVar1 = __ne__C7CTilePtRC7CTilePt(&cCur,end), bVar1) {
      DeleteWallAtTile__9ERoomWallR7CTilePt(this,&cCur);
      __pl__C7CTilePtRC7CTilePt(aCStack_90,&cCur);
      __as__7CTilePtRC7CTilePt(&cCur,aCStack_90);
      ___7CTilePt(aCStack_90,2);
    }
    DeleteWallAtTile__9ERoomWallR7CTilePt(this,&cCur);
  }
  ___7CTilePt(&cCur,2);
  return;
}

ERoomWall* ERoom::FindWallContainingSegment(ERoomWallList &list, TileWallsSegment seg, CTilePt &c0, CTilePt &c1) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  bool bVar1;
  ERoomWall *this_00;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (list->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 == (ENodeListNode *)0x0) {
LAB_0014bb68:
    this_00 = (ERoomWall *)0x0;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this_00 = (ERoomWall *)pEVar2->data;
    while (bVar1 = HasSegment__9ERoomWall16TileWallsSegmentR7CTilePtT2(this_00,seg,c0,c1), !bVar1) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) goto LAB_0014bb68;
      this_00 = (ERoomWall *)pEVar2->data;
    }
  }
  return this_00;
}

EIWallPart2* ERoomWall::GetWallAtTile(CTilePt &tile) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EIWallPart2 *pEVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_wallInstances).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar1 = (EIWallPart2 *)pEVar2->data;
    while( true ) {
                    /* end of inlined section */
      if (tile->mX == (pEVar1->m_point).mX) {
        if (tile->mY == (pEVar1->m_point).mY) {
          return pEVar1;
        }
        pEVar2 = (ENodeListNode *)(&pEVar2->data)[2];
      }
      else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar2 = (ENodeListNode *)(&pEVar2->data)[2];
      }
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      pEVar1 = (EIWallPart2 *)pEVar2->data;
    }
  }
  return (EIWallPart2 *)0x0;
}

EIWallPart2* ERoom::GetWallFromTileAndSegment(TileWallsSegment seg, CTilePt &c0) {
	int i;
	ERoomWallList *pList;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EIWallPart2 *pRetVal;
	NLIterator i;
	NLIterator i;
	
  EIWallPart2 *pEVar1;
  ERoomWall *this_00;
  TNodeList_ERoomWall___ **ppTVar2;
  int iVar3;
  ENodeListNode *pEVar4;
  
  iVar3 = 0;
  ppTVar2 = this->m_listTab;
  while( true ) {
    iVar3 = iVar3 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    if (((*ppTVar2 != (TNodeList_ERoomWall___ *)0x0) &&
        (pEVar4 = ((*ppTVar2)->field0_0x0).m_l.m_pHead, pEVar4 != (ENodeListNode *)0x0)) &&
       (*(TileWallsSegment *)(pEVar4->data + 0x198) == seg)) break;
    ppTVar2 = ppTVar2 + 1;
    if (3 < iVar3) {
      return (EIWallPart2 *)0x0;
    }
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  this_00 = (ERoomWall *)pEVar4->data;
  while( true ) {
    pEVar1 = GetWallAtTile__9ERoomWallR7CTilePt(this_00,c0);
    if (pEVar1 != (EIWallPart2 *)0x0) {
      return pEVar1;
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar4 = pEVar4->pNext;
                    /* end of inlined section */
    if (pEVar4 == (ENodeListNode *)0x0) break;
    this_00 = (ERoomWall *)pEVar4->data;
  }
  return (EIWallPart2 *)0x0;
}

void ERoom::DeleteERoomWallContainingSegment(TileWallsSegment seg, CTilePt &c0, CTilePt &c1) {
	ERoomWall *pWall;
	ERoomWall *pWall;
	ERoomWall *pWall;
	ERoomWall *pWall;
	ERoomWall *pWall;
	ERoomWall *pWall;
	
  ERoomWall *pEVar1;
  TNodeList_ERoomWall___ *list;
  
  switch(seg) {
  case kTopLeft:
    list = &this->m_kTopLeftWalls;
    break;
  case kTopRight:
    list = &this->m_kTopRightWalls;
    break;
  default:
    goto LAB_0014bd5c;
  case kBottomRight:
    list = &this->m_kBottomRightWalls;
    break;
  case kBottomLeft:
    list = &this->m_kBottomLeftWalls;
    break;
  case kHorizDiag:
    list = &this->m_kHorizDiagWallskBottom;
    break;
  case kVertDiag:
    pEVar1 = FindWallContainingSegment__5ERoomRt9TNodeList1ZP9ERoomWall16TileWallsSegmentR7CTilePtT3
                       (this,&this->m_kVertDiagWallskRight,seg,c0,c1);
    if (pEVar1 != (ERoomWall *)0x0) {
      RemoveWallsFromWorld__9ERoomWall(pEVar1);
    }
    goto LAB_0014bd5c;
  }
  pEVar1 = FindWallContainingSegment__5ERoomRt9TNodeList1ZP9ERoomWall16TileWallsSegmentR7CTilePtT3
                     (this,list,seg,c0,c1);
  if (pEVar1 != (ERoomWall *)0x0) {
    RemoveWallsFromWorld__9ERoomWall(pEVar1);
  }
LAB_0014bd5c:
  return;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/eroom.h */
    gpTypeInfo_EIFenceWall =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_11EIFenceWall_m_typeInfo,New__11EIFenceWall,0,"EIFenceWall",
                    &_11EIWallPart2_m_typeInfo);
    gpTypeInfo_EIWallPart2 =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_11EIWallPart2_m_typeInfo,New__11EIWallPart2,0,"EIWallPart2",
                    &_13EIStaticModel_m_typeInfo);
  }
  return;
}

EIWallPart2* EIWallPart2::New() {
  EIWallPart2 *pEVar1;
  
  pEVar1 = (EIWallPart2 *)__nw__11EIWallPart2Ui(0x150);
  pEVar1 = __11EIWallPart2(pEVar1);
  return pEVar1;
}

void EIWallPart2::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIWallPart2 *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EIWallPart2::GetTypeInfo() {
  return &_11EIWallPart2_m_typeInfo;
}

char* EIWallPart2::GetTypeName() {
  return _11EIWallPart2_m_typeInfo.m_name;
}

u32 EIWallPart2::GetTypeKey() {
  return _11EIWallPart2_m_typeInfo.m_key;
}

u16 EIWallPart2::GetTypeVersion() {
  return _11EIWallPart2_m_typeInfo.m_version;
}

u16 EIWallPart2::GetReadVersion() {
  return _11EIWallPart2_m_typeInfo.m_readVersion;
}

ETypeInfo* EIWallPart2::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_11EIWallPart2_m_typeInfo,New__11EIWallPart2,version,"EIWallPart2",
                      &_13EIStaticModel_m_typeInfo);
  return pEVar1;
}

EIWallPart2* EIWallPart2::CreateCopy() {
  EIWallPart2 *pEVar1;
  
  pEVar1 = (EIWallPart2 *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

EIWallPart2* EIWallPart2::EIWallPart2() {
  __13EIStaticModel(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_11EIWallPart2;
  __7CTilePt(&this->m_point);
  *(undefined4 *)&this->field_0x13c = 0;
  *(undefined4 *)&this->field_0x140 = 0;
  this->m_pPaperShader = (ERShader *)0x0;
  return this;
}

bool EIWallPart2::IsPortal() {
  bool bVar1;
  
  bVar1 = false;
  if ((*(int *)&this->field_0x140 == 1) || (*(int *)&this->field_0x140 == 3)) {
    bVar1 = true;
  }
  return bVar1;
}

bool EIWallPart2::IsDown() {
  return *(int *)&this->field_0x13c == 1;
}

CTilePt& EIWallPart2::GetPoint() {
  return &this->m_point;
}

EIFenceWall* EIFenceWall::New() {
  EIFenceWall *pEVar1;
  
  pEVar1 = (EIFenceWall *)__nw__11EIFenceWallUi(0x150);
  pEVar1 = __11EIFenceWall(pEVar1);
  return pEVar1;
}

void EIFenceWall::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIFenceWall *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EIFenceWall::GetTypeInfo() {
  return &_11EIFenceWall_m_typeInfo;
}

char* EIFenceWall::GetTypeName() {
  return _11EIFenceWall_m_typeInfo.m_name;
}

u32 EIFenceWall::GetTypeKey() {
  return _11EIFenceWall_m_typeInfo.m_key;
}

u16 EIFenceWall::GetTypeVersion() {
  return _11EIFenceWall_m_typeInfo.m_version;
}

u16 EIFenceWall::GetReadVersion() {
  return _11EIFenceWall_m_typeInfo.m_readVersion;
}

ETypeInfo* EIFenceWall::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_11EIFenceWall_m_typeInfo,New__11EIFenceWall,version,"EIFenceWall",
                      &_11EIWallPart2_m_typeInfo);
  return pEVar1;
}

EIFenceWall* EIFenceWall::CreateCopy() {
  EIFenceWall *pEVar1;
  
  pEVar1 = (EIFenceWall *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* EIFenceWall::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x150,0x12);
  return pvVar1;
}

void* EIFenceWall::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void EIFenceWall::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x150,0x12);
  return;
}

EIFenceWall* EIFenceWall::EIFenceWall() {
	EIWallPart2 *this;
	
  __13EIStaticModel((EIStaticModel *)this);
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_11EIWallPart2;
  __7CTilePt(&(this->field0_0x0).m_point);
  *(undefined4 *)&(this->field0_0x0).field_0x13c = 0;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EStorable__vtable *)_vt_11EIFenceWall;
  *(undefined4 *)&(this->field0_0x0).field_0x140 = 0;
  (this->field0_0x0).m_pPaperShader = (ERShader *)0x0;
  _11EIFenceWall_m_nInstances = _11EIFenceWall_m_nInstances + 1;
  return this;
}

ERoomWall* ERoomWall::ERoomWall() {
  this->__vtable = (ERoomWall__vtable *)_vt_9ERoomWall;
  __7CTilePt(&this->m_c0);
  __7CTilePt(&this->m_c1);
  __10EILightmap((EILightmap__0_4024 *)&this->m_lightmap);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_wallInstances).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_wallInstances).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  return this;
}

void ERoomWall::SafeDelete() {
  if (this != (ERoomWall *)0x0) {
    (**(code **)(this->__vtable + 1))(&(this->m_c0).mX + *(short *)&this->__vtable->SafeDelete,3);
  }
  return;
}

void EFenceWall::~EFenceWall(int __in_chrg) {
	void *p;
	
  ___9ERoomWall(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    _allocBucketFree__FPvUiUi(this,0x1b0,8);
  }
  return;
}

void EFenceWall::SafeDelete() {
  ERoomWall__vtable *pEVar1;
  
  if (this != (EFenceWall *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (**(code **)(pEVar1 + 1))(&(this->field0_0x0).m_c0.mX + *(short *)&pEVar1->SafeDelete,3);
  }
  return;
}

void global constructors keyed to EIWallPart2::m_pWallDownShader() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
