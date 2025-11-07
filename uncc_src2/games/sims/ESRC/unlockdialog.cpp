// STATUS: NOT STARTED

#include "unlockdialog.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb3468;
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
	Panelstateman *$vb3468;
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
	Panelstateman *$vb3468;
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
	TreeSim *$vb3330;
	__vtbl_ptr_type *$vf3386;
	
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
	TreeSim *$vb3330;
	Int fIterations;
	TreeStack fStack;
	Int fLastTrans;
	bool fLastResult;
	StdPrm *fAutoStackArea;
	SInt16 fError;
	__vtbl_ptr_type *$vf4743;
	
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
	TreeSimImpl *$vb4743;
	cXObject *$vb3386;
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
	__vtbl_ptr_type *$vf3332;
	
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

__vtbl_ptr_type EUnlockDialog virtual table[11] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUnlockDialog::~EUnlockDialog,
		/* .__delta2 = */ 13192
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUnlockDialog::SafeDelete,
		/* .__delta2 = */ 23408
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUnlockDialog::Update,
		/* .__delta2 = */ 18120
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUnlockDialog::Draw,
		/* .__delta2 = */ 16496
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialogWin::GetEnteredText,
		/* .__delta2 = */ -24448
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialogWin::SetObject,
		/* .__delta2 = */ -24352
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialogWin::SetObject,
		/* .__delta2 = */ -24272
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUnlockDialog::SetParams,
		/* .__delta2 = */ 14272
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialogWin::PutPanelToSleep,
		/* .__delta2 = */ 28832
	},
	/* [10] = */ {
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

EUnlockDialog* EUnlockDialog::EUnlockDialog(s32 guid) {
	EVec3 vPos;
	
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
  EUIStaticTextIcon *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar11;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EUIIconDef local_190;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  EVec3 vPos;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  EUITextIconDef local_130;
  EUIIconDef local_110;
  EUIIconDef__vtable *local_f0;
  uint local_e0;
  EVec3 *local_dc;
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
  
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  iVar11 = 0;
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  this_00 = (EUIStaticTextIcon *)this->m_Prompts;
  local_e0 = guid;
  __10EDialogWin(&this->field0_0x0);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EDialogWin__vtable *)_vt_13EUnlockDialog;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_190.m_trigger = 0x40;
  local_190.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_190.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_190.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_190.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_190.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon,&local_190,0,0,0x40);
  local_dc = (EVec3 *)&local_140;
  local_c0 = 0x40;
  uStack_bc = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_190.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_190.m_flags = 0;
    local_190.m_selColorIdx = 0;
                    /* end of inlined section */
    iVar11 = iVar11 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_190.m_colorIdx = 1;
    local_190.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_16c = 0;
    local_168 = 0;
    local_164 = 0x41400000;
    local_160 = 0;
    local_15c = 1;
    local_158 = CONCAT22(local_158._2_2_,0xffff);
    vPos.field0_0x0.d[2] = 0.0;
    vPos.field0_0x0.d[1] = 0.0;
    vPos.field0_0x0.d[0] = 0.0;
    local_138 = 0;
    local_13c = 0;
    local_140 = 0;
    local_130.m_xAlign = E_FAX_LEFT;
    local_130.m_yAlign = E_FAY_TOP;
    local_130.m_pointsize = 12.0;
    local_130.m_selColorIdx = 0;
    local_130.m_colorIdx = 1;
    local_130.m_retChar = -1;
    local_110.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_110.m_flags = 0;
    local_110.m_selColorIdx = 0;
    local_110.m_colorIdx = 1;
    local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_190.m_trigger = local_c0;
    local_170 = local_d0;
    local_130.m_maxChars = local_d0;
    local_110.m_trigger = local_c0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (this_00,&local_130,&local_110,-1,local_dc);
    local_110.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (this_00->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_xAlign + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_16c,local_170) >> (7 - uVar9) * 8;
    pEVar2 = &(this_00->field0_0x0).m_textdef;
    uVar9 = (uint)pEVar2 & 7;
    puVar10 = (ulong *)((int)pEVar2 - uVar9);
    *puVar10 = CONCAT44(local_16c,local_170) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_pointsize + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_164,local_168) >> (7 - uVar9) * 8;
    pEVar3 = &(this_00->field0_0x0).m_textdef.m_yAlign;
    uVar9 = (uint)pEVar3 & 7;
    puVar10 = (ulong *)((int)pEVar3 - uVar9);
    *puVar10 = CONCAT44(local_164,local_168) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_15c,local_160) >> (7 - uVar9) * 8;
    puVar4 = &(this_00->field0_0x0).m_textdef.m_selColorIdx;
    uVar9 = (uint)puVar4 & 7;
    puVar10 = (ulong *)((int)puVar4 - uVar9);
    *puVar10 = CONCAT44(local_15c,local_160) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    *(undefined4 *)&(this_00->field0_0x0).m_textdef.m_retChar = local_158;
    local_f0 = (this_00->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_190.m_trigger,local_190.m_flags) >> (7 - uVar9) * 8;
    pEVar5 = &(this_00->field0_0x0).field0_0x0.m_def;
    uVar9 = (uint)pEVar5 & 7;
    puVar10 = (ulong *)((int)pEVar5 - uVar9);
    *puVar10 = CONCAT44(local_190.m_trigger,local_190.m_flags) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_190.m_colorIdx,local_190.m_selColorIdx) >> (7 - uVar9) * 8;
    piVar6 = &(this_00->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar9 = (uint)piVar6 & 7;
    puVar10 = (ulong *)((int)piVar6 - uVar9);
    *puVar10 = CONCAT44(local_190.m_colorIdx,local_190.m_selColorIdx) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_190.__vtable,local_190.m_pCtrl) >> (7 - uVar9) * 8;
    ppEVar7 = &(this_00->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar9 = (uint)ppEVar7 & 7;
    puVar10 = (ulong *)((int)ppEVar7 - uVar9);
    *puVar10 = CONCAT44(local_190.__vtable,local_190.m_pCtrl) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    (this_00->field0_0x0).field0_0x0.m_def.__vtable = local_f0;
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    this_00 = (EUIStaticTextIcon *)&this_00[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_190.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar11 != -1);
  __10EPromptBar(&this->m_PromptBar);
                    /* end of inlined section */
  iVar11 = -1;
  do {
    bVar8 = iVar11 != -1;
    iVar11 = iVar11 + -1;
  } while (bVar8);
  __4EUfo(&this->m_ufo);
  __9E3DWindow(&this->m_win);
  __15EAnimController(&this->m_ac);
  __15EAnimController(&this->m_ac2);
  this->m_pMasterSel = (ObjSelector *)0x0;
  this->m_nGuid = local_e0;
  this->m_pResSel = (ObjSelector *)0x0;
  this->m_pResSel2 = (ObjSelector *)0x0;
  this->m_pGround = (EDL *)0x0;
  this->m_pModel = (ERModel *)0x0;
  this->m_pModel2 = (ERModel *)0x0;
  this->m_pFont = (ERFont *)0x0;
  this->m_pWin = (EWindow *)0x0;
  this->m_pWhiteLight = (ERShader *)0x0;
  this->m_pStar = (ERShader *)0x0;
  return this;
}

