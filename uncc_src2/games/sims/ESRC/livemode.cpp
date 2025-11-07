// STATUS: NOT STARTED

#include "livemode.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2306;
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
	Panelstateman *$vb2306;
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
	Panelstateman *$vb2306;
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
	TreeSim *$vb5140;
	__vtbl_ptr_type *$vf5080;
	
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
	cXObject *$vb5080;
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
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2306;
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

enum ETextureSymbol {
	UNDEFINED_TEXTURE = 0,
	ACTION_CHANNEL_010000_TEXTURE = -176632222,
	ACTION_CHANNEL_010001_TEXTURE = -2105540876,
	ACTION_CHANNEL_010002_TEXTURE = 460762958,
	ACTION_CHANNEL_010003_TEXTURE = 1819385816,
	ACTION_CHANNEL_010004_TEXTURE = -233502085,
	ACTION_CHANNEL_010005_TEXTURE = -2062402835,
	ACTION_CHANNEL_010006_TEXTURE = 471558999,
	ACTION_CHANNEL_010007_TEXTURE = 1797020609,
	ACTION_CHANNEL_010008_TEXTURE = -73185712,
	ACTION_CHANNEL_010009_TEXTURE = -1935378746,
	ACTION_CHANNEL_010010_TEXTURE = -328990941,
	ACTION_CHANNEL_010011_TEXTURE = -1687892043,
	ACTION_CHANNEL_010012_TEXTURE = 40738319,
	ACTION_CHANNEL_010013_TEXTURE = 1969925785,
	ACTION_CHANNEL_010014_TEXTURE = -351388870,
	ACTION_CHANNEL_010015_TEXTURE = -1677128788,
	ADULT60S_ANARCHY_TEXTURE = 1934622088,
	ADULT60S_FLOWER_TEXTURE = -1234636028,
	ADULT60S_NUCLEAR_TEXTURE = 1686966918,
	ADULT_MONEY_BURGLAR_TEXTURE = 2064958313,
	ADULT_MONEY_MONEY_TEXTURE = 1890741598,
	ADULT_MONEY_UNSURE_TEXTURE = -682374989,
	ADULT_POLITICS_BILL_SIGNING_TEXTURE = -853099275,
	ADULT_POLITICS_CAPITAL_TEXTURE = 1714871382,
	ADULT_POLITICS_JUSTICE_TEXTURE = -785463649,
	ADULT_TRAVEL_CAR_TEXTURE = 2059725387,
	ADULT_TRAVEL_FLYING_TEXTURE = 1027830898,
	ADULT_TRAVEL_SAILING_TEXTURE = -1907949039,
	AFRICAN_VIOLET_TEXTURE = -335158503,
	AFRICAN_VIOLET_ACTION_QUEUE_TEXTURE = 15114695,
	AMISHIM_BOOK_CASE_TEXTURE = -826222530,
	AMISHIM_BOOK_CASE_ACTION_QUEUE_TEXTURE = 805711295,
	ANDERSONVILLE_PEDESTAL_SINK_TEXTURE = -1246956662,
	ANDERSONVILLE_PEDESTAL_SINK_ACTION_QUEUE_TEXTURE = 1785236087,
	ANOTHERMETAL_FENCE_01_TEXTURE = -1627033195,
	ANTIQUE_ARMOIRE_TEXTURE = -2057828757,
	ANTIQUE_ARMOIRE_ACTION_QUEUE_TEXTURE = -1801411735,
	ANTIQUE_PERSIAN_RUG_TEXTURE = -175537619,
	ANTIQUE_PERSIAN_RUG_ACTION_QUEUE_TEXTURE = -762246301,
	ANYWHERE_END_TABLE_TEXTURE = -506521204,
	ANYWHERE_END_TABLE_ACTION_QUEUE_TEXTURE = 300312616,
	ARISTOSCRATCH_POOL_TABLE_TEXTURE = -2038011458,
	ARISTOSCRATCH_POOL_TABLE_02_TEXTURE = -267062645,
	ARISTOSCRATCH_POOL_TABLE_ACTION_QUEUE_TEXTURE = -860386853,
	AROMASTER_2000_TEXTURE = -1160051233,
	AROMASTER_ACTION_QUEUE_TEXTURE = 762048732,
	ARROWTEST_TEXTURE = 926607369,
	ARROWTEST_UP_TEXTURE = 1803342740,
	ARROW_DOWN_TEXTURE = -873439499,
	ARROW_LEFT_TEXTURE = -1385682522,
	ARROW_RIGHT_TEXTURE = -206588507,
	ARROW_UP_TEXTURE = 841426323,
	ASH_ACTION_QUEUE_TEXTURE = -567570336,
	ASH_PILE_LARGE_SIZE_TEXTURE = 409953985,
	ASH_PILE_MEDIUM_SIZE_TEXTURE = 978642866,
	ASH_PILE_SMALL_SIZE_TEXTURE = -4031414,
	BABIES_BOTTLE_TEXTURE = -498404870,
	BABIES_DIAPER_TEXTURE = -1987258696,
	BABIES_MOSES_TEXTURE = -1540411109,
	BABIES_STROLLER_TEXTURE = 1982543632,
	BABIES_SUCKTHINGY_TEXTURE = 149102951,
	BABY_CRADLE_TEXTURE = 1041591381,
	BABY_CRADLE_ACTION_QUEUE_TEXTURE = -1064246599,
	BACHMAN_WOOD_BEVERAGE_BAR_TEXTURE = 1347900347,
	BACHMAN_WOOD_BEVERAGE_BAR_ACTION_QUEUE_TEXTURE = -1286066984,
	BACHMAN_WOOD_BEVERAGE_BAR_NEON_TEXTURE = -90633129,
	BACKWOODS_TABLE_ACTION_QUEUE_TEXTURE = -1010279143,
	BACKWOODS_TABLE_BY_SURVIVALL_TEXTURE = -184852254,
	BACK_OF_STUFF_ROOM_TEXTURE = -1880250595,
	BACK_SLACK_RECLINER_TEXTURE = -1005629902,
	BEAUTY_BLOWDRYER_TEXTURE = -1972046285,
	BEAUTY_COMB_TEXTURE = 539350939,
	BEAUTY_LIPSTICK_TEXTURE = 1226328230,
	BEAUTY_PERFUME_TEXTURE = 940790657,
	BEAUTY_TRINKETS_TEXTURE = 683214849,
	BEAVER_PELT_MOOSEHEAD_TEXTURE = -2040824143,
	BEAVER_PELT_MOOSEHEAD_ACTION_QUEUE_TEXTURE = 1468857633,
	BEEJAPHONE_GUITAR_TEXTURE = -2136319695,
	BEEJAPHONE_GUITAR_ACTION_QUEUE_TEXTURE = -568581462,
	BENI_KANA_TEPPENYAKI_TABLE_TEXTURE = -261803116,
	BENI_KANA_TEPPENYAKI_TABLE_ACTION_QUEUE_TEXTURE = -698735076,
	BENTLEY_TEXTURE = 1425569944,
	BG_GRAY_GRADIENT_TEXTURE = -431579526,
	BILLS_ACTION_QUEUE_TEXTURE = -435619912,
	BIRCH_TREE_TEXTURE = -1867305593,
	BIRCH_TREE_ACTION_QUEUE_TEXTURE = 213120098,
	BI_POLAR_TEXTURE = -869126679,
	BI_POLAR_ACTION_QUEUE_TEXTURE = -303976939,
	BLACKLINE_TEXTURE = -368508540,
	BLACK_SLACK_RECLINER_ACTION_QUEUE_TEXTURE = 2032899104,
	BLANK_DOWN_TEXTURE = 1687323529,
	BLANK_LEFT_TEXTURE = 34272474,
	BLANK_RIGHT_TEXTURE = -1431049617,
	BLANK_UP_TEXTURE = 698643521,
	BLIND_DATE_BY_I_RONEY_TEXTURE = 2039954359,
	BLIND_DATE_BY_I_RONEY_ACTION_QUEUE_TEXTURE = 358452159,
	BLUE_CHINA_VASE_TEXTURE = -843479749,
	BLUE_CHINA_VASE_ACTION_QUEUE_TEXTURE = -509275589,
	BLUE_CHINA_VASE_ROOM_TEXTURE = -1585287370,
	BLUE_PLATE_SCONCE_TEXTURE = 1692459378,
	BLUE_PLATE_SCONCE_ACTION_QUEUE_TEXTURE = -1504240459,
	BLUR_OUT_TEXTURE = -792466962,
	BOTTLE_LAMP_TEXTURE = -1667556177,
	BOTTLE_LAMP_ACTION_QUEUE_TEXTURE = 1277270157,
	BOXWOOD_HEDGE_TEXTURE = -1078333910,
	BOXWOOD_HEDGE_ACTION_QUEUE_TEXTURE = 591982791,
	BRAND_NAME_TOASTER_OVEN_TEXTURE = -597521358,
	BRAND_NAME_TOASTER_OVEN_ACTION_QUEUE_TEXTURE = 529246059,
	BRIDGE_TEMP_TEXTURE = -10747476,
	BUILDGLOW_TEXTURE = -226736892,
	BUTTON_BG_TEXTURE = -1487850137,
	BUTTON_BG_4_TEXTLINE_TEXTURE = 1383237537,
	BUTTON_BG_HIGHLIGHT_TEXTURE = -1931746326,
	BUYGLOW_TEXTURE = -636154771,
	CARD_TABLE_TEXTURE = -1037146487,
	CARD_TABLE_ACTION_QUEUE_TEXTURE = 415629578,
	CARRY_BEANS_TEXTURE = 912134021,
	CARRY_BENNIKANNA_STIR_THE_FOOD_STATE_01_TEXTURE = -1396580127,
	CARRY_BENNIKANNA_STIR_THE_FOOD_STATE_01_SECOND_TEXTURE_TEXTURE = 1549947424,
	CARRY_BILLS_ORANGE_TEXTURE = -1140391461,
	CARRY_BILLS_RED_TEXTURE = 1615082764,
	CARRY_BILLS_YELLOW_TEXTURE = 1908825148,
	CARRY_BURRITO_ENCHILADA_EMPTY_PLATE_TEXTURE = 187088903,
	CARRY_BURRITO_ENCHILADA_FULL_PLATE_TEXTURE = 1784951381,
	CARRY_BURRITO_ENCHILADA_HALFFULL_PLATE_TEXTURE = 1103347070,
	CARRY_CUTTING_BOARD_EMPTY_TEXTURE = -525801912,
	CARRY_CUTTING_BOARD_STAGE_1_TEXTURE = 1982519110,
	CARRY_CUTTING_BOARD_STAGE_2_TEXTURE = -282884356,
	CARRY_FRUITCAKE_TEXTURE = -503761451,
	CARRY_FRYING_PAN_TEXTURE = 1904568127,
	CARRY_GIFT_CHOCOLATES_TEXTURE = -19855608,
	CARRY_GIFT_FLOWERS_TEXTURE = 634740547,
	CARRY_GNOME_TEXTURE = -52900756,
	CARRY_GNOME_ACTION_QUEUE_TEXTURE = 788336269,
	CARRY_HAMBURGERS_TEXTURE = 1280285465,
	CARRY_HAMBURGER_TRAY_TEXTURE = -521480617,
	CARRY_MICROWAVE_POT_TEXTURE = -1907704245,
	CARRY_NEWSPAPER_TEXTURE = 1185976430,
	CARRY_NEWSPAPER_OLD_TEXTURE = -1191051960,
	CARRY_PIZZABOX_TEXTURE = -1914391555,
	CARRY_SALAD_EMPTY_PLATE_TEXTURE = -413079295,
	CARRY_SALAD_FULL_PLATE_TEXTURE = 1337922196,
	CARRY_SALAD_HALFFULL_PLATE_TEXTURE = -1632126354,
	CARRY_SNACK_CHIPS_TEXTURE = -1513196014,
	CARRY_SOUP_IN_PAN_TEXTURE = 427564387,
	CARRY_STOOL_TEXTURE = 502698227,
	CARRY_TOASTEROVEN_POT_TEXTURE = 1892638597,
	CARRY_TRAY_BOXES_CARTONS_ETC_TEXTURE = 1301790734,
	CARRY_TRAY_OF_BEANS_TEXTURE = -1762191270,
	CARRY_TV_DINNER_BOX_TEXTURE = -365370202,
	CARTOON_01_TEXTURE = 694812133,
	CARTOON_02_TEXTURE = -1335841697,
	CARTOON_03_TEXTURE = -949510967,
	CARTOON_04_TEXTURE = 1493371242,
	CARTOON_05_TEXTURE = 772028924,
	CARTOON_06_TEXTURE = -1223858106,
	CARTOON_07_TEXTURE = -1073063728,
	CARTOON_08_TEXTURE = 1354057025,
	CARTOON_09_TEXTURE = 666006999,
	CARTOON_10_TEXTURE = 1198914610,
	CARTOON_11_TEXTURE = 812829860,
	CARTOON_12_TEXTURE = -1451516642,
	CARTOON_13_TEXTURE = -562254456,
	CARTOON_14_TEXTURE = 1075329067,
	CARVING_BLOCK_TEXTURE = -1340939189,
	CARVING_BLOCK_ACTION_QUEUE_TEXTURE = 961379836,
	CAR_BENTLEY_ACTION_QUEUE_TEXTURE = 1303845632,
	CAR_JUNKER_ACTION_QUEUE_TEXTURE = 1713147342,
	CAR_LIMO_ACTION_QUEUE_TEXTURE = -1815434193,
	CAR_MILITARY_JEEP_ACTION_QUEUE_TEXTURE = -1372965968,
	CAR_SCHOOL_BUS_ACTION_QUEUE_TEXTURE = -868893368,
	CAR_STAFF_SEDAN_ACTION_QUEUE_TEXTURE = -1542760161,
	CAR_STANDARD_CAR_ACTION_QUEUE_TEXTURE = 1127323391,
	CAR_SUV_ACTION_QUEUE_TEXTURE = -825888944,
	CAR_TOWN_CAR_ACTION_QUEUE_TEXTURE = -1536111146,
	CEILING_01_ROOM_TEXTURE = 1710571491,
	CENSORED_128X128_D_TEXTURE = -768613568,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_TEXTURE = -984160650,
	CHEAP_EAZZZZZE_DOUBLE_SLEEPER_ACTION_QUEUE_TEXTURE = -472757629,
	CHEAP_PINE_BOOKCASE_TEXTURE = -579110849,
	CHEAP_PINE_BOOKCASE_ACTION_QUEUE_TEXTURE = 626361102,
	CHECKBOX_CHECKED_TEXTURE = -1042240448,
	CHECKBOX_UNCHECKED_TEXTURE = 333061141,
	CHIMEWAY___DAUGHTERS_PIANO_TEXTURE = -1860350781,
	CHIMEWAY___DAUGHTERS_PIANO_02_TEXTURE = 588485556,
	CHIMEWAY___DAUGHTERS_PIANO_ACTION_QUEUE_TEXTURE = -1900423864,
	CHUCK_MATEWELL_CHESS_SET_TEXTURE = -1307343461,
	CHUCK_MATEWELL_CHESS_SET_ACTION_QUEUE_TEXTURE = -434028544,
	CLOTHES_FOR_ARMOIRE_TEXTURE = -1611009827,
	CLOUDS_TERRAIN_TEXTURE = -1164078196,
	COMPUTER_SCREEN_00_TEXTURE = -581261007,
	COMPUTER_SCREEN_01_TEXTURE = -1436706393,
	COMPUTER_SCREEN_02_TEXTURE = 861194269,
	COMPUTER_SCREEN_03_TEXTURE = 1146353803,
	COMPUTER_SCREEN_04_TEXTURE = -633901784,
	COMPUTER_SCREEN_05_TEXTURE = -1389339202,
	COMPUTER_SCREEN_06_TEXTURE = 876153860,
	COMPUTER_SCREEN_07_TEXTURE = 1128152210,
	COMPUTER_SCREEN_SEARCH_TEXTURE = 1474117417,
	CONCRETE_46_FLOOR_TEXTURE = 421647710,
	CONTEMPO_COUCH_TEXTURE = 1062736438,
	CONTEMPO_COUCH_ACTION_QUEUE_TEXTURE = 1288452373,
	CONTEMPO_COUCH_ROOM_TEXTURE = -147895502,
	CONTEMPO_LOVESEAT_TEXTURE = 1715079332,
	CONTEMPO_LOVESEAT_ACTION_QUEUE_TEXTURE = -1821669259,
	CONTROLLER_LOAD_SCREEN_TEXTURE = 179332798,
	COUNTRY_CLASS_ARMCHAIR_ACTION_QUEUE_TEXTURE = 2052681589,
	COUNTRY_CLASS_LOVESEAT_ACTION_QUEUE_TEXTURE = 1920407260,
	COUNTRY_CLASS_SOFA_TEXTURE = -1421385399,
	COUNTRY_CLASS_SOFA_ACTION_QUEUE_TEXTURE = 2010307390,
	COUNT_BLANC_BATHROOM_COUNTER_ACTION_QUEUE_TEXTURE = 2083786102,
	COUNT_BLANC_BATHROOM_COUNTER_FACE_TEXTURE = 1848601242,
	COUNT_BLANC_BATHROOM_COUNTER_SIDE_TEXTURE = 1220151880,
	COUNT_BLANC_BATHROOM_COUNTER_TOP_TEXTURE = 1318655674,
	DAFFODILS_00_SEARCH_TEXTURE = 1205195629,
	DAFFODILS_01_TEXTURE = -1539894934,
	DAFFODILS_02_TEXTURE = 1027490000,
	DAFFODILS_03_TEXTURE = 1245278278,
	DAFFODILS_ACTION_QUEUE_TEXTURE = 783129770,
	DAFFODILS_ALL_TEXTURE = -821471043,
	DECAL_GROUND_01_TEXTURE = 884974805,
	DECAL_GROUND_02_TEXTURE = -1380518545,
	DECKCHAIR_BY_SURVIVAL_TEXTURE = -625526526,
	DECKCHAIR_BY_SURVIVAL_ACTION_QUEUE_TEXTURE = -2018947058,
	DELETE_QUEUE_TEXTURE = -1960834779,
	DELETE_WALL_TEXTURE = 439810240,
	DELUSION_DE_GRANDEUR_TEXTURE = 2072813303,
	DELUSION_DE_GRANDEUR_ACTION_QUEUE_TEXTURE = -1046000978,
	DIALECTIC_FREESTANDING_RANGE_TEXTURE = -595658397,
	DIALECTRIC_FREESTANDING_RANGE_ACTION_QUEUE_TEXTURE = 477497476,
	DIMANCHE_FOLDING_EASEL_TEXTURE = 408261476,
	DIMANCHE_FOLDING_EASEL_02_TEXTURE = -2122069846,
	DIMANCHE_FOLDING_EASEL_ACTION_QUEUE_TEXTURE = -1200763634,
	DIMANCHE_FOLDING_EASEL__CANVAS__00_TEXTURE = -1960248074,
	DIMANCHE_FOLDING_EASEL__CANVAS__01_TEXTURE = -63976352,
	DIMANCHE_FOLDING_EASEL__CANVAS__02_TEXTURE = 1697029594,
	DIMANCHE_FOLDING_EASEL__CANVAS__03_TEXTURE = 304196940,
	DIMANCHE_FOLDING_EASEL__CANVAS__04_TEXTURE = -1941620497,
	DIMANCHE_FOLDING_EASEL__CANVAS__05_TEXTURE = -79558535,
	DIMANCHE_FOLDING_EASEL__CANVAS__06_TEXTURE = 1649105347,
	DIMANCHE_FOLDING_EASEL__CANVAS__07_TEXTURE = 357329237,
	DIMANCHE_FOLDING_EASEL__CANVAS__08_TEXTURE = -2047642428,
	DIMANCHE_FOLDING_EASEL__CANVAS__09_TEXTURE = -218872750,
	DIMANCHE_FOLDING_EASEL__CANVAS__10_TEXTURE = -1842098761,
	DIMANCHE_FOLDING_EASEL__CANVAS__11_TEXTURE = -449512159,
	DIMANCHE_FOLDING_EASEL__CANVAS__12_TEXTURE = 2084416667,
	DISH_DUSTER_DELUXE_TEXTURE = 1792912192,
	DISH_DUSTER_DELUXE_02_TEXTURE = 1245417741,
	DISH_DUSTER_DELUXE_ACTION_QUEUE_TEXTURE = -435081752,
	DIVING_BOARD_01_TEXTURE = -1953512098,
	DIVING_BOARD_ACTION_QUEUE_TEXTURE = 985148090,
	DOWN_WIT_DAT_BOOMBOX_TEXTURE = 1668575959,
	DOWN_WIT_DAT_BOOMBOX_ACTION_QUEUE_TEXTURE = 943654919,
	D_PAD_BEVEL_TEXTURE = -1956894250,
	D_PAD_BG_TEXTURE = 756329597,
	ECHINOPSIS_MAXIMUS_CACTUS_TEXTURE = 1038211780,
	ECHINOPSIS_MAXIMUS_CACTUS_ACTION_QUEUE_TEXTURE = 1083566872,
	EDGE_OF_REALITY___LOGO_FINAL_TEXTURE = 1654318011,
	ELITE_REFLECTIONS_CHROME_LAMP_TEXTURE = -1847129970,
	ELITE_REFLECTIONS_CHROME_LAMP_ACTION_QUEUE_TEXTURE = 739350522,
	EMPRESS_DINING_CHAIR_TEXTURE = 1743128456,
	EMPRESS_DINING_CHAIR_ACTION_QUEUE_TEXTURE = 582808648,
	EPIKOUROS_KITCHEN_SINK_TEXTURE = 457763968,
	EPIKOUROS_KITCHEN_SINK_ACTION_QUEUE_TEXTURE = 247887003,
	ERUPTION_OF_DECADENCE_TAPESTRY_TEXTURE = -836010465,
	ERUPTION_OF_DECADENCE_TAPESTRY_ACTION_QUEUE_TEXTURE = -852391212,
	EXERTO_BENCHPRESS_EXCERSISE_MACHINE_TEXTURE = -708658642,
	EXERTO_BENCHPRESS_EXCERSISE_MACHINE_ACTION_QUEUE_TEXTURE = -951403988,
	EXTERIOR_TILE__01_TEXTURE = 427072907,
	EXTERIOR_TILE__02_TEXTURE = -2139239375,
	EXTERIOR_TILE__03_TEXTURE = -142934873,
	EXTERIOR_TILE__201_TEXTURE = -483384147,
	EXTERIOR_TILE__202_TEXTURE = 2050585879,
	EXTERIOR_TILE__203_TEXTURE = 222184833,
	EXTERIOR_TILE__204_TEXTURE = -1822765022,
	EXTERIOR_TILE__205_TEXTURE = -463609676,
	EXTERIOR_TILE__206_TEXTURE = 2102702350,
	EXTERIOR_TILE__207_TEXTURE = 173244824,
	EXTERIOR_TILE__208_TEXTURE = -1695769591,
	EXTERIOR_TILE__209_TEXTURE = -303321953,
	EXTERIOR_TILE__210_TEXTURE = -1926486662,
	EXTERIOR_TILE__211_TEXTURE = -97839636,
	EXTERIOR_TILE__213_TEXTURE = 337999040,
	FAUX_BEARSKIN_RUG_TEXTURE = -474660622,
	FAUX_BEARSKIN_RUG_ACTION_QUEUE_TEXTURE = -396451125,
	FA_CA_ARMY_RANGER_TEXTURE = 1108926099,
	FA_CA_ARMY_RECRUIT_TEXTURE = 1721166240,
	FA_CA_BURGLAR_TEXTURE = -1128355065,
	FA_CA_CLERK_TEXTURE = -534991775,
	FA_CA_EXTREME_OUTDOORS_TEXTURE = -1101524449,
	FA_CA_EXTREME_RACECAR_TEXTURE = 1069759129,
	FA_CA_LIFEGUARD_TEXTURE = 1038414441,
	FA_CA_LOUNGE_SINGER_TEXTURE = -310724496,
	FA_CA_MOB_BOSS_TEXTURE = 69902407,
	FA_CA_ROCK_STAR_TEXTURE = 227949085,
	FA_CA_SLACKER_TEXTURE = -1865431382,
	FA_CA_SPY_TEXTURE = -1024719060,
	FA_FT_DEFINED_01_TEXTURE = 1071790859,
	FA_FT_NORMAL_02_TEXTURE = -1208399710,
	FA_FT_ROUNDED_01_TEXTURE = 376728346,
	FA_GL_CAT_SUN_MAP_TEXTURE = 2042925928,
	FA_GL_LIBRARY_EYE_MAP_TEXTURE = -1963406922,
	FA_GL_LIBRARY_EYE_MAP2_TEXTURE = 945639549,
	FA_GL_NORMAL_EYE_MAP_TEXTURE = -1271682960,
	FA_GL_NORMAL_EYE_MAP2_TEXTURE = 1248132249,
	FA_GL_NORMAL_SUN_MAP_TEXTURE = -1339035410,
	FA_JW_DIAMONDMAP_TEXTURE = 1707541197,
	FA_JW_PEARLMAP_TEXTURE = 1790648562,
	FA_JW_SILVER_HOOP_TEXTURE = 1019491471,
	FA_LB_1C_BELLA_TEXTURE = -957302167,
	FA_LB_1C_BELLS_01_TEXTURE = 146300165,
	FA_LB_1C_KNEE_01_TEXTURE = -919241173,
	FA_LB_1C_KNEE_02_TEXTURE = 1346121617,
	FA_LB_1C_KNEE_03_TEXTURE = 658185991,
	FA_LB_1C_KNEE_04_TEXTURE = -1184920924,
	FA_LB_1C_MINI_01_TEXTURE = -1964575488,
	FA_LB_1C_MINI_02_TEXTURE = 334472378,
	FA_LB_1C_MINI_02_ZIP_TEXTURE = 1748450185,
	FA_LB_1C_MINI_03_TEXTURE = 1692963884,
	FA_LB_1C_MINI_04_TEXTURE = -91487857,
	FA_LB_1C_MINI_05_TEXTURE = -1920257767,
	FA_LB_1C_PANTS_01_TEXTURE = -550424056,
	FA_LB_1C_PANTS_02_TEXTURE = 1178100658,
	FA_LB_1C_PANTS_03_TEXTURE = 826233636,
	FA_LB_1C_PANTS_04_TEXTURE = -1352939897,
	FA_LB_1C_SHORTS_01_TEXTURE = 2035435268,
	FA_LB_1C_SHORTS_02_TEXTURE = -530901314,
	FA_LB_1C_SKIRT_01_TEXTURE = -94595324,
	FA_LB_1C_SKIRT_02_TEXTURE = 1666565822,
	FA_LB_1C_SKIRT_03_TEXTURE = 340981288,
	FA_LB_1C_SKIRT_04_TEXTURE = -1976147061,
	FA_LB_1C_TIGHT_01_TEXTURE = 2002542951,
	FA_LB_1C_TIGHT_02_TEXTURE = -296406819,
	FA_LB_2C_KNEE_01_TEXTURE = 570606888,
	FA_LB_2C_KNEE_01_T_TEXTURE = -1498448866,
	FA_LB_2C_PANTS_TEXTURE = -1357130944,
	FA_LB_2C_PANTS_T_TEXTURE = -10508807,
	FA_LB_2C_SKIRT_01_TEXTURE = 1673457925,
	FA_LB_2C_SKIRT_01_T_TEXTURE = -1489923080,
	FA_MU_EGYPTIAN_TEXTURE = 425718387,
	FA_MU_GEISHA_TEXTURE = 789025153,
	FA_MU_NEW_HEAVY_TEXTURE = 90469603,
	FA_MU_NEW_LIGHT_TEXTURE = 340742731,
	FA_MU_NEW_NORMAL_TEXTURE = -666639739,
	FA_MU_PUNK_TEXTURE = -661445326,
	FA_PO_FORMAL_TEXTURE = 550259536,
	FA_PO_PJS_TEXTURE = -1440717596,
	FA_PO_SWIMSUIT_TEXTURE = -1219654005,
	FA_PO_TEPPEN_TEXTURE = 284667105,
	FA_PO_WORKOUT_TEXTURE = -1609323669,
	FA_SH_BELLA_TEXTURE = 1913803757,
	FA_SH_PUMP_01_TEXTURE = 343087962,
	FA_SH_PUMP_02_TEXTURE = -1921365280,
	FA_SH_PUMP_03_TEXTURE = -92439946,
	FA_SH_SKIN_TIGHT_01_TEXTURE = -454007190,
	FA_SH_SKIN_TIGHT_02_TEXTURE = 2113484752,
	FA_SH_SNEAKER_01_TEXTURE = 1075862151,
	FA_SH_SNEAKER_02_TEXTURE = -651621571,
	FA_SH_SNEAKER_03_TEXTURE = -1372701781,
	FA_SH_SNEAKER_04_TEXTURE = 810200584,
	FA_UB_1C_BELLA_TEXTURE = 323698727,
	FA_UB_1C_CROP_01_TEXTURE = -1876172398,
	FA_UB_1C_CROP_02_TEXTURE = 153268264,
	FA_UB_1C_JACKET_01_TEXTURE = 2000723849,
	FA_UB_1C_JACKET_02_TEXTURE = -297152973,
	FA_UB_1C_JACKET_02T_TEXTURE = 20599480,
	FA_UB_1C_JACKET_03_TEXTURE = -1722876251,
	FA_UB_1C_JACKET_04_TEXTURE = 120220422,
	FA_UB_1C_LONG_01_TEXTURE = 696633000,
	FA_UB_1C_LONG_02_TEXTURE = -1332963566,
	FA_UB_1C_LONG_03_TEXTURE = -947148924,
	FA_UB_1C_PUFFY_01_TEXTURE = 495644434,
	FA_UB_1C_PUFFY_02_TEXTURE = -2071740760,
	FA_UB_1C_SHORT_01_TEXTURE = -720786008,
	FA_UB_1C_SHORT_02_TEXTURE = 1275132946,
	FA_UB_1C_SHORT_02_T_TEXTURE = -603765651,
	FA_UB_1C_SHORT_03_TEXTURE = 990366852,
	FA_UB_1C_SHORT_04_TEXTURE = -1520215769,
	FA_UB_1C_TIGHT_01_TEXTURE = -1078418869,
	FA_UB_1C_TIGHT_02_TEXTURE = 649196529,
	FA_UB_1C_TIGHT_03_TEXTURE = 1370932071,
	FA_UB_1C_TIGHT_03_ZIP_TEXTURE = 37372361,
	FA_UB_1C_TIGHT_04_TEXTURE = -808298812,
	FA_UB_1C_TIGHT_05_TEXTURE = -1193974190,
	FA_UB_2C_LONG_TEXTURE = 1375097357,
	FA_UB_2C_LONG_02_TEXTURE = 1538993169,
	FA_UB_2C_LONG_02_T_TEXTURE = 1912459969,
	FA_UB_2C_LONG_T_TEXTURE = 540531178,
	FA_UB_2C_SHORT_01_TEXTURE = 1290521513,
	FA_UB_2C_SHORT_01_T_TEXTURE = 1670354682,
	FA_UB_2C_SHORT_02_TEXTURE = -706569709,
	FA_UB_2C_SHORT_02_T_TEXTURE = 1640573091,
	FC_CA_MILITARY_CADET_TEXTURE = -1123205534,
	FC_FP_BUTTERFLY_TEXTURE = -1521231958,
	FC_FP_CLOWN_TEXTURE = 1831493726,
	FC_FP_MAKEUP_TEXTURE = -826579208,
	FC_FP_WACKY_TEXTURE = 1721673791,
	FC_FR_HEAVY_TEXTURE = 1614517856,
	FC_FR_LIGHT_TEXTURE = 1896919240,
	FC_FT_NORMAL_02_TEXTURE = 1452772367,
	FC_FT_ROUNDED_01_TEXTURE = -1091380597,
	FC_GL_PINK_SUN_MAP_TEXTURE = -1902250451,
	FC_HH_BALL_CAP_T_TEXTURE = 1399801181,
	FC_HH_COWBOY_HAT_T_TEXTURE = -1583372117,
	FC_HH_HEADBAND_T_TEXTURE = 932153073,
	FC_HH_PIGTAILS_T_TEXTURE = 1106732449,
	FC_HH_PONYTAIL_T_TEXTURE = 263891542,
	FC_HH_PRINCESS_HAT_T_TEXTURE = -847384692,
	FC_HH_WITCH_HAT_T_TEXTURE = 1975183061,
	FC_HH_WIZARD_HAT_T_TEXTURE = 1810946794,
	FC_LB_1C_PANTSTAIN_T_TEXTURE = 311893948,
	FC_LB_1C_PANTS_01_TEXTURE = 1485903723,
	FC_LB_1C_PANTS_02_TEXTURE = -1046985007,
	FC_LB_1C_SHORTS_01_TEXTURE = -1385244733,
	FC_LB_1C_SHORTS_02_TEXTURE = 879199865,
	FC_LB_1C_SKIRT_01_TEXTURE = 2113712743,
	FC_LB_1C_SKIRT_02_TEXTURE = -453647395,
	FC_LB_1C_SKIRT_PRINCESS_TEXTURE = 1736993351,
	FC_LB_1C_SKIRT_WITCH_TEXTURE = -1654782239,
	FC_LB_1C_TIGHT_01_TEXTURE = -251902972,
	FC_LB_1C_TIGHT_02_TEXTURE = 1777669566,
	FC_LB_2C_PANTS_01_TEXTURE = -1049398934,
	FC_LB_2C_PANTS_01_T_TEXTURE = -1460877955,
	FC_LB_2C_PANTS_02_T_TEXTURE = -1431667932,
	FC_LB_2C_SHORTS_01_T_TEXTURE = -1795322426,
	FC_LB_2C_SKIRT_01_TEXTURE = -467741594,
	FC_LB_2C_SKIRT_01_T_TEXTURE = -1561986949,
	FC_LB_2C_SKIRT_02_TEXTURE = 2098693596,
	FC_LB_2C_SKIRT_02_T_TEXTURE = -1599912414,
	FC_PO_PJS_TEXTURE = -402300007,
	FC_PO_SWIMSUIT_TEXTURE = -686736448,
	FC_SH_POINTY_01_TEXTURE = -1220440717,
	FC_SH_POINTY_02_TEXTURE = 776527049,
	FC_SH_POINTY_PRINCESS_01_TEXTURE = 1133368405,
	FC_SH_POINTY_WITCH_01_TEXTURE = -1400500958,
	FC_SH_SKIN_TIGHT_01_TEXTURE = -517730839,
	FC_SH_SKIN_TIGHT_02_TEXTURE = 2016238675,
	FC_SH_SNEAKER_01_TEXTURE = -391714026,
	FC_SH_SNEAKER_02_TEXTURE = 1907341996,
	FC_UB_1C_LONG_01_TEXTURE = -2130479303,
	FC_UB_1C_LONG_02_TEXTURE = 403318403,
	FC_UB_1C_LONG_PRINCESS_TEXTURE = 304277550,
	FC_UB_1C_LONG_WITCH_TEXTURE = 1626589473,
	FC_UB_1C_SHORT_01_TEXTURE = 1386842315,
	FC_UB_1C_SHORT_02_TEXTURE = -878651023,
	FC_UB_1C_SHORT_02_T_TEXTURE = -640208914,
	FC_UB_1C_SHORT_03_TEXTURE = -1129846297,
	FC_UB_1C_TIGHT_01_TEXTURE = 941131560,
	FC_UB_1C_TIGHT_02_TEXTURE = -1592666478,
	FC_UB_2C_LONG_01_TEXTURE = 1781845050,
	FC_UB_2C_LONG_01_T_TEXTURE = -1484260257,
	FC_UB_2C_LONG_02_TEXTURE = -214065792,
	FC_UB_2C_LONG_02_T_TEXTURE = -1514061306,
	FC_UB_2C_SHORT_01_TEXTURE = -884216118,
	FC_UB_2C_SHORT_01_T_TEXTURE = 1717304697,
	FC_UB_2C_SHORT_02_TEXTURE = 1380106096,
	FC_UB_2C_SHORT_02_T_TEXTURE = 1679639328,
	FC_UB_2C_SHORT_03_TEXTURE = 625315814,
	FC_UB_2C_SHORT_03_T_TEXTURE = 1709123863,
	FEDERAL_LATTICE_WINDOW_DOOR_TEXTURE = 1675156705,
	FEDERAL_LATTICE_WINDOW_DOOR_ACTION_QUEUE_TEXTURE = -184322692,
	FERN_01_ROOM_TEXTURE = -1670691797,
	FIGHTING_STRIP_01_TEXTURE = -399782793,
	FINAL_ADULT_FEMALE_NUDE_TEXTURE = 1583557018,
	FINAL_ADULT_MALE_NUDE_TEXTURE = 703761717,
	FINAL_CHILD_FEMALE_NUDE_TEXTURE = -1729234204,
	FINAL_CLIFF_01_TOP_TEXTURE = -975363813,
	FINAL_CLIFF_02_MID_TEXTURE = -586501937,
	FINAL_CLIFF_MID_WATERFALL_TEXTURE = 793690405,
	FINAL_CLIFF_TOP_WATERFALL_TEXTURE = -305233986,
	FINAL_FLOOR_TILE_01_TEXTURE = -546748232,
	FINAL_FLOOR_TILE_02_TEXTURE = 1180702978,
	FINAL_FLOOR_TILE_03_TEXTURE = 828844436,
	FINAL_FLOOR_TILE_04_TEXTURE = -1358709705,
	FINAL_FLOOR_TILE_05_TEXTURE = -670790495,
	FINAL_FLOOR_TILE_06_TEXTURE = 1091427611,
	FINAL_FLOOR_TILE_07_TEXTURE = 906685837,
	FINAL_FLOOR_TILE_08_TEXTURE = -1498025956,
	FINAL_FLOOR_TILE_09_TEXTURE = -776814454,
	FINAL_FLOOR_TILE_09_ROOM_TEXTURE = -892513247,
	FINAL_FLOOR_TILE_10_TEXTURE = -1317713553,
	FINAL_FLOOR_TILE_11_TEXTURE = -965576199,
	FINAL_FLOOR_TILE_12_TEXTURE = 1601906755,
	FINAL_FLOOR_TILE_13_TEXTURE = 679221461,
	FINAL_FLOOR_TILE_14_TEXTURE = -1239904906,
	FINAL_FLOOR_TILE_15_TEXTURE = -1054884384,
	FINAL_FLOOR_TILE_16_TEXTURE = 1477897306,
	FINAL_FLOOR_TILE_17_TEXTURE = 789699788,
	FINAL_FLOOR_TILE_18_TEXTURE = -1079066275,
	FINAL_FLOOR_TILE_19_TEXTURE = -928386613,
	FINAL_FLOOR_TILE_19_ROOM_TEXTURE = 1824153493,
	FINAL_FLOOR_TILE_20_TEXTURE = -1705502036,
	FINAL_FLOOR_TILE_21_TEXTURE = -312530374,
	FINAL_FLOOR_TILE_22_TEXTURE = 1951824768,
	FINAL_FLOOR_TILE_23_TEXTURE = 55659286,
	FINAL_FLOOR_TILE_24_TEXTURE = -1657413963,
	FINAL_FLOOR_TILE_25_TEXTURE = -365760989,
	FINAL_FLOOR_TILE_26_TEXTURE = 1933295513,
	FINAL_FLOOR_TILE_27_TEXTURE = 71077647,
	FINAL_FLOOR_TILE_28_TEXTURE = -1803316578,
	FINAL_FLOOR_TILE_29_TEXTURE = -477847032,
	FINAL_FLOOR_TILE_30_TEXTURE = -2092749843,
	FINAL_FLOOR_TILE_31_TEXTURE = -196863109,
	FINAL_FLOOR_TILE_32_TEXTURE = 1833781953,
	FINAL_FLOOR_TILE_33_TEXTURE = 441088599,
	FINAL_FLOOR_TILE_34_TEXTURE = -2077298700,
	FINAL_FLOOR_TILE_35_TEXTURE = -215359646,
	FINAL_FLOOR_TILE_36_TEXTURE = 1780518616,
	FINAL_FLOOR_TILE_37_TEXTURE = 489143886,
	FINAL_FLOOR_TILE_38_TEXTURE = -1919376417,
	FINAL_FLOOR_TILE_39_TEXTURE = -90205367,
	FINAL_FLOOR_TILE_40_TEXTURE = -872235734,
	FINAL_FLOOR_TILE_41_TEXTURE = -1157263940,
	FINAL_FLOOR_TILE_42_TEXTURE = 571268102,
	FINAL_FLOOR_TILE_43_TEXTURE = 1426844816,
	FINAL_FLOOR_TILE_44_TEXTURE = -881886925,
	FINAL_FLOOR_TILE_45_TEXTURE = -1134016091,
	FINAL_FLOOR_TILE_46_TEXTURE = 627120159,
	FINAL_FLOOR_TILE_47_TEXTURE = 1382426761,
	FINAL_FLOOR_TILE_48_TEXTURE = -1025952488,
	FINAL_FLOOR_TILE_49_TEXTURE = -1243740786,
	FINAL_FLOOR_TILE_50_TEXTURE = -719745941,
	FINAL_FLOOR_TILE_51_TEXTURE = -1575043843,
	FINAL_FLOOR_TILE_52_TEXTURE = 991423815,
	FINAL_FLOOR_TILE_53_TEXTURE = 1276173777,
	FINAL_FLOOR_TILE_54_TEXTURE = -764131214,
	FINAL_FLOOR_TILE_55_TEXTURE = -1519159068,
	FINAL_FLOOR_TILE_56_TEXTURE = 1014638942,
	FIREBRAND_SMOKE_DETECTOR_TEXTURE = 1282771947,
	FIREBRAND_SMOKE_DETECTOR_ACTION_QUEUE_TEXTURE = 50335691,
	FIREPLACE_LOG_TEXTURE = 1709410015,
	FIRE_ACTION_QUEUE_TEXTURE = 2082458760,
	FLARE1_TEXTURE = 1702921062,
	FLOOR_RUG_BY_LEOPARD_LIFE_TEXTURE = 1769553741,
	FLOOR_RUG_BY_LEOPARD_LIFE_ACTION_QUEUE_TEXTURE = 1685554748,
	FLOWERPOWER_ANARCHY_TEXTURE = 74359844,
	FLOWERPOWER_FLOWER_TEXTURE = -1878931195,
	FLOWERPOWER_PEACESIGN_TEXTURE = 1978873991,
	FLOWERPOWER_RECYCLE_TEXTURE = -449601634,
	FLUSH_FORCE_5_ACTION_QUEUE_TEXTURE = -1525905226,
	FLUSH_FORCE_5_XLT_TEXTURE = 470758490,
	FLY_FOR_PARTICLE_TEXTURE = -970183836,
	FONT_ONESTROKE_SCRIPT_24_TEXTURE = -150927626,
	FONT_SYSTEMFONT_12_TEXTURE = 1108813115,
	FOOD_ACTION_QUEUE_TEXTURE = 183347545,
	FOUNTAIN_OF_TRANQUILITY_TEXTURE = -1299510361,
	FOUNTAIN_OF_TRANQUILITY_ACTION_QUEUE_TEXTURE = -1849640901,
	FREEZE_SECRET_REFRIGERATOR_TEXTURE = -252302827,
	FREEZE_SECRET_REFRIGERATOR_02_TEXTURE = -1368904314,
	FREEZE_SECRET_REFRIGERATOR_ACTION_QUEUE_TEXTURE = 2061671094,
	FRUIT_CAKE_ACTION_QUEUE_TEXTURE = -49942828,
	FUZZY_LOGIC_DISHWASHER_TEXTURE = 1424750824,
	FUZZY_LOGIC_DISHWASHER_02_TEXTURE = -1015281947,
	FUZZY_LOGIC_DISHWASHER_ACTION_QUEUE_TEXTURE = 1376136015,
	FU_HH_AFRO_TEXTURE = -753877958,
	FU_HH_BEEHIVE_TEXTURE = -301094195,
	FU_HH_COLORED_TEXTURE = 2143151426,
	FU_HH_EGYPTIAN_TEXTURE = -823748571,
	FU_HH_EGYPTIAN_T_TEXTURE = 115065854,
	FU_HH_ELEGANT_TEXTURE = -1300349746,
	FU_HH_GEISHA_T_TEXTURE = 1658161408,
	FU_HH_HEADBAND_TEXTURE = -1531608765,
	FU_HH_HIGHLIGHTS_TEXTURE = -1256944228,
	FU_HH_LONG_TEXTURE = -972584441,
	FU_HH_LONG_02_TEXTURE = -713612083,
	FU_HH_MED_LENGTH_TEXTURE = -1606534091,
	FU_HH_MOB_BOSS_T_TEXTURE = -848509033,
	FU_HH_MOHAWK_TEXTURE = -38040767,
	FU_HH_PIGTAILS_TEXTURE = -676221915,
	FU_HH_PONYTAIL_TEXTURE = -229309501,
	FU_HH_PUNK_SPIKED_TEXTURE = -992899467,
	FU_HH_PUNK_SPIKED_T_TEXTURE = 1219764684,
	FU_HH_THEIF_T_TEXTURE = 1578085124,
	GAGMIA_SIMORE_ESPRESSO_MACHINE_00_SEARCH_TEXTURE = -173293897,
	GAGMIA_SIMORE_ESPRESSO_MACHINE_01_TEXTURE = 1301619140,
	GAGMIA_SIMORE_ESPRESSO_MACHINE_ACTION_QUEUE_TEXTURE = -916626129,
	GARDEN_LAMP_BY_LUNATECH_TEXTURE = 1125204274,
	GARDEN_LAMP_BY_LUNATECH_ACTION_QUEUE_TEXTURE = -2032101117,
	GENERIC_HEAD_ACTION_QUEUE_TEXTURE = -1168152768,
	GENERIC_RUG_01_TEXTURE = -932069645,
	GENERIC_RUG_02_TEXTURE = 1366880073,
	GIFT_CHOCOLATES_ACTION_QUEUE_TEXTURE = 267568360,
	GIFT_FLOWERS_ACTION_QUEUE_TEXTURE = -2114759280,
	GO_HERE_TEXTURE = -28851942,
	GRANDFATHER_CLOCK_TEXTURE = -988042556,
	GRANDFATHER_CLOCK_ACTION_QUEUE_TEXTURE = 203987305,
	GRANDFATHER_CLOCK_ROOM_TEXTURE = -2121132844,
	GRASS_GRID_TEXTURE = 1038804442,
	HALOGEN_HEAVEN_LAMP_BY_CONTEMPTO_TEXTURE = -1664649378,
	HALOGEN_HEAVEN_LAMP_BY_CONTEMPTO_ACTION_QUEUE_TEXTURE = -1605525634,
	HALOGEN_HEAVEN_LAMP_BY_CONTEMPTO_ROOM_TEXTURE = 569401448,
	HAMBURGER_ACTION_QUEUE_TEXTURE = 1474889824,
	HAZARD_THE_GUESS_BY_CONNOR_TIIST_TEXTURE = 1536825594,
	HAZARD_THE_GUESS_BY_CONNOR_TIIST_ACTION_QUEUE_TEXTURE = 7335304,
	HAZARD_THE_GUESS_BY_CONNOR_TIIST_ROOM_TEXTURE = 667763201,
	HEAD_IN_JAR_CURIO_TEXTURE = -287101311,
	HEAD_IN_JAR_CURIO_ACTION_QUEUE_TEXTURE = 1274450240,
	HEAD_IN_JAR_CURIO_GLASS_TEXTURE = -1458777065,
	HIGHBRAU_COAT_OF_ARMS_TEXTURE = 901898024,
	HIGHBRAU_COAT_OF_ARMS_ACTION_QUEUE_TEXTURE = 2036209049,
	HORRORWITZ_STAR_TRACK_BACKYARD_TELESCOPE_TEXTURE = -1227908772,
	HORRORWITZ_STAR_TRACK_BACKYARD_TELESCOPE_ACTION_QUEUE_TEXTURE = -2096527201,
	HORROR_CHANNEL_010000_TEXTURE = -1815367598,
	HORROR_CHANNEL_010001_TEXTURE = -456359740,
	HORROR_CHANNEL_010002_TEXTURE = 2110116222,
	HORROR_CHANNEL_010003_TEXTURE = 180543976,
	HORROR_CHANNEL_010004_TEXTURE = -1801030581,
	HORROR_CHANNEL_010005_TEXTURE = -475970339,
	HORROR_CHANNEL_010006_TEXTURE = 2057835879,
	HORROR_CHANNEL_010007_TEXTURE = 229582321,
	HORROR_CHANNEL_010008_TEXTURE = -1659881376,
	HORROR_CHANNEL_010009_TEXTURE = -367589130,
	HORROR_CHANNEL_010010_TEXTURE = -1966046957,
	HORROR_CHANNEL_010011_TEXTURE = -36195963,
	HORROR_CHANNEL_010012_TEXTURE = 1692327999,
	HORROR_CHANNEL_010013_TEXTURE = 333041833,
	HORROR_CHANNEL_010014_TEXTURE = -1916975862,
	HORROR_CHANNEL_010015_TEXTURE = -88443492,
	HOUSE01_TEXTURE = -989542964,
	HOUSE02_TEXTURE = 1544393846,
	HOUSE03_TEXTURE = 722117856,
	HOUSE04_TEXTURE = -1251069629,
	HOUSE05_TEXTURE = -1033305643,
	HOUSE06_TEXTURE = 1533038703,
	HOUSE08_TEXTURE = -1126662808,
	HOUSEC01_TEXTURE = 1583841953,
	HOUSEC02_TEXTURE = -949038309,
	HOUSEC03_TEXTURE = -1335237747,
	HOUSEC04_TEXTURE = 772634158,
	HOUSEC05_TEXTURE = 1493845688,
	HOUSEC06_TEXTURE = -1073539326,
	HOUSEC07_TEXTURE = -1224464492,
	HOUSEC08_TEXTURE = 666581509,
	HYDRONOMIC_KITCHEN_SINK_TEXTURE = 214742628,
	HYDRONOMIC_KITCHEN_SINK_ACTION_QUEUE_TEXTURE = -1260351579,
	HYDROTHERA_BATHTUB_TEXTURE = 979298098,
	HYDROTHERA_BATHTUB_ACTION_QUEUE_TEXTURE = 1590152064,
	HYGEIA_O_MATIC_TOILET_TEXTURE = -2120784311,
	HYGEIA_O_MATIC_TOILET_ACTION_QUEUE_TEXTURE = 1416251667,
	ICE_CHEST_TEXTURE = 317915674,
	ICE_CHEST_ACTION_QUEUE_TEXTURE = 32478091,
	ICON_BG_TEXTURE = 692905913,
	ICON_NEIGHBORHOOD_TEXTURE = -669725480,
	INFO_UP_TEXTURE = -1506873310,
	JADE_PLANT_TEXTURE = 2142436463,
	JADE_PLANT_ACTION_QUEUE_TEXTURE = 945236217,
	JOB_TEXTURE = 1837081202,
	JUNKER_TEXTURE = -526578011,
	JUNK_GENIE_TRASH_COMPACTOR_TEXTURE = 1875749862,
	JUNK_GENIE_TRASH_COMPACTOR_ACTION_QUEUE_TEXTURE = 490705752,
	JUSTA_BATHTUB_TEXTURE = -2009441109,
	JUSTA_BATHTUB_ACTION_QUEUE_TEXTURE = -1572011535,
	KIDSALIENS_ALIENHEAD_TEXTURE = 1841562887,
	KIDSALIENS_OCTO_CREATURE_TEXTURE = 1795521280,
	KIDSALIENS_UFO_TEXTURE = -1382244467,
	KIDSPETS_CAT_TEXTURE = -2067744332,
	KIDSPETS_DOG_TEXTURE = -1682783391,
	KIDSPETS_FISH_TEXTURE = 268543566,
	KIDSSCHOOL_BOOK_TEXTURE = -1217735224,
	KIDSSCHOOL_GLOBE_TEXTURE = 1244389650,
	KIDSSCHOOL_MATH_TEXTURE = -710380876,
	KIDSTOYS_BEAR_TEXTURE = -1105957424,
	KIDSTOYS_BUBBLES_TEXTURE = -1430073995,
	KIDSTOYS_TOP_TEXTURE = -1729910852,
	KINDERSTUFF_DRESSER_TEXTURE = 1217071111,
	KINDERSTUFF_DRESSER_ACTION_QUEUE_TEXTURE = -232515463,
	KINDERSTUFF_NIGHTSTAND_TEXTURE = -282357280,
	KINDERSTUFF_NIGHTSTAND_ACTION_QUEUE_TEXTURE = 1782706693,
	KRAFTKING_WOODWORKING_TABLE_TEXTURE = -91620075,
	KRAFTKING_WOODWORKING_TABLE_ACTION_QUEUE_TEXTURE = 675180585,
	L1_TEXTURE = 1288377036,
	L1_AND_R1_TEXTURE = -883455766,
	L2_TEXTURE = -708689034,
	L2_AND_R2_TEXTURE = -590225741,
	L2_PLAYER_TEXTURE = 368653731,
	LEISURE_BICYCLE_TEXTURE = 973209766,
	LEISURE_ROLLERBLADES_TEXTURE = -1236916578,
	LEISURE_SAILING_TEXTURE = -350212923,
	LEISURE_SNOWSKI_TEXTURE = -1722792758,
	LEISURE_SWIMING_FLIPPERS_TEXTURE = -1527393045,
	LIBRI_DI_REGINA_BOOKCASE_TEXTURE = -1246900290,
	LIBRI_DI_REGINA_BOOKCASE_ACTION_QUEUE_TEXTURE = 2097523083,
	LIGHT_LOAD_HOUSE_TEXTURE = -1257612320,
	LIGHT_LOAD_LAMP_TEXTURE = 1259393632,
	LIGHT_LOAD_MOON_TEXTURE = 822855662,
	LIGHT_LOAD_SUN_TEXTURE = -1146014223,
	LIMO_ZINE_TEXTURE = 979060604,
	LITTLEWHITEDIAMOND_TEXTURE = -695530688,
	LITTLEWHITESQUARE_TEXTURE = -1570850150,
	LITTLE_HEART_TEXTURE = -1195643863,
	LLAMARK_REFRIDGERATOR_TEXTURE = -50724348,
	LLAMARK_REFRIDGERATOR_02_TEXTURE = -412678580,
	LLAMARK_REFRIDGERATOR_A_05_ACTION_QUEUE_TEXTURE = -2133117283,
	LOCKED_ACTION_QUEUE_TEXTURE = -1079417647,
	LONDON_CUPPERTINO_DESK_TABLE_TEXTURE = -722119768,
	LONDON_CUPPERTINO_DESK_TABLE_ACTION_QUEUE_TEXTURE = -60142530,
	LONDON_MESA_DINING_DESIGN_TEXTURE = -291174719,
	LONDON_MESA_DINING_DESIGN_ACTION_QUEUE_TEXTURE = -692355519,
	LONG_01_TEXTURE = -391012062,
	LONG_03_TEXTURE = 113229838,
	LONG_04_TEXTURE = -1730456147,
	LONG_05_TEXTURE = -270768837,
	LONG_06_TEXTURE = 1993684097,
	LONG__02_TEXTURE = -1781665004,
	LOT_FENCE_01_TEXTURE = -2140514600,
	LOVE_N_HAIGHT_LAMP_ACTION_QUEUE_TEXTURE = 532808067,
	LUXIARE_LOVESEAT_ACTION_QUEUE_TEXTURE = 1252095717,
	LUXURIARE_LOVESEAT_TEXTURE = 2007726293,
	MAGIC_MYSTERY_TOY_BOX_TEXTURE = -766057033,
	MAGIC_MYSTERY_TOY_BOX_ACTION_QUEUE_TEXTURE = -1857064997,
	MAILBOX_TEXTURE = -1713759215,
	MAILBOX_ACTION_QUEUE_TEXTURE = -532983442,
	MAIN_LOGO_LOAD_SIMSPS2_TEXTURE = -175843649,
	MALE_CHILD_TEXTURE = -952392200,
	MAPLE_DOOR_FRAME_TEXTURE = 1357817149,
	MAPLE_DOOR_FRAME_ACTION_QUEUE_TEXTURE = 1017241056,
	MASTER_SUITE_TUB_TEXTURE = -845633452,
	MASTER_SUITE_TUB_ACTION_QUEUE_TEXTURE = 162174801,
	MAXIS_LOGO_BLACK_CLEAN_TEXTURE = 705153205,
	MAXIS_LOGO_SCREEN_TEXTURE = -535357129,
	MA_CA_CRIMINAL_BURGLAR_TEXTURE = 1671987813,
	MA_CA_CRIMINAL_MOBSTER_TEXTURE = -26233865,
	MA_CA_EXTREME_OUTDOORS_TEXTURE = 1046714719,
	MA_CA_EXTREME_RACECAR_DRIVER_TEXTURE = -829366581,
	MA_CA_EXTREME_SPY_TEXTURE = -1708978054,
	MA_CA_MILITARY_ASTRONAUT_TEXTURE = 644431270,
	MA_CA_MILITARY_RANGER_TEXTURE = -1758533342,
	MA_CA_MILITARY_RECRUIT_TEXTURE = -635085683,
	MA_CA_MUSICIAN_LOUNGE_SINGER_TEXTURE = -246426258,
	MA_CA_MUSICIAN_ROCKSTAR_TEXTURE = 1743092065,
	MA_CA_SLACKER_CLERK_TEXTURE = 977388551,
	MA_CA_SLACKER_LIFEGUARD_TEXTURE = 209639677,
	MA_CA_SLACKER_SLACKER_TEXTURE = -536790596,
	MA_FH_BEARD_01_TEXTURE = 287646563,
	MA_FH_BEARD_02_TEXTURE = -2010352935,
	MA_FH_GOATEE_01_TEXTURE = 36463611,
	MA_FH_GOATEE_02_TEXTURE = -1692061119,
	MA_FH_MUSTACHE_01_TEXTURE = 1389967300,
	MA_FH_MUTTONCHOPS_TEXTURE = -2050747423,
	MA_FH_SOUL_PATCH_TEXTURE = -357463015,
	MA_FT_ASIAN_01_TEXTURE = 43541321,
	MA_FT_ASIAN_02_TEXTURE = -1684983053,
	MA_FT_BLACK_01_TEXTURE = -1127437902,
	MA_FT_BLACK_02_TEXTURE = 633731080,
	MA_FT_DEFINED_CUT_TEXTURE = -884658845,
	MA_FT_NORMAL_01_TEXTURE = -268124186,
	MA_FT_NORMAL_02_TEXTURE = 1762520668,
	MA_FT_ROUNDED_TEXTURE = -820389990,
	MA_FT_ROUNDED_02_TEXTURE = -710536931,
	MA_GL_NERD_EYEMAP2_TEXTURE = -1390605668,
	MA_GL_NORMAL_EYEMAP_TEXTURE = 1143780422,
	MA_GL_NORMAL_SUNMAP_TEXTURE = -2091761728,
	MA_GL_NORMAL_SUN_02MAP_TEXTURE = 1386033521,
	MA_GL_PUNKY_SUNMAP_TEXTURE = 731469071,
	MA_HH_RECEDING_TEXTURE = -1332638620,
	MA_JW_GOLDMAP_TEXTURE = -1436252199,
	MA_JW_SILVERMAP_TEXTURE = -7748345,
	MA_LB_1C_PANTS_01_TEXTURE = 1790649874,
	MA_LB_1C_PANTS_02_TEXTURE = -206407768,
	MA_LB_1C_PANTS_03_TEXTURE = -2068494530,
	MA_LB_1C_PANTS_04_TEXTURE = 449958557,
	MA_LB_1C_PANTS_05_TEXTURE = 1842799115,
	MA_LB_1C_PANTS_06_TEXTURE = -186666063,
	MA_LB_1C_PANTS_07_TEXTURE = -2082962649,
	MA_LB_1C_PANTS_08_TEXTURE = 325557942,
	MA_LB_1C_PANTS_09_TEXTURE = 1684057632,
	MA_LB_1C_PANTS_10_TEXTURE = 78063557,
	MA_LB_1C_SHORTS_01_TEXTURE = -2071645078,
	MA_LB_1C_SHORTS_02_TEXTURE = 495740368,
	MA_LB_1C_SHORTS_03_TEXTURE = 1787516230,
	MA_LB_1C_SHORTS_04_TEXTURE = -185614107,
	MA_LB_1C_SHORTS_05_TEXTURE = -2081886093,
	MA_LB_1C_TIGHT_01_TEXTURE = -1026132611,
	MA_LB_1C_TIGHT_02_TEXTURE = 1541350599,
	MA_LB_1C_TIGHT_03_TEXTURE = 752358481,
	MA_LB_1C_TIGHT_04_TEXTURE = -1296268814,
	MA_LB_2C_PANTS_01_B_TEXTURE = -216301437,
	MA_LB_2C_PANTS_01_T_TEXTURE = 131020242,
	MA_LB_2C_PANTS_02_B_TEXTURE = -245547302,
	MA_LB_2C_PANTS_02_T_TEXTURE = 92900235,
	MA_LB_2C_PANTS_03_B_TEXTURE = -257993491,
	MA_LB_2C_PANTS_03_T_TEXTURE = 72081852,
	MA_LB_2C_SHORTS_01_B_TEXTURE = 653239582,
	MA_LB_2C_SHORTS_01_T_TEXTURE = -767881137,
	MA_LB_2C_SHORTS_02_B_TEXTURE = 615062343,
	MA_LB_2C_SHORTS_02_T_TEXTURE = -797069802,
	MA_LB_2C_TIGHT_01_B_TEXTURE = -484679736,
	MA_LB_2C_TIGHT_01_T_TEXTURE = 399043225,
	MA_LB_2C_TIGHT_02_B_TEXTURE = -514137711,
	MA_LB_2C_TIGHT_02_T_TEXTURE = 361649344,
	MA_PO_FORMAL_TEXTURE = 1365176158,
	MA_PO_NAKED_TEXTURE = -194064687,
	MA_PO_PAJAMAS_TEXTURE = 873783689,
	MA_PO_SKELETON_PLUS_TEXTURE = 2011493939,
	MA_PO_SWIMSUIT_TEXTURE = -126503578,
	MA_PO_TEPPEN_CHEF_TEXTURE = -1003294587,
	MA_SH_BOOTS_01_TEXTURE = 309391186,
	MA_SH_BOOTS_02_TEXTURE = -1954955544,
	MA_SH_CLOGS_01_TEXTURE = -932046845,
	MA_SH_CLOGS_02_TEXTURE = 1367034297,
	MA_SH_DRESS_01_TEXTURE = -1045568339,
	MA_SH_SKIN_TIGHT_01_TEXTURE = 1309146438,
	MA_SH_SNEAKERS_01_TEXTURE = 1435291536,
	MA_SH_SNEAKERS_02_TEXTURE = -863658454,
	MA_UB_1C_COLLARED_01_TEXTURE = 1768436971,
	MA_UB_1C_COLLARED_02_TEXTURE = -262052527,
	MA_UB_1C_COLLARED_03_TEXTURE = -2023336505,
	MA_UB_1C_JACKET_01_B_TEXTURE = 1554723383,
	MA_UB_1C_JACKET_01_T_TEXTURE = -1468037274,
	MA_UB_1C_JACKET_02_B_TEXTURE = 1592626286,
	MA_UB_1C_JACKET_02_T_TEXTURE = -1439090369,
	MA_UB_1C_JACKET_03_TEXTURE = 1687784907,
	MA_UB_1C_JACKET_04_B_TEXTURE = 1516302556,
	MA_UB_1C_JACKET_04_T_TEXTURE = -1363917427,
	MA_UB_1C_LONG_SLV_01_TEXTURE = -2102313554,
	MA_UB_1C_LONG_SLV_02_TEXTURE = 465071124,
	MA_UB_1C_LONG_SLV_03_TEXTURE = 1824480386,
	MA_UB_1C_LONG_SLV_04_TEXTURE = -220477151,
	MA_UB_1C_LONG_SLV_05_TEXTURE = -2049115721,
	MA_UB_1C_SHORT_SLV_01_TEXTURE = -1987026702,
	MA_UB_1C_SHORT_SLV_02_TEXTURE = 278475080,
	MA_UB_1C_SHORT_SLV_03_TEXTURE = 1738408414,
	MA_UB_1C_SHORT_SLV_04_TEXTURE = -101018499,
	MA_UB_1C_SHORT_SLV_04_B_TEXTURE = -1982080316,
	MA_UB_1C_SHORT_SLV_04_T_TEXTURE = 2098163605,
	MA_UB_1C_SHORT_SLV_05_TEXTURE = -1895979797,
	MA_UB_1C_TIGHT_01_TEXTURE = 171095633,
	MA_UB_1C_TIGHT_02_TEXTURE = -1824790549,
	MA_UB_1C_TIGHT_03_TEXTURE = -465774723,
	MA_UB_2C_LONG_SLV_01_TEXTURE = -19916683,
	MA_UB_2C_LONG_SLV_01_B_TEXTURE = -1525901075,
	MA_UB_2C_LONG_SLV_01_T_TEXTURE = 1373121980,
	MA_UB_2C_LONG_SLV_02_TEXTURE = 1742293455,
	MA_UB_2C_LONG_SLV_02_B_TEXTURE = -1488312652,
	MA_UB_2C_LONG_SLV_02_T_TEXTURE = 1402901477,
	MA_UB_2C_SHORT_SLV_01_TEXTURE = -1729295733,
	MA_UB_2C_SHORT_SLV_02_TEXTURE = 31742769,
	MC_CA_MILITARY_CADET_TEXTURE = -1887460070,
	MC_FE_HEAVY_TEXTURE = -513559708,
	MC_FE_LIGHT_TEXTURE = -263678516,
	MC_FE_MED_TEXTURE = -438653624,
	MC_FP_CLOWN_TEXTURE = 1309402906,
	MC_FP_KISS_TEXTURE = 577457610,
	MC_FP_ZANNY_TEXTURE = -931099428,
	MC_FP_ZORRO_TEXTURE = 801130999,
	MC_FT_ASIAN_TEXTURE = -789897531,
	MC_FT_BLACK_TEXTURE = -746658711,
	MC_FT_NORMAL_TEXTURE = 459981428,
	MC_FT_ROUNDED_TEXTURE = 589449477,
	MC_HH_COWBOY_HAT_T_TEXTURE = 1548278725,
	MC_HH_PIRATE_HAT_T_TEXTURE = -1854930228,
	MC_HH_WIZARD_HAT_TEXTURE = -790299315,
	MC_LB_1C_PANTS_01_TEXTURE = -316996751,
	MC_LB_1C_PANTS_02_TEXTURE = 1947357899,
	MC_LB_1C_PANTS_03_TEXTURE = 51733085,
	MC_LB_1C_PANTS_04_TEXTURE = -1653475330,
	MC_LB_1C_PANTS_05_TEXTURE = -361314456,
	MC_LB_1C_PANTS_06_TEXTURE = 1937741522,
	MC_LB_1C_PANTS_07_TEXTURE = 75015748,
	MC_LB_1C_PANTS_08_TEXTURE = -1798849579,
	MC_LB_1C_PANTS_09_TEXTURE = -473920701,
	MC_LB_1C_PANTS_10_TEXTURE = -2096692570,
	MC_LB_1C_SHORTS_01_TEXTURE = 1354343597,
	MC_LB_1C_SHORTS_02_TEXTURE = -911149801,
	MC_LB_1C_SHORTS_03_TEXTURE = -1095252607,
	MC_LB_1C_SHORTS_04_TEXTURE = 550719522,
	MC_LB_1C_TIGHT_01_TEXTURE = 1165381662,
	MC_LB_1C_TIGHT_02_TEXTURE = -595656284,
	MC_LB_1C_TIGHT_03_TEXTURE = -1418186446,
	MC_LB_2C_PANTS_01_B_TEXTURE = -154146048,
	MC_LB_2C_PANTS_01_T_TEXTURE = 35348049,
	MC_LB_2C_PANTS_02_B_TEXTURE = -192326311,
	MC_LB_2C_PANTS_02_T_TEXTURE = 6152200,
	MC_LB_2C_PANTS_03_B_TEXTURE = -179617938,
	MC_LB_2C_PANTS_03_T_TEXTURE = 27232831,
	MC_LB_2C_SHORTS_01_B_TEXTURE = 1381737455,
	MC_LB_2C_SHORTS_01_T_TEXTURE = -1500571970,
	MC_LB_2C_SHORTS_02_B_TEXTURE = 1344085430,
	MC_LB_2C_SHORTS_02_T_TEXTURE = -1530287897,
	MC_LB_2C_TIGHT_01_B_TEXTURE = -423087029,
	MC_LB_2C_TIGHT_01_T_TEXTURE = 303857946,
	MC_LB_2C_TIGHT_02_B_TEXTURE = -460420590,
	MC_LB_2C_TIGHT_02_T_TEXTURE = 274349891,
	MC_LB_COWBOY_TEXTURE = 1204952562,
	MC_LB_COWBOY_T_TEXTURE = 1433431741,
	MC_PO_FORMAL_TEXTURE = 154293919,
	MC_PO_NAKED_TEXTURE = -258269460,
	MC_PO_PAJAMAS_TEXTURE = -667975914,
	MC_PO_SWIMSUIT_TEXTURE = -1742143443,
	MC_SH_BOOTS_01_TEXTURE = 1915509273,
	MC_SH_BOOTS_02_TEXTURE = -349893725,
	MC_SH_CLOGS_01_TEXTURE = -1473335992,
	MC_SH_CLOGS_02_TEXTURE = 824704242,
	MC_SH_DRESS_01_TEXTURE = -1578020378,
	MC_SH_SKIN_TIGHT_01_TEXTURE = 1272157893,
	MC_SH_SNEAKERS_01_TEXTURE = -768808205,
	MC_SH_SNEAKERS_02_TEXTURE = 1260763977,
	MC_UB_1C_COLLARED_01_TEXTURE = 500970010,
	MC_UB_1C_COLLARED_02_TEXTURE = -2066390112,
	MC_UB_1C_COLLARED_03_TEXTURE = -204319946,
	MC_UB_1C_JACKET_01_B_TEXTURE = 673133766,
	MC_UB_1C_JACKET_01_T_TEXTURE = -590642793,
	MC_UB_1C_JACKET_02_B_TEXTURE = 710511263,
	MC_UB_1C_JACKET_02_T_TEXTURE = -561168434,
	MC_UB_1C_JACKET_03_TEXTURE = -1331356404,
	MC_UB_1C_JACKET_04_B_TEXTURE = 785708589,
	MC_UB_1C_JACKET_04_T_TEXTURE = -637516932,
	MC_UB_1C_LONG_SLV_01_TEXTURE = -167429281,
	MC_UB_1C_LONG_SLV_01_T_TEXTURE = -1663789005,
	MC_UB_1C_LONG_SLV_02_TEXTURE = 1863084773,
	MC_UB_1C_LONG_SLV_03_TEXTURE = 403397235,
	MC_UB_1C_LONG_SLV_04_TEXTURE = -2039492656,
	MC_UB_1C_LONG_SLV_05_TEXTURE = -244777146,
	MC_UB_1C_SHORT_SLV_01_TEXTURE = 1130239614,
	MC_UB_1C_SHORT_SLV_02_TEXTURE = -631814204,
	MC_UB_1C_SHORT_SLV_03_TEXTURE = -1387235502,
	MC_UB_1C_SHORT_SLV_04_B_TEXTURE = -1484057788,
	MC_UB_1C_SHORT_SLV_04_T_TEXTURE = 1398777365,
	MC_UB_1C_SHORT_SLV_05_TEXTURE = 1144246887,
	MC_UB_1C_TIGHT_01_TEXTURE = -1919773902,
	MC_UB_1C_TIGHT_02_TEXTURE = 345752200,
	MC_UB_1C_TIGHT_03_TEXTURE = 1671229982,
	MC_UB_2C_LONG_SLV_01_B_TEXTURE = 1103665552,
	MC_UB_2C_LONG_SLV_01_T_TEXTURE = -1256444735,
	MC_UB_2C_LONG_SLV_02_B_TEXTURE = 1133389769,
	MC_UB_2C_LONG_SLV_02_T_TEXTURE = -1218801000,
	MC_UB_2C_SHORT_SLV_01_TEXTURE = 1378057223,
	MC_UB_2C_SHORT_SLV_02_TEXTURE = -886428227,
	MC_UB_2C_SHORT_SLV_02_T_TEXTURE = 71860515,
	MC_UB_COWBOY_TEXTURE = 1202842072,
	MC_UB_COWBOY_T_TEXTURE = -2134141709,
	MEDICINE_CABINET_TEXTURE = -860737754,
	MEDICINE_CABINET_ACTION_QUEUE_TEXTURE = 1286366364,
	MEET_MARCO_TEXTURE = -2043674472,
	MEET_MARCO_ACTION_QUEUE_TEXTURE = -571867222,
	MEMORYCARD_LOAD_SCREEN_TEXTURE = -1019991247,
	MEMORYCARD_LOAD_SCREEN_02_TEXTURE = -44215980,
	MENUBEVEL_B___R_TEXTURE = 1099240078,
	MENUBEVEL_RIGHT_TEXTURE = -1430102492,
	MENUBEVEL_T___L_TEXTURE = 1412058575,
	MENUICON__BUDGET_TEXTURE = 1554416462,
	MENUICON__BUILD_MENU_DOOR_TEXTURE = 1554645435,
	MENUICON__BUILD_MENU_FIREPLACE_TEXTURE = 1849748447,
	MENUICON__BUILD_MENU_FLOOR_TEXTURE = -1668182078,
	MENUICON__BUILD_MENU_PLANT_TEXTURE = -1982376802,
	MENUICON__BUILD_MENU_WALLNFENCE_TEXTURE = -282647568,
	MENUICON__BUILD_MENU_WALLPAPER_TEXTURE = 754394072,
	MENUICON__BUILD_MENU_WATER_TEXTURE = -639152842,
	MENUICON__BUILD_MENU_WINDOW_TEXTURE = 420782879,
	MENUICON__BUILD_MODE_TEXTURE = -2031516185,
	MENUICON__BUY_MENU_APPLIANCES_TEXTURE = -1482412187,
	MENUICON__BUY_MENU_DECORATIVE_TEXTURE = -1440744452,
	MENUICON__BUY_MENU_ELECTRONICS_TEXTURE = -1598403026,
	MENUICON__BUY_MENU_LIGHTING_TEXTURE = 1232352795,
	MENUICON__BUY_MENU_MISCELLANEOUS_TEXTURE = -88813329,
	MENUICON__BUY_MENU_PLUMBING_TEXTURE = -1009510021,
	MENUICON__BUY_MENU_SEATING_TEXTURE = 1134758172,
	MENUICON__BUY_MENU_SURFACES_TEXTURE = 868540834,
	MENUICON__BUY_MODE_TEXTURE = -215062482,
	MENUICON__DISK_TEXTURE = 1793460482,
	MENUICON__DONE_TEXTURE = 1992242347,
	MENUICON__EXIT_TEXTURE = -224702450,
	MENUICON__FAMILY_ADD_TEXTURE = 1288102648,
	MENUICON__FAMILY_CHANGE_NAME_TEXTURE = -1636227318,
	MENUICON__FAMILY_DELETE_TEXTURE = 1559297877,
	MENUICON__FAMILY_EDIT_TEXTURE = 937570230,
	MENUICON__FAMILY_MAIN_TEXTURE = 167722184,
	MENUICON__FENCE_TEXTURE = -689861820,
	MENUICON__FLOORS_TEXTURE = -399314137,
	MENUICON__LEFT_ARROW_TEXTURE = 66663410,
	MENUICON__LIGHTING_LOAD_TEXTURE = 639972566,
	MENUICON__NEIGHBORHOOD_TEXTURE = 563242833,
	MENUICON__OPTIONS_CONTROLLER_TEXTURE = 685675725,
	MENUICON__OPTIONS_DISPLAY_TEXTURE = -331116604,
	MENUICON__OPTIONS_GAMEPLAY_TEXTURE = -522153397,
	MENUICON__OPTIONS_MAIN_TEXTURE = -1255512863,
	MENUICON__OPTIONS_SOUND_TEXTURE = 1580766794,
	MENUICON__RIGHT_ARROW_TEXTURE = 605031556,
	MENUICON__SELECT_TEXTURE = 1688641269,
	MENUICON__SIM_BODY_TEXTURE = 929342389,
	MENUICON__SIM_HEAD_TEXTURE = 1262444187,
	MENUICON__SIM_MAIN_TEXTURE = 1407477091,
	MENUICON__SIM_PERSONALITY_TEXTURE = 1580087523,
	MENUICON__TO_DO_LIST_TEXTURE = -1521908452,
	MENUICON__WALLS_TEXTURE = 1959518161,
	MENU_D_PAD_INVERSE_1_TEXTURE = -905999463,
	MENU_GLOW_01_TEXTURE = -629067333,
	MENU_GLOW_02_TEXTURE = 1133010945,
	MENU_TIME_MONEY_WINDOW_INVERSE_TEXTURE = 653851785,
	MESQUITE_DESK_TABLE_TEXTURE = -36534249,
	MESQUITE_DESK_TABLE_ACTION_QUEUE_TEXTURE = 1304982175,
	METALFENCE_01_TEXTURE = 1256090342,
	METAL_FENCE_TYPE1_TEXTURE = -1266272118,
	METAL_FENCE_TYPE2_TEXTURE = 764373296,
	MICROSCOTCH_CORVETTA_Q628_1500JA_TEXTURE = 450132433,
	MICROSCOTCH_CORVETTA_Q628_1500JA_ACTION_QUEUE_TEXTURE = 308897742,
	MILITARY_JEEP_TEXTURE = 1837017856,
	MIRROR_TEXTURE = -1419780916,
	MODERN_MISSION_BED_TEXTURE = 1119873414,
	MODERN_MISSION_BED_ACTION_QUEUE_TEXTURE = -747044037,
	MODERN_MISSION_END_TABLE_TEXTURE = 1768719868,
	MODERN_MISSION_END_TABLE_ACTION_QUEUE_TEXTURE = 1602899597,
	MODESTO_TILE_FIREPLACE_ACTION_QUEUE_TEXTURE = 194092111,
	MODESTO_TILE_FIREPLACE_BRICK_TEXTURE = 1185615393,
	MODESTO_TILE_FIREPLACE_NEW_TEXTURE = -187539199,
	MONEYWELL_COMPUTER_TEXTURE = -475324298,
	MONEYWELL_COMPUTER_ACTION_QUEUE_TEXTURE = 1549758095,
	MONKEY_BUTLER_HUT_TEXTURE = 1318759385,
	MONKEY_BUTLER_HUT_ACTION_QUEUE_TEXTURE = -869528821,
	MONOCHROME_TV_TEXTURE = 1008232004,
	MONOCHROME_TV_ACTION_QUEUE_TEXTURE = -1940395843,
	MONOCHROME_TV_SCREEN_00_TEXTURE = -1584053274,
	MONOCHROME_TV_SCREEN_01_TEXTURE = -695045264,
	MONOCHROME_TV_SCREEN_02_TEXTURE = 1335567050,
	MONOCHROME_TV_SCREEN_03_TEXTURE = 949752412,
	MONOCHROME_TV_SCREEN_04_TEXTURE = -1493661697,
	MONOCHROME_TV_SCREEN_05_TEXTURE = -771770519,
	MONOCHROME_TV_SCREEN_06_TEXTURE = 1224140499,
	MONOCHROME_TV_SCREEN_07_TEXTURE = 1072813637,
	MONOCHROME_TV_SCREEN_08_TEXTURE = -1353790508,
	MONTICELLO_DOOR_TEXTURE = -428857615,
	MONTICELLO_DOOR_ACTION_QUEUE_TEXTURE = -1540600677,
	MONTICELLO_DOOR_ROOM_TEXTURE = -1242072831,
	MOOD_TEXTURE = 900481858,
	MOVE_QUEUE_TEXTURE = -1077118781,
	MOVE_TOOL_TEXTURE = -1416088690,
	MR_REGULAR_JOE_COFFEE_TEXTURE = 1462182578,
	MR_REGULAR_JOE_COFFEE_ACTION_QUEUE_TEXTURE = -1747148255,
	MSMALL_ROUND_CURSOR_WITHOUT_X_TEXTURE = 1351413280,
	MSMALL_ROUND_CURSOR_WITHOUT_X__WIRE_TEXTURE = 176690109,
	MSMALL_ROUND_CURSOR_WITH_X_TEXTURE = 913977319,
	MSMALL_ROUND_CURSOR_WITH_X__WIRE_TEXTURE = 1028063795,
	MULBERRY_TREE_TEXTURE = 292676034,
	MULBERRY_TREE_ACTION_QUEUE_TEXTURE = 163427525,
	MUSIC_NOTE_PARTICLE_TEXTURE = 2111327258,
	MU_HH_CLEAN_CUT_TEXTURE = -1741802355,
	MU_HH_HEADBAND_T_TEXTURE = 197977841,
	MU_HH_MED_LENGTH_01_TEXTURE = 754736885,
	MU_HH_MED_LENGTH_02_TEXTURE = -1242230961,
	MU_HH_MED_LENGTH_03_TEXTURE = -1024311335,
	MU_HH_MED_LENGTH_04_TEXTURE = 1553377914,
	MU_HH_MOHAWK_TEXTURE = -1943457969,
	MU_HH_MULLET_TEXTURE = -734013106,
	MU_HH_PONYTAIL_TEXTURE = -1116915666,
	MU_HH_PONY_TAIL_TEXTURE = 309375360,
	MU_HH_STOCKING_CAP_T_TEXTURE = 2024398854,
	NAPOLEAN_SLEIGH_BED_TEXTURE = 406894218,
	NAPOLEAN_SLEIGH_BED_ACTION_QUEUE_TEXTURE = -1289618794,
	NARCISCO_FLOOR_MIRROR_TEXTURE = -958048262,
	NARCISCO_FLOOR_MIRROR_ACTION_QUEUE_TEXTURE = 454516837,
	NARCISCO_NEW_FLOOR_MIRROR_TEXTURE = -1667393499,
	NARCISCO_WALL_MIRROR_TEXTURE = 173745944,
	NARCISCO_WALL_MIRROR_ACTION_QUEUE_TEXTURE = -1629089735,
	NASTURTIUM_00_SEARCH_TEXTURE = 345553542,
	NASTURTIUM_01_TEXTURE = 310658188,
	NASTURTIUM_02_TEXTURE = -1953688266,
	NASTURTIUM_03_TEXTURE = -58055264,
	NASTURTIUM_ACTION_QUEUE_TEXTURE = 927485563,
	NASTURTIUM_ALL_TEXTURE = -2032751451,
	NEIGHBORHOOD_LOAD_SCREEN_TEXTURE = -1200374634,
	NEIGHBOR_CAR_BLACK_TEXTURE = -1175534447,
	NEIGHBOR_CAR_BLUE_TEXTURE = 1085774459,
	NEIGHBOR_CAR_GOLD_TEXTURE = -1725411938,
	NEIGHBOR_CAR_GREEN_TEXTURE = -521039720,
	NEIGHBOR_CAR_LIGHTBLUE_TEXTURE = 574380619,
	NEIGHBOR_CAR_RED_TEXTURE = -1062251198,
	NEIGHBOR_CAR_WHITE_TEXTURE = 1923396381,
	NEKKID_CENSORSHIP_BAR_TEXTURE = 1649194276,
	NEONGREEN_TEXTURE = -136727118,
	NEWSPAPER_ACTION_QUEUE_TEXTURE = -8551449,
	NEW_CURSOR_01_TEXTURE = 1863522633,
	NEW_CURSOR_03_TEXTURE = -2128775067,
	NEW_CURSOR_03_BUILDMODE_TEXTURE = 2000452066,
	NEW_CURSOR_BUYMODE_TEXTURE = 526379910,
	NEW_CURSOR_ZTEST_ZWRITE_OFF_TEXTURE = 82541599,
	NOTHING_TEXTURE = 493646029,
	NPC_FIREFIGHTER_TEXTURE = 542255949,
	NPC_FIREFIGHTER_ACTION_QUEUE_TEXTURE = -1401195450,
	NPC_GARDENER_TEXTURE = -236245840,
	NPC_GARDENER_ACTION_QUEUE_TEXTURE = 289669205,
	NPC_HANDYMAN_TEXTURE = 876295113,
	NPC_HANDYMAN_ACTION_QUEUE_TEXTURE = -1017107990,
	NPC_MAID_TEXTURE = 21221387,
	NPC_MAID_ACTION_QUEUE_TEXTURE = 1273693135,
	NPC_MAIL_CARRIER_TEXTURE = -169278974,
	NPC_MAIL_CARRIER_ACTION_QUEUE_TEXTURE = 1988914299,
	NPC_MONKEY_BUTLER_TEXTURE = 1642686160,
	NPC_MONKEY_BUTLER_ACTION_QUEUE_TEXTURE = 1545909426,
	NPC_PAPERGIRL_TEXTURE = 1414048478,
	NPC_PAPERGIRL_ACTION_QUEUE_TEXTURE = 1296367975,
	NPC_PIZZA_GUY_TEXTURE = 1269994351,
	NPC_PIZZA_GUY_ACTION_QUEUE_TEXTURE = 59374018,
	NPC_POLICE_OFFICER_TEXTURE = 994415533,
	NPC_POLICE_OFFICER_ACTION_QUEUE_TEXTURE = 679677762,
	NPC_REAPER_TEXTURE = -183589130,
	NPC_REAPER_ACTION_QUEUE_TEXTURE = -648714691,
	NPC_REPOMAN_TEXTURE = 759903044,
	NPC_REPOMAN_ACTION_QUEUE_TEXTURE = 29332562,
	NPC_SOCIAL_WORKER_TEXTURE = -793679215,
	NPC_SOCIAL_WORKER_ACTION_QUEUE_TEXTURE = -1703121541,
	NPC_THIEF_TEXTURE = -745727416,
	NPC_THIEF_ACTION_QUEUE_TEXTURE = 1493472985,
	NPC_THIEF_ROOM_TEXTURE = 233862728,
	NULL_TEXTURE = 324932091,
	NUMICA_COUNTER_ACTION_QUEUE_TEXTURE = 4024935,
	NUMICA_COUNTER_FACE_TEXTURE = -2094946512,
	NUMICA_COUNTER_SIDE_TEXTURE = -1514879006,
	NUMICA_COUNTER_TOP_TEXTURE = -120087494,
	NUMICA_FOLDING_CARD_TABLE_TEXTURE = 1545157711,
	NUMICA_FOLDING_CARD_TABLE_ACTION_QUEUE_TEXTURE = -1380237629,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_TEXTURE = -1641335688,
	OCD_SYSTEMS_SIMRAILROAD_TOWN_ACTION_QUEUE_TEXTURE = -571371765,
	OCEAN_TERRAIN_TEXTURE = -199559931,
	OLD_MOVIE_PROP_TEXTURE = 1281231191,
	OLD_MOVIE_PROP_ACTION_QUEUE_TEXTURE = 401115108,
	OPTIONS_SCREEN_TEXTURE = -1261984386,
	OS_TEXTURE = -1000717957,
	OUTDOOR_TRASH_CAN_TEXTURE = -1376759031,
	OUTDOOR_TRASH_CAN_ACTION_QUEUE_TEXTURE = 1239677257,
	OVAL_GLASS_SCONCE_TEXTURE = -1565027672,
	OVAL_GLASS_SCONCE_02_ROOM_TEXTURE = -617647415,
	OVAL_GLASS_SCONCE_ACTION_QUEUE_TEXTURE = 1108905392,
	OVAL_GLASS_SCONCE_ALPHA_ROOM_TEXTURE = -1168547641,
	OVAL_GLASS_SCONCE_ROOM_TEXTURE = 303105970,
	OVERHEAD_HOUSE01_TEXTURE = -73908195,
	OVERHEAD_HOUSE02_TEXTURE = 1653674407,
	OVERHEAD_HOUSE03_TEXTURE = 362160433,
	OVERHEAD_HOUSE04_TEXTURE = -1947028334,
	OVERHEAD_HOUSE05_TEXTURE = -51018748,
	OVERHEAD_HOUSE06_TEXTURE = 1711068606,
	PARQUE_FRESCO_DEL_AIRE_BENCH_TEXTURE = 2107041810,
	PARQUE_FRESCO_DEL_AIRE_BENCH_ACTION_QUEUE_TEXTURE = -132002072,
	PARTICLE_ABDUCTION_TEXTURE = -609456227,
	PARTICLE_BUBBLE_TEXTURE = 763608004,
	PARTICLE_DAISY_TEXTURE = -330029842,
	PARTICLE_DIRTPUFF_TEXTURE = 133078983,
	PARTICLE_ELECTRICZAP_TEXTURE = -61541142,
	PARTICLE_EXTINGUISHER_TEXTURE = -142835428,
	PARTICLE_FIREBALL_ADDITIVE_TEXTURE = 1797095305,
	PARTICLE_FIREBALL_NORMAL_TEXTURE = 620615353,
	PARTICLE_FLAME01_TEXTURE = -1925922465,
	PARTICLE_FLAME02_TEXTURE = 339579109,
	PARTICLE_FLAME03_TEXTURE = 1664786547,
	PARTICLE_FLAME04_TEXTURE = -44157488,
	PARTICLE_FLAME05_TEXTURE = -1973877434,
	PARTICLE_FLAME06_TEXTURE = 324031740,
	PARTICLE_FLAME07_TEXTURE = 1683448938,
	PARTICLE_FLAME08_TEXTURE = -186091013,
	PARTICLE_FLAME09_TEXTURE = -2081470099,
	PARTICLE_FLAME10_TEXTURE = -483868536,
	PARTICLE_FLAME11_TEXTURE = -1808797666,
	PARTICLE_FLAME12_TEXTURE = 220635556,
	PARTICLE_FLAME13_TEXTURE = 2049020210,
	PARTICLE_FLAME14_TEXTURE = -465238895,
	PARTICLE_FLAME15_TEXTURE = -1824377849,
	PARTICLE_FLAME16_TEXTURE = 172713405,
	PARTICLE_FLARE_TEXTURE = 1744278501,
	PARTICLE_HEART_TEXTURE = -813743364,
	PARTICLE_LEAF_BIRCH_TEXTURE = -1848777381,
	PARTICLE_REPOZESSER_TEXTURE = -91164939,
	PARTICLE_RESURRECTION_TEXTURE = 1742327235,
	PARTICLE_RESURRECTION_B_TEXTURE = -517329279,
	PARTICLE_ROCK_TEXTURE = -1361842901,
	PARTICLE_SPARK_TEXTURE = 847269431,
	PARTICLE_SPLASH_01_TEXTURE = -969567195,
	PARTICLE_SPLASH_02_TEXTURE = 1597818271,
	PARTICLE_SPLASH_03_TEXTURE = 675017993,
	PARTICLE_SPLASH_04_TEXTURE = -1235263318,
	PARTICLE_SPLASH_05_TEXTURE = -1051176900,
	PARTICLE_SPLASH_06_TEXTURE = 1481703814,
	PARTICLE_SPLASH_07_TEXTURE = 794177808,
	PARTICLE_SPLASH_08_TEXTURE = -1075237759,
	PARTICLE_SPLASH_09_TEXTURE = -923919337,
	PARTICLE_SPLASH_10_TEXTURE = -1473669646,
	PARTICLE_SPLASH_11_TEXTURE = -550591132,
	PARTICLE_SPLASH_12_TEXTURE = 1177023710,
	PARTICLE_STAR_TEXTURE = 1346440349,
	PARTICLE_STEAM_TEXTURE = 845649179,
	PARTICLE_TEPPENYAKI_TABLE_SHRIMP_TEXTURE = -17731010,
	PARTICLE_WATER_TEXTURE = 1419810240,
	PARTICLE_WOOD_CHIP_TEXTURE = -1867046652,
	PAUSE_TEXTURE = 550391901,
	PERSONALITY_TEXTURE = 1825309254,
	PICKETFENCE_01_TEXTURE = -1084022442,
	PICKET_FENCE_ACTION_QUEUE_TEXTURE = -345709462,
	PICTURE_FRAME_MAROON_ROOM_TEXTURE = 1226288345,
	PIEMENU_C_TEXTURE = 1411746479,
	PIEMENU_L_TEXTURE = -996501698,
	PIEMENU_R_TEXTURE = 1049995869,
	PINEGULCHER_DRESSER_TEXTURE = 110326991,
	PINEGULCHER_DRESSER_ACTION_QUEUE_TEXTURE = 13017408,
	PINE_GULCHER_END_TABLE_TEXTURE = -1059394112,
	PINE_GULCHER_END_TABLE_ACTION_QUEUE_TEXTURE = 241472884,
	PINE_TERRAIN_TEXTURE = 411326957,
	PINE_TREE_TEXTURE = -209441397,
	PINE_TREE_ACTION_QUEUE_TEXTURE = -1383551883,
	PINE_TREE_ROOM_TEXTURE = 1424767862,
	PINK_FLAMINGO_TEXTURE = 700850019,
	PINK_FLAMINGO_ACTION_QUEUE_TEXTURE = 1729599332,
	PIXELS_01_TEXTURE = 1088813649,
	PIXELS_02_TEXTURE = -638800917,
	PIXELS_03_TEXTURE = -1360290947,
	PIZZA_BOX_ACTION_QUEUE_TEXTURE = -2128997127,
	PIZZA_SLICE_ACTION_QUEUE_TEXTURE = -1488411881,
	PLANTER_POT__02_ROOM_TEXTURE = -451322508,
	PLANTER_POT__03_ROOM_TEXTURE = 776310481,
	PLATE_GLASS_WINDOW_TEXTURE = 849102219,
	PLATE_GLASS_WINDOW_ACTION_QUEUE_TEXTURE = 10417810,
	PLATE_OF_FOOD_EMPTY__TEXTURE = 918063094,
	PLATE_OF_FOOD_EMPTY__ACTION_QUEUE_TEXTURE = 2121789640,
	PLATE_OF_FOOD_FULL__TEXTURE = 418255371,
	PLATE_OF_FOOD_HALF_EMPTY__TEXTURE = -945790068,
	PLATE_OF_FOOD_SCRAPS_EMPTY__TEXTURE = -372615174,
	PLAY_TEXTURE = 1746678542,
	PLAYER1_LINE_TEXTURE = 1390588579,
	PLAYER2_LINE_TEXTURE = -730415091,
	PLAYERSTATS_BOTTOM_TEXTURE = -196132284,
	PLAYERSTATS_TOP_TEXTURE = -1660694404,
	PLAYER_1_BG_TEXTURE = -58077046,
	PLAYER_2_BG_TEXTURE = -298025116,
	PLAYX2_TEXTURE = -633360217,
	PLAYX3_TEXTURE = -1388806095,
	POLITICS_ABE_LINCOLN_TEXTURE = -820714589,
	POLITICS_CAPITAL_BUILDING_TEXTURE = -119487230,
	POLITICS_DONKEY_TEXTURE = 1370376523,
	POLITICS_ELEPHANT_TEXTURE = 1061338507,
	POLITICS_UNCLE_SAM_HAT_TEXTURE = 1281040030,
	POLYSHADOW_TEXTURE = -1484341978,
	POOL_ACTION_QUEUE_TEXTURE = -1982752486,
	POOL_BOTTOM_TEXTURE = 510240334,
	POOL_I_ACTION_QUEUE_TEXTURE = -1336652390,
	POOL_LADDER_01_TEXTURE = 1535437964,
	POOL_LADDER_ACTION_QUEUE_TEXTURE = -1180213723,
	POOL_LARGE_ACTION_QUEUE_TEXTURE = -617815422,
	POOL_LINING_02_TEXTURE = 428965039,
	POOL_L_ACTION_QUEUE_TEXTURE = 888611831,
	POOL_MEDIUM_ACTION_QUEUE_TEXTURE = 417553655,
	POOL_SMALL_ACTION_QUEUE_TEXTURE = 698720625,
	POOL_STOP_SIGN_ACTION_QUEUE_TEXTURE = -182990460,
	POOL_WATER_01_TEXTURE = 440097909,
	POOL_WATER_02_TEXTURE = -2093871665,
	POOL_WAVE_ENV_TEXTURE = -700275834,
	POOL_WAVE_WATER_TEXTURE = 712213088,
	POPUP_BOX_BG_BC_TEXTURE = 1344628705,
	POPUP_BOX_BG_BL_TEXTURE = -1063617936,
	POPUP_BOX_BG_BR_TEXTURE = 982861587,
	POPUP_BOX_BG_ML_TEXTURE = 1191339711,
	POPUP_BOX_BG_MR_TEXTURE = -1123197988,
	POPUP_BOX_BG_TC_TEXTURE = 1287508534,
	POPUP_BOX_BG_TL_TEXTURE = -603795545,
	POPUP_BOX_BG_TR_TEXTURE = 638448324,
	PORCINA_REFRIGERATOR_ACTION_QUEUE_TEXTURE = -1404782085,
	PORCINA_REFRIGERATOR_MODEL_P1GS_TEXTURE = 1197866826,
	PORCINA_REFRIGERATOR_MODEL_P1GS_02_TEXTURE = 1556199192,
	PORTRAIT_GRID_BY_PAYNE_A_PITCHER_TEXTURE = -1443520646,
	PORTRAIT_GRID_BY_PAYNE_A_PITCHER_ACTION_QUEUE_TEXTURE = 1674539178,
	POSEIDONS_ADVENTURE_AQUARIUM_TEXTURE = -1739123228,
	POSEIDONS_ADVENTURE_AQUARIUM_ACTION_QUEUE_TEXTURE = 697602777,
	POSITIVE_POTENTIAL_MICROWAVE_TEXTURE = -592645282,
	POSITIVE_POTENTIAL_MICROWAVE_ACTION_QUEUE_TEXTURE = 784588093,
	POSTURE_PLUS_OFFICE_CHAIR_TEXTURE = -257248790,
	POSTURE_PLUS_OFFICE_CHAIR_ACTION_QUEUE_TEXTURE = 686129121,
	PRIVACY_WINDOW_TEXTURE = 1642731377,
	PRIVACY_WINDOW_ACTION_QUEUE_TEXTURE = -1263818673,
	PROGRESS_00_TEXTURE = 1593844827,
	PROGRESS_01_TEXTURE = 671552717,
	PROGRESS_02_TEXTURE = -1324464777,
	PROGRESS_03_TEXTURE = -972458527,
	PROGRESS_04_TEXTURE = 1483595842,
	PROGRESS_05_TEXTURE = 795529428,
	PROGRESS_06_TEXTURE = -1234992786,
	PROGRESS_07_TEXTURE = -1050365448,
	PROGRESS_08_TEXTURE = 1373351017,
	PROGRESS_09_TEXTURE = 651992319,
	PROGRESS_10_TEXTURE = 1176179994,
	PROGRESS_REPAIR_01_TEXTURE = 528915994,
	PROGRESS_REPAIR_02_TEXTURE = -2037395552,
	PROGRESS_REPAIR_03_TEXTURE = -242680010,
	PROGRESS_REPAIR_04_TEXTURE = 1877764757,
	PROGRESS_REPAIR_05_TEXTURE = 418077187,
	PROGRESS_REPAIR_06_TEXTURE = -2115892295,
	PROGRESS_REPAIR_07_TEXTURE = -152749265,
	PROGRESS_REPAIR_08_TEXTURE = 1717184190,
	PROGRESS_REPAIR_09_TEXTURE = 291313192,
	PROGRESS_REPAIR_10_TEXTURE = 1905958861,
	PROP_ABDUCTION_RINGS_TEXTURE = -1109591609,
	PROP_BABY_BOTTLE_TEXTURE = 803880555,
	PROP_BABY_CLOSED_TEXTURE = -2021336358,
	PROP_BABY_OPEN_TEXTURE = 160703883,
	PROP_BAG_FISH_TEXTURE = -1903231058,
	PROP_BBALL_TEXTURE = 1767536064,
	PROP_BBQ_SPATULA_TEXTURE = -1478611984,
	PROP_BILLIARDS_TEXTURE = -1347204436,
	PROP_BILLS_TEXTURE = 998992999,
	PROP_BOOK_TEXTURE = 1541563783,
	PROP_BUBBLES_TEXTURE = 1821158806,
	PROP_CHILD_TEDDYBEAR_TEXTURE = 1289490867,
	PROP_CHILD_TOYCAR_TEXTURE = -1210786364,
	PROP_CHILD_TOYDOLL_TEXTURE = 1927158318,
	PROP_CHILD_TOYPLANE_TEXTURE = -1255414214,
	PROP_COFFEEPOT_TEXTURE = 1338689808,
	PROP_COFFEE_MUG_TEXTURE = 1706955882,
	PROP_DUSTPAN_TEXTURE = 905501972,
	PROP_DUSTPANASH_TEXTURE = -78171339,
	PROP_ESPRESSO_CUP_TEXTURE = -1723614307,
	PROP_GIFT_BOX_TEXTURE = -1819678764,
	PROP_GIFT_FLOWERS_TEXTURE = 1575455884,
	PROP_GNOME_TOOLS_TEXTURE = -1369355222,
	PROP_HANDBROOM_TEXTURE = -1429383896,
	PROP_HOBOSTICK_TEXTURE = 730901192,
	PROP_JUGGLE_TEXTURE = 1477753749,
	PROP_KNIFE_TEXTURE = -1547916897,
	PROP_MONEY_TEXTURE = -1373429165,
	PROP_MOP_TEXTURE = -1242193894,
	PROP_NIGHTSTICK_TEXTURE = -1648101202,
	PROP_PAINTING_TEXTURE = 1113192483,
	PROP_PLUNGER_TEXTURE = 1531992191,
	PROP_REAPER_SCYTHE_TEXTURE = 2101101156,
	PROP_REMOTE_TEXTURE = 885294436,
	PROP_RINGBOX_TEXTURE = -355732861,
	PROP_SAND_BOX_SHOVEL_TEXTURE = 534300973,
	PROP_SCREWDRIVER_TEXTURE = 1301481635,
	PROP_SCRUBBRUSH_TEXTURE = -2088983618,
	PROP_SODA_CAN_TEXTURE = -2030721490,
	PROP_SPONGE_TEXTURE = -1648579299,
	PROP_SPOON_TEXTURE = 24595203,
	PROP_TOOTHSTUFF_TEXTURE = -819958522,
	PROP_TRASHBAG_TEXTURE = 1963244253,
	PROP_TUMBLER_TEXTURE = -1646943451,
	PROP_UTENSILS_TEXTURE = -39449837,
	PROP_WATERINGCAN_TEXTURE = 1263278991,
	PROP_WINE_BOTTLE_TEXTURE = 784122214,
	PROP_WRENCH_TEXTURE = 160294326,
	PROP_YOYO_TEXTURE = -955267881,
	PYROTORRE_GAS_RANGE_ACTION_QUEUE_TEXTURE = -1998610677,
	QUEEN_VIVANCO_ROSES_TEXTURE = 59846215,
	QUEEN_VIVANCO_ROSES_ACTION_QUEUE_TEXTURE = -1834575918,
	R1_TEXTURE = -1735774957,
	R2_TEXTURE = 25394345,
	R2_PLAYER_TEXTURE = 1912319040,
	RED_TEXTURE = 1824922885,
	REFLECT_TEST_TEXTURE = 1373949335,
	REFLECT_TEST_02_TEXTURE = -1369442646,
	REFLECT_TEST_03_TEXTURE = -648493508,
	REFLECT_TEST_04_TEXTURE = 1195135903,
	REFLECT_TEST_05_TEXTURE = 809198345,
	RELATIONSHIPS_TEXTURE = -340497854,
	RIVER_TERRAIN_TEXTURE = -1727174635,
	ROAD_STRIPES_TEXTURE = -1575446717,
	ROAD_TEMP_COLOR_TEXTURE = 1100374423,
	ROMANCE_01_TEXTURE = 1612178922,
	ROMANCE_02_TEXTURE = -115428272,
	ROMANCE_03_TEXTURE = -1910930234,
	ROMANCE_04_TEXTURE = 276631909,
	ROMANCE_05_TEXTURE = 1736057331,
	ROMANCE_06_TEXTURE = -25989047,
	ROMANCE_07_TEXTURE = -1988869921,
	ROMANCE_08_TEXTURE = 432758094,
	ROMANCE_09_TEXTURE = 1858891224,
	ROMANCE_10_TEXTURE = 235660349,
	ROOF_LARGE_TEXTURE = 501466342,
	ROOF_SMALL_TEXTURE = 835520331,
	ROSEBUSH_TEXTURE = 1754282234,
	ROSEBUSH_ROSE_TEXTURE = -1766860618,
	ROSE_BUSH_ACTION_QUEUE_TEXTURE = -1081335715,
	ROXANA_GERANIUM_TEXTURE = -1667457470,
	ROXANA_GERANIUM_ACTION_QUEUE_TEXTURE = 5497670,
	RUBBER_TREE_PLANT_TEXTURE = 1081271696,
	RUBBER_TREE_PLANT_02_TEXTURE = -283019035,
	RUBBER_TREE_PLANT_03_TEXTURE = -1742321549,
	RUBBER_TREE_PLANT_ACTION_QUEUE_TEXTURE = -1403418889,
	RUBBER_TREE_PLANT_ROOM_TEXTURE = -1903908587,
	SAND_BOX_TEXTURE = 922160194,
	SAND_BOX_ACTION_QUEUE_TEXTURE = 1295545505,
	SANI_QUEEN_BATHTUB_TEXTURE = -2052084969,
	SANI_QUEEN_BATHTUB_ACTION_QUEUE_TEXTURE = -229662449,
	SATINISTICS_REPRODUCTION_ARMCHAIR_TEXTURE = -662059090,
	SATINISTICS_REPRODUCTION_ARMCHAIR_ACTION_QUEUE_TEXTURE = -581825990,
	SCHOOL_BUS_TEXTURE = -1470212925,
	SCI_FI_3EYE_ALIEN_TEXTURE = 538275250,
	SCI_FI_ALIENTRADITIONAL_TEXTURE = -1094192165,
	SCI_FI_FLYINGSAUCER_TEXTURE = -1004378092,
	SCI_FI_PLANET_TEXTURE = 2117972999,
	SCI_FI_ROCKET_TEXTURE = -661166660,
	SCTC_CORDLESS_WALL_PHONE_TEXTURE = -1217983587,
	SCTC_CORDLESS_WALL_PHONE_ACTION_QUEUE_TEXTURE = 1742784790,
	SCYLLA_AND_CHARYBDIS_TEXTURE = 1029845720,
	SCYLLA_AND_CHARYBDIS_ACTION_QUEUE_TEXTURE = -827141455,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_TEXTURE = -857433744,
	SEE_ME_FEEL_ME_PINBALL_MACHINE_GLASS_TEXTURE = 1933271192,
	SEE_ME__FEEL_ME_PINBALL_MACHINE_ACTION_QUEUE_TEXTURE = -1679943029,
	SELECTEDORANGE_TEXTURE = 1878006914,
	SELECTEDRED_TEXTURE = 1586299894,
	SELECTEDYELLOW_TEXTURE = -1573830299,
	SHADOW_CARS_TEXTURE = -132784969,
	SHADOW_ROUND__TEXTURE = -194318901,
	SHADOW_SQUARE__TEXTURE = 1255837485,
	SHAREDMUSIC_DRUMS_TEXTURE = 231715389,
	SHAREDMUSIC_GUITAR_TEXTURE = 1249571395,
	SHAREDMUSIC_MUSICNOTES_TEXTURE = -1638246362,
	SHAREDOUTDOORS_DOLPHIN_TEXTURE = -589871934,
	SHAREDOUTDOORS_MOUNTAIN_TEXTURE = -1995720447,
	SHAREDOUTDOORS_RIVERCANOEING_TEXTURE = -304869545,
	SHAREDSPORTS_SKIING_TEXTURE = 1433697163,
	SHAREDSPORTS_SOCCER_TEXTURE = 1291290073,
	SHAREDSPORTS_TENNIS_TEXTURE = 977443284,
	SHAREDWEATHER_PARTLYSUNNY_TEXTURE = -661054340,
	SHAREDWEATHER_RAINING_TEXTURE = -1715821068,
	SHAREDWEATHER_SUNNY_TEXTURE = 221570880,
	SHD______TEXTURE = -711165003,
	SHOWER_CURTAIN_TEXTURE = 948436173,
	SIMBADS_STUFFED_MARLIN_TEXTURE = 1337740084,
	SIMBADS_STUFFED_MARLIN_ACTION_QUEUE_TEXTURE = -320358018,
	SIMSAFETY_IV_BURGALUR_ALARM_TEXTURE = 1932150773,
	SIMSAFETY_IV_BURGALUR_ALARM_ACTION_QUEUE_TEXTURE = 1794228327,
	SIMS_LOGO_MEDIUM_TEXTURE = 372675071,
	SIMS_WALL_PAPER_000_TEXTURE = 1970764196,
	SIMS_WALL_PAPER_001_TEXTURE = 40913202,
	SIMS_WALL_PAPER_002_TEXTURE = -1686562680,
	SIMS_WALL_PAPER_003_TEXTURE = -327276514,
	SIMS_WALL_PAPER_004_TEXTURE = 1914355133,
	SIMS_WALL_PAPER_005_TEXTURE = 85822763,
	SIMS_WALL_PAPER_006_TEXTURE = -1676354415,
	SIMS_WALL_PAPER_006_ROOM_TEXTURE = 1594886671,
	SIMS_WALL_PAPER_007_TEXTURE = -351015929,
	SIMS_WALL_PAPER_008_TEXTURE = 2074931606,
	SIMS_WALL_PAPER_009_TEXTURE = 212582656,
	SIMS_WALL_PAPER_010_TEXTURE = 1819035877,
	SIMS_WALL_PAPER_011_TEXTURE = 460028019,
	SIMS_WALL_PAPER_012_TEXTURE = -2107495991,
	SIMS_WALL_PAPER_012_ROOM_TEXTURE = 1660306349,
	SIMS_WALL_PAPER_013_TEXTURE = -177923745,
	SIMS_WALL_PAPER_014_TEXTURE = 1795263740,
	SIMS_WALL_PAPER_015_TEXTURE = 470203498,
	SIMS_WALL_PAPER_016_TEXTURE = -2062553648,
	SIMS_WALL_PAPER_017_TEXTURE = -234300090,
	SIMS_WALL_PAPER_018_TEXTURE = 1656209623,
	SIMS_WALL_PAPER_019_TEXTURE = 363917377,
	SIMS_WALL_PAPER_020_TEXTURE = 1195449126,
	SIMS_WALL_PAPER_021_TEXTURE = 809905072,
	SIMS_WALL_PAPER_022_TEXTURE = -1454409206,
	SIMS_WALL_PAPER_023_TEXTURE = -565687652,
	SIMS_WALL_PAPER_024_TEXTURE = 1076682559,
	SIMS_WALL_PAPER_025_TEXTURE = 925626281,
	SIMS_WALL_PAPER_026_TEXTURE = -1373454829,
	SIMS_WALL_PAPER_027_TEXTURE = -651850107,
	SIMS_WALL_PAPER_028_TEXTURE = 1234866964,
	SIMS_WALL_PAPER_029_TEXTURE = 1050518402,
	SIMS_WALL_PAPER_030_TEXTURE = 1582967399,
	SIMS_WALL_PAPER_031_TEXTURE = 693967601,
	SIMS_WALL_PAPER_032_TEXTURE = -1336652981,
	SIMS_WALL_PAPER_032_ROOM_TEXTURE = -177646972,
	SIMS_WALL_PAPER_033_TEXTURE = -950830115,
	SIMS_WALL_PAPER_034_TEXTURE = 1496837758,
	SIMS_WALL_PAPER_035_TEXTURE = 774954728,
	SIMS_WALL_PAPER_036_TEXTURE = -1220964526,
	SIMS_WALL_PAPER_037_TEXTURE = -1069629500,
	SIMS_WALL_PAPER_038_TEXTURE = 1350672981,
	SIMS_WALL_PAPER_100_TEXTURE = 1958024083,
	SIMS_WALL_PAPER_201_TEXTURE = 32808284,
	SIMS_WALL_PAPER_202_TEXTURE = -1728197402,
	SIMS_WALL_PAPER_203_TEXTURE = -268764048,
	SIMS_WALL_PAPER_204_TEXTURE = 1906207187,
	SIMS_WALL_PAPER_205_TEXTURE = 110713157,
	SIMS_WALL_PAPER_206_TEXTURE = -1617950465,
	SIMS_WALL_PAPER_207_TEXTURE = -392742807,
	SIMS_WALL_PAPER_208_TEXTURE = 2015897080,
	SIMS_WALL_PAPER_209_TEXTURE = 254743918,
	SIMS_WALL_PAPER_210_TEXTURE = 1877515403,
	SIMS_WALL_PAPER_211_TEXTURE = 418360349,
	SIMS_WALL_PAPER_212_TEXTURE = -2115568217,
	SIMS_WALL_PAPER_213_TEXTURE = -152974031,
	SIMS_WALL_PAPER_214_TEXTURE = 1753569426,
	SIMS_WALL_PAPER_215_TEXTURE = 528640004,
	SIMS_WALL_PAPER_216_TEXTURE = -2037696066,
	SIMS_WALL_PAPER_217_TEXTURE = -242480856,
	SIMS_WALL_PAPER_218_TEXTURE = 1630737593,
	SIMS_WALL_PAPER_219_TEXTURE = 372515887,
	SIM_ROAD_TEXTURE = -460542889,
	SIM_ROAD_STRIPE_NORTH_TEXTURE = 1958393091,
	SIM_ROAD_STRIPE_WEST_TEXTURE = 1032865135,
	SIM_SIDEWALK_TEXTURE = -818251649,
	SIM_TERRAIN_GRASS_01_TEXTURE = 1579406776,
	SIM_TERRAIN_GRASS_02_TEXTURE = -953515006,
	SINGLE_HUNG_WINDOW_TEXTURE = -424048080,
	SINGLE_HUNG_WINDOW_ACTION_QUEUE_TEXTURE = -1018836274,
	SINGLE_HUNG_WINDOW_N_TEXTURE = 1068860807,
	SINGLE_HUNG_WINDOW_ROOM_TEXTURE = -129912040,
	SINGLE_PANE_FIXED_WINDOW_ACTION_QUEUE_TEXTURE = 893049386,
	SKY_BLUE_TERRAIN_TEXTURE = -1813445019,
	SMALL_ROUND_CURSOR_WITHOUT_X_TEXTURE = 934026351,
	SMALL_ROUND_CURSOR_WITHOUT_X__WIRE_TEXTURE = 735632034,
	SMALL_ROUND_CURSOR_WITH_X_TEXTURE = 740550028,
	SMALL_ROUND_CURSOR_WITH_X__WIRE_TEXTURE = 1533373278,
	SMILEY_FACE_TEXTURE = 2024338963,
	SNACK_ACTION_QUEUE_TEXTURE = 256033428,
	SNAILS_WITH_ICICLES_IN_NOSE_TEXTURE = -1343632621,
	SNAILS_WITH_ICICLES_IN_NOSE_ACTION_QUEUE_TEXTURE = 2082924324,
	SNOOZEMORE_ALARM_CLOCK_TEXTURE = 918158805,
	SNOOZEMORE_ALARM_CLOCK_ACTION_QUEUE_TEXTURE = 2133877158,
	SOMA_PLASMA_TV_TEXTURE = 1036732951,
	SOMA_PLASMA_TV_ACTION_QUEUE_TEXTURE = 1548992767,
	SONIC_SHOWER_TEXTURE = -1254363214,
	SONIC_SHOWER_ACTION_QUEUE_TEXTURE = -835915617,
	SONIC_SHOWER_GLOW_RING_TEXTURE = 733254870,
	SPACE_MISER_SHOWER_TEXTURE = -1529619732,
	SPACE_MISER_SHOWER_ACTION_QUEUE_TEXTURE = -464510338,
	SPARTAN_SPECIAL_TEXTURE = 309080012,
	SPARTAN_SPECIAL_ACTION_QUEUE_TEXTURE = -996441676,
	SPEED_L1_REGULAR_TEXTURE = -407224867,
	SPEED_R1_REGULAR_TEXTURE = -555905914,
	SPEND_TEXTURE = 461825421,
	SPEND_BACK_TEXTURE = -500746983,
	SPIDER_PLANT_TEXTURE = 465918780,
	SPIDER_PLANT_ACTION_QUEUE_TEXTURE = -1888694869,
	SPILL_4_WAY_CONNECT_TEXTURE = -708512332,
	SPILL_CONNECT_EAST_TEXTURE = -407409088,
	SPILL_CONNECT_NORTH_TEXTURE = 1257503940,
	SPILL_CONNECT_SOUTH_TEXTURE = -674449038,
	SPILL_CONNECT_WEST_TEXTURE = 447633800,
	SPILL_EAST_EDGE_ROUGH_TEXTURE = -1309633439,
	SPILL_NORTH_EDGE_ROUGH_TEXTURE = 1523302966,
	SPILL_ROUNDED_CORNER_BOTTOM_LEFT_TEXTURE = 985852493,
	SPILL_ROUNDED_CORNER_BOTTOM_RIGHT_TEXTURE = -991943530,
	SPILL_ROUNDED_CORNER_TOP_LEFT_TEXTURE = 1269694521,
	SPILL_ROUNDED_CORNER_TOP_RIGHT_TEXTURE = -1812333223,
	SPILL_SOUTH_EDGE_ROUGH_TEXTURE = -798288847,
	SPILL_STAND_ALONE_TEXTURE = -398703642,
	SPILL_WEST_EDGE_ROUGH_TEXTURE = 1152923044,
	SPOOKYSTUFF_BATS_TEXTURE = 72608467,
	SPOOKYSTUFF_BLACKCAT_TEXTURE = -827706123,
	SPOOKYSTUFF_HUNTEDHOUSE_TEXTURE = 1808890490,
	SPOOKYSTUFF_SKULL_TEXTURE = 1276315725,
	SPOOKYSTUFF_SPIDERWEB_TEXTURE = 627776854,
	SPORTS_BASEBALL_TEXTURE = -503269448,
	SPORTS_BASKETBALL_TEXTURE = 375081125,
	SPORTS_FOOTBALL_TEXTURE = 534888141,
	SPORTS_SOCCER_TEXTURE = -46433409,
	SPORTS_TENNIS_TEXTURE = -1953601678,
	SPRINKLER_ACTION_QUEUE_TEXTURE = 1677525328,
	SPRNKLER_TEXTURE = 103132463,
	SQR_BG_2EXPENSIVE_TEXTURE = 978863936,
	SQR_BG_NORMAL_TEXTURE = 305776020,
	SQR_BG_SELECTED_TEXTURE = -1323618573,
	SQUARES_TEXTURE = -1953707723,
	SSRI_VIRTUAL_REALITY_SET_TEXTURE = -250167448,
	SSRI_VR_SET_ACTION_QUEUE_TEXTURE = -578474386,
	STAFF_SEDAN_TEXTURE = 449847407,
	STANDARD_CAR_TEXTURE = -1319840928,
	STAR_02_NEW_TEXTURE = 2141420088,
	STILL_LIFE_DRAPERY_AND_CRUMBS_TEXTURE = -1974978290,
	STILL_LIFE_DRAPERY_AND_CRUMBS_ACTION_QUEUE_TEXTURE = -1103299561,
	STRAIGHT_NORTH_TO_SOUTH_TEXTURE = 1201043482,
	STRAIGHT_WEST_TO_EAST_TEXTURE = 906437155,
	STRINGS_THEORY_STEREO_TEXTURE = 1284958308,
	STRINGS_THEORY_STEREO_ACTION_QUEUE_TEXTURE = 1694598327,
	STRINGS_THEORY_STEREO_ROOM_TEXTURE = -1023102939,
	SUPERDOOP_BASKETBALL_HOOP_TEXTURE = 1420886656,
	SUPERDOOP_BASKETBALL_HOOP_ACTION_QUEUE_TEXTURE = 844997033,
	SURPLUS_LLAMA_LAWN_ORNAMENT_TEXTURE = -1853802549,
	SURPLUS_LLAMA_LAWN_ORNAMENT_02_TEXTURE = 410172766,
	SURPLUS_LLAMA_LAWN_ORNAMENT_ACTION_QUEUE_TEXTURE = 1383022668,
	SUV_TEXTURE = -729869269,
	SYSTEMDEPTH_TEXTURE = 994659692,
	TEMP_POOL_EDGING_TEXTURE = 137263584,
	TERRAIN_BRIDGE_01_TEXTURE = 1208067359,
	TERRAIN_FENCE_01_TEXTURE = 456510833,
	TERRAIN_GROUND_OVERLAY_01_TEXTURE = -282083068,
	TERRAIN_RIVER_BEDBOTTOM_01_TEXTURE = 352125531,
	TERRAIN_RIVER_BED_01_TEXTURE = -1068783449,
	TERRAIN_SAND_01_TEXTURE = -1938697508,
	TERRAIN_SHADOW_01_TEXTURE = -414301060,
	TERRAIN_SIDEWALK_01_TEXTURE = 202129710,
	TEXT_ARROW_L_TEXTURE = -471313671,
	TEXT_ARROW_R_TEXTURE = 434597786,
	TEXT_BOX_BG_BC_TEXTURE = 1979750871,
	TEXT_BOX_BG_BL_TEXTURE = -423656378,
	TEXT_BOX_BG_BR_TEXTURE = 481343781,
	TEXT_BOX_BG_ML_TEXTURE = 1629984905,
	TEXT_BOX_BG_MR_TEXTURE = -1691834902,
	TEXT_BOX_BG_TC_TEXTURE = 1788357632,
	TEXT_BOX_BG_TL_TEXTURE = -98094703,
	TEXT_BOX_BG_TR_TEXTURE = 2624754,
	TEXT_BOX_H_BC_TEXTURE = 642873603,
	TEXT_BOX_H_BL_TEXTURE = -1225890670,
	TEXT_BOX_H_BR_TEXTURE = 1289837041,
	TEXT_BOX_H_ML_TEXTURE = 829847645,
	TEXT_BOX_H_MR_TEXTURE = -881244866,
	TEXT_BOX_H_TC_TEXTURE = 986303700,
	TEXT_BOX_H_TL_TEXTURE = -1435053755,
	TEXT_BOX_H_TR_TEXTURE = 1350167590,
	TEXT_LINE_BG_C_TEXTURE = -1676018146,
	TEXT_LINE_BG_L_TEXTURE = 212263823,
	TEXT_LINE_BG_R_TEXTURE = -156639508,
	TEXT_LINE_H_C_TEXTURE = -2078308767,
	TEXT_LINE_H_L_TEXTURE = 346070000,
	TEXT_LINE_H_R_TEXTURE = -290478445,
	TEXT_POPOUT_C_TEXTURE = -986294779,
	TEXT_POPOUT_H_C_TEXTURE = 1610967325,
	TEXT_POPOUT_H_L_TEXTURE = -256215924,
	TEXT_POPOUT_H_R_TEXTURE = 179653103,
	TEXT_POPOUT_L_TEXTURE = 1435061140,
	TEXT_POPOUT_R_TEXTURE = -1350142217,
	THE_BOSTONIAN_FIREPLACE_ACTION_QUEUE_TEXTURE = 496577278,
	THE_BOSTONIAN_FIREPLACE_BRICK_TEXTURE = -1876974227,
	THE_BOSTONIAN_FIREPLACE_NEW_TEXTURE = 560668253,
	THE_DIETER_BY_WORKBUNST_TEXTURE = 1849435193,
	THE_DIETER_BY_WORKBUNST_ACTION_QUEUE_TEXTURE = 645101320,
	THE_FUNINATOR_DELUXE_TEXTURE = 82017050,
	THE_FUNINATOR_DELUXE_ACTION_QUEUE_TEXTURE = 1011490186,
	THE_PYROTORRE_GAS_RANGE_TEXTURE = -1904421291,
	THE_REDMOND_DESK_TABLE_TEXTURE = -1656878073,
	THE_REDMOND_DESK_TABLE_ACTION_QUEUE_TEXTURE = 1724298698,
	THE_SARRBACH_BY_WORKBUNNST_TEXTURE = 1234666,
	THE_SARRBACH_BY_WORKBUNNST_ACTION_QUEUE_TEXTURE = -2127828679,
	THE_VIBROMATIC_HEART_BED_TEXTURE = 1480214735,
	THE_VIBROMATIC_HEART_BED_ACTION_QUEUE_TEXTURE = 1007216883,
	TILED_COUNTER_FACE_TEXTURE = -1491227381,
	TILED_COUNTER_SIDE_TEXTURE = -2121740839,
	TILED_COUNTER_TOP_TEXTURE = 1887306185,
	TILED_COUNTER__STRAIGHT__ACTION_QUEUE_TEXTURE = 790033384,
	TILE_COUNTER_ACTION_QUEUE_TEXTURE = 2009560654,
	TIME_MONEY_WINDOW_TEXTURE = 1958765649,
	TITLE_BG_C_TEXTURE = 7045294,
	TITLE_BG_L_TEXTURE = -1865114305,
	TITLE_BG_R_TEXTURE = 1792778332,
	TITLE_H_C_TEXTURE = -9986139,
	TITLE_H_L_TEXTURE = 1876460084,
	TITLE_H_R_TEXTURE = -1781022889,
	TOMBSTONES_TEXTURE = -1295748861,
	TOP_BRASS_SCONCE_TEXTURE = 1586525931,
	TOP_BRASS_SCONCE_ACTION_QUEUE_TEXTURE = -1407468031,
	TORCHOSTERONE_FLOOR_LAMP_TEXTURE = 1049153561,
	TORCHOSTERONE_FLOOR_LAMP_ACTION_QUEUE_TEXTURE = -2067766561,
	TORCHOSTERONE_TABLE_LAMP_TEXTURE = 1487035380,
	TORCHOSTERONE_TABLE_LAMP_ACTION_QUEUE_TEXTURE = -991259294,
	TOWN_CAR_TEXTURE = 2112920403,
	TRADITIONAL_OAK_ARMOIRE_TEXTURE = -56909970,
	TRADITIONAL_OAK_ARMOIRE_ACTION_QUEUE_TEXTURE = 1257131220,
	TRADITIONAL_OAK_ARMOIRE_ROOM_TEXTURE = -1824453302,
	TRAGIC_CLOWN_PAINTING_TEXTURE = 851147269,
	TRASHCAN_TEXTURE = -271980671,
	TRASH_ASH_SEARCH_TEXTURE = -2086939800,
	TRASH_CAN_ACTION_QUEUE_TEXTURE = -517188141,
	TRASH_PILE_TEXTURE = 1336920589,
	TRASH_PILE_ACTION_QUEUE_TEXTURE = -1602363396,
	TRASH_PILE_MEDIUM_SIZE_TEXTURE = -110008007,
	TRASH_PILE_SMALL_SIZE_TEXTURE = -691906889,
	TRAVEL_HAT_TEXTURE = 16138232,
	TRAVEL_ISLAND_TEXTURE = 1649733293,
	TRAVEL_JET_TEXTURE = 1730031250,
	TRAVEL_SHIP_TEXTURE = 2108339557,
	TRAVEL_SUITCASE_TEXTURE = 136662358,
	TREADMILL_TEXTURE = -1805404436,
	TREADMILL_ACTION_QUEUE_TEXTURE = -26149044,
	TREE_LINE_01_PINE__TEXTURE = -988162883,
	TREE_SWING_TEXTURE = 1428654390,
	TREE_SWING_ACTION_QUEUE_TEXTURE = -90296949,
	TRIANGLES_TEXTURE = 751783946,
	TROTTCO_27_INCH_COLOR_TELEVISION_TEXTURE = 144191926,
	TROTTCO_27_INCH_COLOR_TELEVISION_ACTION_QUEUE_TEXTURE = -1466982341,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__00_TEXTURE = -995849968,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__01_TEXTURE = -1281115770,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__02_TEXTURE = 715843644,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__03_TEXTURE = 1571674282,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__04_TEXTURE = -1010217719,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__05_TEXTURE = -1261535841,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__06_TEXTURE = 768027685,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__07_TEXTURE = 1522539699,
	TROTTCO_27_INCH_COLOR_TELEVISION__SCREEN__08_TEXTURE = -897646302,
	TUB_DIRTY_TEXTURE = 302663140,
	TUB_WATER_TEXTURE = 813172339,
	TULIPS_00_SEARCH_TEXTURE = 34267919,
	TULIPS_01_TEXTURE = 2002685212,
	TULIPS_02_TEXTURE = -296231770,
	TULIPS_03_TEXTURE = -1722749904,
	TULIPS_ACTION_QUEUE_TEXTURE = -1395361257,
	TULIPS_ALL_TEXTURE = 1992090920,
	TURD_WATER_TEXTURE = -76909319,
	TV_DINNER_ACTION_QUEUE_TEXTURE = -482119729,
	TV_SCREEN_SEARCH_TEXTURE = 244753640,
	TV_SCREEN_SEARCH_MONOCHROME_TEXTURE = 1297493633,
	TYKE_NYTE_BED_TEXTURE = -702726432,
	TYKE_NYTE_BED_ACTION_QUEUE_TEXTURE = 874181057,
	URCHINEER_TRAIN_SET_ACTION_QUEUE_TEXTURE = -615284978,
	URCHINEER_TRAIN_SET_BY_RIPCO_TEXTURE = -1420391806,
	URN_TEXTURE = -1931516408,
	URN_ACTION_QUEUE_TEXTURE = -1392217561,
	UU_EY_IRIS_TEXTURE = -713522503,
	UU_EY_WHITE_TEXTURE = -907468313,
	UU_HH_AFRO_TEXTURE = 529106641,
	UU_HH_BALD_TEXTURE = 1273027053,
	UU_HH_BALD_02_TEXTURE = -554039174,
	UU_HH_BALL_CAP_TEXTURE = 1806855086,
	UU_HH_BALL_CAP_B_TEXTURE = 248263133,
	UU_HH_BALL_CAP_T_TEXTURE = -99056500,
	UU_HH_CHEF_HAT_T_TEXTURE = 1923056705,
	UU_HH_CORNROWS_TEXTURE = -891624142,
	UU_HH_COWBOY_HAT_TEXTURE = -205389309,
	UU_HH_COWBOY_HAT_B_TEXTURE = 554414837,
	UU_HH_COWBOY_HAT_T_TEXTURE = -706803804,
	UU_HH_PUNK_SPIKED_TEXTURE = -2145760116,
	UU_HH_PUNK_SPIKED_B_TEXTURE = 208939326,
	UU_HH_PUNK_SPIKED_T_TEXTURE = -123691921,
	UU_HH_TOP_HAT_B_TEXTURE = 1896194750,
	UU_HH_TOP_HAT_T_TEXTURE = -2049894417,
	VANITY_MIRROR_TEXTURE = 1100699540,
	VANITY_MIRROR_ACTION_QUEUE_TEXTURE = 1200610566,
	VANITY_MIRROR_BULB_TEXTURE = -1989317439,
	VANITY_MIRROR_BULB_OFF_TEXTURE = 997954426,
	VERT_METER_BG_B_TEXTURE = 560305816,
	VERT_METER_BG_C_TEXTURE = 1449305614,
	VERT_METER_BG_T_TEXTURE = -709811255,
	VERT_METER_H_B_TEXTURE = 847391750,
	VERT_METER_H_C_TEXTURE = 1166351504,
	VERT_METER_H_T_TEXTURE = -967403177,
	VERT_METER_ICON_BG_TEXTURE = -399169825,
	VERT_METER_ICON_H_TEXTURE = 1649243448,
	VON_BRAUN_RECLINER_TEXTURE = 1968894798,
	VON_BRAUN_RECLINER_ACTION_QUEUE_TEXTURE = -1358956589,
	WALLCONSTRUCTIONSHD_TEXTURE = -1986288661,
	WALLS_DOWN_TEXTURE = -1220171140,
	WALL_BLACK_TEXTURE = -921100533,
	WALL_RED_BORDER_TEXTURE = 813977005,
	WALL_TOOL_ACTION_QUEUE_TEXTURE = -551907709,
	WALNUT_DOOR_TEXTURE = -1907456137,
	WALNUT_DOOR_ACTION_QUEUE_TEXTURE = -2331976,
	WATERCOLOR_BY_JME_TEXTURE = 347789247,
	WATERCOLOR_BY_JME_ACTION_QUEUE_TEXTURE = 1808817067,
	WATER_POND_TEXTURE = -495872422,
	WATER_PUDDLE_ACTION_QUEUE_TEXTURE = -82383724,
	WEATHER_PARTLY_SUNNY_TEXTURE = 1628401949,
	WEATHER_RAIN_TEXTURE = 2099410624,
	WEATHER_SNOW_TEXTURE = -51160610,
	WEATHER_SUNNY_TEXTURE = -1124591130,
	WEATHER_THUNDERCLOUD_TEXTURE = -1955587261,
	WHAT_A_GAS_PARTY_BALLOONS_TEXTURE = 1793452590,
	WHAT_A_GAS_PARTY_BALLOONS_ACTION_QUEUE_TEXTURE = 728476352,
	WHIRL_N_HURL_RETRO_JUKEBOX_TEXTURE = 974932606,
	WHIRL_N_HURL_RETRO_JUKEBOX_ACTION_QUEUE_TEXTURE = 294516232,
	WHIRL_WIZARD_HOT_TUB_TEXTURE = 413093903,
	WHIRL_WIZARD_HOT_TUB_ACTION_QUEUE_TEXTURE = 896259815,
	WHIRL_WIZARD_HOT_TUB__WATER_01_TEXTURE = 358208700,
	WHITELIGHT_TEXTURE = 968471231,
	WHITELINE_TEXTURE = 437832293,
	WHITE_RHINO_RE_ENACTMENT_TEXTURE = -281603146,
	WHITE_RHINO_RE_ENACTMENT_ACTION_QUEUE_TEXTURE = -348209702,
	WICKED_BREEZE_END_TABLE_TEXTURE = 1395105642,
	WICKED_BREEZE_END_TABLE_ACTION_QUEUE_TEXTURE = -2020238502,
	WILDFLOWERS_00_SEARCH_TEXTURE = -1143532594,
	WILDFLOWERS_01_TEXTURE = 1792437045,
	WILDFLOWERS_02_TEXTURE = -203474289,
	WILDFLOWERS_03_TEXTURE = -2066216423,
	WILDFLOWERS_ACTION_QUEUE_TEXTURE = -798504691,
	WILDFLOWERS_ALL_TEXTURE = 873723298,
	WILD_BILL_BBQ_ACTION_QUEUE_TEXTURE = 2014061413,
	WILD_BILL_THX_451_BBQ_TEXTURE = 1998558723,
	WILL_LLOYD_WRIGHT_DOLL_HOUSE_TEXTURE = -1497233471,
	WILL_LLOYD_WRIGHT_DOLL_HOUSE_ACTION_QUEUE_TEXTURE = -1180895551,
	WINDOW_FRAMING_TEXTURE = 1885013235,
	WINDOW_FRAMING_ROOM_TEXTURE = -703608503,
	WINDSOR_DOOR_TEXTURE = -1830465208,
	WINDSOR_DOOR_ACTION_QUEUE_TEXTURE = -2087018812,
	WORKBUNNST_ALL_PURPOSE_CHAIR_TEXTURE = 1279754020,
	WORKBUNNST_ALL_PURPOSE_CHAIR_ACTION_QUEUE_TEXTURE = 236603892,
	XLR8R_FOOD_PROCESSOR_TEXTURE = -168429336,
	XLR8R_FOOD_PROCESSOR_ACTION_QUEUE_TEXTURE = -400775827,
	XS_TEXTURE = -1042692627,
	YOU_WIN_SCREEN_TEXTURE = -746558589,
	ZAP_ZALL_BUG_ZAPPER_TEXTURE = 1594332643,
	ZAP_ZALL_BUG_ZAPPER_ACTION_QUEUE_TEXTURE = -688049251,
	ZIMANTZ_COMPONENT_HIFI_STEREO_TEXTURE = -1030606594,
	ZIMANTZ_COMPONENT_HIFI_STEREO_ACTION_QUEUE_TEXTURE = 1503029374,
	_000_MIDDLE_FINGER_UNSURE_TEXTURE = -441443450,
	_1ST_FINAL_TEXTURE = -217371913,
	_200_MOTIVE_ICON_HUNGER_BLACK_TEXTURE = -1571801892,
	_200_MOTIVE_ICON_HUNGER_RED_TEXTURE = 1173886577,
	_201_MOTIVE_ICON_BLADDER_BLACK_TEXTURE = 955988159,
	_201_MOTIVE_ICON_BLADDER_RED_TEXTURE = -76425107,
	_203_MOTIVE_ICON_HYGIENE_BLACK_TEXTURE = -1104930479,
	_203_MOTIVE_ICON_HYGIENE_RED_TEXTURE = -1102040922,
	_204_MOTIVE_ICON_ENERGY_BLACK_TEXTURE = -987148499,
	_204_MOTIVE_ICON_ENERGY_RED_TEXTURE = -1526603753,
	_205_MOTIVE_ICON_COMFORT_BLACK_TEXTURE = 1789299104,
	_205_MOTIVE_ICON_COMFORT_RED_TEXTURE = 502305093,
	_206_MOTIVE_ICON_ENTERTAINED_BLACK_TEXTURE = 578084585,
	_206_MOTIVE_ICON_ENTERTAINED_RED_TEXTURE = -864230438,
	_210_MOTIVE_ICON_SOCIAL_BLACK_TEXTURE = 1939358571,
	_210_MOTIVE_ICON_SOCIAL_RED_TEXTURE = -1985465866,
	_213_MOTIVE_ICON_ENVIRONMENT_BLACK_TEXTURE = 1004385121,
	_213_MOTIVE_ICON_ENVIRONMENT_RED_TEXTURE = 767478626,
	_2ND_FINAL_TEXTURE = 1256631814,
	_2PLAYERMASK_TEXTURE = -1129206383,
	_2_PLAYER_SPLIT_TEXTURE = 1379233924,
	_300_MOTIVE_ICON_ROMANCE_BLACK_TEXTURE = -337447382,
	_300_MOTIVE_ICON_ROMANCE_RED_TEXTURE = 2072651355,
	_300_ROMANCE_TEXTURE = 2124600805,
	_3RD_FINAL_TEXTURE = 1988730401,
	_4TH_FINAL_TEXTURE = 321359899,
	_501_HEADLINE_STRESS_TEXTURE = -432703689,
	_502_HEADLINE_SURPRISE_TEXTURE = -1934368827,
	_503_HEADLINE_IDEA_TEXTURE = 1962653852,
	_504_HEADLINE_LOVE_TEXTURE = -1292685858,
	_505_HEADLINE_DRUNK_TEXTURE = -1895020053,
	_506_HEADLINE_HURT_TEXTURE = -1971664824,
	_507_HEADLINE_SMELL_TEXTURE = 1650603138,
	_5TH_FINAL_TEXTURE = 73172056,
	_615_2_POSITIVES_TEXTURE = -408893098,
	_616_1_POSITIVE_TEXTURE = -1960359800,
	_617_1_NEGATIVE_TEXTURE = 1978954748,
	_618_2_NEGATIVES_TEXTURE = 713823923,
	_630_FRIENDS_TEXTURE = 158103869,
	_631_ROMANCE_TEXTURE = -205924633,
	_632_BROKEN_HEART_TEXTURE = -513946594,
	_666_FRIENDS_GONE_BAD_TEXTURE = 815120007,
	_700_ROUTE_ERROR_CHAIR_NOT_FOUND_TEXTURE = -1411792273,
	_701_ROUTE_ERROR_DOOR_NOT_FOUND_TEXTURE = -1088168727,
	_702_ROUTE_ERROR_WALL_IN_WAY_TEXTURE = 128337788,
	_704_ROUTE_ERROR_NO_POOL_LADDER_TEXTURE = 1761088365,
	_GARBAGE_TEXTURE = 395586314,
	_SIM4000_BUILD_10_TEXTURE = -324459676,
	_THOUGHT_BUBBLE_TYPE1_TEXTURE = -1204490137,
	_THOUGHT_BUBBLE_TYPE2_TEXTURE = 557687261,
	_THOUGHT_BUBBLE_TYPE3_TEXTURE = 1446678859
};

