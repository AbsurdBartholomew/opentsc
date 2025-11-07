// STATUS: NOT STARTED

#include "ESim.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb5176;
	__vtbl_ptr_type *$vf3737;
	
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
	cXObject *$vb3737;
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
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb5940;
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
	Panelstateman *$vb5940;
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
	Panelstateman *$vb5940;
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

enum ESimCommands {
	kCommandInitModel = 0,
	kCommandCreateSkin = 1
};

EHeap ESim::m_MyHeap = {
	/* .m_pFreeHead = */ NULL,
	/* .m_pFreeTail = */ NULL,
	/* .m_pHead = */ NULL,
	/* .m_pEnd = */ NULL,
	/* .m_smallestFailedAlloc = */ 0,
	/* .m_memset = */ false
};

ETypeInfo *gpTypeInfo_ESim = NULL;
float _esim_plumbob_off_ = 0.f;

EVec3 __pbob__v1 = {
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

EVec3 __pbob__v2 = {
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

float __pbob_ambFactor = 0.3f;
bool _drawSimRect = false;

EVec3 _vGhostBlue = {
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

EVec3 _vGhostGreen = {
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

ELights _ESim_GhostLight = {
	/* .a = */ {
		/* .vColor = */ {
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
		/* .pad = */ 0.f
	}
};

ELights _ESim_GreenLight = {
	/* .a = */ {
		/* .vColor = */ {
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
		/* .pad = */ 0.f
	}
};

__vtbl_ptr_type ESim::IBaseSimInstance virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ESim::~ESim,
		/* .__delta2 = */ -14760
	},
	/* [2] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetObjOrient,
		/* .__delta2 = */ 17504
	},
	/* [3] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCursFlags,
		/* .__delta2 = */ 20656
	},
	/* [4] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetCursFlags,
		/* .__delta2 = */ 20664
	},
	/* [5] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetSimInstance,
		/* .__delta2 = */ 20672
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ESim virtual table[41] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESim::SafeDelete,
		/* .__delta2 = */ 20480
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESim::GetTypeInfo,
		/* .__delta2 = */ 20536
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESim::GetTypeName,
		/* .__delta2 = */ 20552
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESim::GetTypeKey,
		/* .__delta2 = */ 20568
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESim::GetTypeVersion,
		/* .__delta2 = */ 20584
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESim::~ESim,
		/* .__delta2 = */ -14760
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
		/* .__pfn = */ &ESim::Update,
		/* .__delta2 = */ -5056
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESim::VisibilityTest,
		/* .__delta2 = */ -4120
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESim::Draw,
		/* .__delta2 = */ -6008
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
		/* .__pfn = */ &ESim::CalcLights3,
		/* .__delta2 = */ -8768
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
		/* .__pfn = */ &EIStaticModel::GetDrawMatrix,
		/* .__delta2 = */ -23368
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::Create,
		/* .__delta2 = */ 17488
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::OrentSubObject,
		/* .__delta2 = */ 17496
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetCarryOrient,
		/* .__delta2 = */ 17552
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::CreateShadow,
		/* .__delta2 = */ 17512
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::InsertSubModelsInHouse,
		/* .__delta2 = */ 17520
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::RemoveSubModelsFromHouse,
		/* .__delta2 = */ 17528
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::PropigateFlagsToSubModels,
		/* .__delta2 = */ 17536
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetShadow,
		/* .__delta2 = */ 17568
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetOutOfWorld,
		/* .__delta2 = */ 17544
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::StartBurp,
		/* .__delta2 = */ 17560
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESim::TestForCursorOverlap,
		/* .__delta2 = */ 18128
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESim::GetObCenter,
		/* .__delta2 = */ 19776
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SetPlacementError,
		/* .__delta2 = */ 17456
	},
	/* [38] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::IsMultiTilePart,
		/* .__delta2 = */ 20680
	},
	/* [39] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESim::SetXOb,
		/* .__delta2 = */ 20816
	},
	/* [40] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ESim::m_typeInfo;

EStream& operator<<(EStream &s, ESim *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ESim *&pD) {
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
  *pD = (ESim *)pStorable;
  return s;
}

ESim* ESim::ESim(cXPerson *person) {
	void *result;
	
  undefined *puVar1;
  bool bVar2;
  cXPerson__150_1300__vtable *pcVar3;
  cXPerson__150_1300 *pcVar4;
  uint uVar5;
  ulong *puVar6;
  int iVar7;
  cXObject__179_1116 *pcVar8;
  ESims3DHead *pEVar9;
  float fVar10;
  
  __12ISimInstance(&this->field0_0x0);
  *(__vtbl_ptr_type **)&(this->field0_0x0).field_0x130 = _vt_4ESim_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_4ESim;
                    /* end of inlined section */
  iVar7 = 6;
  do {
    bVar2 = iVar7 != -1;
    iVar7 = iVar7 + -1;
  } while (bVar2);
  (this->field0_0x0).field0_0x0.m_otds = (EOrderTableData *)0x0;
  pcVar8 = (cXObject__179_1116 *)0x0;
  this->m_pPerson = (cXPerson__150_1300 *)person;
  if (person != (cXPerson__34_985 *)0x0) {
    pcVar8 = (cXObject__179_1116 *)person->_vb3737;
  }
  this->m_pPlumBob = (ERModel *)0x0;
  this->m_pSimHead = (ESims3DHead *)0x0;
  this->m_pTrackBase = (ERModel *)0x0;
  this->m_pTrackH = (ERModel *)0x0;
  this->m_pTrackCirDash = (ERModel *)0x0;
  this->m_ringRot = 0.0;
  this->m_plowResShadowModel = (ERModel *)0x0;
  (this->field0_0x0).m_pXOb = pcVar8;
  memset(this->m_Models,0,0x18);
  this->m_ring_S1 = 1;
  this->m_GlassesModel = (ERModel *)0x0;
  this->m_SimShader = (EShader *)0x0;
  this->m_scaletime = 0.0;
  this->m_ring_S0 = 0;
  pcVar3 = this->m_pPerson->__vtable;
  fVar10 = (float)(*(code *)pcVar3->DebugDumpHappyScape)
                            ((int)&this->m_pPerson->_vb1187 +
                             (int)*(short *)&pcVar3->DeleteTopAction,7);
  this->m_fPreviousMotive[0] = fVar10;
  pcVar3 = this->m_pPerson->__vtable;
  fVar10 = (float)(*(code *)pcVar3->DebugDumpHappyScape)
                            ((int)&this->m_pPerson->_vb1187 +
                             (int)*(short *)&pcVar3->DeleteTopAction,8);
  this->m_fPreviousMotive[1] = fVar10;
  pcVar3 = this->m_pPerson->__vtable;
  fVar10 = (float)(*(code *)pcVar3->DebugDumpHappyScape)
                            ((int)&this->m_pPerson->_vb1187 +
                             (int)*(short *)&pcVar3->DeleteTopAction,5);
  this->m_fPreviousMotive[2] = fVar10;
  pcVar3 = this->m_pPerson->__vtable;
  fVar10 = (float)(*(code *)pcVar3->DebugDumpHappyScape)
                            ((int)&this->m_pPerson->_vb1187 +
                             (int)*(short *)&pcVar3->DeleteTopAction,0xe);
  this->m_fPreviousMotive[3] = fVar10;
  pcVar3 = this->m_pPerson->__vtable;
  fVar10 = (float)(*(code *)pcVar3->DebugDumpHappyScape)
                            ((int)&this->m_pPerson->_vb1187 +
                             (int)*(short *)&pcVar3->DeleteTopAction,6);
  this->m_fPreviousMotive[4] = fVar10;
  pcVar3 = this->m_pPerson->__vtable;
  fVar10 = (float)(*(code *)pcVar3->DebugDumpHappyScape)
                            ((int)&this->m_pPerson->_vb1187 +
                             (int)*(short *)&pcVar3->DeleteTopAction,9);
  this->m_fPreviousMotive[5] = fVar10;
  pcVar3 = this->m_pPerson->__vtable;
  fVar10 = (float)(*(code *)pcVar3->DebugDumpHappyScape)
                            ((int)&this->m_pPerson->_vb1187 +
                             (int)*(short *)&pcVar3->DeleteTopAction,0xf);
  pcVar4 = this->m_pPerson;
  this->m_fPreviousMotive[6] = fVar10;
  pcVar3 = pcVar4->__vtable;
  fVar10 = (float)(*(code *)pcVar3->DebugDumpHappyScape)
                            ((int)&pcVar4->_vb1187 + (int)*(short *)&pcVar3->DeleteTopAction,0xd);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  this->m_fPreviousMotive[7] = fVar10;
  puVar1 = (undefined *)((int)&this->m_vMotiveDelta[0].field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  uVar5 = (uint)this->m_vMotiveDelta & 7;
  puVar6 = (ulong *)((int)this->m_vMotiveDelta - uVar5);
  *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&this->m_vMotiveDelta[1].field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  uVar5 = (uint)(this->m_vMotiveDelta + 1) & 7;
  puVar6 = (ulong *)((int)(this->m_vMotiveDelta + 1) - uVar5);
  *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&this->m_vMotiveDelta[2].field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  uVar5 = (uint)(this->m_vMotiveDelta + 2) & 7;
  puVar6 = (ulong *)((int)(this->m_vMotiveDelta + 2) - uVar5);
  *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&this->m_vMotiveDelta[3].field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  uVar5 = (uint)(this->m_vMotiveDelta + 3) & 7;
  puVar6 = (ulong *)((int)(this->m_vMotiveDelta + 3) - uVar5);
  *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&this->m_vMotiveDelta[4].field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  uVar5 = (uint)(this->m_vMotiveDelta + 4) & 7;
  puVar6 = (ulong *)((int)(this->m_vMotiveDelta + 4) - uVar5);
  *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&this->m_vMotiveDelta[5].field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  uVar5 = (uint)(this->m_vMotiveDelta + 5) & 7;
  puVar6 = (ulong *)((int)(this->m_vMotiveDelta + 5) - uVar5);
  *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&this->m_vMotiveDelta[6].field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  uVar5 = (uint)(this->m_vMotiveDelta + 6) & 7;
  puVar6 = (ulong *)((int)(this->m_vMotiveDelta + 6) - uVar5);
  *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&this->m_vMotiveDelta[7].field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  uVar5 = (uint)(this->m_vMotiveDelta + 7) & 7;
  puVar6 = (ulong *)((int)(this->m_vMotiveDelta + 7) - uVar5);
  *puVar6 = 0L << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  *(undefined4 *)&this->m_bDrawShadow = 1;
  this->m_pESimShadow = (ERShader *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/simhead.h */
  this->m_iQueueCount = 0;
  pEVar9 = (ESims3DHead *)_memmanAlloc__FUiUi(0x290,0x10);
  memset(pEVar9,0,0x290);
                    /* end of inlined section */
  pEVar9 = __11ESims3DHeadP4ESim(pEVar9,this);
  this->m_pSimHead = pEVar9;
  SetOverlapReceiveFlags__9EInstanceUi((EInstance *)this,0x18);
  uVar5 = (this->field0_0x0).field0_0x0.field0_0x0.m_instanceFlags;
                    /* inlined from /eor/src2/engine/animation/E_animcontroller.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bGetSign = 1;
  *(undefined4 *)&(this->field0_0x0).field0_0x0.m_dynamiclyLit = 1;
  this->m_pShowerCurtain = (ERModel *)0x0;
  (this->field0_0x0).field0_0x0.field0_0x0.m_instanceFlags = uVar5 & 0xfffffdff | 0x100;
                    /* inlined from /eor/src2/engine/animation/E_animcontroller.h */
  (this->field0_0x0).m_AC.m_modelScaler = 0.0002441406;
                    /* end of inlined section */
  this->m_SkinChangeStage = -1;
  QueueCommand__16ESimsDataManagerP4ESimUi(&_simsdataman,this,0);
  return this;
}

void ESim::~ESim(int __in_chrg) {
	ESim *this;
	ETexture *pTempTex;
	void *p;
	
  int iVar1;
  EGlobalManagerClient__vtable *pEVar2;
  ESims3DHead *pEVar3;
  EUIObjectNode__vtable *pEVar4;
  EOrderTableData *pAddress;
  EShader *pEVar5;
  ERModel *pEVar6;
  ERShader *this_00;
  ETexture *pEVar7;
  
  *(__vtbl_ptr_type **)&(this->field0_0x0).field_0x130 = _vt_4ESim_16IBaseSimInstance;
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
  iVar1 = this->m_iQueueCount;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_4ESim;
  if (0 < iVar1) {
    Flush__16ESimsDataManager(&_simsdataman);
  }
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[3].ManagedStartup);
  flushQueuedCostumeModels__4ESim(this);
  pEVar3 = this->m_pSimHead;
  if (pEVar3 != (ESims3DHead *)0x0) {
    pEVar4 = (pEVar3->field0_0x0).__vtable;
    (*(code *)pEVar4->Draw)
              ((int)&(pEVar3->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar4->Update,3);
  }
  this->m_pSimHead = (ESims3DHead *)0x0;
  while (this->m_pPlumBob != (ERModel *)0x0) {
    DelRef__9EResource(&this->m_pPlumBob->field0_0x0);
    this->m_pPlumBob = (ERModel *)0x0;
  }
  pAddress = (this->field0_0x0).field0_0x0.m_otds;
  if (pAddress == (EOrderTableData *)0x0) {
    pEVar6 = this->m_Models[0];
  }
  else {
    _memmanFree__FPv(pAddress);
    pEVar6 = this->m_Models[0];
  }
  (this->field0_0x0).field0_0x0.m_otds = (EOrderTableData *)0x0;
  if (pEVar6 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar6->field0_0x0);
  }
  pEVar6 = this->m_Models[1];
  this->m_Models[0] = (ERModel *)0x0;
  if (pEVar6 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar6->field0_0x0);
  }
  this->m_Models[1] = (ERModel *)0x0;
  if (this->m_Models[2] != (ERModel *)0x0) {
    DelRef__9EResource(&this->m_Models[2]->field0_0x0);
  }
  this->m_Models[2] = (ERModel *)0x0;
  if (this->m_Models[3] != (ERModel *)0x0) {
    DelRef__9EResource(&this->m_Models[3]->field0_0x0);
  }
  this->m_Models[3] = (ERModel *)0x0;
  if (this->m_Models[4] != (ERModel *)0x0) {
    DelRef__9EResource(&this->m_Models[4]->field0_0x0);
  }
  this->m_Models[4] = (ERModel *)0x0;
  if (this->m_Models[5] != (ERModel *)0x0) {
    DelRef__9EResource(&this->m_Models[5]->field0_0x0);
  }
  pEVar5 = this->m_SimShader;
  this->m_Models[5] = (ERModel *)0x0;
  if (pEVar5 == (EShader *)0x0) goto LAB_0014c848;
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
  pEVar7 = (pEVar5->m_sd).rp[0].pTexture;
  while (this->m_SimShader != (EShader *)0x0) {
    pEVar2 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar2[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[3].ManagedStartup);
    pEVar2 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar2[0xb].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[0xb].ManagedStartup,
               this->m_SimShader);
    this->m_SimShader = (EShader *)0x0;
  }
  while (pEVar7 != (ETexture *)0x0) {
    pEVar2 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar2[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[3].ManagedStartup);
    pEVar2 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar2[8].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 8),pEVar7);
    pEVar7 = (ETexture *)0x0;
  }
  pEVar6 = this->m_pShowerCurtain;
  while (pEVar6 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar6->field0_0x0);
    this->m_pShowerCurtain = (ERModel *)0x0;
LAB_0014c848:
    pEVar6 = this->m_pShowerCurtain;
  }
  this_00 = this->m_pESimShadow;
  while (this_00 != (ERShader *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    this->m_pESimShadow = (ERShader *)0x0;
    this_00 = this->m_pESimShadow;
  }
  pEVar6 = this->m_plowResShadowModel;
  while (pEVar6 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar6->field0_0x0);
    this->m_plowResShadowModel = (ERModel *)0x0;
    pEVar6 = this->m_plowResShadowModel;
  }
  pEVar6 = this->m_pTrackBase;
  while (pEVar6 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar6->field0_0x0);
    this->m_pTrackBase = (ERModel *)0x0;
    pEVar6 = this->m_pTrackBase;
  }
  pEVar6 = this->m_pTrackH;
  while (pEVar6 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar6->field0_0x0);
    this->m_pTrackH = (ERModel *)0x0;
    pEVar6 = this->m_pTrackH;
  }
  pEVar6 = this->m_pTrackCirDash;
  while (pEVar6 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar6->field0_0x0);
    this->m_pTrackCirDash = (ERModel *)0x0;
    pEVar6 = this->m_pTrackCirDash;
  }
  ___12ISimInstance(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ESim::flushQueuedCostumeModels() {
  if (this->m_uQueuedUpperBodyID != 0) {
    GetRefAsync__16EResourceManagerUib(&_modelman.field0_0x0,this->m_uQueuedUpperBodyID,true);
    DelRef__16EResourceManagerUi(&_modelman.field0_0x0,this->m_uQueuedUpperBodyID);
  }
  if (this->m_uQueuedLowerBodyID != 0) {
    GetRefAsync__16EResourceManagerUib(&_modelman.field0_0x0,this->m_uQueuedLowerBodyID,true);
    DelRef__16EResourceManagerUi(&_modelman.field0_0x0,this->m_uQueuedLowerBodyID);
  }
  if (this->m_uQueuedShoeID != 0) {
    GetRefAsync__16EResourceManagerUib(&_modelman.field0_0x0,this->m_uQueuedShoeID,true);
    DelRef__16EResourceManagerUi(&_modelman.field0_0x0,this->m_uQueuedShoeID);
  }
  this->m_uQueuedUpperBodyID = 0;
  this->m_uQueuedShoeID = 0;
  this->m_uQueuedLowerBodyID = 0;
  return;
}

bool ESim::IsMale() {
  cXPerson__150_1300__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = this->m_pPerson->__vtable;
  uVar2 = (**(code **)&pcVar1->field_0x174)
                    ((int)&this->m_pPerson->_vb1187 + (int)*(short *)&pcVar1->field_0x170);
  return (bool)uVar2;
}

bool ESim::IsFemale() {
  bool bVar1;
  
  bVar1 = IsMale__4ESim(this);
  return !bVar1;
}

bool ESim::IsAdult() {
  cXPerson__150_1300__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = this->m_pPerson->__vtable;
  uVar2 = (**(code **)&pcVar1->field_0x184)
                    ((int)&this->m_pPerson->_vb1187 + (int)*(short *)&pcVar1->field_0x180);
  return (bool)uVar2;
}

bool ESim::IsChild() {
  cXPerson__150_1300__vtable *pcVar1;
  undefined uVar2;
  
  pcVar1 = this->m_pPerson->__vtable;
  uVar2 = (**(code **)&pcVar1->field_0x16c)
                    ((int)&this->m_pPerson->_vb1187 + (int)*(short *)&pcVar1->field_0x168);
  return (bool)uVar2;
}

void ESim::initModel() {
	ETexture *pCustomTexture;
	ETextureDef td;
	EShaderDef sd;
	bool bIsMale;
	NPC *pNPCharacter;
	u32 userParam;
	EOrderTableData *potd;
	int cSubModel;
	int index;
	int cSubModelShader;
	ERQuickdata *pCreateSimData;
	Table *pBodyData;
	ERQTable<Sim::Table> *pTable;
	CustomCharacter *pCustomCharacter;
	ERQuickdata *this;
	ERQTable<Sim::Table> *pTable;
	ERQuickdata *this;
	ERQuickdata *this;
	ERQuickdata *this;
	ERQuickdata *this;
	
  EGlobalManagerClient__vtable *pEVar1;
  cXPerson__150_1300__vtable *pcVar2;
  bool bVar3;
  bool bVar4;
  EShader *pEVar5;
  ERModel *pEVar6;
  EOrderTableData *pEVar7;
  ERQuickdata *this_00;
  void *pvVar8;
  int *piVar9;
  ERShader *pEVar10;
  long lVar11;
  EShaderRenderPassDef *pEVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  char *pRowName;
  ETexture *pEVar17;
  EAnimController *this_01;
  ETextureDef td;
  EShaderDef sd;
  
  pEVar12 = sd.rp;
  this->m_pVanityCostume = (Costume *)0x0;
  *(undefined4 *)&this->m_bUseVanityDraw = 0;
  this->m_nTypeOfObject = 0;
  if (this->m_SimShader != (EShader *)0x0) {
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
    pEVar17 = (this->m_SimShader->m_sd).rp[0].pTexture;
                    /* end of inlined section */
    while (this->m_SimShader != (EShader *)0x0) {
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[3].ManagedShutdown)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[0xb].ManagedShutdown)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[0xb].ManagedStartup,
                 this->m_SimShader);
      this->m_SimShader = (EShader *)0x0;
    }
    while (pEVar17 != (ETexture *)0x0) {
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[3].ManagedShutdown)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[8].EGlobalManagerClient)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 8),pEVar17);
      pEVar17 = (ETexture *)0x0;
    }
  }
  this_01 = &(this->field0_0x0).m_AC;
  iVar13 = 1;
  td.pfnAllocAlign = (undefined1 *)0x0;
  td.pfnFree = (undefined1 *)0x0;
  td.mipMapLevels = 0;
  td.mipMapShift = 0.0;
  do {
    pEVar12->pTexture = (ETexture *)0x0;
    iVar13 = iVar13 + -1;
    pEVar12->rasterModes = 8;
    pEVar12->flags = 0x18;
    pEVar12->blendA = '\0';
    pEVar12->blendB = '\x01';
    pEVar12->blendC = '\0';
    pEVar12->blendD = '\x01';
    pEVar12->blendFix = 0x80;
    pEVar12->combine = '\0';
    pEVar12->textureGen = '\0';
    pEVar12->alphaTestThreshold = 0.5;
    pEVar12 = pEVar12 + 1;
  } while (iVar13 != -1);
  sd.mat.vAmbientColor.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  sd.mat.vAmbientColor.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  sd.mat.vAmbientColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  sd.mat.vAmbientColor.field0_0x0.d[2] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[0] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_material.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_material.h */
  sd.mat.vDiffuseColor.field0_0x0.d[2] = 1.0;
  sd.mat.vDiffuseColor.field0_0x0.d[3] = 1.0;
  sd.nRenderPasses = '\x01';
  sd.flags = 0x817;
  sd.geometryModes = 8;
                    /* end of inlined section */
  td.bitsPerPaletteEntry = ' ';
  td.xsize = 0x80;
  td.flags = 0;
  td.paletteFormat = '\x02';
  td.bitsPerImagePixel = '\b';
  td.paletteSize = 0x100;
                    /* inlined from /eor/src2/engine/shader/e_shaderdef.h */
  sd.sortMode = '\0';
  sd.sortValue = 0;
                    /* end of inlined section */
  td.ysize = 0x80;
  td.imageFormat = '\0';
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  sd.rp[0].pTexture =
       (ETexture *)
       (*(code *)pEVar1[7].ManagedShutdown)
                 ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[7].ManagedStartup,&td)
  ;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  pEVar5 = (EShader *)
           (*(code *)pEVar1[0xb].EGlobalManagerClient)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 0xb),&sd);
  this->m_SimShader = pEVar5;
  bVar3 = IsMale__4ESim(this);
  bVar4 = IsAdult__4ESim(this);
  if (bVar4) {
    if (bVar3) {
      uVar15 = 0xffa60350;
                    /* end of inlined section */
    }
    else {
      uVar15 = 0x1fb80af4;
    }
    Init__15EAnimControllerUi(this_01,uVar15);
    SetTrackAnim__15EAnimControlleriUi(this_01,1,0xef36dfa8);
    if (this->m_plowResShadowModel != (ERModel *)0x0) goto LAB_0014cdbc;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    uVar15 = 0x6ef2f2da;
  }
  else {
    Init__15EAnimControllerUi(this_01,0xd5e79699);
    SetTrackAnim__15EAnimControlleriUi(this_01,1,0x9d5bc148);
    if (this->m_plowResShadowModel != (ERModel *)0x0) goto LAB_0014cdbc;
    uVar15 = 0x566f5472;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
  }
  pEVar6 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,uVar15,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_plowResShadowModel = pEVar6;
                    /* inlined from /eor/src2/engine/animation/E_animcontroller.h */
LAB_0014cdbc:
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/E_animcontroller.h */
  (this->field0_0x0).m_AC.m_postComputeUserParam = (uint)this;
                    /* end of inlined section */
                    /* end of inlined section */
  (this->field0_0x0).m_AC.m_pfnPostComputeCallback =
       ScaleBones__4ESimUiRC5EMat4P11ERCharacterP5EMat4;
  SetGlobalSpeed__15EAnimControllerf(this_01,1.0);
  pcVar2 = this->m_pPerson->__vtable;
  lVar11 = (*(code *)pcVar2->StartRecording)
                     ((int)&this->m_pPerson->_vb1187 + (int)*(short *)&pcVar2->GetRecordSkill);
  if (lVar11 == 0) {
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
    this_00 = (ERQuickdata *)
              AddRef__16EResourceManagerUiP5EFilei
                        (&_quickdataman.field0_0x0,0x2a2af469,(EFile *)0x0,0);
    pvVar8 = getTable__11ERQuickdataPCc(this_00,"Sim::Table");
                    /* end of inlined section */
                    /* end of inlined section */
    bVar4 = IsAdult__4ESim(this);
    if (bVar4) {
      if (bVar3) {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
        pRowName = "AdultMale";
      }
      else {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
        pRowName = "AdultFemale";
      }
    }
    else if (bVar3) {
      pRowName = "ChildMale";
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
    }
    else {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
      pRowName = "ChildFemale";
    }
    piVar9 = (int *)getRow__11ERQuickdataPCvPCc(this_00,pvVar8,pRowName);
                    /* end of inlined section */
    pcVar2 = this->m_pPerson->__vtable;
    iVar13 = (*(code *)pcVar2->GetRecordTicksElapsed)
                       ((int)&this->m_pPerson->_vb1187 + (int)*(short *)&pcVar2->GetRecordCurTicks);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    uVar15 = *(uint *)(piVar9[5] + *(char *)(iVar13 + 9) * 4);
    if (uVar15 == 0) {
      this->m_Models[0] = (ERModel *)0x0;
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      pEVar6 = (ERModel *)
               AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,uVar15,(EFile *)0x0,0);
                    /* end of inlined section */
      this->m_Models[0] = pEVar6;
    }
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar6 = (ERModel *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_modelman.field0_0x0,*(uint *)(piVar9[3] + *(char *)(iVar13 + 10) * 8),
                        (EFile *)0x0,0);
                    /* end of inlined section */
    this->m_Models[1] = pEVar6;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pEVar6 = (ERModel *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_modelman.field0_0x0,*(uint *)(piVar9[4] + *(char *)(iVar13 + 0xb) * 0xc),
                        (EFile *)0x0,0);
                    /* end of inlined section */
    this->m_Models[2] = pEVar6;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pEVar6 = (ERModel *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_modelman.field0_0x0,*(uint *)(*piVar9 + *(char *)(iVar13 + 0xc) * 0xc),
                        (EFile *)0x0,0);
                    /* end of inlined section */
    this->m_Models[3] = pEVar6;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pEVar6 = (ERModel *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_modelman.field0_0x0,*(uint *)(piVar9[1] + *(char *)(iVar13 + 0xd) * 0xc),
                        (EFile *)0x0,0);
                    /* end of inlined section */
    this->m_Models[4] = pEVar6;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pEVar6 = (ERModel *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_modelman.field0_0x0,*(uint *)(piVar9[2] + *(char *)(iVar13 + 0xe) * 8),
                        (EFile *)0x0,0);
                    /* end of inlined section */
    this->m_Models[5] = pEVar6;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    this->m_OriginalModelIds[0] = *(uint *)(piVar9[5] + *(char *)(iVar13 + 9) * 4);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    this->m_OriginalModelIds[1] = *(uint *)(piVar9[3] + *(char *)(iVar13 + 10) * 8);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    this->m_OriginalModelIds[2] = *(uint *)(piVar9[4] + *(char *)(iVar13 + 0xb) * 0xc);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    this->m_OriginalModelIds[3] = *(uint *)(*piVar9 + *(char *)(iVar13 + 0xc) * 0xc);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    this->m_OriginalModelIds[4] = *(uint *)(piVar9[1] + *(char *)(iVar13 + 0xd) * 0xc);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    uVar15 = *(uint *)(piVar9[2] + *(char *)(iVar13 + 0xe) * 8);
    this->m_QueuedModelIds[0] = 0;
    this->m_QueuedModelIds[1] = 0;
    this->m_QueuedModelIds[2] = 0;
    this->m_QueuedModelIds[3] = 0;
    this->m_QueuedModelIds[4] = 0;
    this->m_QueuedModelIds[5] = 0;
    *(undefined4 *)&this->m_bSwitchOutfits = 0;
    this->m_OriginalModelIds[5] = uVar15;
    createSkinDirect__4ESimPCQ23Sim7Costume(this,(Costume *)0x0);
    DelRef__16EResourceManagerP9EResource(&_quickdataman.field0_0x0,(EResource *)this_00);
    pEVar7 = (EOrderTableData *)_memmanAlloc__FUiUi(0x30,4);
    (this->field0_0x0).field0_0x0.m_otds = pEVar7;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    pEVar7->sortValue = 3;
    pEVar7->pvPos = (EVec3 *)((int)&(this->field0_0x0).field0_0x0.m_mOrient.field0_0x0 + 0x30);
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
    pEVar7->pfnCallback = SimOrderTableCallback__4ESimP3ERCUiUi;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
    pEVar7->pmOrient = (EMat4 *)0x0;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
    pEVar7->sortMode = 0;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
    pEVar7->callbackParam1 = (uint)this;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar7->pShader = (EShader *)0x0;
    pEVar6 = (ERModel *)
             AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x6d1f0956,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pPlumBob = pEVar6;
  }
  else {
    if (*(int *)((int)lVar11 + 8) == 0) {
      pEVar10 = this->m_pESimShadow;
      goto LAB_0014d1cc;
    }
    while (pEVar6 = (this->field0_0x0).field0_0x0.m_pModel, pEVar6 != (ERModel *)0x0) {
      DelRef__9EResource(&pEVar6->field0_0x0);
      (this->field0_0x0).field0_0x0.m_pModel = (ERModel *)0x0;
    }
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar6 = (ERModel *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_modelman.field0_0x0,*(uint *)((int)lVar11 + 8),(EFile *)0x0,0);
                    /* end of inlined section */
    (this->field0_0x0).field0_0x0.m_pModel = pEVar6;
    iVar13 = GetShaderCount__7ERModel(pEVar6);
    pEVar7 = (EOrderTableData *)_memmanAlloc__FUiUi(iVar13 * 0x30,4);
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
    pEVar6 = (this->field0_0x0).field0_0x0.m_pModel;
                    /* end of inlined section */
    (this->field0_0x0).field0_0x0.m_otds = pEVar7;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
    iVar13 = 0;
    if (0 < (pEVar6->m_subModels).field0_0x0.m_size) {
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
      pEVar6 = (this->field0_0x0).field0_0x0.m_pModel;
      iVar14 = 0;
      do {
                    /* end of inlined section */
        iVar13 = iVar13 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
        pvVar8 = (pEVar6->m_subModels).field0_0x0.m_p;
                    /* end of inlined section */
        iVar16 = 0;
        if (0 < *(int *)((int)pvVar8 + iVar14 + 4)) {
          do {
            pEVar7->sortMode = 0;
            iVar16 = iVar16 + 1;
            pEVar7->sortValue = 3;
            pEVar7->pvPos =
                 (EVec3 *)((int)&(this->field0_0x0).field0_0x0.m_mOrient.field0_0x0 + 0x30);
            pEVar7->callbackParam1 = (uint)this;
            pEVar7->pfnCallback = NpcOrderTableCallback__4ESimP3ERCUiUi;
            pEVar7->pShader = (EShader *)0x0;
            pEVar7->pmOrient = (EMat4 *)0x0;
            pEVar7->renderFlags = 1;
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
            pEVar7 = pEVar7 + 1;
          } while (iVar16 < *(int *)((int)pvVar8 + iVar14 + 4));
        }
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
        pEVar6 = (this->field0_0x0).field0_0x0.m_pModel;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_array.h */
                    /* end of inlined section */
        iVar14 = iVar13 * 0x18;
      } while (iVar13 < (pEVar6->m_subModels).field0_0x0.m_size);
      pEVar10 = this->m_pESimShadow;
      goto LAB_0014d1cc;
    }
  }
  while( true ) {
    pEVar10 = this->m_pESimShadow;
LAB_0014d1cc:
    if (pEVar10 == (ERShader *)0x0) break;
    DelRef__9EResource(&pEVar10->field0_0x0);
    this->m_pESimShadow = (ERShader *)0x0;
  }
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar10 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf46aedcb,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pESimShadow = pEVar10;
  *(undefined4 *)&this->m_bDontDrawHead = 0;
  *(undefined4 *)&this->m_bOverrideDefaultSkin = 0;
  while (this->m_pTrackBase != (ERModel *)0x0) {
    DelRef__9EResource(&this->m_pTrackBase->field0_0x0);
    this->m_pTrackBase = (ERModel *)0x0;
  }
  pEVar6 = this->m_pTrackH;
  while (pEVar6 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar6->field0_0x0);
    this->m_pTrackH = (ERModel *)0x0;
    pEVar6 = this->m_pTrackH;
  }
  pEVar6 = this->m_pTrackCirDash;
  while (pEVar6 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar6->field0_0x0);
    this->m_pTrackCirDash = (ERModel *)0x0;
    pEVar6 = this->m_pTrackCirDash;
  }
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar6 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0xc1a394fd,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTrackBase = pEVar6;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar6 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x528d93c8,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTrackH = pEVar6;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar6 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x68de8ae2,(EFile *)0x0,0);
                    /* end of inlined section */
  *(undefined4 *)&this->m_bSimIsHidden = 0;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
  this->m_pTrackCirDash = pEVar6;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar6 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x3887fccd,(EFile *)0x0,0);
                    /* end of inlined section */
  *(undefined4 *)&this->m_bDontDrawSim = 1;
  this->m_pShowerCurtain = pEVar6;
  this->m_SkinChangeStage = -1;
  *(undefined4 *)&this->m_bSkipDrawNextFrame = 1;
  return;
}

