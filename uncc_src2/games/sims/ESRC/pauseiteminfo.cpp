// STATUS: NOT STARTED

#include "pauseiteminfo.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb3364;
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
	Panelstateman *$vb3364;
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
	Panelstateman *$vb3364;
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
	TreeSim *$vb4214;
	__vtbl_ptr_type *$vf4270;
	
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
struct TreeSimImpl : virtual TreeSim {
	TreeSim *$vb4214;
	Int fIterations;
	TreeStack fStack;
	Int fLastTrans;
	bool fLastResult;
	StdPrm *fAutoStackArea;
	SInt16 fError;
	__vtbl_ptr_type *$vf4890;
	
	TreeSimImpl& operator=();
	TreeSimImpl();
	/* vtable[1] */ virtual TreeSimImpl(TreeSimImpl*, int, void);
	/* vtable[1] */ virtual TreeReturnCode TryElement();
	/* vtable[2] */ virtual void Error();
	/* vtable[3] */ virtual void StackJustPopped();
	void GetCurrentNode();
	void Reset();
	bool Gosub();
	NodeAction DoNodeAction();
	/* vtable[4] */ virtual NodeAction HandleBreakpoint();
	bool RunCheckTree();
	void RunOneTickTree();
	TreeSimImpl();
	/* vtable[2] */ virtual void Initialize();
	/* vtable[3] */ virtual bool Simulate();
	/* vtable[4] */ virtual void SetError();
	/* vtable[5] */ virtual SInt16 GetError();
	/* vtable[6] */ virtual void ClearError();
	/* vtable[7] */ virtual StackElem* GetHighLevelAction();
	/* vtable[8] */ virtual StackElem* GetCurElem();
	/* vtable[9] */ virtual StackElem* GetMainSimElem();
	/* vtable[10] */ virtual StackElem* GetNthElem();
	/* vtable[11] */ virtual SInt16 GetStackSize();
	/* vtable[12] */ virtual SInt16 GetCurrentPrimitive();
	/* vtable[13] */ virtual Int GetIterations();
	/* vtable[14] */ virtual bool GetLastTransition();
	/* vtable[15] */ virtual bool GetLastResult();
	/* vtable[16] */ virtual ISimInstance* GetISimInstance();
};

// warning: multiple differing types with the same name (name not equal)
struct cXObjectImpl : virtual cXObject, virtual TreeSimImpl {
	TreeSimImpl *$vb4890;
	cXObject *$vb4270;
	static int sXDirTable[9];
	static int sYDirTable[9];
	static Int gPersonWidth;
	static bool sFreeWill;
	static bool sAutoCenter;
	static bool sAutoReset;
	static BString2 sLastUserTypedName;
	StdPrm *fAttrs;
	Int fNumAttr;
	StdPrm *fDynSpriteFlags;
	StdPrm fNumDynSprites;
	short int fTemp[8];
	short int fData[72];
	ObjectModule *fModule;
	cXObjectImpl *fNext;
	RelMatrix *fInstMatrix;
	SInt16 fID;
	FTilePt fLocation;
	FTileRect fRect;
	int fLevel;
	Int fMiscFlags;
	ObjDefinition *fDef;
	ObjSelector *fObjSel;
	vector<ObjectSlot,__malloc_alloc_template<0> > fHierSlots;
	vector<RoutingSlot,__malloc_alloc_template<0> > fRoutingSlots;
	vector<SpriteSlot,__malloc_alloc_template<0> > fSpriteSlots;
	RenderLayer mRenderLayer;
	RECT mLastDamage;
	int mHas3D;
	bool mDrawLabel;
	__vtbl_ptr_type *$vf4216;
	
	cXObjectImpl& operator=();
	cXObjectImpl();
	/* vtable[1] */ virtual void Kill();
	/* vtable[2] */ virtual Int GetNumAttr();
	/* vtable[6] */ virtual SpriteSlot& GetSpriteSlot();
	/* vtable[3] */ virtual float CalcDistance();
	/* vtable[4] */ virtual float CalcShortDistance();
	/* vtable[5] */ virtual float CalcShortDistance();
	/* vtable[7] */ virtual void SetHilite();
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
	/* vtable[3] */ virtual bool Simulate();
	/* vtable[25] */ virtual bool RunTree();
	/* vtable[26] */ virtual bool RunTree();
	/* vtable[27] */ virtual bool RunTree();
	/* vtable[28] */ virtual void ParseUIString();
	static bool GetFreeWill(/* parameters unknown */);
	static bool GetAutoCenter(/* parameters unknown */);
	static void SetAutoCenter(/* parameters unknown */);
	static bool GetAutoReset(/* parameters unknown */);
	static void SetAutoReset(/* parameters unknown */);
	/* vtable[30] */ virtual void HandleError();
	/* vtable[29] */ virtual void Error();
	/* vtable[1] */ virtual TreeReturnCode TryElement();
	/* vtable[1] */ virtual bool GosubObjectTree();
	/* vtable[2] */ virtual void Cleanup();
	/* vtable[4] */ virtual NodeAction HandleBreakpoint();
	TreeReturnCode InterpValue();
	TreeReturnCode TryUserEvent();
	TreeReturnCode TryUIEffect();
	TreeReturnCode TryTestObjectType();
	TreeReturnCode TryMakeNewCharacter();
	TreeReturnCode TryFindGoodLocation();
	TreeReturnCode TrySetBalloon();
	TreeReturnCode TryDirectionTo();
	TreeReturnCode TryDistanceTo();
	TreeReturnCode TryRandom();
	TreeReturnCode TryTreeBreak();
	TreeReturnCode TryGrab();
	TreeReturnCode TryDrop();
	TreeReturnCode TryUpdate();
	TreeReturnCode TryIdle();
	TreeReturnCode TryKillObject();
	TreeReturnCode TryShowString();
	TreeReturnCode TryNotifyStackObject();
	TreeReturnCode TryCallNamedTree();
	TreeReturnCode TryMakeActionString();
	TreeReturnCode TryGenericSimCall();
	TreeReturnCode TryDialog();
	TreeReturnCode TryPushAction();
	TreeReturnCode TrySetToNext();
	TreeReturnCode TryExpression();
	TreeReturnCode TryFindTreeNew();
	TreeReturnCode TryCreateObject();
	TreeReturnCode TryPreloadObject();
	TreeReturnCode TryRelationship();
	TreeReturnCode TryRelationship2();
	TreeReturnCode TryDropOnto();
	TreeReturnCode TryBudget();
	TreeReturnCode TryFind5WorstMotives();
	TreeReturnCode TryFindFunctionalObject();
	TreeReturnCode TryCallFunctionalTree();
	TreeReturnCode TryPlaySound();
	TreeReturnCode TryKillSounds();
	TreeReturnCode TrySnap();
	TreeReturnCode TrySnap();
	TreeReturnCode TryBurn();
	TreeReturnCode TryTutorial();
	void JustBorn();
	void UpdateAge();
	void DayPassed();
	/* vtable[3] */ virtual void Initialize();
	/* vtable[4] */ virtual void Reset();
	/* vtable[5] */ virtual void PostLoad();
	/* vtable[6] */ virtual void PreSave();
	cXObjectImpl();
	/* vtable[1] */ virtual cXObjectImpl();
	void HierGetSite();
	void HierSetSite();
	void HierSever();
	cXObject* HierGetObject();
	Int HierCountSlots();
	ObjectSlot* HierGetSlot();
	cXObject* HierGetChild();
	cXObject* HierGetParent();
	cXObject* GetRootObject();
	void GetPlacementSpec();
	bool TestAndPlace();
	static void UpdateChairFacing(/* parameters unknown */);
	bool RequiresWallAdjacency();
	void UpdateWallAdjacency();
	bool AllowIdleOptimization();
	void SetLocation();
	void ComputeRect();
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
	/* vtable[48] */ virtual void SetLevel();
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
	/* vtable[62] */ virtual void SetIdleStatus();
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
	cXObjectImpl* GetNextImpl();
	cXObjectImpl* GetFirstImpl();
	/* vtable[129] */ virtual Int GetWallBlockFlags();
	/* vtable[130] */ virtual void ReconStream();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[132] */ virtual void ReconSlots();
	/* vtable[133] */ virtual void ReconHeader();
	/* vtable[134] */ virtual void Backtrace();
	/* vtable[135] */ virtual char* GetName();
	/* vtable[136] */ virtual int GetDebugName();
	/* vtable[137] */ virtual void AdvanceGraphic();
	/* vtable[138] */ virtual cXObjectImpl* GetObjectImplementation();
};

__vtbl_ptr_type EPauseItemInfo virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseItemInfo::~EPauseItemInfo,
		/* .__delta2 = */ -23712
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseItemInfo::Update,
		/* .__delta2 = */ -14456
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseItemInfo::Draw,
		/* .__delta2 = */ -19776
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
		/* .__pfn = */ &EPauseItemInfo::Message,
		/* .__delta2 = */ -11992
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