ERTexture *_pMaskTexture = NULL;
float _2pDivWidth = 1.f;
float _2pDivHeight = 0.25f;
float _fReBoot = 0.f;

EVec3 _lightpos = {
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

float _amb = 0.4f;
float _dir = 0.8f;
float _dir2 = 0.35f;

EVec3 _ambColor = {
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

EVec3 _dirColor = {
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

EVec3 _dir2Color = {
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

E3DWindow _2Dwin = {
	/* base class 0 = */ {
		/* .m_mWindow = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [1] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [2] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [3] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					}
				},
				/* . = */ {
					/* ._00 = */ 0.f,
					/* ._01 = */ 0.f,
					/* ._02 = */ 0.f,
					/* ._03 = */ 0.f,
					/* ._10 = */ 0.f,
					/* ._11 = */ 0.f,
					/* ._12 = */ 0.f,
					/* ._13 = */ 0.f,
					/* ._20 = */ 0.f,
					/* ._21 = */ 0.f,
					/* ._22 = */ 0.f,
					/* ._23 = */ 0.f,
					/* ._30 = */ 0.f,
					/* ._31 = */ 0.f,
					/* ._32 = */ 0.f,
					/* ._33 = */ 0.f
				}
			}
		},
		/* .m_rIn = */ {
			/* .left = */ 0.f,
			/* .top = */ 0.f,
			/* .right = */ 0.f,
			/* .bottom = */ 0.f
		},
		/* .m_rOut = */ {
			/* .left = */ 0.f,
			/* .top = */ 0.f,
			/* .right = */ 0.f,
			/* .bottom = */ 0.f
		},
		/* .m_rClipIn = */ {
			/* .left = */ 0.f,
			/* .top = */ 0.f,
			/* .right = */ 0.f,
			/* .bottom = */ 0.f
		},
		/* .m_rClipOut = */ {
			/* .left = */ 0.f,
			/* .top = */ 0.f,
			/* .right = */ 0.f,
			/* .bottom = */ 0.f
		},
		/* .m_rClipOutClamped = */ {
			/* .left = */ 0.f,
			/* .top = */ 0.f,
			/* .right = */ 0.f,
			/* .bottom = */ 0.f
		},
		/* .m_pRenderSurface = */ NULL,
		/* .m_outputRectNeedsSetting = */ false,
		/* .$vf945 = */ NULL
	},
	/* .m_mLookAt = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* . = */ {
				/* ._00 = */ 0.f,
				/* ._01 = */ 0.f,
				/* ._02 = */ 0.f,
				/* ._03 = */ 0.f,
				/* ._10 = */ 0.f,
				/* ._11 = */ 0.f,
				/* ._12 = */ 0.f,
				/* ._13 = */ 0.f,
				/* ._20 = */ 0.f,
				/* ._21 = */ 0.f,
				/* ._22 = */ 0.f,
				/* ._23 = */ 0.f,
				/* ._30 = */ 0.f,
				/* ._31 = */ 0.f,
				/* ._32 = */ 0.f,
				/* ._33 = */ 0.f
			}
		}
	},
	/* .m_mLookAtPos = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* . = */ {
				/* ._00 = */ 0.f,
				/* ._01 = */ 0.f,
				/* ._02 = */ 0.f,
				/* ._03 = */ 0.f,
				/* ._10 = */ 0.f,
				/* ._11 = */ 0.f,
				/* ._12 = */ 0.f,
				/* ._13 = */ 0.f,
				/* ._20 = */ 0.f,
				/* ._21 = */ 0.f,
				/* ._22 = */ 0.f,
				/* ._23 = */ 0.f,
				/* ._30 = */ 0.f,
				/* ._31 = */ 0.f,
				/* ._32 = */ 0.f,
				/* ._33 = */ 0.f
			}
		}
	},
	/* .m_mLookAtDotProjection = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* . = */ {
				/* ._00 = */ 0.f,
				/* ._01 = */ 0.f,
				/* ._02 = */ 0.f,
				/* ._03 = */ 0.f,
				/* ._10 = */ 0.f,
				/* ._11 = */ 0.f,
				/* ._12 = */ 0.f,
				/* ._13 = */ 0.f,
				/* ._20 = */ 0.f,
				/* ._21 = */ 0.f,
				/* ._22 = */ 0.f,
				/* ._23 = */ 0.f,
				/* ._30 = */ 0.f,
				/* ._31 = */ 0.f,
				/* ._32 = */ 0.f,
				/* ._33 = */ 0.f
			}
		}
	},
	/* .m_mProjection = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* . = */ {
				/* ._00 = */ 0.f,
				/* ._01 = */ 0.f,
				/* ._02 = */ 0.f,
				/* ._03 = */ 0.f,
				/* ._10 = */ 0.f,
				/* ._11 = */ 0.f,
				/* ._12 = */ 0.f,
				/* ._13 = */ 0.f,
				/* ._20 = */ 0.f,
				/* ._21 = */ 0.f,
				/* ._22 = */ 0.f,
				/* ._23 = */ 0.f,
				/* ._30 = */ 0.f,
				/* ._31 = */ 0.f,
				/* ._32 = */ 0.f,
				/* ._33 = */ 0.f
			}
		}
	},
	/* .m_rViewportIn = */ {
		/* .left = */ 0.f,
		/* .top = */ 0.f,
		/* .right = */ 0.f,
		/* .bottom = */ 0.f
	},
	/* .m_rViewportOut = */ {
		/* .left = */ 0.f,
		/* .top = */ 0.f,
		/* .right = */ 0.f,
		/* .bottom = */ 0.f
	},
	/* .m_vpIn = */ {
		/* .vScale = */ {
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
		},
		/* .vOffset = */ {
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
		}
	},
	/* .m_vpOut = */ {
		/* .vScale = */ {
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
		},
		/* .vOffset = */ {
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
		}
	}
};

