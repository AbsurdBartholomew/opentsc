// STATUS: NOT STARTED

#include "epimenu.h"

// warning: multiple differing types with the same name (name not equal)
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2317;
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

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb4647;
	__vtbl_ptr_type *$vf2674;
	
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
struct cXPerson : virtual cXObject {
	cXObject *$vb2674;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf2410;
	
	cXPerson& operator=();
	cXPerson();
protected:
	cXPerson();
	/* vtable[1] */ virtual cXPerson(cXPerson*, int, void);
	void setPersonImpl();
public:
	/* vtable[1] */ virtual void EORDrawStickFigure(cXPerson*, int, void);
	/* vtable[2] */ virtual int GetQueueCount();
	/* vtable[3] */ virtual u16* GetNextQueueStr();
	/* vtable[4] */ virtual void Initialize();
	/* vtable[5] */ virtual void Reset();
	/* vtable[6] */ virtual void PostLoad(cXPerson*, int, void);
	/* vtable[7] */ virtual void PreSave();
	/* vtable[8] */ virtual TreeReturnCode TryElement();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[14] */ virtual int GetDynamicToStaticLatency();
	/* vtable[34] */ virtual void Place();
	/* vtable[45] */ virtual void ForceLocation();
	/* vtable[9] */ virtual bool GosubObjectTree();
	/* vtable[10] */ virtual void StackJustPopped();
	/* vtable[11] */ virtual void Cleanup();
	/* vtable[12] */ virtual float GetMotive();
	/* vtable[13] */ virtual float* GetMotiveRef();
	/* vtable[14] */ virtual float* GetOldMotiveRef();
	/* vtable[15] */ virtual void SetMotive();
	/* vtable[16] */ virtual void SimMotives();
	/* vtable[17] */ virtual void CalcHappy();
	/* vtable[18] */ virtual bool AddAction();
	/* vtable[19] */ virtual bool RemoveAction();
	/* vtable[20] */ virtual Int CountActions();
	/* vtable[21] */ virtual Interaction* GetIndAction();
	/* vtable[22] */ virtual Interaction& GetCurrentAction();
	/* vtable[23] */ virtual Interaction& GetLastAction();
	/* vtable[24] */ virtual void DeleteTopAction();
	/* vtable[25] */ virtual void DebugDumpHappyScape();
	/* vtable[26] */ virtual void Skipping3D();
	/* vtable[27] */ virtual bool IsSelected();
	/* vtable[28] */ virtual StdPrm GetPersonData();
	/* vtable[29] */ virtual void SetPersonData();
	/* vtable[30] */ virtual StdPrm* GetPersonDataArray();
	/* vtable[31] */ virtual CustomCharacter* GetCustomCharacter();
	/* vtable[32] */ virtual NPC* GetNPCharacter();
	/* vtable[33] */ virtual StdPrm GetIdleState();
	/* vtable[34] */ virtual bool IsCarrying();
	/* vtable[35] */ virtual TileList* GetDestList();
	/* vtable[36] */ virtual SAnimator* GetSAnimator();
	/* vtable[37] */ virtual void GetJobSuitTex();
	/* vtable[38] */ virtual RoomID GetCurrentRoom();
	/* vtable[39] */ virtual void UpdateCurrentRoom();
	/* vtable[40] */ virtual SInt16 GetNeighborID();
	/* vtable[41] */ virtual void SetNeighborID();
	/* vtable[42] */ virtual bool IsSleeping();
	/* vtable[43] */ virtual bool IsRouting();
	/* vtable[44] */ virtual bool IsVisitor();
	/* vtable[45] */ virtual bool IsChild();
	/* vtable[46] */ virtual bool IsMale();
	/* vtable[47] */ virtual bool IsFemale();
	/* vtable[48] */ virtual bool IsAdult();
	/* vtable[49] */ virtual bool IsGhost();
	/* vtable[50] */ virtual bool IsInvisible();
	/* vtable[51] */ virtual bool IsGreen();
	/* vtable[52] */ virtual StdPrm GetVisibility();
	/* vtable[53] */ virtual Motives* GetMotives();
	/* vtable[54] */ virtual MotiveEffects* GetMotiveEffects();
	/* vtable[55] */ virtual void InvalidateRoutes();
	/* vtable[56] */ virtual bool GetRecording();
	/* vtable[57] */ virtual int GetRecordDuration();
	/* vtable[58] */ virtual void SetRecordDuration(cXPerson*, int, void);
	/* vtable[59] */ virtual int GetRecordMaxDuration();
	/* vtable[60] */ virtual void SetRecordMaxDuration(cXPerson*, int, void);
	/* vtable[61] */ virtual int GetRecordStartTicks();
	/* vtable[62] */ virtual int GetRecordCurTicks();
	/* vtable[63] */ virtual int GetRecordTicksElapsed();
	/* vtable[64] */ virtual Skill* GetRecordSkill();
	/* vtable[65] */ virtual void StartRecording();
	/* vtable[66] */ virtual void StopRecording();
	/* vtable[67] */ virtual void ClearRecording();
	/* vtable[68] */ virtual int TickRecording();
	/* vtable[69] */ virtual void LogEvent();
	/* vtable[70] */ virtual void Track();
	/* vtable[71] */ virtual bool ShouldInterrupt();
	/* vtable[72] */ virtual cXObject* GetControllingObject();
	/* vtable[73] */ virtual cXPersonImpl* GetPersonImplementation();
	cXPersonImpl* CAST_IMPL();
};

// warning: multiple differing types with the same name (name not equal)
struct cXMTObject : virtual cXObject {
	cXObject *$vb2674;
	__vtbl_ptr_type *$vf5276;
	
	cXMTObject& operator=();
	cXMTObject();
protected:
	cXMTObject();
	/* vtable[1] */ virtual cXMTObject(cXMTObject*, int, void);
	void setMTObjectImpl();
	void setCursorObjectImpl();
	void setPortalImpl();
public:
	/* vtable[1] */ virtual void Initialize();
	/* vtable[2] */ virtual cXMTObject* GetFirstMultiTileObject();
	/* vtable[3] */ virtual cXMTObject* GetNextMultiTileObject();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[4] */ virtual void Reset();
	/* vtable[5] */ virtual void AssignOffsets();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[6] */ virtual void PostLoad(cXMTObject*, int, void);
	/* vtable[7] */ virtual void SetMultiObjectData();
	/* vtable[8] */ virtual void DirtyAll();
	/* vtable[9] */ virtual bool IsDynamic();
	/* vtable[10] */ virtual void MergeInPlace();
	/* vtable[11] */ virtual void RemoveFromDynamic();
	/* vtable[12] */ virtual cXMTObjectImpl* GetMTObjectImplementation();
	cXMTObjectImpl* CAST_IMPL();
};

ERShader *EPiMenuItem::m_pREndcapShdr = NULL;
ERShader *EPiMenuItem::m_pLEndcapShdr = NULL;
ERShader *EPiMenuItem::m_pBackShdr = NULL;
ERShader *EPiMenuItem::m_pXIcon = NULL;
float _pimenu_yoff = 0.35f;
float _pimenu_height = 0.24f;
float _backhs = 1.5f;
float _backzoff = -0.021f;
float _pi_burp_dur = 0.25f;
float _pi_burp_scale = 1.2f;
float _pimenuAlphaTime = 0.f;
float _pimenuAlphaFadeDur_ = 0.25f;
float _pimenuAlpha = 0.f;
float _pi_xpromptoff = 0.01f;

__vtbl_ptr_type EPiMenu virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPiMenu::~EPiMenu,
		/* .__delta2 = */ 14488
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPiMenu::Update,
		/* .__delta2 = */ 14736
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPiMenu::Draw,
		/* .__delta2 = */ 14880
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetPos,
		/* .__delta2 = */ 2768
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3560
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3592
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPiMenu::Message,
		/* .__delta2 = */ 15072
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::StateChanged,
		/* .__delta2 = */ 3672
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnButtonRepeat,
		/* .__delta2 = */ 3680
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnStickRepeat,
		/* .__delta2 = */ 3688
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::GetPos,
		/* .__delta2 = */ 3912
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::AddChild,
		/* .__delta2 = */ 3024
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::RemoveChild,
		/* .__delta2 = */ 3072
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EPiSubMenu virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPiSubMenu::~EPiSubMenu,
		/* .__delta2 = */ 10848
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPiSubMenu::Update,
		/* .__delta2 = */ 12160
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPiSubMenu::Draw,
		/* .__delta2 = */ 12400
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::SetPos,
		/* .__delta2 = */ 416
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetBoxDims,
		/* .__delta2 = */ 8880
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetBoxDims,
		/* .__delta2 = */ 8944
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPiSubMenu::Message,
		/* .__delta2 = */ 12416
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::StateChanged,
		/* .__delta2 = */ 472
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::OnButtonRepeat,
		/* .__delta2 = */ 11384
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::OnStickRepeat,
		/* .__delta2 = */ 11496
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::GetPos,
		/* .__delta2 = */ 3912
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::AddChild,
		/* .__delta2 = */ 11632
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::RemoveChild,
		/* .__delta2 = */ 3072
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::RemoveAllOpts,
		/* .__delta2 = */ -3056
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::RemoveOpt,
		/* .__delta2 = */ 8688
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::AddOpt,
		/* .__delta2 = */ -3008
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::SetPositions,
		/* .__delta2 = */ -2176
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetCurOpt,
		/* .__delta2 = */ 7336
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::SetLayout,
		/* .__delta2 = */ 360
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetStick,
		/* .__delta2 = */ 11960
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::NextItem,
		/* .__delta2 = */ 536
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::PrevItem,
		/* .__delta2 = */ 568
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::ProcessStickAndButtonAutoRepeat,
		/* .__delta2 = */ 11080
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EPiMenuItem virtual table[23] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPiMenuItem::~EPiMenuItem,
		/* .__delta2 = */ 7832
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPiMenuItem::Update,
		/* .__delta2 = */ 10520
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPiMenuItem::Draw,
		/* .__delta2 = */ 8328
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetPos,
		/* .__delta2 = */ 2768
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3560
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3592
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::Message,
		/* .__delta2 = */ 3616
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::StateChanged,
		/* .__delta2 = */ 3672
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnButtonRepeat,
		/* .__delta2 = */ 3680
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnStickRepeat,
		/* .__delta2 = */ 3688
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::GetPos,
		/* .__delta2 = */ 3912
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::AddChild,
		/* .__delta2 = */ 3024
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::RemoveChild,
		/* .__delta2 = */ 3072
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIIcon::ShaderRect,
		/* .__delta2 = */ 12848
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::SetText,
		/* .__delta2 = */ -4560
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::InitString,
		/* .__delta2 = */ -4016
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::SetText,
		/* .__delta2 = */ -3800
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::InitString,
		/* .__delta2 = */ -3632
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::SetTextDef,
		/* .__delta2 = */ -4680
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::GetText,
		/* .__delta2 = */ -3352
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::DrawText,
		/* .__delta2 = */ -4368
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EUIIconDef virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIIconDef::~EUIIconDef,
		/* .__delta2 = */ -25888
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static short unsigned int _OBJECT_NAME[4] = {
	/* [0] = */ 1,
	/* [1] = */ 111,
	/* [2] = */ 98,
	/* [3] = */ 106
};

static short unsigned int _ROOT_NAME[5] = {
	/* [0] = */ 1,
	/* [1] = */ 114,
	/* [2] = */ 111,
	/* [3] = */ 111,
	/* [4] = */ 116
};

void EPiMenuItem::SetupBackgroundShaders() {
  if (_11EPiMenuItem_m_pREndcapShdr == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _11EPiMenuItem_m_pREndcapShdr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3e95aa5d,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _11EPiMenuItem_m_pLEndcapShdr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc49a973e,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _11EPiMenuItem_m_pBackShdr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x54258aaf,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _11EPiMenuItem_m_pXIcon =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc1d9c5ed,(EFile *)0x0,0);
                    /* end of inlined section */
  }
  return;
}

void EPiMenuItem::CleanupBackgroundShaders() {
  if (_11EPiMenuItem_m_pREndcapShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_11EPiMenuItem_m_pREndcapShdr->field0_0x0);
  }
  if (_11EPiMenuItem_m_pLEndcapShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_11EPiMenuItem_m_pLEndcapShdr->field0_0x0);
  }
  if (_11EPiMenuItem_m_pBackShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_11EPiMenuItem_m_pBackShdr->field0_0x0);
  }
  _11EPiMenuItem_m_pREndcapShdr = (ERShader *)0x0;
  _11EPiMenuItem_m_pLEndcapShdr = (ERShader *)0x0;
  _11EPiMenuItem_m_pBackShdr = (ERShader *)0x0;
  while (_11EPiMenuItem_m_pXIcon != (ERShader *)0x0) {
    DelRef__9EResource(&_11EPiMenuItem_m_pXIcon->field0_0x0);
    _11EPiMenuItem_m_pXIcon = (ERShader *)0x0;
  }
  return;
}

