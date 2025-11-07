// STATUS: NOT STARTED

#include "camera.h"

// warning: multiple differing types with the same name (name not equal)
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb1676;
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
	ESimsCursor(int __in_chrg, int playerid);
	ESimsCursor();
	/* vtable[1] */ virtual ESimsCursor(ESimsCursor*, int, void);
	bool CanUserSell();
	void ClearPlacementError(cXObject *pFloat);
	void Init();
	void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messid);
	/* vtable[14] */ virtual void SetFlag(u32 mask, bool on);
	/* vtable[2] */ virtual void SetState(Panelstate state);
	/* vtable[3] */ virtual void SetEvent(PanelEvent event, u32 data);
	void DrawMenu(ERC *prc);
	void Draw_Curs(ERC *prc);
	void GetCamOff();
	void SnapToDefPos();
	void SetCam(ESimsCam *pcam);
	ESimsCam* GetCam();
	void GetPos();
	EVec3& GetPos();
	/* vtable[4] */ virtual void SetPos(EVec3 &vin);
	u32 GetPlayerId();
	float GetCurorRad();
	void SetCursorObject(ObjSelector *pSel);
	bool SafeToUnPause();
	void MoveCursor();
	void InitFloorTool(FloorTile &n);
	void SnapToWallVert(EVec2 &vOutPos);
	void FindWallDragVert(EVec2 &vStart, EVec2 &vOutPos);
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
	cXObject* PointToObject(PointToObjectMode mode);
	bool TurnToWall();
	void TurnObject(bool left);
	bool InPiMenu();
	bool PiMenuCanUpdate();
	void CancelCursor(bool quit);
	void UpdateHouse(cXObject *pOb);
	bool TryUndoObjectPlacement();
	void FloorUpdate();
	CursorFloorTile* CreateCursorFloorTile(FloorTile &n, float x, float y);
	CursorMode GetCursorMode();
	bool CursorHasObject();
	void ExitFloorTool();
	void DrawCursorFloorList(ERC *prc);
	bool InToolMode();
	bool InFloorMode();
	bool InWallMode();
	void DrawFloorPrevew(ERC *prc);
	void DrawDeletePrevew(ERC *prc);
	void DrawPrevewRect(ERC *prc);
	void DrawRoomFillPrevew(ERC *prc);
	void SetFloor(CTilePt &where, FloorPattern newid, RoomImpl *pRoom);
	void BeginWallTool(WallStyle style, u32 cost);
	void ExitWallTool();
	void WallToolUpdate();
	void DrawWallPreview(ERC *prc);
	void DrawWallDelPreview(ERC *prc);
	void DrawWallRoomPreview(ERC *prc);
	bool FinalizeWallPlacement();
	bool FinalizeWallDel();
	bool FinalizeRoom();
	s32 GetWallLineCost(EVec2 &v0, EVec2 &v1, bool &bCanAddAWall, bool bAddWall, bool bDeleteWall);
	bool CanChangeTileAdd(CTilePt &inTile, TileWallsSegment inSeg);
	bool CanChangeTileDelete(CTilePt &inTile, TileWallsSegment inSeg);
	bool SubmitLine(EVec2 &v0, EVec2 &v1, bool bAddWall, bool bDeleteWall);
	static bool KillArchitecturalObject(/* parameters unknown */);
	bool AddWallAtTile(CTilePt &inTile, TileWalls &theWalls, TileWallsSegment theSeg);
	void VertPosToTile();
	static void ConvertVertsToTiles(/* parameters unknown */);
	static TilePtDir GetTileDirection(/* parameters unknown */);
	void DeleteWallAtTile(CTilePt &inTile, TileWalls &theWalls, TileWallsSegment theSeg);
	bool LegalWallTile(CTilePt &in, TileWallsSegment inSeg);
	bool InPaperTool();
	void BeginPaperTool(WallTile &node);
	void ExitPaperTool();
	void PaperToolUpdate();
	void DrawPaperPreview(ERC *prc);
	void DrawPaperDelPreview(ERC *prc);
	void DrawPaperRoomPreview(ERC *prc);
	bool FinalizePaperPlacement();
	bool FinalizePaperDel();
	bool FinalizePaperForRoom();
	void AddPaperAtTile(CTilePt &inTile, TileWalls &thePapers, TileWallsSegment theSeg, DiagonalSideSelector inSel);
	void DeletePaperAtTile(CTilePt &inTile, TileWalls &thePapers, TileWallsSegment theSeg, DiagonalSideSelector inSel);
	void ChangeTile(CTilePt &inTile, WallPattern pattern, TileWallsSegment inSegment, DiagonalSideSelector inSel);
	int GetSideOfWall(EVec2 &v0, EVec2 &v1, EVec3 *vOut);
	bool SubmitPaperLine(EVec2 &v0, EVec2 &v1, WallPattern pattern);
	int GetPaperLineCost(bool &bDidPaper, CTilePt &c0, CTilePt &c1, TilePtDir tileDir, WallPattern pattern, DiagonalSideSelector side);
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
	TreeSim *$vb2830;
	__vtbl_ptr_type *$vf2479;
	
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
	cXObject *$vb2479;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf1554;
	
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
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb1676;
	float m_infoWinAlpha;
	float m_infoWinAlphaTime;
	s32 m_curwindow;
protected:
	s32 m_pressed;
	bool m_bButtdown;
	bool m_bDrawInfo;
	float m_introAnimDur;
	float m_infointroAnimDur;
	float m_infoDelayDur;
	float m_introTime;
	float m_hoverTime;
	float m_infoInTime;
	float m_simnametimeout;
	int m_curOpt;
	ERelationsWin m_rltnsMenu;
	static ESlideTextBox m_nameBoxs[2];
	static ESlideTextBox m_playerNameBoxs[2];
	static bool m_bInit;
	static void (*m_DrawTable[4])(/* parameters unknown */);
	static void (*m_UpdateTable[4])(/* parameters unknown */);
	static ERFont *m_pFont;
public:
	static ERShader *m_textarrowl;
	static ERShader *m_textarrowr;
	static ERShader *m_pDpadInverse;
	static ERShader *m_pMenubevel_T_L;
	static ERShader *m_pTextBoxBGBL;
	static ERShader *m_pTextBoxBGBR;
	static ERShader *m_pTextBoxBGTL;
	static ERShader *m_pTextBoxBGTR;
	static ERShader *m_pTextBoxBGML;
	static ERShader *m_pTextBoxBGMR;
	static ERShader *m_pTextBoxBGTC;
	static ERShader *m_pTextBoxBGBC;
	static ERShader *m_pTextBoxHBL;
	static ERShader *m_pTextBoxHBR;
	static ERShader *m_pTextBoxHTL;
	static ERShader *m_pTextBoxHTR;
	static ERShader *m_pTextBoxHML;
	static ERShader *m_pTextBoxHMR;
	static ERShader *m_pTextBoxHTC;
	static ERShader *m_pTextBoxHBC;
	static ERShader *m_pTextLineBGL;
	static ERShader *m_pTextLineBGR;
	static ERShader *m_pTextLineBGC;
	static ERShader *m_pTextPopOutC;
	static ERShader *m_pTextPopOutCH;
	static ERShader *m_pTextPopOutL;
	static ERShader *m_pTextPopOutLH;
	static ERShader *m_pTextPopOutR;
	static ERShader *m_pTextPopOutRH;
	static UiStringLookUpTableEntry __MoodStrings[8];
	static UiStringLookUpTableEntry __PersStrings[8];
	static UiStringLookUpTableEntry __JobStrings[8];
	static UiStringLookUpTableEntry __RelaStrings[8];
	static UiStringLookUpTableEntry *__InfoTextLookup[4];
	
	SimInfoWin& operator=();
	SimInfoWin(int __in_chrg, int playerid);
	SimInfoWin();
	/* vtable[1] */ virtual SimInfoWin(SimInfoWin*, int, void);
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void Update();
	/* vtable[2] */ virtual void SetState(Panelstate state);
	/* vtable[3] */ virtual void SetEvent(PanelEvent event, u32 data);
	void DrawInfo(ERC *prc);
	void SetWindow(s32 which, bool on);
	s32 GetWindow();
	void GetBut();
	void ResetState();
	void ChangedSelectedSim();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawTextBox(/* parameters unknown */);
	static void DrawBigHighlightBox(/* parameters unknown */);
protected:
	int GetDirection();
	void DrawBackGround(ERC *prc);
	void StartIntro();
	void StartTextSlide(ESlideTextBox &box, bool in);
	void UpdateIntroAnim();
	void UpdateInfoIntroAnim();
	void StartInfoIntro();
	void ResetAllclocks();
	void JobDrawInfo(ERC *prc);
};

// warning: multiple differing types with the same name (name not equal)
struct DPadWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb1676;
protected:
	EVec2 m_vPosOff;
	struct {
		short int __delta;
		short int __index;
		union {
			void (*__pfn)();
			short int __delta2;
		} __pfn_or_delta2;
	} m_fnTab[10];