void ESim::DrawShadowAndPlumBob(ERC *prc) {
	bool infp;
	ESim *this;
	ERC *this;
	ERC *this;
	EVec3 vPelvis;
	ERC *this;
	ESimsCam *this;
	ESim *this;
	ESim *this;
	ESimsCam *pCam;
	EVec3 vHead;
	static ELights1 _plumbob1Light;
	float dirxtmp;
	static ELights1 _plumbob2Light;
	static float fpbobtime = 0.f;
	static float fpbobTheta = 0.f;
	float _range[2];
	static int pbobS0 = 0;
	static int pbobS1 = 1;
	float mu;
	float heightOff;
	ERC *this;
	ESimsCam *this;
	ESimsCam *this;
	int tmp;
	float u;
	float a;
	float b;
	ESim *this;
	
  cXPerson__150_1300__vtable *pcVar1;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  EMat4 *this_00;
  float (*paafVar5) [4] [4];
  int *piVar6;
  EMat4 *pEVar7;
  ESimsCam *pEVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
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
  float fVar12;
  float fVar13;
  float fVar14;
  EVec3 vPelvis;
  float _range [2];
  EMat4 EStack_f0;
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
  
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
  if (this->m_iQueueCount < 1) {
    if (*(int *)&this->m_bDrawShadow != 0) {
      if (this->m_plowResShadowModel == (ERModel *)0x0) {
        Select__8ERShaderP3ERCi(this->m_pESimShadow,prc,0);
        (*(code *)prc->__vtable->ZTest)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
        pcVar1 = this->m_pPerson->__vtable;
        piVar6 = (int *)(*(code *)pcVar1->GetPersonImplementation)
                                  ((int)&this->m_pPerson->_vb1187 +
                                   (int)*(short *)&pcVar1->GetControllingObject);
        (**(code **)(*piVar6 + 0x104))((int)piVar6 + (int)*(short *)(*piVar6 + 0x100),1,&vPelvis);
                    /* inlined from /eor/src2/engine/e_dl.h */
        pEVar7 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
        Id__5EMat4(pEVar7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        (pEVar7->field0_0x0).d[3][0] = vPelvis.field0_0x0.d[0];
                    /* end of inlined section */
        (pEVar7->field0_0x0).d[3][2] = 0.01;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        (pEVar7->field0_0x0).d[3][1] = vPelvis.field0_0x0.d[1];
                    /* end of inlined section */
        (*(code *)prc->__vtable->SetMipMap)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar7);
        Rect__10EPrimitiveP3ERCff(prc,1.0,1.0);
      }
      else {
                    /* inlined from /eor/src2/engine/e_rc.h */
        pEVar7 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
        vPelvis.field0_0x0.d[2] = 0.0;
        vPelvis.field0_0x0.d[1] = 1.0;
        vPelvis.field0_0x0.d[0] = 1.0;
        Scale__5EMat4RC5EVec3(pEVar7,&vPelvis);
        vPelvis.field0_0x0.d[0] = 0.0;
        vPelvis.field0_0x0.d[2] = 0.03;
        vPelvis.field0_0x0.d[1] = 0.0;
        PostTranslate__5EMat4RC5EVec3(pEVar7,&vPelvis);
        this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
        __as__5EMat4RC5EMat4(this_00,&(_7EWindow_m_pCurrentPortalWindow->field0_0x0).m_mLookAt);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
        paafVar5 = __opRA3_A3_f__5EMat4(&EStack_f0);
        sceVu0MulMatrix(paafVar5,this_00,pEVar7);
        __as__5EMat4RC5EMat4(pEVar7,&EStack_f0);
        __as__5EMat4RC5EMat4((EMat4 *)_range,pEVar7);
                    /* end of inlined section */
        (*(code *)prc->__vtable->RenderSurface)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->AlphaTest,pEVar7);
        Draw__7ERModelP3ERCUi(this->m_plowResShadowModel,prc,6);
        (*(code *)prc->__vtable->RenderSurface)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->AlphaTest,this_00);
      }
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
    bVar4 = false;
    if ((_globals._pCurCam)->m_mode == 3) {
      bVar4 = _globals._pSelectedSims[0] == this->m_pPerson;
    }
                    /* end of inlined section */
                    /* end of inlined section */
    if ((!bVar4) &&
       (((this->m_pPlumBob != (ERModel *)0x0 && (_globals._pSelectedSims[0] == this->m_pPerson)) ||
        (_globals._pSelectedSims[1] == this->m_pPerson)))) {
      pEVar8 = GetCam__7EGlobal(&_globals);
      pcVar1 = this->m_pPerson->__vtable;
      piVar6 = (int *)(*(code *)pcVar1->GetPersonImplementation)
                                ((int)&this->m_pPerson->_vb1187 +
                                 (int)*(short *)&pcVar1->GetControllingObject);
      (**(code **)(*piVar6 + 0x104))((int)piVar6 + (int)*(short *)(*piVar6 + 0x100),0x11,&vPelvis);
                    /* inlined from /eor/src2/engine/e_dl.h */
      pEVar7 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
      Id__5EMat4(pEVar7);
      if (__tmp_0_4939 == 0) {
                    /* end of inlined section */
                    /* end of inlined section */
        iVar9 = -1;
        do {
          bVar4 = iVar9 != -1;
          iVar9 = iVar9 + -1;
        } while (bVar4);
        __tmp_0_4939 = 1;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
      DAT_003d0ab8 = __pbob__v1.field0_0x0.d[2] * __pbob_ambFactor;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      _range = (float  [2])
               CONCAT44(__pbob__v1.field0_0x0.d[1] * __pbob_ambFactor,
                        __pbob__v1.field0_0x0.d[0] * __pbob_ambFactor);
                    /* end of inlined section */
      _plumbob1Light_4938 = _range;
      DAT_003d0ac0 = CONCAT44(__pbob__v1.field0_0x0.d[1],__pbob__v1.field0_0x0.d[0]);
      DAT_003d0ac8 = __pbob__v1.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar13 = (pEVar8->m_vTarget).field0_0x0.d[0] - (pEVar8->m_vEye).field0_0x0.d[0];
                    /* end of inlined section */
      DAT_003d0ad8 = vPelvis.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar12 = (pEVar8->m_vTarget).field0_0x0.d[1] - (pEVar8->m_vEye).field0_0x0.d[1];
      _range = (float  [2])CONCAT44(fVar12,fVar13);
                    /* end of inlined section */
      fVar12 = -fVar12;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      DAT_003d0ad0 = CONCAT44(fVar13,fVar12);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar12 = sqrtf(fVar12 * fVar12 + fVar13 * fVar13 +
                     vPelvis.field0_0x0.d[2] * vPelvis.field0_0x0.d[2]);
      iVar9 = pbobS1_4957;
      if (fVar12 != 0.0) {
        fVar12 = 1.0 / fVar12;
        DAT_003d0ad8 = DAT_003d0ad8 * fVar12;
        DAT_003d0ad0 = CONCAT44(DAT_003d0ad0._4_4_ * fVar12,(float)DAT_003d0ad0 * fVar12);
      }
                    /* end of inlined section */
      if (__tmp_1_4953 == 0) {
                    /* end of inlined section */
                    /* end of inlined section */
        iVar10 = -1;
        do {
          bVar4 = iVar10 != -1;
          iVar10 = iVar10 + -1;
        } while (bVar4);
        __tmp_1_4953 = 1;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      DAT_003d0ae8 = __pbob__v2.field0_0x0.d[2] * __pbob_ambFactor;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar12 = fpbobTheta_4955 + _dt * 3.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fpbobtime_4954 = fpbobtime_4954 + _dt;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      _range = (float  [2])
               CONCAT44(__pbob__v2.field0_0x0.d[1] * __pbob_ambFactor,
                        __pbob__v2.field0_0x0.d[0] * __pbob_ambFactor);
                    /* end of inlined section */
      fpbobTheta_4955 = 0.0;
      _plumbob2Light_4952 = _range;
      DAT_003d0af0 = CONCAT44(__pbob__v2.field0_0x0.d[1],__pbob__v2.field0_0x0.d[0]);
      DAT_003d0af8 = __pbob__v2.field0_0x0.d[2];
      DAT_003d0b00 = DAT_003d0ad0;
      DAT_003d0b08 = DAT_003d0ad8;
      if (0.0 <= fVar12) {
        if (fVar12 <= 6.283185) {
          fpbobTheta_4955 = fVar12;
        }
      }
      else {
        fpbobTheta_4955 = 6.283185;
      }
      uVar2 = (int)_range + 7U & 7;
      puVar3 = (ulong *)(((int)_range + 7U) - uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003ac8b8 >> (7 - uVar2) * 8;
      _range = DAT_003ac8b8;
      if (_pi_burp_dur + _pi_burp_dur < fpbobtime_4954) {
        pbobS1_4957 = pbobS0_4956;
        pbobS0_4956 = iVar9;
        fpbobtime_4954 = 0.0;
      }
      fVar12 = (fpbobtime_4954 * 0.5) / _pi_burp_dur;
                    /* inlined from /eor/src2/common/math/e_math.h */
      fVar14 = _range[pbobS0_4956];
      fVar13 = _range[pbobS1_4957];
                    /* end of inlined section */
      RotateZ__5EMat4f(pEVar7,fpbobTheta_4955);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      (pEVar7->field0_0x0).d[3][0] = vPelvis.field0_0x0.d[0];
      (pEVar7->field0_0x0).d[3][1] = vPelvis.field0_0x0.d[1];
      (pEVar7->field0_0x0).d[3][2] = vPelvis.field0_0x0.d[2];
                    /* end of inlined section */
      (pEVar7->field0_0x0).d[3][2] =
           (pEVar7->field0_0x0).d[3][2] + fVar14 + fVar12 * (fVar13 - fVar14) + 1.0;
      PreScale__5EMat4f(pEVar7,this->m_pPlumBob->m_scaler);
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
      if (_globals._pSelectedSims[0] == this->m_pPerson) {
        puVar11 = (undefined8 *)_plumbob1Light_4938;
      }
      else {
        puVar11 = (undefined8 *)_plumbob2Light_4952;
      }
      (*(code *)prc->__vtable[1].LineList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,puVar11,1);
      (*(code *)prc->__vtable->SetMipMap)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar7);
      Draw__7ERModelP3ERCUi(this->m_pPlumBob,prc,6);
      (*(code *)prc->__vtable[1].LineList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,_globals._pCurLights,
                 _globals._nCurLights);
    }
  }
  return;
}

void ESim::SimOrderTableCallback(ERC *prc, u32 param1, u32 param2) {
	u32 renderFlags;
	EMat4 mOrient;
	bool infp;
	ESimsCam *this;
	
  bool bVar1;
  ERC__vtable *pEVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ERModel *this;
  int iVar6;
  uint renderFlags;
  EMat4 mOrient;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
  if (*(int *)(param1 + 0x204) == 0) {
                    /* end of inlined section */
    GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)param1,&mOrient);
    Compute__15EAnimControllerRC5EMat4((EAnimController *)(param1 + 0x14c),&mOrient);
                    /* inlined from /eor/src2/engine/e_rptr.h */
                    /* end of inlined section */
    CopyMatrices__7ERModelP3ERCP5EMat4i
              (prc,*(EMat4 **)(param1 + 0x14c),*(int *)(*(int *)(param1 + 0x154) + 0x18));
  }
  else if (*(int *)(param1 + 0x1cc) == 1) {
    CalulateAnimation__17EVanityMirrorMenuP3ERC(_globals._pVanityMirror,prc);
  }
  else {
    CalulateAnimation__13EWardrobeMenuP3ERC(_globals._pWardrobe,prc);
  }
  if (_globals._pPanel == (EPanel *)0x0) {
    iVar3 = *(int *)(param1 + 0x1b0);
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
                    /* end of inlined section */
    if ((_globals._pPanel)->m_panleState + ~LIVE_SIM_EDIT < 2) {
      (*(code *)prc->__vtable[1].LineList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,_globals._pCurLights,
                 _globals._nCurLights);
      iVar3 = *(int *)(param1 + 0x2b4);
      goto LAB_0014db98;
    }
    iVar3 = *(int *)(param1 + 0x1b0);
  }
                    /* end of inlined section */
  lVar5 = (**(code **)(*(int *)(iVar3 + 4) + 0x19c))
                    (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x198));
  if (lVar5 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
    iVar3 = *(int *)(*(int *)(param1 + 0x1b0) + 4);
    lVar5 = (**(code **)(iVar3 + 0x18c))(*(int *)(param1 + 0x1b0) + (int)*(short *)(iVar3 + 0x188));
    if (lVar5 == 0) {
      iVar3 = *(int *)(param1 + 0x2b4);
      goto LAB_0014db98;
    }
    pEVar2 = prc->__vtable;
  }
  else {
    pEVar2 = prc->__vtable;
  }
  (*(code *)pEVar2[1].LineList)
            ((int)&prc->m_pdl + (int)*(short *)&pEVar2[1].QuadList,
             *(undefined4 *)(*(int *)(param1 + 0x128) + 0x18),
             *(undefined4 *)(*(int *)(param1 + 0x128) + 0x1c));
  iVar3 = *(int *)(param1 + 0x2b4);
LAB_0014db98:
  renderFlags = 6;
  if (iVar3 == 0) {
    renderFlags = 2;
    iVar3 = *(int *)(*(int *)(param1 + 0x214) + 0x8c);
    (**(code **)(iVar3 + 0x14))(*(int *)(param1 + 0x214) + (int)*(short *)(iVar3 + 0x10),prc,0);
    iVar3 = *(int *)(param1 + 0x2d8);
  }
  else {
    iVar3 = *(int *)(param1 + 0x2d8);
  }
  if (iVar3 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
    bVar1 = false;
    if ((_globals._pCurCam)->m_mode == 3) {
      bVar1 = _globals._pSelectedSims[0] == *(cXPerson__150_1300 **)(param1 + 0x1b0);
    }
    if (bVar1) {
      this = *(ERModel **)(param1 + 0x1c0);
    }
    else if (*(int *)(param1 + 0x2b0) == 0) {
      Draw__7ERModelP3ERCUi(*(ERModel **)(param1 + 0x1bc),prc,renderFlags);
      Draw__7ERModelP3ERCUi(*(ERModel **)(param1 + 0x1b8),prc,renderFlags);
      this = *(ERModel **)(param1 + 0x1c0);
    }
    else {
      this = *(ERModel **)(param1 + 0x1c0);
    }
    if (this != (ERModel *)0x0) {
      Draw__7ERModelP3ERCUi(this,prc,renderFlags);
    }
    if (*(ERModel **)(param1 + 0x1c4) != (ERModel *)0x0) {
      Draw__7ERModelP3ERCUi(*(ERModel **)(param1 + 0x1c4),prc,renderFlags);
    }
    if (*(ERModel **)(param1 + 0x1c8) != (ERModel *)0x0) {
      Draw__7ERModelP3ERCUi(*(ERModel **)(param1 + 0x1c8),prc,renderFlags);
    }
    if (*(ERModel **)(param1 + 0x1b4) != (ERModel *)0x0) {
      Draw__7ERModelP3ERCUi(*(ERModel **)(param1 + 0x1b4),prc,6);
    }
    iVar3 = *(int *)(param1 + 0x2b0);
  }
  else {
    iVar3 = *(int *)(param1 + 0x2b0);
  }
  iVar6 = *(int *)(param1 + 0x1b0);
  if (iVar3 == 0) {
    piVar4 = (int *)(**(code **)(*(int *)(iVar6 + 4) + 0x124))
                              (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x120));
    (**(code **)(*piVar4 + 0xf4))((int)piVar4 + (int)*(short *)(*piVar4 + 0xf0),prc,0);
    iVar6 = *(int *)(param1 + 0x1b0);
  }
  piVar4 = (int *)(**(code **)(*(int *)(iVar6 + 4) + 0x124))
                            (iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x120));
  (**(code **)(*piVar4 + 0xfc))((int)piVar4 + (int)*(short *)(*piVar4 + 0xf8),prc);
  DrawShadowAndPlumBob__4ESimP3ERC((ESim *)param1,prc);
  return;
}

void ESim::NpcOrderTableCallback(ERC *prc, u32 param1, u32 param2) {
	EMat4 mOrient;
	
  int iVar1;
  int *piVar2;
  EMat4 mOrient;
  
  GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)param1,&mOrient);
  Draw__15EAnimControllerP3ERCP7ERModelRC5EMat4Ui
            ((EAnimController *)(param1 + 0x14c),prc,*(ERModel **)(param1 + 300),&mOrient,
             *(uint *)(*(int *)(param1 + 0x128) + 8) | 2);
  iVar1 = *(int *)(*(int *)(param1 + 0x1b0) + 4);
  piVar2 = (int *)(**(code **)(iVar1 + 0x124))
                            (*(int *)(param1 + 0x1b0) + (int)*(short *)(iVar1 + 0x120));
  (**(code **)(*piVar2 + 0xf4))((int)piVar2 + (int)*(short *)(*piVar2 + 0xf0),prc,0);
  DrawShadowAndPlumBob__4ESimP3ERC((ESim *)param1,prc);
  return;
}

static __Q39EInstance38CalcLights3__4ESimRC5EVec3R8ELights3.0_12EBrightLight.4967() {}

EBrightLight* EInstance::CalcLights3__4ESimRC5EVec3R8ELights3.0::EBrightLight::EBrightLight() {
  return param_1;
}