void EUnlockDialog::~EUnlockDialog(int __in_chrg) {
	void *ptr;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIPrompt *pEVar3;
  
  (this->field0_0x0).__vtable = (EDialogWin__vtable *)_vt_13EUnlockDialog;
  Reset__13EUnlockDialog(this);
  ___15EAnimController(&this->m_ac2,2);
  ___15EAnimController(&this->m_ac,2);
  ___7EWindow(&(this->m_win).field0_0x0,0);
  ___10EPromptBar(&this->m_PromptBar,2);
  if ((this != (EUnlockDialog *)0xfffffc6c) && (this->m_Prompts != (EUIPrompt *)&this->m_PromptBar))
  {
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
  ___10EDialogWin(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/unlockdialog.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EUnlockDialog::InitParticles(int nSet) {
	int i;
	int nStart;
	int nEnd;
	float fSpeed;
	float fDirection;
	EVec2 vPos;
	EGraphics *this;
	
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float x;
  EVec2 vPos;
  
  iVar4 = rand();
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
  uVar5 = rand();
  fVar11 = 0.25;
  if ((uVar5 & 1) == 0) {
    fVar11 = 0.75;
  }
  if (nSet == 0) {
    iVar6 = rand();
    uVar5 = 0;
    uVar10 = 10;
    fVar13 = (float)(iVar6 % 0x50 + 10) * 0.01;
    iVar6 = rand();
    iVar7 = rand();
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    (this->m_vParticle0ColorEnd).field0_0x0.d[0] = fVar13;
    (this->m_vParticle0ColorEnd).field0_0x0.d[1] = (float)(iVar6 % 0x50 + 10) * 0.01;
    (this->m_vParticle0ColorEnd).field0_0x0.d[2] = (float)(iVar7 % 0x50 + 10) * 0.01;
    (this->m_vParticle0ColorEnd).field0_0x0.d[3] = 1.0;
  }
  else {
    iVar6 = rand();
    uVar5 = 10;
    uVar10 = 0x14;
    fVar13 = (float)(iVar6 % 0x50 + 10) * 0.01;
    iVar6 = rand();
    iVar7 = rand();
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    (this->m_vParticle1ColorEnd).field0_0x0.d[0] = fVar13;
    (this->m_vParticle1ColorEnd).field0_0x0.d[1] = (float)(iVar6 % 0x50 + 10) * 0.01;
    (this->m_vParticle1ColorEnd).field0_0x0.d[2] = (float)(iVar7 % 0x50 + 10) * 0.01;
    (this->m_vParticle1ColorEnd).field0_0x0.d[3] = 1.0;
  }
  if (uVar5 < uVar10) {
    fVar13 = 0.01745329;
    pfVar8 = this->m_fParticleLife[uVar5] + 1;
    pfVar9 = this->m_fParticlePos[uVar5] + 1;
    do {
      uVar5 = uVar5 + 1;
      (*(float (*) [2])(pfVar9 + -1))[0] = fVar11;
      *pfVar9 = (float)(iVar4 % 0x19 + 0x19) * 0.01;
      iVar6 = rand();
      pfVar9 = pfVar9 + 2;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
      fVar14 = (float)(iVar6 % 0x4b + 0x9b) / (float)_pGfx->m_xscreen;
      iVar6 = rand();
      x = (float)(iVar6 % 0x168) * fVar13;
      fVar12 = cosf(x);
      pfVar8[-0x29] = fVar12 * fVar14;
      fVar12 = sinf(x);
      (*(float (*) [2])(pfVar8 + -1))[0] = 0.1;
      *pfVar8 = 1.25;
      pfVar8[-0x28] = fVar12 * fVar14;
      pfVar8 = pfVar8 + 2;
    } while ((int)uVar5 < (int)uVar10);
  }
  uVar3 = _WHITE.field0_0x0.d[3];
  uVar2 = _WHITE.field0_0x0.d[2];
  uVar1 = _WHITE.field0_0x0._0_8_;
  (this->m_vParticleColorStart).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (this->m_vParticleColorStart).field0_0x0.d[1] = (float)((ulong)uVar1 >> 0x20);
  (this->m_vParticleColorStart).field0_0x0.d[2] = uVar2;
  (this->m_vParticleColorStart).field0_0x0.d[3] = uVar3;
  return;
}

void EUnlockDialog::SetParams(StackElem *elem, DialogParam *dialogParam) {
	EVec2 vInteriorSize;
	EVec2 vInteriorPos;
	EVec2 vGapSize;
	EVec2 vScreenSize;
	EFloatRect drawWin;
	ERC *prc;
	ERFont *this;
	EGraphics *this;
	float y;
	EUIIcon *this;
	EGraphics *this;
	EVec3 *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  EDirLight *pEVar5;
  short sVar6;
  EUIObjectNode__vtable *pEVar7;
  EGlobalManagerClient__vtable *pEVar8;
  uint uVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  EGraphics *pEVar15;
  ERFont *pEVar16;
  short *psVar17;
  EWindow *pEVar18;
  ERShader *pEVar19;
  EDL *pEVar20;
  undefined8 uVar21;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  EUIIcon *this_00;
  undefined8 unaff_s2;
  EUIPrompt *this_01;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fovYDegrees;
  EVec2 vInteriorSize;
  EVec2 vInteriorPos;
  EVec2 vGapSize;
  EVec2 vScreenSize;
  TRect_float_ drawWin;
  TRect_float_ local_130;
  EUIIconDef__vtable *local_120;
  int local_110;
  int local_10c;
  EHashTableNode *local_108;
  EHashTableNode **local_100;
  uint local_fc;
  float local_f8;
  EFontSize *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  EVec2 *local_e0;
  undefined4 local_d0;
  undefined4 uStack_cc;
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
  
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_e0 = &this->m_vPromptPos;
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  this->m_nDialogMode = 0;
  this->m_nModelId = 0;
  this->m_nModelId2 = 0;
  *(undefined4 *)&this->m_bNeedDelRefModel = 0;
  *(undefined4 *)&this->m_bNeedDelRefModel2 = 0;
  *(undefined4 *)&this->m_bDisplayGround = 1;
  InitParticles__13EUnlockDialogi(this,0);
  InitParticles__13EUnlockDialogi(this,2);
  fVar30 = 0.6;
  *(undefined4 *)&this->m_bDelaySet1Start = 1;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
  this->m_fTicker0 = 0.0;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
  this->m_fTicker1 = 0.0;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar16 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  fVar26 = 0.5;
  this->m_pFont = pEVar16;
  SetSize__6ERFontffb(pEVar16,16.0,1.0,true);
  uVar14 = _WHITE.field0_0x0.d[3];
  uVar13 = _WHITE.field0_0x0.d[2];
  uVar12 = _WHITE.field0_0x0._0_8_;
  fovYDegrees = 40.0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar16 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar16->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar16->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar12 >> 0x20);
  (pEVar16->m_vColor).field0_0x0.d[2] = uVar13;
  (pEVar16->m_vColor).field0_0x0.d[3] = uVar14;
  pEVar15 = _pGfx;
                    /* end of inlined section */
  (this->m_pos).field0_0x0.d[2] = 0.2;
  (this->m_WDH).field0_0x0.d[0] = 0.7;
  (this->m_WDH).field0_0x0.d[2] = fVar30;
  (this->m_pos).field0_0x0.d[0] = 0.15;
  fVar28 = 0.7 - 32.0 / (float)pEVar15->m_xscreen;
  fVar24 = fVar30 - 32.0 / (float)pEVar15->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_130.left = 16.0 / (float)pEVar15->m_xscreen + 0.15;
  fVar31 = 16.0 / (float)pEVar15->m_yscreen + 0.2;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  drawWin.left = local_130.left + fVar28 * fVar26;
  fVar29 = 5.0 / (float)pEVar15->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  iVar22 = pEVar15->m_yscreen;
  iVar27 = pEVar15->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar25 = 40.0 / (float)iVar22;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (this->m_vPromptSize).field0_0x0.d[0] = fVar28;
  (this->m_vPromptSize).field0_0x0.d[1] = fVar25;
  drawWin.top = (fVar31 + fVar24) - fVar25 * fVar26;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_vPromptPos).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
             CONCAT44(drawWin.top,drawWin.left) >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vPromptPos & 7;
  puVar10 = (ulong *)((int)&this->m_vPromptPos - uVar9);
  *puVar10 = CONCAT44(drawWin.top,drawWin.left) << uVar9 * 8 |
             *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (this->m_vTextSize).field0_0x0.d[0] = fVar28;
  fVar24 = fVar24 - ((this->m_vPromptSize).field0_0x0.d[1] + fVar29);
  fVar25 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
  pEVar16 = this->m_pFont;
  psVar17 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"now_unlocked_message");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&drawWin,pEVar16,SUB41(psVar17,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  fVar25 = drawWin.top + drawWin.top + fVar25;
  (this->m_vTextSize).field0_0x0.d[1] = fVar25;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar11 = CONCAT44((fVar31 + fVar24) - fVar25,local_130.left + fVar28 * fVar26);
  puVar1 = (undefined *)((int)&(this->m_vTextPos).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar11 >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vTextPos & 7;
  puVar10 = (ulong *)((int)&this->m_vTextPos - uVar9);
  *puVar10 = uVar11 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (this->m_vModelSize).field0_0x0.d[0] = fVar28;
  fVar24 = fVar24 - ((this->m_vTextSize).field0_0x0.d[1] + fVar29);
  fVar25 = fVar24 * 1.333333;
  (this->m_vModelSize).field0_0x0.d[1] = fVar24;
  if (fVar25 < fVar28) {
    (this->m_vModelSize).field0_0x0.d[0] = fVar25;
  }
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  this_00 = &this->m_XIcon;
                    /* end of inlined section */
  this_01 = this->m_Prompts;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_108 = (EHashTableNode *)0x40800000;
                    /* end of inlined section */
  drawWin.left = (local_130.left + fVar28 * fVar26) - (this->m_vModelSize).field0_0x0.d[0] * fVar26;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_vModelPos).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(fVar31,drawWin.left) >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vModelPos & 7;
  puVar10 = (ulong *)((int)&this->m_vModelPos - uVar9);
  *puVar10 = CONCAT44(fVar31,drawWin.left) << uVar9 * 8 |
             *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  drawWin.top = fVar31;
                    /* inlined from /eor/src2/engine/window/e_window.h */
  pEVar18 = (EWindow *)_memmanAlloc__FUiUi(0xa0,0x10);
                    /* end of inlined section */
  pEVar18 = __7EWindow(pEVar18);
  local_130.top = (this->m_vTextPos).field0_0x0.d[1];
  local_130.right = local_130.left + fVar28;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  local_130.bottom = local_130.top + (this->m_vTextSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  this->m_pWin = pEVar18;
                    /* end of inlined section */
  SetClip__7EWindowRCt5TRect1Zf(pEVar18,&local_130);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar19 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x39b9b2bf,(EFile *)0x0,0);
  this->m_pWhiteLight = pEVar19;
  pEVar19 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x50410c9d,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  drawWin.right = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  drawWin.bottom = 1.401298e-45;
                    /* end of inlined section */
  this->m_pStar = pEVar19;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_130.left = 0.0;
  local_120 = (this->m_XIcon).m_def.__vtable;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar9) * 8;
  pEVar2 = &(this->m_XIcon).m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = -0xffffffff << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x100000000U >> (7 - uVar9) * 8;
  piVar3 = &(this->m_XIcon).m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = 0x100000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3a890800000000U >> (7 - uVar9) * 8;
  ppEVar4 = &(this->m_XIcon).m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = 0x3a890800000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (this->m_XIcon).m_def.__vtable = local_120;
  local_130.top = (float)_vt_10EUIIconDef;
                    /* end of inlined section */
  iVar23 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  drawWin.left = 0.05;
                    /* end of inlined section */
  drawWin.top = 32.0 / (float)iVar23;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[2] = drawWin.top;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_00,-0x3e263a13);
  InitInActiveShader__7EUIIconi(this_00,-0x3e263a13);
  pEVar7 = this->m_Prompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar6 = *(short *)&pEVar7[2].StateChanged;
  psVar17 = GetUiString__7EGlobalPCc(&_globals,"ok");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(this_01->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar6 + 4,
             psVar17,0x20);
  AddIcon__9EUIPromptP7EUIIcon(this_01,this_00);
  Init__10EPromptBar(&this->m_PromptBar);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  drawWin.left = (this->m_vPromptPos).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  drawWin.top = (local_e0->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(&this->m_PromptBar,this_01,1,(EVec2 *)(ERFont *)&drawWin);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(this->m_lights).field0_0x0.a.vColor.field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(fVar30,fVar30) >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_lights & 7;
  puVar10 = (ulong *)((int)&this->m_lights - uVar9);
  *puVar10 = CONCAT44(fVar30,fVar30) << uVar9 * 8 |
             *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  *(float *)((int)&(this->m_lights).field0_0x0.a.vColor.field0_0x0 + 8) = fVar30;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  drawWin.right = 1.0;
  drawWin.top = 1.0;
  drawWin.left = 1.0;
  puVar1 = (undefined *)((int)&(this->m_lights).d[0].vColor.field0_0x0 + 7);
                    /* end of inlined section */
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3f8000003f800000U >> (7 - uVar9) * 8;
  pEVar5 = (this->m_lights).d;
  uVar9 = (uint)pEVar5 & 7;
  puVar10 = (ulong *)((int)pEVar5 - uVar9);
  *puVar10 = 0x3f8000003f800000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (this->m_lights).d[0].vColor.field0_0x0.d[2] = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_lights).d[0].vDir.field0_0x0.d[0] = 0.0;
  (this->m_lights).d[0].vDir.field0_0x0.d[2] = -2.0;
  (this->m_lights).d[0].vDir.field0_0x0.d[1] = 1.0;
  fVar30 = (this->m_lights).d[0].vDir.field0_0x0.d[0];
  fVar30 = sqrtf(fVar30 * fVar30 + 1.0 + (float)local_108);
  if (fVar30 != 0.0) {
    fVar30 = 1.0 / fVar30;
    (this->m_lights).d[0].vDir.field0_0x0.d[0] = (this->m_lights).d[0].vDir.field0_0x0.d[0] * fVar30
    ;
    fVar26 = (this->m_lights).d[0].vDir.field0_0x0.d[2];
    (this->m_lights).d[0].vDir.field0_0x0.d[1] = (this->m_lights).d[0].vDir.field0_0x0.d[1] * fVar30
    ;
    (this->m_lights).d[0].vDir.field0_0x0.d[2] = fVar26 * fVar30;
                    /* end of inlined section */
  }
  fVar24 = (float)local_108 / (float)iVar27;
  fVar26 = (this->m_vModelPos).field0_0x0.d[0];
  fVar25 = (float)local_108 / (float)iVar22;
  fVar30 = (this->m_vModelPos).field0_0x0.d[1];
  drawWin.left = fVar26 + fVar24;
  drawWin.top = fVar30 + fVar25;
  drawWin.bottom = (fVar30 + (this->m_vModelSize).field0_0x0.d[1]) - fVar25;
  drawWin.right = (fVar26 + (this->m_vModelSize).field0_0x0.d[0]) - fVar24;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  pEVar8 = (_pGfx->field0_0x0).__vtable;
  fVar30 = (float)(*(code *)pEVar8[0xd].EGlobalManagerClient)
                            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar8 + 0xd));
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  SetProjection__9E3DWindowffff
            (&this->m_win,fovYDegrees,
             (fVar30 * (drawWin.right - drawWin.left)) / (drawWin.bottom - drawWin.top),0.3,200.0);
  SetViewport__9E3DWindowRCt5TRect1Zf(&this->m_win,(TRect_float_ *)(ERFont *)&drawWin);
  pEVar8 = (_pGfx->field0_0x0).__vtable;
  uVar21 = (*(code *)pEVar8[6].EGlobalManagerClient)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar8 + 6),1);
  Rect__10EPrimitiveP3ERCff((ERC *)uVar21,2.0,2.0);
  pEVar8 = (_pGfx->field0_0x0).__vtable;
  pEVar20 = (EDL *)(*(code *)pEVar8[6].ManagedShutdown)
                             ((int)&(_pGfx->field0_0x0).__vtable +
                              (int)*(short *)&pEVar8[6].ManagedStartup,uVar21);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_110 = 0;
  local_10c = -0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_100 = (EHashTableNode **)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_fc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_f8 = 1.0;
  local_f0 = (EFontSize *)0x0;
  local_ec = 0;
                    /* end of inlined section */
  this->m_pGround = pEVar20;
                    /* end of inlined section */
  local_e8 = 0x3f800000;
  SetPos__4EUfoRC5EVec3N21(&this->m_ufo,(EVec3 *)&local_110,(EVec3 *)&local_100,(EVec3 *)&local_f0);
                    /* inlined from /eor/src2/engine/e_ufo.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_ufo.h */
  (this->m_ufo).m_transSpeed = 50.0;
                    /* end of inlined section */
  this->m_fAngle = 0.0;
  this->m_pModel = (ERModel *)0x0;
  this->m_pModel2 = (ERModel *)0x0;
  SetGUID__13EUnlockDialogi(this,this->m_nGuid);
  return;
}

