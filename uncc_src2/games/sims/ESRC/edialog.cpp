// STATUS: NOT STARTED

#include "edialog.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2797;
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
	Panelstateman *$vb2797;
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
	Panelstateman *$vb2797;
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
struct cXObjectImpl : virtual cXObject, virtual TreeSimImpl {
	TreeSimImpl *$vb5273;
	cXObject *$vb1146;
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
	__vtbl_ptr_type *$vf901;
	
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

EVec2 ObjMoverWrapper::vTopLeft = {
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

EVec2 ObjMoverWrapper::vTopLeftMessage = {
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

float ObjMoverWrapper::m_popupTime = 0.25f;

EVec2 ObjMoverWrapper::vWHDialog = {
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

EVec2 ObjMoverWrapper::vWHMessageBack = {
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

EVec2 ObjMoverWrapper::vWHMessageBox = {
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

EVec2 ObjMoverWrapper::vWTitleBar = {
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

EVec2 ObjMoverWrapper::vWPromptBar = {
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

float ObjMoverWrapper::m_fontSize = 15.f;
float __message_text_margin = 0.05f;
float DialogStrContainer::m_promptoff = 0.01f;
float DialogStrContainer::m_promptgap = 0.01f;
float DialogStrContainer::onTextGap = -0.03f;
float DialogStrContainer::m_titleoff = 0.0125f;
float DialogStrContainer::onW = 0.07f;
ERShader *EDialogWin::m_pTextBoxBGBL = NULL;
ERShader *EDialogWin::m_pTextBoxBGBR = NULL;
ERShader *EDialogWin::m_pTextBoxBGTL = NULL;
ERShader *EDialogWin::m_pTextBoxBGTR = NULL;
ERShader *EDialogWin::m_pTextBoxBGML = NULL;
ERShader *EDialogWin::m_pTextBoxBGMR = NULL;
ERShader *EDialogWin::m_pTextBoxBGTC = NULL;
ERShader *EDialogWin::m_pTextBoxBGBC = NULL;
ERShader *EDialogWin::m_pBlackBoxBGBL = NULL;
ERShader *EDialogWin::m_pBlackBoxBGBR = NULL;
ERShader *EDialogWin::m_pBlackBoxBGTL = NULL;
ERShader *EDialogWin::m_pBlackBoxBGTR = NULL;
ERShader *EDialogWin::m_pBlackBoxBGML = NULL;
ERShader *EDialogWin::m_pBlackBoxBGMR = NULL;
ERShader *EDialogWin::m_pBlackBoxBGTC = NULL;
ERShader *EDialogWin::m_pBlackBoxBGBC = NULL;
ERShader *EDialogWin::m_pTextLineBGL = NULL;
ERShader *EDialogWin::m_pTextLineBGR = NULL;
ERShader *EDialogWin::m_pTextLineBGC = NULL;
ERShader *EDialogWin::m_pMoreUpShd = NULL;
ERShader *EDialogWin::m_pMoreDownShd = NULL;
ERShader *EDialogWin::m_pXIcon = NULL;
ERShader *EDialogWin::m_pTriIcon = NULL;
ERShader *EDialogWin::m_pCircIcon = NULL;
float _scrollinc = 5.f;
float _dialog_prompt_yoff = 0.039f;

__vtbl_ptr_type EDialog virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialog::~EDialog,
		/* .__delta2 = */ -19920
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialog::SetParams,
		/* .__delta2 = */ -18056
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialog::PutPanelToSleep,
		/* .__delta2 = */ -17680
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialog::GetCurDialog,
		/* .__delta2 = */ -16808
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialog::GetRetCode,
		/* .__delta2 = */ -17624
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialog::ExitCurDialog,
		/* .__delta2 = */ -18320
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EDialogWin virtual table[11] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialogWin::~EDialogWin,
		/* .__delta2 = */ 28520
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialogWin::SafeDelete,
		/* .__delta2 = */ -16952
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialogWin::Update,
		/* .__delta2 = */ 28896
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EDialogWin::Draw,
		/* .__delta2 = */ 31072
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
		/* .__pfn = */ &EDialogWin::SetParams,
		/* .__delta2 = */ -23968
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

static short unsigned int _szMissingString[18] = {
	/* [0] = */ 77,
	/* [1] = */ 105,
	/* [2] = */ 115,
	/* [3] = */ 115,
	/* [4] = */ 105,
	/* [5] = */ 110,
	/* [6] = */ 103,
	/* [7] = */ 32,
	/* [8] = */ 83,
	/* [9] = */ 116,
	/* [10] = */ 114,
	/* [11] = */ 105,
	/* [12] = */ 110,
	/* [13] = */ 103,
	/* [14] = */ 33,
	/* [15] = */ 33,
	/* [16] = */ 33,
	/* [17] = */ 0
};

short unsigned int _edialogwinTextEntryBuffer[32] = {
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
};

short unsigned int __MessageBuff[128] = {
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
	/* [127] = */ 0
};

DialogStrContainer* DialogStrContainer::DialogStrContainer() {
	TNodeList<BString2 *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_strings).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->m_strings).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  __8BString2(&this->fTitleString);
  __8BString2(&this->fCancelString);
  __8BString2(&this->fNoString);
  __8BString2(&this->fYesString);
  this->nStrings = 0;
  this->m_pfMessageStr = _szMissingString;
  this->m_itFirstVis = (undefined1 *)0x0;
  this->m_itLastVis = (undefined1 *)0x0;
  return this;
}

EDialogWin* EDialogWin::EDialogWin() {
	EVec2 vtl;
	EVec2 vbr;
	EUIObjectMover *this;
	EVec4 *this;
	
  EWindow *pEVar1;
  ObjMoverWrapper *pOVar2;
  DialogStrContainer *pDVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EVec2 vtl;
  EVec2 vbr;
  TRect_float_ local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  this->m_pDialogMan = (EDialog *)0x0;
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
  this->fObject = (cXObject__179_1116 *)0x0;
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
  this->fSel = (ObjSelector *)0x0;
  this->fStackObjectID = 0;
  this->fStatus = kNotShownYet;
  this->fType = 0;
  this->m_pParams = (DialogParam *)0x0;
                    /* inlined from /eor/src2/engine/window/e_window.h */
  this->__vtable = (EDialogWin__vtable *)_vt_10EDialogWin;
  pEVar1 = (EWindow *)_memmanAlloc__FUiUi(0xa0,0x10);
                    /* end of inlined section */
  pEVar1 = __7EWindow(pEVar1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialogdata.h */
                    /* end of inlined section */
  this->m_pWin = pEVar1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialogdata.h */
  pOVar2 = (ObjMoverWrapper *)_memmanAlloc__FUiUi(0x50,0x10);
  (pOVar2->mover).m_startt = 0.0;
  (pOVar2->mover).m_stopt = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (pOVar2->mover).m_curtime = (pOVar2->mover).m_startt;
  (pOVar2->vCurPos).field0_0x0.d[0] = 0.0;
  pOVar2->m_timeout = 0.0;
  pOVar2->m_timeoutClock = 0.0;
  (pOVar2->vCurPos).field0_0x0.d[3] = 0.0;
  (pOVar2->vCurPos).field0_0x0.d[1] = 0.0;
  (pOVar2->vCurPos).field0_0x0.d[2] = 0.0;
  fVar4 = (pOVar2->vCurPos).field0_0x0.d[0];
  fVar5 = (pOVar2->vCurPos).field0_0x0.d[1];
  fVar6 = (pOVar2->vCurPos).field0_0x0.d[2];
  fVar7 = (pOVar2->vCurPos).field0_0x0.d[3];
  (pOVar2->vStartPos).field0_0x0.d[0] = fVar4;
  (pOVar2->vStartPos).field0_0x0.d[1] = fVar5;
  (pOVar2->vStartPos).field0_0x0.d[2] = fVar6;
  (pOVar2->vStartPos).field0_0x0.d[3] = fVar7;
  (pOVar2->vStopPos).field0_0x0.d[0] = fVar4;
  (pOVar2->vStopPos).field0_0x0.d[1] = fVar5;
  (pOVar2->vStopPos).field0_0x0.d[2] = fVar6;
  (pOVar2->vStopPos).field0_0x0.d[3] = fVar7;
                    /* end of inlined section */
  this->m_mover = pOVar2;
  pDVar3 = (DialogStrContainer *)__builtin_new(0x50);
  pDVar3 = __18DialogStrContainer(pDVar3);
  this->m_pStrings = pDVar3;
  this->m_curPlayerId = 2;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_30.right =
       _15ObjMoverWrapper_vTopLeftMessage.field0_0x0.d[0] +
       _15ObjMoverWrapper_vWHMessageBox.field0_0x0.d[0];
  local_30.left = _15ObjMoverWrapper_vTopLeftMessage.field0_0x0.d[0];
  local_30.bottom =
       _15ObjMoverWrapper_vTopLeftMessage.field0_0x0.d[1] +
       _15ObjMoverWrapper_vWHMessageBox.field0_0x0.d[1];
  local_30.top = _15ObjMoverWrapper_vTopLeftMessage.field0_0x0.d[1];
                    /* end of inlined section */
  SetClip__7EWindowRCt5TRect1Zf(this->m_pWin,&local_30);
  this->m_keyboard = (ETextEntryDialog *)0x0;
  this->m_fNextDownToggle = 0.5;
  this->m_nLinesScrolled = 0;
  this->m_nSkippedLines = 0;
  *(undefined4 *)&this->m_bTriggerUp = 0;
  *(undefined4 *)&this->m_bTriggerDown = 0;
  this->m_fDPadUpTime = 0.0;
  this->m_fDPadDownTime = 0.0;
  *(undefined4 *)&this->m_bUpToggle = 0;
  *(undefined4 *)&this->m_bDownToggle = 0;
  this->m_fNextUpToggle = 0.5;
  return this;
}

void EDialogWin::~EDialogWin(int __in_chrg) {
	void *ptr;
	
  ETextEntryDialog *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  DialogStrContainer *this_00;
  EWindow *pEVar3;
  
  this->__vtable = (EDialogWin__vtable *)_vt_10EDialogWin;
  Reset__10EDialogWin(this);
  pEVar1 = this->m_keyboard;
  if (pEVar1 != (ETextEntryDialog *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pEVar2->Draw)((int)pEVar1->m_szText + *(short *)&pEVar2->Update + -0x3e,3);
  }
  this_00 = this->m_pStrings;
  this->m_keyboard = (ETextEntryDialog *)0x0;
  if (this_00 != (DialogStrContainer *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialogdata.h */
    Reset__18DialogStrContainer(this_00);
    ___8BString2(&this_00->fYesString,2);
    ___8BString2(&this_00->fNoString,2);
    ___8BString2(&this_00->fCancelString,2);
    ___8BString2(&this_00->fTitleString,2);
    RemoveAll__9ENodeList((ENodeList *)this_00);
    _memmanFree__FPv(this_00);
  }
                    /* end of inlined section */
  this->m_pStrings = (DialogStrContainer *)0x0;
  if (this->m_mover != (ObjMoverWrapper *)0x0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    _memmanFree__FPv(this->m_mover);
  }
                    /* end of inlined section */
  pEVar3 = this->m_pWin;
  this->m_mover = (ObjMoverWrapper *)0x0;
  if (pEVar3 != (EWindow *)0x0) {
    (*(code *)pEVar3->__vtable->WindowMatrixChanged)
              ((int)&(pEVar3->m_mWindow).field0_0x0 + (int)*(short *)&pEVar3->__vtable->Select,3);
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  this->m_pWin = (EWindow *)0x0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  _13EUIObjectNode_m_uiSfxBack = PlayGoBackLive__8EUiAudio;
  _13EUIObjectNode_m_uiSfxSelect = PlaySelectLive__8EUiAudio;
  _13EUIObjectNode_m_uiSfxNext = PlayMoveLive__8EUiAudio;
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EDialogWin::PutPanelToSleep() {
  EUIObjectNode__vtable *pEVar1;
  
  if (_globals._pPanel != (EPanel *)0x0) {
    pEVar1 = ((_globals._pPanel)->field0_0x0).__vtable;
    (*(code *)pEVar1[1].EUIObjectNode)
              ((int)(_globals._pPanel)->m_messageFns + *(short *)(pEVar1 + 1) + -0x3c,0,0x1e);
  }
  return;
}

void EDialogWin::Update() {
	bool buttonup;
	bool buttondown;
	ObjMoverWrapper *this;
	ObjMoverWrapper *this;
	EVec4 *this;
	EVec4 &v;
	ObjMoverWrapper *this;
	EUIObjectMover *this;
	ObjMoverWrapper *this;
	float delMag;
	float mu;
	EUIObjectMover *this;
	EVec4 &vA;
	float u;
	int i;
	EVec4 *this;
	int value;
	int value;
	EVec4 *this;
	int value;
	EDialogWin *this;
	EDialog *this;
	ObjMoverWrapper *this;
	EVec4 &v;
	EVec4 *this;
	EDialog *this;
	EDialog *this;
	EDialog *this;
	ObjMoverWrapper *this;
	EDialog *this;
	EDialogWin *this;
	
  ObjMoverWrapper *pOVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  EVec4__null___1__1 *pEVar3;
  bool bVar4;
  ObjMoverWrapper *pOVar5;
  Status__8_2217 SVar6;
  TreeReturnCode TVar7;
  long lVar8;
  EVec4 *pEVar9;
  uint uVar10;
  EVec4 *pEVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  bVar4 = false;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialogdata.h */
  pOVar1 = this->m_mover;
  if (((((pOVar1->vCurPos).field0_0x0.d[0] == (pOVar1->vStopPos).field0_0x0.d[0]) &&
       ((pOVar1->vCurPos).field0_0x0.d[1] == (pOVar1->vStopPos).field0_0x0.d[1])) &&
      ((pOVar1->vCurPos).field0_0x0.d[2] == (pOVar1->vStopPos).field0_0x0.d[2])) &&
     ((pOVar1->vCurPos).field0_0x0.d[3] == (pOVar1->vStopPos).field0_0x0.d[3])) {
    bVar4 = true;
  }
  if (bVar4) {
    pOVar1->m_timeoutClock = pOVar1->m_timeoutClock + _dt;
  }
  else {
    pOVar1->m_timeoutClock = 0.0;
  }
  if (pOVar1->m_timeoutClock < pOVar1->m_timeout) {
    fVar15 = (pOVar1->mover).m_curtime + _dt;
    (pOVar1->mover).m_curtime = fVar15;
    fVar17 = (pOVar1->mover).m_startt;
    if (fVar17 <= fVar15) {
      fVar17 = (pOVar1->mover).m_stopt;
      (pOVar1->mover).m_curtime =
           (float)((int)fVar15 * (uint)(fVar15 < fVar17) | (int)fVar17 * (uint)(fVar15 >= fVar17));
    }
    else {
      (pOVar1->mover).m_curtime = fVar17;
    }
    pOVar1 = this->m_mover;
  }
  else {
    pOVar1 = this->m_mover;
  }
  fVar17 = 0.0;
  fVar15 = (pOVar1->mover).m_curtime / (pOVar1->mover).m_stopt;
  pEVar11 = &pOVar1->vCurPos;
  if (0.0 <= fVar15) {
    fVar17 = (float)((int)fVar15 * (uint)(fVar15 < 1.0) | (uint)(fVar15 >= 1.0) * 0x3f800000);
  }
  pEVar9 = &pOVar1->vStopPos;
  iVar12 = 3;
  pOVar5 = pOVar1;
  do {
    fVar15 = (pOVar5->vStartPos).field0_0x0.d[0];
    iVar12 = iVar12 + -1;
    pEVar3 = &pEVar9->field0_0x0;
    pOVar5 = (ObjMoverWrapper *)((int)&(pOVar5->vStartPos).field0_0x0 + 4);
    pEVar9 = (EVec4 *)((int)&pEVar9->field0_0x0 + 4);
    (pEVar11->field0_0x0).d[0] = fVar15 + (pEVar3->d[0] - fVar15) * fVar17;
    pEVar11 = (EVec4 *)((int)&pEVar11->field0_0x0 + 4);
  } while (-1 < iVar12);
  fVar17 = (pOVar1->vCurPos).field0_0x0.d[0];
  fVar18 = (pOVar1->vCurPos).field0_0x0.d[1];
  fVar15 = (pOVar1->vStopPos).field0_0x0.d[0];
  fVar16 = (pOVar1->vStopPos).field0_0x0.d[1];
  fVar21 = (pOVar1->vCurPos).field0_0x0.d[2];
  fVar20 = (pOVar1->vStopPos).field0_0x0.d[2];
  fVar22 = (pOVar1->vCurPos).field0_0x0.d[3];
  fVar19 = (pOVar1->vStopPos).field0_0x0.d[3];
  if (ABS((fVar17 * fVar17 + fVar18 * fVar18 + fVar21 * fVar21 + fVar22 * fVar22) -
          (fVar15 * fVar15 + fVar16 * fVar16 + fVar20 * fVar20 + fVar19 * fVar19)) <= 0.0001) {
    uVar13 = *(undefined8 *)&(pOVar1->vStopPos).field0_0x0;
    fVar15 = (pOVar1->vStopPos).field0_0x0.d[2];
    fVar17 = (pOVar1->vStopPos).field0_0x0.d[3];
    (pOVar1->vCurPos).field0_0x0.d[0] = (float)uVar13;
    (pOVar1->vCurPos).field0_0x0.d[1] = (float)((ulong)uVar13 >> 0x20);
    (pOVar1->vCurPos).field0_0x0.d[2] = fVar15;
    (pOVar1->vCurPos).field0_0x0.d[3] = fVar17;
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
    uVar10 = this->fType;
  }
  else {
    uVar10 = this->fType;
  }
                    /* end of inlined section */
  if (uVar10 == 3) {
    bVar4 = UpdateKeyboard__16ETextEntryDialog(this->m_keyboard);
    if (!bVar4) {
      this->fStatus = kUserClickedYes;
      goto LAB_00137460;
    }
    iVar12 = *(int *)&this->m_bAllstringsVis;
  }
  else {
    bVar4 = false;
    if (this->fStatus == kWaitingForUser) {
LAB_00137394:
      if (this->fStatus != kNotShownYet) {
        bVar4 = GetBut__10EDialogWini(this,0x40);
        if (bVar4) {
                    /* end of inlined section */
          this->fStatus = kUserClickedYes;
LAB_00137460:
          TVar7 = ProcUserInput__10EDialogWin(this);
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
                    /* end of inlined section */
          *(long *)this->m_pDialogMan = (long)TVar7;
          return;
        }
        uVar10 = this->fType;
        if (uVar10 - 1 < 2) {
          bVar4 = GetBut__10EDialogWini(this,0x10);
          if (bVar4) {
                    /* end of inlined section */
            this->fStatus = kUserClickedCancel;
            goto LAB_00137460;
          }
          if (this->fType != 2) {
            iVar12 = *(int *)&this->m_bAllstringsVis;
            goto LAB_00137478;
          }
          bVar4 = GetBut__10EDialogWini(this,0x20);
          if (bVar4) {
                    /* end of inlined section */
            this->fStatus = kUserClickedNo;
            goto LAB_00137460;
          }
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialogdata.h */
          if (this->m_mover->m_timeout <= this->m_mover->m_timeoutClock) {
            SVar6 = kUserClickedYes;
            if (uVar10 == 1) {
              SVar6 = kUserClickedNo;
            }
            else if (uVar10 == 2) {
              SVar6 = kUserClickedCancel;
            }
            this->fStatus = SVar6;
            goto LAB_00137460;
          }
        }
      }
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialogdata.h */
      pOVar1 = this->m_mover;
      if ((((pOVar1->vCurPos).field0_0x0.d[0] == (pOVar1->vStopPos).field0_0x0.d[0]) &&
          ((pOVar1->vCurPos).field0_0x0.d[1] == (pOVar1->vStopPos).field0_0x0.d[1])) &&
         (((pOVar1->vCurPos).field0_0x0.d[2] == (pOVar1->vStopPos).field0_0x0.d[2] &&
          ((pOVar1->vCurPos).field0_0x0.d[3] == (pOVar1->vStopPos).field0_0x0.d[3])))) {
        bVar4 = true;
      }
                    /* end of inlined section */
      if (!bVar4) goto LAB_00137394;
      this->fStatus = kWaitingForUser;
    }
    iVar12 = *(int *)&this->m_bAllstringsVis;
  }
LAB_00137478:
  if (iVar12 != 0) {
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
                    /* end of inlined section */
  if (this->fType == 3) {
    return;
  }
  lVar14 = 0;
  if (this->m_curPlayerId == 0) {
    uVar13 = 0;
LAB_001374bc:
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar14 = (**(code **)(pEVar2 + 1))
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,
                        uVar13,0x1000);
  }
  else {
    if (this->m_curPlayerId == 1) {
      uVar13 = 1;
      goto LAB_001374bc;
    }
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar8 = (**(code **)(pEVar2 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0,
                       0x1000);
    if (lVar8 == 0) {
      pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar8 = (**(code **)(pEVar2 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,1,
                         0x1000);
      if (lVar8 != 0) {
        lVar14 = 1;
      }
    }
    else {
      lVar14 = 1;
    }
  }
  if (lVar14 == 0) {
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
  lVar14 = 0;
  if (this->m_curPlayerId == 0) {
    uVar13 = 0;
  }
  else {
    if (this->m_curPlayerId != 1) {
      pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar8 = (**(code **)(pEVar2 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0,
                         0x4000);
      if (lVar8 == 0) {
        pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar8 = (**(code **)(pEVar2 + 1))
                          ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,1,
                           0x4000);
        if (lVar8 != 0) {
          lVar14 = 1;
        }
      }
      else {
        lVar14 = 1;
      }
      goto LAB_0013762c;
    }
    uVar13 = 1;
  }
  pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar14 = (**(code **)(pEVar2 + 1))
                     ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,uVar13,
                      0x4000);
LAB_0013762c:
  if (lVar14 == 0) {
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
    uVar10 = *(uint *)&this->m_bUpToggle ^ 1;
    *(uint *)&this->m_bTriggerUp = uVar10;
    this->m_fNextUpToggle = this->m_fNextUpToggle + 0.025;
    *(uint *)&this->m_bUpToggle = uVar10;
    fVar15 = this->m_fDPadDownTime;
  }
  else {
    fVar15 = this->m_fDPadDownTime;
  }
  if (this->m_fNextDownToggle < fVar15) {
    uVar10 = *(uint *)&this->m_bDownToggle ^ 1;
    *(uint *)&this->m_bTriggerDown = uVar10;
    this->m_fNextDownToggle = this->m_fNextDownToggle + 0.025;
    *(uint *)&this->m_bDownToggle = uVar10;
    iVar12 = *(int *)&this->m_bTriggerDown;
  }
  else {
    iVar12 = *(int *)&this->m_bTriggerDown;
  }
  if (iVar12 == 0) {
    iVar12 = *(int *)&this->m_bTriggerUp;
  }
  else {
    *(undefined4 *)&this->m_bTriggerDown = 0;
    if (this->m_nLinesScrolled < this->m_pStrings->nStrings + -5) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      if (_13EUIObjectNode_m_uiSfxNext == (undefined1 *)0x0) {
        iVar12 = this->m_nLinesScrolled;
      }
      else {
        (*(code *)_13EUIObjectNode_m_uiSfxNext)();
                    /* end of inlined section */
        iVar12 = this->m_nLinesScrolled;
      }
      this->m_nLinesScrolled = iVar12 + 1;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
    }
                    /* end of inlined section */
    iVar12 = *(int *)&this->m_bTriggerUp;
  }
  if (iVar12 != 0) {
    *(undefined4 *)&this->m_bTriggerUp = 0;
    if (this->m_nLinesScrolled < 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      if (_13EUIObjectNode_m_uiSfxNext == (undefined1 *)0x0) {
        iVar12 = this->m_nLinesScrolled;
      }
      else {
        (*(code *)_13EUIObjectNode_m_uiSfxNext)();
                    /* end of inlined section */
        iVar12 = this->m_nLinesScrolled;
      }
      this->m_nLinesScrolled = iVar12 + -1;
    }
  }
  return;
}

bool EDialogWin::GetBut(int mask) {
  EUIVirtualCtrl__vtable *pEVar1;
  undefined uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (this->m_curPlayerId == 0) {
    uVar4 = 0;
  }
  else {
    if (this->m_curPlayerId != 1) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar3 = (*(code *)pEVar1[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                         0,mask);
      if ((lVar3 == 0) &&
         (pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
         lVar3 = (*(code *)pEVar1[1].GetBut)
                           ((int)(_globals.m_pCtrlPad)->m_pressed +
                            *(short *)&pEVar1[1].ClearBut + -4,1,mask), lVar3 == 0)) {
        return false;
      }
      return true;
    }
    uVar4 = 1;
  }
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  uVar2 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                     uVar4,mask);
  return (bool)uVar2;
}

void EDialogWin::Reset() {
	DialogStrContainer *this;
	TNodeList<BString2 *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  DialogStrContainer *this_00;
  EGlobalManagerClient__vtable *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  EGraphics *pEVar3;
  ENodeListNode *pEVar4;
  BString2 *this_01;
  
  pEVar3 = _pGfx;
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialogdata.h */
  this_00 = this->m_pStrings;
  this_00->nStrings = 0;
  pEVar1 = (pEVar3->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(pEVar3->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  pEVar4 = ((TLinkedList_ENodeListNode_4_8_ *)&this_00->m_strings)->m_pHead;
  if (pEVar4 != (ENodeListNode *)0x0) {
    this_01 = (BString2 *)pEVar4->data;
    while( true ) {
      pEVar4 = pEVar4->pNext;
      if (this_01 != (BString2 *)0x0) {
        ___8BString2(this_01,3);
      }
      if (pEVar4 == (ENodeListNode *)0x0) break;
      this_01 = (BString2 *)pEVar4->data;
    }
  }
  RemoveAll__9ENodeList((ENodeList *)this_00);
                    /* end of inlined section */
  if (_globals._pPanel != (EPanel *)0x0) {
    pEVar2 = ((_globals._pPanel)->field0_0x0).__vtable;
    (*(code *)pEVar2[1].EUIObjectNode)
              ((int)(_globals._pPanel)->m_messageFns + *(short *)(pEVar2 + 1) + -0x3c,0,0x1f);
  }
  return;
}

void EDialogWin::Draw(ERC *prc) {
	EVec2 vBigBoxTL;
	EVec2 vBigBoxBR;
	EDialogWin *this;
	float x;
	float y;
	float x;
	float y;
	EVec4 *this;
	EVec4 &v;
	float dialogCenterX;
	EVec2 titleStringWH;
	EVec2 vposPrompt;
	float promptBackW;
	ERFont *this;
	ERFont *this;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	float x;
	ERFont *this;
	ERC *prc;
	
  EUIObjectNode__vtable *pEVar1;
  bool bVar2;
  ERFont *pEVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ObjMoverWrapper *pOVar8;
  short *psVar9;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar10;
  EFontSize *pEVar11;
  EVec2 vBigBoxTL;
  EVec2 vBigBoxBR;
  EVec2 titleStringWH;
  int local_100;
  EStorable__vtable *local_fc;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  EVec2 vposPrompt;
  EFontSize *local_c0;
  float local_bc;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a0;
  float local_9c;
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
  
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
                    /* end of inlined section */
  if (this->fType == 3) {
    pEVar1 = (this->m_keyboard->field0_0x0).__vtable;
    (*(code *)pEVar1->Message)
              ((int)this->m_keyboard->m_szText + *(short *)&pEVar1->SetBoxDims + -0x3e);
    return;
  }
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
  if (_globals._pCurHouse == (EHouse__26_3190 *)0x0) {
    pOVar8 = this->m_mover;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
    if ((_globals._pCurHouse)->m_lmStage == LM_STAGE_NONE) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vBigBoxTL.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vBigBoxTL.field0_0x0.d[0] = 0.0;
      local_e4 = _BLACK.field0_0x0.d[3] * 0.45;
      vBigBoxBR.field0_0x0.d[1] = 1.0;
      local_f0 = _BLACK.field0_0x0.d[0] * 0.45;
      local_ec = _BLACK.field0_0x0.d[1] * 0.45;
      vBigBoxBR.field0_0x0.d[0] = 1.0;
      local_e8 = _BLACK.field0_0x0.d[2] * 0.45;
      titleStringWH.field0_0x0.d[0] = 0.0;
      titleStringWH.field0_0x0.d[1] = 1.0;
      local_fc = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_100 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vBigBoxTL,
                 &vBigBoxBR,&titleStringWH,&local_100,&local_f0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      pOVar8 = this->m_mover;
    }
    else {
      pOVar8 = this->m_mover;
    }
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vBigBoxTL.field0_0x0.d[0] = (pOVar8->vCurPos).field0_0x0.d[0];
  vBigBoxTL.field0_0x0.d[1] = (pOVar8->vCurPos).field0_0x0.d[1];
  vBigBoxBR.field0_0x0.d[1] = (pOVar8->vCurPos).field0_0x0.d[3];
  vBigBoxBR.field0_0x0.d[0] = (pOVar8->vCurPos).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
  DrawBigBox__10EDialogWinP3ERCfffff
            (prc,vBigBoxTL.field0_0x0.d[0],vBigBoxTL.field0_0x0.d[1],vBigBoxBR.field0_0x0.d[0],
             vBigBoxBR.field0_0x0.d[1],1.0);
  pEVar3 = _globals.m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  pOVar8 = this->m_mover;
  bVar2 = false;
  if (((((pOVar8->vCurPos).field0_0x0.d[0] == (pOVar8->vStopPos).field0_0x0.d[0]) &&
       ((pOVar8->vCurPos).field0_0x0.d[1] == (pOVar8->vStopPos).field0_0x0.d[1])) &&
      ((pOVar8->vCurPos).field0_0x0.d[2] == (pOVar8->vStopPos).field0_0x0.d[2])) &&
     ((pOVar8->vCurPos).field0_0x0.d[3] == (pOVar8->vStopPos).field0_0x0.d[3])) {
    bVar2 = true;
  }
                    /* end of inlined section */
  if (!bVar2) {
    return;
  }
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  fVar10 = (this->m_pWin->m_rClipIn).left;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  pEVar11 = (EFontSize *)(fVar10 + ((this->m_pWin->m_rClipIn).right - fVar10) * 0.5);
  psVar9 = c_str__C8BString2(&this->m_pStrings->fTitleString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&titleStringWH,pEVar3,SUB41(psVar9,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  titleStringWH.field0_0x0.d[0] = titleStringWH.field0_0x0.d[0] + 0.1;
  SetSize__6ERFontffb(_globals.m_pFont,_15ObjMoverWrapper_m_fontSize,1.0,true);
  uVar6 = _WHITE.field0_0x0.d[3];
  uVar5 = _WHITE.field0_0x0.d[2];
  uVar4 = _WHITE.field0_0x0._0_8_;
  pEVar3 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar5;
  (pEVar3->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vposPrompt.field0_0x0.d[1] =
       _15ObjMoverWrapper_vTopLeftMessage.field0_0x0.d[1] +
       _15ObjMoverWrapper_vWHMessageBox.field0_0x0.d[1] + _18DialogStrContainer_m_promptoff;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vposPrompt.field0_0x0.d[0] = _15ObjMoverWrapper_vTopLeftMessage.field0_0x0.d[0];
                    /* end of inlined section */
  if (this->fType == 1) {
    fVar10 = 0.6;
  }
  else {
    if (this->fType != 0) goto LAB_00137c68;
    fVar10 = 0.3;
  }
  vposPrompt.field0_0x0.d[0] =
       (float)pEVar11 - _15ObjMoverWrapper_vWPromptBar.field0_0x0.d[0] * fVar10 * 0.5;
LAB_00137c68:
  DrawText__10EDialogWinP3ERCb(this,prc,true);
  uVar6 = _BLACK.field0_0x0.d[3];
  uVar5 = _BLACK.field0_0x0.d[2];
  uVar7 = _BLACK.field0_0x0.d[1];
  pEVar3 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = _BLACK.field0_0x0.d[0];
  (pEVar3->m_vColor).field0_0x0.d[1] = uVar7;
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar5;
  (pEVar3->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar9 = c_str__C8BString2(&this->m_pStrings->fTitleString);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_bc = (this->m_mover->vStopPos).field0_0x0.d[1] + 0.04;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ac = 0x3ba3d70a;
  local_a0 = (float)pEVar11 + 0.005;
  local_9c = local_bc + 0.005;
  local_b0 = 0x3ba3d70a;
  local_c0 = pEVar11;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar9,true,(EVec2 *)&local_a0,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0
            );
  uVar6 = _WHITE.field0_0x0.d[3];
  uVar5 = _WHITE.field0_0x0.d[2];
  uVar4 = _WHITE.field0_0x0._0_8_;
  pEVar3 = _globals.m_pFont;
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (pEVar3->m_vColor).field0_0x0.d[2] = uVar5;
  (pEVar3->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar9 = c_str__C8BString2(&this->m_pStrings->fTitleString);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_bc = (this->m_mover->vStopPos).field0_0x0.d[1] + 0.04;
  local_c0 = pEVar11;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,psVar9,true,(EVec2 *)&local_c0,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0
            );
                    /* end of inlined section */
  switch(this->fType) {
  case 0:
  case 3:
  case 4:
    DrawYes__10EDialogWinP3ERC(this,prc);
    break;
  case 1:
    DrawNoYes__10EDialogWinP3ERC(this,prc);
    break;
  case 2:
    DrawCancleNoYes__10EDialogWinP3ERC(this,prc);
  }
  return;
}

void EDialogWin::DrawTextBox(ERC *prc, float _x, float _y, float _w, float alph) {
  DrawTextBox__10SimInfoWinP3ERCffff(prc,_x,_y,_w,alph);
  return;
}

void EDialogWin::DrawBigBox(ERC *prc, float _l, float _t, float _r, float _b, float alph) {
	float totalW;
	float totalH;
	float partW;
	float partH;
	float midW;
	float midH;
	EGraphics *this;
	float x;
	float y;
	float scaler;
	float x;
	float y;
	float scaler;
	float y;
	float x;
	float scaler;
	float x;
	float y;
	float scaler;
	float x;
	float scaler;
	float x;
	float scaler;
	float y;
	float scaler;
	float y;
	float scaler;
	float scaler;
	
  bool bVar1;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_c0;
  float local_bc;
  float local_b0;
  float local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  
                    /* inlined from /eor/src2/engine/e_graphics.h */
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_70 = (undefined4)unaff_retaddr;
  uStack_6c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  fVar7 = 32.0 / (float)_pGfx->m_xscreen;
  fVar2 = fVar7 + fVar7;
  fVar6 = 32.0 / (float)_pGfx->m_yscreen;
  fVar4 = fVar2;
  if (fVar2 <= _r - _l) {
    fVar4 = _r - _l;
  }
  fVar3 = fVar6 + fVar6;
  fVar9 = _b - _t;
  if (_b - _t < fVar3) {
    fVar9 = fVar3;
  }
  fVar8 = -0.1;
  bVar1 = -0.1 < _l;
  fVar9 = fVar9 - fVar3;
  if (bVar1) {
    Select__8ERShaderP3ERCi(_10EDialogWin_m_pTextBoxBGTL,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_b0 = _l + fVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_a0 = _WHITE.field0_0x0.d[0] * alph;
    local_94 = _WHITE.field0_0x0.d[3] * alph;
    local_9c = _WHITE.field0_0x0.d[1] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_98 = _WHITE.field0_0x0.d[2] * alph;
                    /* end of inlined section */
    local_ac = _t + fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_c0 = _l;
    local_bc = _t;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_c0,&local_b0,
               0x3cfc68,0x3cfc70,&local_a0);
    bVar1 = fVar8 < _l;
  }
  if (bVar1) {
    Select__8ERShaderP3ERCi(_10EDialogWin_m_pTextBoxBGBL,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_bc = _b - fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_90 = _WHITE.field0_0x0.d[0] * alph;
    local_84 = _WHITE.field0_0x0.d[3] * alph;
    local_8c = _WHITE.field0_0x0.d[1] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_88 = _WHITE.field0_0x0.d[2] * alph;
                    /* end of inlined section */
    local_b0 = _l + fVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_c0 = _l;
    local_ac = _b;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_c0,&local_b0,
               0x3cfc68,0x3cfc70,&local_90);
  }
  if (_r < 1.1) {
    Select__8ERShaderP3ERCi(_10EDialogWin_m_pTextBoxBGTR,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_c0 = _r - fVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_a0 = _WHITE.field0_0x0.d[0] * alph;
    local_94 = _WHITE.field0_0x0.d[3] * alph;
    local_9c = _WHITE.field0_0x0.d[1] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_98 = _WHITE.field0_0x0.d[2] * alph;
                    /* end of inlined section */
    local_ac = _t + fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_bc = _t;
    local_b0 = _r;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_c0,&local_b0,
               0x3cfc68,0x3cfc70,&local_a0);
    Select__8ERShaderP3ERCi(_10EDialogWin_m_pTextBoxBGBR,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_c0 = _r - fVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_a0 = _WHITE.field0_0x0.d[0] * alph;
    local_94 = _WHITE.field0_0x0.d[3] * alph;
    local_9c = _WHITE.field0_0x0.d[1] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_98 = _WHITE.field0_0x0.d[2] * alph;
                    /* end of inlined section */
    local_bc = _b - fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_b0 = _r;
    local_ac = _b;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_c0,&local_b0,
               0x3cfc68,0x3cfc70,&local_a0);
  }
  uVar5 = 0;
  if (fVar9 != 0.0) {
    if (fVar8 < _l) {
      Select__8ERShaderP3ERCi(_10EDialogWin_m_pTextBoxBGML,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_bc = _t + fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_b0 = _l + fVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_94 = _WHITE.field0_0x0.d[3] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_9c = _WHITE.field0_0x0.d[1] * alph;
      local_98 = _WHITE.field0_0x0.d[2] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_a0 = _WHITE.field0_0x0.d[0] * alph;
                    /* end of inlined section */
      local_ac = _b - fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_c0 = _l;
      (*(code *)prc->__vtable[1].DisplayList)
                (uVar5,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_c0,
                 &local_b0,0x3cfc68,0x3cfc70,&local_a0);
    }
    if (_r < 1.1) {
      Select__8ERShaderP3ERCi(_10EDialogWin_m_pTextBoxBGMR,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_c0 = _r - fVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_bc = _t + fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_94 = _WHITE.field0_0x0.d[3] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_9c = _WHITE.field0_0x0.d[1] * alph;
      local_98 = _WHITE.field0_0x0.d[2] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_a0 = _WHITE.field0_0x0.d[0] * alph;
                    /* end of inlined section */
      local_ac = _b - fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_b0 = _r;
      (*(code *)prc->__vtable[1].DisplayList)
                (uVar5,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_c0,
                 &local_b0,0x3cfc68,0x3cfc70,&local_a0);
    }
  }
  uVar5 = 0;
  if (fVar4 - fVar2 != 0.0) {
    if (-0.1 < _t) {
      Select__8ERShaderP3ERCi(_10EDialogWin_m_pTextBoxBGTC,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_c0 = _l + fVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_b0 = _r - fVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_94 = _WHITE.field0_0x0.d[3] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_9c = _WHITE.field0_0x0.d[1] * alph;
      local_98 = _WHITE.field0_0x0.d[2] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_a0 = _WHITE.field0_0x0.d[0] * alph;
                    /* end of inlined section */
      local_ac = _t + fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_bc = _t;
      (*(code *)prc->__vtable[1].DisplayList)
                (uVar5,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_c0,
                 &local_b0,0x3cfc68,0x3cfc70,&local_a0);
    }
    if (_b < 1.1) {
      Select__8ERShaderP3ERCi(_10EDialogWin_m_pTextBoxBGBC,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_c0 = _l + fVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_bc = _b - fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_94 = _WHITE.field0_0x0.d[3] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_9c = _WHITE.field0_0x0.d[1] * alph;
      local_98 = _WHITE.field0_0x0.d[2] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_a0 = _WHITE.field0_0x0.d[0] * alph;
                    /* end of inlined section */
      local_b0 = _r - fVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_ac = _b;
      (*(code *)prc->__vtable[1].DisplayList)
                (uVar5,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_c0,
                 &local_b0,0x3cfc68,0x3cfc70,&local_a0);
    }
  }
  uVar5 = 0;
  if ((fVar4 - fVar2 != 0.0) && (fVar9 != 0.0)) {
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_b0 = _r - fVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_ac = _b - fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_c0 = _l + fVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_94 = _vBlueBack.field0_0x0.d[3] * alph;
                    /* end of inlined section */
    local_bc = _t + fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_a0 = _vBlueBack.field0_0x0.d[0] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_9c = _vBlueBack.field0_0x0.d[1] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_98 = _vBlueBack.field0_0x0.d[2] * alph;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (uVar5,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_c0,
               &local_b0,0x3cfc68,0x3cfc70,&local_a0);
  }
  return;
}

void EDialogWin::DrawBigBlackBox(ERC *prc, float _x, float _y, float _h, float _w, float OverrideAlpha, EVec4 vColor) {
	float _b;
	float _r;
	float totalW;
	float totalH;
	float partW;
	float partH;
	float midW;
	float midH;
	EGraphics *this;
	EVec4 *this;
	float y;
	EVec4 *this;
	float x;
	EVec4 *this;
	float x;
	float y;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	float y;
	EVec4 *this;
	
  bool bVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_d0;
  float local_cc;
  float local_c0;
  float local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  
                    /* inlined from /eor/src2/engine/e_graphics.h */
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  fVar8 = _y + _h;
  fVar7 = _x + _w;
  local_70 = (undefined4)unaff_retaddr;
  uStack_6c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  fVar5 = 16.0 / (float)_pGfx->m_xscreen;
  fVar6 = 16.0 / (float)_pGfx->m_yscreen;
  fVar2 = fVar5 + fVar5;
  fVar4 = fVar2;
  if (fVar2 <= fVar7 - _x) {
    fVar4 = fVar7 - _x;
  }
  fVar3 = fVar6 + fVar6;
  fVar10 = fVar8 - _y;
  if (fVar8 - _y < fVar3) {
    fVar10 = fVar3;
  }
  fVar9 = -0.1;
  bVar1 = -0.1 < _x;
  fVar10 = fVar10 - fVar3;
  if (bVar1) {
    Select__8ERShaderP3ERCi(_10EDialogWin_m_pBlackBoxBGTL,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_c0 = _x + fVar5;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_bc = _y + fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_b0 = (vColor->field0_0x0).d[0] * OverrideAlpha;
    local_ac = (vColor->field0_0x0).d[1] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_a8 = (vColor->field0_0x0).d[2] * OverrideAlpha;
    local_a4 = (vColor->field0_0x0).d[3] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_d0 = _x;
    local_cc = _y;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_d0,&local_c0,
               0x3cfc68,0x3cfc70,&local_b0);
    bVar1 = fVar9 < _x;
  }
  if (bVar1) {
    Select__8ERShaderP3ERCi(_10EDialogWin_m_pBlackBoxBGBL,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_cc = fVar8 - fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_c0 = _x + fVar5;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_a0 = (vColor->field0_0x0).d[0] * OverrideAlpha;
    local_9c = (vColor->field0_0x0).d[1] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_98 = (vColor->field0_0x0).d[2] * OverrideAlpha;
    local_94 = (vColor->field0_0x0).d[3] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_d0 = _x;
    local_bc = fVar8;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_d0,&local_c0,
               0x3cfc68,0x3cfc70,&local_a0);
  }
  bVar1 = fVar7 < 1.1;
  if (bVar1) {
    Select__8ERShaderP3ERCi(_10EDialogWin_m_pBlackBoxBGTR,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_d0 = fVar7 - fVar5;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_bc = _y + fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_b0 = (vColor->field0_0x0).d[0] * OverrideAlpha;
    local_ac = (vColor->field0_0x0).d[1] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_a8 = (vColor->field0_0x0).d[2] * OverrideAlpha;
    local_a4 = (vColor->field0_0x0).d[3] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_cc = _y;
    local_c0 = fVar7;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_d0,&local_c0,
               0x3cfc68,0x3cfc70,&local_b0);
    bVar1 = fVar7 < 1.1;
  }
  if (bVar1) {
    Select__8ERShaderP3ERCi(_10EDialogWin_m_pBlackBoxBGBR,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_d0 = fVar7 - fVar5;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_cc = fVar8 - fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_b0 = (vColor->field0_0x0).d[0] * OverrideAlpha;
    local_ac = (vColor->field0_0x0).d[1] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_a8 = (vColor->field0_0x0).d[2] * OverrideAlpha;
    local_a4 = (vColor->field0_0x0).d[3] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_c0 = fVar7;
    local_bc = fVar8;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_d0,&local_c0,
               0x3cfc68,0x3cfc70,&local_b0);
  }
  if (fVar10 != 0.0) {
    if (fVar9 < _x) {
      Select__8ERShaderP3ERCi(_10EDialogWin_m_pBlackBoxBGML,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_cc = _y + fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_b0 = (vColor->field0_0x0).d[0] * OverrideAlpha;
                    /* end of inlined section */
      local_c0 = _x + fVar5 + fVar5;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_ac = (vColor->field0_0x0).d[1] * OverrideAlpha;
      local_a8 = (vColor->field0_0x0).d[2] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_a4 = (vColor->field0_0x0).d[3] * OverrideAlpha;
                    /* end of inlined section */
      local_bc = fVar8 - fVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_d0 = _x;
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_d0,
                 &local_c0,0x3cfc68,0x3cfc70,&local_b0);
    }
    if (fVar7 < 1.1) {
      Select__8ERShaderP3ERCi(_10EDialogWin_m_pBlackBoxBGMR,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_d0 = fVar7 - fVar5;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_cc = _y + fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_b0 = (vColor->field0_0x0).d[0] * OverrideAlpha;
      local_ac = (vColor->field0_0x0).d[1] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_a8 = (vColor->field0_0x0).d[2] * OverrideAlpha;
      local_a4 = (vColor->field0_0x0).d[3] * OverrideAlpha;
                    /* end of inlined section */
      local_c0 = fVar7 + fVar5;
      local_bc = fVar8 - fVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_d0,
                 &local_c0,0x3cfc68,0x3cfc70,&local_b0);
    }
  }
  if (fVar4 - fVar2 != 0.0) {
    if (-0.1 < _y) {
      Select__8ERShaderP3ERCi(_10EDialogWin_m_pBlackBoxBGTC,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_d0 = _x + fVar5;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_c0 = fVar7 - fVar5;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_b0 = (vColor->field0_0x0).d[0] * OverrideAlpha;
      local_ac = (vColor->field0_0x0).d[1] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_a8 = (vColor->field0_0x0).d[2] * OverrideAlpha;
      local_a4 = (vColor->field0_0x0).d[3] * OverrideAlpha;
                    /* end of inlined section */
      local_bc = _y + fVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_cc = _y;
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_d0,
                 &local_c0,0x3cfc68,0x3cfc70,&local_b0);
    }
    if (fVar8 < 1.1) {
      Select__8ERShaderP3ERCi(_10EDialogWin_m_pBlackBoxBGBC,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_d0 = _x + fVar5;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_cc = fVar8 - fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_b0 = (vColor->field0_0x0).d[0] * OverrideAlpha;
      local_ac = (vColor->field0_0x0).d[1] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_a8 = (vColor->field0_0x0).d[2] * OverrideAlpha;
      local_a4 = (vColor->field0_0x0).d[3] * OverrideAlpha;
                    /* end of inlined section */
      local_c0 = fVar7 - fVar5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_bc = fVar8;
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_d0,
                 &local_c0,0x3cfc68,0x3cfc70,&local_b0);
    }
  }
  if ((fVar4 - fVar2 != 0.0) && (fVar10 != 0.0)) {
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
    local_c0 = fVar7 - fVar5;
    local_bc = fVar8 - fVar6;
    local_d0 = _x + fVar5 + fVar5;
    local_a4 = (vColor->field0_0x0).d[3] * OverrideAlpha * 0.46;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_cc = _y + fVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_b0 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_ac = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_a8 = 0.0;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_d0,&local_c0,
               0x3cfc68,0x3cfc70,&local_b0);
  }
  return;
}

void EDialogWin::DrawText(ERC *prc, bool scroll) {
	float deltay;
	bool dontScroll;
	EFloatRect &rect;
	EVec2 vcusorpos;
	float leftstart;
	float ypos;
	NLIterator it;
	float shdheight;
	float shdwidth;
	float xpos;
	float ypos;
	ETexture *this;
	EGraphics *this;
	ETexture *this;
	TRect<float> *this;
	float x;
	float y;
	float x;
	float y;
	float shdwidth;
	float xpos;
	float ypos;
	ETexture *this;
	EGraphics *this;
	TRect<float> *this;
	float x;
	float y;
	float x;
	float y;
	NLIterator i;
	NLIterator i;
	ERFont *this;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	
  uint uVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  ENodeListNode *pEVar3;
  BString2 *this_00;
  bool bVar4;
  ERFont *pEVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  EWindow *pEVar9;
  short *psVar10;
  long lVar11;
  DialogStrContainer *pDVar12;
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
  float fVar13;
  float fVar14;
  float fVar15;
  EVec2 vcusorpos;
  float local_120;
  float local_11c;
  undefined8 local_110;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  bVar4 = false;
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  SetSize__6ERFontffb(_globals.m_pFont,_15ObjMoverWrapper_m_fontSize,1.0,true);
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
  fVar14 = GetLineSpacing__6ERFontP7EWindow(_globals.m_pFont,(EWindow *)0x0);
  fVar14 = _scrollinc * fVar14;
  if ((scroll) && (*(int *)&this->m_bAllstringsVis == 0)) {
    pEVar9 = this->m_pWin;
  }
  else {
    bVar4 = true;
    pEVar9 = this->m_pWin;
  }
  if (!bVar4) {
    if (this->m_nLinesScrolled < 1) {
      pDVar12 = this->m_pStrings;
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      uVar1 = ((_10EDialogWin_m_pMoreUpShd->m_rtextureList).field0_0x0.m_l.m_pHead)->data;
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
      fVar15 = (pEVar9->m_rClipIn).left;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
      vcusorpos.field0_0x0.d[1] =
           (pEVar9->m_rClipIn).top -
           ((float)(uint)*(ushort *)(*(int *)(uVar1 + 0x14) + 0x12) / (float)_pGfx->m_yscreen -
           0.012);
      vcusorpos.field0_0x0.d[0] =
           fVar15 + (((pEVar9->m_rClipIn).right - fVar15) -
                    (float)(uint)*(ushort *)(*(int *)(uVar1 + 0x14) + 0x10) /
                    (float)_pGfx->m_xscreen) * 0.5;
      Select__8ERShaderP3ERCi(_10EDialogWin_m_pMoreUpShd,prc,0);
      pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar11 = (**(code **)(pEVar2 + 1))
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,
                          _globals.m_whichPlayerPaused,0x1000);
      if (lVar11 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_110._4_4_ = 1.0;
        local_110._0_4_ = 1.0;
        local_f4 = 0x3f800000;
        local_f8 = 0x3f800000;
        local_fc = 0x3f800000;
        local_100 = 0x3f800000;
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].ClipRect)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vcusorpos,
                   &local_110,&local_100);
        pDVar12 = this->m_pStrings;
      }
      else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_11c = 1.0;
        local_120 = 1.0;
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].ClipRect)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vcusorpos,
                   &local_120,0x35f520);
        pDVar12 = this->m_pStrings;
      }
    }
    if (pDVar12->nStrings + -5 <= this->m_nLinesScrolled) {
      pEVar9 = this->m_pWin;
      goto LAB_0013905c;
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
    fVar15 = (pEVar9->m_rClipIn).left;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    fVar13 = (pEVar9->m_rClipIn).bottom;
    fVar15 = fVar15 + (((pEVar9->m_rClipIn).right - fVar15) -
                      (float)(uint)*(ushort *)
                                    (*(int *)(((_10EDialogWin_m_pMoreUpShd->m_rtextureList).
                                               field0_0x0.m_l.m_pHead)->data + 0x14) + 0x10) /
                      (float)_pGfx->m_xscreen) * 0.5;
    Select__8ERShaderP3ERCi(_10EDialogWin_m_pMoreDownShd,prc,0);
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar11 = (**(code **)(pEVar2 + 1))
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,
                        _globals.m_whichPlayerPaused,0x4000);
    vcusorpos.field0_0x0.d[0] = fVar15;
    vcusorpos.field0_0x0.d[1] = fVar13;
    if (lVar11 != 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_11c = 1.0;
      local_120 = 1.0;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vcusorpos,
                 &local_120,0x35f520);
      pEVar9 = this->m_pWin;
      goto LAB_0013905c;
    }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_11c = 1.0;
    local_120 = 1.0;
    local_e4 = 0x3f800000;
    local_e8 = 0x3f800000;
    local_ec = 0x3f800000;
    local_f0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vcusorpos,&local_120
               ,&local_f0);
  }
  pEVar9 = this->m_pWin;
LAB_0013905c:
  (*(code *)pEVar9->__vtable->OutputCoordinatesChanged)
            ((int)&(pEVar9->m_mWindow).field0_0x0 +
             (int)*(short *)&pEVar9->__vtable->InputCoordinatesChanged,prc);
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vcusorpos.field0_0x0.d[1] = 0.0;
  vcusorpos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
  fVar13 = (this->m_pWin->m_rClipIn).left;
                    /* end of inlined section */
  fVar15 = this->m_pStrings->m_textyPos;
  fVar13 = fVar13 + ((this->m_pWin->m_rClipIn).right - fVar13) * 0.5;
  pEVar5 = _globals.m_pFont;
  uVar6 = _BLACK.field0_0x0._0_8_;
  uVar7 = _BLACK.field0_0x0.d[2];
  uVar8 = _BLACK.field0_0x0.d[3];
  for (pEVar3 = (this->m_pStrings->m_strings).field0_0x0.m_l.m_pHead; _globals.m_pFont = pEVar5,
      _BLACK.field0_0x0._0_8_ = uVar6, _BLACK.field0_0x0.d[2] = uVar7,
      _BLACK.field0_0x0.d[3] = uVar8, pEVar3 != (ENodeListNode *)0x0; pEVar3 = pEVar3->pNext) {
                    /* end of inlined section */
    this_00 = (BString2 *)pEVar3->data;
    if ((bVar4) || (this->m_nLinesScrolled <= this->m_nSkippedLines)) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      (pEVar5->m_vColor).field0_0x0.d[0] = (float)uVar6;
      (pEVar5->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
      (pEVar5->m_vColor).field0_0x0.d[2] = uVar7;
      (pEVar5->m_vColor).field0_0x0.d[3] = uVar8;
      psVar10 = c_str__C8BString2(this_00);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_dc = 0x3ba3d70a;
      local_120 = fVar13 + 0.005;
      local_11c = fVar15 + 0.005;
      local_e0 = 0x3ba3d70a;
      local_110._0_4_ = fVar13;
      local_110._4_4_ = fVar15;
      local_d0 = local_120;
      local_cc = local_11c;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_globals.m_pFont,prc,psVar10,true,(EVec2 *)&local_d0,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
      uVar8 = _WHITE.field0_0x0.d[3];
      uVar7 = _WHITE.field0_0x0.d[2];
      uVar6 = _WHITE.field0_0x0._0_8_;
      pEVar5 = _globals.m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
      (pEVar5->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
      (pEVar5->m_vColor).field0_0x0.d[2] = uVar7;
      (pEVar5->m_vColor).field0_0x0.d[3] = uVar8;
      psVar10 = c_str__C8BString2(this_00);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      local_120 = fVar13;
      local_11c = fVar15;
      local_110._0_4_ = fVar13;
      local_110._4_4_ = fVar15;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_globals.m_pFont,prc,psVar10,true,(EVec2 *)&local_110,E_FAX_CENTER,E_FAY_TOP,
                 &vcusorpos);
                    /* end of inlined section */
      fVar15 = vcusorpos.field0_0x0.d[1] + fVar14;
    }
    else {
      this->m_nSkippedLines = this->m_nSkippedLines + 1;
    }
                    /* end of inlined section */
    pEVar5 = _globals.m_pFont;
    uVar6 = _BLACK.field0_0x0._0_8_;
    uVar7 = _BLACK.field0_0x0.d[2];
    uVar8 = _BLACK.field0_0x0.d[3];
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  }
  this->m_nSkippedLines = 0;
  SelectWin__7EGlobalP3ERC(&_globals,prc);
  return;
}

void EDialogWin::DrawCancleNoYes(ERC *prc) {
	float ystart;
	ETexture *ptxt;
	float buttonW;
	float gap;
	float yesw;
	float nosw;
	float canw;
	float xpos;
	ETexture *this;
	EGraphics *this;
	ETexture *this;
	float x;
	float y;
	float x;
	ERC *prc;
	float x;
	ERC *prc;
	float x;
	float y;
	float x;
	ERC *prc;
	float x;
	ERC *prc;
	float x;
	float y;
	float x;
	ERC *prc;
	float x;
	ERC *prc;
	
  ushort uVar1;
  int iVar2;
  int iVar3;
  ERFont *this_00;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  EVec2 *vPos;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  EStorable__vtable *aspect;
  float fVar8;
  EStorable__vtable *pEVar9;
  EStorable__vtable *pEVar10;
  EStorable__vtable *pEVar11;
  EStorable__vtable *pEVar12;
  EStorable__vtable *pEVar13;
  undefined4 uVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  undefined local_150 [20];
  EStorable__vtable *local_13c;
  EStorable__vtable *local_130;
  EStorable__vtable *local_12c;
  EStorable__vtable *local_128;
  EStorable__vtable *local_124;
  EStorable__vtable *local_120;
  EStorable__vtable *local_11c;
  EStorable__vtable *local_110;
  char *local_10c;
  EFontSize *local_100;
  char *local_fc;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e0;
  undefined4 uStack_dc;
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
  
  this_00 = _globals.m_pFont;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  local_80 = (undefined4)unaff_s7;
  uStack_7c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_90 = (undefined4)unaff_s6;
  uStack_8c = (undefined4)((ulong)unaff_s6 >> 0x20);
                    /* end of inlined section */
  local_70 = (undefined4)unaff_retaddr;
  uStack_6c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_a0 = (undefined4)unaff_s5;
  uStack_9c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_b0 = (undefined4)unaff_s4;
  uStack_ac = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_c0 = (undefined4)unaff_s3;
  uStack_bc = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_d0 = (undefined4)unaff_s2;
  uStack_cc = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_e0 = (undefined4)unaff_s1;
  uStack_dc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_f0 = (undefined4)unaff_s0;
  uStack_ec = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  iVar2 = *(int *)(((_10EDialogWin_m_pXIcon->m_rtextureList).field0_0x0.m_l.m_pHead)->data + 0x14);
  pcVar15 = (char *)((this->m_pWin->m_rClipIn).bottom + 0.04);
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
  uVar1 = *(ushort *)(iVar2 + 0x12);
  iVar3 = _pGfx->m_yscreen;
                    /* end of inlined section */
  fVar17 = (float)(uint)*(ushort *)(iVar2 + 0x10) / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  aspect = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
  uVar14 = 0;
  fVar16 = fVar17 + 0.01;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar12 = (EStorable__vtable *)0x3ba3d70a;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fYesString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar13 = (EStorable__vtable *)((float)pcVar15 + ((float)(uint)uVar1 / (float)iVar3) * 0.25);
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_150,this_00,SUB41(psVar7,0),(EWindow *)&pGifTag1);
  pEVar10 = (EStorable__vtable *)local_150._0_4_;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fNoString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_150,this_00,SUB41(psVar7,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar11 = (EStorable__vtable *)local_150._0_4_;
  psVar7 = c_str__C8BString2(&this->m_pStrings->fCancelString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_150,this_00,SUB41(psVar7,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  fVar8 = (this->m_pWin->m_rClipIn).left - 0.05;
  local_150._0_4_ =
       (EFontSize *)
       (((fVar8 + (((this->m_pWin->m_rClipIn).right + 0.05) - fVar8) * 0.5) -
        ((float)pEVar10 + (float)pEVar11 + (float)local_150._0_4_ + fVar17 * 3.0 + 0.06) * 0.5) +
       0.01);
  Select__8ERShaderP3ERCi(_10EDialogWin_m_pXIcon,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos = (EVec2 *)(local_150 + 0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar9 = (EStorable__vtable *)((float)local_150._0_4_ + fVar16);
  local_150._4_4_ = (EStorable__vtable *)pcVar15;
  local_150._16_4_ = aspect;
  local_13c = aspect;
  local_130 = aspect;
  local_12c = aspect;
  local_128 = aspect;
  local_124 = aspect;
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar14,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_150,vPos,
             &local_130);
  SetSize__6ERFontffb(this_00,_15ObjMoverWrapper_m_fontSize,(float)aspect,true);
  Select__6ERFontP3ERC(this_00,prc);
  uVar6 = _BLACK.field0_0x0.d[3];
  uVar5 = _BLACK.field0_0x0.d[2];
  uVar4 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (this_00->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar5;
  (this_00->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fYesString);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_150._0_4_ = (EFontSize *)((float)pEVar9 + (float)pEVar12);
  local_150._4_4_ = (EStorable__vtable *)((float)pEVar13 + (float)pEVar12);
  local_150._16_4_ = pEVar9;
  local_13c = pEVar13;
  local_120 = pEVar12;
  local_11c = pEVar12;
  local_110 = (EStorable__vtable *)local_150._0_4_;
  local_10c = (char *)local_150._4_4_;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar7,true,(EVec2 *)&local_110,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  uVar6 = _WHITE.field0_0x0.d[3];
  uVar5 = _WHITE.field0_0x0.d[2];
  uVar4 = _WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar5;
  (this_00->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fYesString);
  local_150._0_4_ = (EFontSize *)pEVar9;
  local_150._4_4_ = pEVar13;
  local_150._16_4_ = pEVar9;
  local_13c = pEVar13;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar7,true,vPos,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  pEVar9 = (EStorable__vtable *)((float)pEVar9 + (float)pEVar10 + 0.01);
  Select__8ERShaderP3ERCi(_10EDialogWin_m_pCircIcon,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar10 = (EStorable__vtable *)((float)pEVar9 + fVar16);
  local_150._0_4_ = (EFontSize *)pEVar9;
  local_150._4_4_ = (EStorable__vtable *)pcVar15;
  local_150._16_4_ = aspect;
  local_13c = aspect;
  local_130 = aspect;
  local_12c = aspect;
  local_128 = aspect;
  local_124 = aspect;
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar14,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_150,vPos,
             &local_130);
  SetSize__6ERFontffb(this_00,_15ObjMoverWrapper_m_fontSize,(float)aspect,true);
  Select__6ERFontP3ERC(this_00,prc);
  uVar6 = _BLACK.field0_0x0.d[3];
  uVar5 = _BLACK.field0_0x0.d[2];
  uVar4 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (this_00->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar5;
  (this_00->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fNoString);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_150._0_4_ = (EFontSize *)((float)pEVar10 + (float)pEVar12);
  local_150._4_4_ = (EStorable__vtable *)((float)pEVar13 + (float)pEVar12);
  local_150._16_4_ = pEVar10;
  local_13c = pEVar13;
  local_130 = pEVar12;
  local_12c = pEVar12;
  local_100 = local_150._0_4_;
  local_fc = (char *)local_150._4_4_;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar7,true,(EVec2 *)&local_100,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  uVar6 = _WHITE.field0_0x0.d[3];
  uVar5 = _WHITE.field0_0x0.d[2];
  uVar4 = _WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar5;
  (this_00->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fNoString);
  local_150._0_4_ = (EFontSize *)pEVar10;
  local_150._4_4_ = pEVar13;
  local_150._16_4_ = pEVar10;
  local_13c = pEVar13;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar7,true,vPos,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  pEVar10 = (EStorable__vtable *)((float)pEVar10 + (float)pEVar11 + 0.01);
  Select__8ERShaderP3ERCi(_10EDialogWin_m_pTriIcon,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar11 = (EStorable__vtable *)((float)pEVar10 + fVar16);
  local_150._0_4_ = (EFontSize *)pEVar10;
  local_150._4_4_ = (EStorable__vtable *)pcVar15;
  local_150._16_4_ = aspect;
  local_13c = aspect;
  local_130 = aspect;
  local_12c = aspect;
  local_128 = aspect;
  local_124 = aspect;
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar14,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_150,vPos,
             &local_130);
  SetSize__6ERFontffb(this_00,_15ObjMoverWrapper_m_fontSize,(float)aspect,true);
  Select__6ERFontP3ERC(this_00,prc);
  uVar6 = _BLACK.field0_0x0.d[3];
  uVar5 = _BLACK.field0_0x0.d[2];
  uVar4 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (this_00->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar5;
  (this_00->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fCancelString);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_150._0_4_ = (EFontSize *)((float)pEVar11 + (float)pEVar12);
  local_150._4_4_ = (EStorable__vtable *)((float)pEVar13 + (float)pEVar12);
  local_150._16_4_ = pEVar11;
  local_13c = pEVar13;
  local_130 = pEVar12;
  local_12c = pEVar12;
  local_120 = (EStorable__vtable *)local_150._0_4_;
  local_11c = local_150._4_4_;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar7,true,(EVec2 *)&local_120,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  uVar6 = _WHITE.field0_0x0.d[3];
  uVar5 = _WHITE.field0_0x0.d[2];
  uVar4 = _WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar5;
  (this_00->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fCancelString);
  local_150._0_4_ = (EFontSize *)pEVar11;
  local_150._4_4_ = pEVar13;
  local_150._16_4_ = pEVar11;
  local_13c = pEVar13;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar7,true,vPos,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  return;
}

void EDialogWin::DrawNoYes(ERC *prc) {
	float ystart;
	ETexture *ptxt;
	float buttonW;
	float gap;
	float yesw;
	float nosw;
	float xpos;
	ETexture *this;
	EGraphics *this;
	ETexture *this;
	float x;
	float y;
	float x;
	ERC *prc;
	float x;
	ERC *prc;
	float x;
	float y;
	float x;
	ERC *prc;
	float x;
	ERC *prc;
	
  ushort uVar1;
  int iVar2;
  int iVar3;
  ERFont *this_00;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  EVec2 *vPos;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  EStorable__vtable *aspect;
  float fVar8;
  float fVar9;
  EStorable__vtable *pEVar10;
  EStorable__vtable *pEVar11;
  EStorable__vtable *pEVar12;
  float fVar13;
  float fVar14;
  char *pcVar15;
  undefined local_130 [20];
  EStorable__vtable *local_11c;
  EStorable__vtable *local_110;
  EStorable__vtable *local_10c;
  EStorable__vtable *local_108;
  EStorable__vtable *local_104;
  int local_100;
  int local_fc;
  EStorable__vtable *local_f0;
  char *local_ec;
  EFontSize *local_e0;
  char *local_dc;
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
  
  this_00 = _globals.m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
                    /* end of inlined section */
  local_60 = (undefined4)unaff_retaddr;
  uStack_5c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  iVar2 = *(int *)(((_10EDialogWin_m_pXIcon->m_rtextureList).field0_0x0.m_l.m_pHead)->data + 0x14);
  pcVar15 = (char *)((this->m_pWin->m_rClipIn).bottom + 0.04);
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
  uVar1 = *(ushort *)(iVar2 + 0x12);
  iVar3 = _pGfx->m_yscreen;
                    /* end of inlined section */
  fVar8 = (float)(uint)*(ushort *)(iVar2 + 0x10) / (float)_pGfx->m_xscreen;
  fVar13 = 0.01;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  aspect = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
  fVar14 = fVar8 + 0.01;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fYesString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar12 = (EStorable__vtable *)((float)pcVar15 + ((float)(uint)uVar1 / (float)iVar3) * 0.25);
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_130,this_00,SUB41(psVar7,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar11 = (EStorable__vtable *)local_130._0_4_;
  psVar7 = c_str__C8BString2(&this->m_pStrings->fNoString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_130,this_00,SUB41(psVar7,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  fVar9 = (this->m_pWin->m_rClipIn).left - 0.05;
  local_130._0_4_ =
       (EFontSize *)
       (((fVar9 + (((this->m_pWin->m_rClipIn).right + 0.05) - fVar9) * 0.5) -
        ((float)pEVar11 + (float)local_130._0_4_ + fVar8 + fVar8 + 0.04) * 0.5) + fVar13);
  Select__8ERShaderP3ERCi(_10EDialogWin_m_pXIcon,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos = (EVec2 *)(local_130 + 0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar10 = (EStorable__vtable *)((float)local_130._0_4_ + fVar14);
  local_130._4_4_ = (EStorable__vtable *)pcVar15;
  local_130._16_4_ = aspect;
  local_11c = aspect;
  local_110 = aspect;
  local_10c = aspect;
  local_108 = aspect;
  local_104 = aspect;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_130,vPos,
             &local_110);
  SetSize__6ERFontffb(this_00,_15ObjMoverWrapper_m_fontSize,(float)aspect,true);
  Select__6ERFontP3ERC(this_00,prc);
  uVar6 = _BLACK.field0_0x0.d[3];
  uVar5 = _BLACK.field0_0x0.d[2];
  uVar4 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (this_00->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar5;
  (this_00->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fYesString);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = 0x3ba3d70a;
  local_130._0_4_ = (EFontSize *)((float)pEVar10 + 0.005);
  local_100 = 0x3ba3d70a;
  local_130._4_4_ = (EStorable__vtable *)((float)pEVar12 + 0.005);
  local_130._16_4_ = pEVar10;
  local_11c = pEVar12;
  local_f0 = (EStorable__vtable *)local_130._0_4_;
  local_ec = (char *)local_130._4_4_;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar7,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  uVar6 = _WHITE.field0_0x0.d[3];
  uVar5 = _WHITE.field0_0x0.d[2];
  uVar4 = _WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar5;
  (this_00->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fYesString);
  local_130._0_4_ = (EFontSize *)pEVar10;
  local_130._4_4_ = pEVar12;
  local_130._16_4_ = pEVar10;
  local_11c = pEVar12;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar7,true,vPos,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  pEVar10 = (EStorable__vtable *)((float)pEVar10 + (float)pEVar11 + fVar13);
  Select__8ERShaderP3ERCi(_10EDialogWin_m_pTriIcon,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar11 = (EStorable__vtable *)((float)pEVar10 + fVar14);
  local_130._0_4_ = (EFontSize *)pEVar10;
  local_130._4_4_ = (EStorable__vtable *)pcVar15;
  local_130._16_4_ = aspect;
  local_11c = aspect;
  local_110 = aspect;
  local_10c = aspect;
  local_108 = aspect;
  local_104 = aspect;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_130,vPos,
             &local_110);
  SetSize__6ERFontffb(this_00,_15ObjMoverWrapper_m_fontSize,(float)aspect,true);
  Select__6ERFontP3ERC(this_00,prc);
  uVar6 = _BLACK.field0_0x0.d[3];
  uVar5 = _BLACK.field0_0x0.d[2];
  uVar4 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (this_00->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar5;
  (this_00->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fNoString);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_10c = (EStorable__vtable *)0x3ba3d70a;
  local_110 = (EStorable__vtable *)0x3ba3d70a;
  local_130._0_4_ = (EFontSize *)((float)pEVar11 + 0.005);
  local_130._4_4_ = (EStorable__vtable *)((float)pEVar12 + 0.005);
  local_130._16_4_ = pEVar11;
  local_11c = pEVar12;
  local_e0 = local_130._0_4_;
  local_dc = (char *)local_130._4_4_;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar7,true,(EVec2 *)&local_e0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  uVar6 = _WHITE.field0_0x0.d[3];
  uVar5 = _WHITE.field0_0x0.d[2];
  uVar4 = _WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar5;
  (this_00->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fNoString);
  local_130._0_4_ = (EFontSize *)pEVar11;
  local_130._4_4_ = pEVar12;
  local_130._16_4_ = pEVar11;
  local_11c = pEVar12;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar7,true,vPos,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  return;
}

void EDialogWin::DrawYes(ERC *prc) {
	float ystart;
	ETexture *ptxt;
	float buttonW;
	float gap;
	float yesw;
	float xpos;
	ETexture *this;
	EGraphics *this;
	ETexture *this;
	float x;
	float y;
	float x;
	ERC *prc;
	float x;
	ERC *prc;
	
  ushort uVar1;
  int iVar2;
  int iVar3;
  ERFont *this_00;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  EStorable__vtable *aspect;
  float fVar8;
  EStorable__vtable *pEVar9;
  float fVar10;
  EStorable__vtable *pEVar11;
  float fVar12;
  undefined local_d0 [20];
  EStorable__vtable *local_bc;
  EStorable__vtable *local_b0;
  EStorable__vtable *local_ac;
  EStorable__vtable *local_a8;
  EStorable__vtable *local_a4;
  int local_a0;
  int local_9c;
  EStorable__vtable *local_90;
  char *local_8c;
  EFontSize *local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  this_00 = _globals.m_pFont;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (EFontSize *)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  iVar2 = *(int *)(((_10EDialogWin_m_pXIcon->m_rtextureList).field0_0x0.m_l.m_pHead)->data + 0x14);
  local_d0._4_4_ = (EStorable__vtable *)((this->m_pWin->m_rClipIn).bottom + 0.04);
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
  uVar1 = *(ushort *)(iVar2 + 0x12);
  iVar3 = _pGfx->m_yscreen;
                    /* end of inlined section */
  fVar12 = (float)(uint)*(ushort *)(iVar2 + 0x10) / (float)_pGfx->m_xscreen;
  fVar10 = 0.01;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  aspect = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fYesString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar11 = (EStorable__vtable *)
            ((float)local_d0._4_4_ + ((float)(uint)uVar1 / (float)iVar3) * 0.25);
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_d0,this_00,SUB41(psVar7,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  fVar8 = (this->m_pWin->m_rClipIn).left - 0.05;
  pEVar9 = (EStorable__vtable *)
           (((fVar8 + (((this->m_pWin->m_rClipIn).right + 0.05) - fVar8) * 0.5) -
            ((float)local_d0._0_4_ + fVar12 + 0.02) * 0.5) + fVar10);
  Select__8ERShaderP3ERCi(_10EDialogWin_m_pXIcon,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_d0._0_4_ = pEVar9;
  local_d0._16_4_ = aspect;
  local_bc = aspect;
  local_b0 = aspect;
  local_ac = aspect;
  local_a8 = aspect;
  local_a4 = aspect;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_d0,
             (EVec2 *)(local_d0 + 0x10),&local_b0);
  pEVar9 = (EStorable__vtable *)((float)pEVar9 + fVar12 + fVar10);
  SetSize__6ERFontffb(this_00,_15ObjMoverWrapper_m_fontSize,(float)aspect,true);
  Select__6ERFontP3ERC(this_00,prc);
  uVar6 = _BLACK.field0_0x0.d[3];
  uVar5 = _BLACK.field0_0x0.d[2];
  uVar4 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (this_00->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar5;
  (this_00->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fYesString);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_9c = 0x3ba3d70a;
  local_d0._0_4_ = (EStorable__vtable *)((float)pEVar9 + 0.005);
  local_d0._4_4_ = (EStorable__vtable *)((float)pEVar11 + 0.005);
  local_a0 = 0x3ba3d70a;
  local_d0._16_4_ = pEVar9;
  local_bc = pEVar11;
  local_90 = local_d0._0_4_;
  local_8c = (char *)local_d0._4_4_;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar7,true,(EVec2 *)&local_90,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  uVar6 = _WHITE.field0_0x0.d[3];
  uVar5 = _WHITE.field0_0x0.d[2];
  uVar4 = _WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (this_00->m_vColor).field0_0x0.d[2] = uVar5;
  (this_00->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
  psVar7 = c_str__C8BString2(&this->m_pStrings->fYesString);
  local_d0._0_4_ = pEVar9;
  local_d0._4_4_ = pEVar11;
  local_d0._16_4_ = pEVar9;
  local_bc = pEVar11;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar7,true,(EVec2 *)(local_d0 + 0x10),E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  return;
}

void EDialogWin::GetEnteredText(BString2 &szOut) {
  _edialogwinTextEntryBuffer[0] = 0;
  GetBuffer__16ETextEntryDialogPUs(this->m_keyboard,_edialogwinTextEntryBuffer);
  erase__8BString2UiUi(szOut,0,0xffffffff);
  assign__8BString2PCUs(szOut,_edialogwinTextEntryBuffer);
  return;
}

void EDialogWin::SetObject(cXObject *pObj) {
  ObjSelector *pOVar1;
  
  this->fObject = (cXObject__179_1116 *)pObj;
  if (pObj == (cXObject__21_1030 *)0x0) {
    this->fSel = (ObjSelector *)0x0;
  }
  else {
    pOVar1 = (ObjSelector *)
             (*(code *)pObj->__vtable[1].SetLevel)
                       ((int)&pObj->_vb899 + (int)*(short *)&pObj->__vtable[1].GetTreeID);
    this->fSel = pOVar1;
  }
  return;
}

void EDialogWin::SetObject(ObjSelector *sel) {
  this->fSel = sel;
  this->fObject = (cXObject__179_1116 *)0x0;
  return;
}

TreeReturnCode EDialogWin::ProcUserInput() {
	TreeReturnCode retcode;
	EDialogWin *this;
	EDialogWin *this;
	int destTemp;
	EDialogWin *this;
	cXObject *this;
	EDialogWin *this;
	int destTemp;
	EDialogWin *this;
	cXObject *this;
	
  cXObject__179_1116 *pcVar1;
  uint uVar2;
  int iVar3;
  
  switch(this->fStatus) {
  case kNotShownYet:
  case kWaitingForUser:
    break;
  case kUserClickedYes:
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
                    /* end of inlined section */
    if (this->fType != 3) {
      return kTrueComplete;
    }
    (*(code *)this->__vtable[1].EDialogWin)
              ((int)&this->m_mover + (int)*(short *)(this->__vtable + 1),0x3d0298);
    return kTrueComplete;
  case kUserClickedNo:
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
                    /* end of inlined section */
    if (this->fType != 2) {
      return kFalseComplete;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
    pcVar1 = this->fObject;
    uVar2 = this->fTemp;
    if (pcVar1 == (cXObject__179_1116 *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(code *)pcVar1->__vtable[1].GetObjectImplementation)
                        ((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar1->__vtable[1].AdvanceGraphic)
      ;
    }
                    /* end of inlined section */
    *(undefined2 *)(iVar3 + uVar2 * 2 + 0x16) = 0;
    break;
  case kUserClickedCancel:
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
                    /* end of inlined section */
    if (this->fType != 2) {
      return kFalseComplete;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
    pcVar1 = this->fObject;
    uVar2 = this->fTemp;
    if (pcVar1 == (cXObject__179_1116 *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(code *)pcVar1->__vtable[1].GetObjectImplementation)
                        ((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar1->__vtable[1].AdvanceGraphic)
      ;
    }
                    /* end of inlined section */
    *(undefined2 *)(iVar3 + uVar2 * 2 + 0x16) = 1;
    break;
  default:
    return kTrueComplete;
  }
  return kFalseComplete;
}

void EDialogWin::SetParams(StackElem *elem, DialogParam *param) {
	BString2 name;
	AUTOPTR<StringSet> dialogStrings;
	iResFile *file;
	BString2 messageStr;
	DialogParam *this;
	ObjSelector *this;
	ObjSelector *this;
	EDialogWin *this;
	EDialogWin *this;
	ObjSelector *textSel;
	EDialogWin *this;
	
  undefined *puVar1;
  cXObject__179_1116__vtable *pcVar2;
  ulong *puVar3;
  ERFont *pEVar4;
  bool bVar5;
  BString2 *pBVar6;
  ELocString EVar7;
  StringSet *strings;
  iResFile__6_5027 *piVar8;
  short *psVar9;
  short **ppsVar10;
  uint uVar11;
  ETextEntryDialog *pEVar12;
  byte bVar13;
  DialogStrContainer *pDVar14;
  cXObject__179_1116 *pcVar15;
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
  BString2 name;
  AUTOPTR_StringSet_ dialogStrings;
  BString2 messageStr;
  undefined auStack_c0 [16];
  ObjSelector *textSel;
  int local_a0;
  int iStack_9c;
  int local_90;
  int iStack_8c;
  EHashTableNode **local_80;
  uint uStack_7c;
  EFontSize *local_70;
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
  
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (EFontSize *)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (EHashTableNode **)unaff_s2;
  uStack_7c = (uint)((ulong)unaff_s2 >> 0x20);
  local_90 = (int)unaff_s1;
  iStack_8c = (int)((ulong)unaff_s1 >> 0x20);
  local_a0 = (int)unaff_s0;
  iStack_9c = (int)((ulong)unaff_s0 >> 0x20);
  bVar13 = param->playerIDType & 0xf0;
  if (bVar13 == 0x10) {
    this->m_curPlayerId = 0;
  }
  else {
    uVar11 = 2;
    if (bVar13 == 0x20) {
      uVar11 = 1;
    }
    this->m_curPlayerId = uVar11;
  }
  bVar5 = GetIsPerson__11ObjSelector(this->fSel);
  if (bVar5) {
    pBVar6 = GetUserName__11ObjSelector(this->fSel);
    __8BString2RC8BString2UiUi(&name,pBVar6,0,0xffffffff);
    pDVar14 = this->m_pStrings;
  }
  else {
    EVar7 = GetCatalogName__11ObjSelector(this->fSel);
    __8BString2PCUs(&name,*EVar7.ptr);
    pDVar14 = this->m_pStrings;
  }
  __as__8BString2RC8BString2(&pDVar14->fTitleString,&name);
  this->fType = param->playerIDType & 0xf;
                    /* inlined from ../MSrc/xprimitives.h */
                    /* end of inlined section */
  this->fTemp = (param->flags & 0x70) >> 4;
  if (elem == (StackElem *)0x0) {
    this->fStackObjectID = 0;
  }
  else {
    this->fStackObjectID = elem->fObjectID;
  }
                    /* inlined from ../MSrc/tautoptr.h */
  DestroyInstance__9StringSetP9StringSet((StringSet *)0x0);
  strings = CreateInstance__9StringSet();
                    /* end of inlined section */
  if (elem == (StackElem *)0x0) {
    this->fStackObjectID = 0;
                    /* inlined from ../MSrc/objselector.h */
    piVar8 = (this->fSel->field0_0x0).fFile;
    if (piVar8 == (iResFile__6_5027 *)0x0) {
      piVar8 = loadFile__11ObjSelector(this->fSel);
    }
  }
  else {
    this->fStackObjectID = elem->fObjectID;
    piVar8 = GetPrivFile__8Behavior(elem->fBehavior);
  }
                    /* end of inlined section */
  (*(code *)strings->__vtable[1].GetDescription)
            ((int)&strings->__vtable + (int)*(short *)&strings->__vtable[1].RemoveString,piVar8,
             0x12d,0);
  __8BString2(&messageStr);
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
                    /* end of inlined section */
  if (this->fType == 3) {
                    /* end of inlined section */
                    /* end of inlined section */
    pBVar6 = &this->m_pStrings->fTitleString;
    bVar13 = param->messageStr;
    psVar9 = c_str__C8BString2(pBVar6);
    AssignString__10EDialogWinP9StringSetR8BString2iPCUsb(strings,pBVar6,(uint)bVar13,psVar9,true);
  }
  else {
                    /* end of inlined section */
                    /* end of inlined section */
    pBVar6 = &this->m_pStrings->fTitleString;
    bVar13 = param->titleStr;
    psVar9 = c_str__C8BString2(pBVar6);
    AssignString__10EDialogWinP9StringSetR8BString2iPCUsb(strings,pBVar6,(uint)bVar13,psVar9,true);
  }
  SetSize__6ERFontffb(_globals.m_pFont,_15ObjMoverWrapper_m_fontSize,1.0,true);
  pEVar4 = _globals.m_pFont;
  pDVar14 = this->m_pStrings;
  psVar9 = c_str__C8BString2(&pDVar14->fTitleString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)auStack_c0,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
  puVar1 = (undefined *)((int)&(pDVar14->vTitleWH).field0_0x0 + 7);
                    /* end of inlined section */
  uVar11 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar11);
  *puVar3 = *puVar3 & -1L << (uVar11 + 1) * 8 | auStack_c0._0_8_ >> (7 - uVar11) * 8;
  uVar11 = (uint)&pDVar14->vTitleWH & 7;
  puVar3 = (ulong *)((int)&pDVar14->vTitleWH - uVar11);
  *puVar3 = auStack_c0._0_8_ << uVar11 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
                    /* end of inlined section */
  if (this->fType != 3) {
                    /* end of inlined section */
    AssignString__10EDialogWinP9StringSetR8BString2iPCUsb
              (strings,&messageStr,(uint)param->messageStr,(short *)0x0,true);
                    /* inlined from ../MSrc/tautoptr.h */
                    /* end of inlined section */
    ppsVar10 = (short **)
               (*(code *)strings->__vtable->SetDescription)
                         ((int)&strings->__vtable +
                          (int)*(short *)&strings->__vtable->GetDescription,param->messageStr);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    this->m_pStrings->m_pfMessageStr = *ppsVar10;
  }
  switch(this->fType) {
  case 0:
  case 3:
  case 4:
                    /* end of inlined section */
    pDVar14 = this->m_pStrings;
                    /* inlined from ../MSrc/tautoptr.h */
                    /* end of inlined section */
    bVar13 = param->yesStr;
    psVar9 = GetUiString__7EGlobalPCc(&_globals,"ok");
    AssignString__10EDialogWinP9StringSetR8BString2iPCUsb
              (strings,&pDVar14->fYesString,(uint)bVar13,psVar9,true);
    pEVar4 = _globals.m_pFont;
    pDVar14 = this->m_pStrings;
    psVar9 = c_str__C8BString2(&pDVar14->fYesString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)auStack_c0,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
    puVar1 = (undefined *)((int)&(pDVar14->vYesWH).field0_0x0 + 7);
                    /* end of inlined section */
    uVar11 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar11);
    *puVar3 = *puVar3 & -1L << (uVar11 + 1) * 8 | auStack_c0._0_8_ >> (7 - uVar11) * 8;
    uVar11 = (uint)&pDVar14->vYesWH & 7;
    puVar3 = (ulong *)((int)&pDVar14->vYesWH - uVar11);
    *puVar3 = auStack_c0._0_8_ << uVar11 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    erase__8BString2UiUi(&this->m_pStrings->fNoString,0,0xffffffff);
    erase__8BString2UiUi(&this->m_pStrings->fCancelString,0,0xffffffff);
  default:
    pcVar15 = this->fObject;
    break;
  case 1:
                    /* end of inlined section */
    pDVar14 = this->m_pStrings;
                    /* inlined from ../MSrc/tautoptr.h */
                    /* end of inlined section */
    bVar13 = param->noStr;
    psVar9 = GetUiString__7EGlobalPCc(&_globals,"no");
    AssignString__10EDialogWinP9StringSetR8BString2iPCUsb
              (strings,&pDVar14->fNoString,(uint)bVar13,psVar9,true);
    pEVar4 = _globals.m_pFont;
    pDVar14 = this->m_pStrings;
    psVar9 = c_str__C8BString2(&pDVar14->fNoString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)auStack_c0,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
    puVar1 = (undefined *)((int)&(pDVar14->vNoWH).field0_0x0 + 7);
                    /* end of inlined section */
    uVar11 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar11);
    *puVar3 = *puVar3 & -1L << (uVar11 + 1) * 8 | auStack_c0._0_8_ >> (7 - uVar11) * 8;
    uVar11 = (uint)&pDVar14->vNoWH & 7;
    puVar3 = (ulong *)((int)&pDVar14->vNoWH - uVar11);
    *puVar3 = auStack_c0._0_8_ << uVar11 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    pDVar14 = this->m_pStrings;
                    /* inlined from ../MSrc/tautoptr.h */
                    /* end of inlined section */
    bVar13 = param->yesStr;
    psVar9 = GetUiString__7EGlobalPCc(&_globals,"yes");
    AssignString__10EDialogWinP9StringSetR8BString2iPCUsb
              (strings,&pDVar14->fYesString,(uint)bVar13,psVar9,true);
    pEVar4 = _globals.m_pFont;
    pDVar14 = this->m_pStrings;
    psVar9 = c_str__C8BString2(&pDVar14->fYesString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)auStack_c0,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
    puVar1 = (undefined *)((int)&(pDVar14->vYesWH).field0_0x0 + 7);
                    /* end of inlined section */
    uVar11 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar11);
    *puVar3 = *puVar3 & -1L << (uVar11 + 1) * 8 | auStack_c0._0_8_ >> (7 - uVar11) * 8;
    uVar11 = (uint)&pDVar14->vYesWH & 7;
    puVar3 = (ulong *)((int)&pDVar14->vYesWH - uVar11);
    *puVar3 = auStack_c0._0_8_ << uVar11 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    erase__8BString2UiUi(&this->m_pStrings->fCancelString,0,0xffffffff);
    pcVar15 = this->fObject;
    break;
  case 2:
                    /* end of inlined section */
    pDVar14 = this->m_pStrings;
                    /* inlined from ../MSrc/tautoptr.h */
                    /* end of inlined section */
    bVar13 = param->cancelStr;
    psVar9 = GetUiString__7EGlobalPCc(&_globals,"cancel");
    AssignString__10EDialogWinP9StringSetR8BString2iPCUsb
              (strings,&pDVar14->fCancelString,(uint)bVar13,psVar9,true);
    pEVar4 = _globals.m_pFont;
    pDVar14 = this->m_pStrings;
    psVar9 = c_str__C8BString2(&pDVar14->fCancelString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)auStack_c0,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
    puVar1 = (undefined *)((int)&(pDVar14->vCancleWH).field0_0x0 + 7);
                    /* end of inlined section */
    uVar11 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar11);
    *puVar3 = *puVar3 & -1L << (uVar11 + 1) * 8 | auStack_c0._0_8_ >> (7 - uVar11) * 8;
    uVar11 = (uint)&pDVar14->vCancleWH & 7;
    puVar3 = (ulong *)((int)&pDVar14->vCancleWH - uVar11);
    *puVar3 = auStack_c0._0_8_ << uVar11 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    pDVar14 = this->m_pStrings;
                    /* inlined from ../MSrc/tautoptr.h */
                    /* end of inlined section */
    bVar13 = param->noStr;
    psVar9 = GetUiString__7EGlobalPCc(&_globals,"no");
    AssignString__10EDialogWinP9StringSetR8BString2iPCUsb
              (strings,&pDVar14->fNoString,(uint)bVar13,psVar9,true);
    pEVar4 = _globals.m_pFont;
    pDVar14 = this->m_pStrings;
    psVar9 = c_str__C8BString2(&pDVar14->fNoString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)auStack_c0,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
    puVar1 = (undefined *)((int)&(pDVar14->vNoWH).field0_0x0 + 7);
                    /* end of inlined section */
    uVar11 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar11);
    *puVar3 = *puVar3 & -1L << (uVar11 + 1) * 8 | auStack_c0._0_8_ >> (7 - uVar11) * 8;
    uVar11 = (uint)&pDVar14->vNoWH & 7;
    puVar3 = (ulong *)((int)&pDVar14->vNoWH - uVar11);
    *puVar3 = auStack_c0._0_8_ << uVar11 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    pDVar14 = this->m_pStrings;
                    /* inlined from ../MSrc/tautoptr.h */
                    /* end of inlined section */
    bVar13 = param->yesStr;
    psVar9 = GetUiString__7EGlobalPCc(&_globals,"yes");
    AssignString__10EDialogWinP9StringSetR8BString2iPCUsb
              (strings,&pDVar14->fYesString,(uint)bVar13,psVar9,true);
    pEVar4 = _globals.m_pFont;
    pDVar14 = this->m_pStrings;
    psVar9 = c_str__C8BString2(&pDVar14->fYesString);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)auStack_c0,pEVar4,SUB41(psVar9,0),(EWindow *)&pGifTag1);
    puVar1 = (undefined *)((int)&(pDVar14->vYesWH).field0_0x0 + 7);
                    /* end of inlined section */
    uVar11 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar11);
    *puVar3 = *puVar3 & -1L << (uVar11 + 1) * 8 | auStack_c0._0_8_ >> (7 - uVar11) * 8;
    uVar11 = (uint)&pDVar14->vYesWH & 7;
    puVar3 = (ulong *)((int)&pDVar14->vYesWH - uVar11);
    *puVar3 = auStack_c0._0_8_ << uVar11 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    pcVar15 = this->fObject;
  }
  if (pcVar15 != (cXObject__179_1116 *)0x0) {
    textSel = (ObjSelector *)0x0;
    (*(code *)pcVar15->__vtable->GetFolder)
              ((int)&pcVar15->_vb1050 + (int)*(short *)&pcVar15->__vtable->GetFrontFaceDirection,
               &this->m_pStrings->fYesString,elem,0,&textSel);
    pcVar2 = this->fObject->__vtable;
    (*(code *)pcVar2->GetFolder)
              ((int)&this->fObject->_vb1050 + (int)*(short *)&pcVar2->GetFrontFaceDirection,
               &this->m_pStrings->fTitleString,elem,0,&textSel);
    pcVar2 = this->fObject->__vtable;
    (*(code *)pcVar2->GetFolder)
              ((int)&this->fObject->_vb1050 + (int)*(short *)&pcVar2->GetFrontFaceDirection,
               &messageStr,elem,0,&textSel);
    psVar9 = c_str__C8BString2(&messageStr);
    ReplaceButtonPrompts__FPCUsR8BString2(psVar9,&messageStr);
                    /* inlined from ../MSrc/bstring2.h */
    uVar11 = length__C8BString2(&this->m_pStrings->fNoString);
                    /* end of inlined section */
    if (uVar11 != 0) {
      pcVar2 = this->fObject->__vtable;
      (*(code *)pcVar2->GetFolder)
                ((int)&this->fObject->_vb1050 + (int)*(short *)&pcVar2->GetFrontFaceDirection,
                 &this->m_pStrings->fNoString,elem,0,&textSel);
    }
                    /* inlined from ../MSrc/bstring2.h */
    uVar11 = length__C8BString2(&this->m_pStrings->fNoString);
                    /* end of inlined section */
    if (uVar11 != 0) {
      pcVar2 = this->fObject->__vtable;
      (*(code *)pcVar2->GetFolder)
                ((int)&this->fObject->_vb1050 + (int)*(short *)&pcVar2->GetFrontFaceDirection,
                 &this->m_pStrings->fCancelString,elem,0,&textSel);
    }
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
                    /* end of inlined section */
  if (this->fType == 3) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
    pEVar12 = (ETextEntryDialog *)_memmanAlloc__FUiUi(0x1c0,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
                    /* end of inlined section */
    psVar9 = c_str__C8BString2(&this->m_pStrings->fTitleString);
    pEVar12 = __16ETextEntryDialogPCUsUifib(pEVar12,psVar9,0xe,0.15,0,true);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    this->fStatus = kWaitingForUser;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    this->m_keyboard = pEVar12;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    _13EUIObjectNode_m_uiSfxBack = PlayGoBack__8EUiAudio;
    _13EUIObjectNode_m_uiSfxSelect = PlaySelect__8EUiAudio;
    _13EUIObjectNode_m_uiSfxNext = PlayMove__8EUiAudio;
                    /* end of inlined section */
  }
  else {
    AssignMessageStrings__10EDialogWinRC8BString2b(this,&messageStr,false);
  }
  ___8BString2(&messageStr,2);
                    /* inlined from ../MSrc/tautoptr.h */
  DestroyInstance__9StringSetP9StringSet(strings);
                    /* end of inlined section */
  ___8BString2(&name,2);
  return;
}

void EDialogWin::AssignString(StringSet *strings, BString2 &str, int index, u16 *defaultStr, bool localized) {
	ELocString s;
	
  short **ppsVar1;
  int iVar2;
  
  ppsVar1 = (short **)
            (*(code *)strings->__vtable->SetDescription)
                      ((int)&strings->__vtable + (int)*(short *)&strings->__vtable->GetDescription,
                       index);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* end of inlined section */
  if ((*ppsVar1 == (short *)0x0) || (iVar2 = StrLenU16__8EString2PCUs(*ppsVar1), iVar2 == 0)) {
    if (defaultStr != (short *)0x0) {
      assign__8BString2PCUs(str,defaultStr);
    }
  }
  else {
                    /* end of inlined section */
    assign__8BString2PCUs(str,*ppsVar1);
  }
  return;
}

bool Isspace(c16 wc) {
  if (((int)wc & 0xffffU) != 0x20) {
    return ((int)wc & 0xffffU) - 9 < 5;
  }
  return true;
}

void EDialogWin::AssignMessageStrings(BString2 &str, bool b2player) {
	EVec2 vtl;
	EVec2 vbr;
	float fClipW;
	c16 *pPos;
	bool gotline;
	EVec2 vStrH;
	float oneLine;
	float gapH;
	float textH;
	float modelessBoxH;
	float Bottom;
	DialogStrContainer *this;
	TNodeList<BString2 *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	int i;
	c16 *pBuffPos;
	int cPos0;
	int nCharsInWord;
	BString2 sztemp;
	DialogStrContainer *this;
	TNodeList<BString2 *> *this;
	TRect<float> *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  EWindow *pEVar2;
  bool bVar3;
  EGraphics *pEVar4;
  undefined4 uVar5;
  short sVar6;
  bool bVar7;
  ENodeListNode *pEVar8;
  short *psVar9;
  short *psVar10;
  BString2 *pBVar11;
  int iVar12;
  int iVar13;
  DialogStrContainer *pDVar14;
  int iVar15;
  short *psVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  EVec2 vtl;
  EVec2 vbr;
  EVec2 vStrH;
  
  *(undefined4 *)&this->m_bAllstringsVis = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  if (b2player) {
    if (this->m_curPlayerId == 0) {
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
      vStrH.field0_0x0.d[0] = 0.28;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
      vStrH.field0_0x0.d[1] = _13EUIObjectNode_SAFE_TOP;
                    /* end of inlined section */
      SetClip__7EWindowRCt5TRect1Zf(this->m_pWin,(TRect_float_ *)&vStrH);
      pDVar14 = this->m_pStrings;
    }
    else if (this->m_curPlayerId == 1) {
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
      vStrH.field0_0x0.d[0] = _13EUIObjectNode_SAFE_LEFT + 0.05;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
      vStrH.field0_0x0.d[1] = 0.77;
                    /* end of inlined section */
      SetClip__7EWindowRCt5TRect1Zf(this->m_pWin,(TRect_float_ *)&vStrH);
      pDVar14 = this->m_pStrings;
    }
    else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
      vStrH.field0_0x0.d[0] = _15ObjMoverWrapper_vTopLeftMessage.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
      vStrH.field0_0x0.d[1] = _15ObjMoverWrapper_vTopLeftMessage.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
      SetClip__7EWindowRCt5TRect1Zf(this->m_pWin,(TRect_float_ *)&vStrH);
      pDVar14 = this->m_pStrings;
    }
  }
  else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
    vStrH.field0_0x0.d[0] = _15ObjMoverWrapper_vTopLeftMessage.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
    vStrH.field0_0x0.d[1] = _15ObjMoverWrapper_vTopLeftMessage.field0_0x0.d[1];
                    /* end of inlined section */
                    /* end of inlined section */
    SetClip__7EWindowRCt5TRect1Zf(this->m_pWin,(TRect_float_ *)&vStrH);
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialogdata.h */
    pDVar14 = this->m_pStrings;
  }
  pEVar4 = _pGfx;
  pDVar14->nStrings = 0;
  pEVar1 = (pEVar4->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(pEVar4->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  pEVar8 = (pDVar14->m_strings).field0_0x0.m_l.m_pHead;
  if (pEVar8 != (ENodeListNode *)0x0) {
    pBVar11 = (BString2 *)pEVar8->data;
    while( true ) {
      pEVar8 = pEVar8->pNext;
      if (pBVar11 != (BString2 *)0x0) {
        ___8BString2(pBVar11,3);
      }
      if (pEVar8 == (ENodeListNode *)0x0) break;
      pBVar11 = (BString2 *)pEVar8->data;
    }
  }
  RemoveAll__9ENodeList((ENodeList *)pDVar14);
  fVar19 = _15ObjMoverWrapper_m_fontSize;
                    /* end of inlined section */
  this->m_pStrings->nStrings = 0;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
  fVar17 = (this->m_pWin->m_rClipIn).left;
  fVar18 = (this->m_pWin->m_rClipIn).right;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  SetSize__6ERFontffb(_globals.m_pFont,fVar19,1.0,true);
  psVar9 = c_str__C8BString2(str);
  if (*psVar9 != 0) {
    do {
      iVar13 = 0;
      memset(__MessageBuff,0,0x100);
      bVar3 = false;
      iVar15 = 0;
      psVar16 = __MessageBuff;
      sVar6 = *psVar9;
      if (*psVar9 != 0) {
        while( true ) {
          __MessageBuff[0] = sVar6;
          if (*psVar9 == 10) {
            bVar3 = true;
          }
          else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
            bVar7 = Isspace__FUs(*psVar9);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
            if (bVar7) {
              iVar15 = iVar13;
            }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            DoGetStringSize__6ERFontPvbP7EWindow
                      ((ERFont *)&vStrH,_globals.m_pFont,true,(EWindow *)&pGifTag1);
                    /* end of inlined section */
            iVar12 = iVar13 - iVar15;
            if ((fVar18 - fVar17) - 0.1 < vStrH.field0_0x0.d[0]) {
              bVar3 = true;
              if (iVar12 != 0) {
                if (iVar13 == iVar12) {
                  iVar12 = 0;
                  psVar9 = psVar9 + -1;
                }
                else {
                  iVar13 = iVar13 - iVar12;
                }
                psVar9 = psVar9 + -iVar12;
              }
              psVar10 = __MessageBuff + iVar13;
              iVar13 = iVar13 + -1;
              *psVar10 = 0;
            }
            psVar16 = psVar16 + 1;
            iVar13 = iVar13 + 1;
          }
          psVar9 = psVar9 + 1;
          if ((*psVar9 == 0) || (bVar3)) break;
          *psVar16 = *psVar9;
          sVar6 = __MessageBuff[0];
        }
      }
      if ((bVar3) || (__MessageBuff[0] != 0)) {
        __MessageBuff[iVar13] = 0;
        __8BString2PCUs((BString2 *)&vStrH,__MessageBuff);
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialogdata.h */
        pDVar14 = this->m_pStrings;
        pBVar11 = (BString2 *)__builtin_new(4);
        pBVar11 = __8BString2RC8BString2UiUi(pBVar11,(BString2 *)&vStrH,0,0xffffffff);
        AddTail__9ENodeListUi((ENodeList *)pDVar14,(uint)pBVar11);
                    /* end of inlined section */
        this->m_pStrings->nStrings = this->m_pStrings->nStrings + 1;
        ___8BString2((BString2 *)&vStrH,2);
      }
    } while (*psVar9 != 0);
  }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&vStrH,_globals.m_pFont,true,(EWindow *)0x0);
  uVar5 = vStrH.field0_0x0.d[1];
                    /* end of inlined section */
  fVar19 = GetLineSpacing__6ERFontP7EWindow(_globals.m_pFont,(EWindow *)0x0);
  this->m_pStrings->m_yinc = _scrollinc * fVar19;
                    /* inlined from /eor/src2/common/math/e_rect.h */
  pEVar2 = this->m_pWin;
                    /* end of inlined section */
  iVar15 = this->m_pStrings->nStrings;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  fVar19 = uVar5 * (float)iVar15 + this->m_pStrings->m_yinc * (float)(iVar15 + -1);
  if (fVar19 < (pEVar2->m_rClipIn).bottom - (pEVar2->m_rClipIn).top) {
    (pEVar2->m_rClipIn).bottom = (pEVar2->m_rClipIn).top + fVar19 + 0.005;
    *(undefined4 *)&this->m_bAllstringsVis = 1;
  }
  SetupDialog__10EDialogWinb(this,b2player);
  return;
}

void EDialogWin::SetupDialog(bool b2player) {
	ETexture *ptxt;
	float textureH;
	EVec2 vStrH;
	float top;
	float boxH;
	EVec4 *this;
	ETexture *this;
	EGraphics *this;
	TRect<float> *this;
	float y;
	TRect<float> *this;
	float y;
	EUIObjectMover *this;
	float stopt;
	
  ushort uVar1;
  int iVar2;
  EWindow *pEVar3;
  undefined8 uVar4;
  ERShader *pEVar5;
  EGraphics *pEVar6;
  ObjMoverWrapper *pOVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  EVec2 vStrH;
  float local_60;
  EStorable__vtable *local_5c;
  ENodeListNode *local_58;
  
  pEVar5 = _10EDialogWin_m_pXIcon;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  this->m_pStrings->m_textyPos = (this->m_pWin->m_rClipIn).top;
  this->fStatus = kNotShownYet;
  pEVar6 = _pGfx;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  this->m_mover->m_timeout = 20.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  pOVar7 = this->m_mover;
  (pOVar7->vStartPos).field0_0x0.d[3] = 0.5;
  (pOVar7->vStartPos).field0_0x0.d[0] = 0.5;
  (pOVar7->vStartPos).field0_0x0.d[1] = 0.5;
  (pOVar7->vStartPos).field0_0x0.d[2] = 0.5;
  uVar4 = *(undefined8 *)&(pOVar7->vStartPos).field0_0x0;
                    /* end of inlined section */
  fVar8 = (pOVar7->vStartPos).field0_0x0.d[2];
  fVar9 = (pOVar7->vStartPos).field0_0x0.d[3];
  pOVar7 = this->m_mover;
  (pOVar7->vCurPos).field0_0x0.d[0] = (float)uVar4;
  (pOVar7->vCurPos).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
  (pOVar7->vCurPos).field0_0x0.d[2] = fVar8;
  (pOVar7->vCurPos).field0_0x0.d[3] = fVar9;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
  uVar1 = *(ushort *)
           (*(int *)(((pEVar5->m_rtextureList).field0_0x0.m_l.m_pHead)->data + 0x14) + 0x12);
                    /* end of inlined section */
  iVar2 = pEVar6->m_yscreen;
  SetSize__6ERFontffb(_globals.m_pFont,_15ObjMoverWrapper_m_fontSize,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&vStrH,_globals.m_pFont,true,(EWindow *)0x0);
                    /* end of inlined section */
  if (b2player) {
    pEVar3 = this->m_pWin;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    local_5c = (EStorable__vtable *)((pEVar3->m_rClipIn).top - 0.01);
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_58 = (ENodeListNode *)((pEVar3->m_rClipIn).right + 0.025);
    pOVar7 = this->m_mover;
    local_60 = (pEVar3->m_rClipIn).left - 0.025;
    fVar8 = (float)local_5c + ((pEVar3->m_rClipIn).bottom - (pEVar3->m_rClipIn).top) + 0.01;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  }
  else {
                    /* end of inlined section */
    pEVar3 = this->m_pWin;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    pOVar7 = this->m_mover;
    local_5c = (EStorable__vtable *)(((pEVar3->m_rClipIn).top - 0.08) - vStrH.field0_0x0.d[1]);
    local_58 = (ENodeListNode *)((pEVar3->m_rClipIn).right + 0.05);
    local_60 = (pEVar3->m_rClipIn).left - 0.05;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* end of inlined section */
    fVar8 = (float)local_5c +
            ((pEVar3->m_rClipIn).bottom - (pEVar3->m_rClipIn).top) + 0.01 + vStrH.field0_0x0.d[1] +
            0.08 + 0.08 + (float)(uint)uVar1 / (float)iVar2;
  }
                    /* end of inlined section */
  (pOVar7->vStopPos).field0_0x0.d[0] = local_60;
  (pOVar7->vStopPos).field0_0x0.d[1] = (float)local_5c;
  (pOVar7->vStopPos).field0_0x0.d[2] = (float)local_58;
  (pOVar7->vStopPos).field0_0x0.d[3] = fVar8;
  fVar8 = _15ObjMoverWrapper_m_popupTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  pOVar7 = this->m_mover;
  (pOVar7->mover).m_curtime = 0.0;
  (pOVar7->mover).m_startt = 0.0;
  (pOVar7->mover).m_stopt = fVar8;
  fVar9 = (pOVar7->mover).m_curtime;
  fVar10 = (pOVar7->mover).m_startt;
  if (fVar10 <= fVar9) {
    fVar10 = (float)((int)fVar9 * (uint)(fVar9 < fVar8) | (int)fVar8 * (uint)(fVar9 >= fVar8));
  }
  (pOVar7->mover).m_curtime = fVar10;
  return;
}

EDialog* EDialog::EDialog() {
  *(undefined8 *)this = 2;
  this->__vtable = (EDialog__vtable *)_vt_7EDialog;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_dialogList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_dialogList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  this->m_pCurDialog = (EDialogWin *)0x0;
  return this;
}

void EDialog::~EDialog(int __in_chrg) {
	void *p;
	
  this->__vtable = (EDialog__vtable *)_vt_7EDialog;
  Clean__7EDialog(this);
  Reset__7EDialog();
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_dialogList).field0_0x0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EDialog::Init() {
  if (_10EDialogWin_m_pTextBoxBGBL == (ERShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pTextBoxBGBL =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc09a7a70,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pTextBoxBGBR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3a954713,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pTextBoxBGTL =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xdc02cfa7,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pTextBoxBGTR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x260df2c4,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pTextBoxBGML =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x470266bf,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pTextBoxBGMR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xbd0d5bdc,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pTextBoxBGTC =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x4cbdd236,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pTextBoxBGBC =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x502567e1,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pBlackBoxBGBL =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xe6bf8446,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pBlackBoxBGBR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x1cb0b925,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pBlackBoxBGTL =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xfa273191,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pBlackBoxBGTR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x280cf2,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pBlackBoxBGML =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x61279889,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pBlackBoxBGMR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x9b28a5ea,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pBlackBoxBGTC =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6a982c00,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pBlackBoxBGBC =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x760099d7,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pTextLineBGL =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xca6e38f,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pTextLineBGR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf6a9deec,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pTextLineBGC =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x9c19fe1e,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pMoreUpShd =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6b7cd394,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pMoreDownShd =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x373ae809,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pXIcon =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc1d9c5ed,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pTriIcon =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2ccf500a,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10EDialogWin_m_pCircIcon =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc45a417b,(EFile *)0x0,0);
                    /* end of inlined section */
  }
  return;
}

void EDialog::Reset() {
  while (_10EDialogWin_m_pTextBoxBGBL != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pTextBoxBGBL->field0_0x0);
    _10EDialogWin_m_pTextBoxBGBL = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pTextBoxBGBR != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pTextBoxBGBR->field0_0x0);
    _10EDialogWin_m_pTextBoxBGBR = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pTextBoxBGTL != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pTextBoxBGTL->field0_0x0);
    _10EDialogWin_m_pTextBoxBGTL = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pTextBoxBGTR != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pTextBoxBGTR->field0_0x0);
    _10EDialogWin_m_pTextBoxBGTR = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pTextBoxBGML != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pTextBoxBGML->field0_0x0);
    _10EDialogWin_m_pTextBoxBGML = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pTextBoxBGMR != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pTextBoxBGMR->field0_0x0);
    _10EDialogWin_m_pTextBoxBGMR = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pTextBoxBGTC != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pTextBoxBGTC->field0_0x0);
    _10EDialogWin_m_pTextBoxBGTC = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pTextBoxBGBC != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pTextBoxBGBC->field0_0x0);
    _10EDialogWin_m_pTextBoxBGBC = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pBlackBoxBGBL != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pBlackBoxBGBL->field0_0x0);
    _10EDialogWin_m_pBlackBoxBGBL = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pBlackBoxBGBR != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pBlackBoxBGBR->field0_0x0);
    _10EDialogWin_m_pBlackBoxBGBR = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pBlackBoxBGTL != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pBlackBoxBGTL->field0_0x0);
    _10EDialogWin_m_pBlackBoxBGTL = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pBlackBoxBGTR != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pBlackBoxBGTR->field0_0x0);
    _10EDialogWin_m_pBlackBoxBGTR = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pBlackBoxBGML != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pBlackBoxBGML->field0_0x0);
    _10EDialogWin_m_pBlackBoxBGML = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pBlackBoxBGMR != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pBlackBoxBGMR->field0_0x0);
    _10EDialogWin_m_pBlackBoxBGMR = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pBlackBoxBGTC != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pBlackBoxBGTC->field0_0x0);
    _10EDialogWin_m_pBlackBoxBGTC = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pBlackBoxBGBC != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pBlackBoxBGBC->field0_0x0);
    _10EDialogWin_m_pBlackBoxBGBC = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pTextLineBGL != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pTextLineBGL->field0_0x0);
    _10EDialogWin_m_pTextLineBGL = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pTextLineBGR != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pTextLineBGR->field0_0x0);
    _10EDialogWin_m_pTextLineBGR = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pTextLineBGC != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pTextLineBGC->field0_0x0);
    _10EDialogWin_m_pTextLineBGC = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pMoreUpShd != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pMoreUpShd->field0_0x0);
    _10EDialogWin_m_pMoreUpShd = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pMoreDownShd != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pMoreDownShd->field0_0x0);
    _10EDialogWin_m_pMoreDownShd = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pXIcon != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pXIcon->field0_0x0);
    _10EDialogWin_m_pXIcon = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pTriIcon != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pTriIcon->field0_0x0);
    _10EDialogWin_m_pTriIcon = (ERShader *)0x0;
  }
  while (_10EDialogWin_m_pCircIcon != (ERShader *)0x0) {
    DelRef__9EResource(&_10EDialogWin_m_pCircIcon->field0_0x0);
    _10EDialogWin_m_pCircIcon = (ERShader *)0x0;
  }
  return;
}