void ESim::CalcLights3(EVec3 &vPos, ELights3 &lights3Out) {
	Room *room;
	bool useSun;
	u32 flags;
	EVec3 vTotalDir;
	EVec3 vTotalColor;
	float totalColorMag;
	EBrightLight b[2];
	int nBrightest;
	OTIterator oti;
	EInstance *this;
	EInstance *pInstance;
	u32 typeFlags;
	EILight *pLight;
	bool skipLight;
	OTIterator i;
	RBIterator i;
	RBIterator i;
	EHouse *this;
	EVec3 vColor;
	EVec3 vDir;
	float dirMag;
	float colorMag;
	float scaler;
	int pos;
	EInstance *pInstance;
	u32 typeFlags;
	int cb;
	float directionality;
	float ambient;
	float scaler;
	float scaler;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  short sVar4;
  RoomManager__vtable *pRVar5;
  cXObject__150_1187 *pcVar6;
  cXObject__150_1187__vtable *pcVar7;
  ulong *puVar8;
  bool bVar9;
  RoomManager__vtable **ppRVar10;
  EVec3 *pEVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  EIPointLight *pEVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  EBrightLight *pEVar21;
  EStorable *this_00;
  ulong in_a3;
  uint uVar22;
  EOTData *otd;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  EVec3 vTotalDir;
  EVec3 vTotalColor;
  float local_134;
  EBrightLight b [2];
  EVec3 vColor;
  EVec3 vDir;
  
  bVar9 = false;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pRVar5 = _5Globs_pRoomManager->__vtable;
  pcVar6 = this->m_pPerson->_vb1187;
  sVar4 = *(short *)&pRVar5->GetHouse;
  pcVar7 = pcVar6->__vtable;
  ppRVar10 = &_5Globs_pRoomManager->__vtable;
  uVar17 = (*(code *)pcVar7[1].ParseUIString)
                     ((int)&pcVar6->_vb1121 + (int)*(short *)&pcVar7[1].RunTree);
  lVar18 = (*(code *)pRVar5->ClearRoomPartitions)((int)ppRVar10 + (int)sVar4,uVar17);
  if (lVar18 != 0) {
    iVar20 = *(int *)lVar18;
    lVar18 = (**(code **)(iVar20 + 100))((int)(int *)lVar18 + (int)*(short *)(iVar20 + 0x60));
    bVar9 = lVar18 != 0;
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
  }
                    /* end of inlined section */
  vTotalDir.field0_0x0.d[2] = 0.0;
  otd = &(this->field0_0x0).field0_0x0.field0_0x0.m_otd;
                    /* inlined from /eor/src2/engine/instance/e_instance.h */
  vTotalDir.field0_0x0.d[1] = 0.0;
  vTotalDir.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
  uVar22 = (this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_receiveFlags & 0x18;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vTotalColor.field0_0x0.d[2] = 0.0;
  vTotalColor.field0_0x0.d[1] = 0.0;
  vTotalColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
  fVar27 = 0.0;
                    /* end of inlined section */
  iVar20 = 0;
  do {
    bVar2 = iVar20 != -1;
    iVar20 = iVar20 + -1;
  } while (bVar2);
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
  uVar16 = 0;
  puVar14 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi
                      ((undefined1 *)
                       (this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_overlaps.field0_0x0.m_list.
                       m_pHead,otd,uVar22);
                    /* end of inlined section */
  if (puVar14 != (undefined1 *)0x0) {
    fVar24 = 3.141593;
                    /* end of inlined section */
    this_00 = *(EStorable **)(puVar14 + 0x18);
    while( true ) {
      pEVar15 = (EIPointLight *)DynamicCast__9EStorableP9ETypeInfo(this_00,&_7EILight_m_typeInfo);
      bVar2 = false;
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
      if ((!bVar9) && (bVar2 = true, pEVar15 != (_globals._pCurHouse)->m_pSun)) {
        bVar2 = false;
      }
      if (pEVar15 == (EIPointLight *)0x0) {
        puVar14 = *(undefined1 **)(puVar14 + 0x10);
      }
      else if (bVar2) {
        puVar14 = *(undefined1 **)(puVar14 + 0x10);
      }
      else {
                    /* end of inlined section */
        in_a3 = (ulong)(int)&vDir;
        fVar26 = 0.0;
        (*(code *)(pEVar15->field0_0x0).field0_0x0.field0_0x0.__vtable[5].EStorable)();
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar25 = sqrtf(vDir.field0_0x0.d[0] * vDir.field0_0x0.d[0] +
                       vDir.field0_0x0.d[1] * vDir.field0_0x0.d[1] +
                       vDir.field0_0x0.d[2] * vDir.field0_0x0.d[2]);
                    /* end of inlined section */
        if (fVar25 == fVar26) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vColor.field0_0x0.d[0] = vColor.field0_0x0.d[0] * fVar24;
          vColor.field0_0x0.d[1] = vColor.field0_0x0.d[1] * fVar24;
          vColor.field0_0x0.d[2] = vColor.field0_0x0.d[2] * fVar24;
        }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar23 = sqrtf(vColor.field0_0x0.d[0] * vColor.field0_0x0.d[0] +
                       vColor.field0_0x0.d[1] * vColor.field0_0x0.d[1] +
                       vColor.field0_0x0.d[2] * vColor.field0_0x0.d[2]);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vTotalDir.field0_0x0.d[0] = vTotalDir.field0_0x0.d[0] + vDir.field0_0x0.d[0] * fVar23;
        vTotalDir.field0_0x0.d[1] = vTotalDir.field0_0x0.d[1] + vDir.field0_0x0.d[1] * fVar23;
        vTotalDir.field0_0x0.d[2] = vTotalDir.field0_0x0.d[2] + vDir.field0_0x0.d[2] * fVar23;
                    /* end of inlined section */
        fVar27 = fVar27 + fVar23;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vTotalColor.field0_0x0.d[0] = vTotalColor.field0_0x0.d[0] + vColor.field0_0x0.d[0];
        vTotalColor.field0_0x0.d[1] = vTotalColor.field0_0x0.d[1] + vColor.field0_0x0.d[1];
        vTotalColor.field0_0x0.d[2] = vTotalColor.field0_0x0.d[2] + vColor.field0_0x0.d[2];
                    /* end of inlined section */
        if (fVar25 != fVar26) {
          lVar18 = -1;
          if (uVar16 == 1) {
            lVar18 = 0;
            if (b[0].colorMag < fVar23) {
              b[1]._8_8_ = CONCAT44(b[0].vDir.field0_0x0._0_4_,b[0].vColor.field0_0x0._8_4_);
              b[1].vDir.field0_0x0._4_8_ =
                   CONCAT44(b[0].vDir.field0_0x0._8_4_,b[0].vDir.field0_0x0._4_4_);
              in_a3 = CONCAT44(b[0].colorMag,b[0].dirMag);
              puVar1 = (undefined *)((int)&b[1].vColor.field0_0x0 + 7);
              uVar16 = (uint)puVar1 & 7;
              puVar8 = (ulong *)(puVar1 + -uVar16);
              *puVar8 = *puVar8 & -1L << (uVar16 + 1) * 8 |
                        b[0].vColor.field0_0x0._0_8_ >> (7 - uVar16) * 8;
              b[1].vColor.field0_0x0._0_8_ = b[0].vColor.field0_0x0._0_8_;
              puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 3);
              uVar16 = (uint)puVar1 & 7;
              puVar8 = (ulong *)(puVar1 + -uVar16);
              *puVar8 = *puVar8 & -1L << (uVar16 + 1) * 8 | b[1]._8_8_ >> (7 - uVar16) * 8;
              puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 0xb);
              uVar16 = (uint)puVar1 & 7;
              puVar8 = (ulong *)(puVar1 + -uVar16);
              *puVar8 = *puVar8 & -1L << (uVar16 + 1) * 8 |
                        b[1].vDir.field0_0x0._4_8_ >> (7 - uVar16) * 8;
              puVar1 = (undefined *)((int)&b[1].colorMag + 3);
              uVar16 = (uint)puVar1 & 7;
              puVar8 = (ulong *)(puVar1 + -uVar16);
              *puVar8 = *puVar8 & -1L << (uVar16 + 1) * 8 | in_a3 >> (7 - uVar16) * 8;
              uVar16 = 2;
              b[1]._24_8_ = in_a3;
            }
            else {
              lVar18 = 1;
              uVar16 = 2;
            }
          }
          else if (uVar16 < 2) {
            if (uVar16 == 0) {
              lVar18 = 0;
              uVar16 = 1;
            }
          }
          else if ((uVar16 == 2) && (b[1].colorMag < fVar23)) {
            lVar18 = 0;
            if (b[0].colorMag < fVar23) {
              b[1]._8_8_ = CONCAT44(b[0].vDir.field0_0x0._0_4_,b[0].vColor.field0_0x0._8_4_);
              b[1].vDir.field0_0x0._4_8_ =
                   CONCAT44(b[0].vDir.field0_0x0._8_4_,b[0].vDir.field0_0x0._4_4_);
              b[1]._24_8_ = CONCAT44(b[0].colorMag,b[0].dirMag);
              puVar1 = (undefined *)((int)&b[1].vColor.field0_0x0 + 7);
              uVar3 = (uint)puVar1 & 7;
              puVar8 = (ulong *)(puVar1 + -uVar3);
              *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 |
                        b[0].vColor.field0_0x0._0_8_ >> (7 - uVar3) * 8;
              b[1].vColor.field0_0x0._0_8_ = b[0].vColor.field0_0x0._0_8_;
              puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 3);
              uVar3 = (uint)puVar1 & 7;
              puVar8 = (ulong *)(puVar1 + -uVar3);
              *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | b[1]._8_8_ >> (7 - uVar3) * 8;
              puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 0xb);
              uVar3 = (uint)puVar1 & 7;
              puVar8 = (ulong *)(puVar1 + -uVar3);
              *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 |
                        b[1].vDir.field0_0x0._4_8_ >> (7 - uVar3) * 8;
              puVar1 = (undefined *)((int)&b[1].colorMag + 3);
              uVar3 = (uint)puVar1 & 7;
              puVar8 = (ulong *)(puVar1 + -uVar3);
              *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | b[1]._24_8_ >> (7 - uVar3) * 8;
            }
            else {
              lVar18 = 1;
            }
          }
          uVar12 = vColor.field0_0x0.d[2];
          iVar20 = (int)lVar18;
          if (lVar18 != -1) {
            uVar19 = CONCAT44(vColor.field0_0x0.d[1],vColor.field0_0x0.d[0]);
            puVar1 = (undefined *)((int)&b[iVar20].vColor.field0_0x0 + 7);
            uVar3 = (uint)puVar1 & 7;
            puVar8 = (ulong *)(puVar1 + -uVar3);
            *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | uVar19 >> (7 - uVar3) * 8;
            *(ulong *)&b[iVar20].vColor.field0_0x0 = uVar19;
            uVar13 = vDir.field0_0x0.d[2];
            b[iVar20].vColor.field0_0x0.d[2] = uVar12;
            uVar19 = CONCAT44(vDir.field0_0x0.d[1],vDir.field0_0x0.d[0]);
            in_a3 = (ulong)(int)vDir.field0_0x0.d[2];
            puVar1 = (undefined *)((int)&b[iVar20].vDir.field0_0x0 + 7);
            uVar3 = (uint)puVar1 & 7;
            puVar8 = (ulong *)(puVar1 + -uVar3);
            *puVar8 = *puVar8 & -1L << (uVar3 + 1) * 8 | uVar19 >> (7 - uVar3) * 8;
            uVar3 = (uint)&b[iVar20].vDir & 7;
            puVar8 = (ulong *)((int)&b[iVar20].vDir - uVar3);
            *puVar8 = uVar19 << uVar3 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            b[iVar20].vDir.field0_0x0.d[2] = uVar13;
            b[iVar20].colorMag = fVar23;
            b[iVar20].dirMag = fVar25;
          }
        }
                    /* inlined from /eor/src2/engine/collision/e_overlaptracker.h */
        puVar14 = *(undefined1 **)(puVar14 + 0x10);
      }
      puVar14 = GetOverlap__15EOverlapTrackerP17RBIteratorPtrTypeR7EOTDataUi(puVar14,otd,uVar22);
                    /* end of inlined section */
      if (puVar14 == (undefined1 *)0x0) break;
      this_00 = *(EStorable **)(puVar14 + 0x18);
    }
  }
  if (uVar16 == 0) {
    puVar1 = (undefined *)((int)&lights3Out->d[0].vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 | 0UL >> (7 - uVar22) * 8;
    uVar22 = (uint)lights3Out->d & 7;
    puVar8 = (ulong *)((int)lights3Out->d - uVar22);
    *puVar8 = 0L << uVar22 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    lights3Out->d[0].vColor.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&lights3Out->d[0].vDir.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 | 0UL >> (7 - uVar22) * 8;
    pEVar11 = &lights3Out->d[0].vDir;
    uVar22 = (uint)pEVar11 & 7;
    puVar8 = (ulong *)((int)pEVar11 - uVar22);
    *puVar8 = 0L << uVar22 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    lights3Out->d[0].vDir.field0_0x0.d[2] = 0.0;
  }
  else {
    puVar1 = (undefined *)((int)&lights3Out->d[0].vColor.field0_0x0 + 7);
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 | b[0].vColor.field0_0x0._0_8_ >> (7 - uVar22) * 8;
    uVar22 = (uint)lights3Out->d & 7;
    puVar8 = (ulong *)((int)lights3Out->d - uVar22);
    *puVar8 = b[0].vColor.field0_0x0._0_8_ << uVar22 * 8 |
              *puVar8 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    lights3Out->d[0].vColor.field0_0x0.d[2] = b[0].vColor.field0_0x0._8_4_;
    puVar1 = (undefined *)((int)&b[0].vDir.field0_0x0 + 7);
    uVar22 = (uint)puVar1 & 7;
    uVar3 = (uint)&b[0].vDir & 7;
    uVar19 = (*(long *)(puVar1 + -uVar22) << (7 - uVar22) * 8 |
             in_a3 & 0xffffffffffffffffU >> (uVar22 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&b[0].vDir - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&lights3Out->d[0].vDir.field0_0x0 + 7);
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 | uVar19 >> (7 - uVar22) * 8;
    pEVar11 = &lights3Out->d[0].vDir;
    uVar22 = (uint)pEVar11 & 7;
    puVar8 = (ulong *)((int)pEVar11 - uVar22);
    *puVar8 = uVar19 << uVar22 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    lights3Out->d[0].vDir.field0_0x0.d[2] = b[0].vDir.field0_0x0._8_4_;
  }
  if (uVar16 < 2) {
    puVar1 = (undefined *)((int)&lights3Out->d[1].vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 | 0UL >> (7 - uVar22) * 8;
    uVar22 = (uint)(lights3Out->d + 1) & 7;
    puVar8 = (ulong *)((int)(lights3Out->d + 1) - uVar22);
    *puVar8 = 0L << uVar22 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    lights3Out->d[1].vColor.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&lights3Out->d[1].vDir.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 | 0UL >> (7 - uVar22) * 8;
    pEVar11 = &lights3Out->d[1].vDir;
    uVar22 = (uint)pEVar11 & 7;
    puVar8 = (ulong *)((int)pEVar11 - uVar22);
    *puVar8 = 0L << uVar22 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    lights3Out->d[1].vDir.field0_0x0.d[2] = 0.0;
  }
  else {
    puVar1 = (undefined *)((int)&lights3Out->d[1].vColor.field0_0x0 + 7);
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 | b[1].vColor.field0_0x0._0_8_ >> (7 - uVar22) * 8;
    uVar22 = (uint)(lights3Out->d + 1) & 7;
    puVar8 = (ulong *)((int)(lights3Out->d + 1) - uVar22);
    *puVar8 = b[1].vColor.field0_0x0._0_8_ << uVar22 * 8 |
              *puVar8 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    lights3Out->d[1].vColor.field0_0x0.d[2] = b[1].vColor.field0_0x0._8_4_;
    puVar1 = (undefined *)((int)&b[1].vDir.field0_0x0 + 7);
    uVar22 = (uint)puVar1 & 7;
    uVar3 = (uint)&b[1].vDir & 7;
    uVar19 = *(long *)(puVar1 + -uVar22) << (7 - uVar22) * 8 & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&b[1].vDir - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&lights3Out->d[1].vDir.field0_0x0 + 7);
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 | uVar19 >> (7 - uVar22) * 8;
    pEVar11 = &lights3Out->d[1].vDir;
    uVar22 = (uint)pEVar11 & 7;
    puVar8 = (ulong *)((int)pEVar11 - uVar22);
    *puVar8 = uVar19 << uVar22 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    lights3Out->d[1].vDir.field0_0x0.d[2] = b[1].vDir.field0_0x0._8_4_;
  }
  if (uVar16 != 0) {
    pEVar21 = b;
    do {
      fVar24 = pEVar21->colorMag;
      uVar16 = uVar16 - 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar27 = fVar27 - fVar24;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vTotalDir.field0_0x0.d[0] =
           vTotalDir.field0_0x0.d[0] - (pEVar21->vDir).field0_0x0.d[0] * fVar24;
      vTotalDir.field0_0x0.d[1] =
           vTotalDir.field0_0x0.d[1] - (pEVar21->vDir).field0_0x0.d[1] * fVar24;
      vTotalDir.field0_0x0.d[2] =
           vTotalDir.field0_0x0.d[2] - (pEVar21->vDir).field0_0x0.d[2] * fVar24;
      vTotalColor.field0_0x0.d[0] = vTotalColor.field0_0x0.d[0] - (pEVar21->vColor).field0_0x0.d[0];
      vTotalColor.field0_0x0.d[1] = vTotalColor.field0_0x0.d[1] - (pEVar21->vColor).field0_0x0.d[1];
      pEVar11 = &pEVar21->vColor;
                    /* end of inlined section */
      pEVar21 = pEVar21 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vTotalColor.field0_0x0.d[2] = vTotalColor.field0_0x0.d[2] - (pEVar11->field0_0x0).d[2];
                    /* end of inlined section */
    } while (uVar16 != 0);
  }
  if (fVar27 == 0.0) {
    puVar1 = (undefined *)((int)&lights3Out->d[2].vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 | 0UL >> (7 - uVar22) * 8;
    uVar22 = (uint)(lights3Out->d + 2) & 7;
    puVar8 = (ulong *)((int)(lights3Out->d + 2) - uVar22);
    *puVar8 = 0L << uVar22 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    lights3Out->d[2].vColor.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&lights3Out->d[2].vDir.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 | 0UL >> (7 - uVar22) * 8;
    pEVar11 = &lights3Out->d[2].vDir;
    uVar22 = (uint)pEVar11 & 7;
    puVar8 = (ulong *)((int)pEVar11 - uVar22);
    *puVar8 = 0L << uVar22 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    lights3Out->d[2].vDir.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&(lights3Out->field0_0x0).a.vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 | 0UL >> (7 - uVar22) * 8;
    uVar22 = (uint)lights3Out & 7;
    *(ulong *)((int)lights3Out - uVar22) =
         0L << uVar22 * 8 |
         *(ulong *)((int)lights3Out - uVar22) & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    (lights3Out->field0_0x0).a.vColor.field0_0x0.d[2] = 0.0;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar24 = sqrtf(vTotalDir.field0_0x0.d[0] * vTotalDir.field0_0x0.d[0] +
                   vTotalDir.field0_0x0.d[1] * vTotalDir.field0_0x0.d[1] +
                   vTotalDir.field0_0x0.d[2] * vTotalDir.field0_0x0.d[2]);
                    /* end of inlined section */
    fVar24 = fVar24 / fVar27;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar19 = CONCAT44(vTotalColor.field0_0x0.d[1] * fVar24,vTotalColor.field0_0x0.d[0] * fVar24);
    puVar1 = (undefined *)((int)&lights3Out->d[2].vColor.field0_0x0 + 7);
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 | uVar19 >> (7 - uVar22) * 8;
    uVar22 = (uint)(lights3Out->d + 2) & 7;
    puVar8 = (ulong *)((int)(lights3Out->d + 2) - uVar22);
    *puVar8 = uVar19 << uVar22 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    lights3Out->d[2].vColor.field0_0x0.d[2] = vTotalColor.field0_0x0.d[2] * fVar24;
    puVar1 = (undefined *)((int)&lights3Out->d[2].vDir.field0_0x0 + 7);
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 |
              CONCAT44(vTotalDir.field0_0x0.d[1],vTotalDir.field0_0x0.d[0]) >> (7 - uVar22) * 8;
    pEVar11 = &lights3Out->d[2].vDir;
    uVar22 = (uint)pEVar11 & 7;
    puVar8 = (ulong *)((int)pEVar11 - uVar22);
    *puVar8 = CONCAT44(vTotalDir.field0_0x0.d[1],vTotalDir.field0_0x0.d[0]) << uVar22 * 8 |
              *puVar8 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    lights3Out->d[2].vDir.field0_0x0.d[2] = vTotalDir.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar25 = lights3Out->d[2].vDir.field0_0x0.d[0];
    fVar27 = lights3Out->d[2].vDir.field0_0x0.d[1];
    fVar26 = lights3Out->d[2].vDir.field0_0x0.d[2];
    fVar27 = sqrtf(fVar25 * fVar25 + fVar27 * fVar27 + fVar26 * fVar26);
    if (fVar27 != 0.0) {
      fVar27 = 1.0 / fVar27;
      lights3Out->d[2].vDir.field0_0x0.d[0] = lights3Out->d[2].vDir.field0_0x0.d[0] * fVar27;
      fVar25 = lights3Out->d[2].vDir.field0_0x0.d[2];
      lights3Out->d[2].vDir.field0_0x0.d[1] = lights3Out->d[2].vDir.field0_0x0.d[1] * fVar27;
      lights3Out->d[2].vDir.field0_0x0.d[2] = fVar25 * fVar27;
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar24 = 1.0 - fVar24;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar19 = CONCAT44(vTotalColor.field0_0x0.d[1] * fVar24 * 0.3183099,
                      vTotalColor.field0_0x0.d[0] * fVar24 * 0.3183099);
    puVar1 = (undefined *)((int)&(lights3Out->field0_0x0).a.vColor.field0_0x0 + 7);
    uVar22 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar22);
    *puVar8 = *puVar8 & -1L << (uVar22 + 1) * 8 | uVar19 >> (7 - uVar22) * 8;
    uVar22 = (uint)lights3Out & 7;
    *(ulong *)((int)lights3Out - uVar22) =
         uVar19 << uVar22 * 8 |
         *(ulong *)((int)lights3Out - uVar22) & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    (lights3Out->field0_0x0).a.vColor.field0_0x0.d[2] =
         vTotalColor.field0_0x0.d[2] * fVar24 * 0.3183099;
  }
  return;
}

void ESim::DrawCursorHighLight(ERC *prc) {
	ELights *pLights;
	EMat4 mOrient;
	float _range[2];
	float mu;
	ESimsCam *this;
	ESim *this;
	int tmp;
	float u;
	float a;
	float b;
	ERC *this;
	EVec3 *this;
	float x;
	float y;
	float y;
	float x;
	
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  EMat4 *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  ELights *pEVar4;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar5;
  EMat4 mOrient;
  float _range [2];
  float local_a0;
  float local_9c;
  undefined4 local_98;
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
  
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
  if (((_globals._pCurCam)->m_mode != 3) &&
     (_globals._pSelectedSims[_globals.m_renderPass] != this->m_pPerson)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
    if (0 < this->m_iQueueCount) {
      Flush__16ESimsDataManager(&_simsdataman);
    }
    if ((_globals.m_renderPass == 0) && ((this->field0_0x0).m_cursFlags == 1)) {
      pEVar4 = (this->field0_0x0).m_highlight;
    }
    else {
      pEVar4 = (ELights *)(this->m_Models + _globals.m_renderPass * 4 + -9);
      if ((_globals.m_renderPass == 1) && ((this->field0_0x0).m_cursFlags == 8)) {
        pEVar4 = (this->field0_0x0).m_highlight + 1;
      }
    }
    GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,&mOrient);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    fVar5 = this->m_scaletime + _dt;
    uVar2 = (int)_range + 7U & 7;
    puVar3 = (ulong *)(((int)_range + 7U) - uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)_DAT_003ac8c0 >> (7 - uVar2) * 8;
    _range = _DAT_003ac8c0;
    this->m_scaletime = fVar5;
    if (0.4 < fVar5) {
      iVar1 = this->m_ring_S1;
      this->m_ring_S1 = this->m_ring_S0;
      this->m_ring_S0 = iVar1;
      this->m_scaletime = 0.0;
    }
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
    fVar5 = this->m_scaletime * 2.5;
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
    local_a0 = _range[this->m_ring_S0] +
               (fVar5 * -2.0 * fVar5 * fVar5 + fVar5 * 3.0 * fVar5) *
               (_range[this->m_ring_S1] - _range[this->m_ring_S0]);
    this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
    Id__5EMat4(this_00);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    local_98 = 0x3f800000;
    local_9c = local_a0;
    Scale__5EMat4RC5EVec3(this_00,(EVec3 *)&local_a0);
    local_a0 = mOrient.field0_0x0.d[3][0];
    local_9c = mOrient.field0_0x0.d[3][1];
    local_98 = 0x3c23d70a;
    PostTranslate__5EMat4RC5EVec3(this_00,(EVec3 *)&local_a0);
                    /* end of inlined section */
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,this_00);
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,0x35ea40,0);
    Draw__7ERModelP3ERCUi(this->m_pTrackBase,prc,5);
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,pEVar4,0);
    Draw__7ERModelP3ERCUi(this->m_pTrackH,prc,5);
    (*(code *)prc->__vtable[1].LineList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,_globals._pCurLights,
               _globals._nCurLights);
  }
  return;
}

void ESim::Draw(ERC *prc, u32 renderFlags) {
	ELights *pLights;
	int nLights;
	bool player1H;
	bool player2H;
	float Height;
	EHouse *this;
	ERC *this;
	ERC *this;
	float u;
	ESim *this;
	EHouse *this;
	ERC *this;
	ERC *this;
	
  cXObject__150_1187 *pcVar1;
  cXObject__150_1187__vtable *pcVar2;
  ERC__vtable *pEVar3;
  EStorable__vtable *pEVar4;
  bool bVar5;
  EMat4 *mOrientOut;
  int iVar6;
  ELights *pEVar7;
  EOrderTableData *pEVar8;
  long lVar9;
  EDL *this_00;
  int iVar10;
  float fVar11;
  
  if ((renderFlags & 8) != 0) {
    return;
  }
  pcVar1 = this->m_pPerson->_vb1187;
  pcVar2 = pcVar1->__vtable;
  lVar9 = (*(code *)pcVar2->ReconType)
                    ((int)&pcVar1->_vb1121 + (int)*(short *)&pcVar2->ReconStream,0x22);
  if (lVar9 != 0) {
    return;
  }
  pEVar7 = (ELights *)0x0;
  iVar6 = 0;
  iVar10 = 0;
  if (this->m_SkinChangeStage < 0) {
LAB_0014ea64:
    iVar10 = iVar6;
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
    iVar6 = this->m_iQueueCount;
  }
  else if (*(int *)&this->m_bDontDrawCurtain == 0) {
    if (this->m_pShowerCurtain != (ERModel *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
      if ((*(int *)&(this->field0_0x0).field0_0x0.m_dynamiclyLit != 0) &&
         (*(int *)&(_globals._pCurHouse)->m_bShadows != 0)) {
                    /* inlined from /eor/src2/engine/e_rc.h */
        iVar6 = 3;
        pEVar7 = (ELights *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x70,0x10);
                    /* end of inlined section */
        pEVar4 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
        (*(code *)pEVar4[4].GetTypeName)
                  ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
                   (int)*(short *)&pEVar4[4].GetTypeInfo,
                   &(this->field0_0x0).field0_0x0.m_boundSphere,pEVar7);
      }
      pEVar3 = prc->__vtable;
      if (pEVar7 == (ELights *)0x0) {
        (*(code *)pEVar3[1].LineList)
                  ((int)&prc->m_pdl + (int)*(short *)&pEVar3[1].QuadList,_globals._pCurLights,
                   _globals._nCurLights);
                    /* inlined from /eor/src2/engine/e_rc.h */
        this_00 = prc->m_pdl;
      }
      else {
        (*(code *)pEVar3[1].LineList)
                  ((int)&prc->m_pdl + (int)*(short *)&pEVar3[1].QuadList,pEVar7,iVar6);
        this_00 = prc->m_pdl;
      }
      mOrientOut = (EMat4 *)Alloc__11EAllocGroupUii(&this_00->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
      GetOrient__13EIStaticModelR5EMat4((EIStaticModel *)this,mOrientOut);
      PreScale__5EMat4f(mOrientOut,this->m_pShowerCurtain->m_scaler);
                    /* inlined from /eor/src2/common/math/e_math.h */
      fVar11 = this->m_CurtainLevel;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
      fVar11 = fVar11 * -2.0 * fVar11 * fVar11 + fVar11 * 3.0 * fVar11;
                    /* end of inlined section */
      (mOrientOut->field0_0x0).d[3][2] =
           (mOrientOut->field0_0x0).d[3][2] + ((fVar11 + fVar11) - 2.0);
      (*(code *)prc->__vtable->SetMipMap)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,mOrientOut);
      Draw__7ERModelP3ERCUi(this->m_pShowerCurtain,prc,5);
      (*(code *)prc->__vtable[1].LineList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].QuadList,_globals._pCurLights,
                 _globals._nCurLights);
      goto LAB_0014ea64;
    }
    iVar6 = this->m_iQueueCount;
  }
  else {
    iVar6 = this->m_iQueueCount;
  }
                    /* end of inlined section */
  if (0 < iVar6) {
    *(undefined4 *)&this->m_bSkipDrawNextFrame = 0;
    return;
  }
  if (*(int *)&this->m_bSkipDrawNextFrame == 1) {
    *(undefined4 *)&this->m_bSkipDrawNextFrame = 0;
    return;
  }
  if (*(int *)&this->m_bDontDrawSim == 1) {
    *(undefined4 *)&this->m_bSkipDrawNextFrame = 0;
    return;
  }
  lVar9 = (**(code **)&this->m_pPerson->__vtable->field_0x18c)();
  if (lVar9 == 0) {
    lVar9 = (**(code **)&this->m_pPerson->__vtable->field_0x19c)();
    if (lVar9 == 0) {
      if (*(int *)&(this->field0_0x0).field0_0x0.m_dynamiclyLit != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
        if (*(int *)&(_globals._pCurHouse)->m_bShadows == 0) {
          pEVar8 = (this->field0_0x0).field0_0x0.m_otds;
          goto LAB_0014eba8;
        }
        if (pEVar7 != (ELights *)0x0) {
                    /* inlined from /eor/src2/engine/e_rc.h */
          Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x70,0x10);
                    /* end of inlined section */
          pEVar8 = (this->field0_0x0).field0_0x0.m_otds;
          goto LAB_0014eba8;
        }
        iVar10 = 3;
                    /* inlined from /eor/src2/engine/e_rc.h */
        pEVar7 = (ELights *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x70,0x10);
                    /* end of inlined section */
        pEVar4 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
        (*(code *)pEVar4[4].GetTypeName)
                  ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
                   (int)*(short *)&pEVar4[4].GetTypeInfo,
                   &(this->field0_0x0).field0_0x0.m_boundSphere,pEVar7);
      }
    }
    else {
      pEVar7 = &_ESim_GreenLight;
      iVar10 = 0;
      _ESim_GreenLight.a.vColor.field0_0x0._0_8_ = _vGhostGreen.field0_0x0._0_8_;
      _ESim_GreenLight.a.vColor.field0_0x0.d[2] = _vGhostGreen.field0_0x0.d[2];
    }
  }
  else {
    pEVar7 = &_ESim_GhostLight;
    iVar10 = 0;
    _ESim_GhostLight.a.vColor.field0_0x0._0_8_ = _vGhostBlue.field0_0x0._0_8_;
    _ESim_GhostLight.a.vColor.field0_0x0.d[2] = _vGhostBlue.field0_0x0.d[2];
  }
  pEVar8 = (this->field0_0x0).field0_0x0.m_otds;
LAB_0014eba8:
  pEVar8->pLights = pEVar7;
  ((this->field0_0x0).field0_0x0.m_otds)->nLights = iVar10;
  ((this->field0_0x0).field0_0x0.m_otds)->renderFlags = renderFlags;
  InsertInOrderTable__7ERLevelR15EOrderTableData
            ((this->field0_0x0).field0_0x0.field0_0x0.m_pLevel,(this->field0_0x0).field0_0x0.m_otds)
  ;
  bVar5 = false;
  if (_globals.m_renderPass == 0) {
    bVar5 = (this->field0_0x0).m_cursFlags == 1;
  }
  iVar6 = 0;
  if ((_globals.m_renderPass == 1) &&
     (iVar6 = _globals.m_renderPass, (this->field0_0x0).m_cursFlags != 8)) {
    iVar6 = 0;
  }
  if ((bVar5) || (iVar6 != 0)) {
    DrawCursorHighLight__4ESimP3ERC(this,prc);
  }
  return;
}