public:
	static bool m_bInit;
	static ERShader *m_pBack;
	static ERShader *m_pBack1;
	static ERShader *m_pBack2;
	static ERShader *m_pUpShdr;
	static ERShader *m_pDownShdr;
	static ERShader *m_pLeftShdr;
	static ERShader *m_pRightShdr;
	static ERShader *m_pDelqueueShdr;
	static ERShader *m_pJobShdr;
	static ERShader *m_pMoodShdr;
	static ERShader *m_pMovequeueShdr;
	static ERShader *m_pPersonalityShdr;
	static ERShader *m_pRelationshipsShdr;
	static ERShader *m_pBlankUp;
	static ERShader *m_pBlankDown;
	static ERShader *m_pBlankLeft;
	static ERShader *m_pBlankRight;
	static ERShader *m_pQuestion;
	static ERShader *m_pCancle;
	
	DPadWin& operator=();
	DPadWin(int __in_chrg, u32 playerid);
	DPadWin();
	/* vtable[1] */ virtual DPadWin(DPadWin*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[2] */ virtual void SetState(Panelstate state);
	/* vtable[3] */ virtual void SetEvent(PanelEvent event, u32 data);
	void SetDefaultFlags();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawButtonPrompts(/* parameters unknown */);
protected:
	void DrawHead(ERC *prc);
	void DrawLIVE_DEFAULT(ERC *prc, EVec2 &vOff);
	void DrawLIVE_DIALOG(ERC *prc, EVec2 &vOff);
	void DrawLIVE_ACTIONQ(ERC *prc, EVec2 &vOff);
	void DrawLIVE_INFOUP(ERC *prc, EVec2 &vOff);
	void DrawLIVE_PIMENU(ERC *prc, EVec2 &vOff);
};

// warning: multiple differing types with the same name (name not equal)
struct EPausePanel : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb1676;
	EDialogMenu m_DialogMenu;
	c16 *m_ppNoYesOptions[2];
	c16 *m_ppYesNoOptions[2];
	c16 *m_ppCancelSaveNoSaveOptions[3];
	c16 *m_ppCancelRemove2Options[2];
protected:
	ERFont *m_pFont;
	float m_PauseTimer;
	static float m_ItemInfoTimer;
	u32 m_nDisplayMode;
	bool m_bCleanUpModelReference;
	bool m_bCheckSavedSuccess;
	bool m_bHideDialog;
	EPauseMainMenu m_PauseMainMenu;
	EPauseBudgetMenu m_PauseBudgetMenu;
	EPauseBuyMenu m_PauseBuyMenu;
	EPauseBuildMenu m_PauseBuildMenu;
	EPauseOptionsMenu m_PauseOptionsMenu;
	EPauseItemInfo *m_pItemInfo;
	bool m_bDeleteInfo;
	ERShader *m_pBlankShdr;
	ERShader *m_pXIcon;
	ERShader *m_pTriIcon;
	ERShader *m_pSquareIcon;
	ERShader *m_pMenuBevelShdr;
	static ERShader *m_pDPadUp;
	static ERShader *m_pDPadDown;
	static ERShader *m_pDPadLeft;
	static ERShader *m_pDPadRight;
	EUIIcon m_XIcon;
	EUIIcon m_TriIcon;
	EUIIcon m_SquareIcon;
	EUIIcon m_XIcon2;
	EUIIcon m_TriIcon2;
	EUIIcon m_XIcon3;
	EUIIcon m_TriIcon3;
	EUIPrompt m_PromptsYN[2];
	EUIPrompt m_PromptsYNC[3];
	EUIPrompt m_Prompts[2];
	EPromptBar m_PromptBarYN;
	EPromptBar m_PromptBarYNC;
	EPromptBar m_PromptBar;
	
public:
	EPausePanel& operator=();
	EPausePanel(int __in_chrg);
	EPausePanel();
	/* vtable[1] */ virtual EPausePanel(EPausePanel*, int, void);
	/* vtable[14] */ virtual void Init();
	/* vtable[15] */ virtual void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw(ERC *prc);
	/* vtable[7] */ virtual void Message(EUIObjectNode *pChild, u32 messId);
	/* vtable[2] */ virtual void SetState(Panelstate newstate);
	/* vtable[3] */ virtual void SetEvent(PanelEvent event, u32 id);
	void DrawGenericMessageBox(ERC *prc, c16 *Title, c16 *Line1, c16 *Line2, u8 nDialogMode);
	static void ResetItemInfoTimer(/* parameters unknown */);
	static float GetItemInfoTimer(/* parameters unknown */);
	static ERShader* GetShaderDPadUp(/* parameters unknown */);
	static ERShader* GetShaderDPadDown(/* parameters unknown */);
	static ERShader* GetShaderDPadLeft(/* parameters unknown */);
	static ERShader* GetShaderDPadRight(/* parameters unknown */);
	static void SetDPadUp(/* parameters unknown */);
	static void SetDPadDown(/* parameters unknown */);
	static void SetDPadLeft(/* parameters unknown */);
	static void SetDPadRight(/* parameters unknown */);
};

u32 ESimsCam::m_modeDef = 2;
float ESimsCam::m_rotSpeedDef = 65.f;
float ESimsCam::m_minHeight = 5.f;
float ESimsCam::m_maxZoom = 40.f;
float ESimsCam::m_minZoom = 6.5f;
float ESimsCam::m_minTilt = 20.f;
float ESimsCam::m_maxTilt = 88.f;
float ESimsCam::m_transSpeedDef = 15.f;
float ESimsCam::m_transSpeedMin = 5.f;

EVec3 ESimsCam::m_vEyeDef = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f
		}
	}
};

EVec3 ESimsCam::m_vTargetDef = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f
		}
	}
};

EVec3 ESimsCam::m_vUpDef = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f
		}
	}
};

EVec3 ESimsCam::m_minZoomPt = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f
		}
	}
};

EVec3 ESimsCam::m_ctrlPt1 = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f
		}
	}
};

EVec3 ESimsCam::m_ctrlPt2 = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f
		}
	}
};

EVec3 ESimsCam::m_maxZoomPt = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f
		}
	}
};

EIBezierSpline ESimsCam::m_spline = {
	/* base class 0 = */ {
		/* base class 0 = */ {
			/* base class 0 = */ {
				/* .$vf1514 = */ NULL
			},
			/* .m_pLevel = */ NULL,
			/* .m_pIGroup = */ NULL,
			/* .m_iIGroup = */ NULL,
			/* .m_instanceId = */ 0,
			/* .m_instanceFlags = */ 0,
			/* .m_nReceivingPointLights = */ 0,
			/* .m_iAlwaysUpdate = */ NULL,
			/* .m_iLevelList = */ NULL,
			/* .m_pSphereTreeParent = */ NULL,
			/* .m_otd = */ {
				/* .m_bPos = */ {
					/* .vMin = */ {
						/* . = */ {
							/* .d = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f
							},
							/* . = */ {
								/* .x = */ 0.f,
								/* .y = */ 0.f,
								/* .z = */ 0.f
							}
						}
					},
					/* .vMax = */ {
						/* . = */ {
							/* .d = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f
							},
							/* . = */ {
								/* .x = */ 0.f,
								/* .y = */ 0.f,
								/* .z = */ 0.f
							}
						}
					}
				},
				/* .m_causeFlags = */ 0,
				/* .m_receiveFlags = */ 0,
				/* .m_overlaps = */ {
					/* base class 0 = */ {
						/* .m_list = */ {
							/* .m_pHead = */ NULL,
							/* .m_pTail = */ NULL
						},
						/* .m_pRoot = */ NULL
					}
				},
				/* .m_minPos = */ {
					/* [0] = */ {
						/* .pInstance = */ NULL,
						/* .pLast = */ NULL,
						/* .pNext = */ NULL
					},
					/* [1] = */ {
						/* .pInstance = */ NULL,
						/* .pLast = */ NULL,
						/* .pNext = */ NULL
					}
				},
				/* .m_maxPos = */ {
					/* [0] = */ {
						/* .pInstance = */ NULL,
						/* .pLast = */ NULL,
						/* .pNext = */ NULL
					},
					/* [1] = */ {
						/* .pInstance = */ NULL,
						/* .pLast = */ NULL,
						/* .pNext = */ NULL
					}
				}
			}
		}
	},
	/* .m_NumSplines = */ 0,
	/* .m_NumControlPoints = */ 0,
	/* .m_ControlPoints = */ {
		/* base class 0 = */ {
			/* .m_p = */ NULL,
			/* .m_size = */ 0,
			/* .m_allocSize = */ 0,
			/* .m_growBy = */ 0,
			/* .m_elementSize = */ 0
		}
	},
	/* .m_pGeneratedPoints = */ NULL
};

float _fov = 45.f;
float _nearPlane = 0.01f;
float _farPlane = 20.f;
float _clampRad = 0.f;
float _cam_tilt_min = 25.f;
float _cam_tilt_max = 60.f;
float _camera_fp_zoff = 10.f;
float __zoom_last = 0.f;
float _esimcam_cos45 = 0.707106769f;