EPiMenuItem* EPiMenuItem::EPiMenuItem() {
	EUIIconDef icondef;
	EUITextIconDef textdef;
	EUIObjectNode *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  uint uVar5;
  ulong *puVar6;
  float fVar7;
  EUIIconDef__vtable *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  EUITextIconDef local_e0;
  EUIIconDef local_c0;
  EUIIconDef icondef;
  EUITextIconDef textdef;
  
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_e0.m_maxChars = 0x20;
  local_e8 = 0;
  local_ec = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_f0 = (EUIIconDef__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_e0.m_xAlign = E_FAX_LEFT;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_e0.m_yAlign = E_FAY_TOP;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_e0.m_pointsize = 12.0;
  local_e0.m_selColorIdx = 0;
  local_e0.m_colorIdx = 1;
  local_e0.m_retChar = -1;
  local_c0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_c0.m_flags = 0;
  local_c0.m_trigger = 0x40;
  local_c0.m_selColorIdx = 0;
  local_c0.m_colorIdx = 1;
                    /* end of inlined section */
  local_c0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&this->field0_0x0,&local_e0,&local_c0,-1,(EVec3 *)&local_f0);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_c0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_11EPiMenuItem;
  SetupBackgroundShaders__11EPiMenuItem();
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  icondef.m_flags = 2;
  icondef.m_trigger = 0x40;
  icondef.m_selColorIdx = 0;
  icondef.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  textdef.m_maxChars = 0x17;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  textdef.m_xAlign = E_FAX_CENTER;
  textdef.m_yAlign = E_FAY_TOP;
  textdef.m_pointsize = 16.0;
  textdef.m_selColorIdx = 0;
  textdef.m_colorIdx = 1;
                    /* end of inlined section */
  textdef.m_retChar = -1;
  SetFont__11EUITextIconi((EUITextIcon *)this,-0x2080f4e9);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_f0 = (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ec = 0x3d23d70a;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] = 0.25;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] = 0.04;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar5) * 8;
  pEVar2 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def;
  uVar5 = (uint)pEVar2 & 7;
  puVar6 = (ulong *)((int)pEVar2 - uVar5);
  *puVar6 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar5) * 8;
  piVar3 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar5 = (uint)piVar3 & 7;
  puVar6 = (ulong *)((int)piVar3 - uVar5);
  *puVar6 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar5) * 8;
  ppEVar4 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar5 = (uint)ppEVar4 & 7;
  puVar6 = (ulong *)((int)ppEVar4 - uVar5);
  *puVar6 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_f0;
  SetTextDef__14EUIDynTextIconRC14EUITextIconDef(&this->field0_0x0,&textdef);
  InitString__14EUIDynTextIconPCUsi(&this->field0_0x0,(short *)0x0,0x17);
  fVar7 = _pi_burp_dur;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  this->m_IObjectHandle = 0xffffffff;
  this->m_burpTime = fVar7;
  this->m_pNextMenu = (EPiSubMenu *)0x0;
  this->m_pAction = (Interaction *)0x0;
  this->m_nMiddlePieces = 0;
  this->m_animTime = 0.0;
  this->m_curPosX = 0.0;
  return this;
}

void EPiMenuItem::~EPiMenuItem(int __in_chrg) {
  Interaction *pAddress;
  ERFont *this_00;
  
  pAddress = this->m_pAction;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_11EPiMenuItem;
  if (pAddress != (Interaction *)0x0) {
    ___8BString2(&pAddress->fName,2);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(pAddress);
  }
                    /* end of inlined section */
  this_00 = (this->field0_0x0).field0_0x0.m_pFont;
  this->m_pAction = (Interaction *)0x0;
  this->m_IObjectHandle = 0xffffffff;
  this->m_pNextMenu = (EPiSubMenu *)0x0;
  if (this_00 != (ERFont *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    (this->field0_0x0).field0_0x0.m_pFont = (ERFont *)0x0;
  }
  ___14EUIDynTextIcon(&this->field0_0x0,__in_chrg);
  return;
}

int EPiMenuItem::CalcBackgroundSize() {
	float strw;
	float q;
	int n;
	float boxw;
	float x;
	
  EUIObjectNode__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  int iVar2;
  EStorable__vtable *local_30;
  char *local_2c;
  int local_20;
  EStorable__vtable *pEStack_1c;
  int local_10;
  int iStack_c;
  
  local_20 = (int)unaff_s0;
  pEStack_1c = (EStorable__vtable *)((ulong)unaff_s0 >> 0x20);
  local_10 = (int)unaff_retaddr;
  iStack_c = (int)((ulong)unaff_retaddr >> 0x20);
  SetSize__6ERFontffb((this->field0_0x0).field0_0x0.m_pFont,
                      (this->field0_0x0).field0_0x0.m_textdef.m_pointsize,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&local_30,(this->field0_0x0).field0_0x0.m_pFont,
             SUB41((this->field0_0x0).m_p,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  if (0.15 <= (float)local_30) {
    iVar2 = (int)((float)local_30 * 20.0);
    if (0.5 <= (float)local_30 * 20.0 - (float)iVar2) {
      iVar2 = iVar2 + 1;
    }
    this->m_nMiddlePieces = iVar2 + 2;
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_2c = (char *)0x3d23d70a;
                    /* end of inlined section */
    local_30 = (EStorable__vtable *)(((float)(iVar2 + 2) * 32.0 + 64.0) * 0.0015625);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    (*(code *)pEVar1->RemoveChild)
              ((int)(this->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar1->AddChild + 4,&local_30);
    iVar2 = this->m_nMiddlePieces;
  }
  else {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_30 = (EStorable__vtable *)0x3e800000;
    local_2c = (char *)0x3d23d70a;
                    /* end of inlined section */
    (*(code *)pEVar1->RemoveChild)
              ((int)(this->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar1->AddChild + 4,&local_30);
    this->m_nMiddlePieces = 3;
    iVar2 = this->m_nMiddlePieces;
  }
  return iVar2;
}

void EPiMenuItem::Draw(ERC *prc) {
	float totalW;
	float player1Start;
	float startpos;
	float animMu;
	float scale;
	int cidx;
	ETexture *ptexture;
	float xbutwidth;
	float ybutwidth;
	EVec2 vStrSize;
	float fonty;
	EUIObjectNode *this;
	float u;
	float a;
	float b;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	static float pimenuBurpTime = 0.f;
	float _range[2];
	static int pimenuItemS0 = 0;
	static int pimenuItemS1 = 1;
	float mu;
	int tmp;
	float u;
	float a;
	float b;
	EUIObjectNode *this;
	EUIObjectNode *this;
	int which;
	ETexture *this;
	EGraphics *this;
	ETexture *this;
	EGraphics *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	float y;
	ERC *prc;
	u16 *szString;
	EUIObjectNode *this;
	float strleft;
	
  undefined *puVar1;
  ushort uVar2;
  ERFont *this_00;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  bool bVar6;
  uint uVar7;
  undefined8 unaff_s0;
  EVec4 *pEVar8;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar9;
  float fVar10;
  float fVar11;
  EHashTableNode **ppEVar12;
  float fVar13;
  float _range [2];
  undefined auStack_f0 [16];
  EHashTableNode **local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  EHashTableNode *local_c8;
  EHashTableNode *local_c4;
  EHashTableNode **local_c0;
  float local_bc;
  EFontSize *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
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
  
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_activeCtrl != 1) ||
     (bVar6 = IsTwoPlayer__7EGlobal(&_globals), bVar6)) {
                    /* end of inlined section */
    fVar9 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[0];
    fVar13 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0];
    fVar10 = _13EUIObjectNode_SAFE_LEFT;
    if (_13EUIObjectNode_SAFE_LEFT <= fVar9) {
      fVar10 = _13EUIObjectNode_SAFE_RIGHT - fVar13;
      fVar10 = (float)((int)fVar9 * (uint)(fVar9 < fVar10) | (int)fVar10 * (uint)(fVar9 >= fVar10));
    }
    (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[0] = fVar10;
    bVar6 = IsTwoPlayer__7EGlobal(&_globals);
    if (bVar6) {
      fVar10 = _13EUIObjectNode_SAFE_RIGHT + fVar13;
    }
    else {
      fVar10 = _13EUIObjectNode_SAFE_LEFT - fVar13;
    }
    fVar9 = _13EUIObjectNode_SAFE_LEFT - fVar13;
    if ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_activeCtrl == 0) {
      fVar9 = fVar10;
    }
    if (this->m_animTime == 0.0) {
      this->m_curPosX = fVar9;
    }
    fVar10 = this->m_animTime + _dt;
    this->m_animTime = fVar10;
    if (0.0 <= fVar10) {
      fVar10 = (float)((int)fVar10 * (uint)(fVar10 < 0.4) | (uint)(fVar10 >= 0.4) * 0x3ecccccd);
    }
    else {
      fVar10 = 0.0;
    }
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
    fVar13 = fVar10 * 2.5;
                    /* inlined from /eor/src2/common/math/e_math.h */
    fVar11 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[0];
    uVar7 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags;
                    /* end of inlined section */
    this->m_animTime = fVar10;
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
    this->m_curPosX =
         fVar9 + (fVar13 * -2.0 * fVar13 * fVar13 + fVar13 * 3.0 * fVar13) * (fVar11 - fVar9);
    iVar3 = pimenuItemS1_4181;
    if (((int)uVar7 >> 1 & 1U) != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)uVar7 >> 3 & 1U) == 0) {
        pEVar8 = &_BLUE;
      }
      else if ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_activeCtrl == 0) {
        pEVar8 = &_YELLOW;
      }
      else {
        pEVar8 = &_RED;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      fVar10 = 1.0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) != 0) {
        pimenuBurpTime_4179 = pimenuBurpTime_4179 + _dt;
        local_dc = _pi_burp_scale;
        local_e0 = (EHashTableNode **)0x3f800000;
        _range = (float  [2])CONCAT44(_pi_burp_scale,0x3f800000);
        puVar1 = auStack_f0 + 7;
        uVar7 = (uint)puVar1 & 7;
        *(ulong *)(puVar1 + -uVar7) =
             *(ulong *)(puVar1 + -uVar7) & -1L << (uVar7 + 1) * 8 | (ulong)_range >> (7 - uVar7) * 8
        ;
        auStack_f0._0_8_ = _range;
        uVar7 = (int)_range + 7U & 7;
        puVar5 = (ulong *)(((int)_range + 7U) - uVar7);
        *puVar5 = *puVar5 & -1L << (uVar7 + 1) * 8 | (ulong)_range >> (7 - uVar7) * 8;
        if (_pi_burp_dur < pimenuBurpTime_4179) {
          pimenuItemS1_4181 = pimenuItemS0_4180;
          pimenuItemS0_4180 = iVar3;
          pimenuBurpTime_4179 = 0.0;
        }
        fVar10 = pimenuBurpTime_4179 / _pi_burp_dur;
        fVar9 = 0.0;
        if (0.0 <= fVar10) {
          fVar9 = (float)((int)fVar10 * (uint)(fVar10 < 1.0) | (uint)(fVar10 >= 1.0) * 0x3f800000);
        }
                    /* inlined from /eor/src2/common/math/e_math.h */
        fVar10 = _range[pimenuItemS0_4180] +
                 fVar9 * (_range[pimenuItemS1_4181] - _range[pimenuItemS0_4180]);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_d0 = _BLACK.field0_0x0.d[0] * _pimenuAlpha;
      local_c4 = (EHashTableNode *)(_BLACK.field0_0x0.d[3] * _pimenuAlpha);
      local_cc = _BLACK.field0_0x0.d[1] * _pimenuAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_c8 = (EHashTableNode *)(_BLACK.field0_0x0.d[2] * _pimenuAlpha);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      DrawBackGround__11EPiMenuItemP3ERCffffRC5EVec4
                (this,prc,0.005,0.005,1.0,fVar10,(EVec4 *)&local_d0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_d4 = (pEVar8->field0_0x0).d[3] * _pimenuAlpha;
      local_e0 = (EHashTableNode **)((pEVar8->field0_0x0).d[0] * _pimenuAlpha);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_dc = (pEVar8->field0_0x0).d[1] * _pimenuAlpha;
      local_d8 = (pEVar8->field0_0x0).d[2] * _pimenuAlpha;
                    /* end of inlined section */
      DrawBackGround__11EPiMenuItemP3ERCffffRC5EVec4(this,prc,0.0,0.0,1.0,fVar10,(EVec4 *)&local_e0)
      ;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      this_00 = _globals.m_pFont;
      if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) == 0) {
        this_00 = (this->field0_0x0).field0_0x0.m_pFont;
      }
      SetSize__6ERFontffb(this_00,(this->field0_0x0).field0_0x0.m_textdef.m_pointsize,1.0,true);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      uVar7 = (int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U ^ 1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
      local_d4 = _7EUIIcon_m_vColors[uVar7].field0_0x0.d[3] * _pimenuAlpha;
      local_e0 = (EHashTableNode **)(_7EUIIcon_m_vColors[uVar7].field0_0x0.d[0] * _pimenuAlpha);
      local_dc = _7EUIIcon_m_vColors[uVar7].field0_0x0.d[1] * _pimenuAlpha;
      local_d8 = _7EUIIcon_m_vColors[uVar7].field0_0x0.d[2] * _pimenuAlpha;
                    /* end of inlined section */
      (this_00->m_vColor).field0_0x0.d[0] = (float)local_e0;
      (this_00->m_vColor).field0_0x0.d[1] = local_dc;
      (this_00->m_vColor).field0_0x0.d[2] = local_d8;
      (this_00->m_vColor).field0_0x0.d[3] = local_d4;
      Select__6ERFontP3ERC(this_00,prc);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
      iVar3 = *(int *)(((_11EPiMenuItem_m_pXIcon->m_rtextureList).field0_0x0.m_l.m_pHead)->data +
                      0x14);
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
      uVar2 = *(ushort *)(iVar3 + 0x10);
                    /* end of inlined section */
      iVar4 = _pGfx->m_xscreen;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      fVar10 = (float)(uint)*(ushort *)(iVar3 + 0x12) / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      ppEVar12 = (EHashTableNode **)
                 (this->m_curPosX +
                 (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] * 0.5);
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)_range,this_00,SUB41((this->field0_0x0).m_p,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
      Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      local_bc = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2] +
                 (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] * 0.5;
      Select__6ERFontP3ERC(this_00,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      local_e0 = ppEVar12;
      local_dc = local_bc;
      local_c0 = ppEVar12;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this_00,prc,(this->field0_0x0).m_p,true,(EVec2 *)&local_c0,E_FAX_CENTER,
                 E_FAY_CENTER,(EVec2 *)0x0);
                    /* end of inlined section */
      if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) != 0) {
        Select__8ERShaderP3ERCi(_11EPiMenuItem_m_pXIcon,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        local_e0 = (EHashTableNode **)
                   (((float)ppEVar12 - _range[0] * 0.5) -
                   ((float)(uint)uVar2 / (float)iVar4 + _pi_xpromptoff));
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_cc = 1.0;
        local_d0 = 1.0;
                    /* end of inlined section */
        local_dc = ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2] -
                   0.008) - fVar10 * 0.25;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_a4 = 0x3f800000;
        local_a8 = 0x3f800000;
        local_ac = 0x3f800000;
        local_b0 = (EFontSize *)0x3f800000;
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].ClipRect)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,
                   (EVec4 *)&local_e0,(EVec4 *)&local_d0,&local_b0);
      }
    }
  }
  return;
}