void EUnlockDialog::Reset() {
  EGlobalManagerClient__vtable *pEVar1;
  EWindow *pEVar2;
  int iVar3;
  ERShader *this_00;
  ERModel *pEVar4;
  
  while( true ) {
    if (this->m_pFont == (ERFont *)0x0) break;
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
  while (this->m_pWhiteLight != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pWhiteLight->field0_0x0);
    this->m_pWhiteLight = (ERShader *)0x0;
  }
  this_00 = this->m_pStar;
  while (this_00 != (ERShader *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    this->m_pStar = (ERShader *)0x0;
    this_00 = this->m_pStar;
  }
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[7].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 7),this->m_pGround);
  if (*(int *)&this->m_bNeedDelRefModel == 0) {
    iVar3 = *(int *)&this->m_bNeedDelRefModel2;
  }
  else {
    if (*(int *)&this->m_bIsAnimated != 0) {
      Shutdown__15EAnimController(&this->m_ac);
      goto LAB_001e3fd0;
    }
    pEVar4 = this->m_pModel;
    while (pEVar4 != (ERModel *)0x0) {
      DelRef__9EResource(&pEVar4->field0_0x0);
      this->m_pModel = (ERModel *)0x0;
LAB_001e3fd0:
      pEVar4 = this->m_pModel;
    }
    iVar3 = *(int *)&this->m_bNeedDelRefModel2;
  }
  if (iVar3 == 0) {
    pEVar2 = this->m_pWin;
  }
  else {
    if (*(int *)&this->m_bIsAnimated2 != 0) {
      Shutdown__15EAnimController(&this->m_ac2);
      goto LAB_001e4008;
    }
    pEVar4 = this->m_pModel2;
    while (pEVar4 != (ERModel *)0x0) {
      DelRef__9EResource(&pEVar4->field0_0x0);
      this->m_pModel2 = (ERModel *)0x0;
LAB_001e4008:
      pEVar4 = this->m_pModel2;
    }
    pEVar2 = this->m_pWin;
  }
  if (pEVar2 != (EWindow *)0x0) {
    (*(code *)pEVar2->__vtable->WindowMatrixChanged)
              ((int)&(pEVar2->m_mWindow).field0_0x0 + (int)*(short *)&pEVar2->__vtable->Select,3);
  }
  this->m_pWin = (EWindow *)0x0;
  Reset__10EPromptBar(&this->m_PromptBar);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_Prompts);
  return;
}