EVec2 _vP1ScreenPosMin = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

EVec2 _vP1ScreenPosMax = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

EVec2 _vP2ScreenPosMin = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

EVec2 _vP2ScreenPosMax = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f
		}
	}
};

int _shiftTest = 1;

__vtbl_ptr_type ESimsCam virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsCam::~ESimsCam,
		/* .__delta2 = */ 11608
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsCam::SetState,
		/* .__delta2 = */ 4680
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsCam::SetEvent,
		/* .__delta2 = */ 11712
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsCam::Update,
		/* .__delta2 = */ 5008
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

float factor = 0.f;

__vtbl_ptr_type Panelstateman virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &Panelstateman::~Panelstateman,
		/* .__delta2 = */ 12000
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

float ESimsCam::GetCurZoomRatio() {
	float dz;
	
                    /* end of inlined section */
  return (this->m_zoom - _8ESimsCam_m_minZoom) / (_8ESimsCam_m_maxZoom - _8ESimsCam_m_minZoom);
}

void ESimsCam::ForceFullScreen() {
	EGraphics *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  bool bVar2;
  EPortalWindow *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int iVar3;
  float aspect;
  float fVar4;
  TRect_float_ local_60;
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
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  bVar2 = IsTwoPlayer__7EGlobal(&_globals);
  this_00 = &this->m_win;
  if (bVar2) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    iVar3 = _pGfx->m_xscreen;
    fVar4 = _fov * (float)_pGfx->m_yscreen;
    aspect = (float)(*(code *)pEVar1[0xd].EGlobalManagerClient)
                              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0xd));
    SetProjection__13EPortalWindowffff
              (this_00,fVar4 / (float)iVar3,aspect,_nearPlane * _globals._EHouse_levelrad,
               _farPlane * _globals._EHouse_levelrad);
    SetWinPos__8ESimsCamR9E3DWindow(this,&this_00->field0_0x0);
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
    local_60.left = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
    local_60.bottom = 1.0;
    local_60.top = 0.0;
                    /* end of inlined section */
    local_60.right = 1.0;
    SetViewport__9E3DWindowRCt5TRect1Zf(&this_00->field0_0x0,&local_60);
  }
  return;
}

void ESimsCam::Init() {
	CamFloat max;
	CamFloat min;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  CamFloat max;
  CamFloat min;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
                    /* end of inlined section */
  this->m_LockedPad = 0;
  _globals._pCursor[this->m_playerId] = (ESimsCursor__67_3982 *)this->m_pCursor;
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
  _8ESimsCam_m_minZoom = (float)(uint)_globals.Cheats.cam_zoom_min * 0.25;
  _8ESimsCam_m_maxZoom = (float)(uint)_globals.Cheats.cam_zoom_max * 0.25;
                    /* end of inlined section */
  ResetPos__8ESimsCam(this);
  fVar3 = _8ESimsCam_m_transSpeedDef;
  fVar2 = _8ESimsCam_m_rotSpeedDef;
  uVar1 = _8ESimsCam_m_modeDef;
  *(undefined4 *)&this->m_bCanUpdate = 1;
  this->m_lastMode = uVar1;
  this->m_transSpeed = fVar3;
  this->m_rotSpeed = fVar2;
  this->m_mode = uVar1;
  this->m_but = 0;
  return;
}

void ESimsCam::Reset() {
                    /* end of inlined section */
  this->m_pCursor = (ESimsCursor__3_1557 *)0x0;
  _globals._pCursor[this->m_playerId] = (ESimsCursor__67_3982 *)0x0;
  return;
}

void ESimsCam::SetState(Panelstate newstate) {
  (this->field0_0x0).m_state = newstate;
  if (newstate < NSTATES) {
                    /* WARNING: Could not recover jumptable at 0x0010126c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_003a8010 + newstate * 4))();
    return;
  }
  if (this->m_mode == 4) {
    this->m_mode = this->m_lastMode;
  }
  this->m_LockedPad = 0;
  return;
}

void ESimsCam::GetCursPos(EVec3 &vin) {
	EVec3 &vIn;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ESimsCursor__3_1557 *pEVar4;
  float fVar5;
  ulong *puVar6;
  ulong in_v1;
  ulong uVar7;
  
  pEVar4 = this->m_pCursor;
  if (pEVar4 == (ESimsCursor__3_1557 *)0x0) {
    (vin->field0_0x0).d[0] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    (vin->field0_0x0).d[2] = 0.0;
                    /* end of inlined section */
    (vin->field0_0x0).d[1] = 0.0;
    return;
  }
  puVar1 = (undefined *)((int)&(pEVar4->m_vPos).field0_0x0 + 7);
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&pEVar4->m_vPos & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&pEVar4->m_vPos - uVar3) >> uVar3 * 8;
  fVar5 = (pEVar4->m_vPos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vin->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar2);
  *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)vin & 7;
  *(ulong *)((int)vin - uVar2) =
       uVar7 << uVar2 * 8 | *(ulong *)((int)vin - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vin->field0_0x0).d[2] = fVar5;
                    /* end of inlined section */
  return;
}

void ESimsCam::ToggleFirstPerson() {
  EUIObjectNode__vtable *pEVar1;
  float fVar2;
  
  if (_globals.Cheats._44_4_ != 0) {
    if (this->m_mode == 3) {
      this->m_mode = 2;
      CenterOnSelectedSim__8ESimsCam(this);
      pEVar1 = ((_globals._pPanel)->field0_0x0).__vtable;
      (*(code *)pEVar1[1].EUIObjectNode)
                ((int)(_globals._pPanel)->m_messageFns + *(short *)(pEVar1 + 1) + -0x3c,0,0x18);
    }
    else {
      fVar2 = (this->m_vEye).field0_0x0.d[2];
      this->m_mode = 3;
      (this->m_vTarget).field0_0x0.d[2] = fVar2;
      pEVar1 = ((_globals._pPanel)->field0_0x0).__vtable;
      (*(code *)pEVar1[1].EUIObjectNode)
                ((int)(_globals._pPanel)->m_messageFns + *(short *)(pEVar1 + 1) + -0x3c,0,0x17);
    }
  }
  return;
}