void ESim::Update() {
	float fCurrMotive;
	short int nPersonData[5];
	ESim *this;
	
  short sVar1;
  cXPerson__150_1300__vtable *pcVar2;
  cXPerson__150_1300 *pcVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  ushort nPersonData [5];
  
  UpdateSkinChange__4ESim(this);
  if (*(int *)&this->m_bGetSign != 0) {
    pcVar2 = this->m_pPerson->__vtable;
    iVar5 = (*(code *)pcVar2->GetRecordDuration)
                      ((int)&this->m_pPerson->_vb1187 + (int)*(short *)&pcVar2->GetRecording,7);
    nPersonData[0] = (ushort)(iVar5 / 100);
    pcVar2 = this->m_pPerson->__vtable;
    iVar5 = (*(code *)pcVar2->GetRecordDuration)
                      ((int)&this->m_pPerson->_vb1187 + (int)*(short *)&pcVar2->GetRecording,6);
    nPersonData[1] = (ushort)(iVar5 / 100);
    pcVar2 = this->m_pPerson->__vtable;
    iVar5 = (*(code *)pcVar2->GetRecordDuration)
                      ((int)&this->m_pPerson->_vb1187 + (int)*(short *)&pcVar2->GetRecording,3);
    nPersonData[2] = (ushort)(iVar5 / 100);
    pcVar2 = this->m_pPerson->__vtable;
    iVar5 = (*(code *)pcVar2->GetRecordDuration)
                      ((int)&this->m_pPerson->_vb1187 + (int)*(short *)&pcVar2->GetRecording,5);
    nPersonData[3] = (ushort)(iVar5 / 100);
    pcVar2 = this->m_pPerson->__vtable;
    iVar5 = (*(code *)pcVar2->GetRecordDuration)
                      ((int)&this->m_pPerson->_vb1187 + (int)*(short *)&pcVar2->GetRecording,2);
    pcVar3 = this->m_pPerson;
    nPersonData[4] = (ushort)(iVar5 / 100);
    pcVar2 = pcVar3->__vtable;
    sVar1 = *(short *)&pcVar2->SetRecordDuration;
    uVar4 = EORComputeZodiacSign__FPCs(nPersonData);
    (*(code *)pcVar2->GetRecordMaxDuration)((int)&pcVar3->_vb1187 + (int)sVar1,0x46,uVar4);
    *(undefined4 *)&this->m_bGetSign = 0;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
  if (this->m_iQueueCount < 1) {
    pcVar2 = this->m_pPerson->__vtable;
    piVar6 = (int *)(*(code *)pcVar2->GetPersonImplementation)
                              ((int)&this->m_pPerson->_vb1187 +
                               (int)*(short *)&pcVar2->GetControllingObject);
    (**(code **)(*piVar6 + 0x24))((int)piVar6 + (int)*(short *)(*piVar6 + 0x20));
    pcVar2 = this->m_pPerson->__vtable;
    fVar7 = (float)(*(code *)pcVar2->DebugDumpHappyScape)
                             ((int)&this->m_pPerson->_vb1187 +
                              (int)*(short *)&pcVar2->DeleteTopAction,7);
    fVar8 = this->m_fPreviousMotive[0];
    if (fVar7 == fVar8) {
      pcVar3 = this->m_pPerson;
    }
    else {
      this->m_fPreviousMotive[0] = fVar7;
      this->m_vMotiveDelta[0].field0_0x0.d[0] = fVar7 - fVar8;
      pcVar3 = this->m_pPerson;
    }
    fVar7 = (float)(*(code *)pcVar3->__vtable->DebugDumpHappyScape)
                             ((int)&pcVar3->_vb1187 +
                              (int)*(short *)&pcVar3->__vtable->DeleteTopAction,8);
    fVar8 = this->m_fPreviousMotive[1];
    if (fVar7 == fVar8) {
      pcVar3 = this->m_pPerson;
    }
    else {
      this->m_fPreviousMotive[1] = fVar7;
      this->m_vMotiveDelta[1].field0_0x0.d[0] = fVar7 - fVar8;
      pcVar3 = this->m_pPerson;
    }
    fVar7 = (float)(*(code *)pcVar3->__vtable->DebugDumpHappyScape)
                             ((int)&pcVar3->_vb1187 +
                              (int)*(short *)&pcVar3->__vtable->DeleteTopAction,5);
    fVar8 = this->m_fPreviousMotive[2];
    if (fVar7 == fVar8) {
      pcVar3 = this->m_pPerson;
    }
    else {
      this->m_fPreviousMotive[2] = fVar7;
      this->m_vMotiveDelta[2].field0_0x0.d[0] = fVar7 - fVar8;
      pcVar3 = this->m_pPerson;
    }
    fVar7 = (float)(*(code *)pcVar3->__vtable->DebugDumpHappyScape)
                             ((int)&pcVar3->_vb1187 +
                              (int)*(short *)&pcVar3->__vtable->DeleteTopAction,0xe);
    fVar8 = this->m_fPreviousMotive[3];
    if (fVar7 == fVar8) {
      pcVar3 = this->m_pPerson;
    }
    else {
      this->m_fPreviousMotive[3] = fVar7;
      this->m_vMotiveDelta[3].field0_0x0.d[0] = fVar7 - fVar8;
      pcVar3 = this->m_pPerson;
    }
    fVar7 = (float)(*(code *)pcVar3->__vtable->DebugDumpHappyScape)
                             ((int)&pcVar3->_vb1187 +
                              (int)*(short *)&pcVar3->__vtable->DeleteTopAction,6);
    fVar8 = this->m_fPreviousMotive[4];
    if (fVar7 == fVar8) {
      pcVar3 = this->m_pPerson;
    }
    else {
      this->m_fPreviousMotive[4] = fVar7;
      this->m_vMotiveDelta[4].field0_0x0.d[0] = fVar7 - fVar8;
      pcVar3 = this->m_pPerson;
    }
    fVar7 = (float)(*(code *)pcVar3->__vtable->DebugDumpHappyScape)
                             ((int)&pcVar3->_vb1187 +
                              (int)*(short *)&pcVar3->__vtable->DeleteTopAction,9);
    fVar8 = this->m_fPreviousMotive[5];
    if (fVar7 == fVar8) {
      pcVar3 = this->m_pPerson;
    }
    else {
      this->m_fPreviousMotive[5] = fVar7;
      this->m_vMotiveDelta[5].field0_0x0.d[0] = fVar7 - fVar8;
      pcVar3 = this->m_pPerson;
    }
    fVar7 = (float)(*(code *)pcVar3->__vtable->DebugDumpHappyScape)
                             ((int)&pcVar3->_vb1187 +
                              (int)*(short *)&pcVar3->__vtable->DeleteTopAction,0xf);
    fVar8 = this->m_fPreviousMotive[6];
    if (fVar7 == fVar8) {
      pcVar3 = this->m_pPerson;
    }
    else {
      this->m_fPreviousMotive[6] = fVar7;
      this->m_vMotiveDelta[6].field0_0x0.d[0] = fVar7 - fVar8;
      pcVar3 = this->m_pPerson;
    }
    fVar7 = (float)(*(code *)pcVar3->__vtable->DebugDumpHappyScape)
                             ((int)&pcVar3->_vb1187 +
                              (int)*(short *)&pcVar3->__vtable->DeleteTopAction,0xd);
    fVar8 = this->m_fPreviousMotive[7];
    if (fVar7 != fVar8) {
      this->m_fPreviousMotive[7] = fVar7;
      this->m_vMotiveDelta[7].field0_0x0.d[0] = fVar7 - fVar8;
    }
  }
  return;
}

u32 ESim::VisibilityTest(EPortalWindow &win, u32 parentVis) {
  uint uVar1;
  
  uVar1 = Test__13EPortalWindowRC12EBoundSphereUi
                    (win,&(this->field0_0x0).field0_0x0.m_boundSphere,parentVis);
  return uVar1;
}

void ESim::SetAnim(char *nextSkill) {
  EAnimController *this_00;
  
  this_00 = &(this->field0_0x0).m_AC;
  SetTrackAnim__15EAnimControlleriPCc(this_00,1,nextSkill);
  SetTrackIntensity__15EAnimControllerif(this_00,1,1.0);
  SetTrackSpeed__15EAnimControllerif(this_00,1,1.0);
  return;
}

void ESim::UpdateSkinChange() {
	SimSpeed speed;
	ESim *this;
	ESim *this;
	SimSpeed speed;
	
  int iVar1;
  uint uVar2;
  Costume *pCVar3;
  ERModel *pEVar4;
  long lVar5;
  float fVar6;
  
  iVar1 = this->m_SkinChangeStage;
  if (iVar1 < 0) {
    return;
  }
  if (iVar1 != 0) {
    if (iVar1 == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
      if (0 < this->m_iQueueCount) {
        return;
      }
      if (this->m_QueuedModelIds[3] != 0) {
        pEVar4 = (ERModel *)
                 GetRefAsync__16EResourceManagerUib
                           (&_modelman.field0_0x0,this->m_QueuedModelIds[3],false);
        this->m_Models[3] = pEVar4;
        this->m_QueuedModelIds[3] = 0;
        this->m_uQueuedUpperBodyID = 0;
      }
      if (this->m_QueuedModelIds[4] != 0) {
        pEVar4 = (ERModel *)
                 GetRefAsync__16EResourceManagerUib
                           (&_modelman.field0_0x0,this->m_QueuedModelIds[4],false);
        this->m_Models[4] = pEVar4;
        this->m_QueuedModelIds[4] = 0;
        this->m_uQueuedLowerBodyID = 0;
      }
      if (this->m_QueuedModelIds[5] != 0) {
        pEVar4 = (ERModel *)
                 GetRefAsync__16EResourceManagerUib
                           (&_modelman.field0_0x0,this->m_QueuedModelIds[5],false);
        this->m_Models[5] = pEVar4;
        this->m_QueuedModelIds[5] = 0;
        this->m_uQueuedShoeID = 0;
      }
      this->m_QueuedModelIds[5] = 0;
      this->m_SkinChangeStage = 2;
      this->m_QueuedModelIds[0] = 0;
      this->m_QueuedModelIds[1] = 0;
      this->m_QueuedModelIds[2] = 0;
      this->m_QueuedModelIds[3] = 0;
      this->m_QueuedModelIds[4] = 0;
      return;
    }
    if (iVar1 != 2) {
      return;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar5 = (*(code *)_5Globs_pSimulator->__vtable->DoStream)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable->DoCommand);
                    /* inlined from ../MSrc/simulator.h */
    if (lVar5 == -2) {
      fVar6 = 4.0;
      goto LAB_0014f3a0;
    }
    if (lVar5 < -1) {
      if (lVar5 == -3) {
        fVar6 = 10.0;
        goto LAB_0014f3a0;
      }
    }
    else {
      if (lVar5 == -1) {
        fVar6 = 0.5;
        goto LAB_0014f3a0;
      }
      if (lVar5 == 0) {
        fVar6 = 1.0;
        goto LAB_0014f3a0;
      }
    }
    fVar6 = 0.0;
LAB_0014f3a0:
                    /* end of inlined section */
    fVar6 = this->m_CurtainLevel - (_dt * fVar6 + _dt * fVar6);
    this->m_CurtainLevel = fVar6;
    if ((0.0 <= fVar6) && (*(int *)&this->m_bDontDrawCurtain == 0)) {
      return;
    }
    *(undefined4 *)&this->m_bDontDrawCurtain = 0;
    this->m_SkinChangeStage = -1;
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar5 = (*(code *)_5Globs_pSimulator->__vtable->DoStream)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable->DoCommand);
                    /* inlined from ../MSrc/simulator.h */
  if (lVar5 == -2) {
    fVar6 = 4.0;
    goto LAB_0014f134;
  }
  if (lVar5 < -1) {
    if (lVar5 == -3) {
      fVar6 = 10.0;
      goto LAB_0014f134;
    }
  }
  else {
    if (lVar5 == -1) {
      fVar6 = 0.5;
      goto LAB_0014f134;
    }
    if (lVar5 == 0) {
      fVar6 = 1.0;
      goto LAB_0014f134;
    }
  }
  fVar6 = 0.0;
LAB_0014f134:
                    /* end of inlined section */
  fVar6 = this->m_CurtainLevel + _dt * fVar6 + _dt * fVar6;
  this->m_CurtainLevel = fVar6;
  if ((1.0 < fVar6) || (*(int *)&this->m_bDontDrawCurtain != 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
    this->m_CurtainLevel = 1.0;
    this->m_SkinChangeStage = 1;
    if (0 < this->m_iQueueCount) {
      Flush__16ESimsDataManager(&_simsdataman);
    }
    flushQueuedCostumeModels__4ESim(this);
    if (this->m_Models[3] == (ERModel *)0x0) {
      pEVar4 = this->m_Models[4];
    }
    else {
      DelRef__9EResource(&this->m_Models[3]->field0_0x0);
      this->m_Models[3] = (ERModel *)0x0;
      pEVar4 = this->m_Models[4];
    }
    if (pEVar4 == (ERModel *)0x0) {
      pEVar4 = this->m_Models[5];
    }
    else {
      DelRef__9EResource(&pEVar4->field0_0x0);
      this->m_Models[4] = (ERModel *)0x0;
      pEVar4 = this->m_Models[5];
    }
    if (pEVar4 == (ERModel *)0x0) {
      uVar2 = this->m_QueuedModelIds[3];
    }
    else {
      DelRef__9EResource(&pEVar4->field0_0x0);
      this->m_Models[5] = (ERModel *)0x0;
      uVar2 = this->m_QueuedModelIds[3];
    }
    if (uVar2 != 0) {
      this->m_uQueuedUpperBodyID = uVar2;
      AddRefAsync__16EResourceManagerUi(&_modelman.field0_0x0,uVar2);
    }
    uVar2 = this->m_QueuedModelIds[4];
    if (uVar2 != 0) {
      this->m_uQueuedLowerBodyID = uVar2;
      AddRefAsync__16EResourceManagerUi(&_modelman.field0_0x0,uVar2);
    }
    uVar2 = this->m_QueuedModelIds[5];
    if (uVar2 != 0) {
      this->m_uQueuedShoeID = uVar2;
      AddRefAsync__16EResourceManagerUi(&_modelman.field0_0x0,uVar2);
    }
    pCVar3 = this->m_pCostumeToChangeTo;
    this->m_pCostumeToChangeTo = (Costume *)0x0;
    this->m_pInCostume = pCVar3;
    QueueCommand__16ESimsDataManagerP4ESimUi(&_simsdataman,this,1);
  }
  return;
}

void ESim::CreateSkinAsync(Costume *InCostume) {
  this->m_pVanityCostume = InCostume;
  this->m_SkinChangeStage = 0;
  this->m_CurtainLevel = 0.0;
  this->m_pCostumeToChangeTo = InCostume;
  return;
}

void ESim::CreateSkin(Costume *InCostume) {
	ESim *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
                    /* end of inlined section */
  if (0 < this->m_iQueueCount) {
    Flush__16ESimsDataManager(&_simsdataman);
  }
  createSkinDirect__4ESimPCQ23Sim7Costume(this,InCostume);
  return;
}

void ESim::createSkinDirect(Costume *InCostume) {
	u32 i;
	void *pHeapPointer;
	ERQuickdata *pCreateSimData;
	Table *pBodyData;
	ERQTable<Sim::Table> *pTable;
	u32 nNumOfLayers;
	u32 *nOriginalPalette[13];
	ERRleTexture *pTextureLayer[13];
	CustomCharacter *pCustomCharacter;
	u32 TexSymbolPtr;
	unsigned char nCurPixelColor[3];
	u8 nCurColorAlpha;
	u32 nNewPixelColor;
	u32 nCurColorChannel;
	u32 nDecompPixelColor;
	u32 nGarbage;
	s32 curxpos;
	s32 leftpos;
	s32 rightpos;
	u8 *pTempPointers[3];
	u8 *pIndexBuff[3][3];
	u8 *pOrigPointers[3][3];
	int x;
	int y;
	int pitchX;
	int pitchY;
	ETexture *pPalTexture;
	ERTQuantize Quantize;
	u32 *pNewTextureData;
	int nPaletteSize;
	u8 *pNewPixel;
	ERQuickdata *this;
	ERQTable<Sim::Table> *pTable;
	ERQuickdata *this;
	ERQuickdata *this;
	ERQuickdata *this;
	ERQuickdata *this;
	ERRleTexture *this;
	u32 id;
	ERRleTexture *this;
	u32 id;
	u32 id;
	ERRleTexture *this;
	u32 id;
	ERRleTexture *this;
	u32 id;
	ERRleTexture *this;
	ERRleTexture *this;
	ERRleTexture *this;
	ERRleTexture *this;
	ERRleTexture *this;
	EShader *this;
	
  uint uVar1;
  uint uVar2;
  cXPerson__150_1300__vtable *pcVar3;
  uchar *puVar4;
  uchar *puVar5;
  bool bVar6;
  void *pvVar7;
  ERQuickdata *this_00;
  int *piVar8;
  ERRleTexture *pEVar9;
  uint *puVar10;
  uint uVar11;
  uint **ppuVar12;
  int iVar13;
  uchar *puVar14;
  ERRleTexture **ppEVar15;
  char *pRowName;
  int iVar16;
  void **ppvVar17;
  undefined8 unaff_s0;
  ERRleTexture **ppEVar18;
  void **ppvVar19;
  uint uVar20;
  uint uVar21;
  uint **ppuVar22;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar23;
  uint uVar24;
  undefined8 unaff_s5;
  uint uVar25;
  uint uVar26;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  ulong uVar27;
  long lVar28;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  undefined8 in_hi;
  ulong uVar29;
  uint *nOriginalPalette [13];
  ERRleTexture *pTextureLayer [13];
  uchar nCurPixelColor [3];
  uchar *pTempPointers [3];
  uchar *pIndexBuff [3] [3];
  uchar *pOrigPointers [3] [3];
  ERTQuantize Quantize;
  int pitchX;
  int pitchY;
  ESim *local_f8;
  void *pHeapPointer;
  uint nNumOfLayers;
  CustomCharacter *pCustomCharacter;
  ETexture *pPalTexture;
  uchar *pNewPixel;
  int *local_e0;
  int *local_dc;
  int local_d8;
  int local_d4;
  ERRleTexture **local_d0;
  uchar *local_cc;
  uchar *(*local_c8) [3];
  uchar *(*local_c4) [3];
  ERTQuantize *local_c0;
  uint local_b0;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar26 = (uint)((ulong)in_hi >> 0x20);
  ppuVar12 = nOriginalPalette;
  ppuVar22 = nOriginalPalette;
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
  local_f8 = this;
  pHeapPointer = GetUpper32k__17ESimScratchPadMan();
  if (pHeapPointer == (void *)0x0) {
    pvVar7 = AllocateScratchMemory__5GlobsPCvPCci
                       (local_f8,"c:/eor/src2/games/sims/ESRC/ESim.cpp",0x5d1);
    Init__5EHeapPvUi(&_4ESim_m_MyHeap,pvVar7,0x100000);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  }
  else {
    pvVar7 = GetUpper32k__17ESimScratchPadMan();
    Init__5EHeapPvUi(&_4ESim_m_MyHeap,pvVar7,0x8000);
  }
  this_00 = (ERQuickdata *)
            AddRef__16EResourceManagerUiP5EFilei
                      (&_quickdataman.field0_0x0,0x2a2af469,(EFile *)0x0,0);
  pvVar7 = getTable__11ERQuickdataPCc(this_00,"Sim::Table");
                    /* end of inlined section */
                    /* end of inlined section */
  bVar6 = IsAdult__4ESim(local_f8);
  if (bVar6) {
    bVar6 = IsMale__4ESim(local_f8);
    if (bVar6) {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
      pRowName = "AdultMale";
    }
    else {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
      pRowName = "AdultFemale";
    }
  }
  else {
    bVar6 = IsMale__4ESim(local_f8);
    if (bVar6) {
      pRowName = "ChildMale";
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
    }
    else {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
      pRowName = "ChildFemale";
    }
  }
  piVar8 = (int *)getRow__11ERQuickdataPCvPCc(this_00,pvVar7,pRowName);
                    /* end of inlined section */
  local_d0 = pTextureLayer;
  local_c4 = pOrigPointers;
  local_c0 = &Quantize;
  local_c8 = pIndexBuff;
  local_e0 = &pitchX;
  local_cc = nCurPixelColor;
  local_dc = &pitchY;
  uVar25 = 0;
  nNumOfLayers = 0;
  ppEVar15 = local_d0;
  do {
    *ppuVar12 = (uint *)0x0;
    uVar25 = uVar25 + 1;
    *ppEVar15 = (ERRleTexture *)0x0;
    ppuVar12 = ppuVar12 + 1;
    ppEVar15 = ppEVar15 + 1;
  } while (uVar25 < 0xd);
  pcVar3 = local_f8->m_pPerson->__vtable;
  pCustomCharacter =
       (CustomCharacter *)
       (*(code *)pcVar3->GetRecordTicksElapsed)
                 ((int)&local_f8->m_pPerson->_vb1187 + (int)*(short *)&pcVar3->GetRecordCurTicks);
  if (*(int *)pCustomCharacter == 0) {
    if (*(int *)&pCustomCharacter->m_bAdult == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
      uVar25 = 0x98edfae4;
    }
    else {
      uVar25 = 0x5e63299a;
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
                    /* end of inlined section */
    }
  }
  else if (*(int *)&pCustomCharacter->m_bAdult == 0) {
    uVar25 = 0xc73ba5f8;
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
                    /* end of inlined section */
  }
  else {
    uVar25 = 0x29f28d35;
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
                    /* end of inlined section */
  }
  pEVar9 = (ERRleTexture *)
           AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,uVar25,(EFile *)0x0,0);
  uVar25 = nNumOfLayers;
                    /* end of inlined section */
  local_d0[nNumOfLayers] = pEVar9;
  ppEVar15 = local_d0 + nNumOfLayers;
  nNumOfLayers = 1;
  RestartDecompression__12ERRleTexture(*ppEVar15);
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  iVar13 = 0x100;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  if (*(int *)&(*ppEVar15)->m_bFourBitImage != 0) {
    iVar13 = 0x10;
  }
                    /* end of inlined section */
  puVar10 = (uint *)_memmanAlloc__FUiUi(iVar13 << 2,4);
  nOriginalPalette[uVar25] = puVar10;
  changeSkinColor__4ESimUcP12ERRleTexturePUi
            (local_f8,pCustomCharacter->m_nSkinColor,*ppEVar15,puVar10);
  if (InCostume == (Costume *)0x0) {
    if (local_f8->m_pVanityCostume == (Costume *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      uVar25 = *(uint *)(*piVar8 + pCustomCharacter->m_nUpperBodyIndex * 0xc + 4);
    }
    else {
      uVar25 = (local_f8->m_pVanityCostume->upperBody).layer1;
    }
  }
  else {
    uVar25 = (InCostume->upperBody).layer1;
  }
  if (uVar25 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
    pEVar9 = (ERRleTexture *)
             AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,uVar25,(EFile *)0x0,0);
    uVar25 = nNumOfLayers;
                    /* end of inlined section */
    ppEVar15 = local_d0 + nNumOfLayers;
    *ppEVar15 = pEVar9;
    RestartDecompression__12ERRleTexture(pEVar9);
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
                    /* end of inlined section */
    nNumOfLayers = 2;
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
    iVar13 = 0x100;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
    if (*(int *)&(*ppEVar15)->m_bFourBitImage != 0) {
      iVar13 = 0x10;
    }
                    /* end of inlined section */
    puVar10 = (uint *)_memmanAlloc__FUiUi(iVar13 << 2,4);
    nOriginalPalette[uVar25] = puVar10;
    changeClothingColor__4ESimUcP12ERRleTexturePUi
              (local_f8,pCustomCharacter->m_nUpperBodyColor,*ppEVar15,puVar10);
  }
  if (InCostume == (Costume *)0x0) {
    if (local_f8->m_pVanityCostume == (Costume *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      uVar25 = *(uint *)(*piVar8 + pCustomCharacter->m_nUpperBodyIndex * 0xc + 8);
    }
    else {
      uVar25 = (local_f8->m_pVanityCostume->upperBody).layer2;
    }
  }
  else {
    uVar25 = (InCostume->upperBody).layer2;
  }
  if (uVar25 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
    pEVar9 = (ERRleTexture *)
             AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,uVar25,(EFile *)0x0,0);
                    /* end of inlined section */
    local_d0[nNumOfLayers] = pEVar9;
    nNumOfLayers = nNumOfLayers + 1;
    RestartDecompression__12ERRleTexture(pEVar9);
  }
  if (InCostume == (Costume *)0x0) {
    if (local_f8->m_pVanityCostume == (Costume *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      uVar25 = *(uint *)(piVar8[2] + pCustomCharacter->m_nShoesIndex * 8 + 4);
    }
    else {
      uVar25 = (local_f8->m_pVanityCostume->shoe).layer1;
    }
  }
  else {
    uVar25 = (InCostume->shoe).layer1;
  }
  if (uVar25 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
    pEVar9 = (ERRleTexture *)
             AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,uVar25,(EFile *)0x0,0);
    uVar25 = nNumOfLayers;
                    /* end of inlined section */
    ppEVar15 = local_d0 + nNumOfLayers;
    *ppEVar15 = pEVar9;
    RestartDecompression__12ERRleTexture(pEVar9);
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
    iVar13 = 0x100;
                    /* end of inlined section */
    nNumOfLayers = nNumOfLayers + 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
    if (*(int *)&(*ppEVar15)->m_bFourBitImage != 0) {
      iVar13 = 0x10;
    }
                    /* end of inlined section */
    puVar10 = (uint *)_memmanAlloc__FUiUi(iVar13 << 2,4);
    nOriginalPalette[uVar25] = puVar10;
    changeClothingColor__4ESimUcP12ERRleTexturePUi
              (local_f8,pCustomCharacter->m_nShoesColor,*ppEVar15,puVar10);
  }
  if (InCostume == (Costume *)0x0) {
    if (local_f8->m_pVanityCostume == (Costume *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      uVar25 = *(uint *)(piVar8[1] + pCustomCharacter->m_nLowerBodyIndex * 0xc + 4);
    }
    else {
      uVar25 = (local_f8->m_pVanityCostume->lowerBody).layer1;
    }
  }
  else {
    uVar25 = (InCostume->lowerBody).layer1;
  }
  if (uVar25 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
    pEVar9 = (ERRleTexture *)
             AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,uVar25,(EFile *)0x0,0);
    uVar25 = nNumOfLayers;
                    /* end of inlined section */
    ppEVar15 = local_d0 + nNumOfLayers;
    *ppEVar15 = pEVar9;
    RestartDecompression__12ERRleTexture(pEVar9);
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
    iVar13 = 0x100;
                    /* end of inlined section */
    nNumOfLayers = nNumOfLayers + 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
    if (*(int *)&(*ppEVar15)->m_bFourBitImage != 0) {
      iVar13 = 0x10;
    }
                    /* end of inlined section */
    puVar10 = (uint *)_memmanAlloc__FUiUi(iVar13 << 2,4);
    nOriginalPalette[uVar25] = puVar10;
    changeClothingColor__4ESimUcP12ERRleTexturePUi
              (local_f8,pCustomCharacter->m_nLowerBodyColor,*ppEVar15,puVar10);
  }
  if (InCostume == (Costume *)0x0) {
    if (local_f8->m_pVanityCostume == (Costume *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      uVar25 = *(uint *)(piVar8[1] + pCustomCharacter->m_nLowerBodyIndex * 0xc + 8);
    }
    else {
      uVar25 = (local_f8->m_pVanityCostume->lowerBody).layer2;
    }
  }
  else {
    uVar25 = (InCostume->lowerBody).layer2;
  }
  if (uVar25 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
    pEVar9 = (ERRleTexture *)
             AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,uVar25,(EFile *)0x0,0);
                    /* end of inlined section */
    local_d0[nNumOfLayers] = pEVar9;
    nNumOfLayers = nNumOfLayers + 1;
    RestartDecompression__12ERRleTexture(pEVar9);
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  uVar25 = *(uint *)(piVar8[3] + pCustomCharacter->m_nFaceIndex * 8 + 4);
  if (uVar25 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pEVar9 = (ERRleTexture *)
             AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,uVar25,(EFile *)0x0,0);
    uVar25 = nNumOfLayers;
                    /* end of inlined section */
    ppEVar15 = local_d0 + nNumOfLayers;
    *ppEVar15 = pEVar9;
    RestartDecompression__12ERRleTexture(pEVar9);
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
                    /* end of inlined section */
    nNumOfLayers = nNumOfLayers + 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
    iVar13 = 0x100;
    if (*(int *)&(*ppEVar15)->m_bFourBitImage != 0) {
      iVar13 = 0x10;
    }
                    /* end of inlined section */
    puVar10 = (uint *)_memmanAlloc__FUiUi(iVar13 << 2,4);
    nOriginalPalette[uVar25] = puVar10;
    changeSkinColor__4ESimUcP12ERRleTexturePUi
              (local_f8,pCustomCharacter->m_nSkinColor,*ppEVar15,puVar10);
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
  pEVar9 = (ERRleTexture *)
           AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,0xc9e921e7,(EFile *)0x0,0);
  uVar25 = nNumOfLayers;
                    /* end of inlined section */
  ppEVar15 = local_d0 + nNumOfLayers;
  *ppEVar15 = pEVar9;
  RestartDecompression__12ERRleTexture(pEVar9);
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  iVar23 = 0x100;
                    /* end of inlined section */
  iVar13 = nNumOfLayers + 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  if (*(int *)&(*ppEVar15)->m_bFourBitImage != 0) {
    iVar23 = 0x10;
  }
                    /* end of inlined section */
  nNumOfLayers = nNumOfLayers + 2;
  ppEVar18 = local_d0 + iVar13;
  puVar10 = (uint *)_memmanAlloc__FUiUi(iVar23 << 2,4);
  nOriginalPalette[uVar25] = puVar10;
  changeClothingColor__4ESimUcP12ERRleTexturePUi(local_f8,'\x01',*ppEVar15,puVar10);
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rletextureman.h */
  pEVar9 = (ERRleTexture *)
           AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,0xd57882b9,(EFile *)0x0,0);
                    /* end of inlined section */
  *ppEVar18 = pEVar9;
  RestartDecompression__12ERRleTexture(pEVar9);
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  iVar23 = 0x10;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  if (*(int *)&(*ppEVar18)->m_bFourBitImage == 0) {
    iVar23 = 0x100;
  }
                    /* end of inlined section */
  puVar10 = (uint *)_memmanAlloc__FUiUi(iVar23 << 2,4);
  nOriginalPalette[iVar13] = puVar10;
  changeClothingColor__4ESimUcP12ERRleTexturePUi
            (local_f8,pCustomCharacter->m_nEyeColor,*ppEVar18,puVar10);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  uVar25 = *(uint *)(piVar8[6] + pCustomCharacter->m_nFacialHairIndex * 0xc);
  if (uVar25 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pEVar9 = (ERRleTexture *)
             AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,uVar25,(EFile *)0x0,0);
    uVar25 = nNumOfLayers;
                    /* end of inlined section */
    ppEVar15 = local_d0 + nNumOfLayers;
    *ppEVar15 = pEVar9;
    RestartDecompression__12ERRleTexture(pEVar9);
    bVar6 = IsMale__4ESim(local_f8);
    if (bVar6) {
      bVar6 = IsAdult__4ESim(local_f8);
      iVar13 = 0x10;
      if (bVar6) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
        if (*(int *)&(*ppEVar15)->m_bFourBitImage == 0) {
          iVar13 = 0x100;
        }
                    /* end of inlined section */
        puVar10 = (uint *)_memmanAlloc__FUiUi(iVar13 << 2,4);
        nOriginalPalette[uVar25] = puVar10;
        changeHairColor__4ESimUcP12ERRleTexturePUi
                  (local_f8,pCustomCharacter->m_nHairHatColor,*ppEVar15,puVar10);
      }
    }
    nNumOfLayers = nNumOfLayers + 1;
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  uVar25 = *(uint *)(piVar8[6] + pCustomCharacter->m_nFacialHairIndex * 0xc + 4);
  if (uVar25 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pEVar9 = (ERRleTexture *)
             AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,uVar25,(EFile *)0x0,0);
                    /* end of inlined section */
    local_d0[nNumOfLayers] = pEVar9;
    nNumOfLayers = nNumOfLayers + 1;
    RestartDecompression__12ERRleTexture(pEVar9);
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  uVar25 = *(uint *)(piVar8[6] + pCustomCharacter->m_nFacialHairIndex * 0xc + 8);
  if (uVar25 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pEVar9 = (ERRleTexture *)
             AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,uVar25,(EFile *)0x0,0);
                    /* end of inlined section */
    local_d0[nNumOfLayers] = pEVar9;
    nNumOfLayers = nNumOfLayers + 1;
    RestartDecompression__12ERRleTexture(pEVar9);
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  uVar25 = *(uint *)(piVar8[4] + pCustomCharacter->m_nHairHatIndex * 0xc + 4);
  if (uVar25 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pEVar9 = (ERRleTexture *)
             AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,uVar25,(EFile *)0x0,0);
    uVar25 = nNumOfLayers;
                    /* end of inlined section */
    ppEVar15 = local_d0 + nNumOfLayers;
    *ppEVar15 = pEVar9;
    RestartDecompression__12ERRleTexture(pEVar9);
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
                    /* end of inlined section */
    nNumOfLayers = nNumOfLayers + 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
    iVar13 = 0x100;
    if (*(int *)&(*ppEVar15)->m_bFourBitImage != 0) {
      iVar13 = 0x10;
    }
                    /* end of inlined section */
    puVar10 = (uint *)_memmanAlloc__FUiUi(iVar13 << 2,4);
    nOriginalPalette[uVar25] = puVar10;
    changeHairColor__4ESimUcP12ERRleTexturePUi
              (local_f8,pCustomCharacter->m_nHairHatColor,*ppEVar15,puVar10);
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  uVar25 = *(uint *)(piVar8[4] + pCustomCharacter->m_nHairHatIndex * 0xc + 8);
  if (uVar25 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pEVar9 = (ERRleTexture *)
             AddRef__16EResourceManagerUiP5EFilei(&_rletexman.field0_0x0,uVar25,(EFile *)0x0,0);
                    /* end of inlined section */
    local_d0[nNumOfLayers] = pEVar9;
    nNumOfLayers = nNumOfLayers + 1;
    RestartDecompression__12ERRleTexture(pEVar9);
  }
  DelRef__16EResourceManagerP9EResource(&_quickdataman.field0_0x0,(EResource *)this_00);
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shader.h */
  pPalTexture = (local_f8->m_SimShader->m_sd).rp[0].pTexture;
                    /* end of inlined section */
  local_b0 = 0;
  uStack_ac = 0;
                    /* end of inlined section */
  __11ERTQuantize(local_c0);
  Init__11ERTQuantizeUiUiPFUi_PvPFPv_vb
            (local_c0,0x100,0x7c00,DefaultAlloc__4ESimUi,DefaultFree__4ESimPv,true);
  uVar27 = (ulong)local_b0;
  iVar13 = local_b0 * 0xc;
  uVar29 = (ulong)uVar26 << 0x20;
  do {
    local_d8 = (int)uVar27 + 1;
    iVar23 = 2;
    ppvVar19 = (void **)((int)*local_c4 + iVar13);
    ppvVar17 = (void **)((int)*local_c8 + iVar13);
    do {
      pvVar7 = _memmanAlloc__FUiUi(0x100,4);
      iVar23 = iVar23 + -1;
      *ppvVar19 = pvVar7;
      *ppvVar17 = pvVar7;
      ppvVar19 = ppvVar19 + 1;
      ppvVar17 = ppvVar17 + 1;
    } while (-1 < iVar23);
    uVar27 = (ulong)local_d8;
    iVar13 = local_d8 * 0xc;
    uVar29 = uVar29 & 0xffffffff00000000 | (ulong)(uint)(iVar13 >> 0x1f);
  } while ((long)uVar27 < 3);
  uVar26 = 0;
  do {
    uVar24 = 1;
    uVar25 = GetNextPixel__12ERRleTexture(pTextureLayer[0]);
    nCurPixelColor[0] = (uchar)uVar25;
    nCurPixelColor[2] = (uchar)(uVar25 >> 0x10);
    nCurPixelColor[1] = (uchar)(uVar25 >> 8);
    ppEVar15 = local_d0;
    if (1 < nNumOfLayers) {
      do {
        uVar11 = GetNextPixel__12ERRleTexture(ppEVar15[1]);
        uVar20 = uVar11 >> 0x18;
        iVar13 = 0xff - uVar20;
        if (uVar20 != 0) {
          uVar21 = (int)(uVar20 * (uVar11 & 0xff) + iVar13 * (uVar25 & 0xff)) / 0xff;
          nCurPixelColor[0] = (uchar)uVar21;
          uVar1 = (int)(uVar20 * ((uVar11 & 0xff00) >> 8) + iVar13 * ((uVar25 & 0xff00) >> 8)) /
                  0xff;
          iVar13 = uVar20 * ((uVar11 & 0xff0000) >> 0x10) + iVar13 * ((uVar25 & 0xff0000) >> 0x10);
          uVar25 = iVar13 / 0xff;
          uVar29 = (ulong)(iVar13 % 0xff);
          nCurPixelColor[1] = (uchar)uVar1;
          nCurPixelColor[2] = (uchar)uVar25;
          uVar25 = (uVar21 & 0xff) + (uVar1 & 0xff) * 0x100 + (uVar25 & 0xff) * 0x10000;
        }
        uVar24 = uVar24 + 1;
        ppEVar15 = ppEVar15 + 1;
      } while (uVar24 < nNumOfLayers);
    }
    pOrigPointers[0][0][uVar26] = nCurPixelColor[0];
    pOrigPointers[0][1][uVar26] = nCurPixelColor[1];
    pOrigPointers[0][2][uVar26] = nCurPixelColor[2];
    pOrigPointers[1][0][uVar26] = nCurPixelColor[0];
    pOrigPointers[1][1][uVar26] = nCurPixelColor[1];
    puVar14 = pOrigPointers[1][2] + uVar26;
    uVar26 = uVar26 + 1;
    *puVar14 = nCurPixelColor[2];
  } while (uVar26 < 0x100);
  uVar26 = 0;
  do {
    uVar24 = 1;
    uVar11 = uVar26 + 1;
    uVar25 = GetNextPixel__12ERRleTexture(pTextureLayer[0]);
    nCurPixelColor[0] = (uchar)uVar25;
    nCurPixelColor[1] = (uchar)(uVar25 >> 8);
    nCurPixelColor[2] = (uchar)(uVar25 >> 0x10);
    ppEVar15 = local_d0;
    if (1 < nNumOfLayers) {
      do {
        uVar20 = GetNextPixel__12ERRleTexture(ppEVar15[1]);
        uVar21 = uVar20 >> 0x18;
        iVar13 = 0xff - uVar21;
        if (uVar21 != 0) {
          uVar1 = (int)(uVar21 * (uVar20 & 0xff) + iVar13 * (uVar25 & 0xff)) / 0xff;
          nCurPixelColor[0] = (uchar)uVar1;
          uVar2 = (int)(uVar21 * ((uVar20 & 0xff00) >> 8) + iVar13 * ((uVar25 & 0xff00) >> 8)) /
                  0xff;
          iVar13 = uVar21 * ((uVar20 & 0xff0000) >> 0x10) + iVar13 * ((uVar25 & 0xff0000) >> 0x10);
          uVar25 = iVar13 / 0xff;
          uVar29 = (ulong)(iVar13 % 0xff);
          nCurPixelColor[1] = (uchar)uVar2;
          nCurPixelColor[2] = (uchar)uVar25;
          uVar25 = (uVar1 & 0xff) + (uVar2 & 0xff) * 0x100 + (uVar25 & 0xff) * 0x10000;
        }
        uVar24 = uVar24 + 1;
        ppEVar15 = ppEVar15 + 1;
      } while (uVar24 < nNumOfLayers);
    }
    pOrigPointers[2][0][uVar26] = nCurPixelColor[0];
    pOrigPointers[2][1][uVar26] = nCurPixelColor[1];
    pOrigPointers[2][2][uVar26] = nCurPixelColor[2];
    uVar26 = uVar11;
  } while (uVar11 < 0x100);
  local_d8 = 0;
  iVar13 = 1;
  while( true ) {
    puVar5 = pIndexBuff[0][2];
    puVar4 = pIndexBuff[0][1];
    puVar14 = pIndexBuff[0][0];
    bVar6 = local_d8 != 0;
    local_d8 = iVar13;
    if (bVar6) {
      uVar26 = 0;
      pIndexBuff[0][0] = pIndexBuff[2][0];
      pIndexBuff[0][1] = pIndexBuff[2][1];
      pIndexBuff[0][2] = pIndexBuff[2][2];
      pIndexBuff[2][0] = puVar14;
      pIndexBuff[2][1] = puVar4;
      pIndexBuff[2][2] = puVar5;
      do {
        uVar24 = 1;
        uVar25 = GetNextPixel__12ERRleTexture(pTextureLayer[0]);
        nCurPixelColor[0] = (uchar)uVar25;
        nCurPixelColor[2] = (uchar)(uVar25 >> 0x10);
        nCurPixelColor[1] = (uchar)(uVar25 >> 8);
        ppEVar15 = local_d0;
        if (1 < nNumOfLayers) {
          do {
            uVar11 = GetNextPixel__12ERRleTexture(ppEVar15[1]);
            uVar20 = uVar11 >> 0x18;
            iVar13 = 0xff - uVar20;
            if (uVar20 != 0) {
              uVar21 = (int)(uVar20 * (uVar11 & 0xff) + iVar13 * (uVar25 & 0xff)) / 0xff;
              nCurPixelColor[0] = (uchar)uVar21;
              uVar1 = (int)(uVar20 * ((uVar11 & 0xff00) >> 8) + iVar13 * ((uVar25 & 0xff00) >> 8)) /
                      0xff;
              iVar13 = uVar20 * ((uVar11 & 0xff0000) >> 0x10) +
                       iVar13 * ((uVar25 & 0xff0000) >> 0x10);
              uVar25 = iVar13 / 0xff;
              uVar29 = (ulong)(iVar13 % 0xff);
              nCurPixelColor[1] = (uchar)uVar1;
              nCurPixelColor[2] = (uchar)uVar25;
              uVar25 = (uVar21 & 0xff) + (uVar1 & 0xff) * 0x100 + (uVar25 & 0xff) * 0x10000;
            }
            uVar24 = uVar24 + 1;
            ppEVar15 = ppEVar15 + 1;
          } while (uVar24 < nNumOfLayers);
        }
        pIndexBuff[1][0][uVar26] = nCurPixelColor[0];
        pIndexBuff[1][1][uVar26] = nCurPixelColor[1];
        puVar14 = pIndexBuff[1][2] + uVar26;
        uVar26 = uVar26 + 1;
        *puVar14 = nCurPixelColor[2];
      } while (uVar26 < 0x100);
      uVar26 = 0;
      do {
        uVar24 = 1;
        uVar11 = uVar26 + 1;
        uVar25 = GetNextPixel__12ERRleTexture(pTextureLayer[0]);
        nCurPixelColor[0] = (uchar)uVar25;
        nCurPixelColor[1] = (uchar)(uVar25 >> 8);
        nCurPixelColor[2] = (uchar)(uVar25 >> 0x10);
        ppEVar15 = local_d0;
        if (1 < nNumOfLayers) {
          do {
            uVar20 = GetNextPixel__12ERRleTexture(ppEVar15[1]);
            uVar21 = uVar20 >> 0x18;
            iVar13 = 0xff - uVar21;
            if (uVar21 != 0) {
              uVar1 = (int)(uVar21 * (uVar20 & 0xff) + iVar13 * (uVar25 & 0xff)) / 0xff;
              nCurPixelColor[0] = (uchar)uVar1;
              uVar2 = (int)(uVar21 * ((uVar20 & 0xff00) >> 8) + iVar13 * ((uVar25 & 0xff00) >> 8)) /
                      0xff;
              iVar13 = uVar21 * ((uVar20 & 0xff0000) >> 0x10) +
                       iVar13 * ((uVar25 & 0xff0000) >> 0x10);
              uVar25 = iVar13 / 0xff;
              uVar29 = (ulong)(iVar13 % 0xff);
              nCurPixelColor[1] = (uchar)uVar2;
              nCurPixelColor[2] = (uchar)uVar25;
              uVar25 = (uVar1 & 0xff) + (uVar2 & 0xff) * 0x100 + (uVar25 & 0xff) * 0x10000;
            }
            uVar24 = uVar24 + 1;
            ppEVar15 = ppEVar15 + 1;
          } while (uVar24 < nNumOfLayers);
        }
        pIndexBuff[2][0][uVar26] = nCurPixelColor[0];
        pIndexBuff[2][1][uVar26] = nCurPixelColor[1];
        pIndexBuff[2][2][uVar26] = nCurPixelColor[2];
        uVar26 = uVar11;
      } while (uVar11 < 0x100);
    }
    iVar23 = 0;
    uVar26 = 1;
    iVar13 = 0;
    do {
      iVar16 = iVar13 + -1;
      if (iVar16 < 0) {
        iVar16 = 0;
      }
      uVar25 = 0xff;
      if (uVar26 < 0xff) {
        uVar25 = uVar26;
      }
      nCurPixelColor[0] =
           (uchar)((uint)pIndexBuff[0][0][iVar16] + (uint)pIndexBuff[0][0][iVar13] * 2 +
                   (uint)pIndexBuff[0][0][uVar25] + (uint)pIndexBuff[1][0][iVar16] * 2 +
                   (uint)pIndexBuff[1][0][iVar13] * 4 + (uint)pIndexBuff[1][0][uVar25] * 2 +
                   (uint)pIndexBuff[2][0][iVar16] + (uint)pIndexBuff[2][0][iVar13] * 2 +
                   (uint)pIndexBuff[2][0][uVar25] + 8 >> 4);
      iVar23 = iVar23 + 1;
      uVar26 = uVar26 + 2;
      nCurPixelColor[1] =
           (uchar)((uint)pIndexBuff[0][1][iVar16] + (uint)pIndexBuff[0][1][iVar13] * 2 +
                   (uint)pIndexBuff[0][1][uVar25] + (uint)pIndexBuff[1][1][iVar16] * 2 +
                   (uint)pIndexBuff[1][1][iVar13] * 4 + (uint)pIndexBuff[1][1][uVar25] * 2 +
                   (uint)pIndexBuff[2][1][iVar16] + (uint)pIndexBuff[2][1][iVar13] * 2 +
                   (uint)pIndexBuff[2][1][uVar25] + 8 >> 4);
      nCurPixelColor[2] =
           (uchar)((uint)pIndexBuff[0][2][iVar16] + (uint)pIndexBuff[0][2][iVar13] * 2 +
                   (uint)pIndexBuff[0][2][uVar25] + (uint)pIndexBuff[1][2][iVar16] * 2 +
                   (uint)pIndexBuff[1][2][iVar13] * 4 + (uint)pIndexBuff[1][2][uVar25] * 2 +
                   (uint)pIndexBuff[2][2][iVar16] + (uint)pIndexBuff[2][2][iVar13] * 2 +
                   (uint)pIndexBuff[2][2][uVar25] + 8 >> 4);
      AddPixel__11ERTQuantizePUc(local_c0,local_cc);
      iVar13 = iVar23 * 2;
    } while (iVar23 < 0x80);
    if (0x7f < local_d8) break;
    iVar13 = local_d8 + 1;
  }
  uVar26 = 0;
  Compute__11ERTQuantize(local_c0);
  (*(code *)pPalTexture->__vtable->Validate)
            ((int)&(pPalTexture->m_textureDef).pfnAllocAlign +
             (int)*(short *)&pPalTexture->__vtable->Test1,2);
  piVar8 = (int *)(*(code *)pPalTexture->__vtable[1].Lock)
                            ((int)&(pPalTexture->m_textureDef).pfnAllocAlign +
                             (int)*(short *)&pPalTexture->__vtable[1].ETexture);
  uVar25 = GetPaletteSize__11ERTQuantize(local_c0);
  if (uVar25 != 0) {
    do {
      uVar24 = uVar26 + 1;
      GetPaletteEntry__11ERTQuantizeiPUc(local_c0,uVar26,local_cc);
      *piVar8 = -0x1000000;
      *piVar8 = nCurPixelColor[0] - 0x1000000;
      iVar13 = (nCurPixelColor[0] - 0x1000000) + (uint)nCurPixelColor[1] * 0x100;
      *piVar8 = iVar13;
      *piVar8 = iVar13 + (uint)nCurPixelColor[2] * 0x10000;
      piVar8 = piVar8 + 1;
      uVar26 = uVar24;
    } while (uVar24 < uVar25);
  }
  uVar26 = 0;
  pNewPixel = (uchar *)(**(code **)(pPalTexture->__vtable + 1))
                                 ((int)&(pPalTexture->m_textureDef).pfnAllocAlign +
                                  (int)*(short *)&pPalTexture->__vtable->Select,0,local_e0,local_dc)
  ;
  if (nNumOfLayers != 0) {
    pEVar9 = *local_d0;
    ppEVar15 = local_d0;
    while( true ) {
      uVar26 = uVar26 + 1;
      ppEVar15 = ppEVar15 + 1;
      RestartDecompression__12ERRleTexture(pEVar9);
      if (nNumOfLayers <= uVar26) break;
      pEVar9 = *ppEVar15;
    }
  }
  uVar26 = 0;
  do {
    uVar24 = 1;
    uVar25 = GetNextPixel__12ERRleTexture(pTextureLayer[0]);
    nCurPixelColor[0] = (uchar)uVar25;
    nCurPixelColor[1] = (uchar)(uVar25 >> 8);
    nCurPixelColor[2] = (uchar)(uVar25 >> 0x10);
    ppEVar15 = local_d0;
    if (1 < nNumOfLayers) {
      do {
        uVar11 = GetNextPixel__12ERRleTexture(ppEVar15[1]);
        uVar20 = uVar11 >> 0x18;
        iVar13 = 0xff - uVar20;
        if (uVar20 != 0) {
          uVar21 = (int)(uVar20 * (uVar11 & 0xff) + iVar13 * (uVar25 & 0xff)) / 0xff;
          nCurPixelColor[0] = (uchar)uVar21;
          uVar1 = (int)(uVar20 * ((uVar11 & 0xff00) >> 8) + iVar13 * ((uVar25 & 0xff00) >> 8)) /
                  0xff;
          iVar13 = uVar20 * ((uVar11 & 0xff0000) >> 0x10) + iVar13 * ((uVar25 & 0xff0000) >> 0x10);
          uVar25 = iVar13 / 0xff;
          uVar29 = (ulong)(iVar13 % 0xff);
          nCurPixelColor[1] = (uchar)uVar1;
          nCurPixelColor[2] = (uchar)uVar25;
          uVar25 = (uVar21 & 0xff) + (uVar1 & 0xff) * 0x100 + (uVar25 & 0xff) * 0x10000;
        }
        uVar24 = uVar24 + 1;
        ppEVar15 = ppEVar15 + 1;
      } while (uVar24 < nNumOfLayers);
    }
    pOrigPointers[0][0][uVar26] = nCurPixelColor[0];
    pOrigPointers[0][1][uVar26] = nCurPixelColor[1];
    pOrigPointers[0][2][uVar26] = nCurPixelColor[2];
    pOrigPointers[1][0][uVar26] = nCurPixelColor[0];
    pOrigPointers[1][1][uVar26] = nCurPixelColor[1];
    puVar14 = pOrigPointers[1][2] + uVar26;
    uVar26 = uVar26 + 1;
    *puVar14 = nCurPixelColor[2];
  } while (uVar26 < 0x100);
  uVar26 = 0;
  do {
    uVar24 = 1;
    uVar11 = uVar26 + 1;
    uVar25 = GetNextPixel__12ERRleTexture(pTextureLayer[0]);
    nCurPixelColor[0] = (uchar)uVar25;
    nCurPixelColor[1] = (uchar)(uVar25 >> 8);
    nCurPixelColor[2] = (uchar)(uVar25 >> 0x10);
    ppEVar15 = local_d0;
    if (1 < nNumOfLayers) {
      do {
        uVar20 = GetNextPixel__12ERRleTexture(ppEVar15[1]);
        uVar21 = uVar20 >> 0x18;
        iVar13 = 0xff - uVar21;
        if (uVar21 != 0) {
          uVar1 = (int)(uVar21 * (uVar20 & 0xff) + iVar13 * (uVar25 & 0xff)) / 0xff;
          nCurPixelColor[0] = (uchar)uVar1;
          uVar2 = (int)(uVar21 * ((uVar20 & 0xff00) >> 8) + iVar13 * ((uVar25 & 0xff00) >> 8)) /
                  0xff;
          iVar13 = uVar21 * ((uVar20 & 0xff0000) >> 0x10) + iVar13 * ((uVar25 & 0xff0000) >> 0x10);
          uVar25 = iVar13 / 0xff;
          uVar29 = (ulong)(iVar13 % 0xff);
          nCurPixelColor[1] = (uchar)uVar2;
          nCurPixelColor[2] = (uchar)uVar25;
          uVar25 = (uVar1 & 0xff) + (uVar2 & 0xff) * 0x100 + (uVar25 & 0xff) * 0x10000;
        }
        uVar24 = uVar24 + 1;
        ppEVar15 = ppEVar15 + 1;
      } while (uVar24 < nNumOfLayers);
    }
    pOrigPointers[2][0][uVar26] = nCurPixelColor[0];
    pOrigPointers[2][1][uVar26] = nCurPixelColor[1];
    pOrigPointers[2][2][uVar26] = nCurPixelColor[2];
    uVar26 = uVar11;
  } while (uVar11 < 0x100);
  lVar28 = 0;
  local_d4 = 0;
  while( true ) {
    puVar5 = pIndexBuff[0][2];
    puVar4 = pIndexBuff[0][1];
    puVar14 = pIndexBuff[0][0];
    if (lVar28 != 0) {
      uVar26 = 0;
      pIndexBuff[0][0] = pIndexBuff[2][0];
      pIndexBuff[0][1] = pIndexBuff[2][1];
      pIndexBuff[0][2] = pIndexBuff[2][2];
      pIndexBuff[2][0] = puVar14;
      pIndexBuff[2][1] = puVar4;
      pIndexBuff[2][2] = puVar5;
      do {
        uVar24 = 1;
        local_b0 = (uint)lVar28;
        uStack_ac = (undefined4)((ulong)lVar28 >> 0x20);
        uVar25 = GetNextPixel__12ERRleTexture(pTextureLayer[0]);
        nCurPixelColor[0] = (uchar)uVar25;
        nCurPixelColor[2] = (uchar)(uVar25 >> 0x10);
        lVar28 = CONCAT44(uStack_ac,local_b0);
        nCurPixelColor[1] = (uchar)(uVar25 >> 8);
        ppEVar15 = local_d0;
        if (1 < nNumOfLayers) {
          do {
            local_b0 = (uint)lVar28;
            uStack_ac = (undefined4)((ulong)lVar28 >> 0x20);
            uVar11 = GetNextPixel__12ERRleTexture(ppEVar15[1]);
            uVar20 = uVar11 >> 0x18;
            lVar28 = CONCAT44(uStack_ac,local_b0);
            if (uVar20 != 0) {
              iVar13 = 0xff - uVar20;
              uVar21 = (int)(uVar20 * (uVar11 & 0xff) + iVar13 * (uVar25 & 0xff)) / 0xff;
              nCurPixelColor[0] = (uchar)uVar21;
              uVar1 = (int)(uVar20 * ((uVar11 & 0xff00) >> 8) + iVar13 * ((uVar25 & 0xff00) >> 8)) /
                      0xff;
              iVar13 = uVar20 * ((uVar11 & 0xff0000) >> 0x10) +
                       iVar13 * ((uVar25 & 0xff0000) >> 0x10);
              uVar25 = iVar13 / 0xff;
              uVar29 = (ulong)(iVar13 % 0xff);
              nCurPixelColor[1] = (uchar)uVar1;
              nCurPixelColor[2] = (uchar)uVar25;
              uVar25 = (uVar21 & 0xff) + (uVar1 & 0xff) * 0x100 + (uVar25 & 0xff) * 0x10000;
            }
            uVar24 = uVar24 + 1;
            ppEVar15 = ppEVar15 + 1;
          } while (uVar24 < nNumOfLayers);
        }
        pIndexBuff[1][0][uVar26] = nCurPixelColor[0];
        pIndexBuff[1][1][uVar26] = nCurPixelColor[1];
        puVar14 = pIndexBuff[1][2] + uVar26;
        uVar26 = uVar26 + 1;
        *puVar14 = nCurPixelColor[2];
      } while (uVar26 < 0x100);
      uVar26 = 0;
      do {
        uVar24 = 1;
        local_b0 = (uint)lVar28;
        uStack_ac = (undefined4)((ulong)lVar28 >> 0x20);
        uVar11 = uVar26 + 1;
        uVar25 = GetNextPixel__12ERRleTexture(pTextureLayer[0]);
        nCurPixelColor[0] = (uchar)uVar25;
        nCurPixelColor[1] = (uchar)(uVar25 >> 8);
        lVar28 = CONCAT44(uStack_ac,local_b0);
        nCurPixelColor[2] = (uchar)(uVar25 >> 0x10);
        ppEVar15 = local_d0;
        if (1 < nNumOfLayers) {
          do {
            local_b0 = (uint)lVar28;
            uStack_ac = (undefined4)((ulong)lVar28 >> 0x20);
            uVar20 = GetNextPixel__12ERRleTexture(ppEVar15[1]);
            uVar21 = uVar20 >> 0x18;
            lVar28 = CONCAT44(uStack_ac,local_b0);
            if (uVar21 != 0) {
              iVar13 = 0xff - uVar21;
              uVar1 = (int)(uVar21 * (uVar20 & 0xff) + iVar13 * (uVar25 & 0xff)) / 0xff;
              nCurPixelColor[0] = (uchar)uVar1;
              uVar2 = (int)(uVar21 * ((uVar20 & 0xff00) >> 8) + iVar13 * ((uVar25 & 0xff00) >> 8)) /
                      0xff;
              iVar13 = uVar21 * ((uVar20 & 0xff0000) >> 0x10) +
                       iVar13 * ((uVar25 & 0xff0000) >> 0x10);
              uVar25 = iVar13 / 0xff;
              uVar29 = (ulong)(iVar13 % 0xff);
              nCurPixelColor[1] = (uchar)uVar2;
              nCurPixelColor[2] = (uchar)uVar25;
              uVar25 = (uVar1 & 0xff) + (uVar2 & 0xff) * 0x100 + (uVar25 & 0xff) * 0x10000;
            }
            uVar24 = uVar24 + 1;
            ppEVar15 = ppEVar15 + 1;
          } while (uVar24 < nNumOfLayers);
        }
        pIndexBuff[2][0][uVar26] = nCurPixelColor[0];
        pIndexBuff[2][1][uVar26] = nCurPixelColor[1];
        pIndexBuff[2][2][uVar26] = nCurPixelColor[2];
        uVar26 = uVar11;
      } while (uVar11 < 0x100);
    }
    iVar13 = 0;
    uVar26 = 1;
    puVar14 = pNewPixel + local_d4;
    do {
      iVar16 = iVar13 * 2;
      iVar23 = iVar16 + -1;
      if (iVar23 < 0) {
        iVar23 = 0;
      }
      uVar25 = 0xff;
      if (uVar26 < 0xff) {
        uVar25 = uVar26;
      }
      nCurPixelColor[0] =
           (uchar)((uint)pIndexBuff[0][0][iVar23] + (uint)pIndexBuff[0][0][iVar16] * 2 +
                   (uint)pIndexBuff[0][0][uVar25] + (uint)pIndexBuff[1][0][iVar23] * 2 +
                   (uint)pIndexBuff[1][0][iVar16] * 4 + (uint)pIndexBuff[1][0][uVar25] * 2 +
                   (uint)pIndexBuff[2][0][iVar23] + (uint)pIndexBuff[2][0][iVar16] * 2 +
                   (uint)pIndexBuff[2][0][uVar25] + 8 >> 4);
      iVar13 = iVar13 + 1;
      uVar26 = uVar26 + 2;
      nCurPixelColor[1] =
           (uchar)((uint)pIndexBuff[0][1][iVar23] + (uint)pIndexBuff[0][1][iVar16] * 2 +
                   (uint)pIndexBuff[0][1][uVar25] + (uint)pIndexBuff[1][1][iVar23] * 2 +
                   (uint)pIndexBuff[1][1][iVar16] * 4 + (uint)pIndexBuff[1][1][uVar25] * 2 +
                   (uint)pIndexBuff[2][1][iVar23] + (uint)pIndexBuff[2][1][iVar16] * 2 +
                   (uint)pIndexBuff[2][1][uVar25] + 8 >> 4);
      nCurPixelColor[2] =
           (uchar)((uint)pIndexBuff[0][2][iVar23] + (uint)pIndexBuff[0][2][iVar16] * 2 +
                   (uint)pIndexBuff[0][2][uVar25] + (uint)pIndexBuff[1][2][iVar23] * 2 +
                   (uint)pIndexBuff[1][2][iVar16] * 4 + (uint)pIndexBuff[1][2][uVar25] * 2 +
                   (uint)pIndexBuff[2][2][iVar23] + (uint)pIndexBuff[2][2][iVar16] * 2 +
                   (uint)pIndexBuff[2][2][uVar25] + 8 >> 4);
      local_b0 = (uint)lVar28;
      uStack_ac = (undefined4)((ulong)lVar28 >> 0x20);
      iVar23 = GetClosestColor__11ERTQuantizePUc(local_c0,local_cc);
      *puVar14 = (uchar)iVar23;
      puVar14 = puVar14 + 1;
      lVar28 = CONCAT44(uStack_ac,local_b0);
    } while (iVar13 < 0x80);
    lVar28 = (long)(int)(local_b0 + 1);
    if (0x7f < lVar28) break;
    local_d4 = (local_b0 + 1) * 0x80;
  }
  (*(code *)pPalTexture->__vtable[1].Invalidate)
            ((int)&(pPalTexture->m_textureDef).pfnAllocAlign +
             (int)*(short *)&pPalTexture->__vtable[1].Unlock);
  Deallocate__11ERTQuantize(local_c0);
  if (pHeapPointer == (void *)0x0) {
    FreeScratchMemory__5GlobsPCv(local_f8);
  }
  local_d8 = 0;
  do {
    iVar13 = 2;
    lVar28 = ((long)(int)local_c4 | uVar29) + (long)(local_d8 * 0xc);
    ppvVar17 = (void **)lVar28;
    uVar29 = (ulong)(int)((ulong)lVar28 >> 0x20);
    local_d8 = local_d8 + 1;
    pvVar7 = *ppvVar17;
    while( true ) {
      iVar13 = iVar13 + -1;
      ppvVar17 = ppvVar17 + 1;
      _memmanFree__FPv(pvVar7);
      if (iVar13 < 0) break;
      pvVar7 = *ppvVar17;
    }
  } while (local_d8 < 3);
  uVar26 = 0;
  ppEVar15 = local_d0;
  if (nNumOfLayers != 0) {
    do {
      if (*ppuVar22 == (uint *)0x0) {
        DelRef__9EResource(&(*ppEVar15)->field0_0x0);
      }
      else {
        restorePalette__4ESimP12ERRleTexturePUi(local_f8,*ppEVar15,*ppuVar22);
        DelRef__9EResource(&(*ppEVar15)->field0_0x0);
        _memmanFree__FPv(*ppuVar22);
      }
      uVar26 = uVar26 + 1;
      ppuVar22 = ppuVar22 + 1;
      ppEVar15 = ppEVar15 + 1;
    } while (uVar26 < nNumOfLayers);
  }
  pcVar3 = local_f8->m_pPerson->__vtable;
  (*(code *)pcVar3->GetRecordMaxDuration)
            ((int)&local_f8->m_pPerson->_vb1187 + (int)*(short *)&pcVar3->SetRecordDuration,0x3c,
             pCustomCharacter->m_nSkinColor);
  ___11ERTQuantize(local_c0,2);
  return;
}