EPauseItemInfo* EPauseItemInfo::EPauseItemInfo() {
	EVec3 vPos;
	int i;
	
  undefined *puVar1;
  EUITextIconDef *pEVar2;
  EFontAlignY *pEVar3;
  uint *puVar4;
  EUIIconDef *pEVar5;
  int *piVar6;
  EUIVirtualCtrl **ppEVar7;
  bool bVar8;
  uint uVar9;
  ulong *puVar10;
  EUIIconDef *iconDef;
  EUITextIconDef *textDef;
  ushort uVar11;
  int iVar12;
  ObjSelector **ppOVar13;
  ObjSelector **ppOVar14;
  ObjSelector **ppOVar15;
  EAnimController *this_00;
  EAnimController *this_01;
  EUIStaticTextIcon *this_02;
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
  EUIIconDef *local_f0;
  ObjSelector **local_ec;
  EPromptBar *local_e8;
  ObjSelector **local_e4;
  EVec3 *local_e0;
  EUITextIconDef *local_dc;
  ObjSelector **local_d8;
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
  
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  __13EUIObjectNode(&this->field0_0x0);
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_14EPauseItemInfo;
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&(this->m_sPrice).field0_0x0,(this->m_sPrice).fChars,0x100);
                    /* end of inlined section */
  local_e0 = (EVec3 *)&local_150;
  local_dc = &local_140;
  local_f0 = &local_120;
                    /* end of inlined section */
  iVar12 = -1;
  do {
    bVar8 = iVar12 != -1;
    iVar12 = iVar12 + -1;
  } while (bVar8);
  this_00 = this->m_acs;
  __9E3DWindow(&this->m_win);
  iVar12 = 7;
  local_e8 = &this->m_PromptBarBack;
  local_d8 = this->m_pMasterSels;
  local_ec = this->m_pResSels;
  local_e4 = this->m_pResSel2s;
  this_01 = this->m_ac2s;
  this_02 = (EUIStaticTextIcon *)this->m_PromptsBack;
  do {
    iVar12 = iVar12 + -1;
    __15EAnimController(this_00);
    this_00 = this_00 + 1;
  } while (iVar12 != -1);
  iVar12 = 7;
  do {
    iVar12 = iVar12 + -1;
    __15EAnimController(this_01);
    this_01 = this_01 + 1;
  } while (iVar12 != -1);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_1a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon,&local_1a0,0,0,0x40);
  textDef = local_dc;
  iconDef = local_f0;
  iVar12 = 0;
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
    iVar12 = iVar12 + -1;
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
    textDef->m_pointsize = 12.0;
    local_140.m_selColorIdx = 0;
    textDef->m_colorIdx = 1;
    local_140.m_retChar = -1;
    local_120.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_120.m_flags = 0;
    iconDef->m_trigger = local_c0;
    local_120.m_selColorIdx = 0;
    iconDef->m_colorIdx = 1;
    local_120.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_1a0.m_trigger = local_c0;
    local_180 = local_d0;
    local_140.m_maxChars = local_d0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (this_02,textDef,iconDef,-1,local_e0);
    local_120.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (this_02->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).m_textdef.m_xAlign + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_17c,local_180) >> (7 - uVar9) * 8;
    pEVar2 = &(this_02->field0_0x0).m_textdef;
    uVar9 = (uint)pEVar2 & 7;
    puVar10 = (ulong *)((int)pEVar2 - uVar9);
    *puVar10 = CONCAT44(local_17c,local_180) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).m_textdef.m_pointsize + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_174,local_178) >> (7 - uVar9) * 8;
    pEVar3 = &(this_02->field0_0x0).m_textdef.m_yAlign;
    uVar9 = (uint)pEVar3 & 7;
    puVar10 = (ulong *)((int)pEVar3 - uVar9);
    *puVar10 = CONCAT44(local_174,local_178) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_16c,local_170) >> (7 - uVar9) * 8;
    puVar4 = &(this_02->field0_0x0).m_textdef.m_selColorIdx;
    uVar9 = (uint)puVar4 & 7;
    puVar10 = (ulong *)((int)puVar4 - uVar9);
    *puVar10 = CONCAT44(local_16c,local_170) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    *(undefined4 *)&(this_02->field0_0x0).m_textdef.m_retChar = local_168;
    local_100 = (this_02->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1a0.m_trigger,local_1a0.m_flags) >> (7 - uVar9) * 8;
    pEVar5 = &(this_02->field0_0x0).field0_0x0.m_def;
    uVar9 = (uint)pEVar5 & 7;
    puVar10 = (ulong *)((int)pEVar5 - uVar9);
    *puVar10 = CONCAT44(local_1a0.m_trigger,local_1a0.m_flags) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1a0.m_colorIdx,local_1a0.m_selColorIdx) >> (7 - uVar9) * 8;
    piVar6 = &(this_02->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar9 = (uint)piVar6 & 7;
    puVar10 = (ulong *)((int)piVar6 - uVar9);
    *puVar10 = CONCAT44(local_1a0.m_colorIdx,local_1a0.m_selColorIdx) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1a0.__vtable,local_1a0.m_pCtrl) >> (7 - uVar9) * 8;
    ppEVar7 = &(this_02->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar9 = (uint)ppEVar7 & 7;
    puVar10 = (ulong *)((int)ppEVar7 - uVar9);
    *puVar10 = CONCAT44(local_1a0.__vtable,local_1a0.m_pCtrl) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    (this_02->field0_0x0).field0_0x0.m_def.__vtable = local_100;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    this_02[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
    this_02[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    this_02 = (EUIStaticTextIcon *)&this_02[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar12 != -1);
  __10EPromptBar(local_e8);
  this->m_pGround = (EDL *)0x0;
  this->m_pUpArrowShader = (ERShader *)0x0;
  this->m_pDownArrowShader = (ERShader *)0x0;
  this->m_pLeftArrowShader = (ERShader *)0x0;
  this->m_pRightArrowShader = (ERShader *)0x0;
  this->m_pBlankShdr = (ERShader *)0x0;
  this->m_pTextBoxBGBC = (ERShader *)0x0;
  this->m_pTextBoxBGMR = (ERShader *)0x0;
  this->m_pTextBoxBGBR = (ERShader *)0x0;
  this->m_pMenuBevelShdr = (ERShader *)0x0;
  this->m_nDialogMode = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  uVar11 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                     ((int)&_5Globs_pNeighborhood->__vtable +
                      (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
  this->m_nNeighborhoodMode = uVar11;
  iVar12 = 7;
  ppOVar13 = local_d8;
  ppOVar15 = local_e4;
  ppOVar14 = local_ec;
  do {
    *ppOVar13 = (ObjSelector *)0x0;
    iVar12 = iVar12 + -1;
    *ppOVar14 = (ObjSelector *)0x0;
    ppOVar13 = ppOVar13 + 1;
    *ppOVar15 = (ObjSelector *)0x0;
    ppOVar14 = ppOVar14 + 1;
    ppOVar15 = ppOVar15 + 1;
  } while (-1 < iVar12);
  Init__14EPauseItemInfo(this);
  return this;
}

EPauseItemInfo* EPauseItemInfo::EPauseItemInfo(EUIObjectNode *pNode) {
	EVec3 vPos;
	EPauseItemInfo *this;
	EUIObjectNode *pNode;
	int i;
	
  undefined *puVar1;
  EUITextIconDef *pEVar2;
  EFontAlignY *pEVar3;
  uint *puVar4;
  EUIIconDef *pEVar5;
  int *piVar6;
  EUIVirtualCtrl **ppEVar7;
  bool bVar8;
  uint uVar9;
  ulong *puVar10;
  EUIIconDef *iconDef;
  EUITextIconDef *textDef;
  ushort uVar11;
  int iVar12;
  ObjSelector **ppOVar13;
  ObjSelector **ppOVar14;
  ObjSelector **ppOVar15;
  EAnimController *this_00;
  EAnimController *this_01;
  EUIStaticTextIcon *this_02;
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
  EUIObjectNode *local_f0;
  EUIIconDef *local_ec;
  ObjSelector **local_e8;
  EPromptBar *local_e4;
  ObjSelector **local_e0;
  EVec3 *local_dc;
  EUITextIconDef *local_d8;
  ObjSelector **local_d4;
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
  
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_f0 = pNode;
  __13EUIObjectNode(&this->field0_0x0);
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_14EPauseItemInfo;
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&(this->m_sPrice).field0_0x0,(this->m_sPrice).fChars,0x100);
                    /* end of inlined section */
  local_dc = (EVec3 *)&local_150;
  local_d8 = &local_140;
  local_ec = &local_120;
                    /* end of inlined section */
  iVar12 = -1;
  do {
    bVar8 = iVar12 != -1;
    iVar12 = iVar12 + -1;
  } while (bVar8);
  this_00 = this->m_acs;
  __9E3DWindow(&this->m_win);
  iVar12 = 7;
  local_e4 = &this->m_PromptBarBack;
  local_d4 = this->m_pMasterSels;
  local_e8 = this->m_pResSels;
  local_e0 = this->m_pResSel2s;
  this_01 = this->m_ac2s;
  this_02 = (EUIStaticTextIcon *)this->m_PromptsBack;
  do {
    iVar12 = iVar12 + -1;
    __15EAnimController(this_00);
    this_00 = this_00 + 1;
  } while (iVar12 != -1);
  iVar12 = 7;
  do {
    iVar12 = iVar12 + -1;
    __15EAnimController(this_01);
    this_01 = this_01 + 1;
  } while (iVar12 != -1);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_1a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon,&local_1a0,0,0,0x40);
  textDef = local_d8;
  iconDef = local_ec;
  iVar12 = 0;
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
    iVar12 = iVar12 + -1;
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
    textDef->m_pointsize = 12.0;
    local_140.m_selColorIdx = 0;
    textDef->m_colorIdx = 1;
    local_140.m_retChar = -1;
    local_120.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_120.m_flags = 0;
    iconDef->m_trigger = local_c0;
    local_120.m_selColorIdx = 0;
    iconDef->m_colorIdx = 1;
    local_120.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_1a0.m_trigger = local_c0;
    local_180 = local_d0;
    local_140.m_maxChars = local_d0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (this_02,textDef,iconDef,-1,local_dc);
    local_120.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (this_02->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).m_textdef.m_xAlign + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_17c,local_180) >> (7 - uVar9) * 8;
    pEVar2 = &(this_02->field0_0x0).m_textdef;
    uVar9 = (uint)pEVar2 & 7;
    puVar10 = (ulong *)((int)pEVar2 - uVar9);
    *puVar10 = CONCAT44(local_17c,local_180) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).m_textdef.m_pointsize + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_174,local_178) >> (7 - uVar9) * 8;
    pEVar3 = &(this_02->field0_0x0).m_textdef.m_yAlign;
    uVar9 = (uint)pEVar3 & 7;
    puVar10 = (ulong *)((int)pEVar3 - uVar9);
    *puVar10 = CONCAT44(local_174,local_178) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_16c,local_170) >> (7 - uVar9) * 8;
    puVar4 = &(this_02->field0_0x0).m_textdef.m_selColorIdx;
    uVar9 = (uint)puVar4 & 7;
    puVar10 = (ulong *)((int)puVar4 - uVar9);
    *puVar10 = CONCAT44(local_16c,local_170) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    *(undefined4 *)&(this_02->field0_0x0).m_textdef.m_retChar = local_168;
    local_100 = (this_02->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1a0.m_trigger,local_1a0.m_flags) >> (7 - uVar9) * 8;
    pEVar5 = &(this_02->field0_0x0).field0_0x0.m_def;
    uVar9 = (uint)pEVar5 & 7;
    puVar10 = (ulong *)((int)pEVar5 - uVar9);
    *puVar10 = CONCAT44(local_1a0.m_trigger,local_1a0.m_flags) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1a0.m_colorIdx,local_1a0.m_selColorIdx) >> (7 - uVar9) * 8;
    piVar6 = &(this_02->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar9 = (uint)piVar6 & 7;
    puVar10 = (ulong *)((int)piVar6 - uVar9);
    *puVar10 = CONCAT44(local_1a0.m_colorIdx,local_1a0.m_selColorIdx) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1a0.__vtable,local_1a0.m_pCtrl) >> (7 - uVar9) * 8;
    ppEVar7 = &(this_02->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar9 = (uint)ppEVar7 & 7;
    puVar10 = (ulong *)((int)ppEVar7 - uVar9);
    *puVar10 = CONCAT44(local_1a0.__vtable,local_1a0.m_pCtrl) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    (this_02->field0_0x0).field0_0x0.m_def.__vtable = local_100;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    this_02[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
    this_02[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    this_02 = (EUIStaticTextIcon *)&this_02[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar12 != -1);
  __10EPromptBar(local_e4);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseiteminfo.h */
                    /* end of inlined section */
  this->m_pGround = (EDL *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseiteminfo.h */
  this->m_pReceiver = local_f0;
                    /* end of inlined section */
  this->m_pUpArrowShader = (ERShader *)0x0;
  this->m_pDownArrowShader = (ERShader *)0x0;
  this->m_pLeftArrowShader = (ERShader *)0x0;
  this->m_pRightArrowShader = (ERShader *)0x0;
  this->m_pBlankShdr = (ERShader *)0x0;
  this->m_pTextBoxBGBC = (ERShader *)0x0;
  this->m_pTextBoxBGMR = (ERShader *)0x0;
  this->m_pTextBoxBGBR = (ERShader *)0x0;
  this->m_pMenuBevelShdr = (ERShader *)0x0;
  this->m_nDialogMode = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  uVar11 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                     ((int)&_5Globs_pNeighborhood->__vtable +
                      (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
  this->m_nNeighborhoodMode = uVar11;
  iVar12 = 7;
  ppOVar13 = local_d4;
  ppOVar15 = local_e0;
  ppOVar14 = local_e8;
  do {
    *ppOVar13 = (ObjSelector *)0x0;
    iVar12 = iVar12 + -1;
    *ppOVar14 = (ObjSelector *)0x0;
    ppOVar13 = ppOVar13 + 1;
    *ppOVar15 = (ObjSelector *)0x0;
    ppOVar14 = ppOVar14 + 1;
    ppOVar15 = ppOVar15 + 1;
  } while (-1 < iVar12);
  Init__14EPauseItemInfo(this);
  return this;
}

EPauseItemInfo* EPauseItemInfo::EPauseItemInfo(EUIObjectNode *pNode, u8 nMode) {
	EVec3 vPos;
	EPauseItemInfo *this;
	EUIObjectNode *pNode;
	int i;
	
  undefined *puVar1;
  EUITextIconDef *pEVar2;
  EFontAlignY *pEVar3;
  uint *puVar4;
  EUIIconDef *pEVar5;
  int *piVar6;
  EUIVirtualCtrl **ppEVar7;
  bool bVar8;
  Neighborhood__vtable *pNVar9;
  uint uVar10;
  ulong *puVar11;
  Neighborhood *pNVar12;
  uint *puVar13;
  EUIIconDef *iconDef;
  ushort uVar14;
  int iVar15;
  ObjSelector **ppOVar16;
  ObjSelector **ppOVar17;
  ObjSelector **ppOVar18;
  EAnimController *this_00;
  EAnimController *this_01;
  EUIStaticTextIcon *this_02;
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
  EUIIconDef local_1b0;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  EVec3 vPos;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  EUITextIconDef local_150;
  EUIIconDef local_130;
  EUIIconDef__vtable *local_110;
  EUIObjectNode *local_100;
  uint local_fc;
  ObjSelector **local_f8;
  EPromptBar *local_f4;
  EVec3 *local_f0;
  ObjSelector **local_ec;
  uint *local_e8;
  ObjSelector **local_e4;
  EUIIconDef *local_e0;
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
  
  local_fc = (int)(char)nMode & 0xff;
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_100 = pNode;
  __13EUIObjectNode(&this->field0_0x0);
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_14EPauseItemInfo;
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&(this->m_sPrice).field0_0x0,(this->m_sPrice).fChars,0x100);
                    /* end of inlined section */
  local_e8 = &local_190;
  local_f0 = (EVec3 *)&local_160;
  local_e0 = &local_130;
                    /* end of inlined section */
  iVar15 = -1;
  do {
    bVar8 = iVar15 != -1;
    iVar15 = iVar15 + -1;
  } while (bVar8);
  this_00 = this->m_acs;
  __9E3DWindow(&this->m_win);
  iVar15 = 7;
  local_f4 = &this->m_PromptBarBack;
  local_ec = this->m_pMasterSels;
  local_e4 = this->m_pResSels;
  local_f8 = this->m_pResSel2s;
  this_01 = this->m_ac2s;
  this_02 = (EUIStaticTextIcon *)this->m_PromptsBack;
  do {
    iVar15 = iVar15 + -1;
    __15EAnimController(this_00);
    this_00 = this_00 + 1;
  } while (iVar15 != -1);
  iVar15 = 7;
  do {
    iVar15 = iVar15 + -1;
    __15EAnimController(this_01);
    this_01 = this_01 + 1;
  } while (iVar15 != -1);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1b0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_1b0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon,&local_1b0,0,0,0x40);
  iconDef = local_e0;
  puVar13 = local_e8;
  iVar15 = 0;
  local_c0 = 0x40;
  uStack_bc = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_1b0.m_flags = 0;
    local_1b0.m_selColorIdx = 0;
                    /* end of inlined section */
    iVar15 = iVar15 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1b0.m_colorIdx = 1;
    local_1b0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_18c = 0;
    local_188 = 0;
    puVar13[3] = 0x41400000;
    local_180 = 0;
    puVar13[5] = 1;
    local_178 = CONCAT22(local_178._2_2_,0xffff);
    vPos.field0_0x0.d[2] = 0.0;
    vPos.field0_0x0.d[1] = 0.0;
    vPos.field0_0x0.d[0] = 0.0;
    local_158 = 0;
    local_15c = 0;
    local_160 = 0;
    local_150.m_xAlign = E_FAX_LEFT;
    local_150.m_yAlign = E_FAY_TOP;
    local_150.m_pointsize = 12.0;
    local_150.m_selColorIdx = 0;
    local_150.m_colorIdx = 1;
    local_150.m_retChar = -1;
    local_130.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_130.m_flags = 0;
    iconDef->m_trigger = local_c0;
    local_130.m_selColorIdx = 0;
    iconDef->m_colorIdx = 1;
    local_130.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_1b0.m_trigger = local_c0;
    local_190 = local_d0;
    local_150.m_maxChars = local_d0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (this_02,&local_150,iconDef,-1,local_f0);
    local_130.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (this_02->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).m_textdef.m_xAlign + 3);
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 |
               CONCAT44(local_18c,local_190) >> (7 - uVar10) * 8;
    pEVar2 = &(this_02->field0_0x0).m_textdef;
    uVar10 = (uint)pEVar2 & 7;
    puVar11 = (ulong *)((int)pEVar2 - uVar10);
    *puVar11 = CONCAT44(local_18c,local_190) << uVar10 * 8 |
               *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).m_textdef.m_pointsize + 3);
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 |
               CONCAT44(uStack_184,local_188) >> (7 - uVar10) * 8;
    pEVar3 = &(this_02->field0_0x0).m_textdef.m_yAlign;
    uVar10 = (uint)pEVar3 & 7;
    puVar11 = (ulong *)((int)pEVar3 - uVar10);
    *puVar11 = CONCAT44(uStack_184,local_188) << uVar10 * 8 |
               *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 |
               CONCAT44(uStack_17c,local_180) >> (7 - uVar10) * 8;
    puVar4 = &(this_02->field0_0x0).m_textdef.m_selColorIdx;
    uVar10 = (uint)puVar4 & 7;
    puVar11 = (ulong *)((int)puVar4 - uVar10);
    *puVar11 = CONCAT44(uStack_17c,local_180) << uVar10 * 8 |
               *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    *(undefined4 *)&(this_02->field0_0x0).m_textdef.m_retChar = local_178;
    local_110 = (this_02->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 |
               CONCAT44(local_1b0.m_trigger,local_1b0.m_flags) >> (7 - uVar10) * 8;
    pEVar5 = &(this_02->field0_0x0).field0_0x0.m_def;
    uVar10 = (uint)pEVar5 & 7;
    puVar11 = (ulong *)((int)pEVar5 - uVar10);
    *puVar11 = CONCAT44(local_1b0.m_trigger,local_1b0.m_flags) << uVar10 * 8 |
               *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 |
               CONCAT44(local_1b0.m_colorIdx,local_1b0.m_selColorIdx) >> (7 - uVar10) * 8;
    piVar6 = &(this_02->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar10 = (uint)piVar6 & 7;
    puVar11 = (ulong *)((int)piVar6 - uVar10);
    *puVar11 = CONCAT44(local_1b0.m_colorIdx,local_1b0.m_selColorIdx) << uVar10 * 8 |
               *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    puVar1 = (undefined *)((int)&(this_02->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 |
               CONCAT44(local_1b0.__vtable,local_1b0.m_pCtrl) >> (7 - uVar10) * 8;
    ppEVar7 = &(this_02->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar10 = (uint)ppEVar7 & 7;
    puVar11 = (ulong *)((int)ppEVar7 - uVar10);
    *puVar11 = CONCAT44(local_1b0.__vtable,local_1b0.m_pCtrl) << uVar10 * 8 |
               *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    (this_02->field0_0x0).field0_0x0.m_def.__vtable = local_110;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    this_02[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
    this_02[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    this_02 = (EUIStaticTextIcon *)&this_02[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar15 != -1);
  __10EPromptBar(local_f4);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseiteminfo.h */
                    /* end of inlined section */
  this->m_pGround = (EDL *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseiteminfo.h */
  this->m_pReceiver = local_100;
                    /* end of inlined section */
  this->m_pUpArrowShader = (ERShader *)0x0;
  this->m_pDownArrowShader = (ERShader *)0x0;
  this->m_pLeftArrowShader = (ERShader *)0x0;
  this->m_pRightArrowShader = (ERShader *)0x0;
  this->m_pBlankShdr = (ERShader *)0x0;
  this->m_pTextBoxBGBC = (ERShader *)0x0;
  this->m_pTextBoxBGMR = (ERShader *)0x0;
  this->m_pTextBoxBGBR = (ERShader *)0x0;
  this->m_pMenuBevelShdr = (ERShader *)0x0;
  pNVar12 = _5Globs_pNeighborhood;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  this->m_nDialogMode = local_fc;
  pNVar9 = pNVar12->__vtable;
  uVar14 = (*(code *)pNVar9->AddToFamily)
                     ((int)&pNVar12->__vtable + (int)*(short *)&pNVar9->RemoveFamily,1);
  this->m_nNeighborhoodMode = uVar14;
  iVar15 = 7;
  ppOVar16 = local_ec;
  ppOVar18 = local_f8;
  ppOVar17 = local_e4;
  do {
    *ppOVar16 = (ObjSelector *)0x0;
    iVar15 = iVar15 + -1;
    *ppOVar17 = (ObjSelector *)0x0;
    ppOVar16 = ppOVar16 + 1;
    *ppOVar18 = (ObjSelector *)0x0;
    ppOVar17 = ppOVar17 + 1;
    ppOVar18 = ppOVar18 + 1;
  } while (-1 < iVar15);
  Init__14EPauseItemInfo(this);
  SetDialogMode__14EPauseItemInfoUi(this,local_fc);
  return this;
}

void EPauseItemInfo::~EPauseItemInfo(int __in_chrg) {
	void *ptr;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIPrompt *pEVar3;
  EAnimController *pEVar4;
  EAnimController *pEVar5;
  
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_14EPauseItemInfo;
  Reset__14EPauseItemInfo(this);
  ___10EPromptBar(&this->m_PromptBarBack,2);
  if ((this != (EPauseItemInfo *)0xfffff3ec) &&
     (this->m_PromptsBack != (EUIPrompt *)&this->m_PromptBarBack)) {
    for (pEVar3 = this->m_PromptsBack;
        pEVar2 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable,
        (*(code *)pEVar2->Draw)
                  ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar2->Update + 4,0), this->m_PromptsBack != pEVar3;
        pEVar3 = pEVar3 + -1) {
    }
  }
  ___7EUIIcon(&this->m_TriIcon,2);
  pEVar5 = this->m_ac2s;
  if ((this != (EPauseItemInfo *)0xfffff7e4) && (pEVar5 != (EAnimController *)this->m_bIsAnimated))
  {
    for (pEVar4 = this->m_ac2s + 7;
        (**(code **)(pEVar4->__vtable + 1))
                  ((undefined *)
                   ((int)&pEVar4->m_mNodes + (int)*(short *)&pEVar4->__vtable->ComputeMatrices),0),
        pEVar5 != pEVar4; pEVar4 = pEVar4 + -1) {
    }
  }
                    /* end of inlined section */
  if ((this != (EPauseItemInfo *)0xfffffa04) && (this->m_acs != pEVar5)) {
    pEVar5 = this->m_acs + 7;
    do {
      (**(code **)(pEVar5->__vtable + 1))
                ((undefined *)
                 ((int)&pEVar5->m_mNodes + (int)*(short *)&pEVar5->__vtable->ComputeMatrices),0);
      bVar1 = this->m_acs != pEVar5;
      pEVar5 = pEVar5 + -1;
    } while (bVar1);
  }
  ___7EWindow(&(this->m_win).field0_0x0,0);
  ___13EUIObjectNode(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseiteminfo.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EPauseItemInfo::Init() {
	EVec2 vScreen;
	EVec2 vInteriorSize;
	EVec2 vInteriorPos;
	EVec2 vGapSize;
	int i;
	ERFont *this;
	EGraphics *this;
	EGraphics *this;
	EUIObjectNode *this;
	float x;
	EUIObjectNode *this;
	EGraphics *this;
	EFloatRect drawWin;
	ERC *prc;
	EVec3 *this;
	int i;
	EGraphics *this;
	EGraphics *this;
	
  undefined *puVar1;
  EDirLight *pEVar2;
  EUIIconDef *pEVar3;
  EUIVirtualCtrl **ppEVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  EGlobalManagerClient__vtable *pEVar8;
  EUIObjectNode__vtable *pEVar9;
  uint uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  EGraphics *pEVar16;
  uchar *puVar17;
  ERFont *pEVar18;
  EWindow *pEVar19;
  ERShader *pEVar20;
  EDL *pEVar21;
  short *psVar22;
  undefined8 uVar23;
  int *piVar24;
  ERModel **ppEVar25;
  int iVar26;
  ulong uVar27;
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
  undefined8 unaff_retaddr;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  EVec2 vScreen;
  EVec2 vInteriorSize;
  EVec2 vInteriorPos;
  EVec2 vGapSize;
  TRect_float_ drawWin;
  TRect_float_ local_e0;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  EUIIconDef__vtable *local_c0;
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
  
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  uVar27 = (ulong)(int)this->m_nModelGoalAssociations;
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  iVar26 = 0;
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  piVar24 = this->m_nGuids;
  this->m_fNextDownToggle = 0.5;
  this->m_nNumModels = 1;
  this->m_nLockableModelIndex = '\0';
  *(undefined4 *)&this->m_bTriggerUp = 0;
  *(undefined4 *)&this->m_bTriggerDown = 0;
  this->m_fDPadUpTime = 0.0;
  this->m_fDPadDownTime = 0.0;
  *(undefined4 *)&this->m_bUpToggle = 0;
  *(undefined4 *)&this->m_bDownToggle = 0;
  this->m_fNextUpToggle = 0.5;
  *(undefined4 *)&this->m_bModelPreloadDone = 0;
  do {
    piVar24[0x1dd] = 0;
    puVar17 = this->m_nModelGoalAssociations + iVar26;
    piVar24[0x1e5] = 0;
    iVar26 = iVar26 + 1;
    piVar24[0x1ed] = 0;
    piVar24[0x1f5] = 0;
    piVar24[0x212] = 0;
    *puVar17 = '\x11';
    piVar24[0x1ff] = 1;
    *piVar24 = 0;
    piVar24 = piVar24 + 1;
  } while (iVar26 < 8);
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
  fVar37 = 16.0;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar18 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar18;
  SetSize__6ERFontffb(pEVar18,fVar37,1.0,true);
  pEVar16 = _pGfx;
  uVar15 = _WHITE.field0_0x0.d[3];
  uVar14 = _WHITE.field0_0x0.d[2];
  uVar13 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar18 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
  (pEVar18->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar18->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar13 >> 0x20);
  (pEVar18->m_vColor).field0_0x0.d[2] = uVar14;
  (pEVar18->m_vColor).field0_0x0.d[3] = uVar15;
                    /* end of inlined section */
  this->m_fAnimationTime = 0.25;
  this->m_nDisplayMode = 1;
  this->m_fHighlightTimer = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar12 = CONCAT44(_13EUIObjectNode_SAFE_BOTTOM - 46.0 / (float)pEVar16->m_yscreen,0x3e3645a2);
  puVar1 = (undefined *)((int)&(this->m_vBottomPosEnd).field0_0x0 + 7);
  uVar10 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar12 >> (7 - uVar10) * 8;
  uVar10 = (uint)&this->m_vBottomPosEnd & 7;
  puVar11 = (ulong *)((int)&this->m_vBottomPosEnd - uVar10);
  *puVar11 = uVar12 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar12 = CONCAT44(1.0 - (this->m_vBottomPosEnd).field0_0x0.d[1],
                    1.0 - (this->m_vBottomPosEnd).field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&(this->m_vBottomSize).field0_0x0 + 7);
  uVar10 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar12 >> (7 - uVar10) * 8;
  uVar10 = (uint)&this->m_vBottomSize & 7;
  puVar11 = (ulong *)((int)&this->m_vBottomSize - uVar10);
  *puVar11 = uVar12 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPosStart).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar10 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x3f8666663e3645a2U >> (7 - uVar10) * 8;
  uVar10 = (uint)&this->m_vBottomPosStart & 7;
  puVar11 = (ulong *)((int)&this->m_vBottomPosStart - uVar10);
  *puVar11 = 0x3f8666663e3645a2 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPosStart).field0_0x0 + 7);
  uVar10 = (uint)puVar1 & 7;
  uVar5 = (uint)&this->m_vBottomPosStart & 7;
  uVar27 = (*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
           uVar27 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar5) * 8 |
           *(ulong *)((int)&this->m_vBottomPosStart - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
  uVar10 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar27 >> (7 - uVar10) * 8;
  uVar10 = (uint)&this->m_vBottomPos & 7;
  puVar11 = (ulong *)((int)&this->m_vBottomPos - uVar10);
  *puVar11 = uVar27 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  (this->field0_0x0).m_WDH.field0_0x0.d[0] = 0.7875;
  (this->field0_0x0).m_WDH.field0_0x0.d[2] = 0.56;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  fVar28 = (float)_pGfx->m_yscreen;
  fVar29 = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  if (this->m_nDialogMode == 1) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    (*(code *)((this->field0_0x0).__vtable)->OnButtonRepeat)();
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    uVar27 = CONCAT44((this->field0_0x0).m_pos.field0_0x0.d[2] + fVar37 / fVar28,
                      (this->field0_0x0).m_pos.field0_0x0.d[0] + fVar37 / fVar29);
    puVar1 = (undefined *)((int)&(this->m_vBoxEndPos).field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar27 >> (7 - uVar10) * 8;
    uVar10 = (uint)&this->m_vBoxEndPos & 7;
    puVar11 = (ulong *)((int)&this->m_vBoxEndPos - uVar10);
    *puVar11 = uVar27 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    uVar12 = CONCAT44((this->m_vBoxEndPos).field0_0x0.d[1] -
                      (this->field0_0x0).m_WDH.field0_0x0.d[2],(this->m_vBoxEndPos).field0_0x0.d[0])
    ;
    puVar1 = (undefined *)((int)&(this->m_vBoxStartPos).field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar12 >> (7 - uVar10) * 8;
    uVar10 = (uint)&this->m_vBoxStartPos & 7;
    puVar11 = (ulong *)((int)&this->m_vBoxStartPos - uVar10);
    *puVar11 = uVar12 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    puVar1 = (undefined *)((int)&(this->m_vBoxStartPos).field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    uVar5 = (uint)&this->m_vBoxStartPos & 7;
    uVar27 = (*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
             uVar27 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar5) * 8 |
             *(ulong *)((int)&this->m_vBoxStartPos - uVar5) >> uVar5 * 8;
    puVar1 = (undefined *)((int)&(this->m_vBoxAnimatePos).field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar27 >> (7 - uVar10) * 8;
    uVar10 = (uint)&this->m_vBoxAnimatePos & 7;
    puVar11 = (ulong *)((int)&this->m_vBoxAnimatePos - uVar10);
    *puVar11 = uVar27 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    pEVar9 = (this->field0_0x0).__vtable;
    (*(code *)pEVar9->OnButtonRepeat)
              ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar9->StateChanged);
                    /* end of inlined section */
  }
  fVar33 = 32.0 / fVar28;
  fVar36 = 5.0 / fVar28;
  fVar37 = 5.0 / fVar29;
  fVar30 = (this->field0_0x0).m_pos.field0_0x0.d[2] + 16.0 / fVar28;
  fVar34 = (this->field0_0x0).m_WDH.field0_0x0.d[0] - 32.0 / fVar29;
  fVar35 = (this->field0_0x0).m_pos.field0_0x0.d[0] + 16.0 / fVar29;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar31 = ((this->field0_0x0).m_WDH.field0_0x0.d[2] - fVar33) - (fVar33 + fVar36);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar32 = fVar30 + fVar33 + fVar36;
  uVar27 = CONCAT44(fVar30,fVar35);
  puVar1 = (undefined *)((int)&(this->m_vHeaderPos).field0_0x0 + 7);
  uVar10 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar27 >> (7 - uVar10) * 8;
  uVar10 = (uint)&this->m_vHeaderPos & 7;
  puVar11 = (ulong *)((int)&this->m_vHeaderPos - uVar10);
  *puVar11 = uVar27 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  (this->m_vHeaderSize).field0_0x0.d[0] = fVar34;
  uVar6 = this->m_nNeighborhoodMode;
  (this->m_vHeaderSize).field0_0x0.d[1] = fVar33;
  if (uVar6 == 2) {
    puVar1 = (undefined *)((int)&(this->m_vTextPos).field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | CONCAT44(fVar32,fVar35) >> (7 - uVar10) * 8;
    uVar10 = (uint)&this->m_vTextPos & 7;
    puVar11 = (ulong *)((int)&this->m_vTextPos - uVar10);
    *puVar11 = CONCAT44(fVar32,fVar35) << uVar10 * 8 |
               *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    (this->m_vTextSize).field0_0x0.d[0] = fVar34;
    (this->m_vTextSize).field0_0x0.d[1] = fVar31;
  }
  else {
    puVar1 = (undefined *)((int)&(this->m_vTextPos).field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | CONCAT44(fVar32,fVar35) >> (7 - uVar10) * 8;
    uVar10 = (uint)&this->m_vTextPos & 7;
    puVar11 = (ulong *)((int)&this->m_vTextPos - uVar10);
    *puVar11 = CONCAT44(fVar32,fVar35) << uVar10 * 8 |
               *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    (this->m_vTextSize).field0_0x0.d[1] = fVar31;
    uVar10 = this->m_nDialogMode;
    fVar30 = (fVar34 + fVar34) * 0.3333333 - fVar37;
    (this->m_vTextSize).field0_0x0.d[0] = fVar30;
    fVar37 = fVar30 + fVar37 + fVar37;
    fVar34 = fVar34 - fVar37;
    fVar35 = fVar35 + fVar37;
    if (uVar10 == 0) {
      puVar1 = (undefined *)((int)&(this->m_vModelPos).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar11 = (ulong *)(puVar1 + -uVar10);
      *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | CONCAT44(fVar32,fVar35) >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vModelPos & 7;
      puVar11 = (ulong *)((int)&this->m_vModelPos - uVar10);
      *puVar11 = CONCAT44(fVar32,fVar35) << uVar10 * 8 |
                 *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      (this->m_vModelSize).field0_0x0.d[0] = fVar34;
      fVar37 = fVar31 * 0.5 - fVar36;
      (this->m_vModelSize).field0_0x0.d[1] = fVar37;
      fVar36 = fVar37 + fVar36 + fVar36;
      uVar27 = CONCAT44(fVar32 + fVar36,fVar35);
      puVar1 = (undefined *)((int)&(this->m_vStatsPos).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar11 = (ulong *)(puVar1 + -uVar10);
      *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar27 >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vStatsPos & 7;
      puVar11 = (ulong *)((int)&this->m_vStatsPos - uVar10);
      *puVar11 = uVar27 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      uVar27 = CONCAT44(fVar31 - fVar36,fVar34);
      puVar1 = (undefined *)((int)&(this->m_vStatsSize).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar11 = (ulong *)(puVar1 + -uVar10);
      *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar27 >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vStatsSize & 7;
      puVar11 = (ulong *)((int)&this->m_vStatsSize - uVar10);
      *puVar11 = uVar27 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    }
    else if (uVar10 == 1) {
      (this->m_vStatsSize).field0_0x0.d[0] = fVar34;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      fVar37 = 26.0 / (float)_pGfx->m_yscreen;
      drawWin.top = (fVar32 + fVar31) - fVar37;
      (this->m_vStatsSize).field0_0x0.d[1] = fVar37;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      puVar1 = (undefined *)((int)&(this->m_vStatsPos).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar11 = (ulong *)(puVar1 + -uVar10);
      *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 |
                 CONCAT44(drawWin.top,fVar35) >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vStatsPos & 7;
      puVar11 = (ulong *)((int)&this->m_vStatsPos - uVar10);
      *puVar11 = CONCAT44(drawWin.top,fVar35) << uVar10 * 8 |
                 *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      fVar37 = (this->m_vStatsSize).field0_0x0.d[1];
      puVar1 = (undefined *)((int)&(this->m_vModelPos).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar11 = (ulong *)(puVar1 + -uVar10);
      *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | CONCAT44(fVar32,fVar35) >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vModelPos & 7;
      puVar11 = (ulong *)((int)&this->m_vModelPos - uVar10);
      *puVar11 = CONCAT44(fVar32,fVar35) << uVar10 * 8 |
                 *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      uVar27 = CONCAT44(fVar31 - (fVar37 + fVar36),fVar34);
      puVar1 = (undefined *)((int)&(this->m_vModelSize).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar11 = (ulong *)(puVar1 + -uVar10);
      *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar27 >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vModelSize & 7;
      puVar11 = (ulong *)((int)&this->m_vModelSize - uVar10);
      *puVar11 = uVar27 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      drawWin.left = fVar35;
    }
  }
  fVar37 = 10.0;
  erase__13StringBuffer2(&(this->m_sPrice).field0_0x0);
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
  drawWin.left = 16.0 / fVar29;
  this->m_sName = (short *)0x0;
  drawWin.top = 8.0 / fVar28;
  this->m_sText = (short *)0x0;
  *(undefined4 *)&this->m_bMoreDown = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_nLinesScrolled = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this_00 = &this->m_TriIcon;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  this_01 = this->m_PromptsBack;
  uVar27 = CONCAT44(4.0 / fVar28,fVar37 / fVar29);
  puVar1 = (undefined *)((int)&(this->m_vTextGapSize).field0_0x0 + 7);
  uVar10 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar27 >> (7 - uVar10) * 8;
  uVar10 = (uint)&this->m_vTextGapSize & 7;
  puVar11 = (ulong *)((int)&this->m_vTextGapSize - uVar10);
  *puVar11 = uVar27 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_vArrowSize).field0_0x0 + 7);
  uVar10 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 |
             CONCAT44(drawWin.top,drawWin.left) >> (7 - uVar10) * 8;
  uVar10 = (uint)&this->m_vArrowSize & 7;
  puVar11 = (ulong *)((int)&this->m_vArrowSize - uVar10);
  *puVar11 = CONCAT44(drawWin.top,drawWin.left) << uVar10 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* inlined from /eor/src2/engine/window/e_window.h */
  pEVar19 = (EWindow *)_memmanAlloc__FUiUi(0xa0,0x10);
                    /* end of inlined section */
  pEVar19 = __7EWindow(pEVar19);
  fVar32 = (this->m_vTextPos).field0_0x0.d[1];
  fVar36 = (this->m_vTextSize).field0_0x0.d[1];
  fVar34 = (this->m_vTextGapSize).field0_0x0.d[1];
  fVar31 = (this->m_vTextPos).field0_0x0.d[0];
  fVar30 = (this->m_vTextSize).field0_0x0.d[0];
  fVar35 = (this->m_vTextGapSize).field0_0x0.d[0];
  fVar33 = (this->m_vArrowSize).field0_0x0.d[1];
  this->m_pWin = pEVar19;
  local_e0.bottom = (((fVar32 + fVar36) - fVar34) - fVar33) + 1.0 / fVar28;
  local_e0.right = ((fVar31 + fVar30) - fVar35) + 1.0 / fVar29;
  local_e0.left = (fVar31 + fVar35) - 1.0 / fVar29;
  local_e0.top = (fVar32 + fVar34 + fVar33) - 1.0 / fVar28;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  SetClip__7EWindowRCt5TRect1Zf(pEVar19,&local_e0);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6b7cd394,(EFile *)0x0,0);
  this->m_pUpArrowShader = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x373ae809,(EFile *)0x0,0);
  this->m_pDownArrowShader = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3f933f2,(EFile *)0x0,0);
  this->m_pLeftArrowShader = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x24100c84,(EFile *)0x0,0);
  this->m_pRightArrowShader = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
  this->m_pBlankShdr = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x502567e1,(EFile *)0x0,0);
  this->m_pTextBoxBGBC = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xbd0d5bdc,(EFile *)0x0,0);
  this->m_pTextBoxBGMR = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3a954713,(EFile *)0x0,0);
  this->m_pTextBoxBGBR = pEVar20;
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMenuBevelShdr = pEVar20;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar20 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x39b9b2bf,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pWhiteLight = pEVar20;
  if (this->m_nNeighborhoodMode != 2) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_d0 = 0.0;
    puVar1 = (undefined *)((int)&(this->m_lights).field0_0x0.a.vColor.field0_0x0 + 7);
                    /* end of inlined section */
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x3f19999a3f19999aU >> (7 - uVar10) * 8;
    uVar10 = (uint)&this->m_lights & 7;
    puVar11 = (ulong *)((int)&this->m_lights - uVar10);
    *puVar11 = 0x3f19999a3f19999a << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8
    ;
    (this->m_lights).field0_0x0.a.vColor.field0_0x0.d[2] = 0.6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    drawWin.right = 1.0;
    drawWin.top = 1.0;
    drawWin.left = 1.0;
    puVar1 = (undefined *)((int)&(this->m_lights).d[0].vColor.field0_0x0 + 7);
                    /* end of inlined section */
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x3f8000003f800000U >> (7 - uVar10) * 8;
    pEVar2 = (this->m_lights).d;
    uVar10 = (uint)pEVar2 & 7;
    puVar11 = (ulong *)((int)pEVar2 - uVar10);
    *puVar11 = 0x3f8000003f800000 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8
    ;
    (this->m_lights).d[0].vColor.field0_0x0.d[2] = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    (this->m_lights).d[0].vDir.field0_0x0.d[0] = 0.0;
    (this->m_lights).d[0].vDir.field0_0x0.d[2] = -2.0;
    (this->m_lights).d[0].vDir.field0_0x0.d[1] = 1.0;
    fVar28 = (this->m_lights).d[0].vDir.field0_0x0.d[0];
    fVar28 = sqrtf(fVar28 * fVar28 + 1.0 + 4.0);
    if (fVar28 != local_d0) {
      fVar28 = 1.0 / fVar28;
      (this->m_lights).d[0].vDir.field0_0x0.d[0] =
           (this->m_lights).d[0].vDir.field0_0x0.d[0] * fVar28;
      fVar36 = (this->m_lights).d[0].vDir.field0_0x0.d[2];
      (this->m_lights).d[0].vDir.field0_0x0.d[1] =
           (this->m_lights).d[0].vDir.field0_0x0.d[1] * fVar28;
      (this->m_lights).d[0].vDir.field0_0x0.d[2] = fVar36 * fVar28;
                    /* end of inlined section */
    }
    fVar28 = (this->m_vModelPos).field0_0x0.d[0];
    fVar36 = (this->m_vModelPos).field0_0x0.d[1];
    fVar30 = (this->m_vTextGapSize).field0_0x0.d[1];
    drawWin.top = fVar36 + fVar30;
    drawWin.left = fVar28 + 14.0 / fVar29;
    drawWin.bottom = (fVar36 + (this->m_vModelSize).field0_0x0.d[1]) - fVar30;
    drawWin.right = (fVar28 + (this->m_vModelSize).field0_0x0.d[0]) - fVar37 / fVar29;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    pEVar8 = (_pGfx->field0_0x0).__vtable;
    fVar37 = (float)(*(code *)pEVar8[0xd].EGlobalManagerClient)
                              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar8 + 0xd));
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    SetProjection__9E3DWindowffff
              (&this->m_win,40.0,
               (fVar37 * (drawWin.right - drawWin.left)) / (drawWin.bottom - drawWin.top),0.3,200.0)
    ;
    SetViewport__9E3DWindowRCt5TRect1Zf(&this->m_win,&drawWin);
    pEVar8 = (_pGfx->field0_0x0).__vtable;
    uVar23 = (*(code *)pEVar8[6].EGlobalManagerClient)
                       ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar8 + 6),1);
    Rect__10EPrimitiveP3ERCff((ERC *)uVar23,2.0,2.0);
    pEVar8 = (_pGfx->field0_0x0).__vtable;
    pEVar21 = (EDL *)(*(code *)pEVar8[6].ManagedShutdown)
                               ((int)&(_pGfx->field0_0x0).__vtable +
                                (int)*(short *)&pEVar8[6].ManagedStartup,uVar23);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    iVar26 = 7;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    ppEVar25 = this->m_pModels + 7;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    this->m_pGround = pEVar21;
    puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 |
               CONCAT44(0xc0800000,local_d0) >> (7 - uVar10) * 8;
    uVar10 = (uint)&this->m_vEye & 7;
    puVar11 = (ulong *)((int)&this->m_vEye - uVar10);
    *puVar11 = CONCAT44(0xc0800000,local_d0) << uVar10 * 8 |
               *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    (this->m_vEye).field0_0x0.d[2] = 4.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_c8 = 0x3f800000;
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    puVar11 = (ulong *)(puVar1 + -uVar10);
    *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | CONCAT44(local_d0,local_d0) >> (7 - uVar10) * 8;
    uVar10 = (uint)&this->m_vTarget & 7;
    puVar11 = (ulong *)((int)&this->m_vTarget - uVar10);
    *puVar11 = CONCAT44(local_d0,local_d0) << uVar10 * 8 |
               *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    (this->m_vTarget).field0_0x0.d[2] = 1.0;
    do {
      *ppEVar25 = (ERModel *)0x0;
      iVar26 = iVar26 + -1;
      ppEVar25 = ppEVar25 + -1;
    } while (-1 < iVar26);
    this->m_fAngle = 0.0;
    local_cc = local_d0;
  }
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  drawWin.right = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_c0 = (this->m_TriIcon).m_def.__vtable;
  drawWin.bottom = 1.401298e-45;
  local_e0.left = 0.0;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_trigger + 3);
  uVar10 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar10) * 8;
  pEVar3 = &(this->m_TriIcon).m_def;
  uVar10 = (uint)pEVar3 & 7;
  puVar11 = (ulong *)((int)pEVar3 - uVar10);
  *puVar11 = -0xffffffff << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_colorIdx + 3);
  uVar10 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x100000000U >> (7 - uVar10) * 8;
  piVar24 = &(this->m_TriIcon).m_def.m_selColorIdx;
  uVar10 = (uint)piVar24 & 7;
  puVar11 = (ulong *)((int)piVar24 - uVar10);
  *puVar11 = 0x100000000 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.__vtable + 3);
  uVar10 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x3a890800000000U >> (7 - uVar10) * 8;
  ppEVar4 = &(this->m_TriIcon).m_def.m_pCtrl;
  uVar10 = (uint)ppEVar4 & 7;
  puVar11 = (ulong *)((int)ppEVar4 - uVar10);
  *puVar11 = 0x3a890800000000 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  local_e0.top = (float)_vt_10EUIIconDef;
  (this->m_TriIcon).m_def.__vtable = local_c0;
                    /* end of inlined section */
  iVar26 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  drawWin.left = 0.05;
                    /* end of inlined section */
  drawWin.top = 32.0 / (float)iVar26;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[2] = drawWin.top;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_00,0x2ccf500a);
  InitInActiveShader__7EUIIconi(this_00,0x2ccf500a);
  pEVar9 = this->m_PromptsBack[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar7 = *(short *)&pEVar9[2].StateChanged;
  psVar22 = GetUiString__7EGlobalPCc(&_globals,"back");
  (*(code *)pEVar9[2].OnButtonRepeat)
            ((int)(this_01->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar7 + 4,
             psVar22,0x20);
  AddIcon__9EUIPromptP7EUIIcon(this_01,this_00);
  Init__10EPromptBar(&this->m_PromptBarBack);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  drawWin.left = (_13EUIObjectNode_SAFE_RIGHT + 0.178) * 0.5;
  drawWin.top = _13EUIObjectNode_SAFE_BOTTOM - 23.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(&this->m_PromptBarBack,this_01,1,(EVec2 *)&drawWin);
  return;
}

void EPauseItemInfo::Reset() {
	int i;
	
  EGlobalManagerClient__vtable *pEVar1;
  EWindow *pEVar2;
  int iVar3;
  ERShader *pEVar4;
  bool *pbVar5;
  bool *pbVar6;
  uint *puVar7;
  int iVar8;
  
  while( true ) {
    pbVar5 = this->m_bNeedDelRefModels;
    if (this->m_pFont == (ERFont *)0x0) break;
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
  pbVar6 = this->m_bNeedDelRefModel2s;
  while (this->m_pUpArrowShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pUpArrowShader->field0_0x0);
    this->m_pUpArrowShader = (ERShader *)0x0;
  }
  pEVar4 = this->m_pDownArrowShader;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pDownArrowShader = (ERShader *)0x0;
    pEVar4 = this->m_pDownArrowShader;
  }
  pEVar4 = this->m_pLeftArrowShader;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pLeftArrowShader = (ERShader *)0x0;
    pEVar4 = this->m_pLeftArrowShader;
  }
  pEVar4 = this->m_pRightArrowShader;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pRightArrowShader = (ERShader *)0x0;
    pEVar4 = this->m_pRightArrowShader;
  }
  pEVar4 = this->m_pBlankShdr;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pBlankShdr = (ERShader *)0x0;
    pEVar4 = this->m_pBlankShdr;
  }
  pEVar4 = this->m_pTextBoxBGBC;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pTextBoxBGBC = (ERShader *)0x0;
    pEVar4 = this->m_pTextBoxBGBC;
  }
  pEVar4 = this->m_pTextBoxBGMR;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pTextBoxBGMR = (ERShader *)0x0;
    pEVar4 = this->m_pTextBoxBGMR;
  }
  pEVar4 = this->m_pTextBoxBGBR;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pTextBoxBGBR = (ERShader *)0x0;
    pEVar4 = this->m_pTextBoxBGBR;
  }
  pEVar4 = this->m_pMenuBevelShdr;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pMenuBevelShdr = (ERShader *)0x0;
    pEVar4 = this->m_pMenuBevelShdr;
  }
  pEVar4 = this->m_pWhiteLight;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pWhiteLight = (ERShader *)0x0;
    pEVar4 = this->m_pWhiteLight;
  }
  if (this->m_nNeighborhoodMode != 2) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[7].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 7),this->m_pGround);
    pEVar2 = this->m_pWin;
    if (pEVar2 != (EWindow *)0x0) {
      (*(code *)pEVar2->__vtable->WindowMatrixChanged)
                ((int)&(pEVar2->m_mWindow).field0_0x0 + (int)*(short *)&pEVar2->__vtable->Select,3);
    }
    this->m_pWin = (EWindow *)0x0;
  }
  puVar7 = this->m_nModelId2s;
  iVar8 = 7;
  do {
    if (*(int *)pbVar5 == 0) {
      iVar3 = *(int *)pbVar6;
    }
    else {
      DelRef__16EResourceManagerUi(&_modelman.field0_0x0,puVar7[-8]);
      *(int *)pbVar5 = 0;
      iVar3 = *(int *)pbVar6;
    }
    if (iVar3 != 0) {
      DelRef__16EResourceManagerUi(&_modelman.field0_0x0,*puVar7);
      *(int *)pbVar6 = 0;
    }
    puVar7 = puVar7 + 1;
    pbVar6 = pbVar6 + 4;
    iVar8 = iVar8 + -1;
    pbVar5 = pbVar5 + 4;
  } while (-1 < iVar8);
  Reset__10EPromptBar(&this->m_PromptBarBack);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_PromptsBack);
  return;
}