EPortalWindow _ELiveMode_win = {
	/* base class 0 = */ {
		/* base class 0 = */ {
			/* .m_mWindow = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			},
			/* .m_rIn = */ {
				/* .left = */ 0.f,
				/* .top = */ 0.f,
				/* .right = */ 0.f,
				/* .bottom = */ 0.f
			},
			/* .m_rOut = */ {
				/* .left = */ 0.f,
				/* .top = */ 0.f,
				/* .right = */ 0.f,
				/* .bottom = */ 0.f
			},
			/* .m_rClipIn = */ {
				/* .left = */ 0.f,
				/* .top = */ 0.f,
				/* .right = */ 0.f,
				/* .bottom = */ 0.f
			},
			/* .m_rClipOut = */ {
				/* .left = */ 0.f,
				/* .top = */ 0.f,
				/* .right = */ 0.f,
				/* .bottom = */ 0.f
			},
			/* .m_rClipOutClamped = */ {
				/* .left = */ 0.f,
				/* .top = */ 0.f,
				/* .right = */ 0.f,
				/* .bottom = */ 0.f
			},
			/* .m_pRenderSurface = */ NULL,
			/* .m_outputRectNeedsSetting = */ false,
			/* .$vf945 = */ NULL
		},
		/* .m_mLookAt = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [1] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [2] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [3] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					}
				},
				/* . = */ {
					/* ._00 = */ 0.f,
					/* ._01 = */ 0.f,
					/* ._02 = */ 0.f,
					/* ._03 = */ 0.f,
					/* ._10 = */ 0.f,
					/* ._11 = */ 0.f,
					/* ._12 = */ 0.f,
					/* ._13 = */ 0.f,
					/* ._20 = */ 0.f,
					/* ._21 = */ 0.f,
					/* ._22 = */ 0.f,
					/* ._23 = */ 0.f,
					/* ._30 = */ 0.f,
					/* ._31 = */ 0.f,
					/* ._32 = */ 0.f,
					/* ._33 = */ 0.f
				}
			}
		},
		/* .m_mLookAtPos = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [1] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [2] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [3] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					}
				},
				/* . = */ {
					/* ._00 = */ 0.f,
					/* ._01 = */ 0.f,
					/* ._02 = */ 0.f,
					/* ._03 = */ 0.f,
					/* ._10 = */ 0.f,
					/* ._11 = */ 0.f,
					/* ._12 = */ 0.f,
					/* ._13 = */ 0.f,
					/* ._20 = */ 0.f,
					/* ._21 = */ 0.f,
					/* ._22 = */ 0.f,
					/* ._23 = */ 0.f,
					/* ._30 = */ 0.f,
					/* ._31 = */ 0.f,
					/* ._32 = */ 0.f,
					/* ._33 = */ 0.f
				}
			}
		},
		/* .m_mLookAtDotProjection = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [1] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [2] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [3] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					}
				},
				/* . = */ {
					/* ._00 = */ 0.f,
					/* ._01 = */ 0.f,
					/* ._02 = */ 0.f,
					/* ._03 = */ 0.f,
					/* ._10 = */ 0.f,
					/* ._11 = */ 0.f,
					/* ._12 = */ 0.f,
					/* ._13 = */ 0.f,
					/* ._20 = */ 0.f,
					/* ._21 = */ 0.f,
					/* ._22 = */ 0.f,
					/* ._23 = */ 0.f,
					/* ._30 = */ 0.f,
					/* ._31 = */ 0.f,
					/* ._32 = */ 0.f,
					/* ._33 = */ 0.f
				}
			}
		},
		/* .m_mProjection = */ {
			/* . = */ {
				/* .d = */ {
					/* [0] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [1] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [2] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* [3] = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					}
				},
				/* . = */ {
					/* ._00 = */ 0.f,
					/* ._01 = */ 0.f,
					/* ._02 = */ 0.f,
					/* ._03 = */ 0.f,
					/* ._10 = */ 0.f,
					/* ._11 = */ 0.f,
					/* ._12 = */ 0.f,
					/* ._13 = */ 0.f,
					/* ._20 = */ 0.f,
					/* ._21 = */ 0.f,
					/* ._22 = */ 0.f,
					/* ._23 = */ 0.f,
					/* ._30 = */ 0.f,
					/* ._31 = */ 0.f,
					/* ._32 = */ 0.f,
					/* ._33 = */ 0.f
				}
			}
		},
		/* .m_rViewportIn = */ {
			/* .left = */ 0.f,
			/* .top = */ 0.f,
			/* .right = */ 0.f,
			/* .bottom = */ 0.f
		},
		/* .m_rViewportOut = */ {
			/* .left = */ 0.f,
			/* .top = */ 0.f,
			/* .right = */ 0.f,
			/* .bottom = */ 0.f
		},
		/* .m_vpIn = */ {
			/* .vScale = */ {
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
			},
			/* .vOffset = */ {
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
			}
		},
		/* .m_vpOut = */ {
			/* .vScale = */ {
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
			},
			/* .vOffset = */ {
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
			}
		}
	},
	/* .m_pcc = */ NULL,
	/* .m_contexts = */ {
		/* [0] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [1] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [2] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [3] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [4] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [5] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [6] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [7] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [8] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [9] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [10] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [11] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [12] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [13] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [14] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		},
		/* [15] = */ {
			/* .m_vEye = */ {
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
			/* .m_vFrustCenter = */ {
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
			/* .m_vFrustCorner = */ {
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
			/* .m_vLookDir = */ {
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
			/* .m_frustInnerRadius = */ 0.f,
			/* .m_frustOuterRadius = */ 0.f,
			/* .m_fovYDegrees = */ 0.f,
			/* .m_aspect = */ 0.f,
			/* .m_nearPlane = */ 0.f,
			/* .m_farPlane = */ 0.f,
			/* .m_reverseCulling = */ false,
			/* .m_reoriented = */ false,
			/* .m_nPortalPlanes = */ 0,
			/* .m_portalPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_clipPlaneList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_nOccluders = */ 0,
			/* .m_occluderList = */ {
				/* .m_pHead = */ NULL,
				/* .m_pTail = */ NULL
			},
			/* .m_dataSize = */ 0,
			/* .m_clipDataSize = */ 0,
			/* .m_boundClipDataSize = */ 0,
			/* .m_pData = */ NULL,
			/* .m_pBoundData = */ NULL,
			/* .m_mLookAt = */ {
				/* . = */ {
					/* .d = */ {
						/* [0] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [1] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [2] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						},
						/* [3] = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					},
					/* . = */ {
						/* ._00 = */ 0.f,
						/* ._01 = */ 0.f,
						/* ._02 = */ 0.f,
						/* ._03 = */ 0.f,
						/* ._10 = */ 0.f,
						/* ._11 = */ 0.f,
						/* ._12 = */ 0.f,
						/* ._13 = */ 0.f,
						/* ._20 = */ 0.f,
						/* ._21 = */ 0.f,
						/* ._22 = */ 0.f,
						/* ._23 = */ 0.f,
						/* ._30 = */ 0.f,
						/* ._31 = */ 0.f,
						/* ._32 = */ 0.f,
						/* ._33 = */ 0.f
					}
				}
			}
		}
	},
	/* .m_nCurrentContext = */ 0,
	/* .m_dataBuffer = */ {
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
		/* [31] = */ 0,
		/* [32] = */ 0,
		/* [33] = */ 0,
		/* [34] = */ 0,
		/* [35] = */ 0,
		/* [36] = */ 0,
		/* [37] = */ 0,
		/* [38] = */ 0,
		/* [39] = */ 0,
		/* [40] = */ 0,
		/* [41] = */ 0,
		/* [42] = */ 0,
		/* [43] = */ 0,
		/* [44] = */ 0,
		/* [45] = */ 0,
		/* [46] = */ 0,
		/* [47] = */ 0,
		/* [48] = */ 0,
		/* [49] = */ 0,
		/* [50] = */ 0,
		/* [51] = */ 0,
		/* [52] = */ 0,
		/* [53] = */ 0,
		/* [54] = */ 0,
		/* [55] = */ 0,
		/* [56] = */ 0,
		/* [57] = */ 0,
		/* [58] = */ 0,
		/* [59] = */ 0,
		/* [60] = */ 0,
		/* [61] = */ 0,
		/* [62] = */ 0,
		/* [63] = */ 0,
		/* [64] = */ 0,
		/* [65] = */ 0,
		/* [66] = */ 0,
		/* [67] = */ 0,
		/* [68] = */ 0,
		/* [69] = */ 0,
		/* [70] = */ 0,
		/* [71] = */ 0,
		/* [72] = */ 0,
		/* [73] = */ 0,
		/* [74] = */ 0,
		/* [75] = */ 0,
		/* [76] = */ 0,
		/* [77] = */ 0,
		/* [78] = */ 0,
		/* [79] = */ 0,
		/* [80] = */ 0,
		/* [81] = */ 0,
		/* [82] = */ 0,
		/* [83] = */ 0,
		/* [84] = */ 0,
		/* [85] = */ 0,
		/* [86] = */ 0,
		/* [87] = */ 0,
		/* [88] = */ 0,
		/* [89] = */ 0,
		/* [90] = */ 0,
		/* [91] = */ 0,
		/* [92] = */ 0,
		/* [93] = */ 0,
		/* [94] = */ 0,
		/* [95] = */ 0,
		/* [96] = */ 0,
		/* [97] = */ 0,
		/* [98] = */ 0,
		/* [99] = */ 0,
		/* [100] = */ 0,
		/* [101] = */ 0,
		/* [102] = */ 0,
		/* [103] = */ 0,
		/* [104] = */ 0,
		/* [105] = */ 0,
		/* [106] = */ 0,
		/* [107] = */ 0,
		/* [108] = */ 0,
		/* [109] = */ 0,
		/* [110] = */ 0,
		/* [111] = */ 0,
		/* [112] = */ 0,
		/* [113] = */ 0,
		/* [114] = */ 0,
		/* [115] = */ 0,
		/* [116] = */ 0,
		/* [117] = */ 0,
		/* [118] = */ 0,
		/* [119] = */ 0,
		/* [120] = */ 0,
		/* [121] = */ 0,
		/* [122] = */ 0,
		/* [123] = */ 0,
		/* [124] = */ 0,
		/* [125] = */ 0,
		/* [126] = */ 0,
		/* [127] = */ 0,
		/* [128] = */ 0,
		/* [129] = */ 0,
		/* [130] = */ 0,
		/* [131] = */ 0,
		/* [132] = */ 0,
		/* [133] = */ 0,
		/* [134] = */ 0,
		/* [135] = */ 0,
		/* [136] = */ 0,
		/* [137] = */ 0,
		/* [138] = */ 0,
		/* [139] = */ 0,
		/* [140] = */ 0,
		/* [141] = */ 0,
		/* [142] = */ 0,
		/* [143] = */ 0,
		/* [144] = */ 0,
		/* [145] = */ 0,
		/* [146] = */ 0,
		/* [147] = */ 0,
		/* [148] = */ 0,
		/* [149] = */ 0,
		/* [150] = */ 0,
		/* [151] = */ 0,
		/* [152] = */ 0,
		/* [153] = */ 0,
		/* [154] = */ 0,
		/* [155] = */ 0,
		/* [156] = */ 0,
		/* [157] = */ 0,
		/* [158] = */ 0,
		/* [159] = */ 0,
		/* [160] = */ 0,
		/* [161] = */ 0,
		/* [162] = */ 0,
		/* [163] = */ 0,
		/* [164] = */ 0,
		/* [165] = */ 0,
		/* [166] = */ 0,
		/* [167] = */ 0,
		/* [168] = */ 0,
		/* [169] = */ 0,
		/* [170] = */ 0,
		/* [171] = */ 0,
		/* [172] = */ 0,
		/* [173] = */ 0,
		/* [174] = */ 0,
		/* [175] = */ 0,
		/* [176] = */ 0,
		/* [177] = */ 0,
		/* [178] = */ 0,
		/* [179] = */ 0,
		/* [180] = */ 0,
		/* [181] = */ 0,
		/* [182] = */ 0,
		/* [183] = */ 0,
		/* [184] = */ 0,
		/* [185] = */ 0,
		/* [186] = */ 0,
		/* [187] = */ 0,
		/* [188] = */ 0,
		/* [189] = */ 0,
		/* [190] = */ 0,
		/* [191] = */ 0,
		/* [192] = */ 0,
		/* [193] = */ 0,
		/* [194] = */ 0,
		/* [195] = */ 0,
		/* [196] = */ 0,
		/* [197] = */ 0,
		/* [198] = */ 0,
		/* [199] = */ 0,
		/* [200] = */ 0,
		/* [201] = */ 0,
		/* [202] = */ 0,
		/* [203] = */ 0,
		/* [204] = */ 0,
		/* [205] = */ 0,
		/* [206] = */ 0,
		/* [207] = */ 0,
		/* [208] = */ 0,
		/* [209] = */ 0,
		/* [210] = */ 0,
		/* [211] = */ 0,
		/* [212] = */ 0,
		/* [213] = */ 0,
		/* [214] = */ 0,
		/* [215] = */ 0,
		/* [216] = */ 0,
		/* [217] = */ 0,
		/* [218] = */ 0,
		/* [219] = */ 0,
		/* [220] = */ 0,
		/* [221] = */ 0,
		/* [222] = */ 0,
		/* [223] = */ 0,
		/* [224] = */ 0,
		/* [225] = */ 0,
		/* [226] = */ 0,
		/* [227] = */ 0,
		/* [228] = */ 0,
		/* [229] = */ 0,
		/* [230] = */ 0,
		/* [231] = */ 0,
		/* [232] = */ 0,
		/* [233] = */ 0,
		/* [234] = */ 0,
		/* [235] = */ 0,
		/* [236] = */ 0,
		/* [237] = */ 0,
		/* [238] = */ 0,
		/* [239] = */ 0,
		/* [240] = */ 0,
		/* [241] = */ 0,
		/* [242] = */ 0,
		/* [243] = */ 0,
		/* [244] = */ 0,
		/* [245] = */ 0,
		/* [246] = */ 0,
		/* [247] = */ 0,
		/* [248] = */ 0,
		/* [249] = */ 0,
		/* [250] = */ 0,
		/* [251] = */ 0,
		/* [252] = */ 0,
		/* [253] = */ 0,
		/* [254] = */ 0,
		/* [255] = */ 0,
		/* [256] = */ 0,
		/* [257] = */ 0,
		/* [258] = */ 0,
		/* [259] = */ 0,
		/* [260] = */ 0,
		/* [261] = */ 0,
		/* [262] = */ 0,
		/* [263] = */ 0,
		/* [264] = */ 0,
		/* [265] = */ 0,
		/* [266] = */ 0,
		/* [267] = */ 0,
		/* [268] = */ 0,
		/* [269] = */ 0,
		/* [270] = */ 0,
		/* [271] = */ 0,
		/* [272] = */ 0,
		/* [273] = */ 0,
		/* [274] = */ 0,
		/* [275] = */ 0,
		/* [276] = */ 0,
		/* [277] = */ 0,
		/* [278] = */ 0,
		/* [279] = */ 0,
		/* [280] = */ 0,
		/* [281] = */ 0,
		/* [282] = */ 0,
		/* [283] = */ 0,
		/* [284] = */ 0,
		/* [285] = */ 0,
		/* [286] = */ 0,
		/* [287] = */ 0,
		/* [288] = */ 0,
		/* [289] = */ 0,
		/* [290] = */ 0,
		/* [291] = */ 0,
		/* [292] = */ 0,
		/* [293] = */ 0,
		/* [294] = */ 0,
		/* [295] = */ 0,
		/* [296] = */ 0,
		/* [297] = */ 0,
		/* [298] = */ 0,
		/* [299] = */ 0,
		/* [300] = */ 0,
		/* [301] = */ 0,
		/* [302] = */ 0,
		/* [303] = */ 0,
		/* [304] = */ 0,
		/* [305] = */ 0,
		/* [306] = */ 0,
		/* [307] = */ 0,
		/* [308] = */ 0,
		/* [309] = */ 0,
		/* [310] = */ 0,
		/* [311] = */ 0,
		/* [312] = */ 0,
		/* [313] = */ 0,
		/* [314] = */ 0,
		/* [315] = */ 0,
		/* [316] = */ 0,
		/* [317] = */ 0,
		/* [318] = */ 0,
		/* [319] = */ 0,
		/* [320] = */ 0,
		/* [321] = */ 0,
		/* [322] = */ 0,
		/* [323] = */ 0,
		/* [324] = */ 0,
		/* [325] = */ 0,
		/* [326] = */ 0,
		/* [327] = */ 0,
		/* [328] = */ 0,
		/* [329] = */ 0,
		/* [330] = */ 0,
		/* [331] = */ 0,
		/* [332] = */ 0,
		/* [333] = */ 0,
		/* [334] = */ 0,
		/* [335] = */ 0,
		/* [336] = */ 0,
		/* [337] = */ 0,
		/* [338] = */ 0,
		/* [339] = */ 0,
		/* [340] = */ 0,
		/* [341] = */ 0,
		/* [342] = */ 0,
		/* [343] = */ 0,
		/* [344] = */ 0,
		/* [345] = */ 0,
		/* [346] = */ 0,
		/* [347] = */ 0,
		/* [348] = */ 0,
		/* [349] = */ 0,
		/* [350] = */ 0,
		/* [351] = */ 0,
		/* [352] = */ 0,
		/* [353] = */ 0,
		/* [354] = */ 0,
		/* [355] = */ 0,
		/* [356] = */ 0,
		/* [357] = */ 0,
		/* [358] = */ 0,
		/* [359] = */ 0,
		/* [360] = */ 0,
		/* [361] = */ 0,
		/* [362] = */ 0,
		/* [363] = */ 0,
		/* [364] = */ 0,
		/* [365] = */ 0,
		/* [366] = */ 0,
		/* [367] = */ 0,
		/* [368] = */ 0,
		/* [369] = */ 0,
		/* [370] = */ 0,
		/* [371] = */ 0,
		/* [372] = */ 0,
		/* [373] = */ 0,
		/* [374] = */ 0,
		/* [375] = */ 0,
		/* [376] = */ 0,
		/* [377] = */ 0,
		/* [378] = */ 0,
		/* [379] = */ 0,
		/* [380] = */ 0,
		/* [381] = */ 0,
		/* [382] = */ 0,
		/* [383] = */ 0,
		/* [384] = */ 0,
		/* [385] = */ 0,
		/* [386] = */ 0,
		/* [387] = */ 0,
		/* [388] = */ 0,
		/* [389] = */ 0,
		/* [390] = */ 0,
		/* [391] = */ 0,
		/* [392] = */ 0,
		/* [393] = */ 0,
		/* [394] = */ 0,
		/* [395] = */ 0,
		/* [396] = */ 0,
		/* [397] = */ 0,
		/* [398] = */ 0,
		/* [399] = */ 0,
		/* [400] = */ 0,
		/* [401] = */ 0,
		/* [402] = */ 0,
		/* [403] = */ 0,
		/* [404] = */ 0,
		/* [405] = */ 0,
		/* [406] = */ 0,
		/* [407] = */ 0,
		/* [408] = */ 0,
		/* [409] = */ 0,
		/* [410] = */ 0,
		/* [411] = */ 0,
		/* [412] = */ 0,
		/* [413] = */ 0,
		/* [414] = */ 0,
		/* [415] = */ 0,
		/* [416] = */ 0,
		/* [417] = */ 0,
		/* [418] = */ 0,
		/* [419] = */ 0,
		/* [420] = */ 0,
		/* [421] = */ 0,
		/* [422] = */ 0,
		/* [423] = */ 0,
		/* [424] = */ 0,
		/* [425] = */ 0,
		/* [426] = */ 0,
		/* [427] = */ 0,
		/* [428] = */ 0,
		/* [429] = */ 0,
		/* [430] = */ 0,
		/* [431] = */ 0,
		/* [432] = */ 0,
		/* [433] = */ 0,
		/* [434] = */ 0,
		/* [435] = */ 0,
		/* [436] = */ 0,
		/* [437] = */ 0,
		/* [438] = */ 0,
		/* [439] = */ 0,
		/* [440] = */ 0,
		/* [441] = */ 0,
		/* [442] = */ 0,
		/* [443] = */ 0,
		/* [444] = */ 0,
		/* [445] = */ 0,
		/* [446] = */ 0,
		/* [447] = */ 0,
		/* [448] = */ 0,
		/* [449] = */ 0,
		/* [450] = */ 0,
		/* [451] = */ 0,
		/* [452] = */ 0,
		/* [453] = */ 0,
		/* [454] = */ 0,
		/* [455] = */ 0,
		/* [456] = */ 0,
		/* [457] = */ 0,
		/* [458] = */ 0,
		/* [459] = */ 0,
		/* [460] = */ 0,
		/* [461] = */ 0,
		/* [462] = */ 0,
		/* [463] = */ 0,
		/* [464] = */ 0,
		/* [465] = */ 0,
		/* [466] = */ 0,
		/* [467] = */ 0,
		/* [468] = */ 0,
		/* [469] = */ 0,
		/* [470] = */ 0,
		/* [471] = */ 0,
		/* [472] = */ 0,
		/* [473] = */ 0,
		/* [474] = */ 0,
		/* [475] = */ 0,
		/* [476] = */ 0,
		/* [477] = */ 0,
		/* [478] = */ 0,
		/* [479] = */ 0,
		/* [480] = */ 0,
		/* [481] = */ 0,
		/* [482] = */ 0,
		/* [483] = */ 0,
		/* [484] = */ 0,
		/* [485] = */ 0,
		/* [486] = */ 0,
		/* [487] = */ 0,
		/* [488] = */ 0,
		/* [489] = */ 0,
		/* [490] = */ 0,
		/* [491] = */ 0,
		/* [492] = */ 0,
		/* [493] = */ 0,
		/* [494] = */ 0,
		/* [495] = */ 0,
		/* [496] = */ 0,
		/* [497] = */ 0,
		/* [498] = */ 0,
		/* [499] = */ 0,
		/* [500] = */ 0,
		/* [501] = */ 0,
		/* [502] = */ 0,
		/* [503] = */ 0,
		/* [504] = */ 0,
		/* [505] = */ 0,
		/* [506] = */ 0,
		/* [507] = */ 0,
		/* [508] = */ 0,
		/* [509] = */ 0,
		/* [510] = */ 0,
		/* [511] = */ 0
	},
	/* .m_vFrustCorners = */ {
		/* [0] = */ {
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
		/* [1] = */ {
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
		/* [2] = */ {
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
		/* [3] = */ {
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
		/* [4] = */ {
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
	/* .m_clipRatio = */ 0.f,
	/* .m_viewNeedsSettingUp = */ false
};

float _p1yshift = 0.18f;
float _p1xshift = 1.28f;

bool _drawPlayer[2] = {
	/* [0] = */ true,
	/* [1] = */ false
};

int _nLoops = 0;
bool _splitportal = false;
bool _usemask = true;
bool _newvp = true;
float _2pdivBlend = 0.04f;

__vtbl_ptr_type ELiveMode virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ELiveMode::~ELiveMode,
		/* .__delta2 = */ 22896
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ELiveMode::Init,
		/* .__delta2 = */ 23096
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ELiveMode::Update,
		/* .__delta2 = */ 26480
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ELiveMode::Draw,
		/* .__delta2 = */ 30224
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ELiveMode::Reset,
		/* .__delta2 = */ 25800
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EGameState virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameState::~EGameState,
		/* .__delta2 = */ 13440
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
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [6] = */ {
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

EGEPackedParticle _2pDivParticle = {
	/* .x = */ 0.f,
	/* .y = */ 0.f,
	/* .z = */ 0.f,
	/* .rot = */ 0.f,
	/* .width = */ 0.f,
	/* .height = */ 0.f,
	/* .rot180 = */ 0,
	/* .pad1 = */ 0,
	/* .r = */ 0,
	/* .g = */ 0,
	/* .b = */ 0,
	/* .a = */ 0
};

ELiveMode* ELiveMode::ELiveMode() {
	EGameState *this;
	EGameStateId *this;
	EVec3 vPos;
	
  undefined *puVar1;
  EUITextIconDef *pEVar2;
  EFontAlignY *pEVar3;
  uint *puVar4;
  EUIIconDef *pEVar5;
  int *piVar6;
  EUIVirtualCtrl **ppEVar7;
  uint uVar8;
  ulong *puVar9;
  EUIStaticTextIcon *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar10;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EUIIconDef local_1a0;
  uint local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  EVec3 vPos;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  EUITextIconDef local_140;
  EUIIconDef local_120;
  EUIIconDef__vtable *local_100;
  EVec3 *local_e0;
  uint local_d0;
  undefined4 uStack_cc;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
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
  
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
                    /* end of inlined section */
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  iVar10 = 0;
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  this_00 = (EUIStaticTextIcon *)this->m_Prompts;
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_selColorIdx = 0;
  local_1a0.m_colorIdx = 1;
  (this->field0_0x0).m_state.m_id = 0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EGameState__vtable *)_vt_9ELiveMode;
                    /* end of inlined section */
  local_1a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon,&local_1a0,0,0,0x40);
  local_e0 = (EVec3 *)&local_150;
  local_c0 = 0x40;
  uStack_bc = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_1a0.m_flags = 0;
    local_1a0.m_selColorIdx = 0;
                    /* end of inlined section */
    iVar10 = iVar10 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1a0.m_colorIdx = 1;
    local_1a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_17c = 0;
    local_178 = 0;
    local_174 = 0x41400000;
    local_170 = 0;
    local_16c = 1;
    local_168 = CONCAT22(local_168._2_2_,0xffff);
    vPos.field0_0x0.d[2] = 0.0;
    vPos.field0_0x0.d[1] = 0.0;
    vPos.field0_0x0.d[0] = 0.0;
    local_148 = 0;
    local_14c = 0;
    local_150 = 0;
    local_140.m_xAlign = E_FAX_LEFT;
    local_140.m_yAlign = E_FAY_TOP;
    local_140.m_pointsize = 12.0;
    local_140.m_selColorIdx = 0;
    local_140.m_colorIdx = 1;
    local_140.m_retChar = -1;
    local_120.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_120.m_flags = 0;
    local_120.m_selColorIdx = 0;
    local_120.m_colorIdx = 1;
    local_120.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_1a0.m_trigger = local_c0;
    local_180 = local_d0;
    local_140.m_maxChars = local_d0;
    local_120.m_trigger = local_c0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (this_00,&local_140,&local_120,-1,local_e0);
    local_120.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (this_00->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_xAlign + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_17c,local_180) >> (7 - uVar8) * 8;
    pEVar2 = &(this_00->field0_0x0).m_textdef;
    uVar8 = (uint)pEVar2 & 7;
    puVar9 = (ulong *)((int)pEVar2 - uVar8);
    *puVar9 = CONCAT44(local_17c,local_180) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_pointsize + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_174,local_178) >> (7 - uVar8) * 8;
    pEVar3 = &(this_00->field0_0x0).m_textdef.m_yAlign;
    uVar8 = (uint)pEVar3 & 7;
    puVar9 = (ulong *)((int)pEVar3 - uVar8);
    *puVar9 = CONCAT44(local_174,local_178) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_16c,local_170) >> (7 - uVar8) * 8;
    puVar4 = &(this_00->field0_0x0).m_textdef.m_selColorIdx;
    uVar8 = (uint)puVar4 & 7;
    puVar9 = (ulong *)((int)puVar4 - uVar8);
    *puVar9 = CONCAT44(local_16c,local_170) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    *(undefined4 *)&(this_00->field0_0x0).m_textdef.m_retChar = local_168;
    local_100 = (this_00->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_1a0.m_trigger,local_1a0.m_flags) >> (7 - uVar8) * 8;
    pEVar5 = &(this_00->field0_0x0).field0_0x0.m_def;
    uVar8 = (uint)pEVar5 & 7;
    puVar9 = (ulong *)((int)pEVar5 - uVar8);
    *puVar9 = CONCAT44(local_1a0.m_trigger,local_1a0.m_flags) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_1a0.m_colorIdx,local_1a0.m_selColorIdx) >> (7 - uVar8) * 8;
    piVar6 = &(this_00->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar8 = (uint)piVar6 & 7;
    puVar9 = (ulong *)((int)piVar6 - uVar8);
    *puVar9 = CONCAT44(local_1a0.m_colorIdx,local_1a0.m_selColorIdx) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_1a0.__vtable,local_1a0.m_pCtrl) >> (7 - uVar8) * 8;
    ppEVar7 = &(this_00->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar8 = (uint)ppEVar7 & 7;
    puVar9 = (ulong *)((int)ppEVar7 - uVar8);
    *puVar9 = CONCAT44(local_1a0.__vtable,local_1a0.m_pCtrl) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    (this_00->field0_0x0).field0_0x0.m_def.__vtable = local_100;
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    this_00 = (EUIStaticTextIcon *)&this_00[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar10 != -1);
  __10EPromptBar(&this->m_PromptBar);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  (this->field0_0x0).m_state.m_id = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  this->m_pXIcon = (ERShader *)0x0;
  this->m_p2PlayerDivShad = (ERShader *)0x0;
  this->m_pPanel = (EPanel *)0x0;
  *(undefined4 *)&this->m_Initialized = 0;
  this->m_FinalScreen = 0;
  this->m_ClearFinalScreenCounter = 0;
  this->m_pUpShdr = (ERShader *)0x0;
  this->m_pDownShdr = (ERShader *)0x0;
  this->m_pLeftShdr = (ERShader *)0x0;
  this->m_pRightShdr = (ERShader *)0x0;
  this->m_pDPadBack = (ERShader *)0x0;
  this->m_pBlankShdr = (ERShader *)0x0;
  this->m_pMenuBevelShdr = (ERShader *)0x0;
  return this;
}

void ELiveMode::~ELiveMode(int __in_chrg) {
	EGameState *this;
	EGameStateId *this;
	void *pAddress;
	void *ptr;
	void *ptr;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIPrompt *pEVar3;
  
  (this->field0_0x0).__vtable = (EGameState__vtable *)_vt_9ELiveMode;
  ___10EPromptBar(&this->m_PromptBar,2);
  if ((this != (ELiveMode *)0xffffff00) && (this->m_Prompts != (EUIPrompt *)&this->m_PromptBar)) {
    pEVar3 = this->m_Prompts;
    do {
      pEVar2 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2->Draw)
                ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->Update + 4,0);
      bVar1 = this->m_Prompts != pEVar3;
      pEVar3 = pEVar3 + -1;
    } while (bVar1);
  }
  ___7EUIIcon(&this->m_XIcon,2);
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
                    /* end of inlined section */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EGameState__vtable *)_vt_10EGameState;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void ELiveMode::Init(int FromState) {
	EUIIcon *this;
	EGraphics *this;
	EGraphics *this;
	EHouse *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  short sVar5;
  EUIObjectNode__vtable *pEVar6;
  uint uVar7;
  ulong *puVar8;
  ERShader *pEVar9;
  short *psVar10;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  EUIIcon *this_00;
  undefined8 unaff_s3;
  EUIPrompt *this_01;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  int iVar11;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  __vtbl_ptr_type *local_bc;
  EUIIconDef__vtable *local_b0;
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
  
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
                    /* end of inlined section */
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  _2pDivParticle.width = _2pDivWidth;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  _2pDivParticle.height = _2pDivHeight;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  _2pDivParticle.rot = 0.7853982;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  this_00 = &this->m_XIcon;
                    /* end of inlined section */
  _2pDivParticle.rot180 = 0;
  this_01 = this->m_Prompts;
  this->m_InitializationStage = 0;
  _globals._HighScoreDialogState = '\0';
  _globals.m_nChallengePlayerNum = 0;
  _globals.m_nChallengeScore = 0;
  _globals.m_nChallengeComponent1 = 0;
  _globals.m_nChallengeComponent2 = 0;
  _globals.m_nChallengeComponent3 = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  _globals.m_nChallengeComponent4 = 0;
  pEVar9 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x32272593,(EFile *)0x0,0);
  this->m_pUpShdr = pEVar9;
  pEVar9 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xcbf05ef5,(EFile *)0x0,0);
  this->m_pDownShdr = pEVar9;
  pEVar9 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xad6829a6,(EFile *)0x0,0);
  this->m_pLeftShdr = pEVar9;
  pEVar9 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf3afb5a5,(EFile *)0x0,0);
  this->m_pRightShdr = pEVar9;
  pEVar9 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2d14ac7d,(EFile *)0x0,0);
  this->m_pDPadBack = pEVar9;
  pEVar9 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
  this->m_pBlankShdr = pEVar9;
  pEVar9 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
  local_c4 = 1;
                    /* end of inlined section */
  this->m_pMenuBevelShdr = pEVar9;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_c8 = 0;
  local_c0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_b0 = (this->m_XIcon).m_def.__vtable;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->m_XIcon).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->m_XIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &(this->m_XIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_XIcon).m_def.__vtable = local_b0;
  local_bc = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar11 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_d0 = 0.05;
                    /* end of inlined section */
  local_cc = 32.0 / (float)iVar11;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_00,-0x3e263a13);
  InitInActiveShader__7EUIIconi(this_00,-0x3e263a13);
  pEVar6 = this->m_Prompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"select_action_prompt");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(this_01->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,
             psVar10,0x20);
  AddIcon__9EUIPromptP7EUIIcon(this_01,this_00);
  Init__10EPromptBar(&this->m_PromptBar);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  local_d0 = (_13EUIObjectNode_SAFE_RIGHT + 0.178) * 0.5;
  local_cc = _13EUIObjectNode_SAFE_BOTTOM - 23.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(&this->m_PromptBar,this_01,1,(EVec2 *)&local_d0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectFolder->__vtable->GetLeadSelector)
            ((int)&_5Globs_pObjectFolder->__vtable +
             (int)*(short *)&_5Globs_pObjectFolder->__vtable->GetSubTileSelector);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectFolder->__vtable[1].PreloadSelectors)
            ((int)&_5Globs_pObjectFolder->__vtable +
             (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].GetAnimPreloadList);
  ResumeSounds__12cSoundPlayer(_5Globs_pSound);
                    /* inlined from /eor/src2/engine/texture/e_textureman.h */
  _pMaskTexture =
       (ERTexture *)
       AddRef__16EResourceManagerUiP5EFilei(&_textureman.field0_0x0,0xbcb1ad91,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_ModeTransitionedFrom = FromState;
  *(undefined4 *)&this->m_BackgroundColorSet = 0;
  *(undefined4 *)&this->m_bStoryModeIntroScreenUp = 0;
  *(undefined4 *)&this->m_bAskingToSave = 0;
  while (this->m_pXIcon != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pXIcon->field0_0x0);
    this->m_pXIcon = (ERShader *)0x0;
  }
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar9 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc1d9c5ed,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pXIcon = pEVar9;
  while (this->m_p2PlayerDivShad != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_p2PlayerDivShad->field0_0x0);
    this->m_p2PlayerDivShad = (ERShader *)0x0;
  }
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar9 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x52357084,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_p2PlayerDivShad = pEVar9;
  if (_globals._pCurHouse == (EHouse__26_3190 *)0x0) {
                    /* end of inlined section */
    ReadFromFile__10NghResFilePCc(_5Globs_pNghResFile,"default.ngh");
    SetCurHouse__7EGlobali(&_globals,7);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
  }
                    /* end of inlined section */
  SetCurrentHouse__10NghResFileUi(_5Globs_pNghResFile,(_globals._pCurHouse)->m_lotNum);
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
  __16EResourceManager_m_bTraceEnabled = 0;
                    /* end of inlined section */
  LoadGamePrep__16ESimsDataManagerb(&_simsdataman,false);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  this->m_LoadProgress = 0.0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  _13EUIObjectNode_m_uiSfxBack = PlayGoBackLive__8EUiAudio;
  _13EUIObjectNode_m_uiSfxSelect = PlaySelectLive__8EUiAudio;
  _13EUIObjectNode_m_uiSfxNext = PlayMoveLive__8EUiAudio;
                    /* end of inlined section */
  this->m_FadeOutPercent = 0.0;
  this->m_TimeAccumulator = 0.0;
  return;
}