void EDialog::ExitCurDialog() {
  EDialogWin *pEVar1;
  
  pEVar1 = this->m_pCurDialog;
  if (pEVar1 != (EDialogWin *)0x0) {
    (*(code *)pEVar1->__vtable->Update)
              ((int)&pEVar1->m_mover + (int)*(short *)&pEVar1->__vtable->SafeDelete,3);
  }
  this->m_pCurDialog = (EDialogWin *)0x0;
  *(undefined8 *)this = 2;
  return;
}

void EDialog::Update() {
  EDialogWin *pEVar1;
  
  pEVar1 = this->m_pCurDialog;
  if (pEVar1 == (EDialogWin *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    if ((this->m_dialogList).field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0) {
      pEVar1 = GetNextDialog__7EDialog(this);
      this->m_pCurDialog = pEVar1;
      (**(code **)(this->__vtable + 1))
                ((int)&this->m_retcode + (int)*(short *)&this->__vtable->ExitCurDialog);
    }
  }
  else if (*(long *)this == 2) {
    (*(code *)pEVar1->__vtable->SetObject)
              ((int)&pEVar1->m_mover + (int)*(short *)&pEVar1->__vtable->SetObject);
  }
  return;
}

void EDialog::Draw(ERC *prc) {
  EDialogWin *pEVar1;
  
  pEVar1 = this->m_pCurDialog;
  if (pEVar1 != (EDialogWin *)0x0) {
    (*(code *)pEVar1->__vtable->PutPanelToSleep)
              ((int)&pEVar1->m_mover + (int)*(short *)&pEVar1->__vtable->SetParams,prc);
  }
  return;
}

void EDialog::SetParams(StackElem *elem, DialogParam *dialogParam, cXObject *pObj, ObjSelector *pSel) {
	EDialogWin *pWin;
	void *result;
	void *result;
	EDialogWin *data;
	
  EUnlockDialog *pEVar1;
  EDialogWin *this_00;
  EDialogWin__vtable *pEVar2;
  
  if ((dialogParam->playerIDType & 0xf) == 7) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/unlockdialog.h */
    pEVar1 = (EUnlockDialog *)_memmanAlloc__FUiUi(0x7e0,0x10);
    memset(pEVar1,0,0x7e0);
                    /* end of inlined section */
    pEVar1 = __13EUnlockDialogi(pEVar1,_globals.m_nUnlockGuid);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/edialog.h */
    this_00 = (EDialogWin *)_memmanAlloc__FUiUi(0x68,0x10);
    memset(this_00,0,0x68);
                    /* end of inlined section */
    pEVar1 = (EUnlockDialog *)__10EDialogWin(this_00);
  }
  if (pObj == (cXObject__21_1030 *)0x0) {
    if (pSel != (ObjSelector *)0x0) {
      pEVar2 = (pEVar1->field0_0x0).__vtable;
      (*(code *)pEVar2[1].GetEnteredText)
                ((int)&(pEVar1->field0_0x0).m_mover + (int)*(short *)&pEVar2[1].Draw,pSel);
    }
    pEVar2 = (pEVar1->field0_0x0).__vtable;
  }
  else {
    pEVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pEVar2[1].Update)
              ((int)&(pEVar1->field0_0x0).m_mover + (int)*(short *)&pEVar2[1].SafeDelete,pObj);
    pEVar2 = (pEVar1->field0_0x0).__vtable;
  }
  (pEVar1->field0_0x0).m_pParams = dialogParam;
  (*(code *)pEVar2[1].SetObject)
            ((int)&(pEVar1->field0_0x0).m_mover + (int)*(short *)&pEVar2[1].SetObject,elem,
             dialogParam);
  (pEVar1->field0_0x0).m_pDialogMan = this;
  if (this->m_pCurDialog == (EDialogWin *)0x0) {
    this->m_pCurDialog = &pEVar1->field0_0x0;
    (**(code **)(this->__vtable + 1))
              ((int)&this->m_retcode + (int)*(short *)&this->__vtable->ExitCurDialog);
  }
  else {
    (**(code **)(this->__vtable + 1))
              ((int)&this->m_retcode + (int)*(short *)&this->__vtable->ExitCurDialog);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&(this->m_dialogList).field0_0x0,(uint)pEVar1);
                    /* end of inlined section */
  }
  return;
}