void EPiMenuItem::DrawBackGround(ERC *prc, float x, float y, float xs, float ys, EVec4 &vcolor) {
	float ypos;
	float height;
	float segW;
	float midW;
	EVec2 vL;
	EVec2 vC;
	EVec2 vR;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	float x;
	float x;
	float x;
	float x;
	float x;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  EVec2 vL;
  EVec2 vC;
  EVec2 vR;
  float local_100;
  float local_fc;
  float local_f0;
  float local_ec;
  undefined4 local_e0;
  float local_dc;
  float local_d0;
  float local_cc;
  float local_c0;
  float local_bc;
  undefined4 local_b0;
  float local_ac;
  float local_a0;
  float local_9c;
  float local_90;
  float local_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  local_50 = (undefined4)unaff_retaddr;
  uStack_4c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  fVar5 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0];
  fVar2 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  fVar4 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2];
  fVar3 = fVar2 + fVar2;
  local_90 = fVar5 / ((float)this->m_nMiddlePieces + 2.0);
  fVar5 = fVar5 - (local_90 + local_90);
  Select__8ERShaderP3ERCi(_11EPiMenuItem_m_pLEndcapShdr,prc,0);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  fVar1 = this->m_curPosX + x;
  local_8c = fVar3 * ys * 0.5;
  fVar2 = (fVar4 - fVar2 * 0.5) + y +
          (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2];
  local_ac = fVar3 * -ys * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = fVar1 + local_90;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = fVar2 + local_8c;
  vC.field0_0x0.d[1] = fVar2 + local_ac;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vR.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vC.field0_0x0.d[0] = fVar1;
  vR.field0_0x0.d[1] = local_ac;
  local_f0 = local_90;
  local_ec = local_8c;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vC,&local_100,
             0x3cfc68,0x3cfc70,vcolor);
  Select__8ERShaderP3ERCi(_11EPiMenuItem_m_pBackShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vC.field0_0x0.d[0] = fVar1 + local_90;
  local_cc = fVar2 + local_8c;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_d0 = vC.field0_0x0.d[0] + fVar5;
  vR.field0_0x0.d[1] = fVar2 + local_ac;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_e0 = 0;
                    /* end of inlined section */
  vC.field0_0x0.d[1] = fVar2;
  vR.field0_0x0.d[0] = vC.field0_0x0.d[0];
  local_dc = local_ac;
  local_c0 = fVar5;
  local_bc = local_8c;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vR,&local_d0,0x3cfc68
             ,0x3cfc70,vcolor);
  Select__8ERShaderP3ERCi(_11EPiMenuItem_m_pREndcapShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vR.field0_0x0.d[0] = vC.field0_0x0.d[0] + fVar5;
  local_9c = vC.field0_0x0.d[1] + local_8c;
  vR.field0_0x0.d[1] = vC.field0_0x0.d[1];
  local_fc = vC.field0_0x0.d[1] + local_ac;
  local_a0 = vR.field0_0x0.d[0] + local_90;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_b0 = 0;
                    /* end of inlined section */
  local_100 = vR.field0_0x0.d[0];
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_100,&local_a0,
             0x3cfc68,0x3cfc70,vcolor);
  return;
}

void EPiMenuItem::Update() {
	EUIObjectNode *this;
	
  EUIVirtualCtrl__vtable *pEVar1;
  EUIObjectNode *pEVar2;
  long lVar3;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags & 4) != 0) &&
     (pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
     lVar3 = (*(code *)pEVar1[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                        (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_activeCtrl,
                        (this->field0_0x0).field0_0x0.field0_0x0.m_def.m_trigger), lVar3 != 0)) {
    pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pParent;
    (this->field0_0x0).field0_0x0.field0_0x0.m_ActivatedPad =
         (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_activeCtrl;
    if (pEVar2 != (EUIObjectNode *)0x0) {
      (*(code *)pEVar2->__vtable[1].EUIObjectNode)
                ((int)&(pEVar2->m_ChildList).field0_0x0.m_l.m_pHead +
                 (int)*(short *)(pEVar2->__vtable + 1),this,1);
    }
  }
  return;
}

EPiSubMenu* EPiSubMenu::EPiSubMenu(int playerid) {
  ERShader *pEVar1;
  
  __13EUIScrollMenuiifffiib(&this->field0_0x0,-1,-1,0.05,0.0,0.0,-1,-1,true);
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_10EPiSubMenu;
  __8BString2(&this->m_name);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl = playerid;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pLastMenu = (EPiSubMenu *)0x0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6b7cd394,(EFile *)0x0,0);
                    /* end of inlined section */
  (this->field0_0x0).m_pMorePrompts[0] = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x373ae809,(EFile *)0x0,0);
                    /* end of inlined section */
  (this->field0_0x0).m_pMorePrompts[1] = pEVar1;
  return this;
}

void EPiSubMenu::~EPiSubMenu(int __in_chrg) {
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_10EPiSubMenu;
  Reset__10EPiSubMenu(this);
  ___8BString2(&this->m_name,2);
  ___13EUIScrollMenu(&this->field0_0x0,__in_chrg);
  return;
}

void EPiSubMenu::Reset() {
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	EUIObjectNode *p;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  int iVar1;
  EUIObjectNode__vtable *pEVar2;
  int *piVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  piVar3 = (int *)(this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (piVar3 == (int *)0x0) {
    (this->field0_0x0).field0_0x0.m_pCurOpt = (EUIObjectNode *)0x0;
  }
  else {
                    /* end of inlined section */
    pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    while( true ) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      iVar1 = *piVar3;
                    /* end of inlined section */
                    /* end of inlined section */
      piVar3 = (int *)piVar3[2];
      (*(code *)pEVar2[1].RemoveChild)
                ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar2[1].AddChild + -0x44,iVar1);
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x38) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x38) + 8),3);
      }
      if (piVar3 == (int *)0x0) break;
      pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    }
    (this->field0_0x0).field0_0x0.m_pCurOpt = (EUIObjectNode *)0x0;
  }
  return;
}

