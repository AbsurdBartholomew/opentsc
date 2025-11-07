// STATUS: NOT STARTED

#include "siminfowin.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2121;
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
struct cXObject : virtual TreeSim {
	TreeSim *$vb2693;
	__vtbl_ptr_type *$vf2757;
	
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
	cXObject *$vb2757;
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
struct DPadWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2121;
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
	Panelstateman *$vb2121;
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

typedef TFixedPool<ERelationsIcon,64> ERelationsIconFixedPool;

struct TFixedPool<ERelationsIcon,64> : EFixedPool {
protected:
	unsigned int m_buffer[1856];
	
public:
	TFixedPool<ERelationsIcon,64>& operator=();
	TFixedPool();
	TFixedPool(TFixedPool<ERelationsIcon,64>*, int, void);
	TFixedPool();
	ERelationsIcon* Alloc();
	void Free();
protected:
	void Free();
};

float _textwidth = 0.1f;
float _textheight = 0.05f;
bool SimInfoWin::m_bInit = false;

EVec2 _InfoOff = {
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

EVec2 _InfoOff1 = {
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

EVec2 _InfoOff2 = {
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

EVec2 _vTextOff = {
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

ESlideTextBox SimInfoWin::m_nameBoxs[2] = {
	/* [0] = */ {
		/* .m_bVis = */ false,
		/* .m_clock = */ 0.f,
		/* .m_vStart = */ {
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
		},
		/* .m_vStop = */ {
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
		},
		/* .m_vCur = */ {
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
		}
	},
	/* [1] = */ {
		/* .m_bVis = */ false,
		/* .m_clock = */ 0.f,
		/* .m_vStart = */ {
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
		},
		/* .m_vStop = */ {
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
		},
		/* .m_vCur = */ {
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
		}
	}
};

ESlideTextBox SimInfoWin::m_playerNameBoxs[2] = {
	/* [0] = */ {
		/* .m_bVis = */ false,
		/* .m_clock = */ 0.f,
		/* .m_vStart = */ {
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
		},
		/* .m_vStop = */ {
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
		},
		/* .m_vCur = */ {
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
		}
	},
	/* [1] = */ {
		/* .m_bVis = */ false,
		/* .m_clock = */ 0.f,
		/* .m_vStart = */ {
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
		},
		/* .m_vStop = */ {
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
		},
		/* .m_vCur = */ {
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
		}
	}
};

ERFont *SimInfoWin::m_pFont = NULL;
ERShader *SimInfoWin::m_textarrowl = NULL;
ERShader *SimInfoWin::m_textarrowr = NULL;
ERShader *SimInfoWin::m_pDpadInverse = NULL;
ERShader *SimInfoWin::m_pMenubevel_T_L = NULL;
ERShader *SimInfoWin::m_pTextBoxBGBL = NULL;
ERShader *SimInfoWin::m_pTextBoxBGBR = NULL;
ERShader *SimInfoWin::m_pTextBoxBGTL = NULL;
ERShader *SimInfoWin::m_pTextBoxBGTR = NULL;
ERShader *SimInfoWin::m_pTextBoxBGML = NULL;
ERShader *SimInfoWin::m_pTextBoxBGMR = NULL;
ERShader *SimInfoWin::m_pTextBoxBGTC = NULL;
ERShader *SimInfoWin::m_pTextBoxBGBC = NULL;
ERShader *SimInfoWin::m_pTextBoxHBL = NULL;
ERShader *SimInfoWin::m_pTextBoxHBR = NULL;
ERShader *SimInfoWin::m_pTextBoxHTL = NULL;
ERShader *SimInfoWin::m_pTextBoxHTR = NULL;
ERShader *SimInfoWin::m_pTextBoxHML = NULL;
ERShader *SimInfoWin::m_pTextBoxHMR = NULL;
ERShader *SimInfoWin::m_pTextBoxHTC = NULL;
ERShader *SimInfoWin::m_pTextBoxHBC = NULL;
ERShader *SimInfoWin::m_pTextLineBGL = NULL;
ERShader *SimInfoWin::m_pTextLineBGR = NULL;
ERShader *SimInfoWin::m_pTextLineBGC = NULL;
ERShader *ERelationsIcon::m_pHeart = NULL;
ERShader *ERelationsIcon::m_pSmileyFace = NULL;
ERShader *SimInfoWin::m_pTextPopOutC = NULL;
ERShader *SimInfoWin::m_pTextPopOutCH = NULL;
ERShader *SimInfoWin::m_pTextPopOutL = NULL;
ERShader *SimInfoWin::m_pTextPopOutLH = NULL;
ERShader *SimInfoWin::m_pTextPopOutR = NULL;
ERShader *SimInfoWin::m_pTextPopOutRH = NULL;

UiStringLookUpTableEntry SimInfoWin::__MoodStrings[8] = {
	/* [0] = */ {
		/* .pLower = */ 0x3b44d0,
		/* .pUpper = */ 0x3b44d8
	},
	/* [1] = */ {
		/* .pLower = */ 0x3b44e0,
		/* .pUpper = */ 0x3b44e8
	},
	/* [2] = */ {
		/* .pLower = */ 0x3b44f0,
		/* .pUpper = */ 0x3b44f8
	},
	/* [3] = */ {
		/* .pLower = */ 0x3b4500,
		/* .pUpper = */ 0x3b4508
	},
	/* [4] = */ {
		/* .pLower = */ 0x3b4510,
		/* .pUpper = */ 0x3b4518
	},
	/* [5] = */ {
		/* .pLower = */ 0x3b4520,
		/* .pUpper = */ 0x3b4528
	},
	/* [6] = */ {
		/* .pLower = */ 0x3b4530,
		/* .pUpper = */ 0x3b4538
	},
	/* [7] = */ {
		/* .pLower = */ 0x3b4540,
		/* .pUpper = */ 0x3b4548
	}
};

UiStringLookUpTableEntry SimInfoWin::__PersStrings[8] = {
	/* [0] = */ {
		/* .pLower = */ 0x3b4550,
		/* .pUpper = */ 0x3b4558
	},
	/* [1] = */ {
		/* .pLower = */ 0x3b4560,
		/* .pUpper = */ 0x3b4570
	},
	/* [2] = */ {
		/* .pLower = */ 0x3b4580,
		/* .pUpper = */ 0x3b4588
	},
	/* [3] = */ {
		/* .pLower = */ 0x3b4590,
		/* .pUpper = */ 0x3b4598
	},
	/* [4] = */ {
		/* .pLower = */ 0x3b45a0,
		/* .pUpper = */ 0x3b45a8
	},
	/* [5] = */ {
		/* .pLower = */ NULL,
		/* .pUpper = */ NULL
	},
	/* [6] = */ {
		/* .pLower = */ NULL,
		/* .pUpper = */ NULL
	},
	/* [7] = */ {
		/* .pLower = */ NULL,
		/* .pUpper = */ NULL
	}
};

UiStringLookUpTableEntry SimInfoWin::__JobStrings[8] = {
	/* [0] = */ {
		/* .pLower = */ 0x3b45b0,
		/* .pUpper = */ 0x3b45b8
	},
	/* [1] = */ {
		/* .pLower = */ 0x3b45c0,
		/* .pUpper = */ 0x3b45c8
	},
	/* [2] = */ {
		/* .pLower = */ 0x3b45d8,
		/* .pUpper = */ 0x3b45e8
	},
	/* [3] = */ {
		/* .pLower = */ 0x3b45f8,
		/* .pUpper = */ 0x3b4600
	},
	/* [4] = */ {
		/* .pLower = */ 0x3b4608,
		/* .pUpper = */ 0x3b4610
	},
	/* [5] = */ {
		/* .pLower = */ 0x3b4618,
		/* .pUpper = */ 0x3b4620
	},
	/* [6] = */ {
		/* .pLower = */ NULL,
		/* .pUpper = */ NULL
	},
	/* [7] = */ {
		/* .pLower = */ NULL,
		/* .pUpper = */ NULL
	}
};

UiStringLookUpTableEntry SimInfoWin::__RelaStrings[8] = {
	/* [0] = */ {
		/* .pLower = */ 0x3b4628,
		/* .pUpper = */ 0x3b4638
	},
	/* [1] = */ {
		/* .pLower = */ 0x3b4648,
		/* .pUpper = */ 0x3b4650
	},
	/* [2] = */ {
		/* .pLower = */ 0x3b4658,
		/* .pUpper = */ 0x3b4660
	},
	/* [3] = */ {
		/* .pLower = */ 0x3b4668,
		/* .pUpper = */ 0x3b4670
	},
	/* [4] = */ {
		/* .pLower = */ NULL,
		/* .pUpper = */ NULL
	},
	/* [5] = */ {
		/* .pLower = */ NULL,
		/* .pUpper = */ NULL
	},
	/* [6] = */ {
		/* .pLower = */ NULL,
		/* .pUpper = */ NULL
	},
	/* [7] = */ {
		/* .pLower = */ NULL,
		/* .pUpper = */ NULL
	}
};

UiStringLookUpTableEntry *SimInfoWin::__InfoTextLookup[4] = {
	/* [0] = */ SimInfoWin::__MoodStrings,
	/* [1] = */ SimInfoWin::__PersStrings,
	/* [2] = */ SimInfoWin::__JobStrings,
	/* [3] = */ SimInfoWin::__RelaStrings
};

float _dpad_inverseh = 0.1f;
float _dpad_inversew = 0.142857f;

EVec2 _SimInfoWin_bevel_off = {
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

float _SimInfoWin_bevel_h = 0.00892857183f;
float _SimInfoWin_bevel_x = 0.082f;
float _rect1yoff = 0.022f;
float _rect2xoff = 0.03f;
float _moodinfo_x = 0.34f;
float _moodinfo_y = 0.8f;
float _mood_boxOffx = 0.f;
float _mood_boxOffy = 0.f;
float _mood_box_h = 0.13f;
float _mood_box_w = 0.75f;
float _mood_info_font_size = 17.f;

EVec2 _vlight_bar_gap_wh = {
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

float _light_bar_gap_width = 0.003125f;
float _fontScaleFactor = 0.1f;
float _infoWinAlphaFadeDur_ = 0.25f;

char *_SIW_lableNameTable[4] = {
	/* [0] = */ 0x3b4708,
	/* [1] = */ 0x3b4718,
	/* [2] = */ 0x3b4728,
	/* [3] = */ 0x3b4730
};

EVec2 _SimInfoWin_ULUV = {
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

EVec2 _SimInfoWin_BRUV = {
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

EVec2 _vBevel2P = {
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

EVec2 _vBevel2PWH = {
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

EVec2 _vBevel1P = {
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

EVec2 _vBevel1PWH = {
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

float _playerOne2pbackH = 0.232f;
float _dtbcenterh = 0.008f;

ERelationsIconFixedPool _eRelationsIconAllocPool = {
	/* base class 0 = */ {
		/* .m_pFreeObjHead = */ NULL,
		/* .m_pData = */ NULL
	},
	/* .m_buffer = */ {
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
		/* [511] = */ 0,
		/* [512] = */ 0,
		/* [513] = */ 0,
		/* [514] = */ 0,
		/* [515] = */ 0,
		/* [516] = */ 0,
		/* [517] = */ 0,
		/* [518] = */ 0,
		/* [519] = */ 0,
		/* [520] = */ 0,
		/* [521] = */ 0,
		/* [522] = */ 0,
		/* [523] = */ 0,
		/* [524] = */ 0,
		/* [525] = */ 0,
		/* [526] = */ 0,
		/* [527] = */ 0,
		/* [528] = */ 0,
		/* [529] = */ 0,
		/* [530] = */ 0,
		/* [531] = */ 0,
		/* [532] = */ 0,
		/* [533] = */ 0,
		/* [534] = */ 0,
		/* [535] = */ 0,
		/* [536] = */ 0,
		/* [537] = */ 0,
		/* [538] = */ 0,
		/* [539] = */ 0,
		/* [540] = */ 0,
		/* [541] = */ 0,
		/* [542] = */ 0,
		/* [543] = */ 0,
		/* [544] = */ 0,
		/* [545] = */ 0,
		/* [546] = */ 0,
		/* [547] = */ 0,
		/* [548] = */ 0,
		/* [549] = */ 0,
		/* [550] = */ 0,
		/* [551] = */ 0,
		/* [552] = */ 0,
		/* [553] = */ 0,
		/* [554] = */ 0,
		/* [555] = */ 0,
		/* [556] = */ 0,
		/* [557] = */ 0,
		/* [558] = */ 0,
		/* [559] = */ 0,
		/* [560] = */ 0,
		/* [561] = */ 0,
		/* [562] = */ 0,
		/* [563] = */ 0,
		/* [564] = */ 0,
		/* [565] = */ 0,
		/* [566] = */ 0,
		/* [567] = */ 0,
		/* [568] = */ 0,
		/* [569] = */ 0,
		/* [570] = */ 0,
		/* [571] = */ 0,
		/* [572] = */ 0,
		/* [573] = */ 0,
		/* [574] = */ 0,
		/* [575] = */ 0,
		/* [576] = */ 0,
		/* [577] = */ 0,
		/* [578] = */ 0,
		/* [579] = */ 0,
		/* [580] = */ 0,
		/* [581] = */ 0,
		/* [582] = */ 0,
		/* [583] = */ 0,
		/* [584] = */ 0,
		/* [585] = */ 0,
		/* [586] = */ 0,
		/* [587] = */ 0,
		/* [588] = */ 0,
		/* [589] = */ 0,
		/* [590] = */ 0,
		/* [591] = */ 0,
		/* [592] = */ 0,
		/* [593] = */ 0,
		/* [594] = */ 0,
		/* [595] = */ 0,
		/* [596] = */ 0,
		/* [597] = */ 0,
		/* [598] = */ 0,
		/* [599] = */ 0,
		/* [600] = */ 0,
		/* [601] = */ 0,
		/* [602] = */ 0,
		/* [603] = */ 0,
		/* [604] = */ 0,
		/* [605] = */ 0,
		/* [606] = */ 0,
		/* [607] = */ 0,
		/* [608] = */ 0,
		/* [609] = */ 0,
		/* [610] = */ 0,
		/* [611] = */ 0,
		/* [612] = */ 0,
		/* [613] = */ 0,
		/* [614] = */ 0,
		/* [615] = */ 0,
		/* [616] = */ 0,
		/* [617] = */ 0,
		/* [618] = */ 0,
		/* [619] = */ 0,
		/* [620] = */ 0,
		/* [621] = */ 0,
		/* [622] = */ 0,
		/* [623] = */ 0,
		/* [624] = */ 0,
		/* [625] = */ 0,
		/* [626] = */ 0,
		/* [627] = */ 0,
		/* [628] = */ 0,
		/* [629] = */ 0,
		/* [630] = */ 0,
		/* [631] = */ 0,
		/* [632] = */ 0,
		/* [633] = */ 0,
		/* [634] = */ 0,
		/* [635] = */ 0,
		/* [636] = */ 0,
		/* [637] = */ 0,
		/* [638] = */ 0,
		/* [639] = */ 0,
		/* [640] = */ 0,
		/* [641] = */ 0,
		/* [642] = */ 0,
		/* [643] = */ 0,
		/* [644] = */ 0,
		/* [645] = */ 0,
		/* [646] = */ 0,
		/* [647] = */ 0,
		/* [648] = */ 0,
		/* [649] = */ 0,
		/* [650] = */ 0,
		/* [651] = */ 0,
		/* [652] = */ 0,
		/* [653] = */ 0,
		/* [654] = */ 0,
		/* [655] = */ 0,
		/* [656] = */ 0,
		/* [657] = */ 0,
		/* [658] = */ 0,
		/* [659] = */ 0,
		/* [660] = */ 0,
		/* [661] = */ 0,
		/* [662] = */ 0,
		/* [663] = */ 0,
		/* [664] = */ 0,
		/* [665] = */ 0,
		/* [666] = */ 0,
		/* [667] = */ 0,
		/* [668] = */ 0,
		/* [669] = */ 0,
		/* [670] = */ 0,
		/* [671] = */ 0,
		/* [672] = */ 0,
		/* [673] = */ 0,
		/* [674] = */ 0,
		/* [675] = */ 0,
		/* [676] = */ 0,
		/* [677] = */ 0,
		/* [678] = */ 0,
		/* [679] = */ 0,
		/* [680] = */ 0,
		/* [681] = */ 0,
		/* [682] = */ 0,
		/* [683] = */ 0,
		/* [684] = */ 0,
		/* [685] = */ 0,
		/* [686] = */ 0,
		/* [687] = */ 0,
		/* [688] = */ 0,
		/* [689] = */ 0,
		/* [690] = */ 0,
		/* [691] = */ 0,
		/* [692] = */ 0,
		/* [693] = */ 0,
		/* [694] = */ 0,
		/* [695] = */ 0,
		/* [696] = */ 0,
		/* [697] = */ 0,
		/* [698] = */ 0,
		/* [699] = */ 0,
		/* [700] = */ 0,
		/* [701] = */ 0,
		/* [702] = */ 0,
		/* [703] = */ 0,
		/* [704] = */ 0,
		/* [705] = */ 0,
		/* [706] = */ 0,
		/* [707] = */ 0,
		/* [708] = */ 0,
		/* [709] = */ 0,
		/* [710] = */ 0,
		/* [711] = */ 0,
		/* [712] = */ 0,
		/* [713] = */ 0,
		/* [714] = */ 0,
		/* [715] = */ 0,
		/* [716] = */ 0,
		/* [717] = */ 0,
		/* [718] = */ 0,
		/* [719] = */ 0,
		/* [720] = */ 0,
		/* [721] = */ 0,
		/* [722] = */ 0,
		/* [723] = */ 0,
		/* [724] = */ 0,
		/* [725] = */ 0,
		/* [726] = */ 0,
		/* [727] = */ 0,
		/* [728] = */ 0,
		/* [729] = */ 0,
		/* [730] = */ 0,
		/* [731] = */ 0,
		/* [732] = */ 0,
		/* [733] = */ 0,
		/* [734] = */ 0,
		/* [735] = */ 0,
		/* [736] = */ 0,
		/* [737] = */ 0,
		/* [738] = */ 0,
		/* [739] = */ 0,
		/* [740] = */ 0,
		/* [741] = */ 0,
		/* [742] = */ 0,
		/* [743] = */ 0,
		/* [744] = */ 0,
		/* [745] = */ 0,
		/* [746] = */ 0,
		/* [747] = */ 0,
		/* [748] = */ 0,
		/* [749] = */ 0,
		/* [750] = */ 0,
		/* [751] = */ 0,
		/* [752] = */ 0,
		/* [753] = */ 0,
		/* [754] = */ 0,
		/* [755] = */ 0,
		/* [756] = */ 0,
		/* [757] = */ 0,
		/* [758] = */ 0,
		/* [759] = */ 0,
		/* [760] = */ 0,
		/* [761] = */ 0,
		/* [762] = */ 0,
		/* [763] = */ 0,
		/* [764] = */ 0,
		/* [765] = */ 0,
		/* [766] = */ 0,
		/* [767] = */ 0,
		/* [768] = */ 0,
		/* [769] = */ 0,
		/* [770] = */ 0,
		/* [771] = */ 0,
		/* [772] = */ 0,
		/* [773] = */ 0,
		/* [774] = */ 0,
		/* [775] = */ 0,
		/* [776] = */ 0,
		/* [777] = */ 0,
		/* [778] = */ 0,
		/* [779] = */ 0,
		/* [780] = */ 0,
		/* [781] = */ 0,
		/* [782] = */ 0,
		/* [783] = */ 0,
		/* [784] = */ 0,
		/* [785] = */ 0,
		/* [786] = */ 0,
		/* [787] = */ 0,
		/* [788] = */ 0,
		/* [789] = */ 0,
		/* [790] = */ 0,
		/* [791] = */ 0,
		/* [792] = */ 0,
		/* [793] = */ 0,
		/* [794] = */ 0,
		/* [795] = */ 0,
		/* [796] = */ 0,
		/* [797] = */ 0,
		/* [798] = */ 0,
		/* [799] = */ 0,
		/* [800] = */ 0,
		/* [801] = */ 0,
		/* [802] = */ 0,
		/* [803] = */ 0,
		/* [804] = */ 0,
		/* [805] = */ 0,
		/* [806] = */ 0,
		/* [807] = */ 0,
		/* [808] = */ 0,
		/* [809] = */ 0,
		/* [810] = */ 0,
		/* [811] = */ 0,
		/* [812] = */ 0,
		/* [813] = */ 0,
		/* [814] = */ 0,
		/* [815] = */ 0,
		/* [816] = */ 0,
		/* [817] = */ 0,
		/* [818] = */ 0,
		/* [819] = */ 0,
		/* [820] = */ 0,
		/* [821] = */ 0,
		/* [822] = */ 0,
		/* [823] = */ 0,
		/* [824] = */ 0,
		/* [825] = */ 0,
		/* [826] = */ 0,
		/* [827] = */ 0,
		/* [828] = */ 0,
		/* [829] = */ 0,
		/* [830] = */ 0,
		/* [831] = */ 0,
		/* [832] = */ 0,
		/* [833] = */ 0,
		/* [834] = */ 0,
		/* [835] = */ 0,
		/* [836] = */ 0,
		/* [837] = */ 0,
		/* [838] = */ 0,
		/* [839] = */ 0,
		/* [840] = */ 0,
		/* [841] = */ 0,
		/* [842] = */ 0,
		/* [843] = */ 0,
		/* [844] = */ 0,
		/* [845] = */ 0,
		/* [846] = */ 0,
		/* [847] = */ 0,
		/* [848] = */ 0,
		/* [849] = */ 0,
		/* [850] = */ 0,
		/* [851] = */ 0,
		/* [852] = */ 0,
		/* [853] = */ 0,
		/* [854] = */ 0,
		/* [855] = */ 0,
		/* [856] = */ 0,
		/* [857] = */ 0,
		/* [858] = */ 0,
		/* [859] = */ 0,
		/* [860] = */ 0,
		/* [861] = */ 0,
		/* [862] = */ 0,
		/* [863] = */ 0,
		/* [864] = */ 0,
		/* [865] = */ 0,
		/* [866] = */ 0,
		/* [867] = */ 0,
		/* [868] = */ 0,
		/* [869] = */ 0,
		/* [870] = */ 0,
		/* [871] = */ 0,
		/* [872] = */ 0,
		/* [873] = */ 0,
		/* [874] = */ 0,
		/* [875] = */ 0,
		/* [876] = */ 0,
		/* [877] = */ 0,
		/* [878] = */ 0,
		/* [879] = */ 0,
		/* [880] = */ 0,
		/* [881] = */ 0,
		/* [882] = */ 0,
		/* [883] = */ 0,
		/* [884] = */ 0,
		/* [885] = */ 0,
		/* [886] = */ 0,
		/* [887] = */ 0,
		/* [888] = */ 0,
		/* [889] = */ 0,
		/* [890] = */ 0,
		/* [891] = */ 0,
		/* [892] = */ 0,
		/* [893] = */ 0,
		/* [894] = */ 0,
		/* [895] = */ 0,
		/* [896] = */ 0,
		/* [897] = */ 0,
		/* [898] = */ 0,
		/* [899] = */ 0,
		/* [900] = */ 0,
		/* [901] = */ 0,
		/* [902] = */ 0,
		/* [903] = */ 0,
		/* [904] = */ 0,
		/* [905] = */ 0,
		/* [906] = */ 0,
		/* [907] = */ 0,
		/* [908] = */ 0,
		/* [909] = */ 0,
		/* [910] = */ 0,
		/* [911] = */ 0,
		/* [912] = */ 0,
		/* [913] = */ 0,
		/* [914] = */ 0,
		/* [915] = */ 0,
		/* [916] = */ 0,
		/* [917] = */ 0,
		/* [918] = */ 0,
		/* [919] = */ 0,
		/* [920] = */ 0,
		/* [921] = */ 0,
		/* [922] = */ 0,
		/* [923] = */ 0,
		/* [924] = */ 0,
		/* [925] = */ 0,
		/* [926] = */ 0,
		/* [927] = */ 0,
		/* [928] = */ 0,
		/* [929] = */ 0,
		/* [930] = */ 0,
		/* [931] = */ 0,
		/* [932] = */ 0,
		/* [933] = */ 0,
		/* [934] = */ 0,
		/* [935] = */ 0,
		/* [936] = */ 0,
		/* [937] = */ 0,
		/* [938] = */ 0,
		/* [939] = */ 0,
		/* [940] = */ 0,
		/* [941] = */ 0,
		/* [942] = */ 0,
		/* [943] = */ 0,
		/* [944] = */ 0,
		/* [945] = */ 0,
		/* [946] = */ 0,
		/* [947] = */ 0,
		/* [948] = */ 0,
		/* [949] = */ 0,
		/* [950] = */ 0,
		/* [951] = */ 0,
		/* [952] = */ 0,
		/* [953] = */ 0,
		/* [954] = */ 0,
		/* [955] = */ 0,
		/* [956] = */ 0,
		/* [957] = */ 0,
		/* [958] = */ 0,
		/* [959] = */ 0,
		/* [960] = */ 0,
		/* [961] = */ 0,
		/* [962] = */ 0,
		/* [963] = */ 0,
		/* [964] = */ 0,
		/* [965] = */ 0,
		/* [966] = */ 0,
		/* [967] = */ 0,
		/* [968] = */ 0,
		/* [969] = */ 0,
		/* [970] = */ 0,
		/* [971] = */ 0,
		/* [972] = */ 0,
		/* [973] = */ 0,
		/* [974] = */ 0,
		/* [975] = */ 0,
		/* [976] = */ 0,
		/* [977] = */ 0,
		/* [978] = */ 0,
		/* [979] = */ 0,
		/* [980] = */ 0,
		/* [981] = */ 0,
		/* [982] = */ 0,
		/* [983] = */ 0,
		/* [984] = */ 0,
		/* [985] = */ 0,
		/* [986] = */ 0,
		/* [987] = */ 0,
		/* [988] = */ 0,
		/* [989] = */ 0,
		/* [990] = */ 0,
		/* [991] = */ 0,
		/* [992] = */ 0,
		/* [993] = */ 0,
		/* [994] = */ 0,
		/* [995] = */ 0,
		/* [996] = */ 0,
		/* [997] = */ 0,
		/* [998] = */ 0,
		/* [999] = */ 0,
		/* [1000] = */ 0,
		/* [1001] = */ 0,
		/* [1002] = */ 0,
		/* [1003] = */ 0,
		/* [1004] = */ 0,
		/* [1005] = */ 0,
		/* [1006] = */ 0,
		/* [1007] = */ 0,
		/* [1008] = */ 0,
		/* [1009] = */ 0,
		/* [1010] = */ 0,
		/* [1011] = */ 0,
		/* [1012] = */ 0,
		/* [1013] = */ 0,
		/* [1014] = */ 0,
		/* [1015] = */ 0,
		/* [1016] = */ 0,
		/* [1017] = */ 0,
		/* [1018] = */ 0,
		/* [1019] = */ 0,
		/* [1020] = */ 0,
		/* [1021] = */ 0,
		/* [1022] = */ 0,
		/* [1023] = */ 0,
		/* [1024] = */ 0,
		/* [1025] = */ 0,
		/* [1026] = */ 0,
		/* [1027] = */ 0,
		/* [1028] = */ 0,
		/* [1029] = */ 0,
		/* [1030] = */ 0,
		/* [1031] = */ 0,
		/* [1032] = */ 0,
		/* [1033] = */ 0,
		/* [1034] = */ 0,
		/* [1035] = */ 0,
		/* [1036] = */ 0,
		/* [1037] = */ 0,
		/* [1038] = */ 0,
		/* [1039] = */ 0,
		/* [1040] = */ 0,
		/* [1041] = */ 0,
		/* [1042] = */ 0,
		/* [1043] = */ 0,
		/* [1044] = */ 0,
		/* [1045] = */ 0,
		/* [1046] = */ 0,
		/* [1047] = */ 0,
		/* [1048] = */ 0,
		/* [1049] = */ 0,
		/* [1050] = */ 0,
		/* [1051] = */ 0,
		/* [1052] = */ 0,
		/* [1053] = */ 0,
		/* [1054] = */ 0,
		/* [1055] = */ 0,
		/* [1056] = */ 0,
		/* [1057] = */ 0,
		/* [1058] = */ 0,
		/* [1059] = */ 0,
		/* [1060] = */ 0,
		/* [1061] = */ 0,
		/* [1062] = */ 0,
		/* [1063] = */ 0,
		/* [1064] = */ 0,
		/* [1065] = */ 0,
		/* [1066] = */ 0,
		/* [1067] = */ 0,
		/* [1068] = */ 0,
		/* [1069] = */ 0,
		/* [1070] = */ 0,
		/* [1071] = */ 0,
		/* [1072] = */ 0,
		/* [1073] = */ 0,
		/* [1074] = */ 0,
		/* [1075] = */ 0,
		/* [1076] = */ 0,
		/* [1077] = */ 0,
		/* [1078] = */ 0,
		/* [1079] = */ 0,
		/* [1080] = */ 0,
		/* [1081] = */ 0,
		/* [1082] = */ 0,
		/* [1083] = */ 0,
		/* [1084] = */ 0,
		/* [1085] = */ 0,
		/* [1086] = */ 0,
		/* [1087] = */ 0,
		/* [1088] = */ 0,
		/* [1089] = */ 0,
		/* [1090] = */ 0,
		/* [1091] = */ 0,
		/* [1092] = */ 0,
		/* [1093] = */ 0,
		/* [1094] = */ 0,
		/* [1095] = */ 0,
		/* [1096] = */ 0,
		/* [1097] = */ 0,
		/* [1098] = */ 0,
		/* [1099] = */ 0,
		/* [1100] = */ 0,
		/* [1101] = */ 0,
		/* [1102] = */ 0,
		/* [1103] = */ 0,
		/* [1104] = */ 0,
		/* [1105] = */ 0,
		/* [1106] = */ 0,
		/* [1107] = */ 0,
		/* [1108] = */ 0,
		/* [1109] = */ 0,
		/* [1110] = */ 0,
		/* [1111] = */ 0,
		/* [1112] = */ 0,
		/* [1113] = */ 0,
		/* [1114] = */ 0,
		/* [1115] = */ 0,
		/* [1116] = */ 0,
		/* [1117] = */ 0,
		/* [1118] = */ 0,
		/* [1119] = */ 0,
		/* [1120] = */ 0,
		/* [1121] = */ 0,
		/* [1122] = */ 0,
		/* [1123] = */ 0,
		/* [1124] = */ 0,
		/* [1125] = */ 0,
		/* [1126] = */ 0,
		/* [1127] = */ 0,
		/* [1128] = */ 0,
		/* [1129] = */ 0,
		/* [1130] = */ 0,
		/* [1131] = */ 0,
		/* [1132] = */ 0,
		/* [1133] = */ 0,
		/* [1134] = */ 0,
		/* [1135] = */ 0,
		/* [1136] = */ 0,
		/* [1137] = */ 0,
		/* [1138] = */ 0,
		/* [1139] = */ 0,
		/* [1140] = */ 0,
		/* [1141] = */ 0,
		/* [1142] = */ 0,
		/* [1143] = */ 0,
		/* [1144] = */ 0,
		/* [1145] = */ 0,
		/* [1146] = */ 0,
		/* [1147] = */ 0,
		/* [1148] = */ 0,
		/* [1149] = */ 0,
		/* [1150] = */ 0,
		/* [1151] = */ 0,
		/* [1152] = */ 0,
		/* [1153] = */ 0,
		/* [1154] = */ 0,
		/* [1155] = */ 0,
		/* [1156] = */ 0,
		/* [1157] = */ 0,
		/* [1158] = */ 0,
		/* [1159] = */ 0,
		/* [1160] = */ 0,
		/* [1161] = */ 0,
		/* [1162] = */ 0,
		/* [1163] = */ 0,
		/* [1164] = */ 0,
		/* [1165] = */ 0,
		/* [1166] = */ 0,
		/* [1167] = */ 0,
		/* [1168] = */ 0,
		/* [1169] = */ 0,
		/* [1170] = */ 0,
		/* [1171] = */ 0,
		/* [1172] = */ 0,
		/* [1173] = */ 0,
		/* [1174] = */ 0,
		/* [1175] = */ 0,
		/* [1176] = */ 0,
		/* [1177] = */ 0,
		/* [1178] = */ 0,
		/* [1179] = */ 0,
		/* [1180] = */ 0,
		/* [1181] = */ 0,
		/* [1182] = */ 0,
		/* [1183] = */ 0,
		/* [1184] = */ 0,
		/* [1185] = */ 0,
		/* [1186] = */ 0,
		/* [1187] = */ 0,
		/* [1188] = */ 0,
		/* [1189] = */ 0,
		/* [1190] = */ 0,
		/* [1191] = */ 0,
		/* [1192] = */ 0,
		/* [1193] = */ 0,
		/* [1194] = */ 0,
		/* [1195] = */ 0,
		/* [1196] = */ 0,
		/* [1197] = */ 0,
		/* [1198] = */ 0,
		/* [1199] = */ 0,
		/* [1200] = */ 0,
		/* [1201] = */ 0,
		/* [1202] = */ 0,
		/* [1203] = */ 0,
		/* [1204] = */ 0,
		/* [1205] = */ 0,
		/* [1206] = */ 0,
		/* [1207] = */ 0,
		/* [1208] = */ 0,
		/* [1209] = */ 0,
		/* [1210] = */ 0,
		/* [1211] = */ 0,
		/* [1212] = */ 0,
		/* [1213] = */ 0,
		/* [1214] = */ 0,
		/* [1215] = */ 0,
		/* [1216] = */ 0,
		/* [1217] = */ 0,
		/* [1218] = */ 0,
		/* [1219] = */ 0,
		/* [1220] = */ 0,
		/* [1221] = */ 0,
		/* [1222] = */ 0,
		/* [1223] = */ 0,
		/* [1224] = */ 0,
		/* [1225] = */ 0,
		/* [1226] = */ 0,
		/* [1227] = */ 0,
		/* [1228] = */ 0,
		/* [1229] = */ 0,
		/* [1230] = */ 0,
		/* [1231] = */ 0,
		/* [1232] = */ 0,
		/* [1233] = */ 0,
		/* [1234] = */ 0,
		/* [1235] = */ 0,
		/* [1236] = */ 0,
		/* [1237] = */ 0,
		/* [1238] = */ 0,
		/* [1239] = */ 0,
		/* [1240] = */ 0,
		/* [1241] = */ 0,
		/* [1242] = */ 0,
		/* [1243] = */ 0,
		/* [1244] = */ 0,
		/* [1245] = */ 0,
		/* [1246] = */ 0,
		/* [1247] = */ 0,
		/* [1248] = */ 0,
		/* [1249] = */ 0,
		/* [1250] = */ 0,
		/* [1251] = */ 0,
		/* [1252] = */ 0,
		/* [1253] = */ 0,
		/* [1254] = */ 0,
		/* [1255] = */ 0,
		/* [1256] = */ 0,
		/* [1257] = */ 0,
		/* [1258] = */ 0,
		/* [1259] = */ 0,
		/* [1260] = */ 0,
		/* [1261] = */ 0,
		/* [1262] = */ 0,
		/* [1263] = */ 0,
		/* [1264] = */ 0,
		/* [1265] = */ 0,
		/* [1266] = */ 0,
		/* [1267] = */ 0,
		/* [1268] = */ 0,
		/* [1269] = */ 0,
		/* [1270] = */ 0,
		/* [1271] = */ 0,
		/* [1272] = */ 0,
		/* [1273] = */ 0,
		/* [1274] = */ 0,
		/* [1275] = */ 0,
		/* [1276] = */ 0,
		/* [1277] = */ 0,
		/* [1278] = */ 0,
		/* [1279] = */ 0,
		/* [1280] = */ 0,
		/* [1281] = */ 0,
		/* [1282] = */ 0,
		/* [1283] = */ 0,
		/* [1284] = */ 0,
		/* [1285] = */ 0,
		/* [1286] = */ 0,
		/* [1287] = */ 0,
		/* [1288] = */ 0,
		/* [1289] = */ 0,
		/* [1290] = */ 0,
		/* [1291] = */ 0,
		/* [1292] = */ 0,
		/* [1293] = */ 0,
		/* [1294] = */ 0,
		/* [1295] = */ 0,
		/* [1296] = */ 0,
		/* [1297] = */ 0,
		/* [1298] = */ 0,
		/* [1299] = */ 0,
		/* [1300] = */ 0,
		/* [1301] = */ 0,
		/* [1302] = */ 0,
		/* [1303] = */ 0,
		/* [1304] = */ 0,
		/* [1305] = */ 0,
		/* [1306] = */ 0,
		/* [1307] = */ 0,
		/* [1308] = */ 0,
		/* [1309] = */ 0,
		/* [1310] = */ 0,
		/* [1311] = */ 0,
		/* [1312] = */ 0,
		/* [1313] = */ 0,
		/* [1314] = */ 0,
		/* [1315] = */ 0,
		/* [1316] = */ 0,
		/* [1317] = */ 0,
		/* [1318] = */ 0,
		/* [1319] = */ 0,
		/* [1320] = */ 0,
		/* [1321] = */ 0,
		/* [1322] = */ 0,
		/* [1323] = */ 0,
		/* [1324] = */ 0,
		/* [1325] = */ 0,
		/* [1326] = */ 0,
		/* [1327] = */ 0,
		/* [1328] = */ 0,
		/* [1329] = */ 0,
		/* [1330] = */ 0,
		/* [1331] = */ 0,
		/* [1332] = */ 0,
		/* [1333] = */ 0,
		/* [1334] = */ 0,
		/* [1335] = */ 0,
		/* [1336] = */ 0,
		/* [1337] = */ 0,
		/* [1338] = */ 0,
		/* [1339] = */ 0,
		/* [1340] = */ 0,
		/* [1341] = */ 0,
		/* [1342] = */ 0,
		/* [1343] = */ 0,
		/* [1344] = */ 0,
		/* [1345] = */ 0,
		/* [1346] = */ 0,
		/* [1347] = */ 0,
		/* [1348] = */ 0,
		/* [1349] = */ 0,
		/* [1350] = */ 0,
		/* [1351] = */ 0,
		/* [1352] = */ 0,
		/* [1353] = */ 0,
		/* [1354] = */ 0,
		/* [1355] = */ 0,
		/* [1356] = */ 0,
		/* [1357] = */ 0,
		/* [1358] = */ 0,
		/* [1359] = */ 0,
		/* [1360] = */ 0,
		/* [1361] = */ 0,
		/* [1362] = */ 0,
		/* [1363] = */ 0,
		/* [1364] = */ 0,
		/* [1365] = */ 0,
		/* [1366] = */ 0,
		/* [1367] = */ 0,
		/* [1368] = */ 0,
		/* [1369] = */ 0,
		/* [1370] = */ 0,
		/* [1371] = */ 0,
		/* [1372] = */ 0,
		/* [1373] = */ 0,
		/* [1374] = */ 0,
		/* [1375] = */ 0,
		/* [1376] = */ 0,
		/* [1377] = */ 0,
		/* [1378] = */ 0,
		/* [1379] = */ 0,
		/* [1380] = */ 0,
		/* [1381] = */ 0,
		/* [1382] = */ 0,
		/* [1383] = */ 0,
		/* [1384] = */ 0,
		/* [1385] = */ 0,
		/* [1386] = */ 0,
		/* [1387] = */ 0,
		/* [1388] = */ 0,
		/* [1389] = */ 0,
		/* [1390] = */ 0,
		/* [1391] = */ 0,
		/* [1392] = */ 0,
		/* [1393] = */ 0,
		/* [1394] = */ 0,
		/* [1395] = */ 0,
		/* [1396] = */ 0,
		/* [1397] = */ 0,
		/* [1398] = */ 0,
		/* [1399] = */ 0,
		/* [1400] = */ 0,
		/* [1401] = */ 0,
		/* [1402] = */ 0,
		/* [1403] = */ 0,
		/* [1404] = */ 0,
		/* [1405] = */ 0,
		/* [1406] = */ 0,
		/* [1407] = */ 0,
		/* [1408] = */ 0,
		/* [1409] = */ 0,
		/* [1410] = */ 0,
		/* [1411] = */ 0,
		/* [1412] = */ 0,
		/* [1413] = */ 0,
		/* [1414] = */ 0,
		/* [1415] = */ 0,
		/* [1416] = */ 0,
		/* [1417] = */ 0,
		/* [1418] = */ 0,
		/* [1419] = */ 0,
		/* [1420] = */ 0,
		/* [1421] = */ 0,
		/* [1422] = */ 0,
		/* [1423] = */ 0,
		/* [1424] = */ 0,
		/* [1425] = */ 0,
		/* [1426] = */ 0,
		/* [1427] = */ 0,
		/* [1428] = */ 0,
		/* [1429] = */ 0,
		/* [1430] = */ 0,
		/* [1431] = */ 0,
		/* [1432] = */ 0,
		/* [1433] = */ 0,
		/* [1434] = */ 0,
		/* [1435] = */ 0,
		/* [1436] = */ 0,
		/* [1437] = */ 0,
		/* [1438] = */ 0,
		/* [1439] = */ 0,
		/* [1440] = */ 0,
		/* [1441] = */ 0,
		/* [1442] = */ 0,
		/* [1443] = */ 0,
		/* [1444] = */ 0,
		/* [1445] = */ 0,
		/* [1446] = */ 0,
		/* [1447] = */ 0,
		/* [1448] = */ 0,
		/* [1449] = */ 0,
		/* [1450] = */ 0,
		/* [1451] = */ 0,
		/* [1452] = */ 0,
		/* [1453] = */ 0,
		/* [1454] = */ 0,
		/* [1455] = */ 0,
		/* [1456] = */ 0,
		/* [1457] = */ 0,
		/* [1458] = */ 0,
		/* [1459] = */ 0,
		/* [1460] = */ 0,
		/* [1461] = */ 0,
		/* [1462] = */ 0,
		/* [1463] = */ 0,
		/* [1464] = */ 0,
		/* [1465] = */ 0,
		/* [1466] = */ 0,
		/* [1467] = */ 0,
		/* [1468] = */ 0,
		/* [1469] = */ 0,
		/* [1470] = */ 0,
		/* [1471] = */ 0,
		/* [1472] = */ 0,
		/* [1473] = */ 0,
		/* [1474] = */ 0,
		/* [1475] = */ 0,
		/* [1476] = */ 0,
		/* [1477] = */ 0,
		/* [1478] = */ 0,
		/* [1479] = */ 0,
		/* [1480] = */ 0,
		/* [1481] = */ 0,
		/* [1482] = */ 0,
		/* [1483] = */ 0,
		/* [1484] = */ 0,
		/* [1485] = */ 0,
		/* [1486] = */ 0,
		/* [1487] = */ 0,
		/* [1488] = */ 0,
		/* [1489] = */ 0,
		/* [1490] = */ 0,
		/* [1491] = */ 0,
		/* [1492] = */ 0,
		/* [1493] = */ 0,
		/* [1494] = */ 0,
		/* [1495] = */ 0,
		/* [1496] = */ 0,
		/* [1497] = */ 0,
		/* [1498] = */ 0,
		/* [1499] = */ 0,
		/* [1500] = */ 0,
		/* [1501] = */ 0,
		/* [1502] = */ 0,
		/* [1503] = */ 0,
		/* [1504] = */ 0,
		/* [1505] = */ 0,
		/* [1506] = */ 0,
		/* [1507] = */ 0,
		/* [1508] = */ 0,
		/* [1509] = */ 0,
		/* [1510] = */ 0,
		/* [1511] = */ 0,
		/* [1512] = */ 0,
		/* [1513] = */ 0,
		/* [1514] = */ 0,
		/* [1515] = */ 0,
		/* [1516] = */ 0,
		/* [1517] = */ 0,
		/* [1518] = */ 0,
		/* [1519] = */ 0,
		/* [1520] = */ 0,
		/* [1521] = */ 0,
		/* [1522] = */ 0,
		/* [1523] = */ 0,
		/* [1524] = */ 0,
		/* [1525] = */ 0,
		/* [1526] = */ 0,
		/* [1527] = */ 0,
		/* [1528] = */ 0,
		/* [1529] = */ 0,
		/* [1530] = */ 0,
		/* [1531] = */ 0,
		/* [1532] = */ 0,
		/* [1533] = */ 0,
		/* [1534] = */ 0,
		/* [1535] = */ 0,
		/* [1536] = */ 0,
		/* [1537] = */ 0,
		/* [1538] = */ 0,
		/* [1539] = */ 0,
		/* [1540] = */ 0,
		/* [1541] = */ 0,
		/* [1542] = */ 0,
		/* [1543] = */ 0,
		/* [1544] = */ 0,
		/* [1545] = */ 0,
		/* [1546] = */ 0,
		/* [1547] = */ 0,
		/* [1548] = */ 0,
		/* [1549] = */ 0,
		/* [1550] = */ 0,
		/* [1551] = */ 0,
		/* [1552] = */ 0,
		/* [1553] = */ 0,
		/* [1554] = */ 0,
		/* [1555] = */ 0,
		/* [1556] = */ 0,
		/* [1557] = */ 0,
		/* [1558] = */ 0,
		/* [1559] = */ 0,
		/* [1560] = */ 0,
		/* [1561] = */ 0,
		/* [1562] = */ 0,
		/* [1563] = */ 0,
		/* [1564] = */ 0,
		/* [1565] = */ 0,
		/* [1566] = */ 0,
		/* [1567] = */ 0,
		/* [1568] = */ 0,
		/* [1569] = */ 0,
		/* [1570] = */ 0,
		/* [1571] = */ 0,
		/* [1572] = */ 0,
		/* [1573] = */ 0,
		/* [1574] = */ 0,
		/* [1575] = */ 0,
		/* [1576] = */ 0,
		/* [1577] = */ 0,
		/* [1578] = */ 0,
		/* [1579] = */ 0,
		/* [1580] = */ 0,
		/* [1581] = */ 0,
		/* [1582] = */ 0,
		/* [1583] = */ 0,
		/* [1584] = */ 0,
		/* [1585] = */ 0,
		/* [1586] = */ 0,
		/* [1587] = */ 0,
		/* [1588] = */ 0,
		/* [1589] = */ 0,
		/* [1590] = */ 0,
		/* [1591] = */ 0,
		/* [1592] = */ 0,
		/* [1593] = */ 0,
		/* [1594] = */ 0,
		/* [1595] = */ 0,
		/* [1596] = */ 0,
		/* [1597] = */ 0,
		/* [1598] = */ 0,
		/* [1599] = */ 0,
		/* [1600] = */ 0,
		/* [1601] = */ 0,
		/* [1602] = */ 0,
		/* [1603] = */ 0,
		/* [1604] = */ 0,
		/* [1605] = */ 0,
		/* [1606] = */ 0,
		/* [1607] = */ 0,
		/* [1608] = */ 0,
		/* [1609] = */ 0,
		/* [1610] = */ 0,
		/* [1611] = */ 0,
		/* [1612] = */ 0,
		/* [1613] = */ 0,
		/* [1614] = */ 0,
		/* [1615] = */ 0,
		/* [1616] = */ 0,
		/* [1617] = */ 0,
		/* [1618] = */ 0,
		/* [1619] = */ 0,
		/* [1620] = */ 0,
		/* [1621] = */ 0,
		/* [1622] = */ 0,
		/* [1623] = */ 0,
		/* [1624] = */ 0,
		/* [1625] = */ 0,
		/* [1626] = */ 0,
		/* [1627] = */ 0,
		/* [1628] = */ 0,
		/* [1629] = */ 0,
		/* [1630] = */ 0,
		/* [1631] = */ 0,
		/* [1632] = */ 0,
		/* [1633] = */ 0,
		/* [1634] = */ 0,
		/* [1635] = */ 0,
		/* [1636] = */ 0,
		/* [1637] = */ 0,
		/* [1638] = */ 0,
		/* [1639] = */ 0,
		/* [1640] = */ 0,
		/* [1641] = */ 0,
		/* [1642] = */ 0,
		/* [1643] = */ 0,
		/* [1644] = */ 0,
		/* [1645] = */ 0,
		/* [1646] = */ 0,
		/* [1647] = */ 0,
		/* [1648] = */ 0,
		/* [1649] = */ 0,
		/* [1650] = */ 0,
		/* [1651] = */ 0,
		/* [1652] = */ 0,
		/* [1653] = */ 0,
		/* [1654] = */ 0,
		/* [1655] = */ 0,
		/* [1656] = */ 0,
		/* [1657] = */ 0,
		/* [1658] = */ 0,
		/* [1659] = */ 0,
		/* [1660] = */ 0,
		/* [1661] = */ 0,
		/* [1662] = */ 0,
		/* [1663] = */ 0,
		/* [1664] = */ 0,
		/* [1665] = */ 0,
		/* [1666] = */ 0,
		/* [1667] = */ 0,
		/* [1668] = */ 0,
		/* [1669] = */ 0,
		/* [1670] = */ 0,
		/* [1671] = */ 0,
		/* [1672] = */ 0,
		/* [1673] = */ 0,
		/* [1674] = */ 0,
		/* [1675] = */ 0,
		/* [1676] = */ 0,
		/* [1677] = */ 0,
		/* [1678] = */ 0,
		/* [1679] = */ 0,
		/* [1680] = */ 0,
		/* [1681] = */ 0,
		/* [1682] = */ 0,
		/* [1683] = */ 0,
		/* [1684] = */ 0,
		/* [1685] = */ 0,
		/* [1686] = */ 0,
		/* [1687] = */ 0,
		/* [1688] = */ 0,
		/* [1689] = */ 0,
		/* [1690] = */ 0,
		/* [1691] = */ 0,
		/* [1692] = */ 0,
		/* [1693] = */ 0,
		/* [1694] = */ 0,
		/* [1695] = */ 0,
		/* [1696] = */ 0,
		/* [1697] = */ 0,
		/* [1698] = */ 0,
		/* [1699] = */ 0,
		/* [1700] = */ 0,
		/* [1701] = */ 0,
		/* [1702] = */ 0,
		/* [1703] = */ 0,
		/* [1704] = */ 0,
		/* [1705] = */ 0,
		/* [1706] = */ 0,
		/* [1707] = */ 0,
		/* [1708] = */ 0,
		/* [1709] = */ 0,
		/* [1710] = */ 0,
		/* [1711] = */ 0,
		/* [1712] = */ 0,
		/* [1713] = */ 0,
		/* [1714] = */ 0,
		/* [1715] = */ 0,
		/* [1716] = */ 0,
		/* [1717] = */ 0,
		/* [1718] = */ 0,
		/* [1719] = */ 0,
		/* [1720] = */ 0,
		/* [1721] = */ 0,
		/* [1722] = */ 0,
		/* [1723] = */ 0,
		/* [1724] = */ 0,
		/* [1725] = */ 0,
		/* [1726] = */ 0,
		/* [1727] = */ 0,
		/* [1728] = */ 0,
		/* [1729] = */ 0,
		/* [1730] = */ 0,
		/* [1731] = */ 0,
		/* [1732] = */ 0,
		/* [1733] = */ 0,
		/* [1734] = */ 0,
		/* [1735] = */ 0,
		/* [1736] = */ 0,
		/* [1737] = */ 0,
		/* [1738] = */ 0,
		/* [1739] = */ 0,
		/* [1740] = */ 0,
		/* [1741] = */ 0,
		/* [1742] = */ 0,
		/* [1743] = */ 0,
		/* [1744] = */ 0,
		/* [1745] = */ 0,
		/* [1746] = */ 0,
		/* [1747] = */ 0,
		/* [1748] = */ 0,
		/* [1749] = */ 0,
		/* [1750] = */ 0,
		/* [1751] = */ 0,
		/* [1752] = */ 0,
		/* [1753] = */ 0,
		/* [1754] = */ 0,
		/* [1755] = */ 0,
		/* [1756] = */ 0,
		/* [1757] = */ 0,
		/* [1758] = */ 0,
		/* [1759] = */ 0,
		/* [1760] = */ 0,
		/* [1761] = */ 0,
		/* [1762] = */ 0,
		/* [1763] = */ 0,
		/* [1764] = */ 0,
		/* [1765] = */ 0,
		/* [1766] = */ 0,
		/* [1767] = */ 0,
		/* [1768] = */ 0,
		/* [1769] = */ 0,
		/* [1770] = */ 0,
		/* [1771] = */ 0,
		/* [1772] = */ 0,
		/* [1773] = */ 0,
		/* [1774] = */ 0,
		/* [1775] = */ 0,
		/* [1776] = */ 0,
		/* [1777] = */ 0,
		/* [1778] = */ 0,
		/* [1779] = */ 0,
		/* [1780] = */ 0,
		/* [1781] = */ 0,
		/* [1782] = */ 0,
		/* [1783] = */ 0,
		/* [1784] = */ 0,
		/* [1785] = */ 0,
		/* [1786] = */ 0,
		/* [1787] = */ 0,
		/* [1788] = */ 0,
		/* [1789] = */ 0,
		/* [1790] = */ 0,
		/* [1791] = */ 0,
		/* [1792] = */ 0,
		/* [1793] = */ 0,
		/* [1794] = */ 0,
		/* [1795] = */ 0,
		/* [1796] = */ 0,
		/* [1797] = */ 0,
		/* [1798] = */ 0,
		/* [1799] = */ 0,
		/* [1800] = */ 0,
		/* [1801] = */ 0,
		/* [1802] = */ 0,
		/* [1803] = */ 0,
		/* [1804] = */ 0,
		/* [1805] = */ 0,
		/* [1806] = */ 0,
		/* [1807] = */ 0,
		/* [1808] = */ 0,
		/* [1809] = */ 0,
		/* [1810] = */ 0,
		/* [1811] = */ 0,
		/* [1812] = */ 0,
		/* [1813] = */ 0,
		/* [1814] = */ 0,
		/* [1815] = */ 0,
		/* [1816] = */ 0,
		/* [1817] = */ 0,
		/* [1818] = */ 0,
		/* [1819] = */ 0,
		/* [1820] = */ 0,
		/* [1821] = */ 0,
		/* [1822] = */ 0,
		/* [1823] = */ 0,
		/* [1824] = */ 0,
		/* [1825] = */ 0,
		/* [1826] = */ 0,
		/* [1827] = */ 0,
		/* [1828] = */ 0,
		/* [1829] = */ 0,
		/* [1830] = */ 0,
		/* [1831] = */ 0,
		/* [1832] = */ 0,
		/* [1833] = */ 0,
		/* [1834] = */ 0,
		/* [1835] = */ 0,
		/* [1836] = */ 0,
		/* [1837] = */ 0,
		/* [1838] = */ 0,
		/* [1839] = */ 0,
		/* [1840] = */ 0,
		/* [1841] = */ 0,
		/* [1842] = */ 0,
		/* [1843] = */ 0,
		/* [1844] = */ 0,
		/* [1845] = */ 0,
		/* [1846] = */ 0,
		/* [1847] = */ 0,
		/* [1848] = */ 0,
		/* [1849] = */ 0,
		/* [1850] = */ 0,
		/* [1851] = */ 0,
		/* [1852] = */ 0,
		/* [1853] = */ 0,
		/* [1854] = */ 0,
		/* [1855] = */ 0
	}
};

__vtbl_ptr_type SimInfoWin::Panelstateman virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ -312,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -312,
		/* .__index = */ 0,
		/* .__pfn = */ &SimInfoWin::~SimInfoWin,
		/* .__delta2 = */ -144
	},
	/* [2] = */ {
		/* .__delta = */ -312,
		/* .__index = */ 0,
		/* .__pfn = */ &SimInfoWin::SetState,
		/* .__delta2 = */ 4152
	},
	/* [3] = */ {
		/* .__delta = */ -312,
		/* .__index = */ 0,
		/* .__pfn = */ &SimInfoWin::SetEvent,
		/* .__delta2 = */ 20800
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type SimInfoWin virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimInfoWin::~SimInfoWin,
		/* .__delta2 = */ -144
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimInfoWin::Update,
		/* .__delta2 = */ 2824
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimInfoWin::Draw,
		/* .__delta2 = */ 4256
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ERelationsIcon virtual table[16] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERelationsIcon::~ERelationsIcon,
		/* .__delta2 = */ 13592
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERelationsIcon::Update,
		/* .__delta2 = */ 15936
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERelationsIcon::Draw,
		/* .__delta2 = */ 14336
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
		/* .__pfn = */ &ERelationsIcon::SafeDelete,
		/* .__delta2 = */ 20632
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ERelationsWin virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERelationsWin::~ERelationsWin,
		/* .__delta2 = */ 10152
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERelationsWin::Update,
		/* .__delta2 = */ 12640
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERelationsWin::Draw,
		/* .__delta2 = */ 12576
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
		/* .__pfn = */ &EUIObjectNode::Message,
		/* .__delta2 = */ 3616
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

static short unsigned int __TEMPSTRING[18] = {
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

float m_introAnimDur = 0.f;
float m_infointroAnimDur = 0.f;
float m_introTime = 0.f;
float m_hoverTime = 0.f;
float m_infoInTime = 0.f;

short unsigned int __InfoMessageBuff[64] = {
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
	/* [63] = */ 0
};

void (*SimInfoWin::m_DrawTable[4])(/* parameters unknown */);
void (*SimInfoWin::m_UpdateTable[4])(/* parameters unknown */);

float GetMovtiveMag(float val) {
	float mag;
	
  float fVar1;
  
  fVar1 = (val + 100.0) * 0.005;
  if (fVar1 < 0.0) {
    return 0.0;
  }
  return (float)((int)fVar1 * (uint)(fVar1 < 1.0) | (uint)(fVar1 >= 1.0) * 0x3f800000);
}

void DrawRedGreenBar(ERC *prc, float w, float h, float greenmag, EVec2 vPos, float _alpha) {
	EVec2 vGreenw;
	EVec2 *this;
	EVec2 *this;
	float x;
	float y;
	float scaler;
	float x;
	float y;
	EVec2 *this;
	float scaler;
	float y;
	EVec2 *this;
	float scaler;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar1;
  EVec2 vGreenw;
  float local_e0;
  float local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b0;
  undefined4 local_ac;
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
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar1 = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_e0 = 0.005;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_dc = 0.0025;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_b0 = 0x3b23d70a;
  local_ac = 0x3ba3d70a;
  local_c0 = (vPos->field0_0x0).d[0] + 0.0025;
  local_bc = (vPos->field0_0x0).d[1] + 0.005;
  vGreenw.field0_0x0.d[0] = (vPos->field0_0x0).d[0] + 0.005;
  local_d0 = local_c0 + w;
  local_cc = local_bc + h;
  local_90 = _BLACK.field0_0x0.d[0] * _alpha;
  vGreenw.field0_0x0.d[1] = (vPos->field0_0x0).d[1] + 0.0025;
  local_8c = _BLACK.field0_0x0.d[1] * _alpha;
  local_88 = _BLACK.field0_0x0.d[2] * _alpha;
  local_84 = _BLACK.field0_0x0.d[3] * _alpha;
                    /* end of inlined section */
  local_a0 = w;
  local_9c = h;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vGreenw,&local_d0,
             0x3cfc68,0x3cfc70,&local_90);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vGreenw.field0_0x0.d[0] = (vPos->field0_0x0).d[0] + w;
  vGreenw.field0_0x0.d[1] = (vPos->field0_0x0).d[1] + h;
  local_c4 = _RED.field0_0x0.d[3] * _alpha;
  local_cc = _RED.field0_0x0.d[1] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_c8 = _RED.field0_0x0.d[2] * _alpha;
  local_d0 = _RED.field0_0x0.d[0] * _alpha;
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
  local_e0 = w;
  local_dc = h;
  (*(code *)prc->__vtable[1].DisplayList)
            (fVar1,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,vPos,&vGreenw,
             0x3cfc68,0x3cfc70,&local_d0);
  if (greenmag != fVar1) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    vGreenw.field0_0x0.d[0] = greenmag * w;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_e0 = (vPos->field0_0x0).d[0] + vGreenw.field0_0x0.d[0];
    local_c4 = _GREEN.field0_0x0.d[3] * _alpha;
    local_cc = _GREEN.field0_0x0.d[1] * _alpha;
    local_c8 = _GREEN.field0_0x0.d[2] * _alpha;
    local_dc = (vPos->field0_0x0).d[1] + h;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_d0 = _GREEN.field0_0x0.d[0] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vGreenw.field0_0x0.d[1] = h;
    (*(code *)prc->__vtable[1].DisplayList)
              (fVar1,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,vPos,&local_e0,
               0x3cfc68,0x3cfc70,&local_d0);
  }
  return;
}

void DrawRedGreenBar(ERC *prc, float greenmag, EVec2 vPos, float _alpha, EVec2 *vPulse) {
	u32 i;
	u32 x;
	u32 nNumGreenRects;
	float fPulseIntensity;
	EVec2 vCurrPos;
	EVec2 vOffset;
	s32 nSignedPulse;
	EVec4 vColor;
	EVec2 *this;
	EVec2 *this;
	float scaler;
	EVec2 &v;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	u32 nPartialPulse;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float fFullIntensity;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	float scaler;
	
  uint uVar1;
  uint uVar2;
  undefined8 unaff_s0;
  uint uVar3;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  EVec2 vCurrPos;
  EVec2 vOffset;
  EVec4 vColor;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  uint nPartialPulse;
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
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar8 = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vCurrPos.field0_0x0.d[0] = (vPos->field0_0x0).d[0] + 0.005;
  local_120 = 0.0025;
  vCurrPos.field0_0x0.d[1] = (vPos->field0_0x0).d[1] + 0.0025;
  local_11c = 0.005;
  local_110 = 0x3e051eb8;
  local_10c = 0x3ca3d70a;
  local_130 = (vPos->field0_0x0).d[0] + 0.0025;
  local_12c = (vPos->field0_0x0).d[1] + 0.005;
  local_100 = _BLACK.field0_0x0.d[0] * _alpha;
  local_f4 = _BLACK.field0_0x0.d[3] * _alpha;
  vColor.field0_0x0.d[0] = local_130 + 0.13;
  local_fc = _BLACK.field0_0x0.d[1] * _alpha;
  vColor.field0_0x0.d[1] = local_12c + 0.02;
  local_f8 = _BLACK.field0_0x0.d[2] * _alpha;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCurrPos,&vColor,
             0x3cfc68,0x3cfc70,&local_100);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vCurrPos.field0_0x0.d[0] = (vPos->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vCurrPos.field0_0x0.d[1] = (vPos->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar6 = (uint)(greenmag * 16.0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  if (0.99 < greenmag) {
    uVar6 = 0x10;
  }
                    /* end of inlined section */
  fVar4 = (vPulse->field0_0x0).d[0];
  if (fVar8 < fVar4) {
    if (fVar4 < 15.0) {
      fVar5 = (vPulse->field0_0x0).d[1];
      fVar8 = 0.025;
      fVar4 = _dt * 12.0;
    }
    else if (fVar4 < 25.0) {
      fVar5 = (vPulse->field0_0x0).d[1];
      fVar8 = 0.035;
      fVar4 = _dt * 16.0;
    }
    else if (fVar4 < 40.0) {
      fVar5 = (vPulse->field0_0x0).d[1];
      fVar8 = 0.045;
      fVar4 = _dt * 20.0;
    }
    else {
      fVar5 = (vPulse->field0_0x0).d[1];
      if (fVar4 < 55.0) {
        fVar8 = 0.055;
        fVar4 = _dt * 24.0;
      }
      else {
        fVar4 = _dt * 28.0;
        fVar8 = 0.065;
      }
    }
    (vPulse->field0_0x0).d[1] = fVar5 + fVar4;
    fVar4 = (vPulse->field0_0x0).d[1];
    if (16.0 < fVar4) {
      (vPulse->field0_0x0).d[1] = fVar4 - 16.0;
      fVar4 = (vPulse->field0_0x0).d[1];
    }
    uVar2 = (uint)fVar4;
    uVar7 = 1;
    if (uVar2 < 0xc) {
      uVar1 = 0;
      if (uVar6 != 0) {
        do {
          if ((uVar1 < uVar2) || (uVar2 + 4 <= uVar1)) {
            local_12c = _GREEN.field0_0x0.d[1] * _alpha * 0.8;
            local_128 = _GREEN.field0_0x0.d[2] * _alpha * 0.8;
            local_124 = _GREEN.field0_0x0.d[3] * _alpha * 0.8;
            local_130 = _GREEN.field0_0x0.d[0] * _alpha * 0.8;
          }
          else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
            local_ec = _GREEN.field0_0x0.d[1] * _alpha;
            local_e8 = _GREEN.field0_0x0.d[2] * _alpha;
            local_e4 = _GREEN.field0_0x0.d[3] * _alpha;
            local_f0 = _GREEN.field0_0x0.d[0] * _alpha;
                    /* end of inlined section */
            if ((int)uVar7 < 0) {
              fVar4 = (float)(uVar7 & 1 | uVar7 >> 1);
              fVar4 = fVar4 + fVar4;
            }
            else {
              fVar4 = (float)uVar7;
            }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
            uVar7 = uVar7 + 1;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
            local_128 = fVar4 * fVar8 + 0.85;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
            local_130 = local_f0 * local_128;
            local_124 = local_e4 * local_128;
            local_12c = local_ec * local_128;
            local_128 = local_e8 * local_128;
                    /* end of inlined section */
          }
                    /* end of inlined section */
          vColor.field0_0x0.d[0] = local_130;
          vColor.field0_0x0.d[1] = local_12c;
          vColor.field0_0x0.d[2] = local_128;
          vColor.field0_0x0.d[3] = local_124;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_120 = local_130 * _alpha;
          local_11c = local_12c * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_118 = local_128 * _alpha;
          local_114 = local_124 * _alpha;
                    /* end of inlined section */
          uVar1 = uVar1 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_130 = vCurrPos.field0_0x0.d[0] + 0.008125;
          local_12c = vCurrPos.field0_0x0.d[1] + 0.02;
          (*(code *)prc->__vtable[1].DisplayList)
                    (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCurrPos,
                     &local_130,0x3cfc68,0x3cfc70,&local_120);
          vCurrPos.field0_0x0.d[0] = vCurrPos.field0_0x0.d[0] + 0.008125;
        } while (uVar1 < uVar6);
      }
      if (uVar1 < 0x10) {
        fVar8 = 0.008125;
        do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          vColor.field0_0x0.d[1] = _RED.field0_0x0.d[1] * _alpha * 0.8;
          vColor.field0_0x0.d[2] = _RED.field0_0x0.d[2] * _alpha * 0.8;
          vColor.field0_0x0.d[0] = _RED.field0_0x0.d[0] * _alpha * 0.8;
          vColor.field0_0x0.d[3] = _RED.field0_0x0.d[3] * _alpha * 0.8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          uVar1 = uVar1 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_130 = vCurrPos.field0_0x0.d[0] + 0.008125;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_12c = vCurrPos.field0_0x0.d[1] + 0.02;
          local_120 = vColor.field0_0x0.d[0] * _alpha;
          local_11c = vColor.field0_0x0.d[1] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_118 = vColor.field0_0x0.d[2] * _alpha;
          local_114 = vColor.field0_0x0.d[3] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_128 = vColor.field0_0x0.d[2];
          local_124 = vColor.field0_0x0.d[3];
          (*(code *)prc->__vtable[1].DisplayList)
                    (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCurrPos,
                     &local_130,0x3cfc68,0x3cfc70,&local_120);
          vCurrPos.field0_0x0.d[0] = vCurrPos.field0_0x0.d[0] + fVar8;
        } while (uVar1 < 0x10);
      }
    }
    else {
      uVar1 = uVar2 - 0xc;
      uVar7 = 0;
      nPartialPulse = uVar1;
      if (uVar6 != 0) {
        uVar3 = -uVar2;
        fVar4 = 0.85;
        do {
          uVar3 = uVar3 + 1;
          if (uVar7 < nPartialPulse) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
            if ((int)uVar1 < 0) {
              fVar5 = (float)(uVar1 & 1 | uVar1 >> 1);
              fVar5 = fVar5 + fVar5;
            }
            else {
              fVar5 = (float)uVar1;
            }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
            uVar1 = uVar1 + 1;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
            local_128 = fVar5 * fVar8 + fVar4;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
            local_130 = _GREEN.field0_0x0.d[0] * _alpha * local_128;
            local_124 = _GREEN.field0_0x0.d[3] * _alpha * local_128;
            local_12c = _GREEN.field0_0x0.d[1] * _alpha * local_128;
            local_128 = _GREEN.field0_0x0.d[2] * _alpha * local_128;
                    /* end of inlined section */
          }
          else if (uVar7 < uVar2) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
            local_12c = _GREEN.field0_0x0.d[1] * _alpha * 0.8;
            local_128 = _GREEN.field0_0x0.d[2] * _alpha * 0.8;
            local_124 = _GREEN.field0_0x0.d[3] * _alpha * 0.8;
            local_130 = _GREEN.field0_0x0.d[0] * _alpha * 0.8;
          }
          else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
            if ((int)uVar3 < 0) {
              fVar5 = (float)(uVar3 & 1 | uVar3 >> 1);
              fVar5 = fVar5 + fVar5;
            }
            else {
              fVar5 = (float)uVar3;
            }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
            local_128 = fVar5 * fVar8 + fVar4;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
            local_130 = _GREEN.field0_0x0.d[0] * _alpha * local_128;
            local_124 = _GREEN.field0_0x0.d[3] * _alpha * local_128;
            local_12c = _GREEN.field0_0x0.d[1] * _alpha * local_128;
            local_128 = _GREEN.field0_0x0.d[2] * _alpha * local_128;
                    /* end of inlined section */
          }
                    /* end of inlined section */
          vColor.field0_0x0.d[0] = local_130;
          vColor.field0_0x0.d[1] = local_12c;
          vColor.field0_0x0.d[2] = local_128;
          vColor.field0_0x0.d[3] = local_124;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_120 = local_130 * _alpha;
          local_11c = local_12c * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_118 = local_128 * _alpha;
          local_114 = local_124 * _alpha;
                    /* end of inlined section */
          uVar7 = uVar7 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
          local_130 = vCurrPos.field0_0x0.d[0] + 0.008125;
          local_12c = vCurrPos.field0_0x0.d[1] + 0.02;
          (*(code *)prc->__vtable[1].DisplayList)
                    (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCurrPos,
                     &local_130,0x3cfc68,0x3cfc70,&local_120);
          vCurrPos.field0_0x0.d[0] = vCurrPos.field0_0x0.d[0] + 0.008125;
        } while (uVar7 < uVar6);
      }
      if (uVar7 < 0x10) {
        fVar8 = 0.008125;
        do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          vColor.field0_0x0.d[1] = _RED.field0_0x0.d[1] * _alpha * 0.8;
          vColor.field0_0x0.d[2] = _RED.field0_0x0.d[2] * _alpha * 0.8;
          vColor.field0_0x0.d[0] = _RED.field0_0x0.d[0] * _alpha * 0.8;
          vColor.field0_0x0.d[3] = _RED.field0_0x0.d[3] * _alpha * 0.8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          uVar7 = uVar7 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_130 = vCurrPos.field0_0x0.d[0] + 0.008125;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_12c = vCurrPos.field0_0x0.d[1] + 0.02;
          local_120 = vColor.field0_0x0.d[0] * _alpha;
          local_11c = vColor.field0_0x0.d[1] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_118 = vColor.field0_0x0.d[2] * _alpha;
          local_114 = vColor.field0_0x0.d[3] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_128 = vColor.field0_0x0.d[2];
          local_124 = vColor.field0_0x0.d[3];
          (*(code *)prc->__vtable[1].DisplayList)
                    (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCurrPos,
                     &local_130,0x3cfc68,0x3cfc70,&local_120);
          vCurrPos.field0_0x0.d[0] = vCurrPos.field0_0x0.d[0] + fVar8;
        } while (uVar7 < 0x10);
      }
    }
  }
  else {
    if (-15.0 < fVar4) {
      fVar5 = (vPulse->field0_0x0).d[1];
      fVar8 = 0.025;
      fVar4 = _dt * 12.0;
    }
    else if (-25.0 < fVar4) {
      fVar5 = (vPulse->field0_0x0).d[1];
      fVar8 = 0.035;
      fVar4 = _dt * 16.0;
    }
    else if (-40.0 < fVar4) {
      fVar5 = (vPulse->field0_0x0).d[1];
      fVar8 = 0.045;
      fVar4 = _dt * 20.0;
    }
    else {
      fVar5 = (vPulse->field0_0x0).d[1];
      if (-55.0 < fVar4) {
        fVar8 = 0.055;
        fVar4 = _dt * 24.0;
      }
      else {
        fVar4 = _dt * 28.0;
        fVar8 = 0.065;
      }
    }
    (vPulse->field0_0x0).d[1] = fVar5 + fVar4;
    fVar4 = (vPulse->field0_0x0).d[1];
    if (16.0 < fVar4) {
      (vPulse->field0_0x0).d[1] = fVar4 - 16.0;
      fVar4 = (vPulse->field0_0x0).d[1];
    }
    uVar7 = (uint)(16.0 - fVar4);
    fVar4 = fVar8 * 4.0 + 0.8;
    if ((int)uVar7 < 0) {
      fVar5 = (float)(uVar7 & 1 | uVar7 >> 1);
      fVar5 = fVar5 + fVar5;
    }
    else {
      fVar5 = (float)uVar7;
    }
    if (fVar5 < 12.0) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      uVar2 = 0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      vColor.field0_0x0.d[0] = _GREEN.field0_0x0.d[0] * _alpha * 0.8;
      vColor.field0_0x0.d[1] = _GREEN.field0_0x0.d[1] * _alpha * 0.8;
      vColor.field0_0x0.d[3] = _GREEN.field0_0x0.d[3] * _alpha * 0.8;
      vColor.field0_0x0.d[2] = _GREEN.field0_0x0.d[2] * _alpha * 0.8;
                    /* end of inlined section */
      local_128 = vColor.field0_0x0.d[2];
      local_124 = vColor.field0_0x0.d[3];
      if (uVar6 != 0) {
        do {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_130 = vCurrPos.field0_0x0.d[0] + 0.008125;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_12c = vCurrPos.field0_0x0.d[1] + 0.02;
          local_120 = vColor.field0_0x0.d[0] * _alpha;
          local_11c = vColor.field0_0x0.d[1] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_118 = vColor.field0_0x0.d[2] * _alpha;
          local_114 = vColor.field0_0x0.d[3] * _alpha;
                    /* end of inlined section */
          uVar2 = uVar2 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          (*(code *)prc->__vtable[1].DisplayList)
                    (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCurrPos,
                     &local_130,0x3cfc68,0x3cfc70,&local_120);
          vCurrPos.field0_0x0.d[0] = vCurrPos.field0_0x0.d[0] + 0.008125;
        } while (uVar2 < uVar6);
      }
      for (; uVar2 < uVar7; uVar2 = uVar2 + 1) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        vColor.field0_0x0.d[1] = _RED.field0_0x0.d[1] * _alpha * 0.8;
        vColor.field0_0x0.d[2] = _RED.field0_0x0.d[2] * _alpha * 0.8;
        vColor.field0_0x0.d[0] = _RED.field0_0x0.d[0] * _alpha * 0.8;
        vColor.field0_0x0.d[3] = _RED.field0_0x0.d[3] * _alpha * 0.8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_130 = vCurrPos.field0_0x0.d[0] + 0.008125;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_12c = vCurrPos.field0_0x0.d[1] + 0.02;
        local_120 = vColor.field0_0x0.d[0] * _alpha;
        local_11c = vColor.field0_0x0.d[1] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_118 = vColor.field0_0x0.d[2] * _alpha;
        local_114 = vColor.field0_0x0.d[3] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        local_128 = vColor.field0_0x0.d[2];
        local_124 = vColor.field0_0x0.d[3];
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCurrPos,
                   &local_130,0x3cfc68,0x3cfc70,&local_120);
        vCurrPos.field0_0x0.d[0] = vCurrPos.field0_0x0.d[0] + 0.008125;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      }
      for (; uVar2 < uVar7 + 4; uVar2 = uVar2 + 1) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        uVar6 = uVar2 - uVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        if ((int)uVar6 < 0) {
          fVar5 = (float)(uVar6 & 1 | uVar6 >> 1);
          fVar5 = fVar5 + fVar5;
        }
        else {
          fVar5 = (float)uVar6;
        }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        fVar5 = fVar4 - fVar5 * fVar8;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        vColor.field0_0x0.d[3] = _RED.field0_0x0.d[3] * _alpha * fVar5;
        vColor.field0_0x0.d[0] = _RED.field0_0x0.d[0] * _alpha * fVar5;
        vColor.field0_0x0.d[1] = _RED.field0_0x0.d[1] * _alpha * fVar5;
        vColor.field0_0x0.d[2] = _RED.field0_0x0.d[2] * _alpha * fVar5;
        local_130 = vCurrPos.field0_0x0.d[0] + 0.008125;
        local_12c = vCurrPos.field0_0x0.d[1] + 0.02;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_120 = vColor.field0_0x0.d[0] * _alpha;
        local_11c = vColor.field0_0x0.d[1] * _alpha;
        local_118 = vColor.field0_0x0.d[2] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_114 = vColor.field0_0x0.d[3] * _alpha;
                    /* end of inlined section */
        local_128 = vColor.field0_0x0.d[2];
        local_124 = vColor.field0_0x0.d[3];
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCurrPos,
                   &local_130,0x3cfc68,0x3cfc70,&local_120);
        vCurrPos.field0_0x0.d[0] = vCurrPos.field0_0x0.d[0] + 0.008125;
                    /* end of inlined section */
      }
      if (uVar2 < 0x10) {
        fVar8 = 0.008125;
        do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          vColor.field0_0x0.d[1] = _RED.field0_0x0.d[1] * _alpha * 0.8;
          vColor.field0_0x0.d[2] = _RED.field0_0x0.d[2] * _alpha * 0.8;
          vColor.field0_0x0.d[0] = _RED.field0_0x0.d[0] * _alpha * 0.8;
          vColor.field0_0x0.d[3] = _RED.field0_0x0.d[3] * _alpha * 0.8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          uVar2 = uVar2 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_130 = vCurrPos.field0_0x0.d[0] + 0.008125;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_12c = vCurrPos.field0_0x0.d[1] + 0.02;
          local_120 = vColor.field0_0x0.d[0] * _alpha;
          local_11c = vColor.field0_0x0.d[1] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_118 = vColor.field0_0x0.d[2] * _alpha;
          local_114 = vColor.field0_0x0.d[3] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          local_128 = vColor.field0_0x0.d[2];
          local_124 = vColor.field0_0x0.d[3];
          (*(code *)prc->__vtable[1].DisplayList)
                    (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCurrPos,
                     &local_130,0x3cfc68,0x3cfc70,&local_120);
          vCurrPos.field0_0x0.d[0] = vCurrPos.field0_0x0.d[0] + fVar8;
        } while (uVar2 < 0x10);
      }
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      uVar2 = 0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      vColor.field0_0x0.d[0] = _GREEN.field0_0x0.d[0] * _alpha * 0.8;
      vColor.field0_0x0.d[1] = _GREEN.field0_0x0.d[1] * _alpha * 0.8;
      vColor.field0_0x0.d[3] = _GREEN.field0_0x0.d[3] * _alpha * 0.8;
      vColor.field0_0x0.d[2] = _GREEN.field0_0x0.d[2] * _alpha * 0.8;
                    /* end of inlined section */
      local_128 = vColor.field0_0x0.d[2];
      local_124 = vColor.field0_0x0.d[3];
      if (uVar6 != 0) {
        do {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_130 = vCurrPos.field0_0x0.d[0] + 0.008125;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_12c = vCurrPos.field0_0x0.d[1] + 0.02;
          local_120 = vColor.field0_0x0.d[0] * _alpha;
          local_11c = vColor.field0_0x0.d[1] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_118 = vColor.field0_0x0.d[2] * _alpha;
          local_114 = vColor.field0_0x0.d[3] * _alpha;
                    /* end of inlined section */
          uVar2 = uVar2 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          (*(code *)prc->__vtable[1].DisplayList)
                    (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCurrPos,
                     &local_130,0x3cfc68,0x3cfc70,&local_120);
          vCurrPos.field0_0x0.d[0] = vCurrPos.field0_0x0.d[0] + 0.008125;
        } while (uVar2 < uVar6);
      }
      if (uVar2 < 0x10 - uVar7) {
        uVar6 = 0xf - uVar7;
        do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
          if ((int)uVar6 < 0) {
            fVar5 = (float)(uVar6 & 1 | uVar6 >> 1);
            fVar5 = fVar5 + fVar5;
          }
          else {
            fVar5 = (float)uVar6;
          }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
          fVar5 = fVar4 - fVar5 * fVar8;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          vColor.field0_0x0.d[3] = _RED.field0_0x0.d[3] * _alpha * fVar5;
          vColor.field0_0x0.d[0] = _RED.field0_0x0.d[0] * _alpha * fVar5;
          vColor.field0_0x0.d[1] = _RED.field0_0x0.d[1] * _alpha * fVar5;
          vColor.field0_0x0.d[2] = _RED.field0_0x0.d[2] * _alpha * fVar5;
          local_130 = vCurrPos.field0_0x0.d[0] + 0.008125;
          local_12c = vCurrPos.field0_0x0.d[1] + 0.02;
                    /* end of inlined section */
          uVar2 = uVar2 + 1;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_120 = vColor.field0_0x0.d[0] * _alpha;
          local_11c = vColor.field0_0x0.d[1] * _alpha;
          local_118 = vColor.field0_0x0.d[2] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          local_114 = vColor.field0_0x0.d[3] * _alpha;
                    /* end of inlined section */
          local_128 = vColor.field0_0x0.d[2];
          local_124 = vColor.field0_0x0.d[3];
          (*(code *)prc->__vtable[1].DisplayList)
                    (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCurrPos,
                     &local_130,0x3cfc68,0x3cfc70,&local_120);
          vCurrPos.field0_0x0.d[0] = vCurrPos.field0_0x0.d[0] + 0.008125;
        } while (uVar2 < 0x10 - uVar7);
      }
      for (; uVar2 < uVar7; uVar2 = uVar2 + 1) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        vColor.field0_0x0.d[1] = _RED.field0_0x0.d[1] * _alpha * 0.8;
        vColor.field0_0x0.d[2] = _RED.field0_0x0.d[2] * _alpha * 0.8;
        vColor.field0_0x0.d[0] = _RED.field0_0x0.d[0] * _alpha * 0.8;
        vColor.field0_0x0.d[3] = _RED.field0_0x0.d[3] * _alpha * 0.8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_130 = vCurrPos.field0_0x0.d[0] + 0.008125;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_12c = vCurrPos.field0_0x0.d[1] + 0.02;
        local_120 = vColor.field0_0x0.d[0] * _alpha;
        local_11c = vColor.field0_0x0.d[1] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_118 = vColor.field0_0x0.d[2] * _alpha;
        local_114 = vColor.field0_0x0.d[3] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        local_128 = vColor.field0_0x0.d[2];
        local_124 = vColor.field0_0x0.d[3];
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCurrPos,
                   &local_130,0x3cfc68,0x3cfc70,&local_120);
        vCurrPos.field0_0x0.d[0] = vCurrPos.field0_0x0.d[0] + 0.008125;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      }
      for (; uVar2 < 0x10; uVar2 = uVar2 + 1) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        uVar6 = uVar2 - uVar7;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        if ((int)uVar6 < 0) {
          fVar5 = (float)(uVar6 & 1 | uVar6 >> 1);
          fVar5 = fVar5 + fVar5;
        }
        else {
          fVar5 = (float)uVar6;
        }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        fVar5 = fVar4 - fVar5 * fVar8;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        vColor.field0_0x0.d[3] = _RED.field0_0x0.d[3] * _alpha * fVar5;
        vColor.field0_0x0.d[0] = _RED.field0_0x0.d[0] * _alpha * fVar5;
        vColor.field0_0x0.d[1] = _RED.field0_0x0.d[1] * _alpha * fVar5;
        vColor.field0_0x0.d[2] = _RED.field0_0x0.d[2] * _alpha * fVar5;
        local_130 = vCurrPos.field0_0x0.d[0] + 0.008125;
        local_12c = vCurrPos.field0_0x0.d[1] + 0.02;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_120 = vColor.field0_0x0.d[0] * _alpha;
        local_11c = vColor.field0_0x0.d[1] * _alpha;
        local_118 = vColor.field0_0x0.d[2] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_114 = vColor.field0_0x0.d[3] * _alpha;
                    /* end of inlined section */
        local_128 = vColor.field0_0x0.d[2];
        local_124 = vColor.field0_0x0.d[3];
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCurrPos,
                   &local_130,0x3cfc68,0x3cfc70,&local_120);
        vCurrPos.field0_0x0.d[0] = vCurrPos.field0_0x0.d[0] + 0.008125;
                    /* end of inlined section */
      }
    }
  }
  return;
}

EVec2& Get2PlayerOff(int ctrl) {
	EVec2 infoOff;
	EVec2 infoOff1;
	EVec2 infoOff2;
	
  bool bVar1;
  EVec2 *pEVar2;
  EVec2 infoOff;
  EVec2 infoOff1;
  EVec2 infoOff2;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  _InfoOff2.field0_0x0 = (EVec2__null___1__1)0xbe6b851f;
  _InfoOff1.field0_0x0 = (EVec2__null___1__1)0xbf3851ec00000000;
  _InfoOff.field0_0x0 = (EVec2__null___1__1)0x0;
  if (ctrl == 1) {
    pEVar2 = &_InfoOff2;
  }
  else {
    bVar1 = IsTwoPlayer__7EGlobal(&_globals);
    pEVar2 = &_InfoOff;
    if (bVar1) {
      pEVar2 = &_InfoOff1;
    }
  }
  return pEVar2;
}

void __MoodDraw(SimInfoWin *pThis, ERC *prc) {
	EVec2 vPos;
	float *pMotives;
	EVec2 vbarwh;
	EVec2 _vBarXInc;
	EVec2 _vBarYInc;
	EVec2 vBars;
	EVec2 vFontH;
	int i;
	ERFont *this;
	EVec2 vWH;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	EVec2 vWH;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	TreeSim *this;
	
  undefined *puVar1;
  cXPerson__150_1300__vtable *pcVar2;
  ESim *pEVar3;
  uint uVar4;
  ulong *puVar5;
  ERFont *pEVar6;
  bool bVar7;
  EVec2 *pEVar8;
  short *psVar9;
  undefined8 unaff_s0;
  UiStringLookUpTableEntry *pUVar10;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  int iVar11;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  EFontSize *pEVar17;
  EVec2 vPos;
  EVec2 vbarwh;
  EVec2 _vBarXInc;
  EVec2 _vBarYInc;
  EVec2 vBars;
  EVec2 vFontH;
  EVec2 vWH;
  EFontSize *local_100;
  EStorable__vtable *local_fc;
  ENodeListNode *local_f8;
  ENodeListNode *local_f4;
  EFontSize *local_f0;
  float local_ec;
  EHashTableNode **local_e0;
  EStorable__vtable *local_dc;
  EFontSize *local_d0;
  EStorable__vtable *local_cc;
  float *pMotives;
  EVec2 *local_bc;
  EVec2 *local_b8;
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
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  pEVar8 = Get2PlayerOff__Fi(*(int *)&pThis->field_0x30);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44((pEVar8->field0_0x0).d[1] + 0.71,(pEVar8->field0_0x0).d[0] + 0.28);
                    /* end of inlined section */
  bVar7 = IsTwoPlayer__7EGlobal(&_globals);
  if ((bVar7) && (*(int *)&pThis->field_0x30 == 0)) {
                    /* end of inlined section */
    vPos.field0_0x0 =
         (EVec2__null___1__1)
         ((ulong)vPos.field0_0x0 & 0xffffffff | (ulong)(uint)(vPos.field0_0x0.d[1] + 0.05) << 0x20);
  }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vbarwh.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  iVar11 = 0;
                    /* end of inlined section */
  vbarwh.field0_0x0.d[0] = 1.0;
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,vPos.field0_0x0.d[0],vPos.field0_0x0.d[1],0.24,0.68,pThis->m_infoWinAlpha,
             (EVec4 *)&vbarwh);
  pEVar17 = (EFontSize *)0x3ba3d70a;
  pcVar2 = _globals._pSelectedSims[*(int *)&pThis->field_0x30]->__vtable;
  pMotives = (float *)(*(code *)pcVar2->IsSelected)
                                ((int)&_globals._pSelectedSims[*(int *)&pThis->field_0x30]->_vb1187
                                 + (int)*(short *)&pcVar2->Skipping3D,0);
  fVar13 = _mood_info_font_size;
  pEVar6 = _10SimInfoWin_m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vbarwh.field0_0x0.d[0] = 0.13;
  vbarwh.field0_0x0.d[1] = 0.02;
                    /* end of inlined section */
  fVar12 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vFontH.field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * fVar12;
  vFontH.field0_0x0.d[1] = _WHITE.field0_0x0.d[1] * fVar12;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  fVar14 = _WHITE.field0_0x0.d[2] * fVar12;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  fVar12 = _WHITE.field0_0x0.d[3] * fVar12;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  fVar15 = vPos.field0_0x0.d[1] + 0.08;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  fVar16 = (vPos.field0_0x0.d[0] + 0.19) - 0.1625;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  _vBarXInc.field0_0x0.d[0] = 0.17;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  _vBarYInc.field0_0x0.d[1] = 0.1;
  _vBarXInc.field0_0x0.d[1] = 0.0;
  _vBarYInc.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar15,fVar16);
                    /* end of inlined section */
  (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vFontH.field0_0x0.d[0];
  (pEVar6->m_vColor).field0_0x0.d[1] = vFontH.field0_0x0.d[1];
  (pEVar6->m_vColor).field0_0x0.d[2] = fVar14;
  (pEVar6->m_vColor).field0_0x0.d[3] = fVar12;
  SetSize__6ERFontffb(pEVar6,fVar13,1.0,true);
  Select__6ERFontP3ERC(_10SimInfoWin_m_pFont,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&vFontH,_10SimInfoWin_m_pFont,true,(EWindow *)0x0);
                    /* end of inlined section */
  local_b8 = (EVec2 *)&local_f0;
  local_bc = (EVec2 *)&local_100;
  vFontH.field0_0x0.d[1] = vFontH.field0_0x0.d[1] * 1.08;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vFontH.field0_0x0.d[0] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44(vPos.field0_0x0.d[1] - vFontH.field0_0x0.d[1],
                vPos.field0_0x0.d[0] + vbarwh.field0_0x0.d[0] * 0.5);
  pUVar10 = _10SimInfoWin___MoodStrings;
  do {
    pEVar6 = _10SimInfoWin_m_pFont;
    if (iVar11 == pThis->m_curOpt) {
      psVar9 = GetUiString__7EGlobalPCc(&_globals,pUVar10->pLower);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)&vWH,pEVar6,SUB41(psVar9,0),(EWindow *)&pGifTag1);
      pEVar6 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar13 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_fc = (EStorable__vtable *)(_BLACK.field0_0x0.d[1] * fVar13);
      local_f8 = (ENodeListNode *)(_BLACK.field0_0x0.d[2] * fVar13);
      local_f4 = (ENodeListNode *)(_BLACK.field0_0x0.d[3] * fVar13);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_100 = (EFontSize *)(_BLACK.field0_0x0.d[0] * fVar13);
                    /* end of inlined section */
      vWH.field0_0x0.d[1] = vFontH.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)local_100;
      (pEVar6->m_vColor).field0_0x0.d[1] = (float)local_fc;
      (pEVar6->m_vColor).field0_0x0.d[2] = (float)local_f8;
      (pEVar6->m_vColor).field0_0x0.d[3] = (float)local_f4;
                    /* end of inlined section */
      psVar9 = GetUiString__7EGlobalPCc(&_globals,pUVar10->pLower);
      pEVar6 = _10SimInfoWin_m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      (local_b8->field0_0x0).d[1] = (float)pEVar17;
      local_100 = (EFontSize *)(vPos.field0_0x0.d[0] + (float)pEVar17);
      local_fc = (EStorable__vtable *)(vPos.field0_0x0.d[1] + local_ec);
      local_f0 = pEVar17;
      local_e0 = (EHashTableNode **)local_100;
      local_dc = local_fc;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (pEVar6,prc,psVar9,true,(EVec2 *)&local_e0,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
      pEVar6 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar13 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_fc = (EStorable__vtable *)(_YELLOW.field0_0x0.d[1] * fVar13);
      local_f8 = (ENodeListNode *)(_YELLOW.field0_0x0.d[2] * fVar13);
      local_f4 = (ENodeListNode *)(_YELLOW.field0_0x0.d[3] * fVar13);
      local_100 = (EFontSize *)(_YELLOW.field0_0x0.d[0] * fVar13);
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)local_100;
      (pEVar6->m_vColor).field0_0x0.d[1] = (float)local_fc;
      (pEVar6->m_vColor).field0_0x0.d[2] = (float)local_f8;
      (pEVar6->m_vColor).field0_0x0.d[3] = (float)local_f4;
                    /* end of inlined section */
      psVar9 = GetUiString__7EGlobalPCc(&_globals,pUVar10->pLower);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_100 = (EFontSize *)vPos.field0_0x0.d[0];
      local_fc = (EStorable__vtable *)vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar9,true,local_bc,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0)
      ;
                    /* end of inlined section */
    }
    else {
                    /* end of inlined section */
      fVar12 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      vWH.field0_0x0.d[1] = _BLACK.field0_0x0.d[1] * fVar12;
      fVar14 = _BLACK.field0_0x0.d[2] * fVar12;
      fVar13 = _BLACK.field0_0x0.d[3] * fVar12;
      vWH.field0_0x0.d[0] = _BLACK.field0_0x0.d[0] * fVar12;
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vWH.field0_0x0.d[0];
      (pEVar6->m_vColor).field0_0x0.d[1] = vWH.field0_0x0.d[1];
      (pEVar6->m_vColor).field0_0x0.d[2] = fVar14;
      (pEVar6->m_vColor).field0_0x0.d[3] = fVar13;
                    /* end of inlined section */
      psVar9 = GetUiString__7EGlobalPCc(&_globals,pUVar10->pLower);
      pEVar6 = _10SimInfoWin_m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      (local_bc->field0_0x0).d[1] = (float)pEVar17;
      vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0] + (float)pEVar17;
      vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1] + (float)local_fc;
      local_100 = pEVar17;
      local_f0 = (EFontSize *)vWH.field0_0x0.d[0];
      local_ec = vWH.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (pEVar6,prc,psVar9,true,local_b8,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
      pEVar6 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar13 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      vWH.field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * fVar13;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      vWH.field0_0x0.d[1] = _WHITE.field0_0x0.d[1] * fVar13;
      fVar12 = _WHITE.field0_0x0.d[2] * fVar13;
      fVar13 = _WHITE.field0_0x0.d[3] * fVar13;
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vWH.field0_0x0.d[0];
      (pEVar6->m_vColor).field0_0x0.d[1] = vWH.field0_0x0.d[1];
      (pEVar6->m_vColor).field0_0x0.d[2] = fVar12;
      (pEVar6->m_vColor).field0_0x0.d[3] = fVar13;
                    /* end of inlined section */
      psVar9 = GetUiString__7EGlobalPCc(&_globals,pUVar10->pLower);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
      vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar9,true,&vWH,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    }
                    /* end of inlined section */
    iVar11 = iVar11 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    pUVar10 = pUVar10 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0 =
         (EVec2__null___1__1)CONCAT44(vPos.field0_0x0.d[1] + 0.0,vPos.field0_0x0.d[0] + 0.17);
                    /* end of inlined section */
  } while (iVar11 < 4);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[1] = 0.0;
  vWH.field0_0x0.d[0] = 0.68;
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
                    /* end of inlined section */
  pUVar10 = _10SimInfoWin___MoodStrings + 4;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44((vPos.field0_0x0.d[1] + 0.0 + 0.1) - 0.0,(vPos.field0_0x0.d[0] + 0.17 + 0.0) - 0.68)
  ;
                    /* end of inlined section */
  iVar11 = 4;
  do {
    pEVar6 = _10SimInfoWin_m_pFont;
    if (iVar11 == pThis->m_curOpt) {
      psVar9 = GetUiString__7EGlobalPCc(&_globals,pUVar10->pLower);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)&vWH,pEVar6,SUB41(psVar9,0),(EWindow *)&pGifTag1);
      pEVar6 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar13 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_fc = (EStorable__vtable *)(_BLACK.field0_0x0.d[1] * fVar13);
      local_f8 = (ENodeListNode *)(_BLACK.field0_0x0.d[2] * fVar13);
      local_f4 = (ENodeListNode *)(_BLACK.field0_0x0.d[3] * fVar13);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_100 = (EFontSize *)(_BLACK.field0_0x0.d[0] * fVar13);
                    /* end of inlined section */
      vWH.field0_0x0.d[1] = vFontH.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)local_100;
      (pEVar6->m_vColor).field0_0x0.d[1] = (float)local_fc;
      (pEVar6->m_vColor).field0_0x0.d[2] = (float)local_f8;
      (pEVar6->m_vColor).field0_0x0.d[3] = (float)local_f4;
                    /* end of inlined section */
      psVar9 = GetUiString__7EGlobalPCc(&_globals,pUVar10->pLower);
      pEVar6 = _10SimInfoWin_m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      (local_b8->field0_0x0).d[1] = 0.005;
      local_100 = (EFontSize *)(vPos.field0_0x0.d[0] + 0.005);
      local_f0 = (EFontSize *)0x3ba3d70a;
      local_fc = (EStorable__vtable *)(vPos.field0_0x0.d[1] + local_ec);
      local_d0 = local_100;
      local_cc = local_fc;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (pEVar6,prc,psVar9,true,(EVec2 *)&local_d0,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
      pEVar6 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar13 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_fc = (EStorable__vtable *)(_YELLOW.field0_0x0.d[1] * fVar13);
      local_f8 = (ENodeListNode *)(_YELLOW.field0_0x0.d[2] * fVar13);
      local_f4 = (ENodeListNode *)(_YELLOW.field0_0x0.d[3] * fVar13);
      local_100 = (EFontSize *)(_YELLOW.field0_0x0.d[0] * fVar13);
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)local_100;
      (pEVar6->m_vColor).field0_0x0.d[1] = (float)local_fc;
      (pEVar6->m_vColor).field0_0x0.d[2] = (float)local_f8;
      (pEVar6->m_vColor).field0_0x0.d[3] = (float)local_f4;
                    /* end of inlined section */
      psVar9 = GetUiString__7EGlobalPCc(&_globals,pUVar10->pLower);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_100 = (EFontSize *)vPos.field0_0x0.d[0];
      local_fc = (EStorable__vtable *)vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar9,true,local_bc,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0)
      ;
                    /* end of inlined section */
    }
    else {
                    /* end of inlined section */
      fVar12 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      vWH.field0_0x0.d[1] = _BLACK.field0_0x0.d[1] * fVar12;
      fVar14 = _BLACK.field0_0x0.d[2] * fVar12;
      fVar13 = _BLACK.field0_0x0.d[3] * fVar12;
      vWH.field0_0x0.d[0] = _BLACK.field0_0x0.d[0] * fVar12;
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vWH.field0_0x0.d[0];
      (pEVar6->m_vColor).field0_0x0.d[1] = vWH.field0_0x0.d[1];
      (pEVar6->m_vColor).field0_0x0.d[2] = fVar14;
      (pEVar6->m_vColor).field0_0x0.d[3] = fVar13;
                    /* end of inlined section */
      psVar9 = GetUiString__7EGlobalPCc(&_globals,pUVar10->pLower);
      pEVar6 = _10SimInfoWin_m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      (local_bc->field0_0x0).d[1] = 0.005;
      vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0] + 0.005;
      vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1] + (float)local_fc;
      local_100 = (EFontSize *)0x3ba3d70a;
      local_f0 = (EFontSize *)vWH.field0_0x0.d[0];
      local_ec = vWH.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (pEVar6,prc,psVar9,true,local_b8,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
      pEVar6 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar13 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      vWH.field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * fVar13;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      vWH.field0_0x0.d[1] = _WHITE.field0_0x0.d[1] * fVar13;
      fVar12 = _WHITE.field0_0x0.d[2] * fVar13;
      fVar13 = _WHITE.field0_0x0.d[3] * fVar13;
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vWH.field0_0x0.d[0];
      (pEVar6->m_vColor).field0_0x0.d[1] = vWH.field0_0x0.d[1];
      (pEVar6->m_vColor).field0_0x0.d[2] = fVar12;
      (pEVar6->m_vColor).field0_0x0.d[3] = fVar13;
                    /* end of inlined section */
      psVar9 = GetUiString__7EGlobalPCc(&_globals,pUVar10->pLower);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
      vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar9,true,&vWH,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    }
                    /* end of inlined section */
    iVar11 = iVar11 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    pUVar10 = pUVar10 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0 =
         (EVec2__null___1__1)CONCAT44(vPos.field0_0x0.d[1] + 0.0,vPos.field0_0x0.d[0] + 0.17);
                    /* end of inlined section */
  } while (iVar11 < 8);
  puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | CONCAT44(fVar15,fVar16) >> (7 - uVar4) * 8;
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar15 + 0.0025,fVar16);
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/TreeSim.h */
  pEVar3 = _globals._pSelectedSims[*(int *)&pThis->field_0x30]->_vb1187->_vb1121->m_pEoRPerson;
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
                    /* end of inlined section */
  fVar13 = GetMovtiveMag__Ff(pMotives[7]);
  DrawRedGreenBar__FP3ERCfG5EVec2fP5EVec2
            (prc,fVar13,&vWH,pThis->m_infoWinAlpha,pEVar3->m_vMotiveDelta);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0] + _vBarXInc.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1] + _vBarXInc.field0_0x0.d[1];
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(vWH.field0_0x0.d[1],vWH.field0_0x0.d[0]);
                    /* end of inlined section */
  fVar13 = GetMovtiveMag__Ff(pMotives[8]);
  DrawRedGreenBar__FP3ERCfG5EVec2fP5EVec2
            (prc,fVar13,&vWH,pThis->m_infoWinAlpha,pEVar3->m_vMotiveDelta + 1);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0] + _vBarXInc.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1] + _vBarXInc.field0_0x0.d[1];
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(vWH.field0_0x0.d[1],vWH.field0_0x0.d[0]);
                    /* end of inlined section */
  fVar13 = GetMovtiveMag__Ff(pMotives[5]);
  DrawRedGreenBar__FP3ERCfG5EVec2fP5EVec2
            (prc,fVar13,&vWH,pThis->m_infoWinAlpha,pEVar3->m_vMotiveDelta + 2);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0] + _vBarXInc.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1] + _vBarXInc.field0_0x0.d[1];
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(vWH.field0_0x0.d[1],vWH.field0_0x0.d[0]);
                    /* end of inlined section */
  fVar13 = GetMovtiveMag__Ff(pMotives[0xe]);
  DrawRedGreenBar__FP3ERCfG5EVec2fP5EVec2
            (prc,fVar13,&vWH,pThis->m_infoWinAlpha,pEVar3->m_vMotiveDelta + 3);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] =
       (vPos.field0_0x0.d[0] + _vBarYInc.field0_0x0.d[0]) - _vBarXInc.field0_0x0.d[0] * 3.0;
                    /* end of inlined section */
  vWH.field0_0x0.d[1] =
       ((vPos.field0_0x0.d[1] + _vBarYInc.field0_0x0.d[1]) - _vBarXInc.field0_0x0.d[1] * 3.0) +
       0.0025;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(vWH.field0_0x0.d[1],vWH.field0_0x0.d[0]);
  fVar13 = GetMovtiveMag__Ff(pMotives[6]);
  DrawRedGreenBar__FP3ERCfG5EVec2fP5EVec2
            (prc,fVar13,&vWH,pThis->m_infoWinAlpha,pEVar3->m_vMotiveDelta + 4);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0] + _vBarXInc.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1] + _vBarXInc.field0_0x0.d[1];
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(vWH.field0_0x0.d[1],vWH.field0_0x0.d[0]);
                    /* end of inlined section */
  fVar13 = GetMovtiveMag__Ff(pMotives[9]);
  DrawRedGreenBar__FP3ERCfG5EVec2fP5EVec2
            (prc,fVar13,&vWH,pThis->m_infoWinAlpha,pEVar3->m_vMotiveDelta + 5);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0] + _vBarXInc.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1] + _vBarXInc.field0_0x0.d[1];
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(vWH.field0_0x0.d[1],vWH.field0_0x0.d[0]);
                    /* end of inlined section */
  fVar13 = GetMovtiveMag__Ff(pMotives[0xf]);
  DrawRedGreenBar__FP3ERCfG5EVec2fP5EVec2
            (prc,fVar13,&vWH,pThis->m_infoWinAlpha,pEVar3->m_vMotiveDelta + 6);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0] + _vBarXInc.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1] + _vBarXInc.field0_0x0.d[1];
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(vWH.field0_0x0.d[1],vWH.field0_0x0.d[0]);
                    /* end of inlined section */
  fVar13 = GetMovtiveMag__Ff(pMotives[0xd]);
  DrawRedGreenBar__FP3ERCfffG5EVec2f(prc,0.13,0.02,fVar13,&vWH,pThis->m_infoWinAlpha);
  return;
}

void DrawLightBar(ERC *prc, float mag, EVec2 vPos, int nticks, float _alpha) {
	EVec2 vTickPos;
	bool firstGreay;
	int i;
	EVec2 &v;
	float w;
	float w;
	float scaler;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  EVec2 vTickPos;
  float local_d0;
  float local_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a4;
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
  
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
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
  if (0.0 <= mag) {
    fVar4 = (float)((int)mag * (uint)(mag < 1000.0) | (uint)(mag >= 1000.0) * 0x447a0000);
  }
  else {
    fVar4 = 0.0;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTickPos.field0_0x0.d[1] = (vPos->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTickPos.field0_0x0.d[0] = (vPos->field0_0x0).d[0];
                    /* end of inlined section */
  bVar1 = false;
  iVar3 = (int)fVar4 / 100;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  if (0 < iVar3) {
    fVar4 = 0.1;
    bVar1 = true;
    fVar5 = 0.9;
    iVar2 = iVar3;
    do {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_d0 = vTickPos.field0_0x0.d[0] + _vlight_bar_gap_wh.field0_0x0.d[0];
      local_cc = vTickPos.field0_0x0.d[1] + _vlight_bar_gap_wh.field0_0x0.d[1];
                    /* end of inlined section */
      iVar2 = iVar2 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_bc = 0.5;
                    /* end of inlined section */
      local_c0 = fVar4;
      local_b8 = fVar5;
      local_b4 = _alpha;
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vTickPos,
                 &local_d0,0x3cfc68,0x3cfc70,&local_c0);
      vTickPos.field0_0x0.d[0] =
           vTickPos.field0_0x0.d[0] + _vlight_bar_gap_wh.field0_0x0.d[0] + _light_bar_gap_width;
    } while (iVar2 != 0);
  }
  if (iVar3 < nticks) {
    uVar6 = 0x3f0a3d71;
    iVar3 = nticks - iVar3;
    do {
      if (bVar1) {
                    /* end of inlined section */
        bVar1 = false;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_d0 = vTickPos.field0_0x0.d[0] + _vlight_bar_gap_wh.field0_0x0.d[0];
        local_cc = vTickPos.field0_0x0.d[1] + _vlight_bar_gap_wh.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_a8 = 0x3dcccccd;
                    /* end of inlined section */
        local_b0 = uVar6;
        local_ac = uVar6;
        local_a4 = _alpha;
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vTickPos,
                   &local_d0,0x3cfc68,0x3cfc70,&local_b0);
      }
      else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_d0 = vTickPos.field0_0x0.d[0] + _vlight_bar_gap_wh.field0_0x0.d[0];
        local_bc = _GREAY.field0_0x0.d[1] * _alpha;
        local_b8 = _GREAY.field0_0x0.d[2] * _alpha;
        local_b4 = _GREAY.field0_0x0.d[3] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_cc = vTickPos.field0_0x0.d[1] + _vlight_bar_gap_wh.field0_0x0.d[1];
        local_c0 = _GREAY.field0_0x0.d[0] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vTickPos,
                   &local_d0,0x3cfc68,0x3cfc70,&local_c0);
      }
                    /* end of inlined section */
      iVar3 = iVar3 + -1;
      vTickPos.field0_0x0.d[0] =
           vTickPos.field0_0x0.d[0] + _vlight_bar_gap_wh.field0_0x0.d[0] + _light_bar_gap_width;
    } while (iVar3 != 0);
  }
  return;
}

void DrawTwoColorLightBar(ERC *prc, float magOne, float magTwo, EVec2 vPos, int nticks, float _alpha) {
	EVec2 vTickPos;
	EVec4 vBarColor;
	EVec2 &v;
	int i;
	float scaler;
	
  undefined8 unaff_s0;
  int iVar1;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar2;
  float fVar3;
  float fVar4;
  EVec2 vTickPos;
  EVec4 vBarColor;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
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
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (0.0 <= magOne) {
    fVar3 = (float)((int)magOne * (uint)(magOne < 1000.0) | (uint)(magOne >= 1000.0) * 0x447a0000);
  }
  else {
    fVar3 = 0.0;
  }
  if (0.0 <= magTwo) {
    fVar2 = (float)((int)magTwo * (uint)(magTwo < 1000.0) | (uint)(magTwo >= 1000.0) * 0x447a0000);
  }
  else {
    fVar2 = 0.0;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTickPos.field0_0x0.d[1] = (vPos->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTickPos.field0_0x0.d[0] = (vPos->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  iVar1 = 0;
  if (0 < nticks) {
    fVar4 = 0.9;
    local_b4 = 1.0;
    do {
      if (iVar1 < (int)fVar3 / 100) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_c0 = 0.1;
        local_bc = 0.5;
        local_b8 = fVar4;
                    /* end of inlined section */
      }
      else if (iVar1 < (int)fVar2 / 100) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        local_b8 = 0.0;
        local_c0 = local_b4;
        local_bc = local_b4;
      }
      else {
        local_c0 = 0.5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_bc = 0.5;
        local_b8 = 0.5;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_b0 = local_c0 * _alpha;
      local_ac = local_bc * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_a8 = local_b8 * _alpha;
      local_a4 = local_b4 * _alpha;
                    /* end of inlined section */
      iVar1 = iVar1 + 1;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_c0 = vTickPos.field0_0x0.d[0] + _vlight_bar_gap_wh.field0_0x0.d[0];
      local_bc = vTickPos.field0_0x0.d[1] + _vlight_bar_gap_wh.field0_0x0.d[1];
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vTickPos,
                 &local_c0,0x3cfc68,0x3cfc70,&local_b0);
      vTickPos.field0_0x0.d[0] =
           vTickPos.field0_0x0.d[0] + _vlight_bar_gap_wh.field0_0x0.d[0] + _light_bar_gap_width;
    } while (iVar1 < nticks);
  }
  return;
}

void __PersDraw(SimInfoWin *pThis, ERC *prc) {
	EVec2 vOff;
	EVec2 vPos;
	EVec2 vNamePos;
	EVec2 vZodPos;
	cXPerson *pPerson;
	EVec2 vLastName;
	float textboxGap;
	float __PersDraw_bar_gap_w;
	float __PersDraw_bar_offx;
	float barw;
	EVec2 vPosInc;
	EVec2 vBar;
	EVec2 vFontH;
	float x;
	ERFont *this;
	float x;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	float x;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	StackString2<32> szFamilyName;
	ERFont *this;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	int i;
	EVec2 vWH;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  undefined *puVar1;
  cXPerson__150_1300 *pcVar2;
  cXObject__150_1187__vtable *pcVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ERFont *pEVar7;
  bool bVar8;
  ushort uVar9;
  EVec2 *pEVar10;
  ObjSelector *pOVar11;
  BString2 *pBVar12;
  short *psVar13;
  int *piVar14;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  UiStringLookUpTableEntry *pUVar15;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  int iVar16;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar17;
  float fVar18;
  float _y;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  EVec2 vOff;
  EVec2 vPos;
  EVec2 vNamePos;
  EVec2 vZodPos;
  EVec2 vLastName;
  EVec2 vPosInc;
  EVec2 vBar;
  EVec2 vFontH;
  EVec2 vWH;
  StackString2_32_ szFamilyName;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  EVec2 *this;
  short *local_dc;
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
  
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  pEVar10 = Get2PlayerOff__Fi(*(int *)&pThis->field_0x30);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44((pEVar10->field0_0x0).d[1] + 0.71,(pEVar10->field0_0x0).d[0] + 0.28);
  if (*(int *)&pThis->field_0x30 == 0) {
    bVar8 = IsTwoPlayer__7EGlobal(&_globals);
    if (bVar8) {
                    /* end of inlined section */
      vPos.field0_0x0 =
           (EVec2__null___1__1)
           ((ulong)vPos.field0_0x0 & 0xffffffff | (ulong)(uint)(vPos.field0_0x0.d[1] + 0.24) << 0x20
           );
    }
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  fVar17 = vPos.field0_0x0.d[0] + 0.3 + 0.07;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  _y = vPos.field0_0x0.d[1] - 0.01;
  fVar21 = 0.01985294;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* end of inlined section */
  DrawTextBox__10SimInfoWinP3ERCffff(prc,vPos.field0_0x0.d[0],_y,0.3,pThis->m_infoWinAlpha);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar23 = 0.005;
                    /* end of inlined section */
  DrawTextBox__10SimInfoWinP3ERCffff(prc,fVar17,_y,0.3,pThis->m_infoWinAlpha);
  fVar19 = vPos.field0_0x0.d[0] + fVar21;
  pcVar2 = _globals._pSelectedSims[*(int *)&pThis->field_0x30];
  SetSize__6ERFontffb(_10SimInfoWin_m_pFont,15.0,1.0,true);
  Select__6ERFontP3ERC(_10SimInfoWin_m_pFont,prc);
  pEVar7 = _10SimInfoWin_m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  fVar20 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vPosInc.field0_0x0.d[1] = _BLACK.field0_0x0.d[1] * fVar20;
  fVar22 = _BLACK.field0_0x0.d[2] * fVar20;
  fVar18 = _BLACK.field0_0x0.d[3] * fVar20;
  vPosInc.field0_0x0.d[0] = _BLACK.field0_0x0.d[0] * fVar20;
  (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vPosInc.field0_0x0.d[0];
  (pEVar7->m_vColor).field0_0x0.d[1] = vPosInc.field0_0x0.d[1];
  (pEVar7->m_vColor).field0_0x0.d[2] = fVar22;
  (pEVar7->m_vColor).field0_0x0.d[3] = fVar18;
                    /* end of inlined section */
  pcVar3 = pcVar2->_vb1187->__vtable;
  pOVar11 = (ObjSelector *)
            (*(code *)pcVar3[1].SetLevel)
                      ((int)&pcVar2->_vb1187->_vb1121 + (int)*(short *)&pcVar3[1].GetTreeID);
  pBVar12 = GetUserName__11ObjSelector(pOVar11);
  psVar13 = c_str__C8BString2(pBVar12);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vBar.field0_0x0.d[1] = _y + 0.01;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  vPosInc.field0_0x0.d[0] = fVar19 + fVar23;
  vPosInc.field0_0x0.d[1] = vBar.field0_0x0.d[1] + fVar23;
  vBar.field0_0x0.d[0] = fVar19;
  vFontH.field0_0x0.d[0] = fVar23;
  vFontH.field0_0x0.d[1] = fVar23;
  vWH.field0_0x0.d[0] = vPosInc.field0_0x0.d[0];
  vWH.field0_0x0.d[1] = vPosInc.field0_0x0.d[1];
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_10SimInfoWin_m_pFont,prc,psVar13,true,&vWH,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  pEVar7 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
  fVar20 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vPosInc.field0_0x0.d[1] = _WHITE.field0_0x0.d[1] * fVar20;
  fVar22 = _WHITE.field0_0x0.d[2] * fVar20;
  fVar18 = _WHITE.field0_0x0.d[3] * fVar20;
  vPosInc.field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * fVar20;
  (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vPosInc.field0_0x0.d[0];
  (pEVar7->m_vColor).field0_0x0.d[1] = vPosInc.field0_0x0.d[1];
  (pEVar7->m_vColor).field0_0x0.d[2] = fVar22;
  (pEVar7->m_vColor).field0_0x0.d[3] = fVar18;
                    /* end of inlined section */
  pcVar3 = pcVar2->_vb1187->__vtable;
  pOVar11 = (ObjSelector *)
            (*(code *)pcVar3[1].SetLevel)
                      ((int)&pcVar2->_vb1187->_vb1121 + (int)*(short *)&pcVar3[1].GetTreeID);
  pBVar12 = GetUserName__11ObjSelector(pOVar11);
  psVar13 = c_str__C8BString2(pBVar12);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  this = &vBar;
                    /* end of inlined section */
  vPosInc.field0_0x0.d[1] = _y + 0.01;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPosInc.field0_0x0.d[0] = fVar19;
  vBar.field0_0x0.d[0] = fVar19;
  vBar.field0_0x0.d[1] = vPosInc.field0_0x0.d[1];
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_10SimInfoWin_m_pFont,prc,psVar13,true,this,E_FAX_LEFT,E_FAY_TOP,&vLastName);
                    /* end of inlined section */
  bVar8 = IsTwoPlayer__7EGlobal(&_globals);
  if (!bVar8) {
                    /* end of inlined section */
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
    fVar21 = vLastName.field0_0x0.d[0] + fVar21;
                    /* inlined from ../MSrc/stringbuffer2.h */
    __13StringBuffer2PUsUi(&szFamilyName.field0_0x0,szFamilyName.fChars,0x20);
                    /* end of inlined section */
    piVar14 = (int *)(*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                               ((int)&_5Globs_pHouse->__vtable +
                                (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
    (**(code **)(*piVar14 + 0x5c))((int)piVar14 + (int)*(short *)(*piVar14 + 0x58),&szFamilyName);
    pEVar7 = _10SimInfoWin_m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    fVar19 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vPosInc.field0_0x0.d[1] = _BLACK.field0_0x0.d[1] * fVar19;
    fVar20 = _BLACK.field0_0x0.d[2] * fVar19;
    fVar18 = _BLACK.field0_0x0.d[3] * fVar19;
    vPosInc.field0_0x0.d[0] = _BLACK.field0_0x0.d[0] * fVar19;
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vPosInc.field0_0x0.d[0];
    (pEVar7->m_vColor).field0_0x0.d[1] = vPosInc.field0_0x0.d[1];
    (pEVar7->m_vColor).field0_0x0.d[2] = fVar20;
    (pEVar7->m_vColor).field0_0x0.d[3] = fVar18;
    psVar13 = c_str__C13StringBuffer2(&szFamilyName.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vBar.field0_0x0.d[1] = _y + 0.01;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    vPosInc.field0_0x0.d[0] = fVar21 + fVar23;
    vPosInc.field0_0x0.d[1] = vBar.field0_0x0.d[1] + fVar23;
    vBar.field0_0x0.d[0] = fVar21;
    vFontH.field0_0x0.d[0] = fVar23;
    vFontH.field0_0x0.d[1] = fVar23;
    local_f0 = vPosInc.field0_0x0.d[0];
    local_ec = vPosInc.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar13,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
    pEVar7 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
    local_f0 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_ec = _WHITE.field0_0x0.d[1] * local_f0;
    local_e8 = _WHITE.field0_0x0.d[2] * local_f0;
    local_e4 = _WHITE.field0_0x0.d[3] * local_f0;
    local_f0 = _WHITE.field0_0x0.d[0] * local_f0;
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = local_f0;
    (pEVar7->m_vColor).field0_0x0.d[1] = local_ec;
    (pEVar7->m_vColor).field0_0x0.d[2] = local_e8;
    (pEVar7->m_vColor).field0_0x0.d[3] = local_e4;
    psVar13 = c_str__C13StringBuffer2(&szFamilyName.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vPosInc.field0_0x0.d[1] = _y + 0.01;
    vPosInc.field0_0x0.d[0] = fVar21;
    local_f0 = fVar21;
    local_ec = vPosInc.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar13,true,(EVec2 *)(EVec4 *)&vPosInc,E_FAX_LEFT,
               E_FAY_TOP,&vLastName);
  }
                    /* end of inlined section */
  SetSize__6ERFontffb(_10SimInfoWin_m_pFont,_mood_info_font_size,1.0,true);
  pEVar7 = _10SimInfoWin_m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  fVar18 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  fVar21 = _BLACK.field0_0x0.d[3] * fVar18;
  vPosInc.field0_0x0.d[1] = _BLACK.field0_0x0.d[1] * fVar18;
  fVar19 = _BLACK.field0_0x0.d[2] * fVar18;
  vPosInc.field0_0x0.d[0] = _BLACK.field0_0x0.d[0] * fVar18;
  (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vPosInc.field0_0x0.d[0];
  (pEVar7->m_vColor).field0_0x0.d[1] = vPosInc.field0_0x0.d[1];
  (pEVar7->m_vColor).field0_0x0.d[2] = fVar19;
  (pEVar7->m_vColor).field0_0x0.d[3] = fVar21;
                    /* end of inlined section */
  uVar9 = (*(code *)pcVar2->__vtable->GetRecordDuration)
                    ((int)&pcVar2->_vb1187 + (int)*(short *)&pcVar2->__vtable->GetRecording,0x46);
  psVar13 = GetZodiacName__Fs(uVar9);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  vBar.field0_0x0.d[0] = fVar17 + 0.15;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  vBar.field0_0x0.d[1] = _y + fVar23;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  vPosInc.field0_0x0.d[0] = vBar.field0_0x0.d[0] + fVar23;
  vPosInc.field0_0x0.d[1] = vBar.field0_0x0.d[1] + fVar23;
  vFontH.field0_0x0.d[0] = fVar23;
  vFontH.field0_0x0.d[1] = fVar23;
  vWH.field0_0x0.d[0] = vPosInc.field0_0x0.d[0];
  vWH.field0_0x0.d[1] = vPosInc.field0_0x0.d[1];
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_10SimInfoWin_m_pFont,prc,psVar13,true,&vWH,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
  pEVar7 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
  fVar18 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  fVar19 = _WHITE.field0_0x0.d[3] * fVar18;
  vPosInc.field0_0x0.d[1] = _WHITE.field0_0x0.d[1] * fVar18;
  fVar21 = _WHITE.field0_0x0.d[2] * fVar18;
  vPosInc.field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * fVar18;
  (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vPosInc.field0_0x0.d[0];
  (pEVar7->m_vColor).field0_0x0.d[1] = vPosInc.field0_0x0.d[1];
  (pEVar7->m_vColor).field0_0x0.d[2] = fVar21;
  (pEVar7->m_vColor).field0_0x0.d[3] = fVar19;
                    /* end of inlined section */
  uVar9 = (*(code *)pcVar2->__vtable->GetRecordDuration)
                    ((int)&pcVar2->_vb1187 + (int)*(short *)&pcVar2->__vtable->GetRecording,0x46);
  psVar13 = GetZodiacName__Fs(uVar9);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  vPosInc.field0_0x0.d[0] = fVar17 + 0.15;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  vPosInc.field0_0x0.d[1] = _y + fVar23;
  vBar.field0_0x0.d[0] = vPosInc.field0_0x0.d[0];
  vBar.field0_0x0.d[1] = vPosInc.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_10SimInfoWin_m_pFont,prc,psVar13,true,this,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  if (*(int *)&pThis->field_0x30 == 0) {
    bVar8 = IsTwoPlayer__7EGlobal(&_globals);
    if (bVar8) {
                    /* end of inlined section */
      vPos.field0_0x0 =
           (EVec2__null___1__1)
           ((ulong)vPos.field0_0x0 & 0xffffffff | (ulong)(uint)(vPos.field0_0x0.d[1] - 0.24) << 0x20
           );
    }
  }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  iVar16 = 0;
  uVar6 = (ulong)vPos.field0_0x0 & 0xffffffff;
  vPos.field0_0x0 = (EVec2__null___1__1)(uVar6 | (ulong)(uint)(vPos.field0_0x0.d[1] + 0.06) << 0x20)
  ;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vPosInc.field0_0x0.d[1] = 1.0;
  vPosInc.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
  vPos.field0_0x0.d[0] = (float)uVar6;
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,vPos.field0_0x0.d[0],vPos.field0_0x0.d[1] + 0.06,0.16,0.67,pThis->m_infoWinAlpha,
             (EVec4 *)&vPosInc);
  fVar21 = vPos.field0_0x0.d[1] + 0.05 + 0.025;
  fVar23 = (_vlight_bar_gap_wh.field0_0x0.d[0] + _light_bar_gap_width) * 10.0 - _light_bar_gap_width
  ;
  vBar.field0_0x0.d[0] = vPos.field0_0x0.d[0] + 0.01;
  vBar.field0_0x0.d[1] = fVar21 + 0.018;
  vPosInc.field0_0x0.d[0] = fVar23 + 0.05;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPosInc.field0_0x0.d[1] = 0.0;
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar21,vBar.field0_0x0.d[0]);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetSize__6ERFontffb(_10SimInfoWin_m_pFont,14.5,1.0,true);
  Select__6ERFontP3ERC(_10SimInfoWin_m_pFont,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&vFontH,_10SimInfoWin_m_pFont,true,(EWindow *)0x0);
                    /* end of inlined section */
  local_dc = szFamilyName.fChars + 4;
  vFontH.field0_0x0.d[1] = vFontH.field0_0x0.d[1] * 1.08;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vFontH.field0_0x0.d[0] = 0.0;
  pUVar15 = _10SimInfoWin___PersStrings;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44(vPos.field0_0x0.d[1] - vFontH.field0_0x0.d[1],vPos.field0_0x0.d[0] + fVar23 * 0.5);
  do {
    pEVar7 = _10SimInfoWin_m_pFont;
    if (iVar16 == pThis->m_curOpt) {
      psVar13 = GetUiString__7EGlobalPCc(&_globals,pUVar15->pLower);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)&vWH,pEVar7,SUB41(psVar13,0),(EWindow *)&pGifTag1);
      pEVar7 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar21 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szFamilyName.field0_0x0.fCapacity = (uint)(_BLACK.field0_0x0.d[1] * fVar21);
      szFamilyName.fChars._0_4_ = _BLACK.field0_0x0.d[2] * fVar21;
      szFamilyName.fChars._4_4_ = _BLACK.field0_0x0.d[3] * fVar21;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szFamilyName.field0_0x0.fMem = (short *)(_BLACK.field0_0x0.d[0] * fVar21);
                    /* end of inlined section */
      vWH.field0_0x0.d[1] = vFontH.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)szFamilyName.field0_0x0.fMem;
      (pEVar7->m_vColor).field0_0x0.d[1] = (float)szFamilyName.field0_0x0.fCapacity;
      (pEVar7->m_vColor).field0_0x0.d[2] = szFamilyName.fChars._0_4_;
      (pEVar7->m_vColor).field0_0x0.d[3] = szFamilyName.fChars._4_4_;
                    /* end of inlined section */
      psVar13 = GetUiString__7EGlobalPCc(&_globals,pUVar15->pLower);
      pEVar7 = _10SimInfoWin_m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      *(undefined4 *)(local_dc + 2) = 0x3ba3d70a;
      szFamilyName.field0_0x0.fMem = (short *)(vPos.field0_0x0.d[0] + 0.005);
      szFamilyName.fChars._8_4_ = 0.005;
      szFamilyName.field0_0x0.fCapacity = (uint)(vPos.field0_0x0.d[1] + szFamilyName.fChars._12_4_);
      szFamilyName.fChars._24_4_ = szFamilyName.field0_0x0.fMem;
      szFamilyName.fChars._28_4_ = (float)szFamilyName.field0_0x0.fCapacity;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (pEVar7,prc,psVar13,true,(EVec2 *)(szFamilyName.fChars + 0xc),E_FAX_CENTER,E_FAY_TOP
                 ,(EVec2 *)0x0);
      pEVar7 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar21 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szFamilyName.field0_0x0.fMem = (short *)(_YELLOW.field0_0x0.d[0] * fVar21);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szFamilyName.field0_0x0.fCapacity = (uint)(_YELLOW.field0_0x0.d[1] * fVar21);
      szFamilyName.fChars._0_4_ = _YELLOW.field0_0x0.d[2] * fVar21;
      szFamilyName.fChars._4_4_ = _YELLOW.field0_0x0.d[3] * fVar21;
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)szFamilyName.field0_0x0.fMem;
      (pEVar7->m_vColor).field0_0x0.d[1] = (float)szFamilyName.field0_0x0.fCapacity;
      (pEVar7->m_vColor).field0_0x0.d[2] = szFamilyName.fChars._0_4_;
      (pEVar7->m_vColor).field0_0x0.d[3] = szFamilyName.fChars._4_4_;
                    /* end of inlined section */
      psVar13 = GetUiString__7EGlobalPCc(&_globals,pUVar15->pLower);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      szFamilyName.field0_0x0.fMem = (short *)vPos.field0_0x0.d[0];
      szFamilyName.field0_0x0.fCapacity = (uint)vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar13,true,(EVec2 *)&szFamilyName,E_FAX_CENTER,
                 E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
    }
    else {
                    /* end of inlined section */
      fVar23 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      vWH.field0_0x0.d[1] = _BLACK.field0_0x0.d[1] * fVar23;
      fVar17 = _BLACK.field0_0x0.d[2] * fVar23;
      fVar21 = _BLACK.field0_0x0.d[3] * fVar23;
      vWH.field0_0x0.d[0] = _BLACK.field0_0x0.d[0] * fVar23;
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vWH.field0_0x0.d[0];
      (pEVar7->m_vColor).field0_0x0.d[1] = vWH.field0_0x0.d[1];
      (pEVar7->m_vColor).field0_0x0.d[2] = fVar17;
      (pEVar7->m_vColor).field0_0x0.d[3] = fVar21;
                    /* end of inlined section */
      psVar13 = GetUiString__7EGlobalPCc(&_globals,pUVar15->pLower);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      szFamilyName.field0_0x0.fCapacity = 0x3ba3d70a;
      vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0] + 0.005;
      vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1] + 0.005;
      szFamilyName.field0_0x0.fMem = (short *)0x3ba3d70a;
      szFamilyName.fChars._8_4_ = vWH.field0_0x0.d[0];
      szFamilyName.fChars._12_4_ = vWH.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar13,true,(EVec2 *)local_dc,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
      pEVar7 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar21 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      vWH.field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * fVar21;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      vWH.field0_0x0.d[1] = _WHITE.field0_0x0.d[1] * fVar21;
      fVar23 = _WHITE.field0_0x0.d[2] * fVar21;
      fVar21 = _WHITE.field0_0x0.d[3] * fVar21;
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vWH.field0_0x0.d[0];
      (pEVar7->m_vColor).field0_0x0.d[1] = vWH.field0_0x0.d[1];
      (pEVar7->m_vColor).field0_0x0.d[2] = fVar23;
      (pEVar7->m_vColor).field0_0x0.d[3] = fVar21;
                    /* end of inlined section */
      psVar13 = GetUiString__7EGlobalPCc(&_globals,pUVar15->pLower);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
      vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar13,true,&vWH,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    }
                    /* end of inlined section */
    iVar16 = iVar16 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    pUVar15 = pUVar15 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0 =
         (EVec2__null___1__1)
         CONCAT44(vPos.field0_0x0.d[1] + vPosInc.field0_0x0.d[1],
                  vPos.field0_0x0.d[0] + vPosInc.field0_0x0.d[0]);
                    /* end of inlined section */
  } while (iVar16 < 5);
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(vBar.field0_0x0.d[1],vBar.field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)vPos.field0_0x0 >> (7 - uVar4) * 8;
  iVar16 = (*(code *)pcVar2->__vtable->GetRecordDuration)
                     ((int)&pcVar2->_vb1187 + (int)*(short *)&pcVar2->__vtable->GetRecording,7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* end of inlined section */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
  DrawLightBar__FP3ERCfG5EVec2if(prc,(float)iVar16,&vWH,10,pThis->m_infoWinAlpha);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44(vPos.field0_0x0.d[1] + vPosInc.field0_0x0.d[1],
                vPos.field0_0x0.d[0] + vPosInc.field0_0x0.d[0]);
                    /* end of inlined section */
  iVar16 = (*(code *)pcVar2->__vtable->GetRecordDuration)
                     ((int)&pcVar2->_vb1187 + (int)*(short *)&pcVar2->__vtable->GetRecording,6);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* end of inlined section */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
  DrawLightBar__FP3ERCfG5EVec2if(prc,(float)iVar16,&vWH,10,pThis->m_infoWinAlpha);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44(vPos.field0_0x0.d[1] + vPosInc.field0_0x0.d[1],
                vPos.field0_0x0.d[0] + vPosInc.field0_0x0.d[0]);
                    /* end of inlined section */
  iVar16 = (*(code *)pcVar2->__vtable->GetRecordDuration)
                     ((int)&pcVar2->_vb1187 + (int)*(short *)&pcVar2->__vtable->GetRecording,3);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* end of inlined section */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
  DrawLightBar__FP3ERCfG5EVec2if(prc,(float)iVar16,&vWH,10,pThis->m_infoWinAlpha);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44(vPos.field0_0x0.d[1] + vPosInc.field0_0x0.d[1],
                vPos.field0_0x0.d[0] + vPosInc.field0_0x0.d[0]);
                    /* end of inlined section */
  iVar16 = (*(code *)pcVar2->__vtable->GetRecordDuration)
                     ((int)&pcVar2->_vb1187 + (int)*(short *)&pcVar2->__vtable->GetRecording,5);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* end of inlined section */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
  DrawLightBar__FP3ERCfG5EVec2if(prc,(float)iVar16,&vWH,10,pThis->m_infoWinAlpha);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44(vPos.field0_0x0.d[1] + vPosInc.field0_0x0.d[1],
                vPos.field0_0x0.d[0] + vPosInc.field0_0x0.d[0]);
                    /* end of inlined section */
  iVar16 = (*(code *)pcVar2->__vtable->GetRecordDuration)
                     ((int)&pcVar2->_vb1187 + (int)*(short *)&pcVar2->__vtable->GetRecording,2);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* end of inlined section */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
  DrawLightBar__FP3ERCfG5EVec2if(prc,(float)iVar16,&vWH,10,pThis->m_infoWinAlpha);
  return;
}

void __Job_Draw(SimInfoWin *pThis, ERC *prc) {
	cXPerson *pPerson;
	float __Job_Draw_wage_w;
	Int nFriends;
	Int nFriendsNeeded;
	EVec2 vPos;
	float wageoff;
	float textboxGap;
	float jobinfow;
	float player12PlayerFrig;
	EVec2 vShadow;
	Career *pCareer;
	EVec2 vJobName;
	EVec2 vFriends;
	EVec2 vWage;
	Job *pPromotionData;
	StringBufW255 string;
	EVec4 *vColor;
	EVec2 vTitle;
	float __Job_Draw_bar_gap_w;
	float barw;
	EVec2 vPosInc;
	EVec2 vBarStart;
	EVec2 vFontH;
	float personmag;
	float promotionmag;
	Int money;
	short unsigned int empty[1];
	StackString2<16> szSalary;
	Job *pPromotionData;
	c16 *str;
	unsigned int n;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	EVec4 &vColor;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	int maxJobIdx;
	c16 *name;
	int jobidx;
	unsigned int n;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	c16 *name;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	int i;
	EVec2 vWH;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	unsigned int n;
	
  undefined *puVar1;
  short sVar2;
  cXPerson__150_1300 *pcVar3;
  Careers__vtable *pCVar4;
  uint uVar5;
  ulong *puVar6;
  Careers__vtable **ppCVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ERFont *pEVar11;
  bool bVar12;
  EVec2 *pEVar13;
  int *piVar14;
  int iVar15;
  short **ppsVar16;
  short *psVar17;
  EVec4 *pEVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  long lVar22;
  cXPerson__150_1300__vtable *pcVar23;
  ELocString *pEVar24;
  Job *pJVar25;
  UiStringLookUpTableEntry *pUVar26;
  float fVar27;
  short *psVar28;
  float fVar29;
  short *psVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float _x;
  float fVar34;
  EVec2 vPos;
  EVec2 vShadow;
  EVec2 vJobName;
  EVec2 vFriends;
  EVec2 vWage;
  StackString2_16_ szSalary;
  EVec2 vFontH;
  float local_350;
  EStorable__vtable *local_34c;
  StackString2_256_ string;
  EVec2 vWH;
  float local_120;
  EStorable__vtable *local_11c;
  ENodeListNode *local_118;
  ENodeListNode *local_114;
  float local_110;
  EStorable__vtable *local_10c;
  short empty [1];
  int nFriendsNeeded;
  Career *pCareer;
  Job *pPromotionData;
  short *local_ec;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar27 = 0.7;
                    /* end of inlined section */
  fVar29 = 0.25;
  pEVar13 = Get2PlayerOff__Fi(*(int *)&pThis->field_0x30);
  fVar31 = 0.15;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  nFriendsNeeded = 0;
  pcVar3 = _globals._pSelectedSims[*(int *)&pThis->field_0x30];
  piVar14 = (int *)(*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                             ((int)&_5Globs_pHouse->__vtable +
                              (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
  fVar34 = 0.19;
  (**(code **)(*piVar14 + 0xc4))((int)piVar14 + (int)*(short *)(*piVar14 + 0xc0));
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  _x = (pEVar13->field0_0x0).d[0] + 0.27;
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44((pEVar13->field0_0x0).d[1] + fVar27,_x);
                    /* end of inlined section */
  bVar12 = IsTwoPlayer__7EGlobal(&_globals);
  if ((bVar12) && (*(int *)&pThis->field_0x30 == 0)) {
                    /* end of inlined section */
    vPos.field0_0x0 =
         (EVec2__null___1__1)
         ((ulong)vPos.field0_0x0 & 0xffffffff | (ulong)(uint)(vPos.field0_0x0.d[1] + fVar34) << 0x20
         );
    fVar32 = fVar27;
    DrawTextBox__10SimInfoWinP3ERCffff
              (prc,vPos.field0_0x0.d[0],vPos.field0_0x0.d[1] + fVar34 + 0.06,0.3,
               pThis->m_infoWinAlpha);
    DrawTextBox__10SimInfoWinP3ERCffff
              (prc,vPos.field0_0x0.d[0] + 0.3 + 0.005,vPos.field0_0x0.d[1] + 0.06,0.14,
               pThis->m_infoWinAlpha);
    DrawTextBox__10SimInfoWinP3ERCffff
              (prc,vPos.field0_0x0.d[0] + 0.3 + fVar31,vPos.field0_0x0.d[1] + 0.06,fVar29,
               pThis->m_infoWinAlpha);
    DrawTextBox__10SimInfoWinP3ERCffff(prc,_x,vPos.field0_0x0.d[1],fVar32,pThis->m_infoWinAlpha);
  }
  else {
                    /* end of inlined section */
    fVar27 = 0.7;
    fVar32 = fVar27;
    DrawTextBox__10SimInfoWinP3ERCffff
              (prc,vPos.field0_0x0.d[0],vPos.field0_0x0.d[1],0.3,pThis->m_infoWinAlpha);
    DrawTextBox__10SimInfoWinP3ERCffff
              (prc,vPos.field0_0x0.d[0] + 0.3 + 0.005,vPos.field0_0x0.d[1],fVar31 - 0.01,
               pThis->m_infoWinAlpha);
    DrawTextBox__10SimInfoWinP3ERCffff
              (prc,vPos.field0_0x0.d[0] + 0.3 + fVar31,vPos.field0_0x0.d[1],0.25,
               pThis->m_infoWinAlpha);
    DrawTextBox__10SimInfoWinP3ERCffff
              (prc,_x,vPos.field0_0x0.d[1] + 0.06,fVar32,pThis->m_infoWinAlpha);
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pCVar4 = _5Globs_pCareers->__vtable;
  sVar2 = *(short *)&pCVar4->GetJobPerformance;
  ppCVar7 = &_5Globs_pCareers->__vtable;
  uVar21 = (*(code *)pcVar3->__vtable->GetRecordDuration)
                     ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->GetRecording,0x38);
  pCareer = (Career *)(*(code *)pCVar4->GetJobGrade)((int)ppCVar7 + (int)sVar2,uVar21);
  SetSize__6ERFontffb(_10SimInfoWin_m_pFont,15.0,1.0,true);
  Select__6ERFontP3ERC(_10SimInfoWin_m_pFont,prc);
  psVar30 = (short *)(vPos.field0_0x0.d[0] + 0.15);
  vWage.field0_0x0.d[1] = vPos.field0_0x0.d[1] + 0.008;
  vFriends.field0_0x0.d[0] = vPos.field0_0x0.d[0] + 0.3 + 0.015;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  psVar28 = (short *)(vPos.field0_0x0.d[0] + 0.3 + fVar31 + fVar29 * 0.5);
  vFriends.field0_0x0.d[1] = vWage.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  bVar12 = IsTwoPlayer__7EGlobal(&_globals);
  if ((bVar12) && (*(int *)&pThis->field_0x30 == 0)) {
                    /* end of inlined section */
    vFriends.field0_0x0.d[1] = vPos.field0_0x0.d[1] + 0.06 + 0.008;
    vWage.field0_0x0.d[1] = vFriends.field0_0x0.d[1];
  }
  pcVar23 = pcVar3->__vtable;
  if (pCareer == (Career *)0x0) {
LAB_001cdcc8:
    lVar22 = (**(code **)&pcVar23->field_0x184)
                       ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar23->field_0x180);
    pEVar11 = _10SimInfoWin_m_pFont;
    if (lVar22 == 0) {
                    /* end of inlined section */
      fVar29 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szSalary.field0_0x0.fMem = (short *)(_BLACK.field0_0x0.d[0] * fVar29);
      szSalary.field0_0x0.fCapacity = (uint)(_BLACK.field0_0x0.d[1] * fVar29);
      szSalary.fChars._0_4_ = _BLACK.field0_0x0.d[2] * fVar29;
      szSalary.fChars._4_4_ = _BLACK.field0_0x0.d[3] * fVar29;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)szSalary.field0_0x0.fMem;
      (pEVar11->m_vColor).field0_0x0.d[1] = (float)szSalary.field0_0x0.fCapacity;
      (pEVar11->m_vColor).field0_0x0.d[2] = szSalary.fChars._0_4_;
      (pEVar11->m_vColor).field0_0x0.d[3] = szSalary.fChars._4_4_;
      psVar17 = GetUiString__7EGlobalPCc(&_globals,"Student");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      szSalary.field0_0x0.fMem = (short *)((float)psVar30 + 0.005);
      szSalary.field0_0x0.fCapacity = (uint)(vWage.field0_0x0.d[1] + 0.005);
      szSalary.fChars._8_4_ = szSalary.field0_0x0.fMem;
      szSalary.fChars._12_4_ = (float)szSalary.field0_0x0.fCapacity;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar17,true,(EVec2 *)(szSalary.fChars + 4),E_FAX_CENTER,
                 E_FAY_TOP,(EVec2 *)0x0);
      pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar29 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szSalary.field0_0x0.fMem = (short *)(_WHITE.field0_0x0.d[0] * fVar29);
      szSalary.fChars._4_4_ = _WHITE.field0_0x0.d[3] * fVar29;
      szSalary.field0_0x0.fCapacity = (uint)(_WHITE.field0_0x0.d[1] * fVar29);
      szSalary.fChars._0_4_ = _WHITE.field0_0x0.d[2] * fVar29;
                    /* end of inlined section */
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)szSalary.field0_0x0.fMem;
      (pEVar11->m_vColor).field0_0x0.d[1] = (float)szSalary.field0_0x0.fCapacity;
      (pEVar11->m_vColor).field0_0x0.d[2] = szSalary.fChars._0_4_;
      (pEVar11->m_vColor).field0_0x0.d[3] = szSalary.fChars._4_4_;
      psVar17 = GetUiString__7EGlobalPCc(&_globals,"Student");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      szSalary.field0_0x0.fCapacity = (uint)vWage.field0_0x0.d[1];
      szSalary.field0_0x0.fMem = psVar30;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar17,true,(EVec2 *)&szSalary,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
      pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar29 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szSalary.fChars._4_4_ = _BLACK.field0_0x0.d[3] * fVar29;
      szSalary.field0_0x0.fCapacity = (uint)(_BLACK.field0_0x0.d[1] * fVar29);
      szSalary.fChars._0_4_ = _BLACK.field0_0x0.d[2] * fVar29;
      szSalary.field0_0x0.fMem = (short *)(_BLACK.field0_0x0.d[0] * fVar29);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)szSalary.field0_0x0.fMem;
      (pEVar11->m_vColor).field0_0x0.d[1] = (float)szSalary.field0_0x0.fCapacity;
      (pEVar11->m_vColor).field0_0x0.d[2] = szSalary.fChars._0_4_;
      (pEVar11->m_vColor).field0_0x0.d[3] = szSalary.fChars._4_4_;
      psVar30 = GetUiString__7EGlobalPCc(&_globals,"$0");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      szSalary.field0_0x0.fMem = (short *)((float)psVar28 + 0.005);
      szSalary.field0_0x0.fCapacity = (uint)(vWage.field0_0x0.d[1] + 0.005);
      szSalary.fChars._8_4_ = szSalary.field0_0x0.fMem;
      szSalary.fChars._12_4_ = (float)szSalary.field0_0x0.fCapacity;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar30,true,(EVec2 *)(szSalary.fChars + 4),E_FAX_CENTER,
                 E_FAY_TOP,(EVec2 *)0x0);
      pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar29 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szSalary.field0_0x0.fMem = (short *)(_GREAY.field0_0x0.d[0] * fVar29);
      szSalary.fChars._4_4_ = _GREAY.field0_0x0.d[3] * fVar29;
      szSalary.field0_0x0.fCapacity = (uint)(_GREAY.field0_0x0.d[1] * fVar29);
      szSalary.fChars._0_4_ = _GREAY.field0_0x0.d[2] * fVar29;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)szSalary.field0_0x0.fMem;
      (pEVar11->m_vColor).field0_0x0.d[1] = (float)szSalary.field0_0x0.fCapacity;
      (pEVar11->m_vColor).field0_0x0.d[2] = szSalary.fChars._0_4_;
      (pEVar11->m_vColor).field0_0x0.d[3] = szSalary.fChars._4_4_;
      psVar30 = GetUiString__7EGlobalPCc(&_globals,"$0");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      szSalary.field0_0x0.fCapacity = (uint)vWage.field0_0x0.d[1];
      szSalary.field0_0x0.fMem = psVar28;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar30,true,(EVec2 *)&szSalary,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
    }
    else {
                    /* end of inlined section */
      fVar29 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szSalary.field0_0x0.fMem = (short *)(_BLACK.field0_0x0.d[0] * fVar29);
      szSalary.field0_0x0.fCapacity = (uint)(_BLACK.field0_0x0.d[1] * fVar29);
      szSalary.fChars._0_4_ = _BLACK.field0_0x0.d[2] * fVar29;
      szSalary.fChars._4_4_ = _BLACK.field0_0x0.d[3] * fVar29;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)szSalary.field0_0x0.fMem;
      (pEVar11->m_vColor).field0_0x0.d[1] = (float)szSalary.field0_0x0.fCapacity;
      (pEVar11->m_vColor).field0_0x0.d[2] = szSalary.fChars._0_4_;
      (pEVar11->m_vColor).field0_0x0.d[3] = szSalary.fChars._4_4_;
      psVar17 = GetUiString__7EGlobalPCc(&_globals,"unemployed");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      szSalary.field0_0x0.fMem = (short *)((float)psVar30 + 0.005);
      szSalary.field0_0x0.fCapacity = (uint)(vWage.field0_0x0.d[1] + 0.005);
      szSalary.fChars._8_4_ = szSalary.field0_0x0.fMem;
      szSalary.fChars._12_4_ = (float)szSalary.field0_0x0.fCapacity;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar17,true,(EVec2 *)(szSalary.fChars + 4),E_FAX_CENTER,
                 E_FAY_TOP,(EVec2 *)0x0);
      pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      fVar29 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szSalary.field0_0x0.fMem = (short *)(_WHITE.field0_0x0.d[0] * fVar29);
      szSalary.field0_0x0.fCapacity = (uint)(_WHITE.field0_0x0.d[1] * fVar29);
      szSalary.fChars._0_4_ = _WHITE.field0_0x0.d[2] * fVar29;
      szSalary.fChars._4_4_ = _WHITE.field0_0x0.d[3] * fVar29;
                    /* end of inlined section */
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)szSalary.field0_0x0.fMem;
      (pEVar11->m_vColor).field0_0x0.d[1] = (float)szSalary.field0_0x0.fCapacity;
      (pEVar11->m_vColor).field0_0x0.d[2] = szSalary.fChars._0_4_;
      (pEVar11->m_vColor).field0_0x0.d[3] = szSalary.fChars._4_4_;
      psVar17 = GetUiString__7EGlobalPCc(&_globals,"unemployed");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      szSalary.field0_0x0.fCapacity = (uint)vWage.field0_0x0.d[1];
      szSalary.field0_0x0.fMem = psVar30;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar17,true,(EVec2 *)&szSalary,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
      pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar29 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szSalary.fChars._4_4_ = _BLACK.field0_0x0.d[3] * fVar29;
      szSalary.field0_0x0.fCapacity = (uint)(_BLACK.field0_0x0.d[1] * fVar29);
      szSalary.fChars._0_4_ = _BLACK.field0_0x0.d[2] * fVar29;
      szSalary.field0_0x0.fMem = (short *)(_BLACK.field0_0x0.d[0] * fVar29);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)szSalary.field0_0x0.fMem;
      (pEVar11->m_vColor).field0_0x0.d[1] = (float)szSalary.field0_0x0.fCapacity;
      (pEVar11->m_vColor).field0_0x0.d[2] = szSalary.fChars._0_4_;
      (pEVar11->m_vColor).field0_0x0.d[3] = szSalary.fChars._4_4_;
      psVar30 = GetUiString__7EGlobalPCc(&_globals,"$0");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      szSalary.field0_0x0.fMem = (short *)((float)psVar28 + 0.005);
      szSalary.field0_0x0.fCapacity = (uint)(vWage.field0_0x0.d[1] + 0.005);
      szSalary.fChars._8_4_ = szSalary.field0_0x0.fMem;
      szSalary.fChars._12_4_ = (float)szSalary.field0_0x0.fCapacity;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar30,true,(EVec2 *)(szSalary.fChars + 4),E_FAX_CENTER,
                 E_FAY_TOP,(EVec2 *)0x0);
      pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar29 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szSalary.fChars._4_4_ = _WHITE.field0_0x0.d[3] * fVar29;
      szSalary.field0_0x0.fCapacity = (uint)(_WHITE.field0_0x0.d[1] * fVar29);
      szSalary.fChars._0_4_ = _WHITE.field0_0x0.d[2] * fVar29;
      szSalary.field0_0x0.fMem = (short *)(_WHITE.field0_0x0.d[0] * fVar29);
                    /* end of inlined section */
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)szSalary.field0_0x0.fMem;
      (pEVar11->m_vColor).field0_0x0.d[1] = (float)szSalary.field0_0x0.fCapacity;
      (pEVar11->m_vColor).field0_0x0.d[2] = szSalary.fChars._0_4_;
      (pEVar11->m_vColor).field0_0x0.d[3] = szSalary.fChars._4_4_;
      psVar30 = GetUiString__7EGlobalPCc(&_globals,"$0");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      szSalary.field0_0x0.fCapacity = (uint)vWage.field0_0x0.d[1];
      szSalary.field0_0x0.fMem = psVar28;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar30,true,(EVec2 *)&szSalary,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
                    /* end of inlined section */
    }
  }
  else {
    lVar22 = (**(code **)&pcVar23->field_0x184)
                       ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar23->field_0x180);
    if (lVar22 == 0) {
      pcVar23 = pcVar3->__vtable;
      goto LAB_001cdcc8;
    }
    iVar15 = (*(code *)pcVar3->__vtable->GetRecordDuration)
                       ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->GetRecording,0x39)
    ;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    iVar15 = (pCareer->fJobs).pData[iVar15].fSalary;
                    /* inlined from ../MSrc/stringbuffer2.h */
    empty[0] = 0;
    __13StringBuffer2PUsUi(&szSalary.field0_0x0,szSalary.fChars,0x10);
    append__13StringBuffer2PCUsi(&szSalary.field0_0x0,empty,-1);
                    /* end of inlined section */
    appendChar__13StringBuffer2Us(&szSalary.field0_0x0,0x24);
    appendNum__13StringBuffer2i(&szSalary.field0_0x0,iVar15);
    iVar15 = (*(code *)pcVar3->__vtable->GetRecordDuration)
                       ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->GetRecording,0x39)
    ;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pJVar25 = (pCareer->fJobs).pData;
    if (pJVar25 == (Job *)0x0) {
      ppsVar16 = (short **)0x0;
    }
    else {
      ppsVar16 = pJVar25[-1].fDescription.ptr;
    }
                    /* end of inlined section */
    pcVar23 = pcVar3->__vtable;
    if (iVar15 < (int)ppsVar16 + -1) {
      iVar15 = (*(code *)pcVar23->GetRecordDuration)
                         ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar23->GetRecording,0x39);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar15 = iVar15 + 1;
      pJVar25 = (pCareer->fJobs).pData;
    }
    else {
      iVar15 = (*(code *)pcVar23->GetRecordDuration)
                         ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar23->GetRecording,0x39);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      pJVar25 = (pCareer->fJobs).pData;
    }
    pEVar11 = _10SimInfoWin_m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    fVar29 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    fVar32 = _BLACK.field0_0x0.d[1] * fVar29;
    fVar31 = _BLACK.field0_0x0.d[2] * fVar29;
                    /* end of inlined section */
    nFriendsNeeded = pJVar25[iVar15].fMinReqs[0];
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    fVar33 = _BLACK.field0_0x0.d[3] * fVar29;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = _BLACK.field0_0x0.d[0] * fVar29;
    (pEVar11->m_vColor).field0_0x0.d[1] = fVar32;
    (pEVar11->m_vColor).field0_0x0.d[2] = fVar31;
    (pEVar11->m_vColor).field0_0x0.d[3] = fVar33;
    vFontH.field0_0x0.d[0] = (float)psVar30 + 0.005;
    vFontH.field0_0x0.d[1] = vWage.field0_0x0.d[1] + 0.005;
    local_350 = vFontH.field0_0x0.d[0];
    local_34c = (EStorable__vtable *)vFontH.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (pEVar11,prc,*(pCareer->fName).ptr,true,(EVec2 *)&local_350,E_FAX_CENTER,E_FAY_TOP,
               (EVec2 *)0x0);
    pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
    fVar31 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar29 = _WHITE.field0_0x0.d[1] * fVar31;
    fVar33 = _WHITE.field0_0x0.d[2] * fVar31;
    fVar32 = _WHITE.field0_0x0.d[3] * fVar31;
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * fVar31;
    (pEVar11->m_vColor).field0_0x0.d[1] = fVar29;
    (pEVar11->m_vColor).field0_0x0.d[2] = fVar33;
    (pEVar11->m_vColor).field0_0x0.d[3] = fVar32;
    vFontH.field0_0x0.d[1] = vWage.field0_0x0.d[1];
    vFontH.field0_0x0._0_4_ = psVar30;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (pEVar11,prc,*(pCareer->fName).ptr,true,&vFontH,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
    pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
    fVar31 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    fVar32 = _BLACK.field0_0x0.d[3] * fVar31;
    vFontH.field0_0x0.d[1] = _BLACK.field0_0x0.d[1] * fVar31;
    fVar29 = _BLACK.field0_0x0.d[2] * fVar31;
    vFontH.field0_0x0.d[0] = _BLACK.field0_0x0.d[0] * fVar31;
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vFontH.field0_0x0.d[0];
    (pEVar11->m_vColor).field0_0x0.d[1] = vFontH.field0_0x0.d[1];
    (pEVar11->m_vColor).field0_0x0.d[2] = fVar29;
    (pEVar11->m_vColor).field0_0x0.d[3] = fVar32;
    psVar30 = c_str__C13StringBuffer2(&szSalary.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vFontH.field0_0x0.d[0] = (float)psVar28 + 0.005;
    vFontH.field0_0x0.d[1] = vWage.field0_0x0.d[1] + 0.005;
    local_350 = vFontH.field0_0x0.d[0];
    local_34c = (EStorable__vtable *)vFontH.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar30,true,(EVec2 *)&local_350,E_FAX_CENTER,E_FAY_TOP,
               (EVec2 *)0x0);
    pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
    fVar31 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    fVar32 = _WHITE.field0_0x0.d[3] * fVar31;
    vFontH.field0_0x0.d[1] = _WHITE.field0_0x0.d[1] * fVar31;
    fVar29 = _WHITE.field0_0x0.d[2] * fVar31;
    vFontH.field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * fVar31;
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vFontH.field0_0x0.d[0];
    (pEVar11->m_vColor).field0_0x0.d[1] = vFontH.field0_0x0.d[1];
    (pEVar11->m_vColor).field0_0x0.d[2] = fVar29;
    (pEVar11->m_vColor).field0_0x0.d[3] = fVar32;
    psVar30 = c_str__C13StringBuffer2(&szSalary.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vFontH.field0_0x0.d[1] = vWage.field0_0x0.d[1];
    vFontH.field0_0x0._0_4_ = psVar28;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar30,true,&vFontH,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  }
  local_ec = szSalary.fChars + 4;
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
  pPromotionData = (Job *)0x0;
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&string.field0_0x0,string.fChars,0x100);
                    /* end of inlined section */
  piVar14 = (int *)(*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                             ((int)&_5Globs_pHouse->__vtable +
                              (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
  iVar15 = (**(code **)(*piVar14 + 0xc4))((int)piVar14 + (int)*(short *)(*piVar14 + 0xc0));
  Select__8ERShaderP3ERCi(_14ERelationsIcon_m_pSmileyFace,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  szSalary.field0_0x0.fMem = (short *)0x3f8ccccd;
  szSalary.field0_0x0.fCapacity = 0x3f8ccccd;
  szSalary.fChars._8_4_ = (short *)0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vFriends,&szSalary);
  Select__6ERFontP3ERC(_10SimInfoWin_m_pFont,prc);
  vFriends.field0_0x0.d[0] = vFriends.field0_0x0.d[0] + 0.08;
  erase__13StringBuffer2(&string.field0_0x0);
  appendNum__13StringBuffer2i(&string.field0_0x0,iVar15);
  pEVar11 = _10SimInfoWin_m_pFont;
  uVar10 = _BLACK.field0_0x0.d[3];
  uVar9 = _BLACK.field0_0x0.d[2];
  uVar8 = _BLACK.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
  (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = _BLACK.field0_0x0.d[0];
  (pEVar11->m_vColor).field0_0x0.d[1] = uVar8;
  (pEVar11->m_vColor).field0_0x0.d[2] = uVar9;
  (pEVar11->m_vColor).field0_0x0.d[3] = uVar10;
  psVar28 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  psVar30 = szSalary.fChars + 0xc;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  szSalary.fChars._8_4_ = (short *)0x3ba3d70a;
  szSalary.field0_0x0.fMem = (short *)(vFriends.field0_0x0.d[0] + 0.005);
  szSalary.field0_0x0.fCapacity = (uint)(vFriends.field0_0x0.d[1] + szSalary.fChars._12_4_);
  szSalary.fChars._24_4_ = szSalary.field0_0x0.fMem;
  szSalary.fChars._28_4_ = (float)szSalary.field0_0x0.fCapacity;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_10SimInfoWin_m_pFont,prc,psVar28,true,(EVec2 *)psVar30,E_FAX_RIGHT,E_FAY_TOP,
             (EVec2 *)0x0);
  pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
  if (iVar15 < nFriendsNeeded) {
    pEVar18 = &_RED;
  }
  else {
    pEVar18 = &_GREEN;
  }
  uVar21 = *(undefined8 *)&pEVar18->field0_0x0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  fVar29 = (pEVar18->field0_0x0).d[2];
  fVar31 = (pEVar18->field0_0x0).d[3];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)uVar21;
  (pEVar11->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar21 >> 0x20);
  (pEVar11->m_vColor).field0_0x0.d[2] = fVar29;
  (pEVar11->m_vColor).field0_0x0.d[3] = fVar31;
  psVar28 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  szSalary.field0_0x0.fMem = (short *)vFriends.field0_0x0.d[0];
  szSalary.field0_0x0.fCapacity = (uint)vFriends.field0_0x0.d[1];
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_10SimInfoWin_m_pFont,prc,psVar28,true,(EVec2 *)&szSalary,E_FAX_RIGHT,E_FAY_TOP,
             (EVec2 *)0x0);
                    /* end of inlined section */
  erase__13StringBuffer2(&string.field0_0x0);
  appendChar__13StringBuffer2Us(&string.field0_0x0,0x2f);
  appendNum__13StringBuffer2i(&string.field0_0x0,nFriendsNeeded);
  pEVar11 = _10SimInfoWin_m_pFont;
  uVar10 = _BLACK.field0_0x0.d[3];
  uVar9 = _BLACK.field0_0x0.d[2];
  uVar8 = _BLACK.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = _BLACK.field0_0x0.d[0];
  (pEVar11->m_vColor).field0_0x0.d[1] = uVar8;
  (pEVar11->m_vColor).field0_0x0.d[2] = uVar9;
  (pEVar11->m_vColor).field0_0x0.d[3] = uVar10;
  psVar28 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  szSalary.fChars._8_4_ = (short *)0x3ba3d70a;
  szSalary.field0_0x0.fMem = (short *)(vFriends.field0_0x0.d[0] + 0.005);
  szSalary.field0_0x0.fCapacity = (uint)(vFriends.field0_0x0.d[1] + szSalary.fChars._12_4_);
  szSalary.fChars._24_4_ = szSalary.field0_0x0.fMem;
  szSalary.fChars._28_4_ = (float)szSalary.field0_0x0.fCapacity;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_10SimInfoWin_m_pFont,prc,psVar28,true,(EVec2 *)psVar30,E_FAX_LEFT,E_FAY_TOP,
             (EVec2 *)0x0);
                    /* end of inlined section */
  lVar22 = (**(code **)&pcVar3->__vtable->field_0x184)
                     ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->field_0x180);
  pEVar11 = _10SimInfoWin_m_pFont;
  if (lVar22 == 0) {
    pEVar18 = &_GREAY;
  }
  else {
    pEVar18 = &_WHITE;
  }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  uVar21 = *(undefined8 *)&pEVar18->field0_0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  fVar29 = (pEVar18->field0_0x0).d[2];
  fVar31 = (pEVar18->field0_0x0).d[3];
                    /* end of inlined section */
                    /* end of inlined section */
  (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)uVar21;
  (pEVar11->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar21 >> 0x20);
  (pEVar11->m_vColor).field0_0x0.d[2] = fVar29;
  (pEVar11->m_vColor).field0_0x0.d[3] = fVar31;
  psVar28 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  szSalary.field0_0x0.fMem = (short *)vFriends.field0_0x0.d[0];
  szSalary.field0_0x0.fCapacity = (uint)vFriends.field0_0x0.d[1];
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_10SimInfoWin_m_pFont,prc,psVar28,true,(EVec2 *)&szSalary,E_FAX_LEFT,E_FAY_TOP,
             (EVec2 *)0x0);
                    /* end of inlined section */
  szSalary.field0_0x0.fMem = (short *)(_x + fVar27 * 0.5);
  szSalary.field0_0x0.fCapacity = (uint)(vPos.field0_0x0.d[1] + 0.06 + 0.008);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  bVar12 = IsTwoPlayer__7EGlobal(&_globals);
  pEVar11 = _10SimInfoWin_m_pFont;
  if ((bVar12) && (*(int *)&pThis->field_0x30 == 0)) {
                    /* end of inlined section */
    szSalary.field0_0x0.fCapacity = (uint)(vPos.field0_0x0.d[1] + 0.008);
  }
  if (pCareer == (Career *)0x0) {
                    /* end of inlined section */
    fVar27 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    szSalary.fChars._8_4_ = (short *)(_BLACK.field0_0x0.d[0] * fVar27);
    szSalary.fChars._20_4_ = _BLACK.field0_0x0.d[3] * fVar27;
    szSalary.fChars._12_4_ = _BLACK.field0_0x0.d[1] * fVar27;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    szSalary.fChars._16_4_ = _BLACK.field0_0x0.d[2] * fVar27;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)szSalary.fChars._8_4_;
    (pEVar11->m_vColor).field0_0x0.d[1] = szSalary.fChars._12_4_;
    (pEVar11->m_vColor).field0_0x0.d[2] = szSalary.fChars._16_4_;
    (pEVar11->m_vColor).field0_0x0.d[3] = szSalary.fChars._20_4_;
    psVar28 = GetUiString__7EGlobalPCc(&_globals,"unemployed");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    szSalary.fChars._8_4_ = (short *)((float)szSalary.field0_0x0.fMem + 0.005);
    szSalary.fChars._12_4_ = (float)szSalary.field0_0x0.fCapacity + 0.005;
    szSalary.fChars._24_4_ = szSalary.fChars._8_4_;
    szSalary.fChars._28_4_ = szSalary.fChars._12_4_;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar28,true,(EVec2 *)psVar30,E_FAX_CENTER,E_FAY_TOP,
               (EVec2 *)0x0);
    pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
    if (pThis->m_curOpt == 6) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      fVar27 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szSalary.fChars._8_4_ = (short *)(_YELLOW.field0_0x0.d[0] * fVar27);
      szSalary.fChars._20_4_ = _YELLOW.field0_0x0.d[3] * fVar27;
      szSalary.fChars._12_4_ = _YELLOW.field0_0x0.d[1] * fVar27;
      szSalary.fChars._16_4_ = _YELLOW.field0_0x0.d[2] * fVar27;
                    /* end of inlined section */
    }
    else {
                    /* end of inlined section */
      fVar27 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szSalary.fChars._8_4_ = (short *)(_WHITE.field0_0x0.d[0] * fVar27);
      szSalary.fChars._20_4_ = _WHITE.field0_0x0.d[3] * fVar27;
      szSalary.fChars._12_4_ = _WHITE.field0_0x0.d[1] * fVar27;
      szSalary.fChars._16_4_ = _WHITE.field0_0x0.d[2] * fVar27;
    }
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)szSalary.fChars._8_4_;
    (pEVar11->m_vColor).field0_0x0.d[1] = szSalary.fChars._12_4_;
    (pEVar11->m_vColor).field0_0x0.d[2] = szSalary.fChars._16_4_;
    (pEVar11->m_vColor).field0_0x0.d[3] = szSalary.fChars._20_4_;
                    /* end of inlined section */
    psVar28 = GetUiString__7EGlobalPCc(&_globals,"unemployed");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    szSalary.fChars._8_4_ = szSalary.field0_0x0.fMem;
    szSalary.fChars._12_4_ = (float)szSalary.field0_0x0.fCapacity;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar28,true,(EVec2 *)local_ec,E_FAX_CENTER,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    goto LAB_001cea54;
  }
  lVar22 = (**(code **)&pcVar3->__vtable->field_0x184)
                     ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->field_0x180);
  if (lVar22 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pCVar4 = _5Globs_pCareers->__vtable;
    sVar2 = *(short *)&pCVar4[1].Load;
    ppCVar7 = &_5Globs_pCareers->__vtable;
    uVar21 = (*(code *)pcVar3->__vtable->GetRecordDuration)
                       ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->GetRecording,0x39)
    ;
    puVar20 = (undefined4 *)(*(code *)pCVar4[1].TearDown)((int)ppCVar7 + (int)sVar2,uVar21);
    pEVar11 = _10SimInfoWin_m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    fVar29 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    szSalary.fChars._20_4_ = _BLACK.field0_0x0.d[3] * fVar29;
    fVar27 = _BLACK.field0_0x0.d[1] * fVar29;
    szSalary.fChars._16_4_ = _BLACK.field0_0x0.d[2] * fVar29;
    psVar28 = *(short **)*puVar20;
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = _BLACK.field0_0x0.d[0] * fVar29;
    (pEVar11->m_vColor).field0_0x0.d[1] = fVar27;
    (pEVar11->m_vColor).field0_0x0.d[2] = szSalary.fChars._16_4_;
    (pEVar11->m_vColor).field0_0x0.d[3] = szSalary.fChars._20_4_;
    szSalary.fChars._8_4_ = (short *)((float)szSalary.field0_0x0.fMem + 0.005);
    szSalary.fChars._12_4_ = (float)szSalary.field0_0x0.fCapacity + 0.005;
    szSalary.fChars._24_4_ = szSalary.fChars._8_4_;
    szSalary.fChars._28_4_ = szSalary.fChars._12_4_;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (pEVar11,prc,psVar28,true,(EVec2 *)psVar30,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
    if (pThis->m_curOpt != 6) {
                    /* end of inlined section */
      fVar27 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      goto LAB_001ce85c;
    }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    fVar27 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    szSalary.fChars._8_4_ = (short *)(_YELLOW.field0_0x0.d[0] * fVar27);
    szSalary.fChars._20_4_ = _YELLOW.field0_0x0.d[3] * fVar27;
    szSalary.fChars._12_4_ = _YELLOW.field0_0x0.d[1] * fVar27;
    szSalary.fChars._16_4_ = _YELLOW.field0_0x0.d[2] * fVar27;
                    /* end of inlined section */
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pJVar25 = (pCareer->fJobs).pData;
    if (pJVar25 == (Job *)0x0) {
      ppsVar16 = (short **)0x0;
    }
    else {
      ppsVar16 = pJVar25[-1].fDescription.ptr;
    }
                    /* end of inlined section */
    iVar15 = (int)ppsVar16 + -1;
    iVar19 = (*(code *)pcVar3->__vtable->GetRecordDuration)
                       ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->GetRecording,0x39)
    ;
    pcVar23 = pcVar3->__vtable;
    if (iVar15 < iVar19) {
      iVar19 = (*(code *)pcVar23->GetRecordDuration)
                         ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar23->GetRecording,0x39);
      iVar19 = iVar19 + 1;
      if (iVar19 < 0) {
        iVar15 = 0;
      }
      else if (iVar19 <= iVar15) {
        iVar15 = iVar19;
      }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      pPromotionData = (pCareer->fJobs).pData + iVar15;
    }
    else {
      iVar15 = (*(code *)pcVar23->GetRecordDuration)
                         ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar23->GetRecording,0x39);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      pPromotionData = (pCareer->fJobs).pData + iVar15;
                    /* end of inlined section */
    }
                    /* end of inlined section */
    psVar28 = (short *)0x0;
    if (pPromotionData != (Job *)0x0) {
      lVar22 = (**(code **)&pcVar3->__vtable->field_0x17c)
                         ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->field_0x178);
      pEVar24 = &pPromotionData->fName;
      if (lVar22 != 0) {
        pEVar24 = &pPromotionData->fFemaleName;
      }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      psVar28 = *pEVar24->ptr;
    }
    pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
    if ((psVar28 == (short *)0x0) || (*psVar28 == 0)) {
      psVar28 = __TEMPSTRING;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    }
                    /* end of inlined section */
    fVar29 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    szSalary.fChars._20_4_ = _BLACK.field0_0x0.d[3] * fVar29;
    fVar27 = _BLACK.field0_0x0.d[1] * fVar29;
    szSalary.fChars._16_4_ = _BLACK.field0_0x0.d[2] * fVar29;
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = _BLACK.field0_0x0.d[0] * fVar29;
    (pEVar11->m_vColor).field0_0x0.d[1] = fVar27;
    (pEVar11->m_vColor).field0_0x0.d[2] = szSalary.fChars._16_4_;
    (pEVar11->m_vColor).field0_0x0.d[3] = szSalary.fChars._20_4_;
    szSalary.fChars._8_4_ = (short *)((float)szSalary.field0_0x0.fMem + 0.005);
    szSalary.fChars._12_4_ = (float)szSalary.field0_0x0.fCapacity + 0.005;
    szSalary.fChars._24_4_ = szSalary.fChars._8_4_;
    szSalary.fChars._28_4_ = szSalary.fChars._12_4_;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (pEVar11,prc,psVar28,true,(EVec2 *)psVar30,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
    if (pThis->m_curOpt == 6) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      fVar27 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      szSalary.fChars._8_4_ = (short *)(_YELLOW.field0_0x0.d[0] * fVar27);
      szSalary.fChars._20_4_ = _YELLOW.field0_0x0.d[3] * fVar27;
      szSalary.fChars._12_4_ = _YELLOW.field0_0x0.d[1] * fVar27;
      szSalary.fChars._16_4_ = _YELLOW.field0_0x0.d[2] * fVar27;
                    /* end of inlined section */
    }
    else {
                    /* end of inlined section */
      fVar27 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
LAB_001ce85c:
      szSalary.fChars._8_4_ = (short *)(_WHITE.field0_0x0.d[0] * fVar27);
      szSalary.fChars._20_4_ = _WHITE.field0_0x0.d[3] * fVar27;
      szSalary.fChars._12_4_ = _WHITE.field0_0x0.d[1] * fVar27;
      szSalary.fChars._16_4_ = _WHITE.field0_0x0.d[2] * fVar27;
    }
  }
  pEVar11 = _10SimInfoWin_m_pFont;
  (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)szSalary.fChars._8_4_;
  (pEVar11->m_vColor).field0_0x0.d[1] = szSalary.fChars._12_4_;
  (pEVar11->m_vColor).field0_0x0.d[2] = szSalary.fChars._16_4_;
  (pEVar11->m_vColor).field0_0x0.d[3] = szSalary.fChars._20_4_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  szSalary.fChars._8_4_ = szSalary.field0_0x0.fMem;
  szSalary.fChars._12_4_ = (float)szSalary.field0_0x0.fCapacity;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_10SimInfoWin_m_pFont,prc,psVar28,true,(EVec2 *)local_ec,E_FAX_CENTER,E_FAY_TOP,
             (EVec2 *)0x0);
                    /* end of inlined section */
LAB_001cea54:
  bVar12 = IsTwoPlayer__7EGlobal(&_globals);
  if ((bVar12) && (*(int *)&pThis->field_0x30 == 0)) {
                    /* end of inlined section */
    vPos.field0_0x0 =
         (EVec2__null___1__1)
         ((ulong)vPos.field0_0x0 & 0xffffffff |
         (ulong)(uint)((vPos.field0_0x0.d[1] - fVar34) - 0.056) << 0x20);
  }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       ((ulong)vPos.field0_0x0 & 0xffffffff | (ulong)(uint)(vPos.field0_0x0.d[1] + 0.12) << 0x20);
  iVar15 = 0;
  fVar27 = (_vlight_bar_gap_wh.field0_0x0.d[0] + _light_bar_gap_width) * 10.0 - _light_bar_gap_width
  ;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  szSalary.fChars._12_4_ = 0.0;
                    /* end of inlined section */
  szSalary.fChars._8_4_ = (short *)(fVar27 + 0.023);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  szSalary.fChars._24_4_ = (short *)0x3f800000;
                    /* end of inlined section */
  szSalary.fChars._28_4_ = 1.0;
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,vPos.field0_0x0.d[0],vPos.field0_0x0.d[1] + 0.12,0.12,0.7,pThis->m_infoWinAlpha,
             (EVec4 *)psVar30);
  szSalary.fChars._24_4_ = (short *)(vPos.field0_0x0.d[0] + 0.018);
  szSalary.fChars._28_4_ = vPos.field0_0x0.d[1] + 0.06;
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(szSalary.fChars._28_4_,szSalary.fChars._24_4_);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetSize__6ERFontffb(_10SimInfoWin_m_pFont,14.0,1.0,true);
  Select__6ERFontP3ERC(_10SimInfoWin_m_pFont,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&vFontH,_10SimInfoWin_m_pFont,true,(EWindow *)0x0);
                    /* end of inlined section */
  vFontH.field0_0x0.d[1] = vFontH.field0_0x0.d[1] * 1.08;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vFontH.field0_0x0.d[0] = 0.0;
  pUVar26 = _10SimInfoWin___JobStrings;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44(vPos.field0_0x0.d[1] - vFontH.field0_0x0.d[1],vPos.field0_0x0.d[0] + fVar27 * 0.5);
  do {
    pEVar11 = _10SimInfoWin_m_pFont;
    if (iVar15 == pThis->m_curOpt) {
      psVar28 = GetUiString__7EGlobalPCc(&_globals,pUVar26->pLower);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)&vWH,pEVar11,SUB41(psVar28,0),(EWindow *)&pGifTag1);
      pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      local_120 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_11c = (EStorable__vtable *)(_BLACK.field0_0x0.d[1] * local_120);
      local_118 = (ENodeListNode *)(_BLACK.field0_0x0.d[2] * local_120);
      local_114 = (ENodeListNode *)(_BLACK.field0_0x0.d[3] * local_120);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_120 = _BLACK.field0_0x0.d[0] * local_120;
                    /* end of inlined section */
      vWH.field0_0x0.d[1] = vFontH.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = local_120;
      (pEVar11->m_vColor).field0_0x0.d[1] = (float)local_11c;
      (pEVar11->m_vColor).field0_0x0.d[2] = (float)local_118;
      (pEVar11->m_vColor).field0_0x0.d[3] = (float)local_114;
                    /* end of inlined section */
      psVar28 = GetUiString__7EGlobalPCc(&_globals,pUVar26->pLower);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_120 = vPos.field0_0x0.d[0] + 0.005;
      local_11c = (EStorable__vtable *)(vPos.field0_0x0.d[1] + 0.005);
      local_110 = local_120;
      local_10c = local_11c;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar28,true,(EVec2 *)&local_110,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
      pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar27 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_120 = _YELLOW.field0_0x0.d[0] * fVar27;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_11c = (EStorable__vtable *)(_YELLOW.field0_0x0.d[1] * fVar27);
      local_118 = (ENodeListNode *)(_YELLOW.field0_0x0.d[2] * fVar27);
      local_114 = (ENodeListNode *)(_YELLOW.field0_0x0.d[3] * fVar27);
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = local_120;
      (pEVar11->m_vColor).field0_0x0.d[1] = (float)local_11c;
      (pEVar11->m_vColor).field0_0x0.d[2] = (float)local_118;
      (pEVar11->m_vColor).field0_0x0.d[3] = (float)local_114;
                    /* end of inlined section */
      psVar28 = GetUiString__7EGlobalPCc(&_globals,pUVar26->pLower);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_120 = vPos.field0_0x0.d[0];
      local_11c = (EStorable__vtable *)vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar28,true,(EVec2 *)&local_120,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
                    /* end of inlined section */
    }
    else {
                    /* end of inlined section */
      fVar29 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      vWH.field0_0x0.d[1] = _BLACK.field0_0x0.d[1] * fVar29;
      fVar31 = _BLACK.field0_0x0.d[2] * fVar29;
      fVar27 = _BLACK.field0_0x0.d[3] * fVar29;
      vWH.field0_0x0.d[0] = _BLACK.field0_0x0.d[0] * fVar29;
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vWH.field0_0x0.d[0];
      (pEVar11->m_vColor).field0_0x0.d[1] = vWH.field0_0x0.d[1];
      (pEVar11->m_vColor).field0_0x0.d[2] = fVar31;
      (pEVar11->m_vColor).field0_0x0.d[3] = fVar27;
                    /* end of inlined section */
      psVar28 = GetUiString__7EGlobalPCc(&_globals,pUVar26->pLower);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0] + 0.005;
      vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1] + 0.005;
      local_120 = vWH.field0_0x0.d[0];
      local_11c = (EStorable__vtable *)vWH.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar28,true,(EVec2 *)&local_120,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
      pEVar11 = _10SimInfoWin_m_pFont;
                    /* end of inlined section */
      fVar27 = pThis->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      vWH.field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * fVar27;
      vWH.field0_0x0.d[1] = _WHITE.field0_0x0.d[1] * fVar27;
      fVar29 = _WHITE.field0_0x0.d[2] * fVar27;
      fVar27 = _WHITE.field0_0x0.d[3] * fVar27;
      (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = vWH.field0_0x0.d[0];
      (pEVar11->m_vColor).field0_0x0.d[1] = vWH.field0_0x0.d[1];
      (pEVar11->m_vColor).field0_0x0.d[2] = fVar29;
      (pEVar11->m_vColor).field0_0x0.d[3] = fVar27;
                    /* end of inlined section */
      psVar28 = GetUiString__7EGlobalPCc(&_globals,pUVar26->pLower);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
      vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar28,true,&vWH,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    }
                    /* end of inlined section */
    iVar15 = iVar15 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    pUVar26 = pUVar26 + 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0 =
         (EVec2__null___1__1)
         CONCAT44(vPos.field0_0x0.d[1] + szSalary.fChars._12_4_,
                  vPos.field0_0x0.d[0] + (float)szSalary.fChars._8_4_);
                    /* end of inlined section */
  } while (iVar15 < 6);
  fVar27 = 0.0;
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
  vPos.field0_0x0 = (EVec2__null___1__1)CONCAT44(szSalary.fChars._28_4_,szSalary.fChars._24_4_);
  puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | (ulong)vPos.field0_0x0 >> (7 - uVar5) * 8;
  iVar15 = (*(code *)pcVar3->__vtable->GetRecordDuration)
                     ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->GetRecording,10);
  if (pCareer != (Career *)0x0) {
    iVar19 = (*(code *)pcVar3->__vtable->GetRecordDuration)
                       ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->GetRecording,0x39)
    ;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pJVar25 = (pCareer->fJobs).pData;
    if (pJVar25 == (Job *)0x0) {
      ppsVar16 = (short **)0x0;
    }
    else {
      ppsVar16 = pJVar25[-1].fDescription.ptr;
    }
                    /* end of inlined section */
    pcVar23 = pcVar3->__vtable;
    if (iVar19 < (int)ppsVar16 + -1) {
      iVar19 = (*(code *)pcVar23->GetRecordDuration)
                         ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar23->GetRecording,0x39);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      iVar19 = iVar19 + 1;
      pJVar25 = (pCareer->fJobs).pData;
    }
    else {
      iVar19 = (*(code *)pcVar23->GetRecordDuration)
                         ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar23->GetRecording,0x39);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      pJVar25 = (pCareer->fJobs).pData;
    }
    pPromotionData = pJVar25 + iVar19;
  }
                    /* end of inlined section */
  if (pPromotionData == (Job *)0x0) {
    pCareer = (Career *)0x0;
  }
  if (pCareer != (Career *)0x0) {
    fVar27 = (float)pPromotionData->fMinReqs[1];
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
                    /* end of inlined section */
  DrawTwoColorLightBar__FP3ERCffG5EVec2if(prc,(float)iVar15,fVar27,&vWH,10,pThis->m_infoWinAlpha);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44(vPos.field0_0x0.d[1] + szSalary.fChars._12_4_,
                vPos.field0_0x0.d[0] + (float)szSalary.fChars._8_4_);
                    /* end of inlined section */
  iVar15 = (*(code *)pcVar3->__vtable->GetRecordDuration)
                     ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->GetRecording,0xc);
  if (pCareer != (Career *)0x0) {
    fVar27 = (float)pPromotionData->fMinReqs[2];
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
                    /* end of inlined section */
  DrawTwoColorLightBar__FP3ERCffG5EVec2if(prc,(float)iVar15,fVar27,&vWH,10,pThis->m_infoWinAlpha);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44(vPos.field0_0x0.d[1] + szSalary.fChars._12_4_,
                vPos.field0_0x0.d[0] + (float)szSalary.fChars._8_4_);
                    /* end of inlined section */
  iVar15 = (*(code *)pcVar3->__vtable->GetRecordDuration)
                     ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->GetRecording,0xf);
  if (pCareer != (Career *)0x0) {
    fVar27 = (float)pPromotionData->fMinReqs[6];
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
                    /* end of inlined section */
  DrawTwoColorLightBar__FP3ERCffG5EVec2if(prc,(float)iVar15,fVar27,&vWH,10,pThis->m_infoWinAlpha);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44(vPos.field0_0x0.d[1] + szSalary.fChars._12_4_,
                vPos.field0_0x0.d[0] + (float)szSalary.fChars._8_4_);
                    /* end of inlined section */
  iVar15 = (*(code *)pcVar3->__vtable->GetRecordDuration)
                     ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->GetRecording,0x11);
  if (pCareer != (Career *)0x0) {
    fVar27 = (float)pPromotionData->fMinReqs[4];
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
                    /* end of inlined section */
  DrawTwoColorLightBar__FP3ERCffG5EVec2if(prc,(float)iVar15,fVar27,&vWH,10,pThis->m_infoWinAlpha);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44(vPos.field0_0x0.d[1] + szSalary.fChars._12_4_,
                vPos.field0_0x0.d[0] + (float)szSalary.fChars._8_4_);
                    /* end of inlined section */
  iVar15 = (*(code *)pcVar3->__vtable->GetRecordDuration)
                     ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->GetRecording,0x12);
  if (pCareer != (Career *)0x0) {
    fVar27 = (float)pPromotionData->fMinReqs[5];
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
                    /* end of inlined section */
  DrawTwoColorLightBar__FP3ERCffG5EVec2if(prc,(float)iVar15,fVar27,&vWH,10,pThis->m_infoWinAlpha);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0 =
       (EVec2__null___1__1)
       CONCAT44(vPos.field0_0x0.d[1] + szSalary.fChars._12_4_,
                vPos.field0_0x0.d[0] + (float)szSalary.fChars._8_4_);
                    /* end of inlined section */
  iVar15 = (*(code *)pcVar3->__vtable->GetRecordDuration)
                     ((int)&pcVar3->_vb1187 + (int)*(short *)&pcVar3->__vtable->GetRecording,0xb);
  if (pCareer != (Career *)0x0) {
    fVar27 = (float)pPromotionData->fMinReqs[3];
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vWH.field0_0x0.d[0] = vPos.field0_0x0.d[0];
  vWH.field0_0x0.d[1] = vPos.field0_0x0.d[1];
                    /* end of inlined section */
  DrawTwoColorLightBar__FP3ERCffG5EVec2if(prc,(float)iVar15,fVar27,&vWH,10,pThis->m_infoWinAlpha);
  return;
}

void SimInfoWin::JobDrawInfo(ERC *prc) {
	EVec2 vTL;
	EVec2 vBR;
	EVec2 vS;
	EVec2 vPos;
	float flineinc;
	cXPerson *pPerson;
	Career *pCareer;
	float x;
	int maxJobIdx;
	int nextJobId;
	StringBufW255 string;
	float valueOff;
	int curjobIdx;
	Job *pCurJob;
	unsigned int n;
	unsigned int n;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	unsigned int n;
	ERFont *this;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	float x;
	ERFont *this;
	ERC *prc;
	
  short sVar1;
  cXPerson__150_1300 *pcVar2;
  Careers__vtable *pCVar3;
  Job *pJVar4;
  Careers__vtable **ppCVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ERFont *pEVar9;
  EVec2 *pEVar10;
  short **ppsVar11;
  short *psVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
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
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  EVec2 vTL;
  EVec2 vBR;
  EVec2 vS;
  EVec2 vPos;
  StackString2_256_ string;
  float local_140;
  float local_13c;
  float local_130;
  float local_12c;
  undefined4 local_120;
  undefined4 local_11c;
  float local_110;
  float local_10c;
  float local_100;
  float local_fc;
  float local_f0;
  float local_ec;
  Career *pCareer;
  int maxJobIdx;
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
  
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  pEVar10 = Get2PlayerOff__Fi(*(int *)&this->field_0x30);
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
  DrawBigBox__10EDialogWinP3ERCfffff(prc,0.35,0.32,1.1,0.67,this->m_infoWinAlpha);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetSize__6ERFontffb(_globals.m_pFont,15.5,1.0,true);
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar20 = (pEVar10->field0_0x0).d[0] + 0.395;
  vPos.field0_0x0.d[1] = (pEVar10->field0_0x0).d[1] + 0.34;
  vPos.field0_0x0.d[0] = fVar20;
                    /* end of inlined section */
  fVar18 = GetLineSpacing__6ERFontP7EWindow(_globals.m_pFont,(EWindow *)0x0);
  fVar18 = fVar18 * 5.0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar18;
  pcVar2 = _globals._pSelectedSims[*(int *)&this->field_0x30];
  pCVar3 = _5Globs_pCareers->__vtable;
  sVar1 = *(short *)&pCVar3->GetJobPerformance;
  ppCVar5 = &_5Globs_pCareers->__vtable;
  uVar16 = (*(code *)pcVar2->__vtable->GetRecordDuration)
                     ((int)&pcVar2->_vb1187 + (int)*(short *)&pcVar2->__vtable->GetRecording,0x38);
  lVar17 = (*(code *)pCVar3->GetJobGrade)((int)ppCVar5 + (int)sVar1,uVar16);
  pCareer = (Career *)lVar17;
  if (lVar17 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pJVar4 = (pCareer->fJobs).pData;
    if (pJVar4 == (Job *)0x0) {
      ppsVar11 = (short **)0x0;
    }
    else {
      ppsVar11 = pJVar4[-1].fDescription.ptr;
    }
                    /* end of inlined section */
    maxJobIdx = (int)ppsVar11 + -1;
    (*(code *)pcVar2->__vtable->GetRecordDuration)
              ((int)&pcVar2->_vb1187 + (int)*(short *)&pcVar2->__vtable->GetRecording,0x39);
                    /* inlined from ../MSrc/stringbuffer2.h */
    __13StringBuffer2PUsUi(&string.field0_0x0,string.fChars,0x100);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
    erase__13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    psVar12 = GetUiString__7EGlobalPCc(&_globals,"PERFORMANCE");
    append__13StringBuffer2PCUsi(&string.field0_0x0,psVar12,-1);
    appendChar__13StringBuffer2Us(&string.field0_0x0,0x3a);
    pEVar9 = _10SimInfoWin_m_pFont;
    uVar8 = _BLACK.field0_0x0.d[3];
    uVar7 = _BLACK.field0_0x0.d[2];
    uVar6 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar9->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar9->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar9->m_vColor).field0_0x0.d[3] = uVar8;
    psVar12 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_13c = 0.005;
    local_140 = 0.005;
    local_130 = vPos.field0_0x0.d[0] + 0.005;
    local_12c = vPos.field0_0x0.d[1] + 0.005;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar12,true,(EVec2 *)&local_130,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
    pEVar9 = _10SimInfoWin_m_pFont;
    uVar8 = _WHITE.field0_0x0.d[3];
    uVar7 = _WHITE.field0_0x0.d[2];
    uVar6 = _WHITE.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar9->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar9->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar9->m_vColor).field0_0x0.d[3] = uVar8;
    psVar12 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_140 = vPos.field0_0x0.d[0];
    local_13c = vPos.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar12,true,(EVec2 *)&local_140,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    erase__13StringBuffer2(&string.field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pCVar3 = _5Globs_pCareers->__vtable;
    sVar1 = *(short *)(pCVar3 + 1);
    ppCVar5 = &_5Globs_pCareers->__vtable;
    uVar16 = (*(code *)pcVar2->__vtable->GetRecordDuration)
                       ((int)&pcVar2->_vb1187 + (int)*(short *)&pcVar2->__vtable->GetRecording,0x3f)
    ;
    puVar13 = (undefined4 *)(*(code *)pCVar3[1].Careers)((int)ppCVar5 + (int)sVar1,uVar16);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    append__13StringBuffer2PCUsi(&string.field0_0x0,*(short **)*puVar13,-1);
    pEVar9 = _10SimInfoWin_m_pFont;
    uVar8 = _BLACK.field0_0x0.d[3];
    uVar7 = _BLACK.field0_0x0.d[2];
    uVar6 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar9->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar9->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar9->m_vColor).field0_0x0.d[3] = uVar8;
    psVar12 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_140 = vPos.field0_0x0.d[0] + 0.5;
    local_11c = 0;
    local_13c = vPos.field0_0x0.d[1];
    uVar19 = 0;
    local_120 = 0x3f000000;
    local_10c = 0.005;
    local_100 = local_140 + 0.005;
    local_110 = 0.005;
    local_fc = vPos.field0_0x0.d[1] + 0.005;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar12,true,(EVec2 *)&local_100,E_FAX_RIGHT,E_FAY_TOP,
               (EVec2 *)0x0);
    pEVar9 = _10SimInfoWin_m_pFont;
    uVar8 = _WHITE.field0_0x0.d[3];
    uVar7 = _WHITE.field0_0x0.d[2];
    uVar6 = _WHITE.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar9->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar9->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar9->m_vColor).field0_0x0.d[3] = uVar8;
    psVar12 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130 = vPos.field0_0x0.d[0] + 0.5;
    local_12c = vPos.field0_0x0.d[1];
    local_140 = 0.5;
    local_13c = (float)uVar19;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar12,true,(EVec2 *)&local_130,E_FAX_RIGHT,E_FAY_TOP,
               &vPos);
                    /* end of inlined section */
    vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar18;
    vPos.field0_0x0.d[0] = fVar20;
    erase__13StringBuffer2(&string.field0_0x0);
    psVar12 = GetUiString__7EGlobalPCc(&_globals,"START HOUR");
    append__13StringBuffer2PCUsi(&string.field0_0x0,psVar12,-1);
    appendChar__13StringBuffer2Us(&string.field0_0x0,0x3a);
    pEVar9 = _10SimInfoWin_m_pFont;
    uVar8 = _BLACK.field0_0x0.d[3];
    uVar7 = _BLACK.field0_0x0.d[2];
    uVar6 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar9->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar9->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar9->m_vColor).field0_0x0.d[3] = uVar8;
    psVar12 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_13c = 0.005;
    local_130 = vPos.field0_0x0.d[0] + 0.005;
    local_140 = 0.005;
    local_12c = vPos.field0_0x0.d[1] + 0.005;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar12,true,(EVec2 *)&local_130,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
    pEVar9 = _10SimInfoWin_m_pFont;
    uVar8 = _WHITE.field0_0x0.d[3];
    uVar7 = _WHITE.field0_0x0.d[2];
    uVar6 = _WHITE.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar9->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar9->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar9->m_vColor).field0_0x0.d[3] = uVar8;
    psVar12 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_140 = vPos.field0_0x0.d[0];
    local_13c = vPos.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar12,true,(EVec2 *)&local_140,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    erase__13StringBuffer2(&string.field0_0x0);
    iVar14 = (*(code *)pcVar2->__vtable->GetRecordDuration)
                       ((int)&pcVar2->_vb1187 + (int)*(short *)&pcVar2->__vtable->GetRecording,0x39)
    ;
    if (iVar14 < 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = maxJobIdx;
      if (iVar14 <= maxJobIdx) {
        iVar15 = iVar14;
      }
    }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pJVar4 = (pCareer->fJobs).pData;
                    /* end of inlined section */
    if (pJVar4[iVar15].fStartHour < 0xc) {
      psVar12 = GetUiString__7EGlobalPCc(&_globals,"am");
      iVar14 = pJVar4[iVar15].fStartHour;
    }
    else {
      psVar12 = GetUiString__7EGlobalPCc(&_globals,"pm");
      iVar14 = pJVar4[iVar15].fStartHour;
    }
    GetTimeString__FiiPCUsRt12StackString21Ui256(iVar14,0,psVar12,&string);
    pEVar9 = _10SimInfoWin_m_pFont;
    uVar8 = _BLACK.field0_0x0.d[3];
    uVar7 = _BLACK.field0_0x0.d[2];
    uVar6 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar9->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar9->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar9->m_vColor).field0_0x0.d[3] = uVar8;
    psVar12 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_140 = vPos.field0_0x0.d[0] - 0.5;
    local_12c = 0.0;
    local_13c = vPos.field0_0x0.d[1];
    uVar19 = 0;
    local_130 = 0.5;
    local_11c = 0x3ba3d70a;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0 = local_140 + 0.005;
    local_120 = 0x3ba3d70a;
    local_ec = vPos.field0_0x0.d[1] + 0.005;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar12,true,(EVec2 *)&local_f0,E_FAX_RIGHT,E_FAY_TOP,
               (EVec2 *)0x0);
    pEVar9 = _10SimInfoWin_m_pFont;
    uVar8 = _WHITE.field0_0x0.d[3];
    uVar7 = _WHITE.field0_0x0.d[2];
    uVar6 = _WHITE.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar9->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar9->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar9->m_vColor).field0_0x0.d[3] = uVar8;
    psVar12 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130 = vPos.field0_0x0.d[0] + 0.5;
    local_12c = vPos.field0_0x0.d[1];
    local_140 = 0.5;
    local_13c = (float)uVar19;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar12,true,(EVec2 *)&local_130,E_FAX_RIGHT,E_FAY_TOP,
               &vPos);
                    /* end of inlined section */
    vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar18;
    vPos.field0_0x0.d[0] = fVar20;
    erase__13StringBuffer2(&string.field0_0x0);
    psVar12 = GetUiString__7EGlobalPCc(&_globals,"END HOUR");
    append__13StringBuffer2PCUsi(&string.field0_0x0,psVar12,-1);
    appendChar__13StringBuffer2Us(&string.field0_0x0,0x3a);
    pEVar9 = _10SimInfoWin_m_pFont;
    uVar8 = _BLACK.field0_0x0.d[3];
    uVar7 = _BLACK.field0_0x0.d[2];
    uVar6 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar9->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar9->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar9->m_vColor).field0_0x0.d[3] = uVar8;
    psVar12 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_13c = 0.005;
    local_130 = vPos.field0_0x0.d[0] + 0.005;
    local_12c = vPos.field0_0x0.d[1] + 0.005;
    local_140 = 0.005;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar12,true,(EVec2 *)&local_130,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
    pEVar9 = _10SimInfoWin_m_pFont;
    uVar8 = _WHITE.field0_0x0.d[3];
    uVar7 = _WHITE.field0_0x0.d[2];
    uVar6 = _WHITE.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar9->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar9->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar9->m_vColor).field0_0x0.d[3] = uVar8;
    psVar12 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_140 = vPos.field0_0x0.d[0];
    local_13c = vPos.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar12,true,(EVec2 *)&local_140,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    erase__13StringBuffer2(&string.field0_0x0);
    if (pJVar4[iVar15].fEndHour < 0xc) {
      psVar12 = GetUiString__7EGlobalPCc(&_globals,"am");
      iVar14 = pJVar4[iVar15].fEndHour;
    }
    else {
      psVar12 = GetUiString__7EGlobalPCc(&_globals,"pm");
      iVar14 = pJVar4[iVar15].fEndHour;
    }
    GetTimeString__FiiPCUsRt12StackString21Ui256(iVar14,0,psVar12,&string);
    pEVar9 = _10SimInfoWin_m_pFont;
    uVar8 = _BLACK.field0_0x0.d[3];
    uVar7 = _BLACK.field0_0x0.d[2];
    uVar6 = _BLACK.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar9->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar9->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar9->m_vColor).field0_0x0.d[3] = uVar8;
    psVar12 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_13c = vPos.field0_0x0.d[1];
    local_11c = 0x3ba3d70a;
    local_140 = vPos.field0_0x0.d[0] - 0.5;
    local_12c = 0.0;
    local_110 = local_140 + 0.005;
    local_10c = vPos.field0_0x0.d[1] + 0.005;
    local_130 = 0.5;
    local_120 = 0x3ba3d70a;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar12,true,(EVec2 *)&local_110,E_FAX_RIGHT,E_FAY_TOP,
               (EVec2 *)0x0);
    pEVar9 = _10SimInfoWin_m_pFont;
    uVar8 = _WHITE.field0_0x0.d[3];
    uVar7 = _WHITE.field0_0x0.d[2];
    uVar6 = _WHITE.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* end of inlined section */
    (_10SimInfoWin_m_pFont->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar9->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar9->m_vColor).field0_0x0.d[2] = uVar7;
    (pEVar9->m_vColor).field0_0x0.d[3] = uVar8;
    psVar12 = c_str__C13StringBuffer2(&string.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130 = vPos.field0_0x0.d[0] + 0.5;
    local_13c = 0.0;
    local_12c = vPos.field0_0x0.d[1];
    local_140 = 0.5;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_10SimInfoWin_m_pFont,prc,psVar12,true,(EVec2 *)&local_130,E_FAX_RIGHT,E_FAY_TOP,
               &vPos);
  }
                    /* end of inlined section */
  return;
}

void __RelaDraw(SimInfoWin *pThis, ERC *prc) {
  Draw__13ERelationsWinP3ERC(&pThis->m_rltnsMenu,prc);
  return;
}

void __MoodUpdate(SimInfoWin *pThis) {
	int dir;
	
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = GetDirection__10SimInfoWin(pThis);
  if (iVar3 != 0) {
    iVar3 = pThis->m_curOpt + iVar3;
    pThis->m_curOpt = iVar3;
    puVar2 = _13EUIObjectNode_m_uiSfxNext;
    if (iVar3 < 0) {
      iVar3 = 7;
    }
    else if (7 < iVar3) {
      iVar3 = 0;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    bVar1 = _13EUIObjectNode_m_uiSfxNext != (undefined1 *)0x0;
    pThis->m_curOpt = iVar3;
    if (bVar1) {
      (*(code *)puVar2)();
    }
                    /* end of inlined section */
    *(undefined4 *)&pThis->m_bDrawInfo = 0;
  }
  return;
}

void __PersUpdate(SimInfoWin *pThis) {
	int dir;
	
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = GetDirection__10SimInfoWin(pThis);
  if (iVar3 != 0) {
    iVar3 = pThis->m_curOpt + iVar3;
    pThis->m_curOpt = iVar3;
    puVar2 = _13EUIObjectNode_m_uiSfxNext;
    if (iVar3 < 0) {
      iVar3 = 4;
    }
    else if (4 < iVar3) {
      iVar3 = 0;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    bVar1 = _13EUIObjectNode_m_uiSfxNext != (undefined1 *)0x0;
    pThis->m_curOpt = iVar3;
    if (bVar1) {
      (*(code *)puVar2)();
    }
                    /* end of inlined section */
    *(undefined4 *)&pThis->m_bDrawInfo = 0;
  }
  return;
}

void __Job_Update(SimInfoWin *pThis) {
	int dir;
	
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = GetDirection__10SimInfoWin(pThis);
  if (iVar3 != 0) {
    iVar3 = pThis->m_curOpt + iVar3;
    pThis->m_curOpt = iVar3;
    puVar2 = _13EUIObjectNode_m_uiSfxNext;
    if (iVar3 < 0) {
      iVar3 = 6;
    }
    else if (6 < iVar3) {
      iVar3 = 0;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    bVar1 = _13EUIObjectNode_m_uiSfxNext != (undefined1 *)0x0;
    pThis->m_curOpt = iVar3;
    if (bVar1) {
      (*(code *)puVar2)();
    }
                    /* end of inlined section */
    *(undefined4 *)&pThis->m_bDrawInfo = 0;
  }
  return;
}

void __RelaUpdate(SimInfoWin *pThis) {
  Update__13ERelationsWin(&pThis->m_rltnsMenu);
  return;
}

SimInfoWin* SimInfoWin::SimInfoWin(int __in_chrg, int playerid) {
	SimInfoWin *this;
	EUIObjectNode *this;
	
  short sVar1;
  undefined6 uVar2;
  undefined6 uVar3;
  undefined6 uVar4;
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
    this->_vb2121 = (Panelstateman *)&this->field_0x138;
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
    *(__vtbl_ptr_type **)&this->field_0x13c = _vt_13Panelstateman;
    *(undefined4 *)&this->field_0x138 = 0;
  }
                    /* end of inlined section */
  __13EUIObjectNode((EUIObjectNode *)this);
  this->_vb2121->__vtable = (Panelstateman__vtable *)_vt_10SimInfoWin_13Panelstateman;
  uVar4 = _vt_10SimInfoWin_13Panelstateman[3]._2_6_;
  uVar3 = _vt_10SimInfoWin_13Panelstateman[2]._2_6_;
  uVar2 = _vt_10SimInfoWin_13Panelstateman[1]._2_6_;
  if (__in_chrg == 0) {
    local_50 = _vt_10SimInfoWin_13Panelstateman[4];
    local_70 = _vt_10SimInfoWin_13Panelstateman[0];
    this->_vb2121->__vtable = (Panelstateman__vtable *)&local_70;
    sVar1 = (short)this - ((short)this->_vb2121 + -0x138);
    local_68 = CONCAT62(uVar2,_vt_10SimInfoWin_13Panelstateman[1].__delta + sVar1);
    local_60 = CONCAT62(uVar3,_vt_10SimInfoWin_13Panelstateman[2].__delta + sVar1);
    local_58 = CONCAT62(uVar4,_vt_10SimInfoWin_13Panelstateman[3].__delta + sVar1);
  }
  *(__vtbl_ptr_type **)&this->field_0x38 = _vt_10SimInfoWin;
  __13ERelationsWin(&this->m_rltnsMenu);
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
  this->m_infoInTime = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  this->m_infointroAnimDur = 0.25;
  this->m_infoDelayDur = 2.0;
  this->m_infoWinAlphaTime = this->m_infoInTime;
  this->m_introAnimDur = 0.25;
  this->m_infoWinAlpha = this->m_infoInTime;
  *(int *)&this->field_0x30 = playerid;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  this->m_hoverTime = 0.0;
  this->m_introTime = 0.0;
                    /* end of inlined section */
  this->m_curwindow = 0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (**(code **)(*(int *)&this->field_0x38 + 0x44))
            ((int)&(this->field0_0x0).m_state + (int)*(short *)(*(int *)&this->field_0x38 + 0x40),2,
             0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  *(uint *)&this->field_0x10 = *(uint *)&this->field_0x10 & 0xfffffffd;
  ResetState__10SimInfoWin(this);
  return this;
}

void SimInfoWin::~SimInfoWin(int __in_chrg) {
	Panelstateman *this;
	void *pAddress;
	void *pAddress;
	
  short sVar1;
  undefined6 uVar2;
  undefined6 uVar3;
  undefined6 uVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  __vtbl_ptr_type local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  __vtbl_ptr_type local_40;
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
  *(__vtbl_ptr_type **)&this->field_0x38 = _vt_10SimInfoWin;
  this->_vb2121->__vtable = (Panelstateman__vtable *)_vt_10SimInfoWin_13Panelstateman;
  uVar4 = _vt_10SimInfoWin_13Panelstateman[3]._2_6_;
  uVar3 = _vt_10SimInfoWin_13Panelstateman[2]._2_6_;
  uVar2 = _vt_10SimInfoWin_13Panelstateman[1]._2_6_;
  if (__in_chrg == 0) {
    local_40 = _vt_10SimInfoWin_13Panelstateman[4];
    local_60 = _vt_10SimInfoWin_13Panelstateman[0];
    this->_vb2121->__vtable = (Panelstateman__vtable *)&local_60;
    sVar1 = (short)this - ((short)this->_vb2121 + -0x138);
    local_58 = CONCAT62(uVar2,_vt_10SimInfoWin_13Panelstateman[1].__delta + sVar1);
    local_50 = CONCAT62(uVar3,_vt_10SimInfoWin_13Panelstateman[2].__delta + sVar1);
    local_48 = CONCAT62(uVar4,_vt_10SimInfoWin_13Panelstateman[3].__delta + sVar1);
  }
  ___13ERelationsWin(&this->m_rltnsMenu,2);
  ___13EUIObjectNode((EUIObjectNode *)this,0);
  if ((__in_chrg & 2U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
    this->_vb2121->__vtable = (Panelstateman__vtable *)_vt_13Panelstateman;
  }
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void SimInfoWin::StartTextSlide(ESlideTextBox &box, bool in) {
	EVec2 *this;
	EVec2 *this;
	EVec2 *this;
	EVec3 temp;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  EVec2__null___1__1 EVar5;
  bool bVar6;
  ulong uVar7;
  EVec3 temp;
  
  *(undefined4 *)box = 0;
  box->m_clock = 0.0;
  if (*(int *)&this->field_0x30 == 0) {
    bVar6 = IsTwoPlayer__7EGlobal(&_globals);
    uVar7 = (ulong)(int)&box->m_vStart;
    if (bVar6) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      (box->m_vStart).field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      (box->m_vStart).field0_0x0.d[1] = 0.32;
      (box->m_vStop).field0_0x0.d[0] = 0.25;
                    /* end of inlined section */
      (box->m_vStop).field0_0x0.d[1] = 0.32;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      (box->m_vStart).field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      (box->m_vStart).field0_0x0.d[1] = 0.66;
      (box->m_vStop).field0_0x0.d[0] = 0.25;
                    /* end of inlined section */
      (box->m_vStop).field0_0x0.d[1] = 0.66;
    }
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    uVar7 = (ulong)(int)&box->m_vStart;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    (box->m_vStart).field0_0x0.d[0] = 1.0;
    (box->m_vStart).field0_0x0.d[1] = 0.58;
    (box->m_vStop).field0_0x0.d[0] = 0.75;
    (box->m_vStop).field0_0x0.d[1] = 0.58;
  }
  puVar1 = (undefined *)((int)&(box->m_vStart).field0_0x0 + 7);
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&box->m_vStart & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&box->m_vStart - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(box->m_vCur).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&box->m_vCur & 7;
  puVar4 = (ulong *)((int)&box->m_vCur - uVar2);
  *puVar4 = uVar7 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  if (!in) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    EVar5 = (box->m_vStart).field0_0x0;
    puVar1 = (undefined *)((int)&(box->m_vStop).field0_0x0 + 7);
                    /* end of inlined section */
    uVar2 = (uint)puVar1 & 7;
    uVar3 = (uint)&box->m_vStop & 7;
    uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&box->m_vStop - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&(box->m_vStart).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
    uVar2 = (uint)&box->m_vStart & 7;
    puVar4 = (ulong *)((int)&box->m_vStart - uVar2);
    *puVar4 = uVar7 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    puVar1 = (undefined *)((int)&(box->m_vStop).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar2);
    *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)EVar5 >> (7 - uVar2) * 8;
    uVar2 = (uint)&box->m_vStop & 7;
    puVar4 = (ulong *)((int)&box->m_vStop - uVar2);
    *puVar4 = (long)EVar5 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  }
  return;
}

void SimInfoWin::ResetState() {
	SimInfoWin *this;
	
  this->m_infointroAnimDur = 0.25;
  this->m_infoDelayDur = 2.0;
  this->m_simnametimeout = 2.5;
  *(undefined4 *)&this->m_bDrawInfo = 0;
  this->m_pressed = 0;
  this->m_curOpt = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
  this->m_infoInTime = 0.0;
  this->m_hoverTime = 0.0;
  this->m_introTime = 0.0;
                    /* end of inlined section */
  this->m_introAnimDur = 0.25;
  StartTextSlide__10SimInfoWinR13ESlideTextBoxb
            (this,_10SimInfoWin_m_nameBoxs + *(int *)&this->field_0x30,true);
  return;
}

void SimInfoWin::Init() {
  if (__10SimInfoWin_m_bInit == 0) {
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
    __10SimInfoWin_m_bInit = 1;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
    _10SimInfoWin_m_pFont =
         (ERFont *)
         AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_textarrowl =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xe3e852f9,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_textarrowr =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x19e76f9a,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pDpadInverse =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc9ff8b99,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pMenubevel_T_L =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxBGBL =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xe6bf8446,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxBGBR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x1cb0b925,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxBGTL =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xfa273191,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxBGTR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x280cf2,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxBGML =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x61279889,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxBGMR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x9b28a5ea,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxBGTC =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6a982c00,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxBGBC =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x760099d7,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxHBL =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xb6ee6492,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxHBR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x4ce159f1,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxHTL =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xaa76d145,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxHTR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x5079ec26,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxHML =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3176785d,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxHMR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xcb79453e,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxHTC =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3ac9ccd4,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextBoxHBC =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x26517903,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextLineBGL =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xca6e38f,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextLineBGR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf6a9deec,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextLineBGC =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x9c19fe1e,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextPopOutC =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc5365605,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextPopOutCH =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6005691d,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextPopOutL =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x55894b94,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextPopOutLH =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf0ba748c,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextPopOutR =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xaf8676f7,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _10SimInfoWin_m_pTextPopOutRH =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xab549ef,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _14ERelationsIcon_m_pHeart =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xb8bbec29,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    _14ERelationsIcon_m_pSmileyFace =
         (ERShader *)
         AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x78a8f613,(EFile *)0x0,0);
                    /* end of inlined section */
    _10SimInfoWin_m_DrawTable[0] = __MoodDraw__FP10SimInfoWinP3ERC;
    _10SimInfoWin_m_DrawTable[3] = __RelaDraw__FP10SimInfoWinP3ERC;
    _10SimInfoWin_m_UpdateTable[0] = __MoodUpdate__FP10SimInfoWin;
    _10SimInfoWin_m_UpdateTable[3] = __RelaUpdate__FP10SimInfoWin;
    _10SimInfoWin_m_DrawTable[1] = __PersDraw__FP10SimInfoWinP3ERC;
    _10SimInfoWin_m_DrawTable[2] = __Job_Draw__FP10SimInfoWinP3ERC;
    _10SimInfoWin_m_UpdateTable[1] = __PersUpdate__FP10SimInfoWin;
    _10SimInfoWin_m_UpdateTable[2] = __Job_Update__FP10SimInfoWin;
  }
  return;
}

void SimInfoWin::CleanUp() {
  if (__10SimInfoWin_m_bInit != 0) {
    __10SimInfoWin_m_bInit = 0;
    DelRef__9EResource(&_10SimInfoWin_m_pFont->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_textarrowl->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_textarrowr->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pDpadInverse->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pMenubevel_T_L->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxBGBL->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxBGBR->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxBGTL->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxBGTR->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxBGML->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxBGMR->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxBGTC->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxBGBC->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxHBL->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxHBR->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxHTL->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxHTR->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxHML->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxHMR->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxHTC->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextBoxHBC->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextLineBGL->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextLineBGR->field0_0x0);
    DelRef__9EResource(&_10SimInfoWin_m_pTextLineBGC->field0_0x0);
    _10SimInfoWin_m_pFont = (ERFont *)0x0;
    _10SimInfoWin_m_textarrowl = (ERShader *)0x0;
    _10SimInfoWin_m_textarrowr = (ERShader *)0x0;
    _10SimInfoWin_m_pDpadInverse = (ERShader *)0x0;
    _10SimInfoWin_m_pMenubevel_T_L = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxBGBL = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxBGBR = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxBGTL = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxBGTR = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxBGML = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxBGMR = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxBGTC = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxBGBC = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxHBL = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxHBR = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxHTL = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxHTR = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxHML = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxHMR = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxHTC = (ERShader *)0x0;
    _10SimInfoWin_m_pTextBoxHBC = (ERShader *)0x0;
    _10SimInfoWin_m_pTextLineBGL = (ERShader *)0x0;
    _10SimInfoWin_m_pTextLineBGR = (ERShader *)0x0;
    _10SimInfoWin_m_pTextLineBGC = (ERShader *)0x0;
    while (_14ERelationsIcon_m_pHeart != (ERShader *)0x0) {
      DelRef__9EResource(&_14ERelationsIcon_m_pHeart->field0_0x0);
      _14ERelationsIcon_m_pHeart = (ERShader *)0x0;
    }
    while (_14ERelationsIcon_m_pSmileyFace != (ERShader *)0x0) {
      DelRef__9EResource(&_14ERelationsIcon_m_pSmileyFace->field0_0x0);
      _14ERelationsIcon_m_pSmileyFace = (ERShader *)0x0;
    }
    while (_10SimInfoWin_m_pTextPopOutC != (ERShader *)0x0) {
      DelRef__9EResource(&_10SimInfoWin_m_pTextPopOutC->field0_0x0);
      _10SimInfoWin_m_pTextPopOutC = (ERShader *)0x0;
    }
    while (_10SimInfoWin_m_pTextPopOutCH != (ERShader *)0x0) {
      DelRef__9EResource(&_10SimInfoWin_m_pTextPopOutCH->field0_0x0);
      _10SimInfoWin_m_pTextPopOutCH = (ERShader *)0x0;
    }
    while (_10SimInfoWin_m_pTextPopOutL != (ERShader *)0x0) {
      DelRef__9EResource(&_10SimInfoWin_m_pTextPopOutL->field0_0x0);
      _10SimInfoWin_m_pTextPopOutL = (ERShader *)0x0;
    }
    while (_10SimInfoWin_m_pTextPopOutLH != (ERShader *)0x0) {
      DelRef__9EResource(&_10SimInfoWin_m_pTextPopOutLH->field0_0x0);
      _10SimInfoWin_m_pTextPopOutLH = (ERShader *)0x0;
    }
    while (_10SimInfoWin_m_pTextPopOutR != (ERShader *)0x0) {
      DelRef__9EResource(&_10SimInfoWin_m_pTextPopOutR->field0_0x0);
      _10SimInfoWin_m_pTextPopOutR = (ERShader *)0x0;
    }
    while (_10SimInfoWin_m_pTextPopOutRH != (ERShader *)0x0) {
      DelRef__9EResource(&_10SimInfoWin_m_pTextPopOutRH->field0_0x0);
      _10SimInfoWin_m_pTextPopOutRH = (ERShader *)0x0;
    }
  }
  return;
}

void SimInfoWin::GetBut() {
  EUIVirtualCtrl__vtable *pEVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar5 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                     *(undefined4 *)&this->field_0x30,0x40);
  if (lVar5 == 0) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar5 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       *(undefined4 *)&this->field_0x30,0x4000);
    if (lVar5 != 0) {
      ResetState__10SimInfoWin(this);
      iVar2 = *(int *)(*(int *)&this->field_0x8 + 0x38);
      (**(code **)(iVar2 + 0x3c))
                (*(int *)&this->field_0x8 + (int)*(short *)(iVar2 + 0x38),this,0x10);
    }
  }
  else {
    uVar3 = *(uint *)&this->m_bDrawInfo ^ 1;
    *(uint *)&this->m_bDrawInfo = uVar3;
    pcVar4 = (code *)_13EUIObjectNode_m_uiSfxBack;
    if (uVar3 != 0) {
      pcVar4 = (code *)_13EUIObjectNode_m_uiSfxSelect;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    }
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)();
                    /* end of inlined section */
    }
  }
  return;
}

int SimInfoWin::GetDirection() {
	int curstick;
	float stickval;
	static int laststick = 0;
	static float frepDelay = 0.f;
	static float fInputDelay = 0.f;
	static bool doIntalDelay = false;
	static bool doRedDelay = false;
	float lastdelaytime;
	
  int iVar1;
  float fVar2;
  
  iVar1 = 0;
  fVar2 = GetStick__11EControllerii(_ctrlPads[*(int *)&this->field_0x30],1,0);
  if ((fVar2 != 0.0) && (iVar1 = 1, fVar2 < 0.0)) {
    iVar1 = -1;
  }
  if (laststick_3696 != iVar1) {
    frepDelay_3697 = 0.0;
    doIntalDelay_3699 = 1;
    fInputDelay_3698 = 0.0;
    if (iVar1 != 0) {
      laststick_3696 = iVar1;
      frepDelay_3697 = 0.0;
      fInputDelay_3698 = 0.0;
      doIntalDelay_3699 = 1;
      return iVar1;
    }
  }
  if (doIntalDelay_3699 == 0) {
    if (doRedDelay_3700 == 0) {
      laststick_3696 = iVar1;
      return 0;
    }
    frepDelay_3697 = frepDelay_3697 + _dt;
    if (0.25 <= frepDelay_3697) {
      laststick_3696 = iVar1;
      frepDelay_3697 = 0.0;
      return iVar1;
    }
  }
  else {
    fVar2 = fInputDelay_3698 + _dt;
    frepDelay_3697 = 0.0;
    doRedDelay_3700 = 0;
    if (0.25 <= fInputDelay_3698) {
      laststick_3696 = iVar1;
      frepDelay_3697 = 0.0;
      fInputDelay_3698 = fVar2;
      doRedDelay_3700 = 0;
      return 0;
    }
    fInputDelay_3698 = fVar2;
    if (0.25 <= fVar2) {
      doIntalDelay_3699 = 0;
      doRedDelay_3700 = 1;
    }
  }
  laststick_3696 = iVar1;
  return 0;
}

void SimInfoWin::StartIntro() {
  return;
}

void SimInfoWin::UpdateIntroAnim() {
  return;
}

void SimInfoWin::UpdateInfoIntroAnim() {
  return;
}

void SimInfoWin::StartInfoIntro() {
  return;
}

void SimInfoWin::Update() {
	bool kill;
	EPanel *this;
	EPanel *this;
	EUIObjectNode *this;
	float mu;
	float u;
	bool lessthanhalf;
	bool lessthan2;
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  bool bVar1;
  int iVar2;
  uint uVar3;
  int mask;
  float fVar4;
  float fVar5;
  
  bVar1 = false;
  iVar2 = this->m_curwindow;
  this->m_infointroAnimDur = 0.25;
  this->m_infoDelayDur = 2.0;
  this->m_introAnimDur = 0.25;
  if (iVar2 == 1) {
    iVar2 = *(int *)&this->field_0x30;
    mask = 0x4000;
LAB_001d0bc8:
    uVar3 = GetDownButtons__11EControlleri(_ctrlPads[iVar2],mask);
    bVar1 = uVar3 == 0;
  }
  else {
    if (1 < iVar2) {
      if (iVar2 == 2) {
        iVar2 = *(int *)&this->field_0x30;
        mask = 0x8000;
      }
      else {
        if (iVar2 != 3) goto LAB_001d0bdc;
        iVar2 = *(int *)&this->field_0x30;
        mask = 0x2000;
      }
      goto LAB_001d0bc8;
    }
    if (iVar2 == 0) {
      iVar2 = *(int *)&this->field_0x30;
      mask = 0x1000;
      goto LAB_001d0bc8;
    }
  }
LAB_001d0bdc:
  if (!bVar1) {
    iVar2 = *(int *)&this->field_0x10;
    goto LAB_001d0c5c;
  }
  SetWindow__10SimInfoWinib(this,this->m_curwindow,false);
  ResetState__10SimInfoWin(this);
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
                    /* end of inlined section */
  if ((*(int *)&this->field_0x30 == 0) &&
     (iVar2 = *(int *)&this->field_0x8, *(int *)(iVar2 + 0x1c0) == 3)) {
LAB_001d0c3c:
    (**(code **)(*(int *)(iVar2 + 0x38) + 0x3c))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x38) + 0x38),this,0x10);
  }
  else {
    if (*(int *)&this->field_0x30 != 1) {
      iVar2 = *(int *)&this->field_0x10;
      goto LAB_001d0c5c;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
    iVar2 = *(int *)&this->field_0x8;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
                    /* end of inlined section */
    if (*(int *)(iVar2 + 0x1c0) == 4) goto LAB_001d0c3c;
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  iVar2 = *(int *)&this->field_0x10;
LAB_001d0c5c:
                    /* end of inlined section */
  if ((iVar2 >> 1 & 1U) == 0) {
    fVar4 = 0.0;
    this->m_infoWinAlphaTime = 0.0;
  }
  else {
    fVar5 = this->m_infoWinAlphaTime + _dt;
    fVar4 = fVar5 / _infoWinAlphaFadeDur_;
    this->m_infoWinAlphaTime = fVar5;
    if (0.0 <= fVar4) {
      fVar5 = (float)((int)fVar4 * (uint)(fVar4 < 1.0) | (uint)(fVar4 >= 1.0) * 0x3f800000);
    }
    else {
      fVar5 = 0.0;
    }
                    /* end of inlined section */
    fVar4 = 0.0;
    this->m_infoWinAlpha = fVar5;
    if (0.0 <= fVar5) {
      fVar4 = (float)((int)fVar5 * (uint)(fVar5 < 1.0) | (uint)(fVar5 >= 1.0) * 0x3f800000);
    }
  }
  this->m_infoWinAlpha = fVar4;
  fVar4 = this->m_simnametimeout;
  if (fVar4 < 2.5) {
    fVar5 = fVar4 + _dt;
    this->m_simnametimeout = fVar5;
    if ((1.25 <= fVar5) && (fVar4 < 1.25)) {
      StartTextSlide__10SimInfoWinR13ESlideTextBoxb
                (this,_10SimInfoWin_m_playerNameBoxs + *(int *)&this->field_0x30,false);
    }
    if ((2.0 <= this->m_simnametimeout) && (fVar4 < 2.0)) {
      StartTextSlide__10SimInfoWinR13ESlideTextBoxb
                (this,_10SimInfoWin_m_nameBoxs + *(int *)&this->field_0x30,true);
    }
    *(undefined4 *)(_10SimInfoWin_m_nameBoxs + *(int *)&this->field_0x30) = 1;
    *(undefined4 *)(_10SimInfoWin_m_playerNameBoxs + *(int *)&this->field_0x30) = 1;
    Update__13ESlideTextBox(_10SimInfoWin_m_playerNameBoxs + *(int *)&this->field_0x30);
    if (this->m_curwindow == 3) {
      (*(code *)_10SimInfoWin_m_UpdateTable[3])(this);
    }
  }
  else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((*(uint *)&this->field_0x10 & 4) == 0) ||
       (((int)*(uint *)&this->field_0x10 >> 1 & 1U) == 0)) {
      *(undefined4 *)(_10SimInfoWin_m_playerNameBoxs + *(int *)&this->field_0x30) = 0;
      *(undefined4 *)(_10SimInfoWin_m_nameBoxs + *(int *)&this->field_0x30) = 0;
    }
    else {
      this->m_simnametimeout = 2.5;
      *(undefined4 *)(_10SimInfoWin_m_playerNameBoxs + *(int *)&this->field_0x30) = 0;
      *(undefined4 *)(_10SimInfoWin_m_nameBoxs + *(int *)&this->field_0x30) = 1;
      uVar3 = GetPressed__11EControlleri(_ctrlPads[*(int *)&this->field_0x30],0x10);
      if (uVar3 == 0) {
        iVar2 = this->m_curwindow;
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        if (_13EUIObjectNode_m_uiSfxBack == (undefined1 *)0x0) {
          *(undefined4 *)&this->m_bDrawInfo = 0;
        }
        else {
          (*(code *)_13EUIObjectNode_m_uiSfxBack)();
                    /* end of inlined section */
          *(undefined4 *)&this->m_bDrawInfo = 0;
        }
        iVar2 = this->m_curwindow;
      }
      (*(code *)_10SimInfoWin_m_UpdateTable[iVar2])(this);
      GetBut__10SimInfoWin(this);
      Update__13ESlideTextBox(_10SimInfoWin_m_nameBoxs + *(int *)&this->field_0x30);
    }
  }
  return;
}

void SimInfoWin::SetWindow(s32 which, bool on) {
	EUIObjectNode *this;
	bool on;
	
  uint uVar1;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (**(code **)(*(int *)&this->field_0x38 + 0x44))
            ((int)&(this->field0_0x0).m_state + (int)*(short *)(*(int *)&this->field_0x38 + 0x40),2)
  ;
  if (on) {
    uVar1 = *(uint *)&this->field_0x10 | 2;
  }
  else {
    uVar1 = *(uint *)&this->field_0x10 & 0xfffffffd;
  }
                    /* end of inlined section */
  *(uint *)&this->field_0x10 = uVar1;
  if (on) {
    this->m_infoWinAlphaTime = -0.01;
    if (which == 2) {
      this->m_curOpt = 6;
    }
    else {
      this->m_curOpt = 0;
    }
  }
  else {
    this->m_infoWinAlphaTime = 0.0;
  }
  this->m_curwindow = which;
  if (on) {
    if (which == 3) {
      Init__13ERelationsWinP8cXPerson
                (&this->m_rltnsMenu,
                 (cXPerson__78_985 *)_globals._pSelectedSims[*(int *)&this->field_0x30]);
    }
  }
  else if (which == 3) {
    Cleanup__13ERelationsWin(&this->m_rltnsMenu);
  }
  return;
}

void SimInfoWin::SetState(Panelstate state) {
  this->_vb2121->m_state = state;
  switch(state) {
  default:
    SetWindow__10SimInfoWinib(this,this->m_curwindow,false);
    ResetState__10SimInfoWin(this);
    break;
  case LIVE_INFOUP_1_STATE:
  case LIVE_INFOUP_2_STATE:
    break;
  }
  return;
}

void SimInfoWin::Draw(ERC *prc) {
	int playerJust;
	cXPerson *pPerson;
	c16 *playerName;
	EUIObjectNode *this;
	
  int iVar1;
  cXObject__150_1187 *pcVar2;
  cXObject__150_1187__vtable *pcVar3;
  bool bVar4;
  ObjSelector *this_00;
  BString2 *this_01;
  short *psVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
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
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  if ((*(int *)&this->field_0x30 != 1) || (bVar4 = IsTwoPlayer__7EGlobal(&_globals), bVar4)) {
    iVar1 = *(int *)&this->field_0x30;
    psVar5 = (short *)0x0;
    if (_globals._pSelectedSims[iVar1] != (cXPerson__150_1300 *)0x0) {
      pcVar2 = _globals._pSelectedSims[iVar1]->_vb1187;
      pcVar3 = pcVar2->__vtable;
      this_00 = (ObjSelector *)
                (*(code *)pcVar3[1].SetLevel)
                          ((int)&pcVar2->_vb1121 + (int)*(short *)&pcVar3[1].GetTreeID);
      this_01 = GetUserName__11ObjSelector(this_00);
      psVar5 = c_str__C8BString2(this_01);
    }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_70 = 0x3f800000;
    local_64 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_68 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_6c = 0x3f800000;
                    /* end of inlined section */
    Draw__13ESlideTextBoxP3ERCPCUsiRC5EVec4
              (_10SimInfoWin_m_playerNameBoxs + *(int *)&this->field_0x30,prc,psVar5,
               (uint)(iVar1 == 0),(EVec4 *)&local_70);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((*(int *)&this->field_0x10 >> 1 & 1U) != 0) &&
       (_globals._pSelectedSims[*(int *)&this->field_0x30] != (cXPerson__150_1300 *)0x0)) {
      bVar4 = IsTwoPlayer__7EGlobal(&_globals);
      if ((!bVar4) && (*(int *)&this->m_bDrawInfo != 0)) {
        DrawInfo__10SimInfoWinP3ERC(this,prc);
      }
      DrawBackGround__10SimInfoWinP3ERC(this,prc);
      (*(code *)_10SimInfoWin_m_DrawTable[this->m_curwindow])(this,prc);
      if (*(int *)(_10SimInfoWin_m_playerNameBoxs + *(int *)&this->field_0x30) == 0) {
        psVar5 = GetUiString__7EGlobalPCc(&_globals,_SIW_lableNameTable[this->m_curwindow]);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_70 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_64 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_68 = 0x3f800000;
                    /* end of inlined section */
        local_6c = 0x3f800000;
        Draw__13ESlideTextBoxP3ERCPCUsiRC5EVec4
                  (_10SimInfoWin_m_nameBoxs + *(int *)&this->field_0x30,prc,psVar5,
                   (uint)(iVar1 == 0),(EVec4 *)&local_70);
      }
    }
  }
  return;
}

void SimInfoWin::DrawInfo(ERC *prc) {
	EVec2 vTL;
	EVec2 vBR;
	EVec2 vS;
	EVec2 vPos;
	float x;
	c16 *pHelpText;
	c16 *pPos;
	float fStartx;
	float flineinc;
	float fClipW;
	bool gotline;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	float y;
	ERFont *this;
	ERC *prc;
	float y;
	ERFont *this;
	ERC *prc;
	int i;
	c16 *pBuffPos;
	int cPos0;
	int nCharsInWord;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	float flineinc;
	float fClipW;
	char *lookupstr;
	c16 *pPos;
	bool gotline;
	int i;
	c16 *pBuffPos;
	int cPos0;
	int nCharsInWord;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  short sVar1;
  EUIObjectNode *pEVar2;
  bool bVar3;
  ERFont *pEVar4;
  ERFont *pEVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  EVec2 *pEVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int iVar15;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar16;
  float fVar17;
  float fVar18;
  EStorable__vtable *pEVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  EVec2 vTL;
  EVec2 vBR;
  EVec2 vS;
  EVec2 vPos;
  undefined local_110 [20];
  EStorable__vtable *local_fc;
  EStorable__vtable *local_f0;
  char *local_ec;
  EStorable__vtable *local_e0;
  char *local_dc;
  EHashTableNode **local_d0;
  EFontSize *local_c0;
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
  
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (EFontSize *)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  pEVar9 = Get2PlayerOff__Fi(*(int *)&this->field_0x30);
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
  fVar20 = _13EUIObjectNode_SAFE_RIGHT;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
  DrawBigBox__10EDialogWinP3ERCfffff(prc,0.35,0.32,1.1,0.67,this->m_infoWinAlpha);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetSize__6ERFontffb(_globals.m_pFont,15.5,1.0,true);
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_110._16_4_ = (EStorable__vtable *)0x3ca3d70a;
  local_fc = (EStorable__vtable *)0x3ca3d70a;
  local_110._0_4_ = (EStorable__vtable *)0x3ebd70a4;
  local_110._4_4_ = (EStorable__vtable *)0x3eae147b;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar22 = _vTextOff.field0_0x0.d[0] + 0.37 + (pEVar9->field0_0x0).d[0];
  vPos.field0_0x0.d[1] = _vTextOff.field0_0x0.d[1] + 0.34 + (pEVar9->field0_0x0).d[1];
                    /* end of inlined section */
  vPos.field0_0x0.d[0] = fVar22;
  if (this->m_curwindow == 3) {
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
    pEVar2 = (this->m_rltnsMenu).field0_0x0.field0_0x0.m_pCurOpt;
                    /* end of inlined section */
    if (pEVar2 != (EUIObjectNode *)0x0) {
      if (pEVar2[1].m_pos.field0_0x0.d[1] == 0.0) {
        if (pEVar2[1].m_pos.field0_0x0.d[2] == 0.0) {
          if ((int)pEVar2[1].m_pos.field0_0x0.d[0] < 1) {
            psVar10 = GetHelpString__7EGlobalPCc
                                (&_globals,_10SimInfoWin___InfoTextLookup[3]->pUpper);
          }
          else {
            psVar10 = GetHelpString__7EGlobalPCc
                                (&_globals,_10SimInfoWin___InfoTextLookup[3][1].pUpper);
          }
        }
        else {
          psVar10 = GetHelpString__7EGlobalPCc
                              (&_globals,_10SimInfoWin___InfoTextLookup[3][2].pUpper);
        }
      }
      else {
        psVar10 = GetHelpString__7EGlobalPCc(&_globals,_10SimInfoWin___InfoTextLookup[3][3].pUpper);
      }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      uVar21 = vPos.field0_0x0.d[0];
                    /* end of inlined section */
      fVar16 = GetLineSpacing__6ERFontP7EWindow(_globals.m_pFont,(EWindow *)0x0);
      pEVar19 = (EStorable__vtable *)0x3ba3d70a;
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
      psVar11 = c_str__C8BString2((BString2 *)&pEVar2[1].m_flags);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
      psVar12 = c_str__C8BString2((BString2 *)&pEVar2[1].m_id);
      pEVar5 = _10SimInfoWin_m_pFont;
      pEVar4 = _globals.m_pFont;
                    /* end of inlined section */
      fVar17 = this->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      fVar22 = _BLACK.field0_0x0.d[1] * fVar17;
      local_110._8_4_ = (EResourceManager *)(_BLACK.field0_0x0.d[2] * fVar17);
      local_110._12_4_ = _BLACK.field0_0x0.d[3] * fVar17;
      ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = _BLACK.field0_0x0.d[0] * fVar17;
      (pEVar4->m_vColor).field0_0x0.d[1] = fVar22;
      (pEVar4->m_vColor).field0_0x0.d[2] = (float)local_110._8_4_;
      (pEVar4->m_vColor).field0_0x0.d[3] = local_110._12_4_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_110._4_4_ = (EStorable__vtable *)(vPos.field0_0x0.d[1] + (float)pEVar19);
      local_110._0_4_ = (EStorable__vtable *)((vPos.field0_0x0.d[0] + (float)pEVar19) - 0.012);
      local_f0 = local_110._0_4_;
      local_ec = (char *)local_110._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (pEVar5,prc,psVar11,true,(EVec2 *)&local_f0,E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      pEVar9 = (EVec2 *)(local_110 + 0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_110._4_4_ = (EStorable__vtable *)(vPos.field0_0x0.d[1] + (float)pEVar19);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_110._0_4_ = (EStorable__vtable *)(vPos.field0_0x0.d[0] + (float)pEVar19 + 0.012);
      local_110._16_4_ = local_110._0_4_;
      local_fc = local_110._4_4_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar12,true,pEVar9,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
      pEVar5 = _10SimInfoWin_m_pFont;
      pEVar4 = _globals.m_pFont;
                    /* end of inlined section */
      fVar17 = this->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      fVar22 = _WHITE.field0_0x0.d[1] * fVar17;
      local_110._8_4_ = (EResourceManager *)(_WHITE.field0_0x0.d[2] * fVar17);
      local_110._12_4_ = _WHITE.field0_0x0.d[3] * fVar17;
      ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * fVar17;
      (pEVar4->m_vColor).field0_0x0.d[1] = fVar22;
      (pEVar4->m_vColor).field0_0x0.d[2] = (float)local_110._8_4_;
      (pEVar4->m_vColor).field0_0x0.d[3] = local_110._12_4_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_110._0_4_ = (EStorable__vtable *)(vPos.field0_0x0.d[0] - 0.012);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_fc = (EStorable__vtable *)vPos.field0_0x0.d[1];
      local_110._4_4_ = (EStorable__vtable *)vPos.field0_0x0.d[1];
      local_110._16_4_ = local_110._0_4_;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (pEVar5,prc,psVar11,true,pEVar9,E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_110._0_4_ = (EStorable__vtable *)(vPos.field0_0x0.d[0] + 0.012);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      local_fc = (EStorable__vtable *)vPos.field0_0x0.d[1];
      local_110._4_4_ = (EStorable__vtable *)vPos.field0_0x0.d[1];
      local_110._16_4_ = local_110._0_4_;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_10SimInfoWin_m_pFont,prc,psVar12,true,pEVar9,E_FAX_LEFT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
      vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar16;
      if (*psVar10 != 0) {
        vPos.field0_0x0.d[0] = uVar21;
        do {
          iVar14 = 0;
          memset(__InfoMessageBuff,0,0x80);
          bVar3 = false;
          iVar15 = 0;
          psVar11 = __InfoMessageBuff;
          sVar1 = *psVar10;
          if (*psVar10 != 0) {
            do {
              __InfoMessageBuff[0] = sVar1;
              if (*psVar10 == 10) {
                psVar10 = psVar10 + 1;
                bVar3 = true;
              }
              else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                bVar8 = Isspace__FUs(*psVar10);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                if (bVar8) {
                  iVar15 = iVar14;
                }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                DoGetStringSize__6ERFontPvbP7EWindow
                          ((ERFont *)local_110,_globals.m_pFont,true,(EWindow *)&pGifTag1);
                    /* end of inlined section */
                iVar13 = iVar14 - iVar15;
                if ((fVar20 - 0.35) - 0.09999999 < (float)local_110._0_4_) {
                  bVar3 = true;
                  if (iVar13 != 0) {
                    if (iVar14 == iVar13) {
                      iVar13 = 0;
                      psVar10 = psVar10 + -1;
                    }
                    else {
                      iVar14 = iVar14 - iVar13;
                    }
                    psVar10 = psVar10 + -iVar13;
                  }
                  psVar12 = __InfoMessageBuff + iVar14;
                  iVar14 = iVar14 + -1;
                  *psVar12 = 0;
                }
                iVar14 = iVar14 + 1;
                psVar11 = psVar11 + 1;
                psVar10 = psVar10 + 1;
                if (0x3d < iVar14) break;
              }
              if ((*psVar10 == 0) || (bVar3)) break;
              *psVar11 = *psVar10;
              sVar1 = __InfoMessageBuff[0];
            } while( true );
          }
          pEVar4 = _10SimInfoWin_m_pFont;
          uVar7 = _BLACK.field0_0x0.d[1];
          uVar6 = _BLACK.field0_0x0.d[0];
          if ((bVar3) || (__InfoMessageBuff[0] != 0)) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
            __InfoMessageBuff[iVar14] = 0;
            pEVar5 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
            fVar22 = this->m_infoWinAlpha;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            local_110._12_4_ = _BLACK.field0_0x0.d[3] * fVar22;
            local_110._8_4_ = (EResourceManager *)(_BLACK.field0_0x0.d[2] * fVar22);
            ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = uVar6 * fVar22;
            (pEVar5->m_vColor).field0_0x0.d[1] = uVar7 * fVar22;
            (pEVar5->m_vColor).field0_0x0.d[2] = (float)local_110._8_4_;
            (pEVar5->m_vColor).field0_0x0.d[3] = local_110._12_4_;
            local_110._0_4_ = (EStorable__vtable *)(vPos.field0_0x0.d[0] + (float)pEVar19);
            local_110._4_4_ = (EStorable__vtable *)(vPos.field0_0x0.d[1] + (float)pEVar19);
            local_110._16_4_ = pEVar19;
            local_fc = pEVar19;
            local_e0 = local_110._0_4_;
            local_dc = (char *)local_110._4_4_;
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (pEVar4,prc,__InfoMessageBuff,true,(EVec2 *)&local_e0,E_FAX_CENTER,E_FAY_TOP,
                       (EVec2 *)0x0);
            pEVar5 = _10SimInfoWin_m_pFont;
            pEVar4 = _globals.m_pFont;
                    /* end of inlined section */
            fVar17 = this->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
            fVar22 = _WHITE.field0_0x0.d[1] * fVar17;
            local_110._8_4_ = (EResourceManager *)(_WHITE.field0_0x0.d[2] * fVar17);
            local_110._12_4_ = _WHITE.field0_0x0.d[3] * fVar17;
            ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * fVar17;
            (pEVar4->m_vColor).field0_0x0.d[1] = fVar22;
            (pEVar4->m_vColor).field0_0x0.d[2] = (float)local_110._8_4_;
            (pEVar4->m_vColor).field0_0x0.d[3] = local_110._12_4_;
            local_110._0_4_ = (EStorable__vtable *)vPos.field0_0x0.d[0];
            local_110._4_4_ = (EStorable__vtable *)vPos.field0_0x0.d[1];
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (pEVar5,prc,__InfoMessageBuff,true,(EVec2 *)local_110,E_FAX_CENTER,E_FAY_TOP,
                       &vPos);
                    /* end of inlined section */
            vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar16;
            vPos.field0_0x0.d[0] = uVar21;
          }
        } while (*psVar10 != 0);
      }
    }
  }
  else {
                    /* end of inlined section */
    fVar16 = GetLineSpacing__6ERFontP7EWindow(_globals.m_pFont,(EWindow *)0x0);
    fVar20 = (fVar20 - 0.35) - 0.07;
    if ((this->m_curwindow == 2) && (this->m_curOpt == 6)) {
      if (_globals._pSelectedSims[*(int *)&this->field_0x30] != (cXPerson__150_1300 *)0x0) {
        JobDrawInfo__10SimInfoWinP3ERC(this,prc);
      }
    }
    else {
      psVar10 = GetHelpString__7EGlobalPCc
                          (&_globals,
                           _10SimInfoWin___InfoTextLookup[this->m_curwindow][this->m_curOpt].pUpper)
      ;
      if (psVar10 == (short *)0x0) {
        psVar10 = __TEMPSTRING;
        sVar1 = __TEMPSTRING[0];
      }
      else {
        sVar1 = *psVar10;
      }
      local_d0 = (EHashTableNode **)(local_110 + 0x10);
      if (sVar1 != 0) {
        do {
          iVar14 = 0;
          memset(__InfoMessageBuff,0,0x80);
          bVar3 = false;
          iVar15 = 0;
          psVar11 = __InfoMessageBuff;
          sVar1 = *psVar10;
          if (*psVar10 != 0) {
            do {
              __InfoMessageBuff[0] = sVar1;
              if (*psVar10 == 10) {
                psVar10 = psVar10 + 1;
                bVar3 = true;
              }
              else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                bVar8 = Isspace__FUs(*psVar10);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                if (bVar8) {
                  iVar15 = iVar14;
                }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                DoGetStringSize__6ERFontPvbP7EWindow
                          ((ERFont *)local_110,_globals.m_pFont,true,(EWindow *)&pGifTag1);
                    /* end of inlined section */
                iVar13 = iVar14 - iVar15;
                if ((fVar20 < (float)local_110._0_4_) && (bVar3 = true, iVar13 != 0)) {
                  if (iVar14 == iVar13) {
                    iVar13 = 0;
                    psVar10 = psVar10 + -1;
                  }
                  else {
                    iVar14 = iVar14 - iVar13;
                  }
                  psVar10 = psVar10 + -iVar13;
                  __InfoMessageBuff[iVar14] = 0;
                  iVar14 = iVar14 + -1;
                }
                iVar14 = iVar14 + 1;
                psVar11 = psVar11 + 1;
                psVar10 = psVar10 + 1;
                if (0x3d < iVar14) break;
              }
              if ((*psVar10 == 0) || (bVar3)) break;
              *psVar11 = *psVar10;
              sVar1 = __InfoMessageBuff[0];
            } while( true );
          }
          pEVar4 = _10SimInfoWin_m_pFont;
          uVar7 = _BLACK.field0_0x0.d[1];
          uVar6 = _BLACK.field0_0x0.d[0];
          if ((bVar3) || (__InfoMessageBuff[0] != 0)) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
            __InfoMessageBuff[iVar14] = 0;
            pEVar5 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
            fVar17 = this->m_infoWinAlpha;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            local_110._12_4_ = _BLACK.field0_0x0.d[3] * fVar17;
            local_110._8_4_ = (EResourceManager *)(_BLACK.field0_0x0.d[2] * fVar17);
            ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = uVar6 * fVar17;
            (pEVar5->m_vColor).field0_0x0.d[1] = uVar7 * fVar17;
            (pEVar5->m_vColor).field0_0x0.d[2] = (float)local_110._8_4_;
            (pEVar5->m_vColor).field0_0x0.d[3] = local_110._12_4_;
            local_d0[1] = (EHashTableNode *)0x3ba3d70a;
            local_110._16_4_ = (EStorable__vtable *)0x3ba3d70a;
            local_110._0_4_ = (EStorable__vtable *)(vPos.field0_0x0.d[0] + 0.005);
            local_110._4_4_ = (EStorable__vtable *)(vPos.field0_0x0.d[1] + (float)local_fc);
            local_f0 = local_110._0_4_;
            local_ec = (char *)local_110._4_4_;
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (pEVar4,prc,__InfoMessageBuff,true,(EVec2 *)&local_f0,E_FAX_CENTER,E_FAY_TOP,
                       (EVec2 *)0x0);
            pEVar5 = _10SimInfoWin_m_pFont;
            pEVar4 = _globals.m_pFont;
                    /* end of inlined section */
            fVar18 = this->m_infoWinAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
            fVar17 = _WHITE.field0_0x0.d[1] * fVar18;
            local_110._8_4_ = (EResourceManager *)(_WHITE.field0_0x0.d[2] * fVar18);
            local_110._12_4_ = _WHITE.field0_0x0.d[3] * fVar18;
            ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * fVar18;
            (pEVar4->m_vColor).field0_0x0.d[1] = fVar17;
            (pEVar4->m_vColor).field0_0x0.d[2] = (float)local_110._8_4_;
            (pEVar4->m_vColor).field0_0x0.d[3] = local_110._12_4_;
            local_110._0_4_ = (EStorable__vtable *)vPos.field0_0x0.d[0];
            local_110._4_4_ = (EStorable__vtable *)vPos.field0_0x0.d[1];
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (pEVar5,prc,__InfoMessageBuff,true,(EVec2 *)local_110,E_FAX_CENTER,E_FAY_TOP,
                       &vPos);
                    /* end of inlined section */
            vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar16;
            vPos.field0_0x0.d[0] = fVar22;
          }
        } while (*psVar10 != 0);
      }
    }
  }
  return;
}

void SimInfoWin::DrawBackGround(ERC *prc) {
  bool bVar1;
  
  bVar1 = IsTwoPlayer__7EGlobal(&_globals);
  if (bVar1) {
    if (*(int *)&this->field_0x30 == 0) {
      DrawBigBox__10EDialogWinP3ERCfffff(prc,0.255,-0.1,1.1,0.32,this->m_infoWinAlpha);
    }
    else {
      DrawBigBox__10EDialogWinP3ERCfffff(prc,-0.1,0.665,0.745,1.1,this->m_infoWinAlpha);
    }
  }
  else {
    DrawBigBox__10EDialogWinP3ERCfffff(prc,0.262,0.67,1.1,1.1,this->m_infoWinAlpha);
  }
  return;
}

void SimInfoWin::DrawTextBox(ERC *prc, float _x, float _y, float _w, float OverrideAlpha) {
	float UseAlpha;
	float centerw;
	EVec2 vShaderSize;
	EGraphics *this;
	float x;
	float y;
	float v;
	float y;
	float v;
	float y;
	float v;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  float fVar1;
  float fVar2;
  float fVar3;
  EVec2 vShaderSize;
  float local_120;
  float local_11c;
  float local_110;
  float local_10c;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
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
  
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_50 = (undefined4)unaff_retaddr;
  uStack_4c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (OverrideAlpha < 0.0) {
    OverrideAlpha = 1.0;
  }
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar2 = 32.0 / (float)_pGfx->m_yscreen;
  fVar1 = 32.0 / (float)_pGfx->m_xscreen;
  fVar3 = _x + _w;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextLineBGL,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_110 = _x + fVar1;
  local_10c = _y + fVar2;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_fc = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_f0 = 0x3f800000;
  local_ec = 0;
                    /* end of inlined section */
  local_120 = _x;
  local_11c = _y;
  local_e0 = OverrideAlpha;
  local_dc = OverrideAlpha;
  local_d8 = OverrideAlpha;
  local_d4 = OverrideAlpha;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_120,&local_110,
             &local_100,&local_f0,&local_e0);
  if (_w - 0.1 != 0.0) {
    Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextLineBGC,prc,0);
    local_120 = _x + fVar1;
    local_110 = fVar3 - fVar1;
    local_10c = _y + fVar2;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_100 = 0;
    local_fc = 0x3f800000;
    local_d0 = 0x3f800000;
    local_cc = 0;
                    /* end of inlined section */
    local_11c = _y;
    local_c0 = OverrideAlpha;
    local_bc = OverrideAlpha;
    local_b8 = OverrideAlpha;
    local_b4 = OverrideAlpha;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_120,
               &local_110,&local_100,&local_d0,&local_c0);
  }
  Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextLineBGR,prc,0);
  local_120 = fVar3 - fVar1;
  local_10c = _y + fVar2;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = 0;
  local_fc = 0x3f800000;
  local_f0 = 0x3f800000;
  local_ec = 0;
                    /* end of inlined section */
  local_11c = _y;
  local_110 = fVar3;
  local_b0 = OverrideAlpha;
  local_ac = OverrideAlpha;
  local_a8 = OverrideAlpha;
  local_a4 = OverrideAlpha;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_120,&local_110,
             &local_100,&local_f0,&local_b0);
  return;
}

void SimInfoWin::DrawBigHighlightBox(ERC *prc, float _x, float _y, float _h, float _w, EVec4 vColor, float OverrideAlpha) {
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
    Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextBoxHTL,prc,0);
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
    Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextBoxHBL,prc,0);
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
    Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextBoxHTR,prc,0);
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
    Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextBoxHBR,prc,0);
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
      Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextBoxHML,prc,0);
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
      Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextBoxHMR,prc,0);
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
      Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextBoxHTC,prc,0);
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
      Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextBoxHBC,prc,0);
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
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_c0 = fVar7 - fVar5;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_bc = fVar8 - fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_a4 = (vColor->field0_0x0).d[3] * OverrideAlpha;
                    /* end of inlined section */
    local_d0 = _x + fVar5 + fVar5;
    local_cc = _y + fVar6;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_b0 = (vColor->field0_0x0).d[0] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_ac = (vColor->field0_0x0).d[1] * OverrideAlpha;
    local_a8 = (vColor->field0_0x0).d[2] * OverrideAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_d0,&local_c0,
               0x3cfc68,0x3cfc70,&local_b0);
  }
  return;
}

ERelationsWin* ERelationsWin::ERelationsWin() {
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	
  __13EUIScrollMenuiifffiib(&this->field0_0x0,-1,-1,0.05,0.0,0.0,-1,-1,true);
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
  (this->m_pRelList).start = (Neighbor **)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_13ERelationsWin;
                    /* inlined from ../MSrc/vector.h */
  (this->m_pRelList).end_of_storage = (Neighbor **)0x0;
  (this->m_pRelList).finish = (Neighbor **)0x0;
                    /* end of inlined section */
  this->m_pPerson = (cXPerson__3_1554 *)0x0;
  return this;
}

void ERelationsWin::~ERelationsWin(int __in_chrg) {
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	Neighbor **last;
	Neighbor **first;
	Neighbor **pointer;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	void *pAddress;
	
  Neighbor **ppNVar1;
  Neighbor **ppNVar2;
  
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_13ERelationsWin;
  Cleanup__13ERelationsWin(this);
                    /* inlined from ../MSrc/vector.h */
  ppNVar2 = (this->m_pRelList).start;
  ppNVar1 = (this->m_pRelList).finish;
  if (ppNVar2 == ppNVar1) {
    ppNVar2 = (this->m_pRelList).start;
  }
  else {
    do {
      ppNVar2 = ppNVar2 + 1;
    } while (ppNVar2 != ppNVar1);
    ppNVar2 = (this->m_pRelList).start;
  }
  if ((ppNVar2 != (Neighbor **)0x0) &&
     ((int)(this->m_pRelList).end_of_storage - (int)ppNVar2 >> 2 != 0)) {
    free(ppNVar2);
                    /* end of inlined section */
  }
  ___13EUIScrollMenu(&this->field0_0x0,__in_chrg);
  return;
}

void ERelationsWin::Init(cXPerson *pPerson) {
	EVec2 vOff;
	Neighbor *pNeighbor;
	EUIMenu *this;
	int i;
	unsigned int n;
	EUiMonitorAutoRepeat *this;
	
  short sVar1;
  cXObject__78_2757 *pcVar2;
  Neighborhood__vtable *pNVar3;
  Neighborhood__vtable **ppNVar4;
  bool bVar5;
  EVec2 *pEVar6;
  int iVar7;
  Neighbor *pPlayer;
  Neighbor **ppNVar8;
  EUiMonitorAutoRepeat *pEVar9;
  EUIObjectNode__vtable *pEVar10;
  undefined8 uVar11;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  uint uVar12;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  float fVar13;
  EVec2 vOff;
  undefined4 local_90;
  undefined4 local_8c;
  float local_80;
  undefined4 local_7c;
  float local_78;
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
  
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (pPerson != (cXPerson__78_985 *)0x0) {
    this->m_pPerson = (cXPerson__3_1554 *)pPerson;
    bVar5 = _globals._pSelectedSims[0] != (cXPerson__150_1300 *)pPerson;
    (this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl = (uint)bVar5;
    if ((bVar5 != 1) || (bVar5 = IsTwoPlayer__7EGlobal(&_globals), bVar5)) {
      pEVar6 = Get2PlayerOff__Fi((this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      fVar13 = (pEVar6->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vOff.field0_0x0.d[1] = (pEVar6->field0_0x0).d[1];
                    /* end of inlined section */
      bVar5 = IsTwoPlayer__7EGlobal(&_globals);
      if (bVar5) {
        if ((this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl == 0) {
          vOff.field0_0x0.d[1] = vOff.field0_0x0.d[1] + 0.05;
          pEVar10 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
        }
        else {
          pEVar10 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
        }
      }
      else {
        pEVar10 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
      }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_90 = 0x3f19999a;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_8c = 0x3f800000;
                    /* end of inlined section */
      local_80 = _moodinfo_x - 0.047;
      (*(code *)pEVar10->RemoveChild)
                ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar10->AddChild + -0x44,&local_90);
      pEVar10 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
      local_80 = local_80 + fVar13;
      local_78 = (_moodinfo_y - 0.085) + vOff.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_7c = 0;
                    /* end of inlined section */
      (*(code *)pEVar10->OnButtonRepeat)
                ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar10->StateChanged + -0x44,&local_80);
      pEVar10 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
      uVar11 = 2;
      if ((this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl == 0) {
        uVar11 = 1;
      }
      (*(code *)pEVar10[2].GetPos)
                ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar10[2].OnStickRepeat + -0x44,1,uVar11,1);
      pEVar10 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar10[2].RemoveChild)
                ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar10[2].AddChild + -0x44,2);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
      pEVar10 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (this->field0_0x0).field0_0x0.m_optgap = 0.045;
      (*(code *)pEVar10[2].Message)
                ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar10[2].SetBoxDims + -0x44);
                    /* end of inlined section */
      GetRelatedPeople__13ERelationsWiniP8cXPersonPv
                ((this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl,pPerson,&this->m_pRelList);
      if ((this->field0_0x0).field0_0x0.m_pCurOpt == (EUIObjectNode *)0x0) {
        pcVar2 = pPerson->_vb2757;
      }
      else {
        Cleanup__13ERelationsWin(this);
                    /* end of inlined section */
        pcVar2 = pPerson->_vb2757;
      }
      uVar12 = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      pNVar3 = _5Globs_pNeighborhood->__vtable;
      sVar1 = *(short *)&pNVar3->AddFamilyHistoryStat;
      ppNVar4 = &_5Globs_pNeighborhood->__vtable;
      iVar7 = (*(code *)pcVar2->__vtable[1].HandleError)
                        ((int)&pcVar2->_vb2693 + (int)*(short *)&pcVar2->__vtable[1].Error);
      pPlayer = (Neighbor *)
                (*(code *)pNVar3->GetImpl)((int)ppNVar4 + (int)sVar1,*(undefined4 *)(iVar7 + 0x1c));
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
      if ((int)(this->m_pRelList).finish - (int)(this->m_pRelList).start >> 2 == 0) {
        pEVar9 = (this->field0_0x0).field0_0x0.field0_0x0.m_pAutoRepeatMonitor;
      }
      else {
                    /* inlined from ../MSrc/vector.h */
        ppNVar8 = (this->m_pRelList).start;
        while( true ) {
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
          ppNVar8 = ppNVar8 + uVar12;
                    /* end of inlined section */
          uVar12 = uVar12 + 1;
          AddRelation__13ERelationsWinP8NeighborT1(this,pPlayer,*ppNVar8);
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
          if ((uint)((int)(this->m_pRelList).finish - (int)(this->m_pRelList).start >> 2) <= uVar12)
          break;
          ppNVar8 = (this->m_pRelList).start;
        }
                    /* inlined from /eor/src2/engine/ui/e_uimonitorautorep.h */
        pEVar9 = (this->field0_0x0).field0_0x0.field0_0x0.m_pAutoRepeatMonitor;
      }
      pEVar9->m_maxUpdatesPerFrame = -1;
      pEVar9->m_period = 0.25;
      pEVar9->m_delay = 0.25;
    }
  }
  return;
}

void ERelationsWin::Cleanup() {
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	Neighbor **first;
	Neighbor **last;
	Neighbor **pointer;
	
  int iVar1;
  Neighbor **ppNVar2;
  EUIObjectNode__vtable *pEVar3;
  Neighbor **ppNVar4;
  int *piVar5;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  piVar5 = (int *)(this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (piVar5 != (int *)0x0) {
                    /* end of inlined section */
    pEVar3 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    while( true ) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      iVar1 = *piVar5;
                    /* end of inlined section */
                    /* end of inlined section */
      piVar5 = (int *)piVar5[2];
      (*(code *)pEVar3[1].RemoveChild)
                ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar3[1].AddChild + -0x44,iVar1);
      (**(code **)(*(int *)(iVar1 + 0x38) + 0x74))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x38) + 0x70));
      if (piVar5 == (int *)0x0) break;
      pEVar3 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    }
  }
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.m_pCurOpt = (EUIObjectNode *)0x0;
                    /* inlined from ../MSrc/algobase.h */
  ppNVar2 = (this->m_pRelList).start;
  for (ppNVar4 = ppNVar2; ppNVar4 != (this->m_pRelList).finish; ppNVar4 = ppNVar4 + 1) {
  }
  (this->m_pRelList).finish = ppNVar2;
  return;
}

bool ERelationsWinCmp::operator()(Neighbor *n1, Neighbor *n2) {
	bool inFamily1;
	bool inFamily2;
	bool inst1;
	bool inst2;
	Neighbor *nSelf;
	PersonRelation pr1;
	PersonRelation pr2;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	
  short sVar1;
  cXObject__150_1187 *pcVar2;
  cXObject__150_1187__vtable *pcVar3;
  Neighborhood__vtable *pNVar4;
  Neighborhood *pNVar5;
  bool bVar6;
  ushort uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  Neighbor *n1_00;
  long lVar11;
  long lVar12;
  PersonRelation pr1;
  PersonRelation pr2;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  piVar8 = (int *)(*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                            ((int)&_5Globs_pHouse->__vtable +
                             (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
  iVar10 = *piVar8;
  sVar1 = *(short *)(iVar10 + 0x28);
  iVar9 = GetGUID__11ObjSelector(n1->fSelector);
  lVar11 = (**(code **)(iVar10 + 0x2c))((int)piVar8 + (int)sVar1,iVar9);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  piVar8 = (int *)(*(code *)_5Globs_pHouse->__vtable->EnterLiveMode)
                            ((int)&_5Globs_pHouse->__vtable +
                             (int)*(short *)&_5Globs_pHouse->__vtable->DoStream);
  iVar10 = *piVar8;
  sVar1 = *(short *)(iVar10 + 0x28);
  iVar9 = GetGUID__11ObjSelector(n2->fSelector);
  lVar12 = (**(code **)(iVar10 + 0x2c))((int)piVar8 + (int)sVar1,iVar9);
  pNVar5 = _5Globs_pNeighborhood;
  if (lVar11 == 0) {
    if (lVar12 != 0) goto LAB_001d2ca8;
    uVar7 = n1->fData[0x3d];
  }
  else {
    if (lVar12 == 0) {
      return true;
    }
LAB_001d2ca8:
    if (lVar11 == 0) {
      return false;
    }
                    /* end of inlined section */
    uVar7 = n1->fData[0x3d];
  }
  bVar6 = n2->fData[0x3d] == 0;
  if (uVar7 == 0) {
    if (bVar6) {
      iVar10 = this->m_player;
      goto LAB_001d2ce8;
    }
  }
  else if (bVar6) {
    return true;
  }
  if (uVar7 == 0) {
    return false;
  }
                    /* end of inlined section */
  iVar10 = this->m_player;
LAB_001d2ce8:
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pcVar2 = _globals._pSelectedSims[iVar10]->_vb1187;
  pcVar3 = pcVar2->__vtable;
  iVar10 = (*(code *)pcVar3[1].HandleError)((int)&pcVar2->_vb1121 + (int)*(short *)&pcVar3[1].Error)
  ;
  pNVar4 = pNVar5->__vtable;
  n1_00 = (Neighbor *)
          (*(code *)pNVar4->GetImpl)
                    ((int)&pNVar5->__vtable + (int)*(short *)&pNVar4->AddFamilyHistoryStat,
                     *(undefined4 *)(iVar10 + 0x1c));
  GetRelation__13ERelationsWinP8NeighborT1P14PersonRelation(n1_00,n1,&pr1);
  GetRelation__13ERelationsWinP8NeighborT1P14PersonRelation(n1_00,n2,&pr2);
  bVar6 = true;
  if ((pr1.mValue <= pr2.mValue) && (bVar6 = false, pr2.mValue <= pr1.mValue)) {
    bVar6 = n1 < n2;
  }
  return bVar6;
}

void ERelationsWin::GetRelation(Neighbor *n1, Neighbor *n2, PersonRelation *pr) {
	RelMatrix *matrix;
	SInt32 key;
	int size;
	RelMatrix *other_matrix;
	SInt32 other_key;
	
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  RelMatrix *matrix;
  int key;
  RelMatrix *other_matrix;
  int other_key;
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
  
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  pr->mValue = 0;
  *(undefined4 *)&pr->mRomantic = 0;
  *(undefined4 *)&pr->mFriend = 0;
  bVar1 = GetMatrix__13ERelationsWinP8NeighborT1PP9RelMatrixPi
                    (n1,n2,&matrix,(int *)((uint)&matrix | 4));
  if ((bVar1) &&
     (lVar3 = (*(code *)matrix->__vtable->GetValue)
                        ((int)&matrix->__vtable + (int)*(short *)&matrix->__vtable->RemoveArray,key)
     , 0 < lVar3)) {
    iVar2 = (*(code *)matrix->__vtable[1].RelMatrix)
                      ((int)&matrix->__vtable + (int)*(short *)(matrix->__vtable + 1),key,0);
    pr->mValue = iVar2;
    if (lVar3 < 2) {
      iVar2 = pr->mValue;
    }
    else {
      lVar3 = (*(code *)matrix->__vtable[1].RelMatrix)
                        ((int)&matrix->__vtable + (int)*(short *)(matrix->__vtable + 1),key,1);
      if (lVar3 != 0) {
        *(undefined4 *)&pr->mRomantic = 1;
      }
      iVar2 = pr->mValue;
    }
    if ((((gFriendshipThreshold <= iVar2) &&
         (bVar1 = GetMatrix__13ERelationsWinP8NeighborT1PP9RelMatrixPi
                            (n2,n1,(RelMatrix **)((uint)&matrix | 8),(int *)((uint)&matrix | 0xc)),
         bVar1)) &&
        (lVar3 = (*(code *)other_matrix->__vtable->GetValue)
                           ((int)&other_matrix->__vtable +
                            (int)*(short *)&other_matrix->__vtable->RemoveArray,other_key),
        0 < lVar3)) &&
       (iVar2 = (*(code *)other_matrix->__vtable[1].RelMatrix)
                          ((int)&other_matrix->__vtable +
                           (int)*(short *)(other_matrix->__vtable + 1),other_key,0),
       gFriendshipThreshold <= iVar2)) {
      *(undefined4 *)&pr->mFriend = 1;
    }
  }
  return;
}

bool ERelationsWin::GetMatrix(Neighbor *n1, Neighbor *n2, RelMatrix **matrix, SInt32 *key) {
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
  *matrix = n1->fRelations;
  *key = (int)(short)n2->fID;
  return true;
}

void ERelationsWin::GetRelatedPeople(int player, cXPerson *pSelf, void *ppeople) {
	Neighbor *theNeighbor;
	SInt16 neighborID;
	Neighbor **first;
	Neighbor **last;
	Neighbor **pointer;
	Neighbor *n;
	RelMatrix *matrix;
	SInt32 key;
	Neighbor *this;
	Neighbor *this;
	Neighbor *&x;
	Neighbor *&value;
	ERelationsWinCmp cmp;
	int player;
	ERelationsWinCmp comp;
	
  short sVar1;
  cXObject__78_2757__vtable *pcVar2;
  Neighbor **ppNVar3;
  Neighbor **last;
  Neighborhood *pNVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  Neighborhood__vtable *pNVar9;
  uint n_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  long lVar10;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  ERelationsWinCmp cmp;
  ERelationsWinCmp comp;
  RelMatrix *matrix;
  int key;
  Neighbor *n;
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
  
  pNVar4 = _5Globs_pNeighborhood;
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* WARNING: Load size is inaccurate */
                    /* inlined from ../MSrc/algobase.h */
  for (iVar8 = *ppeople; iVar8 != *(int *)((int)ppeople + 4); iVar8 = iVar8 + 4) {
  }
  *(int *)((int)ppeople + 4) = *ppeople;
                    /* end of inlined section */
  lVar10 = 0;
  pNVar9 = pNVar4->__vtable;
  pcVar2 = pSelf->_vb2757->__vtable;
  sVar1 = *(short *)&pNVar9->AddFamilyHistoryStat;
  iVar8 = (*(code *)pcVar2[1].HandleError)
                    ((int)&pSelf->_vb2757->_vb2693 + (int)*(short *)&pcVar2[1].Error);
  lVar6 = (*(code *)pNVar9->GetImpl)
                    ((int)&pNVar4->__vtable + (int)sVar1,*(undefined4 *)(iVar8 + 0x1c));
LAB_001d3088:
  do {
                    /* end of inlined section */
    pNVar9 = pNVar4->__vtable;
    while( true ) {
      while( true ) {
        lVar10 = (*(code *)pNVar9[1].SetFilename)
                           ((int)&pNVar4->__vtable + (int)*(short *)&pNVar9[1].LevelComplete,lVar10)
        ;
        if (lVar10 == 0) {
                    /* WARNING: Load size is inaccurate */
                    /* inlined from ../MSrc/vector.h */
          ppNVar3 = *ppeople;
          last = *(Neighbor ***)((int)ppeople + 4);
          n_00 = (int)last - (int)ppNVar3 >> 2;
                    /* end of inlined section */
          if (1 < n_00) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
            iVar8 = __lg__H1Zi_X01_X01(n_00);
            __introsort_loop__H4ZPP8NeighborZP8NeighborZiZ16ERelationsWinCmp_X01X01PX11X21X31_v
                      (ppNVar3,last,0,(ERelationsWinCmp)(iVar8 << 1));
            __final_insertion_sort__H2ZPP8NeighborZ16ERelationsWinCmp_X01X01X11_v
                      (ppNVar3,last,(ERelationsWinCmp)player);
                    /* end of inlined section */
          }
          return;
        }
        lVar7 = (*(code *)pNVar4->__vtable->SetShowTutorialArrow)
                          ((int)&pNVar4->__vtable +
                           (int)*(short *)&pNVar4->__vtable->GetShowTutorialArrow,lVar10);
        n = (Neighbor *)lVar7;
        if (lVar7 == 0) goto LAB_001d3088;
        if (lVar7 != lVar6) break;
        pNVar9 = pNVar4->__vtable;
      }
      bVar5 = IsCharacter__8Neighbor(n);
      if (!bVar5) goto LAB_001d3088;
                    /* end of inlined section */
      GetGUID__11ObjSelector(n->fSelector);
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
      if ((n->fData[0x3d] == 0) ||
         (bVar5 = GetMatrix__13ERelationsWinP8NeighborT1PP9RelMatrixPi
                            ((Neighbor *)lVar6,n,&matrix,&key), !bVar5)) goto LAB_001d3088;
      lVar7 = (*(code *)matrix->__vtable->GetValue)
                        ((int)&matrix->__vtable + (int)*(short *)&matrix->__vtable->RemoveArray,key)
      ;
      if (0 < lVar7) break;
      pNVar9 = pNVar4->__vtable;
    }
                    /* inlined from ../MSrc/vector.h */
    ppNVar3 = *(Neighbor ***)((int)ppeople + 4);
    if (ppNVar3 == *(Neighbor ***)((int)ppeople + 8)) {
      insert_aux__t6vector2ZP8NeighborZt23__malloc_alloc_template1i0PP8NeighborRCP8Neighbor
                ((vector_Neighbor_____malloc_alloc_template_0___ *)ppeople,ppNVar3,&n);
    }
    else {
      *ppNVar3 = n;
      *(int *)((int)ppeople + 4) = *(int *)((int)ppeople + 4) + 4;
    }
  } while( true );
}

void ERelationsWin::Draw(ERC *prc) {
  if (this->m_pPerson != (cXPerson__3_1554 *)0x0) {
    Draw__13EUIScrollMenuP3ERC(&this->field0_0x0,prc);
    SelectWin__7EGlobalP3ERC(&_globals,prc);
  }
  return;
}

void ERelationsWin::Update() {
	int i;
	int x;
	bool bRebuildMenu;
	bool bIsThereADuplicate;
	vector<Neighbor *,__malloc_alloc_template<0> > relList;
	NLIterator nli;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	Neighbor **first;
	Neighbor **last;
	Neighbor **pointer;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	Neighbor **last;
	Neighbor **first;
	Neighbor **pointer;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	void *pAddress;
	
  cXPerson__150_1300 *pSelf;
  int iVar1;
  Neighbor *pNVar2;
  bool bVar3;
  undefined uVar4;
  Neighbor **ppNVar5;
  Neighbor **ppNVar6;
  uint uVar7;
  uint uVar8;
  Neighbor **ppNVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  vector_Neighbor_____malloc_alloc_template_0___ relList;
  
  pSelf = (cXPerson__150_1300 *)this->m_pPerson;
  if (pSelf != (cXPerson__150_1300 *)0x0) {
    iVar1 = (this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl;
    if (pSelf == _globals._pSelectedSims[iVar1]) {
                    /* inlined from ../MSrc/vector.h */
      relList.start = (Neighbor **)0x0;
      relList.finish = (Neighbor **)0x0;
                    /* end of inlined section */
      uVar4 = false;
                    /* end of inlined section */
      relList.end_of_storage = (Neighbor **)0x0;
      GetRelatedPeople__13ERelationsWiniP8cXPersonPv(iVar1,(cXPerson__78_985 *)pSelf,&relList);
                    /* inlined from ../MSrc/vector.h */
      ppNVar6 = (this->m_pRelList).start;
      uVar7 = (int)relList.finish - (int)relList.start >> 2;
                    /* end of inlined section */
      ppNVar5 = relList.start;
      if (uVar7 == (int)(this->m_pRelList).finish - (int)ppNVar6 >> 2) {
        uVar8 = 0;
        if (uVar7 != 0) {
          do {
            uVar10 = 0;
            bVar3 = false;
            uVar11 = uVar8 + 1;
            if (uVar7 != 0) {
              ppNVar9 = ppNVar6;
              do {
                    /* end of inlined section */
                pNVar2 = *ppNVar9;
                uVar10 = uVar10 + 1;
                ppNVar9 = ppNVar9 + 1;
                if (relList.start[uVar8] == pNVar2) {
                  bVar3 = true;
                }
              } while (uVar10 < (uint)((int)(this->m_pRelList).finish - (int)ppNVar6 >> 2));
            }
            if (!bVar3) {
              uVar4 = true;
            }
            uVar8 = uVar11;
          } while (uVar11 < uVar7);
        }
      }
      else {
        uVar4 = true;
      }
      for (; ppNVar5 != relList.finish; ppNVar5 = ppNVar5 + 1) {
      }
      relList.finish = relList.start;
                    /* end of inlined section */
      if ((bool)uVar4) {
        Cleanup__13ERelationsWin(this);
        Init__13ERelationsWinP8cXPerson(this,(cXPerson__78_985 *)this->m_pPerson);
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      piVar12 = (int *)(this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
      if (piVar12 != (int *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        iVar1 = *piVar12;
        while( true ) {
          (**(code **)(*(int *)(iVar1 + 0x38) + 0x14))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x38) + 0x10));
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          piVar12 = (int *)piVar12[2];
                    /* end of inlined section */
          if (piVar12 == (int *)0x0) break;
          iVar1 = *piVar12;
        }
      }
      Update__13EUIScrollMenu(&this->field0_0x0);
                    /* inlined from ../MSrc/algobase.h */
      for (ppNVar6 = relList.start; ppNVar6 != relList.finish; ppNVar6 = ppNVar6 + 1) {
      }
      if ((relList.start != (Neighbor **)0x0) &&
         ((int)relList.end_of_storage - (int)relList.start >> 2 != 0)) {
        free(relList.start);
      }
    }
    else {
      Cleanup__13ERelationsWin(this);
      Init__13ERelationsWinP8cXPerson
                (this,(cXPerson__78_985 *)
                      _globals._pSelectedSims[(this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl]
                );
    }
  }
  return;
}

void ERelationsWin::AddRelation(Neighbor *pPlayer, Neighbor *pNeighbor) {
	ERelationsIcon *pIcon;
	
  EUIObjectNode__vtable *pEVar1;
  ERelationsIcon *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
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
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pEVar2 = (ERelationsIcon *)__nw__14ERelationsIconUi(0x74);
  pEVar2 = __14ERelationsIcon(pEVar2);
  Init__14ERelationsIconP8NeighborT1(pEVar2,pPlayer,pNeighbor);
  SetFlagsPropigate__13EUIObjectNodeUib(&pEVar2->field0_0x0,4,false);
  SetActiveController__13EUIObjectNodeUi
            (&pEVar2->field0_0x0,(this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_58 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_5c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_60 = 0;
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[2].SetBoxDims)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar1[2].SetPos + -0x44,pEVar2,&local_60);
  return;
}

void* ERelationsIcon::operator new(unsigned int size) {
	void *p;
	
  void *pvVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  pvVar1 = _eRelationsIconAllocPool.field0_0x0.m_pFreeObjHead;
  if (_eRelationsIconAllocPool.field0_0x0.m_pFreeObjHead != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    _eRelationsIconAllocPool.field0_0x0.m_pFreeObjHead =
         *_eRelationsIconAllocPool.field0_0x0.m_pFreeObjHead;
  }
                    /* end of inlined section */
  return pvVar1;
}

void ERelationsIcon::operator delete(void *ptr) {
	ERelationsIcon *p;
	void *p;
	
                    /* inlined from /eor/src2/common/datastruc/e_fixedpool.h */
  if (ptr != (void *)0x0) {
    *(void **)ptr = _eRelationsIconAllocPool.field0_0x0.m_pFreeObjHead;
    _eRelationsIconAllocPool.field0_0x0.m_pFreeObjHead = ptr;
  }
  return;
}

ERelationsIcon* ERelationsIcon::ERelationsIcon() {
	EUIObjectNode *this;
	
  float fVar1;
  float fVar2;
  float fVar3;
  
  __13EUIObjectNode(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_14ERelationsIcon;
  __8BString2(&this->m_firstName2);
  __8BString2(&this->m_famName2);
  __8BString2(&this->m_relValStr);
  fVar2 = _head_win_b;
  fVar1 = _head_win_t;
  fVar3 = _head_win_r - _head_win_l;
  this->m_pNeighbor = (Neighbor *)0x0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->field0_0x0).m_WDH.field0_0x0.d[0] = fVar3;
  (this->field0_0x0).m_WDH.field0_0x0.d[2] = fVar2 - fVar1;
  return this;
}

void ERelationsIcon::~ERelationsIcon(int __in_chrg) {
  this->m_pNeighbor = (Neighbor *)0x0;
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_14ERelationsIcon;
  while( true ) {
    if (this->m_pThumbnail == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_pThumbnail->field0_0x0);
    this->m_pThumbnail = (ERShader *)0x0;
  }
  while (this->m_pThumbnailFrame != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pThumbnailFrame->field0_0x0);
    this->m_pThumbnailFrame = (ERShader *)0x0;
  }
  ___8BString2(&this->m_relValStr,2);
  ___8BString2(&this->m_famName2,2);
  ___8BString2(&this->m_firstName2,2);
  ___13EUIObjectNode(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    __dl__14ERelationsIconPv(this);
  }
  return;
}

void ERelationsIcon::Init(Neighbor *pPerson, Neighbor *pNeighbor) {
	Family *f;
	StackString2<32> famName;
	StackString2<8> valStr;
	EVec2 vTextSize;
	Neighbor *this;
	Neighbor *this;
	Neighbor *this;
	EGraphics *this;
	
  ERFont *szString;
  EGraphics *pEVar1;
  BString2 *str;
  int *piVar2;
  short *psVar3;
  ERShader *pEVar4;
  int iVar5;
  float fVar6;
  StackString2_32_ famName;
  StackString2_8_ valStr;
  EVec2 vTextSize;
  
  this->m_pNeighbor = pNeighbor;
  this->m_pPerson = pPerson;
  GetRelation__13ERelationsWinP8NeighborT1P14PersonRelation(pPerson,pNeighbor,&this->m_rel);
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
  str = GetUserName__11ObjSelector(this->m_pNeighbor->fSelector);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
  piVar2 = (int *)(*(code *)_5Globs_pNeighborhood->__vtable[1].GetHouseNumberForLevel)
                            ((int)&_5Globs_pNeighborhood->__vtable +
                             (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].Save,
                             this->m_pNeighbor->fData[0x3d]);
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&famName.field0_0x0,(short *)((uint)&famName | 8),0x20);
                    /* end of inlined section */
  (**(code **)(*piVar2 + 0x5c))((int)piVar2 + (int)*(short *)(*piVar2 + 0x58),&famName);
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&valStr.field0_0x0,valStr.fChars,8);
                    /* end of inlined section */
  appendNum__13StringBuffer2i(&valStr.field0_0x0,(this->m_rel).mValue);
  assign__8BString2RC8BString2UiUi(&this->m_firstName2,str,0,0xffffffff);
  psVar3 = c_str__C13StringBuffer2(&famName.field0_0x0);
  assign__8BString2PCUs(&this->m_famName2,psVar3);
  psVar3 = c_str__C13StringBuffer2(&valStr.field0_0x0);
  assign__8BString2PCUs(&this->m_relValStr,psVar3);
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
  GetThumbnail__11ObjSelectorPP8ERShader(this->m_pNeighbor->fSelector,&this->m_pThumbnail);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x1239c594,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pThumbnailFrame = pEVar4;
  szString = _globals.m_pFont;
  SetSize__6ERFontffb(_globals.m_pFont,15.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&vTextSize,szString,true,(EWindow *)0x0);
  pEVar1 = _pGfx;
                    /* end of inlined section */
  fVar6 = 16.0 / (float)_pGfx->m_xscreen;
  this->m_f16XPixels = fVar6;
  iVar5 = pEVar1->m_yscreen;
  this->m_fXCenterDist = fVar6 + fVar6 + 0.04;
  this->m_f16YPixels = 16.0 / (float)iVar5;
  this->m_fYCenterDist = vTextSize.field0_0x0.d[1] + 0.01 + 68.0 / (float)pEVar1->m_yscreen;
  return;
}

void ERelationsIcon::Draw(ERC *prc) {
	float _infoWinAlpha;
	E3DWindow win;
	EFloatRect wrect;
	EVec2 vScale;
	EVec2 v;
	EVec2 vFrameCenter;
	float value;
	float greenval;
	float x;
	float y;
	float v;
	float x;
	float y;
	EUIObjectNode *this;
	float scaler;
	float v;
	EGraphics *this;
	float y;
	float scaler;
	EGraphics *this;
	ERC *prc;
	ERC *prc;
	float v;
	float v;
	
  ERFont *this_00;
  short *psVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar2;
  float fVar3;
  float aspect;
  float _alpha;
  E3DWindow win;
  TRect_float_ wrect;
  EVec2 vScale;
  EVec2 v;
  EVec2 vFrameCenter;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
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
  
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  _alpha = (_globals._pPanel)->m_pInfoWindows[(this->field0_0x0).m_activeCtrl]->m_infoWinAlpha;
  __9E3DWindow(&win);
  fVar2 = (this->field0_0x0).m_pos.field0_0x0.d[0];
  fVar3 = (this->field0_0x0).m_pos.field0_0x0.d[2];
  wrect.left = fVar2 - 0.02;
  wrect.right = fVar2 + (this->field0_0x0).m_WDH.field0_0x0.d[0] + 0.02;
  wrect.bottom = fVar3 + (this->field0_0x0).m_WDH.field0_0x0.d[2] + 0.1;
  wrect.top = fVar3 - 0.03;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  SetViewport__9E3DWindowRCt5TRect1Zf(&win,&wrect);
  Select__9E3DWindowP3ERC(&win,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  v.field0_0x0.d[0] = wrect.left;
  v.field0_0x0.d[1] = wrect.top;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vFrameCenter.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* end of inlined section */
  vFrameCenter.field0_0x0.d[0] = 1.0;
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,wrect.left,wrect.top,0.262,0.13,1.0,(EVec4 *)&vFrameCenter);
  v.field0_0x0.d[1] = (this->field0_0x0).m_pos.field0_0x0.d[2];
  v.field0_0x0.d[0] = (this->field0_0x0).m_pos.field0_0x0.d[0] + 0.015;
  Select__8ERShaderP3ERCi(this->m_pThumbnail,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vFrameCenter.field0_0x0.d[0] = 1.25;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vFrameCenter.field0_0x0.d[1] = 1.25;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  local_c0 = _alpha;
  local_bc = _alpha;
  local_b8 = _alpha;
  local_b4 = _alpha;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&v,
             (EVec4 *)&vFrameCenter);
  Select__8ERShaderP3ERCi(this->m_pThumbnailFrame,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  vFrameCenter.field0_0x0.d[0] = v.field0_0x0.d[0] - 0.0025;
  vFrameCenter.field0_0x0.d[1] = v.field0_0x0.d[1] - 0.005;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_c0 = 0.7;
    local_bc = 0.7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_b0 = _alpha;
    local_ac = _alpha;
    local_a8 = _alpha;
    local_a4 = _alpha;
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,
               (EVec4 *)&vFrameCenter,(EVec2 *)&local_c0,&local_b0);
                    /* end of inlined section */
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_b0 = _CYAN.field0_0x0.d[0] * _alpha;
    local_a4 = _CYAN.field0_0x0.d[3] * _alpha;
    local_ac = _CYAN.field0_0x0.d[1] * _alpha;
    local_a8 = _CYAN.field0_0x0.d[2] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_c0 = 0.7;
    local_bc = 0.7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,
               (EVec4 *)&vFrameCenter,(EVec2 *)&local_c0,&local_b0);
  }
  fVar2 = (float)(this->m_rel).mValue;
  vFrameCenter.field0_0x0.d[0] = v.field0_0x0.d[0] + 0.035;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  fVar3 = 0.0;
  vFrameCenter.field0_0x0.d[1] = v.field0_0x0.d[1] + 50.0 / (float)_pGfx->m_yscreen;
  v.field0_0x0.d[1] = v.field0_0x0.d[1] + 69.0 / (float)_pGfx->m_yscreen;
  if (0.0 <= fVar2) {
    fVar3 = (float)((int)fVar2 * (uint)(fVar2 < 100.0) | (uint)(fVar2 >= 100.0) * 0x42c80000);
  }
  fVar2 = 0.01;
  v.field0_0x0.d[0] = (this->field0_0x0).m_pos.field0_0x0.d[0];
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
  aspect = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_c0 = v.field0_0x0.d[0] - 0.004;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_bc = v.field0_0x0.d[1];
                    /* end of inlined section */
                    /* end of inlined section */
  DrawRedGreenBar__FP3ERCfffG5EVec2f(prc,0.1,fVar2,fVar3 * 0.01,(EVec2 *)&local_c0,_alpha);
  this_00 = _globals.m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_c0 = _WHITE.field0_0x0.d[0] * _alpha;
  local_b4 = _WHITE.field0_0x0.d[3] * _alpha;
  local_bc = _WHITE.field0_0x0.d[1] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_b8 = _WHITE.field0_0x0.d[2] * _alpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = local_c0;
  (this_00->m_vColor).field0_0x0.d[1] = local_bc;
  (this_00->m_vColor).field0_0x0.d[2] = local_b8;
  (this_00->m_vColor).field0_0x0.d[3] = local_b4;
  SetSize__6ERFontffb(this_00,15.0,aspect,true);
  Select__6ERFontP3ERC(this_00,prc);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  v.field0_0x0.d[1] = v.field0_0x0.d[1] + 5.0 / (float)_pGfx->m_yscreen + fVar2;
  psVar1 = c_str__C8BString2(&this->m_relValStr);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0 = v.field0_0x0.d[0];
  local_bc = v.field0_0x0.d[1];
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar1,true,(EVec2 *)&local_c0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  SetSize__6ERFontffb(this_00,11.0,aspect,true);
  psVar1 = c_str__C8BString2(&this->m_firstName2);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0 = vFrameCenter.field0_0x0.d[0];
  local_bc = vFrameCenter.field0_0x0.d[1];
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this_00,prc,psVar1,true,(EVec2 *)&local_c0,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  if (*(int *)&(this->m_rel).mRomantic == 0) {
    if (*(int *)&(this->m_rel).mFriend != 0) {
      v.field0_0x0.d[0] = v.field0_0x0.d[0] + 0.08;
      Select__8ERShaderP3ERCi(_14ERelationsIcon_m_pSmileyFace,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_c0 = aspect;
      local_bc = aspect;
      local_b0 = _alpha;
      local_ac = _alpha;
      local_a8 = _alpha;
      local_a4 = _alpha;
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&v,
                 (EVec2 *)&local_c0,&local_b0);
    }
  }
  else {
    v.field0_0x0.d[0] = v.field0_0x0.d[0] + 0.08;
    Select__8ERShaderP3ERCi(_14ERelationsIcon_m_pHeart,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_c0 = aspect;
    local_bc = aspect;
    local_b0 = _alpha;
    local_ac = _alpha;
    local_a8 = _alpha;
    local_a4 = _alpha;
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&v,(EVec2 *)&local_c0
               ,&local_b0);
  }
  ___7EWindow(&win.field0_0x0,0);
  return;
}

void ERelationsIcon::Update() {
	StackString2<8> valStr;
	
  short *s;
  StackString2_8_ valStr;
  
  GetRelation__13ERelationsWinP8NeighborT1P14PersonRelation
            (this->m_pPerson,this->m_pNeighbor,&this->m_rel);
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&valStr.field0_0x0,(short *)((uint)&valStr | 8),8);
                    /* end of inlined section */
  appendNum__13StringBuffer2i(&valStr.field0_0x0,(this->m_rel).mValue);
  s = c_str__C13StringBuffer2(&valStr.field0_0x0);
  assign__8BString2PCUs(&this->m_relValStr,s);
  Update__13EUIObjectNode(&this->field0_0x0);
  return;
}

ObjSelector* ERelationsIcon::GetSelector() {
	Neighbor *this;
	
                    /* inlined from ../MSrc/neighbor.h */
                    /* end of inlined section */
  return this->m_pNeighbor->fSelector;
}

void SimInfoWin::ChangedSelectedSim() {
  this->m_simnametimeout = 0.0;
  StartTextSlide__10SimInfoWinR13ESlideTextBoxb
            (this,_10SimInfoWin_m_playerNameBoxs + *(int *)&this->field_0x30,true);
  if (this->m_curwindow == 3) {
    Cleanup__13ERelationsWin(&this->m_rltnsMenu);
    Init__13ERelationsWinP8cXPerson
              (&this->m_rltnsMenu,
               (cXPerson__78_985 *)_globals._pSelectedSims[*(int *)&this->field_0x30]);
  }
  return;
}

void ESlideTextBox::Update() {
	float slideDur;
	float mu;
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
  
  if ((long)*(int *)this != 0) {
    fVar6 = this->m_clock + _dt;
    this->m_clock = fVar6;
    if (0.4 <= fVar6) {
      this->m_clock = 0.4;
      puVar1 = (undefined *)((int)&(this->m_vStop).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      uVar2 = (uint)&this->m_vStop & 7;
      uVar5 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              (long)*(int *)this & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8
              | *(ulong *)((int)&this->m_vStop - uVar2) >> uVar2 * 8;
      puVar1 = (undefined *)((int)&(this->m_vCur).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar3);
      *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
      uVar3 = (uint)&this->m_vCur & 7;
      puVar4 = (ulong *)((int)&this->m_vCur - uVar3);
      *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      fVar7 = (this->m_vStart).field0_0x0.d[0];
                    /* end of inlined section */
      fVar6 = 1.0 - (0.4 - fVar6) / 0.4;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      fVar6 = fVar6 * -2.0 * fVar6 * fVar6 + fVar6 * 3.0 * fVar6;
      uVar5 = CONCAT44((this->m_vStart).field0_0x0.d[1] +
                       ((this->m_vStop).field0_0x0.d[1] - (this->m_vStart).field0_0x0.d[1]) * fVar6,
                       fVar7 + ((this->m_vStop).field0_0x0.d[0] - fVar7) * fVar6);
      puVar1 = (undefined *)((int)&(this->m_vCur).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar3);
      *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
      uVar3 = (uint)&this->m_vCur & 7;
      puVar4 = (ulong *)((int)&this->m_vCur - uVar3);
      *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    }
  }
                    /* end of inlined section */
  return;
}

void ESlideTextBox::Draw(ERC *prc, c16 *szText, int ijust, EVec4 &vColor) {
	ETexture *ptxt;
	float shdw;
	float totalw;
	EVec2 vStart;
	float textgap;
	float textgapy;
	EVec2 vFontPos;
	ETexture *this;
	EGraphics *this;
	EVec2 &v;
	EVec4 &vColor;
	ERC *prc;
	u16 *szString;
	
  undefined8 uVar1;
  ERFont *this_00;
  float fVar2;
  float fVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  EVec2 vStart;
  EVec2 vFontPos;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
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
  
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (*(int *)this != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStart.field0_0x0.d[0] = (this->m_vCur).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar6 = (float)(uint)*(ushort *)
                          (*(int *)(((_10SimInfoWin_m_pTextPopOutC->m_rtextureList).field0_0x0.m_l.
                                    m_pHead)->data + 0x14) + 0x10) / (float)_pGfx->m_xscreen;
    fVar3 = 0.02;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStart.field0_0x0.d[1] = (this->m_vCur).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar2 = fVar3;
    if (ijust == 1) {
      vStart.field0_0x0.d[0] = vStart.field0_0x0.d[0] - fVar6 * 6.0;
    }
    else if (ijust == 0) {
      fVar2 = -0.02;
      Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextPopOutL,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vFontPos.field0_0x0.d[1] = 1.0;
      vFontPos.field0_0x0.d[0] = 1.0;
      local_d4 = 1.0;
      local_d8 = 1.0;
      local_dc = 1.0;
      local_e0 = 1.0;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vStart,&vFontPos,
                 &local_e0);
      vStart.field0_0x0.d[0] = vStart.field0_0x0.d[0] + fVar6;
    }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextPopOutC,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar4 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    uVar5 = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vFontPos.field0_0x0.d[0] = 5.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vFontPos.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_c4 = 0x3f800000;
    local_c8 = 0x3f800000;
    local_cc = 0x3f800000;
    local_d0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vStart,&vFontPos,
               &local_d0);
    vStart.field0_0x0.d[0] = vStart.field0_0x0.d[0] + fVar6 * 5.0;
    if (ijust == 1) {
      Select__8ERShaderP3ERCi(_10SimInfoWin_m_pTextPopOutR,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      vFontPos.field0_0x0.d[0] = fVar4;
      vFontPos.field0_0x0.d[1] = fVar4;
      local_e0 = fVar4;
      local_dc = fVar4;
      local_d8 = fVar4;
      local_d4 = fVar4;
      (*(code *)prc->__vtable[1].ClipRect)
                (uVar5,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vStart,
                 &vFontPos,(EVec2 *)&local_e0);
    }
    this_00 = _globals.m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vFontPos.field0_0x0.d[0] = (this->m_vCur).field0_0x0.d[0] - fVar2;
    vFontPos.field0_0x0.d[1] = (this->m_vCur).field0_0x0.d[1] + fVar3;
    uVar1 = *(undefined8 *)&vColor->field0_0x0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    fVar2 = (vColor->field0_0x0).d[2];
    fVar3 = (vColor->field0_0x0).d[3];
                    /* end of inlined section */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)uVar1;
    (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar1 >> 0x20);
    (this_00->m_vColor).field0_0x0.d[2] = fVar2;
    (this_00->m_vColor).field0_0x0.d[3] = fVar3;
    SetSize__6ERFontffb(this_00,16.0,0.95,true);
    Select__6ERFontP3ERC(this_00,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_e0 = vFontPos.field0_0x0.d[0];
    local_dc = vFontPos.field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this_00,prc,szText,true,(EVec2 *)&local_e0,ijust,E_FAY_TOP,(EVec2 *)0x0);
  }
                    /* end of inlined section */
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

Neighbor** Neighbor ** copy_backward<Neighbor **, Neighbor **>(Neighbor **first, Neighbor **last, Neighbor **result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      *result = *last;
    } while (first != last);
  }
  return result;
}

void* __malloc_alloc_template<0>::oom_malloc(unsigned int n) {
  void *pvVar1;
  
  do {
    (*(code *)0x0)();
    pvVar1 = malloc(n);
  } while (pvVar1 == (void *)0x0);
  return pvVar1;
}

Neighbor** Neighbor ** uninitialized_copy<Neighbor **, Neighbor **>(Neighbor **first, Neighbor **last, Neighbor **result) {
	Neighbor **p;
	Neighbor *&value;
	void *pAddress;
	
  Neighbor *pNVar1;
  Neighbor **ppNVar2;
  
  ppNVar2 = result;
  if (first != last) {
    do {
      pNVar1 = *first;
      first = first + 1;
      result = ppNVar2 + 1;
      *ppNVar2 = pNVar1;
      ppNVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<Neighbor *, __malloc_alloc_template<0> >::insert_aux(Neighbor **position, Neighbor *&x) {
	Neighbor *x_copy;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	void *result;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	Neighbor **p;
	Neighbor *&value;
	void *pAddress;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	Neighbor **first;
	Neighbor **pointer;
	vector<Neighbor *,__malloc_alloc_template<0> > *this;
	
  Neighbor *pNVar1;
  uint size;
  Neighbor **ppNVar2;
  int iVar3;
  Neighbor **ppNVar4;
  int iVar5;
  
  ppNVar2 = this->finish;
  if (ppNVar2 == this->end_of_storage) {
    iVar5 = (int)ppNVar2 - (int)this->start >> 2;
    iVar3 = 1;
    if (iVar5 != 0) {
      iVar3 = iVar5 << 1;
    }
                    /* inlined from ../MSrc/alloc.h */
    size = iVar3 << 2;
    if (iVar3 == 0) {
      ppNVar2 = (Neighbor **)0x0;
      size = 0;
    }
    else {
      ppNVar2 = (Neighbor **)malloc(size);
      if (ppNVar2 == (Neighbor **)0x0) {
        ppNVar2 = (Neighbor **)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
      }
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZPP8NeighborZPP8Neighbor_X01X01X11_X11(this->start,position,ppNVar2);
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    *(Neighbor **)((int)ppNVar2 + ((int)position - (int)this->start)) = *x;
                    /* end of inlined section */
    uninitialized_copy__H2ZPP8NeighborZPP8Neighbor_X01X01X11_X11
              (position,this->finish,
               (Neighbor **)((int)ppNVar2 + (int)position + (4 - (int)this->start)));
                    /* inlined from ../MSrc/algobase.h */
    ppNVar4 = this->start;
    if (ppNVar4 == this->finish) {
      ppNVar4 = this->start;
    }
    else {
      do {
        ppNVar4 = ppNVar4 + 1;
      } while (ppNVar4 != this->finish);
                    /* end of inlined section */
      ppNVar4 = this->start;
    }
                    /* inlined from ../MSrc/alloc.h */
    if ((ppNVar4 != (Neighbor **)0x0) && ((int)this->end_of_storage - (int)ppNVar4 >> 2 != 0)) {
      free(ppNVar4);
                    /* end of inlined section */
    }
    ppNVar4 = ppNVar2 + iVar5;
    this->start = ppNVar2;
    this->end_of_storage = (Neighbor **)((int)ppNVar2 + size);
  }
  else {
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    *ppNVar2 = ppNVar2[-1];
                    /* end of inlined section */
    pNVar1 = *x;
    copy_backward__H2ZPP8NeighborZPP8Neighbor_X01X01X11_X11(position,this->finish + -1,this->finish)
    ;
    *position = pNVar1;
    ppNVar4 = this->finish;
  }
  this->finish = ppNVar4 + 1;
  return;
}

int int __lg<int>(int n) {
	int k;
	
  int iVar1;
  
  iVar1 = 0;
  if (n != 1) {
    do {
      n = n / 2;
      iVar1 = iVar1 + 1;
    } while (n != 1);
  }
  return iVar1;
}

void void __push_heap<Neighbor **, int, Neighbor *, ERelationsWinCmp>(Neighbor **first, int holeIndex, int topIndex, Neighbor *value, ERelationsWinCmp comp) {
	int parent;
	
  bool bVar1;
  int iVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar3;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  ERelationsWinCmp local_80 [4];
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
  iVar2 = holeIndex + -1;
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_80[0].m_player = comp.m_player;
  while( true ) {
    iVar3 = iVar2 / 2;
    if (holeIndex <= topIndex) break;
    bVar1 = __cl__16ERelationsWinCmpP8NeighborT1(local_80,first[iVar3],value);
    if (!bVar1) break;
    iVar2 = iVar3 + -1;
    first[holeIndex] = first[iVar3];
    holeIndex = iVar3;
  }
  first[holeIndex] = value;
  return;
}

void void __adjust_heap<Neighbor **, int, Neighbor *, ERelationsWinCmp>(Neighbor **first, int holeIndex, int len, Neighbor *value, ERelationsWinCmp comp) {
	int topIndex;
	int secondChild;
	
  bool bVar1;
  Neighbor **ppNVar2;
  int iVar3;
  int iVar4;
  undefined8 unaff_s0;
  int holeIndex_00;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  ERelationsWinCmp local_80 [4];
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
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar3 = holeIndex * 2 + 2;
  holeIndex_00 = holeIndex;
  local_80[0].m_player = comp.m_player;
  while (iVar3 < len) {
    bVar1 = __cl__16ERelationsWinCmpP8NeighborT1(local_80,first[iVar3],(first + iVar3)[-1]);
    iVar4 = iVar3;
    if (bVar1) {
      iVar4 = iVar3 + -1;
    }
    first[holeIndex_00] = first[iVar4];
    holeIndex_00 = iVar4;
    iVar3 = (iVar4 + 1) * 2;
  }
  if (iVar3 == len) {
    ppNVar2 = first + holeIndex_00;
    holeIndex_00 = iVar3 + -1;
    *ppNVar2 = first[iVar3 + -1];
  }
  __push_heap__H4ZPP8NeighborZiZP8NeighborZ16ERelationsWinCmp_X01X11X11X21X31_v
            (first,holeIndex_00,holeIndex,value,local_80[0]);
  return;
}

void void __make_heap<Neighbor **, ERelationsWinCmp, Neighbor *, int>(Neighbor **first, Neighbor **last, ERelationsWinCmp comp) {
	ptrdiff_t parent;
	
  int holeIndex;
  Neighbor **ppNVar1;
  int len;
  
  len = (int)last - (int)first >> 2;
  if (1 < len) {
    holeIndex = (len + -2) / 2;
    ppNVar1 = first + holeIndex;
    while( true ) {
      __adjust_heap__H4ZPP8NeighborZiZP8NeighborZ16ERelationsWinCmp_X01X11X11X21X31_v
                (first,holeIndex,len,*ppNVar1,comp);
      ppNVar1 = ppNVar1 + -1;
      if (holeIndex == 0) break;
      holeIndex = holeIndex + -1;
    }
  }
  return;
}

void void sort_heap<Neighbor **, ERelationsWinCmp>(Neighbor **first, Neighbor **last, ERelationsWinCmp comp) {
	Neighbor **first;
	ERelationsWinCmp comp;
	ERelationsWinCmp comp;
	Neighbor **first;
	Neighbor **first;
	Neighbor *value;
	ERelationsWinCmp comp;
	
  Neighbor *value;
  Neighbor **ppNVar1;
  int iVar2;
  
  if (1 < (int)last - (int)first >> 2) {
    iVar2 = (int)last - (int)first;
    ppNVar1 = last;
    do {
      ppNVar1 = ppNVar1 + -1;
      value = *ppNVar1;
      iVar2 = iVar2 + -4;
      last = last + -1;
      *ppNVar1 = *first;
      __adjust_heap__H4ZPP8NeighborZiZP8NeighborZ16ERelationsWinCmp_X01X11X11X21X31_v
                (first,0,iVar2 >> 2,value,comp);
    } while (1 < (int)last - (int)first >> 2);
  }
  return;
}

void void __partial_sort<Neighbor **, Neighbor *, ERelationsWinCmp>(Neighbor **first, Neighbor **middle, Neighbor **last, ERelationsWinCmp comp) {
	Neighbor **first;
	Neighbor **last;
	ERelationsWinCmp comp;
	Neighbor **i;
	Neighbor **first;
	Neighbor **last;
	Neighbor **result;
	Neighbor *value;
	ERelationsWinCmp comp;
	
  bool bVar1;
  Neighbor *pNVar2;
  ERelationsWinCmp in_t0_lo;
  Neighbor **ppNVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  ERelationsWinCmp local_80 [4];
  ERelationsWinCmp local_70;
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
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
                    /* inlined from ../MSrc/heap.h */
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from ../MSrc/heap.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80[0].m_player = in_t0_lo.m_player;
  local_70.m_player = in_t0_lo.m_player;
  __make_heap__H4ZPP8NeighborZ16ERelationsWinCmpZP8NeighborZi_X01X01X11PX21PX31_v
            (first,middle,in_t0_lo);
                    /* end of inlined section */
  if (middle < last) {
    pNVar2 = *middle;
    ppNVar3 = middle;
    while( true ) {
      bVar1 = __cl__16ERelationsWinCmpP8NeighborT1(local_80,pNVar2,*first);
      if (bVar1) {
                    /* inlined from ../MSrc/iterator.h */
        pNVar2 = *ppNVar3;
        local_70.m_player = local_80[0].m_player;
        *ppNVar3 = *first;
        __adjust_heap__H4ZPP8NeighborZiZP8NeighborZ16ERelationsWinCmp_X01X11X11X21X31_v
                  (first,0,(int)middle - (int)first >> 2,pNVar2,local_80[0]);
      }
                    /* end of inlined section */
      ppNVar3 = ppNVar3 + 1;
      if (last <= ppNVar3) break;
      pNVar2 = *ppNVar3;
    }
  }
  sort_heap__H2ZPP8NeighborZ16ERelationsWinCmp_X01X01X11_v(first,middle,local_80[0]);
  return;
}

Neighbor** Neighbor ** __unguarded_partition<Neighbor **, Neighbor *, ERelationsWinCmp>(Neighbor **first, Neighbor **last, Neighbor *pivot, ERelationsWinCmp comp) {
	Neighbor **a;
	Neighbor **b;
	Neighbor **b;
	Neighbor **a;
	Neighbor *tmp;
	
  bool bVar1;
  Neighbor *pNVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  ERelationsWinCmp local_50 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50[0].m_player = comp.m_player;
  while( true ) {
    last = last + -1;
    while (bVar1 = __cl__16ERelationsWinCmpP8NeighborT1(local_50,*first,pivot), bVar1) {
      first = first + 1;
    }
    pNVar2 = *last;
    while (bVar1 = __cl__16ERelationsWinCmpP8NeighborT1(local_50,pivot,pNVar2), bVar1) {
      last = last + -1;
      pNVar2 = *last;
    }
    if (last <= first) break;
                    /* inlined from ../MSrc/algobase.h */
    pNVar2 = *first;
    *first = *last;
    *last = pNVar2;
    first = first + 1;
                    /* end of inlined section */
  }
                    /* end of inlined section */
  return first;
}

void void __introsort_loop<Neighbor **, Neighbor *, int, ERelationsWinCmp>(Neighbor **first, Neighbor **last, int depth_limit, ERelationsWinCmp comp) {
	Neighbor **cut;
	Neighbor **first;
	Neighbor **middle;
	Neighbor **last;
	ERelationsWinCmp comp;
	Neighbor *&a;
	Neighbor *&b;
	Neighbor *&c;
	ERelationsWinCmp comp;
	
  bool bVar1;
  int iVar2;
  Neighbor **ppNVar3;
  Neighbor **ppNVar4;
  ERelationsWinCmp in_t0_lo;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  ERelationsWinCmp local_70 [4];
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
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  iVar2 = (int)last - (int)first;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  while( true ) {
    if (iVar2 >> 2 < 0x11) {
      return;
    }
    if (comp.m_player == 0) break;
    comp.m_player = comp.m_player + -1;
    ppNVar4 = first + (((int)last - (int)first >> 2) - ((int)last - (int)first >> 0x1f) >> 1);
    bVar1 = __cl__16ERelationsWinCmpP8NeighborT1(local_70,*first,*ppNVar4);
    if (bVar1) {
      bVar1 = __cl__16ERelationsWinCmpP8NeighborT1(local_70,*ppNVar4,last[-1]);
      ppNVar3 = ppNVar4;
      if ((!bVar1) &&
         (bVar1 = __cl__16ERelationsWinCmpP8NeighborT1(local_70,*first,last[-1]),
         ppNVar3 = last + -1, !bVar1)) {
        ppNVar3 = first;
      }
    }
    else {
      bVar1 = __cl__16ERelationsWinCmpP8NeighborT1(local_70,*first,last[-1]);
      ppNVar3 = first;
      if ((!bVar1) &&
         (bVar1 = __cl__16ERelationsWinCmpP8NeighborT1(local_70,*ppNVar4,last[-1]),
         ppNVar3 = last + -1, !bVar1)) {
        ppNVar3 = ppNVar4;
      }
    }
                    /* end of inlined section */
    ppNVar4 = __unguarded_partition__H3ZPP8NeighborZP8NeighborZ16ERelationsWinCmp_X01X01X11X21_X01
                        (first,last,*ppNVar3,in_t0_lo);
    __introsort_loop__H4ZPP8NeighborZP8NeighborZiZ16ERelationsWinCmp_X01X01PX11X21X31_v
              (ppNVar4,last,0,comp);
    iVar2 = (int)ppNVar4 - (int)first;
    last = ppNVar4;
  }
  __partial_sort__H3ZPP8NeighborZP8NeighborZ16ERelationsWinCmp_X01X01X01PX11X21_v
            (first,last,last,(ERelationsWinCmp)0x0);
  return;
}

void void __unguarded_linear_insert<Neighbor **, Neighbor *, ERelationsWinCmp>(Neighbor **last, Neighbor *value, ERelationsWinCmp comp) {
	Neighbor **next;
	
  bool bVar1;
  Neighbor **ppNVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  ERelationsWinCmp local_50 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  ppNVar2 = last + -1;
  local_50[0].m_player = comp.m_player;
  while (bVar1 = __cl__16ERelationsWinCmpP8NeighborT1(local_50,value,*ppNVar2), bVar1) {
    *last = *ppNVar2;
    last = ppNVar2;
    ppNVar2 = ppNVar2 + -1;
  }
  *last = value;
  return;
}

void void __insertion_sort<Neighbor **, ERelationsWinCmp>(Neighbor **first, Neighbor **last, ERelationsWinCmp comp) {
	Neighbor **i;
	Neighbor **first;
	Neighbor **last;
	ERelationsWinCmp comp;
	Neighbor *value;
	
  Neighbor *n1;
  bool bVar1;
  undefined8 unaff_s0;
  Neighbor **last_00;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  ERelationsWinCmp local_70 [4];
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
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (first != last) {
    for (last_00 = first + 1; last_00 != last; last_00 = last_00 + 1) {
      n1 = *last_00;
      local_70[0].m_player = comp.m_player;
      bVar1 = __cl__16ERelationsWinCmpP8NeighborT1(local_70,n1,*first);
      if (bVar1) {
        copy_backward__H2ZPP8NeighborZPP8Neighbor_X01X01X11_X11(first,last_00,last_00 + 1);
        *first = n1;
      }
      else {
        __unguarded_linear_insert__H3ZPP8NeighborZP8NeighborZ16ERelationsWinCmp_X01X11X21_v
                  (last_00,n1,local_70[0]);
      }
                    /* end of inlined section */
    }
  }
  return;
}

void void __unguarded_insertion_sort_aux<Neighbor **, Neighbor *, ERelationsWinCmp>(Neighbor **first, Neighbor **last, ERelationsWinCmp comp) {
	Neighbor **i;
	
  Neighbor *value;
  ERelationsWinCmp in_a3_lo;
  Neighbor **ppNVar1;
  
  if (first != last) {
    value = *first;
    while( true ) {
      ppNVar1 = first + 1;
      __unguarded_linear_insert__H3ZPP8NeighborZP8NeighborZ16ERelationsWinCmp_X01X11X21_v
                (first,value,in_a3_lo);
      if (ppNVar1 == last) break;
      value = *ppNVar1;
      first = ppNVar1;
    }
  }
  return;
}

void void __final_insertion_sort<Neighbor **, ERelationsWinCmp>(Neighbor **first, Neighbor **last, ERelationsWinCmp comp) {
	Neighbor **last;
	ERelationsWinCmp comp;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
  if ((int)last - (int)first >> 2 < 0x11) {
    __insertion_sort__H2ZPP8NeighborZ16ERelationsWinCmp_X01X01X11_v(first,last,comp);
                    /* end of inlined section */
  }
  else {
    __insertion_sort__H2ZPP8NeighborZ16ERelationsWinCmp_X01X01X11_v(first,first + 0x10,comp);
    __unguarded_insertion_sort_aux__H3ZPP8NeighborZP8NeighborZ16ERelationsWinCmp_X01X01PX11X21_v
              (first + 0x10,last,(ERelationsWinCmp)0x0);
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	ESlideTextBox *this;
	void *pAddress;
	ESlideTextBox *this;
	void *pAddress;
	
  UiStringLookUpTableEntry *pUVar1;
  int iVar2;
  ESlideTextBox *pEVar3;
  
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___10EFixedPool(&_eRelationsIconAllocPool.field0_0x0,2);
      pUVar1 = _10SimInfoWin___MoodStrings;
      do {
        pUVar1 = (UiStringLookUpTableEntry *)((int)pUVar1 + -0x20);
      } while ((ESlideTextBox *)pUVar1 != _10SimInfoWin_m_playerNameBoxs);
      pEVar3 = _10SimInfoWin_m_playerNameBoxs;
      do {
        pEVar3 = pEVar3 + -1;
      } while (pEVar3 != _10SimInfoWin_m_nameBoxs);
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      pEVar3 = _10SimInfoWin_m_nameBoxs;
      iVar2 = 1;
      _InfoOff1.field0_0x0.d[1] = -0.74;
      _InfoOff2.field0_0x0.d[0] = -0.32;
      _vTextOff.field0_0x0.d[0] = 0.312;
      _vTextOff.field0_0x0.d[1] = 0.02;
      _InfoOff.field0_0x0.d[0] = 0.0;
      _InfoOff.field0_0x0.d[1] = 0.0;
      _InfoOff1.field0_0x0.d[0] = 0.0;
      _InfoOff2.field0_0x0.d[1] = 0.0;
      do {
        iVar2 = iVar2 + -1;
        Init__13ESlideTextBox(pEVar3);
        pEVar3 = pEVar3 + 1;
      } while (iVar2 != -1);
      iVar2 = 1;
      pEVar3 = _10SimInfoWin_m_playerNameBoxs;
      do {
        iVar2 = iVar2 + -1;
        Init__13ESlideTextBox(pEVar3);
        pEVar3 = pEVar3 + 1;
      } while (iVar2 != -1);
      _SimInfoWin_bevel_off.field0_0x0.d[1] = 0.765;
      _vlight_bar_gap_wh.field0_0x0.d[1] = 0.03;
      _SimInfoWin_ULUV.field0_0x0.d[1] = 0.75;
      _vBevel2P.field0_0x0.d[1] = 0.74;
      _vBevel1P.field0_0x0.d[1] = 0.232;
      _vBevel1PWH.field0_0x0.d[1] = 0.008928572;
      _SimInfoWin_bevel_off.field0_0x0.d[0] = 0.2285;
      _vlight_bar_gap_wh.field0_0x0.d[0] = 0.00625;
      _vBevel2PWH.field0_0x0.d[1] = 0.008928572;
      _vBevel1PWH.field0_0x0.d[0] = 1.0;
      _SimInfoWin_ULUV.field0_0x0.d[0] = 0.0;
      _SimInfoWin_BRUV.field0_0x0.d[0] = 1.0;
      _SimInfoWin_BRUV.field0_0x0.d[1] = 0.0;
      _vBevel2P.field0_0x0.d[0] = 0.0;
      _vBevel2PWH.field0_0x0.d[0] = 1.0;
      _vBevel1P.field0_0x0.d[0] = 0.0;
      __10EFixedPool(&_eRelationsIconAllocPool.field0_0x0);
      Init__10EFixedPooliiPv
                (&_eRelationsIconAllocPool.field0_0x0,0x74,0x40,_eRelationsIconAllocPool.m_buffer);
    }
  }
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

void ERelationsIcon::SafeDelete() {
  EUIObjectNode__vtable *pEVar1;
  
  if (this != (ERelationsIcon *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1->Draw)
              ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar1->Update,3);
  }
  return;
}

u16* ERelationsIcon::GetFirstName() {
  short *psVar1;
  
  psVar1 = c_str__C8BString2(&this->m_firstName2);
  return psVar1;
}

u16* ERelationsIcon::GetFamilyName() {
  short *psVar1;
  
  psVar1 = c_str__C8BString2(&this->m_famName2);
  return psVar1;
}

void ESlideTextBox::Init() {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(undefined4 *)this = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->m_vCur).field0_0x0.d[0] = -1.0;
                    /* end of inlined section */
  this->m_clock = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->m_vStart).field0_0x0.d[1] = -1.0;
  (this->m_vStart).field0_0x0.d[0] = -1.0;
  (this->m_vStop).field0_0x0.d[1] = -1.0;
  (this->m_vStop).field0_0x0.d[0] = -1.0;
  (this->m_vCur).field0_0x0.d[1] = -1.0;
  return;
}

void SimInfoWin::SetEvent(PanelEvent event, u32 data) {
  return;
}

s32 SimInfoWin::GetWindow() {
  return this->m_curwindow;
}

void SimInfoWin::ResetAllclocks() {
  this->m_introTime = 0.0;
  this->m_infoInTime = 0.0;
  this->m_hoverTime = 0.0;
  return;
}

void global constructors keyed to _textwidth() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _textwidth() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