void EDialog::PutPanelToSleep() {
  EDialogWin *pEVar1;
  
  pEVar1 = this->m_pCurDialog;
  if (pEVar1 != (EDialogWin *)0x0) {
    (*(code *)pEVar1->__vtable[1].PutPanelToSleep)
              ((int)&pEVar1->m_mover + (int)*(short *)&pEVar1->__vtable[1].SetParams);
  }
  return;
}

TreeReturnCode EDialog::GetRetCode() {
  return (TreeReturnCode)*(undefined8 *)this;
}

void EDialog::Clean() {
	TNodeList<EDialogWin *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  EDialogWin *pEVar2;
  ENodeListNode *pEVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_dialogList).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar1 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      if (uVar1 != 0) {
        (**(code **)(*(int *)(uVar1 + 100) + 0xc))
                  (uVar1 + (int)*(short *)(*(int *)(uVar1 + 100) + 8),3);
      }
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_dialogList).field0_0x0);
                    /* end of inlined section */
  pEVar2 = this->m_pCurDialog;
  if (pEVar2 != (EDialogWin *)0x0) {
    (*(code *)pEVar2->__vtable->Update)
              ((int)&pEVar2->m_mover + (int)*(short *)&pEVar2->__vtable->SafeDelete,3);
  }
  this->m_pCurDialog = (EDialogWin *)0x0;
  return;
}