void EPiSubMenu::Init() {
	EUIObjectNode *this;
	EUIMenu *this;
	float y;
	float x;
	EUIMenu *this;
	
  EUIObjectNode__vtable *pEVar1;
  uint uVar2;
  bool bVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[1].Draw)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar1[1].Update + -0x44,0x16,1);
  uVar2 = (this->field0_0x0).field0_0x0.field0_0x0.m_flags;
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (this->field0_0x0).field0_0x0.m_xoff = 0.0;
  (this->field0_0x0).field0_0x0.field0_0x0.m_flags = uVar2 | 0x16;
  (*(code *)pEVar1[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar1[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[2].GetPos)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar1[2].OnStickRepeat + -0x44,0,0,1);
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[2].RemoveChild)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar1[2].AddChild + -0x44,4);
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_50 = 0.25;
  local_4c = _pimenu_height;
                    /* end of inlined section */
  (*(code *)pEVar1->RemoveChild)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar1->AddChild + -0x44,&local_50);
  bVar3 = IsTwoPlayer__7EGlobal(&_globals);
  if (((bVar3) && ((this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl == 1)) ||
     ((bVar3 = IsTwoPlayer__7EGlobal(&_globals), !bVar3 &&
      ((this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl == 0)))) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    local_38 = _13EUIObjectNode_SAFE_TOP + _pimenu_yoff;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_40 = _13EUIObjectNode_SAFE_LEFT;
    local_3c = 0;
                    /* end of inlined section */
    (*(code *)pEVar1->OnButtonRepeat)
              ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar1->StateChanged + -0x44,&local_40);
  }
  else {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    local_50 = _13EUIObjectNode_SAFE_RIGHT - 0.25;
    local_48 = _13EUIObjectNode_SAFE_TOP + _pimenu_yoff;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_4c = 0.0;
                    /* end of inlined section */
    (*(code *)pEVar1->OnButtonRepeat)
              ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar1->StateChanged + -0x44,&local_50);
  }
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (this->field0_0x0).field0_0x0.m_optgap = 0.0145;
  (*(code *)pEVar1[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar1[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.m_pCurOpt = (EUIObjectNode *)0x0;
  return;
}

int EPiSubMenu::CreateItem(u16 *longstr, u32 objectHandle, Interaction *pAction, EPiSubMenu *pMenu) {
	EPiMenuItem *pItem;
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	
  EUIObjectNode__vtable *pEVar1;
  bool bVar2;
  BString2 *this_00;
  BString2 *str;
  EPiMenuItem *pEVar3;
  Interaction *pIVar4;
  int iVar5;
  undefined8 unaff_s0;
  int *piVar6;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
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
  
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((pAction != (Interaction *)0x0) &&
     (piVar6 = (int *)(this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead,
     piVar6 != (int *)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    iVar5 = *piVar6;
    while( true ) {
      if (iVar5 == 0) {
        piVar6 = (int *)piVar6[2];
      }
      else if (*(Interaction **)(iVar5 + 0xa0) == (Interaction *)0x0) {
        piVar6 = (int *)piVar6[2];
      }
      else {
        this_00 = GetName__C11Interaction(*(Interaction **)(iVar5 + 0xa0));
        str = GetName__C11Interaction(pAction);
        bVar2 = __eq__C8BString2RC8BString2(this_00,str);
        if (bVar2) {
          return 0;
        }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        piVar6 = (int *)piVar6[2];
      }
                    /* end of inlined section */
      if (piVar6 == (int *)0x0) break;
      iVar5 = *piVar6;
    }
  }
  pEVar3 = (EPiMenuItem *)__builtin_new(0xb4);
  pEVar3 = __11EPiMenuItem(pEVar3);
  SetActiveController__13EUIObjectNodeUi
            ((EUIObjectNode *)pEVar3,(this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl);
  pEVar3->m_IObjectHandle = objectHandle;
  pEVar1 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[2].Message)
            ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar1[2].SetBoxDims + 4,longstr);
  if (pAction == (Interaction *)0x0) {
    if (pMenu != (EPiSubMenu *)0x0) {
      pEVar3->m_pNextMenu = pMenu;
    }
  }
  else {
    pIVar4 = (Interaction *)__builtin_new(0x40);
    pIVar4 = __11InteractionRC11Interaction(pIVar4,pAction);
    pEVar3->m_pAction = pIVar4;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_88 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_8c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_90 = 0;
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[2].SetBoxDims)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar1[2].SetPos + -0x44,pEVar3,&local_90);
  iVar5 = CalcBackgroundSize__11EPiMenuItem(pEVar3);
  return iVar5;
}

void EPiSubMenu::AdjustMenuSize() {
	int size;
	EUIObjectNode *p;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	NLIterator i;
	void *pNode;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	float boxw;
	float x;
	EUIObjectNode *this;
	NLIterator i;
	void *pNode;
	
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 unaff_s0;
  int iVar5;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  undefined4 uVar6;
  float local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar5 = 0;
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  piVar1 = (int *)(this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
  iVar4 = 0;
  if (piVar1 != (int *)0x0) {
    iVar4 = *piVar1;
  }
                    /* end of inlined section */
  piVar1 = (int *)(this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
  if (iVar4 != 0) {
    iVar3 = *(int *)(iVar4 + 0xa8);
    while( true ) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      piVar2 = *(int **)(*(int *)(iVar4 + 0xc) + 8);
                    /* end of inlined section */
      if (iVar5 < iVar3) {
        iVar5 = iVar3;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      iVar4 = 0;
      if (piVar2 != (int *)0x0) {
        iVar4 = *piVar2;
      }
                    /* end of inlined section */
      if (iVar4 == 0) break;
      iVar3 = *(int *)(iVar4 + 0xa8);
    }
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  iVar4 = 0;
  if (piVar1 != (int *)0x0) {
    iVar4 = *piVar1;
  }
                    /* end of inlined section */
  if (iVar4 != 0) {
    uVar6 = 0x3d23d70a;
    iVar3 = *(int *)(iVar4 + 0x38);
    while( true ) {
      *(int *)(iVar4 + 0xa8) = iVar5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_60 = ((float)iVar5 * 32.0 + 64.0) * 0.0015625;
      local_5c = uVar6;
      (**(code **)(iVar3 + 0x34))(iVar4 + *(short *)(iVar3 + 0x30),&local_60);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      piVar1 = *(int **)(*(int *)(iVar4 + 0xc) + 8);
      iVar4 = 0;
      if (piVar1 != (int *)0x0) {
        iVar4 = *piVar1;
      }
                    /* end of inlined section */
      if (iVar4 == 0) break;
      iVar3 = *(int *)(iVar4 + 0x38);
    }
  }
  SetPositions__13EUIScrollMenu(&this->field0_0x0);
  return;
}

void EPiSubMenu::Update() {
	ISimInstance *pcurIob;
	EUIObjectNode *pLastSelected;
	
  EUIObjectNode *pEVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  EUIObjectNode *pEVar3;
  float fVar4;
  ISimInstance *this_00;
  long lVar5;
  uint flag;
  
  pEVar1 = (this->field0_0x0).field0_0x0.m_pCurOpt;
  if (pEVar1 != (EUIObjectNode *)0x0) {
    this_00 = GetObjectInstance__FUi((uint)pEVar1[2].m_pos.field0_0x0.d[0]);
    if (this_00 != (ISimInstance *)0x0) {
      flag = 8;
      if ((this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl == 0) {
        flag = 1;
      }
      SetHighlight__12ISimInstanceUib(this_00,flag,true);
    }
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (*(code *)pEVar2[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,
                       (this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl,0x10);
    if (lVar5 == 0) {
      pEVar1 = (this->field0_0x0).field0_0x0.m_pCurOpt;
      Update__13EUIScrollMenu(&this->field0_0x0);
      fVar4 = _pi_burp_dur;
      pEVar3 = (this->field0_0x0).field0_0x0.m_pCurOpt;
      if (pEVar1 != pEVar3) {
        pEVar3[2].m_WDH.field0_0x0.d[2] = 0.0;
        pEVar1[2].m_WDH.field0_0x0.d[2] = fVar4;
      }
    }
    else {
      OnCancle__10EPiSubMenu(this);
    }
  }
  return;
}

void EPiSubMenu::StartAnim() {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  int iVar1;
  int *piVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  piVar2 = (int *)(this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (piVar2 != (int *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    iVar1 = *piVar2;
    while( true ) {
                    /* end of inlined section */
      *(undefined4 *)(iVar1 + 0xac) = 0;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      piVar2 = (int *)piVar2[2];
                    /* end of inlined section */
      if (piVar2 == (int *)0x0) break;
      iVar1 = *piVar2;
    }
  }
  return;
}

void EPiSubMenu::Draw(ERC *prc) {
  return;
}

void EPiMenuItem::DUMP_STRING() {
  return;
}

void EPiSubMenu::Message(EUIObjectNode *pChild, u32 messId) {
	ObjectModule *objMod;
	cXObject *pStack;
	cXObject *pPerson;
	bool bStackObjFound;
	bool bPersonFound;
	cXObject *srch;
	Interaction *this;
	ISimInstance *pInst;
	cXObject *pXObj;
	
  short sVar1;
  Interaction *this_00;
  ObjectModule__vtable *pOVar2;
  EUIObjectNode *pEVar3;
  EUIObjectNode__vtable *pEVar4;
  bool bVar5;
  bool bVar6;
  ObjectModule *pOVar7;
  cXPerson__142_985 *pcVar8;
  cXObject__142_982 *pcVar9;
  cXObject__142_982 *pcVar10;
  ISimInstance *pIVar12;
  cXObject__56_2557 *pcVar13;
  undefined8 uVar14;
  cXObject__142_982__vtable *pcVar15;
  int iVar16;
  EPiMenu *this_01;
  EPiSubMenu *pMenu;
  cXObject__142_982 *pcVar17;
  code *pcVar11;
  
  if (messId != 1) {
    return;
  }
  this_00 = (Interaction *)pChild[2].m_pos.field0_0x0.d[1];
  if (this_00 == (Interaction *)0x0) {
    pMenu = (EPiSubMenu *)pChild[2].m_pos.field0_0x0.d[2];
                    /* end of inlined section */
    if (pMenu == (EPiSubMenu *)0x0) {
      pIVar12 = GetObjectInstance__FUi((uint)pChild[2].m_pos.field0_0x0.d[0]);
      if (pIVar12 == (ISimInstance *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
        return;
      }
      pIVar12 = GetObjectInstance__FUi((uint)pChild[2].m_pos.field0_0x0.d[0]);
      pcVar13 = (cXObject__56_2557 *)0x0;
      if (pIVar12 != (ISimInstance *)0x0) {
        pcVar13 = GetXOb__12ISimInstance(pIVar12);
      }
      if (pcVar13 == (cXObject__56_2557 *)0x0) goto LAB_001432bc;
      pEVar3 = (this->field0_0x0).field0_0x0.field0_0x0.m_pParent;
      pEVar4 = pEVar3->__vtable;
      sVar1 = *(short *)(pEVar4 + 1);
      uVar14 = (*(code *)pcVar13->__vtable[1].UserCanPlace)
                         ((int)&pcVar13->_vb2602 + (int)*(short *)&pcVar13->__vtable[1].IsPartOfMe);
      (*(code *)pEVar4[1].EUIObjectNode)
                ((int)&(pEVar3->m_ChildList).field0_0x0.m_l.m_pHead + (int)sVar1,uVar14,0x1c);
      this_01 = (EPiMenu *)(this->field0_0x0).field0_0x0.field0_0x0.m_pParent;
      pMenu = (EPiSubMenu *)pChild[2].m_pos.field0_0x0.d[2];
    }
    else {
                    /* end of inlined section */
      this_01 = (EPiMenu *)(this->field0_0x0).field0_0x0.field0_0x0.m_pParent;
    }
    SetMenu__7EPiMenuP10EPiSubMenu(this_01,pMenu);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    if (_13EUIObjectNode_m_uiSfxSelect != (undefined1 *)0x0) {
      (*(code *)_13EUIObjectNode_m_uiSfxSelect)();
                    /* end of inlined section */
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    if (_5Globs_pObjectModule == (ObjectModule *)0x0) {
      return;
    }
    pcVar8 = GetPerson__C11Interaction(this_00);
    pOVar7 = _5Globs_pObjectModule;
    if (pcVar8 == (cXPerson__142_985 *)0x0) {
      return;
    }
                    /* end of inlined section */
    pcVar17 = (cXObject__142_982 *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pcVar9 = GetStackObject__C11Interaction((Interaction *)pChild[2].m_pos.field0_0x0.d[1]);
    pcVar8 = GetPerson__C11Interaction((Interaction *)pChild[2].m_pos.field0_0x0.d[1]);
    if (pcVar8 != (cXPerson__142_985 *)0x0) {
      pcVar17 = pcVar8->_vb982;
    }
    pOVar2 = pOVar7->__vtable;
    bVar6 = false;
    bVar5 = false;
    pcVar11 = (code *)pOVar2->LevelInfoRequested;
    iVar16 = (int)&pOVar7->__vtable + (int)*(short *)&pOVar2->CleanupPeople;
    while (pcVar10 = (cXObject__142_982 *)(*pcVar11)(iVar16), pcVar10 != (cXObject__142_982 *)0x0) {
      if (pcVar17 == pcVar9) {
        if (pcVar10 == pcVar17) {
          bVar6 = true;
          bVar5 = true;
        }
        else {
LAB_0014317c:
          if (pcVar10 == pcVar17) {
            bVar5 = true;
          }
        }
      }
      else {
        if (pcVar10 != pcVar9) goto LAB_0014317c;
        bVar6 = true;
      }
      if (bVar5) {
        if (bVar6) break;
        pcVar15 = pcVar10->__vtable;
      }
      else {
        pcVar15 = pcVar10->__vtable;
      }
      pcVar11 = (code *)pcVar15[1].IsDeletedByEvict;
      iVar16 = (int)&pcVar10->_vb1019 + (int)*(short *)&pcVar15[1].GetObjectLightSource;
    }
    if ((bVar5) && (bVar6)) {
      pcVar8 = GetPerson__C11Interaction((Interaction *)pChild[2].m_pos.field0_0x0.d[1]);
      (*(code *)pcVar8->__vtable->GetJobSuitTex)
                ((int)&pcVar8->_vb982 + (int)*(short *)&pcVar8->__vtable->GetSAnimator,
                 pChild[2].m_pos.field0_0x0.d[1]);
      pEVar3 = (this->field0_0x0).field0_0x0.field0_0x0.m_pParent;
                    /* inlined from ../MSrc/interaction.h */
                    /* end of inlined section */
      pEVar4 = pEVar3->__vtable;
      uVar14 = 0x1a;
      if ((this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl != 0) {
        uVar14 = 0x1b;
      }
      (*(code *)pEVar4[1].EUIObjectNode)
                ((int)&(pEVar3->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)(pEVar4 + 1),
                 *(undefined4 *)((int)pChild[2].m_pos.field0_0x0.d[1] + 0x38),uVar14);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x30a0b17b);
      return;
                    /* end of inlined section */
    }
LAB_001432bc:
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
  }
  return;
}

void EPiSubMenu::OnCancle() {
  SetMenu__7EPiMenuP10EPiSubMenu
            ((EPiMenu *)(this->field0_0x0).field0_0x0.field0_0x0.m_pParent,this->m_pLastMenu);
  return;
}

void EPiSubMenu::Draw_Menu(ERC *prc) {
	NLIterator it;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  EUIObjectNode *pEVar1;
  EUIObjectNode **ppEVar2;
  ENodeListNode *pEVar3;
  EUIObjectNode *pEVar4;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.field0_0x0.m_flags >> 1 & 1U) != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar4 = (EUIObjectNode *)
             (this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    if (pEVar4 == (EUIObjectNode *)0x0) {
      pEVar4 = (this->field0_0x0).field0_0x0.m_pCurOpt;
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = *(EUIObjectNode **)&pEVar4->m_ChildList;
      while( true ) {
        if (pEVar1 != (this->field0_0x0).field0_0x0.m_pCurOpt) {
          (*(code *)pEVar1->__vtable->Message)
                    ((int)&(pEVar1->m_ChildList).field0_0x0.m_l.m_pHead +
                     (int)*(short *)&pEVar1->__vtable->SetBoxDims,prc);
        }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar4 = pEVar4->m_pParent;
                    /* end of inlined section */
        if (pEVar4 == (EUIObjectNode *)0x0) break;
        pEVar1 = *(EUIObjectNode **)&pEVar4->m_ChildList;
      }
      pEVar4 = (this->field0_0x0).field0_0x0.m_pCurOpt;
    }
    (*(code *)pEVar4->__vtable->Message)
              ((int)&(pEVar4->m_ChildList).field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar4->__vtable->SetBoxDims,prc);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    if (((((this->field0_0x0).m_pMorePrompts[0] != (ERShader *)0x0) &&
         ((this->field0_0x0).m_pMorePrompts[1] != (ERShader *)0x0)) &&
        (((int)(this->field0_0x0).field0_0x0.field0_0x0.m_flags >> 2 & 1U) != 0)) &&
       (ppEVar2 = (EUIObjectNode **)
                  (this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead,
       ppEVar2 != (EUIObjectNode **)0x0)) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      pEVar4 = (EUIObjectNode *)0x0;
      if (ppEVar2 != (EUIObjectNode **)0x0) {
        pEVar4 = *ppEVar2;
      }
                    /* end of inlined section */
      if (pEVar4 != (this->field0_0x0).m_pFirstVis) {
        DrawBlinkingPrompt__10EPiSubMenuP3ERCi(this,prc,0);
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      pEVar3 = (this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail;
      pEVar4 = (EUIObjectNode *)0x0;
      if (pEVar3 != (ENodeListNode *)0x0) {
        pEVar4 = (EUIObjectNode *)pEVar3->data;
      }
                    /* end of inlined section */
      if (pEVar4 != (this->field0_0x0).m_pLastVis) {
        DrawBlinkingPrompt__10EPiSubMenuP3ERCi(this,prc,1);
      }
    }
  }
  return;
}

void EPiSubMenu::DrawBlinkingPrompt(ERC *prc, int which) {
	ETexture *ptxt;
	float w;
	float h;
	EVec4 vRed;
	static int _0 = 0;
	static int _1 = 1;
	static float piPromtTime = 0.f;
	EVec4 *color[2];
	float xpos;
	float ypos;
	EVec2 vPos;
	EVec2 vArrowDims;
	ETexture *this;
	EGraphics *this;
	ETexture *this;
	int t;
	int i;
	int value;
	int value;
	int value;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIMenu *this;
	EUIMenu *this;
	EUIObjectNode *this;
	float x;
	float y;
	
  int *piVar1;
  EUIObjectNode *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  uint uVar4;
  ulong *puVar5;
  EVec4__null___1__1 *pEVar6;
  EVec4__null___1__1 *pEVar7;
  int iVar8;
  bool bVar9;
  EVec4 *pEVar10;
  float *pfVar11;
  EVec4 *pEVar12;
  EVec4 *pEVar13;
  int iVar14;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  EVec4 vRed;
  EVec4 *color [2];
  EVec2 vPos;
  EVec2 vArrowDims;
  float local_80;
  float local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  pEVar13 = &vRed;
  local_40 = (int)unaff_s2;
  uStack_3c = (int)((ulong)unaff_s2 >> 0x20);
  local_50 = (int)unaff_s1;
  uStack_4c = (int)((ulong)unaff_s1 >> 0x20);
  local_60 = (int)unaff_s0;
  uStack_5c = (int)((ulong)unaff_s0 >> 0x20);
  local_30 = (int)unaff_retaddr;
  uStack_2c = (int)((ulong)unaff_retaddr >> 0x20);
  if (((this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl != 1) ||
     (bVar9 = IsTwoPlayer__7EGlobal(&_globals), bVar9)) {
    iVar8 = _1_4234;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    iVar14 = *(int *)((((this->field0_0x0).m_pMorePrompts[which]->m_rtextureList).field0_0x0.m_l.
                      m_pHead)->data + 0x14);
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
    fVar16 = (float)(uint)*(ushort *)(iVar14 + 0x10) / (float)_pGfx->m_xscreen;
    piPromtTime_4235 = piPromtTime_4235 + _dt;
    fVar18 = (float)(uint)*(ushort *)(iVar14 + 0x12) / (float)_pGfx->m_yscreen;
    if (0.85 < piPromtTime_4235) {
      _1_4234 = _0_4233;
      _0_4233 = iVar8;
      piPromtTime_4235 = 0.0;
    }
    uVar4 = (int)color + 7U & 7;
    puVar5 = (ulong *)(((int)color + 7U) - uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)_PTR__RED_003abf20 >> (7 - uVar4) * 8;
    color = _PTR__RED_003abf20;
    fVar15 = piPromtTime_4235 * 1.176471;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    pEVar10 = color[_1_4234];
    pEVar12 = color[_0_4233];
    iVar14 = 3;
    do {
      pEVar6 = &pEVar12->field0_0x0;
      iVar14 = iVar14 + -1;
      pEVar7 = &pEVar10->field0_0x0;
      pEVar12 = (EVec4 *)((int)&pEVar12->field0_0x0 + 4);
      pEVar10 = (EVec4 *)((int)&pEVar10->field0_0x0 + 4);
      *(float *)pEVar13 = pEVar6->d[0] + (pEVar7->d[0] - pEVar6->d[0]) * fVar15;
      pEVar13 = (EVec4 *)((int)pEVar13 + 4);
    } while (-1 < iVar14);
                    /* end of inlined section */
    Select__8ERShaderP3ERCi((this->field0_0x0).m_pMorePrompts[which],prc,0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    piVar1 = (int *)(this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
    if (piVar1 == (int *)0x0) {
      iVar14 = 0;
    }
    else {
      iVar14 = *piVar1;
    }
                    /* end of inlined section */
    if (iVar14 != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
      pEVar2 = (this->field0_0x0).field0_0x0.m_pCurOpt;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar15 = (pEVar2->m_WDH).field0_0x0.d[0];
                    /* end of inlined section */
      pfVar11 = (float *)(*(code *)pEVar2->__vtable[1].OnButtonRepeat)
                                   ((int)&(pEVar2->m_ChildList).field0_0x0.m_l.m_pHead +
                                    (int)*(short *)&pEVar2->__vtable[1].StateChanged);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      vPos.field0_0x0.d[0] = *pfVar11 + ABS(fVar16 - fVar15) * 0.5;
      if (which == 0) {
        pEVar2 = (this->field0_0x0).m_pFirstVis;
        pEVar3 = pEVar2->__vtable;
        iVar14 = (*(code *)pEVar3[1].OnButtonRepeat)
                           ((int)&(pEVar2->m_ChildList).field0_0x0.m_l.m_pHead +
                            (int)*(short *)&pEVar3[1].StateChanged);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        vPos.field0_0x0.d[1] = *(float *)(iVar14 + 8) - (fVar18 + 0.004);
      }
      else {
        pEVar2 = (this->field0_0x0).m_pLastVis;
        pEVar3 = pEVar2->__vtable;
        iVar14 = (*(code *)pEVar3[1].OnButtonRepeat)
                           ((int)&(pEVar2->m_ChildList).field0_0x0.m_l.m_pHead +
                            (int)*(short *)&pEVar3[1].StateChanged);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        vPos.field0_0x0.d[1] =
             *(float *)(iVar14 + 8) + (((this->field0_0x0).m_pLastVis)->m_WDH).field0_0x0.d[2] +
             fVar18 * 0.5 + 0.004;
      }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_80 = vPos.field0_0x0.d[0] + 0.005;
      local_7c = vPos.field0_0x0.d[1] + 0.005;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_70 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_6c = 0x3f800000;
                    /* end of inlined section */
      uVar17 = 0;
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_80,&local_70
                 ,0x35f4d0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_80 = 1.0;
      local_7c = 1.0;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (uVar17,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vPos,
                 &local_80,&vRed);
    }
  }
  return;
}

EPiMenu* EPiMenu::EPiMenu(int playerid) {
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  EUIObjectNode__vtable *pEVar1;
  
  __13EUIObjectNode(&this->field0_0x0);
  (this->field0_0x0).m_activeCtrl = playerid;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_menuList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_7EPiMenu;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_menuList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  *(undefined4 *)&this->m_bExit = 0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  this->m_pGoHereOb = (cXObject__15_2008 *)0x0;
  this->m_pCurMenu = (EPiSubMenu *)0x0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (*_vt_7EPiMenu[8]._4_4_)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)(short)_vt_7EPiMenu[8].__delta,0x10,1);
  pEVar1 = (this->field0_0x0).__vtable;
  (this->field0_0x0).m_flags = (this->field0_0x0).m_flags | 0x10;
  (*(code *)pEVar1[1].Draw)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar1[1].Update,6,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->field0_0x0).m_flags = (this->field0_0x0).m_flags & 0xfffffff9;
  return this;
}

void EPiMenu::~EPiMenu(int __in_chrg) {
	cXObject *srch;
	
  short sVar1;
  cXObject__15_2008__vtable *pcVar2;
  ObjectModule__vtable *pOVar3;
  ObjectModule__vtable **ppOVar4;
  cXObject__15_2008 *pcVar5;
  undefined8 uVar7;
  int iVar8;
  code *pcVar6;
  
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_7EPiMenu;
  CleanUpAllMenus__7EPiMenu(this);
  if ((this->m_pGoHereOb != (cXObject__15_2008 *)0x0) &&
     (_5Globs_pObjectModule != (ObjectModule *)0x0)) {
    pcVar6 = (code *)_5Globs_pObjectModule->__vtable->LevelInfoRequested;
    iVar8 = (int)&_5Globs_pObjectModule->__vtable +
            (int)*(short *)&_5Globs_pObjectModule->__vtable->CleanupPeople;
    while (pcVar5 = (cXObject__15_2008 *)(*pcVar6)(iVar8), pcVar5 != (cXObject__15_2008 *)0x0) {
      pcVar2 = pcVar5->__vtable;
      if (pcVar5 == this->m_pGoHereOb) {
        pOVar3 = _5Globs_pObjectModule->__vtable;
        sVar1 = *(short *)&pOVar3->GetNumObjects;
        ppOVar4 = &_5Globs_pObjectModule->__vtable;
        uVar7 = (*(code *)pcVar2[1].UserCanPlace)
                          ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar2[1].IsPartOfMe);
        (*(code *)pOVar3->CheckIntegrity)((int)ppOVar4 + (int)sVar1,uVar7);
        this->m_pGoHereOb = (cXObject__15_2008 *)0x0;
        break;
      }
      pcVar6 = (code *)pcVar2[1].IsDeletedByEvict;
      iVar8 = (int)&pcVar5->_vb3534 + (int)*(short *)&pcVar2[1].GetObjectLightSource;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/epimenu.h */
  RemoveAll__9ENodeList(&(this->m_menuList).field0_0x0);
                    /* end of inlined section */
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void EPiMenu::Update() {
	EUIObjectNode *this;
	
  EPiSubMenu *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((((this->field0_0x0).m_flags & 4) != 0) &&
     (pEVar1 = this->m_pCurMenu, pEVar1 != (EPiSubMenu *)0x0)) {
    TurnOffAllHighlights__11EIObjectManUi
              ((_globals._pCurHouse)->m_pObjectMan,(this->field0_0x0).m_activeCtrl);
    pEVar2 = (this->m_pCurMenu->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar2->SetBoxDims)
              ((int)(this->m_pCurMenu->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar2->SetPos + -0x44);
    if (pEVar1 != this->m_pCurMenu) {
      _pimenuAlphaTime = 0.0;
      StartAnim__10EPiSubMenu(this->m_pCurMenu);
    }
    Die__7EPiMenu(this);
  }
  return;
}

void EPiMenu::Draw(ERC *prc) {
	EUIObjectNode *this;
	EUIObjectNode *this;
	float mu;
	float u;
	
  uint uVar1;
  float fVar2;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  uVar1 = (this->field0_0x0).m_flags;
                    /* end of inlined section */
  if (((uVar1 & 2) != 0) && (this->m_pCurMenu != (EPiSubMenu *)0x0)) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)uVar1 >> 1 & 1U) == 0) {
      _pimenuAlpha = 0.0;
      _pimenuAlphaTime = 0.0;
    }
    else {
      _pimenuAlphaTime = _pimenuAlphaTime + _dt;
      fVar2 = _pimenuAlphaTime / _pimenuAlphaFadeDur_;
      if (0.0 <= fVar2) {
        fVar2 = (float)((int)fVar2 * (uint)(fVar2 < 1.0) | (uint)(fVar2 >= 1.0) * 0x3f800000);
      }
      else {
        fVar2 = 0.0;
      }
                    /* end of inlined section */
      _pimenuAlpha = 0.0;
      if (0.0 <= fVar2) {
        _pimenuAlpha = (float)((int)fVar2 * (uint)(fVar2 < 1.0) | (uint)(fVar2 >= 1.0) * 0x3f800000)
        ;
      }
    }
    Draw_Menu__10EPiSubMenuP3ERC(this->m_pCurMenu,prc);
  }
  return;
}

void EPiMenu::Message(EUIObjectNode *pChild, u32 messId) {
	EUIMenu *this;
	cXObject *srch;
	
  short sVar1;
  Interaction *this_00;
  cXObject__15_2008__vtable *pcVar2;
  ObjectModule__vtable *pOVar3;
  EUIObjectNode__vtable *pEVar4;
  ObjectModule__vtable **ppOVar5;
  cXObject__142_982 *pcVar6;
  cXObject__15_2008 *pcVar7;
  undefined8 uVar9;
  int iVar10;
  EUIObjectNode *pEVar11;
  code *pcVar8;
  
  if (messId < 0x1a) {
    return;
  }
  if (0x1b < messId) {
    if (messId != 0x1c) {
      return;
    }
    pEVar11 = (this->field0_0x0).m_pParent;
    pEVar4 = pEVar11->__vtable;
    (*(code *)pEVar4[1].EUIObjectNode)
              ((int)&(pEVar11->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)(pEVar4 + 1),
               pChild,0x1c);
    return;
  }
  Kill__7EPiMenu(this);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  this_00 = (Interaction *)
            (this->m_pCurMenu->field0_0x0).field0_0x0.m_pCurOpt[2].m_pos.field0_0x0.d[1];
                    /* end of inlined section */
  if (this_00 == (Interaction *)0x0) {
    pcVar7 = this->m_pGoHereOb;
  }
  else {
    pcVar6 = GetStackObject__C11Interaction(this_00);
    if ((cXObject__142_982 *)this->m_pGoHereOb == pcVar6) {
      pEVar11 = (this->field0_0x0).m_pParent;
      goto LAB_00143bf4;
    }
    pcVar7 = this->m_pGoHereOb;
  }
  if (pcVar7 == (cXObject__15_2008 *)0x0) {
    pEVar11 = (this->field0_0x0).m_pParent;
  }
  else if (_5Globs_pObjectModule == (ObjectModule *)0x0) {
    pEVar11 = (this->field0_0x0).m_pParent;
  }
  else {
    pcVar8 = (code *)_5Globs_pObjectModule->__vtable->LevelInfoRequested;
    iVar10 = (int)&_5Globs_pObjectModule->__vtable +
             (int)*(short *)&_5Globs_pObjectModule->__vtable->CleanupPeople;
    while (pcVar7 = (cXObject__15_2008 *)(*pcVar8)(iVar10), pcVar7 != (cXObject__15_2008 *)0x0) {
      pcVar2 = pcVar7->__vtable;
      if (pcVar7 == this->m_pGoHereOb) {
        pOVar3 = _5Globs_pObjectModule->__vtable;
        sVar1 = *(short *)&pOVar3->GetNumObjects;
        ppOVar5 = &_5Globs_pObjectModule->__vtable;
        uVar9 = (*(code *)pcVar2[1].UserCanPlace)
                          ((int)&pcVar7->_vb3534 + (int)*(short *)&pcVar2[1].IsPartOfMe);
        (*(code *)pOVar3->CheckIntegrity)((int)ppOVar5 + (int)sVar1,uVar9);
        this->m_pGoHereOb = (cXObject__15_2008 *)0x0;
        pEVar11 = (this->field0_0x0).m_pParent;
        goto LAB_00143bf4;
      }
      pcVar8 = (code *)pcVar2[1].IsDeletedByEvict;
      iVar10 = (int)&pcVar7->_vb3534 + (int)*(short *)&pcVar2[1].GetObjectLightSource;
    }
    pEVar11 = (this->field0_0x0).m_pParent;
  }
LAB_00143bf4:
  uVar9 = 0x1a;
  if ((this->field0_0x0).m_activeCtrl != 0) {
    uVar9 = 0x1b;
  }
  (*(code *)pEVar11->__vtable[1].EUIObjectNode)
            ((int)&(pEVar11->m_ChildList).field0_0x0.m_l.m_pHead +
             (int)*(short *)(pEVar11->__vtable + 1),pChild,uVar9);
  return;
}

void EPiMenu::CleanUpActionMenus() {
	NLIterator i;
	NLIterator next;
	EPiSubMenu *pData;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  int iVar4;
  ENodeListNode *i;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  i = (this->m_menuList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (i != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar1 = i->data;
    while( true ) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = i->pNext;
                    /* end of inlined section */
      iVar4 = compare__C8BString2PCUsUi((BString2 *)(uVar1 + 0xb4),_OBJECT_NAME,0);
      if (iVar4 != 0) {
        pEVar3 = (this->field0_0x0).__vtable;
        (*(code *)pEVar3[1].RemoveChild)
                  ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar3[1].AddChild,uVar1);
        if (uVar1 != 0) {
          (**(code **)(*(int *)(uVar1 + 0x38) + 0xc))
                    (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x38) + 8),3);
        }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        Remove__9ENodeListP17NLIteratorPtrType(&(this->m_menuList).field0_0x0,(undefined1 *)i);
      }
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar2->data;
      i = pEVar2;
    }
  }
  return;
}

void EPiMenu::CleanUpAllMenus() {
	TNodeList<EPiSubMenu *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  uint uVar1;
  EUIObjectNode__vtable *pEVar2;
  ENodeListNode *pEVar3;
  
                    /* end of inlined section */
  RemoveAllChildren__13EUIObjectNode(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_menuList).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar1 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      if (uVar1 != 0) {
        (**(code **)(*(int *)(uVar1 + 0x38) + 0xc))
                  (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x38) + 8),3);
      }
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_menuList).field0_0x0);
  pEVar2 = (this->field0_0x0).__vtable;
                    /* end of inlined section */
  this->m_pCurMenu = (EPiSubMenu *)0x0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (*(code *)pEVar2[1].Draw)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar2[1].Update,0x10,1);
  pEVar2 = (this->field0_0x0).__vtable;
  (this->field0_0x0).m_flags = (this->field0_0x0).m_flags | 0x10;
  (*(code *)pEVar2[1].Draw)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar2[1].Update,6,0);
  (this->field0_0x0).m_flags = (this->field0_0x0).m_flags & 0xfffffff9;
  return;
}

bool EPiMenu::CreateMenuForGoHere() {
	InteractionList interactions;
	ObjTestSim testSim;
	
  bool bVar1;
  InteractionList interactions;
  ObjTestSim testSim;
  
  CreateGoHereObjectForMenu__7EPiMenu(this);
  if (this->m_pGoHereOb == (cXObject__15_2008 *)0x0) {
    bVar1 = false;
  }
  else if (_globals._pSelectedSims[(this->field0_0x0).m_activeCtrl] == (cXPerson__150_1300 *)0x0) {
    bVar1 = false;
  }
  else {
    __15InteractionList(&interactions);
    __10ObjTestSimP8cXPersonP8cXObjectb
              (&testSim,(cXPerson__124_906 *)
                        _globals._pSelectedSims[(this->field0_0x0).m_activeCtrl],
               (cXObject__124_908 *)this->m_pGoHereOb,false);
    AppendInteractions__10ObjTestSimR15InteractionList(&testSim,&interactions);
    CreateInteractionMenu__7EPiMenuP8cXObjectR15InteractionList
              (this,(cXObject__32_2674 *)this->m_pGoHereOb,&interactions);
    ___10ObjTestSim(&testSim,2);
    ___15InteractionList(&interactions,2);
    bVar1 = true;
  }
  return bVar1;
}

bool EPiMenu::CreateObjectMenuFromOjbList(TNodeList<ISimInstance *> &objlist) {
	EUIObjectNode *this;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	cXObject *pXOb;
	InteractionList mInteractions;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EPiSubMenu *pNew;
	NLIterator nli;
	InteractionList goHereList;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EPiSubMenu *data;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	cXObject *pObj;
	u16 *longstr;
	InteractionList mInteractions;
	NLIterator i;
	NLIterator i;
	EPiSubMenu *pActionMenu;
	ObjTestSim goHereTesSim;
	Interaction *node;
	Interaction *node;
	
  EUIObjectNode__vtable *pEVar1;
  cXObject__56_2557__vtable *pcVar2;
  TreeSim *pTVar3;
  TreeSim__vtable *pTVar4;
  bool bVar5;
  EPiSubMenu *pEVar6;
  cXObject__56_2557 *pcVar7;
  ObjSelector *pOVar8;
  BString2 *pBVar9;
  short *psVar10;
  ELocString EVar11;
  uint uVar12;
  EPiSubMenu *pMenu;
  ISimInstance *pIVar13;
  long lVar14;
  ENodeListNode *pEVar15;
  InteractionList mInteractions;
  ObjTestSim goHereTesSim;
  
  if (_globals._pSelectedSims[(this->field0_0x0).m_activeCtrl] == (cXPerson__150_1300 *)0x0) {
    bVar5 = false;
  }
  else {
    _pimenuAlphaTime = 0.0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    pEVar1 = (this->field0_0x0).__vtable;
                    /* end of inlined section */
    *(undefined4 *)&this->m_bExit = 0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    (*(code *)pEVar1[1].Draw)
              ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar1[1].Update,0x10,1);
    pEVar1 = (this->field0_0x0).__vtable;
    (this->field0_0x0).m_flags = (this->field0_0x0).m_flags | 0x10;
    (*(code *)pEVar1[1].Draw)
              ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar1[1].Update,6,1);
    (this->field0_0x0).m_flags = (this->field0_0x0).m_flags | 6;
    pEVar15 = (objlist->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
    if (pEVar15 == (ENodeListNode *)0x0) {
      bVar5 = CreateMenuForGoHere__7EPiMenu(this);
    }
    else {
                    /* end of inlined section */
      if (pEVar15 == (objlist->field0_0x0).m_l.m_pTail) {
                    /* end of inlined section */
        pcVar7 = GetXOb__12ISimInstance((ISimInstance *)pEVar15->data);
        __15InteractionList(&mInteractions);
        CollectInteractionsForObject__FP8cXObjectR15InteractionListi
                  ((cXObject__47_3244 *)pcVar7,&mInteractions,(this->field0_0x0).m_activeCtrl);
        uVar12 = size__C15InteractionList(&mInteractions);
        if (uVar12 == 0) {
          ___15InteractionList(&mInteractions,2);
          return false;
        }
        CreateInteractionMenu__7EPiMenuP8cXObjectR15InteractionList
                  (this,(cXObject__32_2674 *)pcVar7,&mInteractions);
        ___15InteractionList(&mInteractions,2);
      }
      else {
                    /* end of inlined section */
        if ((this->m_menuList).field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0) {
          CleanUpAllMenus__7EPiMenu(this);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
          pEVar1 = (this->field0_0x0).__vtable;
          (*(code *)pEVar1[1].Draw)
                    ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                     (int)*(short *)&pEVar1[1].Update,0x10,1);
          pEVar1 = (this->field0_0x0).__vtable;
          (this->field0_0x0).m_flags = (this->field0_0x0).m_flags | 0x10;
          (*(code *)pEVar1[1].Draw)
                    ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                     (int)*(short *)&pEVar1[1].Update,6,1);
          (this->field0_0x0).m_flags = (this->field0_0x0).m_flags | 6;
        }
                    /* end of inlined section */
        pEVar6 = (EPiSubMenu *)__builtin_new(0xb8);
        pEVar6 = __10EPiSubMenui(pEVar6,(this->field0_0x0).m_activeCtrl);
        Init__10EPiSubMenu(pEVar6);
        assign__8BString2PCUs(&pEVar6->m_name,_OBJECT_NAME);
        pEVar1 = (this->field0_0x0).__vtable;
        (*(code *)pEVar1[1].GetPos)
                  ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar1[1].OnStickRepeat,pEVar6);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi(&(this->m_menuList).field0_0x0,(uint)pEVar6);
                    /* end of inlined section */
        this->m_pCurMenu = pEVar6;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
        pEVar15 = (objlist->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
        if (pEVar15 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          pIVar13 = (ISimInstance *)pEVar15->data;
          while( true ) {
                    /* end of inlined section */
            pcVar7 = GetXOb__12ISimInstance(pIVar13);
            pOVar8 = (ObjSelector *)
                     (*(code *)pcVar7->__vtable[1].SetLevel)
                               ((int)&pcVar7->_vb2602 +
                                (int)*(short *)&pcVar7->__vtable[1].GetTreeID);
            bVar5 = GetIsPerson__11ObjSelector(pOVar8);
            pcVar2 = pcVar7->__vtable;
            if (bVar5) {
              pOVar8 = (ObjSelector *)
                       (*(code *)pcVar2[1].SetLevel)
                                 ((int)&pcVar7->_vb2602 + (int)*(short *)&pcVar2[1].GetTreeID);
              pBVar9 = GetUserName__11ObjSelector(pOVar8);
              psVar10 = c_str__C8BString2(pBVar9);
            }
            else {
              lVar14 = (*(code *)pcVar2[1].GetFrontFaceDirection)
                                 ((int)&pcVar7->_vb2602 +
                                  (int)*(short *)&pcVar2[1].GetInteractionLeader);
              pcVar2 = pcVar7->__vtable;
              if (lVar14 == 0) {
                pOVar8 = (ObjSelector *)
                         (*(code *)pcVar2[1].SetLevel)
                                   ((int)&pcVar7->_vb2602 + (int)*(short *)&pcVar2[1].GetTreeID);
              }
              else {
                pOVar8 = (ObjSelector *)
                         (*(code *)pcVar2[1].SetLevel)
                                   ((int)&pcVar7->_vb2602 + (int)*(short *)&pcVar2[1].GetTreeID);
                pOVar8 = GetMasterSelector__11ObjSelector(pOVar8);
                    /* end of inlined section */
              }
              EVar11 = GetCatalogShortName__11ObjSelector(pOVar8);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
              psVar10 = *EVar11.ptr;
            }
                    /* end of inlined section */
            __15InteractionList(&mInteractions);
            CollectInteractionsForObject__FP8cXObjectR15InteractionListi
                      ((cXObject__47_3244 *)pcVar7,&mInteractions,(this->field0_0x0).m_activeCtrl);
            uVar12 = size__C15InteractionList(&mInteractions);
            if (uVar12 != 0) {
              pMenu = CreateInteractionMenu__7EPiMenuP8cXObjectR15InteractionList
                                (this,(cXObject__32_2674 *)pcVar7,&mInteractions);
              uVar12 = GetHandleFromISimInstance__FP12ISimInstance(pIVar13);
              CreateItem__10EPiSubMenuPCUsUiP11InteractionP10EPiSubMenu
                        (pEVar6,psVar10,uVar12,(Interaction *)0x0,pMenu);
            }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
            pEVar15 = (ENodeListNode *)(&pEVar15->data)[2];
                    /* end of inlined section */
            ___15InteractionList(&mInteractions,2);
            if (pEVar15 == (ENodeListNode *)0x0) break;
            pIVar13 = (ISimInstance *)pEVar15->data;
          }
        }
        __15InteractionList(&mInteractions);
        CreateGoHereObjectForMenu__7EPiMenu(this);
        if ((cXObject__124_908 *)this->m_pGoHereOb != (cXObject__124_908 *)0x0) {
          __10ObjTestSimP8cXPersonP8cXObjectb
                    (&goHereTesSim,
                     (cXPerson__124_906 *)_globals._pSelectedSims[(this->field0_0x0).m_activeCtrl],
                     (cXObject__124_908 *)this->m_pGoHereOb,false);
          AppendInteractions__10ObjTestSimR15InteractionList(&goHereTesSim,&mInteractions);
          uVar12 = size__C15InteractionList(&mInteractions);
          if (uVar12 != 0) {
                    /* inlined from ../MSrc/objtestsim.h */
                    /* end of inlined section */
            pBVar9 = GetName__C11Interaction(mInteractions.m_pFirst);
            psVar10 = c_str__C8BString2(pBVar9);
            pTVar3 = this->m_pGoHereOb->_vb3534;
            pTVar4 = pTVar3->__vtable;
            pIVar13 = (ISimInstance *)
                      (*(code *)pTVar4[1].GetISimInstance)
                                ((int)&pTVar3->m_pObject + (int)*(short *)&pTVar4[1].GetLastResult);
            uVar12 = GetHandleFromISimInstance__FP12ISimInstance(pIVar13);
                    /* inlined from ../MSrc/objtestsim.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/objtestsim.h */
                    /* end of inlined section */
            CreateItem__10EPiSubMenuPCUsUiP11InteractionP10EPiSubMenu
                      (pEVar6,psVar10,uVar12,mInteractions.m_pFirst,(EPiSubMenu *)0x0);
          }
          ___10ObjTestSim(&goHereTesSim,2);
        }
        ___15InteractionList(&mInteractions,2);
      }
      AdjustMenuSizes__7EPiMenu(this);
      bVar5 = true;
    }
  }
  return bVar5;
}

bool EPiMenu::CreateObjectMenuForBuyBuild(TNodeList<ISimInstance *> &objlist) {
	EUIObjectNode *this;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EPiSubMenu *pNew;
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EPiSubMenu *data;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	cXObject *pObj;
	u16 *longstr;
	NLIterator i;
	NLIterator i;
	
  EUIObjectNode__vtable *pEVar1;
  ISimInstance *this_00;
  cXObject__56_2557__vtable *pcVar2;
  bool bVar3;
  EPiSubMenu *pEVar4;
  cXObject__56_2557 *pcVar5;
  ObjSelector *pOVar6;
  BString2 *this_01;
  short *longstr;
  ELocString EVar7;
  uint objectHandle;
  long lVar8;
  ENodeListNode *pEVar9;
  
  _pimenuAlphaTime = 0.0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bExit = 0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Draw)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar1[1].Update,0x10,1);
  pEVar1 = (this->field0_0x0).__vtable;
  (this->field0_0x0).m_flags = (this->field0_0x0).m_flags | 0x10;
  (*(code *)pEVar1[1].Draw)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar1[1].Update,6,1);
  (this->field0_0x0).m_flags = (this->field0_0x0).m_flags | 6;
                    /* end of inlined section */
  bVar3 = false;
  if ((objlist->field0_0x0).m_l.m_pHead != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    if ((this->m_menuList).field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0) {
      CleanUpAllMenus__7EPiMenu(this);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1[1].Draw)
                ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar1[1].Update,0x10,1);
      pEVar1 = (this->field0_0x0).__vtable;
      (this->field0_0x0).m_flags = (this->field0_0x0).m_flags | 0x10;
      (*(code *)pEVar1[1].Draw)
                ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar1[1].Update,6,1);
      (this->field0_0x0).m_flags = (this->field0_0x0).m_flags | 6;
    }
                    /* end of inlined section */
    pEVar4 = (EPiSubMenu *)__builtin_new(0xb8);
    pEVar4 = __10EPiSubMenui(pEVar4,(this->field0_0x0).m_activeCtrl);
    Init__10EPiSubMenu(pEVar4);
    assign__8BString2PCUs(&pEVar4->m_name,_OBJECT_NAME);
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetPos)
              ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar1[1].OnStickRepeat,pEVar4);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&(this->m_menuList).field0_0x0,(uint)pEVar4);
                    /* end of inlined section */
    this->m_pCurMenu = pEVar4;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar9 = (objlist->field0_0x0).m_l.m_pHead;
                    /* end of inlined section */
    if (pEVar9 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      this_00 = (ISimInstance *)pEVar9->data;
      while( true ) {
        pcVar5 = GetXOb__12ISimInstance(this_00);
        pOVar6 = (ObjSelector *)
                 (*(code *)pcVar5->__vtable[1].SetLevel)
                           ((int)&pcVar5->_vb2602 + (int)*(short *)&pcVar5->__vtable[1].GetTreeID);
        bVar3 = GetIsPerson__11ObjSelector(pOVar6);
        pcVar2 = pcVar5->__vtable;
        if (bVar3) {
          pOVar6 = (ObjSelector *)
                   (*(code *)pcVar2[1].SetLevel)
                             ((int)&pcVar5->_vb2602 + (int)*(short *)&pcVar2[1].GetTreeID);
          this_01 = GetUserName__11ObjSelector(pOVar6);
          longstr = c_str__C8BString2(this_01);
        }
        else {
          lVar8 = (*(code *)pcVar2[1].GetFrontFaceDirection)
                            ((int)&pcVar5->_vb2602 + (int)*(short *)&pcVar2[1].GetInteractionLeader)
          ;
          pcVar2 = pcVar5->__vtable;
          if (lVar8 == 0) {
            pOVar6 = (ObjSelector *)
                     (*(code *)pcVar2[1].SetLevel)
                               ((int)&pcVar5->_vb2602 + (int)*(short *)&pcVar2[1].GetTreeID);
          }
          else {
            pOVar6 = (ObjSelector *)
                     (*(code *)pcVar2[1].SetLevel)
                               ((int)&pcVar5->_vb2602 + (int)*(short *)&pcVar2[1].GetTreeID);
            pOVar6 = GetMasterSelector__11ObjSelector(pOVar6);
                    /* end of inlined section */
          }
          EVar7 = GetCatalogShortName__11ObjSelector(pOVar6);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
          longstr = *EVar7.ptr;
        }
                    /* end of inlined section */
        objectHandle = GetHandleFromISimInstance__FP12ISimInstance(this_00);
        CreateItem__10EPiSubMenuPCUsUiP11InteractionP10EPiSubMenu
                  (pEVar4,longstr,objectHandle,(Interaction *)0x0,(EPiSubMenu *)0x0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar9 = (ENodeListNode *)(&pEVar9->data)[2];
                    /* end of inlined section */
        if (pEVar9 == (ENodeListNode *)0x0) break;
        this_00 = (ISimInstance *)pEVar9->data;
      }
    }
    AdjustMenuSizes__7EPiMenu(this);
    bVar3 = true;
  }
  return bVar3;
}

