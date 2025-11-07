// STATUS: NOT STARTED

#include "global.h"

// warning: multiple differing types with the same name (name not equal)
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb3023;
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
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb3023;
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
	SimInfoWin();
	SimInfoWin();
	/* vtable[1] */ virtual SimInfoWin(SimInfoWin*, int, void);
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void Update();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawInfo();
	void SetWindow();
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
	void DrawBackGround();
	void StartIntro();
	void StartTextSlide();
	void UpdateIntroAnim();
	void UpdateInfoIntroAnim();
	void StartInfoIntro();
	void ResetAllclocks();
	void JobDrawInfo();
};

// warning: multiple differing types with the same name (name not equal)
struct DPadWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb3023;
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
	DPadWin();
	DPadWin();
	/* vtable[1] */ virtual DPadWin(DPadWin*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void SetDefaultFlags();
	static void Init(/* parameters unknown */);
	static void CleanUp(/* parameters unknown */);
	static void DrawButtonPrompts(/* parameters unknown */);
protected:
	void DrawHead();
	void DrawLIVE_DEFAULT();
	void DrawLIVE_DIALOG();
	void DrawLIVE_ACTIONQ();
	void DrawLIVE_INFOUP();
	void DrawLIVE_PIMENU();
};

// warning: multiple differing types with the same name (name not equal)
struct EPausePanel : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb3023;
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
	EPausePanel();
	EPausePanel();
	/* vtable[1] */ virtual EPausePanel(EPausePanel*, int, void);
	/* vtable[14] */ virtual void Init();
	/* vtable[15] */ virtual void Reset();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[7] */ virtual void Message();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void DrawGenericMessageBox();
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

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb5112;
	__vtbl_ptr_type *$vf3244;
	
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
	cXObject *$vb3244;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf985;
	
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
	cXObject *$vb3244;
	__vtbl_ptr_type *$vf6765;
	
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