EDialogWin* EDialog::GetNextDialog() {
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  ENodeListNode *i;
  EDialogWin *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  i = (this->m_dialogList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (i == (ENodeListNode *)0x0) {
    pEVar1 = (EDialogWin *)0x0;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar1 = (EDialogWin *)i->data;
    Remove__9ENodeListP17NLIteratorPtrType(&(this->m_dialogList).field0_0x0,(undefined1 *)i);
                    /* end of inlined section */
  }
  return pEVar1;
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
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    _15ObjMoverWrapper_vTopLeft.field0_0x0.d[0] = 0.184375;
    _15ObjMoverWrapper_vTopLeft.field0_0x0.d[1] = 0.175;
    _15ObjMoverWrapper_vTopLeftMessage.field0_0x0.d[0] = 0.2;
    _15ObjMoverWrapper_vTopLeftMessage.field0_0x0.d[1] = 0.28;
    _15ObjMoverWrapper_vWHDialog.field0_0x0.d[0] = 0.6390625;
    _15ObjMoverWrapper_vWHDialog.field0_0x0.d[1] = 0.545;
    _15ObjMoverWrapper_vWHMessageBack.field0_0x0.d[0] = 0.5428125;
    _15ObjMoverWrapper_vWHMessageBack.field0_0x0.d[1] = 0.26625;
    _15ObjMoverWrapper_vWHMessageBox.field0_0x0.d[1] = 0.2958333;
    _15ObjMoverWrapper_vWPromptBar.field0_0x0.d[0] = 0.603125;
    _15ObjMoverWrapper_vWPromptBar.field0_0x0.d[1] = 0.05;
    _15ObjMoverWrapper_vWHMessageBox.field0_0x0.d[0] = 0.603125;
    _15ObjMoverWrapper_vWTitleBar.field0_0x0.d[0] = 0.603125;
    _15ObjMoverWrapper_vWTitleBar.field0_0x0.d[1] = 0.05;
  }
  return;
}