void EPiMenu::AdjustMenuSizes() {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_menuList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    for (pEVar1 = pEVar1->pNext; pEVar1 != (ENodeListNode *)0x0; pEVar1 = pEVar1->pNext) {
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    for (pEVar1 = (this->m_menuList).field0_0x0.m_l.m_pHead; pEVar1 != (ENodeListNode *)0x0;
        pEVar1 = (ENodeListNode *)(&pEVar1->data)[2]) {
                    /* end of inlined section */
      AdjustMenuSize__10EPiSubMenu((EPiSubMenu *)pEVar1->data);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    }
  }
  return;
}

EPiSubMenu* EPiMenu::FindSubMenu(BString2 &str) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  bool bVar1;
  EPiSubMenu *pEVar2;
  ENodeListNode *pEVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_menuList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar3 == (ENodeListNode *)0x0) {
LAB_001445f8:
    pEVar2 = (EPiSubMenu *)0x0;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar2 = (EPiSubMenu *)pEVar3->data;
    while (bVar1 = __eq__C8BString2RC8BString2(&pEVar2->m_name,str), !bVar1) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar3 = (ENodeListNode *)(&pEVar3->data)[2];
                    /* end of inlined section */
      if (pEVar3 == (ENodeListNode *)0x0) goto LAB_001445f8;
      pEVar2 = (EPiSubMenu *)pEVar3->data;
    }
  }
  return pEVar2;
}