bool ELiveMode::initContinue() {
	EHouse *this;
	
  cSimulator__vtable *pcVar1;
  cSimulator *pcVar2;
  EPanel *this_00;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pcVar2 = _5Globs_pSimulator;
  iVar4 = this->m_InitializationStage;
  if (iVar4 == 0) {
    fVar6 = GetLoadProgress__16ESimsDataManager(&_simsdataman);
    this->m_LoadProgress = fVar6;
    if (0.0 <= fVar6) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
      if (_globals.m_pStoryModeTransitionShader == (ERShader *)0x0) {
        fVar7 = 0.6;
        fVar5 = 0.2;
      }
      else {
        fVar7 = 0.2;
        fVar5 = 0.6;
      }
      _globals.m_GenTransitionLoadPercent = fVar6 * fVar7 + fVar5;
    }
    else {
      this->m_InitializationStage = 1;
      _globals.m_GenTransitionLoadPercent = 0.8;
    }
  }
  else if (iVar4 == 1) {
    this->m_FinalScreen = 0;
    if (this->m_ClearFinalScreenCounter < 2) {
      this->m_ClearFinalScreenCounter = 2;
    }
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
    __16EResourceManager_m_bTraceEnabled = iVar4;
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pNeighborhood->__vtable->FindNeighborByGUID)
              ((int)&_5Globs_pNeighborhood->__vtable +
               (int)*(short *)&_5Globs_pNeighborhood->__vtable->FindNeighborByID,_5Globs_pNghResFile
               ,(_globals._pCurHouse)->m_lotNum,_globals.m_FamilyToMoveIn);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar3 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
    if (lVar3 == 1) {
      MergeNghUnlockedToGlobal__Fv();
    }
    _globals.m_GenTransitionLoadPercent = 0.81;
    this->m_InitializationStage = 2;
  }
  else {
    if (iVar4 == 2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable->GetPreviousExpenses)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable->GetTodaysExpenses);
      pcVar1 = pcVar2->__vtable;
      (*(code *)pcVar1->SetTimeOfDay)
                ((int)&pcVar2->__vtable + (int)*(short *)&pcVar1->GetTimeOfDay,0);
      SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kLive);
      Init__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
      _globals.m_GenTransitionLoadPercent = 0.82;
      iVar4 = 3;
    }
    else {
      if (iVar4 == 3) {
        _globals.m_GenTransitionLoadPercent = 0.84;
        this->m_InitializationStage = 4;
        return true;
      }
      if (iVar4 == 4) {
        InitStage1__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
        _globals.m_GenTransitionLoadPercent = 0.85;
        iVar4 = 5;
      }
      else if (iVar4 == 5) {
        InitStage2__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
        _globals.m_GenTransitionLoadPercent = 0.87;
        iVar4 = 6;
      }
      else if (iVar4 == 6) {
        InitStage3__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
        _globals.m_GenTransitionLoadPercent = 0.88;
        iVar4 = 7;
      }
      else if (iVar4 == 7) {
        InitStage4__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
        _globals.m_GenTransitionLoadPercent = 0.9;
        iVar4 = 8;
      }
      else if (iVar4 == 8) {
        InitStage5__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
        _globals.m_GenTransitionLoadPercent = 0.91;
        iVar4 = 9;
      }
      else if (iVar4 == 9) {
        InitStage6__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
        _globals.m_GenTransitionLoadPercent = 0.93;
        iVar4 = 10;
      }
      else {
        iVar4 = this->m_InitializationStage;
        if (iVar4 == 10) {
          InitStage7__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
          _globals.m_GenTransitionLoadPercent = 0.94;
          iVar4 = 0xb;
        }
        else if (iVar4 == 0xb) {
          InitStage8__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
          _globals.m_GenTransitionLoadPercent = 0.96;
          iVar4 = 0xc;
        }
        else if (iVar4 == 0xc) {
          InitStage9__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
          _globals.m_GenTransitionLoadPercent = 0.97;
          iVar4 = 0xd;
        }
        else {
          if (iVar4 != 0xd) {
            *(undefined4 *)&this->m_AlreadyGameOver = 0;
            this->m_ResetTimeout = 1200.0;
            *(undefined4 *)&this->field_0x3c = 0;
            *(undefined4 *)this->m_VibrationReady = 0;
            _globals._324_4_ = 0;
            if (_globals._360_4_ != 0) {
              *(undefined4 *)&this->m_bAskingToSave = 0;
              *(undefined4 *)&this->m_bStoryModeIntroScreenUp = 1;
              _globals._360_4_ = 0;
              _globals.m_pStoryModeTransitionText = (short *)0x0;
              while (_globals.m_pStoryModeTransitionShader != (ERShader *)0x0) {
                DelRef__9EResource(&(_globals.m_pStoryModeTransitionShader)->field0_0x0);
                _globals.m_pStoryModeTransitionShader = (ERShader *)0x0;
              }
              StartStoryModeBeginScreen__9ELiveMode(this);
              StopAllVibration__8EVibrate(_globals.m_pVibrate);
            }
            Update__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
            Update__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
            if (_globals._384_4_ != 0) {
              while (_globals.m_pStoryModeTransitionShader != (ERShader *)0x0) {
                DelRef__9EResource(&(_globals.m_pStoryModeTransitionShader)->field0_0x0);
                _globals.m_pStoryModeTransitionShader = (ERShader *)0x0;
              }
              _globals._384_4_ = 0;
              _globals.m_pStoryModeTransitionShader = (ERShader *)0x0;
            }
            if (_globals._372_4_ == 1) {
              _globals._372_4_ = 0;
              *(undefined4 *)&this->m_bAskingToSave = 0;
              *(undefined4 *)&this->m_bStoryModeIntroScreenUp = 1;
              StartStoryModeBeginScreen__9ELiveMode(this);
              Message__7EGlobalPvUi(&_globals,(void *)0x0,0x29);
              StopAllVibration__8EVibrate(_globals.m_pVibrate);
              *(undefined4 *)&this->m_bGoingToCreditsMode = 0;
            }
            else {
              *(undefined4 *)&this->m_bGoingToCreditsMode = 0;
            }
            *(undefined4 *)&this->m_bGoingToNeighborhoodMode = 0;
            _globals._380_4_ = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
            (*(code *)_5Globs_pHouse->__vtable[1].GetHouseStats)
                      ((int)&_5Globs_pHouse->__vtable +
                       (int)*(short *)&_5Globs_pHouse->__vtable[1].SetDescription);
            _globals.m_GenTransitionLoadPercent = 1.01;
            return false;
          }
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
          this_00 = (EPanel *)_memmanAlloc__FUiUi(0x61f0,0x10);
                    /* end of inlined section */
          _globals._pPanel = __6EPanel(this_00);
          this->m_pPanel = _globals._pPanel;
          Init__6EPanel(this->m_pPanel);
          PostLoadGame__16ESimsDataManager(&_simsdataman);
          _globals.m_GenTransitionLoadPercent = 1.0;
          iVar4 = 0xe;
        }
      }
    }
    this->m_InitializationStage = iVar4;
  }
  return true;
}