void ESim::AlterBody(CustomCharacter *pOldBody, u32 nMessageID) {
	u32 nDataID;
	u32 nLockType;
	bool bIsLockable;
	bool bIsItemUnlocked;
	ERQuickdata *pCreateSimData;
	Table *pBodyData;
	ERQTable<Sim::Table> *pTable;
	CustomCharacter *pCustomCharacter;
	ERQuickdata *this;
	ERQTable<Sim::Table> *pTable;
	ERQuickdata *this;
	ERQuickdata *this;
	ERQuickdata *this;
	ERQuickdata *this;
	void *result;
	
  cXPerson__150_1300__vtable *pcVar1;
  cXPerson__150_1300 *pcVar2;
  EUIObjectNode__vtable *pEVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  ERQuickdata *this_00;
  void *_pTable;
  int *piVar8;
  int iVar9;
  int iVar10;
  ERModel *pEVar11;
  ESims3DHead *pEVar12;
  long lVar13;
  uint uVar14;
  char *pRowName;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint uVar15;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  uint nDataID;
  CustomCharacter *local_ac;
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
  
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  bVar6 = false;
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_ac = pOldBody;
                    /* end of inlined section */
  Flush__16ESimsDataManager(&_simsdataman);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  this_00 = (ERQuickdata *)
            AddRef__16EResourceManagerUiP5EFilei
                      (&_quickdataman.field0_0x0,0x2a2af469,(EFile *)0x0,0);
  _pTable = getTable__11ERQuickdataPCc(this_00,"Sim::Table");
                    /* end of inlined section */
                    /* end of inlined section */
  bVar4 = IsAdult__4ESim(this);
  if (bVar4) {
    bVar4 = IsMale__4ESim(this);
    if (bVar4) {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
      pRowName = "AdultMale";
    }
    else {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
      pRowName = "AdultFemale";
    }
  }
  else {
    bVar4 = IsMale__4ESim(this);
    if (bVar4) {
      pRowName = "ChildMale";
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
                    /* end of inlined section */
    }
    else {
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
      pRowName = "ChildFemale";
    }
  }
  piVar8 = (int *)getRow__11ERQuickdataPCvPCc(this_00,_pTable,pRowName);
                    /* end of inlined section */
  pcVar1 = this->m_pPerson->__vtable;
  iVar9 = (*(code *)pcVar1->GetRecordTicksElapsed)
                    ((int)&this->m_pPerson->_vb1187 + (int)*(short *)&pcVar1->GetRecordCurTicks);
  switch(nMessageID) {
  case 8:
    bVar4 = IsAdult__4ESim(this);
    if (bVar4) {
      uVar15 = 0x16;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 8;
    }
    else {
      uVar15 = 0x1d;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 0xf;
    }
    if (bVar4 != false) {
      uVar15 = uVar14;
    }
    cVar5 = *(char *)(iVar9 + 0xc);
    while( true ) {
      *(char *)(iVar9 + 0xc) = cVar5 + '\x01';
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar10 = 0;
      if (*piVar8 != 0) {
        iVar10 = *(int *)(*piVar8 + -4);
      }
                    /* end of inlined section */
      if (iVar10 <= (char)(cVar5 + '\x01')) {
        *(undefined *)(iVar9 + 0xc) = 0;
      }
      bVar4 = CheckLockableByData__FUiiPUi(uVar15,(int)*(char *)(iVar9 + 0xc),&nDataID);
      if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar13 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
        if (lVar13 == 1) {
          bVar6 = CheckNeighborhoodUnlocked__FUiUi(uVar15,nDataID);
        }
        else {
          bVar6 = CheckGlobalUnlocked__FUiUi(uVar15,nDataID);
        }
      }
      if (_globals.Cheats._12_4_ != 0) {
        bVar6 = true;
      }
      if (!bVar4) goto switchD_001511a0_caseD_10;
      if (bVar6 != false) break;
      cVar5 = *(char *)(iVar9 + 0xc);
    }
    iVar10 = (int)*(char *)(iVar9 + 9);
    break;
  case 9:
    bVar4 = IsAdult__4ESim(this);
    if (bVar4) {
      uVar15 = 0x16;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 8;
    }
    else {
      uVar15 = 0x1d;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 0xf;
    }
    if (bVar4 != false) {
      uVar15 = uVar14;
    }
    cVar5 = *(char *)(iVar9 + 0xc);
    while( true ) {
      *(byte *)(iVar9 + 0xc) = cVar5 - 1U;
      if ((int)((uint)(byte)(cVar5 - 1U) << 0x18) < 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        if (*piVar8 == 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = (char)*(undefined4 *)(*piVar8 + -4);
        }
                    /* end of inlined section */
        *(char *)(iVar9 + 0xc) = cVar5 + -1;
      }
      bVar4 = CheckLockableByData__FUiiPUi(uVar15,(int)*(char *)(iVar9 + 0xc),&nDataID);
      if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar13 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
        if (lVar13 == 1) {
          bVar6 = CheckNeighborhoodUnlocked__FUiUi(uVar15,nDataID);
        }
        else {
          bVar6 = CheckGlobalUnlocked__FUiUi(uVar15,nDataID);
        }
      }
      if (_globals.Cheats._12_4_ != 0) {
        bVar6 = true;
      }
      if (!bVar4) goto switchD_001511a0_caseD_10;
      if (bVar6 != false) break;
      cVar5 = *(char *)(iVar9 + 0xc);
    }
    iVar10 = (int)*(char *)(iVar9 + 9);
    break;
  case 10:
    bVar4 = IsAdult__4ESim(this);
    if (bVar4) {
      uVar15 = 0x17;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 9;
    }
    else {
      uVar15 = 0x1e;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 0x10;
    }
    if (bVar4 != false) {
      uVar15 = uVar14;
    }
    cVar5 = *(char *)(iVar9 + 0xd);
    while( true ) {
      *(char *)(iVar9 + 0xd) = cVar5 + '\x01';
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar10 = 0;
      if (piVar8[1] != 0) {
        iVar10 = *(int *)(piVar8[1] + -4);
      }
                    /* end of inlined section */
      if (iVar10 <= (char)(cVar5 + '\x01')) {
        *(undefined *)(iVar9 + 0xd) = 0;
      }
      bVar4 = CheckLockableByData__FUiiPUi(uVar15,(int)*(char *)(iVar9 + 0xd),&nDataID);
      if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar13 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
        if (lVar13 == 1) {
          bVar6 = CheckNeighborhoodUnlocked__FUiUi(uVar15,nDataID);
        }
        else {
          bVar6 = CheckGlobalUnlocked__FUiUi(uVar15,nDataID);
        }
      }
      if (_globals.Cheats._12_4_ != 0) {
        bVar6 = true;
      }
      if (!bVar4) goto switchD_001511a0_caseD_10;
      if (bVar6 != false) break;
      cVar5 = *(char *)(iVar9 + 0xd);
    }
    iVar10 = (int)*(char *)(iVar9 + 9);
    break;
  case 0xb:
    bVar4 = IsAdult__4ESim(this);
    if (bVar4) {
      uVar15 = 0x17;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 9;
    }
    else {
      uVar15 = 0x1e;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 0x10;
    }
    if (bVar4 != false) {
      uVar15 = uVar14;
    }
    cVar5 = *(char *)(iVar9 + 0xd);
    while( true ) {
      *(byte *)(iVar9 + 0xd) = cVar5 - 1U;
      if ((int)((uint)(byte)(cVar5 - 1U) << 0x18) < 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        if (piVar8[1] == 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = (char)*(undefined4 *)(piVar8[1] + -4);
        }
                    /* end of inlined section */
        *(char *)(iVar9 + 0xd) = cVar5 + -1;
      }
      bVar4 = CheckLockableByData__FUiiPUi(uVar15,(int)*(char *)(iVar9 + 0xd),&nDataID);
      if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar13 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
        if (lVar13 == 1) {
          bVar6 = CheckNeighborhoodUnlocked__FUiUi(uVar15,nDataID);
        }
        else {
          bVar6 = CheckGlobalUnlocked__FUiUi(uVar15,nDataID);
        }
      }
      if (_globals.Cheats._12_4_ != 0) {
        bVar6 = true;
      }
      if (!bVar4) goto switchD_001511a0_caseD_10;
      if (bVar6 != false) break;
      cVar5 = *(char *)(iVar9 + 0xd);
    }
    iVar10 = (int)*(char *)(iVar9 + 9);
    break;
  case 0xc:
    bVar4 = IsAdult__4ESim(this);
    if (bVar4) {
      uVar15 = 0x18;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 10;
    }
    else {
      uVar15 = 0x1f;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 0x11;
    }
    if (bVar4 != false) {
      uVar15 = uVar14;
    }
    cVar5 = *(char *)(iVar9 + 0xe);
    while( true ) {
      *(char *)(iVar9 + 0xe) = cVar5 + '\x01';
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar10 = 0;
      if (piVar8[2] != 0) {
        iVar10 = *(int *)(piVar8[2] + -4);
      }
                    /* end of inlined section */
      if (iVar10 <= (char)(cVar5 + '\x01')) {
        *(undefined *)(iVar9 + 0xe) = 0;
      }
      bVar4 = CheckLockableByData__FUiiPUi(uVar15,(int)*(char *)(iVar9 + 0xe),&nDataID);
      if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar13 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
        if (lVar13 == 1) {
          bVar6 = CheckNeighborhoodUnlocked__FUiUi(uVar15,nDataID);
        }
        else {
          bVar6 = CheckGlobalUnlocked__FUiUi(uVar15,nDataID);
        }
      }
      if (_globals.Cheats._12_4_ != 0) {
        bVar6 = true;
      }
      if (!bVar4) goto switchD_001511a0_caseD_10;
      if (bVar6 != false) break;
      cVar5 = *(char *)(iVar9 + 0xe);
    }
    iVar10 = (int)*(char *)(iVar9 + 9);
    break;
  case 0xd:
    bVar4 = IsAdult__4ESim(this);
    if (bVar4) {
      uVar15 = 0x18;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 10;
    }
    else {
      uVar15 = 0x1f;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 0x11;
    }
    if (bVar4 != false) {
      uVar15 = uVar14;
    }
    cVar5 = *(char *)(iVar9 + 0xe);
    while( true ) {
      *(byte *)(iVar9 + 0xe) = cVar5 - 1U;
      if ((int)((uint)(byte)(cVar5 - 1U) << 0x18) < 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        if (piVar8[2] == 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = (char)*(undefined4 *)(piVar8[2] + -4);
        }
                    /* end of inlined section */
        *(char *)(iVar9 + 0xe) = cVar5 + -1;
      }
      bVar4 = CheckLockableByData__FUiiPUi(uVar15,(int)*(char *)(iVar9 + 0xe),&nDataID);
      if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar13 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
        if (lVar13 == 1) {
          bVar6 = CheckNeighborhoodUnlocked__FUiUi(uVar15,nDataID);
        }
        else {
          bVar6 = CheckGlobalUnlocked__FUiUi(uVar15,nDataID);
        }
      }
      if (_globals.Cheats._12_4_ != 0) {
        bVar6 = true;
      }
      if (!bVar4) goto switchD_001511a0_caseD_10;
      if (bVar6 != false) break;
      cVar5 = *(char *)(iVar9 + 0xe);
    }
    iVar10 = (int)*(char *)(iVar9 + 9);
    break;
  case 0xe:
    bVar4 = IsAdult__4ESim(this);
    if (bVar4) {
      uVar15 = 0x12;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 4;
    }
    else {
      uVar15 = 0x19;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 0xb;
    }
    if (bVar4 != false) {
      uVar15 = uVar14;
    }
    cVar5 = *(char *)(iVar9 + 0xb);
    while( true ) {
      *(char *)(iVar9 + 0xb) = cVar5 + '\x01';
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar10 = 0;
      if (piVar8[4] != 0) {
        iVar10 = *(int *)(piVar8[4] + -4);
      }
                    /* end of inlined section */
      if (iVar10 <= (char)(cVar5 + '\x01')) {
        *(undefined *)(iVar9 + 0xb) = 0;
      }
      bVar4 = CheckLockableByData__FUiiPUi(uVar15,(int)*(char *)(iVar9 + 0xb),&nDataID);
      if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar13 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
        if (lVar13 == 1) {
          bVar6 = CheckNeighborhoodUnlocked__FUiUi(uVar15,nDataID);
        }
        else {
          bVar6 = CheckGlobalUnlocked__FUiUi(uVar15,nDataID);
        }
      }
      if (_globals.Cheats._12_4_ != 0) {
        bVar6 = true;
      }
      if (!bVar4) goto switchD_001511a0_caseD_10;
      if (bVar6 != false) break;
      cVar5 = *(char *)(iVar9 + 0xb);
    }
    iVar10 = (int)*(char *)(iVar9 + 9);
    break;
  case 0xf:
    bVar4 = IsAdult__4ESim(this);
    if (bVar4) {
      uVar15 = 0x12;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 4;
    }
    else {
      uVar15 = 0x19;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 0xb;
    }
    if (bVar4 != false) {
      uVar15 = uVar14;
    }
    cVar5 = *(char *)(iVar9 + 0xb);
    while( true ) {
      *(byte *)(iVar9 + 0xb) = cVar5 - 1U;
      if ((int)((uint)(byte)(cVar5 - 1U) << 0x18) < 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        if (piVar8[4] == 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = (char)*(undefined4 *)(piVar8[4] + -4);
        }
                    /* end of inlined section */
        *(char *)(iVar9 + 0xb) = cVar5 + -1;
      }
      bVar4 = CheckLockableByData__FUiiPUi(uVar15,(int)*(char *)(iVar9 + 0xb),&nDataID);
      if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar13 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
        if (lVar13 == 1) {
          bVar6 = CheckNeighborhoodUnlocked__FUiUi(uVar15,nDataID);
        }
        else {
          bVar6 = CheckGlobalUnlocked__FUiUi(uVar15,nDataID);
        }
      }
      if (_globals.Cheats._12_4_ != 0) {
        bVar6 = true;
      }
      if (!bVar4) goto switchD_001511a0_caseD_10;
      if (bVar6 != false) break;
      cVar5 = *(char *)(iVar9 + 0xb);
    }
    iVar10 = (int)*(char *)(iVar9 + 9);
    break;
  default:
    goto switchD_001511a0_caseD_10;
  case 0x12:
    bVar4 = IsAdult__4ESim(this);
    if (bVar4) {
      uVar15 = 0x13;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 5;
    }
    else {
      uVar15 = 0x1a;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 0xc;
    }
    if (bVar4 != false) {
      uVar15 = uVar14;
    }
    cVar5 = *(char *)(iVar9 + 0xf);
    while( true ) {
      *(char *)(iVar9 + 0xf) = cVar5 + '\x01';
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar10 = 0;
      if (piVar8[6] != 0) {
        iVar10 = *(int *)(piVar8[6] + -4);
      }
                    /* end of inlined section */
      if (iVar10 <= (char)(cVar5 + '\x01')) {
        *(undefined *)(iVar9 + 0xf) = 0;
      }
      bVar4 = CheckLockableByData__FUiiPUi(uVar15,(int)*(char *)(iVar9 + 0xf),&nDataID);
      if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar13 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
        if (lVar13 == 1) {
          bVar6 = CheckNeighborhoodUnlocked__FUiUi(uVar15,nDataID);
        }
        else {
          bVar6 = CheckGlobalUnlocked__FUiUi(uVar15,nDataID);
        }
      }
      if (_globals.Cheats._12_4_ != 0) {
        bVar6 = true;
      }
      if (!bVar4) goto switchD_001511a0_caseD_10;
      if (bVar6 != false) break;
      cVar5 = *(char *)(iVar9 + 0xf);
    }
    iVar10 = (int)*(char *)(iVar9 + 9);
    break;
  case 0x13:
    bVar4 = IsAdult__4ESim(this);
    if (bVar4) {
      uVar15 = 0x13;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 5;
    }
    else {
      uVar15 = 0x1a;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 0xc;
    }
    if (bVar4 != false) {
      uVar15 = uVar14;
    }
    cVar5 = *(char *)(iVar9 + 0xf);
    while( true ) {
      *(byte *)(iVar9 + 0xf) = cVar5 - 1U;
      if ((int)((uint)(byte)(cVar5 - 1U) << 0x18) < 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        if (piVar8[6] == 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = (char)*(undefined4 *)(piVar8[6] + -4);
        }
                    /* end of inlined section */
        *(char *)(iVar9 + 0xf) = cVar5 + -1;
      }
      bVar4 = CheckLockableByData__FUiiPUi(uVar15,(int)*(char *)(iVar9 + 0xf),&nDataID);
      if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar13 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
        if (lVar13 == 1) {
          bVar6 = CheckNeighborhoodUnlocked__FUiUi(uVar15,nDataID);
        }
        else {
          bVar6 = CheckGlobalUnlocked__FUiUi(uVar15,nDataID);
        }
      }
      if (_globals.Cheats._12_4_ != 0) {
        bVar6 = true;
      }
      if (!bVar4) goto switchD_001511a0_caseD_10;
      if (bVar6 != false) break;
      cVar5 = *(char *)(iVar9 + 0xf);
    }
    iVar10 = (int)*(char *)(iVar9 + 9);
    break;
  case 0x16:
    bVar4 = IsAdult__4ESim(this);
    if (bVar4) {
      uVar15 = 0x14;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 6;
    }
    else {
      uVar15 = 0x1b;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 0xd;
    }
    if (bVar4 != false) {
      uVar15 = uVar14;
    }
    cVar5 = *(char *)(iVar9 + 9);
    while( true ) {
      *(char *)(iVar9 + 9) = cVar5 + '\x01';
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar10 = 0;
      if (piVar8[5] != 0) {
        iVar10 = *(int *)(piVar8[5] + -4);
      }
                    /* end of inlined section */
      if (iVar10 <= (char)(cVar5 + '\x01')) {
        *(undefined *)(iVar9 + 9) = 0;
      }
      bVar4 = CheckLockableByData__FUiiPUi(uVar15,(int)*(char *)(iVar9 + 9),&nDataID);
      if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar13 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
        if (lVar13 == 1) {
          bVar6 = CheckNeighborhoodUnlocked__FUiUi(uVar15,nDataID);
        }
        else {
          bVar6 = CheckGlobalUnlocked__FUiUi(uVar15,nDataID);
        }
      }
      if (_globals.Cheats._12_4_ != 0) {
        bVar6 = true;
      }
      if (!bVar4) goto switchD_001511a0_caseD_10;
      if (bVar6 != false) break;
      cVar5 = *(char *)(iVar9 + 9);
    }
    iVar10 = (int)*(char *)(iVar9 + 9);
    break;
  case 0x17:
    bVar4 = IsAdult__4ESim(this);
    if (bVar4) {
      uVar15 = 0x14;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 6;
    }
    else {
      uVar15 = 0x1b;
      bVar4 = IsMale__4ESim(this);
      uVar14 = 0xd;
    }
    if (bVar4 != false) {
      uVar15 = uVar14;
    }
    cVar5 = *(char *)(iVar9 + 9);
    while( true ) {
      *(byte *)(iVar9 + 9) = cVar5 - 1U;
      if ((int)((uint)(byte)(cVar5 - 1U) << 0x18) < 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
        if (piVar8[5] == 0) {
          cVar5 = '\0';
        }
        else {
          cVar5 = (char)*(undefined4 *)(piVar8[5] + -4);
        }
                    /* end of inlined section */
        *(char *)(iVar9 + 9) = cVar5 + -1;
      }
      bVar4 = CheckLockableByData__FUiiPUi(uVar15,(int)*(char *)(iVar9 + 9),&nDataID);
      if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar13 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
        if (lVar13 == 1) {
          bVar6 = CheckNeighborhoodUnlocked__FUiUi(uVar15,nDataID);
        }
        else {
          bVar6 = CheckGlobalUnlocked__FUiUi(uVar15,nDataID);
        }
      }
      if (_globals.Cheats._12_4_ != 0) {
        bVar6 = true;
      }
      if (!bVar4) goto switchD_001511a0_caseD_10;
      if (bVar6 != false) break;
      cVar5 = *(char *)(iVar9 + 9);
    }
    iVar10 = (int)*(char *)(iVar9 + 9);
    break;
  case 0x1c:
    cVar5 = *(char *)(iVar9 + 0x12) + '\x01';
    *(char *)(iVar9 + 0x12) = cVar5;
    if (' ' < cVar5) {
      *(undefined *)(iVar9 + 0x12) = 0;
    }
    goto switchD_001511a0_caseD_10;
  case 0x1d:
    bVar7 = *(char *)(iVar9 + 0x12) - 1;
    *(byte *)(iVar9 + 0x12) = bVar7;
    if ((int)((uint)bVar7 << 0x18) < 0) {
      *(undefined *)(iVar9 + 0x12) = 0x20;
    }
    goto switchD_001511a0_caseD_10;
  case 0x1e:
    cVar5 = *(char *)(iVar9 + 0x13) + '\x01';
    *(char *)(iVar9 + 0x13) = cVar5;
    if (' ' < cVar5) {
      *(undefined *)(iVar9 + 0x13) = 0;
    }
    goto switchD_001511a0_caseD_10;
  case 0x1f:
    bVar7 = *(char *)(iVar9 + 0x13) - 1;
    *(byte *)(iVar9 + 0x13) = bVar7;
    if ((int)((uint)bVar7 << 0x18) < 0) {
      *(undefined *)(iVar9 + 0x13) = 0x20;
    }
    goto switchD_001511a0_caseD_10;
  case 0x20:
    cVar5 = *(char *)(iVar9 + 0x14) + '\x01';
    *(char *)(iVar9 + 0x14) = cVar5;
    if (' ' < cVar5) {
      *(undefined *)(iVar9 + 0x14) = 0;
    }
    goto switchD_001511a0_caseD_10;
  case 0x21:
    bVar7 = *(char *)(iVar9 + 0x14) - 1;
    *(byte *)(iVar9 + 0x14) = bVar7;
    if ((int)((uint)bVar7 << 0x18) < 0) {
      *(undefined *)(iVar9 + 0x14) = 0x20;
    }
    goto switchD_001511a0_caseD_10;
  case 0x22:
    cVar5 = *(char *)(iVar9 + 0x11) + '\x01';
    *(char *)(iVar9 + 0x11) = cVar5;
    if ('\v' < cVar5) {
      *(undefined *)(iVar9 + 0x11) = 0;
    }
    goto switchD_001511a0_caseD_10;
  case 0x23:
    bVar7 = *(char *)(iVar9 + 0x11) - 1;
    *(byte *)(iVar9 + 0x11) = bVar7;
    if ((int)((uint)bVar7 << 0x18) < 0) {
      *(undefined *)(iVar9 + 0x11) = 0xb;
    }
    goto switchD_001511a0_caseD_10;
  case 0x26:
    cVar5 = *(char *)(iVar9 + 0x16) + '\x01';
    *(char *)(iVar9 + 0x16) = cVar5;
    if (' ' < cVar5) {
      *(undefined *)(iVar9 + 0x16) = 0;
    }
    goto switchD_001511a0_caseD_10;
  case 0x27:
    bVar7 = *(char *)(iVar9 + 0x16) - 1;
    *(byte *)(iVar9 + 0x16) = bVar7;
    if ((int)((uint)bVar7 << 0x18) < 0) {
      *(undefined *)(iVar9 + 0x16) = 0x20;
    }