void EUnlockDialog::Draw(ERC *prc) {
	EVec2 vBigBoxTL;
	EVec2 vBigBoxBR;
	float x;
	float y;
	EVec2 vScreen;
	EVec2 vPos;
	EVec4 vStartColor;
	EVec4 vEndColor;
	EVec4 vCurColor;
	float fPercentage;
	EGraphics *this;
	EVec2 &v;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	EVec2 *this;
	float x;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	int i;
	float fSize;
	EGraphics *this;
	EGraphics *this;
	
  undefined *puVar1;
  EWindow__vtable *pEVar2;
  ERFont *pEVar3;
  ulong *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  short *psVar10;
  float *pfVar11;
  undefined8 unaff_s0;
  uint uVar12;
  undefined8 unaff_s1;
  float (*pafVar13) [2];
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar14;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  EVec2 vBigBoxTL;
  EVec2 vBigBoxBR;
  EVec2 vScreen;
  EVec2 vPos;
  EVec4 vStartColor;
  float local_110;
  float local_10c;
  EVec4 vEndColor;
  EVec4 vCurColor;
  float local_e0;
  float local_dc;
  float local_d0;
  float local_cc;
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
  
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar17 = (this->m_pos).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar16 = (this->m_pos).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
  DrawBigBox__10EDialogWinP3ERCfffff
            (prc,fVar17,fVar16,fVar17 + (this->m_WDH).field0_0x0.d[0],
             fVar16 + (this->m_WDH).field0_0x0.d[2],1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vScreen.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
  vScreen.field0_0x0.d[0] = 1.0;
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,(this->m_vModelPos).field0_0x0.d[0],(this->m_vModelPos).field0_0x0.d[1],
             (this->m_vModelSize).field0_0x0.d[1],(this->m_vModelSize).field0_0x0.d[0],1.0,
             (EVec4 *)&vScreen);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vScreen.field0_0x0.d[0] = 0.527;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vScreen.field0_0x0.d[1] = 0.574;
                    /* end of inlined section */
  DrawBigHighlightBox__10SimInfoWinP3ERCffffG5EVec4f
            (prc,(this->m_vModelPos).field0_0x0.d[0],(this->m_vModelPos).field0_0x0.d[1],
             (this->m_vModelSize).field0_0x0.d[1],(this->m_vModelSize).field0_0x0.d[0],
             (EVec4 *)&vScreen,1.0);
  if (this->m_nDialogMode == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar16 = 0.5;
    pEVar2 = this->m_pWin->__vtable;
    (*(code *)pEVar2->OutputCoordinatesChanged)
              ((int)&(this->m_pWin->m_mWindow).field0_0x0 +
               (int)*(short *)&pEVar2->InputCoordinatesChanged,prc);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vScreen.field0_0x0.d[1] = (float)_pGfx->m_yscreen;
    vScreen.field0_0x0.d[0] = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0 =
         (EVec2__null___1__1)*(EVec2__null___1__1 *)&(this->m_vTextPos).field0_0x0.field1;
                    /* end of inlined section */
    Select__6ERFontP3ERC(this->m_pFont,prc);
    SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
    uVar9 = _BLACK.field0_0x0.d[3];
    uVar7 = _BLACK.field0_0x0.d[2];
    uVar8 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar3 = this->m_pFont;
    (pEVar3->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar8 >> 0x20);
    (pEVar3->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar3->m_vColor).field0_0x0.d[3] = uVar9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_110 = (this->m_vTextPos).field0_0x0.d[0] + 1.0 / vScreen.field0_0x0.d[0];
    local_10c = (this->m_vTextPos).field0_0x0.d[1] + 1.0 / vScreen.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_sName,true,(EVec2 *)&local_110,E_FAX_CENTER,E_FAY_TOP,
               (EVec2 *)0x0);
    uVar7 = _WHITE.field0_0x0.d[2];
    uVar6 = _WHITE.field0_0x0.d[1];
    uVar5 = _WHITE.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vEndColor.field0_0x0.d[0] = _YELLOW.field0_0x0.d[0];
    vEndColor.field0_0x0.d[1] = _YELLOW.field0_0x0.d[1];
    vEndColor.field0_0x0.d[2] = _YELLOW.field0_0x0.d[2];
                    /* end of inlined section */
    vEndColor.field0_0x0.d[3] = _YELLOW.field0_0x0.d[3];
    fVar17 = sinf(this->m_fTicker0 * 10.0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    fVar17 = fVar17 * fVar16 + fVar16;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vCurColor.field0_0x0.d[3] = 1.0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar3 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vCurColor.field0_0x0.d[0] = uVar5 + (vEndColor.field0_0x0.d[0] - uVar5) * fVar17;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vCurColor.field0_0x0.d[1] = uVar6 + (vEndColor.field0_0x0.d[1] - uVar6) * fVar17;
    vCurColor.field0_0x0.d[2] = uVar7 + (vEndColor.field0_0x0.d[2] - uVar7) * fVar17;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    (pEVar3->m_vColor).field0_0x0.d[0] = vCurColor.field0_0x0.d[0];
    (pEVar3->m_vColor).field0_0x0.d[1] = vCurColor.field0_0x0.d[1];
    (pEVar3->m_vColor).field0_0x0.d[2] = vCurColor.field0_0x0.d[2];
    (pEVar3->m_vColor).field0_0x0.d[3] = 1.0;
    local_e0 = (this->m_vTextPos).field0_0x0.d[0];
    local_dc = (this->m_vTextPos).field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_sName,true,(EVec2 *)&local_e0,E_FAX_CENTER,E_FAY_TOP,&vPos)
    ;
                    /* end of inlined section */
    fVar17 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
    uVar9 = _BLACK.field0_0x0.d[3];
    uVar7 = _BLACK.field0_0x0.d[2];
    uVar8 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_e0 = (this->m_vTextPos).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar3 = this->m_pFont;
    local_dc = vPos.field0_0x0.d[1] + fVar17;
                    /* end of inlined section */
    vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(vPos.field0_0x0.d[1] + fVar17,local_e0);
    puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar12);
    *puVar4 = *puVar4 & -1L << (uVar12 + 1) * 8 | (ulong)vPos.field0_0x0 >> (7 - uVar12) * 8;
                    /* end of inlined section */
    (pEVar3->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar8 >> 0x20);
    (pEVar3->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar3->m_vColor).field0_0x0.d[3] = uVar9;
    psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"now_unlocked_message");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_e0 = vPos.field0_0x0.d[0] + 1.0 / vScreen.field0_0x0.d[0];
    local_dc = vPos.field0_0x0.d[1] + 1.0 / vScreen.field0_0x0.d[1];
    local_d0 = local_e0;
    local_cc = local_dc;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_d0,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0
              );
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar3 = this->m_pFont;
                    /* end of inlined section */
                    /* end of inlined section */
    (pEVar3->m_vColor).field0_0x0.d[0] = vCurColor.field0_0x0.d[0];
    (pEVar3->m_vColor).field0_0x0.d[1] = vCurColor.field0_0x0.d[1];
    (pEVar3->m_vColor).field0_0x0.d[2] = vCurColor.field0_0x0.d[2];
    (pEVar3->m_vColor).field0_0x0.d[3] = vCurColor.field0_0x0.d[3];
    psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"now_unlocked_message");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_e0 = vPos.field0_0x0.d[0];
    local_dc = vPos.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_e0,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0
              );
                    /* end of inlined section */
    SelectWin__7EGlobalP3ERC(&_globals,prc);
    if (*(int *)&this->m_bModelPreloadDone != 0) {
      DrawModel__13EUnlockDialogP3ERC(this,prc);
      Draw__10EPromptBarP3ERC(&this->m_PromptBar,prc);
    }
    Select__8ERShaderP3ERCi(this->m_pStar,prc,0);
    fVar17 = 0.375;
    uVar12 = 0;
    pfVar11 = this->m_fParticlePos + 1;
    fVar19 = 0.03125;
    iVar14 = 0;
    pafVar13 = this->m_fParticleLife;
    do {
      if (((*pafVar13)[0] <= 0.0) && (0.0 <= *(float *)((int)this->m_fParticleLife + iVar14 + 4))) {
        fVar18 = 32.0;
        if ((uVar12 & 3) != 0) {
          fVar18 = 22.0;
        }
        if ((uVar12 & 2) != 0) {
          fVar18 = fVar18 + 5.0;
        }
        if ((uVar12 & 1) != 0) {
          fVar18 = fVar18 + 20.0;
        }
        if ((int)uVar12 < 10) {
          fVar15 = this->m_fTicker0;
        }
        else {
          fVar15 = this->m_fTicker1;
        }
        if (fVar15 < fVar17) {
          fVar18 = fVar18 * (fVar15 + fVar15 + 0.25);
        }
        if ((int)uVar12 < 10) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
          local_d0 = fVar18 * fVar19;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_dc = *pfVar11 - (fVar18 / (float)_pGfx->m_yscreen) * fVar16;
          local_e0 = (*(float (*) [2])(pfVar11 + -1))[0] -
                     (fVar18 / (float)_pGfx->m_xscreen) * fVar16;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_cc = local_d0;
          (*(code *)prc->__vtable[1].ClipRect)
                    (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,
                     (EVec2 *)&local_e0,(EVec2 *)&local_d0,&this->m_vParticle0Color);
        }
        else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
          local_d0 = fVar18 * fVar19;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_dc = *pfVar11 - (fVar18 / (float)_pGfx->m_yscreen) * fVar16;
          local_e0 = (*(float (*) [2])(pfVar11 + -1))[0] -
                     (fVar18 / (float)_pGfx->m_xscreen) * fVar16;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_cc = local_d0;
          (*(code *)prc->__vtable[1].ClipRect)
                    (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,
                     (EVec2 *)&local_e0,(EVec2 *)&local_d0,&this->m_vParticle1Color);
        }
      }
      uVar12 = uVar12 + 1;
      pfVar11 = pfVar11 + 2;
      iVar14 = iVar14 + 8;
      pafVar13 = pafVar13[1];
    } while ((int)uVar12 < 0x14);
  }
  return;
}