void* EDialogWin::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EDialogWin::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

void EDialogWin::SafeDelete() {
  if (this != (EDialogWin *)0x0) {
    (*(code *)this->__vtable->Update)
              ((int)&this->m_mover + (int)*(short *)&this->__vtable->SafeDelete,3);
  }
  return;
}

cXObject* EDialogWin::GetTheObject() {
  return (cXObject__21_1030 *)this->fObject;
}

int EDialogWin::GetDestTemp() {
  return this->fTemp;
}

int EDialogWin::GetType() {
  return this->fType;
}

void* EDialog::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,0x10);
  return pvVar1;
}

void EDialog::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

bool EDialog::GetCurDialog() {
  return this->m_pCurDialog != (EDialogWin *)0x0;
}

void EDialog::SetRetCode(TreeReturnCode code) {
  *(long *)this = (long)code;
  return;
}

bool EDialog::DialogCanScroll() {
  bool bVar1;
  
  bVar1 = false;
  if (this->m_pCurDialog != (EDialogWin *)0x0) {
    bVar1 = *(int *)&this->m_pCurDialog->m_bAllstringsVis == 0;
  }
  return bVar1;
}

bool EDialog::InKeyboard() {
  bool bVar1;
  
  bVar1 = false;
  if (this->m_pCurDialog != (EDialogWin *)0x0) {
    bVar1 = this->m_pCurDialog->m_keyboard != (ETextEntryDialog *)0x0;
  }
  return bVar1;
}

void DialogStrContainer::Reset() {
	TNodeList<BString2 *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  EGlobalManagerClient__vtable *pEVar1;
  EGraphics *pEVar2;
  ENodeListNode *pEVar3;
  BString2 *this_00;
  
  pEVar2 = _pGfx;
  this->nStrings = 0;
  pEVar1 = (pEVar2->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_strings).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    this_00 = (BString2 *)pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      if (this_00 != (BString2 *)0x0) {
        ___8BString2(this_00,3);
      }
      if (pEVar3 == (ENodeListNode *)0x0) break;
      this_00 = (BString2 *)pEVar3->data;
    }
  }
  RemoveAll__9ENodeList((ENodeList *)this);
  return;
}

void global constructors keyed to ObjMoverWrapper::vTopLeft() {
                    /* end of inlined section */
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