switchD_001511a0_caseD_10:
    iVar10 = (int)*(char *)(iVar9 + 9);
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  uVar15 = *(uint *)(piVar8[5] + iVar10 * 4);
  if (uVar15 == 0) {
    this->m_Models[0] = (ERModel *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    uVar15 = *(uint *)(piVar8[5] + local_ac->m_nGlassesIndex * 4);
    if (uVar15 != 0) {
      DelRef__16EResourceManagerUi(&_modelman.field0_0x0,uVar15);
    }
  }
  else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    uVar14 = *(uint *)(piVar8[5] + local_ac->m_nGlassesIndex * 4);
    if (uVar15 != uVar14) {
                    /* end of inlined section */
      if (uVar14 != 0) {
                    /* end of inlined section */
        DelRef__16EResourceManagerUi(&_modelman.field0_0x0,uVar14);
      }
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
      pEVar11 = (ERModel *)
                AddRef__16EResourceManagerUiP5EFilei
                          (&_modelman.field0_0x0,*(uint *)(piVar8[5] + *(char *)(iVar9 + 9) * 4),
                           (EFile *)0x0,0);
                    /* end of inlined section */
      this->m_Models[0] = pEVar11;
    }
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  uVar15 = *(uint *)(piVar8[3] + local_ac->m_nFaceIndex * 8);
  if (*(uint *)(piVar8[3] + *(char *)(iVar9 + 10) * 8) != uVar15) {
    DelRef__16EResourceManagerUi(&_modelman.field0_0x0,uVar15);
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar11 = (ERModel *)
              AddRef__16EResourceManagerUiP5EFilei
                        (&_modelman.field0_0x0,*(uint *)(piVar8[3] + *(char *)(iVar9 + 10) * 8),
                         (EFile *)0x0,0);
                    /* end of inlined section */
    this->m_Models[1] = pEVar11;
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  uVar15 = *(uint *)(local_ac->m_nHairHatIndex * 0xc + piVar8[4]);
  if (*(uint *)(piVar8[4] + *(char *)(iVar9 + 0xb) * 0xc) != uVar15) {
    DelRef__16EResourceManagerUi(&_modelman.field0_0x0,uVar15);
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar11 = (ERModel *)
              AddRef__16EResourceManagerUiP5EFilei
                        (&_modelman.field0_0x0,*(uint *)(piVar8[4] + *(char *)(iVar9 + 0xb) * 0xc),
                         (EFile *)0x0,0);
                    /* end of inlined section */
    this->m_Models[2] = pEVar11;
  }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  pcVar2 = this->m_pPerson;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  this->m_OriginalModelIds[0] = *(uint *)(piVar8[5] + *(char *)(iVar9 + 9) * 4);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  this->m_OriginalModelIds[1] = *(uint *)(piVar8[3] + *(char *)(iVar9 + 10) * 8);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  this->m_OriginalModelIds[2] = *(uint *)(piVar8[4] + *(char *)(iVar9 + 0xb) * 0xc);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  this->m_OriginalModelIds[3] = *(uint *)(*piVar8 + *(char *)(iVar9 + 0xc) * 0xc);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  this->m_OriginalModelIds[4] = *(uint *)(piVar8[1] + *(char *)(iVar9 + 0xd) * 0xc);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  this->m_OriginalModelIds[5] = *(uint *)(piVar8[2] + *(char *)(iVar9 + 0xe) * 8);
  pcVar1 = pcVar2->__vtable;
  lVar13 = (*(code *)pcVar1->GetRecordDuration)
                     ((int)&pcVar2->_vb1187 + (int)*(short *)&pcVar1->GetRecording,8);
  if (lVar13 == 0) {
    DelRef__9EResource(&this->m_Models[3]->field0_0x0);
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar11 = (ERModel *)
              AddRef__16EResourceManagerUiP5EFilei
                        (&_modelman.field0_0x0,*(uint *)(*piVar8 + *(char *)(iVar9 + 0xc) * 0xc),
                         (EFile *)0x0,0);
                    /* end of inlined section */
    this->m_Models[3] = pEVar11;
    DelRef__9EResource(&this->m_Models[4]->field0_0x0);
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar11 = (ERModel *)
              AddRef__16EResourceManagerUiP5EFilei
                        (&_modelman.field0_0x0,*(uint *)(piVar8[1] + *(char *)(iVar9 + 0xd) * 0xc),
                         (EFile *)0x0,0);
                    /* end of inlined section */
    this->m_Models[4] = pEVar11;
    DelRef__9EResource(&this->m_Models[5]->field0_0x0);
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
    pEVar11 = (ERModel *)
              AddRef__16EResourceManagerUiP5EFilei
                        (&_modelman.field0_0x0,*(uint *)(piVar8[2] + *(char *)(iVar9 + 0xe) * 8),
                         (EFile *)0x0,0);
                    /* end of inlined section */
    this->m_Models[5] = pEVar11;
  }
  createSkinDirect__4ESimPCQ23Sim7Costume(this,(Costume *)0x0);
  DelRef__16EResourceManagerP9EResource(&_quickdataman.field0_0x0,(EResource *)this_00);
  pEVar12 = this->m_pSimHead;
  if (pEVar12 != (ESims3DHead *)0x0) {
    pEVar3 = (pEVar12->field0_0x0).__vtable;
    (*(code *)pEVar3->Draw)
              ((int)&(pEVar12->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar3->Update,3);
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/simhead.h */
  pEVar12 = (ESims3DHead *)_memmanAlloc__FUiUi(0x290,0x10);
  memset(pEVar12,0,0x290);
                    /* end of inlined section */
  pEVar12 = __11ESims3DHeadP4ESim(pEVar12,this);
  this->m_pSimHead = pEVar12;
  return;
}

void ESim::changeClothingColor(u8 nColorIndex, ERRleTexture *pTexture, u32 *pStoredPalette) {
	u32 i;
	float fTempHue;
	EVec3 vHSL;
	u32 nPaletteSize;
	u32 nAlpha;
	u32 *pCurPixel;
	ERRleTexture *this;
	ERRleTexture *this;
	
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  uint *puVar4;
  undefined8 unaff_s2;
  uint uVar5;
  undefined8 unaff_s3;
  uint *puVar6;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  uint uVar7;
  undefined8 unaff_s6;
  uint uVar8;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar9;
  float fVar10;
  EVec3 vHSL;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  uint local_d0;
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
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  uVar3 = (int)(char)nColorIndex & 0xff;
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
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (pTexture != (ERRleTexture *)0x0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    puVar4 = pTexture->m_nPalette;
    uVar8 = 0x10;
    if (*(int *)&pTexture->m_bFourBitImage == 0) {
      uVar8 = 0x100;
    }
    vHSL.field0_0x0.d[2] = 0.0;
    vHSL.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
    uVar7 = 0;
                    /* end of inlined section */
    vHSL.field0_0x0.d[0] = 0.0;
    if (uVar8 != 0) {
      fVar10 = 0.2;
      local_d0 = (uint)(uVar3 - 0x1e < 3);
      puVar6 = puVar4;
      do {
        uVar5 = *puVar6 & 0xff000000;
        *pStoredPalette = *puVar6;
        if (uVar5 == 0) {
          *puVar4 = 0;
        }
        else {
          if (uVar3 == 1) {
            if (_globals.Cheats._60_4_ == 0) goto LAB_00152388;
            uVar2 = *puVar6;
          }
          else {
            uVar2 = *puVar6;
          }
          RGBtoHSL__4ESimUiP5EVec3(uVar2,&vHSL);
          if (vHSL.field0_0x0.d[0] < 1.0) {
            if (_globals.Cheats._60_4_ == 0) {
              if (local_d0 == 0) {
                vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + (float)(uVar3 / 3) * 0.1;
                if (1.0 < vHSL.field0_0x0.d[0]) {
                  vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
                }
                    /* end of inlined section */
                if (uVar3 % 3 == 0) {
                    /* end of inlined section */
                  vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] - 0.15;
                  if (vHSL.field0_0x0.d[2] < 0.0) {
                    /* end of inlined section */
                    vHSL.field0_0x0.d[2] = 0.0;
                  }
                }
                else if (uVar3 % 3 == 2) {
                    /* end of inlined section */
                  fVar9 = 1.0;
                  vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + 0.15;
                  bVar1 = 1.0 < vHSL.field0_0x0.d[2];
                  goto LAB_00152348;
                }
              }
              else {
                    /* end of inlined section */
                vHSL.field0_0x0.d[1] = 0.0;
                if (uVar3 % 3 == 0) {
                    /* end of inlined section */
                  fVar9 = 0.0;
                  vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] - fVar10;
                  bVar1 = vHSL.field0_0x0.d[2] < 0.0;
                    /* end of inlined section */
LAB_00152348:
                  if (bVar1) {
                    vHSL.field0_0x0.d[2] = fVar9;
                  }
                }
                else {
                    /* end of inlined section */
                  if ((uVar3 % 3 == 2) &&
                     (vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar10,
                     1.0 < vHSL.field0_0x0.d[2])) {
                    /* end of inlined section */
                    vHSL.field0_0x0.d[2] = 1.0;
                  }
                }
              }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
              local_dc = vHSL.field0_0x0.d[1];
              local_e0 = vHSL.field0_0x0.d[0];
            }
            else {
                    /* end of inlined section */
              if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
                vHSL.field0_0x0.d[2] = 1.0;
              }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
              local_e0 = vHSL.field0_0x0.d[0];
                    /* end of inlined section */
              local_dc = 0.0;
            }
            vHSL.field0_0x0.d[0] = local_e0;
            vHSL.field0_0x0.d[1] = local_dc;
            local_d8 = vHSL.field0_0x0.d[2];
                    /* end of inlined section */
            uVar2 = HSLtoRGB__4ESimG5EVec3((EVec3 *)&local_e0);
            *puVar4 = uVar5 + uVar2;
          }
        }
LAB_00152388:
        uVar7 = uVar7 + 1;
        puVar4 = puVar4 + 1;
        pStoredPalette = pStoredPalette + 1;
        puVar6 = puVar6 + 1;
      } while (uVar7 < uVar8);
    }
  }
  return;
}