void EPiMenu::ProcessAction(Interaction *pAction, BString2 &szRoot) {
	EPiSubMenu *pLastMenu;
	BString2 name;
	int count;
	int first;
	cXObject *pStackObj;
	ISimInstance *pIsim;
	BString2 word;
	BString2 szMenu;
	EPiSubMenu *pMenu;
	EPiSubMenu *data;
	BString2 opt;
	cXObject *pStackObj;
	ISimInstance *pIsim;
	
  TreeSim__vtable *pTVar1;
  EUIObjectNode__vtable *pEVar2;
  int iVar3;
  EPiSubMenu *this_00;
  BString2 *str;
  uint uVar4;
  cXObject__142_982 *pcVar5;
  ISimInstance *pIVar6;
  short *psVar7;
  EPiSubMenu *pEVar8;
  uint uVar9;
  uint pos;
  int iVar10;
  BString2 name;
  BString2 word;
  BString2 szMenu;
  BString2 opt;
  
  uVar4 = 0xffffffff;
  this_00 = FindSubMenu__7EPiMenuRC8BString2(this,szRoot);
  str = GetName__C11Interaction(pAction);
  __8BString2RC8BString2UiUi(&name,str,0,0xffffffff);
  iVar3 = 0;
  do {
    iVar10 = iVar3;
    uVar4 = find__C8BString2UsUi(&name,0x2f,uVar4 + 1);
    iVar3 = iVar10 + 1;
  } while (uVar4 != 0xffffffff);
  if (iVar10 == 0) {
    pcVar5 = GetStackObject__C11Interaction(pAction);
    pIVar6 = (ISimInstance *)0x0;
    if (pcVar5 != (cXObject__142_982 *)0x0) {
      pTVar1 = pcVar5->_vb1019->__vtable;
      pIVar6 = (ISimInstance *)
               (*(code *)pTVar1[1].GetISimInstance)
                         ((int)&pcVar5->_vb1019->m_pObject + (int)*(short *)&pTVar1[1].GetLastResult
                         );
    }
    psVar7 = c_str__C8BString2(&name);
    uVar4 = GetHandleFromISimInstance__FP12ISimInstance(pIVar6);
    CreateItem__10EPiSubMenuPCUsUiP11InteractionP10EPiSubMenu
              (this_00,psVar7,uVar4,pAction,(EPiSubMenu *)0x0);
    ___8BString2(&name,2);
  }
  else {
    uVar4 = find__C8BString2UsUi(&name,0x2f,0);
    do {
      __8BString2(&word);
      assign__8BString2RC8BString2UiUi(&word,&name,0,uVar4);
      __pl__FRC8BString2T0(&szMenu,&word);
      pEVar8 = FindSubMenu__7EPiMenuRC8BString2(this,&szMenu);
      if (pEVar8 == (EPiSubMenu *)0x0) {
        pEVar8 = (EPiSubMenu *)__builtin_new(0xb8);
        pEVar8 = __10EPiSubMenui(pEVar8,(this->field0_0x0).m_activeCtrl);
        pEVar8->m_pLastMenu = this_00;
        Init__10EPiSubMenu(pEVar8);
        assign__8BString2RC8BString2UiUi(&pEVar8->m_name,&szMenu,0,0xffffffff);
        psVar7 = c_str__C8BString2(&word);
        CreateItem__10EPiSubMenuPCUsUiP11InteractionP10EPiSubMenu
                  (this_00,psVar7,0,(Interaction *)0x0,pEVar8);
        pEVar2 = (this->field0_0x0).__vtable;
        (*(code *)pEVar2[1].GetPos)
                  ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar2[1].OnStickRepeat,pEVar8);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi(&(this->m_menuList).field0_0x0,(uint)pEVar8);
                    /* end of inlined section */
        this_00 = pEVar8;
      }
      pos = uVar4 + 1;
      uVar9 = find__C8BString2UsUi(&name,0x2f,pos);
      if (uVar9 == 0xffffffff) {
        __8BString2(&opt);
        uVar9 = length__C8BString2(&name);
        assign__8BString2RC8BString2UiUi(&opt,&name,pos,(uVar9 - 1) - uVar4);
        pcVar5 = GetStackObject__C11Interaction(pAction);
        pIVar6 = (ISimInstance *)0x0;
        if (pcVar5 != (cXObject__142_982 *)0x0) {
          pTVar1 = pcVar5->_vb1019->__vtable;
          pIVar6 = (ISimInstance *)
                   (*(code *)pTVar1[1].GetISimInstance)
                             ((int)&pcVar5->_vb1019->m_pObject +
                              (int)*(short *)&pTVar1[1].GetLastResult);
        }
        psVar7 = c_str__C8BString2(&opt);
        uVar4 = GetHandleFromISimInstance__FP12ISimInstance(pIVar6);
        CreateItem__10EPiSubMenuPCUsUiP11InteractionP10EPiSubMenu
                  (pEVar8,psVar7,uVar4,pAction,(EPiSubMenu *)0x0);
        ___8BString2(&opt,2);
      }
      uVar4 = find__C8BString2UsUi(&name,0x2f,pos);
      ___8BString2(&szMenu,2);
      ___8BString2(&word,2);
    } while (uVar4 != 0xffffffff);
    ___8BString2(&name,2);
  }
  return;
}