void EPauseItemInfo::Draw(ERC *prc) {
	EUIObjectNode *this;
	
  EUIVirtualCtrl__vtable *pEVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float local_90;
  float local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 1 & 1U) == 0) {
    return;
  }
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
  if (this->m_nDialogMode == 0) {
    DrawBuyBuildMode__14EPauseItemInfoP3ERC(this,prc);
    uVar4 = this->m_nDialogMode;
LAB_001ab33c:
    if (uVar4 == 1) {
      if (this->m_nDisplayMode != 0) goto LAB_001ab634;
      uVar4 = this->m_nLinesScrolled;
    }
    else {
      uVar4 = this->m_nLinesScrolled;
    }
  }
  else {
    if (this->m_nDialogMode == 1) {
      DrawGoalsMode__14EPauseItemInfoP3ERC(this,prc);
      uVar4 = this->m_nDialogMode;
      goto LAB_001ab33c;
    }
    uVar4 = this->m_nLinesScrolled;
  }
  if (uVar4 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
    _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
                    /* end of inlined section */
    iVar2 = *(int *)&this->m_bMoreDown;
  }
  else {
    Select__8ERShaderP3ERCi(this->m_pUpArrowShader,prc,0);
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar3 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,
                       _globals.m_whichPlayerPaused,0x1000);
    if (lVar3 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_8c = (this->m_vTextPos).field0_0x0.d[1] + (this->m_vTextGapSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_90 = ((this->m_vTextPos).field0_0x0.d[0] + (this->m_vTextSize).field0_0x0.d[0] * 0.5) -
                 (this->m_vArrowSize).field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_70 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_6c = 0x3f800000;
      local_54 = 0x3f800000;
      local_58 = 0x3f800000;
      local_5c = 0x3f800000;
      local_60 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_90,&local_70
                 ,&local_60);
    }
    else {
                    /* end of inlined section */
      local_8c = (this->m_vTextPos).field0_0x0.d[1] + (this->m_vTextGapSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_90 = ((this->m_vTextPos).field0_0x0.d[0] + (this->m_vTextSize).field0_0x0.d[0] * 0.5) -
                 (this->m_vArrowSize).field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_80 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_7c = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_90,&local_80
                 ,0x35f520);
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
    _11EPausePanel_m_pDPadUp = _7DPadWin_m_pUpShdr;
                    /* end of inlined section */
    iVar2 = *(int *)&this->m_bMoreDown;
  }
  if (iVar2 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
    _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
                    /* end of inlined section */
  }
  else {
    Select__8ERShaderP3ERCi(this->m_pDownArrowShader,prc,0);
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar3 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,
                       _globals.m_whichPlayerPaused,0x4000);
    if (lVar3 == 0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_90 = ((this->m_vTextPos).field0_0x0.d[0] + (this->m_vTextSize).field0_0x0.d[0] * 0.5) -
                 (this->m_vArrowSize).field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_80 = 0x3f800000;
                    /* end of inlined section */
      local_8c = (((this->m_vTextPos).field0_0x0.d[1] + (this->m_vTextSize).field0_0x0.d[1]) -
                 (this->m_vTextGapSize).field0_0x0.d[1]) - (this->m_vArrowSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_7c = 0x3f800000;
      local_44 = 0x3f800000;
      local_48 = 0x3f800000;
      local_4c = 0x3f800000;
      local_50 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_90,&local_80
                 ,&local_50);
    }
    else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_90 = ((this->m_vTextPos).field0_0x0.d[0] + (this->m_vTextSize).field0_0x0.d[0] * 0.5) -
                 (this->m_vArrowSize).field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_80 = 0x3f800000;
                    /* end of inlined section */
      local_8c = (((this->m_vTextPos).field0_0x0.d[1] + (this->m_vTextSize).field0_0x0.d[1]) -
                 (this->m_vTextGapSize).field0_0x0.d[1]) - (this->m_vArrowSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_7c = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_90,&local_80
                 ,0x35f520);
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
    _11EPausePanel_m_pDPadDown = _7DPadWin_m_pDownShdr;
                    /* end of inlined section */
  }
LAB_001ab634:
  Draw__13EUIObjectNodeP3ERC(&this->field0_0x0,prc);
  return;
}