void ESim::changeSkinColor(u8 nColorIndex, ERRleTexture *pTexture, u32 *pStoredPalette) {
	u32 i;
	EVec3 vHSL;
	u32 nPaletteSize;
	u32 nAlpha;
	u32 *pCurPixel;
	float fHueOffset;
	float fSatOffset;
	float fLumOffset;
	float fTempOffset;
	ERRleTexture *this;
	ERRleTexture *this;
	
  uint uVar1;
  uint *puVar2;
  undefined8 unaff_s0;
  uint *puVar3;
  undefined8 unaff_s1;
  uint uVar4;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  uint uVar5;
  undefined8 unaff_s4;
  uint uVar6;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  EVec3 vHSL;
  float local_a0;
  float local_9c;
  float local_98;
  float fHueOffset;
  float fSatOffset;
  float fLumOffset;
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
  
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
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
  if (pTexture != (ERRleTexture *)0x0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    puVar3 = pTexture->m_nPalette;
    uVar6 = 0x10;
    if (*(int *)&pTexture->m_bFourBitImage == 0) {
      uVar6 = 0x100;
    }
    vHSL.field0_0x0.d[2] = 0.0;
    vHSL.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vHSL.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
    uVar5 = 0;
    GetHSLChangeFromSkinColor__4ESimUcRfN22(this,nColorIndex,&fHueOffset,&fSatOffset,&fLumOffset);
    puVar2 = puVar3;
    if (uVar6 != 0) {
      do {
        uVar4 = *puVar2 & 0xff000000;
        *pStoredPalette = *puVar2;
        if (uVar4 == 0) {
          *puVar3 = 0;
        }
        else {
          RGBtoHSL__4ESimUiP5EVec3(*puVar2,&vHSL);
          if (vHSL.field0_0x0.d[0] < 1.0) {
                    /* end of inlined section */
            vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + fHueOffset;
            if (1.0 < vHSL.field0_0x0.d[0]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
            }
            else if (vHSL.field0_0x0.d[0] < 0.0) {
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + 1.0;
            }
                    /* end of inlined section */
                    /* end of inlined section */
            vHSL.field0_0x0.d[1] = vHSL.field0_0x0.d[1] + fSatOffset;
            if (1.0 < vHSL.field0_0x0.d[1]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 1.0;
            }
            else if (vHSL.field0_0x0.d[1] < 0.0) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 0.0;
            }
                    /* end of inlined section */
            vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fLumOffset;
            if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 1.0;
            }
            else if (vHSL.field0_0x0.d[2] < 0.0) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 0.0;
            }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_9c = vHSL.field0_0x0.d[1];
                    /* end of inlined section */
            local_98 = vHSL.field0_0x0.d[2];
            local_a0 = vHSL.field0_0x0.d[0];
            uVar1 = HSLtoRGB__4ESimG5EVec3((EVec3 *)&local_a0);
            *puVar3 = uVar4 + uVar1;
          }
        }
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 1;
        pStoredPalette = pStoredPalette + 1;
        puVar2 = puVar2 + 1;
      } while (uVar5 < uVar6);
    }
  }
  return;
}

u32 ESim::GetRGBFromSkinColor(u8 nColorIndex) {
	float fHueOffset;
	float fSatOffset;
	float fLumOffset;
	EVec3 vHSL;
	float fTempOffset;
	
  uint uVar1;
  undefined8 unaff_retaddr;
  EVec3 vHSL;
  float local_30;
  float local_2c;
  float local_28;
  float fHueOffset;
  float fSatOffset;
  float fLumOffset;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  GetHSLChangeFromSkinColor__4ESimUcRfN22(this,nColorIndex,&fHueOffset,&fSatOffset,&fLumOffset);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vHSL.field0_0x0.d[2] = 0.0;
  vHSL.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vHSL.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
  RGBtoHSL__4ESimUiP5EVec3(0xffe9bea4,&vHSL);
  if (vHSL.field0_0x0.d[0] < 1.0) {
                    /* end of inlined section */
    vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + fHueOffset;
    if (1.0 < vHSL.field0_0x0.d[0]) {
                    /* end of inlined section */
      vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
    }
    else if (vHSL.field0_0x0.d[0] < 0.0) {
                    /* end of inlined section */
      vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + 1.0;
    }
                    /* end of inlined section */
    vHSL.field0_0x0.d[1] = vHSL.field0_0x0.d[1] + fSatOffset;
    if (1.0 < vHSL.field0_0x0.d[1]) {
                    /* end of inlined section */
      vHSL.field0_0x0.d[1] = 1.0;
    }
    else if (vHSL.field0_0x0.d[1] < 0.0) {
                    /* end of inlined section */
      vHSL.field0_0x0.d[1] = 0.0;
    }
                    /* end of inlined section */
    vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fLumOffset;
    if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
      vHSL.field0_0x0.d[2] = 1.0;
    }
    else if (vHSL.field0_0x0.d[2] < 0.0) {
                    /* end of inlined section */
      vHSL.field0_0x0.d[2] = 0.0;
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_30 = vHSL.field0_0x0.d[0];
    local_2c = vHSL.field0_0x0.d[1];
                    /* end of inlined section */
    local_28 = vHSL.field0_0x0.d[2];
    uVar1 = HSLtoRGB__4ESimG5EVec3((EVec3 *)&local_30);
    uVar1 = uVar1 - 0x1000000;
  }
  else {
    uVar1 = 0xff000000;
  }
  return uVar1;
}

void ESim::GetHSLChangeFromSkinColor(u8 nColorIndex, float &fHueOffset, float &fSatOffset, float &fLumOffset) {
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (_globals.Cheats._60_4_ != 0) {
    *fHueOffset = -0.38;
    *fSatOffset = 0.0;
    *fLumOffset = -0.15;
    return;
  }
  iVar1 = ((int)(char)nColorIndex & 0xffU) - 1;
  if (_globals.Cheats._56_4_ == 0) {
    switch(iVar1) {
    case 0:
      fVar3 = 0.04;
      fVar2 = -0.1;
      *fHueOffset = 0.015;
      break;
    case 1:
      fVar3 = -0.03;
      fVar2 = -0.2;
      *fHueOffset = 0.028;
      break;
    case 2:
      fVar3 = -0.008;
      fVar2 = -0.27;
      *fHueOffset = 0.015;
      break;
    case 3:
      fVar3 = -0.005;
      fVar2 = -0.4;
      *fHueOffset = 0.015;
      break;
    case 4:
      fVar3 = -0.01;
      fVar2 = -0.5;
      *fHueOffset = 0.03;
      break;
    case 5:
      fVar3 = -0.08;
      fVar2 = -0.55;
      *fHueOffset = 0.03;
      break;
    case 6:
      *fHueOffset = 0.0;
      *fSatOffset = -0.0125;
      *fLumOffset = 0.045;
      return;
    default:
      fVar3 = -0.006;
      *fHueOffset = 0.007;
      fVar2 = -0.03;
    }
    *fSatOffset = fVar3;
    *fLumOffset = fVar2;
    return;
  }
  *fSatOffset = -0.15;
  *fLumOffset = -0.15;
  switch(iVar1) {
  case 0:
    *fHueOffset = 0.2;
    return;
  case 1:
    *fHueOffset = 0.3;
    return;
  case 2:
    *fHueOffset = 0.4;
    return;
  case 3:
    *fHueOffset = 0.5;
    return;
  case 4:
    *fHueOffset = -0.4;
    return;
  case 5:
    *fHueOffset = -0.29;
    return;
  case 6:
    *fHueOffset = -0.12;
    return;
  default:
    *fHueOffset = 0.1;
    return;
  }
}

void ESim::changeHairColor(u8 nColorIndex, ERRleTexture *pTexture, u32 *pStoredPalette) {
	u32 i;
	EVec3 vHSL;
	u32 nPaletteSize;
	u32 nAlpha;
	u32 *pPalette;
	u32 *pCurPixel;
	float fHueOffset;
	float fSatOffset;
	float fLumOffset;
	float fTempOffset;
	ERRleTexture *this;
	ERRleTexture *this;
	
  uint uVar1;
  uint uVar2;
  undefined8 unaff_s0;
  uint *puVar3;
  undefined8 unaff_s1;
  uint *puVar4;
  undefined8 unaff_s2;
  uint uVar5;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  uint uVar6;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  EVec3 vHSL;
  float local_a0;
  float local_9c;
  float local_98;
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
  
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (pTexture == (ERRleTexture *)0x0) {
    return;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  puVar4 = pTexture->m_nPalette;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  uVar6 = 0x10;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vHSL.field0_0x0.d[2] = 0.0;
  if (*(int *)&pTexture->m_bFourBitImage == 0) {
    uVar6 = 0x100;
  }
  vHSL.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
  vHSL.field0_0x0.d[0] = 0.0;
  if (_globals.Cheats._60_4_ != 0) {
switchD_00152a44_caseD_8:
    fVar10 = -0.5;
    fVar8 = -1.0;
    fVar7 = 0.25;
    goto LAB_00152bec;
  }
  switch(nColorIndex) {
  case '\0':
    fVar10 = -0.019445;
    fVar8 = 0.11;
    fVar7 = 0.1;
    break;
  default:
    fVar8 = 0.0;
    fVar10 = 0.0;
    fVar7 = 0.0;
    break;
  case '\x02':
    fVar10 = -0.00833;
    fVar8 = -0.065;
    fVar7 = -0.14;
    break;
  case '\x03':
    fVar10 = -0.03889;
    fVar8 = 0.19;
    fVar7 = -0.175;
    break;
  case '\x04':
    fVar10 = -0.12;
    fVar8 = -0.13;
    fVar7 = -0.255;
    break;
  case '\x05':
    fVar10 = -0.025;
    fVar8 = 0.005;
    fVar7 = -0.265;
    break;
  case '\x06':
    fVar10 = -0.07778;
    goto LAB_00152b48;
  case '\a':
    fVar10 = -0.46665;
LAB_00152b48:
    fVar8 = -0.13;
    fVar7 = -0.35;
    break;
  case '\b':
    goto switchD_00152a44_caseD_8;
  case '\t':
    fVar10 = 0.0;
    fVar8 = -0.1;
    fVar7 = 0.13;
    break;
  case '\n':
    fVar10 = 0.005555;
    fVar8 = 0.025;
    fVar7 = 0.15;
  }
LAB_00152bec:
  if ((nColorIndex == '\x01') && (_globals.Cheats._60_4_ == 0)) {
    uVar2 = 0;
    if (uVar6 != 0) {
      do {
        uVar5 = *puVar4;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 1;
        *pStoredPalette = uVar5;
        pStoredPalette = pStoredPalette + 1;
      } while (uVar2 < uVar6);
    }
  }
  else {
    uVar2 = 0;
    if (uVar6 != 0) {
      fVar9 = 0.0;
      puVar3 = puVar4;
      do {
        *pStoredPalette = *puVar3;
        uVar5 = *puVar3 & 0xff000000;
        if (uVar5 == 0) {
          *puVar4 = 0;
        }
        else {
          RGBtoHSL__4ESimUiP5EVec3(*puVar3,&vHSL);
          if (1.0 <= vHSL.field0_0x0.d[0]) {
            *puVar4 = *puVar3;
          }
          else {
            vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + fVar10;
                    /* end of inlined section */
            if (1.0 < vHSL.field0_0x0.d[0]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] - 1.0;
            }
            else if (vHSL.field0_0x0.d[0] < fVar9) {
              vHSL.field0_0x0.d[0] = vHSL.field0_0x0.d[0] + 1.0;
            }
                    /* end of inlined section */
                    /* end of inlined section */
            vHSL.field0_0x0.d[1] = vHSL.field0_0x0.d[1] + fVar8;
            if (1.0 < vHSL.field0_0x0.d[1]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 1.0;
            }
            else if (vHSL.field0_0x0.d[1] < fVar9) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[1] = 0.0;
            }
                    /* end of inlined section */
            vHSL.field0_0x0.d[2] = vHSL.field0_0x0.d[2] + fVar7;
            if (1.0 < vHSL.field0_0x0.d[2]) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 1.0;
            }
            else if (vHSL.field0_0x0.d[2] < fVar9) {
                    /* end of inlined section */
              vHSL.field0_0x0.d[2] = 0.0;
            }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_9c = vHSL.field0_0x0.d[1];
                    /* end of inlined section */
            local_98 = vHSL.field0_0x0.d[2];
            local_a0 = vHSL.field0_0x0.d[0];
            uVar1 = HSLtoRGB__4ESimG5EVec3((EVec3 *)&local_a0);
            *puVar4 = uVar5 + uVar1;
          }
        }
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 1;
        pStoredPalette = pStoredPalette + 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 < uVar6);
    }
  }
  return;
}

void ESim::restorePalette(ERRleTexture *pTexture, u32 *pStoredPalette) {
	u32 i;
	u32 *pCurPixel;
	u32 nPaletteSize;
	ERRleTexture *this;
	ERRleTexture *this;
	
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_rrletexture.h */
  puVar2 = pTexture->m_nPalette;
  uVar4 = 0x10;
  if (*(int *)&pTexture->m_bFourBitImage == 0) {
    uVar4 = 0x100;
  }
                    /* end of inlined section */
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      uVar1 = *pStoredPalette;
      uVar3 = uVar3 + 1;
      pStoredPalette = pStoredPalette + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar4);
  }
  return;
}

u32 ESim::HSLtoRGB(EVec3 vHSL) {
	float r;
	float g;
	float b;
	float v;
	float h;
	float sl;
	float l;
	u32 nReturnValue;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	int sextant;
	float m;
	float sv;
	float fract;
	float vsf;
	float mid1;
	float mid2;
	
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = (vHSL->field0_0x0).d[2];
  fVar6 = (vHSL->field0_0x0).d[1];
  if (fVar4 <= 0.5) {
    fVar6 = fVar6 * fVar4 + fVar4;
  }
  else {
    fVar6 = (fVar4 + fVar6) - fVar4 * fVar6;
  }
  if (0.0 < fVar6) {
    fVar7 = (vHSL->field0_0x0).d[0] * 6.0;
    fVar5 = (fVar4 + fVar4) - fVar6;
    iVar2 = (int)fVar7;
    fVar3 = fVar6 * ((fVar6 - fVar5) / fVar6) * (fVar7 - (float)iVar2);
    fVar1 = fVar6 - fVar3;
    fVar3 = fVar5 + fVar3;
    fVar4 = fVar5;
    fVar7 = fVar5;
    switch(iVar2) {
    case 0:
      fVar7 = fVar6;
      break;
    case 1:
      fVar7 = fVar1;
      fVar3 = fVar6;
      break;
    case 2:
      fVar4 = fVar3;
      fVar3 = fVar6;
      break;
    case 3:
      fVar4 = fVar6;
      fVar3 = fVar1;
      break;
    case 4:
      fVar4 = fVar6;
      fVar7 = fVar3;
      fVar3 = fVar5;
      break;
    case 5:
    case 6:
      fVar4 = fVar1;
      fVar7 = fVar6;
      fVar3 = fVar5;
      break;
    default:
      goto switchD_00152ea8_caseD_7;
    }
  }
  else {
switchD_00152ea8_caseD_7:
    fVar4 = 0.0;
    fVar7 = 0.0;
    fVar3 = 0.0;
  }
  return ((int)(fVar7 * 255.0) & 0xffU) + ((int)(fVar3 * 255.0) & 0xffU) * 0x100 +
         ((int)(fVar4 * 255.0) & 0xffU) * 0x10000;
}

void ESim::RGBtoHSL(u32 rgb, EVec3 *vHSL) {
	float v;
	float m;
	float vm;
	float r2;
	float g2;
	float b2;
	float r;
	float g;
	float b;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = (float)(rgb & 0xff) * 0.003921569;
  fVar7 = (float)(rgb >> 8 & 0xff) * 0.003921569;
  fVar1 = (float)((int)fVar7 * (uint)(fVar6 < fVar7) | (int)fVar6 * (uint)(fVar6 >= fVar7));
  fVar4 = (float)((int)fVar7 * (uint)(fVar7 < fVar6) | (int)fVar6 * (uint)(fVar7 >= fVar6));
  fVar3 = (float)(rgb >> 0x10 & 0xff) * 0.003921569;
  fVar2 = (float)((int)fVar3 * (uint)(fVar1 < fVar3) | (int)fVar1 * (uint)(fVar1 >= fVar3));
  fVar5 = (float)((int)fVar3 * (uint)(fVar3 < fVar4) | (int)fVar4 * (uint)(fVar3 >= fVar4));
  fVar1 = fVar5 + fVar2;
  fVar4 = fVar2 - fVar5;
  (vHSL->field0_0x0).d[1] = fVar4;
  (vHSL->field0_0x0).d[2] = fVar1 * 0.5;
  if (0.5 < fVar1 * 0.5) {
    fVar1 = (2.0 - fVar2) - fVar5;
  }
  (vHSL->field0_0x0).d[1] = fVar4 / fVar1;
  fVar3 = (fVar2 - fVar3) / fVar4;
  fVar1 = (fVar2 - fVar6) / fVar4;
  fVar4 = (fVar2 - fVar7) / fVar4;
  if (fVar6 == fVar2) {
    if (fVar7 == fVar5) {
      fVar1 = fVar3 + 5.0;
    }
    else {
      fVar1 = 1.0 - fVar4;
    }
  }
  else if (fVar7 == fVar2) {
    if (fVar6 == fVar5) {
      fVar1 = fVar1 + 3.0;
    }
    else {
      fVar1 = 3.0 - fVar3;
    }
  }
  else if (fVar6 == fVar5) {
    fVar1 = fVar4 + 3.0;
  }
  else {
    fVar1 = 5.0 - fVar1;
  }
  (vHSL->field0_0x0).d[0] = fVar1;
  (vHSL->field0_0x0).d[0] = (vHSL->field0_0x0).d[0] * 0.1666667;
  return;
}

void* ESim::DefaultAlloc(u32 size) {
  void *pvVar1;
  
  pvVar1 = Alloc__5EHeapUiUi(&_4ESim_m_MyHeap,size,4);
  return pvVar1;
}

void ESim::DefaultFree(void *p) {
  Free__5EHeapPv(&_4ESim_m_MyHeap,p);
  return;
}