void EUnlockDialog::Update() {
	cXObject *this;
	EDialog *this;
	
  EUIVirtualCtrl__vtable *pEVar1;
  cXObject__179_1116 *pcVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float (*pafVar11) [2];
  float (*pafVar12) [2];
  int iVar13;
  float fVar14;
  float fVar15;
  
  fVar14 = this->m_fTicker0 + _dt;
  this->m_fTicker0 = fVar14;
  if (*(int *)&this->m_bDelaySet1Start == 0) {
LAB_001e4724:
    this->m_fTicker1 = this->m_fTicker1 + _dt;
  }
  else {
    if (0.75 < fVar14) {
      *(undefined4 *)&this->m_bDelaySet1Start = 0;
    }
    if (*(int *)&this->m_bDelaySet1Start == 0) goto LAB_001e4724;
  }
  this->m_fAngle = this->m_fAngle + _dt * 1.047198;
  Update__10EPromptBar(&this->m_PromptBar);
  if (*(int *)&this->m_bModelPreloadDone == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar3 = (*(code *)_5Globs_pObjectFolder->__vtable[1].ResumeObjectFiles)
                      ((int)&_5Globs_pObjectFolder->__vtable +
                       (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].SuspendObjectFiles,
                       this->m_pMasterSel,0);
    *(int *)&this->m_bModelPreloadDone = (int)lVar3;
    if (lVar3 != 0) {
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
      __16EResourceManager_m_bTraceEnabled = 1;
                    /* end of inlined section */
      SetupModel__13EUnlockDialog(this);
    }
  }
  fVar14 = _dt;
  iVar13 = 0;
  pfVar9 = this->m_fParticleSpeed + 1;
  pafVar12 = this->m_fParticleSpeed;
  pafVar11 = this->m_fParticleLife;
  pfVar10 = this->m_fParticlePos + 1;
  do {
    fVar4 = _dt;
    if (0.0 < (*pafVar11)[0]) {
      if (((int)pafVar11 < (int)this->m_fParticleLife[10]) ||
         (*(int *)&this->m_bDelaySet1Start == 0)) {
        (*pafVar11)[0] = (*pafVar11)[0] - fVar14;
      }
    }
    else if (0.0 < pfVar9[0x28]) {
      fVar5 = (*(float (*) [2])(pfVar9 + -1))[0];
      pfVar9[0x28] = pfVar9[0x28] - _dt;
      if (0.0015 < fVar5) {
        (*(float (*) [2])(pfVar9 + -1))[0] = fVar5 - fVar4 * 0.2;
LAB_001e48c4:
        fVar4 = *pfVar9;
      }
      else {
        if (fVar5 < -0.0015) {
          (*pafVar12)[0] = fVar5 + fVar4 * 0.2;
          goto LAB_001e48c4;
        }
        fVar4 = *pfVar9;
      }
      if (0.01 < fVar4) {
        fVar4 = fVar4 - fVar14 * 0.15;
LAB_001e48fc:
        *pfVar9 = fVar4;
      }
      else if (fVar4 < -0.015) {
        fVar4 = fVar4 + fVar14 * 0.1;
        goto LAB_001e48fc;
      }
      pfVar8 = (float *)((int)this->m_fParticleSpeed + iVar13 + 4);
      *pfVar8 = *pfVar8 + fVar14 * 0.5;
      fVar4 = *pfVar10;
      (*(float (*) [2])(pfVar10 + -1))[0] =
           (*(float (*) [2])(pfVar10 + -1))[0] +
           *(float *)((int)this->m_fParticleSpeed + iVar13) * fVar14;
      *pfVar10 = fVar4 + *pfVar8 * fVar14;
    }
    pafVar11 = pafVar11[1];
    pfVar10 = pfVar10 + 2;
    iVar13 = iVar13 + 8;
    pfVar9 = pfVar9 + 2;
    pafVar12 = pafVar12[1];
  } while ((int)pafVar11 < (int)&this->m_fTicker0);
  if (this->m_fParticleLife[1] <= 0.0) {
    InitParticles__13EUnlockDialogi(this,0);
    this->m_fTicker0 = 0.0;
  }
  if (this->m_fParticleLife[10][1] <= 0.0) {
    InitParticles__13EUnlockDialogi(this,1);
    this->m_fTicker1 = 0.0;
  }
  fVar14 = this->m_fTicker0;
  if (fVar14 <= 0.0) {
    fVar14 = (this->m_vParticleColorStart).field0_0x0.d[0];
    fVar4 = (this->m_vParticleColorStart).field0_0x0.d[1];
    fVar5 = (this->m_vParticleColorStart).field0_0x0.d[2];
    fVar6 = (this->m_vParticleColorStart).field0_0x0.d[3];
LAB_001e4a94:
    (this->m_vParticle0Color).field0_0x0.d[0] = fVar14;
    (this->m_vParticle0Color).field0_0x0.d[1] = fVar4;
    (this->m_vParticle0Color).field0_0x0.d[2] = fVar5;
    (this->m_vParticle0Color).field0_0x0.d[3] = fVar6;
    (this->m_vParticle0Color).field0_0x0.d[3] = 0.0;
  }
  else {
    if (1.25 <= fVar14) {
      fVar14 = (this->m_vParticle0ColorEnd).field0_0x0.d[0];
      fVar4 = (this->m_vParticle0ColorEnd).field0_0x0.d[1];
      fVar5 = (this->m_vParticle0ColorEnd).field0_0x0.d[2];
      fVar6 = (this->m_vParticle0ColorEnd).field0_0x0.d[3];
      goto LAB_001e4a94;
    }
    fVar7 = (this->m_vParticleColorStart).field0_0x0.d[0];
    fVar6 = (this->m_vParticleColorStart).field0_0x0.d[1];
    fVar15 = (this->m_vParticleColorStart).field0_0x0.d[2];
    fVar4 = (this->m_vParticle0ColorEnd).field0_0x0.d[1];
    fVar5 = (this->m_vParticle0ColorEnd).field0_0x0.d[2];
    (this->m_vParticle0Color).field0_0x0.d[0] =
         fVar7 + ((this->m_vParticle0ColorEnd).field0_0x0.d[0] - fVar7) * fVar14 * 0.8;
    (this->m_vParticle0Color).field0_0x0.d[1] = fVar6 + (fVar4 - fVar6) * fVar14 * 0.8;
    (this->m_vParticle0Color).field0_0x0.d[2] = fVar15 + (fVar5 - fVar15) * fVar14 * 0.8;
    if (fVar14 < 0.25) {
LAB_001e4a5c:
      (this->m_vParticle0Color).field0_0x0.d[3] = fVar14 * 4.0;
    }
    else {
      if (1.0 < fVar14) {
        fVar14 = 1.25 - fVar14;
        goto LAB_001e4a5c;
      }
      (this->m_vParticle0Color).field0_0x0.d[3] = 1.0;
    }
  }
  fVar4 = this->m_fTicker1;
  fVar14 = 0.0;
  if (fVar4 <= 0.0) {
    fVar4 = (this->m_vParticleColorStart).field0_0x0.d[0];
    fVar5 = (this->m_vParticleColorStart).field0_0x0.d[1];
    fVar6 = (this->m_vParticleColorStart).field0_0x0.d[2];
    fVar7 = (this->m_vParticleColorStart).field0_0x0.d[3];
LAB_001e4b8c:
    (this->m_vParticle1Color).field0_0x0.d[0] = fVar4;
    (this->m_vParticle1Color).field0_0x0.d[1] = fVar5;
    (this->m_vParticle1Color).field0_0x0.d[2] = fVar6;
    (this->m_vParticle1Color).field0_0x0.d[3] = fVar7;
  }
  else {
    if (1.25 <= fVar4) {
      fVar4 = (this->m_vParticle1ColorEnd).field0_0x0.d[0];
      fVar5 = (this->m_vParticle1ColorEnd).field0_0x0.d[1];
      fVar6 = (this->m_vParticle1ColorEnd).field0_0x0.d[2];
      fVar7 = (this->m_vParticle1ColorEnd).field0_0x0.d[3];
      goto LAB_001e4b8c;
    }
    fVar7 = (this->m_vParticleColorStart).field0_0x0.d[0];
    fVar6 = (this->m_vParticleColorStart).field0_0x0.d[1];
    fVar15 = (this->m_vParticleColorStart).field0_0x0.d[2];
    fVar14 = (this->m_vParticle1ColorEnd).field0_0x0.d[1];
    fVar5 = (this->m_vParticle1ColorEnd).field0_0x0.d[2];
    (this->m_vParticle1Color).field0_0x0.d[0] =
         fVar7 + ((this->m_vParticle1ColorEnd).field0_0x0.d[0] - fVar7) * fVar4 * 0.8;
    (this->m_vParticle1Color).field0_0x0.d[1] = fVar6 + (fVar14 - fVar6) * fVar4 * 0.8;
    (this->m_vParticle1Color).field0_0x0.d[2] = fVar15 + (fVar5 - fVar15) * fVar4 * 0.8;
    if (fVar4 < 0.25) {
      fVar14 = fVar4 * 4.0;
    }
    else {
      if (fVar4 <= 1.0) {
        (this->m_vParticle1Color).field0_0x0.d[3] = 1.0;
        goto LAB_001e4b94;
      }
      fVar14 = (1.25 - fVar4) * 4.0;
    }
  }
  (this->m_vParticle1Color).field0_0x0.d[3] = fVar14;
LAB_001e4b94:
  if ((*(int *)&this->m_bModelPreloadDone != 0) &&
     (pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
     lVar3 = (*(code *)pEVar1[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0
                        ,0x40), lVar3 != 0)) {
                    /* inlined from ../MSrc/object.h */
    pcVar2 = (this->field0_0x0).fObject;
    (this->field0_0x0).fStatus = kUserClickedYes;
    if (pcVar2 == (cXObject__179_1116 *)0x0) {
      iVar13 = 0;
    }
    else {
      iVar13 = (*(code *)pcVar2->__vtable[1].GetObjectImplementation)
                         ((int)&pcVar2->_vb1050 + (int)*(short *)&pcVar2->__vtable[1].AdvanceGraphic
                         );
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
                    /* end of inlined section */
    *(short *)(iVar13 + 0x1a) = _globals.m_nUnlockBitField;
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
    *(undefined8 *)(this->field0_0x0).m_pDialogMan = 1;
  }
                    /* end of inlined section */
  return;
}

void EUnlockDialog::SetGUID(s32 guid) {
	ObjSelector *pMasterSel;
	ObjSelector *pResSel;
	ObjDefinition *pMasterDef;
	ObjSelector *psel;
	bool bFound;
	ObjSelector *pResSel2;
	ObjDefinition *pdef;
	ObjSelector *this;
	ObjSelector *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	ObjDefinition *pdef;
	ObjSelector *this;
	ObjSelector *this;
	ObjSelector *this;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
	
  ushort uVar1;
  ushort uVar2;
  int **ppiVar3;
  ObjDefinition *pOVar4;
  ObjDefinition *pOVar5;
  ObjectFolder__vtable *pOVar6;
  bool bVar7;
  ObjectFolder *pOVar8;
  ObjSelector *pOVar9;
  ObjSelector *pOVar10;
  ELocString EVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pOVar9 = (ObjSelector *)0x0;
  lVar16 = 0;
  bVar7 = false;
  lVar12 = (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                     ((int)&_5Globs_pObjectFolder->__vtable +
                      (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,0);
  if (lVar12 == 0) {
    this->m_pMasterSel = (ObjSelector *)0x0;
  }
  else {
                    /* inlined from ../MSrc/ObjSelector.h */
    iVar15 = *(int *)((int)lVar12 + 0x18);
    while( true ) {
                    /* end of inlined section */
      if ((iVar15 != 0) && (ppiVar3 = *(int ***)(iVar15 + 0xc0), ppiVar3 != (int **)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        if (*ppiVar3 == (int *)0x0) {
          iVar14 = 0;
        }
        else {
          iVar14 = (*ppiVar3)[-1];
        }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        if ((iVar14 != 0) && (**ppiVar3 != 0)) {
          pOVar9 = GetMasterSelector__11ObjSelector((ObjSelector *)lVar12);
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
          if (pOVar9->fHeader->guid == guid) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
            bVar7 = true;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
            this->m_nModelId = ***(uint ***)(iVar15 + 0xc0);
            lVar16 = lVar12;
          }
        }
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar12 = (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                         ((int)&_5Globs_pObjectFolder->__vtable +
                          (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,lVar12
                         );
      if (lVar12 == 0) {
        this->m_pMasterSel = pOVar9;
        goto LAB_001e4d40;
      }
      if (bVar7) break;
      iVar15 = *(int *)((int)lVar12 + 0x18);
    }
    this->m_pMasterSel = pOVar9;
  }
LAB_001e4d40:
  this->m_pResSel = (ObjSelector *)lVar16;
  lVar12 = 0;
  pOVar10 = (ObjSelector *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  bVar7 = false;
  lVar13 = (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                     ((int)&_5Globs_pObjectFolder->__vtable +
                      (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,0);
  if (lVar13 == 0) {
    pOVar9 = this->m_pMasterSel;
  }
  else {
                    /* inlined from ../MSrc/ObjSelector.h */
    iVar15 = *(int *)((int)lVar13 + 0x18);
    while( true ) {
      if ((iVar15 != 0) && (ppiVar3 = *(int ***)(iVar15 + 0xc0), ppiVar3 != (int **)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        if (*ppiVar3 == (int *)0x0) {
          iVar14 = 0;
        }
        else {
          iVar14 = (*ppiVar3)[-1];
        }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
        if ((iVar14 != 0) && (**ppiVar3 != 0)) {
          pOVar10 = GetMasterSelector__11ObjSelector((ObjSelector *)lVar13);
          if ((pOVar10 == pOVar9) && (lVar13 != lVar16)) {
                    /* inlined from ../MSrc/ObjSelector.h */
            pOVar4 = ((ObjSelector *)lVar16)->fHeader;
            pOVar5 = ((ObjSelector *)lVar13)->fHeader;
                    /* end of inlined section */
            if (((((*(uint *)&pOVar4->pResData->field_0x4 & 0x20) ==
                   (*(uint *)&pOVar5->pResData->field_0x4 & 0x20)) &&
                 (uVar1 = pOVar4->interactionGroup, (short)uVar1 < 0)) &&
                (uVar2 = pOVar5->interactionGroup, (short)uVar2 < 0)) && (uVar1 != uVar2)) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              bVar7 = true;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              this->m_nModelId2 = ***(uint ***)(iVar15 + 0xc0);
              lVar12 = lVar13;
            }
          }
        }
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
      pOVar10 = (ObjSelector *)lVar12;
                    /* end of inlined section */
      lVar13 = (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                         ((int)&_5Globs_pObjectFolder->__vtable +
                          (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,lVar13
                         );
      if (lVar13 == 0) {
        pOVar9 = this->m_pMasterSel;
        goto LAB_001e4e6c;
      }
      if (bVar7) break;
      iVar15 = *(int *)((int)lVar13 + 0x18);
    }
    pOVar9 = this->m_pMasterSel;
  }
LAB_001e4e6c:
  this->m_pResSel2 = pOVar10;
  EVar11 = GetCatalogName__11ObjSelector(pOVar9);
  pOVar8 = _5Globs_pObjectFolder;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  this->m_sName = *EVar11.ptr;
  pOVar6 = pOVar8->__vtable;
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
  __16EResourceManager_m_bTraceEnabled = 0;
                    /* end of inlined section */
  (*(code *)pOVar6[1].ResumeObjectFiles)
            ((int)&pOVar8->__vtable + (int)*(short *)&pOVar6[1].SuspendObjectFiles,
             this->m_pMasterSel,0);
  *(undefined4 *)&this->m_bModelPreloadDone = 0;
  return;
}

void EUnlockDialog::DrawModel(ERC *prc) {
	EMat4 mScaled;
	EMat4 *pmModel2;
	EMat4 mScaled2;
	EBound3 bound;
	EBoundSphere bsphere;
	ERC *this;
	ERC *this;
	float v;
	float v;
	ERC *this;
	float scaler;
	float v;
	float v;
	ERC *this;
	float scaler;
	ERModel *this;
	EBound3 bound2;
	ERModel *this;
	EVec3 *this;
	EMat4 *this;
	
  undefined *puVar1;
  uint uVar2;
  ERModel *pEVar3;
  uint uVar4;
  ulong *puVar5;
  void *pvVar6;
  EMat4 *pEVar7;
  EMat4 *this_00;
  int iVar8;
  ObjSelector *pOVar9;
  ERC__vtable *pEVar10;
  float fVar11;
  EBound3 bound;
  EBoundSphere bsphere;
  float local_140;
  undefined4 local_13c;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  EMat4 mScaled;
  EMat4 mScaled2;
  EBound3 bound2;
  
  if (this->m_pResSel != (ObjSelector *)0x0) {
    Select__9E3DWindowP3ERC(&this->m_win,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar11 = 1.0;
                    /* end of inlined section */
    GetPos__4EUfoR9E3DWindow(&this->m_ufo,&this->m_win);
    (*(code *)prc->__vtable[1].DisableGeometryModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,1,0,0);
    (*(code *)prc->__vtable[1].EnableRasterModes)
              (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,1,1,0
              );
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
    local_13c = 0;
    local_124 = 0;
    local_128 = 0;
    local_12c = 0;
    local_130 = 0;
                    /* end of inlined section */
    bound.vMax.field0_0x0.d[1] = fVar11;
    bound.vMax.field0_0x0.d[2] = fVar11;
    bsphere.vCenter.field0_0x0.d[1] = fVar11;
    local_140 = fVar11;
    (*(code *)prc->__vtable[1].DisplayList)
              (fVar11,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&bound,
               (undefined *)((int)&bound.vMax.field0_0x0 + 4),&bsphere,&local_140,&local_130);
    (*(code *)prc->__vtable[1].DisableGeometryModes)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,2,0,0);
    (*(code *)prc->__vtable[1].EnableRasterModes)
              (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,1,5,0
              );
    if (*(int *)&this->m_bDisplayGround != 0) {
                    /* inlined from /eor/src2/engine/e_rc.h */
      pvVar6 = Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x10,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      bound.vMin.field0_0x0.d[2] = 0.74981;
      bound.vMin.field0_0x0._0_8_ = 0x3f0e89233f02dd59;
                    /* end of inlined section */
      uVar4 = (int)pvVar6 + 7U & 7;
      puVar5 = (ulong *)(((int)pvVar6 + 7U) - uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0x3f0e89233f02dd59U >> (7 - uVar4) * 8;
      uVar4 = (uint)pvVar6 & 7;
      *(ulong *)((int)pvVar6 - uVar4) =
           0x3f0e89233f02dd59 << uVar4 * 8 |
           *(ulong *)((int)pvVar6 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      *(undefined4 *)((int)pvVar6 + 8) = 0x3f3ff38d;
      (*(code *)prc->__vtable[1].LineList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,pvVar6,0);
      Select__8ERShaderP3ERCi(this->m_pWhiteLight,prc,0);
                    /* inlined from /eor/src2/engine/e_dl.h */
      pEVar7 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
      Id__5EMat4(pEVar7);
      bound.vMin.field0_0x0._0_8_ = 0x4000000040000000;
      bound.vMin.field0_0x0.d[2] = fVar11;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      Scale__5EMat4RC5EVec3(pEVar7,&bound.vMin);
                    /* end of inlined section */
      (*(code *)prc->__vtable->SetMipMap)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar7);
      (*(code *)prc->__vtable[1].DisableGeometryModes)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,2,0,0);
      (*(code *)prc->__vtable->DisableRasterModes)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->EnableRasterModes,this->m_pGround
                );
    }
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,&this->m_lights,1);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    bound.vMin.field0_0x0.d[2] = this->m_pModel->m_scaler;
    bound.vMin.field0_0x0._0_8_ = CONCAT44(bound.vMin.field0_0x0.d[2],bound.vMin.field0_0x0.d[2]);
    Scale__5EMat4RC5EVec3(&mScaled,&bound.vMin);
    pEVar7 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
    if (*(int *)&this->m_bIsAnimated == 0) {
      __as__5EMat4RC5EMat4(pEVar7,&mScaled);
    }
    else {
      Id__5EMat4(pEVar7);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
      (this->m_ac).m_modelScaler = this->m_pModel->m_scaler;
    }
    this_00 = (EMat4 *)0x0;
    if (this->m_pResSel2 != (ObjSelector *)0x0) {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      bound.vMin.field0_0x0.d[2] = this->m_pModel2->m_scaler;
      bound.vMin.field0_0x0._0_8_ = CONCAT44(bound.vMin.field0_0x0.d[2],bound.vMin.field0_0x0.d[2]);
      Scale__5EMat4RC5EVec3(&mScaled2,&bound.vMin);
      this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
                    /* end of inlined section */
      if (*(int *)&this->m_bIsAnimated2 == 0) {
        __as__5EMat4RC5EMat4(this_00,&mScaled2);
      }
      else {
        Id__5EMat4(this_00);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
        (this->m_ac2).m_modelScaler = this->m_pModel2->m_scaler;
      }
    }
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    bsphere.vCenter.field0_0x0.d[2] = 0.0;
    bsphere.vCenter.field0_0x0.d[1] = 0.0;
    bsphere.vCenter.field0_0x0.d[0] = 0.0;
    pEVar3 = this->m_pModel;
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
    uVar4 = (uint)&bound.vMax & 7;
    puVar5 = (ulong *)((int)&bound.vMax - uVar4);
    *puVar5 = 0L << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    bound.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar2 = (uint)&bound.vMax & 7;
    bound.vMin.field0_0x0._0_8_ =
         *(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 & -1L << (8 - uVar2) * 8 |
         *(ulong *)((int)&bound.vMax - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
              (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
    bound.vMin.field0_0x0.d[2] = 0.0;
    Compute__7EBound3RC7EBound3RC5EMat4(&bound,&pEVar3->m_boundBox,&mScaled);
                    /* end of inlined section */
    if (this->m_pResSel2 != (ObjSelector *)0x0) {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
      bsphere.vCenter.field0_0x0.d[2] = 0.0;
      bsphere.vCenter.field0_0x0.d[1] = 0.0;
      bsphere.vCenter.field0_0x0.d[0] = 0.0;
      pEVar3 = this->m_pModel2;
      puVar1 = (undefined *)((int)&bound2.vMax.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
      uVar4 = (uint)&bound2.vMax & 7;
      puVar5 = (ulong *)((int)&bound2.vMax - uVar4);
      *puVar5 = 0L << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      bound2.vMax.field0_0x0.d[2] = 0.0;
      puVar1 = (undefined *)((int)&bound2.vMax.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      uVar2 = (uint)&bound2.vMax & 7;
      bound2.vMin.field0_0x0._0_8_ =
           *(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 & -1L << (8 - uVar2) * 8 |
           *(ulong *)((int)&bound2.vMax - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&bound2.vMin.field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar4);
      *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
                (ulong)bound2.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
      bound2.vMin.field0_0x0.d[2] = 0.0;
      Compute__7EBound3RC7EBound3RC5EMat4(&bound2,&pEVar3->m_boundBox,&mScaled2);
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
    PostTranslate__5EMat4RC5EVec3(pEVar7,&bound2.vMin);
                    /* end of inlined section */
    if (this->m_pResSel2 != (ObjSelector *)0x0) {
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
    PostRotateZ__5EMat4f(pEVar7,this->m_fAngle);
    if (this->m_pResSel2 != (ObjSelector *)0x0) {
      PostRotateZ__5EMat4f(this_00,this->m_fAngle);
    }
    SwapXY__FR5EMat4(pEVar7);
    if (this_00 == (EMat4 *)0x0) {
      iVar8 = *(int *)&this->m_bIsAnimated;
    }
    else {
      SwapXY__FR5EMat4(this_00);
      iVar8 = *(int *)&this->m_bIsAnimated;
    }
    if (iVar8 == 0) {
      (*(code *)prc->__vtable->SetMipMap)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar7);
      Draw__7ERModelP3ERCUi(this->m_pModel,prc,5);
      pOVar9 = this->m_pResSel2;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      bound2.vMin.field0_0x0.d[2] = 1.0;
      bound2.vMin.field0_0x0._0_8_ = 0x3f8000003f800000;
                    /* end of inlined section */
      Update__15EAnimControllerP5EVec3T1G5EVec3(&this->m_ac,(EVec3 *)0x0,(EVec3 *)0x0,&bound2.vMin);
      Draw__15EAnimControllerP3ERCP7ERModelRC5EMat4Ui(&this->m_ac,prc,this->m_pModel,pEVar7,5);
      pOVar9 = this->m_pResSel2;
    }
    if (pOVar9 == (ObjSelector *)0x0) {
      pEVar10 = prc->__vtable;
    }
    else if (*(int *)&this->m_bIsAnimated2 == 0) {
      (*(code *)prc->__vtable->SetMipMap)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,this_00);
      Draw__7ERModelP3ERCUi(this->m_pModel2,prc,5);
      pEVar10 = prc->__vtable;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      bound2.vMin.field0_0x0.d[2] = 1.0;
      bound2.vMin.field0_0x0._0_8_ = 0x3f8000003f800000;
                    /* end of inlined section */
      Update__15EAnimControllerP5EVec3T1G5EVec3(&this->m_ac2,(EVec3 *)0x0,(EVec3 *)0x0,&bound2.vMin)
      ;
      Draw__15EAnimControllerP3ERCP7ERModelRC5EMat4Ui(&this->m_ac2,prc,this->m_pModel2,this_00,5);
      pEVar10 = prc->__vtable;
    }
    (*(code *)pEVar10[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&pEVar10[1].QuadList,_globals._pCurLights,
               _globals._nCurLights);
    SelectWin__7EGlobalP3ERC(&_globals,prc);
  }
  return;
}

void EUnlockDialog::SetupCameraPosition() {
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
	float scaler;
	ResData *pRes;
	VECTOR<ObjAnimDef> *this;
	VECTOR<ObjAnimDef> *this;
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
  uint uVar2;
  ushort uVar3;
  ResData *pRVar4;
  ObjSelector *pOVar5;
  ERModel *pEVar6;
  uint uVar7;
  ulong *puVar8;
  EAnimController *pEVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  EMat4 mScaled;
  EBoundSphere bsphere;
  EBound3 bound;
  EMat4 mScaled2;
  EBound3 bound2;
  
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
  pRVar4 = this->m_pResSel->fHeader->pResData;
  if (*(int *)&this->m_bIsAnimated != 0) {
    pEVar9 = &this->m_ac;
    StopAllTracks__15EAnimController(pEVar9);
    Init__15EAnimControllerUi(pEVar9,pRVar4->eorcharacterID);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    SetTrackAnim__15EAnimControlleriUi(pEVar9,0,((pRVar4->objectStates).pData)->animationID);
    SetTrackIntensity__15EAnimControllerif(pEVar9,0,1.0);
  }
  pOVar5 = this->m_pResSel2;
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
  (this->m_ac).m_modelScaler = this->m_pModel->m_scaler;
  if (pOVar5 != (ObjSelector *)0x0) {
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
    pEVar9 = &this->m_ac2;
    pRVar4 = pOVar5->fHeader->pResData;
    if (*(int *)&this->m_bIsAnimated2 != 0) {
      StopAllTracks__15EAnimController(pEVar9);
      Init__15EAnimControllerUi(pEVar9,pRVar4->eorcharacterID);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      SetTrackAnim__15EAnimControlleriUi(pEVar9,0,((pRVar4->objectStates).pData)->animationID);
      SetTrackIntensity__15EAnimControllerif(pEVar9,0,1.0);
    }
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
    (this->m_ac2).m_modelScaler = this->m_pModel2->m_scaler;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  bsphere.vCenter.field0_0x0.d[0] = this->m_pModel->m_scaler;
  bsphere.vCenter.field0_0x0.d[1] = bsphere.vCenter.field0_0x0.d[0];
  bsphere.vCenter.field0_0x0.d[2] = bsphere.vCenter.field0_0x0.d[0];
  Scale__5EMat4RC5EVec3(&mScaled,&bsphere.vCenter);
  bsphere.vCenter.field0_0x0.d[2] = 0.0;
  bsphere.vCenter.field0_0x0.d[1] = 0.0;
  bsphere.vCenter.field0_0x0.d[0] = 0.0;
  pEVar6 = this->m_pModel;
  puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0UL >> (7 - uVar7) * 8;
  uVar7 = (uint)&bound.vMax & 7;
  puVar8 = (ulong *)((int)&bound.vMax - uVar7);
  *puVar8 = 0L << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  bound.vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
  uVar7 = (uint)puVar1 & 7;
  uVar2 = (uint)&bound.vMax & 7;
  bound.vMin.field0_0x0._0_8_ =
       *(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 & -1L << (8 - uVar2) * 8 |
       *(ulong *)((int)&bound.vMax - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar7) * 8
  ;
  bound.vMin.field0_0x0.d[2] = 0.0;
  Compute__7EBound3RC7EBound3RC5EMat4(&bound,&pEVar6->m_boundBox,&mScaled);
                    /* end of inlined section */
  if (this->m_pResSel2 != (ObjSelector *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    bsphere.vCenter.field0_0x0.d[0] = this->m_pModel2->m_scaler;
    bsphere.vCenter.field0_0x0.d[1] = bsphere.vCenter.field0_0x0.d[0];
    bsphere.vCenter.field0_0x0.d[2] = bsphere.vCenter.field0_0x0.d[0];
    Scale__5EMat4RC5EVec3(&mScaled2,&bsphere.vCenter);
    bsphere.vCenter.field0_0x0.d[2] = 0.0;
    bsphere.vCenter.field0_0x0.d[1] = 0.0;
    bsphere.vCenter.field0_0x0.d[0] = 0.0;
    pEVar6 = this->m_pModel2;
    puVar1 = (undefined *)((int)&bound2.vMax.field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0UL >> (7 - uVar7) * 8;
    uVar7 = (uint)&bound2.vMax & 7;
    puVar8 = (ulong *)((int)&bound2.vMax - uVar7);
    *puVar8 = 0L << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
    bound2.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&bound2.vMax.field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    uVar2 = (uint)&bound2.vMax & 7;
    bound2.vMin.field0_0x0._0_8_ =
         *(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 & -1L << (8 - uVar2) * 8 |
         *(ulong *)((int)&bound2.vMax - uVar2) >> uVar2 * 8;
    puVar1 = (undefined *)((int)&bound2.vMin.field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 |
              (ulong)bound2.vMin.field0_0x0._0_8_ >> (7 - uVar7) * 8;
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
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
  uVar3 = this->m_pMasterSel->fHeader->functionFlags;
  if (((((uVar3 == 1) || (uVar3 == 0x20)) || (uVar3 == 8)) || ((uVar3 == 0x10 || (uVar3 == 0x40))))
     && (0.0 < bound.vMax.field0_0x0.d[2])) {
    bound.vMin.field0_0x0.d[2] =
         (float)((int)bound.vMin.field0_0x0.d[2] * (uint)(0.0 < bound.vMin.field0_0x0.d[2]));
  }
  CalcBoundSphere__7EBound3R12EBoundSphere(&bound,&bsphere);
                    /* inlined from /eor/src2/common/e_standard_macros.h */
  fVar12 = 0.6981318;
                    /* end of inlined section */
  fVar10 = tanf(0.3490659);
  fVar11 = cosf(fVar12);
  mScaled2.field0_0x0.d[0][1] = fVar11 * (bsphere.radius / fVar10);
  fVar12 = sinf(fVar12);
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
  fVar12 = fVar12 * (bsphere.radius / fVar10);
  if (((*(uint *)&this->m_pResSel->fHeader->pResData->field_0x4 >> 1 & 1) == 0) ||
     (*(int *)&this->m_bIsAnimated == 0)) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    mScaled2.field0_0x0.d[0][2] = bsphere.vCenter.field0_0x0.d[2] + fVar12;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mScaled2.field0_0x0.d[1][2] = bsphere.vCenter.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mScaled2.field0_0x0.d[0][0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mScaled2.field0_0x0.d[1][0] = 0.0;
    mScaled2.field0_0x0.d[1][1] = 0.0;
    mScaled2.field0_0x0.d[2][0] = 0.0;
    mScaled2.field0_0x0.d[2][1] = 0.0;
                    /* end of inlined section */
    mScaled2.field0_0x0.d[2][2] = 1.0;
    SetPos__4EUfoRC5EVec3N21
              (&this->m_ufo,(EVec3 *)&mScaled2,(EVec3 *)((int)&mScaled2.field0_0x0 + 0x10),
               (EVec3 *)((int)&mScaled2.field0_0x0 + 0x20));
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    mScaled2.field0_0x0.d[0][2] = fVar12 + 2.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mScaled2.field0_0x0.d[0][0] = 0.0;
    mScaled2.field0_0x0.d[1][0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mScaled2.field0_0x0.d[1][1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mScaled2.field0_0x0.d[1][2] = 2.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mScaled2.field0_0x0.d[2][0] = 0.0;
    mScaled2.field0_0x0.d[2][1] = 0.0;
                    /* end of inlined section */
    mScaled2.field0_0x0.d[2][2] = 1.0;
    SetPos__4EUfoRC5EVec3N21
              (&this->m_ufo,(EVec3 *)&mScaled2,(EVec3 *)((int)&mScaled2.field0_0x0 + 0x10),
               (EVec3 *)((int)&mScaled2.field0_0x0 + 0x20));
  }
  return;
}

void EUnlockDialog::SetupModel() {
	ResData *pRes;
	ObjSelector *this;
	ResData *pRes2;
	ObjSelector *this;
	float scaler;
	float scaler;
	
  ObjSelector *pOVar1;
  ERModel *pEVar2;
  
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
  if (this->m_pResSel->fHeader->pResData->eorcharacterID == 0) {
    *(undefined4 *)&this->m_bIsAnimated = 0;
  }
  else {
    *(undefined4 *)&this->m_bIsAnimated = 1;
  }
  if (this->m_pResSel2 == (ObjSelector *)0x0) {
    pOVar1 = this->m_pMasterSel;
  }
  else {
                    /* inlined from ../MSrc/ObjSelector.h */
                    /* end of inlined section */
    if (this->m_pResSel2->fHeader->pResData->eorcharacterID == 0) {
      *(undefined4 *)&this->m_bIsAnimated2 = 0;
    }
    else {
      *(undefined4 *)&this->m_bIsAnimated2 = 1;
    }
                    /* inlined from ../MSrc/ObjSelector.h */
    pOVar1 = this->m_pMasterSel;
  }
                    /* end of inlined section */
  if (2 < (short)pOVar1->fHeader->buildModeType) {
    *(undefined4 *)&this->m_bDisplayGround = 0;
  }
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar2 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei
                     (&_modelman.field0_0x0,this->m_nModelId,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pModel = pEVar2;
  *(undefined4 *)&this->m_bNeedDelRefModel = 1;
  if (this->m_pResSel2 != (ObjSelector *)0x0) {
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar2 = (ERModel *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_modelman.field0_0x0,this->m_nModelId2,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pModel2 = pEVar2;
    *(undefined4 *)&this->m_bNeedDelRefModel2 = 1;
  }
  pOVar1 = this->m_pResSel2;
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
  (this->m_ac).m_modelScaler = this->m_pModel->m_scaler;
  if (pOVar1 != (ObjSelector *)0x0) {
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
    (this->m_ac2).m_modelScaler = this->m_pModel2->m_scaler;
  }
                    /* end of inlined section */
  SetupCameraPosition__13EUnlockDialog(this);
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

void* EUnlockDialog::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EUnlockDialog::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

void EUnlockDialog::SafeDelete() {
  EDialogWin__vtable *pEVar1;
  
  if (this != (EUnlockDialog *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1->Update)
              ((int)&(this->field0_0x0).m_mover + (int)*(short *)&pEVar1->SafeDelete,3);
  }
  return;
}

void EUnlockDialog::SetReceiver(EUIObjectNode *pNode) {
  this->m_pReceiver = pNode;
  return;
}

void EUnlockDialog::SetDialogMode(int mode) {
  this->m_nDialogMode = mode;
  return;
}