void EPauseItemInfo::DrawGoalsMode(ERC *prc) {
	EVec2 vScreen;
	EVec2 vInteriorSize;
	EVec2 vShaderSize;
	EGraphics *this;
	float y;
	float y;
	float x;
	ERQuickdata *pSimsUIData;
	ERFont *this;
	HouseData *pHouseData;
	u16 nBitMask;
	ERQuickdata *this;
	int i;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ELocString *this;
	ChallengeData *pChallengeData;
	ERQuickdata *this;
	int i;
	ELocString *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	
  undefined *puVar1;
  byte bVar2;
  ushort uVar3;
  EWindow__vtable *pEVar4;
  EUIVirtualCtrl__vtable *pEVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  EWindow *pEVar10;
  ERQuickdata *this_00;
  void *pvVar11;
  short *psVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ERFont *pEVar18;
  ERShader *this_01;
  int iVar19;
  undefined8 unaff_s0;
  uint uVar20;
  undefined8 unaff_s1;
  uint uVar21;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  EVec2 vScreen;
  EVec2 vInteriorSize;
  EVec2 vShaderSize;
  TRect_float_ local_140;
  float local_130;
  float local_12c;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  float local_10c;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  float local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
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
  
                    /* inlined from /eor/src2/engine/e_graphics.h */
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
                    /* end of inlined section */
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar25 = (float)_pGfx->m_yscreen;
  fVar26 = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar23 = (this->field0_0x0).m_WDH.field0_0x0.d[2] - 48.0 / fVar25;
  fVar24 = (this->field0_0x0).m_WDH.field0_0x0.d[0] - 48.0 / fVar26;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  if (this->m_nDisplayMode - 1 < 2) {
                    /* inlined from /eor/src2/engine/window/e_window.h */
    pEVar10 = (EWindow *)_memmanAlloc__FUiUi(0xa0,0x10);
                    /* end of inlined section */
    pEVar10 = __7EWindow(pEVar10);
    local_140.top = (this->m_vBoxEndPos).field0_0x0.d[1];
    fVar22 = (this->m_vBoxEndPos).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
    local_140.left = 0.0;
                    /* end of inlined section */
    this->m_pClipWin = pEVar10;
    local_140.right = fVar22 + fVar24 + 33.0 / fVar26;
    local_140.bottom = local_140.top + fVar23 + 33.0 / fVar25;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    SetClip__7EWindowRCt5TRect1Zf(pEVar10,&local_140);
    pEVar4 = this->m_pClipWin->__vtable;
    (*(code *)pEVar4->OutputCoordinatesChanged)
              ((int)&(this->m_pClipWin->m_mWindow).field0_0x0 +
               (int)*(short *)&pEVar4->InputCoordinatesChanged,prc);
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_140.top = (this->m_vBoxAnimatePos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_130 = (this->m_vBoxAnimatePos).field0_0x0.d[0] + fVar24;
  local_12c = local_140.top + fVar23;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_140.left = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_120 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_10c = 0.0;
  local_110 = 0x3f800000;
                    /* end of inlined section */
  fVar22 = 0.0;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_140,
             (EVec2 *)&local_130,&local_120,&local_110,0x35f4b0);
  Select__8ERShaderP3ERCi(this->m_pTextBoxBGBC,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  local_140.top = (this->m_vBoxAnimatePos).field0_0x0.d[1] + fVar23;
  local_130 = (this->m_vBoxAnimatePos).field0_0x0.d[0] + fVar24;
  local_12c = local_140.top + 32.0 / fVar25;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = 0x3f800000;
  local_f0 = 0x3f800000;
  local_d4 = 0x3f800000;
  local_d8 = 0x3f800000;
  local_dc = 0x3f800000;
  local_e0 = 0x3f800000;
                    /* end of inlined section */
  local_140.left = fVar22;
  local_100 = fVar22;
  local_ec = fVar22;
  (*(code *)prc->__vtable[1].DisplayList)
            (fVar22,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_140,
             (EVec2 *)&local_130,&local_100,&local_f0,&local_e0);
  Select__8ERShaderP3ERCi(this->m_pTextBoxBGMR,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_140.top = (this->m_vBoxAnimatePos).field0_0x0.d[1];
                    /* end of inlined section */
  local_140.left = (this->m_vBoxAnimatePos).field0_0x0.d[0] + fVar24;
  local_12c = local_140.top + fVar23;
  local_130 = local_140.left + 32.0 / fVar26;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = 1.0;
  local_110 = 0x3f800000;
  local_c4 = 0x3f800000;
  local_c8 = 0x3f800000;
  local_cc = 0x3f800000;
  local_d0 = 0x3f800000;
                    /* end of inlined section */
  local_120 = fVar22;
  local_10c = fVar22;
  (*(code *)prc->__vtable[1].DisplayList)
            (fVar22,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_140,
             (EVec2 *)&local_130,&local_120,&local_110,&local_d0);
  Select__8ERShaderP3ERCi(this->m_pTextBoxBGBR,prc,0);
  local_140.left = (this->m_vBoxAnimatePos).field0_0x0.d[0] + fVar24;
  local_140.top = (this->m_vBoxAnimatePos).field0_0x0.d[1] + fVar23;
  local_130 = local_140.left + 32.0 / fVar26;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_12c = local_140.top + 32.0 / fVar25;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = 1.0;
  local_110 = 0x3f800000;
  local_f4 = 0x3f800000;
  local_f8 = 0x3f800000;
  local_fc = 0x3f800000;
  local_100 = 1.0;
                    /* end of inlined section */
  local_120 = fVar22;
  local_10c = fVar22;
  (*(code *)prc->__vtable[1].DisplayList)
            (fVar22,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_140,
             (EVec2 *)&local_130,&local_120,&local_110,&local_100);
  if (this->m_nDisplayMode - 1 < 2) {
    SelectWin__7EGlobalP3ERC(&_globals,prc);
    pEVar10 = this->m_pClipWin;
    if (pEVar10 != (EWindow *)0x0) {
      (*(code *)pEVar10->__vtable->WindowMatrixChanged)
                ((int)&(pEVar10->m_mWindow).field0_0x0 + (int)*(short *)&pEVar10->__vtable->Select,3
                );
    }
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar23 = 1.0;
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_140.left = (this->m_vBottomPos).field0_0x0.d[0] + (this->m_vBottomSize).field0_0x0.d[0];
  local_140.top = (this->m_vBottomPos).field0_0x0.d[1] + (this->m_vBottomSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130 = 0.0;
                    /* end of inlined section */
  local_12c = fVar23;
  local_120 = fVar23;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&this->m_vBottomPos,
             &local_140,(EVec2 *)&local_130,&local_120,0x35f4b0);
  Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_140.left = (this->m_vBottomPos).field0_0x0.d[0];
                    /* end of inlined section */
  local_130 = (this->m_vBottomSize).field0_0x0.d[0] * fVar26 * 0.00390625;
  local_140.top = (this->m_vBottomPos).field0_0x0.d[1] - 4.0 / fVar25;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_12c = 0.5;
                    /* end of inlined section */
  local_120 = fVar23;
  local_11c = fVar23;
  local_118 = fVar23;
  local_114 = fVar23;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_140,
             (EVec2 *)&local_130,&local_120);
  if (this->m_nDisplayMode != 0) {
    return;
  }
  DrawTextBox__10EDialogWinP3ERCffff
            (prc,(this->m_vHeaderPos).field0_0x0.d[0],(this->m_vHeaderPos).field0_0x0.d[1],
             (this->m_vHeaderSize).field0_0x0.d[0],fVar23);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  local_140.left = fVar23;
  local_140.top = fVar23;
  local_140.right = fVar23;
  local_140.bottom = fVar23;
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,(this->m_vTextPos).field0_0x0.d[0],(this->m_vTextPos).field0_0x0.d[1],
             (this->m_vTextSize).field0_0x0.d[1],(this->m_vTextSize).field0_0x0.d[0],fVar23,
             (EVec4 *)&local_140);
  if (this->m_nNeighborhoodMode != 2) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_140.left = fVar23;
    local_140.top = fVar23;
    local_140.right = fVar23;
    local_140.bottom = fVar23;
    DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
              (prc,(this->m_vModelPos).field0_0x0.d[0],(this->m_vModelPos).field0_0x0.d[1],
               (this->m_vModelSize).field0_0x0.d[1],(this->m_vModelSize).field0_0x0.d[0],fVar23,
               (EVec4 *)&local_140);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_140.left = 0.527;
    local_140.top = 0.574;
    local_140.right = 0.773;
                    /* end of inlined section */
    local_140.bottom = fVar23;
    DrawBigHighlightBox__10SimInfoWinP3ERCffffG5EVec4f
              (prc,(this->m_vModelPos).field0_0x0.d[0],(this->m_vModelPos).field0_0x0.d[1],
               (this->m_vModelSize).field0_0x0.d[1],(this->m_vModelSize).field0_0x0.d[0],
               (EVec4 *)&local_140,fVar23);
    DrawTextBox__10EDialogWinP3ERCffff
              (prc,(this->m_vStatsPos).field0_0x0.d[0],(this->m_vStatsPos).field0_0x0.d[1],
               (this->m_vStatsSize).field0_0x0.d[0],fVar23);
  }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  SetSize__6ERFontffb(this->m_pFont,16.0,fVar23,true);
  uVar17 = _WHITE.field0_0x0.d[3];
  uVar16 = _WHITE.field0_0x0.d[2];
  uVar14 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar18 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar18->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar18->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar14 >> 0x20);
  (pEVar18->m_vColor).field0_0x0.d[2] = uVar16;
  (pEVar18->m_vColor).field0_0x0.d[3] = uVar17;
                    /* end of inlined section */
  pEVar4 = this->m_pWin->__vtable;
  (*(code *)pEVar4->OutputCoordinatesChanged)
            ((int)&(this->m_pWin->m_mWindow).field0_0x0 +
             (int)*(short *)&pEVar4->InputCoordinatesChanged,prc);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
  local_140.left = (this->m_vTextPos).field0_0x0.d[0] + (this->m_vTextGapSize).field0_0x0.d[0];
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
  local_140.top =
       (this->m_vTextPos).field0_0x0.d[1] + (this->m_vTextGapSize).field0_0x0.d[1] +
       (this->m_vArrowSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_vCurTextPos).field0_0x0 + 7);
  uVar20 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar20);
  *puVar6 = *puVar6 & -1L << (uVar20 + 1) * 8 |
            CONCAT44(local_140.top,local_140.left) >> (7 - uVar20) * 8;
  uVar20 = (uint)&this->m_vCurTextPos & 7;
  puVar6 = (ulong *)((int)&this->m_vCurTextPos - uVar20);
  *puVar6 = CONCAT44(local_140.top,local_140.left) << uVar20 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar20) * 8;
  *(undefined4 *)&this->m_bMoreDown = 0;
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  this->m_nSkippedLines = 0;
  this_00 = (ERQuickdata *)
            AddRef__16EResourceManagerUiP5EFilei
                      (&_quickdataman.field0_0x0,0xa173a1ee,(EFile *)0x0,0);
                    /* end of inlined section */
  if (this->m_nNeighborhoodMode == 2) {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
    iVar19 = 0;
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pvVar11 = getTable__11ERQuickdataPCc(this_00,"ChallengeData");
                    /* end of inlined section */
    iVar13 = *(int *)((int)pvVar11 + 4);
    bVar2 = this->m_nHouseNum;
    while( true ) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      this->m_sText = **(short ***)(iVar19 * 4 + (uint)bVar2 * 100 + iVar13 + 0x14);
      DrawText__14EPauseItemInfoP3ERC(this,prc);
      if (*this->m_sText != 0) {
        psVar12 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"just_a_space");
        this->m_sText = psVar12;
        DrawText__14EPauseItemInfoP3ERC(this,prc);
      }
      iVar19 = iVar19 + 1;
      if (0xf < iVar19) break;
      bVar2 = this->m_nHouseNum;
    }
  }
  else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pvVar11 = getTable__11ERQuickdataPCc(this_00,"HouseData");
                    /* end of inlined section */
    uVar21 = 1;
    iVar13 = *(int *)((int)pvVar11 + 4);
    uVar20 = 0;
    uVar3 = this->m_nDisplayFlags;
    uVar27 = _CYAN.field0_0x0.d[0];
    while( true ) {
      if ((uVar3 & uVar21) != 0) {
        if (((ushort)this->m_nCompletedFlags & uVar21) == 0) {
          if (uVar20 == this->m_nModelGoalAssociations[this->m_nLockableModelIndex]) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            pEVar18 = this->m_pFont;
            uVar14 = CONCAT44(_CYAN.field0_0x0.d[1],_CYAN.field0_0x0.d[0]);
            uVar16 = _CYAN.field0_0x0.d[2];
            uVar17 = _CYAN.field0_0x0.d[3];
                    /* end of inlined section */
          }
          else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            pEVar18 = this->m_pFont;
            uVar14 = _WHITE.field0_0x0._0_8_;
            uVar16 = _WHITE.field0_0x0.d[2];
            uVar17 = _WHITE.field0_0x0.d[3];
          }
        }
        else if (uVar20 == this->m_nModelGoalAssociations[this->m_nLockableModelIndex]) {
          local_140.left = uVar27 * 0.5;
          local_140.top = _CYAN.field0_0x0.d[1] * 0.5;
          local_140.right = _CYAN.field0_0x0.d[2] * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          pEVar18 = this->m_pFont;
          uVar14 = CONCAT44(local_140.top,local_140.left);
          uVar16 = local_140.right;
          uVar17 = fVar23;
          local_140.bottom = fVar23;
                    /* end of inlined section */
        }
        else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          pEVar18 = this->m_pFont;
          uVar14 = _GREAY.field0_0x0._0_8_;
          uVar16 = _GREAY.field0_0x0.d[2];
          uVar17 = _GREAY.field0_0x0.d[3];
                    /* end of inlined section */
        }
        (pEVar18->m_vColor).field0_0x0.d[0] = (float)uVar14;
        (pEVar18->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar14 >> 0x20);
        (pEVar18->m_vColor).field0_0x0.d[2] = uVar16;
        (pEVar18->m_vColor).field0_0x0.d[3] = uVar17;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        this->m_sText = **(short ***)(uVar20 * 4 + (uint)this->m_nHouseNum * 0x58 + iVar13 + 0x18);
        DrawText__14EPauseItemInfoP3ERC(this,prc);
        if (*this->m_sText != 0) {
          psVar12 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"just_a_space");
          this->m_sText = psVar12;
          DrawText__14EPauseItemInfoP3ERC(this,prc);
        }
      }
      uVar20 = uVar20 + 1;
      uVar21 = (uVar21 & 0x7fff) << 1;
      if (0xf < (int)uVar20) break;
      uVar3 = this->m_nDisplayFlags;
    }
  }
  DelRef__16EResourceManagerUi(&_quickdataman.field0_0x0,0xa173a1ee);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  SelectWin__7EGlobalP3ERC(&_globals,prc);
  uVar17 = _WHITE.field0_0x0.d[3];
  uVar16 = _WHITE.field0_0x0.d[2];
  uVar14 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar18 = this->m_pFont;
  (pEVar18->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar18->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar14 >> 0x20);
  (pEVar18->m_vColor).field0_0x0.d[2] = uVar16;
  (pEVar18->m_vColor).field0_0x0.d[3] = uVar17;
                    /* end of inlined section */
  local_140.left = (this->m_vHeaderPos).field0_0x0.d[0] + (this->m_vTextGapSize).field0_0x0.d[0];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_140.top = (this->m_vHeaderPos).field0_0x0.d[1] + (this->m_vTextGapSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  local_130 = local_140.left;
  local_12c = local_140.top;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,this->m_sName,true,(EVec2 *)&local_130,E_FAX_LEFT,E_FAY_TOP,
             (EVec2 *)0x0);
  uVar9 = _RED.field0_0x0.d[3];
  uVar8 = _RED.field0_0x0.d[2];
  uVar7 = _RED.field0_0x0._0_8_;
  uVar17 = _WHITE.field0_0x0.d[3];
  uVar16 = _WHITE.field0_0x0.d[2];
  uVar14 = _WHITE.field0_0x0._0_8_;
                    /* end of inlined section */
  if (this->m_nNeighborhoodMode == 2) {
    iVar13 = *(int *)&this->m_bModelPreloadDone;
LAB_001ac3a8:
    if (iVar13 != 0) goto LAB_001ac3c4;
    uVar3 = this->m_nNeighborhoodMode;
  }
  else {
    if (*(int *)(this->m_bModelsLocked + (uint)this->m_nLockableModelIndex * 4) == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar18 = this->m_pFont;
                    /* end of inlined section */
                    /* end of inlined section */
      (pEVar18->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
      (pEVar18->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar14 >> 0x20);
      (pEVar18->m_vColor).field0_0x0.d[2] = uVar16;
      (pEVar18->m_vColor).field0_0x0.d[3] = uVar17;
      psVar12 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"unlocked_status");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_140.left =
           (this->m_vStatsPos).field0_0x0.d[0] + (this->m_vStatsSize).field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_140.top =
           (this->m_vStatsPos).field0_0x0.d[1] + (this->m_vStatsSize).field0_0x0.d[1] * 0.5;
      local_130 = local_140.left;
      local_12c = local_140.top;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar12,true,(EVec2 *)&local_130,E_FAX_CENTER,E_FAY_CENTER,
                 (EVec2 *)0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    }
    else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar18 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
      (pEVar18->m_vColor).field0_0x0.d[0] = (float)_RED.field0_0x0._0_8_;
      (pEVar18->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar7 >> 0x20);
      (pEVar18->m_vColor).field0_0x0.d[2] = uVar8;
      (pEVar18->m_vColor).field0_0x0.d[3] = uVar9;
      psVar12 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"locked_status");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_140.left =
           (this->m_vStatsPos).field0_0x0.d[0] + (this->m_vStatsSize).field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_140.top =
           (this->m_vStatsPos).field0_0x0.d[1] + (this->m_vStatsSize).field0_0x0.d[1] * 0.5;
      local_130 = local_140.left;
      local_12c = local_140.top;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar12,true,(EVec2 *)&local_130,E_FAX_CENTER,E_FAY_CENTER,
                 (EVec2 *)0x0);
                    /* end of inlined section */
    }
    uVar17 = _WHITE.field0_0x0.d[3];
    uVar16 = _WHITE.field0_0x0.d[2];
    uVar14 = _WHITE.field0_0x0._0_8_;
    pEVar18 = this->m_pFont;
    (pEVar18->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar18->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar14 >> 0x20);
    (pEVar18->m_vColor).field0_0x0.d[2] = uVar16;
    (pEVar18->m_vColor).field0_0x0.d[3] = uVar17;
                    /* end of inlined section */
    if (*(int *)&this->m_bModelPreloadDone != 0) {
      DrawModel__14EPauseItemInfoP3ERC(this,prc);
      Select__8ERShaderP3ERCi(this->m_pLeftArrowShader,prc,0);
      pEVar5 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar15 = (**(code **)(pEVar5 + 1))
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar5->GetBut + -4,
                          _globals.m_whichPlayerPaused,0x8000);
      if (lVar15 == 0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_120 = 1.0;
        local_12c = 1.0;
                    /* end of inlined section */
        local_140.left = (this->m_vModelPos).field0_0x0.d[0] + 4.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_130 = 1.0;
                    /* end of inlined section */
        local_140.top =
             ((this->m_vModelPos).field0_0x0.d[1] + (this->m_vModelSize).field0_0x0.d[1] * 0.5) -
             16.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_114 = 1.0;
        local_118 = 1.0;
        local_11c = 1.0;
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].ClipRect)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_140,
                   (EVec2 *)&local_130,&local_120);
        this_01 = this->m_pRightArrowShader;
      }
      else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_130 = 1.0;
        local_12c = 1.0;
                    /* end of inlined section */
        local_140.left = (this->m_vModelPos).field0_0x0.d[0] + 4.0 / (float)_pGfx->m_xscreen;
        local_140.top =
             ((this->m_vModelPos).field0_0x0.d[1] + (this->m_vModelSize).field0_0x0.d[1] * 0.5) -
             16.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].ClipRect)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_140,
                   (EVec2 *)&local_130,0x35f520);
        this_01 = this->m_pRightArrowShader;
      }
      Select__8ERShaderP3ERCi(this_01,prc,0);
      pEVar5 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar15 = (**(code **)(pEVar5 + 1))
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar5->GetBut + -4,
                          _globals.m_whichPlayerPaused,0x2000);
      if (lVar15 == 0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        local_140.left =
             ((this->m_vModelPos).field0_0x0.d[0] + (this->m_vModelSize).field0_0x0.d[0]) -
             12.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_120 = 1.0;
                    /* end of inlined section */
        local_140.top =
             ((this->m_vModelPos).field0_0x0.d[1] + (this->m_vModelSize).field0_0x0.d[1] * 0.5) -
             16.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_12c = 1.0;
        local_130 = 1.0;
        local_114 = 1.0;
        local_118 = 1.0;
        local_11c = 1.0;
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].ClipRect)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_140,
                   (EVec2 *)&local_130,&local_120);
        iVar13 = *(int *)&this->m_bModelPreloadDone;
      }
      else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_130 = 1.0;
                    /* end of inlined section */
        local_140.left =
             ((this->m_vModelPos).field0_0x0.d[0] + (this->m_vModelSize).field0_0x0.d[0]) -
             12.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_12c = 1.0;
                    /* end of inlined section */
        local_140.top =
             ((this->m_vModelPos).field0_0x0.d[1] + (this->m_vModelSize).field0_0x0.d[1] * 0.5) -
             16.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].ClipRect)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_140,
                   (EVec2 *)&local_130,0x35f520);
        iVar13 = *(int *)&this->m_bModelPreloadDone;
      }
      goto LAB_001ac3a8;
    }
    uVar3 = this->m_nNeighborhoodMode;
  }
  if (uVar3 != 2) {
    return;
  }
LAB_001ac3c4:
  Draw__10EPromptBarP3ERC(&this->m_PromptBarBack,prc);
  return;
}

void EPauseItemInfo::DrawBuyBuildMode(ERC *prc) {
	EVec2 vBigBoxTL;
	EVec2 vBigBoxBR;
	float x;
	float y;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EVec2 *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	
  undefined *puVar1;
  ERFont *pEVar2;
  EWindow__vtable *pEVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  short *szString;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float _t;
  float _l;
  EVec2 vBigBoxTL;
  EVec2 vBigBoxBR;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
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
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  _t = (this->field0_0x0).m_pos.field0_0x0.d[2];
  _l = (this->field0_0x0).m_pos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  DrawBigBox__10EDialogWinP3ERCfffff
            (prc,_l,_t,_l + (this->field0_0x0).m_WDH.field0_0x0.d[0],
             _t + (this->field0_0x0).m_WDH.field0_0x0.d[2],1.0);
  DrawTextBox__10EDialogWinP3ERCffff
            (prc,(this->m_vHeaderPos).field0_0x0.d[0],(this->m_vHeaderPos).field0_0x0.d[1],
             (this->m_vHeaderSize).field0_0x0.d[0],1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_94 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_98 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_9c = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_a0 = 1.0;
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,(this->m_vTextPos).field0_0x0.d[0],(this->m_vTextPos).field0_0x0.d[1],
             (this->m_vTextSize).field0_0x0.d[1],(this->m_vTextSize).field0_0x0.d[0],1.0,
             (EVec4 *)&local_a0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_94 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_98 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_9c = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_a0 = 1.0;
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,(this->m_vModelPos).field0_0x0.d[0],(this->m_vModelPos).field0_0x0.d[1],
             (this->m_vModelSize).field0_0x0.d[1],(this->m_vModelSize).field0_0x0.d[0],1.0,
             (EVec4 *)&local_a0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_a0 = 0.527;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_9c = 0.574;
  local_98 = 0x3f45e354;
                    /* end of inlined section */
  local_94 = 0x3f800000;
  DrawBigHighlightBox__10SimInfoWinP3ERCffffG5EVec4f
            (prc,(this->m_vModelPos).field0_0x0.d[0],(this->m_vModelPos).field0_0x0.d[1],
             (this->m_vModelSize).field0_0x0.d[1],(this->m_vModelSize).field0_0x0.d[0],
             (EVec4 *)&local_a0,1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_94 = 0x3f800000;
  local_98 = 0x3f800000;
  local_9c = 1.0;
                    /* end of inlined section */
  local_a0 = 1.0;
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,(this->m_vStatsPos).field0_0x0.d[0],(this->m_vStatsPos).field0_0x0.d[1],
             (this->m_vStatsSize).field0_0x0.d[1],(this->m_vStatsSize).field0_0x0.d[0],1.0,
             (EVec4 *)&local_a0);
  Select__6ERFontP3ERC(this->m_pFont,prc);
  SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
  uVar7 = _WHITE.field0_0x0.d[3];
  uVar6 = _WHITE.field0_0x0.d[2];
  uVar5 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar2 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar2->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar2->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar2->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_a0 = (this->m_vHeaderPos).field0_0x0.d[0] + (this->m_vTextGapSize).field0_0x0.d[0];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_9c = (this->m_vHeaderPos).field0_0x0.d[1] + (this->m_vTextGapSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  local_90 = local_a0;
  local_8c = local_9c;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,this->m_sName,true,(EVec2 *)&local_90,E_FAX_LEFT,E_FAY_TOP,
             (EVec2 *)0x0);
                    /* end of inlined section */
  uVar9 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
  if ((uVar9 < this->m_nPrice) &&
     (bVar8 = IsBuildHouseMode__7EGlobal(&_globals), uVar7 = _RED.field0_0x0.d[3],
     uVar6 = _RED.field0_0x0.d[2], uVar5 = _RED.field0_0x0._0_8_, !bVar8)) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar2 = this->m_pFont;
    (pEVar2->m_vColor).field0_0x0.d[0] = (float)_RED.field0_0x0._0_8_;
    (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
    (pEVar2->m_vColor).field0_0x0.d[2] = uVar6;
    (pEVar2->m_vColor).field0_0x0.d[3] = uVar7;
  }
                    /* end of inlined section */
  szString = c_str__C13StringBuffer2(&(this->m_sPrice).field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_a0 = ((this->m_vHeaderPos).field0_0x0.d[0] + (this->m_vHeaderSize).field0_0x0.d[0]) -
             (this->m_vTextGapSize).field0_0x0.d[0];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_9c = (this->m_vHeaderPos).field0_0x0.d[1] + (this->m_vTextGapSize).field0_0x0.d[1];
  local_90 = local_a0;
  local_8c = local_9c;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,szString,true,(EVec2 *)&local_90,E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0);
  uVar7 = _WHITE.field0_0x0.d[3];
  uVar6 = _WHITE.field0_0x0.d[2];
  uVar5 = _WHITE.field0_0x0._0_8_;
  pEVar2 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar2->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
  (pEVar2->m_vColor).field0_0x0.d[2] = uVar6;
  (pEVar2->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
  pEVar3 = this->m_pWin->__vtable;
  (*(code *)pEVar3->OutputCoordinatesChanged)
            ((int)&(this->m_pWin->m_mWindow).field0_0x0 +
             (int)*(short *)&pEVar3->InputCoordinatesChanged,prc);
  local_a0 = (this->m_vTextPos).field0_0x0.d[0] + (this->m_vTextGapSize).field0_0x0.d[0];
  local_9c = (this->m_vTextPos).field0_0x0.d[1] + (this->m_vTextGapSize).field0_0x0.d[1] +
             (this->m_vArrowSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_vCurTextPos).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar9);
  *puVar4 = *puVar4 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_9c,local_a0) >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vCurTextPos & 7;
  puVar4 = (ulong *)((int)&this->m_vCurTextPos - uVar9);
  *puVar4 = CONCAT44(local_9c,local_a0) << uVar9 * 8 |
            *puVar4 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  *(undefined4 *)&this->m_bMoreDown = 0;
  this->m_nSkippedLines = 0;
  DrawText__14EPauseItemInfoP3ERC(this,prc);
  SelectWin__7EGlobalP3ERC(&_globals,prc);
  DrawStats__14EPauseItemInfoP3ERC(this,prc);
  if (*(int *)&this->m_bModelPreloadDone != 0) {
    DrawModel__14EPauseItemInfoP3ERC(this,prc);
  }
  return;
}