void ESimsCam::Update() {
	CamFloat max;
	CamFloat min;
	CamFloat fov;
	float StickX;
	float StickY;
	EVec3 vStick;
	int lockTrackMode;
	ESimsCam *this;
	ESimsCam *this;
	Panelstate state;
	bool cammoved;
	bool brot;
	bool btilt;
	bool bzoom;
	bool brot;
	bool btilt;
	bool bzoom;
	
  Panelstate PVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  EUiAudio *pEVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  CamFloat max;
  CamFloat min;
  CamFloat fov;
  EVec3 vStick;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
                    /* end of inlined section */
  _fov = 0.01;
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
  fVar11 = (float)(uint)_globals.Cheats.cam_fov * 0.25;
                    /* end of inlined section */
  if (0.01 <= fVar11) {
    _fov = (float)((int)fVar11 * (uint)(fVar11 < 179.9) | (uint)(fVar11 >= 179.9) * 0x4333e666);
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
                    /* end of inlined section */
  PVar1 = (this->field0_0x0).m_state;
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
  _8ESimsCam_m_minZoom = (float)(uint)_globals.Cheats.cam_zoom_min * 0.25;
  _8ESimsCam_m_maxZoom = (float)(uint)_globals.Cheats.cam_zoom_max * 0.25;
                    /* end of inlined section */
  if ((((PVar1 == LIVE_DIALOG_STATE) || (PVar1 == LIVE_INFOUP_1_STATE)) ||
      (PVar1 == LIVE_INFOUP_2_STATE)) || (*(int *)&this->m_bCanUpdate == 0)) {
    UpdateWin__8ESimsCam(this);
    return;
  }
  *(undefined4 *)&this->m_bmoved = 0;
  if (this->m_LockedPad == 0) {
    fVar12 = GetStick__11EControllerii(_ctrlPads[this->m_playerId],0,0);
    fVar11 = GetStick__11EControllerii(_ctrlPads[this->m_playerId],0,1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    fVar11 = ABS(fVar11) * fVar11 * this->m_transSpeed * _dt;
    fVar12 = fVar12 * ABS(fVar12) * this->m_transSpeed * _dt;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    lVar8 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,0x28);
    if (lVar8 == 0) {
                    /* end of inlined section */
                    /* end of inlined section */
      if (((fVar12 == 0.0) && (fVar11 == 0.0)) || (this->m_mode != 4)) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
        if (((this->field0_0x0).m_state + ~LIVE_SIM_EDIT < 2) ||
           (pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
           lVar8 = (*(code *)pEVar2[1].GetBut)
                             ((int)(_globals.m_pCtrlPad)->m_pressed +
                              *(short *)&pEVar2[1].ClearBut + -4,this->m_playerId,0x80), lVar8 == 0)
           ) goto LAB_00101694;
        if (1 < this->m_mode - 3) {
          this->m_but = 0x80;
          CenterOnSelectedSim__8ESimsCam(this);
          pEVar3 = _8EUiAudio__pUiAudioMan;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
          this->m_lastMode = this->m_mode;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          this->m_mode = 4;
          PlayUiSound__8EUiAudioUi(pEVar3,0x61c374d4);
                    /* end of inlined section */
          goto LAB_001016ec;
        }
        uVar7 = this->m_lastMode;
      }
      else {
        uVar7 = this->m_lastMode;
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      pEVar3 = _8EUiAudio__pUiAudioMan;
      this->m_mode = uVar7;
      PlayUiSound__8EUiAudioUi(pEVar3,0x61c374d4);
                    /* end of inlined section */
LAB_001016ec:
      if (_globals.Cheats._40_4_ == 0) goto LAB_001016f8;
      uVar7 = this->m_but;
    }
    else {
      uVar7 = this->m_mode;
      if (uVar7 != 4) {
        this->m_mode = 4;
        this->m_lastMode = uVar7;
        CenterOnSelectedSim__8ESimsCam(this);
        if (this->m_mode == 4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x61c374d4);
                    /* end of inlined section */
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
        }
        goto LAB_001016ec;
      }
LAB_00101694:
      if (_globals.Cheats._40_4_ != 0) {
        pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar8 = (*(code *)pEVar2[1].GetBut)
                          ((int)(_globals.m_pCtrlPad)->m_pressed +
                           *(short *)&pEVar2[1].ClearBut + -4,this->m_playerId,0x400);
        if ((lVar8 != 0) && (this->m_mode != 3)) {
          this->m_but = 0x400;
          if (this->m_mode == 1) {
            this->m_mode = 2;
          }
          else {
            this->m_mode = 1;
          }
        }
        goto LAB_001016ec;
      }
LAB_001016f8:
      if (this->m_mode == 1) {
        this->m_mode = 2;
        goto LAB_00101710;
      }
      uVar7 = this->m_but;
    }
  }
  else {
LAB_00101710:
    uVar7 = this->m_but;
  }
  if (uVar7 != 0) {
    this->m_but = 0;
    goto LAB_001017d4;
  }
  uVar10 = 0;
  if (this->m_mode == 3) {
    bVar4 = HandleFirsPerson__8ESimsCam(this);
    iVar9 = (int)bVar4;
LAB_001017cc:
    *(int *)&this->m_bmoved = iVar9;
  }
  else {
    if (this->m_mode != 4) {
      bVar4 = HandleRotation__8ESimsCam(this);
      bVar5 = HandleTilt__8ESimsCam(this);
      bVar6 = HandleZoom__8ESimsCam(this);
      if (bVar4) {
        iVar9 = 1;
      }
      else if (bVar5) {
        iVar9 = 1;
      }
      else {
        if (!bVar6) {
          *(undefined4 *)&this->m_bmoved = 0;
          goto LAB_001017d0;
        }
        iVar9 = 1;
      }
      goto LAB_001017cc;
    }
    bVar4 = HandleRotation__8ESimsCam(this);
    bVar5 = HandleTilt__8ESimsCam(this);
    bVar6 = HandleZoom__8ESimsCam(this);
    if (bVar4) {
      uVar10 = 1;
    }
    else if (bVar5) {
      uVar10 = 1;
    }
    else if (bVar6) {
      uVar10 = 1;
    }
    CenterOnSelectedSim__8ESimsCam(this);
    *(undefined4 *)&this->m_bmoved = uVar10;
  }
LAB_001017d0:
  this->m_but = 0;
LAB_001017d4:
  UpdateWin__8ESimsCam(this);
                    /* end of inlined section */
  return;
}

bool ESimsCam::HandleRotation() {
	float mag;
	float pan;
	
  bool bVar1;
  float fVar2;
  
  if (this->m_pCursor == (ESimsCursor__3_1557 *)0x0) {
    bVar1 = false;
  }
  else {
    fVar2 = GetStick__11EControllerii(_ctrlPads[this->m_playerId],1,0);
    fVar2 = ABS(fVar2) * fVar2 * _dt * this->m_rotSpeed;
    bVar1 = false;
    if (fVar2 != 0.0) {
      fVar2 = this->m_DegRotAng + fVar2;
      this->m_DegRotAng = fVar2;
      if (0.0 <= fVar2) {
        if (360.0 < fVar2) {
          fVar2 = 0.0;
        }
      }
      else {
        fVar2 = 360.0;
      }
      this->m_DegRotAng = fVar2;
      bVar1 = true;
    }
  }
  return bVar1;
}

bool ESimsCam::HandleTilt() {
	float tilt;
	
  bool bVar1;
  float fVar2;
  float fVar3;
  
  if ((this->m_mode == 1) ||
     ((bVar1 = false, this->m_mode == 4 && (bVar1 = false, this->m_lastMode == 1)))) {
    if (this->m_pCursor == (ESimsCursor__3_1557 *)0x0) {
      bVar1 = false;
    }
    else {
      fVar2 = GetStick__11EControllerii(_ctrlPads[this->m_playerId],1,1);
      fVar3 = _8ESimsCam_m_minTilt;
      fVar2 = fVar2 * _dt * this->m_rotSpeed;
      bVar1 = false;
      if (fVar2 != 0.0) {
        fVar2 = this->m_DegTiltAng + fVar2;
        bVar1 = _8ESimsCam_m_minTilt <= fVar2;
        this->m_DegTiltAng = fVar2;
        if (bVar1) {
          fVar3 = (float)((int)fVar2 * (uint)(fVar2 < _8ESimsCam_m_maxTilt) |
                         (int)_8ESimsCam_m_maxTilt * (uint)(fVar2 >= _8ESimsCam_m_maxTilt));
        }
        this->m_DegTiltAng = fVar3;
        bVar1 = true;
      }
    }
  }
  return bVar1;
}

bool ESimsCam::HandleZoom() {
	float zoom;
	float maxZFact;
	
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (this->m_mode != 2) {
    if (this->m_mode != 4) {
      return false;
    }
    if (this->m_lastMode != 2) {
      return false;
    }
  }
  if (this->m_pCursor == (ESimsCursor__3_1557 *)0x0) {
    return false;
  }
  fVar4 = GetStick__11EControllerii(_ctrlPads[this->m_playerId],1,1);
  if (fVar4 == 0.0) {
    return false;
  }
  bVar2 = IsTwoPlayer__7EGlobal(&_globals);
  fVar1 = _8ESimsCam_m_minZoom;
  fVar3 = _8ESimsCam_m_maxZoom;
  if (bVar2) {
    fVar3 = _8ESimsCam_m_maxZoom * 0.65;
  }
  fVar5 = this->m_zoom - fVar4;
  bVar2 = _8ESimsCam_m_minZoom <= fVar5;
  this->m_zoom = fVar5;
  fVar6 = fVar1;
  if (bVar2) {
    fVar6 = (float)((int)fVar5 * (uint)(fVar5 < fVar3) | (int)fVar3 * (uint)(fVar5 >= fVar3));
  }
  this->m_zoom = fVar6;
  if (fVar6 != fVar1) {
    if (fVar6 == fVar3) {
      fVar4 = this->m_DegTiltAng;
      goto LAB_00101ab4;
    }
    this->m_DegTiltAng = this->m_DegTiltAng - fVar4;
  }
  fVar4 = this->m_DegTiltAng;
LAB_00101ab4:
  if (_cam_tilt_min <= fVar4) {
    this->m_DegTiltAng =
         (float)((int)fVar4 * (uint)(fVar4 < _cam_tilt_max) |
                (int)_cam_tilt_max * (uint)(fVar4 >= _cam_tilt_max));
  }
  else {
    this->m_DegTiltAng = _cam_tilt_min;
  }
  return true;
}