void ELiveMode::initDrawContinue(ERC *prc) {
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (0 < this->m_ClearFinalScreenCounter) {
    this->m_ClearFinalScreenCounter = 2;
  }
  Select__8ERShaderP3ERCi(_globals.m_pBlackShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_6c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_70 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_5c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_60 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_50 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_4c = 0x3f800000;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_30 = 0x3f800000;
  local_24 = 0x3f800000;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_70,&local_60,
             &local_50,&local_40,&local_30);
  return;
}

void ELiveMode::Reset(int ToState) {
  EPanel *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  int iVar3;
  long lVar4;
  ERShader *pEVar5;
  
  this->m_FadeOutPercent = 0.0;
  StopAllVibration__8EVibrate(_globals.m_pVibrate);
  while (_pMaskTexture != (ERTexture *)0x0) {
    DelRef__9EResource(&_pMaskTexture->field0_0x0);
    _pMaskTexture = (ERTexture *)0x0;
  }
  while (this->m_pXIcon != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pXIcon->field0_0x0);
    this->m_pXIcon = (ERShader *)0x0;
  }
  pEVar5 = this->m_p2PlayerDivShad;
  while (pEVar5 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar5->field0_0x0);
    this->m_p2PlayerDivShad = (ERShader *)0x0;
    pEVar5 = this->m_p2PlayerDivShad;
  }
  pEVar1 = this->m_pPanel;
  if (pEVar1 != (EPanel *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pEVar2->Draw)((int)pEVar1->m_messageFns + *(short *)&pEVar2->Update + -0x3c,3);
  }
  this->m_pPanel = (EPanel *)0x0;
  _globals._pCursor[1] = (ESimsCursor__67_3982 *)0x0;
  _globals._pPanel = (EPanel *)0x0;
  _globals._pCurCam = (ESimsCam *)0x0;
  _globals._pCurLights = (ELights *)0x0;
  _globals._pCursor[0] = (ESimsCursor__67_3982 *)0x0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  _13EUIObjectNode_m_uiSfxBack = (undefined1 *)0x0;
  _13EUIObjectNode_m_uiSfxSelect = (undefined1 *)0x0;
  _13EUIObjectNode_m_uiSfxNext = (undefined1 *)0x0;
  while (this->m_pUpShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pUpShdr->field0_0x0);
    this->m_pUpShdr = (ERShader *)0x0;
  }
  pEVar5 = this->m_pDownShdr;
  while (pEVar5 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar5->field0_0x0);
    this->m_pDownShdr = (ERShader *)0x0;
    pEVar5 = this->m_pDownShdr;
  }
  pEVar5 = this->m_pLeftShdr;
  while (pEVar5 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar5->field0_0x0);
    this->m_pLeftShdr = (ERShader *)0x0;
    pEVar5 = this->m_pLeftShdr;
  }
  pEVar5 = this->m_pRightShdr;
  while (pEVar5 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar5->field0_0x0);
    this->m_pRightShdr = (ERShader *)0x0;
    pEVar5 = this->m_pRightShdr;
  }
  pEVar5 = this->m_pDPadBack;
  while (pEVar5 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar5->field0_0x0);
    this->m_pDPadBack = (ERShader *)0x0;
    pEVar5 = this->m_pDPadBack;
  }
  pEVar5 = this->m_pBlankShdr;
  while (pEVar5 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar5->field0_0x0);
    this->m_pBlankShdr = (ERShader *)0x0;
    pEVar5 = this->m_pBlankShdr;
  }
  pEVar5 = this->m_pMenuBevelShdr;
  while (pEVar5 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar5->field0_0x0);
    this->m_pMenuBevelShdr = (ERShader *)0x0;
    pEVar5 = this->m_pMenuBevelShdr;
  }
  if (_globals._pCurHouse != (EHouse__26_3190 *)0x0) {
    ___6EHouse((EHouse__2_990 *)_globals._pCurHouse,3);
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/iobject.h */
  _globals._pCurHouse = (EHouse__26_3190 *)0x0;
                    /* end of inlined section */
  *(undefined4 *)&this->m_Initialized = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/iobject.h */
  RemoveAll__13ERedBlackTree(&_16ISimsObjectModel_m_updateCalc3List.field0_0x0);
  RemoveAll__13ERedBlackTree(&_16ISimsObjectModel_m_lightmapComputeList.field0_0x0);
                    /* end of inlined section */
  Clean__7EDialog(_globals.m_pDialog);
  _globals.m_pMessDialogs[0]->m_timeOut = 0.0;
  *(undefined4 *)&_globals.m_pMessDialogs[0]->m_bVis = 0;
  _globals.m_pMessDialogs[1]->m_timeOut = 0.0;
  *(undefined4 *)&_globals.m_pMessDialogs[1]->m_bVis = 0;
  Reset__10EPromptBar(&this->m_PromptBar);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_Prompts);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
                    /* end of inlined section */
  if ((_5Globs_pNeighborhood != (Neighborhood *)0x0) &&
     (lVar4 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1),
     lVar4 == 2)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar3 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    *(undefined2 *)(iVar3 + 0x2e6) = 0;
  }
  return;
}