void EPauseItemInfo::Update() {
	EUIObjectNode *this;
	EUIObjectMover HermiteBlend;
	EUIObjectMover *this;
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
	EUIObjectMover *this;
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
  EUIVirtualCtrl__vtable *pEVar3;
  EUIObjectNode__vtable *pEVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  uchar uVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  EUIObjectMover HermiteBlend;
  float local_60;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 2 & 1U) == 0) {
    return;
  }
  if (this->m_nDialogMode == 1) {
    if ((this->m_nDisplayMode - 1 < 2) &&
       (fVar14 = this->m_fAnimationTime - _dt, this->m_fAnimationTime = fVar14, fVar14 <= 0.0)) {
      this->m_fAnimationTime = 0.0;
      if (this->m_nDisplayMode == 1) {
        this->m_nDisplayMode = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
        _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
        _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
                    /* end of inlined section */
        if (this->m_nNeighborhoodMode != 2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
          _11EPausePanel_m_pDPadLeft = _7DPadWin_m_pLeftShdr;
          _11EPausePanel_m_pDPadRight = _7DPadWin_m_pRightShdr;
                    /* end of inlined section */
        }
      }
      else {
        this->m_nDisplayMode = 1;
        this->m_fAnimationTime = 0.25;
        pEVar4 = this->m_pReceiver->__vtable;
        (*(code *)pEVar4[1].EUIObjectNode)
                  ((int)&(this->m_pReceiver->m_ChildList).field0_0x0.m_l.m_pHead +
                   (int)*(short *)(pEVar4 + 1),this,0x1b);
      }
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    fVar14 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    HermiteBlend.m_stopt = 0.0;
                    /* end of inlined section */
    HermiteBlend.m_curtime = 0.0;
    if (this->m_nDisplayMode == 1) {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar13 = 0.25 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      if (0.0 <= fVar13) {
        fVar14 = (float)((int)fVar13 * (uint)(fVar13 < 0.25) | (uint)(fVar13 >= 0.25) * 0x3e800000);
      }
      fVar15 = (this->m_vBoxStartPos).field0_0x0.d[0];
      fVar13 = 1.0 - (0.25 - fVar14) / 0.25;
      fVar13 = -fVar13 * fVar13 + fVar13 + fVar13;
      uVar11 = CONCAT44((this->m_vBoxStartPos).field0_0x0.d[1] +
                        ((this->m_vBoxEndPos).field0_0x0.d[1] -
                        (this->m_vBoxStartPos).field0_0x0.d[1]) * fVar13,
                        fVar15 + ((this->m_vBoxEndPos).field0_0x0.d[0] - fVar15) * fVar13);
      puVar1 = (undefined *)((int)&(this->m_vBoxAnimatePos).field0_0x0 + 7);
      uVar8 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar8);
      *puVar5 = *puVar5 & -1L << (uVar8 + 1) * 8 | uVar11 >> (7 - uVar8) * 8;
      uVar8 = (uint)&this->m_vBoxAnimatePos & 7;
      puVar5 = (ulong *)((int)&this->m_vBoxAnimatePos - uVar8);
      *puVar5 = uVar11 << uVar8 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
                    /* end of inlined section */
      fVar13 = (this->m_vBoxEndPos).field0_0x0.d[1];
      if (fVar13 < (this->m_vBoxAnimatePos).field0_0x0.d[1]) {
        (this->m_vBoxAnimatePos).field0_0x0.d[1] = fVar13;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      local_60 = (this->m_vBottomPosStart).field0_0x0.d[0];
      fVar13 = 1.0 - (0.25 - fVar14) / 0.25;
      fVar13 = -fVar13 * fVar13 * fVar13 + fVar13 * fVar13 + fVar13;
      local_60 = local_60 + ((this->m_vBottomPosEnd).field0_0x0.d[0] - local_60) * fVar13;
                    /* end of inlined section */
      fVar13 = (this->m_vBottomPosStart).field0_0x0.d[1] +
               ((this->m_vBottomPosEnd).field0_0x0.d[1] - (this->m_vBottomPosStart).field0_0x0.d[1])
               * fVar13;
      HermiteBlend.m_curtime = fVar14;
LAB_001acb44:
      HermiteBlend.m_stopt = 0.25;
      HermiteBlend.m_startt = 0.0;
      puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
      uVar8 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar8);
      *puVar5 = *puVar5 & -1L << (uVar8 + 1) * 8 | CONCAT44(fVar13,local_60) >> (7 - uVar8) * 8;
      uVar8 = (uint)&this->m_vBottomPos & 7;
      puVar5 = (ulong *)((int)&this->m_vBottomPos - uVar8);
      *puVar5 = CONCAT44(fVar13,local_60) << uVar8 * 8 |
                *puVar5 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
                    /* end of inlined section */
      fVar14 = (this->m_vBottomPosEnd).field0_0x0.d[1];
      if (fVar14 <= (this->m_vBottomPos).field0_0x0.d[1]) goto LAB_001acb9c;
      (this->m_vBottomPos).field0_0x0.d[1] = fVar14;
    }
    else {
      if (this->m_nDisplayMode == 2) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
        fVar13 = 0.25 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
        if (0.0 <= fVar13) {
          fVar14 = (float)((int)fVar13 * (uint)(fVar13 < 0.25) | (uint)(fVar13 >= 0.25) * 0x3e800000
                          );
        }
        fVar15 = (this->m_vBoxEndPos).field0_0x0.d[0];
        fVar13 = 1.0 - (0.25 - fVar14) / 0.25;
        fVar13 = fVar13 * fVar13;
        uVar11 = CONCAT44((this->m_vBoxEndPos).field0_0x0.d[1] +
                          ((this->m_vBoxStartPos).field0_0x0.d[1] -
                          (this->m_vBoxEndPos).field0_0x0.d[1]) * fVar13,
                          fVar15 + ((this->m_vBoxStartPos).field0_0x0.d[0] - fVar15) * fVar13);
        puVar1 = (undefined *)((int)&(this->m_vBoxAnimatePos).field0_0x0 + 7);
        uVar8 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar8);
        *puVar5 = *puVar5 & -1L << (uVar8 + 1) * 8 | uVar11 >> (7 - uVar8) * 8;
        uVar8 = (uint)&this->m_vBoxAnimatePos & 7;
        puVar5 = (ulong *)((int)&this->m_vBoxAnimatePos - uVar8);
        *puVar5 = uVar11 << uVar8 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
                    /* end of inlined section */
        fVar13 = (this->m_vBoxEndPos).field0_0x0.d[1];
        if (fVar13 < (this->m_vBoxAnimatePos).field0_0x0.d[1]) {
          (this->m_vBoxAnimatePos).field0_0x0.d[1] = fVar13;
        }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
        local_60 = (this->m_vBottomPosEnd).field0_0x0.d[0];
        fVar13 = 1.0 - (0.25 - fVar14) / 0.25;
        fVar13 = -fVar13 * fVar13 * fVar13 + (fVar13 + fVar13) * fVar13;
        local_60 = local_60 + ((this->m_vBottomPosStart).field0_0x0.d[0] - local_60) * fVar13;
        fVar13 = (this->m_vBottomPosEnd).field0_0x0.d[1] +
                 ((this->m_vBottomPosStart).field0_0x0.d[1] -
                 (this->m_vBottomPosEnd).field0_0x0.d[1]) * fVar13;
        HermiteBlend.m_curtime = fVar14;
        goto LAB_001acb44;
      }
      puVar1 = (undefined *)((int)&(this->m_vBoxEndPos).field0_0x0 + 7);
      uVar8 = (uint)puVar1 & 7;
      uVar2 = (uint)&this->m_vBoxEndPos & 7;
      uVar11 = (*(long *)(puVar1 + -uVar8) << (7 - uVar8) * 8 |
               (long)(int)&HermiteBlend & 0xffffffffffffffffU >> (uVar8 + 1) * 8) &
               -1L << (8 - uVar2) * 8 | *(ulong *)((int)&this->m_vBoxEndPos - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&(this->m_vBoxAnimatePos).field0_0x0 + 7);
      uVar8 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar8);
      *puVar5 = *puVar5 & -1L << (uVar8 + 1) * 8 | uVar11 >> (7 - uVar8) * 8;
      uVar8 = (uint)&this->m_vBoxAnimatePos & 7;
      puVar5 = (ulong *)((int)&this->m_vBoxAnimatePos - uVar8);
      *puVar5 = uVar11 << uVar8 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      puVar1 = (undefined *)((int)&(this->m_vBottomPosEnd).field0_0x0 + 7);
      uVar8 = (uint)puVar1 & 7;
      uVar2 = (uint)&this->m_vBottomPosEnd & 7;
      uVar11 = (*(long *)(puVar1 + -uVar8) << (7 - uVar8) * 8 |
               uVar11 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar2) * 8 |
               *(ulong *)((int)&this->m_vBottomPosEnd - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
      uVar8 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar8);
      *puVar5 = *puVar5 & -1L << (uVar8 + 1) * 8 | uVar11 >> (7 - uVar8) * 8;
      uVar8 = (uint)&this->m_vBottomPos & 7;
      puVar5 = (ulong *)((int)&this->m_vBottomPos - uVar8);
      *puVar5 = uVar11 << uVar8 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    }
                    /* end of inlined section */
    HermiteBlend.m_startt = 0.0;
  }
LAB_001acb9c:
  pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar12 = (**(code **)(pEVar3 + 1))
                     ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3->GetBut + -4,
                      _globals.m_whichPlayerPaused,0x1000);
  if (lVar12 == 0) {
    this->m_fDPadUpTime = 0.0;
  }
  else {
    if (this->m_fDPadUpTime == 0.0) {
      *(undefined4 *)&this->m_bTriggerUp = 1;
      this->m_fNextUpToggle = 0.5;
      *(undefined4 *)&this->m_bUpToggle = 0;
    }
    this->m_fDPadUpTime = this->m_fDPadUpTime + _dt;
  }
  pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar12 = (**(code **)(pEVar3 + 1))
                     ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3->GetBut + -4,
                      _globals.m_whichPlayerPaused,0x4000);
  if (lVar12 == 0) {
    this->m_fDPadDownTime = 0.0;
  }
  else {
    if (this->m_fDPadDownTime == 0.0) {
      *(undefined4 *)&this->m_bTriggerDown = 1;
      this->m_fNextDownToggle = 0.5;
      *(undefined4 *)&this->m_bDownToggle = 0;
    }
    this->m_fDPadDownTime = this->m_fDPadDownTime + _dt;
  }
  if (this->m_fNextUpToggle < this->m_fDPadUpTime) {
    uVar8 = *(uint *)&this->m_bUpToggle ^ 1;
    *(uint *)&this->m_bTriggerUp = uVar8;
    this->m_fNextUpToggle = this->m_fNextUpToggle + 0.025;
    *(uint *)&this->m_bUpToggle = uVar8;
    fVar14 = this->m_fDPadDownTime;
  }
  else {
    fVar14 = this->m_fDPadDownTime;
  }
  if (this->m_fNextDownToggle < fVar14) {
    uVar8 = *(uint *)&this->m_bDownToggle ^ 1;
    *(uint *)&this->m_bTriggerDown = uVar8;
    this->m_fNextDownToggle = this->m_fNextDownToggle + 0.025;
    *(uint *)&this->m_bDownToggle = uVar8;
  }
  this->m_fAngle = this->m_fAngle + _dt * 1.047198;
  if ((this->m_nDialogMode == 1) && (this->m_nNeighborhoodMode == 1)) {
    iVar9 = *(int *)&this->m_bModelPreloadDone;
LAB_001acd40:
    if (iVar9 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar12 = (*(code *)_5Globs_pObjectFolder->__vtable[1].ResumeObjectFiles)
                         ((int)&_5Globs_pObjectFolder->__vtable +
                          (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].SuspendObjectFiles,
                          this->m_pMasterSels[this->m_nLockableModelIndex],0);
      *(int *)&this->m_bModelPreloadDone = (int)lVar12;
      if (lVar12 != 0) {
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
        __16EResourceManager_m_bTraceEnabled = 1;
                    /* end of inlined section */
        SetupModel__14EPauseItemInfo(this);
      }
      uVar8 = this->m_nDialogMode;
    }
    else {
      uVar8 = this->m_nDialogMode;
    }
  }
  else {
    if (this->m_nDialogMode == 0) {
      iVar9 = *(int *)&this->m_bModelPreloadDone;
      goto LAB_001acd40;
    }
    uVar8 = this->m_nDialogMode;
  }
  if (((uVar8 == 1) && (this->m_nNeighborhoodMode == 1)) &&
     (*(int *)&this->m_bModelPreloadDone == 0)) {
    uVar8 = this->m_nDialogMode;
    goto LAB_001acffc;
  }
  if (uVar8 == 0) {
    if (*(int *)&this->m_bModelPreloadDone == 0) {
LAB_001acff8:
      uVar8 = this->m_nDialogMode;
    }
    else {
      pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar12 = (*(code *)pEVar3[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4
                          ,_globals.m_whichPlayerPaused,0x10);
      if (lVar12 == 0) {
        pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar12 = (*(code *)pEVar3[1].GetBut)
                           ((int)(_globals.m_pCtrlPad)->m_pressed +
                            *(short *)&pEVar3[1].ClearBut + -4,_globals.m_whichPlayerPaused,0x40);
        if (lVar12 == 0) goto LAB_001acff8;
        pEVar4 = this->m_pReceiver->__vtable;
        (*(code *)pEVar4[1].EUIObjectNode)
                  ((int)&(this->m_pReceiver->m_ChildList).field0_0x0.m_l.m_pHead +
                   (int)*(short *)(pEVar4 + 1),this,0x1c);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        pcVar10 = (code *)_13EUIObjectNode_m_uiSfxSelect;
      }
      else {
        pEVar4 = this->m_pReceiver->__vtable;
        (*(code *)pEVar4[1].EUIObjectNode)
                  ((int)&(this->m_pReceiver->m_ChildList).field0_0x0.m_l.m_pHead +
                   (int)*(short *)(pEVar4 + 1),0,0x1b);
        pcVar10 = (code *)_13EUIObjectNode_m_uiSfxBack;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      }
      if (pcVar10 == (code *)0x0) {
        uVar8 = this->m_nDialogMode;
      }
      else {
        (*pcVar10)();
                    /* end of inlined section */
        uVar8 = this->m_nDialogMode;
      }
    }
LAB_001acffc:
    if (uVar8 == 1) {
      if (this->m_nDisplayMode != 0) goto LAB_001ad0d4;
      iVar9 = *(int *)&this->m_bTriggerDown;
    }
    else {
      iVar9 = *(int *)&this->m_bTriggerDown;
    }
  }
  else {
    if (uVar8 == 1) {
      if (this->m_nDisplayMode == 0) {
        pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar12 = (*(code *)pEVar3[1].GetBut)
                           ((int)(_globals.m_pCtrlPad)->m_pressed +
                            *(short *)&pEVar3[1].ClearBut + -4,_globals.m_whichPlayerPaused,0x10);
        puVar6 = _13EUIObjectNode_m_uiSfxSelect;
        if (lVar12 != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
          this->m_nDisplayMode = 2;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
          this->m_fAnimationTime = 0.25;
          if (puVar6 != (undefined1 *)0x0) {
            (*(code *)puVar6)();
          }
          _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
          _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
          _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
          _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
        }
                    /* end of inlined section */
        if (this->m_nNeighborhoodMode == 2) goto LAB_001acff8;
        pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar12 = (*(code *)pEVar3[1].GetBut)
                           ((int)(_globals.m_pCtrlPad)->m_pressed +
                            *(short *)&pEVar3[1].ClearBut + -4,_globals.m_whichPlayerPaused,0x8000);
        if (lVar12 == 0) {
          pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
          lVar12 = (*(code *)pEVar3[1].GetBut)
                             ((int)(_globals.m_pCtrlPad)->m_pressed +
                              *(short *)&pEVar3[1].ClearBut + -4,_globals.m_whichPlayerPaused,0x2000
                             );
          if (lVar12 != 0) {
            if ((int)(uint)this->m_nLockableModelIndex < (int)(this->m_nNumLockables - 1)) {
              this->m_nLockableModelIndex = this->m_nLockableModelIndex + 1;
            }
            else {
              this->m_nLockableModelIndex = '\0';
            }
            if (*(int *)(this->m_bNeedDelRefModels + (uint)this->m_nLockableModelIndex * 4) == 0)
            goto LAB_001acfe0;
            SetupCameraPosition__14EPauseItemInfo(this);
            goto LAB_001acff8;
          }
          uVar8 = this->m_nDialogMode;
        }
        else {
          uVar7 = this->m_nLockableModelIndex;
          if (uVar7 == '\0') {
            uVar7 = this->m_nNumLockables;
          }
          this->m_nLockableModelIndex = uVar7 + 0xff;
          if (*(int *)(this->m_bNeedDelRefModels + (uint)this->m_nLockableModelIndex * 4) == 0) {
LAB_001acfe0:
            SetupLockableModel__14EPauseItemInfo(this);
            uVar8 = this->m_nDialogMode;
          }
          else {
            SetupCameraPosition__14EPauseItemInfo(this);
            uVar8 = this->m_nDialogMode;
          }
        }
      }
      else {
        uVar8 = this->m_nDialogMode;
      }
      goto LAB_001acffc;
    }
    iVar9 = *(int *)&this->m_bTriggerDown;
  }
  if (iVar9 == 0) {
    iVar9 = *(int *)&this->m_bTriggerUp;
  }
  else {
    *(undefined4 *)&this->m_bTriggerDown = 0;
    if (*(int *)&this->m_bMoreDown == 0) {
      if (this->m_nLinesScrolled == 0) {
        iVar9 = *(int *)&this->m_bTriggerUp;
        goto LAB_001ad078;
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      if (_13EUIObjectNode_m_uiSfxNext == (undefined1 *)0x0) {
        uVar8 = this->m_nLinesScrolled;
      }
      else {
        (*(code *)_13EUIObjectNode_m_uiSfxNext)();
                    /* end of inlined section */
        uVar8 = this->m_nLinesScrolled;
      }
      this->m_nLinesScrolled = uVar8 + 1;
    }
                    /* end of inlined section */
    iVar9 = *(int *)&this->m_bTriggerUp;
  }
LAB_001ad078:
  if (iVar9 != 0) {
    *(undefined4 *)&this->m_bTriggerUp = 0;
    if (this->m_nLinesScrolled == 0) {
      if (*(int *)&this->m_bMoreDown != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
      }
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      if (_13EUIObjectNode_m_uiSfxNext == (undefined1 *)0x0) {
        uVar8 = this->m_nLinesScrolled;
      }
      else {
        (*(code *)_13EUIObjectNode_m_uiSfxNext)();
                    /* end of inlined section */
        uVar8 = this->m_nLinesScrolled;
      }
      this->m_nLinesScrolled = uVar8 - 1;
    }
  }
LAB_001ad0d4:
                    /* end of inlined section */
  fVar14 = this->m_fHighlightTimer + _dt * 5.0;
  this->m_fHighlightTimer = fVar14;
  if (12.56637 < fVar14) {
    this->m_fHighlightTimer = 0.0;
  }
  return;
}

void EPauseItemInfo::Message(EUIObjectNode *pChild, u32 messId) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
  return;
}

void EPauseItemInfo::DrawText(ERC *prc) {
	float fStartx;
	float fClipW;
	float flineinc;
	c16 *pPos;
	bool gotline;
	short unsigned int sLine[256];
	EVec2 vnewstrw;
	int nCharsInWord;
	int i;
	c16 *pBuffPos;
	int cPos0;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	EVec2 &vPos;
	EVec2 &v;
	
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  ulong *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  undefined8 unaff_s0;
  int iVar10;
  undefined8 unaff_s1;
  short *psVar11;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  short *psVar12;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  int iVar13;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  short sLine [256];
  EVec2 vnewstrw;
  undefined local_f0 [20];
  EStorable__vtable *local_dc;
  ERC *local_d0;
  int local_c0;
  int iStack_bc;
  EHashTableNode **local_b0;
  uint uStack_ac;
  EFontSize *local_a0;
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
  
                    /* end of inlined section */
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (EFontSize *)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (EHashTableNode **)unaff_s1;
  uStack_ac = (uint)((ulong)unaff_s1 >> 0x20);
  local_c0 = (int)unaff_s0;
  iStack_bc = (int)((ulong)unaff_s0 >> 0x20);
  if (this->m_sText != (short *)0x0) {
    local_d0 = prc;
    Select__6ERFontP3ERC(this->m_pFont,prc);
    fVar16 = (this->m_vTextGapSize).field0_0x0.d[0];
    fVar14 = (this->m_vTextSize).field0_0x0.d[0];
    fVar22 = (this->m_vCurTextPos).field0_0x0.d[0];
    fVar17 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
    psVar11 = this->m_sText;
    if (*psVar11 != 0) {
      do {
        iVar10 = 0;
        memset(sLine,0,0x200);
        bVar5 = false;
        iVar13 = 0;
        psVar12 = sLine;
        sVar2 = *psVar11;
        if (*psVar11 != 0) {
          do {
            sLine[0] = sVar2;
            if (*psVar11 == 10) {
              psVar11 = psVar11 + 1;
              bVar5 = true;
            }
            else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
              DoGetStringSize__6ERFontPvbP7EWindow
                        ((ERFont *)local_f0,this->m_pFont,SUB41(psVar12,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
              puVar1 = (undefined *)((int)&vnewstrw.field0_0x0 + 7);
              uVar9 = (uint)puVar1 & 7;
              puVar4 = (ulong *)(puVar1 + -uVar9);
              *puVar4 = *puVar4 & -1L << (uVar9 + 1) * 8 |
                        CONCAT44(local_f0._4_4_,local_f0._0_4_) >> (7 - uVar9) * 8;
              bVar6 = Isspace__FUs(*psVar11);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
              if (bVar6) {
                iVar13 = iVar10;
              }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
              DoGetStringSize__6ERFontPvbP7EWindow
                        ((ERFont *)local_f0,this->m_pFont,false,(EWindow *)&pGifTag1);
                    /* end of inlined section */
              iVar7 = iVar10 - iVar13;
              if (fVar14 - (fVar16 + fVar16) < (float)local_f0._0_4_) {
                bVar5 = true;
                if (iVar7 == 0) {
                  psVar8 = sLine + iVar10;
                  iVar10 = iVar10 + -1;
                  *psVar8 = 0;
                }
                else {
                  if (iVar10 == iVar7) {
                    iVar7 = 0;
                    psVar11 = psVar11 + -1;
                  }
                  else {
                    iVar10 = iVar10 - iVar7;
                  }
                  psVar8 = sLine + iVar10;
                  psVar11 = psVar11 + -iVar7;
                  iVar10 = iVar10 + -1;
                  *psVar8 = 0;
                }
              }
              iVar10 = iVar10 + 1;
              psVar12 = psVar12 + 1;
              psVar11 = psVar11 + 1;
              if (0xfd < iVar10) break;
            }
            if ((*psVar11 == 0) || (bVar5)) break;
            *psVar12 = *psVar11;
            sVar2 = sLine[0];
          } while( true );
        }
        if (bVar5) {
          uVar9 = this->m_nSkippedLines;
LAB_001ad31c:
          uVar3 = this->m_nLinesScrolled;
          sLine[iVar10] = 0;
          if (uVar9 < uVar3) {
            this->m_nSkippedLines = uVar9 + 1;
          }
          else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            local_f0._16_4_ = (this->m_vCurTextPos).field0_0x0.d[0];
            local_dc = (EStorable__vtable *)(this->m_vCurTextPos).field0_0x0.d[1];
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (this->m_pFont,local_d0,sLine,true,(EVec2 *)(local_f0 + 0x10),E_FAX_LEFT,
                       E_FAY_TOP,&this->m_vCurTextPos);
                    /* end of inlined section */
            fVar20 = (this->m_vTextSize).field0_0x0.d[1];
            fVar18 = (this->m_vTextPos).field0_0x0.d[1];
            fVar19 = (this->m_vTextGapSize).field0_0x0.d[1];
            fVar21 = (this->m_vArrowSize).field0_0x0.d[1];
            fVar15 = (this->m_vCurTextPos).field0_0x0.d[1] + fVar17;
            (this->m_vCurTextPos).field0_0x0.d[0] = fVar22;
            (this->m_vCurTextPos).field0_0x0.d[1] = fVar15;
            if (((fVar18 + fVar20) - fVar19) - fVar21 < fVar15) {
              *(undefined4 *)&this->m_bMoreDown = 1;
            }
          }
          sVar2 = *psVar11;
        }
        else {
          if (sLine[0] != 0) {
            uVar9 = this->m_nSkippedLines;
            goto LAB_001ad31c;
          }
          sVar2 = *psVar11;
        }
      } while (sVar2 != 0);
    }
  }
  return;
}

