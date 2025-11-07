// STATUS: NOT STARTED

#include "eoractionqueue.h"

// warning: multiple differing types with the same name (name not equal)
struct EActionQueue : EUIMenu, virtual Panelstateman {
	Panelstateman *$vb2090;
protected:
	bool m_needsInit;
	bool m_bUserActionPlaced;
	SInt32 m_UserActionId;
	EVec2 m_vActionStart;
	EActionIconCache *m_pIconCache;
	
public:
	EActionQueue& operator=();
	EActionQueue();
	EActionQueue();
	/* vtable[1] */ virtual EActionQueue(EActionQueue*, int, void);
	/* vtable[7] */ virtual void Message();
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual void Draw();
	/* vtable[12] */ virtual void AddChild();
	/* vtable[15] */ virtual void RemoveOpt();
	/* vtable[16] */ virtual void AddOpt();
	/* vtable[2] */ virtual void SetState();
	/* vtable[3] */ virtual void SetEvent();
	void Init();
	void GetListOfActionsInQueue();
	void SetShader();
	/* vtable[21] */ virtual void NextItem();
	/* vtable[22] */ virtual void PrevItem();
protected:
	void ResizeList();
	EActionIcon* GetIconFromActionId();
	bool StripMarkedActions();
};

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb2399;
	__vtbl_ptr_type *$vf2463;
	
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
	cXObject *$vb2463;
	static Int kSimTicksPerMotiveTick;
	__vtbl_ptr_type *$vf2261;
	
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
	Panelstateman *$vb2090;
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
	Panelstateman *$vb2090;
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
	Panelstateman *$vb2090;
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
struct cXMTObject : virtual cXObject {
	cXObject *$vb2463;
	__vtbl_ptr_type *$vf4727;
	
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

float _p1aqoff = 0.1f;
float _p1aqoffy = 0.67f;
float _p2aqoffy = 0.205f;

EUIObjectNode *_PCUROPTDBG[2] = {
	/* [0] = */ NULL,
	/* [1] = */ NULL
};

float _queueBackScale = 0.005f;
float EActionIcon::m_burpscale = 1.75f;
float EActionIcon::m_burptime = 0.1f;

__vtbl_ptr_type EActionIcon virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EActionIcon::~EActionIcon,
		/* .__delta2 = */ -8864
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EActionIcon::Update,
		/* .__delta2 = */ -4520
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EActionIcon::Draw,
		/* .__delta2 = */ -6688
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
		/* .__pfn = */ &EActionIcon::Message,
		/* .__delta2 = */ -3352
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

__vtbl_ptr_type EActionQueue::Panelstateman virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ -180,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -180,
		/* .__index = */ 0,
		/* .__pfn = */ &EActionQueue::~EActionQueue,
		/* .__delta2 = */ -13896
	},
	/* [2] = */ {
		/* .__delta = */ -180,
		/* .__index = */ 0,
		/* .__pfn = */ &EActionQueue::SetState,
		/* .__delta2 = */ -9384
	},
	/* [3] = */ {
		/* .__delta = */ -180,
		/* .__index = */ 0,
		/* .__pfn = */ &EActionQueue::SetEvent,
		/* .__delta2 = */ -3360
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EActionQueue virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EActionQueue::~EActionQueue,
		/* .__delta2 = */ -13896
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EActionQueue::Update,
		/* .__delta2 = */ -11632
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EActionQueue::Draw,
		/* .__delta2 = */ -9984
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
		/* .__pfn = */ &EActionQueue::Message,
		/* .__delta2 = */ -9216
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
		/* .__pfn = */ &EActionQueue::AddChild,
		/* .__delta2 = */ -3400
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
		/* .__pfn = */ &EUIMenu::RemoveAllOpts,
		/* .__delta2 = */ 7024
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EActionQueue::RemoveOpt,
		/* .__delta2 = */ -13272
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EActionQueue::AddOpt,
		/* .__delta2 = */ -12984
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetPositions,
		/* .__delta2 = */ 9000
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
		/* .__pfn = */ &EUIMenu::SetLayout,
		/* .__delta2 = */ 11688
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
		/* .__pfn = */ &EActionQueue::NextItem,
		/* .__delta2 = */ -10176
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EActionQueue::PrevItem,
		/* .__delta2 = */ -10080
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

EActionIcon *_newChildArr[10] = {
	/* [0] = */ NULL,
	/* [1] = */ NULL,
	/* [2] = */ NULL,
	/* [3] = */ NULL,
	/* [4] = */ NULL,
	/* [5] = */ NULL,
	/* [6] = */ NULL,
	/* [7] = */ NULL,
	/* [8] = */ NULL,
	/* [9] = */ NULL
};

void EActionIconCache::~EActionIconCache(int __in_chrg) {
	TNodeList<EActionIcon *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	void *pAddress;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_list).field0_0x0.m_l.m_pHead;
  if (pEVar2 != (ENodeListNode *)0x0) {
    uVar1 = pEVar2->data;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      if (uVar1 != 0) {
        (**(code **)(*(int *)(uVar1 + 0x38) + 0xc))
                  (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x38) + 8),3);
      }
      if (pEVar2 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar2->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_list).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_list).field0_0x0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EActionIconCache::CreateCache() {
	int i;
	
  EActionIcon *pEVar1;
  int iVar2;
  
  iVar2 = 9;
  do {
    iVar2 = iVar2 + -1;
    pEVar1 = (EActionIcon *)__builtin_new(0xbc);
    pEVar1 = __11EActionIcon(pEVar1);
    Enqueue__16EActionIconCacheP11EActionIcon(this,pEVar1);
  } while (-1 < iVar2);
  return;
}

bool EActionIconCache::IsEmpty() {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  return (this->m_list).field0_0x0.m_l.m_pHead == (ENodeListNode *)0x0;
}

bool EActionIconCache::Enqueue(EActionIcon *pIn) {
	EActionIcon *data;
	
  bool bVar1;
  
  bVar1 = this->m_nMembers != 10;
  if (bVar1) {
    ClearState__11EActionIcon(pIn);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&(this->m_list).field0_0x0,(uint)pIn);
                    /* end of inlined section */
    this->m_nMembers = this->m_nMembers + 1;
  }
  return bVar1;
}

EActionIcon* EActionIconCache::Dequeue() {
  ENodeListNode *i;
  EActionIcon *this_00;
  
  if (this->m_nMembers == 0) {
    this_00 = (EActionIcon *)0x0;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    i = (this->m_list).field0_0x0.m_l.m_pHead;
    this_00 = (EActionIcon *)i->data;
    Remove__9ENodeListP17NLIteratorPtrType(&(this->m_list).field0_0x0,(undefined1 *)i);
                    /* end of inlined section */
    this->m_nMembers = this->m_nMembers + -1;
    ClearState__11EActionIcon(this_00);
  }
  return this_00;
}

EActionQueue* EActionQueue::EActionQueue(int __in_chrg, u32 playerid) {
  short sVar1;
  undefined6 uVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  EActionIconCache *pEVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  __vtbl_ptr_type local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  __vtbl_ptr_type local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (__in_chrg != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
    this->_vb2090 = (Panelstateman *)&this->field_0xb4;
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
    *(__vtbl_ptr_type **)&this->field_0xb8 = _vt_13Panelstateman;
    *(undefined4 *)&this->field_0xb4 = 0;
  }
                    /* end of inlined section */
  __7EUIMenuiifff((EUIMenu *)this,-1,0,0.05,0.0,0.0);
  this->_vb2090->__vtable = (Panelstateman__vtable *)_vt_12EActionQueue_13Panelstateman;
  uVar4 = _vt_12EActionQueue_13Panelstateman[3]._2_6_;
  uVar3 = _vt_12EActionQueue_13Panelstateman[2]._2_6_;
  uVar2 = _vt_12EActionQueue_13Panelstateman[1]._2_6_;
  if (__in_chrg == 0) {
    local_50 = _vt_12EActionQueue_13Panelstateman[4];
    local_70 = _vt_12EActionQueue_13Panelstateman[0];
    this->_vb2090->__vtable = (Panelstateman__vtable *)&local_70;
    sVar1 = (short)this - ((short)this->_vb2090 + -0xb4);
    local_68 = CONCAT62(uVar2,_vt_12EActionQueue_13Panelstateman[1].__delta + sVar1);
    local_60 = CONCAT62(uVar3,_vt_12EActionQueue_13Panelstateman[2].__delta + sVar1);
    local_58 = CONCAT62(uVar4,_vt_12EActionQueue_13Panelstateman[3].__delta + sVar1);
  }
  *(uint *)&this->field_0x30 = playerid;
  *(undefined4 *)&this->m_needsInit = 1;
  *(__vtbl_ptr_type **)&this->field_0x38 = _vt_12EActionQueue;
  pEVar5 = (EActionIconCache *)__builtin_new(0xc);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eoractionqueue.h */
                    /* end of inlined section */
  this->m_pIconCache = pEVar5;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eoractionqueue.h */
  (pEVar5->m_list).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (pEVar5->m_list).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  pEVar5->m_nMembers = 0;
  return this;
}