void ELiveMode::Update() {
	SInt16 freeWillOverride;
	bool Quit;
	int Option;
	ESimsCam *pCam;
	EPanel *this;
	EPanel *this;
	EVanityMirrorMenu *this;
	EPanel *this;
	ESimsCam *pCam;
	EPanel *this;
	EPanel *this;
	EWardrobeMenu *this;
	EPanel *this;
	EPanel *this;
	ECheats *this;
	EPanel *this;
	bool animpaused;
	float speedMult;
	SimSpeed speed;
	float scale;
	EHouse *this;
	s32 nNewScoreIndex;
	
  EUIVirtualCtrl__vtable *pEVar1;
  EGlobalManagerClient__vtable *pEVar2;
  ESimsCam *pEVar3;
  Panelstateman__vtable *pPVar4;
  EUIObjectNode__vtable *pEVar5;
  bool bVar6;
  EResource *pEVar7;
  int iVar8;
  short *sText;
  uint uVar9;
  EPanel *pEVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  float fVar14;
  EGameStateId local_80 [4];
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
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (*(int *)&this->m_Initialized == 0) {
    bVar6 = initContinue__9ELiveMode(this);
    if (bVar6) {
      return;
    }
    *(undefined4 *)&this->m_Initialized = 1;
    this->m_FadeinTimeLeft = 2.0;
    this->m_FadeinTime = 2.0;
    iVar12 = *(int *)&this->m_bGoingToNeighborhoodMode;
  }
  else {
    iVar12 = *(int *)&this->m_bGoingToNeighborhoodMode;
  }
  if (iVar12 != 0) {
    if (this->m_FadeOutPercent < 2.0) {
      fVar14 = this->m_FadeOutPercent + _dt;
      this->m_FadeOutPercent = fVar14;
      if (fVar14 < 2.0) {
        return;
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      _globals._380_4_ = 1;
      (*(code *)_5Globs_pObjectModule->__vtable->GetSim)
                ((int)&_5Globs_pObjectModule->__vtable +
                 (int)*(short *)&_5Globs_pObjectModule->__vtable->PreviewAnimation);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pHouse->__vtable[1].SetFamilyToNull)
                ((int)&_5Globs_pHouse->__vtable +
                 (int)*(short *)&_5Globs_pHouse->__vtable[1].GetFurnishingsScoreCurve);
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
      __16EResourceManager_m_bTraceEnabled = 0;
      AddRefAsync__16EResourceManagerUi(&_datasetman.field0_0x0,0x6bc3a0fe);
                    /* end of inlined section */
      _globals._360_4_ = *(undefined4 *)&this->m_bDisplayStoryModeTransitionScreen;
      return;
    }
    pEVar7 = GetRef__16EResourceManagerUi(&_datasetman.field0_0x0,0x6bc3a0fe);
    if (pEVar7 == (EResource *)0x0) {
      StopAllVibration__8EVibrate(_globals.m_pVibrate);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
      if (_globals.m_pStoryModeTransitionShader != (ERShader *)0x0) {
                    /* end of inlined section */
        _globals.m_GenTransitionLoadPercent = _datasetman.m_fLoadProgress * 0.3;
        return;
      }
      _globals.m_GenTransitionLoadPercent = _datasetman.m_fLoadProgress;
      return;
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
    __16EResourceManager_m_bTraceEnabled = 1;
                    /* end of inlined section */
    QuietAll__12cSoundPlayer(_5Globs_pSound);
    SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kLoad);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
    if (_globals.m_pStoryModeTransitionShader == (ERShader *)0x0) {
      _globals.m_GenTransitionLoadPercent = 1.0;
    }
    else {
      _globals.m_GenTransitionLoadPercent = 0.3;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
                    /* end of inlined section */
    local_80[0].m_id = 2;
    SetState__13EGameStateManG12EGameStateId(_app.m_pGameStateMan,local_80);
    return;
  }
  if (*(int *)&this->m_bStoryModeIntroScreenUp == 1) {
    if (*(int *)&this->m_bAskingToSave == 1) {
      iVar12 = 0;
      if ((*(int *)&this->m_bWaitForSaveReturn == 1) &&
         (iVar12 = *(int *)&this->m_bStoryModeIntroScreenUp,
         *(int *)&(_globals.m_pMemCard)->m_bSaveSuccessful != 1)) {
        iVar12 = 0;
      }
      if (iVar12 == 0) {
        iVar8 = DialogUpdate__11EDialogMenu(&(this->m_pPanel->m_pausePanel).m_DialogMenu);
        if (iVar8 == 0) {
          if (*(int *)&this->m_bXIsDown != 0) {
            return;
          }
          SetSaveNeighborhoodAndConfigMode__12ESimsMemCard(_globals.m_pMemCard);
          *(undefined4 *)&this->m_bWaitForSaveReturn = 1;
        }
        if ((iVar8 == -2) || (iVar8 == 1)) {
          iVar12 = 1;
          *(undefined4 *)&this->m_bXIsDown = 0;
        }
        else {
          *(undefined4 *)&this->m_bXIsDown = 0;
        }
      }
      if (iVar12 != 1) {
        return;
      }
      *(undefined4 *)&this->m_bStoryModeIntroScreenUp = 0;
      _globals._360_4_ = 0;
      _globals.m_pStoryModeTransitionText = (short *)0x0;
      while (_globals.m_pStoryModeTransitionShader != (ERShader *)0x0) {
        DelRef__9EResource(&(_globals.m_pStoryModeTransitionShader)->field0_0x0);
        _globals.m_pStoryModeTransitionShader = (ERShader *)0x0;
      }
      Message__7EGlobalPvUi(&_globals,(void *)0x0,0x2a);
      return;
    }
    *(undefined4 *)&this->m_bXIsDown = 0;
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar13 = (*(code *)pEVar1[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0
                        ,0x40);
    if (lVar13 == 0) {
      return;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
                    /* end of inlined section */
    pEVar10 = this->m_pPanel;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_70 = 0x3e4ccccd;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_6c = 0x3e99999a;
                    /* end of inlined section */
    sText = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"save_story_dialog");
    SetupDialog__11EDialogMenuG5EVec2fiPPCUsPCUsb
              (&(pEVar10->m_pausePanel).m_DialogMenu,(EVec2 *)&local_70,0.6,2,
               (pEVar10->m_pausePanel).m_ppYesNoOptions,sText,false);
    *(undefined4 *)&this->m_bXIsDown = 1;
    *(undefined4 *)&this->m_bWaitForSaveReturn = 0;
    *(undefined4 *)&this->m_bAskingToSave = 1;
  }
  uVar9 = GetDownButtons__11EControlleri(_ctrlPads[0],0x800);
  if ((uVar9 == 0) || (uVar9 = GetDownButtons__11EControlleri(_ctrlPads[0],0x100), uVar9 == 0)) {
    _fReBoot = 0.0;
  }
  else {
    _fReBoot = _fReBoot + _dt;
  }
  if (3.0 < _fReBoot) {
    pEVar2 = (_pEngine->field0_0x0).__vtable;
    (*(code *)pEVar2[5].ManagedShutdown)
              ((int)_pEngine->m_retraceHistoryCpu + *(short *)&pEVar2[5].ManagedStartup + -0x28);
  }
  if (_globals._VanityMirrorState == '\x01') {
    Update__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
    pEVar3 = this->m_pPanel->m_pCameras[0];
                    /* end of inlined section */
    if (pEVar3 == (ESimsCam *)0x0) {
      pEVar3 = this->m_pPanel->m_pCameras[1];
    }
    else {
      pPVar4 = (pEVar3->field0_0x0).__vtable;
      (*(code *)pPVar4[2].Panelstateman)
                ((int)&(pEVar3->field0_0x0).m_state + (int)*(short *)(pPVar4 + 2));
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
      pEVar3 = this->m_pPanel->m_pCameras[1];
    }
                    /* end of inlined section */
    if (pEVar3 != (ESimsCam *)0x0) {
      pPVar4 = (pEVar3->field0_0x0).__vtable;
      (*(code *)pPVar4[2].Panelstateman)
                ((int)&(pEVar3->field0_0x0).m_state + (int)*(short *)(pPVar4 + 2));
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/vanitymirror.h */
                    /* end of inlined section */
    _globals._VanityMirrorState = '\x02';
                    /* inlined from c:/eor/src2/games/sims/ESRC/vanitymirror.h */
                    /* end of inlined section */
    MoveCamera__17EVanityMirrorMenuP8ESimsCam
              (_globals._pVanityMirror,
               this->m_pPanel->m_pCameras[(_globals._pVanityMirror)->m_nControllerID]);
LAB_00176cf4:
    Message__7EGlobalPvUi(&_globals,(void *)0x0,0x29);
    return;
  }
  if (_globals._VanityMirrorState == '\x02') {
    bVar6 = MirrorUpdate__17EVanityMirrorMenu(_globals._pVanityMirror);
    if (!bVar6) {
      return;
    }
    if (_globals._pVanityMirror != (EVanityMirrorMenu *)0x0) {
      pEVar5 = ((_globals._pVanityMirror)->field0_0x0).__vtable;
      (*(code *)pEVar5->Draw)
                ((int)(_globals._pVanityMirror)->m_dpadIcons + *(short *)&pEVar5->Update + -0x80,3);
    }
    _globals._VanityMirrorState = '\x03';
    _globals._pVanityMirror = (EVanityMirrorMenu *)0x0;
    Message__7EGlobalPvUi(&_globals,(void *)0x0,0x2a);
    pEVar10 = this->m_pPanel;
  }
  else {
    if (_globals._VanityMirrorState == '\x04') {
      Update__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
      pEVar3 = this->m_pPanel->m_pCameras[0];
                    /* end of inlined section */
      if (pEVar3 == (ESimsCam *)0x0) {
        pEVar3 = this->m_pPanel->m_pCameras[1];
      }
      else {
        pPVar4 = (pEVar3->field0_0x0).__vtable;
        (*(code *)pPVar4[2].Panelstateman)
                  ((int)&(pEVar3->field0_0x0).m_state + (int)*(short *)(pPVar4 + 2));
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
        pEVar3 = this->m_pPanel->m_pCameras[1];
      }
                    /* end of inlined section */
      if (pEVar3 != (ESimsCam *)0x0) {
        pPVar4 = (pEVar3->field0_0x0).__vtable;
        (*(code *)pPVar4[2].Panelstateman)
                  ((int)&(pEVar3->field0_0x0).m_state + (int)*(short *)(pPVar4 + 2));
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/wardrobe.h */
                    /* end of inlined section */
      _globals._VanityMirrorState = '\x05';
                    /* inlined from c:/eor/src2/games/sims/ESRC/wardrobe.h */
                    /* end of inlined section */
      MoveCamera__13EWardrobeMenuP8ESimsCam
                (_globals._pWardrobe,
                 this->m_pPanel->m_pCameras[(_globals._pWardrobe)->m_nControllerID]);
      goto LAB_00176cf4;
    }
    if (_globals._VanityMirrorState == '\x05') {
      bVar6 = MirrorUpdate__13EWardrobeMenu(_globals._pWardrobe);
      if (!bVar6) {
        return;
      }
      if (_globals._pWardrobe != (EWardrobeMenu *)0x0) {
        pEVar5 = ((_globals._pWardrobe)->field0_0x0).__vtable;
        (*(code *)pEVar5->Draw)
                  ((int)&((_globals._pWardrobe)->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar5->Update,3);
      }
      _globals._VanityMirrorState = '\x06';
      _globals._pWardrobe = (EWardrobeMenu *)0x0;
      Message__7EGlobalPvUi(&_globals,(void *)0x0,0x2a);
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
      pEVar10 = this->m_pPanel;
    }
    else {
      pEVar10 = this->m_pPanel;
    }
  }
                    /* end of inlined section */
  SetCam__7EGlobalP8ESimsCam(&_globals,pEVar10->m_pCameras[0]);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable->GetSpeed)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable->SetSpeed);
  if (_globals._16_4_ == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pRoomManager->__vtable[1].GetHouse)
              ((int)&_5Globs_pRoomManager->__vtable +
               (int)*(short *)&_5Globs_pRoomManager->__vtable[1].RoomCount);
  }
  Update__16ESpriteRenderMan(_globals.m_pSpriteMan);
  if (_globals._HighScoreDialogState == '\0') {
                    /* inlined from c:/eor/src2/games/sims/ESRC/cheats.h */
                    /* end of inlined section */
    if (*(int *)&(_globals.m_pCheats)->m_bCheatsOn == 0) {
      pEVar5 = (this->m_pPanel->field0_0x0).__vtable;
      (*(code *)pEVar5->SetBoxDims)
                ((int)this->m_pPanel->m_messageFns + *(short *)&pEVar5->SetPos + -0x3c);
    }
    else {
      UpdateCameras__6EPanel(this->m_pPanel);
    }
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
  bVar6 = false;
                    /* end of inlined section */
  if ((_globals._pPanel)->m_panleState + ~LIVE_SIM_EDIT < 2) {
LAB_00176f0c:
                    /* inlined from /eor/src2/engine/particle/e_particleman.h */
    _pclman.m_timeScale = 1.0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar13 = (*(code *)_5Globs_pSimulator->__vtable->GetDaysRunning)
                       ((int)&_5Globs_pSimulator->__vtable +
                        (int)*(short *)&_5Globs_pSimulator->__vtable->GetExpensesHistory);
    if (lVar13 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar13 = (*(code *)_5Globs_pSimulator->__vtable->ClearHistory)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable->SetFunds);
      if (lVar13 != 0) {
        bVar6 = true;
      }
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar13 = (*(code *)_5Globs_pSimulator->__vtable->DoStream)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable->DoCommand);
                    /* inlined from ../MSrc/simulator.h */
      if (lVar13 == -2) {
        _pclman.m_timeScale = 4.0;
        goto LAB_00176f18;
      }
      if (lVar13 < -1) {
        if (lVar13 == -3) {
          _pclman.m_timeScale = 10.0;
          goto LAB_00176f18;
        }
      }
      else {
        if (lVar13 == -1) {
          _pclman.m_timeScale = 0.5;
          goto LAB_00176f18;
        }
        if (lVar13 == 0) goto LAB_00176f0c;
      }
    }
    _pclman.m_timeScale = 0.0;
                    /* end of inlined section */
  }
LAB_00176f18:
                    /* end of inlined section */
  Update__6EHouse((EHouse__2_990 *)_globals._pCurHouse);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable[1].RestoreTrueDt)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable[1].SetProbe);
  if (*(int *)this->m_VibrationReady == 0) {
    bVar6 = IsControllerReady__8EVibrateUc(_globals.m_pVibrate,'\0');
    *(int *)this->m_VibrationReady = (int)bVar6;
    iVar12 = *(int *)&this->field_0x3c;
  }
  else {
    iVar12 = *(int *)&this->field_0x3c;
  }
  if (iVar12 == 0) {
    bVar6 = IsControllerReady__8EVibrateUc(_globals.m_pVibrate,'\x01');
    *(int *)&this->field_0x3c = (int)bVar6;
  }
  UpdateVibration__8EVibrate(_globals.m_pVibrate);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar13 = (*(code *)_5Globs_pSimulator->__vtable->Resume)
                     ((int)&_5Globs_pSimulator->__vtable +
                      (int)*(short *)&_5Globs_pSimulator->__vtable->Pause,0x27);
  if (lVar13 < 0) {
    SetFreeWill__8cXObjectb(SUB41(*(undefined4 *)_globals.m_pOptionsRecon,0));
  }
  else {
    if (1 < (short)lVar13) {
      lVar13 = 1;
    }
    SetFreeWill__8cXObjectb((short)lVar13 == 1);
  }
  iVar12 = _globals._324_4_;
  if (_globals._324_4_ == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    _globals._324_4_ = 0;
    (*(code *)_5Globs_pNeighborhood->__vtable->GetNeighborData)
              ((int)&_5Globs_pNeighborhood->__vtable +
               (int)*(short *)&_5Globs_pNeighborhood->__vtable->GetNeighborSelector,
               _5Globs_pNghResFile);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    piVar11 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                               ((int)&_5Globs_pNeighborhood->__vtable +
                                (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                AddFamilyHistoryStat);
    (**(code **)(*piVar11 + 0x94))
              ((int)piVar11 + (int)*(short *)(*piVar11 + 0x90),_5Globs_pNghResFile,
               _5Globs_iSaveFileVersion);
    _globals._332_4_ = iVar12;
    if (_globals._344_4_ == 1) {
      StartStoryModeTransScreen__9ELiveMode(this);
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
    _globals.m_NeighborhoodHouseNum = (_globals._pCurHouse)->m_lotNum;
                    /* end of inlined section */
    *(undefined4 *)&this->m_bGoingToNeighborhoodMode = 1;
    this->m_FadeOutPercent = 0.0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
    _globals.m_GenTransitionLoadPercent = 0.0;
    StopAllVibration__8EVibrate(_globals.m_pVibrate);
  }
  if (_globals._328_4_ == 1) {
    if (_globals._HighScoreDialogState == '\0') {
      _globals._328_4_ = 0;
      _globals._332_4_ = 0;
      _globals._344_4_ = 0;
      *(undefined4 *)&this->m_bGoingToNeighborhoodMode = 1;
      *(undefined4 *)&this->m_bDisplayStoryModeTransitionScreen = 0;
      this->m_FadeOutPercent = 0.0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
      _globals.m_GenTransitionLoadPercent = 0.0;
      StopAllVibration__8EVibrate(_globals.m_pVibrate);
    }
    else if (_globals._HighScoreDialogState == '\x01') {
      iVar12 = CallNewScore__7EGlobalssssss
                         (&_globals,(ushort)_globals.m_nChallengePlayerNum,
                          (ushort)_globals.m_nChallengeScore,(ushort)_globals.m_nChallengeComponent1
                          ,(ushort)_globals.m_nChallengeComponent2,
                          (ushort)_globals.m_nChallengeComponent3,
                          (ushort)_globals.m_nChallengeComponent4);
      if (iVar12 == -1) {
        _globals.m_nChallengeComponent4 = 0;
        _globals._HighScoreDialogState = '\0';
        _globals.m_nChallengePlayerNum = 0;
        _globals.m_nChallengeScore = 0;
        _globals.m_nChallengeComponent1 = 0;
        _globals.m_nChallengeComponent2 = 0;
        _globals.m_nChallengeComponent3 = 0;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        (*(code *)_5Globs_pSimulator->__vtable->Spend)
                  ((int)&_5Globs_pSimulator->__vtable +
                   (int)*(short *)&_5Globs_pSimulator->__vtable->GetFunds);
        PauseSounds__12cSoundPlayer(_5Globs_pSound);
        CreateNameEntry__7EGlobaliii
                  (&_globals,iVar12,_globals.m_nChallengePlayerNum,_globals.m_nChallengeScore);
        _globals._HighScoreDialogState = '\x02';
      }
    }
    else if ((_globals._HighScoreDialogState == '\x02') &&
            (bVar6 = DialogUpdate__16EHighScoreDialog(_globals._pHighScoreDialog), bVar6)) {
      _globals._HighScoreDialogState = '\0';
      if (_globals._pHighScoreDialog != (EHighScoreDialog *)0x0) {
        pEVar5 = ((_globals._pHighScoreDialog)->field0_0x0).__vtable;
        (*(code *)pEVar5->Draw)
                  ((int)&(((EHighScoreDialog *)(_globals._pHighScoreDialog)->m_fParticlePos[-0xf])->
                         field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar5->Update,3);
      }
      _globals._pHighScoreDialog = (EHighScoreDialog *)0x0;
    }
  }
  if (_globals._376_4_ == 1) {
    _globals._376_4_ = 0;
    *(undefined4 *)&this->m_bGoingToCreditsMode = 1;
    this->m_FadeOutPercent = 0.0;
    iVar12 = *(int *)&this->m_bGoingToCreditsMode;
  }
  else {
    iVar12 = *(int *)&this->m_bGoingToCreditsMode;
  }
  if (((iVar12 != 0) && (this->m_FadeOutPercent < 2.0)) &&
     (fVar14 = this->m_FadeOutPercent + _dt, this->m_FadeOutPercent = fVar14, 2.0 <= fVar14)) {
    *(undefined4 *)&this->m_bGoingToCreditsMode = 0;
    _globals._328_4_ = 0;
    _globals._344_4_ = 0;
    _globals._332_4_ = 0;
    _globals._376_4_ = 0;
    this->m_FadeOutPercent = 0.0;
    *(undefined4 *)&this->m_bGoingToNeighborhoodMode = 0;
    *(undefined4 *)&this->m_bDisplayStoryModeTransitionScreen = 0;
    StopAllVibration__8EVibrate(_globals.m_pVibrate);
    _globals.m_nCreditMode = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pObjectModule->__vtable->GetSim)
              ((int)&_5Globs_pObjectModule->__vtable +
               (int)*(short *)&_5Globs_pObjectModule->__vtable->PreviewAnimation);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pHouse->__vtable[1].SetFamilyToNull)
              ((int)&_5Globs_pHouse->__vtable +
               (int)*(short *)&_5Globs_pHouse->__vtable[1].GetFurnishingsScoreCurve);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
                    /* end of inlined section */
    local_80[0].m_id = 5;
    SetState__13EGameStateManG12EGameStateId(_app.m_pGameStateMan,local_80);
  }
  return;
}

void ELiveMode::StartStoryModeBeginScreen() {
	c16 *TextPtr;
	u32 ShaderId;
	EHouse *this;
	u32 id;
	u32 id;
	
  short *psVar1;
  uint id;
  char *pRef;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  switch((_globals._pCurHouse)->m_lotNum) {
  case 1:
    pRef = "house 01";
    break;
  case 2:
    pRef = "house 02";
    break;
  case 3:
    pRef = "house 03";
    break;
  case 4:
    pRef = "house 04";
    break;
  case 5:
    pRef = "house 05";
    break;
  case 6:
    pRef = "house 06";
    break;
  case 7:
    pRef = "house 07";
    break;
  case 8:
    pRef = "house 08";
    break;
  default:
    pRef = "house 01";
  }
  psVar1 = GetStoryModeIntroScreenText__7EGlobalPCc(&_globals,pRef);
  id = GetStoryModeIntroScreenShaderId__7EGlobalPCc(&_globals,pRef);
  _globals.m_pStoryModeTransitionText = psVar1;
  if (id == 0) {
    _globals.m_pStoryModeTransitionShader = (ERShader *)0x0;
  }
  else {
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
    AddRef__16EResourceManagerUiP5EFilei(&_datasetman.field0_0x0,id,(EFile *)0x0,0);
    _globals.m_pStoryModeTransitionShader =
         (ERShader *)AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,id,(EFile *)0x0,0);
                    /* end of inlined section */
    DelRef__16EResourceManagerUi(&_datasetman.field0_0x0,id);
  }
  return;
}

void ELiveMode::StartStoryModeTransScreen() {
	c16 *TextPtr;
	u32 ShaderId;
	EHouse *this;
	u32 id;
	u32 id;
	
  short *psVar1;
  uint id;
  char *pRef;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  switch((_globals._pCurHouse)->m_lotNum) {
  case 1:
    pRef = "house 01";
    break;
  case 2:
    pRef = "house 02";
    break;
  case 3:
    pRef = "house 03";
    break;
  case 4:
    pRef = "house 04";
    break;
  case 5:
    pRef = "house 05";
    break;
  case 6:
    pRef = "house 06";
    break;
  case 7:
    pRef = "house 07";
    break;
  case 8:
    pRef = "house 08";
    break;
  default:
    pRef = "house 01";
  }
  psVar1 = GetStoryModeOutroScreenText__7EGlobalPCc(&_globals,pRef);
  id = GetStoryModeOutroScreenShaderId__7EGlobalPCc(&_globals,pRef);
  _globals.m_pStoryModeTransitionText = psVar1;
  if (id == 0) {
    _globals.m_pStoryModeTransitionShader = (ERShader *)0x0;
  }
  else {
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
    AddRef__16EResourceManagerUiP5EFilei(&_datasetman.field0_0x0,id,(EFile *)0x0,0);
    _globals.m_pStoryModeTransitionShader =
         (ERShader *)AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,id,(EFile *)0x0,0);
                    /* end of inlined section */
    DelRef__16EResourceManagerUi(&_datasetman.field0_0x0,id);
  }
  *(undefined4 *)&this->m_bDisplayStoryModeTransitionScreen = 1;
  return;
}

void ELiveMode::Draw(ERC *prc) {
	static float Accumulator = 0.f;
	static bool FlipFlop = true;
	c16 *string;
	EVec2 Dimensions;
	EVec2 Pos;
	ERFont *this;
	u16 *szString;
	ERFont *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EVec2 *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	float Opacity;
	float w;
	float Opacity;
	float w;
	float _xtemp_BUTTONPAD_POS[3];
	float _ytemp_BUTTONPAD_POS[3];
	EGraphics *this;
	EGraphics *this;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float Opacity;
	float w;
	
  undefined *puVar1;
  short sVar2;
  EGlobalManagerClient__vtable *pEVar3;
  ERC__vtable *pEVar4;
  EUIObjectNode__vtable *pEVar5;
  ERShader *this_00;
  uint uVar6;
  ulong *puVar7;
  ERFont *pEVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  EGraphics *pEVar13;
  short *szString;
  EPanel *pEVar14;
  EHashTableNode **ppEVar15;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar16;
  float fVar17;
  EHashTableNode *pEVar18;
  undefined4 uVar19;
  EVec2 Dimensions;
  EVec2 Pos;
  undefined8 local_110;
  int local_108;
  int local_104;
  EHashTableNode *local_100;
  EHashTableNode *local_fc;
  EHashTableNode *local_f8;
  EHashTableNode *local_f4;
  EHashTableNode *local_f0;
  EHashTableNode *local_ec;
  EHashTableNode *local_e8;
  EHashTableNode *local_e4;
  EFontSize *local_e0;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  EHashTableNode *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
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
  
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (*(int *)&this->m_Initialized == 0) {
    initDrawContinue__9ELiveModeP3ERC(this,prc);
    return;
  }
  if ((0.0 < this->m_FadeinTimeLeft) && (pEVar18 = (EHashTableNode *)0x3f800000, 1.0 < _dt)) {
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Dimensions.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Pos.field0_0x0 = (EVec2__null___1__1)CONCAT44(pEVar18,pEVar18);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_110._0_4_ = (EHashTableNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_fc = (EHashTableNode *)0x0;
    local_f0 = (EHashTableNode *)0x0;
    local_ec = (EHashTableNode *)0x0;
    local_e8 = (EHashTableNode *)0x0;
                    /* end of inlined section */
    local_110._4_4_ = pEVar18;
    local_100 = pEVar18;
    local_e4 = pEVar18;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&Dimensions,&Pos,
               &local_110,&local_100,&local_f0);
    return;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  _amb = (float)(uint)_globals.Cheats.ambientIntensity * 0.01;
  _dir = (float)(uint)_globals.Cheats.directionIntensity * 0.01;
  _lightpos.field0_0x0.d[2] = (float)(uint)_globals.Cheats.directionZ * -0.01;
  _dir2 = (float)(uint)_globals.Cheats.cameraIntensity * 0.01;
  _lightpos.field0_0x0.d[0] = (float)(uint)_globals.Cheats.directionX * 0.01;
  _lightpos.field0_0x0.d[1] = (float)(uint)_globals.Cheats.directionY * 0.01;
  DrawMain__9ELiveModeP3ERC(this,prc);
  if (*(int *)&this->m_bStoryModeIntroScreenUp == 1) {
    if (*(int *)&this->m_bAskingToSave == 1) {
      DrawStoryModeTransScreen__13EGameStateManP3ERCb(_app.m_pGameStateMan,prc,false);
      Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      Dimensions.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      Pos.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f8000003f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_110._0_4_ = (EHashTableNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_110._4_4_ = (EHashTableNode *)0x3f800000;
      local_e0 = (EFontSize *)0x3f800000;
      local_dc = 0;
      local_d0 = 0;
      local_cc = 0;
      local_c8 = 0;
      local_c4 = 0x3f000000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&Dimensions,&Pos,
                 &local_110,&local_e0,&local_d0);
      DialogDraw__11EDialogMenuP3ERCb(&(this->m_pPanel->m_pausePanel).m_DialogMenu,prc,true);
      return;
    }
    local_100 = (EHashTableNode *)0x3f800000;
    Accumulator_4980 = Accumulator_4980 + _dt;
    if (1.0 < Accumulator_4980) {
      Accumulator_4980 = 0.0;
      FlipFlop_4981 = FlipFlop_4981 ^ 1;
    }
    DrawStoryModeTransScreen__13EGameStateManP3ERCb(_app.m_pGameStateMan,prc,true);
    if (FlipFlop_4981 != 1) {
      return;
    }
    szString = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"start_storymode_house");
    fVar16 = 0.8;
    SetSize__6ERFontffb(_globals.m_pFont,18.0,(float)local_100,true);
    uVar11 = _WHITE.field0_0x0.d[3];
    uVar10 = _WHITE.field0_0x0.d[2];
    uVar9 = _WHITE.field0_0x0._0_8_;
    pEVar8 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar8->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar9 >> 0x20);
    (pEVar8->m_vColor).field0_0x0.d[2] = uVar10;
    (pEVar8->m_vColor).field0_0x0.d[3] = uVar11;
                    /* end of inlined section */
    Select__6ERFontP3ERC(_globals.m_pFont,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)&Dimensions,_globals.m_pFont,SUB41(szString,0),(EWindow *)&pGifTag1);
    pEVar13 = _pGfx;
    uVar11 = _BLACK.field0_0x0.d[3];
    uVar10 = _BLACK.field0_0x0.d[2];
    uVar9 = _BLACK.field0_0x0._0_8_;
    pEVar8 = _globals.m_pFont;
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar8->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar9 >> 0x20);
    (pEVar8->m_vColor).field0_0x0.d[2] = uVar10;
    (pEVar8->m_vColor).field0_0x0.d[3] = uVar11;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_110._0_4_ =
         (EHashTableNode *)
         ((0.5 - Dimensions.field0_0x0.d[0] * 0.5) + 0.05 +
         (float)local_100 / (float)pEVar13->m_xscreen);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_110._4_4_ = (EHashTableNode *)((float)local_100 / (float)pEVar13->m_yscreen + fVar16);
    Pos.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_110._4_4_,(EHashTableNode *)local_110);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,szString,true,(EVec2 *)&local_110,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
    uVar11 = _WHITE.field0_0x0.d[3];
    uVar10 = _WHITE.field0_0x0.d[2];
    uVar9 = _WHITE.field0_0x0._0_8_;
    pEVar8 = _globals.m_pFont;
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar8->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar9 >> 0x20);
    (pEVar8->m_vColor).field0_0x0.d[2] = uVar10;
    (pEVar8->m_vColor).field0_0x0.d[3] = uVar11;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_110._0_4_ = (EHashTableNode *)((0.5 - Dimensions.field0_0x0.d[0] * 0.5) + 0.05);
    Pos.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar16,(EHashTableNode *)local_110);
    local_110._4_4_ = (EHashTableNode *)fVar16;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,szString,true,(EVec2 *)&local_110,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pXIcon,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    Pos.field0_0x0 =
         (EVec2__null___1__1)CONCAT44(Pos.field0_0x0.d[1] - 0.01,Pos.field0_0x0.d[0] - 0.07);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_110._0_4_ = local_100;
    local_110._4_4_ = local_100;
    local_fc = local_100;
    local_f8 = local_100;
    local_f4 = local_100;
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&Pos,
               (EVec2 *)&local_110,&local_100);
    return;
  }
  if (*(int *)&this->m_bGoingToNeighborhoodMode != 0) {
    local_100 = (EHashTableNode *)0x3f800000;
    pEVar3 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar3[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar3[3].ManagedStartup);
    fVar16 = this->m_TimeAccumulator + _dt;
    this->m_TimeAccumulator = fVar16;
    if ((float)local_100 < fVar16) {
      this->m_TimeAccumulator = -1.0;
    }
    if (this->m_FadeOutPercent <= 0.001) {
      return;
    }
    local_b4 = this->m_FadeOutPercent * 0.5;
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
    pEVar4 = prc->__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    sVar2 = *(short *)&pEVar4[1].SpriteList;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Pos.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_100,local_100);
                    /* end of inlined section */
    ppEVar15 = &local_c0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_c0 = (EHashTableNode *)0x0;
    local_bc = 0;
                    /* end of inlined section */
    local_b8 = 0;