void EPauseItemInfo::DrawStats(ERC *prc) {
	ObjDefinition *pDef;
	EVec2 vPos;
	short unsigned int sNum[8];
	int nNumAvailableSlots;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float y;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float y;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float y;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float y;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float y;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float y;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	float y;
	ERFont *this;
	ERC *prc;
	
  ObjDefinition *pOVar1;
  ushort uVar2;
  short *psVar3;
  undefined8 unaff_s0;
  int iVar4;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar5;
  float fVar6;
  EVec2 vPos;
  short sNum [8];
  float local_80;
  float local_7c;
  float local_70;
  float local_6c;
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
  
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (this->m_pMasterSels[this->m_nLockableModelIndex] != (ObjSelector *)0x0) {
                    /* end of inlined section */
    iVar4 = 3;
    fVar6 = (this->m_vStatsPos).field0_0x0.d[0] + (this->m_vTextGapSize).field0_0x0.d[0];
                    /* inlined from ../MSrc/ObjSelector.h */
    pOVar1 = this->m_pMasterSels[this->m_nLockableModelIndex]->fHeader;
                    /* end of inlined section */
    vPos.field0_0x0.d[1] =
         (this->m_vStatsPos).field0_0x0.d[1] + (this->m_vTextGapSize).field0_0x0.d[1];
    vPos.field0_0x0.d[0] = fVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    Select__6ERFontP3ERC(this->m_pFont,prc);
    if ((pOVar1->ratingSkillFlags & 1) != 0) {
      psVar3 = GetUiString__7EGlobalPCc(&_globals,"cooking");
      iVar4 = 2;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_7c = vPos.field0_0x0.d[1];
      local_80 = vPos.field0_0x0.d[0];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
      fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
      vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar5;
      vPos.field0_0x0.d[0] = fVar6;
    }
    if ((pOVar1->ratingSkillFlags & 2) == 0) {
      uVar2 = pOVar1->ratingSkillFlags;
    }
    else {
      if (iVar4 != 0) {
        psVar3 = GetUiString__7EGlobalPCc(&_globals,"tech");
        iVar4 = iVar4 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_7c = vPos.field0_0x0.d[1];
        local_80 = vPos.field0_0x0.d[0];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
        fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar5;
        vPos.field0_0x0.d[0] = fVar6;
      }
      uVar2 = pOVar1->ratingSkillFlags;
    }
    if ((uVar2 & 4) == 0) {
      uVar2 = pOVar1->ratingSkillFlags;
    }
    else {
      if (0 < iVar4) {
        psVar3 = GetUiString__7EGlobalPCc(&_globals,"logic");
        iVar4 = iVar4 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_7c = vPos.field0_0x0.d[1];
        local_80 = vPos.field0_0x0.d[0];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
        fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar5;
        vPos.field0_0x0.d[0] = fVar6;
      }
      uVar2 = pOVar1->ratingSkillFlags;
    }
    if ((uVar2 & 8) == 0) {
      uVar2 = pOVar1->ratingSkillFlags;
    }
    else {
      if (0 < iVar4) {
        psVar3 = GetUiString__7EGlobalPCc(&_globals,"body");
        iVar4 = iVar4 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_7c = vPos.field0_0x0.d[1];
        local_80 = vPos.field0_0x0.d[0];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
        fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar5;
        vPos.field0_0x0.d[0] = fVar6;
      }
      uVar2 = pOVar1->ratingSkillFlags;
    }
    if ((uVar2 & 0x10) == 0) {
      uVar2 = pOVar1->ratingSkillFlags;
    }
    else {
      if (0 < iVar4) {
        psVar3 = GetUiString__7EGlobalPCc(&_globals,"creative");
        iVar4 = iVar4 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_7c = vPos.field0_0x0.d[1];
        local_80 = vPos.field0_0x0.d[0];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
        fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar5;
        vPos.field0_0x0.d[0] = fVar6;
      }
      uVar2 = pOVar1->ratingSkillFlags;
    }
    if ((uVar2 & 0x20) == 0) {
      uVar2 = pOVar1->ratingSkillFlags;
    }
    else {
      if (0 < iVar4) {
        psVar3 = GetUiString__7EGlobalPCc(&_globals,"charm");
        iVar4 = iVar4 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_7c = vPos.field0_0x0.d[1];
        local_80 = vPos.field0_0x0.d[0];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
        fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar5;
        vPos.field0_0x0.d[0] = fVar6;
      }
      uVar2 = pOVar1->ratingSkillFlags;
    }
    if ((uVar2 & 0x40) == 0) {
      uVar2 = pOVar1->ratingHunger;
    }
    else {
      if (0 < iVar4) {
        psVar3 = GetUiString__7EGlobalPCc(&_globals,"study");
        iVar4 = iVar4 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_7c = vPos.field0_0x0.d[1];
        local_80 = vPos.field0_0x0.d[0];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
        fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar5;
        vPos.field0_0x0.d[0] = fVar6;
      }
      uVar2 = pOVar1->ratingHunger;
    }
    if ((short)uVar2 < 1) {
      uVar2 = pOVar1->ratingComfort;
    }
    else {
      if (0 < iVar4) {
        psVar3 = GetUiString__7EGlobalPCc(&_globals,"hunger");
        iVar4 = iVar4 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_80 = vPos.field0_0x0.d[0];
        local_7c = vPos.field0_0x0.d[1];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,
                   (EVec2 *)0x0);
                    /* end of inlined section */
        uVar2 = pOVar1->ratingHunger;
        if ((short)uVar2 < 10) {
          IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,1);
          fVar5 = (this->m_vStatsSize).field0_0x0.d[0];
        }
        else {
          IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,2);
          fVar5 = (this->m_vStatsSize).field0_0x0.d[0];
        }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_6c = vPos.field0_0x0.d[1];
                    /* end of inlined section */
        local_80 = ((this->m_vStatsPos).field0_0x0.d[0] + fVar5) -
                   (this->m_vTextGapSize).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_7c = vPos.field0_0x0.d[1];
        local_70 = local_80;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,sNum,true,(EVec2 *)&local_70,E_FAX_RIGHT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
        fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar5;
        vPos.field0_0x0.d[0] = fVar6;
      }
      uVar2 = pOVar1->ratingComfort;
    }
    if ((short)uVar2 < 1) {
      uVar2 = pOVar1->ratingHygiene;
    }
    else {
      if (0 < iVar4) {
        psVar3 = GetUiString__7EGlobalPCc(&_globals,"comfort");
        iVar4 = iVar4 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_80 = vPos.field0_0x0.d[0];
        local_7c = vPos.field0_0x0.d[1];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,
                   (EVec2 *)0x0);
                    /* end of inlined section */
        uVar2 = pOVar1->ratingComfort;
        if ((short)uVar2 < 10) {
          IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,1);
          fVar5 = (this->m_vStatsSize).field0_0x0.d[0];
        }
        else {
          IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,2);
          fVar5 = (this->m_vStatsSize).field0_0x0.d[0];
        }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_6c = vPos.field0_0x0.d[1];
                    /* end of inlined section */
        local_80 = ((this->m_vStatsPos).field0_0x0.d[0] + fVar5) -
                   (this->m_vTextGapSize).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_7c = vPos.field0_0x0.d[1];
        local_70 = local_80;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,sNum,true,(EVec2 *)&local_70,E_FAX_RIGHT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
        fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar5;
        vPos.field0_0x0.d[0] = fVar6;
      }
      uVar2 = pOVar1->ratingHygiene;
    }
    if ((short)uVar2 < 1) {
      uVar2 = pOVar1->ratingBladder;
    }
    else {
      if (0 < iVar4) {
        psVar3 = GetUiString__7EGlobalPCc(&_globals,"hygiene");
        iVar4 = iVar4 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_80 = vPos.field0_0x0.d[0];
        local_7c = vPos.field0_0x0.d[1];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,
                   (EVec2 *)0x0);
                    /* end of inlined section */
        uVar2 = pOVar1->ratingHygiene;
        if ((short)uVar2 < 10) {
          IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,1);
          fVar5 = (this->m_vStatsSize).field0_0x0.d[0];
        }
        else {
          IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,2);
          fVar5 = (this->m_vStatsSize).field0_0x0.d[0];
        }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_6c = vPos.field0_0x0.d[1];
                    /* end of inlined section */
        local_80 = ((this->m_vStatsPos).field0_0x0.d[0] + fVar5) -
                   (this->m_vTextGapSize).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_7c = vPos.field0_0x0.d[1];
        local_70 = local_80;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,sNum,true,(EVec2 *)&local_70,E_FAX_RIGHT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
        fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar5;
        vPos.field0_0x0.d[0] = fVar6;
      }
      uVar2 = pOVar1->ratingBladder;
    }
    if ((short)uVar2 < 1) {
      uVar2 = pOVar1->ratingEnergy;
    }
    else {
      if (0 < iVar4) {
        psVar3 = GetUiString__7EGlobalPCc(&_globals,"bladder");
        iVar4 = iVar4 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_80 = vPos.field0_0x0.d[0];
        local_7c = vPos.field0_0x0.d[1];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,
                   (EVec2 *)0x0);
                    /* end of inlined section */
        uVar2 = pOVar1->ratingBladder;
        if ((short)uVar2 < 10) {
          IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,1);
          fVar5 = (this->m_vStatsSize).field0_0x0.d[0];
        }
        else {
          IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,2);
          fVar5 = (this->m_vStatsSize).field0_0x0.d[0];
        }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_6c = vPos.field0_0x0.d[1];
                    /* end of inlined section */
        local_80 = ((this->m_vStatsPos).field0_0x0.d[0] + fVar5) -
                   (this->m_vTextGapSize).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_7c = vPos.field0_0x0.d[1];
        local_70 = local_80;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,sNum,true,(EVec2 *)&local_70,E_FAX_RIGHT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
        fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar5;
        vPos.field0_0x0.d[0] = fVar6;
      }
      uVar2 = pOVar1->ratingEnergy;
    }
    if ((short)uVar2 < 1) {
      uVar2 = pOVar1->ratingFun;
    }
    else {
      if (0 < iVar4) {
        psVar3 = GetUiString__7EGlobalPCc(&_globals,"energy");
        iVar4 = iVar4 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_80 = vPos.field0_0x0.d[0];
        local_7c = vPos.field0_0x0.d[1];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,
                   (EVec2 *)0x0);
                    /* end of inlined section */
        uVar2 = pOVar1->ratingEnergy;
        if ((short)uVar2 < 10) {
          IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,1);
          fVar5 = (this->m_vStatsSize).field0_0x0.d[0];
        }
        else {
          IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,2);
          fVar5 = (this->m_vStatsSize).field0_0x0.d[0];
        }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_6c = vPos.field0_0x0.d[1];
                    /* end of inlined section */
        local_80 = ((this->m_vStatsPos).field0_0x0.d[0] + fVar5) -
                   (this->m_vTextGapSize).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_7c = vPos.field0_0x0.d[1];
        local_70 = local_80;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,sNum,true,(EVec2 *)&local_70,E_FAX_RIGHT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
        fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar5;
        vPos.field0_0x0.d[0] = fVar6;
      }
      uVar2 = pOVar1->ratingFun;
    }
    if ((short)uVar2 < 1) {
      uVar2 = pOVar1->ratingRoom;
    }
    else {
      if (0 < iVar4) {
        psVar3 = GetUiString__7EGlobalPCc(&_globals,"fun");
        iVar4 = iVar4 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_80 = vPos.field0_0x0.d[0];
        local_7c = vPos.field0_0x0.d[1];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,
                   (EVec2 *)0x0);
                    /* end of inlined section */
        uVar2 = pOVar1->ratingFun;
        if ((short)uVar2 < 10) {
          IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,1);
          fVar5 = (this->m_vStatsSize).field0_0x0.d[0];
        }
        else {
          IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,2);
          fVar5 = (this->m_vStatsSize).field0_0x0.d[0];
        }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_6c = vPos.field0_0x0.d[1];
                    /* end of inlined section */
        local_80 = ((this->m_vStatsPos).field0_0x0.d[0] + fVar5) -
                   (this->m_vTextGapSize).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_7c = vPos.field0_0x0.d[1];
        local_70 = local_80;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,sNum,true,(EVec2 *)&local_70,E_FAX_RIGHT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
        fVar5 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar5;
        vPos.field0_0x0.d[0] = fVar6;
      }
      uVar2 = pOVar1->ratingRoom;
    }
    if ((0 < (short)uVar2) && (0 < iVar4)) {
      psVar3 = GetUiString__7EGlobalPCc(&_globals,"room");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_80 = vPos.field0_0x0.d[0];
      local_7c = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_80,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0)
      ;
                    /* end of inlined section */
      uVar2 = pOVar1->ratingRoom;
      if ((short)uVar2 < 10) {
        IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,1);
        fVar6 = (this->m_vStatsSize).field0_0x0.d[0];
      }
      else {
        IntToWString__FiPUsUii((int)(short)uVar2,sNum,8,2);
        fVar6 = (this->m_vStatsSize).field0_0x0.d[0];
      }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_6c = vPos.field0_0x0.d[1];
                    /* end of inlined section */
      local_80 = ((this->m_vStatsPos).field0_0x0.d[0] + fVar6) -
                 (this->m_vTextGapSize).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_7c = vPos.field0_0x0.d[1];
      local_70 = local_80;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,sNum,true,(EVec2 *)&local_70,E_FAX_RIGHT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
      GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
    }
  }
  return;
}

void EPauseItemInfo::DrawModel(ERC *prc) {
	ELights *pLight;
	EMat4 mScaled;
	EMat4 *pmModel2;
	EMat4 mScaled2;
	EBound3 bound;
	EBoundSphere bsphere;
	ERC *this;
	ERC *this;
	ERC *this;
	float v;
	float v;
	ERC *this;
	EAnimController *this;
	float scaler;
	float v;
	float v;
	ERC *this;
	EAnimController *this;
	float scaler;
	ERModel *this;
	EBound3 bound2;
	ERModel *this;
	EVec3 *this;
	EMat4 *this;
	
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  ERModel *pEVar4;
  uint uVar5;
  ulong *puVar6;
  void *pvVar7;
  EMat4 *pEVar8;
  EMat4 *this_00;
  ERC__vtable *pEVar9;
  float fVar10;
  EBound3 bound;
  EBoundSphere bsphere;
  float local_170;
  undefined4 local_16c;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  EMat4 mScaled;
  EMat4 mScaled2;
  EBound3 bound2;
  
  if (this->m_pResSels[this->m_nLockableModelIndex] == (ObjSelector *)0x0) {
    return;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar10 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  bound.vMin.field0_0x0._0_8_ = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  bound.vMin.field0_0x0.d[2] = 1.0;
                    /* end of inlined section */
  SetLookAt__9E3DWindowRC5EVec3N21(&this->m_win,&this->m_vEye,&this->m_vTarget,&bound.vMin);
  Select__9E3DWindowP3ERC(&this->m_win,prc);
  (*(code *)prc->__vtable[1].DisableGeometryModes)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,1,0,0);
  (*(code *)prc->__vtable[1].EnableRasterModes)
            (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,1,1,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  bound.vMin.field0_0x0._0_8_ = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  bsphere.vCenter.field0_0x0.d[0] = 0.0;
  local_16c = 0;
  local_154 = 0;
  local_158 = 0;
  local_15c = 0;
  local_160 = 0;
                    /* end of inlined section */
  bound.vMax.field0_0x0.d[1] = fVar10;
  bound.vMax.field0_0x0.d[2] = fVar10;
  bsphere.vCenter.field0_0x0.d[1] = fVar10;
  local_170 = fVar10;
  (*(code *)prc->__vtable[1].DisplayList)
            (fVar10,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&bound,
             (undefined *)((int)&bound.vMax.field0_0x0 + 4),&bsphere,&local_170,&local_160);
  (*(code *)prc->__vtable[1].DisableGeometryModes)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,2,0,0);
  (*(code *)prc->__vtable[1].EnableRasterModes)
            (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,1,5);
  if (*(int *)(this->m_bDisplayGround + (uint)this->m_nLockableModelIndex * 4) != 0) {
                    /* inlined from /eor/src2/engine/e_rc.h */
    pvVar7 = Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x10,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    bound.vMin.field0_0x0.d[2] = 0.74981;
    bound.vMin.field0_0x0._0_8_ = 0x3f0e89233f02dd59;
                    /* end of inlined section */
    uVar5 = (int)pvVar7 + 7U & 7;
    puVar6 = (ulong *)(((int)pvVar7 + 7U) - uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0x3f0e89233f02dd59U >> (7 - uVar5) * 8;
    uVar5 = (uint)pvVar7 & 7;
    *(ulong *)((int)pvVar7 - uVar5) =
         0x3f0e89233f02dd59 << uVar5 * 8 |
         *(ulong *)((int)pvVar7 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    *(undefined4 *)((int)pvVar7 + 8) = 0x3f3ff38d;
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,pvVar7,0);
    Select__8ERShaderP3ERCi(this->m_pWhiteLight,prc,0);
                    /* inlined from /eor/src2/engine/e_dl.h */
    pEVar8 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
    Id__5EMat4(pEVar8);
    bound.vMin.field0_0x0._0_8_ = 0x4000000040000000;
    bound.vMin.field0_0x0.d[2] = fVar10;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    Scale__5EMat4RC5EVec3(pEVar8,&bound.vMin);
                    /* end of inlined section */
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar8);
    (*(code *)prc->__vtable[1].DisableGeometryModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,2,0,0);
    (*(code *)prc->__vtable->DisableRasterModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->EnableRasterModes,this->m_pGround);
  }
  if (*(int *)(this->m_bModelsLocked + (uint)this->m_nLockableModelIndex * 4) == 0) {
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,&this->m_lights,1);
                    /* end of inlined section */
    bVar2 = this->m_nLockableModelIndex;
  }
  else {
                    /* inlined from /eor/src2/engine/e_rc.h */
    pvVar7 = Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x10,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    bound.vMin.field0_0x0._0_8_ = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    bound.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    uVar5 = (int)pvVar7 + 7U & 7;
    puVar6 = (ulong *)(((int)pvVar7 + 7U) - uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
    uVar5 = (uint)pvVar7 & 7;
    *(ulong *)((int)pvVar7 - uVar5) =
         0L << uVar5 * 8 | *(ulong *)((int)pvVar7 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    *(undefined4 *)((int)pvVar7 + 8) = 0;
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,pvVar7,0);
    bVar2 = this->m_nLockableModelIndex;
  }
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  bound.vMin.field0_0x0.d[2] = this->m_pModels[bVar2]->m_scaler;
  bound.vMin.field0_0x0._0_8_ = CONCAT44(bound.vMin.field0_0x0.d[2],bound.vMin.field0_0x0.d[2]);
  Scale__5EMat4RC5EVec3(&mScaled,&bound.vMin);
  pEVar8 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
  if (*(int *)(this->m_bIsAnimated + (uint)this->m_nLockableModelIndex * 4) == 0) {
    __as__5EMat4RC5EMat4(pEVar8,&mScaled);
  }
  else {
    Id__5EMat4(pEVar8);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
    this->m_acs[this->m_nLockableModelIndex].m_modelScaler =
         this->m_pModels[this->m_nLockableModelIndex]->m_scaler;
  }
  this_00 = (EMat4 *)0x0;
  if (this->m_pResSel2s[this->m_nLockableModelIndex] != (ObjSelector *)0x0) {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    bound.vMin.field0_0x0.d[2] = this->m_pModel2s[this->m_nLockableModelIndex]->m_scaler;
    bound.vMin.field0_0x0._0_8_ = CONCAT44(bound.vMin.field0_0x0.d[2],bound.vMin.field0_0x0.d[2]);
    Scale__5EMat4RC5EVec3(&mScaled2,&bound.vMin);
    this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
    if (*(int *)(this->m_bIsAnimated2 + (uint)this->m_nLockableModelIndex * 4) == 0) {
      __as__5EMat4RC5EMat4(this_00,&mScaled2);
    }
    else {
      Id__5EMat4(this_00);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
      this->m_ac2s[this->m_nLockableModelIndex].m_modelScaler =
           this->m_pModel2s[this->m_nLockableModelIndex]->m_scaler;
    }
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_rmodel.h */
  bsphere.vCenter.field0_0x0.d[2] = 0.0;
  bsphere.vCenter.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  bsphere.vCenter.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_rmodel.h */
  pEVar4 = this->m_pModels[this->m_nLockableModelIndex];
  puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  uVar5 = (uint)&bound.vMax & 7;
  puVar6 = (ulong *)((int)&bound.vMax - uVar5);
  *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  bound.vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  uVar3 = (uint)&bound.vMax & 7;
  bound.vMin.field0_0x0._0_8_ =
       *(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 & -1L << (8 - uVar3) * 8 |
       *(ulong *)((int)&bound.vMax - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar5) * 8
  ;
  bound.vMin.field0_0x0.d[2] = 0.0;
  Compute__7EBound3RC7EBound3RC5EMat4(&bound,&pEVar4->m_boundBox,&mScaled);
                    /* end of inlined section */
  if (this->m_pResSel2s[this->m_nLockableModelIndex] != (ObjSelector *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    bsphere.vCenter.field0_0x0.d[2] = 0.0;
    bsphere.vCenter.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    bsphere.vCenter.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_rmodel.h */
    pEVar4 = this->m_pModel2s[this->m_nLockableModelIndex];
    puVar1 = (undefined *)((int)&bound2.vMax.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
    uVar5 = (uint)&bound2.vMax & 7;
    puVar6 = (ulong *)((int)&bound2.vMax - uVar5);
    *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    bound2.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&bound2.vMax.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    uVar3 = (uint)&bound2.vMax & 7;
    bound2.vMin.field0_0x0._0_8_ =
         *(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)&bound2.vMax - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&bound2.vMin.field0_0x0 + 7);
    uVar5 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar5);
    *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
              (ulong)bound2.vMin.field0_0x0._0_8_ >> (7 - uVar5) * 8;
    bound2.vMin.field0_0x0.d[2] = 0.0;
    Compute__7EBound3RC7EBound3RC5EMat4(&bound2,&pEVar4->m_boundBox,&mScaled2);
                    /* end of inlined section */
    if (bound.vMax.field0_0x0.d[0] < bound2.vMax.field0_0x0.d[0]) {
      bound.vMax.field0_0x0.d[0] = bound2.vMax.field0_0x0.d[0];
    }
    if (bound2.vMin.field0_0x0.d[0] < bound.vMin.field0_0x0.d[0]) {
      bound.vMin.field0_0x0._0_8_ =
           bound.vMin.field0_0x0._0_8_ & 0xffffffff00000000 |
           bound2.vMin.field0_0x0._0_8_ & 0xffffffff;
    }
    if (bound.vMax.field0_0x0.d[1] < bound2.vMax.field0_0x0.d[1]) {
      bound.vMax.field0_0x0.d[1] = bound2.vMax.field0_0x0.d[1];
    }
    if (bound2.vMin.field0_0x0.d[1] < bound.vMin.field0_0x0.d[1]) {
      bound.vMin.field0_0x0._0_8_ =
           bound2.vMin.field0_0x0._0_8_ & 0xffffffff00000000 |
           bound.vMin.field0_0x0._0_8_ & 0xffffffff;
    }
    if (bound.vMax.field0_0x0.d[2] < bound2.vMax.field0_0x0.d[2]) {
      bound.vMax.field0_0x0.d[2] = bound2.vMax.field0_0x0.d[2];
    }
    if (bound2.vMin.field0_0x0.d[2] < bound.vMin.field0_0x0.d[2]) {
      bound.vMin.field0_0x0.d[2] = bound2.vMin.field0_0x0.d[2];
    }
  }
                    /* end of inlined section */
  CalcBoundSphere__7EBound3R12EBoundSphere(&bound,&bsphere);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  bound2.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  bound2.vMin.field0_0x0._0_8_ =
       CONCAT44(-bsphere.vCenter.field0_0x0.d[1],-bsphere.vCenter.field0_0x0.d[0]);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  PostTranslate__5EMat4RC5EVec3(pEVar8,&bound2.vMin);
                    /* end of inlined section */
  if (this->m_pResSel2s[this->m_nLockableModelIndex] != (ObjSelector *)0x0) {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    bound2.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    bound2.vMin.field0_0x0._0_8_ =
         CONCAT44(-bsphere.vCenter.field0_0x0.d[1],-bsphere.vCenter.field0_0x0.d[0]);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    PostTranslate__5EMat4RC5EVec3(this_00,&bound2.vMin);
  }
                    /* end of inlined section */
  PostRotateZ__5EMat4f(pEVar8,this->m_fAngle);
  if (this->m_pResSel2s[this->m_nLockableModelIndex] != (ObjSelector *)0x0) {
    PostRotateZ__5EMat4f(this_00,this->m_fAngle);
  }
  SwapXY__FR5EMat4(pEVar8);
  if (this_00 == (EMat4 *)0x0) {
    bVar2 = this->m_nLockableModelIndex;
  }
  else {
    SwapXY__FR5EMat4(this_00);
    bVar2 = this->m_nLockableModelIndex;
  }
  if (*(int *)(this->m_bIsAnimated + (uint)bVar2 * 4) == 0) {
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar8);
    Draw__7ERModelP3ERCUi(this->m_pModels[this->m_nLockableModelIndex],prc,5);
    bVar2 = this->m_nLockableModelIndex;
  }
  else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    bound2.vMin.field0_0x0.d[2] = 1.0;
    bound2.vMin.field0_0x0._0_8_ = 0x3f8000003f800000;
                    /* end of inlined section */
    Update__15EAnimControllerP5EVec3T1G5EVec3
              (this->m_acs + this->m_nLockableModelIndex,(EVec3 *)0x0,(EVec3 *)0x0,&bound2.vMin);
    Draw__15EAnimControllerP3ERCP7ERModelRC5EMat4Ui
              (this->m_acs + this->m_nLockableModelIndex,prc,
               this->m_pModels[this->m_nLockableModelIndex],pEVar8,5);
    bVar2 = this->m_nLockableModelIndex;
  }
  if (this->m_pResSel2s[bVar2] != (ObjSelector *)0x0) {
    if (*(int *)(this->m_bIsAnimated2 + (uint)bVar2 * 4) != 0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      bound2.vMin.field0_0x0.d[2] = 1.0;
      bound2.vMin.field0_0x0._0_8_ = 0x3f8000003f800000;
                    /* end of inlined section */
      Update__15EAnimControllerP5EVec3T1G5EVec3
                (this->m_ac2s + this->m_nLockableModelIndex,(EVec3 *)0x0,(EVec3 *)0x0,&bound2.vMin);
      Draw__15EAnimControllerP3ERCP7ERModelRC5EMat4Ui
                (this->m_ac2s + this->m_nLockableModelIndex,prc,
                 this->m_pModel2s[this->m_nLockableModelIndex],this_00,5);
      pEVar9 = prc->__vtable;
      goto LAB_001ae6a0;
    }
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,this_00);
    Draw__7ERModelP3ERCUi(this->m_pModel2s[this->m_nLockableModelIndex],prc,5);
  }
  pEVar9 = prc->__vtable;