struct ERQTable<WallSet> {
	char *pName;
	WallSet *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct ERQTable<FloorSet> {
	char *pName;
	FloorSet *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct ERQTable<FenceSet> {
	char *pName;
	FenceSet *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct ERQTable<Shift_JISMapping> {
	char *pName;
	Shift_JISMapping *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct ERQTable<SpriteIdToResIdNode> {
	char *pName;
	SpriteIdToResIdNode *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct ERQTable<ECntrMdlLkupTable> {
	char *pName;
	ECntrMdlLkupTable *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

EGlobal _globals = {
	/* ._curGameState = */ {
		/* .m_id = */ 0
	},
	/* ._EHouse_levelrad = */ 0.f,
	/* ._global_house_offx = */ 0.f,
	/* ._global_house_offy = */ 0.f,
	/* ._bGamePaused = */ false,
	/* ._bForceCtrl2Connect = */ false,
	/* ._VanityMirrorState = */ 0,
	/* ._UnlockDialogState = */ 0,
	/* ._HighScoreDialogState = */ 0,
	/* .m_nCreditMode = */ 0,
	/* ._pNeighborhoodTerrain = */ NULL,
	/* ._pSelectedSims = */ {
		/* [0] = */ NULL,
		/* [1] = */ NULL
	},
	/* ._pCursor = */ {
		/* [0] = */ NULL,
		/* [1] = */ NULL
	},
	/* ._pCurHouse = */ NULL,
	/* ._pCurLights = */ NULL,
	/* ._nCurLights = */ 0,
	/* .m_renderPass = */ 0,
	/* ._pCurCam = */ NULL,
	/* ._pPanel = */ NULL,
	/* ._pWardrobe = */ NULL,
	/* ._pVanityMirror = */ NULL,
	/* ._pFloorSet = */ NULL,
	/* ._pWallSet = */ NULL,
	/* ._pFenceSet = */ NULL,
	/* ._pUnlockDialog = */ NULL,
	/* ._pHighScoreDialog = */ NULL,
	/* .m_pUiData = */ NULL,
	/* .m_pSpriteIdToResId = */ NULL,
	/* .m_pTileData = */ NULL,
	/* .m_waveDataTable = */ NULL,
	/* .m_pWhiteShader = */ NULL,
	/* .m_pBlackShader = */ NULL,
	/* .m_pFont = */ NULL,
	/* .m_pFontShadowed = */ NULL,
	/* .m_pDialog = */ NULL,
	/* .m_p2PDialog = */ {
		/* [0] = */ NULL,
		/* [1] = */ NULL
	},
	/* .m_pMessDialogs = */ {
		/* [0] = */ NULL,
		/* [1] = */ NULL
	},
	/* .m_pCtrlPad = */ NULL,
	/* .m_pSpriteMan = */ NULL,
	/* .m_pDataset = */ NULL,
	/* .m_pPiP = */ NULL,
	/* .m_pVibrate = */ NULL,
	/* .m_pCheats = */ NULL,
	/* .m_pMemCard = */ NULL,
	/* .m_pOptionsRecon = */ NULL,
	/* .m_bCtrl2Detected = */ false,
	/* .m_whichPlayerPaused = */ 0,
	/* .m_vCameraRotDegrees = */ 0.f,
	/* .Cheats = */ {
		/* .SoundOn = */ false,
		/* .FreeItems = */ false,
		/* .MemoryDisplay = */ false,
		/* .UnlockAllItems = */ false,
		/* .UnlockPartyMotel = */ false,
		/* .UnlockFreeplayMode = */ false,
		/* .DebugInteractions = */ false,
		/* .AnimationNameDisplay = */ false,
		/* .DispFPS = */ false,
		/* .ArtsendDebug = */ false,
		/* .CameraTiltUnlocked = */ false,
		/* .CameraFirstPersonUnlocked = */ false,
		/* .gAllowMovingAllObjects = */ false,
		/* .UseBigHead = */ false,
		/* .RainbowSkin = */ false,
		/* .SmurfMode = */ false,
		/* .bMenuEnabled = */ false,
		/* .TutorialStage = */ 0,
		/* .TutorialHouseNum = */ 0,
		/* .cam_zoom_min = */ 0,
		/* .cam_zoom_max = */ 0,
		/* .cam_fov = */ 0,
		/* .ambientIntensity = */ 0,
		/* .directionIntensity = */ 0,
		/* .cameraIntensity = */ 0,
		/* .directionX = */ 0,
		/* .directionY = */ 0,
		/* .directionZ = */ 0,
		/* .LocTestEnabled = */ 0,
		/* .ResourceTestEnabled = */ 0,
		/* .EXEName = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0,
			/* [8] = */ 0,
			/* [9] = */ 0,
			/* [10] = */ 0,
			/* [11] = */ 0,
			/* [12] = */ 0,
			/* [13] = */ 0,
			/* [14] = */ 0,
			/* [15] = */ 0,
			/* [16] = */ 0,
			/* [17] = */ 0,
			/* [18] = */ 0,
			/* [19] = */ 0,
			/* [20] = */ 0,
			/* [21] = */ 0,
			/* [22] = */ 0,
			/* [23] = */ 0,
			/* [24] = */ 0,
			/* [25] = */ 0,
			/* [26] = */ 0,
			/* [27] = */ 0,
			/* [28] = */ 0,
			/* [29] = */ 0,
			/* [30] = */ 0,
			/* [31] = */ 0
		}
	},
	/* .m_FamilyToMoveIn = */ 0,
	/* .m_nUnlockBitField = */ 0,
	/* .ChallengeModeHouseNum = */ 0,
	/* .m_bGotoNeighborhoodMode = */ false,
	/* .m_bGotoStartMode = */ false,
	/* .m_bUseCurrentNeighborhood = */ false,
	/* .m_NeighborhoodHouseNum = */ 0,
	/* .m_bSetNeighborhoodAsStoryMode = */ false,
	/* .m_bStoryModeTransferHouses = */ false,
	/* .m_bStoryModeDoSubstitutionOnTransfer = */ false,
	/* .m_StoryModeFamilyToMoveInBehind = */ 0,
	/* .m_StoryModeMoveIntoHouseNum = */ 0,
	/* .m_bDisplayStoryModeTransitionScreen = */ false,
	/* .m_pStoryModeTransitionText = */ NULL,
	/* .m_pStoryModeTransitionShader = */ NULL,
	/* .m_bStoryModeStart = */ false,
	/* .m_bStoryModeWonGame = */ false,
	/* .m_bDisplayGenericTransitionScreen = */ false,
	/* .m_bDisplayingChallengeModeScreen = */ false,
	/* .m_GenTransitionLoadPercent = */ 0.f,
	/* .m_pGenericTransShader = */ NULL,
	/* .m_bLanguageSelected = */ false,
	/* .m_nChallengePlayerNum = */ 0,
	/* .m_nChallengeScore = */ 0,
	/* .m_nChallengeComponent1 = */ 0,
	/* .m_nChallengeComponent2 = */ 0,
	/* .m_nChallengeComponent3 = */ 0,
	/* .m_nChallengeComponent4 = */ 0,
	/* .m_nUnlockCode = */ 0,
	/* .m_nUnlockPersonId = */ 0,
	/* .m_nUnlockGuid = */ 0,
	/* .m_bResetBackgroundColor = */ false,
	/* .m_bListenToController = */ false,
	/* .$vf849 = */ NULL
};

EVec2 _defULTextureCoord = {
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

EVec2 _defLRTextureCoord = {
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

EVec4 _vBlueBack = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

EVec4 _WHITE = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

EVec4 _BLACK = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

EVec4 _YELLOW = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

EVec4 _BLUE = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

EVec4 _RED = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

EVec4 _GREEN = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

EVec4 _CYAN = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

EVec4 _MAJENTA = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

EVec4 _GREAY = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

EVec4 _LT_GREAY = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

EVec4 _DK_GREAY = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

__vtbl_ptr_type EGlobal virtual table[44] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::~EGlobal,
		/* .__delta2 = */ -1704
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::TransformToScreen,
		/* .__delta2 = */ 2216
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::Message,
		/* .__delta2 = */ 6936
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::GetCursorPosAsFtile,
		/* .__delta2 = */ 7008
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::DestroyInstance,
		/* .__delta2 = */ 7184
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::AllocInstance,
		/* .__delta2 = */ 7480
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::AllocPersonInstance,
		/* .__delta2 = */ 7680
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::AllocSpriteRenderer,
		/* .__delta2 = */ 7856
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::FreeSpriteRenderer,
		/* .__delta2 = */ 7888
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::UpdateSpriteRenderer,
		/* .__delta2 = */ 7928
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::ConvertSpriteIdToResId,
		/* .__delta2 = */ 7960
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::GetCounterModelTable,
		/* .__delta2 = */ 8040
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::CreateAnimator,
		/* .__delta2 = */ -1120
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::SetSelectedPerson,
		/* .__delta2 = */ 5024
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::AdvanceSelectedPerson,
		/* .__delta2 = */ 5688
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::ReverseSelectedPerson,
		/* .__delta2 = */ 6240
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::LoadSelectorData,
		/* .__delta2 = */ 8080
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::UnloadSelectorData,
		/* .__delta2 = */ 8112
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::CreateThumbnail,
		/* .__delta2 = */ 8152
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::IsTwoPlayer,
		/* .__delta2 = */ -1048
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::IsObjectInUseByPlayer,
		/* .__delta2 = */ -864
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::RecalcFloor,
		/* .__delta2 = */ 8648
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::RecalcWalls,
		/* .__delta2 = */ 8688
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::RecalcObjects,
		/* .__delta2 = */ 8728
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::RecalcHouse,
		/* .__delta2 = */ 8768
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::GetWin,
		/* .__delta2 = */ 2168
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::SelectWin,
		/* .__delta2 = */ 2120
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::GetCam,
		/* .__delta2 = */ 2208
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::SetCam,
		/* .__delta2 = */ 2200
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::CreateWardrobe,
		/* .__delta2 = */ 3768
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::CreateVanityMirror,
		/* .__delta2 = */ 3992
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::CreateUnlockDialog,
		/* .__delta2 = */ 4216
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::CreateNameEntry,
		/* .__delta2 = */ 4224
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::DoModelessMessage,
		/* .__delta2 = */ 8984
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::SwapSelectedSims,
		/* .__delta2 = */ 11728
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::BeginSaveGame,
		/* .__delta2 = */ 8832
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::EndSaveGame,
		/* .__delta2 = */ 8920
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::CheckForZeroExtentOverride,
		/* .__delta2 = */ 9928
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::CheckForZeroExtentOverride,
		/* .__delta2 = */ 10168
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::CallUnlockItems,
		/* .__delta2 = */ 10328
	},
	/* [41] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::CallTestUnlocked,
		/* .__delta2 = */ 10368
	},
	/* [42] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobal::CallNewScore,
		/* .__delta2 = */ 10472
	},
	/* [43] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EDialog *_pDialog = NULL;

void EGlobal::~EGlobal(int __in_chrg) {
	EGameStateId *this;
	void *pAddress;
	void *pAddress;
	
  this->__vtable = (EGlobal__vtable *)_vt_7EGlobal;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

EGlobal* EGlobal::EGlobal() {
	EGameStateId *this;
	
  int iVar1;
  uchar uVar2;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  (this->_curGameState).m_id = 0;
                    /* end of inlined section */
  this->_pCurCam = (ESimsCam *)0x0;
  this->_pNeighborhoodTerrain = (ERLevel *)0x0;
  this->_pSelectedSims[0] = (cXPerson__150_1300 *)0x0;
  this->_pSelectedSims[1] = (cXPerson__150_1300 *)0x0;
  this->_pCursor[0] = (ESimsCursor__67_3982 *)0x0;
  this->_pCursor[1] = (ESimsCursor__67_3982 *)0x0;
  this->_pCurHouse = (EHouse__26_3190 *)0x0;
  this->_pPanel = (EPanel *)0x0;
  this->_pCurLights = (ELights *)0x0;
  this->_nCurLights = 0;
  this->m_pUiData = (ERQuickdata *)0x0;
  this->m_pTileData = (ERQuickdata *)0x0;
  this->m_pWhiteShader = (ERShader *)0x0;
  this->m_pBlackShader = (ERShader *)0x0;
  this->m_pFont = (ERFont *)0x0;
  this->m_pFontShadowed = (ERFont *)0x0;
  this->m_pDialog = (EDialog *)0x0;
  this->m_p2PDialog[0] = (E2PDialog *)0x0;
  this->m_p2PDialog[1] = (E2PDialog *)0x0;
  this->m_pMessDialogs[0] = (EMessageDialog *)0x0;
  this->m_pMessDialogs[1] = (EMessageDialog *)0x0;
  this->m_pCtrlPad = (Controllpad *)0x0;
  this->m_pSpriteMan = (ESpriteRenderMan *)0x0;
  this->m_pDataset = (ERDataset *)0x0;
  this->m_pPiP = (EPictureInPicture *)0x0;
  this->m_pVibrate = (EVibrate *)0x0;
  this->m_pCheats = (ECheats *)0x0;
  this->m_pMemCard = (ESimsMemCard *)0x0;
  this->m_pOptionsRecon = (OptionsRecon *)0x0;
  this->m_waveDataTable = (ERQuickdata *)0x0;
  this->m_pSpriteIdToResId = (ERQuickdata *)0x0;
  this->__vtable = (EGlobal__vtable *)_vt_7EGlobal;
  memset(&this->Cheats,0,0x74);
  iVar1 = _iVideoMode;
  (this->Cheats).LocTestEnabled = 0xff;
  (this->Cheats).cam_zoom_min = '(';
  (this->Cheats).cam_zoom_max = 0xa0;
  *(undefined4 *)&this->Cheats = 1;
  *(undefined4 *)&(this->Cheats).FreeItems = 0;
  *(undefined4 *)&(this->Cheats).MemoryDisplay = 0;
  *(undefined4 *)&(this->Cheats).UnlockAllItems = 0;
  *(undefined4 *)&(this->Cheats).UnlockPartyMotel = 0;
  *(undefined4 *)&(this->Cheats).UnlockFreeplayMode = 0;
  *(undefined4 *)&(this->Cheats).ArtsendDebug = 1;
  (this->Cheats).TutorialHouseNum = 0xff;
  (this->Cheats).TutorialStage = 0xff;
  *(undefined4 *)&(this->Cheats).DispFPS = 0;
  *(undefined4 *)&(this->Cheats).CameraFirstPersonUnlocked = 0;
  *(undefined4 *)&(this->Cheats).CameraTiltUnlocked = 0;
  *(undefined4 *)&(this->Cheats).gAllowMovingAllObjects = 0;
  (this->Cheats).ResourceTestEnabled = '\x01';
  *(undefined4 *)&(this->Cheats).bMenuEnabled = 0;
  uVar2 = 0xdc;
  if (iVar1 == 1) {
    uVar2 = 0xb4;
  }
  (this->Cheats).cam_fov = uVar2;
  iVar1 = _iVideoMode;
  (this->Cheats).ambientIntensity = '2';
  (this->Cheats).directionIntensity = '5';
  (this->Cheats).cameraIntensity = '*';
  (this->Cheats).directionX = 0x8f;
  (this->Cheats).directionY = '(';
  (this->Cheats).directionZ = '<';
  if (iVar1 == 0) {
    strcpy((this->Cheats).EXEName,"cdrom0:\\SLUS_205.73;1");
  }
  else {
    strcpy((this->Cheats).EXEName,"cdrom0:\\SLES_512.57;1");
  }
  this->m_NeighborhoodHouseNum = 7;
  this->ChallengeModeHouseNum = '\x01';
  this->m_StoryModeFamilyToMoveInBehind = -1;
  *(undefined4 *)&this->m_bGotoNeighborhoodMode = 0;
  *(undefined4 *)&this->m_bGotoStartMode = 0;
  *(undefined4 *)&this->m_bUseCurrentNeighborhood = 0;
  this->m_nUnlockBitField = 0;
  this->m_nUnlockGuid = 0;
  this->m_nUnlockCode = 0;
  this->m_nUnlockPersonId = 0;
  *(undefined4 *)&this->m_bSetNeighborhoodAsStoryMode = 0;
  *(undefined4 *)&this->m_bStoryModeTransferHouses = 0;
  *(undefined4 *)&this->m_bStoryModeDoSubstitutionOnTransfer = 0;
  this->m_StoryModeMoveIntoHouseNum = 0;
  *(undefined4 *)&this->m_bDisplayStoryModeTransitionScreen = 0;
  this->m_pStoryModeTransitionText = (short *)0x0;
  this->m_pStoryModeTransitionShader = (ERShader *)0x0;
  *(undefined4 *)&this->m_bStoryModeStart = 0;
  *(undefined4 *)&this->m_bStoryModeWonGame = 0;
  *(undefined4 *)&this->m_bDisplayGenericTransitionScreen = 0;
  this->m_GenTransitionLoadPercent = 0.0;
  this->m_pGenericTransShader = (ERShader *)0x0;
  _16ISimsObjectModel_m_pWhiteShader = (ERShader *)0x0;
  *(undefined4 *)&this->m_bListenToController = 1;
  *(undefined4 *)&this->m_bLanguageSelected = 0;
  *(undefined4 *)&this->m_bCtrl2Detected = 0;
  *(undefined4 *)&this->m_bResetBackgroundColor = 1;
  *(undefined4 *)&this->_bForceCtrl2Connect = 0;
  return this;
}

SAnimator* EGlobal::CreateAnimator() {
	void *result;
	
  SAnimator2 *pSVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/SAnimator2.h */
  pSVar1 = (SAnimator2 *)_memmanAlloc__FUiUi(0x480,0x10);
  memset(pSVar1,0,0x480);
                    /* end of inlined section */
  pSVar1 = __10SAnimator2(pSVar1);
  return &pSVar1->field0_0x0;
}

bool EGlobal::IsTwoPlayer() {
	SInt16 gameStage;
	
  bool bVar1;
  long lVar2;
  
  if (_globals._20_4_ == 0) {
    if (this->_pPanel == (EPanel *)0x0) {
      return false;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
                    /* end of inlined section */
    if (this->_pPanel->m_panleState + ~LIVE_SIM_EDIT < 2) {
      return false;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    if (_5Globs_pNeighborhood == (Neighborhood *)0x0) {
      return false;
    }
                    /* end of inlined section */
    lVar2 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
    if (lVar2 != 1) {
      if (lVar2 == 2) goto LAB_0015fc60;
      if (lVar2 != 0) {
        return false;
      }
      if (this->_pSelectedSims[1] == (cXPerson__150_1300 *)0x0) {
        return false;
      }
      if (this->_pSelectedSims[0] != (cXPerson__150_1300 *)0x0) {
        return true;
      }
    }
    bVar1 = false;
  }
  else {
LAB_0015fc60:
    bVar1 = true;
  }
  return bVar1;
}

bool EGlobal::IsObjectInUseByPlayer(int which, cXObject *pObject) {
  cXPerson__150_1300 *pcVar1;
  cXPerson__150_1300__vtable *pcVar2;
  Interaction *pIVar3;
  cXObject__142_982 *pcVar4;
  Interaction *this_00;
  
  if (which < 2) {
    pcVar1 = this->_pSelectedSims[which];
    if (pcVar1 != (cXPerson__150_1300 *)0x0) {
      pIVar3 = (Interaction *)
               (*(code *)pcVar1->__vtable->IsChild)
                         ((int)&pcVar1->_vb1187 + (int)*(short *)&pcVar1->__vtable->IsVisitor);
      pcVar4 = GetStackObject__C11Interaction(pIVar3);
      return pcVar4 == (cXObject__142_982 *)pObject;
    }
    return false;
  }
  pcVar2 = this->_pSelectedSims[0]->__vtable;
  pIVar3 = (Interaction *)
           (*(code *)pcVar2->IsChild)
                     ((int)&this->_pSelectedSims[0]->_vb1187 + (int)*(short *)&pcVar2->IsVisitor);
  pcVar2 = this->_pSelectedSims[1]->__vtable;
  this_00 = (Interaction *)
            (*(code *)pcVar2->IsChild)
                      ((int)&this->_pSelectedSims[1]->_vb1187 + (int)*(short *)&pcVar2->IsVisitor);
  pcVar4 = GetStackObject__C11Interaction(pIVar3);
  if (pcVar4 != (cXObject__142_982 *)pObject) {
    if (this->_pSelectedSims[1] == (cXPerson__150_1300 *)0x0) {
      return false;
    }
    pcVar4 = GetStackObject__C11Interaction(this_00);
    if (pcVar4 != (cXObject__142_982 *)pObject) {
      return false;
    }
  }
  return true;
}

void EGlobal::LoadIntroRequirements() {
  ERShader *pEVar1;
  Controllpad *pCVar2;
  ERFont *pEVar3;
  ESimsMemCard *pEVar4;
  ERQuickdata *pEVar5;
  OptionsRecon *pOVar6;
  EDialog *pEVar7;
  
  if (this->m_pWhiteShader == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar1 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x1a18ca65,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pWhiteShader = pEVar1;
    pCVar2 = this->m_pCtrlPad;
  }
  else {
    pCVar2 = this->m_pCtrlPad;
  }
  if (pCVar2 == (Controllpad *)0x0) {
    pCVar2 = (Controllpad *)__builtin_new(0x44);
    pCVar2 = __11Controllpad(pCVar2);
    this->m_pCtrlPad = pCVar2;
    pEVar3 = this->m_pFont;
  }
  else {
    pEVar3 = this->m_pFont;
  }
  if (pEVar3 == (ERFont *)0x0) {
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
    pEVar3 = (ERFont *)
             AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pFont = pEVar3;
    LoadFont__6ERFont(pEVar3);
  }
  pEVar4 = (ESimsMemCard *)__builtin_new(0x1a4);
  pEVar4 = __12ESimsMemCard(pEVar4);
  this->m_pMemCard = pEVar4;
  Init__12ESimsMemCard(pEVar4);
  if (this->m_pUiData == (ERQuickdata *)0x0) {
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
    pEVar5 = (ERQuickdata *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_quickdataman.field0_0x0,0xa173a1ee,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pUiData = pEVar5;
    pOVar6 = this->m_pOptionsRecon;
  }
  else {
    pOVar6 = this->m_pOptionsRecon;
  }
  if (pOVar6 == (OptionsRecon *)0x0) {
    pOVar6 = (OptionsRecon *)__builtin_new(0xd74);
    pOVar6 = __12OptionsRecon(pOVar6);
    this->m_pOptionsRecon = pOVar6;
    pEVar7 = this->m_pDialog;
  }
  else {
    pEVar7 = this->m_pDialog;
  }
  if (pEVar7 == (EDialog *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
    pEVar7 = (EDialog *)_memmanAlloc__FUiUi(0x18,0x10);
                    /* end of inlined section */
    _pDialog = __7EDialog(pEVar7);
    this->m_pDialog = _pDialog;
    Init__7EDialog();
  }
  return;
}

void EGlobal::LoadPreGlobalRequirements() {
  ECheats *pEVar1;
  
  _5Globs_pEORCheats = &this->Cheats;
  pEVar1 = (ECheats *)__builtin_new(0x108);
  pEVar1 = __7ECheats(pEVar1);
  this->m_pCheats = pEVar1;
  Init__7ECheatsRC7EGlobal(pEVar1,this);
  return;
}

void EGlobal::SetDefaults() {
	void *result;
	void *result;
	
  Globs *this_00;
  ERDataset *pEVar1;
  ERQuickdata *pEVar2;
  void *pvVar3;
  ERFont *pEVar4;
  ERShader *pEVar5;
  E2PDialog *pEVar6;
  EMessageDialog *pEVar7;
  ESpriteRenderMan *pEVar8;
  EPictureInPicture *pEVar9;
  EVibrate *pEVar10;
  
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
                    /* end of inlined section */
  this->_pCurCam = (ESimsCam *)0x0;
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
  __16EResourceManager_m_bTraceEnabled = 0;
  pEVar1 = (ERDataset *)GetRefAsync__16EResourceManagerUib(&_datasetman.field0_0x0,0x5012e600,false)
  ;
                    /* end of inlined section */
  this->m_pDataset = pEVar1;
  _7EUIIcon_m_vColors[8].field0_0x0._0_4_ = (undefined4)_vBlueBack.field0_0x0._0_8_;
  _7EUIIcon_m_vColors[8].field0_0x0._4_4_ = (undefined4)((ulong)_vBlueBack.field0_0x0._0_8_ >> 0x20)
  ;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  _7EUIIcon_m_vColors[8].field0_0x0._8_4_ = _vBlueBack.field0_0x0.d[2];
  _7EUIIcon_m_vColors[8].field0_0x0._12_4_ = _vBlueBack.field0_0x0.d[3];
  __16EResourceManager_m_bTraceEnabled = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  _7EUIIcon_m_vColors[1].field0_0x0._0_4_ = _WHITE.field0_0x0.d[0];
  _7EUIIcon_m_vColors[1].field0_0x0._4_4_ = _WHITE.field0_0x0.d[1];
  _7EUIIcon_m_vColors[1].field0_0x0._8_4_ = _WHITE.field0_0x0.d[2];
  _7EUIIcon_m_vColors[1].field0_0x0._12_4_ = _WHITE.field0_0x0.d[3];
  _7EUIIcon_m_vColors[0].field0_0x0._0_4_ = _BLACK.field0_0x0.d[0];
  _7EUIIcon_m_vColors[0].field0_0x0._4_4_ = _BLACK.field0_0x0.d[1];
  _7EUIIcon_m_vColors[0].field0_0x0._8_4_ = _BLACK.field0_0x0.d[2];
  _7EUIIcon_m_vColors[0].field0_0x0._12_4_ = _BLACK.field0_0x0.d[3];
  _7EUIIcon_m_vColors[2].field0_0x0._0_4_ = _YELLOW.field0_0x0.d[0];
  _7EUIIcon_m_vColors[2].field0_0x0._4_4_ = _YELLOW.field0_0x0.d[1];
  _7EUIIcon_m_vColors[2].field0_0x0._8_4_ = _YELLOW.field0_0x0.d[2];
  _7EUIIcon_m_vColors[2].field0_0x0._12_4_ = _YELLOW.field0_0x0.d[3];
  _7EUIIcon_m_vColors[3].field0_0x0._0_4_ = _BLUE.field0_0x0.d[0];
  _7EUIIcon_m_vColors[3].field0_0x0._4_4_ = _BLUE.field0_0x0.d[1];
  _7EUIIcon_m_vColors[3].field0_0x0._8_4_ = _BLUE.field0_0x0.d[2];
  _7EUIIcon_m_vColors[3].field0_0x0._12_4_ = _BLUE.field0_0x0.d[3];
  _7EUIIcon_m_vColors[4].field0_0x0._0_4_ = (undefined4)_RED.field0_0x0._0_8_;
  _7EUIIcon_m_vColors[4].field0_0x0._4_4_ = (undefined4)((ulong)_RED.field0_0x0._0_8_ >> 0x20);
  _7EUIIcon_m_vColors[4].field0_0x0._8_4_ = _RED.field0_0x0.d[2];
  _7EUIIcon_m_vColors[4].field0_0x0._12_4_ = _RED.field0_0x0.d[3];
  _7EUIIcon_m_vColors[5].field0_0x0._0_4_ = (undefined4)_GREEN.field0_0x0._0_8_;
  _7EUIIcon_m_vColors[5].field0_0x0._4_4_ = (undefined4)((ulong)_GREEN.field0_0x0._0_8_ >> 0x20);
  _7EUIIcon_m_vColors[5].field0_0x0._8_4_ = _GREEN.field0_0x0.d[2];
  _7EUIIcon_m_vColors[5].field0_0x0._12_4_ = _GREEN.field0_0x0.d[3];
  _7EUIIcon_m_vColors[6].field0_0x0._0_4_ = (undefined4)_CYAN.field0_0x0._0_8_;
  _7EUIIcon_m_vColors[6].field0_0x0._4_4_ = (undefined4)((ulong)_CYAN.field0_0x0._0_8_ >> 0x20);
  _7EUIIcon_m_vColors[6].field0_0x0._8_4_ = _CYAN.field0_0x0.d[2];
  _7EUIIcon_m_vColors[6].field0_0x0._12_4_ = _CYAN.field0_0x0.d[3];
  _7EUIIcon_m_vColors[7].field0_0x0._0_4_ = (undefined4)_MAJENTA.field0_0x0._0_8_;
  _7EUIIcon_m_vColors[7].field0_0x0._4_4_ = (undefined4)((ulong)_MAJENTA.field0_0x0._0_8_ >> 0x20);
  _7EUIIcon_m_vColors[7].field0_0x0._8_4_ = _MAJENTA.field0_0x0.d[2];
  _7EUIIcon_m_vColors[7].field0_0x0._12_4_ = _MAJENTA.field0_0x0.d[3];
                    /* end of inlined section */
  this->_global_house_offy = 0.5;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  (this->_curGameState).m_id = 0;
  *(undefined4 *)&this->_bGamePaused = 0;
  this->_VanityMirrorState = '\0';
  this->_HighScoreDialogState = '\0';
  this->m_nCreditMode = 0;
  this->_EHouse_levelrad = 0.0;
  this->_global_house_offx = 0.5;
  this->_pSelectedSims[0] = (cXPerson__150_1300 *)0x0;
  this->_pSelectedSims[1] = (cXPerson__150_1300 *)0x0;
  this->_pCursor[0] = (ESimsCursor__67_3982 *)0x0;
  this->_pCursor[1] = (ESimsCursor__67_3982 *)0x0;
  this->_pPanel = (EPanel *)0x0;
  if (this->_pNeighborhoodTerrain == (ERLevel *)0x0) {
    pEVar2 = this->m_pTileData;
  }
  else {
    UnloadNeigborhoodTerrain__7EGlobal(this);
    pEVar2 = this->m_pTileData;
  }
  this->_pNeighborhoodTerrain = (ERLevel *)0x0;
  this->_pWardrobe = (EWardrobeMenu *)0x0;
  this->_pVanityMirror = (EVanityMirrorMenu *)0x0;
  this->_pFloorSet = (FloorSet *)0x0;
  this->_pWallSet = (WallSet *)0x0;
  this->_pFenceSet = (FenceSet *)0x0;
  this->_pUnlockDialog = (EUnlockDialog *)0x0;
  this->_pHighScoreDialog = (EHighScoreDialog *)0x0;
  this->_pCurHouse = (EHouse__26_3190 *)0x0;
  if (pEVar2 == (ERQuickdata *)0x0) {
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
    pEVar2 = (ERQuickdata *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_quickdataman.field0_0x0,0x19a16f2d,(EFile *)0x0,0);
    this->m_pTileData = pEVar2;
    pvVar3 = getTable__11ERQuickdataPCc(pEVar2,"WallSet");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    this->_pWallSet = *(WallSet **)((int)pvVar3 + 4);
    pvVar3 = getTable__11ERQuickdataPCc(this->m_pTileData,"FloorSet");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    this->_pFloorSet = *(FloorSet **)((int)pvVar3 + 4);
    pvVar3 = getTable__11ERQuickdataPCc(this->m_pTileData,"FenceSet");
                    /* end of inlined section */
    this->_pFenceSet = *(FenceSet **)((int)pvVar3 + 4);
  }
  if (this->m_pSpriteIdToResId == (ERQuickdata *)0x0) {
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
    pEVar2 = (ERQuickdata *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_quickdataman.field0_0x0,0xc33db41,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pSpriteIdToResId = pEVar2;
    printf("SimsObjects load address = %p\n");
    pEVar2 = this->m_waveDataTable;
  }
  else {
    pEVar2 = this->m_waveDataTable;
  }
  if (pEVar2 == (ERQuickdata *)0x0) {
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
    pEVar2 = (ERQuickdata *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_quickdataman.field0_0x0,0xc33db41,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_waveDataTable = pEVar2;
    pEVar5 = this->m_pBlackShader;
  }
  else {
    pEVar5 = this->m_pBlackShader;
  }
  if (pEVar5 == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar5 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xea090184,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pBlackShader = pEVar5;
    pEVar4 = this->m_pFontShadowed;
  }
  else {
    pEVar4 = this->m_pFontShadowed;
  }
  if (pEVar4 == (ERFont *)0x0) {
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
    pEVar4 = (ERFont *)
             AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pFontShadowed = pEVar4;
    pEVar5 = this->m_pGenericTransShader;
  }
  else {
    pEVar5 = this->m_pGenericTransShader;
  }
  if (pEVar5 == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar5 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf30b2af7,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pGenericTransShader = pEVar5;
  }
  if (_16ISimsObjectModel_m_pWhiteShader == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _16ISimsObjectModel_m_pWhiteShader =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x39b9b2bf,(EFile *)0x0,0);
                    /* end of inlined section */
    pEVar6 = this->m_p2PDialog[0];
  }
  else {
    pEVar6 = this->m_p2PDialog[0];
  }
  if (pEVar6 == (E2PDialog *)0x0) {
    pEVar6 = (E2PDialog *)__builtin_new(0x4c);
    pEVar6 = __9E2PDialogi(pEVar6,0);
    this->m_p2PDialog[0] = pEVar6;
    Init__9E2PDialog(pEVar6);
    pEVar6 = this->m_p2PDialog[1];
  }
  else {
    pEVar6 = this->m_p2PDialog[1];
  }
  if (pEVar6 == (E2PDialog *)0x0) {
    pEVar6 = (E2PDialog *)__builtin_new(0x4c);
    pEVar6 = __9E2PDialogi(pEVar6,1);
    this->m_p2PDialog[1] = pEVar6;
    Init__9E2PDialog(pEVar6);
    pEVar7 = this->m_pMessDialogs[0];
  }
  else {
    pEVar7 = this->m_pMessDialogs[0];
  }
  if (pEVar7 == (EMessageDialog *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/emessagedialog.h */
    pEVar7 = (EMessageDialog *)_memmanAlloc__FUiUi(0x70,4);
    memset(pEVar7,0,0x70);
    __10EDialogWin((EDialogWin *)pEVar7);
    pEVar7->m_timeOut = 0.0;
    *(undefined4 *)&pEVar7->m_bVis = 0;
    (pEVar7->field0_0x0).__vtable = (EDialogWin__vtable *)_vt_14EMessageDialog;
                    /* end of inlined section */
    this->m_pMessDialogs[0] = pEVar7;
    pEVar7 = this->m_pMessDialogs[1];
  }
  else {
    pEVar7 = this->m_pMessDialogs[1];
  }
  if (pEVar7 == (EMessageDialog *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/emessagedialog.h */
    pEVar7 = (EMessageDialog *)_memmanAlloc__FUiUi(0x70,4);
    memset(pEVar7,0,0x70);
    __10EDialogWin((EDialogWin *)pEVar7);
    pEVar7->m_timeOut = 0.0;
    *(undefined4 *)&pEVar7->m_bVis = 0;
    (pEVar7->field0_0x0).__vtable = (EDialogWin__vtable *)_vt_14EMessageDialog;
                    /* end of inlined section */
    this->m_pMessDialogs[1] = pEVar7;
    pEVar8 = this->m_pSpriteMan;
  }
  else {
    pEVar8 = this->m_pSpriteMan;
  }
  if (pEVar8 == (ESpriteRenderMan *)0x0) {
    pEVar8 = (ESpriteRenderMan *)__builtin_new(8);
    pEVar8 = __16ESpriteRenderMan(pEVar8);
    this->m_pSpriteMan = pEVar8;
    pEVar9 = this->m_pPiP;
  }
  else {
    pEVar9 = this->m_pPiP;
  }
  if (pEVar9 == (EPictureInPicture *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pictureinpicture.h */
    pEVar9 = (EPictureInPicture *)_memmanAlloc__FUiUi(0x1890,0x10);
                    /* end of inlined section */
    pEVar9 = __17EPictureInPicture(pEVar9);
    this->m_pPiP = pEVar9;
  }
  pEVar10 = (EVibrate *)__builtin_new(0x98);
  pEVar10 = __8EVibrate(pEVar10);
  this->m_pVibrate = pEVar10;
  Enable__8EVibrate(pEVar10);
  TurnOn__8EVibrateUc(this->m_pVibrate,'\0');
  TurnOn__8EVibrateUc(this->m_pVibrate,'\x01');
  this->m_whichPlayerPaused = 0;
  Init__10SimInfoWin();
  InitShaders__11ESims3DHead();
  this_00 = globs;
  *(undefined4 *)&this->m_bUseCurrentNeighborhood = 0;
  *(undefined4 *)&this->m_bGotoNeighborhoodMode = 0;
  *(undefined4 *)&this->m_bGotoStartMode = 0;
  this->m_FamilyToMoveIn = -1;
  Startup__5Globs(this_00);
  _5Globs_pEORGlobals = &_globals;
  _5Globs_pEORDialog = _pDialog;
  InitVertColorLookup__Fv();
  return;
}

void EGlobal::Reset() {
	EVibrate *this;
	
  EPictureInPicture *pEVar1;
  E2PDialog *pEVar2;
  EMessageDialog *pEVar3;
  EDialogWin__vtable *pEVar4;
  EDialog *pEVar5;
  Controllpad *pCVar6;
  EUIVirtualCtrl__vtable *pEVar7;
  OptionsRecon *pAddress;
  bool bVar8;
  ERQuickdata *pEVar9;
  ERShader *pEVar10;
  ERFont *pEVar11;
  ERDataset *this_00;
  ECheats *this_01;
  EVibrate *pEVar12;
  
  this->_pCurCam = (ESimsCam *)0x0;
  while (this->m_pGenericTransShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pGenericTransShader->field0_0x0);
    this->m_pGenericTransShader = (ERShader *)0x0;
  }
  pEVar9 = this->m_pUiData;
  while (pEVar9 != (ERQuickdata *)0x0) {
    DelRef__9EResource(&pEVar9->field0_0x0);
    this->m_pUiData = (ERQuickdata *)0x0;
    pEVar9 = this->m_pUiData;
  }
  pEVar9 = this->m_pTileData;
  while (pEVar9 != (ERQuickdata *)0x0) {
    DelRef__9EResource(&pEVar9->field0_0x0);
    this->m_pTileData = (ERQuickdata *)0x0;
    pEVar9 = this->m_pTileData;
  }
  pEVar9 = this->m_pSpriteIdToResId;
  while (pEVar9 != (ERQuickdata *)0x0) {
    DelRef__9EResource(&pEVar9->field0_0x0);
    this->m_pSpriteIdToResId = (ERQuickdata *)0x0;
    pEVar9 = this->m_pSpriteIdToResId;
  }
  pEVar9 = this->m_waveDataTable;
  while (pEVar9 != (ERQuickdata *)0x0) {
    DelRef__9EResource(&pEVar9->field0_0x0);
    this->m_waveDataTable = (ERQuickdata *)0x0;
    pEVar9 = this->m_waveDataTable;
  }
  pEVar10 = this->m_pWhiteShader;
  while (pEVar10 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar10->field0_0x0);
    this->m_pWhiteShader = (ERShader *)0x0;
    pEVar10 = this->m_pWhiteShader;
  }
  pEVar10 = this->m_pBlackShader;
  while (pEVar10 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar10->field0_0x0);
    this->m_pBlackShader = (ERShader *)0x0;
    pEVar10 = this->m_pBlackShader;
  }
  pEVar11 = this->m_pFont;
  while (pEVar11 != (ERFont *)0x0) {
    DelRef__9EResource(&pEVar11->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
    pEVar11 = this->m_pFont;
  }
  pEVar11 = this->m_pFontShadowed;
  while (pEVar11 != (ERFont *)0x0) {
    DelRef__9EResource(&pEVar11->field0_0x0);
    this->m_pFontShadowed = (ERFont *)0x0;
    pEVar11 = this->m_pFontShadowed;
  }
  this_00 = this->m_pDataset;
  while (this_00 != (ERDataset *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    this->m_pDataset = (ERDataset *)0x0;
    this_00 = this->m_pDataset;
  }
  while (_16ISimsObjectModel_m_pWhiteShader != (ERShader *)0x0) {
    DelRef__9EResource(&_16ISimsObjectModel_m_pWhiteShader->field0_0x0);
    _16ISimsObjectModel_m_pWhiteShader = (ERShader *)0x0;
  }
  if (this->m_pMemCard == (ESimsMemCard *)0x0) {
    this_01 = this->m_pCheats;
  }
  else {
    Reset__12ESimsMemCard(this->m_pMemCard);
    if (this->m_pMemCard == (ESimsMemCard *)0x0) {
      this->m_pMemCard = (ESimsMemCard *)0x0;
    }
    else {
      ___12ESimsMemCard(this->m_pMemCard,3);
      this->m_pMemCard = (ESimsMemCard *)0x0;
    }
    this_01 = this->m_pCheats;
  }
  if (this_01 == (ECheats *)0x0) {
    pEVar12 = this->m_pVibrate;
  }
  else {
    Reset__7ECheats(this_01);
    if (this->m_pCheats == (ECheats *)0x0) {
      this->m_pCheats = (ECheats *)0x0;
    }
    else {
      ___7ECheats(this->m_pCheats,3);
      this->m_pCheats = (ECheats *)0x0;
    }
    pEVar12 = this->m_pVibrate;
  }
  if (pEVar12 != (EVibrate *)0x0) {
                    /* inlined from /eor/src2/engine/e_vibrate.h */
    bVar8 = IsPortInvalid__8EVibrateUc(pEVar12,'\0');
    if (!bVar8) {
      *(undefined4 *)&pEVar12->m_VControls[0].VibrationOn = 0;
    }
    pEVar12 = this->m_pVibrate;
    bVar8 = IsPortInvalid__8EVibrateUc(pEVar12,'\x01');
    if (!bVar8) {
      *(undefined4 *)&pEVar12->m_VControls[1].VibrationOn = 0;
    }
                    /* end of inlined section */
    Disable__8EVibrate(this->m_pVibrate);
    if (this->m_pVibrate == (EVibrate *)0x0) {
      this->m_pVibrate = (EVibrate *)0x0;
    }
    else {
      ___8EVibrate(this->m_pVibrate,3);
      this->m_pVibrate = (EVibrate *)0x0;
    }
  }
  pEVar1 = this->m_pPiP;
  if (pEVar1 != (EPictureInPicture *)0x0) {
    (**(code **)(pEVar1->__vtable + 1))
              ((int)pEVar1->m_DisplayText + *(short *)&pEVar1->__vtable->DoPictureInPicture + -0x10,
               3);
  }
  this->m_pPiP = (EPictureInPicture *)0x0;
  if ((EHouse__2_990 *)this->_pCurHouse != (EHouse__2_990 *)0x0) {
    ___6EHouse((EHouse__2_990 *)this->_pCurHouse,3);
  }
  pEVar2 = this->m_p2PDialog[0];
  this->_pCurHouse = (EHouse__26_3190 *)0x0;
  if (pEVar2 != (E2PDialog *)0x0) {
    (**(code **)(pEVar2->__vtable + 1))
              ((int)&pEVar2->m_ControllerNum + (int)*(short *)&pEVar2->__vtable->SetParams,3);
  }
  pEVar2 = this->m_p2PDialog[1];
  this->m_p2PDialog[0] = (E2PDialog *)0x0;
  if (pEVar2 != (E2PDialog *)0x0) {
    (**(code **)(pEVar2->__vtable + 1))
              ((int)&pEVar2->m_ControllerNum + (int)*(short *)&pEVar2->__vtable->SetParams,3);
  }
  pEVar3 = this->m_pMessDialogs[0];
  this->m_p2PDialog[1] = (E2PDialog *)0x0;
  if (pEVar3 != (EMessageDialog *)0x0) {
    pEVar4 = (pEVar3->field0_0x0).__vtable;
    (*(code *)pEVar4->Update)
              ((int)&(pEVar3->field0_0x0).m_mover + (int)*(short *)&pEVar4->SafeDelete,3);
    this->m_pMessDialogs[0] = (EMessageDialog *)0x0;
  }
  pEVar3 = this->m_pMessDialogs[1];
  if (pEVar3 != (EMessageDialog *)0x0) {
    pEVar4 = (pEVar3->field0_0x0).__vtable;
    (*(code *)pEVar4->Update)
              ((int)&(pEVar3->field0_0x0).m_mover + (int)*(short *)&pEVar4->SafeDelete,3);
    this->m_pMessDialogs[1] = (EMessageDialog *)0x0;
  }
  pEVar5 = this->m_pDialog;
  if (pEVar5 != (EDialog *)0x0) {
    (*(code *)pEVar5->__vtable->PutPanelToSleep)
              ((int)&pEVar5->m_retcode + (int)*(short *)&pEVar5->__vtable->SetParams,3);
  }
  this->m_pDialog = (EDialog *)0x0;
  pCVar6 = this->m_pCtrlPad;
  _pDialog = (EDialog *)0x0;
  if (pCVar6 != (Controllpad *)0x0) {
    pEVar7 = (pCVar6->field0_0x0).__vtable;
    (*(code *)pEVar7->ClearBut)((int)pCVar6->m_pressed + *(short *)&pEVar7->GetButDown + -4,3);
  }
  this->m_pCtrlPad = (Controllpad *)0x0;
  if (this->m_pSpriteMan != (ESpriteRenderMan *)0x0) {
    ___16ESpriteRenderMan(this->m_pSpriteMan,3);
  }
  pAddress = this->m_pOptionsRecon;
  this->m_pSpriteMan = (ESpriteRenderMan *)0x0;
  if (pAddress != (OptionsRecon *)0x0) {
    ___13UnlockedRecon(&pAddress->m_Unlocked,2);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(pAddress);
  }
                    /* end of inlined section */
  this->m_pOptionsRecon = (OptionsRecon *)0x0;
  CleanUp__10SimInfoWin();
  ResetShaders__11ESims3DHead();
  DestroyGlobal__8EUiAudio();
  *(undefined4 *)&this->m_bUseCurrentNeighborhood = 0;
  *(undefined4 *)&this->m_bGotoNeighborhoodMode = 0;
  *(undefined4 *)&this->m_bGotoStartMode = 0;
  return;
}

void EGlobal::SetCurHouse(int house) {
	float x;
	float y;
	
  EHouse__2_990 *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float local_40;
  float local_3c;
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
  if ((EHouse__2_990 *)this->_pCurHouse != (EHouse__2_990 *)0x0) {
    ___6EHouse((EHouse__2_990 *)this->_pCurHouse,3);
  }
  pEVar1 = (EHouse__2_990 *)__builtin_new(0xb8);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_3c = _globals._global_house_offy;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_40 = _globals._global_house_offx;
                    /* end of inlined section */
  pEVar1 = __6EHouseRC5EVec2iP7ERLevelbN34
                     (pEVar1,(EVec2 *)&local_40,house,(ERLevel *)0x0,true,true,true,false);
  this->_pCurHouse = (EHouse__26_3190 *)pEVar1;
  return;
}

void EGlobal::ClearCurHouse() {
  if ((EHouse__2_990 *)this->_pCurHouse != (EHouse__2_990 *)0x0) {
    ___6EHouse((EHouse__2_990 *)this->_pCurHouse,3);
    this->_pCurHouse = (EHouse__26_3190 *)0x0;
  }
  return;
}

void EGlobal::SelectWin(ERC *prc) {
	ESimsCam *this;
	
  EWindow__vtable *pEVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
  pEVar1 = (this->_pCurCam->m_win).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1->OutputCoordinatesChanged)
            ((int)&(this->_pCurCam->m_win).field0_0x0.field0_0x0.m_mWindow.field0_0x0 +
             (int)*(short *)&pEVar1->InputCoordinatesChanged,prc);
  return;
}

E3DWindow* EGlobal::GetWin() {
  if (this->_pCurCam == (ESimsCam *)0x0) {
    return (E3DWindow *)0x0;
  }
  return &(this->_pCurCam->m_win).field0_0x0;
}

void EGlobal::SetCam(ESimsCam *cam) {
  this->_pCurCam = cam;
  return;
}

ESimsCam* EGlobal::GetCam() {
  return this->_pCurCam;
}

bool EGlobal::TransformToScreen(EVec3 &vWorldIn, EVec2 &vScreenOut) {
	E3DWindow *win;
	bool result;
	
  bool bVar1;
  long lVar2;
  
  lVar2 = (*(code *)this->__vtable[1].UpdateSpriteRenderer)
                    ((int)this->_pSelectedSims +
                     *(short *)&this->__vtable[1].FreeSpriteRenderer + -0x24);
  bVar1 = false;
  if (lVar2 == 0) {
    (vScreenOut->field0_0x0).d[0] = 0.5;
    (vScreenOut->field0_0x0).d[1] = 0.5;
  }
  else {
    bVar1 = TransformToScreen__9E3DWindowRC5EVec3R5EVec2((E3DWindow *)lVar2,vWorldIn,vScreenOut);
    if (!bVar1) {
      (vScreenOut->field0_0x0).d[0] = 0.5;
      (vScreenOut->field0_0x0).d[1] = 4.0;
    }
  }
  return bVar1;
}

void EGlobal::TransformToWorld(EVec2 &vScreenIn, EVec3 &vWorldOut) {
  E3DWindow *this_00;
  long lVar1;
  
  lVar1 = (*(code *)this->__vtable[1].UpdateSpriteRenderer)
                    ((int)this->_pSelectedSims +
                     *(short *)&this->__vtable[1].FreeSpriteRenderer + -0x24);
  if (lVar1 != 0) {
    this_00 = (E3DWindow *)
              (*(code *)this->__vtable[1].UpdateSpriteRenderer)
                        ((int)this->_pSelectedSims +
                         *(short *)&this->__vtable[1].FreeSpriteRenderer + -0x24);
    TransformToWorld__9E3DWindowRC5EVec2R5EVec3(this_00,vScreenIn,vWorldOut);
  }
  return;
}

c16* EGlobal::GetUiString(char *pRef) {
	char *pRowName;
	GlobalStrings *pData;
	
  void *_pTable;
  undefined4 *puVar1;
  short *psVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  _pTable = getTable__11ERQuickdataPCc(this->m_pUiData,"GlobalStrings");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  puVar1 = (undefined4 *)getRow__11ERQuickdataPCvPCc(_globals.m_pUiData,_pTable,pRef);
                    /* end of inlined section */
  if (puVar1 == (undefined4 *)0x0) {
    psVar2 = (short *)&DAT_003ae080;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    psVar2 = *(short **)*puVar1;
  }
  return psVar2;
}

c16* EGlobal::GetHelpString(char *pRef) {
	char *pRowName;
	HelpStrings *pData;
	
  void *_pTable;
  undefined4 *puVar1;
  short *psVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  _pTable = getTable__11ERQuickdataPCc(this->m_pUiData,"HelpStrings");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  puVar1 = (undefined4 *)getRow__11ERQuickdataPCvPCc(_globals.m_pUiData,_pTable,pRef);
                    /* end of inlined section */
  if (puVar1 == (undefined4 *)0x0) {
    psVar2 = (short *)&DAT_003ae080;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    psVar2 = *(short **)*puVar1;
  }
  return psVar2;
}

c16* EGlobal::GetCreateASimString(char *pRef) {
	char *pRowName;
	CreateASimStrings *pData;
	
  void *_pTable;
  undefined4 *puVar1;
  short *psVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  _pTable = getTable__11ERQuickdataPCc(this->m_pUiData,"CreateASimStrings");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  puVar1 = (undefined4 *)getRow__11ERQuickdataPCvPCc(_globals.m_pUiData,_pTable,pRef);
                    /* end of inlined section */
  if (puVar1 == (undefined4 *)0x0) {
    psVar2 = (short *)&DAT_003ae080;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    psVar2 = *(short **)*puVar1;
  }
  return psVar2;
}

c16* EGlobal::GetLiveModeMenuUIString(char *pRef) {
	char *pRowName;
	LiveModeMenuUIStrings *pData;
	
  void *_pTable;
  undefined4 *puVar1;
  short *psVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  _pTable = getTable__11ERQuickdataPCc(this->m_pUiData,"LiveModeMenuUIStrings");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  puVar1 = (undefined4 *)getRow__11ERQuickdataPCvPCc(_globals.m_pUiData,_pTable,pRef);
                    /* end of inlined section */
  if (puVar1 == (undefined4 *)0x0) {
    psVar2 = (short *)&DAT_003ae080;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    psVar2 = *(short **)*puVar1;
  }
  return psVar2;
}

c16* EGlobal::GetNeighborhoodModeString(char *pRef) {
	char *pRowName;
	NeighborhoodModeStrings *pData;
	
  void *_pTable;
  undefined4 *puVar1;
  short *psVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  _pTable = getTable__11ERQuickdataPCc(this->m_pUiData,"NeighborhoodModeStrings");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  puVar1 = (undefined4 *)getRow__11ERQuickdataPCvPCc(_globals.m_pUiData,_pTable,pRef);
                    /* end of inlined section */
  if (puVar1 == (undefined4 *)0x0) {
    psVar2 = (short *)&DAT_003ae080;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    psVar2 = *(short **)*puVar1;
  }
  return psVar2;
}

c16* EGlobal::GetMemCardUIString(char *pRef) {
	char *pRowName;
	MemCardUIStrings *pData;
	
  void *_pTable;
  undefined4 *puVar1;
  short *psVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  _pTable = getTable__11ERQuickdataPCc(this->m_pUiData,"MemCardUIStrings");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  puVar1 = (undefined4 *)getRow__11ERQuickdataPCvPCc(_globals.m_pUiData,_pTable,pRef);
                    /* end of inlined section */
  if (puVar1 == (undefined4 *)0x0) {
    psVar2 = (short *)&DAT_003ae080;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    psVar2 = *(short **)*puVar1;
  }
  return psVar2;
}

c16* EGlobal::GetStoryModeIntroScreenText(char *pRef) {
	char *pRowName;
	HouseData *pData;
	
  void *pvVar1;
  short *psVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pvVar1 = getTable__11ERQuickdataPCc(this->m_pUiData,"HouseData");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pvVar1 = getRow__11ERQuickdataPCvPCc(_globals.m_pUiData,pvVar1,pRef);
                    /* end of inlined section */
  if (pvVar1 == (void *)0x0) {
    psVar2 = (short *)&DAT_003ae080;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    psVar2 = **(short ***)((int)pvVar1 + 4);
  }
  return psVar2;
}

c16* EGlobal::GetStoryModeOutroScreenText(char *pRef) {
	char *pRowName;
	HouseData *pData;
	
  void *pvVar1;
  short *psVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pvVar1 = getTable__11ERQuickdataPCc(this->m_pUiData,"HouseData");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pvVar1 = getRow__11ERQuickdataPCvPCc(_globals.m_pUiData,pvVar1,pRef);
                    /* end of inlined section */
  if (pvVar1 == (void *)0x0) {
    psVar2 = (short *)&DAT_003ae080;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    psVar2 = **(short ***)((int)pvVar1 + 8);
  }
  return psVar2;
}

u32 EGlobal::GetStoryModeIntroScreenShaderId(char *pRef) {
	char *pRowName;
	HouseData *pData;
	
  void *pvVar1;
  uint uVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pvVar1 = getTable__11ERQuickdataPCc(this->m_pUiData,"HouseData");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pvVar1 = getRow__11ERQuickdataPCvPCc(_globals.m_pUiData,pvVar1,pRef);
                    /* end of inlined section */
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)((int)pvVar1 + 0xc);
  }
  return uVar2;
}

u32 EGlobal::GetStoryModeOutroScreenShaderId(char *pRef) {
	char *pRowName;
	HouseData *pData;
	
  void *pvVar1;
  uint uVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pvVar1 = getTable__11ERQuickdataPCc(this->m_pUiData,"HouseData");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pvVar1 = getRow__11ERQuickdataPCvPCc(_globals.m_pUiData,pvVar1,pRef);
                    /* end of inlined section */
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)((int)pvVar1 + 0x10);
  }
  return uVar2;
}

c16* EGlobal::GetMainMenuUIString(char *pRef) {
	char *pRowName;
	MainMenuUIStrings *pData;
	
  void *_pTable;
  undefined4 *puVar1;
  short *psVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  _pTable = getTable__11ERQuickdataPCc(this->m_pUiData,"MainMenuUIStrings");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  puVar1 = (undefined4 *)getRow__11ERQuickdataPCvPCc(_globals.m_pUiData,_pTable,pRef);
                    /* end of inlined section */
  if (puVar1 == (undefined4 *)0x0) {
    psVar2 = (short *)&DAT_003ae080;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    psVar2 = *(short **)*puVar1;
  }
  return psVar2;
}

c16* EGlobal::GetCreditUIStrings(char *pRef) {
	char *pRowName;
	CreditUIStrings *pData;
	
  void *_pTable;
  undefined4 *puVar1;
  short *psVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  _pTable = getTable__11ERQuickdataPCc(this->m_pUiData,"CreditUIStrings");
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  puVar1 = (undefined4 *)getRow__11ERQuickdataPCvPCc(_globals.m_pUiData,_pTable,pRef);
                    /* end of inlined section */
  if (puVar1 == (undefined4 *)0x0) {
    psVar2 = (short *)&DAT_003ae080;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    psVar2 = *(short **)*puVar1;
  }
  return psVar2;
}

c16* EGlobal::GetUserCharacterArray(u32 nIndex) {
  short *psVar1;
  char *pRef;
  
  if (nIndex == 0) {
    pRef = "user_characters";
  }
  else if (nIndex == 1) {
    pRef = "user_characters_two";
  }
  else {
    pRef = "user_characters_three";
  }
  psVar1 = GetMemCardUIString__7EGlobalPCc(this,pRef);
  return psVar1;
}

u32 EGlobal::GetNumUserCharacters(u32 nIndex) {
	c16 *pChars;
	
  short *ptr;
  uint uVar1;
  
  if (nIndex == 0) {
    ptr = GetUserCharacterArray__7EGlobalUi(this,0);
  }
  else if (nIndex == 1) {
    ptr = GetUserCharacterArray__7EGlobalUi(this,1);
  }
  else {
    ptr = GetUserCharacterArray__7EGlobalUi(this,2);
  }
  uVar1 = wcslen__FPCUs(ptr);
  return uVar1;
}

bool EGlobal::CreateWardrobe(cXObject *pWorldObject, cXPerson *pSim) {
	bool bRetVal;
	s32 nWhichController;
	void *result;
	TreeSim *this;
	
  TreeSim__vtable *pTVar1;
  ESim *pPerson;
  EWardrobeMenu *pEVar2;
  ISimInstance *pObj;
  uint nWhichController;
  
  nWhichController = 0xffffffff;
  if (this->_pSelectedSims[0] == (cXPerson__150_1300 *)pSim) {
    nWhichController = 0;
  }
  else if (this->_pSelectedSims[1] == (cXPerson__150_1300 *)pSim) {
    nWhichController = 1;
  }
  if (nWhichController != 0xffffffff) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/wardrobe.h */
    pEVar2 = (EWardrobeMenu *)_memmanAlloc__FUiUi(0x9e0,0x10);
    memset(pEVar2,0,0x9e0);
                    /* end of inlined section */
    pTVar1 = pWorldObject->_vb5112->__vtable;
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
                    /* end of inlined section */
    pPerson = pSim->_vb3244->_vb5112->m_pEoRPerson;
    pObj = (ISimInstance *)
           (*(code *)pTVar1[1].GetISimInstance)
                     ((int)&pWorldObject->_vb5112->m_pObject +
                      (int)*(short *)&pTVar1[1].GetLastResult);
    pEVar2 = __13EWardrobeMenuP4ESimP12ISimInstanceUi(pEVar2,pPerson,pObj,nWhichController);
    this->_pWardrobe = pEVar2;
  }
  return nWhichController != 0xffffffff;
}

bool EGlobal::CreateVanityMirror(cXObject *pWorldObject, cXPerson *pSim) {
	bool bRetVal;
	s32 nWhichController;
	void *result;
	TreeSim *this;
	
  TreeSim__vtable *pTVar1;
  ESim *pPerson;
  EVanityMirrorMenu *pEVar2;
  ISimInstance *pObj;
  uint nWhichController;
  
  nWhichController = 0xffffffff;
  if (this->_pSelectedSims[0] == (cXPerson__150_1300 *)pSim) {
    nWhichController = 0;
  }
  else if (this->_pSelectedSims[1] == (cXPerson__150_1300 *)pSim) {
    nWhichController = 1;
  }
  if (nWhichController != 0xffffffff) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/vanitymirror.h */
    pEVar2 = (EVanityMirrorMenu *)_memmanAlloc__FUiUi(0xa20,0x10);
    memset(pEVar2,0,4);
                    /* end of inlined section */
    pTVar1 = pWorldObject->_vb5112->__vtable;
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
                    /* end of inlined section */
    pPerson = pSim->_vb3244->_vb5112->m_pEoRPerson;
    pObj = (ISimInstance *)
           (*(code *)pTVar1[1].GetISimInstance)
                     ((int)&pWorldObject->_vb5112->m_pObject +
                      (int)*(short *)&pTVar1[1].GetLastResult);
    pEVar2 = __17EVanityMirrorMenuP4ESimP12ISimInstanceUi(pEVar2,pPerson,pObj,nWhichController);
    this->_pVanityMirror = pEVar2;
  }
  return nWhichController != 0xffffffff;
}

void EGlobal::CreateUnlockDialog(s32 guid) {
  return;
}

void EGlobal::CreateNameEntry(s32 nNewScoreIndex, s32 nChallengePlayerNum, s32 nChallengeScore) {
	void *result;
	
  EHighScoreDialog *pEVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/highscoredialog.h */
  pEVar1 = (EHighScoreDialog *)_memmanAlloc__FUiUi(0x460,0x10);
  memset(pEVar1,0,0x460);
                    /* end of inlined section */
  pEVar1 = __16EHighScoreDialogiii(pEVar1,nNewScoreIndex,nChallengePlayerNum,nChallengeScore);
  this->_pHighScoreDialog = pEVar1;
  return;
}

int EGlobal::ConvertUnicodeToShiftJIS(c16 *pInput, c16 *pOutput, u32 bufferSize) {
	Shift_JISMapping *pMapping;
	int iNumMappings;
	int result;
	u32 useBufferSize;
	ERQTable<Shift_JISMapping> *pTable;
	c16 mappedChar;
	int i;
	
  int iVar1;
  short *psVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pvVar4 = getTable__11ERQuickdataPCc(this->m_pUiData,"Shift_JISMapping");
                    /* end of inlined section */
  iVar1 = *(int *)((int)pvVar4 + 0xc);
  psVar2 = *(short **)((int)pvVar4 + 4);
  *pOutput = 0;
  iVar8 = 0;
  if (3 < bufferSize) {
    iVar5 = 0;
    sVar7 = *pInput;
    uVar9 = bufferSize;
    iVar3 = 0;
    while (iVar8 = iVar3, sVar7 != 0) {
      uVar9 = uVar9 - 2;
      sVar7 = -0x697f;
      iVar8 = iVar3 + 1;
      if (0 < iVar1) {
        if (*psVar2 == *(short *)(iVar5 + (int)pInput)) {
          sVar7 = psVar2[1];
        }
        else {
          for (iVar6 = 1; iVar6 < iVar1; iVar6 = iVar6 + 1) {
            if (psVar2[iVar6 * 2] == *(short *)(iVar5 + (int)pInput)) {
              sVar7 = (psVar2 + iVar6 * 2)[1];
              break;
            }
          }
        }
      }
      pOutput[iVar3] = sVar7;
      if (uVar9 < 4) break;
      iVar5 = iVar8 * 2;
      iVar3 = iVar8;
      sVar7 = pInput[iVar8];
    }
  }
  if ((uint)(iVar8 * 2) < bufferSize) {
    pOutput[iVar8] = 0;
  }
  return iVar8 * 2;
}

int EGlobal::GetFloorIndex(FloorTile *pTile) {
	VECTOR<FloorTile *> &tiles;
	int i;
	VECTOR<FloorTile *> *this;
	VECTOR<FloorTile *> *this;
	unsigned int n;
	VECTOR<FloorTile *> *this;
	
  int iVar1;
  FloorTile **ppFVar2;
  FloorTile *pFVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  ppFVar2 = (this->_pFloorSet->field0_0x0).pData;
  pFVar3 = (FloorTile *)0x0;
  if (ppFVar2 != (FloorTile **)0x0) {
    pFVar3 = ppFVar2[-1];
  }
  iVar1 = 0;
  if (0 < (int)pFVar3) {
    ppFVar2 = (this->_pFloorSet->field0_0x0).pData;
    do {
                    /* end of inlined section */
      if (*ppFVar2 == pTile) {
                    /* end of inlined section */
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      ppFVar2 = ppFVar2 + 1;
    } while (iVar1 < (int)pFVar3);
  }
  return 0;
}

int EGlobal::GetWallIndex(WallTile *pTile) {
	VECTOR<WallTile *> &tiles;
	int i;
	VECTOR<WallTile *> *this;
	VECTOR<WallTile *> *this;
	unsigned int n;
	VECTOR<WallTile *> *this;
	
  int iVar1;
  WallTile **ppWVar2;
  WallTile *pWVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  ppWVar2 = (this->_pWallSet->field0_0x0).pData;
  pWVar3 = (WallTile *)0x0;
  if (ppWVar2 != (WallTile **)0x0) {
    pWVar3 = ppWVar2[-1];
  }
  iVar1 = 0;
  if (0 < (int)pWVar3) {
    ppWVar2 = (this->_pWallSet->field0_0x0).pData;
    do {
                    /* end of inlined section */
      if (*ppWVar2 == pTile) {
                    /* end of inlined section */
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      ppWVar2 = ppWVar2 + 1;
    } while (iVar1 < (int)pWVar3);
  }
  return 0;
}

int EGlobal::GetFenceIndex(FenceData *pTile) {
	VECTOR<FenceData *> &tiles;
	int i;
	VECTOR<FenceData *> *this;
	VECTOR<FenceData *> *this;
	unsigned int n;
	VECTOR<FenceData *> *this;
	
  int iVar1;
  FenceData **ppFVar2;
  FenceData *pFVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  ppFVar2 = (this->_pFenceSet->field0_0x0).pData;
  pFVar3 = (FenceData *)0x0;
  if (ppFVar2 != (FenceData **)0x0) {
    pFVar3 = ppFVar2[-1];
  }
  iVar1 = 0;
  if (0 < (int)pFVar3) {
    ppFVar2 = (this->_pFenceSet->field0_0x0).pData;
    do {
                    /* end of inlined section */
      if (*ppFVar2 == pTile) {
                    /* end of inlined section */
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      ppFVar2 = ppFVar2 + 1;
    } while (iVar1 < (int)pFVar3);
  }
  return 0;
}

void EGlobal::LoadNeigborhoodTerrain() {
  ERLevel *pEVar1;
  
  pEVar1 = (ERLevel *)__builtin_new(0x578);
  pEVar1 = __7ERLevel(pEVar1);
  this->_pNeighborhoodTerrain = pEVar1;
  return;
}

void EGlobal::UnloadNeigborhoodTerrain() {
  ERLevel *pEVar1;
  EStorable__vtable *pEVar2;
  
  pEVar1 = this->_pNeighborhoodTerrain;
  if (pEVar1 != (ERLevel *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar2[1].GetTypeKey)
              ((int)pEVar1->m_orderTable + *(short *)&pEVar2[1].GetTypeName + -0x38,3);
  }
  this->_pNeighborhoodTerrain = (ERLevel *)0x0;
  return;
}

void EGlobal::SetSelectedPerson(u32 player, cXPerson *newSelection, bool reverse) {
	cXPerson *cursel;
	
  short sVar1;
  cSimulator__vtable *pcVar2;
  cXObject__150_1187 *pcVar3;
  cXObject__150_1187__vtable *pcVar4;
  cXObject__47_3244 *pcVar5;
  cXObject__47_3244__vtable *pcVar6;
  cSimulator__vtable **ppcVar7;
  cSimulator *pcVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  cXPerson__150_1300 *pcVar12;
  undefined8 uVar13;
  cXPerson__150_1300 **ppcVar14;
  
  pcVar8 = _5Globs_pSimulator;
  if (newSelection == (cXPerson__47_985 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    this->_pSelectedSims[player] = (cXPerson__150_1300 *)0x0;
    uVar13 = 0x20;
    if (player == 0) {
      uVar13 = 3;
    }
    pcVar2 = pcVar8->__vtable;
    (*(code *)pcVar2->IsStopped)((int)&pcVar8->__vtable + (int)*(short *)&pcVar2->IsPaused,uVar13,0)
    ;
  }
  ppcVar14 = this->_pSelectedSims + player;
  pcVar12 = *ppcVar14;
  if (pcVar12 != (cXPerson__150_1300 *)newSelection) {
    iVar9 = (*(code *)newSelection->__vtable->GetRecordDuration)
                      ((int)&newSelection->_vb3244 +
                       (int)*(short *)&newSelection->__vtable->GetRecording,0x4b);
    if ((iVar9 == 0) || (iVar9 == player + 1)) {
      if (pcVar12 != (cXPerson__150_1300 *)0x0) {
        pcVar3 = pcVar12->_vb1187;
        pcVar4 = pcVar3->__vtable;
        sVar1 = *(short *)&pcVar4->GetDynamicToStaticLatency;
        uVar10 = (*(code *)pcVar4->GetLastDamage)
                           ((int)&pcVar3->_vb1121 + (int)*(short *)&pcVar4->IsRenderingRoot);
        (*(code *)pcVar4->GetRenderLayer)
                  ((int)&pcVar3->_vb1121 + (int)sVar1,uVar10 & 0xfffffffffffffffd);
        pcVar4 = pcVar12->_vb1187->__vtable;
        (*(code *)pcVar4->RunTree)
                  ((int)&pcVar12->_vb1187->_vb1121 + (int)*(short *)&pcVar4->IsSpriteVisible,0);
      }
      if (newSelection == (cXPerson__47_985 *)0x0) {
        pcVar12 = *ppcVar14;
      }
      else {
        pcVar5 = newSelection->_vb3244;
        pcVar6 = pcVar5->__vtable;
        sVar1 = *(short *)&pcVar6->GetDynamicToStaticLatency;
        uVar10 = (*(code *)pcVar6->GetLastDamage)
                           ((int)&pcVar5->_vb5112 + (int)*(short *)&pcVar6->IsRenderingRoot);
        (*(code *)pcVar6->GetRenderLayer)((int)&pcVar5->_vb5112 + (int)sVar1,uVar10 | 2);
        pcVar6 = newSelection->_vb3244->__vtable;
        (*(code *)pcVar6->RunTree)
                  ((int)&newSelection->_vb3244->_vb5112 + (int)*(short *)&pcVar6->IsSpriteVisible,0)
        ;
        *ppcVar14 = (cXPerson__150_1300 *)newSelection;
        pcVar12 = *ppcVar14;
      }
      iVar9 = 4;
      if (pcVar12 != (cXPerson__150_1300 *)0x0) {
        if (player != 0) {
          iVar9 = 0;
        }
        if (pcVar12 == *(cXPerson__150_1300 **)((int)this->_pSelectedSims + iVar9)) {
          if (reverse) {
            (*(code *)this->__vtable->CreateNameEntry)
                      ((int)this->_pSelectedSims +
                       *(short *)&this->__vtable->CreateUnlockDialog + -0x24);
          }
          else {
            (*(code *)this->__vtable->CreateVanityMirror)
                      ((int)this->_pSelectedSims + *(short *)&this->__vtable->CreateWardrobe + -0x24
                       ,player);
          }
        }
        if (this->_pSelectedSims[player] != (cXPerson__150_1300 *)0x0) {
                    /* end of inlined section */
          pcVar3 = this->_pSelectedSims[player]->_vb1187;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          pcVar4 = pcVar3->__vtable;
          uVar13 = 3;
          if (player != 0) {
            uVar13 = 0x20;
          }
          pcVar2 = _5Globs_pSimulator->__vtable;
          sVar1 = *(short *)&pcVar2->IsPaused;
          ppcVar7 = &_5Globs_pSimulator->__vtable;
          uVar11 = (*(code *)pcVar4[1].UserCanPlace)
                             ((int)&pcVar3->_vb1121 + (int)*(short *)&pcVar4[1].IsPartOfMe);
          (*(code *)pcVar2->IsStopped)((int)ppcVar7 + (int)sVar1,uVar13,uVar11);
          return;
        }
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      uVar13 = 0x20;
      if (player == 0) {
        uVar13 = 3;
      }
      (*(code *)_5Globs_pSimulator->__vtable->IsStopped)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable->IsPaused,uVar13,0);
    }
  }
  return;
}

void EGlobal::AdvanceSelectedPerson(u32 player) {
	ObjectModule *pObjMod;
	cXPerson *sel;
	Family *family;
	int n;
	Int i;
	int j;
	cXPerson *newSel;
	bool Selectable;
	u32 idx;
	
  short sVar1;
  cXPerson__150_1300 *pcVar2;
  ObjectModule__vtable *pOVar3;
  bool bVar4;
  ObjectModule *pOVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  cXPerson__150_1300 *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  pOVar5 = _5Globs_pObjectModule;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar13 = -1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pcVar2 = _globals._pSelectedSims[player];
  piVar6 = (int *)(*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                            ((int)&_5Globs_pHouse->__vtable +
                             (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
  iVar7 = (**(code **)(*piVar6 + 0x1c))((int)piVar6 + (int)*(short *)(*piVar6 + 0x18));
  if (pcVar2 != (cXPerson__150_1300 *)0x0) {
    for (iVar13 = 0; iVar13 < iVar7; iVar13 = iVar13 + 1) {
      pOVar3 = pOVar5->__vtable;
      sVar1 = *(short *)&pOVar3->DoReconObject;
      puVar8 = (undefined4 *)
               (**(code **)(*piVar6 + 0x24))((int)piVar6 + (int)*(short *)(*piVar6 + 0x20),iVar13);
      pcVar9 = (cXPerson__150_1300 *)
               (*(code *)pOVar3->DoReconPerson)((int)&pOVar5->__vtable + (int)sVar1,*puVar8);
      if (pcVar9 == pcVar2) break;
    }
  }
  if (iVar13 == iVar7) {
    iVar13 = -1;
  }
  iVar12 = iVar13 + iVar7;
  do {
    do {
      iVar13 = iVar13 + 1;
      if (iVar12 + 1 <= iVar13) {
        return;
      }
      pOVar3 = pOVar5->__vtable;
      if (iVar7 == 0) {
        trap(7);
      }
      sVar1 = *(short *)&pOVar3->DoReconObject;
      puVar8 = (undefined4 *)
               (**(code **)(*piVar6 + 0x24))
                         ((int)piVar6 + (int)*(short *)(*piVar6 + 0x20),iVar13 % iVar7);
      iVar10 = (*(code *)pOVar3->DoReconPerson)((int)&pOVar5->__vtable + (int)sVar1,*puVar8);
      if (iVar10 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = (**(code **)(*(int *)(iVar10 + 4) + 0xe4))
                           (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0xe0),0x4b);
      }
      bVar4 = false;
      if ((iVar11 == 0) || (iVar11 == player + 1)) {
        bVar4 = true;
      }
    } while ((iVar10 == 0) || (iVar11 = 4, !bVar4));
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
    if (player != 0) {
      iVar11 = 0;
    }
                    /* end of inlined section */
  } while (*(int *)((int)_globals._pSelectedSims + iVar11) == iVar10);
  (*(code *)this->__vtable->SetCam)
            ((int)this->_pSelectedSims + *(short *)&this->__vtable->GetCam + -0x24,player,iVar10,0);
  return;
}

void EGlobal::ReverseSelectedPerson(u32 player) {
	ObjectModule *pObjMod;
	cXPerson *sel;
	Family *family;
	int n;
	Int i;
	int j;
	cXPerson *opsel;
	int k;
	u32 idx;
	cXPerson *newSel;
	bool Selectable;
	u32 idx;
	
  short sVar1;
  cXPerson__150_1300 *pcVar2;
  ObjectModule__vtable *pOVar3;
  bool bVar4;
  ObjectModule *pOVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  cXPerson__150_1300 *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  pOVar5 = _5Globs_pObjectModule;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pcVar2 = _globals._pSelectedSims[player];
  piVar6 = (int *)(*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                            ((int)&_5Globs_pHouse->__vtable +
                             (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
  iVar7 = (**(code **)(*piVar6 + 0x1c))((int)piVar6 + (int)*(short *)(*piVar6 + 0x18));
  if ((pcVar2 != (cXPerson__150_1300 *)0x0) || (iVar7 != 0)) {
    iVar13 = 0;
    if (pcVar2 == (cXPerson__150_1300 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
      iVar12 = 4;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
      if (player != 0) {
        iVar12 = 0;
      }
                    /* end of inlined section */
      iVar12 = *(int *)((int)_globals._pSelectedSims + iVar12);
      for (; iVar13 < iVar7; iVar13 = iVar13 + 1) {
        pOVar3 = pOVar5->__vtable;
        sVar1 = *(short *)&pOVar3->DoReconObject;
        puVar8 = (undefined4 *)
                 (**(code **)(*piVar6 + 0x24))((int)piVar6 + (int)*(short *)(*piVar6 + 0x20),0);
        iVar9 = (*(code *)pOVar3->DoReconPerson)((int)&pOVar5->__vtable + (int)sVar1,*puVar8);
        if (iVar9 == iVar12) break;
      }
      if (iVar13 == 0) {
        if (iVar7 == 0) {
          trap(7);
        }
        iVar13 = 1 % iVar7;
      }
    }
    else {
      for (; iVar13 < iVar7; iVar13 = iVar13 + 1) {
        pOVar3 = pOVar5->__vtable;
        sVar1 = *(short *)&pOVar3->DoReconObject;
        puVar8 = (undefined4 *)
                 (**(code **)(*piVar6 + 0x24))((int)piVar6 + (int)*(short *)(*piVar6 + 0x20),iVar13)
        ;
        pcVar10 = (cXPerson__150_1300 *)
                  (*(code *)pOVar3->DoReconPerson)((int)&pOVar5->__vtable + (int)sVar1,*puVar8);
        if (pcVar10 == pcVar2) break;
      }
    }
    if (iVar13 != -1) {
      iVar12 = iVar13 + -1;
      if (iVar13 + -1 < 0) {
        iVar12 = iVar7 + -1;
      }
      while (iVar13 != iVar12) {
        pOVar3 = pOVar5->__vtable;
        sVar1 = *(short *)&pOVar3->DoReconObject;
        puVar8 = (undefined4 *)
                 (**(code **)(*piVar6 + 0x24))((int)piVar6 + (int)*(short *)(*piVar6 + 0x20),iVar12)
        ;
        iVar9 = (*(code *)pOVar3->DoReconPerson)((int)&pOVar5->__vtable + (int)sVar1,*puVar8);
        if (iVar9 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = (**(code **)(*(int *)(iVar9 + 4) + 0xe4))
                             (iVar9 + *(short *)(*(int *)(iVar9 + 4) + 0xe0),0x4b);
        }
        bVar4 = false;
        if (iVar11 == 0) {
          bVar4 = true;
        }
        else if (iVar11 == player + 1) {
          bVar4 = true;
        }
        if ((iVar9 != 0) && (iVar11 = 4, bVar4)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
          if (player != 0) {
            iVar11 = 0;
          }
                    /* end of inlined section */
          if (*(int *)((int)_globals._pSelectedSims + iVar11) != iVar9) {
            (*(code *)this->__vtable->SetCam)
                      ((int)this->_pSelectedSims + *(short *)&this->__vtable->GetCam + -0x24,player,
                       iVar9,1);
            return;
          }
        }
        iVar12 = iVar12 + -1;
        if (iVar12 < 0) {
          iVar12 = iVar7 + -1;
        }
      }
    }
  }
  return;
}

void EGlobal::Message(void *pPram, u32 messageId) {
  EPanel *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  
  pEVar1 = this->_pPanel;
  if (pEVar1 != (EPanel *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pEVar2[1].EUIObjectNode)
              ((int)pEVar1->m_messageFns + *(short *)(pEVar2 + 1) + -0x3c,pPram,messageId);
  }
  return;
}

void EGlobal::PlaceObjectInHouse(cXObject *pOb) {
  return;
}

void EGlobal::PickUpInHouseObject(cXObject *pOb) {
  return;
}

void EGlobal::GetCursorPosAsFtile(FTilePt &pOut) {
	EVec3 vcurspos;
	float fy;
	float fx;
	Int xint;
	Int yint;
	ESimsCursor *this;
	FTilePt *this;
	Int _x;
	Int _y;
	
  undefined *puVar1;
  EVec3 *pEVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  EVec3 vcurspos;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
  puVar1 = (undefined *)((int)&(this->_pCursor[0]->m_vPos).field0_0x0 + 7);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
  uVar3 = (uint)puVar1 & 7;
  pEVar2 = &this->_pCursor[0]->m_vPos;
  uVar4 = (uint)pEVar2 & 7;
  uVar6 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          (long)(int)this & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)pEVar2 - uVar4) >> uVar4 * 8;
  puVar1 = (undefined *)((int)&vcurspos.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar6 >> (7 - uVar3) * 8;
                    /* end of inlined section */
  vcurspos.field0_0x0.d[1] = (float)(uVar6 >> 0x20);
  vcurspos.field0_0x0.d[0] = (float)uVar6;
  iVar7 = (int)(vcurspos.field0_0x0.d[1] - _globals._global_house_offy);
  iVar8 = (int)(vcurspos.field0_0x0.d[0] - _globals._global_house_offx);
  if (0.5 <= (vcurspos.field0_0x0.d[1] - _globals._global_house_offy) - (float)iVar7) {
    iVar7 = iVar7 + 1;
  }
  if (0.5 <= (vcurspos.field0_0x0.d[0] - _globals._global_house_offx) - (float)iVar8) {
    iVar8 = iVar8 + 1;
  }
                    /* inlined from ../MSrc/tiles.h */
  (pOut->y).whole = iVar8 << 4;
  (pOut->x).whole = iVar7 << 4;
  return;
}

void EGlobal::DestroyInstance(IBaseSimInstance **ppInstance) {
	ISimInstance *pInstance;
	EHouse *this;
	EHouse *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  IBaseSimInstance__vtable *pIVar2;
  EStorable__vtable *pEVar3;
  ISimInstance *this_00;
  cXObject__150_1187 *pcVar4;
  EHouse__26_3190 *pEVar5;
  
                    /* end of inlined section */
  if (*ppInstance == (IBaseSimInstance *)0x0) goto LAB_00161d1c;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  pIVar2 = (*ppInstance)->__vtable;
  this_00 = (ISimInstance *)
            (*(code *)pIVar2[1].GetSimInstance)
                      ((int)&(*ppInstance)->__vtable + (int)*(short *)&pIVar2[1].GetCursFlags);
  pcVar4 = (cXObject__150_1187 *)GetXOb__12ISimInstance(this_00);
  if (this->_pSelectedSims[0] == (cXPerson__150_1300 *)0x0) {
    if (pcVar4 != (cXObject__150_1187 *)0x0) goto LAB_00161ca8;
    this->_pSelectedSims[0] = (cXPerson__150_1300 *)0x0;
LAB_00161ce0:
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
    pEVar5 = this->_pCurHouse;
  }
  else {
    if (this->_pSelectedSims[0]->_vb1187 == pcVar4) {
      this->_pSelectedSims[0] = (cXPerson__150_1300 *)0x0;
      goto LAB_00161ce0;
    }
LAB_00161ca8:
    pcVar4 = (cXObject__150_1187 *)GetXOb__12ISimInstance(this_00);
    if (this->_pSelectedSims[1] == (cXPerson__150_1300 *)0x0) {
      if (pcVar4 == (cXObject__150_1187 *)0x0) {
        this->_pSelectedSims[1] = (cXPerson__150_1300 *)0x0;
        goto LAB_00161ce0;
      }
      pEVar5 = this->_pCurHouse;
    }
    else {
      if (this->_pSelectedSims[1]->_vb1187 == pcVar4) {
        this->_pSelectedSims[1] = (cXPerson__150_1300 *)0x0;
        goto LAB_00161ce0;
      }
      pEVar5 = this->_pCurHouse;
    }
  }
                    /* end of inlined section */
  RemoveInstance__7ERLevelP9EInstance(pEVar5->m_pLevel,(EInstance *)this_00);
  pEVar3 = (this_00->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  (*(code *)pEVar3[6].Read)
            ((int)((this_00->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar3[6].EStorable,this->_pCurHouse->m_pLevel);
  FreeSimsObjectInstance__11EIObjectManP12ISimInstance(this->_pCurHouse->m_pObjectMan,this_00);
LAB_00161d1c:
  *ppInstance = (IBaseSimInstance *)0x0;
  return;
}

void EGlobal::AllocInstance(cXObject *pObject) {
	TreeSim *this;
	
  TreeSim__vtable *pTVar1;
  bool bVar2;
  ObjSelector *this_00;
  ISimInstance *pIVar3;
  int iVar4;
  long lVar5;
  IBaseSimInstance *pIVar6;
  
  this_00 = (ObjSelector *)
            (*(code *)pObject->__vtable[1].SetLevel)
                      ((int)&pObject->_vb5112 + (int)*(short *)&pObject->__vtable[1].GetTreeID);
  bVar2 = GetIsPerson__11ObjSelector(this_00);
  if (!bVar2) {
    pTVar1 = pObject->_vb5112->__vtable;
    lVar5 = (*(code *)pTVar1[1].GetISimInstance)
                      ((int)&pObject->_vb5112->m_pObject + (int)*(short *)&pTVar1[1].GetLastResult);
    if (lVar5 == 0) {
      pIVar3 = AddObject__11EIObjectManP8cXObjectP7ERLevel
                         (this->_pCurHouse->m_pObjectMan,(cXObject__54_2742 *)pObject,
                          this->_pCurHouse->m_pLevel);
                    /* inlined from ../MSrc/TreeSim.h */
                    /* end of inlined section */
      pIVar6 = (IBaseSimInstance *)&pIVar3->field_0x130;
      if (pIVar3 == (ISimInstance *)0x0) {
        pIVar6 = (IBaseSimInstance *)0x0;
      }
                    /* end of inlined section */
      pObject->_vb5112->m_pEoRInstance = pIVar6;
    }
    else {
      pTVar1 = pObject->_vb5112->__vtable;
      iVar4 = (*(code *)pTVar1[1].GetISimInstance)
                        ((int)&pObject->_vb5112->m_pObject + (int)*(short *)&pTVar1[1].GetLastResult
                        );
      (**(code **)(*(int *)(iVar4 + 0x130) + 0x14))
                (iVar4 + 0x130 + (int)*(short *)(*(int *)(iVar4 + 0x130) + 0x10));
    }
  }
  return;
}

void EGlobal::AllocPersonInstance(cXPerson *pPerson) {
	ESim *pSim;
	void *result;
	EHouse *this;
	TreeSim *this;
	TreeSim *this;
	ESim *p;
	
  ESim *pEVar1;
  IBaseSimInstance *pIVar2;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
  pEVar1 = (ESim *)_memmanAlloc__FUiUi(0x2f0,0x10);
  memset(pEVar1,0,0x2f0);
                    /* end of inlined section */
  pEVar1 = __4ESimP8cXPerson(pEVar1,(cXPerson__34_985 *)pPerson);
  AttachObject__11EIObjectManP12ISimInstance
            ((_globals._pCurHouse)->m_pObjectMan,&pEVar1->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  InsertInstance__7ERLevelP9EInstanceT1
            ((_globals._pCurHouse)->m_pLevel,(EInstance *)pEVar1,(EInstance *)0x0);
  pIVar2 = (IBaseSimInstance *)&(pEVar1->field0_0x0).field_0x130;
  if (pEVar1 == (ESim *)0x0) {
    pIVar2 = (IBaseSimInstance *)0x0;
  }
                    /* inlined from ../MSrc/TreeSim.h */
  pPerson->_vb3244->_vb5112->m_pEoRInstance = pIVar2;
                    /* end of inlined section */
                    /* inlined from ../MSrc/TreeSim.h */
  pPerson->_vb3244->_vb5112->m_pEoRPerson = pEVar1;
  return;
}

ESpriteRender* EGlobal::AllocSpriteRenderer(cXObject *pSprite) {
  ESpriteRender *pEVar1;
  
  pEVar1 = AddSprite__16ESpriteRenderManP8cXObject(this->m_pSpriteMan,(cXObject__179_1116 *)pSprite)
  ;
  return pEVar1;
}

void EGlobal::FreeSpriteRenderer(cXObject *pSprite) {
  if (this->m_pSpriteMan != (ESpriteRenderMan *)0x0) {
    MarkSprite__16ESpriteRenderManP8cXObject(this->m_pSpriteMan,(cXObject__179_1116 *)pSprite);
  }
  return;
}

void EGlobal::UpdateSpriteRenderer(SpriteSlot *pSprite) {
  SetSprite__16ESpriteRenderManP10SpriteSlot(this->m_pSpriteMan,pSprite);
  return;
}

SpriteIdToResIdNode* EGlobal::ConvertSpriteIdToResId(u32 id) {
	SpriteIdToResIdNode *pData;
	ERQTable<SpriteIdToResIdNode> *pTable;
	
  void *pvVar1;
  SpriteIdToResIdNode *pSVar2;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pvVar1 = getTable__11ERQuickdataPCc(this->m_pSpriteIdToResId,"SpriteIdToResIdNode");
                    /* end of inlined section */
  pSVar2 = FindRes__H1ZC19SpriteIdToResIdNode_PX01T0i_PX01
                     (*(SpriteIdToResIdNode **)((int)pvVar1 + 4),
                      *(SpriteIdToResIdNode **)((int)pvVar1 + 4) + *(int *)((int)pvVar1 + 0xc),id);
  return pSVar2;
}

ECntrMdlLkupTable& EGlobal::GetCounterModelTable() {
  void *pvVar1;
  
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  pvVar1 = getTable__11ERQuickdataPCc(this->m_pSpriteIdToResId,"ECntrMdlLkupTable");
                    /* end of inlined section */
  return *(ECntrMdlLkupTable **)((int)pvVar1 + 4);
}

void EGlobal::LoadSelectorData(ObjSelector *sel, bool bWait) {
  LoadSelectorData__16ESimsDataManagerP11ObjSelectorb(&_simsdataman,sel,bWait);
  return;
}

void EGlobal::UnloadSelectorData(ObjSelector *sel) {
  UnloadSelectorData__16ESimsDataManagerP11ObjSelectorb(&_simsdataman,sel,true);
  return;
}

bool EGlobal::CreateThumbnail(ObjSelector *sel) {
	cXPerson *pPerson;
	TreeSim *this;
	
  short sVar1;
  ObjectModule__vtable *pOVar2;
  ESim *this_00;
  ObjectModule__vtable **ppOVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pOVar2 = _5Globs_pObjectModule->__vtable;
  sVar1 = *(short *)&pOVar2->DoReconObject;
  ppOVar3 = &_5Globs_pObjectModule->__vtable;
  iVar5 = GetGUID__11ObjSelector(sel);
  lVar6 = (*(code *)pOVar2->DoReconPerson)((int)ppOVar3 + (int)sVar1,iVar5);
  if (lVar6 == 0) {
    bVar4 = false;
  }
  else {
                    /* inlined from ../MSrc/TreeSim.h */
    this_00 = *(ESim **)(**(int **)lVar6 + 0x18);
                    /* end of inlined section */
    bVar4 = false;
    if (this_00 != (ESim *)0x0) {
      CreateThumbnail__4ESimb(this_00,true);
      bVar4 = true;
    }
  }
  return bVar4;
}

void OrientObjectInstance(cXObject *pObj) {
  TreeSim__vtable *pTVar1;
  int iVar2;
  long lVar3;
  
  pTVar1 = pObj->_vb5112->__vtable;
  lVar3 = (*(code *)pTVar1[1].GetISimInstance)
                    ((int)&pObj->_vb5112->m_pObject + (int)*(short *)&pTVar1[1].GetLastResult);
  if (lVar3 != 0) {
    pTVar1 = pObj->_vb5112->__vtable;
    iVar2 = (*(code *)pTVar1[1].GetISimInstance)
                      ((int)&pObj->_vb5112->m_pObject + (int)*(short *)&pTVar1[1].GetLastResult);
    (**(code **)(*(int *)(iVar2 + 0x130) + 0x14))
              (iVar2 + 0x130 + (int)*(short *)(*(int *)(iVar2 + 0x130) + 0x10));
  }
  return;
}

ISimInstance* GetObjectInstance(cXObject *pObj) {
  TreeSim__vtable *pTVar1;
  ISimInstance *pIVar2;
  
  if (pObj == (cXObject__47_3244 *)0x0) {
    pIVar2 = (ISimInstance *)0x0;
  }
  else {
    pTVar1 = pObj->_vb5112->__vtable;
    pIVar2 = (ISimInstance *)
             (*(code *)pTVar1[1].GetISimInstance)
                       ((int)&pObj->_vb5112->m_pObject + (int)*(short *)&pTVar1[1].GetLastResult);
  }
  return pIVar2;
}

ResData* GetResData(cXObject *pObj) {
	cXMTObject *mtobj;
	cXObject *ptr;
	
  short sVar1;
  int iVar2;
  int *piVar3;
  ResData *pRVar5;
  long lVar6;
  code *pcVar4;
  
  lVar6 = (*(code *)pObj->__vtable[1].GetFrontFaceDirection)
                    ((int)&pObj->_vb5112 + (int)*(short *)&pObj->__vtable[1].GetInteractionLeader);
  if (lVar6 == 0) {
    iVar2 = (*(code *)pObj->__vtable[1].HandleError)
                      ((int)&pObj->_vb5112 + (int)*(short *)&pObj->__vtable[1].Error);
    pRVar5 = *(ResData **)(iVar2 + 0xc0);
  }
  else {
                    /* inlined from ../MSrc/SCID.h */
    if (pObj == (cXObject__47_3244 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)_dyncastimpl__7TreeSim4SCID(pObj->_vb5112,cXMTObjectID);
    }
                    /* end of inlined section */
    sVar1 = *(short *)(piVar3[1] + 0x10);
    pcVar4 = *(code **)(piVar3[1] + 0x14);
    while (piVar3 = (int *)(*pcVar4)((int)piVar3 + (int)sVar1), piVar3 != (int *)0x0) {
      iVar2 = *(int *)(*piVar3 + 4);
      iVar2 = (**(code **)(iVar2 + 0x2a4))(*piVar3 + (int)*(short *)(iVar2 + 0x2a0));
      if (*(ResData **)(iVar2 + 0xc0) != (ResData *)0x0) {
        return *(ResData **)(iVar2 + 0xc0);
      }
      sVar1 = *(short *)(piVar3[1] + 0x18);
      pcVar4 = *(code **)(piVar3[1] + 0x1c);
    }
    pRVar5 = (ResData *)0x0;
  }
  return pRVar5;
}

void EGlobal::RecalcFloor() {
  (*(code *)this->__vtable[1].AllocSpriteRenderer)
            ((int)this->_pSelectedSims + *(short *)&this->__vtable[1].AllocPersonInstance + -0x24);
  return;
}

void EGlobal::RecalcWalls() {
  (*(code *)this->__vtable[1].AllocSpriteRenderer)
            ((int)this->_pSelectedSims + *(short *)&this->__vtable[1].AllocPersonInstance + -0x24);
  return;
}

void EGlobal::RecalcObjects() {
  if (this->_pCurHouse != (EHouse__26_3190 *)0x0) {
    PostLoad__11EIObjectMan(this->_pCurHouse->m_pObjectMan);
  }
  return;
}

void EGlobal::RecalcHouse() {
  if ((EHouse__2_990 *)this->_pCurHouse != (EHouse__2_990 *)0x0) {
    ReCalcHouse__6EHouse((EHouse__2_990 *)this->_pCurHouse);
    PostLoad__11EIObjectMan(this->_pCurHouse->m_pObjectMan);
  }
  return;
}

void EGlobal::BeginSaveGame() {
  EGlobalManagerClient__vtable *pEVar1;
  bool bVar2;
  
  bVar2 = IsCallingThread__7EThread((EThread *)&_app);
  if (bVar2) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    Flush__16ESimsDataManager(&_simsdataman);
  }
  EmptyHeap__17ESimScratchPadMan();
  return;
}

void EGlobal::EndSaveGame() {
  InitHeap__17ESimScratchPadMan();
  (*(code *)this->__vtable->AllocPersonInstance)
            ((int)this->_pSelectedSims + *(short *)&this->__vtable->AllocInstance + -0x24,0,0x2b);
  return;
}

void EGlobal::DoModelessMessage(int player_id, StackElem *elem, DialogParam *dialogParam, cXObject *pObj, ObjSelector *pSel) {
  EDialogWin__vtable *pEVar1;
  
  if (pObj == (cXObject__47_3244 *)0x0) {
    if (pSel != (ObjSelector *)0x0) {
      pEVar1 = (this->m_pMessDialogs[player_id]->field0_0x0).__vtable;
      (*(code *)pEVar1[1].GetEnteredText)
                ((int)&(this->m_pMessDialogs[player_id]->field0_0x0).m_mover +
                 (int)*(short *)&pEVar1[1].Draw,pSel);
    }
  }
  else {
    pEVar1 = (this->m_pMessDialogs[player_id]->field0_0x0).__vtable;
    (*(code *)pEVar1[1].Update)
              ((int)&(this->m_pMessDialogs[player_id]->field0_0x0).m_mover +
               (int)*(short *)&pEVar1[1].SafeDelete);
  }
  pEVar1 = (this->m_pMessDialogs[player_id]->field0_0x0).__vtable;
  (*(code *)pEVar1[1].SetObject)
            ((int)&(this->m_pMessDialogs[player_id]->field0_0x0).m_mover +
             (int)*(short *)&pEVar1[1].SetObject,elem,dialogParam);
  return;
}

void CollectInteractionsForObject(cXObject *pXObj, InteractionList &mInteractions, int player) {
	ObjDefinition *pDef;
	int groupId;
	bool isInteractionGroupLead;
	bool isMtModelMtObj;
	cXMTObject *mtobj;
	cXObject *ptr;
	ObjTestSim testSim1;
	int groupId2;
	ObjTestSim testSim1;
	ObjTestSim testSim1;
	ObjTestSim testSim1;
	
  short sVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  cXObject__124_908 *pcVar7;
  cXObject__124_908 **ppcVar8;
  uint uVar9;
  ObjTestSim testSim1;
  
  if (pXObj != (cXObject__47_3244 *)0x0) {
    if (_globals._pSelectedSims[player] != (cXPerson__150_1300 *)0x0) {
      lVar4 = (*(code *)pXObj->__vtable[1].GetFrontFaceDirection)
                        ((int)&pXObj->_vb5112 +
                         (int)*(short *)&pXObj->__vtable[1].GetInteractionLeader);
      if (lVar4 == 0) {
        __10ObjTestSimP8cXPersonP8cXObjectb
                  (&testSim1,(cXPerson__124_906 *)_globals._pSelectedSims[player],
                   (cXObject__124_908 *)pXObj,false);
        AppendInteractions__10ObjTestSimR15InteractionList(&testSim1,mInteractions);
        ___10ObjTestSim(&testSim1,2);
      }
      else {
        iVar2 = (*(code *)pXObj->__vtable[1].HandleError)
                          ((int)&pXObj->_vb5112 + (int)*(short *)&pXObj->__vtable[1].Error);
        sVar1 = *(short *)(iVar2 + 0x10);
        lVar4 = (long)sVar1;
        if (*(int *)(iVar2 + 0xc0) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(uint *)(*(int *)(iVar2 + 0xc0) + 4) >> 5 & 1;
        }
                    /* inlined from ../MSrc/SCID.h */
        pvVar3 = (void *)0x0;
        if (pXObj != (cXObject__47_3244 *)0x0) {
          pvVar3 = _dyncastimpl__7TreeSim4SCID(pXObj->_vb5112,cXMTObjectID);
        }
                    /* end of inlined section */
        lVar5 = (**(code **)(*(int *)((int)pvVar3 + 4) + 0x4c))
                          ((int)pvVar3 + (int)*(short *)(*(int *)((int)pvVar3 + 4) + 0x48));
        if ((((lVar5 == 0) && (*(int *)(iVar2 + 0x1c) != 0x437)) &&
            (*(int *)(iVar2 + 0x1c) != 0x439)) && (uVar9 == 0)) {
          lVar4 = (**(code **)(*(int *)((int)pvVar3 + 4) + 0x14))
                            ((int)pvVar3 + (int)*(short *)(*(int *)((int)pvVar3 + 4) + 0x10));
          if (lVar4 != 0) {
            do {
              pcVar7 = (cXObject__124_908 *)0x0;
              ppcVar8 = (cXObject__124_908 **)lVar4;
              if (lVar4 != 0) {
                pcVar7 = *ppcVar8;
              }
              __10ObjTestSimP8cXPersonP8cXObjectb
                        (&testSim1,(cXPerson__124_906 *)_globals._pSelectedSims[player],pcVar7,false
                        );
              AppendInteractions__10ObjTestSimR15InteractionList(&testSim1,mInteractions);
              ___10ObjTestSim(&testSim1,2);
              lVar4 = (**(code **)&ppcVar8[1]->field_0x1c)
                                ((int)ppcVar8 + (int)*(short *)&ppcVar8[1]->field_0x18);
            } while (lVar4 != 0);
          }
        }
        else if (sVar1 >> 0x1f == 0) {
          __10ObjTestSimP8cXPersonP8cXObjectb
                    (&testSim1,(cXPerson__124_906 *)_globals._pSelectedSims[player],
                     (cXObject__124_908 *)pXObj,false);
          AppendInteractions__10ObjTestSimR15InteractionList(&testSim1,mInteractions);
          ___10ObjTestSim(&testSim1,2);
        }
        else {
          lVar5 = (**(code **)(*(int *)((int)pvVar3 + 4) + 0x14))
                            ((int)pvVar3 + (int)*(short *)(*(int *)((int)pvVar3 + 4) + 0x10));
          if (lVar5 != 0) {
            if (lVar4 < 0) {
              lVar4 = (long)-(int)sVar1;
            }
            iVar2 = *(int *)lVar5;
            while( true ) {
              iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x2a4))
                                (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0x2a0));
              lVar6 = (long)*(short *)(iVar2 + 0x10);
              if (lVar6 < 0) {
                lVar6 = (long)-(int)*(short *)(iVar2 + 0x10);
              }
              ppcVar8 = (cXObject__124_908 **)lVar5;
              if (lVar6 == lVar4) {
                pcVar7 = (cXObject__124_908 *)0x0;
                if (lVar5 != 0) {
                  pcVar7 = *ppcVar8;
                }
                __10ObjTestSimP8cXPersonP8cXObjectb
                          (&testSim1,(cXPerson__124_906 *)_globals._pSelectedSims[player],pcVar7,
                           false);
                AppendInteractions__10ObjTestSimR15InteractionList(&testSim1,mInteractions);
                ___10ObjTestSim(&testSim1,2);
                pcVar7 = ppcVar8[1];
              }
              else {
                pcVar7 = ppcVar8[1];
              }
              lVar5 = (**(code **)&pcVar7->field_0x1c)
                                ((int)ppcVar8 + (int)*(short *)&pcVar7->field_0x18);
              if (lVar5 == 0) break;
              iVar2 = *(int *)lVar5;
            }
          }
        }
      }
    }
  }
  return;
}

bool EGlobal::CheckForZeroExtentOverride(CTilePt &pt) {
	ObjectIterator i;
	cXObject *pTempOb;
	SInt32 guid;
	
  cXObject__15_2008 *pcVar1;
  int iVar2;
  ObjectIterator i;
  
                    /* inlined from ../MSrc/objectiterator.h */
  init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&i,pt,kAll);
  pcVar1 = i.fCurrent;
  while( true ) {
                    /* end of inlined section */
    if (pcVar1 == (cXObject__15_2008 *)0x0) {
      return false;
    }
                    /* end of inlined section */
    i.fCurrent = pcVar1;
    iVar2 = (*(code *)pcVar1->__vtable[1].HandleError)
                      ((int)&pcVar1->_vb3534 + (int)*(short *)&pcVar1->__vtable[1].Error);
    iVar2 = *(int *)(iVar2 + 0x1c);
    if (iVar2 == -0x7012ba88) {
      return true;
    }
    if (iVar2 == -0x7012cd0b) {
      return true;
    }
    if (iVar2 == -0x73c087c3) break;
    if (iVar2 == -0x7012cfc9) {
      return true;
    }
    iVar2 = (*(code *)pcVar1->__vtable[1].HandleError)
                      ((int)&pcVar1->_vb3534 + (int)*(short *)&pcVar1->__vtable[1].Error);
    if ((*(ushort *)(iVar2 + 0xb6) & 4) != 0) {
      return true;
    }
    __pp__14ObjectIterator(&i);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
    pcVar1 = i.fCurrent;
  }
  return true;
}

bool EGlobal::CheckForZeroExtentOverride(cXObject *pOb) {
	SInt32 guid;
	
  bool bVar1;
  int iVar2;
  
  iVar2 = (*(code *)pOb->__vtable[1].HandleError)
                    ((int)&pOb->_vb5112 + (int)*(short *)&pOb->__vtable[1].Error);
  iVar2 = *(int *)(iVar2 + 0x1c);
  bVar1 = true;
  if (((iVar2 != -0x7012ba88) && (bVar1 = true, iVar2 != -0x7012cd0b)) &&
     (bVar1 = true, iVar2 != -0x73c087c3)) {
    if (iVar2 == -0x7012cfc9) {
      bVar1 = true;
    }
    else {
      iVar2 = (*(code *)pOb->__vtable[1].HandleError)
                        ((int)&pOb->_vb5112 + (int)*(short *)&pOb->__vtable[1].Error);
      bVar1 = (*(ushort *)(iVar2 + 0xb6) & 4) != 0;
    }
  }
  return bVar1;
}

s32 EGlobal::CallUnlockItems(u32 code, u32 nPersonId, u16 *pnBitCode) {
  int iVar1;
  
  iVar1 = UnlockItems__FUiUiPUs(code,nPersonId,pnBitCode);
  return iVar1;
}

void EGlobal::CallTestUnlocked(u32 code, u16 *pnBitCode) {
  TestUnlocked__FUiPUs(code,pnBitCode);
  return;
}

void EGlobal::HotSyncLighting() {
  EGlobalManagerClient__vtable *pEVar1;
  
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  HotSyncLighting__11EIObjectMan(this->_pCurHouse->m_pObjectMan);
  return;
}

s32 EGlobal::CallNewScore(s16 nPlayerNum, s16 nScore, s16 nComponent1, s16 nComponent2, s16 nComponent3, s16 nComponent4) {
  int iVar1;
  
  iVar1 = NewScore__Fssssss(nPlayerNum,nScore,nComponent1,nComponent2,nComponent3,nComponent4);
  return iVar1;
}

void EGlobal::ProcessCheatCode(c16 *String) {
	bool bCheatValid;
	BString2 CheatFreeItemsCode;
	BString2 CheatFirstPerson;
	BString2 CheatFreePlay;
	BString2 CheatMidas;
	BString2 CheatPartyMotel;
	
  bool bVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  BString2 CheatFreeItemsCode;
  BString2 CheatFirstPerson;
  BString2 CheatFreePlay;
  BString2 CheatMidas;
  BString2 CheatPartyMotel;
  
  bVar1 = false;
  __8BString2PCw(&CheatFreeItemsCode,(int *)&DAT_003ae1b8);
  psVar2 = c_str__C8BString2(&CheatFreeItemsCode);
  uVar3 = length__C8BString2(&CheatFreeItemsCode);
  iVar4 = wcsncmp__FPCUsT0Us(String,psVar2,(short)uVar3);
  if (iVar4 == 0) {
    bVar1 = true;
    if (*(int *)&(this->Cheats).FreeItems == 1) {
      *(undefined4 *)&(this->Cheats).FreeItems = 0;
    }
    else {
      *(undefined4 *)&(this->Cheats).FreeItems = 1;
    }
  }
  __8BString2PCw(&CheatFirstPerson,(int *)&DAT_003ae1d8);
  psVar2 = c_str__C8BString2(&CheatFirstPerson);
  uVar3 = length__C8BString2(&CheatFirstPerson);
  iVar4 = wcsncmp__FPCUsT0Us(String,psVar2,(short)uVar3);
  if (iVar4 == 0) {
    bVar1 = true;
    if (*(int *)&(this->Cheats).CameraFirstPersonUnlocked == 1) {
      *(undefined4 *)&(this->Cheats).CameraFirstPersonUnlocked = 0;
    }
    else {
      *(undefined4 *)&(this->Cheats).CameraFirstPersonUnlocked = 1;
    }
  }
  __8BString2PCw(&CheatFreePlay,(int *)&DAT_003ae200);
  psVar2 = c_str__C8BString2(&CheatFreePlay);
  uVar3 = length__C8BString2(&CheatFreePlay);
  iVar4 = wcsncmp__FPCUsT0Us(String,psVar2,(short)uVar3);
  if (iVar4 == 0) {
    bVar1 = true;
    *(undefined4 *)&(this->Cheats).UnlockFreeplayMode = 1;
  }
  __8BString2PCw(&CheatMidas,(int *)&DAT_003ae218);
  psVar2 = c_str__C8BString2(&CheatMidas);
  uVar3 = length__C8BString2(&CheatMidas);
  iVar4 = wcsncmp__FPCUsT0Us(String,psVar2,(short)uVar3);
  if (iVar4 == 0) {
    bVar1 = true;
    if (*(int *)&(this->Cheats).UnlockAllItems == 1) {
      *(undefined4 *)&(this->Cheats).UnlockAllItems = 0;
    }
    else {
      *(undefined4 *)&(this->Cheats).UnlockAllItems = 1;
    }
  }
  __8BString2PCw(&CheatPartyMotel,(int *)&DAT_003ae230);
  psVar2 = c_str__C8BString2(&CheatPartyMotel);
  uVar3 = length__C8BString2(&CheatPartyMotel);
  iVar4 = wcsncmp__FPCUsT0Us(String,psVar2,(short)uVar3);
  if (iVar4 == 0) {
    bVar1 = true;
    if (*(int *)&(this->Cheats).UnlockPartyMotel == 1) {
      *(undefined4 *)&(this->Cheats).UnlockPartyMotel = 0;
    }
    else {
      *(undefined4 *)&(this->Cheats).UnlockPartyMotel = 1;
    }
  }
  if (bVar1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x8e959eba);
                    /* end of inlined section */
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x1c99b71c);
                    /* end of inlined section */
  }
  ___8BString2(&CheatPartyMotel,2);
  ___8BString2(&CheatMidas,2);
  ___8BString2(&CheatFreePlay,2);
  ___8BString2(&CheatFirstPerson,2);
  ___8BString2(&CheatFreeItemsCode,2);
  return;
}

void EGlobal::AddParticleEffectToOrphanMan(ERParticleType *pType, EIParticleEmit *pEffect) {
  EStorable__vtable *pEVar1;
  
  if ((pType != (ERParticleType *)0x0) && (pEffect != (EIParticleEmit *)0x0)) {
    if ((EHouse__2_990 *)this->_pCurHouse == (EHouse__2_990 *)0x0) {
      pEVar1 = (pEffect->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[1].GetTypeKey)
                ((int)((pEffect->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar1[1].GetTypeName,3);
      while (pType != (ERParticleType *)0x0) {
        DelRef__9EResource(&pType->field0_0x0);
        pType = (ERParticleType *)0x0;
      }
    }
    else {
      AddParticleEffectToOrphanMan__6EHouseP14ERParticleTypeP14EIParticleEmit
                ((EHouse__2_990 *)this->_pCurHouse,pType,pEffect);
    }
  }
  return;
}

bool EGlobal::IsChallangeMode() {
	Neighborhood *pHood;
	
  Neighborhood__vtable *pNVar1;
  Neighborhood *pNVar2;
  bool bVar3;
  long lVar4;
  
  pNVar2 = _5Globs_pNeighborhood;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  if ((_5Globs_pNeighborhood == (Neighborhood *)0x0) ||
     (lVar4 = (*(code *)this->__vtable->CallTestUnlocked)
                        ((int)this->_pSelectedSims +
                         *(short *)&this->__vtable->CallUnlockItems + -0x24), lVar4 == 0)) {
    bVar3 = false;
  }
  else {
    pNVar1 = pNVar2->__vtable;
    lVar4 = (*(code *)pNVar1->AddToFamily)
                      ((int)&pNVar2->__vtable + (int)*(short *)&pNVar1->RemoveFamily,1);
    bVar3 = lVar4 == 2;
  }
  return bVar3;
}

void EGlobal::SetBackgroundColor() {
  EGlobalManagerClient__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pEVar1 = (_pGfx->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_30 = 0x3f0e8e8f;
  local_2c = 0x3f119192;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_28 = 0x3f626262;
                    /* end of inlined section */
  (*(code *)pEVar1[4].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 4),&local_30,1);
  *(undefined4 *)&this->m_bResetBackgroundColor = 0;
  return;
}

bool EGlobal::IsBuildHouseMode() {
	Family *pFam;
	FamilyID id;
	bool bInPauseOrBuyBuild;
	
  bool bVar1;
  long lVar2;
  EPanel *pEVar3;
  int *piVar4;
  long lVar5;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  if (_5Globs_pHouse == (House *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                      ((int)&_5Globs_pHouse->__vtable +
                       (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
  }
  lVar5 = -1;
  if (lVar2 != 0) {
    piVar4 = (int *)lVar2;
    lVar2 = (**(code **)(*piVar4 + 0x1c))((int)piVar4 + (int)*(short *)(*piVar4 + 0x18));
    if (lVar2 == 0) {
      pEVar3 = this->_pPanel;
      goto LAB_00162d8c;
    }
    lVar5 = (**(code **)(*piVar4 + 0x74))((int)piVar4 + (int)*(short *)(*piVar4 + 0x70));
  }
  pEVar3 = this->_pPanel;
LAB_00162d8c:
  bVar1 = false;
  if (pEVar3 != (EPanel *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
                    /* end of inlined section */
    bVar1 = pEVar3->m_panleState + ~LIVE_SIM_EDIT < 2;
  }
  return bVar1 && lVar5 == -1;
}

void EGlobal::SwapSelectedSims() {
  short sVar1;
  cXPerson__150_1300 *pcVar2;
  cSimulator__vtable *pcVar3;
  cXObject__150_1187__vtable *pcVar4;
  cXObject__150_1187 *pcVar5;
  cSimulator *pcVar6;
  undefined8 uVar7;
  
  pcVar6 = _5Globs_pSimulator;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  if (((_5Globs_pSimulator != (cSimulator *)0x0) &&
      (this->_pSelectedSims[0] != (cXPerson__150_1300 *)0x0)) &&
     (pcVar2 = this->_pSelectedSims[1], pcVar2 != (cXPerson__150_1300 *)0x0)) {
    this->_pSelectedSims[1] = this->_pSelectedSims[0];
    this->_pSelectedSims[0] = pcVar2;
    pcVar3 = pcVar6->__vtable;
    pcVar4 = pcVar2->_vb1187->__vtable;
    sVar1 = *(short *)&pcVar3->IsPaused;
    uVar7 = (*(code *)pcVar4[1].UserCanPlace)
                      ((int)&pcVar2->_vb1187->_vb1121 + (int)*(short *)&pcVar4[1].IsPartOfMe);
    (*(code *)pcVar3->IsStopped)((int)&pcVar6->__vtable + (int)sVar1,3,uVar7);
    pcVar3 = pcVar6->__vtable;
    pcVar5 = this->_pSelectedSims[1]->_vb1187;
    sVar1 = *(short *)&pcVar3->IsPaused;
    pcVar4 = pcVar5->__vtable;
    uVar7 = (*(code *)pcVar4[1].UserCanPlace)
                      ((int)&pcVar5->_vb1121 + (int)*(short *)&pcVar4[1].IsPartOfMe);
    (*(code *)pcVar3->IsStopped)((int)&pcVar6->__vtable + (int)sVar1,0x20,uVar7);
  }
  return;
}

bool EGlobal::ListenForController() {
	NLIterator i;
	NLIterator i;
	
  undefined uVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  uVar1 = 1;
  if (**(int **)(_app.m_pGameStateMan)->m_nliCurGame == 3) {
    uVar1 = (undefined)*(undefined4 *)&this->m_bListenToController;
  }
  return (bool)uVar1;
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

SpriteIdToResIdNode* SpriteIdToResIdNode * FindRes<SpriteIdToResIdNode>(SpriteIdToResIdNode *begin, SpriteIdToResIdNode *end, int resID) {
	int iCmp;
	SpriteIdToResIdNode *middle;
	
  int iVar1;
  SpriteIdToResIdNode *pSVar2;
  int iVar3;
  
  while( true ) {
    pSVar2 = end;
    iVar1 = ((int)pSVar2 - (int)begin) * -0x55555555;
    iVar3 = iVar1 >> 2;
    if (iVar3 < 1) {
      return (SpriteIdToResIdNode *)0x0;
    }
    if (iVar3 == 1) break;
    end = begin + (iVar3 - (iVar1 >> 0x1f) >> 1);
    if (resID == end->resID) {
      return end;
    }
    if (0 < (int)(resID - end->resID)) {
      begin = end + 1;
      end = pSVar2;
    }
  }
  pSVar2 = (SpriteIdToResIdNode *)0x0;
  if (begin->resID == resID) {
    pSVar2 = begin;
  }
  return pSVar2;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___7EGlobal(&_globals,2);
    }
    else {
      __7EGlobal(&_globals);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _vBlueBack.field0_0x0.d[3] = 0.33;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _vBlueBack.field0_0x0.d[0] = 0.015625;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _vBlueBack.field0_0x0.d[1] = 0.015625;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _vBlueBack.field0_0x0.d[2] = 0.332;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _WHITE.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _WHITE.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _BLACK.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _BLACK.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _YELLOW.field0_0x0.d[0] = 0.86;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _YELLOW.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _BLUE.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _BLUE.field0_0x0.d[1] = 0.08235;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _BLUE.field0_0x0.d[2] = 0.435294;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _BLUE.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _RED.field0_0x0.d[0] = 0.86;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _RED.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      _GREEN.field0_0x0.d[0] = 0.16;
      _GREEN.field0_0x0.d[3] = 1.0;
      _CYAN.field0_0x0.d[0] = 0.16;
      _defULTextureCoord.field0_0x0.d[0] = 0.0;
      _defULTextureCoord.field0_0x0.d[1] = 1.0;
      _defLRTextureCoord.field0_0x0.d[0] = 1.0;
      _defLRTextureCoord.field0_0x0.d[1] = 0.0;
      _WHITE.field0_0x0.d[3] = 1.0;
      _WHITE.field0_0x0.d[2] = 1.0;
      _BLACK.field0_0x0.d[1] = 0.0;
      _BLACK.field0_0x0.d[2] = 0.0;
      _YELLOW.field0_0x0.d[1] = 0.86;
      _YELLOW.field0_0x0.d[2] = 0.16;
      _RED.field0_0x0.d[1] = 0.16;
      _RED.field0_0x0.d[2] = 0.16;
      _GREEN.field0_0x0.d[1] = 0.86;
      _GREEN.field0_0x0.d[2] = 0.16;
      _CYAN.field0_0x0.d[1] = 0.86;
      _DK_GREAY.field0_0x0.d[3] = 1.0;
      _CYAN.field0_0x0.d[3] = 1.0;
      _MAJENTA.field0_0x0.d[0] = 0.86;
      _MAJENTA.field0_0x0.d[1] = 0.16;
      _MAJENTA.field0_0x0.d[2] = 0.86;
      _MAJENTA.field0_0x0.d[3] = 1.0;
      _GREAY.field0_0x0.d[0] = 0.5;
      _GREAY.field0_0x0.d[2] = 0.5;
      _GREAY.field0_0x0.d[3] = 1.0;
      _LT_GREAY.field0_0x0.d[0] = 0.75;
      _LT_GREAY.field0_0x0.d[2] = 0.75;
      _LT_GREAY.field0_0x0.d[3] = 1.0;
      _DK_GREAY.field0_0x0.d[0] = 0.25;
      _DK_GREAY.field0_0x0.d[2] = 0.25;
      _CYAN.field0_0x0.d[2] = 0.86;
      _GREAY.field0_0x0.d[1] = 0.5;
      _LT_GREAY.field0_0x0.d[1] = 0.75;
                    /* end of inlined section */
      _DK_GREAY.field0_0x0.d[1] = 0.25;
    }
  }
  return;
}

cXPerson* EGlobal::GetOtherPlayersSim(u32 idx) {
  int iVar1;
  
  iVar1 = 4;
  if (idx != 0) {
    iVar1 = 0;
  }
  return *(cXPerson__47_985 **)((int)this->_pSelectedSims + iVar1);
}

FloorSet& EGlobal::GetFloorSet() {
  return this->_pFloorSet;
}

WallSet& EGlobal::GetWallSet() {
  return this->_pWallSet;
}

FenceSet& EGlobal::GetFenceSet() {
  return this->_pFenceSet;
}

bool EGlobal::IsTransitionStoryMode() {
  return this->m_pStoryModeTransitionShader != (ERShader *)0x0;
}

void EGlobal::SetListenFlag(bool bFlag) {
  *(int *)&this->m_bListenToController = (int)bFlag;
  return;
}

bool EVibrate::IsPortInvalid(u8 Port) {
  return 1 < Port;
}

void global constructors keyed to _globals() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _globals() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