LAB_00177c9c:
    local_fc = (EHashTableNode *)0x0;
    local_110._0_4_ = (EHashTableNode *)0x0;
    Dimensions.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x0;
                    /* end of inlined section */
                    /* end of inlined section */
    local_110._4_4_ = local_100;
    (*(code *)pEVar4[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)sVar2,&Dimensions,&Pos,&local_110,&local_100,ppEVar15);
    return;
  }
  if (*(int *)&this->m_bGoingToCreditsMode != 0) {
    pEVar3 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar3[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar3[3].ManagedStartup);
    if (this->m_FadeOutPercent <= 0.001) {
      return;
    }
    local_e4 = (EHashTableNode *)(this->m_FadeOutPercent * 0.5);
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
    pEVar4 = prc->__vtable;
                    /* end of inlined section */
    sVar2 = *(short *)&pEVar4[1].SpriteList;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Pos.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f8000003f800000;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    ppEVar15 = &local_f0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_100 = (EHashTableNode *)0x3f800000;
    local_f0 = (EHashTableNode *)0x0;
    local_ec = (EHashTableNode *)0x0;
    local_e8 = (EHashTableNode *)0x0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    goto LAB_00177c9c;
  }
  if (*(int *)&this->m_BackgroundColorSet == 0) {
    *(undefined4 *)&this->m_BackgroundColorSet = 1;
LAB_00177cc8:
    SetBackgroundColor__7EGlobal(&_globals);
  }
  else if (_globals._436_4_ == 1) {
    *(undefined4 *)&this->m_BackgroundColorSet = 1;
    goto LAB_00177cc8;
  }
  if (_globals._VanityMirrorState == '\0') {
    if (_globals._HighScoreDialogState - 1 < 2) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      pEVar5 = ((_globals._pHighScoreDialog)->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      uVar19 = 0x3e3645a2;
                    /* end of inlined section */
      (*(code *)pEVar5->Message)
                ((int)&(((EHighScoreDialog *)(_globals._pHighScoreDialog)->m_fParticlePos[-0xf])->
                       field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar5->SetBoxDims);
      Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      Dimensions.field0_0x0 =
           (EVec2__null___1__1)
           CONCAT44(_13EUIObjectNode_SAFE_BOTTOM - 46.0 / (float)_pGfx->m_yscreen,uVar19);
      Pos.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f8000003f800000;
      local_110._0_4_ = (EHashTableNode *)0x0;
      local_110._4_4_ = (EHashTableNode *)0x3f800000;
      local_fc = (EHashTableNode *)0x0;
      local_100 = (EHashTableNode *)0x3f800000;
                    /* end of inlined section */
      fVar16 = _13EUIObjectNode_SAFE_BOTTOM;
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&Dimensions,&Pos,
                 &local_110,&local_100);
      Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      Dimensions.field0_0x0 =
           (EVec2__null___1__1)CONCAT44(fVar16 - 50.0 / (float)_pGfx->m_yscreen,uVar19);
      Pos.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f0000004003851f;
      local_104 = 0x3f800000;
      local_108 = 0x3f800000;
      local_110._4_4_ = (EHashTableNode *)0x3f800000;
      local_110._0_4_ = (EHashTableNode *)0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&Dimensions,&Pos,
                 &local_110);
      Draw__10EPromptBarP3ERC(&this->m_PromptBar,prc);
      Select__8ERShaderP3ERCi(this->m_pDPadBack,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      Dimensions.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f3f75c9be6147ae;
      Pos.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f8000003f800000;
      local_110._0_4_ = (EHashTableNode *)0x3f800000;
      local_110._4_4_ = (EHashTableNode *)0x3f800000;
      local_108 = 0x3f800000;
      local_104 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&Dimensions,&Pos,
                 &local_110);
      iVar12 = DAT_003b02d0;
      pEVar18 = DAT_003b02c0;
      this_00 = this->m_pUpShdr;
      puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
      uVar6 = (uint)puVar1 & 7;
      puVar7 = (ulong *)(puVar1 + -uVar6);
      *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | (ulong)DAT_003b02b8 >> (7 - uVar6) * 8;
      Dimensions.field0_0x0 = (EVec2__null___1__1)(EVec2__null___1__1)DAT_003b02b8.field1;
      puVar1 = (undefined *)((int)&Pos.field0_0x0 + 7);
      uVar6 = (uint)puVar1 & 7;
      puVar7 = (ulong *)(puVar1 + -uVar6);
      *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | (ulong)DAT_003b02c8 >> (7 - uVar6) * 8;
      Pos.field0_0x0 = (EVec2__null___1__1)(EVec2__null___1__1)DAT_003b02c8.field1;
      Select__8ERShaderP3ERCi(this_00,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_110._0_4_ = (EHashTableNode *)Dimensions.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_110._4_4_ = (EHashTableNode *)Pos.field0_0x0.d[1];
      local_fc = (EHashTableNode *)0x3f800000;
      local_100 = (EHashTableNode *)0x3f800000;
      local_e4 = (EHashTableNode *)0x3f800000;
      local_e8 = (EHashTableNode *)0x3f800000;
      local_ec = (EHashTableNode *)0x3f800000;
      local_f0 = (EHashTableNode *)0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_110,
                 &local_100,&local_f0);
      Select__8ERShaderP3ERCi(this->m_pDownShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_110._0_4_ = (EHashTableNode *)Dimensions.field0_0x0.d[0];
      local_110._4_4_ = (EHashTableNode *)iVar12;
      local_fc = (EHashTableNode *)0x3f800000;
      local_100 = (EHashTableNode *)0x3f800000;
      local_e4 = (EHashTableNode *)0x3f800000;
      local_e8 = (EHashTableNode *)0x3f800000;
      local_ec = (EHashTableNode *)0x3f800000;
      local_f0 = (EHashTableNode *)0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_110,
                 &local_100,&local_f0);
      Select__8ERShaderP3ERCi(this->m_pLeftShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_110._0_4_ = (EHashTableNode *)Dimensions.field0_0x0.d[1];
      local_110._4_4_ = (EHashTableNode *)Pos.field0_0x0.d[0];
      local_fc = (EHashTableNode *)0x3f800000;
      local_100 = (EHashTableNode *)0x3f800000;
      local_e4 = (EHashTableNode *)0x3f800000;
      local_e8 = (EHashTableNode *)0x3f800000;
      local_ec = (EHashTableNode *)0x3f800000;
      local_f0 = (EHashTableNode *)0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_110,
                 &local_100,&local_f0);
      Select__8ERShaderP3ERCi(this->m_pRightShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_110._0_4_ = pEVar18;
      local_110._4_4_ = (EHashTableNode *)Pos.field0_0x0.d[0];
      local_fc = (EHashTableNode *)0x3f800000;
      local_100 = (EHashTableNode *)0x3f800000;
      local_e4 = (EHashTableNode *)0x3f800000;
      local_e8 = (EHashTableNode *)0x3f800000;
      local_ec = (EHashTableNode *)0x3f800000;
      local_f0 = (EHashTableNode *)0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_110,
                 &local_100,&local_f0);
      fVar16 = this->m_FadeinTimeLeft;
    }
    else {
      pEVar5 = (this->m_pPanel->field0_0x0).__vtable;
      (*(code *)pEVar5->Message)
                ((int)this->m_pPanel->m_messageFns + *(short *)&pEVar5->SetBoxDims + -0x3c,prc);
      fVar16 = this->m_FadeinTimeLeft;
    }
    goto LAB_001780e4;
  }
  if (_globals._VanityMirrorState == '\0') {
LAB_00177d10:
    pEVar14 = this->m_pPanel;
  }
  else {
    pEVar14 = (EPanel *)_globals._pVanityMirror;
    if (2 < _globals._VanityMirrorState) {
      if (5 < _globals._VanityMirrorState) goto LAB_00177d10;
      pEVar14 = (EPanel *)_globals._pWardrobe;
      if (_globals._VanityMirrorState < 4) {
        pEVar14 = this->m_pPanel;
      }
    }
  }
  pEVar5 = (pEVar14->field0_0x0).__vtable;
  (*(code *)pEVar5->Message)
            ((bool *)((int)pEVar14->m_messageFns + *(short *)&pEVar5->SetBoxDims + -0x3c),prc);
  fVar16 = this->m_FadeinTimeLeft;
LAB_001780e4:
  pEVar18 = (EHashTableNode *)0x0;
  if (fVar16 <= 0.0) {
    return;
  }
  if (1.0 <= _dt) {
    return;
  }
  fVar16 = fVar16 - _dt;
  fVar17 = this->m_FadeinTime;
  this->m_FadeinTimeLeft = fVar16;
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Dimensions.field0_0x0 = (EVec2__null___1__1)CONCAT44(pEVar18,pEVar18);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Pos.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f8000003f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_110._4_4_ = (EHashTableNode *)0x3f800000;
  local_100 = (EHashTableNode *)0x3f800000;
                    /* end of inlined section */
  local_110._0_4_ = pEVar18;
  local_fc = pEVar18;
  local_f0 = pEVar18;
  local_ec = pEVar18;
  local_e8 = pEVar18;
  local_e4 = (EHashTableNode *)(fVar16 / fVar17);
  (*(code *)prc->__vtable[1].DisplayList)
            (pEVar18,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&Dimensions,&Pos
             ,&local_110,&local_100,&local_f0);
  return;
}

void ELiveMode::DrawMain(ERC *prc) {
	EPortalWindow &win;
	ESimsCam *pCam;
	int nctrls;
	EPortalDef portal0;
	float mu;
	EPortalWindow *window;
	EVec3 vPoint;
	EPanel *this;
	ESimsCam *pCam;
	EVec3 &vEye2;
	EVec3 &vLR2;
	EVec3 &vTL2;
	EVec3 &vTR2;
	float mu;
	EGEVert *verts;
	EVec3 vLowerLeft;
	float muto;
	EPanel *this;
	EGraphics *this;
	ERC *this;
	EVec3 &v;
	EVec3 &v;
	EVec4 *this;
	float u;
	int i;
	int value;
	int value;
	int value;
	EVec3 &v;
	EVec3 &v;
	float u;
	int i;
	int value;
	int value;
	int value;
	EVec3 &v;
	float u;
	int i;
	int value;
	int value;
	int value;
	ERC *this;
	EVec4 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec4 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec4 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EGraphics *this;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	float Right;
	EGraphics *this;
	EGraphics *this;
	ESimsCam *this;
	EGraphics *this;
	EGraphics *this;
	int player;
	ESimsCam *pCam;
	EVec3 &vEye2;
	EVec3 &vLR2;
	EVec3 &vTL2;
	float mu;
	EGEVert *verts;
	EVec3 vUpperRight;
	EPortalDef portal;
	float muto;
	ESimsCursor *pCurs;
	EPanel *this;
	EGraphics *this;
	ERC *this;
	EVec3 &v;
	EVec3 &v;
	EVec4 *this;
	float u;
	int i;
	int value;
	int value;
	int value;
	EVec3 &v;
	float u;
	int i;
	int value;
	int value;
	int value;
	EVec3 &v;
	EVec3 &v;
	float u;
	int i;
	int value;
	int value;
	int value;
	ERC *this;
	EVec4 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec4 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec4 *this;
	EGraphics *this;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	ESimsCam *this;
	ERC *this;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	EVec4 *this;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	float u;
	float scaler;
	
  undefined *puVar1;
  short sVar2;
  ESimsCam *pEVar3;
  EGlobalManagerClient__vtable *pEVar4;
  EWindow__vtable *pEVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  EPortalWindow *this_00;
  undefined8 *puVar12;
  bool bVar13;
  int iVar14;
  EVec3 *pEVar15;
  EVec3 *pEVar16;
  EVec3 *pEVar17;
  EVec3 *pEVar18;
  float *pfVar19;
  EVec3 *pEVar20;
  float *pfVar21;
  code *pcVar22;
  TRect_float_ *pTVar23;
  undefined8 *puVar24;
  uint uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  ESimsCursor__15_1743 *this_01;
  TRect_float_ *pTVar28;
  float *pfVar29;
  TRect_float_ *pTVar30;
  undefined8 *puVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  EPortalDef portal0;
  EVec3 vPoint;
  TRect_float_ local_1c0;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_190;
  float local_18c;
  float local_188;
  EPortalDef portal;
  ELiveMode *local_f0;
  int nctrls;
  ESimsCam *pCam;
  TRect_float_ *local_e4;
  int local_e0;
  undefined8 *local_dc;
  TRect_float_ *local_d8;
  undefined8 *local_d4;
  int local_d0;
  EPortalDef *local_cc;
  undefined8 *local_c8;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
  pEVar3 = this->m_pPanel->m_pCameras[0];
                    /* end of inlined section */
  SetCam__7EGlobalP8ESimsCam(&_globals,pEVar3);
  bVar13 = IsTwoPlayer__7EGlobal(&_globals);
  pEVar5 = _ELiveMode_win.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/engine/window/e_portalwindow.h */
  local_d8 = (TRect_float_ *)&vPoint;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/window/e_portalwindow.h */
                    /* end of inlined section */
  nctrls = (int)bVar13;
                    /* inlined from /eor/src2/engine/window/e_portalwindow.h */
                    /* end of inlined section */
  iVar14 = 4;
  do {
    bVar13 = iVar14 != -1;
    iVar14 = iVar14 + -1;
  } while (bVar13);
                    /* end of inlined section */
  if (_globals._VanityMirrorState != '\0') {
    nctrls = 0;
  }
  local_f0 = this;
  if (nctrls != 0) {
                    /* inlined from /eor/src2/common/math/e_rect.h */
    local_1c0.bottom = 1.0;
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
    local_d0 = 0;
    pEVar3 = this->m_pPanel->m_pCameras[0];
                    /* end of inlined section */
    SetCam__7EGlobalP8ESimsCam(&_globals,pEVar3);
    pEVar5 = _ELiveMode_win.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    pEVar4 = (_pGfx->field0_0x0).__vtable;
    iVar14 = _pGfx->m_xscreen;
    fVar38 = _fov * (float)_pGfx->m_yscreen;
    sVar2 = *(short *)(_ELiveMode_win.field0_0x0.field0_0x0.__vtable + 2);
    uVar35 = (*(code *)pEVar4[0xd].EGlobalManagerClient)
                       ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar4 + 0xd));
    (*(code *)pEVar5[2].EWindow)
              (fVar38 / (float)iVar14,uVar35,_nearPlane * _globals._EHouse_levelrad,
               _farPlane * _globals._EHouse_levelrad,
               (int)&_ELiveMode_win.field0_0x0.field0_0x0.m_mWindow.field0_0x0 + (int)sVar2);
    SetWinPos__8ESimsCamR9E3DWindow(pEVar3,&_ELiveMode_win.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_rect.h */
    vPoint.field0_0x0._0_8_ = 0;
                    /* end of inlined section */
    SetViewport__9E3DWindowRCt5TRect1Zf(&_ELiveMode_win.field0_0x0,local_d8);
    (*(code *)(_ELiveMode_win.field0_0x0.field0_0x0.__vtable)->OutputCoordinatesChanged)
              ((int)&_ELiveMode_win.field0_0x0.field0_0x0.m_mWindow.field0_0x0 +
               (int)*(short *)&(_ELiveMode_win.field0_0x0.field0_0x0.__vtable)->
                               InputCoordinatesChanged,prc);
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
    (*(code *)prc->__vtable->EndCommand)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,1);
    (*(code *)prc->__vtable[1].DisableGeometryModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,1,0,0);
    (*(code *)prc->__vtable[1].EnableRasterModes)
              (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,0,5,0
              );
    (*(code *)prc->__vtable[1].Callback)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].Material,1,0);
    (*(code *)prc->__vtable[1].TriStrip)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriStrip,0x40,0);
    (*(code *)prc->__vtable[1].RectList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].Rect,2,2,2,1,0,0);
    pEVar15 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_EYE);
    pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_LOWER_RIGHT);
    pEVar17 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_UPPER_LEFT);
    pEVar18 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_UPPER_RIGHT);
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
    fVar38 = _nearPlane / _farPlane;
    pfVar19 = (float *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0xf0,0x10);
    iVar14 = 3;
    local_1c0.left = (pEVar16->field0_0x0).d[0];
    local_1c0.top = (pEVar16->field0_0x0).d[1];
    local_1c0.right = (pEVar16->field0_0x0).d[2];
    pTVar28 = local_d8;
    pTVar30 = &local_1c0;
    pfVar21 = pfVar19;
    do {
      pfVar29 = &pTVar28->left;
      iVar14 = iVar14 + -1;
      pfVar10 = &pTVar30->left;
      pTVar28 = (TRect_float_ *)&pTVar28->top;
      pTVar30 = (TRect_float_ *)&pTVar30->top;
      *pfVar21 = *pfVar29 + (*pfVar10 - *pfVar29) * fVar38;
      pfVar21 = pfVar21 + 1;
    } while (-1 < iVar14);
    pfVar29 = pfVar19 + 0x28;
    pfVar21 = pfVar19 + 0x14;
    vPoint.field0_0x0._0_8_ = *(undefined8 *)&pEVar15->field0_0x0;
    iVar14 = 3;
    vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2];
    local_1c0.left = (pEVar17->field0_0x0).d[0];
    local_1c0.top = (pEVar17->field0_0x0).d[1];
    local_1c0.right = (pEVar17->field0_0x0).d[2];
    local_1c0.bottom = 1.0;
    pTVar28 = &local_1c0;
    pTVar30 = local_d8;
    do {
      pfVar10 = &pTVar30->left;
      iVar14 = iVar14 + -1;
      pfVar11 = &pTVar28->left;
      pTVar30 = (TRect_float_ *)&pTVar30->top;
      pTVar28 = (TRect_float_ *)&pTVar28->top;
      *pfVar21 = *pfVar10 + (*pfVar11 - *pfVar10) * fVar38;
      pfVar21 = pfVar21 + 1;
    } while (-1 < iVar14);
                    /* end of inlined section */
    pEVar20 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_LOWER_LEFT);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    iVar14 = 3;
    vPoint.field0_0x0._0_8_ = *(undefined8 *)&pEVar15->field0_0x0;
    vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2];
    local_1c0.left = (pEVar20->field0_0x0).d[0];
    local_1c0.top = (pEVar20->field0_0x0).d[1];
    local_1c0.right = (pEVar20->field0_0x0).d[2];
    local_1c0.bottom = 1.0;
    pTVar28 = &local_1c0;
    pTVar30 = local_d8;
    do {
      pfVar21 = &pTVar30->left;
      iVar14 = iVar14 + -1;
      pfVar10 = &pTVar28->left;
      pTVar30 = (TRect_float_ *)&pTVar30->top;
      pTVar28 = (TRect_float_ *)&pTVar28->top;
      *pfVar29 = *pfVar21 + (*pfVar10 - *pfVar21) * fVar38;
      pfVar29 = pfVar29 + 1;
    } while (-1 < iVar14);
                    /* end of inlined section */
    (*(code *)prc->__vtable->ZTest)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
    if (__usemask != 0) {
      (*(code *)prc->__vtable->TriIndexed)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,pfVar19,3);
    }
                    /* inlined from /eor/src2/engine/e_rc.h */
    pfVar21 = (float *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0xf0,0x10);
    iVar14 = __usemask;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    *pfVar21 = (pEVar16->field0_0x0).d[0];
    pfVar21[1] = (pEVar16->field0_0x0).d[1];
    pfVar21[2] = (pEVar16->field0_0x0).d[2];
    pfVar21[0x14] = (pEVar18->field0_0x0).d[0];
    pfVar21[0x15] = (pEVar18->field0_0x0).d[1];
    pfVar21[0x16] = (pEVar18->field0_0x0).d[2];
    pfVar21[0x28] = (pEVar17->field0_0x0).d[0];
    pfVar21[0x29] = (pEVar17->field0_0x0).d[1];
                    /* end of inlined section */
    pfVar21[0x2a] = (pEVar17->field0_0x0).d[2];
    if (iVar14 != 0) {
      (*(code *)prc->__vtable->TriIndexed)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,pfVar21,3);
    }
    (*(code *)prc->__vtable[1].DisableGeometryModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,2,0,0);
                    /* inlined from /eor/src2/common/math/e_rect.h */
    fVar38 = 1.0;
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
    pEVar5 = _ELiveMode_win.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    pEVar4 = (_pGfx->field0_0x0).__vtable;
    iVar14 = _pGfx->m_xscreen;
    fVar39 = _fov * (float)_pGfx->m_yscreen;
    sVar2 = *(short *)(_ELiveMode_win.field0_0x0.field0_0x0.__vtable + 2);
    uVar35 = (*(code *)pEVar4[0xd].EGlobalManagerClient)
                       ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar4 + 0xd));
    (*(code *)pEVar5[2].EWindow)
              (fVar39 / (float)iVar14,uVar35,_nearPlane * _globals._EHouse_levelrad,
               _farPlane * _globals._EHouse_levelrad,
               (int)&_ELiveMode_win.field0_0x0.field0_0x0.m_mWindow.field0_0x0 + (int)sVar2);
    SetWinPos__8ESimsCamR9E3DWindow(pEVar3,&_ELiveMode_win.field0_0x0);
    SetClipRatio__13EPortalWindowf(&_ELiveMode_win,3.0);
    fVar39 = (_nearPlane / _farPlane) * 1.001;
    pEVar15 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_EYE);
    pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_LOWER_LEFT);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_190 = (pEVar16->field0_0x0).d[0] - (pEVar15->field0_0x0).d[0];
    local_188 = (pEVar16->field0_0x0).d[2] - (pEVar15->field0_0x0).d[2];
    local_18c = (pEVar16->field0_0x0).d[1] - (pEVar15->field0_0x0).d[1];
    local_1a0 = local_190 * fVar39;
    local_198 = local_188 * fVar39;
    local_19c = local_18c * fVar39;
    local_1b0 = (pEVar15->field0_0x0).d[0] + local_1a0;
    local_1ac = (pEVar15->field0_0x0).d[1] + local_19c;
    vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2] + local_198;
    local_1a8 = vPoint.field0_0x0.d[2];
    vPoint.field0_0x0._0_8_ = CONCAT44(local_1ac,local_1b0);
    puVar1 = (undefined *)((int)&vPoint.field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 | (ulong)vPoint.field0_0x0._0_8_ >> (7 - uVar25) * 8
    ;
                    /* end of inlined section */
    pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_UPPER_LEFT);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1a0 = (pEVar16->field0_0x0).d[0] - (pEVar15->field0_0x0).d[0];
    local_198 = (pEVar16->field0_0x0).d[2] - (pEVar15->field0_0x0).d[2];
    local_19c = (pEVar16->field0_0x0).d[1] - (pEVar15->field0_0x0).d[1];
    local_1b0 = local_1a0 * fVar39;
    local_1a8 = local_198 * fVar39;
    local_1ac = local_19c * fVar39;
    local_1c0.left = (pEVar15->field0_0x0).d[0] + local_1b0;
    local_1c0.top = (pEVar15->field0_0x0).d[1] + local_1ac;
    portal0.vCorners[0].field0_0x0._8_4_ = (pEVar15->field0_0x0).d[2] + local_1a8;
    local_1c0.right = portal0.vCorners[0].field0_0x0._8_4_;
    portal0.vCorners[0].field0_0x0._0_8_ = CONCAT44(local_1c0.top,local_1c0.left);
    puVar1 = (undefined *)((int)&portal0.vCorners[0].field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 |
              portal0.vCorners[0].field0_0x0._0_8_ >> (7 - uVar25) * 8;
                    /* end of inlined section */
    pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_LOWER_RIGHT);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1a0 = (pEVar16->field0_0x0).d[0] - (pEVar15->field0_0x0).d[0];
    local_198 = (pEVar16->field0_0x0).d[2] - (pEVar15->field0_0x0).d[2];
    local_19c = (pEVar16->field0_0x0).d[1] - (pEVar15->field0_0x0).d[1];
    local_1b0 = local_1a0 * fVar39;
    local_1a8 = local_198 * fVar39;
    local_1ac = local_19c * fVar39;
    local_1c0.left = (pEVar15->field0_0x0).d[0] + local_1b0;
    local_1c0.top = (pEVar15->field0_0x0).d[1] + local_1ac;
    portal0.vCorners[1].field0_0x0._8_4_ = (pEVar15->field0_0x0).d[2] + local_1a8;
    local_1c0.right = portal0.vCorners[1].field0_0x0._8_4_;
    uVar9 = CONCAT44(local_1c0.top,local_1c0.left);
    puVar1 = (undefined *)((int)&portal0.vCorners[1].field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 | uVar9 >> (7 - uVar25) * 8;
    uVar25 = (uint)(portal0.vCorners + 1) & 7;
    puVar6 = (ulong *)((int)(portal0.vCorners + 1) - uVar25);
    *puVar6 = uVar9 << uVar25 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* end of inlined section */
    pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_UPPER_RIGHT);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1a0 = (pEVar16->field0_0x0).d[0] - (pEVar15->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_19c = (pEVar16->field0_0x0).d[1] - (pEVar15->field0_0x0).d[1];
    local_198 = (pEVar16->field0_0x0).d[2] - (pEVar15->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1b0 = local_1a0 * fVar39;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1ac = local_19c * fVar39;
    local_1a8 = local_198 * fVar39;
                    /* end of inlined section */
    fVar39 = _p1yshift / _p1xshift;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1c0.right = (pEVar15->field0_0x0).d[2] + local_1a8;
    local_1c0.left = (pEVar15->field0_0x0).d[0] + local_1b0;
    local_1c0.top = (pEVar15->field0_0x0).d[1] + local_1ac;
    puVar1 = (undefined *)((int)&portal0.vCorners[2].field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 |
              CONCAT44(local_1c0.top,local_1c0.left) >> (7 - uVar25) * 8;
    portal0.vCorners[2].field0_0x0._8_4_ = local_1c0.right;
    local_1a0 = portal0.vCorners[1].field0_0x0._0_4_ - local_1c0.left;
    local_1b0 = (portal0.vCorners[1].field0_0x0._0_4_ - local_1c0.left) * fVar39;
    local_1ac = (portal0.vCorners[1].field0_0x0._4_4_ - local_1c0.top) * fVar39;
    local_19c = portal0.vCorners[1].field0_0x0._4_4_ - local_1c0.top;
    local_1a8 = (portal0.vCorners[1].field0_0x0._8_4_ - local_1c0.right) * fVar39;
    local_198 = portal0.vCorners[1].field0_0x0._8_4_ - local_1c0.right;
    local_1c0.left = local_1c0.left + local_1b0;
    local_1c0.top = local_1c0.top + local_1ac;
    local_1c0.right = local_1c0.right + local_1a8;
    portal0.vCorners[2].field0_0x0._0_8_ = CONCAT44(local_1c0.top,local_1c0.left);
    puVar1 = (undefined *)((int)&portal0.vCorners[2].field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 |
              portal0.vCorners[2].field0_0x0._0_8_ >> (7 - uVar25) * 8;
    portal0.vCorners[2].field0_0x0._8_4_ = local_1c0.right;
    local_1a0 = vPoint.field0_0x0.d[0] - portal0.vCorners[0].field0_0x0._0_4_;
    local_1b0 = (vPoint.field0_0x0.d[0] - portal0.vCorners[0].field0_0x0._0_4_) * fVar39;
    local_1ac = (vPoint.field0_0x0.d[1] - portal0.vCorners[0].field0_0x0._4_4_) * fVar39;
    local_19c = vPoint.field0_0x0.d[1] - portal0.vCorners[0].field0_0x0._4_4_;
    local_1a8 = (vPoint.field0_0x0.d[2] - portal0.vCorners[0].field0_0x0._8_4_) * fVar39;
    local_198 = vPoint.field0_0x0.d[2] - portal0.vCorners[0].field0_0x0._8_4_;
    local_1c0.left = portal0.vCorners[0].field0_0x0._0_4_ + local_1b0;
    local_1c0.top = portal0.vCorners[0].field0_0x0._4_4_ + local_1ac;
    portal0.vCorners[0].field0_0x0._8_4_ = portal0.vCorners[0].field0_0x0._8_4_ + local_1a8;
    local_1c0.right = portal0.vCorners[0].field0_0x0._8_4_;
    portal0.vCorners[0].field0_0x0._0_8_ = CONCAT44(local_1c0.top,local_1c0.left);
    puVar1 = (undefined *)((int)&portal0.vCorners[0].field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 |
              portal0.vCorners[0].field0_0x0._0_8_ >> (7 - uVar25) * 8;
    local_1a0 = local_1c0.left - portal0.vCorners[2].field0_0x0._0_4_;
    local_1b0 = (local_1c0.left - portal0.vCorners[2].field0_0x0._0_4_) * fVar39;
    local_1ac = (local_1c0.top - portal0.vCorners[2].field0_0x0._4_4_) * fVar39;
    local_19c = local_1c0.top - portal0.vCorners[2].field0_0x0._4_4_;
    local_1a8 = (portal0.vCorners[0].field0_0x0._8_4_ - portal0.vCorners[2].field0_0x0._8_4_) *
                fVar39;
    local_198 = portal0.vCorners[0].field0_0x0._8_4_ - portal0.vCorners[2].field0_0x0._8_4_;
    local_1c0.left = portal0.vCorners[2].field0_0x0._0_4_ + local_1b0;
    local_1c0.top = portal0.vCorners[2].field0_0x0._4_4_ + local_1ac;
    local_1c0.right = portal0.vCorners[2].field0_0x0._8_4_ + local_1a8;
    portal0.vCorners[2].field0_0x0._0_8_ = CONCAT44(local_1c0.top,local_1c0.left);
    puVar1 = (undefined *)((int)&portal0.vCorners[2].field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 |
              portal0.vCorners[2].field0_0x0._0_8_ >> (7 - uVar25) * 8;
    portal0.vCorners[2].field0_0x0._8_4_ = local_1c0.right;
    local_1a0 = vPoint.field0_0x0.d[0] - portal0.vCorners[1].field0_0x0._0_4_;
    local_1b0 = (vPoint.field0_0x0.d[0] - portal0.vCorners[1].field0_0x0._0_4_) * fVar39;
    local_19c = vPoint.field0_0x0.d[1] - portal0.vCorners[1].field0_0x0._4_4_;
    local_1ac = (vPoint.field0_0x0.d[1] - portal0.vCorners[1].field0_0x0._4_4_) * fVar39;
    local_1a8 = (vPoint.field0_0x0.d[2] - portal0.vCorners[1].field0_0x0._8_4_) * fVar39;
    local_198 = vPoint.field0_0x0.d[2] - portal0.vCorners[1].field0_0x0._8_4_;
    local_1c0.left = portal0.vCorners[1].field0_0x0._0_4_ + local_1b0;
    local_1c0.top = portal0.vCorners[1].field0_0x0._4_4_ + local_1ac;
    portal0.vCorners[1].field0_0x0._8_4_ = portal0.vCorners[1].field0_0x0._8_4_ + local_1a8;
    local_1c0.right = portal0.vCorners[1].field0_0x0._8_4_;
    uVar9 = CONCAT44(local_1c0.top,local_1c0.left);
    puVar1 = (undefined *)((int)&portal0.vCorners[1].field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 | uVar9 >> (7 - uVar25) * 8;
    uVar25 = (uint)(portal0.vCorners + 1) & 7;
    puVar6 = (ulong *)((int)(portal0.vCorners + 1) - uVar25);
    *puVar6 = uVar9 << uVar25 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* end of inlined section */
    portal0.nCorners = 3;
    portal0.flags = 0;
    PushPortal__13EPortalWindowRC10EPortalDefbUi(&_ELiveMode_win,&portal0,true,0x15);
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    local_1c0.top = -_p1yshift;
                    /* inlined from /eor/src2/common/math/e_rect.h */
    local_1c0.left = 0.0;
    local_1c0.right = _p1xshift;
    local_1c0.bottom = fVar38;
                    /* end of inlined section */
    SetViewport__9E3DWindowRCt5TRect1Zf(&_ELiveMode_win.field0_0x0,&local_1c0);
                    /* inlined from /eor/src2/common/math/e_rect.h */
    local_1c0.left = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
    local_1c0.top = 0.0;
    local_1c0.right = fVar38;
    local_1c0.bottom = fVar38;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    SetClip__7EWindowRCt5TRect1Zf((EWindow *)&_ELiveMode_win,&local_1c0);
    (*(code *)(_ELiveMode_win.field0_0x0.field0_0x0.__vtable)->OutputCoordinatesChanged)
              ((int)&_ELiveMode_win.field0_0x0.field0_0x0.m_mWindow.field0_0x0 +
               (int)*(short *)&(_ELiveMode_win.field0_0x0.field0_0x0.__vtable)->
                               InputCoordinatesChanged,prc);
    goto LAB_00178fb0;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/vanitymirror.h */
                    /* end of inlined section */
  if ((_globals._pVanityMirror == (EVanityMirrorMenu *)0x0) ||
     (*(int *)&(_globals._pVanityMirror)->m_bSwitchCameraMode == 0)) {
    if (_globals._pWardrobe == (EWardrobeMenu *)0x0) {
      uVar25 = pEVar3->m_mode;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/wardrobe.h */
                    /* end of inlined section */
      if (*(int *)&(_globals._pWardrobe)->m_bSwitchCameraMode != 0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
        pEVar4 = (_pGfx->field0_0x0).__vtable;
        sVar2 = *(short *)(_ELiveMode_win.field0_0x0.field0_0x0.__vtable + 2);
        fVar39 = (_fov * (float)_pGfx->m_yscreen) / (float)_pGfx->m_xscreen;
        uVar32 = (*(code *)pEVar4[0xd].EGlobalManagerClient)
                           ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar4 + 0xd));
        pcVar22 = (code *)pEVar5[2].EWindow;
        fVar38 = _farPlane * _globals._EHouse_levelrad;
        uVar35 = 0x3f866666;
        goto LAB_00178e20;
      }
      uVar25 = pEVar3->m_mode;
    }
                    /* end of inlined section */
    if (uVar25 == 3) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
      pEVar4 = (_pGfx->field0_0x0).__vtable;
      iVar14 = _pGfx->m_xscreen;
      fVar38 = _fov * (float)_pGfx->m_yscreen;
      sVar2 = *(short *)(_ELiveMode_win.field0_0x0.field0_0x0.__vtable + 2);
      uVar35 = (*(code *)pEVar4[0xd].EGlobalManagerClient)
                         ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar4 + 0xd));
      (*(code *)pEVar5[2].EWindow)
                (fVar38 / (float)iVar14,uVar35,0x3d4ccccd,_farPlane * _globals._EHouse_levelrad,
                 (int)&_ELiveMode_win.field0_0x0.field0_0x0.m_mWindow.field0_0x0 + (int)sVar2);
    }
    else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
      pEVar4 = (_pGfx->field0_0x0).__vtable;
      iVar14 = _pGfx->m_xscreen;
      fVar38 = _fov * (float)_pGfx->m_yscreen;
      sVar2 = *(short *)(_ELiveMode_win.field0_0x0.field0_0x0.__vtable + 2);
      uVar35 = (*(code *)pEVar4[0xd].EGlobalManagerClient)
                         ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar4 + 0xd));
      (*(code *)pEVar5[2].EWindow)
                (fVar38 / (float)iVar14,uVar35,_nearPlane * _globals._EHouse_levelrad,
                 _farPlane * _globals._EHouse_levelrad,
                 (int)&_ELiveMode_win.field0_0x0.field0_0x0.m_mWindow.field0_0x0 + (int)sVar2);
    }
  }
  else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    pEVar4 = (_pGfx->field0_0x0).__vtable;
    sVar2 = *(short *)(_ELiveMode_win.field0_0x0.field0_0x0.__vtable + 2);
    fVar39 = (_fov * (float)_pGfx->m_yscreen) / (float)_pGfx->m_xscreen;
    uVar32 = (*(code *)pEVar4[0xd].EGlobalManagerClient)
                       ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar4 + 0xd));
    pcVar22 = (code *)pEVar5[2].EWindow;
    uVar35 = 0x3db851ec;
    fVar38 = _globals._EHouse_levelrad * 20.0;
LAB_00178e20:
    (*pcVar22)(fVar39,uVar32,uVar35,fVar38,
               (int)&_ELiveMode_win.field0_0x0.field0_0x0.m_mWindow.field0_0x0 + (int)sVar2);
  }
  SetWinPos__8ESimsCamR9E3DWindow(pEVar3,&_ELiveMode_win.field0_0x0);
  local_d0 = 0;
  SetClipRatio__13EPortalWindowf(&_ELiveMode_win,3.0);
                    /* inlined from /eor/src2/common/math/e_rect.h */
  vPoint.field0_0x0._0_8_ = 0;
                    /* end of inlined section */
  SetViewport__9E3DWindowRCt5TRect1Zf(&_ELiveMode_win.field0_0x0,local_d8);
  (*(code *)(_ELiveMode_win.field0_0x0.field0_0x0.__vtable)->OutputCoordinatesChanged)
            ((int)&_ELiveMode_win.field0_0x0.field0_0x0.m_mWindow.field0_0x0 +
             (int)*(short *)&(_ELiveMode_win.field0_0x0.field0_0x0.__vtable)->
                             InputCoordinatesChanged,prc);