LAB_001ae6a0:
  (*(code *)pEVar9[1].LineList)
            ((int)&prc->m_pdl + (int)*(short *)&pEVar9[1].QuadList,_globals._pCurLights,
             _globals._nCurLights);
  SelectWin__7EGlobalP3ERC(&_globals,prc);
  return;
}

void EPauseItemInfo::SetMasterSelector(ObjSelector *pSel) {
	ObjSelector *this;
	EPauseItemInfo *this;
	EPauseItemInfo *this;
	EPauseItemInfo *this;
	
  ushort uVar1;
  ObjDefinition *pOVar2;
  ELocString EVar3;
  
  this->m_pMasterSels[this->m_nLockableModelIndex] = pSel;
  if (pSel != (ObjSelector *)0x0) {
                    /* inlined from ../MSrc/ObjSelector.h */
    pOVar2 = pSel->fHeader;
                    /* end of inlined section */
    EVar3 = GetCatalogName__11ObjSelector(pSel);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    this->m_sName = *EVar3.ptr;
                    /* end of inlined section */
    uVar1 = pOVar2->price;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseiteminfo.h */
    GetMoneyString__FiRt12StackString21Ui256((int)(short)uVar1,&this->m_sPrice);
    this->m_nPrice = (int)(short)uVar1;
                    /* end of inlined section */
    EVar3 = GetCatalogDescription__11ObjSelector(pSel);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseiteminfo.h */
    this->m_sText = *EVar3.ptr;
                    /* end of inlined section */
    this->m_nGuids[this->m_nLockableModelIndex] = pOVar2->guid;
  }
  return;
}

void EPauseItemInfo::SetResSelector(ObjSelector *pSel, ObjSelector *pSel2) {
	ResData *pRes;
	ObjSelector *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	ResData *pRes;
	ObjSelector *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	
  ResData *pRVar1;
  ObjectFolder__vtable *pOVar2;
  ObjectFolder *pOVar3;
  
  this->m_pResSels[this->m_nLockableModelIndex] = pSel;
  this->m_pResSel2s[this->m_nLockableModelIndex] = pSel2;
  if (pSel != (ObjSelector *)0x0) {
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
    pRVar1 = pSel->fHeader->pResData;
    if (pRVar1 != (ResData *)0x0) {
      if (*(int *)(this->m_bNeedDelRefModels + (uint)this->m_nLockableModelIndex * 4) != 0) {
        DelRef__16EResourceManagerUi
                  (&_modelman.field0_0x0,this->m_nModelIds[this->m_nLockableModelIndex]);
        *(undefined4 *)(this->m_bNeedDelRefModels + (uint)this->m_nLockableModelIndex * 4) = 0;
      }
      pOVar3 = _5Globs_pObjectFolder;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      this->m_nModelIds[this->m_nLockableModelIndex] = ((pRVar1->objectStates).pData)->modelID;
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
      __16EResourceManager_m_bTraceEnabled = 0;
                    /* end of inlined section */
      pOVar2 = pOVar3->__vtable;
      (*(code *)pOVar2[1].ResumeObjectFiles)
                ((int)&pOVar3->__vtable + (int)*(short *)&pOVar2[1].SuspendObjectFiles,
                 this->m_pMasterSels[this->m_nLockableModelIndex],0);
      *(undefined4 *)&this->m_bModelPreloadDone = 0;
    }
  }
  if (pSel2 != (ObjSelector *)0x0) {
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
    pRVar1 = pSel2->fHeader->pResData;
    if (pRVar1 == (ResData *)0x0) {
      this->m_pResSel2s[this->m_nLockableModelIndex] = (ObjSelector *)0x0;
    }
    else {
      if (*(int *)(this->m_bNeedDelRefModel2s + (uint)this->m_nLockableModelIndex * 4) != 0) {
        DelRef__16EResourceManagerUi
                  (&_modelman.field0_0x0,this->m_nModelId2s[this->m_nLockableModelIndex]);
        *(undefined4 *)(this->m_bNeedDelRefModel2s + (uint)this->m_nLockableModelIndex * 4) = 0;
      }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      this->m_nModelId2s[this->m_nLockableModelIndex] = ((pRVar1->objectStates).pData)->modelID;
    }
  }
  return;
}

void EPauseItemInfo::SetupCameraPosition() {
	ResData *pRes;
	EMat4 mScaled;
	EBound3 bound;
	EBoundSphere bsphere;
	float fEyeDist;
	float fEyeDistY;
	float fEyeDistZ;
	ObjSelector *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	EAnimController *this;
	float scaler;
	ResData *pRes;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	EAnimController *this;
	float scaler;
	float v;
	float v;
	EVec3 *this;
	ERModel *this;
	EMat4 mScaled2;
	EBound3 bound2;
	float v;
	float v;
	ERModel *this;
	ObjSelector *this;
	ObjSelector *this;
	float y;
	float y;
	
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  ushort uVar4;
  ResData *pRVar5;
  ERModel *pEVar6;
  int iVar7;
  ulong *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  EMat4 mScaled;
  EBoundSphere bsphere;
  EBound3 bound;
  EMat4 mScaled2;
  EBound3 bound2;
  
  uVar9 = (uint)this->m_nLockableModelIndex;
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
  pRVar5 = this->m_pResSels[uVar9]->fHeader->pResData;
  if (*(int *)(this->m_bIsAnimated + uVar9 * 4) != 0) {
    StopAllTracks__15EAnimController(this->m_acs + uVar9);
    Init__15EAnimControllerUi(this->m_acs + this->m_nLockableModelIndex,pRVar5->eorcharacterID);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetTrackAnim__15EAnimControlleriUi
              (this->m_acs + this->m_nLockableModelIndex,0,
               ((pRVar5->objectStates).pData)->animationID);
    SetTrackIntensity__15EAnimControllerif(this->m_acs + this->m_nLockableModelIndex,0,1.0);
  }
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  this->m_acs[this->m_nLockableModelIndex].m_modelScaler =
       this->m_pModels[this->m_nLockableModelIndex]->m_scaler;
                    /* end of inlined section */
  uVar9 = (uint)this->m_nLockableModelIndex;
  if (this->m_pResSel2s[uVar9] == (ObjSelector *)0x0) {
    bVar2 = this->m_nLockableModelIndex;
  }
  else {
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
    pRVar5 = this->m_pResSel2s[uVar9]->fHeader->pResData;
    if (*(int *)(this->m_bIsAnimated2 + uVar9 * 4) != 0) {
      StopAllTracks__15EAnimController(this->m_ac2s + uVar9);
      Init__15EAnimControllerUi(this->m_ac2s + this->m_nLockableModelIndex,pRVar5->eorcharacterID);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      SetTrackAnim__15EAnimControlleriUi
                (this->m_ac2s + this->m_nLockableModelIndex,0,
                 ((pRVar5->objectStates).pData)->animationID);
      SetTrackIntensity__15EAnimControllerif(this->m_ac2s + this->m_nLockableModelIndex,0,1.0);
    }
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
    this->m_ac2s[this->m_nLockableModelIndex].m_modelScaler =
         this->m_pModel2s[this->m_nLockableModelIndex]->m_scaler;
                    /* end of inlined section */
    bVar2 = this->m_nLockableModelIndex;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  bsphere.vCenter.field0_0x0.d[0] = this->m_pModels[bVar2]->m_scaler;
  bsphere.vCenter.field0_0x0.d[1] = bsphere.vCenter.field0_0x0.d[0];
  bsphere.vCenter.field0_0x0.d[2] = bsphere.vCenter.field0_0x0.d[0];
  Scale__5EMat4RC5EVec3(&mScaled,&bsphere.vCenter);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_rmodel.h */
  bsphere.vCenter.field0_0x0.d[2] = 0.0;
  bsphere.vCenter.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  bsphere.vCenter.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_rmodel.h */
  pEVar6 = this->m_pModels[this->m_nLockableModelIndex];
  puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar9);
  *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 | 0UL >> (7 - uVar9) * 8;
  uVar9 = (uint)&bound.vMax & 7;
  puVar8 = (ulong *)((int)&bound.vMax - uVar9);
  *puVar8 = 0L << uVar9 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  bound.vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  uVar3 = (uint)&bound.vMax & 7;
  bound.vMin.field0_0x0._0_8_ =
       *(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 & -1L << (8 - uVar3) * 8 |
       *(ulong *)((int)&bound.vMax - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar9);
  *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 | (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar9) * 8
  ;
  bound.vMin.field0_0x0.d[2] = 0.0;
  Compute__7EBound3RC7EBound3RC5EMat4(&bound,&pEVar6->m_boundBox,&mScaled);
                    /* end of inlined section */
  if (this->m_pResSel2s[this->m_nLockableModelIndex] != (ObjSelector *)0x0) {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    bsphere.vCenter.field0_0x0.d[0] = this->m_pModel2s[this->m_nLockableModelIndex]->m_scaler;
    bsphere.vCenter.field0_0x0.d[1] = bsphere.vCenter.field0_0x0.d[0];
    bsphere.vCenter.field0_0x0.d[2] = bsphere.vCenter.field0_0x0.d[0];
    Scale__5EMat4RC5EVec3(&mScaled2,&bsphere.vCenter);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_rmodel.h */
    bsphere.vCenter.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    bsphere.vCenter.field0_0x0.d[1] = 0.0;
    bsphere.vCenter.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_rmodel.h */
    pEVar6 = this->m_pModel2s[this->m_nLockableModelIndex];
    puVar1 = (undefined *)((int)&bound2.vMax.field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar9);
    *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 | 0UL >> (7 - uVar9) * 8;
    uVar9 = (uint)&bound2.vMax & 7;
    puVar8 = (ulong *)((int)&bound2.vMax - uVar9);
    *puVar8 = 0L << uVar9 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    bound2.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&bound2.vMax.field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    uVar3 = (uint)&bound2.vMax & 7;
    bound2.vMin.field0_0x0._0_8_ =
         *(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 & -1L << (8 - uVar3) * 8 |
         *(ulong *)((int)&bound2.vMax - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&bound2.vMin.field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar9);
    *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 |
              (ulong)bound2.vMin.field0_0x0._0_8_ >> (7 - uVar9) * 8;
    bound2.vMin.field0_0x0.d[2] = 0.0;
    Compute__7EBound3RC7EBound3RC5EMat4(&bound2,&pEVar6->m_boundBox,&mScaled2);
                    /* end of inlined section */
    if (bound.vMax.field0_0x0.d[0] < bound2.vMax.field0_0x0.d[0]) {
      bound.vMax.field0_0x0.d[0] = bound2.vMax.field0_0x0.d[0];
    }
    if (bound2.vMin.field0_0x0.d[0] < bound.vMin.field0_0x0.d[0]) {
      bound.vMin.field0_0x0._0_8_ =
           bound.vMin.field0_0x0._0_8_ & 0xffffffff00000000 |
           bound2.vMin.field0_0x0._0_8_ & 0xffffffff;
    }
    if (bound.vMax.field0_0x0.d[1] < bound2.vMax.field0_0x0.d[1]) {
      bound.vMax.field0_0x0.d[1] = bound2.vMax.field0_0x0.d[1];
    }
    if (bound2.vMin.field0_0x0.d[1] < bound.vMin.field0_0x0.d[1]) {
      bound.vMin.field0_0x0._0_8_ =
           bound2.vMin.field0_0x0._0_8_ & 0xffffffff00000000 |
           bound.vMin.field0_0x0._0_8_ & 0xffffffff;
    }
    if (bound.vMax.field0_0x0.d[2] < bound2.vMax.field0_0x0.d[2]) {
      bound.vMax.field0_0x0.d[2] = bound2.vMax.field0_0x0.d[2];
    }
    if (bound2.vMin.field0_0x0.d[2] < bound.vMin.field0_0x0.d[2]) {
      bound.vMin.field0_0x0.d[2] = bound2.vMin.field0_0x0.d[2];
    }
  }
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
  uVar4 = this->m_pMasterSels[this->m_nLockableModelIndex]->fHeader->functionFlags;
  if (((((uVar4 == 1) || (uVar4 == 0x20)) || (uVar4 == 8)) || ((uVar4 == 0x10 || (uVar4 == 0x40))))
     && (0.0 < bound.vMax.field0_0x0.d[2])) {
    bound.vMin.field0_0x0.d[2] =
         (float)((int)bound.vMin.field0_0x0.d[2] * (uint)(0.0 < bound.vMin.field0_0x0.d[2]));
  }
                    /* end of inlined section */
  CalcBoundSphere__7EBound3R12EBoundSphere(&bound,&bsphere);
                    /* inlined from /eor/src2/common/e_standard_macros.h */
  fVar12 = 0.6981318;
                    /* end of inlined section */
  fVar10 = tanf(0.3490659);
  fVar11 = cosf(fVar12);
  fVar11 = fVar11 * (bsphere.radius / fVar10);
  fVar12 = sinf(fVar12);
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
  fVar12 = fVar12 * (bsphere.radius / fVar10);
  if (((*(uint *)&this->m_pResSels[this->m_nLockableModelIndex]->fHeader->pResData->field_0x4 >> 1 &
       1) == 0) || (*(int *)(this->m_bIsAnimated + (uint)this->m_nLockableModelIndex * 4) == 0)) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar9);
    *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 | ((ulong)(uint)fVar11 << 0x20) >> (7 - uVar9) * 8;
    uVar9 = (uint)&this->m_vEye & 7;
    puVar8 = (ulong *)((int)&this->m_vEye - uVar9);
    *puVar8 = ((ulong)(uint)fVar11 << 0x20) << uVar9 * 8 |
              *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    (this->m_vEye).field0_0x0.d[2] = bsphere.vCenter.field0_0x0.d[2] + fVar12;
    puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar9 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar9);
    *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 | 0UL >> (7 - uVar9) * 8;
    uVar9 = (uint)&this->m_vTarget & 7;
    puVar8 = (ulong *)((int)&this->m_vTarget - uVar9);
    *puVar8 = 0L << uVar9 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    (this->m_vTarget).field0_0x0.d[2] = bsphere.vCenter.field0_0x0.d[2];
    bVar2 = this->m_nLockableModelIndex;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar9);
    *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 | ((ulong)(uint)fVar11 << 0x20) >> (7 - uVar9) * 8;
    uVar9 = (uint)&this->m_vEye & 7;
    puVar8 = (ulong *)((int)&this->m_vEye - uVar9);
    *puVar8 = ((ulong)(uint)fVar11 << 0x20) << uVar9 * 8 |
              *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    (this->m_vEye).field0_0x0.d[2] = fVar12 + 2.0;
    puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar9 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar9);
    *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 | 0UL >> (7 - uVar9) * 8;
    uVar9 = (uint)&this->m_vTarget & 7;
    puVar8 = (ulong *)((int)&this->m_vTarget - uVar9);
    *puVar8 = 0L << uVar9 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    (this->m_vTarget).field0_0x0.d[2] = 2.0;
    bVar2 = this->m_nLockableModelIndex;
  }
  iVar7 = this->m_nGuids[bVar2];
  if (iVar7 == 0x2c501364) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mScaled2.field0_0x0.d[0][2] = 2.353369;
    mScaled2.field0_0x0.d[0][1] = 2.005393;
    fVar12 = 1.047634;