void ESim::CreateThumbnail(bool bIsSimStanding) {
	void *pHeapPointer;
	ERC *prc;
	EPortalWindow win;
	int i;
	ERenderSurfaceDef rsd;
	ERenderSurface *prs;
	EMat4 mSimOrient;
	u32 renderFlags;
	ETextureDef td;
	ETexture *pOrigTexture;
	unsigned char nCurPixelColor[3];
	int x;
	int y;
	int z;
	u32 *pOrigPixel;
	ETexture *pFaceImage;
	u32 *pNewColor;
	u8 *pNewPixel;
	ERTQuantize Quantize;
	int nPaletteSize;
	EVec3 *this;
	ERC *this;
	EAnimController *this;
	ESim *this;
	
  undefined *puVar1;
  EGlobalManagerClient__vtable *pEVar2;
  EShader__vtable *pEVar3;
  cXObject__150_1187__vtable *pcVar4;
  ulong *puVar5;
  bool bVar6;
  void *pvVar7;
  int iVar8;
  ETexture *pTexture;
  int *piVar9;
  int iVar10;
  cXPerson__150_1300 *pcVar11;
  ObjSelector *this_00;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ERC__vtable *pEVar15;
  ERModel *this_01;
  ERenderSurface *pRenderSurface;
  undefined4 *puVar16;
  uint uVar17;
  undefined8 unaff_s0;
  int iVar18;
  int iVar19;
  undefined8 unaff_s1;
  ERC *prc;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar20;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar21;
  EPortalWindow win;
  ERenderSurfaceDef rsd;
  EMat4 mSimOrient;
  undefined4 local_1e20;
  undefined1 *local_1e1c;
  undefined4 local_1e10;
  undefined4 local_1e0c;
  undefined4 local_1e08;
  undefined4 local_1e04;
  ETextureDef td;
  undefined4 local_1de0;
  undefined4 local_1ddc;
  undefined4 local_1dd8;
  uchar nCurPixelColor [3];
  ERTQuantize Quantize;
  int x;
  int y;
  void *pHeapPointer;
  uchar *pNewPixel;
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
  
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
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
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  Flush__16ESimsDataManager(&_simsdataman);
  pHeapPointer = GetUpper32k__17ESimScratchPadMan();
  if (pHeapPointer == (void *)0x0) {
    pvVar7 = AllocateScratchMemory__5GlobsPCvPCci(this,"c:/eor/src2/games/sims/ESRC/ESim.cpp",0xf73)
    ;
    Init__5EHeapPvUi(&_4ESim_m_MyHeap,pvVar7,0x100000);
  }
  else {
    pvVar7 = GetUpper32k__17ESimScratchPadMan();
    Init__5EHeapPvUi(&_4ESim_m_MyHeap,pvVar7,0x8000);
  }
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  uVar12 = (*(code *)pEVar2[6].EGlobalManagerClient)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 6),0);
  __13EPortalWindow(&win);
                    /* inlined from /eor/src2/engine/e_rendersurface.h */
  rsd.flags = 3;
  rsd.format = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mSimOrient.field0_0x0.d[0][2] = 0.0;
  mSimOrient.field0_0x0.d[0][1] = 0.0;
  mSimOrient.field0_0x0.d[0][0] = 0.0;
  puVar1 = (undefined *)((int)&rsd.bgColor.field0_0x0 + 7);
  uVar17 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar17);
  *puVar5 = *puVar5 & -1L << (uVar17 + 1) * 8 | 0UL >> (7 - uVar17) * 8;
  uVar17 = (uint)&rsd.bgColor & 7;
  puVar5 = (ulong *)((int)&rsd.bgColor - uVar17);
  *puVar5 = 0L << uVar17 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar17) * 8;
  rsd.bgColor.field0_0x0.d[2] = 0.0;
  mSimOrient.field0_0x0.d[0][2] = 0.0;
  mSimOrient.field0_0x0.d[0][1] = 0.0;
  mSimOrient.field0_0x0.d[0][0] = 0.0;
  puVar1 = (undefined *)((int)&rsd.bgColor.field0_0x0 + 7);
                    /* end of inlined section */
  uVar17 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar17);
  *puVar5 = *puVar5 & -1L << (uVar17 + 1) * 8 | 0UL >> (7 - uVar17) * 8;
  uVar17 = (uint)&rsd.bgColor & 7;
  puVar5 = (ulong *)((int)&rsd.bgColor - uVar17);
  *puVar5 = 0L << uVar17 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar17) * 8;
  rsd.bgColor.field0_0x0.d[2] = 0.0;
  rsd.xsize = 0x40;
  rsd.ysize = 0x40;
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[3].ManagedStartup);
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[0xf].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 0xf));
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  uVar13 = (*(code *)pEVar2[8].ManagedShutdown)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[8].ManagedStartup,
                      &rsd);
  SetProjection__13EPortalWindowffff(&win,14.0,1.0,0.5,500.0);
  pRenderSurface = (ERenderSurface *)uVar13;
  SetRenderSurface__7EWindowP14ERenderSurface((EWindow *)&win,pRenderSurface);
  prc = (ERC *)uVar12;
  if (bIsSimStanding) {
    bVar6 = IsAdult__4ESim(this);
    if (!bVar6) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mSimOrient.field0_0x0.d[1][0] = -0.195;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mSimOrient.field0_0x0.d[0][1] = 3.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mSimOrient.field0_0x0.d[0][0] = -0.195;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mSimOrient.field0_0x0.d[0][2] = 1.05;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mSimOrient.field0_0x0.d[1][1] = 0.0;
      mSimOrient.field0_0x0.d[1][2] = 1.05;
      mSimOrient.field0_0x0.d[3][0] = 0.0;
      mSimOrient.field0_0x0.d[3][1] = 0.0;
                    /* end of inlined section */
      mSimOrient.field0_0x0.d[3][2] = 1.0;
      SetLookAt__13EPortalWindowRC5EVec3N21
                (&win,(EVec3 *)&mSimOrient,(EVec3 *)((int)&mSimOrient.field0_0x0 + 0x10),
                 (EVec3 *)((int)&mSimOrient.field0_0x0 + 0x30));
LAB_00153544:
      pEVar15 = prc->__vtable;
      goto LAB_00153548;
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mSimOrient.field0_0x0.d[0][2] = 1.5;
                    /* end of inlined section */
  }
  else {
    bVar6 = IsAdult__4ESim(this);
    if (!bVar6) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mSimOrient.field0_0x0.d[1][0] = -0.195;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mSimOrient.field0_0x0.d[0][1] = 3.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mSimOrient.field0_0x0.d[0][0] = -0.195;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mSimOrient.field0_0x0.d[0][2] = 1.05;
      mSimOrient.field0_0x0.d[1][1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mSimOrient.field0_0x0.d[1][2] = 1.05;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      mSimOrient.field0_0x0.d[2][0] = 0.0;
      mSimOrient.field0_0x0.d[2][1] = 0.0;
                    /* end of inlined section */
      mSimOrient.field0_0x0.d[2][2] = 1.0;
      SetLookAt__13EPortalWindowRC5EVec3N21
                (&win,(EVec3 *)&mSimOrient,(EVec3 *)((int)&mSimOrient.field0_0x0 + 0x10),
                 (EVec3 *)((int)&mSimOrient.field0_0x0 + 0x20));
      goto LAB_00153544;
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mSimOrient.field0_0x0.d[0][2] = 1.2;
  }
                    /* end of inlined section */
  mSimOrient.field0_0x0.d[1][0] = -0.195;
  mSimOrient.field0_0x0.d[0][1] = 3.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mSimOrient.field0_0x0.d[0][0] = -0.195;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mSimOrient.field0_0x0.d[1][1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mSimOrient.field0_0x0.d[2][0] = 0.0;
  mSimOrient.field0_0x0.d[2][1] = 0.0;
                    /* end of inlined section */
  mSimOrient.field0_0x0.d[2][2] = 1.0;
  mSimOrient.field0_0x0.d[1][2] = mSimOrient.field0_0x0.d[0][2];
  SetLookAt__13EPortalWindowRC5EVec3N21
            (&win,(EVec3 *)&mSimOrient,(EVec3 *)((int)&mSimOrient.field0_0x0 + 0x10),
             (EVec3 *)((int)&mSimOrient.field0_0x0 + 0x20));
  pEVar15 = prc->__vtable;
LAB_00153548:
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  td.pfnAllocAlign = (undefined1 *)0x0;
  (*(code *)pEVar15[1].SetRasterModes)
            ((int)&prc->m_pdl + (int)*(short *)&pEVar15[1].DisableRasterModes,uVar13,5);
  Select__13EPortalWindowP3ERC(&win,prc);
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  mSimOrient.field0_0x0.d[1][0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  mSimOrient.field0_0x0.d[1][1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  mSimOrient.field0_0x0.d[2][1] = 1.0;
  local_1e10 = 0x3f076c8b;
  local_1e20 = 0x3f800000;
  local_1e0c = 0x3f1374bc;
  local_1e08 = 0x3f46a7f0;
  local_1e04 = 0x3f800000;
                    /* end of inlined section */
  mSimOrient.field0_0x0.d[0][0] = (float)td.pfnAllocAlign;
  mSimOrient.field0_0x0.d[0][1] = (float)td.pfnAllocAlign;
  mSimOrient.field0_0x0.d[2][0] = (float)td.pfnAllocAlign;
  local_1e1c = td.pfnAllocAlign;
  (*(code *)prc->__vtable[1].DisplayList)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&mSimOrient,
             (undefined *)((int)&mSimOrient.field0_0x0 + 0x10),
             (undefined *)((int)&mSimOrient.field0_0x0 + 0x20),&local_1e20,&local_1e10);
                    /* inlined from /eor/src2/engine/e_dl.h */
  pvVar7 = Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x50,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar17 = (int)pvVar7 + 7U & 7;
  puVar5 = (ulong *)(((int)pvVar7 + 7U) - uVar17);
  *puVar5 = *puVar5 & -1L << (uVar17 + 1) * 8 | 0x3f19999a3f19999aU >> (7 - uVar17) * 8;
  uVar17 = (uint)pvVar7 & 7;
  *(ulong *)((int)pvVar7 - uVar17) =
       0x3f19999a3f19999a << uVar17 * 8 |
       *(ulong *)((int)pvVar7 - uVar17) & 0xffffffffffffffffU >> (8 - uVar17) * 8;
  *(undefined4 *)((int)pvVar7 + 8) = 0x3f19999a;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar17 = (int)pvVar7 + 0x17U & 7;
  puVar5 = (ulong *)(((int)pvVar7 + 0x17U) - uVar17);
  *puVar5 = *puVar5 & -1L << (uVar17 + 1) * 8 | 0x3ecccccd3ecccccdU >> (7 - uVar17) * 8;
  uVar17 = (int)pvVar7 + 0x10U & 7;
  puVar5 = (ulong *)(((int)pvVar7 + 0x10U) - uVar17);
  *puVar5 = 0x3ecccccd3ecccccd << uVar17 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar17) * 8;
  *(undefined4 *)((int)pvVar7 + 0x18) = 0x3f19999a;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar17 = (int)pvVar7 + 0x37U & 7;
  puVar5 = (ulong *)(((int)pvVar7 + 0x37U) - uVar17);
  *puVar5 = *puVar5 & -1L << (uVar17 + 1) * 8 | 0x3f19999a3f19999aU >> (7 - uVar17) * 8;
  uVar17 = (int)pvVar7 + 0x30U & 7;
  puVar5 = (ulong *)(((int)pvVar7 + 0x30U) - uVar17);
  *puVar5 = 0x3f19999a3f19999a << uVar17 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar17) * 8;
  *(undefined4 *)((int)pvVar7 + 0x38) = 0x3f19999a;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar17 = (int)pvVar7 + 0x27U & 7;
  puVar5 = (ulong *)(((int)pvVar7 + 0x27U) - uVar17);
  *puVar5 = *puVar5 & -1L << (uVar17 + 1) * 8 | 0xc1200000c1200000U >> (7 - uVar17) * 8;
  uVar17 = (int)pvVar7 + 0x20U & 7;
  puVar5 = (ulong *)(((int)pvVar7 + 0x20U) - uVar17);
  *puVar5 = -0x3edfffff3ee00000 << uVar17 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar17) * 8;
  *(undefined4 *)((int)pvVar7 + 0x28) = 0xc1300000;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mSimOrient.field0_0x0.d[0][1] = 10.0;
  mSimOrient.field0_0x0.d[0][2] = -11.0;
  mSimOrient.field0_0x0.d[0][0] = 10.0;
                    /* end of inlined section */
  uVar17 = (int)pvVar7 + 0x47U & 7;
  puVar5 = (ulong *)(((int)pvVar7 + 0x47U) - uVar17);
  *puVar5 = *puVar5 & -1L << (uVar17 + 1) * 8 | 0x4120000041200000U >> (7 - uVar17) * 8;
  uVar17 = (int)pvVar7 + 0x40U & 7;
  puVar5 = (ulong *)(((int)pvVar7 + 0x40U) - uVar17);
  *puVar5 = 0x4120000041200000 << uVar17 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar17) * 8;
  *(undefined4 *)((int)pvVar7 + 0x48) = 0xc1300000;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar21 = sqrtf(*(float *)((int)pvVar7 + 0x20) * *(float *)((int)pvVar7 + 0x20) +
                 *(float *)((int)pvVar7 + 0x24) * *(float *)((int)pvVar7 + 0x24) +
                 *(float *)((int)pvVar7 + 0x28) * *(float *)((int)pvVar7 + 0x28));
  if (fVar21 == (float)td.pfnAllocAlign) {
    fVar21 = *(float *)((int)pvVar7 + 0x40);
  }
  else {
    fVar21 = 1.0 / fVar21;
    *(float *)((int)pvVar7 + 0x20) = *(float *)((int)pvVar7 + 0x20) * fVar21;
    *(float *)((int)pvVar7 + 0x24) = *(float *)((int)pvVar7 + 0x24) * fVar21;
    *(float *)((int)pvVar7 + 0x28) = *(float *)((int)pvVar7 + 0x28) * fVar21;
    fVar21 = *(float *)((int)pvVar7 + 0x40);
  }
  fVar21 = sqrtf(fVar21 * fVar21 + *(float *)((int)pvVar7 + 0x44) * *(float *)((int)pvVar7 + 0x44) +
                 *(float *)((int)pvVar7 + 0x48) * *(float *)((int)pvVar7 + 0x48));
  if (fVar21 == (float)td.pfnAllocAlign) {
    pEVar15 = prc->__vtable;
  }
  else {
    fVar21 = 1.0 / fVar21;
    *(float *)((int)pvVar7 + 0x40) = *(float *)((int)pvVar7 + 0x40) * fVar21;
    *(float *)((int)pvVar7 + 0x44) = *(float *)((int)pvVar7 + 0x44) * fVar21;
    *(float *)((int)pvVar7 + 0x48) = *(float *)((int)pvVar7 + 0x48) * fVar21;
                    /* end of inlined section */
    pEVar15 = prc->__vtable;
  }
                    /* inlined from /eor/src2/engine/animation/E_animcontroller.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/animation/E_animcontroller.h */
                    /* end of inlined section */
  (*(code *)pEVar15[1].LineList)((int)&prc->m_pdl + (int)*(short *)&pEVar15[1].QuadList,pvVar7,2);
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
  local_1de0 = 0x3f800000;
  local_1dd8 = 0x3f800000;
                    /* end of inlined section */
  local_1ddc = 0x3f800000;
  td.pfnFree = td.pfnAllocAlign;
  td.flags = (uint)td.pfnAllocAlign;
  td._16_4_ = td.pfnAllocAlign;
  td._20_4_ = td.pfnAllocAlign;
  td._24_4_ = td.pfnAllocAlign;
  CalcOrientMatrix__15EAnimControllerRC5EVec3N21R5EMat4
            ((EVec3 *)&td,(EVec3 *)&td.xsize,(EVec3 *)&local_1de0,&mSimOrient);
                    /* inlined from /eor/src2/engine/animation/E_animcontroller.h */
  (this->field0_0x0).m_AC.m_lastComputeFrame = -1;
                    /* end of inlined section */
  Compute__15EAnimControllerRC5EMat4(&(this->field0_0x0).m_AC,&mSimOrient);
                    /* inlined from /eor/src2/engine/animation/E_animcontroller.h */
  (this->field0_0x0).m_AC.m_lastComputeFrame = -1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_rptr.h */
                    /* end of inlined section */
  CopyMatrices__7ERModelP3ERCP5EMat4i
            (prc,(this->field0_0x0).m_AC.m_mNodes,
             (((this->field0_0x0).m_AC.m_pRCharacter.m_p)->m_nodes).field0_0x0.m_size);
  uVar17 = 6;
  if (*(int *)&this->m_bOverrideDefaultSkin == 0) {
    uVar17 = 2;
    pEVar3 = this->m_SimShader->__vtable;
    (*(code *)pEVar3->ChangeMaterial)
              ((int)(this->m_SimShader->m_sd).rp + *(short *)&pEVar3->Create + -0x10,uVar12,0);
    iVar8 = *(int *)&this->m_bDontDrawHead;
  }
  else {
    iVar8 = *(int *)&this->m_bDontDrawHead;
  }
  if (iVar8 == 0) {
    Draw__7ERModelP3ERCUi(this->m_Models[2],prc,uVar17);
    Draw__7ERModelP3ERCUi(this->m_Models[1],prc,uVar17);
    this_01 = this->m_Models[3];
  }
  else {
    this_01 = this->m_Models[3];
  }
  if (this_01 != (ERModel *)0x0) {
    Draw__7ERModelP3ERCUi(this_01,prc,uVar17);
  }
  if (this->m_Models[4] != (ERModel *)0x0) {
    Draw__7ERModelP3ERCUi(this->m_Models[4],prc,uVar17);
  }
  if (this->m_Models[5] != (ERModel *)0x0) {
    Draw__7ERModelP3ERCUi(this->m_Models[5],prc,uVar17);
  }
  if (this->m_Models[0] != (ERModel *)0x0) {
    Draw__7ERModelP3ERCUi(this->m_Models[0],prc,6);
  }
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[3].ManagedStartup);
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texturedef.h */
  td.pfnAllocAlign = (undefined1 *)0x0;
  td.pfnFree = (undefined1 *)0x0;
  td.flags = 0;
  td._24_4_ = (undefined1 *)0x200001;
  td._20_4_ = (undefined1 *)0x0;
  td.mipMapShift = 0.0;
                    /* end of inlined section */
  td._16_4_ = _pScratchMemory + 0x2c1d8;
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  uVar14 = (*(code *)pEVar2[7].ManagedShutdown)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[7].ManagedStartup,
                      &td);
  (*(code *)pRenderSurface->__vtable[1].GetFlags)
            ((int)&pRenderSurface->m_xsize + (int)*(short *)&pRenderSurface->__vtable[1].SetFlags,
             uVar14);
  (*(code *)prc->__vtable[1].SetRasterModes)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].DisableRasterModes,0,5);
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[9].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 9),uVar13);
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[6].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[6].ManagedStartup,uVar12);
  iVar20 = (int)uVar14;
  (**(code **)(*(int *)(iVar20 + 0x20) + 0x2c))
            (iVar20 + *(short *)(*(int *)(iVar20 + 0x20) + 0x28),0);
  iVar8 = (**(code **)(*(int *)(iVar20 + 0x20) + 0x34))
                    (iVar20 + *(short *)(*(int *)(iVar20 + 0x20) + 0x30),0,&x,&y);
  td._20_4_ = (undefined1 *)CONCAT22(td.mipMapLevels,0x100);
  td.flags = td.flags | 0x803;
  td._24_4_ = (undefined1 *)0x20080200;
  td._16_4_ = "H";
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  pTexture = (ETexture *)
             (*(code *)pEVar2[7].ManagedShutdown)
                       ((int)&(_pGfx->field0_0x0).__vtable +
                        (int)*(short *)&pEVar2[7].ManagedStartup,&td);
  (*(code *)pTexture->__vtable->Validate)
            ((int)&(pTexture->m_textureDef).pfnAllocAlign +
             (int)*(short *)&pTexture->__vtable->Test1,2);
  piVar9 = (int *)(*(code *)pTexture->__vtable[1].Lock)
                            ((int)&(pTexture->m_textureDef).pfnAllocAlign +
                             (int)*(short *)&pTexture->__vtable[1].ETexture);
  pNewPixel = (uchar *)(**(code **)(pTexture->__vtable + 1))
                                 ((int)&(pTexture->m_textureDef).pfnAllocAlign +
                                  (int)*(short *)&pTexture->__vtable->Select,0,&x,&y);
  __11ERTQuantize(&Quantize);
  Init__11ERTQuantizeUiUiPFUi_PvPFPv_vb
            (&Quantize,0x100,0x7c00,DefaultAlloc__4ESimUi,DefaultFree__4ESimPv,true);
  y = 0;
  do {
    iVar18 = y * 0x40;
    x = 0;
    do {
      nCurPixelColor[0] = *(uchar *)((iVar18 + x) * 4 + iVar8);
      puVar16 = (undefined4 *)((iVar18 + x) * 4 + iVar8);
      nCurPixelColor[1] = *(uchar *)((int)puVar16 + 1);
      nCurPixelColor[2] = (uchar)((uint)*puVar16 >> 0x10);
      AddPixel__11ERTQuantizePUc(&Quantize,nCurPixelColor);
      x = x + 1;
    } while (x < 0x20);
    y = y + 1;
  } while (y < 0x20);
  iVar18 = 0;
  Compute__11ERTQuantize(&Quantize);
  iVar10 = GetPaletteSize__11ERTQuantize(&Quantize);
  if (0 < iVar10) {
    do {
      iVar19 = iVar18 + 1;
      GetPaletteEntry__11ERTQuantizeiPUc(&Quantize,iVar18,nCurPixelColor);
      *piVar9 = -0x1000000;
      *piVar9 = nCurPixelColor[0] - 0x1000000;
      iVar18 = (nCurPixelColor[0] - 0x1000000) + (uint)nCurPixelColor[1] * 0x100;
      *piVar9 = iVar18;
      *piVar9 = iVar18 + (uint)nCurPixelColor[2] * 0x10000;
      piVar9 = piVar9 + 1;
      iVar18 = iVar19;
    } while (iVar19 < iVar10);
  }
  y = 0;
  do {
    iVar18 = 0x1f - y;
    iVar10 = y * 0x40;
    x = 0;
    do {
      nCurPixelColor[0] = *(uchar *)((iVar10 + x) * 4 + iVar8);
      puVar16 = (undefined4 *)((iVar10 + x) * 4 + iVar8);
      nCurPixelColor[1] = *(uchar *)((int)puVar16 + 1);
      nCurPixelColor[2] = (uchar)((uint)*puVar16 >> 0x10);
      iVar19 = GetClosestColor__11ERTQuantizePUc(&Quantize,nCurPixelColor);
      pNewPixel[iVar18 * 0x20 + x] = (uchar)iVar19;
      x = x + 1;
    } while (x < 0x20);
    y = y + 1;
  } while (y < 0x20);
  (**(code **)(*(int *)(iVar20 + 0x20) + 0x44))(iVar20 + *(short *)(*(int *)(iVar20 + 0x20) + 0x40))
  ;
  (*(code *)pTexture->__vtable[1].Invalidate)
            ((int)&(pTexture->m_textureDef).pfnAllocAlign +
             (int)*(short *)&pTexture->__vtable[1].Unlock);
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[8].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 8),uVar14);
  Deallocate__11ERTQuantize(&Quantize);
  if (pHeapPointer == (void *)0x0) {
    FreeScratchMemory__5GlobsPCv(this);
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
    pcVar11 = this->m_pPerson;
  }
  else {
    pcVar11 = this->m_pPerson;
  }
                    /* end of inlined section */
  pcVar4 = pcVar11->_vb1187->__vtable;
  this_00 = (ObjSelector *)
            (*(code *)pcVar4[1].SetLevel)
                      ((int)&pcVar11->_vb1187->_vb1121 + (int)*(short *)&pcVar4[1].GetTreeID);
  SetThumbnail__11ObjSelectorP8ETexture(this_00,pTexture);
  ___11ERTQuantize(&Quantize,2);
  ___13EPortalWindow(&win,2);
  return;
}

void ESim::ScaleBones(u32 userParam, EMat4 &mOrient, ERCharacter *pCharacter, EMat4 *mNodes) {
	CustomCharacter *pChar;
	EVec3 vScale;
	
  char cVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  EVec3 vScale;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/ESim.h */
  iVar2 = *(int *)(userParam + 0x1b0);
                    /* end of inlined section */
  lVar4 = (**(code **)(*(int *)(iVar2 + 4) + 0xfc))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 4) + 0xf8),iVar2,pCharacter);
  if (lVar4 == 0) {
    return;
  }
  if (_globals.Cheats._52_4_ != 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 3.0;
    vScale.field0_0x0.d[1] = 2.0;
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.03;
    PreScale__5EMat4RC5EVec3(mNodes + 0x11,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x13,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x14,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x15,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x16,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x19,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x17,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x1a,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x1b,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x18,&vScale);
    PreScale__5EMat4RC5EVec3(mNodes + 0x1c,&vScale);
  }
  cVar1 = *(char *)((int)lVar4 + 8);
  if (cVar1 == '\x01') {
    bVar3 = IsAdult__4ESim((ESim *)userParam);
    if (bVar3) {
      bVar3 = IsMale__4ESim((ESim *)userParam);
      if (bVar3) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.0;
        vScale.field0_0x0.d[0] = 1.12;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar5 = 1.1;
        vScale.field0_0x0.d[0] = 1.12;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar6 = 1.2;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.15;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar7 = 0.9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.15;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar5;
        vScale.field0_0x0.d[1] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 0xb,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar5;
        vScale.field0_0x0.d[1] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 6,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.3;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.3;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.3;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.3;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar5;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar7;
        vScale.field0_0x0.d[1] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar5;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar7;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar7;
        PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
                    /* end of inlined section */
        vScale.field0_0x0.d[0] = 1.3;
      }
      else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar5 = 1.3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar6 = 1.12;
        vScale.field0_0x0.d[1] = 1.3;
        vScale.field0_0x0.d[0] = 1.12;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar6 = 1.1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.2;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar7 = 1.15;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.2;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar7;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar7;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0xb,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 6,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.2;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.4;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.05;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
        vScale.field0_0x0.d[0] = fVar5;
                    /* end of inlined section */
      }
    }
    else {
      bVar3 = IsMale__4ESim((ESim *)userParam);
      if (bVar3) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar5 = 1.15;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.15;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar6 = 1.1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar5;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar5;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0xb,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 6,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.2;
        vScale.field0_0x0.d[0] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
        vScale.field0_0x0.d[0] = fVar5;
                    /* end of inlined section */
      }
      else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar5 = 1.3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar6 = 1.12;
        vScale.field0_0x0.d[1] = 1.3;
        vScale.field0_0x0.d[0] = 1.12;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar6 = 1.1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.2;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar7 = 1.15;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.2;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar7;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar7;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0xb,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 6,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
        vScale.field0_0x0.d[1] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[1] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        vScale.field0_0x0.d[1] = fVar5;
        PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.2;
        vScale.field0_0x0.d[0] = 1.2;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        vScale.field0_0x0.d[0] = fVar6;
        PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vScale.field0_0x0.d[0] = 0.9;
        vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
        vScale.field0_0x0.d[2] = 1.0;
        PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
        vScale.field0_0x0.d[0] = fVar7;
                    /* end of inlined section */
      }
    }
  }
  else {
    if (cVar1 != '\x02') {
      return;
    }
    bVar3 = IsAdult__4ESim((ESim *)userParam);
    if (bVar3) {
      IsMale__4ESim((ESim *)userParam);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar5 = 0.9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
      vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar6 = 0.8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
      vScale.field0_0x0.d[1] = 0.95;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
      vScale.field0_0x0.d[1] = 0.95;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.95;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.95;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 0.75;
      vScale.field0_0x0.d[0] = 0.85;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar6;
      PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar6;
      PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar5;
      vScale.field0_0x0.d[1] = fVar6;
      PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar5;
      vScale.field0_0x0.d[1] = fVar6;
      PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 0.95;
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 0.98;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar6;
      PreScale__5EMat4RC5EVec3(mNodes + 0x14,&vScale);
      return;
    }
    bVar3 = IsMale__4ESim((ESim *)userParam);
    if (!bVar3) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar5 = 0.95;
      vScale.field0_0x0.d[1] = 0.9;
      vScale.field0_0x0.d[0] = 0.95;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar6 = 0.8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar5;
      vScale.field0_0x0.d[1] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar5;
      vScale.field0_0x0.d[1] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[0] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.85;
      vScale.field0_0x0.d[1] = 0.75;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar6;
      PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar6;
      PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
      vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
      vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.83;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar6;
      PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.88;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar6;
      PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      vScale.field0_0x0.d[1] = fVar5;
      PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.9;
      vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.9;
      vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.9;
      vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
      vScale.field0_0x0.d[2] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[0] = 0.9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vScale.field0_0x0.d[2] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
      vScale.field0_0x0.d[1] = 1.0;
      PreScale__5EMat4RC5EVec3(mNodes + 0x14,&vScale);
      return;
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar5 = 0.8;
    vScale.field0_0x0.d[0] = 0.9;
    vScale.field0_0x0.d[1] = 0.8;
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    PreScale__5EMat4RC5EVec3(mNodes + 3,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar6 = 0.95;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[1] = fVar5;
    PreScale__5EMat4RC5EVec3(mNodes + 8,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[0] = fVar6;
    vScale.field0_0x0.d[1] = fVar6;
    PreScale__5EMat4RC5EVec3(mNodes + 4,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[0] = fVar6;
    vScale.field0_0x0.d[1] = fVar6;
    PreScale__5EMat4RC5EVec3(mNodes + 9,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[0] = fVar6;
    PreScale__5EMat4RC5EVec3(mNodes + 5,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[0] = fVar6;
    PreScale__5EMat4RC5EVec3(mNodes + 10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.85;
    vScale.field0_0x0.d[1] = 0.75;
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    PreScale__5EMat4RC5EVec3(mNodes + 0x10,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[1] = fVar5;
    PreScale__5EMat4RC5EVec3(mNodes + 0x1e,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[1] = fVar5;
    PreScale__5EMat4RC5EVec3(mNodes + 0x24,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 1.0;
    vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    PreScale__5EMat4RC5EVec3(mNodes + 0x1f,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 1.0;
    vScale.field0_0x0.d[1] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    PreScale__5EMat4RC5EVec3(mNodes + 0x25,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.9;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[1] = fVar5;
    PreScale__5EMat4RC5EVec3(mNodes + 2,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.88;
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[1] = fVar5;
    PreScale__5EMat4RC5EVec3(mNodes + 0xd,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[1] = fVar6;
    PreScale__5EMat4RC5EVec3(mNodes + 0xe,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    vScale.field0_0x0.d[0] = fVar6;
    PreScale__5EMat4RC5EVec3(mNodes + 0xf,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.9;
    vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    PreScale__5EMat4RC5EVec3(mNodes + 0x1d,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.9;
    vScale.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
    vScale.field0_0x0.d[2] = 1.0;
    PreScale__5EMat4RC5EVec3(mNodes + 0x23,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vScale.field0_0x0.d[0] = 0.9;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vScale.field0_0x0.d[2] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
  vScale.field0_0x0.d[1] = 1.0;
  PreScale__5EMat4RC5EVec3(mNodes + 0x14,&vScale);
  return;
}

void ESim::tProcessCommand(u32 command) {
  if (command == 0) {
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
    __16EResourceManager_m_bTraceEnabled = 0;
                    /* end of inlined section */
    initModel__4ESim(this);
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
    __16EResourceManager_m_bTraceEnabled = 1;
                    /* end of inlined section */
  }
  else if (command == 1) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
    __16EResourceManager_m_bTraceEnabled = 0;
                    /* end of inlined section */
    createSkinDirect__4ESimPCQ23Sim7Costume(this,this->m_pInCostume);
    this->m_pInCostume = (Costume *)0x0;
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
                    /* end of inlined section */
    __16EResourceManager_m_bTraceEnabled = command;
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

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from /eor/src2/common/datastruc/e_heap.h */
    gpTypeInfo_ESim =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_4ESim_m_typeInfo,New__4ESim,0,"ESim",&_12ISimInstance_m_typeInfo);
    __pbob__v2.field0_0x0.d[0] = 1.6;
    __pbob__v2.field0_0x0.d[2] = 0.0;
    _vGhostBlue.field0_0x0.d[2] = 2.0;
    _vGhostGreen.field0_0x0.d[0] = 0.8;
    _vGhostGreen.field0_0x0.d[2] = 0.65;
    __pbob__v1.field0_0x0.d[0] = 2.0;
    __pbob__v1.field0_0x0.d[2] = 0.0;
    _vGhostBlue.field0_0x0.d[0] = 0.65;
    _vGhostGreen.field0_0x0.d[1] = 1.8;
    __pbob__v1.field0_0x0.d[1] = 1.6;
    __pbob__v2.field0_0x0.d[1] = 0.0;
    _vGhostBlue.field0_0x0.d[1] = 0.65;
  }
  return;
}

sceVu0FMATRIX& EMat4::operator float (&)[3][3]() {
  return (float (*) [4] [4])this;
}

ESim* ESim::New() {
	void *result;
	
  ESim *pEVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
  pEVar1 = (ESim *)_memmanAlloc__FUiUi(0x2f0,0x10);
  memset(pEVar1,0,0x2f0);
                    /* end of inlined section */
  pEVar1 = __4ESim(pEVar1);
  return pEVar1;
}

void ESim::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ESim *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* ESim::GetTypeInfo() {
  return &_4ESim_m_typeInfo;
}

char* ESim::GetTypeName() {
  return _4ESim_m_typeInfo.m_name;
}

u32 ESim::GetTypeKey() {
  return _4ESim_m_typeInfo.m_key;
}

u16 ESim::GetTypeVersion() {
  return _4ESim_m_typeInfo.m_version;
}

u16 ESim::GetReadVersion() {
  return _4ESim_m_typeInfo.m_readVersion;
}

ETypeInfo* ESim::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_4ESim_m_typeInfo,New__4ESim,version,"ESim",&_12ISimInstance_m_typeInfo);
  return pEVar1;
}

ESim* ESim::CreateCopy() {
  ESim *pEVar1;
  
  pEVar1 = (ESim *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

ESim* ESim::ESim() {
  bool bVar1;
  int iVar2;
  
  __12ISimInstance(&this->field0_0x0);
  *(__vtbl_ptr_type **)&(this->field0_0x0).field_0x130 = _vt_4ESim_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_4ESim;
                    /* end of inlined section */
  iVar2 = 6;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
  return this;
}

void ESim::SetXOb(cXObject *p) {
  return;
}

cXPerson* ESim::GetPerson() {
  return (cXPerson__34_985 *)this->m_pPerson;
}

EShader* ESim::GetSkin() {
  return this->m_SimShader;
}

ERModel* ESim::GetPart(int nBodyPart) {
  return this->m_Models[nBodyPart];
}

ESims3DHead* ESim::GetSimHead() {
  return this->m_pSimHead;
}

void ESim::SetShadowState(Int state) {
  *(uint *)&this->m_bDrawShadow = (uint)(state != 0);
  return;
}

bool ESim::HasQueuedOperation() {
  return 0 < this->m_iQueueCount;
}

void ESim::SetVanityDraw(bool bUse, u32 nType) {
  this->m_nTypeOfObject = nType;
  *(int *)&this->m_bUseVanityDraw = (int)bUse;
  return;
}

bool ESim::UseVanityDraw(u32 *nType) {
  *nType = this->m_nTypeOfObject;
  return SUB41(*(undefined4 *)&this->m_bUseVanityDraw,0);
}

float ESim::GetScaler() {
  return this->m_Models[2]->m_scaler;
}

EVec2* ESim::GetMotiveDelta(u32 nIndex) {
  return this->m_vMotiveDelta + nIndex;
}

void global constructors keyed to ESim::m_MyHeap() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