void EActionQueue::~EActionQueue(int __in_chrg) {
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	Panelstateman *this;
	void *pAddress;
	void *pAddress;
	
  short sVar1;
  undefined6 uVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  EActionIcon *pIn;
  EActionIcon *pEVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  __vtbl_ptr_type local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  __vtbl_ptr_type local_60;
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
  
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  *(__vtbl_ptr_type **)&this->field_0x38 = _vt_12EActionQueue;
  this->_vb2090->__vtable = (Panelstateman__vtable *)_vt_12EActionQueue_13Panelstateman;
  uVar4 = _vt_12EActionQueue_13Panelstateman[3]._2_6_;
  uVar3 = _vt_12EActionQueue_13Panelstateman[2]._2_6_;
  uVar2 = _vt_12EActionQueue_13Panelstateman[1]._2_6_;
  if (__in_chrg == 0) {
    local_60 = _vt_12EActionQueue_13Panelstateman[4];
    local_80 = _vt_12EActionQueue_13Panelstateman[0];
    this->_vb2090->__vtable = (Panelstateman__vtable *)&local_80;
    sVar1 = (short)this - ((short)this->_vb2090 + -0xb4);
    local_78 = CONCAT62(uVar2,_vt_12EActionQueue_13Panelstateman[1].__delta + sVar1);
    local_70 = CONCAT62(uVar3,_vt_12EActionQueue_13Panelstateman[2].__delta + sVar1);
    local_68 = CONCAT62(uVar4,_vt_12EActionQueue_13Panelstateman[3].__delta + sVar1);
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  pEVar5 = (EActionIcon *)(this->field0_0x0).m_state;
                    /* end of inlined section */
  if (pEVar5 != (EActionIcon *)0x0) {
                    /* end of inlined section */
    pIn = *(EActionIcon **)&pEVar5->field0_0x0;
    while( true ) {
      Enqueue__16EActionIconCacheP11EActionIcon(this->m_pIconCache,pIn);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar5 = *(EActionIcon **)((int)&pEVar5->field0_0x0 + 8);
                    /* end of inlined section */
      if (pEVar5 == (EActionIcon *)0x0) break;
      pIn = *(EActionIcon **)&pEVar5->field0_0x0;
    }
  }
  RemoveAll__9ENodeList((ENodeList *)this);
  if (this->m_pIconCache != (EActionIconCache *)0x0) {
    ___16EActionIconCache(this->m_pIconCache,3);
  }
  ___7EUIMenu((EUIMenu *)this,0);
  if ((__in_chrg & 2U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
    this->_vb2090->__vtable = (Panelstateman__vtable *)_vt_13Panelstateman;
  }
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EActionQueue::GetListOfActionsInQueue(EInteractionPtrList &list) {
	Int numActions;
	TNodeList<const Interaction *> *this;
	Int cnt;
	Interaction *pAction;
	TNodeList<const Interaction *> *this;
	Interaction *data;
	
  cXPerson__150_1300 *pcVar1;
  Interaction *pIVar2;
  cXObject__142_982 *pcVar3;
  int iVar4;
  cXPerson__150_1300__vtable *pcVar5;
  int iVar6;
  
  pcVar1 = _globals._pSelectedSims[*(int *)&this->field_0x30];
  if (pcVar1 != (cXPerson__150_1300 *)0x0) {
    pIVar2 = (Interaction *)
             (*(code *)pcVar1->__vtable->IsChild)
                       ((int)&pcVar1->_vb1187 + (int)*(short *)&pcVar1->__vtable->IsVisitor);
    pcVar3 = GetIconObject__C11Interaction(pIVar2);
    if (pcVar3 != (cXObject__142_982 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&list->field0_0x0,(uint)pIVar2);
    }
                    /* end of inlined section */
    iVar6 = 0;
    iVar4 = (*(code *)pcVar1->__vtable->SetNeighborID)
                      ((int)&pcVar1->_vb1187 + (int)*(short *)&pcVar1->__vtable->GetNeighborID);
    if (0 < iVar4) {
      pcVar5 = pcVar1->__vtable;
      while( true ) {
        pIVar2 = (Interaction *)
                 (*(code *)pcVar5->IsRouting)
                           ((int)&pcVar1->_vb1187 + (int)*(short *)&pcVar5->IsSleeping,iVar6);
        pcVar3 = GetIconObject__C11Interaction(pIVar2);
        if (pcVar3 != (cXObject__142_982 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          AddTail__9ENodeListUi(&list->field0_0x0,(uint)pIVar2);
        }
                    /* end of inlined section */
        iVar6 = iVar6 + 1;
        if (iVar4 <= iVar6) break;
        pcVar5 = pcVar1->__vtable;
      }
    }
  }
  return;
}

EActionIcon* EActionQueue::GetIconFromActionId(SInt32 id) {
	NLIterator childIt;
	NLIterator i;
	NLIterator i;
	
  EActionIcon *pEVar1;
  EActionIcon *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (EActionIcon *)(this->field0_0x0).m_state;
                    /* end of inlined section */
  if (pEVar2 != (EActionIcon *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar1 = *(EActionIcon **)&pEVar2->field0_0x0;
    while( true ) {
                    /* end of inlined section */
      if (pEVar1->m_actionID == id) {
        return pEVar1;
      }
      pEVar2 = *(EActionIcon **)((int)&pEVar2->field0_0x0 + 8);
                    /* end of inlined section */
      if (pEVar2 == (EActionIcon *)0x0) break;
      pEVar1 = *(EActionIcon **)&pEVar2->field0_0x0;
    }
  }
  return (EActionIcon *)0x0;
}

void EActionQueue::RemoveOpt(EUIObjectNode *pOpt) {
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  int iVar1;
  EUIObjectNode *pEVar2;
  
  if (*(EUIObjectNode **)&this->field_0x3c == pOpt) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    iVar1 = *(int *)&this->field_0x38;
    if (*(undefined4 **)(pOpt->m_listIr + 8) == (undefined4 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
      (**(code **)(iVar1 + 0x94))
                ((int)&(this->field0_0x0).m_state + (int)*(short *)(iVar1 + 0x90),
                 *(undefined4 *)(this->field0_0x0).m_state);
      pEVar2 = *(EUIObjectNode **)&this->field_0x3c;
    }
    else {
      (**(code **)(iVar1 + 0x94))
                ((int)&(this->field0_0x0).m_state + (int)*(short *)(iVar1 + 0x90),
                 **(undefined4 **)(pOpt->m_listIr + 8));
      pEVar2 = *(EUIObjectNode **)&this->field_0x3c;
    }
    if (pEVar2 == pOpt) {
      *(undefined4 *)&this->field_0x3c = 0;
    }
  }
  RemoveChild__13EUIObjectNodeP13EUIObjectNode((EUIObjectNode *)this,pOpt);
  return;
}

void EActionQueue::ResizeList() {
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	u32 id;
	
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)&this->field_0x54 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  piVar2 = (int *)(this->field0_0x0).m_state;
                    /* end of inlined section */
  *(undefined4 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x6c = 0;
  if (piVar2 != (int *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    iVar1 = *piVar2;
    while( true ) {
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)&this->field_0x54;
                    /* end of inlined section */
      *(int *)&this->field_0x54 = *(int *)&this->field_0x54 + 1;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      *(float *)&this->field_0x6c = *(float *)&this->field_0x6c + *(float *)(iVar1 + 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      *(float *)&this->field_0x68 = *(float *)&this->field_0x68 + *(float *)(iVar1 + 0x18);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      piVar2 = (int *)piVar2[2];
                    /* end of inlined section */
      if (piVar2 == (int *)0x0) break;
      iVar1 = *piVar2;
    }
  }
  (**(code **)(*(int *)&this->field_0x38 + 0x8c))
            ((int)&(this->field0_0x0).m_state + (int)*(short *)(*(int *)&this->field_0x38 + 0x88));
  return;
}

void EActionQueue::AddOpt(EUIObjectNode *pOpt, EVec3 pos) {
	NLIterator itrNewChild;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator searchitr;
	NLIterator itr;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	TNodeList<EUIObjectNode *> *this;
	NLIterator target;
	EUIObjectNode *data;
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	EUIObjectNode *this;
	u32 id;
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  int iVar1;
  undefined1 *itr;
  Panelstateman__vtable *pPVar2;
  Panelstateman__vtable *target;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  pOpt->m_pParent = (EUIObjectNode *)this;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((pOpt[1].m_pAutoRepeatMonitor == (EUiMonitorAutoRepeat *)0x0) ||
     (pPVar2 = (Panelstateman__vtable *)(this->field0_0x0).m_state,
     pPVar2 == (this->field0_0x0).__vtable)) {
    itr = AddTail__9ENodeListUi((ENodeList *)this,(uint)pOpt);
                    /* end of inlined section */
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    target = (Panelstateman__vtable *)0x0;
    if (pPVar2 != (Panelstateman__vtable *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      iVar1 = *(int *)pPVar2;
      while( true ) {
        if (*(int *)(iVar1 + 0x70) == 0) {
          target = pPVar2;
        }
        pPVar2 = (Panelstateman__vtable *)pPVar2->SetState;
        if ((pPVar2 == (Panelstateman__vtable *)0x0) || (target != (Panelstateman__vtable *)0x0))
        break;
        iVar1 = *(int *)pPVar2;
      }
    }
    if (target == (Panelstateman__vtable *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      itr = AddTail__9ENodeListUi((ENodeList *)this,(uint)pOpt);
                    /* end of inlined section */
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      itr = InsertBefore__9ENodeListP17NLIteratorPtrTypeUi
                      ((ENodeList *)this,(undefined1 *)target,(uint)pOpt);
                    /* end of inlined section */
    }
  }
  SetIterator__13EUIObjectNodeP13EUIObjectNodeP17NLIteratorPtrType((EUIObjectNode *)this,pOpt,itr);
  (*(code *)pOpt->__vtable->OnButtonRepeat)
            ((int)&(pOpt->m_ChildList).field0_0x0.m_l.m_pHead +
             (int)*(short *)&pOpt->__vtable->StateChanged,pos);
  if (*(int *)&this->field_0x3c == 0) {
    *(EUIObjectNode **)&this->field_0x3c = pOpt;
    SetFlagsPropigate__13EUIObjectNodeUib(pOpt,8,true);
  }
  else {
    SetFlagsPropigate__13EUIObjectNodeUib(pOpt,8,false);
  }
  SetFlagsPropigate__13EUIObjectNodeUib(pOpt,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  pOpt->m_id = *(uint *)&this->field_0x54;
                    /* end of inlined section */
  *(int *)&this->field_0x54 = *(int *)&this->field_0x54 + 1;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  *(float *)&this->field_0x6c = *(float *)&this->field_0x6c + (pOpt->m_WDH).field0_0x0.d[2];
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  *(float *)&this->field_0x68 = *(float *)&this->field_0x68 + (pOpt->m_WDH).field0_0x0.d[0];
  (**(code **)(*(int *)&this->field_0x38 + 0x8c))
            ((int)&(this->field0_0x0).m_state + (int)*(short *)(*(int *)&this->field_0x38 + 0x88));
  return;
}

void EActionQueue::Init() {
	EUIMenu *this;
	EUIMenu *this;
	EUIMenu *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  *(undefined4 *)&this->m_needsInit = 0;
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
  CreateCache__16EActionIconCache(this->m_pIconCache);
  (**(code **)(*(int *)&this->field_0x38 + 0x9c))
            ((int)&(this->field0_0x0).m_state + (int)*(short *)(*(int *)&this->field_0x38 + 0x98),1,
             1,1);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_3c = 0x3f800000;
  local_40 = 0x3f800000;
                    /* end of inlined section */
  (**(code **)(*(int *)&this->field_0x38 + 0x34))
            ((int)&(this->field0_0x0).m_state + (int)*(short *)(*(int *)&this->field_0x38 + 0x30),
             &local_40);
  (**(code **)(*(int *)&this->field_0x38 + 0xa4))
            ((int)&(this->field0_0x0).m_state + (int)*(short *)(*(int *)&this->field_0x38 + 0xa0),4)
  ;
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  *(undefined4 *)&this->field_0x70 = 0x3c23d70a;
  (**(code **)(*(int *)&this->field_0x38 + 0x8c))
            ((int)&(this->field0_0x0).m_state + (int)*(short *)(*(int *)&this->field_0x38 + 0x88));
                    /* end of inlined section */
  if (*(int *)&this->field_0x30 == 0) {
    *(undefined4 *)&this->field_0x78 = 0x3c23d70a;
  }
  else {
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
    *(undefined4 *)&this->field_0x78 = 0x3ca3d70a;
  }
  (**(code **)(*(int *)&this->field_0x38 + 0x8c))
            ((int)&(this->field0_0x0).m_state + (int)*(short *)(*(int *)&this->field_0x38 + 0x88));
  *(undefined4 *)&this->field_0x74 = 0x3c68a71e;
  (**(code **)(*(int *)&this->field_0x38 + 0x8c))
            ((int)&(this->field0_0x0).m_state + (int)*(short *)(*(int *)&this->field_0x38 + 0x88));
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bUserActionPlaced = 1;
  this->m_UserActionId = -0x911806;
  puVar1 = (undefined *)((int)&(this->m_vActionStart).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vActionStart & 7;
  puVar3 = (ulong *)((int)&this->m_vActionStart - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  return;
}

bool EActionQueue::StripMarkedActions() {
	bool retval;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator next;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	void *pNode;
	
  EActionIcon *pIn;
  EActionIcon *pEVar1;
  bool bVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (EActionIcon *)(this->field0_0x0).m_state;
                    /* end of inlined section */
  bVar2 = false;
  if (pEVar1 != (EActionIcon *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pIn = *(EActionIcon **)&pEVar1->field0_0x0;
    bVar2 = false;
    while( true ) {
                    /* end of inlined section */
      if (*(int *)&pIn->m_markedForRemove == 0) {
        *(undefined4 *)&pIn->m_markedForRemove = 1;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar1 = *(EActionIcon **)((int)&pEVar1->field0_0x0 + 8);
      }
      else {
                    /* end of inlined section */
                    /* end of inlined section */
        pEVar1 = *(EActionIcon **)((int)&pEVar1->field0_0x0 + 8);
        Enqueue__16EActionIconCacheP11EActionIcon(this->m_pIconCache,pIn);
        (**(code **)(*(int *)&this->field_0x38 + 0x7c))
                  ((int)&(this->field0_0x0).m_state +
                   (int)*(short *)(*(int *)&this->field_0x38 + 0x78),pIn);
        bVar2 = true;
      }
                    /* end of inlined section */
      if (pEVar1 == (EActionIcon *)0x0) break;
      pIn = *(EActionIcon **)&pEVar1->field0_0x0;
    }
  }
  return bVar2;
}

void EActionQueue::SetShader(EActionIcon *pIcon, Interaction *pAction) {
	ERShader *pOld;
	u32 OldId;
	u32 shaderId;
	cXObject *pStackOb;
	ERShader *pShd;
	cXMTObject *mtobj;
	cXObject *ptr;
	
  short sVar1;
  bool bVar2;
  cXObject__142_982 *pcVar3;
  int iVar4;
  ObjSelector *pOVar5;
  int *piVar6;
  code *pcVar7;
  long lVar8;
  cXObject__142_982__vtable *pcVar9;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint wbid;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  uint uVar10;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  ERShader *pShd;
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
  if (pIcon == (EActionIcon *)0x0) {
    return;
  }
  uVar10 = 0;
  if (pIcon->m_pFore != (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/resource/e_resource.h */
    uVar10 = (pIcon->m_pFore->field0_0x0).m_resId;
  }
  wbid = 0;
                    /* end of inlined section */
  pcVar3 = GetIconObject__C11Interaction(pAction);
  pcVar9 = pcVar3->__vtable;
  if (pcVar3 != (cXObject__142_982 *)0x0) {
    iVar4 = (*(code *)pcVar9[1].HandleError)
                      ((int)&pcVar3->_vb1019 + (int)*(short *)&pcVar9[1].Error);
    if (*(int *)(iVar4 + 0x1c) == 0x7c4) {
      wbid = 0xfe47c11a;
      goto LAB_0013d23c;
    }
    pcVar9 = pcVar3->__vtable;
  }
  pOVar5 = (ObjSelector *)
           (*(code *)pcVar9[1].SetLevel)
                     ((int)&pcVar3->_vb1019 + (int)*(short *)&pcVar9[1].GetTreeID);
  bVar2 = GetIsPerson__11ObjSelector(pOVar5);
  if (bVar2) {
    pShd = (ERShader *)0x0;
    pOVar5 = (ObjSelector *)
             (*(code *)pcVar3->__vtable[1].SetLevel)
                       ((int)&pcVar3->_vb1019 + (int)*(short *)&pcVar3->__vtable[1].GetTreeID);
    GetThumbnail__11ObjSelectorPP8ERShader(pOVar5,&pShd);
    SetShader__11EActionIconP8ERShader(pIcon,pShd);
    return;
  }
  if (pcVar3 == (cXObject__142_982 *)0x0) {
    return;
  }
  lVar8 = (*(code *)pcVar3->__vtable[1].GetFrontFaceDirection)
                    ((int)&pcVar3->_vb1019 +
                     (int)*(short *)&pcVar3->__vtable[1].GetInteractionLeader);
  if (lVar8 == 0) {
    iVar4 = (*(code *)pcVar3->__vtable[1].HandleError)
                      ((int)&pcVar3->_vb1019 + (int)*(short *)&pcVar3->__vtable[1].Error);
    if (*(int *)(iVar4 + 0xc0) != 0) {
      pcVar7 = (code *)pcVar3->__vtable[1].HandleError;
      iVar4 = (int)&pcVar3->_vb1019 + (int)*(short *)&pcVar3->__vtable[1].Error;
LAB_0013d22c:
      iVar4 = (*pcVar7)(iVar4);
      wbid = *(uint *)(*(int *)(iVar4 + 0xc0) + 0x14);
    }
  }
  else {
                    /* inlined from ../MSrc/SCID.h */
    piVar6 = (int *)_dyncastimpl__7TreeSim4SCID(pcVar3->_vb1019,cXMTObjectID);
                    /* end of inlined section */
    sVar1 = *(short *)(piVar6[1] + 0x10);
    pcVar7 = *(code **)(piVar6[1] + 0x14);
    while (piVar6 = (int *)(*pcVar7)((int)piVar6 + (int)sVar1), piVar6 != (int *)0x0) {
      iVar4 = *(int *)(*piVar6 + 4);
      iVar4 = (**(code **)(iVar4 + 0x2a4))(*piVar6 + (int)*(short *)(iVar4 + 0x2a0));
      if (*(int *)(iVar4 + 0xc0) != 0) {
        iVar4 = *(int *)(*piVar6 + 4);
        pcVar7 = *(code **)(iVar4 + 0x2a4);
        iVar4 = *piVar6 + (int)*(short *)(iVar4 + 0x2a0);
        goto LAB_0013d22c;
      }
      sVar1 = *(short *)(piVar6[1] + 0x18);
      pcVar7 = *(code **)(piVar6[1] + 0x1c);
    }
  }
LAB_0013d23c:
  if ((pcVar3 != (cXObject__142_982 *)0x0) && (wbid != uVar10)) {
    if (wbid == 0) {
      SetShader__11EActionIconUi(pIcon,0xd59c7bb5);
    }
    else {
      SetShader__11EActionIconUi(pIcon,wbid);
    }
  }
  return;
}

void EActionQueue::Update() {
	EInteractionPtrList interactionList;
	int lastnewIcon;
	int nacts;
	NLIterator actionIt;
	bool bDidStrip;
	int i;
	NLIterator childitr;
	EActionIcon *pIcon;
	NLIterator i;
	NLIterator i;
	CTilePt ctp;
	EVec3 vWorld;
	EUIObjectMover *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *pLastOpt;
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
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	Int numActions;
	Interaction *pAction;
	NLIterator iconItr;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	Interaction *this;
	Interaction *this;
	SInt32 curactionId;
	NLIterator iconItr;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	
  EUIObjectNode__vtable *pEVar1;
  Panelstateman__vtable *pPVar2;
  EUIVirtualCtrl__vtable *pEVar3;
  cXPerson__150_1300 *pcVar4;
  bool bVar5;
  EActionIcon *pEVar6;
  int iVar7;
  int iVar8;
  BString2 *str;
  uint uVar9;
  int *piVar10;
  cXObject__142_982 *pcVar11;
  Interaction *pIVar12;
  long lVar13;
  EActionIcon **ppEVar14;
  int iVar15;
  ENodeListNode *pEVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  TNodeList_const_Interaction___ interactionList;
  CTilePt ctp;
  EVec3 vWorld;
  
  iVar17 = -1;
  iVar15 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  interactionList.field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  interactionList.field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  GetListOfActionsInQueue__12EActionQueueRt9TNodeList1ZPC11Interaction(this,&interactionList);
  memset(_newChildArr,0,0x28);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if (interactionList.field0_0x0.m_l.m_pHead == (ENodeListNode *)0x0) {
LAB_0013d4d4:
    bVar5 = StripMarkedActions__12EActionQueue(this);
    if (-1 < iVar17) {
      iVar15 = iVar17 + 1;
      ppEVar14 = _newChildArr;
      do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        iVar15 = iVar15 + -1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        _ctp = 0;
                    /* end of inlined section */
        (**(code **)(*(int *)&this->field_0x38 + 0x84))
                  ((int)&(this->field0_0x0).m_state +
                   (int)*(short *)(*(int *)&this->field_0x38 + 0x80),*ppEVar14,&ctp);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        pEVar6 = *ppEVar14;
                    /* end of inlined section */
        ppEVar14 = ppEVar14 + 1;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        pEVar1 = (pEVar6->field0_0x0).__vtable;
        (*(code *)pEVar1[1].Draw)
                  ((int)&(pEVar6->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar1[1].Update,0x80,0);
                    /* end of inlined section */
        (pEVar6->field0_0x0).m_flags = (pEVar6->field0_0x0).m_flags & 0xffffff7f;
      } while (iVar15 != 0);
    }
    if (*(int *)&this->field_0x3c != 0) {
      if ((bVar5) || (-1 < iVar17)) {
        ResizeList__12EActionQueue(this);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        uVar9 = *(uint *)&this->field_0x10;
      }
      else {
        uVar9 = *(uint *)&this->field_0x10;
      }
                    /* end of inlined section */
      if ((uVar9 & 4) == 0) {
        if (((this->_vb2090->m_state == LIVE_DEFAULT_STATE) &&
            (pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
            lVar13 = (*(code *)pEVar3[1].GetBut)
                               ((int)(_globals.m_pCtrlPad)->m_pressed +
                                *(short *)&pEVar3[1].ClearBut + -4,*(undefined4 *)&this->field_0x30,
                                0x10), lVar13 != 0)) &&
           (pcVar4 = _globals._pSelectedSims[*(int *)&this->field_0x30],
           pcVar4 != (cXPerson__150_1300 *)0x0)) {
          lVar13 = (*(code *)pcVar4->__vtable->SetNeighborID)
                             ((int)&pcVar4->_vb1187 +
                              (int)*(short *)&pcVar4->__vtable->GetNeighborID);
          if (lVar13 == 0) {
            pIVar12 = (Interaction *)
                      (*(code *)pcVar4->__vtable->IsChild)
                                ((int)&pcVar4->_vb1187 + (int)*(short *)&pcVar4->__vtable->IsVisitor
                                 ,(int)lVar13 + -1);
            pcVar11 = GetIconObject__C11Interaction(pIVar12);
            if (pcVar11 != (cXObject__142_982 *)0x0) {
              iVar15 = (*(code *)pcVar4->__vtable->IsChild)
                                 ((int)&pcVar4->_vb1187 +
                                  (int)*(short *)&pcVar4->__vtable->IsVisitor);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
              piVar10 = (int *)(this->field0_0x0).m_state;
                    /* end of inlined section */
              iVar15 = *(int *)(iVar15 + 0x38);
              if (piVar10 != (int *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                iVar17 = *piVar10;
                while( true ) {
                  if (*(int *)(iVar17 + 0x94) == iVar15) {
                    *(undefined4 *)(iVar17 + 0x54) = 1;
                  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                  piVar10 = (int *)piVar10[2];
                    /* end of inlined section */
                  if (piVar10 == (int *)0x0) break;
                  iVar17 = *piVar10;
                }
              }
              (*(code *)pcVar4->__vtable->UpdateCurrentRoom)
                        ((int)&pcVar4->_vb1187 + (int)*(short *)&pcVar4->__vtable->GetCurrentRoom);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
              PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x8a715306);
            }
          }
          else {
            lVar13 = (*(code *)pcVar4->__vtable->IsRouting)
                               ((int)&pcVar4->_vb1187 + (int)*(short *)&pcVar4->__vtable->IsSleeping
                               );
            if (lVar13 != 0) {
              pIVar12 = (Interaction *)lVar13;
              pcVar11 = GetIconObject__C11Interaction(pIVar12);
              if (pcVar11 != (cXObject__142_982 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                piVar10 = (int *)(this->field0_0x0).m_state;
                    /* end of inlined section */
                if (piVar10 != (int *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                  iVar15 = *piVar10;
                  while( true ) {
                    /* end of inlined section */
                    if (*(int *)(iVar15 + 0x94) == pIVar12->fID) {
                      *(undefined4 *)(iVar15 + 0x54) = 1;
                    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    piVar10 = (int *)piVar10[2];
                    /* end of inlined section */
                    if (piVar10 == (int *)0x0) break;
                    iVar15 = *piVar10;
                  }
                }
                (*(code *)pcVar4->__vtable->UpdateCurrentRoom)
                          ((int)&pcVar4->_vb1187 + (int)*(short *)&pcVar4->__vtable->GetCurrentRoom,
                           pIVar12->fID);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x8a715306);
                    /* end of inlined section */
              }
            }
          }
        }
      }
      else {
        pEVar6 = *(EActionIcon **)&this->field_0x3c;
        pEVar1 = (pEVar6->field0_0x0).__vtable;
        (*(code *)pEVar1->SetBoxDims)
                  ((int)&(pEVar6->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar1->SetPos);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
        piVar10 = (int *)(this->field0_0x0).m_state;
        iVar15 = 0;
        if (piVar10 != (int *)0x0) {
          iVar15 = *piVar10;
        }
        pPVar2 = (this->field0_0x0).__vtable;
        if (pPVar2 == (Panelstateman__vtable *)0x0) {
          iVar17 = 0;
        }
        else {
          iVar17 = *(int *)pPVar2;
        }
                    /* end of inlined section */
        if (iVar15 == iVar17) {
          uVar9 = *(uint *)&this->field_0x10;
        }
        else {
          ProcessUserInput__7EUIMenu((EUIMenu *)this);
          if (*(EActionIcon **)&this->field_0x3c == pEVar6) {
            piVar10 = (int *)(this->field0_0x0).m_state;
          }
          else {
            StartBurp__11EActionIcon(*(EActionIcon **)&this->field_0x3c);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
            PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x5a1d068d);
            if (_13EUIObjectNode_m_uiSfxNext == (undefined1 *)0x0) {
              piVar10 = (int *)(this->field0_0x0).m_state;
            }
            else {
              (*(code *)_13EUIObjectNode_m_uiSfxNext)();
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
              piVar10 = (int *)(this->field0_0x0).m_state;
            }
          }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
          *(undefined4 *)(*piVar10 + 0x60) = 1;
          uVar9 = *(uint *)&this->field_0x10;
        }
        if ((uVar9 & 0x40) != 0) {
          RemoveMarkedChildren__13EUIObjectNode((EUIObjectNode *)this);
        }
      }
    }
                    /* end of inlined section */
    RemoveAll__9ENodeList(&interactionList.field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    for (pEVar6 = (EActionIcon *)(this->field0_0x0).m_state; pEVar6 != (EActionIcon *)0x0;
        pEVar6 = *(EActionIcon **)((int)&pEVar6->field0_0x0 + 8)) {
                    /* end of inlined section */
      UpdateAnim__11EActionIcon(*(EActionIcon **)&pEVar6->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    RemoveAll__9ENodeList(&interactionList.field0_0x0);
    return;
  }
  ppEVar14 = (EActionIcon **)(__MessageBuff + 0x7e);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  pIVar12 = (Interaction *)(interactionList.field0_0x0.m_l.m_pHead)->data;
  pEVar16 = interactionList.field0_0x0.m_l.m_pHead;
  do {
                    /* end of inlined section */
    pEVar6 = GetIconFromActionId__12EActionQueuei(this,pIVar12->fID);
    if (pEVar6 == (EActionIcon *)0x0) {
      if (iVar15 < 9) {
        pEVar6 = Dequeue__16EActionIconCache(this->m_pIconCache);
        if (pEVar6 != (EActionIcon *)0x0) {
          ppEVar14 = ppEVar14 + 1;
          *ppEVar14 = pEVar6;
          *(undefined4 *)&pEVar6->m_markedForRemove = 0;
          *(undefined4 *)&pEVar6->m_amCurAction = 0;
          iVar17 = iVar17 + 1;
          SetShader__12EActionQueueP11EActionIconPC11Interaction(this,pEVar6,pIVar12);
          SetActiveController__13EUIObjectNodeUi(&pEVar6->field0_0x0,*(uint *)&this->field_0x30);
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
          (pEVar6->m_mover).m_curtime = 0.0;
          (pEVar6->m_mover).m_startt = 0.0;
          (pEVar6->m_mover).m_stopt = 1.0;
          fVar18 = (pEVar6->m_mover).m_curtime;
          fVar19 = (pEVar6->m_mover).m_startt;
          if (fVar19 <= fVar18) {
            fVar19 = (float)((int)fVar18 * (uint)(fVar18 < 1.0) | (uint)(fVar18 >= 1.0) * 0x3f800000
                            );
          }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
          (pEVar6->m_mover).m_curtime = fVar19;
                    /* end of inlined section */
          pcVar11 = GetStackObject__C11Interaction(pIVar12);
          (*(code *)pcVar11->__vtable[1].TestIntersection)
                    (&ctp,(int)&pcVar11->_vb1019 + (int)*(short *)&pcVar11->__vtable[1].IsInWorld);
          iVar7 = GetX__C7CTilePt(&ctp);
          iVar8 = GetY__C7CTilePt(&ctp);
          vWorld.field0_0x0.d[1] = (float)iVar8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vWorld.field0_0x0.d[2] = 0.0;
          vWorld.field0_0x0.d[0] = (float)iVar7;
                    /* end of inlined section */
          TransformToScreen__7EGlobalRC5EVec3R5EVec2(&_globals,&vWorld,&pEVar6->m_vStart);
                    /* inlined from ../MSrc/interaction.h */
                    /* end of inlined section */
          pEVar6->m_actionID = pIVar12->fID;
                    /* inlined from ../MSrc/interaction.h */
                    /* end of inlined section */
          *(uint *)&pEVar6->m_bAnimate = (uint)(pIVar12->fPriority == 0x32);
                    /* inlined from ../MSrc/interaction.h */
                    /* end of inlined section */
          *(uint *)&pEVar6->m_bContinuation = pIVar12->fFlags >> 1 & 1;
          str = GetName__C11Interaction(pIVar12);
          assign__8BString2RC8BString2UiUi(&pEVar6->m_actionName,str,0,0xffffffff);
          if (this->m_UserActionId == pEVar6->m_actionID) {
            *(undefined4 *)&this->m_bUserActionPlaced = 1;
          }
          StartMoveIn__11EActionIcon(pEVar6);
          ___7CTilePt(&ctp,2);
        }
LAB_0013d4c4:
        iVar15 = iVar15 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar16 = pEVar16->pNext;
      }
      else {
        pEVar16 = pEVar16->pNext;
      }
    }
    else {
      *(undefined4 *)&pEVar6->m_markedForRemove = 0;
      *(undefined4 *)&pEVar6->m_amCurAction = 0;
      SetShader__12EActionQueueP11EActionIconPC11Interaction(this,pEVar6,pIVar12);
      if (*(int *)&this->m_bUserActionPlaced == 0) {
        if (this->m_UserActionId == pEVar6->m_actionID) {
          *(undefined4 *)&this->m_bUserActionPlaced = 1;
          goto LAB_0013d4c4;
        }
        pEVar16 = pEVar16->pNext;
        iVar15 = iVar15 + 1;
      }
      else {
        pEVar16 = pEVar16->pNext;
        iVar15 = iVar15 + 1;
      }
    }
                    /* end of inlined section */
    if (pEVar16 == (ENodeListNode *)0x0) goto LAB_0013d4d4;
    pIVar12 = (Interaction *)pEVar16->data;
  } while( true );
}

void EActionQueue::NextItem() {
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  undefined4 *puVar1;
  int iVar2;
  
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  puVar1 = *(undefined4 **)(*(int *)(*(int *)&this->field_0x3c + 0xc) + 8);
                    /* end of inlined section */
  iVar2 = *(int *)&this->field_0x38;
  if (puVar1 == (undefined4 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    (**(code **)(iVar2 + 0x94))
              ((int)&(this->field0_0x0).m_state + (int)*(short *)(iVar2 + 0x90),
               *(undefined4 *)(this->field0_0x0).m_state);
  }
  else {
    (**(code **)(iVar2 + 0x94))
              ((int)&(this->field0_0x0).m_state + (int)*(short *)(iVar2 + 0x90),*puVar1);
  }
  return;
}

void EActionQueue::PrevItem() {
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  undefined4 *puVar1;
  int iVar2;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  puVar1 = *(undefined4 **)(*(int *)(*(int *)&this->field_0x3c + 0xc) + 4);
                    /* end of inlined section */
  iVar2 = *(int *)&this->field_0x38;
  if (puVar1 == (undefined4 *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    (**(code **)(iVar2 + 0x94))
              ((int)&(this->field0_0x0).m_state + (int)*(short *)(iVar2 + 0x90),
               *(undefined4 *)(this->field0_0x0).__vtable);
  }
  else {
    (**(code **)(iVar2 + 0x94))
              ((int)&(this->field0_0x0).m_state + (int)*(short *)(iVar2 + 0x90),*puVar1);
  }
  return;
}

void EActionQueue::Draw(ERC *prc) {
	EVec3 vpos;
	NLIterator i;
	Panelstate state;
	EVec3 *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  int iVar1;
  bool bVar2;
  Panelstate PVar3;
  int *piVar4;
  float fVar5;
  EVec3 vpos;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
  if (1 < this->_vb2090->m_state + ~LIVE_SIM_EDIT) {
                    /* end of inlined section */
    if (*(int *)&this->field_0x30 == 0) {
      bVar2 = IsTwoPlayer__7EGlobal(&_globals);
      if (bVar2) {
        bVar2 = GetInfoWinVis__6EPaneli(_globals._pPanel,0);
        if (bVar2) {
          fVar5 = 0.32;
                    /* end of inlined section */
          vpos.field0_0x0.d[0] = _13EUIObjectNode_SAFE_LEFT - 0.065;
        }
        else {
          fVar5 = 0.035;
                    /* end of inlined section */
          vpos.field0_0x0.d[0] = _13EUIObjectNode_SAFE_LEFT - 0.065;
        }
      }
      else {
        fVar5 = 0.035;
        vpos.field0_0x0.d[0] = _13EUIObjectNode_SAFE_LEFT + 0.025;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      vpos.field0_0x0.d[2] = _13EUIObjectNode_SAFE_TOP + fVar5;
    }
    else {
      bVar2 = GetInfoWinVis__6EPaneli(_globals._pPanel,1);
      if (bVar2) {
        vpos.field0_0x0.d[0] = _13EUIObjectNode_SAFE_LEFT + 0.025;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        vpos.field0_0x0.d[2] = _13EUIObjectNode_SAFE_BOTTOM - 0.3514285;
      }
      else {
        vpos.field0_0x0.d[0] = _13EUIObjectNode_SAFE_LEFT + 0.025;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        vpos.field0_0x0.d[2] = _13EUIObjectNode_SAFE_BOTTOM - 0.0714285;
      }
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vpos.field0_0x0.d[1] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    bVar2 = false;
    if (((*(float *)&this->field_0x24 != vpos.field0_0x0.d[0]) ||
        (*(float *)&this->field_0x28 != 0.0)) ||
       (*(float *)&this->field_0x2c != vpos.field0_0x0.d[2])) {
      bVar2 = true;
    }
                    /* end of inlined section */
    if (bVar2) {
      (**(code **)(*(int *)&this->field_0x38 + 0x24))
                ((int)&(this->field0_0x0).m_state +
                 (int)*(short *)(*(int *)&this->field_0x38 + 0x20),&vpos);
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    piVar4 = (int *)(this->field0_0x0).m_state;
                    /* end of inlined section */
    if (piVar4 == (int *)0x0) {
      PVar3 = (this->field0_0x0).m_state;
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      iVar1 = *piVar4;
      while( true ) {
        if (iVar1 != *(int *)&this->field_0x3c) {
          (**(code **)(*(int *)(iVar1 + 0x38) + 0x1c))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x38) + 0x18),prc);
        }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        piVar4 = (int *)piVar4[2];
                    /* end of inlined section */
        if (piVar4 == (int *)0x0) break;
        iVar1 = *piVar4;
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      PVar3 = (this->field0_0x0).m_state;
    }
                    /* end of inlined section */
    if (PVar3 != LIVE_DEFAULT_STATE) {
      iVar1 = *(int *)(*(int *)&this->field_0x3c + 0x38);
      (**(code **)(iVar1 + 0x1c))(*(int *)&this->field_0x3c + (int)*(short *)(iVar1 + 0x18),prc);
    }
  }
  return;
}

void EActionQueue::SetState(Panelstate state) {
  this->_vb2090->m_state = state;
  switch(state) {
  default:
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this,4,false);
    return;
  case LIVE_ACTIONQ_STATE:
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this,4,true);
    return;
  case LIVE_INFOUP_1_STATE:
    if (*(int *)&this->field_0x30 != 0) {
      return;
    }
    break;
  case LIVE_INFOUP_2_STATE:
    if (*(int *)&this->field_0x30 != 1) {
      return;
    }
    break;
  case PAUSED_PANEL_STATE:
  case PAUSED_CURSOR_STATE:
    break;
  }
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this,4,false);
  return;
}

void EActionQueue::Message(EUIObjectNode *pChild, u32 messId) {
	EActionIcon *pIcon;
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
	
  cXPerson__150_1300__vtable *pcVar1;
  int *piVar2;
  Panelstateman__vtable *pPVar3;
  int iVar4;
  int iVar5;
  
  if ((messId == 1) &&
     (_globals._pSelectedSims[*(int *)&this->field_0x30] != (cXPerson__150_1300 *)0x0)) {
    iVar5 = *(int *)&this->field_0x3c;
    *(undefined4 *)(iVar5 + 0x54) = 1;
    pcVar1 = _globals._pSelectedSims[*(int *)&this->field_0x30]->__vtable;
    (*(code *)pcVar1->UpdateCurrentRoom)
              ((int)&_globals._pSelectedSims[*(int *)&this->field_0x30]->_vb1187 +
               (int)*(short *)&pcVar1->GetCurrentRoom,*(undefined4 *)(iVar5 + 0x94));
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    piVar2 = (int *)(this->field0_0x0).m_state;
    iVar5 = 0;
    if (piVar2 != (int *)0x0) {
      iVar5 = *piVar2;
    }
    pPVar3 = (this->field0_0x0).__vtable;
    if (pPVar3 == (Panelstateman__vtable *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)pPVar3;
    }
                    /* end of inlined section */
    if (iVar5 == iVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x383df7e6);
                    /* end of inlined section */
      iVar5 = *(int *)(*(int *)&this->field_0x8 + 0x38);
      (**(code **)(iVar5 + 0x3c))
                (*(int *)&this->field_0x8 + (int)*(short *)(iVar5 + 0x38),
                 *(undefined4 *)&this->field_0x30,10);
    }
  }
  return;
}

EActionIcon* EActionIcon::EActionIcon() {
	EUIObjectMover *this;
	EUIObjectMover *this;
	
  __13EUIObjectNode(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_11EActionIcon;
  __8BString2(&this->m_actionName);
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_mover).m_startt = 0.0;
  (this->m_mover).m_stopt = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_mover).m_curtime = (this->m_mover).m_startt;
  (this->m_brupClock).m_startt = 0.0;
  (this->m_brupClock).m_stopt = 0.0;
  (this->m_brupClock).m_curtime = (this->m_brupClock).m_startt;
                    /* end of inlined section */
  this->m_pBack = (ERShader *)0x0;
  this->m_pFore = (ERShader *)0x0;
  this->m_pX = (ERShader *)0x0;
  this->m_pREndcapShdr = (ERShader *)0x0;
  this->m_pLEndcapShdr = (ERShader *)0x0;
  this->m_pBackShdr = (ERShader *)0x0;
  ClearState__11EActionIcon(this);
  return this;
}

void EActionIcon::~EActionIcon(int __in_chrg) {
  ERShader *pEVar1;
  
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_11EActionIcon;
  while( true ) {
    if (this->m_pFore == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_pFore->field0_0x0);
    this->m_pFore = (ERShader *)0x0;
  }
  while (this->m_pBack != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pBack->field0_0x0);
    this->m_pBack = (ERShader *)0x0;
  }
  pEVar1 = this->m_pX;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pX = (ERShader *)0x0;
    pEVar1 = this->m_pX;
  }
  pEVar1 = this->m_pREndcapShdr;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pREndcapShdr = (ERShader *)0x0;
    pEVar1 = this->m_pREndcapShdr;
  }
  pEVar1 = this->m_pLEndcapShdr;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pLEndcapShdr = (ERShader *)0x0;
    pEVar1 = this->m_pLEndcapShdr;
  }
  pEVar1 = this->m_pBackShdr;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pBackShdr = (ERShader *)0x0;
    pEVar1 = this->m_pBackShdr;
  }
                    /* end of inlined section */
  ___8BString2(&this->m_actionName,2);
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

int EActionIcon::CalcBackgroundSize(ERC *prc) {
	int nMiddlePieces;
	float strw;
	float q;
	int n;
	
  ERFont *szString;
  short *psVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  int iVar2;
  float fVar3;
  EStorable__vtable *local_50;
  int local_40;
  EStorable__vtable *pEStack_3c;
  int local_30;
  int iStack_2c;
  int local_20;
  int iStack_1c;
  EHashTableNode **local_10;
  uint uStack_c;
  
  local_40 = (int)unaff_s0;
  pEStack_3c = (EStorable__vtable *)((ulong)unaff_s0 >> 0x20);
  local_20 = (int)unaff_s2;
  iStack_1c = (int)((ulong)unaff_s2 >> 0x20);
  local_30 = (int)unaff_s1;
  iStack_2c = (int)((ulong)unaff_s1 >> 0x20);
  local_10 = (EHashTableNode **)unaff_retaddr;
  uStack_c = (uint)((ulong)unaff_retaddr >> 0x20);
  SetSize__6ERFontffb(_globals.m_pFont,16.0,1.0,true);
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  szString = _globals.m_pFont;
  psVar1 = c_str__C8BString2(&this->m_actionName);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&local_50,szString,SUB41(psVar1,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  iVar2 = 3;
  if (0.15 <= (float)local_50 - 0.084375) {
    fVar3 = ((float)local_50 - 0.084375) * 20.0;
    iVar2 = (int)fVar3;
    if (0.5 <= fVar3 - (float)iVar2) {
      iVar2 = iVar2 + 1;
    }
    iVar2 = iVar2 + 2;
  }
  return iVar2;
}

void EActionIcon::DrawToolTip(ERC *prc) {
	int nMiddlePieces;
	float totalW;
	EVec2 vFontPos;
	EGraphics *this;
	ERC *prc;
	
  ERFont *this_00;
  undefined8 uVar1;
  float fVar2;
  int nMiddlePieces;
  short *szString;
  EVec4 *vcolor;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar3;
  EVec2 vFontPos;
  float local_70;
  float local_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_50;
  EUiMonitorAutoRepeat *pEStack_4c;
  ERShader *local_40;
  ERShader *pEStack_3c;
  ERShader *local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (ERShader *)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (int)unaff_s1;
  pEStack_4c = (EUiMonitorAutoRepeat *)((ulong)unaff_s1 >> 0x20);
  local_40 = (ERShader *)unaff_s2;
  pEStack_3c = (ERShader *)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  nMiddlePieces = CalcBackgroundSize__11EActionIconP3ERC(this,prc);
  if ((this->field0_0x0).m_activeCtrl == 0) {
    vcolor = &_YELLOW;
  }
  else {
    vcolor = &_RED;
  }
  DrawToolTipBack__11EActionIconP3ERCiffffRC5EVec4
            (this,prc,nMiddlePieces,0.005,0.005,1.0,1.0,&_BLACK);
  DrawToolTipBack__11EActionIconP3ERCiffffRC5EVec4(this,prc,nMiddlePieces,0.0,0.0,1.0,1.0,vcolor);
  this_00 = _globals.m_pFont;
  SetSize__6ERFontffb(_globals.m_pFont,16.0,1.0,true);
  fVar2 = _7EUIIcon_m_vColors[0].field0_0x0._12_4_;
  fVar3 = _7EUIIcon_m_vColors[0].field0_0x0._8_4_;
  uVar1 = _7EUIIcon_m_vColors[0].field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  (this_00->m_vColor).field0_0x0.d[0] = (float)_7EUIIcon_m_vColors[0].field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar1 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = fVar3;
  (this_00->m_vColor).field0_0x0.d[3] = fVar2;
  Select__6ERFontP3ERC(this_00,prc);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  fVar3 = ((float)nMiddlePieces * 32.0 + 64.0) / (float)_pGfx->m_xscreen;
  CalcToolTipXY__11EActionIconff
            ((EActionIcon *)&vFontPos,(32.0 / (float)_pGfx->m_yscreen) * 1.2,fVar3);
  vFontPos.field0_0x0.d[0] = vFontPos.field0_0x0.d[0] + fVar3 * 0.5;
  szString = c_str__C8BString2(&this->m_actionName);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_70 = vFontPos.field0_0x0.d[0];
  local_6c = vFontPos.field0_0x0.d[1];
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,szString,true,(EVec2 *)&local_70,E_FAX_CENTER,E_FAY_CENTER,(EVec2 *)0x0);
  return;
}

EVec2 EActionIcon::CalcToolTipXY(float height, float width) {
	bool is2pAndAmP1;
	float clampL;
	float clampR;
	float xpos;
	float ypos;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EVec2 *this;
	float x;
	float y;
	
  bool bVar1;
  bool bVar2;
  int in_a1_lo;
  float fVar3;
  ENodeListNode *pEVar4;
  float fVar5;
  ENodeListNode *pEVar6;
  
                    /* end of inlined section */
  bVar2 = false;
  bVar1 = IsTwoPlayer__7EGlobal(&_globals);
  if (bVar1) {
    bVar2 = *(int *)(in_a1_lo + 0x30) == 0;
  }
  if (bVar2) {
    fVar5 = _13EUIObjectNode_SAFE_RIGHT;
    pEVar6 = (ENodeListNode *)0x3e800000;
  }
  else {
    fVar5 = 0.5;
    pEVar6 = (ENodeListNode *)_13EUIObjectNode_SAFE_LEFT;
  }
  fVar5 = fVar5 - width;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  fVar3 = *(float *)(in_a1_lo + 0x24) + (*(float *)(in_a1_lo + 0x18) - width) * 0.5;
  if ((float)pEVar6 <= fVar3) {
    pEVar6 = (ENodeListNode *)
             ((int)fVar3 * (uint)(fVar3 < fVar5) | (int)fVar5 * (uint)(fVar3 >= fVar5));
  }
  if (*(int *)(in_a1_lo + 0x30) == 0) {
    fVar5 = *(float *)(in_a1_lo + 0x2c);
  }
  else {
    bVar2 = IsTwoPlayer__7EGlobal(&_globals);
    fVar5 = *(float *)(in_a1_lo + 0x2c);
    if (bVar2) {
      pEVar4 = (ENodeListNode *)(fVar5 - (height + 0.005));
      goto LAB_0013e220;
    }
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  pEVar4 = (ENodeListNode *)(fVar5 + *(float *)(in_a1_lo + 0x20));
LAB_0013e220:
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead = pEVar6;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pTail = pEVar4;
  return (EVec2)(EVec2__null___1__1)(long)(int)this;
}

void EActionIcon::DrawToolTipBack(ERC *prc, int nMiddlePieces, float x, float y, float xs, float ys, EVec4 &vcolor) {
	float height;
	float totalW;
	float segW;
	float midW;
	EVec2 vXYpos;
	EVec2 vL;
	EVec2 vC;
	EVec2 vR;
	EGraphics *this;
	float x;
	float x;
	float x;
	float x;
	float x;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar1;
  float height;
  float fVar2;
  float fVar3;
  EVec2 vXYpos;
  EVec2 vL;
  EVec2 vC;
  EVec2 vR;
  ERShader *local_100;
  ERShader *local_fc;
  ERShader *local_f0;
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
  ERShader *local_90;
  float local_8c;
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
  
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar2 = ((float)nMiddlePieces * 32.0 + 64.0) / (float)_pGfx->m_xscreen;
  local_90 = (ERShader *)(fVar2 / ((float)nMiddlePieces + 2.0));
  height = (32.0 / (float)_pGfx->m_yscreen) * 1.2;
  fVar3 = fVar2 - ((float)local_90 + (float)local_90);
  CalcToolTipXY__11EActionIconff((EActionIcon *)&vXYpos,height,fVar2);
  Select__8ERShaderP3ERCi(this->m_pLEndcapShdr,prc,0);
  fVar2 = vXYpos.field0_0x0.d[0] + x;
  local_8c = height * ys * 0.5;
  fVar1 = vXYpos.field0_0x0.d[1] + y;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_ac = height * -ys * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = (ERShader *)(fVar2 + (float)local_90);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = (ERShader *)(fVar1 + local_8c);
  vC.field0_0x0.d[1] = fVar1 + local_ac;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vR.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_b0 = 0;
                    /* end of inlined section */
  vC.field0_0x0.d[0] = fVar2;
  vR.field0_0x0.d[1] = local_ac;
  local_f0 = local_90;
  local_ec = local_8c;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vC,&local_100,
             0x3cfc68,0x3cfc70,vcolor);
  Select__8ERShaderP3ERCi(this->m_pBackShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vC.field0_0x0.d[0] = fVar2 + (float)local_90;
  local_cc = fVar1 + local_8c;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_d0 = vC.field0_0x0.d[0] + fVar3;
  vR.field0_0x0.d[1] = fVar1 + local_ac;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vC.field0_0x0.d[1] = fVar1;
  vR.field0_0x0.d[0] = vC.field0_0x0.d[0];
  local_e0 = local_b0;
  local_dc = local_ac;
  local_c0 = fVar3;
  local_bc = local_8c;
  (*(code *)prc->__vtable[1].DisplayList)
            (local_b0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vR,&local_d0,
             0x3cfc68,0x3cfc70,vcolor);
  Select__8ERShaderP3ERCi(this->m_pREndcapShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vR.field0_0x0.d[0] = vC.field0_0x0.d[0] + fVar3;
  local_9c = vC.field0_0x0.d[1] + local_8c;
  vR.field0_0x0.d[1] = vC.field0_0x0.d[1];
  local_fc = (ERShader *)(vC.field0_0x0.d[1] + local_ac);
  local_a0 = vR.field0_0x0.d[0] + (float)local_90;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_100 = (ERShader *)vR.field0_0x0.d[0];
  (*(code *)prc->__vtable[1].DisplayList)
            (local_b0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_100,
             &local_a0,0x3cfc68,0x3cfc70,vcolor);
  return;
}

void EActionIcon::StartMoveIn() {
	EUIObjectMover *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)&this->m_bAnimate != 0) {
    fVar7 = (this->field0_0x0).m_pos.field0_0x0.d[0];
    uVar6 = (ulong)(this->field0_0x0).m_activeCtrl;
    *(undefined4 *)&this->m_bmoveIn = 1;
    (this->m_vStart).field0_0x0.d[0] = fVar7;
    *(undefined4 *)&this->m_bmoveOut = 0;
    fVar7 = 0.5;
    if (uVar6 != 0) {
      fVar7 = -0.5;
    }
    (this->m_vStart).field0_0x0.d[1] = (this->field0_0x0).m_pos.field0_0x0.d[2] + fVar7;
    puVar1 = (undefined *)((int)&(this->m_vStart).field0_0x0 + 7);
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_vStart & 7;
    uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&this->m_vStart - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&(this->m_vCur).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar2);
    *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
    uVar2 = (uint)&this->m_vCur & 7;
    puVar5 = (ulong *)((int)&this->m_vCur - uVar2);
    *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    (this->m_mover).m_curtime = 0.0;
    (this->m_mover).m_startt = 0.0;
    (this->m_mover).m_stopt = 0.5;
    fVar7 = (this->m_mover).m_curtime;
    fVar8 = (this->m_mover).m_startt;
    if (fVar8 <= fVar7) {
      fVar8 = (float)((int)fVar7 * (uint)(fVar7 < 0.5) | (uint)(fVar7 >= 0.5) * 0x3f000000);
    }
                    /* end of inlined section */
    (this->m_mover).m_curtime = fVar8;
    return;
  }
  iVar4 = (this->field0_0x0).m_activeCtrl;
  (this->m_vCur).field0_0x0.d[0] = (this->field0_0x0).m_pos.field0_0x0.d[0];
  fVar7 = 0.5;
  if (iVar4 != 0) {
    fVar7 = -0.5;
  }
  (this->m_vCur).field0_0x0.d[1] = (this->field0_0x0).m_pos.field0_0x0.d[2] + fVar7;
  return;
}

void EActionIcon::StartMoveOut() {
  return;
}

void EActionIcon::Draw(ERC *prc) {
	bool head;
	float scale;
	EVec2 vPos2;
	EVec2 vWH;
	EVec2 vLTBack;
	EVec2 vRBBack;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	static float actionIconBreathTime = 0.f;
	EUIObjectMover *this;
	EUIObjectNode *this;
	float _range[2];
	static int aiconS0 = 0;
	static int aiconS1 = 1;
	float mu;
	int tmp;
	float u;
	float a;
	float b;
	float x;
	float y;
	float x;
	float y;
	EVec2 vLT;
	EVec2 vRB;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EVec2 vLT;
	EVec2 vRB;
	float scaler;
	float scaler;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EVec2 vXLT;
	
  undefined *puVar1;
  ENodeListNode *pEVar2;
  cXPerson__150_1300__vtable *pcVar3;
  uint uVar4;
  ulong *puVar5;
  bool bVar6;
  EUIObjectNode *pEVar7;
  EActionIcon *pEVar8;
  int iVar9;
  EVec4 *pEVar10;
  ERShader *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  EVec4 *pEVar11;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float _range [2];
  undefined auStack_130 [16];
  EVec2 vPos2;
  EVec2 vLT;
  EVec2 vRB;
  EVec2 vXLT;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b0;
  float local_ac;
  float local_a0;
  float local_9c;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
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
  
  local_60 = (int)unaff_s2;
  uStack_5c = (int)((ulong)unaff_s2 >> 0x20);
  local_80 = (int)unaff_s0;
  uStack_7c = (int)((ulong)unaff_s0 >> 0x20);
  local_20 = (int)unaff_retaddr;
  uStack_1c = (int)((ulong)unaff_retaddr >> 0x20);
  local_30 = (int)unaff_s5;
  uStack_2c = (int)((ulong)unaff_s5 >> 0x20);
  local_40 = (int)unaff_s4;
  uStack_3c = (int)((ulong)unaff_s4 >> 0x20);
  local_50 = (int)unaff_s3;
  uStack_4c = (int)((ulong)unaff_s3 >> 0x20);
  local_70 = (int)unaff_s1;
  uStack_6c = (int)((ulong)unaff_s1 >> 0x20);
  if (((this->field0_0x0).m_activeCtrl == 1) && (bVar6 = IsTwoPlayer__7EGlobal(&_globals), !bVar6))
  {
    return;
  }
  if (*(int *)&this->m_bAnimate == 0) {
    fVar13 = (this->field0_0x0).m_pos.field0_0x0.d[2];
    (this->m_vCur).field0_0x0.d[0] = (this->field0_0x0).m_pos.field0_0x0.d[0];
    (this->m_vCur).field0_0x0.d[1] = fVar13;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    pEVar7 = (this->field0_0x0).m_pParent;
  }
  else {
    pEVar7 = (this->field0_0x0).m_pParent;
  }
  pEVar2 = (pEVar7->m_ChildList).field0_0x0.m_l.m_pHead;
  if (pEVar2 == (ENodeListNode *)0x0) {
    pEVar8 = (EActionIcon *)0x0;
  }
  else {
    pEVar8 = (EActionIcon *)pEVar2->data;
  }
                    /* end of inlined section */
                    /* inlined from ../MSrc/interaction.h */
                    /* end of inlined section */
  if ((pEVar8 != this) ||
     (pcVar3 = _globals._pSelectedSims[(this->field0_0x0).m_activeCtrl]->__vtable,
     iVar9 = (*(code *)pcVar3->IsChild)
                       ((int)&_globals._pSelectedSims[(this->field0_0x0).m_activeCtrl]->_vb1187 +
                        (int)*(short *)&pcVar3->IsVisitor),
     this->m_actionID != *(int *)(iVar9 + 0x38) || pEVar8 != this)) {
    pEVar11 = &_WHITE;
  }
  else if ((this->field0_0x0).m_activeCtrl == 0) {
    pEVar11 = &_YELLOW;
  }
  else {
    pEVar11 = &_RED;
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  fVar13 = 1.0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 2 & 1U) == 0) {
LAB_0013e7f8:
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos2.field0_0x0.d[0] = (this->m_vCur).field0_0x0.d[0];
  }
  else {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    fVar13 = (this->m_mover).m_stopt;
    (this->m_mover).m_curtime = fVar13;
    fVar12 = (this->m_mover).m_startt;
    if (fVar13 < fVar12) {
      fVar13 = fVar12;
    }
    (this->m_mover).m_curtime = fVar13;
    iVar9 = aiconS1_3491;
                    /* end of inlined section */
    if (((int)(this->field0_0x0).m_flags >> 3 & 1U) == 0) {
      fVar13 = 1.0;
      goto LAB_0013e7f8;
    }
    actionIconBreathTime_3489 = actionIconBreathTime_3489 + _dt;
    vPos2.field0_0x0.d[0] = 1.0;
    vPos2.field0_0x0.d[1] = _pi_burp_scale;
    _range = (float  [2])CONCAT44(_pi_burp_scale,0x3f800000);
    puVar1 = auStack_130 + 7;
    uVar4 = (uint)puVar1 & 7;
    *(ulong *)(puVar1 + -uVar4) =
         *(ulong *)(puVar1 + -uVar4) & -1L << (uVar4 + 1) * 8 | (ulong)_range >> (7 - uVar4) * 8;
    auStack_130._0_8_ = _range;
    uVar4 = (int)_range + 7U & 7;
    puVar5 = (ulong *)(((int)_range + 7U) - uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)_range >> (7 - uVar4) * 8;
    if (_pi_burp_dur < actionIconBreathTime_3489) {
      aiconS1_3491 = aiconS0_3490;
      aiconS0_3490 = iVar9;
      actionIconBreathTime_3489 = 0.0;
    }
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
    fVar13 = _range[aiconS0_3490] +
             (actionIconBreathTime_3489 / _pi_burp_dur) *
             (_range[aiconS1_3491] - _range[aiconS0_3490]);
    if (*(int *)&this->m_waitingForRemove != 0) goto LAB_0013e7f8;
    DrawToolTip__11EActionIconP3ERC(this,prc);
    vPos2.field0_0x0.d[0] = (this->m_vCur).field0_0x0.d[0];
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos2.field0_0x0.d[1] = (this->m_vCur).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar14 = (this->field0_0x0).m_WDH.field0_0x0.d[0];
  fVar12 = (this->field0_0x0).m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  fVar13 = fVar13 * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  _range = (float  [2])CONCAT44(fVar12,fVar14);
  if (this->m_pFore != (ERShader *)0x0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vXLT.field0_0x0.d[1] = fVar13 * 0.9 * fVar12;
    vXLT.field0_0x0.d[0] = fVar13 * 0.9 * fVar14;
    vRB.field0_0x0.d[1] = vPos2.field0_0x0.d[1] + vXLT.field0_0x0.d[1];
    vRB.field0_0x0.d[0] = vPos2.field0_0x0.d[0] + vXLT.field0_0x0.d[0];
    vLT.field0_0x0.d[1] = vPos2.field0_0x0.d[1] - vXLT.field0_0x0.d[1];
    vLT.field0_0x0.d[0] = vPos2.field0_0x0.d[0] - vXLT.field0_0x0.d[0];
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pFore,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_d8 = this->m_curAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_e0 = _WHITE.field0_0x0.d[0] * local_d8;
    local_d4 = _WHITE.field0_0x0.d[3] * local_d8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_dc = _WHITE.field0_0x0.d[1] * local_d8;
    local_d8 = _WHITE.field0_0x0.d[2] * local_d8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vLT,&vRB,0x3cfc68,
               0x3cfc70,&local_e0);
  }
  if (*(int *)&this->m_waitingForRemove == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    uVar4 = (this->field0_0x0).m_flags;
                    /* end of inlined section */
    if (((int)uVar4 >> 2 & 1U) != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)uVar4 >> 3 & 1U) != 0) {
        this_00 = this->m_pBack;
        goto LAB_0013ea6c;
      }
      goto LAB_0013e920;
    }
  }
  else {
LAB_0013e920:
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar14 = fVar13 * 0.9 * _range[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar12 = fVar13 * 0.9 * _range[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vRB.field0_0x0.d[1] = vPos2.field0_0x0.d[1] + fVar14;
    vRB.field0_0x0.d[0] = vPos2.field0_0x0.d[0] + fVar12;
    vLT.field0_0x0.d[0] = vPos2.field0_0x0.d[0] - fVar12;
    vLT.field0_0x0.d[1] = vPos2.field0_0x0.d[1] - fVar14;
    local_9c = _queueBackScale * vRB.field0_0x0.d[1];
    local_c0 = _queueBackScale * vLT.field0_0x0.d[0];
    local_bc = _queueBackScale * vLT.field0_0x0.d[1];
    local_a0 = _queueBackScale * vRB.field0_0x0.d[0];
    local_d0 = vLT.field0_0x0.d[0] - local_c0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_cc = vLT.field0_0x0.d[1] - local_bc;
    local_b0 = vRB.field0_0x0.d[0] + local_a0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_ac = vRB.field0_0x0.d[1] + local_9c;
                    /* end of inlined section */
    if (*(int *)&this->m_waitingForRemove == 0) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_88 = 0.43;
      pEVar10 = &_BLACK;
      uVar15 = _BLACK.field0_0x0.d[0];
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_88 = 0.65;
      pEVar10 = &_RED;
      uVar15 = _RED.field0_0x0.d[0];
                    /* end of inlined section */
    }
    local_90 = uVar15 * local_88;
    local_84 = (pEVar10->field0_0x0).d[3] * local_88;
    local_8c = (pEVar10->field0_0x0).d[1] * local_88;
    local_88 = (pEVar10->field0_0x0).d[2] * local_88;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_d0,&local_b0,
               0x3cfc68,0x3cfc70,&local_90);
  }
  this_00 = this->m_pBack;
LAB_0013ea6c:
  uVar16 = 0;
  Select__8ERShaderP3ERCi(this_00,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vRB.field0_0x0.d[0] = vPos2.field0_0x0.d[0] + fVar13 * _range[0];
  vRB.field0_0x0.d[1] = vPos2.field0_0x0.d[1] + fVar13 * _range[1];
  vLT.field0_0x0.d[0] = vPos2.field0_0x0.d[0] - fVar13 * _range[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vLT.field0_0x0.d[1] = vPos2.field0_0x0.d[1] - fVar13 * _range[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vXLT.field0_0x0.d[0] = (pEVar11->field0_0x0).d[0] * this->m_curAlpha;
  vXLT.field0_0x0.d[1] = (pEVar11->field0_0x0).d[1] * this->m_curAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (uVar16,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vLT,&vRB,
             0x3cfc68,0x3cfc70,&vXLT);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((*(int *)&this->m_waitingForRemove == 0) &&
      (uVar4 = (this->field0_0x0).m_flags, ((int)uVar4 >> 2 & 1U) != 0)) &&
     (((int)uVar4 >> 3 & 1U) != 0)) {
    Select__8ERShaderP3ERCi(this->m_pX,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vXLT.field0_0x0.d[1] = vPos2.field0_0x0.d[1] - _range[1] * 0.25;
    vXLT.field0_0x0.d[0] = vPos2.field0_0x0.d[0] - _range[0] * 0.25;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_dc = 1.0;
    local_e0 = 1.0;
    local_c4 = 0x3f800000;
    local_c8 = 0x3f800000;
    local_cc = 1.0;
    local_d0 = 1.0;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar16,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vXLT,&local_e0,
               &local_d0);
  }
  return;
}

void EActionIcon::UpdateAnim() {
	float u;
	float u;
	EUIObjectMover *this;
	EVec2 vpos;
	float y;
	EVec2 &startpos;
	float dt;
	float u;
	EVec2 &vA;
	EVec2 &v;
	EVec2 *this;
	EVec2 &startpos;
	float dt;
	float u;
	EVec2 &vA;
	EVec2 &v;
	EVec2 *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EVec2 vpos;
  
  fVar6 = _dt;
  fVar7 = this->m_lifeTime + _dt;
  this->m_lifeTime = fVar7;
  fVar7 = 1.0 - (0.2 - fVar7) * 5.0;
  fVar8 = 0.0;
  if (0.0 <= fVar7) {
    fVar8 = (float)((int)fVar7 * (uint)(fVar7 < 1.0) | (uint)(fVar7 >= 1.0) * 0x3f800000);
  }
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
  this->m_curAlpha = fVar8 * -2.0 * fVar8 * fVar8 + fVar8 * 3.0 * fVar8;
  if (*(int *)&this->m_bAnimate == 0) {
                    /* end of inlined section */
    fVar6 = (this->field0_0x0).m_pos.field0_0x0.d[2];
    (this->m_vCur).field0_0x0.d[0] = (this->field0_0x0).m_pos.field0_0x0.d[0];
    (this->m_vCur).field0_0x0.d[1] = fVar6;
  }
  else {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    fVar6 = (this->m_mover).m_curtime + fVar6;
    (this->m_mover).m_curtime = fVar6;
    fVar7 = (this->m_mover).m_startt;
    if (fVar7 <= fVar6) {
      fVar7 = (this->m_mover).m_stopt;
      fVar7 = (float)((int)fVar6 * (uint)(fVar6 < fVar7) | (int)fVar7 * (uint)(fVar6 >= fVar7));
    }
    (this->m_mover).m_curtime = fVar7;
                    /* end of inlined section */
    fVar8 = (this->field0_0x0).m_pos.field0_0x0.d[0];
    (this->m_vStart).field0_0x0.d[0] = fVar8;
    (this->m_vStop).field0_0x0.d[0] = fVar8;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    fVar7 = (this->m_mover).m_stopt;
    fVar6 = (this->m_mover).m_curtime;
                    /* end of inlined section */
    if (fVar6 < fVar7) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      if (*(int *)&this->m_bmoveIn == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
        fVar6 = 1.0 - (fVar7 - fVar6) / (fVar7 - (this->m_mover).m_startt);
        fVar6 = (this->m_vStart).field0_0x0.d[1] +
                ((this->m_vStop).field0_0x0.d[1] - (this->m_vStart).field0_0x0.d[1]) *
                (fVar6 * -2.0 * fVar6 * fVar6 + fVar6 * 3.0 * fVar6);
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
        fVar6 = 1.0 - (fVar7 - fVar6) / (fVar7 - (this->m_mover).m_startt);
                    /* end of inlined section */
        fVar6 = (this->m_vStart).field0_0x0.d[1] +
                ((this->field0_0x0).m_pos.field0_0x0.d[2] - (this->m_vStart).field0_0x0.d[1]) *
                (fVar6 * -2.0 * fVar6 * fVar6 + fVar6 * 3.0 * fVar6);
      }
      puVar1 = (undefined *)((int)&(this->m_vCur).field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | CONCAT44(fVar6,fVar8) >> (7 - uVar2) * 8;
      uVar2 = (uint)&this->m_vCur & 7;
      puVar4 = (ulong *)((int)&this->m_vCur - uVar2);
      *puVar4 = CONCAT44(fVar6,fVar8) << uVar2 * 8 |
                *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* end of inlined section */
    }
    else if (*(int *)&this->m_bmoveIn == 0) {
      puVar1 = (undefined *)((int)&(this->m_vStop).field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)&this->m_vStop & 7;
      uVar5 = *(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)&this->m_vStop - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&(this->m_vCur).field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
      uVar2 = (uint)&this->m_vCur & 7;
      puVar4 = (ulong *)((int)&this->m_vCur - uVar2);
      *puVar4 = uVar5 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    }
    else {
                    /* end of inlined section */
      fVar6 = (this->field0_0x0).m_pos.field0_0x0.d[2];
      (this->m_vCur).field0_0x0.d[0] = fVar8;
      (this->m_vCur).field0_0x0.d[1] = fVar6;
    }
  }
  return;
}

void EActionIcon::Update() {
	EUIObjectMover *this;
	EUIObjectMover *this;
	
  EUIVirtualCtrl__vtable *pEVar1;
  EUIObjectNode *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
  fVar5 = (this->field0_0x0).m_pos.field0_0x0.d[2];
  (this->m_vCur).field0_0x0.d[0] = (this->field0_0x0).m_pos.field0_0x0.d[0];
  (this->m_vCur).field0_0x0.d[1] = fVar5;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
  if (((this->m_mover).m_curtime == (this->m_mover).m_stopt) &&
     (pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
     lVar4 = (*(code *)pEVar1[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                        (this->field0_0x0).m_activeCtrl,0x40), lVar4 != 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x8a715306);
                    /* end of inlined section */
    StartMoveOut__11EActionIcon(this);
    pEVar2 = (this->field0_0x0).m_pParent;
    pEVar3 = pEVar2->__vtable;
    (*(code *)pEVar3[1].EUIObjectNode)
              ((int)&(pEVar2->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)(pEVar3 + 1),this
               ,1);
  }
  fVar5 = (this->m_brupClock).m_curtime + _dt;
  (this->m_brupClock).m_curtime = fVar5;
  fVar6 = (this->m_brupClock).m_startt;
  if (fVar6 <= fVar5) {
    fVar6 = (this->m_brupClock).m_stopt;
    fVar6 = (float)((int)fVar5 * (uint)(fVar5 < fVar6) | (int)fVar6 * (uint)(fVar5 >= fVar6));
  }
  (this->m_brupClock).m_curtime = fVar6;
  return;
}

void EActionIcon::ClearState() {
	EUIObjectMover *this;
	EUIObjectMover *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ERShader *pEVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  if (this->m_pFore == (ERShader *)0x0) {
    pEVar5 = this->m_pBack;
  }
  else {
    DelRef__9EResource(&this->m_pFore->field0_0x0);
    pEVar5 = this->m_pBack;
  }
  this->m_pFore = (ERShader *)0x0;
  if (pEVar5 == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar5 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x1239c594,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pBack = pEVar5;
  }
  if (this->m_pX == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar5 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc1d9c5ed,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pX = pEVar5;
    pEVar5 = this->m_pREndcapShdr;
  }
  else {
    pEVar5 = this->m_pREndcapShdr;
  }
  if (pEVar5 == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar5 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3e95aa5d,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pREndcapShdr = pEVar5;
    pEVar5 = this->m_pLEndcapShdr;
  }
  else {
    pEVar5 = this->m_pLEndcapShdr;
  }
  if (pEVar5 == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar5 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc49a973e,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pLEndcapShdr = pEVar5;
    pEVar5 = this->m_pBackShdr;
  }
  else {
    pEVar5 = this->m_pBackShdr;
  }
  if (pEVar5 == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar5 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x54258aaf,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pBackShdr = pEVar5;
  }
  erase__8BString2UiUi(&this->m_actionName,0,0xffffffff);
  *(undefined4 *)&this->m_markedForRemove = 0;
  this->m_actionID = -1;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_amCurAction = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->m_vStart).field0_0x0.d[1] = 0.0;
  (this->m_vStart).field0_0x0.d[0] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vStart).field0_0x0 + 7);
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&this->m_vStart & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 | 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
          -1L << (8 - uVar3) * 8 | *(ulong *)((int)&this->m_vStart - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(this->m_vCur).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vCur & 7;
  puVar4 = (ulong *)((int)&this->m_vCur - uVar2);
  *puVar4 = uVar6 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_mover).m_curtime = 0.0;
  (this->m_mover).m_startt = 0.0;
  (this->m_mover).m_stopt = 0.0;
  fVar7 = (this->m_mover).m_curtime;
  fVar8 = (this->m_mover).m_startt;
  if (fVar8 <= fVar7) {
    fVar8 = (this->m_mover).m_stopt;
    (this->m_mover).m_curtime =
         (float)((int)fVar7 * (uint)(fVar7 < fVar8) | (int)fVar8 * (uint)(fVar7 >= fVar8));
  }
  else {
    (this->m_mover).m_curtime = fVar8;
  }
  (this->m_brupClock).m_curtime = 0.0;
  (this->m_brupClock).m_startt = 0.0;
  (this->m_brupClock).m_stopt = 0.0;
  fVar7 = (this->m_brupClock).m_curtime;
  fVar8 = (this->m_brupClock).m_startt;
  if (fVar8 <= fVar7) {
    fVar8 = (this->m_brupClock).m_stopt;
    (this->m_brupClock).m_curtime =
         (float)((int)fVar7 * (uint)(fVar7 < fVar8) | (int)fVar8 * (uint)(fVar7 >= fVar8));
  }
  else {
    (this->m_brupClock).m_curtime = fVar8;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->field0_0x0).m_WDH.field0_0x0.d[0] = 0.065;
                    /* end of inlined section */
  (this->field0_0x0).m_flags = 0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->field0_0x0).m_WDH.field0_0x0.d[2] = 0.0923;
  (this->field0_0x0).m_WDH.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
  *(undefined4 *)&this->m_bmoveIn = 1;
  *(undefined4 *)&this->m_bContinuation = 0;
  *(undefined4 *)&this->m_inburp = 0;
  *(undefined4 *)&this->m_waitingForRemove = 0;
  *(undefined4 *)&this->m_bmoveOut = 0;
  this->m_curAlpha = 0.0;
  this->m_lifeTime = 0.0;
  *(undefined4 *)&this->m_bAnimate = 0;
  return;
}

void EActionIcon::SetShader(u32 wbid) {
	u32 id;
	
  ERShader *pEVar1;
  
  while (this->m_pFore != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pFore->field0_0x0);
    this->m_pFore = (ERShader *)0x0;
  }
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,wbid,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFore = pEVar1;
  return;
}

void EActionIcon::SetShader(ERShader *pShader) {
  while (this->m_pFore != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pFore->field0_0x0);
    this->m_pFore = (ERShader *)0x0;
  }
  this->m_pFore = pShader;
  return;
}

void EActionIcon::Burp() {
  return;
}

void EActionIcon::StartBurp() {
	EUIObjectMover *this;
	float stopt;
	
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  fVar1 = _11EActionIcon_m_burptime;
  (this->m_brupClock).m_curtime = 0.0;
  (this->m_brupClock).m_startt = 0.0;
  (this->m_brupClock).m_stopt = fVar1;
  fVar2 = (this->m_brupClock).m_curtime;
  fVar3 = (this->m_brupClock).m_startt;
  if (fVar3 <= fVar2) {
    fVar3 = (float)((int)fVar2 * (uint)(fVar2 < fVar1) | (int)fVar1 * (uint)(fVar2 >= fVar1));
  }
  (this->m_brupClock).m_curtime = fVar3;
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

void EActionQueue::AddChild(EUIObjectNode *pChild) {
  undefined8 unaff_retaddr;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_18 = 0;
  local_1c = 0;
                    /* end of inlined section */
  local_20 = 0;
  AddOpt__12EActionQueueP13EUIObjectNodeG5EVec3(this,pChild,(EVec3 *)&local_20);
  return;
}

void EActionQueue::SetEvent(PanelEvent event, u32 data) {
  return;
}

void EActionIcon::Message(EUIObjectNode *pChild, u32 messId) {
  return;
}