EPiSubMenu* EPiMenu::CreateInteractionMenu(cXObject *pLeadObj, InteractionList &interactions) {
	EPiSubMenu *pObj;
	EPiSubMenu *pRootMenu;
	BString2 rootN;
	u32 guid;
	StringBufW255 guidString;
	BString2 actionName;
	iterator it;
	unsigned int j;
	InteractionList *this;
	Interaction *node;
	InteractionList *this;
	Interaction *node;
	EPiSubMenu *data;
	InteractionList *this;
	Interaction *node;
	
  EUIObjectNode__vtable *pEVar1;
  EPiSubMenu *pEVar2;
  EPiSubMenu *pEVar3;
  int iVar4;
  BString2 *str;
  short *s;
  cXObject__142_982 *pcVar5;
  uint uVar6;
  uint uVar7;
  BString2 rootN;
  StackString2_256_ guidString;
  BString2 actionName;
  iterator it;
  
  __8BString2PCUs(&rootN,_OBJECT_NAME);
  pEVar2 = FindSubMenu__7EPiMenuRC8BString2(this,&rootN);
  ___8BString2(&rootN,2);
  __8BString2PCUs(&rootN,_ROOT_NAME);
  pEVar3 = FindSubMenu__7EPiMenuRC8BString2(this,&rootN);
  ___8BString2(&rootN,2);
  if (pEVar3 != (EPiSubMenu *)0x0) {
    CleanUpActionMenus__7EPiMenu(this);
  }
  __8BString2PCUs(&rootN,_ROOT_NAME);
  iVar4 = (*(code *)pLeadObj->__vtable[1].HandleError)
                    ((int)&pLeadObj->_vb4647 + (int)*(short *)&pLeadObj->__vtable[1].Error);
                    /* inlined from ../MSrc/stringbuffer2.h */
  iVar4 = *(int *)(iVar4 + 0x1c);
  __13StringBuffer2PUsUi(&guidString.field0_0x0,guidString.fChars,0x100);
                    /* end of inlined section */
  appendNum__13StringBuffer2i(&guidString.field0_0x0,iVar4);
                    /* inlined from ../MSrc/objtestsim.h */
  it.m_pInteraction = interactions->m_pFirst;
                    /* end of inlined section */
                    /* inlined from ../MSrc/objtestsim.h */
                    /* end of inlined section */
  str = GetName__C11Interaction(it.m_pInteraction);
  __8BString2RC8BString2UiUi(&actionName,str,0,0xffffffff);
  s = c_str__C13StringBuffer2(&guidString.field0_0x0);
  append__8BString2PCUs(&rootN,s);
                    /* inlined from ../MSrc/objtestsim.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/objtestsim.h */
                    /* end of inlined section */
  pcVar5 = GetStackObject__C11Interaction(interactions->m_pFirst);
  (*(code *)pcVar5->__vtable[1].UserCanPlace)
            ((int)&pcVar5->_vb1019 + (int)*(short *)&pcVar5->__vtable[1].IsPartOfMe);
  __pl__FRC8BString2Us((BString2 *)&it,(short)&actionName);
  __apl__8BString2RC8BString2(&rootN,(BString2 *)&it);
  ___8BString2((BString2 *)&it,2);
  pEVar3 = (EPiSubMenu *)__builtin_new(0xb8);
  pEVar3 = __10EPiSubMenui(pEVar3,(this->field0_0x0).m_activeCtrl);
  pEVar3->m_pLastMenu = pEVar2;
  assign__8BString2RC8BString2UiUi(&pEVar3->m_name,&rootN,0,0xffffffff);
  Init__10EPiSubMenu(pEVar3);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar1[1].OnStickRepeat,pEVar3);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&(this->m_menuList).field0_0x0,(uint)pEVar3);
                    /* end of inlined section */
  if (this->m_pCurMenu == (EPiSubMenu *)0x0) {
    this->m_pCurMenu = pEVar3;
  }
                    /* inlined from ../MSrc/objtestsim.h */
  it.m_pInteraction = interactions->m_pFirst;
                    /* end of inlined section */
                    /* end of inlined section */
  for (uVar7 = 0; uVar6 = size__C15InteractionList(interactions), uVar7 < uVar6; uVar7 = uVar7 + 1)
  {
    ProcessAction__7EPiMenuP11InteractionRC8BString2(this,it.m_pInteraction,&rootN);
    __pp__Q215InteractionList8iterator(&it);
                    /* end of inlined section */
  }
  ___8BString2(&actionName,2);
  ___8BString2(&rootN,2);
  return pEVar3;
}