LAB_001af35c:
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar9);
    *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 |
              ((ulong)(uint)mScaled2.field0_0x0.d[0][1] << 0x20) >> (7 - uVar9) * 8;
    uVar9 = (uint)&this->m_vEye & 7;
    puVar8 = (ulong *)((int)&this->m_vEye - uVar9);
    *puVar8 = ((ulong)(uint)mScaled2.field0_0x0.d[0][1] << 0x20) << uVar9 * 8 |
              *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    (this->m_vEye).field0_0x0.d[2] = mScaled2.field0_0x0.d[0][2];
    puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar9 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar9);
    *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 | 0UL >> (7 - uVar9) * 8;
    uVar9 = (uint)&this->m_vTarget & 7;
    puVar8 = (ulong *)((int)&this->m_vTarget - uVar9);
    *puVar8 = 0L << uVar9 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    (this->m_vTarget).field0_0x0.d[2] = fVar12;
    return;
  }
  if (iVar7 < 0x2c501365) {
    if (iVar7 == -0x52ed1f30) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mScaled2.field0_0x0.d[0][2] = 2.196507;
      fVar12 = 1.292936;
                    /* end of inlined section */
      mScaled2.field0_0x0.d[0][1] = 0.911061;
    }
    else {
      if (-0x52ed1f30 < iVar7) {
        if (iVar7 != -0x11582bdb) {
          if (iVar7 < -0x11582bda) {
            if (iVar7 != -0x208811ee) {
              return;
            }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            mScaled2.field0_0x0.d[0][2] = 1.832125;
            fVar12 = 1.340508;
                    /* end of inlined section */
            mScaled2.field0_0x0.d[0][1] = 0.828982;
          }
          else if (iVar7 == -0x28b952e) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            mScaled2.field0_0x0.d[0][2] = 1.731421;
            mScaled2.field0_0x0.d[0][1] = 0.738558;
            fVar12 = 1.233498;
          }
          else {
            if (iVar7 != -0x684571) {
              return;
            }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            mScaled2.field0_0x0.d[0][2] = 2.271724;
            fVar12 = 1.320642;
                    /* end of inlined section */
            mScaled2.field0_0x0.d[0][1] = 0.967683;
          }
                    /* end of inlined section */
          puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
          uVar9 = (uint)puVar1 & 7;
          puVar8 = (ulong *)(puVar1 + -uVar9);
          *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 |
                    ((ulong)(uint)mScaled2.field0_0x0.d[0][1] << 0x20) >> (7 - uVar9) * 8;
          uVar9 = (uint)&this->m_vEye & 7;
          puVar8 = (ulong *)((int)&this->m_vEye - uVar9);
          *puVar8 = ((ulong)(uint)mScaled2.field0_0x0.d[0][1] << 0x20) << uVar9 * 8 |
                    *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
          (this->m_vEye).field0_0x0.d[2] = mScaled2.field0_0x0.d[0][2];
          puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          uVar9 = (uint)puVar1 & 7;
          puVar8 = (ulong *)(puVar1 + -uVar9);
          *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 | 0UL >> (7 - uVar9) * 8;
          uVar9 = (uint)&this->m_vTarget & 7;
          puVar8 = (ulong *)((int)&this->m_vTarget - uVar9);
          *puVar8 = 0L << uVar9 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
          (this->m_vTarget).field0_0x0.d[2] = fVar12;
          return;
        }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        mScaled2.field0_0x0.d[0][2] = 2.558021;
        fVar12 = 2.15;
                    /* end of inlined section */
        mScaled2.field0_0x0.d[0][1] = 0.626673;
        goto LAB_001af35c;
      }
      if (iVar7 == -0x62b4fc5b) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        mScaled2.field0_0x0.d[0][2] = 2.173474;
        mScaled2.field0_0x0.d[0][1] = 1.240966;
        fVar12 = 1.55;
        goto LAB_001af3d4;
      }
      if (iVar7 < -0x62b4fc5a) {
        if (iVar7 != -0x671f614d) {
          return;
        }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        mScaled2.field0_0x0.d[0][2] = 2.209605;
        fVar12 = 0.916577;
                    /* end of inlined section */
        mScaled2.field0_0x0.d[0][1] = 2.447776;
        goto LAB_001af2e4;
      }
      if (iVar7 != -0x549b88b9) {
        return;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mScaled2.field0_0x0.d[0][2] = 1.821321;
      fVar12 = 1.45;
                    /* end of inlined section */
      mScaled2.field0_0x0.d[0][1] = 0.482935;
    }
  }
  else {
    if (iVar7 == 0x6c7caec2) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mScaled2.field0_0x0.d[0][2] = 2.175857;
      mScaled2.field0_0x0.d[0][1] = 1.417297;
      fVar12 = 1.276224;
LAB_001af2e4:
                    /* end of inlined section */
      puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
      uVar9 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar9);
      *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 |
                ((ulong)(uint)mScaled2.field0_0x0.d[0][1] << 0x20) >> (7 - uVar9) * 8;
      uVar9 = (uint)&this->m_vEye & 7;
      puVar8 = (ulong *)((int)&this->m_vEye - uVar9);
      *puVar8 = ((ulong)(uint)mScaled2.field0_0x0.d[0][1] << 0x20) << uVar9 * 8 |
                *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
      (this->m_vEye).field0_0x0.d[2] = mScaled2.field0_0x0.d[0][2];
      puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar9 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar9);
      *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 | 0UL >> (7 - uVar9) * 8;
      uVar9 = (uint)&this->m_vTarget & 7;
      puVar8 = (ulong *)((int)&this->m_vTarget - uVar9);
      *puVar8 = 0L << uVar9 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
      (this->m_vTarget).field0_0x0.d[2] = fVar12;
      return;
    }
    if (iVar7 < 0x6c7caec3) {
      if (iVar7 == 0x62b6f3c1) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        mScaled2.field0_0x0.d[0][2] = 4.297283;
        fVar12 = 2.5;
                    /* end of inlined section */
        mScaled2.field0_0x0.d[0][1] = 1.929549;
        goto LAB_001af2e4;
      }
      if (0x62b6f3c1 < iVar7) {
        if (iVar7 != 0x6b264238) {
          return;
        }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        mScaled2.field0_0x0.d[0][2] = 1.777441;
        fVar12 = 1.35;
                    /* end of inlined section */
        mScaled2.field0_0x0.d[0][1] = 0.449816;
        goto LAB_001af3d4;
      }
      if (iVar7 != 0x2e6b6e2d) {
        return;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mScaled2.field0_0x0.d[0][2] = 11.86685;
      mScaled2.field0_0x0.d[0][1] = 9.382316;
      fVar12 = 4.798656;
    }
    else {
      if (iVar7 != 0x7fab4493) {
        if (iVar7 < 0x7fab4494) {
          if (iVar7 != 0x78edcd25) {
            return;
          }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          mScaled2.field0_0x0.d[0][2] = 1.912598;
          fVar12 = 1.197843;
                    /* end of inlined section */
          mScaled2.field0_0x0.d[0][1] = 0.686039;
        }
        else {
          if (iVar7 == 0x7fd422a4) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            mScaled2.field0_0x0.d[0][2] = 2.052448;
            fVar12 = 1.6;
                    /* end of inlined section */
            mScaled2.field0_0x0.d[0][1] = 0.837766;
            goto LAB_001af35c;
          }
          if (iVar7 != 0x7fdf0fc1) {
            return;
          }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          mScaled2.field0_0x0.d[0][2] = 2.190914;
          fVar12 = 1.7;
                    /* end of inlined section */
          mScaled2.field0_0x0.d[0][1] = 0.883607;
        }
LAB_001af3d4:
                    /* end of inlined section */
        puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
        uVar9 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar9);
        *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 |
                  ((ulong)(uint)mScaled2.field0_0x0.d[0][1] << 0x20) >> (7 - uVar9) * 8;
        uVar9 = (uint)&this->m_vEye & 7;
        puVar8 = (ulong *)((int)&this->m_vEye - uVar9);
        *puVar8 = ((ulong)(uint)mScaled2.field0_0x0.d[0][1] << 0x20) << uVar9 * 8 |
                  *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
        (this->m_vEye).field0_0x0.d[2] = mScaled2.field0_0x0.d[0][2];
        puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        uVar9 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar9);
        *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 | 0UL >> (7 - uVar9) * 8;
        uVar9 = (uint)&this->m_vTarget & 7;
        puVar8 = (ulong *)((int)&this->m_vTarget - uVar9);
        *puVar8 = 0L << uVar9 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
        (this->m_vTarget).field0_0x0.d[2] = fVar12;
        return;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mScaled2.field0_0x0.d[0][2] = 3.115817;
      fVar12 = 2.4;
                    /* end of inlined section */
      mScaled2.field0_0x0.d[0][1] = 0.828338;
    }
  }
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar9);
  *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 |
            ((ulong)(uint)mScaled2.field0_0x0.d[0][1] << 0x20) >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vEye & 7;
  puVar8 = (ulong *)((int)&this->m_vEye - uVar9);
  *puVar8 = ((ulong)(uint)mScaled2.field0_0x0.d[0][1] << 0x20) << uVar9 * 8 |
            *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (this->m_vEye).field0_0x0.d[2] = mScaled2.field0_0x0.d[0][2];
  puVar1 = (undefined *)((int)&(this->m_vTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar9 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar9);
  *puVar8 = *puVar8 & -1L << (uVar9 + 1) * 8 | 0UL >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vTarget & 7;
  puVar8 = (ulong *)((int)&this->m_vTarget - uVar9);
  *puVar8 = 0L << uVar9 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (this->m_vTarget).field0_0x0.d[2] = fVar12;
  return;
}

void EPauseItemInfo::SetupModel() {
	ResData *pRes;
	ObjSelector *this;
	ResData *pRes2;
	ObjSelector *this;
	EAnimController *this;
	float scaler;
	EAnimController *this;
	float scaler;
	
  byte bVar1;
  ERModel *pEVar2;
  int iVar3;
  
  iVar3 = (uint)this->m_nLockableModelIndex * 4;
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
  if (this->m_pResSels[this->m_nLockableModelIndex]->fHeader->pResData->eorcharacterID == 0) {
    *(undefined4 *)(this->m_bIsAnimated + iVar3) = 0;
  }
  else {
    *(undefined4 *)(this->m_bIsAnimated + iVar3) = 1;
  }
  iVar3 = (uint)this->m_nLockableModelIndex * 4;
  if (this->m_pResSel2s[this->m_nLockableModelIndex] == (ObjSelector *)0x0) {
    bVar1 = this->m_nLockableModelIndex;
  }
  else {
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
    if (this->m_pResSel2s[this->m_nLockableModelIndex]->fHeader->pResData->eorcharacterID == 0) {
      *(undefined4 *)(this->m_bIsAnimated2 + iVar3) = 0;
    }
    else {
      *(undefined4 *)(this->m_bIsAnimated2 + iVar3) = 1;
    }
    bVar1 = this->m_nLockableModelIndex;
  }
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
  if ((short)this->m_pMasterSels[bVar1]->fHeader->buildModeType < 3) {
    bVar1 = this->m_nLockableModelIndex;
  }
  else {
    *(undefined4 *)(this->m_bDisplayGround + (uint)bVar1 * 4) = 0;
    bVar1 = this->m_nLockableModelIndex;
  }
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar2 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei
                     (&_modelman.field0_0x0,this->m_nModelIds[bVar1],(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pModels[this->m_nLockableModelIndex] = pEVar2;
  *(undefined4 *)(this->m_bNeedDelRefModels + (uint)this->m_nLockableModelIndex * 4) = 1;
  if (this->m_pResSel2s[this->m_nLockableModelIndex] != (ObjSelector *)0x0) {
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar2 = (ERModel *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_modelman.field0_0x0,this->m_nModelId2s[this->m_nLockableModelIndex],
                        (EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pModel2s[this->m_nLockableModelIndex] = pEVar2;
    *(undefined4 *)(this->m_bNeedDelRefModel2s + (uint)this->m_nLockableModelIndex * 4) = 1;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  this->m_acs[this->m_nLockableModelIndex].m_modelScaler =
       this->m_pModels[this->m_nLockableModelIndex]->m_scaler;
                    /* end of inlined section */
  bVar1 = this->m_nLockableModelIndex;
  if (this->m_pResSel2s[bVar1] != (ObjSelector *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
    this->m_ac2s[bVar1].m_modelScaler = this->m_pModel2s[bVar1]->m_scaler;
  }
                    /* end of inlined section */
  SetupCameraPosition__14EPauseItemInfo(this);
  return;
}

void EPauseItemInfo::SetupLockableModel() {
	HouseData *pHouseData;
	s32 guid;
	u32 id;
	bool bFound;
	UnlockedRecon *pRecon;
	ObjSelector *pMasterSel;
	ObjSelector *pResSel;
	ObjDefinition *pMasterDef;
	ObjSelector *psel;
	ObjSelector *pResSel2;
	VECTOR<LockableAssociation> *this;
	VECTOR<LockableAssociation> *this;
	VECTOR<LockableAssociation> *this;
	VECTOR<LockableAssociation> *this;
	VECTOR<LockableAssociation> *this;
	VECTOR<LockableAssociation> *this;
	VECTOR<LockableAssociation> *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	int nId;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	ObjDefinition *pdef;
	ObjSelector *this;
	ObjSelector *this;
	ObjDefinition *pdef;
	ObjSelector *this;
	ObjSelector *this;
	ObjSelector *this;
	
  uchar uVar1;
  ushort uVar2;
  ushort uVar3;
  int **ppiVar4;
  ObjDefinition *pOVar5;
  ObjDefinition *pOVar6;
  bool bVar7;
  ERQuickdata *this_00;
  void *pvVar8;
  int iVar9;
  NeighborhoodImpl *this_01;
  UnlockedRecon *pUVar10;
  UnlockedId *pUVar11;
  ObjSelector *pOVar12;
  uint uVar13;
  ObjSelector *pOVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  this_00 = (ERQuickdata *)
            AddRef__16EResourceManagerUiP5EFilei
                      (&_quickdataman.field0_0x0,0xa173a1ee,(EFile *)0x0,0);
  pvVar8 = getTable__11ERQuickdataPCc(this_00,"HouseData");
                    /* end of inlined section */
  iVar18 = *(int *)((int)pvVar8 + 4);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  iVar9 = *(int *)((uint)this->m_nHouseNum * 0x58 + iVar18 + 0x14);
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)(iVar9 + -4);
  }
                    /* end of inlined section */
  if (iVar9 <= (int)(uint)this->m_nLockableModelIndex) {
    this->m_nLockableModelIndex = '\0';
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  bVar7 = false;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  iVar9 = *(int *)(*(int *)((uint)this->m_nHouseNum * 0x58 + iVar18 + 0x14) +
                   (uint)this->m_nLockableModelIndex * 0xc + 4);
  this->m_nGuids[this->m_nLockableModelIndex] = iVar9;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  uVar1 = *(uchar *)(*(int *)((uint)this->m_nHouseNum * 0x58 + iVar18 + 0x14) +
                    (uint)this->m_nLockableModelIndex * 0xc);
  DelRef__16EResourceManagerUi(&_quickdataman.field0_0x0,0xa173a1ee);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  this->m_nModelGoalAssociations[this->m_nLockableModelIndex] =
       *(uchar *)(*(int *)((uint)this->m_nHouseNum * 0x58 + iVar18 + 0x14) +
                  (uint)this->m_nLockableModelIndex * 0xc + 8);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar15 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                     ((int)&_5Globs_pNeighborhood->__vtable +
                      (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
  if (lVar15 == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    this_01 = (NeighborhoodImpl *)
              (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    pUVar10 = GetUnlockedRecon__16NeighborhoodImpl(this_01);
  }
  else {
    pUVar10 = &(_globals.m_pOptionsRecon)->m_Unlocked;
  }
  iVar19 = 0;
  *(undefined4 *)(this->m_bModelsLocked + (uint)this->m_nLockableModelIndex * 4) = 1;
                    /* inlined from ../MSrc/vector.h */
  iVar18 = (int)(pUVar10->objects).finish - (int)(pUVar10->objects).start;
                    /* end of inlined section */
  if (0 < iVar18) {
                    /* inlined from ../MSrc/vector.h */
    pUVar11 = (pUVar10->objects).start;
    while( true ) {
      pUVar11 = pUVar11 + iVar19;
                    /* end of inlined section */
      iVar19 = iVar19 + 1;
      if (pUVar11->id == uVar1) {
        bVar7 = true;
        *(undefined4 *)(this->m_bModelsLocked + (uint)this->m_nLockableModelIndex * 4) = 0;
      }
      if ((iVar18 <= iVar19) || (bVar7)) break;
      pUVar11 = (pUVar10->objects).start;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pOVar12 = (ObjSelector *)0x0;
  lVar15 = 0;
  bVar7 = false;
  lVar16 = (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                     ((int)&_5Globs_pObjectFolder->__vtable +
                      (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,0);
  if (lVar16 != 0) {
                    /* inlined from ../MSrc/ObjSelector.h */
    iVar18 = *(int *)((int)lVar16 + 0x18);
    while( true ) {
      if ((iVar18 != 0) && (ppiVar4 = *(int ***)(iVar18 + 0xc0), ppiVar4 != (int **)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        if (*ppiVar4 == (int *)0x0) {
          iVar18 = 0;
        }
        else {
          iVar18 = (*ppiVar4)[-1];
        }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        if ((iVar18 != 0) && (**ppiVar4 != 0)) {
          pOVar12 = GetMasterSelector__11ObjSelector((ObjSelector *)lVar16);
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
          if (pOVar12->fHeader->guid == iVar9) {
            bVar7 = true;
            lVar15 = lVar16;
          }
        }
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar16 = (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                         ((int)&_5Globs_pObjectFolder->__vtable +
                          (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,lVar16
                         );
      if ((lVar16 == 0) || (bVar7)) break;
      iVar18 = *(int *)((int)lVar16 + 0x18);
    }
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar16 = 0;
  pOVar14 = (ObjSelector *)0x0;
  bVar7 = false;
  lVar17 = (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                     ((int)&_5Globs_pObjectFolder->__vtable +
                      (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,0);
  if (lVar17 == 0) {
    uVar13 = (uint)this->m_nLockableModelIndex;
  }
  else {
                    /* inlined from ../MSrc/ObjSelector.h */
    iVar18 = *(int *)((int)lVar17 + 0x18);
    while( true ) {
      if ((iVar18 != 0) && (ppiVar4 = *(int ***)(iVar18 + 0xc0), ppiVar4 != (int **)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        if (*ppiVar4 == (int *)0x0) {
          iVar18 = 0;
        }
        else {
          iVar18 = (*ppiVar4)[-1];
        }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        if ((iVar18 != 0) && (**ppiVar4 != 0)) {
          pOVar14 = GetMasterSelector__11ObjSelector((ObjSelector *)lVar17);
          if ((pOVar14 == pOVar12) && (lVar17 != lVar15)) {
                    /* inlined from ../MSrc/ObjSelector.h */
            pOVar5 = ((ObjSelector *)lVar15)->fHeader;
            pOVar6 = ((ObjSelector *)lVar17)->fHeader;
                    /* end of inlined section */
            if (((((*(uint *)&pOVar5->pResData->field_0x4 & 0x20) ==
                   (*(uint *)&pOVar6->pResData->field_0x4 & 0x20)) &&
                 (uVar2 = pOVar5->interactionGroup, (short)uVar2 < 0)) &&
                (uVar3 = pOVar6->interactionGroup, (short)uVar3 < 0)) && (uVar2 != uVar3)) {
              bVar7 = true;
              lVar16 = lVar17;
            }
          }
        }
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
      pOVar14 = (ObjSelector *)lVar16;
                    /* end of inlined section */
      lVar17 = (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                         ((int)&_5Globs_pObjectFolder->__vtable +
                          (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,lVar17
                         );
      if (lVar17 == 0) {
        uVar13 = (uint)this->m_nLockableModelIndex;
        goto LAB_001afa6c;
      }
      if (bVar7) break;
      iVar18 = *(int *)((int)lVar17 + 0x18);
    }
    uVar13 = (uint)this->m_nLockableModelIndex;
  }
LAB_001afa6c:
  this->m_pMasterSels[uVar13] = pOVar12;
  SetResSelector__14EPauseItemInfoP11ObjSelectorT1(this,(ObjSelector *)lVar15,pOVar14);
  return;
}

void EPauseItemInfo::SetDialogMode(u32 mode) {
	EHouse *this;
	HouseData *pHouseData;
	cXObject *obj;
	ELocString *this;
	VECTOR<LockableAssociation> *this;
	cXObjectImpl *srch;
	short int stackVars[4];
	Behavior *b;
	ChallengeData *pChallengeData;
	ELocString *this;
	
  int iVar1;
  ushort treeID;
  short sVar2;
  uint uVar3;
  ERQuickdata *pEVar4;
  void *pvVar5;
  code *pcVar6;
  TreeSimImpl__21_3338 **ppTVar7;
  Behavior *this_00;
  long lVar9;
  int iVar10;
  ushort stackVars [4];
  long lVar8;
  
  this->m_nDialogMode = mode;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  uVar3 = (_globals._pCurHouse)->m_lotNum - 1;
  this->m_nHouseNum = (uchar)uVar3;
  if (7 < (uVar3 & 0xff)) {
    this->m_nHouseNum = '\a';
  }
  if (mode == 1) {
    if (this->m_nNeighborhoodMode == 2) {
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
      pEVar4 = (ERQuickdata *)
               AddRef__16EResourceManagerUiP5EFilei
                         (&_quickdataman.field0_0x0,0xa173a1ee,(EFile *)0x0,0);
      pvVar5 = getTable__11ERQuickdataPCc(pEVar4,"ChallengeData");
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      this->m_sName = **(short ***)((uint)this->m_nHouseNum * 100 + *(int *)((int)pvVar5 + 4));
      DelRef__16EResourceManagerUi(&_quickdataman.field0_0x0,0xa173a1ee);
    }
    else {
      this->m_nLockableModelIndex = '\0';
                    /* end of inlined section */
      SetupLockableModel__14EPauseItemInfo(this);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
      pEVar4 = (ERQuickdata *)
               AddRef__16EResourceManagerUiP5EFilei
                         (&_quickdataman.field0_0x0,0xa173a1ee,(EFile *)0x0,0);
      pvVar5 = getTable__11ERQuickdataPCc(pEVar4,"HouseData");
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      iVar10 = *(int *)((int)pvVar5 + 4);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      this->m_sName = **(short ***)((uint)this->m_nHouseNum * 0x58 + iVar10);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar10 = *(int *)((uint)this->m_nHouseNum * 0x58 + iVar10 + 0x14);
      uVar3 = 0;
      if (iVar10 != 0) {
        uVar3 = *(uint *)(iVar10 + -4);
      }
                    /* end of inlined section */
      this->m_nNumLockables = (uchar)uVar3;
      if (8 < (uVar3 & 0xff)) {
        this->m_nNumLockables = '\b';
      }
      DelRef__16EResourceManagerUi(&_quickdataman.field0_0x0,0xa173a1ee);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      pcVar6 = (code *)_5Globs_pObjectModule->__vtable->LevelInfoRequested;
      iVar10 = (int)&_5Globs_pObjectModule->__vtable +
               (int)*(short *)&_5Globs_pObjectModule->__vtable->CleanupPeople;
      while( true ) {
        lVar8 = (*pcVar6)(iVar10);
        iVar10 = (int)lVar8;
        if ((lVar8 == 0) ||
           (lVar9 = (**(code **)(*(int *)(iVar10 + 4) + 0x20c))
                              (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x208),0x3b), lVar9 == 10)
           ) break;
        pcVar6 = *(code **)(*(int *)(iVar10 + 4) + 0x3fc);
        iVar10 = iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x3f8);
      }
      this->m_nDisplayFlags = 0;
      this->m_nCompletedFlags = 0;
      if (lVar8 != 0) {
        ppTVar7 = (TreeSimImpl__21_3338 **)
                  (**(code **)(*(int *)(iVar10 + 4) + 0x454))
                            (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x450));
        stackVars[0] = 0;
        stackVars[1] = 0;
        stackVars[2] = 0;
        stackVars[3] = 0;
        iVar1 = ppTVar7[1]->fIterations;
        this_00 = (Behavior *)
                  (**(code **)(iVar1 + 0x2f4))
                            ((int)&ppTVar7[1]->_vb899 + (int)*(short *)(iVar1 + 0x2f0));
        treeID = GetTreeIDByName__8BehaviorPCc(this_00,"get unlock data");
        if (treeID != 0) {
          RunOneTickTree__11TreeSimImplP8BehaviorssPs(*ppTVar7,this_00,0,treeID,stackVars);
        }
        (**(code **)(*(int *)(iVar10 + 4) + 0x214))
                  (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x210),0);
        (**(code **)(*(int *)(iVar10 + 4) + 0x214))
                  (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x210),1);
        sVar2 = (**(code **)(*(int *)(iVar10 + 4) + 0x214))
                          (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x210),0);
        this->m_nDisplayFlags = sVar2;
        sVar2 = (**(code **)(*(int *)(iVar10 + 4) + 0x214))
                          (iVar10 + *(short *)(*(int *)(iVar10 + 4) + 0x210),1);
        this->m_nCompletedFlags = sVar2;
      }
    }
  }
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

void* EPauseItemInfo::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EPauseItemInfo::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

void EPauseItemInfo::SetReceiver(EUIObjectNode *pNode) {
  this->m_pReceiver = pNode;
  return;
}

void EPauseItemInfo::SetPrice(u32 iPrice) {
  GetMoneyString__FiRt12StackString21Ui256(iPrice,&this->m_sPrice);
  this->m_nPrice = iPrice;
  return;
}

void EPauseItemInfo::SetName(c16 *sName) {
  this->m_sName = sName;
  return;
}

void EPauseItemInfo::SetText(c16 *sText) {
  this->m_sText = sText;
  return;
}

ObjSelector* EPauseItemInfo::GetMasterSelector() {
  return this->m_pMasterSels[this->m_nLockableModelIndex];
}