bool ESimsCam::HandleFirsPerson() {
	EMat4 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((this->m_mode == 3) &&
     (_globals._pSelectedSims[this->m_playerId] != (cXPerson__150_1300 *)0x0)) {
    puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
    uVar2 = (uint)&this->m_vEye & 7;
    puVar3 = (ulong *)((int)&this->m_vEye - uVar2);
    *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (this->m_vEye).field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x4120000000000000U >> (7 - uVar2) * 8;
    uVar2 = (uint)&this->m_vTarget & 7;
    puVar3 = (ulong *)((int)&this->m_vTarget - uVar2);
    *puVar3 = 0x4120000000000000 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (this->m_vTarget).field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar10 = (this->m_vEye).field0_0x0.d[1];
    fVar6 = (this->m_vEye).field0_0x0.d[0];
    fVar8 = (this->m_mFirstPerson).field0_0x0.d[2];
    fVar11 = (this->m_mFirstPerson).field0_0x0.d[1][2];
    fVar9 = (this->m_vEye).field0_0x0.d[2];
    fVar7 = (this->m_mFirstPerson).field0_0x0.d[2][2];
    fVar12 = (this->m_mFirstPerson).field0_0x0.d[3][2];
                    /* end of inlined section */
    uVar4 = CONCAT44(fVar6 * (this->m_mFirstPerson).field0_0x0.d[1] +
                     fVar10 * (this->m_mFirstPerson).field0_0x0.d[1][1] +
                     fVar9 * (this->m_mFirstPerson).field0_0x0.d[2][1] +
                     (this->m_mFirstPerson).field0_0x0.d[3][1],
                     fVar6 * (this->m_mFirstPerson).field0_0x0.d[0] +
                     fVar10 * (this->m_mFirstPerson).field0_0x0.d[1][0] +
                     fVar9 * (this->m_mFirstPerson).field0_0x0.d[2][0] +
                     (this->m_mFirstPerson).field0_0x0.d[3][0]);
    puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
    uVar2 = (uint)&this->m_vEye & 7;
    puVar3 = (ulong *)((int)&this->m_vEye - uVar2);
    *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (this->m_vEye).field0_0x0.d[2] = fVar6 * fVar8 + fVar10 * fVar11 + fVar9 * fVar7 + fVar12;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar6 = (this->m_vTarget).field0_0x0.d[0];
    fVar11 = (this->m_vTarget).field0_0x0.d[1];
    fVar7 = (this->m_mFirstPerson).field0_0x0.d[2];
    fVar12 = (this->m_mFirstPerson).field0_0x0.d[1][2];
    fVar9 = (this->m_vTarget).field0_0x0.d[2];
    fVar8 = (this->m_mFirstPerson).field0_0x0.d[2][2];
    fVar10 = (this->m_mFirstPerson).field0_0x0.d[3][2];
                    /* end of inlined section */
    uVar4 = CONCAT44(fVar6 * (this->m_mFirstPerson).field0_0x0.d[1] +
                     fVar11 * (this->m_mFirstPerson).field0_0x0.d[1][1] +
                     fVar9 * (this->m_mFirstPerson).field0_0x0.d[2][1] +
                     (this->m_mFirstPerson).field0_0x0.d[3][1],
                     fVar6 * (this->m_mFirstPerson).field0_0x0.d[0] +
                     fVar11 * (this->m_mFirstPerson).field0_0x0.d[1][0] +
                     fVar9 * (this->m_mFirstPerson).field0_0x0.d[2][0] +
                     (this->m_mFirstPerson).field0_0x0.d[3][0]);
    puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
    uVar2 = (uint)&this->m_vTarget & 7;
    puVar3 = (ulong *)((int)&this->m_vTarget - uVar2);
    *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (this->m_vTarget).field0_0x0.d[2] = fVar6 * fVar7 + fVar11 * fVar12 + fVar9 * fVar8 + fVar10;
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

void ESimsCam::UpdateWin() {
	float dz;
	float mu;
	float xaspect;
	float u;
	float a;
	float b;
	EGraphics *this;
	EGraphics *this;
	EPortalWindow *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  uint uVar2;
  EPortalWindow *pEVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int iVar4;
  float fVar5;
  float fVar6;
  TRect_float_ local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pEVar3 = &this->m_win;
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
  local_50.left = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
  local_50.bottom = 1.0;
  local_50.top = 0.0;
  local_50.right = 1.0;
                    /* end of inlined section */
  this->m_transSpeed =
       _8ESimsCam_m_transSpeedMin +
       ((this->m_zoom - _8ESimsCam_m_minZoom) / (_8ESimsCam_m_maxZoom - _8ESimsCam_m_minZoom)) *
       (_8ESimsCam_m_transSpeedDef - _8ESimsCam_m_transSpeedMin);
  SetViewport__9E3DWindowRCt5TRect1Zf(&pEVar3->field0_0x0,&local_50);
  if (this->m_mode == 3) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    iVar4 = _pGfx->m_xscreen;
    fVar6 = _fov * (float)_pGfx->m_yscreen;
    fVar5 = (float)(*(code *)pEVar1[0xd].EGlobalManagerClient)
                             ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0xd));
    SetProjection__13EPortalWindowffff
              (pEVar3,fVar6 / (float)iVar4,fVar5,0.05,_farPlane * _globals._EHouse_levelrad);
                    /* inlined from /eor/src2/engine/window/e_portalwindow.h */
  }
  else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    iVar4 = _pGfx->m_xscreen;
    fVar6 = _fov * (float)_pGfx->m_yscreen;
    fVar5 = (float)(*(code *)pEVar1[0xd].EGlobalManagerClient)
                             ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0xd));
    SetProjection__13EPortalWindowffff
              (pEVar3,fVar6 / (float)iVar4,fVar5,_nearPlane * _globals._EHouse_levelrad,
               _farPlane * _globals._EHouse_levelrad);
  }
  pEVar3 = &this->m_win;
                    /* end of inlined section */
  if (pEVar3 == (EPortalWindow *)0x0) {
    uVar2 = this->m_mode;
  }
  else {
    SetClipRatio__13EPortalWindowf(pEVar3,3.0);
    uVar2 = this->m_mode;
  }
  if (uVar2 == 3) {
    SetWinPos__8ESimsCamR9E3DWindow(this,&pEVar3->field0_0x0);
  }
  else {
    UpdateCamPos__8ESimsCam(this);
    ForceCusor__8ESimsCam(this);
  }
  return;
}