void EPiMenu::Die() {
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  uint uVar1;
  EUIObjectNode *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  cXObject__15_2008 *pcVar4;
  
  if (*(int *)&this->m_bExit != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    uVar1 = (this->field0_0x0).m_flags;
                    /* end of inlined section */
    if ((uVar1 & 2) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((uVar1 & 4) == 0) {
        if (this->m_pCurMenu == (EPiSubMenu *)0x0) {
          CleanUpAllMenus__7EPiMenu(this);
          *(undefined4 *)&this->m_bExit = 0;
          return;
        }
        pcVar4 = this->m_pGoHereOb;
      }
      else {
        pcVar4 = this->m_pGoHereOb;
      }
    }
    else {
      pcVar4 = this->m_pGoHereOb;
    }
    if (pcVar4 != (cXObject__15_2008 *)0x0) {
      this->m_pGoHereOb = (cXObject__15_2008 *)0x0;
    }
    CleanUpAllMenus__7EPiMenu(this);
    pEVar2 = (this->field0_0x0).m_pParent;
    pEVar3 = pEVar2->__vtable;
    (*(code *)pEVar3[1].EUIObjectNode)
              ((int)&(pEVar2->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)(pEVar3 + 1),this
               ,0x1d);
    *(undefined4 *)&this->m_bExit = 0;
  }
  return;
}

void EPiMenu::Kill() {
  *(undefined4 *)&this->m_bExit = 1;
  return;
}

void EPiMenu::SetMenu(EPiSubMenu *pMenu) {
	cXObject *srch;
	
  short sVar1;
  cXObject__15_2008__vtable *pcVar2;
  ObjectModule__vtable *pOVar3;
  ObjectModule__vtable **ppOVar4;
  cXObject__15_2008 *pcVar5;
  undefined8 uVar7;
  int iVar8;
  code *pcVar6;
  
  if (pMenu == (EPiSubMenu *)0x0) {
    Kill__7EPiMenu(this);
    if ((this->m_pGoHereOb != (cXObject__15_2008 *)0x0) &&
       (_5Globs_pObjectModule != (ObjectModule *)0x0)) {
      pcVar6 = (code *)_5Globs_pObjectModule->__vtable->LevelInfoRequested;
      iVar8 = (int)&_5Globs_pObjectModule->__vtable +
              (int)*(short *)&_5Globs_pObjectModule->__vtable->CleanupPeople;
      while (pcVar5 = (cXObject__15_2008 *)(*pcVar6)(iVar8), pcVar5 != (cXObject__15_2008 *)0x0) {
        pcVar2 = pcVar5->__vtable;
        if (pcVar5 == this->m_pGoHereOb) {
          pOVar3 = _5Globs_pObjectModule->__vtable;
          sVar1 = *(short *)&pOVar3->GetNumObjects;
          ppOVar4 = &_5Globs_pObjectModule->__vtable;
          uVar7 = (*(code *)pcVar2[1].UserCanPlace)
                            ((int)&pcVar5->_vb3534 + (int)*(short *)&pcVar2[1].IsPartOfMe);
          (*(code *)pOVar3->CheckIntegrity)((int)ppOVar4 + (int)sVar1,uVar7);
          this->m_pGoHereOb = (cXObject__15_2008 *)0x0;
          return;
        }
        pcVar6 = (code *)pcVar2[1].IsDeletedByEvict;
        iVar8 = (int)&pcVar5->_vb3534 + (int)*(short *)&pcVar2[1].GetObjectLightSource;
      }
    }
  }
  else {
    this->m_pCurMenu = pMenu;
  }
  return;
}

void EPiMenu::CreateGoHereObjectForMenu() {
	ObjSelector *destSel;
	SInt16 objectID;
	cXObject *mTarget;
	int level;
	float fy;
	float fx;
	Int xint;
	Int yint;
	FTilePt fp;
	FindGoodLocationParams fglp;
	ESimsCursor *this;
	Int inX;
	Int inY;
	Int integer;
	Int integer;
	int level;
	
  undefined *puVar1;
  int iVar2;
  cXObject__150_1187 *pcVar3;
  cXObject__150_1187__vtable *pcVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  cXObject__15_2008__vtable *pcVar10;
  cXObject__15_2008 *pcVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  FTilePt fp;
  FindGoodLocationParams fglp;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar7 = (*(code *)_5Globs_pObjectFolder->__vtable->DeletingInstance)
                    ((int)&_5Globs_pObjectFolder->__vtable +
                     (int)*(short *)&_5Globs_pObjectFolder->__vtable->CreatingInstance,0x7c4);
  if (lVar7 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    uVar8 = (*(code *)_5Globs_pObjectModule->__vtable->GetObject)
                      ((int)&_5Globs_pObjectModule->__vtable +
                       (int)*(short *)&_5Globs_pObjectModule->__vtable->GetFirst,lVar7);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar7 = (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                      ((int)&_5Globs_pObjectModule->__vtable +
                       (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson,uVar8);
    if (lVar7 != 0) {
      iVar2 = (this->field0_0x0).m_activeCtrl;
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
      fVar12 = (_globals._pCursor[iVar2]->m_vPos).field0_0x0.d[1] - _globals._global_house_offy;
      fVar15 = (_globals._pCursor[iVar2]->m_vPos).field0_0x0.d[0] - _globals._global_house_offx;
      iVar13 = (int)fVar12;
      iVar14 = (int)fVar15;
      if (0.5 <= fVar12 - (float)iVar13) {
        iVar13 = iVar13 + 1;
      }
      if (0.5 <= fVar15 - (float)iVar14) {
        iVar14 = iVar14 + 1;
      }
                    /* inlined from ../MSrc/tiles.h */
      fp.x.whole = iVar13 << 4;
      fp.y.whole = iVar14 << 4;
                    /* end of inlined section */
                    /* inlined from ../MSrc/findgoodlocationparams.h */
      fglp._20_4_ = 1;
      fglp.fDirectionVector = -1;
      fglp._24_4_ = 1;
      fglp._28_4_ = 0;
      fglp._0_4_ = 1;
                    /* end of inlined section */
                    /* inlined from ../MSrc/findgoodlocationparams.h */
      puVar1 = (undefined *)((int)&fglp.fLocation.x.whole + 3);
      uVar5 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
                CONCAT44(fp.x.whole,fp.y.whole) >> (7 - uVar5) * 8;
      uVar5 = (uint)&fglp.fLocation & 7;
      puVar6 = (ulong *)((int)&fglp.fLocation - uVar5);
      *puVar6 = CONCAT44(fp.x.whole,fp.y.whole) << uVar5 * 8 |
                *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      fglp.fLevel = 1;
                    /* end of inlined section */
                    /* inlined from ../MSrc/findgoodlocationparams.h */
      fglp._20_4_ = 1;
                    /* end of inlined section */
                    /* inlined from ../MSrc/findgoodlocationparams.h */
      fglp._24_4_ = 0;
                    /* end of inlined section */
      pcVar3 = _globals._pSelectedSims[iVar2]->_vb1187;
      pcVar4 = pcVar3->__vtable;
      lVar9 = (*(code *)pcVar4->GetRoom)
                        ((int)&pcVar3->_vb1121 + (int)*(short *)&pcVar4->GetPrevObjectSibling,&fglp,
                         &fp);
      pcVar11 = (cXObject__15_2008 *)lVar7;
      if (lVar9 == 0) {
                    /* inlined from ../MSrc/tiles.h */
        fp.x.whole = fp.x.whole & 0xfffffff0U | 8;
        fp.y.whole = fp.y.whole & 0xfffffff0U | 8;
                    /* end of inlined section */
        pcVar10 = pcVar11->__vtable;
      }
      else {
        pcVar10 = pcVar11->__vtable;
      }
      lVar7 = (*(code *)pcVar10->GetAttr)
                        ((int)&pcVar11->_vb3534 + (int)*(short *)&pcVar10->GetTemp,&fp,1,0,0);
      if (lVar7 == 0) {
        (*(code *)_5Globs_pObjectModule->__vtable->CheckIntegrity)
                  ((int)&_5Globs_pObjectModule->__vtable +
                   (int)*(short *)&_5Globs_pObjectModule->__vtable->GetNumObjects,uVar8);
        this->m_pGoHereOb = (cXObject__15_2008 *)0x0;
      }
      else {
        (*(code *)pcVar11->__vtable->GetAdultAnimTable)
                  ((int)&pcVar11->_vb3534 + (int)*(short *)&pcVar11->__vtable->GetModule,&fp,1,0,0);
        this->m_pGoHereOb = pcVar11;
      }
    }
  }
  return;
}

void EUIIconDef::~EUIIconDef(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

Interaction* EPiMenuItem::GetAction() {
  return this->m_pAction;
}

u8 EPiMenuItem::GetPlayerId() {
  return *(uchar *)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_activeCtrl;
}

EPiSubMenu* EPiSubMenu::EPiSubMenu() {
  __13EUIScrollMenuiifffiib(&this->field0_0x0,-1,-1,0.05,0.0,0.0,-1,-1,true);
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_10EPiSubMenu;
  __8BString2(&this->m_name);
  return this;
}

u8 EPiSubMenu::GetPlayerId() {
  return *(uchar *)&(this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl;
}

EPiMenu* EPiMenu::EPiMenu() {
  __13EUIObjectNode(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_menuList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_7EPiMenu;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_menuList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  return this;
}

u8 EPiMenu::GetPlayerId() {
  return *(uchar *)&(this->field0_0x0).m_activeCtrl;
}