LAB_00178fb0:
  pTVar28 = local_d8;
  local_e0 = 0;
  if (local_d0 == 0) {
    local_e4 = &local_1c0;
    fVar38 = 1.0;
    do {
      _globals.m_renderPass = local_e0;
      (*(code *)prc->__vtable->ZTest)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
      Draw__6EHouseP3ERC((EHouse__2_990 *)_globals._pCurHouse,prc);
      (*(code *)prc->__vtable->NewEntry)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate,1);
      (*(code *)prc->__vtable->ZTest)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
      if (_globals._VanityMirrorState == '\0') {
        if (_globals._pPanel == (EPanel *)0x0) {
          this_01 = (ESimsCursor__15_1743 *)0x0;
        }
        else {
          this_01 = (ESimsCursor__15_1743 *)(_globals._pPanel)->m_pCursors[local_e0];
        }
        if (this_01 != (ESimsCursor__15_1743 *)0x0) {
          Draw_Curs__11ESimsCursorP3ERC(this_01,prc);
        }
        Draw__16ESpriteRenderManP3ERC(_globals.m_pSpriteMan,prc);
      }
      iVar14 = local_e0 + 1;
      bVar13 = local_e0 != 1;
      local_e0 = iVar14;
      if ((bVar13) && (nctrls != 0)) {
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
        pEVar3 = local_f0->m_pPanel->m_pCameras[1];
                    /* end of inlined section */
        SetCam__7EGlobalP8ESimsCam(&_globals,pEVar3);
        pEVar5 = _ELiveMode_win.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
        pEVar4 = (_pGfx->field0_0x0).__vtable;
        iVar14 = _pGfx->m_xscreen;
        fVar39 = _fov * (float)_pGfx->m_yscreen;
        sVar2 = *(short *)(_ELiveMode_win.field0_0x0.field0_0x0.__vtable + 2);
        uVar35 = (*(code *)pEVar4[0xd].EGlobalManagerClient)
                           ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar4 + 0xd));
        (*(code *)pEVar5[2].EWindow)
                  (fVar39 / (float)iVar14,uVar35,_nearPlane * _globals._EHouse_levelrad,
                   _farPlane * _globals._EHouse_levelrad,
                   (int)&_ELiveMode_win.field0_0x0.field0_0x0.m_mWindow.field0_0x0 + (int)sVar2);
        SetWinPos__8ESimsCamR9E3DWindow(pEVar3,&_ELiveMode_win.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
        vPoint.field0_0x0._0_8_ = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
        pTVar28->right = fVar38;
                    /* end of inlined section */
        pTVar28->bottom = fVar38;
        SetViewport__9E3DWindowRCt5TRect1Zf(&_ELiveMode_win.field0_0x0,pTVar28);
        (*(code *)(_ELiveMode_win.field0_0x0.field0_0x0.__vtable)->OutputCoordinatesChanged)
                  ((int)&_ELiveMode_win.field0_0x0.field0_0x0.m_mWindow.field0_0x0 +
                   (int)*(short *)&(_ELiveMode_win.field0_0x0.field0_0x0.__vtable)->
                                   InputCoordinatesChanged,prc);
        Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
        (*(code *)prc->__vtable->EndCommand)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,1);
        (*(code *)prc->__vtable[1].DisableGeometryModes)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,1,0,0);
        (*(code *)prc->__vtable[1].EnableRasterModes)
                  (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,0
                   ,5,0);
        (*(code *)prc->__vtable[1].Callback)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].Material,1,0);
        (*(code *)prc->__vtable[1].TriStrip)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriStrip,0x40,0);
        (*(code *)prc->__vtable[1].RectList)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].Rect,2,2,2,1,0,0);
        pEVar15 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_EYE);
        pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_LOWER_RIGHT);
        pEVar17 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_UPPER_LEFT);
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
        fVar39 = _nearPlane / _farPlane;
        pfVar19 = (float *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0xf0,0x10);
        local_cc = &portal;
        iVar14 = 3;
        vPoint.field0_0x0._0_8_ = *(undefined8 *)&pEVar15->field0_0x0;
        vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2];
        pTVar28->bottom = fVar38;
        local_1c0.left = (pEVar16->field0_0x0).d[0];
        local_1c0.top = (pEVar16->field0_0x0).d[1];
        local_1c0.right = (pEVar16->field0_0x0).d[2];
        local_e4->bottom = fVar38;
        pTVar30 = local_e4;
        pTVar23 = local_d8;
        pfVar21 = pfVar19;
        do {
          pfVar29 = &pTVar23->left;
          iVar14 = iVar14 + -1;
          pfVar10 = &pTVar30->left;
          pTVar23 = (TRect_float_ *)&pTVar23->top;
          pTVar30 = (TRect_float_ *)&pTVar30->top;
          *pfVar21 = *pfVar29 + (*pfVar10 - *pfVar29) * fVar39;
          pfVar21 = pfVar21 + 1;
        } while (-1 < iVar14);
                    /* end of inlined section */
        pEVar18 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_UPPER_RIGHT);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        pfVar21 = pfVar19 + 0x28;
        pfVar29 = pfVar19 + 0x14;
        iVar14 = 3;
        pTVar28->bottom = fVar38;
        local_1c0.left = (pEVar18->field0_0x0).d[0];
        local_1c0.top = (pEVar18->field0_0x0).d[1];
        local_1c0.right = (pEVar18->field0_0x0).d[2];
        local_1c0.bottom = fVar38;
        pTVar30 = &local_1c0;
        pTVar23 = local_d8;
        do {
          pfVar10 = &pTVar23->left;
          iVar14 = iVar14 + -1;
          pfVar11 = &pTVar30->left;
          pTVar23 = (TRect_float_ *)&pTVar23->top;
          pTVar30 = (TRect_float_ *)&pTVar30->top;
          *pfVar29 = *pfVar10 + (*pfVar11 - *pfVar10) * fVar39;
          pfVar29 = pfVar29 + 1;
        } while (-1 < iVar14);
        iVar14 = 3;
        vPoint.field0_0x0._0_8_ = *(undefined8 *)&pEVar15->field0_0x0;
        vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2];
        pTVar28->bottom = fVar38;
        local_1c0.left = (pEVar17->field0_0x0).d[0];
        local_1c0.top = (pEVar17->field0_0x0).d[1];
        local_1c0.right = (pEVar17->field0_0x0).d[2];
        pTVar30 = &local_1c0;
        pTVar23 = local_d8;
        do {
          pfVar29 = &pTVar23->left;
          iVar14 = iVar14 + -1;
          pfVar10 = &pTVar30->left;
          pTVar23 = (TRect_float_ *)&pTVar23->top;
          pTVar30 = (TRect_float_ *)&pTVar30->top;
          *pfVar21 = *pfVar29 + (*pfVar10 - *pfVar29) * fVar39;
          pfVar21 = pfVar21 + 1;
        } while (-1 < iVar14);
                    /* end of inlined section */
        (*(code *)prc->__vtable->ZTest)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
        if (__usemask != 0) {
          (*(code *)prc->__vtable->TriIndexed)
                    ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,pfVar19,3);
        }
                    /* inlined from /eor/src2/engine/e_rc.h */
        pfVar21 = (float *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0xf0,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        *pfVar21 = (pEVar16->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        pfVar21[1] = (pEVar16->field0_0x0).d[1];
        pfVar21[2] = (pEVar16->field0_0x0).d[2];
        pfVar21[0x14] = (pEVar17->field0_0x0).d[0];
        pfVar21[0x15] = (pEVar17->field0_0x0).d[1];
                    /* end of inlined section */
        pfVar21[0x16] = (pEVar17->field0_0x0).d[2];
        pEVar15 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_LOWER_LEFT);
        iVar14 = __usemask;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        pfVar21[0x28] = (pEVar15->field0_0x0).d[0];
        pfVar21[0x29] = (pEVar15->field0_0x0).d[1];
                    /* end of inlined section */
        pfVar21[0x2a] = (pEVar15->field0_0x0).d[2];
        if (iVar14 != 0) {
          (*(code *)prc->__vtable->TriIndexed)
                    ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,pfVar21,3);
        }
                    /* inlined from /eor/src2/engine/e_graphics.h */
        pEVar5 = _ELiveMode_win.field0_0x0.field0_0x0.__vtable;
                    /* end of inlined section */
        pEVar4 = (_pGfx->field0_0x0).__vtable;
        iVar14 = _pGfx->m_xscreen;
        fVar40 = _fov * (float)_pGfx->m_yscreen;
        sVar2 = *(short *)(_ELiveMode_win.field0_0x0.field0_0x0.__vtable + 2);
        uVar35 = (*(code *)pEVar4[0xd].EGlobalManagerClient)
                           ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar4 + 0xd));
        (*(code *)pEVar5[2].EWindow)
                  (fVar40 / (float)iVar14,uVar35,_nearPlane * _globals._EHouse_levelrad,
                   _farPlane * _globals._EHouse_levelrad,
                   (int)&_ELiveMode_win.field0_0x0.field0_0x0.m_mWindow.field0_0x0 + (int)sVar2);
        SetWinPos__8ESimsCamR9E3DWindow(pEVar3,&_ELiveMode_win.field0_0x0);
                    /* inlined from /eor/src2/engine/window/e_portalwindow.h */
                    /* end of inlined section */
        iVar14 = 4;
        do {
          bVar13 = iVar14 != -1;
          iVar14 = iVar14 + -1;
        } while (bVar13);
                    /* end of inlined section */
        pEVar15 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_EYE);
        fVar39 = fVar39 * 1.001;
        pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_UPPER_RIGHT);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_1a0 = (pEVar16->field0_0x0).d[0] - (pEVar15->field0_0x0).d[0];
        local_198 = (pEVar16->field0_0x0).d[2] - (pEVar15->field0_0x0).d[2];
        local_19c = (pEVar16->field0_0x0).d[1] - (pEVar15->field0_0x0).d[1];
        local_1b0 = local_1a0 * fVar39;
        local_1a8 = local_198 * fVar39;
        local_1ac = local_19c * fVar39;
        local_1c0.left = (pEVar15->field0_0x0).d[0] + local_1b0;
        local_1c0.top = (pEVar15->field0_0x0).d[1] + local_1ac;
        vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2] + local_1a8;
        local_1c0.right = vPoint.field0_0x0.d[2];
        vPoint.field0_0x0._0_8_ = CONCAT44(local_1c0.top,local_1c0.left);
        puVar1 = (undefined *)((int)&vPoint.field0_0x0 + 7);
        uVar25 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar25);
        *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 |
                  (ulong)vPoint.field0_0x0._0_8_ >> (7 - uVar25) * 8;
                    /* end of inlined section */
        pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_UPPER_LEFT);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_1a0 = (pEVar16->field0_0x0).d[0] - (pEVar15->field0_0x0).d[0];
        local_198 = (pEVar16->field0_0x0).d[2] - (pEVar15->field0_0x0).d[2];
        local_19c = (pEVar16->field0_0x0).d[1] - (pEVar15->field0_0x0).d[1];
        local_1b0 = local_1a0 * fVar39;
        local_1a8 = local_198 * fVar39;
        local_1ac = local_19c * fVar39;
        local_1c0.left = (pEVar15->field0_0x0).d[0] + local_1b0;
        local_1c0.top = (pEVar15->field0_0x0).d[1] + local_1ac;
        local_1c0.right = (pEVar15->field0_0x0).d[2] + local_1a8;
        portal.vCorners[0].field0_0x0._0_8_ = CONCAT44(local_1c0.top,local_1c0.left);
        puVar1 = (undefined *)((int)&portal.vCorners[0].field0_0x0 + 7);
        uVar25 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar25);
        *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 |
                  portal.vCorners[0].field0_0x0._0_8_ >> (7 - uVar25) * 8;
        portal.vCorners[0].field0_0x0._8_4_ = local_1c0.right;
                    /* end of inlined section */
        pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_LOWER_LEFT);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_1a0 = (pEVar16->field0_0x0).d[0] - (pEVar15->field0_0x0).d[0];
        local_198 = (pEVar16->field0_0x0).d[2] - (pEVar15->field0_0x0).d[2];
        local_19c = (pEVar16->field0_0x0).d[1] - (pEVar15->field0_0x0).d[1];
        local_1b0 = local_1a0 * fVar39;
        local_1a8 = local_198 * fVar39;
        local_1ac = local_19c * fVar39;
        local_1c0.left = (pEVar15->field0_0x0).d[0] + local_1b0;
        local_1c0.top = (pEVar15->field0_0x0).d[1] + local_1ac;
        local_1c0.right = (pEVar15->field0_0x0).d[2] + local_1a8;
        puVar1 = (undefined *)((int)&portal.vCorners[1].field0_0x0 + 7);
        uVar25 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar25);
        *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 |
                  CONCAT44(local_1c0.top,local_1c0.left) >> (7 - uVar25) * 8;
        uVar25 = (uint)(portal.vCorners + 1) & 7;
        puVar6 = (ulong *)((int)(portal.vCorners + 1) - uVar25);
        *puVar6 = CONCAT44(local_1c0.top,local_1c0.left) << uVar25 * 8 |
                  *puVar6 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
        portal.vCorners[1].field0_0x0._8_4_ = local_1c0.right;
                    /* end of inlined section */
        pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(&_ELiveMode_win,E_FC_LOWER_RIGHT);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar37 = (pEVar16->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar36 = (pEVar15->field0_0x0).d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar40 = (pEVar15->field0_0x0).d[2];
        portal.vCorners[2].field0_0x0._0_8_ =
             CONCAT44((pEVar15->field0_0x0).d[1] +
                      ((pEVar16->field0_0x0).d[1] - (pEVar15->field0_0x0).d[1]) * fVar39,
                      (pEVar15->field0_0x0).d[0] +
                      ((pEVar16->field0_0x0).d[0] - (pEVar15->field0_0x0).d[0]) * fVar39);
        puVar1 = (undefined *)((int)&portal.vCorners[2].field0_0x0 + 7);
        uVar25 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar25);
        *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 |
                  portal.vCorners[2].field0_0x0._0_8_ >> (7 - uVar25) * 8;
        portal.vCorners[2].field0_0x0._8_4_ = fVar40 + (fVar37 - fVar36) * fVar39;
        portal.vCorners[1].field0_0x0._8_4_ =
             portal.vCorners[1].field0_0x0._8_4_ +
             (portal.vCorners[0].field0_0x0._8_4_ - portal.vCorners[1].field0_0x0._8_4_) * 0.3333333
        ;
        uVar9 = CONCAT44(portal.vCorners[1].field0_0x0._4_4_ +
                         (portal.vCorners[0].field0_0x0._4_4_ - portal.vCorners[1].field0_0x0._4_4_)
                         * 0.3333333,
                         portal.vCorners[1].field0_0x0._0_4_ +
                         (portal.vCorners[0].field0_0x0._0_4_ - portal.vCorners[1].field0_0x0._0_4_)
                         * 0.3333333);
        puVar1 = (undefined *)((int)&portal.vCorners[1].field0_0x0 + 7);
        uVar25 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar25);
        *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 | uVar9 >> (7 - uVar25) * 8;
        uVar25 = (uint)(portal.vCorners + 1) & 7;
        puVar6 = (ulong *)((int)(portal.vCorners + 1) - uVar25);
        *puVar6 = uVar9 << uVar25 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
        fVar39 = portal.vCorners[2].field0_0x0._0_4_ +
                 (vPoint.field0_0x0.d[0] - portal.vCorners[2].field0_0x0._0_4_) * 0.3333333;
        fVar36 = portal.vCorners[2].field0_0x0._4_4_ +
                 (vPoint.field0_0x0.d[1] - portal.vCorners[2].field0_0x0._4_4_) * 0.3333333;
        fVar40 = portal.vCorners[2].field0_0x0._8_4_ +
                 (vPoint.field0_0x0.d[2] - portal.vCorners[2].field0_0x0._8_4_) * 0.3333333;
        portal.vCorners[2].field0_0x0._0_8_ = CONCAT44(fVar36,fVar39);
        puVar1 = (undefined *)((int)&portal.vCorners[2].field0_0x0 + 7);
        uVar25 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar25);
        *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 |
                  portal.vCorners[2].field0_0x0._0_8_ >> (7 - uVar25) * 8;
        portal.vCorners[2].field0_0x0._8_4_ = fVar40;
        uVar9 = CONCAT44(portal.vCorners[1].field0_0x0._4_4_ +
                         (fVar36 - portal.vCorners[1].field0_0x0._4_4_) * 0.3333333,
                         portal.vCorners[1].field0_0x0._0_4_ +
                         (fVar39 - portal.vCorners[1].field0_0x0._0_4_) * 0.3333333);
        puVar1 = (undefined *)((int)&portal.vCorners[1].field0_0x0 + 7);
        uVar25 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar25);
        *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 | uVar9 >> (7 - uVar25) * 8;
        uVar25 = (uint)(portal.vCorners + 1) & 7;
        puVar6 = (ulong *)((int)(portal.vCorners + 1) - uVar25);
        *puVar6 = uVar9 << uVar25 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
        portal.vCorners[1].field0_0x0._8_4_ =
             portal.vCorners[1].field0_0x0._8_4_ +
             (fVar40 - portal.vCorners[1].field0_0x0._8_4_) * 0.3333333;
        local_1a0 = vPoint.field0_0x0.d[0] - portal.vCorners[0].field0_0x0._0_4_;
        local_19c = vPoint.field0_0x0.d[1] - portal.vCorners[0].field0_0x0._4_4_;
        local_198 = vPoint.field0_0x0.d[2] - portal.vCorners[0].field0_0x0._8_4_;
        local_1b0 = local_1a0 * 0.3333333;
        local_1ac = local_19c * 0.3333333;
        local_1a8 = local_198 * 0.3333333;
        local_1c0.left = portal.vCorners[0].field0_0x0._0_4_ + local_1b0;
        local_1c0.top = portal.vCorners[0].field0_0x0._4_4_ + local_1ac;
        local_1c0.right = portal.vCorners[0].field0_0x0._8_4_ + local_1a8;
        portal.vCorners[0].field0_0x0._0_8_ = CONCAT44(local_1c0.top,local_1c0.left);
        puVar1 = (undefined *)((int)&portal.vCorners[0].field0_0x0 + 7);
        uVar25 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar25);
        *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 |
                  portal.vCorners[0].field0_0x0._0_8_ >> (7 - uVar25) * 8;
                    /* end of inlined section */
        portal.nCorners = 3;
        portal.flags = 0;
        portal.vCorners[0].field0_0x0._8_4_ = local_1c0.right;
        PushPortal__13EPortalWindowRC10EPortalDefbUi(&_ELiveMode_win,local_cc,true,0x15);
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
        local_1c0.top = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
        local_1c0.left = -0.5;
                    /* end of inlined section */
        local_1c0.bottom = 1.5;
        local_1c0.right = fVar38;
        SetViewport__9E3DWindowRCt5TRect1Zf(&_ELiveMode_win.field0_0x0,&local_1c0);
                    /* inlined from /eor/src2/common/math/e_rect.h */
        local_1c0.left = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
        local_1c0.top = 0.0;
        local_1c0.right = fVar38;
        local_1c0.bottom = fVar38;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
        SetClip__7EWindowRCt5TRect1Zf((EWindow *)&_ELiveMode_win,&local_1c0);
        (*(code *)(_ELiveMode_win.field0_0x0.field0_0x0.__vtable)->OutputCoordinatesChanged)
                  ((int)&_ELiveMode_win.field0_0x0.field0_0x0.m_mWindow.field0_0x0 +
                   (int)*(short *)&(_ELiveMode_win.field0_0x0.field0_0x0.__vtable)->
                                   InputCoordinatesChanged,prc);
      }
    } while (local_e0 <= nctrls);
  }
  ForceFullScreen__8ESimsCam(_globals._pCurCam);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
  pEVar5 = ((_globals._pCurCam)->m_win).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar5->OutputCoordinatesChanged)
            ((int)&((_globals._pCurCam)->m_win).field0_0x0.field0_0x0.m_mWindow.field0_0x0 +
             (int)*(short *)&pEVar5->InputCoordinatesChanged,prc);
  if (nctrls != 0) {
                    /* inlined from /eor/src2/engine/e_rc.h */
    puVar24 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x140,0x10);
    this_00 = _7EWindow_m_pCurrentPortalWindow;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
    fVar40 = _nearPlane / _farPlane;
    *(undefined4 *)(puVar24 + 2) = 0;
    *(undefined4 *)((int)puVar24 + 0x14) = 0;
    *(undefined4 *)((int)puVar24 + 0x1c) = 0;
    *(undefined4 *)(puVar24 + 8) = 0;
    *(undefined4 *)((int)puVar24 + 0x44) = 0;
    *(undefined4 *)(puVar24 + 9) = 0;
    fVar40 = fVar40 * 1.001;
    *(undefined4 *)((int)puVar24 + 0x4c) = 0;
    *(undefined4 *)((int)puVar24 + 0x3c) = 0x7f;
    *(undefined4 *)(puVar24 + 3) = 0x7f;
    *(undefined4 *)(puVar24 + 6) = 0x7f;
    *(undefined4 *)((int)puVar24 + 0x34) = 0x7f;
    *(undefined4 *)(puVar24 + 7) = 0x7f;
    pEVar15 = GetFrustCorner__13EPortalWindow12EFrustCorner(this_00,E_FC_UPPER_LEFT);
    pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(this_00,E_FC_UPPER_RIGHT);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1a0 = (pEVar16->field0_0x0).d[0] - (pEVar15->field0_0x0).d[0];
    local_19c = (pEVar16->field0_0x0).d[1] - (pEVar15->field0_0x0).d[1];
    local_198 = (pEVar16->field0_0x0).d[2] - (pEVar15->field0_0x0).d[2];
    local_1b0 = local_1a0 * _2pdivBlend;
    local_1ac = local_19c * _2pdivBlend;
    local_1a8 = local_198 * _2pdivBlend;
    vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2] + local_1a8;
    local_1c0.left = (pEVar15->field0_0x0).d[0] + local_1b0;
    local_1c0.top = (pEVar15->field0_0x0).d[1] + local_1ac;
    local_1c0.right = vPoint.field0_0x0.d[2];
    vPoint.field0_0x0._0_8_ = CONCAT44(local_1c0.top,local_1c0.left);
    puVar1 = (undefined *)((int)&vPoint.field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 | (ulong)vPoint.field0_0x0._0_8_ >> (7 - uVar25) * 8
    ;
                    /* end of inlined section */
    pEVar15 = GetFrustCorner__13EPortalWindow12EFrustCorner(this_00,E_FC_EYE);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1a0 = vPoint.field0_0x0.d[0] - (pEVar15->field0_0x0).d[0];
    local_19c = vPoint.field0_0x0.d[1] - (pEVar15->field0_0x0).d[1];
    local_198 = vPoint.field0_0x0.d[2] - (pEVar15->field0_0x0).d[2];
    local_1b0 = local_1a0 * fVar40;
    local_1ac = local_19c * fVar40;
    local_1a8 = local_198 * fVar40;
    vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2] + local_1a8;
    fVar38 = (pEVar15->field0_0x0).d[0] + local_1b0;
    fVar39 = (pEVar15->field0_0x0).d[1] + local_1ac;
    local_1c0.right = vPoint.field0_0x0.d[2];
    local_1c0.left = fVar38;
    local_1c0.top = fVar39;
    vPoint.field0_0x0._0_8_ = CONCAT44(fVar39,fVar38);
    puVar1 = (undefined *)((int)&vPoint.field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 | (ulong)vPoint.field0_0x0._0_8_ >> (7 - uVar25) * 8
    ;
    *(float *)puVar24 = fVar38;
    *(float *)((int)puVar24 + 4) = fVar39;
                    /* end of inlined section */
    *(undefined4 *)((int)puVar24 + 0xc) = 0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    *(undefined4 *)(puVar24 + 1) = vPoint.field0_0x0.d[2];
    puVar12 = puVar24 + 10;
    puVar27 = puVar24;
    do {
      puVar26 = puVar27;
      puVar31 = puVar12;
      uVar7 = *puVar26;
                    /* end of inlined section */
      uVar35 = *(undefined4 *)(puVar26 + 1);
      uVar32 = *(undefined4 *)((int)puVar26 + 0xc);
      uVar8 = puVar26[2];
      uVar33 = *(undefined4 *)(puVar26 + 3);
      uVar34 = *(undefined4 *)((int)puVar26 + 0x1c);
      *(int *)puVar31 = (int)uVar7;
      *(int *)((int)puVar31 + 4) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(puVar31 + 1) = uVar35;
      *(undefined4 *)((int)puVar31 + 0xc) = uVar32;
      *(int *)(puVar31 + 2) = (int)uVar8;
      *(int *)((int)puVar31 + 0x14) = (int)((ulong)uVar8 >> 0x20);
      *(undefined4 *)(puVar31 + 3) = uVar33;
      *(undefined4 *)((int)puVar31 + 0x1c) = uVar34;
      puVar27 = puVar26 + 4;
      puVar12 = puVar31 + 4;
    } while (puVar27 != puVar24 + 8);
    uVar7 = *puVar27;
    uVar35 = *(undefined4 *)(puVar26 + 5);
    uVar32 = *(undefined4 *)((int)puVar26 + 0x2c);
    *(int *)(puVar31 + 4) = (int)uVar7;
    *(int *)((int)puVar31 + 0x24) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(puVar31 + 5) = uVar35;
    *(undefined4 *)((int)puVar31 + 0x2c) = uVar32;
    pEVar15 = GetFrustCorner__13EPortalWindow12EFrustCorner(this_00,E_FC_UPPER_LEFT);
    local_c8 = puVar24 + 0xe;
    pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(this_00,E_FC_LOWER_LEFT);
    local_dc = puVar24 + 0x18;
    local_d4 = puVar24 + 0x22;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1a0 = (pEVar16->field0_0x0).d[0] - (pEVar15->field0_0x0).d[0];
    local_19c = (pEVar16->field0_0x0).d[1] - (pEVar15->field0_0x0).d[1];
    local_198 = (pEVar16->field0_0x0).d[2] - (pEVar15->field0_0x0).d[2];
    local_1b0 = local_1a0 * _2pdivBlend;
    local_1ac = local_19c * _2pdivBlend;
    local_1a8 = local_198 * _2pdivBlend;
    vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2] + local_1a8;
    local_1c0.left = (pEVar15->field0_0x0).d[0] + local_1b0;
    local_1c0.top = (pEVar15->field0_0x0).d[1] + local_1ac;
    local_1c0.right = vPoint.field0_0x0.d[2];
    vPoint.field0_0x0._0_8_ = CONCAT44(local_1c0.top,local_1c0.left);
    puVar1 = (undefined *)((int)&vPoint.field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 | (ulong)vPoint.field0_0x0._0_8_ >> (7 - uVar25) * 8
    ;
                    /* end of inlined section */
    pEVar15 = GetFrustCorner__13EPortalWindow12EFrustCorner(this_00,E_FC_EYE);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1a0 = vPoint.field0_0x0.d[0] - (pEVar15->field0_0x0).d[0];
    local_19c = vPoint.field0_0x0.d[1] - (pEVar15->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_198 = vPoint.field0_0x0.d[2] - (pEVar15->field0_0x0).d[2];
    local_1b0 = local_1a0 * fVar40;
    local_1ac = local_19c * fVar40;
    local_1a8 = local_198 * fVar40;
    vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2] + local_1a8;
    fVar38 = (pEVar15->field0_0x0).d[0] + local_1b0;
    fVar39 = (pEVar15->field0_0x0).d[1] + local_1ac;
    local_1c0.right = vPoint.field0_0x0.d[2];
    local_1c0.left = fVar38;
    local_1c0.top = fVar39;
    vPoint.field0_0x0._0_8_ = CONCAT44(fVar39,fVar38);
    puVar1 = (undefined *)((int)&vPoint.field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 | (ulong)vPoint.field0_0x0._0_8_ >> (7 - uVar25) * 8
    ;
    *(float *)(puVar24 + 10) = fVar38;
    *(float *)((int)puVar24 + 0x54) = fVar39;
    *(undefined4 *)(puVar24 + 0xb) = vPoint.field0_0x0.d[2];
                    /* end of inlined section */
    *(undefined4 *)((int)puVar24 + 0x5c) = 0;
    puVar12 = puVar24 + 0x14;
    puVar27 = puVar24;
    do {
      puVar26 = puVar27;
      puVar31 = puVar12;
      uVar7 = *puVar26;
      uVar33 = *(undefined4 *)(puVar26 + 1);
      uVar34 = *(undefined4 *)((int)puVar26 + 0xc);
      uVar8 = puVar26[2];
      uVar35 = *(undefined4 *)(puVar26 + 3);
      uVar32 = *(undefined4 *)((int)puVar26 + 0x1c);
      *(int *)puVar31 = (int)uVar7;
      *(int *)((int)puVar31 + 4) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(puVar31 + 1) = uVar33;
      *(undefined4 *)((int)puVar31 + 0xc) = uVar34;
      *(int *)(puVar31 + 2) = (int)uVar8;
      *(int *)((int)puVar31 + 0x14) = (int)((ulong)uVar8 >> 0x20);
      *(undefined4 *)(puVar31 + 3) = uVar35;
      *(undefined4 *)((int)puVar31 + 0x1c) = uVar32;
      puVar27 = puVar26 + 4;
      puVar12 = puVar31 + 4;
    } while (puVar27 != puVar24 + 8);
    uVar7 = *puVar27;
    uVar35 = *(undefined4 *)(puVar26 + 5);
    uVar32 = *(undefined4 *)((int)puVar26 + 0x2c);
    *(int *)(puVar31 + 4) = (int)uVar7;
    *(int *)((int)puVar31 + 0x24) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(puVar31 + 5) = uVar35;
    *(undefined4 *)((int)puVar31 + 0x2c) = uVar32;
    pEVar15 = GetFrustCorner__13EPortalWindow12EFrustCorner(this_00,E_FC_LOWER_RIGHT);
    pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(this_00,E_FC_UPPER_RIGHT);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1a0 = (pEVar16->field0_0x0).d[0] - (pEVar15->field0_0x0).d[0];
    local_19c = (pEVar16->field0_0x0).d[1] - (pEVar15->field0_0x0).d[1];
    local_198 = (pEVar16->field0_0x0).d[2] - (pEVar15->field0_0x0).d[2];
    local_1b0 = local_1a0 * _2pdivBlend;
    local_1ac = local_19c * _2pdivBlend;
    local_1a8 = local_198 * _2pdivBlend;
    vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2] + local_1a8;
    local_1c0.left = (pEVar15->field0_0x0).d[0] + local_1b0;
    local_1c0.top = (pEVar15->field0_0x0).d[1] + local_1ac;
    local_1c0.right = vPoint.field0_0x0.d[2];
    vPoint.field0_0x0._0_8_ = CONCAT44(local_1c0.top,local_1c0.left);
    puVar1 = (undefined *)((int)&vPoint.field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 | (ulong)vPoint.field0_0x0._0_8_ >> (7 - uVar25) * 8
    ;
                    /* end of inlined section */
    pEVar15 = GetFrustCorner__13EPortalWindow12EFrustCorner(this_00,E_FC_EYE);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1a0 = vPoint.field0_0x0.d[0] - (pEVar15->field0_0x0).d[0];
    local_19c = vPoint.field0_0x0.d[1] - (pEVar15->field0_0x0).d[1];
    local_198 = vPoint.field0_0x0.d[2] - (pEVar15->field0_0x0).d[2];
    local_1b0 = local_1a0 * fVar40;
    local_1ac = local_19c * fVar40;
    local_1a8 = local_198 * fVar40;
    vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2] + local_1a8;
    fVar38 = (pEVar15->field0_0x0).d[0] + local_1b0;
    fVar39 = (pEVar15->field0_0x0).d[1] + local_1ac;
    local_1c0.right = vPoint.field0_0x0.d[2];
    local_1c0.left = fVar38;
    local_1c0.top = fVar39;
    vPoint.field0_0x0._0_8_ = CONCAT44(fVar39,fVar38);
    puVar1 = (undefined *)((int)&vPoint.field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 | (ulong)vPoint.field0_0x0._0_8_ >> (7 - uVar25) * 8
    ;
    *(float *)(puVar24 + 0x14) = fVar38;
    *(float *)((int)puVar24 + 0xa4) = fVar39;
    *(undefined4 *)(puVar24 + 0x15) = vPoint.field0_0x0.d[2];
                    /* end of inlined section */
    *(undefined4 *)((int)puVar24 + 0xac) = 0;
    puVar12 = puVar24 + 0x1e;
    puVar27 = puVar24;
    do {
      puVar26 = puVar27;
      puVar31 = puVar12;
      uVar7 = *puVar26;
      uVar35 = *(undefined4 *)(puVar26 + 1);
      uVar32 = *(undefined4 *)((int)puVar26 + 0xc);
      uVar8 = puVar26[2];
      uVar33 = *(undefined4 *)(puVar26 + 3);
      uVar34 = *(undefined4 *)((int)puVar26 + 0x1c);
      *(int *)puVar31 = (int)uVar7;
      *(int *)((int)puVar31 + 4) = (int)((ulong)uVar7 >> 0x20);
      *(undefined4 *)(puVar31 + 1) = uVar35;
      *(undefined4 *)((int)puVar31 + 0xc) = uVar32;
      *(int *)(puVar31 + 2) = (int)uVar8;
      *(int *)((int)puVar31 + 0x14) = (int)((ulong)uVar8 >> 0x20);
      *(undefined4 *)(puVar31 + 3) = uVar33;
      *(undefined4 *)((int)puVar31 + 0x1c) = uVar34;
      puVar27 = puVar26 + 4;
      puVar12 = puVar31 + 4;
    } while (puVar27 != puVar24 + 8);
    uVar7 = *puVar27;
    uVar35 = *(undefined4 *)(puVar26 + 5);
    uVar32 = *(undefined4 *)((int)puVar26 + 0x2c);
    *(int *)(puVar31 + 4) = (int)uVar7;
    *(int *)((int)puVar31 + 0x24) = (int)((ulong)uVar7 >> 0x20);
    *(undefined4 *)(puVar31 + 5) = uVar35;
    *(undefined4 *)((int)puVar31 + 0x2c) = uVar32;
    pEVar15 = GetFrustCorner__13EPortalWindow12EFrustCorner(this_00,E_FC_LOWER_RIGHT);
    pEVar16 = GetFrustCorner__13EPortalWindow12EFrustCorner(this_00,E_FC_LOWER_LEFT);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1a0 = (pEVar16->field0_0x0).d[0] - (pEVar15->field0_0x0).d[0];
    local_19c = (pEVar16->field0_0x0).d[1] - (pEVar15->field0_0x0).d[1];
    local_198 = (pEVar16->field0_0x0).d[2] - (pEVar15->field0_0x0).d[2];
    local_1ac = local_19c * _2pdivBlend;
    local_1b0 = local_1a0 * _2pdivBlend;
    local_1a8 = local_198 * _2pdivBlend;
    vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2] + local_1a8;
    local_1c0.left = (pEVar15->field0_0x0).d[0] + local_1b0;
    local_1c0.top = (pEVar15->field0_0x0).d[1] + local_1ac;
    local_1c0.right = vPoint.field0_0x0.d[2];
    vPoint.field0_0x0._0_8_ = CONCAT44(local_1c0.top,local_1c0.left);
    puVar1 = (undefined *)((int)&vPoint.field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 | (ulong)vPoint.field0_0x0._0_8_ >> (7 - uVar25) * 8
    ;
                    /* end of inlined section */
    pEVar15 = GetFrustCorner__13EPortalWindow12EFrustCorner(this_00,E_FC_EYE);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1a0 = vPoint.field0_0x0.d[0] - (pEVar15->field0_0x0).d[0];
    local_19c = vPoint.field0_0x0.d[1] - (pEVar15->field0_0x0).d[1];
    local_198 = vPoint.field0_0x0.d[2] - (pEVar15->field0_0x0).d[2];
    local_1b0 = local_1a0 * fVar40;
    local_1ac = local_19c * fVar40;
    local_1a8 = local_198 * fVar40;
    vPoint.field0_0x0.d[2] = (pEVar15->field0_0x0).d[2] + local_1a8;
    local_1c0.left = (pEVar15->field0_0x0).d[0] + local_1b0;
    local_1c0.top = (pEVar15->field0_0x0).d[1] + local_1ac;
    local_1c0.right = vPoint.field0_0x0.d[2];
    vPoint.field0_0x0._0_8_ = CONCAT44(local_1c0.top,local_1c0.left);
    puVar1 = (undefined *)((int)&vPoint.field0_0x0 + 7);
    uVar25 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar25);
    *puVar6 = *puVar6 & -1L << (uVar25 + 1) * 8 | (ulong)vPoint.field0_0x0._0_8_ >> (7 - uVar25) * 8
    ;
    *(float *)(puVar24 + 0x1e) = local_1c0.left;
    *(float *)((int)puVar24 + 0xf4) = local_1c0.top;
    *(undefined4 *)(puVar24 + 0x1f) = vPoint.field0_0x0.d[2];
                    /* end of inlined section */
    *(undefined4 *)((int)puVar24 + 0xfc) = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    *(undefined4 *)(puVar24 + 4) = 0x3f800000;
    *(undefined4 *)((int)puVar24 + 0x24) = 0xbf800000;
    *(undefined4 *)(puVar24 + 0xe) = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    *(undefined4 *)((int)local_c8 + 4) = 0;
    *(undefined4 *)(puVar24 + 0x18) = 0;
    *(undefined4 *)((int)local_dc + 4) = 0xbf800000;
    local_1c0.left = 0.0;
    local_1c0.top = 0.0;
    *(undefined4 *)(puVar24 + 0x22) = 0;
    *(undefined4 *)((int)local_d4 + 4) = 0;
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(local_f0->m_p2PlayerDivShad,prc,0);
    (*(code *)prc->__vtable->ZTest)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
    (*(code *)prc->__vtable->TriIndexed)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar24,4);
  }
  return;
}

void ELiveMode::DrawStickFigures() {
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
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___13EPortalWindow(&_ELiveMode_win,2);
      ___7EWindow(&_2Dwin.field0_0x0,0);
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      _lightpos.field0_0x0.d[0] = 0.45;
      _lightpos.field0_0x0.d[2] = -0.85;
      _dir2Color.field0_0x0.d[0] = 1.0;
      _lightpos.field0_0x0.d[1] = 0.3;
      _ambColor.field0_0x0.d[1] = 1.0;
      _ambColor.field0_0x0.d[0] = 1.0;
      _dirColor.field0_0x0.d[1] = 1.0;
      _dirColor.field0_0x0.d[0] = 1.0;
      _dir2Color.field0_0x0.d[1] = 1.0;
      _ambColor.field0_0x0.d[2] = 1.0;
      _dirColor.field0_0x0.d[2] = 1.0;
      _dir2Color.field0_0x0.d[2] = 1.0;
      __9E3DWindow(&_2Dwin);
      __13EPortalWindow(&_ELiveMode_win);
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

void EGameState::~EGameState(int __in_chrg) {
	EGameStateId *this;
	void *pAddress;
	void *ptr;
	
  this->__vtable = (EGameState__vtable *)_vt_10EGameState;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void global constructors keyed to _pMaskTexture() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _pMaskTexture() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