void ESimsCam::UpdateCamPos() {
	EVec3 vEye;
	EMat4 mRot;
	EVec3 vEyeToTarg;
	EVec3 vEyeNew;
	EVec3 vAx;
	bool canUpdate;
	EVec3 vTargToEye;
	float deg;
	float deg;
	ESimsCursor *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  Panelstate PVar3;
  ESimsCursor__3_1557 *pEVar4;
  uint uVar5;
  ulong *puVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  EVec3 vEye;
  EMat4 mRot;
  EVec3 vEyeToTarg;
  EVec3 vEyeNew;
  EVec3 vAx;
  EVec3 vTargToEye;
  float local_7c;
  float local_78;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vEye.field0_0x0.d[0] = _8ESimsCam_m_vEyeDef.field0_0x0.d[0];
  vEye.field0_0x0.d[1] = _8ESimsCam_m_vEyeDef.field0_0x0.d[1];
                    /* end of inlined section */
  vEye.field0_0x0.d[2] = _8ESimsCam_m_vEyeDef.field0_0x0.d[2];
  Id__5EMat4(&mRot);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar10 = _8ESimsCam_m_vTargetDef.field0_0x0.d[1] - vEye.field0_0x0.d[1];
  fVar11 = _8ESimsCam_m_vTargetDef.field0_0x0.d[0] - vEye.field0_0x0.d[0];
  vAx.field0_0x0.d[0] = -fVar10;
  fVar13 = _8ESimsCam_m_vTargetDef.field0_0x0.d[2] - vEye.field0_0x0.d[2];
                    /* end of inlined section */
  vEyeNew.field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vEyeNew.field0_0x0.d[0] = -fVar11;
  vTargToEye.field0_0x0.d[2] = 0.0;
  vEyeNew.field0_0x0.d[1] = vAx.field0_0x0.d[0];
  fVar12 = sqrtf(vAx.field0_0x0.d[0] * vAx.field0_0x0.d[0] + fVar11 * fVar11);
  vTargToEye.field0_0x0.d[1] = fVar11;
  if (fVar12 != 0.0) {
    fVar12 = 1.0 / fVar12;
    vAx.field0_0x0.d[0] = vAx.field0_0x0.d[0] * fVar12;
    vTargToEye.field0_0x0.d[2] = fVar12 * 0.0;
    vTargToEye.field0_0x0.d[1] = fVar11 * fVar12;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vAx.field0_0x0.d[1] = vTargToEye.field0_0x0.d[1];
                    /* end of inlined section */
  vAx.field0_0x0.d[2] = vTargToEye.field0_0x0.d[2];
  Rotate__5EMat4RC5EVec3f(&mRot,&vAx,this->m_DegTiltAng * 0.01745329);
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
  PostRotateZ__5EMat4f(&mRot,this->m_DegRotAng * 0.01745329);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  fVar14 = vEyeNew.field0_0x0.d[0] * mRot.field0_0x0.d[0][0] +
           vEyeNew.field0_0x0.d[1] * mRot.field0_0x0.d[1][0] +
           vEyeNew.field0_0x0.d[2] * mRot.field0_0x0.d[2][0] + mRot.field0_0x0.d[3][0];
  fVar12 = vEyeNew.field0_0x0.d[0] * mRot.field0_0x0.d[0][1] +
           vEyeNew.field0_0x0.d[1] * mRot.field0_0x0.d[1][1] +
           vEyeNew.field0_0x0.d[2] * mRot.field0_0x0.d[2][1] + mRot.field0_0x0.d[3][1];
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&vEyeNew.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | CONCAT44(fVar12,fVar14) >> (7 - uVar5) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vEye.field0_0x0.d[2] =
       vEyeNew.field0_0x0.d[0] * mRot.field0_0x0.d[0][2] +
       vEyeNew.field0_0x0.d[1] * mRot.field0_0x0.d[1][2] +
       vEyeNew.field0_0x0.d[2] * mRot.field0_0x0.d[2][2] + mRot.field0_0x0.d[3][2] +
       vEye.field0_0x0.d[2] + fVar13;
  vEyeNew.field0_0x0._0_8_ =
       CONCAT44(fVar12 + vEye.field0_0x0.d[1] + fVar10,fVar14 + vEye.field0_0x0.d[0] + fVar11);
  uVar8 = vEyeNew.field0_0x0._0_8_;
  vEyeNew.field0_0x0.d[2] = vEye.field0_0x0.d[2];
                    /* end of inlined section */
  PVar3 = (this->field0_0x0).m_state;
  puVar1 = (undefined *)((int)&vEye.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | (ulong)vEyeNew.field0_0x0._0_8_ >> (7 - uVar5) * 8;
  vEye.field0_0x0._0_8_ = uVar8;
  bVar7 = false;
  if ((PVar3 != LIVE_DIALOG_STATE) && (bVar7 = true, *(int *)&this->m_bCanUpdate == 0)) {
    bVar7 = false;
  }
  if (((this->m_pCursor != (ESimsCursor__3_1557 *)0x0) && (bVar7)) &&
     (bVar7 = IsTwoPlayer__7EGlobal(&_globals), bVar7)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
    pEVar4 = this->m_pCursor;
    puVar1 = (undefined *)((int)&(pEVar4->m_vPos).field0_0x0 + 7);
                    /* end of inlined section */
    uVar5 = (uint)puVar1 & 7;
    uVar2 = (uint)&pEVar4->m_vPos & 7;
    uVar9 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
            uVar8 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)&pEVar4->m_vPos - uVar2) >> uVar2 * 8;
    fVar10 = (pEVar4->m_vPos).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | uVar9 >> (7 - uVar5) * 8;
    uVar5 = (uint)&this->m_vTarget & 7;
    puVar6 = (ulong *)((int)&this->m_vTarget - uVar5);
    *puVar6 = uVar9 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    (this->m_vTarget).field0_0x0.d[2] = fVar10;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  }
  fVar12 = vEye.field0_0x0.d[0] - _8ESimsCam_m_vTargetDef.field0_0x0.d[0];
  local_7c = vEye.field0_0x0.d[1] - _8ESimsCam_m_vTargetDef.field0_0x0.d[1];
  local_78 = vEye.field0_0x0.d[2] - _8ESimsCam_m_vTargetDef.field0_0x0.d[2];
  fVar10 = sqrtf(fVar12 * fVar12 + local_7c * local_7c + local_78 * local_78);
  if (fVar10 != 0.0) {
    fVar10 = 1.0 / fVar10;
    local_78 = local_78 * fVar10;
    fVar12 = fVar12 * fVar10;
    local_7c = local_7c * fVar10;
  }
                    /* end of inlined section */
  fVar10 = this->m_zoom;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vEye.field0_0x0.d[2] = (this->m_vTarget).field0_0x0.d[2] + local_78 * fVar10;
                    /* end of inlined section */
  vEye.field0_0x0._0_8_ =
       CONCAT44((this->m_vTarget).field0_0x0.d[1] + local_7c * fVar10,
                (this->m_vTarget).field0_0x0.d[0] + fVar12 * fVar10);
  puVar1 = (undefined *)((int)&vEye.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | (ulong)vEye.field0_0x0._0_8_ >> (7 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | (ulong)vEye.field0_0x0._0_8_ >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_vEye & 7;
  puVar6 = (ulong *)((int)&this->m_vEye - uVar5);
  *puVar6 = vEye.field0_0x0._0_8_ << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_vEye).field0_0x0.d[2] = vEye.field0_0x0.d[2];
  SetWinPos__8ESimsCamR9E3DWindow(this,&(this->m_win).field0_0x0);
  __zoom_last = this->m_zoom;
  return;
}

void ESimsCam::ForceCusor() {
	EVec3 vCurToTarg;
	EVec3 *this;
	
  ESimsCursor__3_1557 *pEVar1;
  int iVar2;
  bool bVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar4;
  EVec3 vCurToTarg;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  pEVar1 = this->m_pCursor;
                    /* end of inlined section */
  if ((pEVar1 != (ESimsCursor__3_1557 *)0x0) && (bVar3 = CursorOnScreen__8ESimsCam(this), !bVar3)) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_5c = (this->m_vTarget).field0_0x0.d[1] - (pEVar1->m_vPos).field0_0x0.d[1];
    local_60 = (this->m_vTarget).field0_0x0.d[0] - (pEVar1->m_vPos).field0_0x0.d[0];
    local_58 = (this->m_vTarget).field0_0x0.d[2] - (pEVar1->m_vPos).field0_0x0.d[2];
    fVar4 = sqrtf(local_60 * local_60 + local_5c * local_5c + local_58 * local_58);
    if (fVar4 != 0.0) {
      fVar4 = 1.0 / fVar4;
      local_58 = local_58 * fVar4;
      local_60 = local_60 * fVar4;
      local_5c = local_5c * fVar4;
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    local_48 = this->m_transSpeed * _dt;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_50 = local_48 * local_60;
    local_4c = local_48 * local_5c;
    local_48 = local_48 * local_58;
                    /* end of inlined section */
    iVar2 = *(int *)&this->m_pCursor->field_0x38;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_60 = (pEVar1->m_vPos).field0_0x0.d[0] + local_50;
    local_58 = (pEVar1->m_vPos).field0_0x0.d[2] + local_48;
    local_5c = (pEVar1->m_vPos).field0_0x0.d[1] + local_4c;
                    /* end of inlined section */
    (**(code **)(iVar2 + 0x24))
              ((int)&(((ESimsCursor__3_1557 *)(this->m_pCursor->m_ToolValueCalcFnTab + -8))->
                     field0_0x0).m_state + (int)*(short *)(iVar2 + 0x20),&local_60);
  }
  return;
}

void ESimsCam::ResetPos() {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = _8ESimsCam_m_vEyeDef.field0_0x0.d[2];
  uVar4 = _8ESimsCam_m_vEyeDef.field0_0x0._0_8_;
  puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
            (ulong)_8ESimsCam_m_vEyeDef.field0_0x0._0_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vEye & 7;
  puVar3 = (ulong *)((int)&this->m_vEye - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vEye).field0_0x0.d[2] = uVar5;
  uVar5 = _8ESimsCam_m_vTargetDef.field0_0x0.d[2];
  uVar4 = _8ESimsCam_m_vTargetDef.field0_0x0._0_8_;
  puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
            (ulong)_8ESimsCam_m_vTargetDef.field0_0x0._0_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vTarget & 7;
  puVar3 = (ulong *)((int)&this->m_vTarget - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vTarget).field0_0x0.d[2] = uVar5;
  uVar5 = _8ESimsCam_m_vUpDef.field0_0x0.d[2];
  uVar4 = _8ESimsCam_m_vUpDef.field0_0x0._0_8_;
  puVar1 = (undefined *)((int)&(this->m_vUp).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
            (ulong)_8ESimsCam_m_vUpDef.field0_0x0._0_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vUp & 7;
  puVar3 = (ulong *)((int)&this->m_vUp - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vUp).field0_0x0.d[2] = uVar5;
  this->m_DegTiltAng = 45.0;
  this->m_zoom = 25.0;
  this->m_DegRotAng = 0.0;
  if ((ESimsCursor__15_1743 *)this->m_pCursor != (ESimsCursor__15_1743 *)0x0) {
    SnapToDefPos__11ESimsCursor((ESimsCursor__15_1743 *)this->m_pCursor);
  }
  UpdateWin__8ESimsCam(this);
  CenterOnSelectedSim__8ESimsCam(this);
  return;
}

void ESimsCam::CenterOnSelectedSim() {
	EVec3 vPos;
	float size;
	EVec3 vtargtoeye;
	EVec3 *this;
	EVec3 &v;
	
  undefined *puVar1;
  cXPerson__150_1300 *pcVar2;
  cXObject__150_1187 *pcVar3;
  cXObject__150_1187__vtable *pcVar4;
  ESimsCursor__3_1557 *pEVar5;
  ulong *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  EVec3 vPos;
  EVec3 vtargtoeye;
  CTilePt aCStack_70 [5];
  float local_60;
  float local_5c;
  float local_58;
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
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pcVar2 = _globals._pSelectedSims[this->m_playerId];
  if (pcVar2 == (cXPerson__150_1300 *)0x0) {
    return;
  }
                    /* end of inlined section */
  piVar7 = (int *)(*(code *)pcVar2->__vtable->GetPersonImplementation)
                            ((int)&pcVar2->_vb1187 +
                             (int)*(short *)&pcVar2->__vtable->GetControllingObject);
  (**(code **)(*piVar7 + 0x104))((int)piVar7 + (int)*(short *)(*piVar7 + 0x100),1,&vPos);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  vPos.field0_0x0.d[2] = 0.0;
  if (vPos.field0_0x0.d[0] * vPos.field0_0x0.d[0] + vPos.field0_0x0.d[1] * vPos.field0_0x0.d[1] <
      0.0001) {
    pcVar3 = _globals._pSelectedSims[this->m_playerId]->_vb1187;
    pcVar4 = pcVar3->__vtable;
    (*(code *)pcVar4[1].TestIntersection)
              (aCStack_70,(int)&pcVar3->_vb1121 + (int)*(short *)&pcVar4[1].IsInWorld);
    GetEVec3M__C7CTilePt(&vtargtoeye,aCStack_70);
    vPos.field0_0x0._0_8_ = CONCAT44(vtargtoeye.field0_0x0.d[1],vtargtoeye.field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar9);
    *puVar6 = *puVar6 & -1L << (uVar9 + 1) * 8 | (ulong)vPos.field0_0x0._0_8_ >> (7 - uVar9) * 8;
    vPos.field0_0x0.d[2] = vtargtoeye.field0_0x0.d[2];
    ___7CTilePt(aCStack_70,2);
  }
  pEVar5 = this->m_pCursor;
  if (pEVar5 != (ESimsCursor__3_1557 *)0x0) {
    (**(code **)(*(int *)&pEVar5->field_0x38 + 0x24))
              ((int)&(((ESimsCursor__3_1557 *)(pEVar5->m_ToolValueCalcFnTab + -8))->field0_0x0).
                     m_state + (int)*(short *)(*(int *)&pEVar5->field_0x38 + 0x20),&vPos);
  }
  iVar8 = (*(code *)_5Globs_pFixedWorld->__vtable->GetFloor)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFloorLayer);
  if (1.0 <= vPos.field0_0x0.d[0]) {
                    /* end of inlined section */
    if (vPos.field0_0x0.d[0] <= (float)(iVar8 + -1)) {
                    /* end of inlined section */
      if (vPos.field0_0x0.d[1] < 1.0) {
        uVar9 = this->m_mode;
        goto LAB_00102708;
      }
                    /* end of inlined section */
      if (vPos.field0_0x0.d[1] <= (float)(iVar8 + -1)) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vtargtoeye.field0_0x0.d[2] =
             (this->m_vEye).field0_0x0.d[2] - (this->m_vTarget).field0_0x0.d[2];
        vtargtoeye.field0_0x0.d[1] =
             (this->m_vEye).field0_0x0.d[1] - (this->m_vTarget).field0_0x0.d[1];
        vtargtoeye.field0_0x0.d[0] =
             (this->m_vEye).field0_0x0.d[0] - (this->m_vTarget).field0_0x0.d[0];
        puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
                    /* end of inlined section */
        uVar9 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar9);
        *puVar6 = *puVar6 & -1L << (uVar9 + 1) * 8 | (ulong)vPos.field0_0x0._0_8_ >> (7 - uVar9) * 8
        ;
        uVar9 = (uint)&this->m_vTarget & 7;
        puVar6 = (ulong *)((int)&this->m_vTarget - uVar9);
        *puVar6 = vPos.field0_0x0._0_8_ << uVar9 * 8 |
                  *puVar6 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
        (this->m_vTarget).field0_0x0.d[2] = vPos.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_58 = (this->m_vTarget).field0_0x0.d[2] + vtargtoeye.field0_0x0.d[2];
        local_5c = (this->m_vTarget).field0_0x0.d[1] + vtargtoeye.field0_0x0.d[1];
        local_60 = (this->m_vTarget).field0_0x0.d[0] + vtargtoeye.field0_0x0.d[0];
                    /* end of inlined section */
        puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
        uVar9 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar9);
        *puVar6 = *puVar6 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_5c,local_60) >> (7 - uVar9) * 8;
        uVar9 = (uint)&this->m_vEye & 7;
        puVar6 = (ulong *)((int)&this->m_vEye - uVar9);
        *puVar6 = CONCAT44(local_5c,local_60) << uVar9 * 8 |
                  *puVar6 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
        (this->m_vEye).field0_0x0.d[2] = local_58;
        UpdateWin__8ESimsCam(this);
        return;
      }
    }
    uVar9 = this->m_mode;
  }
  else {
    uVar9 = this->m_mode;
  }
LAB_00102708:
  if (uVar9 == 4) {
    this->m_mode = this->m_lastMode;
  }
  return;
}

void ESimsCam::GetPos(EVec3 &vEyeOut, EVec3 &vTargetOut, EVec3 &vUpOut) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  ulong in_t1;
  
  puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vEye & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vEye - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vEye).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vEyeOut->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vEyeOut & 7;
  *(ulong *)((int)vEyeOut - uVar2) =
       uVar6 << uVar2 * 8 |
       *(ulong *)((int)vEyeOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vEyeOut->field0_0x0).d[2] = fVar4;
  puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vTarget & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vTarget - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vTarget).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vTargetOut->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vTargetOut & 7;
  *(ulong *)((int)vTargetOut - uVar2) =
       uVar6 << uVar2 * 8 |
       *(ulong *)((int)vTargetOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vTargetOut->field0_0x0).d[2] = fVar4;
  puVar1 = (undefined *)((int)&(this->m_vUp).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vUp & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_t1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&this->m_vUp - uVar3) >> uVar3 * 8;
  fVar4 = (this->m_vUp).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vUpOut->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)vUpOut & 7;
  *(ulong *)((int)vUpOut - uVar2) =
       uVar6 << uVar2 * 8 | *(ulong *)((int)vUpOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (vUpOut->field0_0x0).d[2] = fVar4;
  return;
}

void ESimsCam::SetPos(EVec3 &vEye, EVec3 &vTarget, EVec3 &vUp) {
	EGraphics *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  EGlobalManagerClient__vtable *pEVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  ulong in_t0;
  EPortalWindow *this_00;
  int iVar7;
  float fVar8;
  float fVar9;
  
  this_00 = &this->m_win;
  puVar1 = (undefined *)((int)&vEye->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vEye & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vEye - uVar3) >> uVar3 * 8;
  fVar8 = (vEye->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vEye & 7;
  puVar5 = (ulong *)((int)&this->m_vEye - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vEye).field0_0x0.d[2] = fVar8;
  puVar1 = (undefined *)((int)&vTarget->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vTarget & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vTarget - uVar3) >> uVar3 * 8;
  fVar8 = (vTarget->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vTarget & 7;
  puVar5 = (ulong *)((int)&this->m_vTarget - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vTarget).field0_0x0.d[2] = fVar8;
  puVar1 = (undefined *)((int)&vUp->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vUp & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vUp - uVar3) >> uVar3 * 8;
  fVar8 = (vUp->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vUp).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vUp & 7;
  puVar5 = (ulong *)((int)&this->m_vUp - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vUp).field0_0x0.d[2] = fVar8;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  pEVar4 = (_pGfx->field0_0x0).__vtable;
  iVar7 = _pGfx->m_xscreen;
  fVar9 = _fov * (float)_pGfx->m_yscreen;
  fVar8 = (float)(*(code *)pEVar4[0xd].EGlobalManagerClient)
                           ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar4 + 0xd));
  SetProjection__13EPortalWindowffff
            (this_00,fVar9 / (float)iVar7,fVar8,_nearPlane,_farPlane * _globals._EHouse_levelrad);
  if (this_00 != (EPortalWindow *)0x0) {
    SetClipRatio__13EPortalWindowf(this_00,3.0);
  }
  SetWinPos__8ESimsCamR9E3DWindow(this,&this_00->field0_0x0);
  return;
}

bool ESimsCam::CursorOnScreen() {
	EVec2 vCurScreen;
	bool bIsPointSafe;
	EVec3 vCurs;
	ESimsCursor *this;
	ESimsCam *this;
	
  ESimsCursor__3_1557 *pEVar1;
  bool bVar2;
  bool bVar3;
  EVec2 vCurScreen;
  EVec3 vCurs;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
  pEVar1 = this->m_pCursor;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vCurs.field0_0x0.d[0] = (pEVar1->m_vPos).field0_0x0.d[0];
  vCurs.field0_0x0.d[1] = (pEVar1->m_vPos).field0_0x0.d[1];
  vCurs.field0_0x0.d[2] = (pEVar1->m_vPos).field0_0x0.d[2];
                    /* end of inlined section */
  TransformToScreen__9E3DWindowRC5EVec3R5EVec2(&(this->m_win).field0_0x0,&vCurs,&vCurScreen);
  bVar2 = false;
                    /* end of inlined section */
  if ((0.15 <= vCurScreen.field0_0x0.d[0]) && (vCurScreen.field0_0x0.d[0] <= 0.85)) {
    bVar2 = true;
  }
  bVar3 = false;
                    /* end of inlined section */
                    /* end of inlined section */
  if (((bVar2) && (0.3 <= vCurScreen.field0_0x0.d[1])) && (vCurScreen.field0_0x0.d[1] <= 0.75)) {
    bVar3 = true;
  }
  return bVar3;
}

void ESimsCam::CusorMoved(int which, EVec2 &vStick) {
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  bVar1 = CursorOnScreen__8ESimsCam(this);
  if ((!bVar1) && (bVar1 = IsTwoPlayer__7EGlobal(&_globals), !bVar1)) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar3 = (this->m_vTarget).field0_0x0.d[1];
    fVar2 = (this->m_vEye).field0_0x0.d[0];
    fVar4 = (this->m_vEye).field0_0x0.d[1];
    (this->m_vTarget).field0_0x0.d[0] =
         (this->m_vTarget).field0_0x0.d[0] + (vStick->field0_0x0).d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    (this->m_vTarget).field0_0x0.d[1] = fVar3 + (vStick->field0_0x0).d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    (this->m_vEye).field0_0x0.d[0] = fVar2 + (vStick->field0_0x0).d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar2 = (vStick->field0_0x0).d[1];
                    /* end of inlined section */
    *(undefined4 *)&this->m_bmoved = 1;
    (this->m_vEye).field0_0x0.d[1] = fVar4 + fVar2;
  }
  return;
}

void ESimsCam::SetWinPos(E3DWindow &win) {
  EWindow__vtable *pEVar1;
  
  pEVar1 = (win->field0_0x0).__vtable;
  (*(code *)pEVar1[2].Cast3DWindow)
            ((int)&(win->field0_0x0).m_mWindow.field0_0x0 +
             (int)*(short *)&pEVar1[2].SetRenderSurface,&this->m_vEye,&this->m_vTarget,&this->m_vUp)
  ;
  return;
}

void ESimsCam::SetPos2Player(E3DWindow &win) {
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
	float deg;
	
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___14EIBezierSpline(&_8ESimsCam_m_spline,2);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.cpp */
      _8ESimsCam_m_vEyeDef.field0_0x0.d[0] = 0.0;
      _8ESimsCam_m_vUpDef.field0_0x0.d[2] = 1.0;
      _8ESimsCam_m_minZoomPt.field0_0x0.d[2] = 4.271;
      _8ESimsCam_m_ctrlPt1.field0_0x0.d[2] = 3.168;
      _8ESimsCam_m_ctrlPt2.field0_0x0.d[2] = 23.822;
      _8ESimsCam_m_maxZoomPt.field0_0x0.d[2] = 35.272;
      _8ESimsCam_m_vEyeDef.field0_0x0.d[2] = 0.0;
      _8ESimsCam_m_vTargetDef.field0_0x0.d[0] = 10.0;
      _8ESimsCam_m_vTargetDef.field0_0x0.d[1] = 10.0;
      _8ESimsCam_m_vTargetDef.field0_0x0.d[2] = 0.0;
      _8ESimsCam_m_minZoomPt.field0_0x0.d[0] = 0.0;
      _8ESimsCam_m_ctrlPt1.field0_0x0.d[0] = 0.0;
      _8ESimsCam_m_vUpDef.field0_0x0.d[0] = 0.0;
      _8ESimsCam_m_minZoomPt.field0_0x0.d[1] = 7.899;
      _8ESimsCam_m_ctrlPt1.field0_0x0.d[1] = 16.09;
      _8ESimsCam_m_ctrlPt2.field0_0x0.d[0] = 0.0;
      _8ESimsCam_m_ctrlPt2.field0_0x0.d[1] = 2.34;
      _8ESimsCam_m_maxZoomPt.field0_0x0.d[0] = 0.0;
      _8ESimsCam_m_maxZoomPt.field0_0x0.d[1] = 0.0;
      _8ESimsCam_m_vEyeDef.field0_0x0.d[1] = 0.0;
      _8ESimsCam_m_vUpDef.field0_0x0.d[1] = 0.0;
      __14EIBezierSpline(&_8ESimsCam_m_spline);
      _vP2ScreenPosMin.field0_0x0.d[0] = 0.75;
      _clampRad = _dt * _8ESimsCam_m_rotSpeedDef * 0.01745329 * 5.0;
      _vP2ScreenPosMin.field0_0x0.d[1] = 0.18;
      _vP2ScreenPosMax.field0_0x0.d[0] = 0.3;
      _vP2ScreenPosMax.field0_0x0.d[1] = 0.45;
      _vP1ScreenPosMin.field0_0x0.d[0] = 0.75;
      _vP1ScreenPosMin.field0_0x0.d[1] = 0.18;
      _vP1ScreenPosMax.field0_0x0.d[0] = 0.3;
      _vP1ScreenPosMax.field0_0x0.d[1] = 0.45;
    }
  }
  return;
}

ESimsCam* ESimsCam::ESimsCam() {
	Panelstateman *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
  (this->field0_0x0).m_state = LIVE_DEFAULT_STATE;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (Panelstateman__vtable *)_vt_8ESimsCam;
  __13EPortalWindow(&this->m_win);
  return this;
}

void* ESimsCam::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,(long)(int)size);
  return __s;
}

void ESimsCam::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

ESimsCam* ESimsCam::ESimsCam(int player) {
	Panelstateman *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
  (this->field0_0x0).m_state = LIVE_DEFAULT_STATE;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (Panelstateman__vtable *)_vt_8ESimsCam;
  __13EPortalWindow(&this->m_win);
  this->m_playerId = player;
  return this;
}

void ESimsCam::~ESimsCam(int __in_chrg) {
	Panelstateman *this;
	void *pAddress;
	void *p;
	
  (this->field0_0x0).__vtable = (Panelstateman__vtable *)_vt_8ESimsCam;
  Reset__8ESimsCam(this);
  ___13EPortalWindow(&this->m_win,2);
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (Panelstateman__vtable *)_vt_13Panelstateman;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void ESimsCam::SetEvent(PanelEvent event, u32 data) {
  return;
}

EVec3& ESimsCam::GetEye() {
  return &this->m_vEye;
}

EVec3& ESimsCam::GetTarget() {
  return &this->m_vTarget;
}

EVec3& ESimsCam::GetUp() {
  return &this->m_vUp;
}

void ESimsCam::IncPos(EVec2 vinc) {
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (vinc->field0_0x0).d[1];
  fVar5 = (vinc->field0_0x0).d[0];
  fVar1 = (this->m_vEye).field0_0x0.d[1];
  fVar3 = (this->m_vTarget).field0_0x0.d[0];
  fVar2 = (this->m_vTarget).field0_0x0.d[1];
  (this->m_vEye).field0_0x0.d[0] = (this->m_vEye).field0_0x0.d[0] + fVar5;
  (this->m_vEye).field0_0x0.d[1] = fVar1 + fVar4;
  (this->m_vTarget).field0_0x0.d[0] = fVar3 + fVar5;
  (this->m_vTarget).field0_0x0.d[1] = fVar2 + fVar4;
  return;
}

void ESimsCam::SetTarget(EVec3 &vTarget) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&vTarget->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vTarget & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vTarget - uVar3) >> uVar3 * 8;
  fVar4 = (vTarget->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vTarget & 7;
  puVar5 = (ulong *)((int)&this->m_vTarget - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vTarget).field0_0x0.d[2] = fVar4;
  return;
}

float ESimsCam::GetTransSpeed() {
  return this->m_transSpeed;
}

void ESimsCam::SetTransSpeed(float transSpeed) {
  this->m_transSpeed = transSpeed;
  return;
}

float ESimsCam::GetRotSpeed() {
  return this->m_rotSpeed;
}

void ESimsCam::SetRotSpeed(float rotSpeed) {
  this->m_rotSpeed = rotSpeed;
  return;
}

float ESimsCam::GetZoom() {
  return this->m_zoom;
}

float ESimsCam::GetTilt() {
  return this->m_DegTiltAng;
}

E3DWindow* ESimsCam::GetWin() {
  return &(this->m_win).field0_0x0;
}

void ESimsCam::AttachCursor(int which, ESimsCursor *pCurs) {
  this->m_pCursor = pCurs;
  _globals._pCursor[which] = (ESimsCursor__67_3982 *)pCurs;
  return;
}

bool ESimsCam::GetbMoved() {
  return SUB41(*(undefined4 *)&this->m_bmoved,0);
}

void ESimsCam::SetUpdateable(bool on) {
  *(int *)&this->m_bCanUpdate = (int)on;
  return;
}

float ESimsCam::GetRotAng() {
  return this->m_DegRotAng;
}

u32 ESimsCam::GetMode() {
  return this->m_mode;
}

int ESimsCam::GetPlayerId() {
  return this->m_playerId;
}

void ESimsCam::SetFirstPerson(EMat4 &in) {
  __as__5EMat4RC5EMat4(&this->m_mFirstPerson,in);
  return;
}

void Panelstateman::~Panelstateman(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (Panelstateman__vtable *)_vt_13Panelstateman;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void global constructors keyed to ESimsCam::m_modeDef() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to ESimsCam::m_modeDef() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
