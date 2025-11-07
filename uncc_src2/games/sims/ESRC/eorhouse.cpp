// STATUS: NOT STARTED

#include "eorhouse.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb4430;
	__vtbl_ptr_type *$vf3624;
	
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
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb4793;
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
	TNodeList<ISimInstance *> m_objList;
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
	Panelstateman *$vb4793;
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
	Panelstateman *$vb4793;
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
	Panelstateman *$vb4793;
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

float _sunIntensity = 1.5f;

EVec3 _vSunPos = {
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

EVec3 _vSunColor = {
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

EVec3 _vSunColorTimeOfDay[4] = {
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
	}
};

float _sunIntensityTimeOfDay[4] = {
	/* [0] = */ 1.5f,
	/* [1] = */ 0.8f,
	/* [2] = */ 0.55f,
	/* [3] = */ 0.8f
};

float _roomambient = 0.2f;
float _roomfalloff = 1.5f;
float _outsideambient = 0.285f;
bool _bshowAmbientLightrad = false;
bool _lmcompute = false;
bool _computefloor = false;
bool _computewalls = false;
bool _bDebugSun = false;
bool _bDidInitialCompute = false;

int _LevelResTable[8] = {
	/* [0] = */ -1978871955,
	/* [1] = */ 1668246104,
	/* [2] = */ 342383310,
	/* [3] = */ 1668246104,
	/* [4] = */ -93963294,
	/* [5] = */ -93963294,
	/* [6] = */ 342383310,
	/* [7] = */ -93963294
};

bool _hackTimeOfDay = false;
Int _hackhour = 5;
bool _EHOUSE_NO_AMBIENT = false;

TimeOfDay EorGetTimeOfDay(int lot) {
  bool bVar1;
  TimeOfDay TVar2;
  
  bVar1 = IsChallangeMode__7EGlobal(&_globals);
  if (bVar1) {
    TVar2 = (uint)(lot - 5U < 2) << 1;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    TVar2 = (*(code *)_5Globs_pSimulator->__vtable[1].DoStream)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable[1].DoCommand);
  }
  return TVar2;
}

EHouse* EHouse::EHouse(EVec2 &vOff, int lot, ERLevel *pLevel, bool bObjects, bool bWalls, bool bFloors, bool bForNeighborHoodMode) {
	EVec2 *this;
	EVec2 *this;
	EHouse *pHouse;
	int lotid;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ERoom *pEVar5;
  ERoofs *pEVar6;
  EIObjectMan *this_00;
  ERLevel *pEVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  float fVar11;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_floors).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_floors).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  __13ERedBlackTree(&(this->m_roomLights).field0_0x0);
  __13ERedBlackTree(&(this->m_particleEffectMan).field0_0x0);
  __13ERedBlackTree(&(this->m_lmcomputeList).field0_0x0);
                    /* end of inlined section */
  *(uint *)&this->m_bShadows = (int)bForNeighborHoodMode ^ 1;
  this->m_wallUpDownState = WallHalfUP;
  *(int *)this = (int)bForNeighborHoodMode;
  this->m_lotNum = lot;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (this->m_vHouse_off).field0_0x0.d[0] = (vOff->field0_0x0).d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar11 = (vOff->field0_0x0).d[0];
                    /* end of inlined section */
  *(undefined4 *)&this->m_bAmInit = 0;
  (this->m_vHouse_off).field0_0x0.d[1] = fVar11;
  this->m_pSun = (EIPointLight *)0x0;
  if (bWalls) {
    pEVar5 = (ERoom *)__builtin_new(0x80);
    pEVar5 = __5ERoomb(pEVar5,(bool)((byte)*(undefined4 *)this ^ 1));
  }
  else {
    pEVar5 = (ERoom *)0x0;
  }
  this->m_pWallMan2 = pEVar5;
  if (*(int *)this == 0) {
    pEVar6 = (ERoofs *)__builtin_new(0xa4);
    pEVar6 = __6ERoofs(pEVar6);
    this->m_pRoof = pEVar6;
  }
  else {
    this->m_pRoof = (ERoofs *)0x0;
  }
  this_00 = (EIObjectMan *)0x0;
  if (bObjects) {
    this_00 = (EIObjectMan *)__builtin_new(0x14);
                    /* inlined from c:/eor/src2/games/sims/ESRC/iobjectman.h */
    __Q211EIObjectMan27ISimInstanceHandleGenerator((ISimInstanceHandleGenerator *)this_00);
    __13ERedBlackTree(&(this_00->m_objects).field0_0x0);
                    /* end of inlined section */
    this_00->m_pHouse = this;
  }
  this->m_pObjectMan = this_00;
  this->m_pFloorLM = (EILightmap__16_3148 *)0x0;
  if (pLevel == (ERLevel *)0x0) {
    iVar8 = lot + -1;
    if (iVar8 < 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = 7;
      if (iVar8 < 8) {
        iVar9 = iVar8;
      }
    }
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
                    /* end of inlined section */
    puVar10 = (uint *)(_LevelResTable + iVar9);
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
    AddRef__16EResourceManagerUiP5EFilei(&_datasetman.field0_0x0,*puVar10,(EFile *)0x0,0);
    pEVar7 = (ERLevel *)
             AddRef__16EResourceManagerUiP5EFilei(&_levelman.field0_0x0,*puVar10,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pLevel = pEVar7;
    DelRef__16EResourceManagerUi(&_datasetman.field0_0x0,*puVar10);
    this->m_pLightShader = (ERShader *)0x0;
  }
  else {
    this->m_pLevel = pLevel;
    AddRef__9EResource(&pLevel->field0_0x0);
    this->m_pLightShader = (ERShader *)0x0;
  }
  this->m_pDayShader = (ERShader *)0x0;
  this->m_pNightShader = (ERShader *)0x0;
  this->m_pBuildShader = (ERShader *)0x0;
  *(undefined4 *)&this->m_binUpdate = 0;
  this->m_lmStage = LM_STAGE_NONE;
  this->m_lmLastStage = LM_STAGE_NONE;
  memset(this->m_computeFns,0,0x30);
  uVar4 = DAT_003abd40;
  puVar1 = (undefined *)((int)&this->m_computeFns[0].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003abd40 >> (7 - uVar2) * 8;
  uVar2 = (uint)this->m_computeFns & 7;
  puVar3 = (ulong *)((int)this->m_computeFns - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003abd48;
  puVar1 = (undefined *)((int)&this->m_computeFns[1].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003abd48 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_computeFns + 1) & 7;
  puVar3 = (ulong *)((int)(this->m_computeFns + 1) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003abd50;
  puVar1 = (undefined *)((int)&this->m_computeFns[2].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003abd50 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_computeFns + 2) & 7;
  puVar3 = (ulong *)((int)(this->m_computeFns + 2) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003abd58;
  puVar1 = (undefined *)((int)&this->m_computeFns[3].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003abd58 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_computeFns + 3) & 7;
  puVar3 = (ulong *)((int)(this->m_computeFns + 3) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003abd60;
  puVar1 = (undefined *)((int)&this->m_computeFns[4].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003abd60 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_computeFns + 4) & 7;
  puVar3 = (ulong *)((int)(this->m_computeFns + 4) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  uVar4 = DAT_003abd68;
  puVar1 = (undefined *)((int)&this->m_computeFns[5].__pfn_or_delta2 + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003abd68 >> (7 - uVar2) * 8;
  uVar2 = (uint)(this->m_computeFns + 5) & 7;
  puVar3 = (ulong *)((int)(this->m_computeFns + 5) - uVar2);
  *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  __bDidInitialCompute = 0;
  return this;
}

void EHouse::~EHouse(int __in_chrg) {
	void *pAddress;
	
  __bDidInitialCompute = 0;
  Cleanup__6EHouse(this);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  RemoveAll__13ERedBlackTree(&(this->m_lmcomputeList).field0_0x0);
  RemoveAll__13ERedBlackTree(&(this->m_particleEffectMan).field0_0x0);
  RemoveAll__13ERedBlackTree(&(this->m_roomLights).field0_0x0);
  RemoveAll__9ENodeList(&(this->m_floors).field0_0x0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EHouse::Init() {
  ERShader *pEVar1;
  
  InitTable__16EFloorShdTblNode();
  BuildHouse__6EHouseb(this,(bool)((byte)*(undefined4 *)this ^ 1));
  *(undefined4 *)&this->m_bAmInit = 1;
  while (this->m_pLightShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pLightShader->field0_0x0);
    this->m_pLightShader = (ERShader *)0x0;
  }
  pEVar1 = this->m_pDayShader;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pDayShader = (ERShader *)0x0;
    pEVar1 = this->m_pDayShader;
  }
  pEVar1 = this->m_pNightShader;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pNightShader = (ERShader *)0x0;
    pEVar1 = this->m_pNightShader;
  }
  pEVar1 = this->m_pBuildShader;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pBuildShader = (ERShader *)0x0;
    pEVar1 = this->m_pBuildShader;
  }
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x4b10d260,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pLightShader = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xbbb135f1,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pDayShader = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x310bc7ee,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pNightShader = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xb50a5be0,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBuildShader = pEVar1;
  return;
}

void EHouse::BuildHouse(bool useLightMaps) {
	EBound3 bLevel;
	EBoundSphere tempSphere;
	EVec3 vRoofOff;
	
  EGlobalManagerClient__vtable *pEVar1;
  int iVar2;
  EIPointLight *pEVar3;
  EIObjectMan *this_00;
  ERoofs *this_01;
  EBound3 bLevel;
  EBoundSphere tempSphere;
  EVec3 vRoofOff;
  
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  CalcBounds__7ERLevel(&bLevel,this->m_pLevel);
  CalcBoundSphere__7EBound3R12EBoundSphere(&bLevel,&tempSphere);
  _globals._EHouse_levelrad =
       (float)((int)tempSphere.radius * (uint)(128.0 < tempSphere.radius) |
              (uint)(128.0 >= tempSphere.radius) * 0x43000000);
  if (*(int *)&this->m_bAmInit == 0) {
    this_00 = this->m_pObjectMan;
  }
  else {
    Cleanup__6EHouse(this);
    this_00 = this->m_pObjectMan;
  }
  if (this_00 == (EIObjectMan *)0x0) {
    iVar2 = *(int *)this;
  }
  else {
    Init__11EIObjectMan(this_00);
    PostLoad__11EIObjectMan(this->m_pObjectMan);
    iVar2 = *(int *)this;
  }
  if (iVar2 == 0) {
    CreateFloors__7EIFloorP6EHouse((EHouse__26_3190 *)this);
    this_01 = this->m_pRoof;
  }
  else {
    this_01 = this->m_pRoof;
  }
  if (this_01 != (ERoofs *)0x0) {
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    vRoofOff.field0_0x0.d[0] = (this->m_vHouse_off).field0_0x0.d[0] - 0.5;
    vRoofOff.field0_0x0.d[1] = (this->m_vHouse_off).field0_0x0.d[1] - 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    vRoofOff.field0_0x0.d[2] = -0.1;
    CreateRoof__6ERoofsR5EVec3b(this_01,&vRoofOff,true);
    SetVisible__6ERoofsb(this->m_pRoof,false);
    InsertInstance__7ERLevelP9EInstanceT1
              (this->m_pLevel,&this->m_pRoof->field0_0x0,(EInstance *)0x0);
  }
  Init__5ERoom(this->m_pWallMan2);
  if (*(int *)this == 0) {
    pEVar3 = (EIPointLight *)__builtin_new(0xbc);
    pEVar3 = __12EIPointLight(pEVar3);
    this->m_pSun = pEVar3;
    *(undefined4 *)&pEVar3->m_distanceFalloffEnabled = 0;
    InsertInstance__7ERLevelP9EInstanceT1(this->m_pLevel,(EInstance *)this->m_pSun,(EInstance *)0x0)
    ;
    UpdateSun__6EHouse(this);
    InitRoomLighting__6EHouse(this);
    if ((*(int *)this == 0) && (Optimize__7ERLevel(this->m_pLevel), *(int *)this == 0)) {
      ForceFullLMCompute__6EHouse(this);
    }
  }
  return;
}

void EHouse::InitStage1() {
  return;
}

void EHouse::InitStage2() {
  return;
}

void EHouse::InitStage3() {
  return;
}

void EHouse::InitStage4() {
  return;
}

void EHouse::InitStage5() {
  return;
}

void EHouse::InitStage6() {
  return;
}

void EHouse::InitStage7() {
  return;
}

void EHouse::InitStage8() {
  return;
}

void EHouse::InitStage9() {
  return;
}

void EHouse::SetWallState(EWallUpDownStateType state) {
  this->m_wallUpDownState = state;
  if (this->m_pWallMan2 != (ERoom *)0x0) {
    EnableShadows__5ERoomb(this->m_pWallMan2,SUB41(*(undefined4 *)&this->m_bShadows,0));
    SetWallState__5ERoom20EWallUpDownStateType(this->m_pWallMan2,this->m_wallUpDownState);
    UpdateWallsHalfUp__5ERoomi(this->m_pWallMan2,0);
  }
  return;
}

void EHouse::SetNextWallMode() {
  EWallUpDownStateType EVar1;
  EGlobalManagerClient__vtable *pEVar2;
  bool bVar3;
  
  EVar1 = this->m_wallUpDownState;
  if (EVar1 != WallHalfUP) {
    if (1 < (int)EVar1) {
      this->m_wallUpDownState = WallUP;
      goto LAB_0013fa0c;
    }
    if (EVar1 != WallUP) {
      this->m_wallUpDownState = WallUP;
      goto LAB_0013fa0c;
    }
    bVar3 = IsTwoPlayer__7EGlobal(&_globals);
    if (!bVar3) {
      this->m_wallUpDownState = WallHalfUP;
      goto LAB_0013fa0c;
    }
  }
  this->m_wallUpDownState = WallDown;
LAB_0013fa0c:
  if (this->m_pWallMan2 != (ERoom *)0x0) {
    EnableShadows__5ERoomb(this->m_pWallMan2,SUB41(*(undefined4 *)&this->m_bShadows,0));
    SetWallState__5ERoom20EWallUpDownStateType(this->m_pWallMan2,this->m_wallUpDownState);
    UpdateWallsHalfUp__5ERoomi(this->m_pWallMan2,0);
  }
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar2[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[3].ManagedStartup);
  return;
}

void EHouse::ForceFullLMCompute() {
	EHouse *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
  if ((this->m_lmStage != LM_FULL_PREP_COMPUTE) && (this->m_lmStage != LM_EXECUTE_FULL_COMPUTE)) {
    this->m_lmStage = LM_FULL_PREP_COMPUTE;
  }
                    /* end of inlined section */
  return;
}

void EHouse::Draw(ERC *prc) {
	ERC *this;
	float v;
	EVec3 &vVec;
	EVec3 &vVec;
	
  undefined *puVar1;
  EIPointLight *pEVar2;
  ERLevel *pEVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ELights *pEVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
  pEVar7 = (ELights *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x50,0x10);
  fVar8 = _outsideambient;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar6 = CONCAT44(_outsideambient,_outsideambient);
  puVar1 = (undefined *)((int)&(pEVar7->a).vColor.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
  uVar4 = (uint)pEVar7 & 7;
  *(ulong *)((int)pEVar7 - uVar4) =
       uVar6 << uVar4 * 8 | *(ulong *)((int)pEVar7 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8
  ;
  (pEVar7->a).vColor.field0_0x0.d[2] = fVar8;
  pEVar2 = this->m_pSun;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar9 = (pEVar2->field0_0x0).m_intensity * 0.75;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = (pEVar2->field0_0x0).m_vColor.field0_0x0.d[2];
                    /* end of inlined section */
  uVar6 = CONCAT44(fVar9 * (pEVar2->field0_0x0).m_vColor.field0_0x0.d[1],
                   fVar9 * (pEVar2->field0_0x0).m_vColor.field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&pEVar7[1].a.vColor.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
  uVar4 = (uint)(pEVar7 + 1) & 7;
  puVar5 = (ulong *)((int)(pEVar7 + 1) - uVar4);
  *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  pEVar7[1].a.vColor.field0_0x0.d[2] = fVar9 * fVar8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pEVar2 = this->m_pSun;
  fVar8 = (pEVar2->m_vPos).field0_0x0.d[2];
                    /* end of inlined section */
  uVar6 = CONCAT44(-(pEVar2->m_vPos).field0_0x0.d[1],-(pEVar2->m_vPos).field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&pEVar7[2].a.vColor.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar6 >> (7 - uVar4) * 8;
  uVar4 = (uint)(pEVar7 + 2) & 7;
  puVar5 = (ulong *)((int)(pEVar7 + 2) - uVar4);
  *puVar5 = uVar6 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  pEVar7[2].a.vColor.field0_0x0.d[2] = -fVar8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar9 = pEVar7[2].a.vColor.field0_0x0.d[0];
  fVar8 = pEVar7[2].a.vColor.field0_0x0.d[1];
  fVar10 = pEVar7[2].a.vColor.field0_0x0.d[2];
  fVar8 = sqrtf(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
  if (fVar8 != 0.0) {
    fVar8 = 1.0 / fVar8;
    pEVar7[2].a.vColor.field0_0x0.d[0] = pEVar7[2].a.vColor.field0_0x0.d[0] * fVar8;
    fVar9 = pEVar7[2].a.vColor.field0_0x0.d[2];
    pEVar7[2].a.vColor.field0_0x0.d[1] = pEVar7[2].a.vColor.field0_0x0.d[1] * fVar8;
    pEVar7[2].a.vColor.field0_0x0.d[2] = fVar9 * fVar8;
  }
                    /* end of inlined section */
  _globals._nCurLights = 1;
  pEVar3 = this->m_pLevel;
  _globals._pCurLights = pEVar7;
  if (pEVar3 != (ERLevel *)0x0) {
                    /* inlined from /eor/src2/engine/level/e_rlevel.h */
    pEVar3->m_nDirLights = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/level/e_rlevel.h */
    pEVar3->m_pLights = pEVar7;
                    /* end of inlined section */
    Draw__7ERLevelP3ERCUii(this->m_pLevel,prc,4,0);
  }
  (*(code *)prc->__vtable->NewEntry)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Terminate,1);
  DrawTileBoundRects__11EIObjectManP3ERC(this->m_pObjectMan,prc);
  if (this->m_pWallMan2 != (ERoom *)0x0) {
    DrawWallsDebug__5ERoomP3ERC(this->m_pWallMan2,prc);
  }
  return;
}

bool EHouse::DrawLMCoputePrompt(ERC *prc, EVec2 &vPos, int player) {
	bool bInBuyBuild;
	bool drawblackrect;
	bool bDidDrawRect;
	float useAlpha;
	float scaler;
	TimeOfDay tod;
	
  ELMComputeStage EVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ERShader *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a0;
  undefined4 local_9c;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  bVar2 = false;
  if (_globals._pPanel != (EPanel *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
                    /* end of inlined section */
    bVar2 = (_globals._pPanel)->m_panleState + ~LIVE_SIM_EDIT < 2;
  }
  if (bVar2) {
    return false;
  }
  bVar2 = false;
  bVar3 = IsTwoPlayer__7EGlobal(&_globals);
  if ((bVar3) || (player != 0)) {
    bVar3 = IsTwoPlayer__7EGlobal(&_globals);
    if ((bVar3) && (player == 1)) {
      bVar2 = true;
    }
  }
  else {
    bVar2 = true;
  }
  bVar3 = false;
  EVar1 = this->m_lmStage;
  if ((((bVar2) && (EVar1 == LM_FULL_PREP_COMPUTE)) || (EVar1 == LM_EXECUTE_FULL_COMPUTE)) ||
     (EVar1 == LM_EXIT_FULL_COMPUTE)) {
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
    local_88 = this->m_fadeAlpha;
    if (__bDidInitialCompute == 0) {
      local_88 = 1.0;
    }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_90 = local_88 * _BLACK.field0_0x0.d[0];
    local_84 = local_88 * _BLACK.field0_0x0.d[3];
    local_8c = local_88 * _BLACK.field0_0x0.d[1];
    local_cc = 0;
    local_88 = local_88 * _BLACK.field0_0x0.d[2];
    local_d0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_bc = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_c0 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_b0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_ac = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_9c = 0;
    local_a0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_d0,&local_c0,
               &local_b0,&local_a0,&local_90);
    bVar3 = true;
  }
  if (__bDidInitialCompute == 0) {
    return bVar3;
  }
  if (!bVar2) {
    return bVar3;
  }
                    /* inlined from ../MSrc/Function.h */
                    /* end of inlined section */
  if (this->m_lmStage == LM_STAGE_NONE) {
    return bVar3;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  uVar4 = (*(code *)_5Globs_pSimulator->__vtable[1].DoStream)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable[1].DoCommand);
  if (this->m_lmStage == LM_INC_PREP_COMPUTE) {
    this_00 = this->m_pLightShader;
  }
  else if (this->m_lmStage == LM_EXECUTE_INC_COMPUTE) {
    this_00 = this->m_pLightShader;
  }
  else if (uVar4 < 2) {
    this_00 = this->m_pDayShader;
  }
  else {
    if (1 < (int)uVar4 - 2U) {
      Select__8ERShaderP3ERCi(this->m_pLightShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      goto LAB_0013fea0;
    }
    this_00 = this->m_pNightShader;
  }
  Select__8ERShaderP3ERCi(this_00,prc,0);
LAB_0013fea0:
                    /* end of inlined section */
  local_b8 = this->m_iconAlpha;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_c0 = local_b8 * _WHITE.field0_0x0.d[0];
  local_b4 = local_b8 * _WHITE.field0_0x0.d[3];
  local_bc = local_b8 * _WHITE.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_b8 = local_b8 * _WHITE.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_d0 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_cc = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,vPos,&local_d0,
             &local_c0);
  return true;
}

void EHouse::Update() {
	EPanel *this;
	EHouse *this;
	
  ERoom *this_00;
  
  *(undefined4 *)&this->m_binUpdate = 1;
  if (this->m_pLevel != (ERLevel *)0x0) {
    Update__7ERLevel(this->m_pLevel);
  }
  RemoveOrphanParticleEffectsFromLevel__6EHouse(this);
  if (__hackTimeOfDay == 0) {
    this_00 = this->m_pWallMan2;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pSimulator->__vtable[1].IsStopped)
              ((int)&_5Globs_pSimulator->__vtable +
               (int)*(short *)&_5Globs_pSimulator->__vtable[1].IsPaused,_hackhour);
    __hackTimeOfDay = 0;
    this_00 = this->m_pWallMan2;
  }
  if ((this_00 != (ERoom *)0x0) && (*(int *)this_00 == 0)) {
    UpdateWallsHalfUp__5ERoomi(this_00,0);
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
                    /* end of inlined section */
  if ((_globals._pPanel)->m_panleState + ~LIVE_SIM_EDIT < 2) {
    *(undefined4 *)&this->m_binUpdate = 0;
  }
  else {
    (*(code *)this->m_computeFns[this->m_lmStage].__pfn_or_delta2)
              (&((EHouse__2_990 *)(this->m_computeFns + -4))->m_bForNeighborHoodMode +
               (short)this->m_computeFns[this->m_lmStage].__delta);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
    if (((_16ISimsObjectModel_m_lightmapComputeList.field0_0x0.m_list.m_pHead !=
          (ERedBlackTreeNode *)0x0) && (this->m_lmStage != LM_FULL_PREP_COMPUTE)) &&
       (this->m_lmStage != LM_EXECUTE_FULL_COMPUTE)) {
      this->m_lmStage = LM_INC_PREP_COMPUTE;
    }
                    /* end of inlined section */
    *(undefined4 *)&this->m_binUpdate = 0;
  }
  return;
}

void EHouse::DirtyLightMaps() {
	EVec3 vEyeToTarg;
	RBIterator i;
	EPanel *pPan;
	ESimsCam *pCam;
	EVec3 vLightPos;
	EVec3 vNorm;
	float distSq;
	RBIterator i;
	RBIterator i;
	EOTData *this;
	EPanel *this;
	ESimsCam *this;
	EVec3 &v;
	float key;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong in_a2;
  ERedBlackTreeNode *pEVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  EVec3 vEyeToTarg;
  EVec3 vLightPos;
  EVec3 vNorm;
  
  FlushLightLists__6EHouse(this);
  CollectWallLightMaps__7EIFloorRt13TRedBlackTree2ZP10EILightmapZP10EILightmap
            (&_16ISimsObjectModel_m_lightmapComputeList);
  if (this->m_pWallMan2 != (ERoom *)0x0) {
    CollectWallLighMaps__5ERoomRt13TRedBlackTree2ZP10EILightmapZP10EILightmap
              (this->m_pWallMan2,&_16ISimsObjectModel_m_lightmapComputeList);
  }
  RemoveAll__10EFloatTree(&_16ISimsObjectModel_m_lmcomputefloattree.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vEyeToTarg.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  vEyeToTarg.field0_0x0._0_8_ = 0;
  if (_globals._pCurCam != (ESimsCam *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
    vEyeToTarg.field0_0x0.d[2] =
         ((_globals._pCurCam)->m_vTarget).field0_0x0.d[2] -
         ((_globals._pCurCam)->m_vEye).field0_0x0.d[2];
    vLightPos.field0_0x0.d[2] = vEyeToTarg.field0_0x0.d[2];
    vLightPos.field0_0x0._0_8_ =
         CONCAT44(((_globals._pCurCam)->m_vTarget).field0_0x0.d[1] -
                  ((_globals._pCurCam)->m_vEye).field0_0x0.d[1],
                  ((_globals._pCurCam)->m_vTarget).field0_0x0.d[0] -
                  ((_globals._pCurCam)->m_vEye).field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&vEyeToTarg.field0_0x0 + 7);
                    /* end of inlined section */
    uVar7 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar7);
    *puVar4 = *puVar4 & -1L << (uVar7 + 1) * 8 |
              (ulong)vLightPos.field0_0x0._0_8_ >> (7 - uVar7) * 8;
    vEyeToTarg.field0_0x0._0_8_ = vLightPos.field0_0x0._0_8_;
  }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
  if (_16ISimsObjectModel_m_lightmapComputeList.field0_0x0.m_list.m_pHead !=
      (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    uVar7 = (_16ISimsObjectModel_m_lightmapComputeList.field0_0x0.m_list.m_pHead)->value;
    pEVar8 = _16ISimsObjectModel_m_lightmapComputeList.field0_0x0.m_list.m_pHead;
    while( true ) {
                    /* end of inlined section */
      uVar6 = 0;
                    /* end of inlined section */
      if (_globals._pPanel != (EPanel *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
        uVar6 = (ulong)(int)(_globals._pPanel)->m_pCameras[0];
      }
      vLightPos.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
      vLightPos.field0_0x0._0_8_ = 0;
      if (uVar6 != 0) {
        iVar5 = (int)uVar6;
                    /* end of inlined section */
        uVar2 = iVar5 + 0x17f3U & 7;
        uVar3 = iVar5 + 0x17ecU & 7;
        vLightPos.field0_0x0._0_8_ =
             (*(long *)((iVar5 + 0x17f3U) - uVar2) << (7 - uVar2) * 8 |
             in_a2 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((iVar5 + 0x17ecU) - uVar3) >> uVar3 * 8;
        vLightPos.field0_0x0.d[2] = *(float *)(iVar5 + 0x17f4);
        puVar1 = (undefined *)((int)&vLightPos.field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 |
                  (ulong)vLightPos.field0_0x0._0_8_ >> (7 - uVar2) * 8;
      }
                    /* end of inlined section */
      uVar2 = uVar7 + 0x14b & 7;
      uVar3 = uVar7 + 0x144 & 7;
      vNorm.field0_0x0._0_8_ =
           (*(long *)((uVar7 + 0x14b) - uVar2) << (7 - uVar2) * 8 |
           uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((uVar7 + 0x144) - uVar3) >> uVar3 * 8;
      vNorm.field0_0x0.d[2] = *(float *)(uVar7 + 0x14c);
      puVar1 = (undefined *)((int)&vNorm.field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)vNorm.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vNorm.field0_0x0.d[1] = (float)((ulong)vNorm.field0_0x0._0_8_ >> 0x20);
      fVar11 = (*(float *)(uVar7 + 0x28) + *(float *)(uVar7 + 0x34)) * 0.5 -
               vLightPos.field0_0x0.d[0];
      fVar10 = (*(float *)(uVar7 + 0x2c) + *(float *)(uVar7 + 0x38)) * 0.5 -
               vLightPos.field0_0x0.d[1];
      fVar9 = (*(float *)(uVar7 + 0x30) + *(float *)(uVar7 + 0x3c)) * 0.5 -
              vLightPos.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar9 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
      if (0.0 <= vNorm.field0_0x0.d[0] * vEyeToTarg.field0_0x0.d[0] +
                 vNorm.field0_0x0.d[1] * vEyeToTarg.field0_0x0.d[1] +
                 vNorm.field0_0x0.d[2] * vEyeToTarg.field0_0x0.d[2]) {
        fVar9 = fVar9 + 40.0;
      }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
      in_a2 = 1;
      Insert__10EFloatTreefUib
                (&_16ISimsObjectModel_m_lmcomputefloattree.field0_0x0,fVar9,uVar7,true);
      pEVar8 = pEVar8->pNext;
                    /* end of inlined section */
      if (pEVar8 == (ERedBlackTreeNode *)0x0) break;
      uVar7 = pEVar8->value;
    }
  }
  return;
}

void EHouse::UpdateSun() {
	TimeOfDay tod;
	EVec3 vNightPos;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  EIPointLight *pEVar4;
  float fVar5;
  EStorable__vtable *pEVar6;
  uint uVar7;
  ulong *puVar8;
  TimeOfDay TVar9;
  ulong uVar10;
  EVec3 *pEVar11;
  EVec3 vNightPos;
  
  if ((this->m_pSun != (EIPointLight *)0x0) && (__bDebugSun == 0)) {
    TVar9 = EorGetTimeOfDay__Fi(this->m_lotNum);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    pEVar4 = this->m_pSun;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vNightPos.field0_0x0.d[2] = _vSunPos.field0_0x0.d[2];
                    /* end of inlined section */
    pEVar11 = &_vSunPos;
    if (TVar9 != kTimeOfDay_Day) {
      pEVar11 = &vNightPos;
    }
    vNightPos.field0_0x0.d[0] = -_vSunPos.field0_0x0.d[0];
    vNightPos.field0_0x0.d[1] = -_vSunPos.field0_0x0.d[1];
    uVar10 = *(ulong *)&pEVar11->field0_0x0;
    fVar5 = (pEVar11->field0_0x0).d[2];
    puVar1 = (undefined *)((int)&(pEVar4->m_vPos).field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | uVar10 >> (7 - uVar7) * 8;
    uVar7 = (uint)&pEVar4->m_vPos & 7;
    puVar8 = (ulong *)((int)&pEVar4->m_vPos - uVar7);
    *puVar8 = uVar10 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
    (pEVar4->m_vPos).field0_0x0.d[2] = fVar5;
    pEVar4 = this->m_pSun;
    uVar7 = TVar9 * 0xc + 0x35ed07;
    uVar2 = uVar7 & 7;
    uVar3 = (uint)(_vSunColorTimeOfDay + TVar9) & 7;
    uVar10 = (*(long *)(uVar7 - uVar2) << (7 - uVar2) * 8 |
             0xffffffffffffffffU >> (uVar2 + 1) * 8 & 0x35ed00) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)(_vSunColorTimeOfDay + TVar9) - uVar3) >> uVar3 * 8;
    fVar5 = _vSunColorTimeOfDay[TVar9].field0_0x0.d[2];
    puVar1 = (undefined *)((int)&(pEVar4->field0_0x0).m_vColor.field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | uVar10 >> (7 - uVar7) * 8;
    pEVar11 = &(pEVar4->field0_0x0).m_vColor;
    uVar7 = (uint)pEVar11 & 7;
    puVar8 = (ulong *)((int)pEVar11 - uVar7);
    *puVar8 = uVar10 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
    (pEVar4->field0_0x0).m_vColor.field0_0x0.d[2] = fVar5;
    (this->m_pSun->field0_0x0).m_intensity = _sunIntensityTimeOfDay[TVar9];
    pEVar6 = (this->m_pSun->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar6[2].SafeDelete)
              ((int)((this->m_pSun->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)(pEVar6 + 2));
  }
  return;
}

void EHouse::FlushLightLists() {
  this->m_pFloorLM = (EILightmap__16_3148 *)0x0;
  RemoveAll__13ERedBlackTree(&_16ISimsObjectModel_m_lightmapComputeList.field0_0x0);
  RemoveAll__10EFloatTree(&_16ISimsObjectModel_m_lmcomputefloattree.field0_0x0);
  RemoveAll__13ERedBlackTree(&_16ISimsObjectModel_m_updateCalc3List.field0_0x0);
  RemoveAll__13ERedBlackTree(&(this->m_lmcomputeList).field0_0x0);
  return;
}

void EHouse::Cleanup() {
  EIPointLight *pEVar1;
  EStorable__vtable *pEVar2;
  ERoofs *pEVar3;
  ERShader *pEVar4;
  
  FlushLightLists__6EHouse(this);
  if (this->m_pObjectMan != (EIObjectMan *)0x0) {
    RemoveObjectsFromHouse__11EIObjectManP7ERLevel(this->m_pObjectMan,this->m_pLevel);
  }
  CleanUpRoomLights__6EHouse(this);
  pEVar1 = this->m_pSun;
  if (pEVar1 != (EIPointLight *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar2[1].GetTypeKey)
              ((int)((pEVar1->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar2[1].GetTypeName,3);
  }
  DestroyWalls__6EHouse(this);
  pEVar3 = this->m_pRoof;
  if (pEVar3 != (ERoofs *)0x0) {
    pEVar2 = (pEVar3->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar2[1].GetTypeKey)
              ((int)((pEVar3->field0_0x0).m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar2[1].GetTypeName,3);
  }
  DestroyFloor__6EHouse(this);
  if (this->m_pObjectMan != (EIObjectMan *)0x0) {
    ___11EIObjectMan(this->m_pObjectMan,3);
  }
  EmptyTable__16EFloorShdTblNode();
  RemoveOrphanParticleEffectsFromLevel__6EHouse(this);
  while (this->m_pLevel != (ERLevel *)0x0) {
    DelRef__9EResource(&this->m_pLevel->field0_0x0);
    this->m_pLevel = (ERLevel *)0x0;
  }
  pEVar4 = this->m_pLightShader;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pLightShader = (ERShader *)0x0;
    pEVar4 = this->m_pLightShader;
  }
  pEVar4 = this->m_pDayShader;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pDayShader = (ERShader *)0x0;
    pEVar4 = this->m_pDayShader;
  }
  pEVar4 = this->m_pNightShader;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pNightShader = (ERShader *)0x0;
    pEVar4 = this->m_pNightShader;
  }
  pEVar4 = this->m_pBuildShader;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pBuildShader = (ERShader *)0x0;
    pEVar4 = this->m_pBuildShader;
  }
  return;
}

void EHouse::DestroyWalls() {
	EHouse *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
  if ((this->m_lmStage != LM_FULL_PREP_COMPUTE) && (this->m_lmStage != LM_EXECUTE_FULL_COMPUTE)) {
    this->m_lmStage = LM_FULL_PREP_COMPUTE;
  }
                    /* end of inlined section */
  FlushLightLists__6EHouse(this);
  if (this->m_pWallMan2 != (ERoom *)0x0) {
    ___5ERoom(this->m_pWallMan2,3);
    this->m_pWallMan2 = (ERoom *)0x0;
  }
  return;
}

void EHouse::DestroyFloor() {
	EHouse *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
  if ((this->m_lmStage != LM_FULL_PREP_COMPUTE) && (this->m_lmStage != LM_EXECUTE_FULL_COMPUTE)) {
    this->m_lmStage = LM_FULL_PREP_COMPUTE;
  }
                    /* end of inlined section */
  FlushLightLists__6EHouse(this);
  DestroyFloors__7EIFloor();
  return;
}

void EHouse::ReCalcHouse() {
  EGlobalManagerClient__vtable *pEVar1;
  ERoofs *pEVar2;
  EStorable__vtable *pEVar3;
  ERoom *pEVar4;
  
  if (this->m_pLevel != (ERLevel *)0x0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    CleanUpRoomLights__6EHouse(this);
    DestroyWalls__6EHouse(this);
    pEVar2 = this->m_pRoof;
    if (pEVar2 != (ERoofs *)0x0) {
      pEVar3 = (pEVar2->field0_0x0).field0_0x0.__vtable;
      (*(code *)pEVar3[1].GetTypeKey)
                ((int)((pEVar2->field0_0x0).m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar3[1].GetTypeName,3);
    }
    this->m_pRoof = (ERoofs *)0x0;
    DestroyFloor__6EHouse(this);
    if (*(int *)this == 0) {
      CreateFloors__7EIFloorP6EHouse((EHouse__26_3190 *)this);
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
      EnableShadows__18EIFloorLightMapManb
                (&_7EIFloor_m_lightmapman,SUB41(*(undefined4 *)&this->m_bShadows,0));
    }
                    /* end of inlined section */
    pEVar4 = (ERoom *)__builtin_new(0x80);
    pEVar4 = __5ERoomb(pEVar4,(bool)((byte)*(undefined4 *)this ^ 1));
    this->m_pWallMan2 = pEVar4;
    Init__5ERoom(pEVar4);
    EnableShadows__5ERoomb(this->m_pWallMan2,SUB41(*(undefined4 *)&this->m_bShadows,0));
    InitRoomLighting__6EHouse(this);
    if (this->m_pObjectMan != (EIObjectMan *)0x0) {
      ReOrientHouse__11EIObjectManb(this->m_pObjectMan,false);
    }
  }
  return;
}

void EHouse::EnableLightMaps(bool enable) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
                    /* end of inlined section */
  *(int *)&this->m_bShadows = (int)enable;
                    /* inlined from c:/eor/src2/games/sims/ESRC/ifloor.h */
  EnableShadows__18EIFloorLightMapManb(&_7EIFloor_m_lightmapman,enable);
                    /* end of inlined section */
  if (this->m_pWallMan2 != (ERoom *)0x0) {
    EnableShadows__5ERoomb(this->m_pWallMan2,SUB41(*(undefined4 *)&this->m_bShadows,0));
  }
  return;
}

void EHouse::BeginLMCompute() {
	EVec3 vRoofOff;
	
  ERoofs *pEVar1;
  ERoom *this_00;
  EVec3 vRoofOff;
  
  if (_globals.m_pVibrate == (EVibrate *)0x0) {
    pEVar1 = this->m_pRoof;
  }
  else {
    StopAllVibration__8EVibrate(_globals.m_pVibrate);
    pEVar1 = this->m_pRoof;
  }
  if (pEVar1 == (ERoofs *)0x0) {
    pEVar1 = (ERoofs *)__builtin_new(0xa4);
    pEVar1 = __6ERoofs(pEVar1);
    vRoofOff.field0_0x0.d[0] = (this->m_vHouse_off).field0_0x0.d[0] - 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    vRoofOff.field0_0x0.d[1] = (this->m_vHouse_off).field0_0x0.d[1] - 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vRoofOff.field0_0x0.d[2] = -0.1;
                    /* end of inlined section */
    this->m_pRoof = pEVar1;
    CreateRoof__6ERoofsR5EVec3b(pEVar1,&vRoofOff,true);
    SetVisible__6ERoofsb(this->m_pRoof,false);
    InsertInstance__7ERLevelP9EInstanceT1
              (this->m_pLevel,&this->m_pRoof->field0_0x0,(EInstance *)0x0);
    SetVisible__6ERoofsb(this->m_pRoof,true);
    this_00 = this->m_pWallMan2;
  }
  else {
    SetVisible__6ERoofsb(pEVar1,true);
    this_00 = this->m_pWallMan2;
  }
  if (this_00 != (ERoom *)0x0) {
    SetWallState__5ERoom20EWallUpDownStateType(this_00,WallUP);
    BeginLmCompute__5ERoom(this->m_pWallMan2);
    EnableShadows__5ERoomb(this->m_pWallMan2,true);
  }
  return;
}

void EHouse::EndLMCompute() {
  ERoom *this_00;
  
  if (this->m_pRoof == (ERoofs *)0x0) {
    this_00 = this->m_pWallMan2;
  }
  else {
    SetVisible__6ERoofsb(this->m_pRoof,false);
    this_00 = this->m_pWallMan2;
  }
  if (this_00 != (ERoom *)0x0) {
    EndLmCompute__5ERoom(this_00);
    SetWallState__5ERoom20EWallUpDownStateType(this->m_pWallMan2,this->m_wallUpDownState);
    EnableShadows__5ERoomb(this->m_pWallMan2,SUB41(*(undefined4 *)&this->m_bShadows,0));
  }
  return;
}

void EHouse::UpdateRoomAmbientLights() {
	RoomManagerImpl *pRoommanImpl;
	RoomManagerImpl *this;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > roomItr;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	RoomManagerImpl *this;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	
  int iVar1;
  uint roomId;
  __rb_tree_base_iterator _Var2;
  long lVar3;
  __rb_tree_base_iterator _Var4;
  __rb_tree_node_base *p_Var5;
  __rb_tree_node_base **pp_Var6;
  __rb_tree_const_iterator_pair_const_short_unsigned_int_RoomImpl_____ roomItr;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar1 = (*(code *)_5Globs_pRoomManager->__vtable->GetRoomCount)
                    ((int)&_5Globs_pRoomManager->__vtable +
                     (int)*(short *)&_5Globs_pRoomManager->__vtable->ComputeCutaway);
                    /* inlined from ../MSrc/Tree.h */
  roomItr.field0_0x0.node = *(__rb_tree_base_iterator *)(*(int *)(iVar1 + 4) + 8);
                    /* end of inlined section */
  pp_Var6 = (__rb_tree_node_base **)(iVar1 + 4);
  if (roomItr.field0_0x0.node != (__rb_tree_base_iterator)*(__rb_tree_node_base **)(iVar1 + 4)) {
                    /* inlined from ../MSrc/roomsimpl.h */
    p_Var5 = ((__rb_tree_node_base *)((int)roomItr.field0_0x0.node + 0x10))->parent;
    while( true ) {
      if ((p_Var5 != (__rb_tree_node_base *)0x0) &&
         (lVar3 = (**(code **)(*(int *)p_Var5 + 0x4c))
                            (&p_Var5->color + *(short *)(*(int *)p_Var5 + 0x48)), lVar3 != 0)) {
        roomId = (**(code **)(*(int *)p_Var5 + 0x44))
                           (&p_Var5->color + *(short *)(*(int *)p_Var5 + 0x40));
        UpdateRoomLight__6EHouseUi(this,roomId);
                    /* inlined from ../MSrc/Tree.h */
      }
      _Var2.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0xc);
      if (_Var2.node == (__rb_tree_node_base *)0x0) {
        _Var2.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 4);
        if (roomItr.field0_0x0.node == (__rb_tree_base_iterator)(_Var2.node)->right) {
          do {
            roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
            _Var2.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 4);
          } while (roomItr.field0_0x0.node == (__rb_tree_base_iterator)(_Var2.node)->right);
        }
        if (*(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0xc) != _Var2.node) {
          roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
        }
                    /* end of inlined section */
        _Var4.node = *pp_Var6;
      }
      else if ((_Var2.node)->left == (__rb_tree_node_base *)0x0) {
        _Var4.node = *pp_Var6;
        roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
      }
      else {
        do {
          _Var2.node = (_Var2.node)->left;
        } while ((_Var2.node)->left != (__rb_tree_node_base *)0x0);
        _Var4.node = *pp_Var6;
        roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
      }
                    /* inlined from ../MSrc/Tree.h */
                    /* end of inlined section */
      if (roomItr.field0_0x0.node == (__rb_tree_base_iterator)_Var4.node) break;
      p_Var5 = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0x14);
    }
  }
  return;
}

void EHouse::ReComputeLighting(bool computeLightMaps) {
  EGlobalManagerClient__vtable *pEVar1;
  
  if (*(int *)this == 0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    UpdateSun__6EHouse(this);
    UpdateRoomAmbientLights__6EHouse(this);
    if (this->m_pObjectMan != (EIObjectMan *)0x0) {
      ReComputeLights__11EIObjectMan(this->m_pObjectMan);
    }
    if (computeLightMaps) {
      FlushLightLists__6EHouse(this);
      DirtyLightMaps__6EHouse(this);
    }
  }
  return;
}

void EHouse::InitRoomLighting() {
	RoomManagerImpl *pRoommanImpl;
	EVec3 vHOff;
	RoomManagerImpl *this;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > roomItr;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	Room *pRoom;
	RoomManagerImpl *this;
	RoomImpl *pRoomImpl;
	CTilePt *it;
	EBound3 bound;
	EMat4 mOr;
	EBoundSphere sphere;
	EIPointAmbLight *pLight;
	RoomImpl *this;
	EVec3 v3;
	EVec3 *this;
	__rb_tree_node_base *y;
	
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  EStorable__vtable *pEVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  EIPointAmbLight *pEVar8;
  uint uVar9;
  undefined1 *puVar10;
  long lVar11;
  EBound3 *pEVar12;
  __rb_tree_base_iterator _Var13;
  char *pcVar14;
  EVec3 *pEVar15;
  __rb_tree_base_iterator _Var16;
  EVec3 *pEVar17;
  __rb_tree_node_base *p_Var18;
  __rb_tree_node_base **pp_Var19;
  float fVar20;
  EVec3 vHOff;
  EBound3 bound;
  EVec3 v3;
  EMat4 mOr;
  EBoundSphere sphere;
  __rb_tree_const_iterator_pair_const_short_unsigned_int_RoomImpl_____ roomItr;
  
  CleanUpRoomLights__6EHouse(this);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar7 = (*(code *)_5Globs_pRoomManager->__vtable->GetRoomCount)
                    ((int)&_5Globs_pRoomManager->__vtable +
                     (int)*(short *)&_5Globs_pRoomManager->__vtable->ComputeCutaway);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vHOff.field0_0x0.d[0] = (this->m_vHouse_off).field0_0x0.d[0];
  vHOff.field0_0x0.d[1] = (this->m_vHouse_off).field0_0x0.d[1];
                    /* end of inlined section */
  vHOff.field0_0x0.d[2] = 0.0;
                    /* inlined from ../MSrc/Tree.h */
  roomItr.field0_0x0.node = *(__rb_tree_base_iterator *)(*(int *)(iVar7 + 4) + 8);
                    /* end of inlined section */
  pp_Var19 = (__rb_tree_node_base **)(iVar7 + 4);
  if (roomItr.field0_0x0.node == (__rb_tree_base_iterator)*(__rb_tree_node_base **)(iVar7 + 4)) {
    return;
  }
                    /* inlined from ../MSrc/roomsimpl.h */
  p_Var18 = ((__rb_tree_node_base *)((int)roomItr.field0_0x0.node + 0x10))->parent;
  do {
                    /* end of inlined section */
    if ((p_Var18 != (__rb_tree_node_base *)0x0) &&
       (lVar11 = (**(code **)(*(int *)p_Var18 + 0x4c))
                           (&p_Var18->color + *(short *)(*(int *)p_Var18 + 0x48)), lVar11 != 0)) {
      lVar11 = (**(code **)(*(int *)p_Var18 + 0x44))
                         (&p_Var18->color + *(short *)(*(int *)p_Var18 + 0x40));
      iVar7 = *(int *)p_Var18;
      if (lVar11 != 0) {
        lVar11 = (**(code **)(iVar7 + 100))(&p_Var18->color + *(short *)(iVar7 + 0x60));
        if (lVar11 != 0) goto LAB_00140ed0;
        iVar7 = *(int *)p_Var18;
      }
      iVar7 = (**(code **)(iVar7 + 0x3c))(&p_Var18->color + *(short *)(iVar7 + 0x38));
                    /* inlined from ../MSrc/Vector.h */
      pcVar14 = *(char **)(iVar7 + 8);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      v3.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      v3.field0_0x0.d[0] = (float)(int)*pcVar14;
      v3.field0_0x0.d[1] = (float)(int)pcVar14[1];
      uVar6 = CONCAT44((float)(int)pcVar14[1],(float)(int)*pcVar14);
      puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
      uVar9 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar9);
      *puVar5 = *puVar5 & -1L << (uVar9 + 1) * 8 | uVar6 >> (7 - uVar9) * 8;
      uVar9 = (uint)&bound.vMax & 7;
      puVar5 = (ulong *)((int)&bound.vMax - uVar9);
      *puVar5 = uVar6 << uVar9 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
      bound.vMax.field0_0x0.d[2] = 0.0;
      puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
      uVar9 = (uint)puVar1 & 7;
      uVar3 = (uint)&bound.vMax & 7;
      bound.vMin.field0_0x0._0_8_ =
           (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
           uVar6 & 0xffffffffffffffffU >> (uVar9 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)&bound.vMax - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
      uVar9 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar9);
      *puVar5 = *puVar5 & -1L << (uVar9 + 1) * 8 |
                (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar9) * 8;
      bound.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
      if (pcVar14 != *(char **)(iVar7 + 0xc)) {
        cVar2 = pcVar14[1];
        while( true ) {
                    /* inlined from /eor/src2/common/math/e_bound3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_bound3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          v3.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_bound3.h */
          v3.field0_0x0.d[1] = (float)(int)cVar2;
          v3.field0_0x0.d[0] = (float)(int)*pcVar14;
          pEVar12 = &bound;
          pEVar15 = &bound.vMax;
          pEVar17 = &v3;
          do {
            fVar20 = (pEVar12->vMin).field0_0x0.d[0];
            if ((pEVar17->field0_0x0).d[0] <= fVar20) {
              fVar20 = (pEVar17->field0_0x0).d[0];
            }
            (pEVar12->vMin).field0_0x0.d[0] = fVar20;
            fVar20 = (pEVar17->field0_0x0).d[0];
            if ((pEVar17->field0_0x0).d[0] < (pEVar15->field0_0x0).d[0]) {
              fVar20 = (pEVar15->field0_0x0).d[0];
            }
            (pEVar15->field0_0x0).d[0] = fVar20;
            pEVar12 = (EBound3 *)((int)&(pEVar12->vMin).field0_0x0 + 4);
            pEVar17 = (EVec3 *)((int)&pEVar17->field0_0x0 + 4);
            pEVar15 = (EVec3 *)((int)&pEVar15->field0_0x0 + 4);
          } while ((int)pEVar12 < (int)&bound.vMax);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
          if (pcVar14 + 3 == *(char **)(iVar7 + 0xc)) break;
          cVar2 = pcVar14[4];
          pcVar14 = pcVar14 + 3;
        }
      }
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
      bound.vMin.field0_0x0.d[2] = 0.0;
      bound.vMax.field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      __as__5EMat4RC5EMat4(&mOr,&_mId);
                    /* end of inlined section */
      Translate__5EMat4RC5EVec3(&mOr,&vHOff);
      SwapXY__FR5EMat4(&mOr);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      v3.field0_0x0.d[0] =
           bound.vMax.field0_0x0.d[0] * mOr.field0_0x0.d[0][0] +
           bound.vMax.field0_0x0.d[1] * mOr.field0_0x0.d[1][0] +
           bound.vMax.field0_0x0.d[2] * mOr.field0_0x0.d[2][0] + mOr.field0_0x0.d[3][0];
      v3.field0_0x0.d[1] =
           bound.vMax.field0_0x0.d[0] * mOr.field0_0x0.d[0][1] +
           bound.vMax.field0_0x0.d[1] * mOr.field0_0x0.d[1][1] +
           bound.vMax.field0_0x0.d[2] * mOr.field0_0x0.d[2][1] + mOr.field0_0x0.d[3][1];
      v3.field0_0x0.d[2] =
           bound.vMax.field0_0x0.d[0] * mOr.field0_0x0.d[0][2] +
           bound.vMax.field0_0x0.d[1] * mOr.field0_0x0.d[1][2] +
           bound.vMax.field0_0x0.d[2] * mOr.field0_0x0.d[2][2] + mOr.field0_0x0.d[3][2];
                    /* end of inlined section */
      uVar6 = CONCAT44(v3.field0_0x0.d[1],v3.field0_0x0.d[0]);
      puVar1 = (undefined *)((int)&bound.vMax.field0_0x0 + 7);
      uVar9 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar9);
      *puVar5 = *puVar5 & -1L << (uVar9 + 1) * 8 | uVar6 >> (7 - uVar9) * 8;
      uVar9 = (uint)&bound.vMax & 7;
      puVar5 = (ulong *)((int)&bound.vMax - uVar9);
      *puVar5 = uVar6 << uVar9 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
      bound.vMax.field0_0x0.d[2] = v3.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      fVar20 = bound.vMin.field0_0x0.d[2] * mOr.field0_0x0.d[2][1];
      v3.field0_0x0.d[0] =
           bound.vMin.field0_0x0.d[0] * mOr.field0_0x0.d[0][0] +
           bound.vMin.field0_0x0.d[1] * mOr.field0_0x0.d[1][0] +
           bound.vMin.field0_0x0.d[2] * mOr.field0_0x0.d[2][0] + mOr.field0_0x0.d[3][0];
      bound.vMin.field0_0x0.d[2] =
           bound.vMin.field0_0x0.d[0] * mOr.field0_0x0.d[0][2] +
           bound.vMin.field0_0x0.d[1] * mOr.field0_0x0.d[1][2] +
           bound.vMin.field0_0x0.d[2] * mOr.field0_0x0.d[2][2] + mOr.field0_0x0.d[3][2];
      v3.field0_0x0.d[1] =
           bound.vMin.field0_0x0.d[0] * mOr.field0_0x0.d[0][1] +
           bound.vMin.field0_0x0.d[1] * mOr.field0_0x0.d[1][1] + fVar20 + mOr.field0_0x0.d[3][1];
      v3.field0_0x0.d[2] = bound.vMin.field0_0x0.d[2];
                    /* end of inlined section */
      bound.vMin.field0_0x0._0_8_ = CONCAT44(v3.field0_0x0.d[1],v3.field0_0x0.d[0]);
      puVar1 = (undefined *)((int)&bound.vMin.field0_0x0 + 7);
      uVar9 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar9);
      *puVar5 = *puVar5 & -1L << (uVar9 + 1) * 8 |
                (ulong)bound.vMin.field0_0x0._0_8_ >> (7 - uVar9) * 8;
      CalcBoundSphere__7EBound3R12EBoundSphere(&bound,&sphere);
      pEVar8 = (EIPointAmbLight *)__builtin_new(0xbc);
      pEVar8 = __15EIPointAmbLight(pEVar8);
      uVar9 = (**(code **)(*(int *)p_Var18 + 100))
                        (&p_Var18->color + *(short *)(*(int *)p_Var18 + 0x60));
      pEVar8->m_falloffStartDistance = 0.0;
      *(uint *)&pEVar8->m_distanceFalloffEnabled = uVar9 ^ 1;
      pEVar8->m_falloffEndDistance = _roomfalloff * sphere.radius;
      puVar1 = (undefined *)((int)&(pEVar8->m_vPos).field0_0x0 + 7);
      uVar9 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar9);
      *puVar5 = *puVar5 & -1L << (uVar9 + 1) * 8 |
                (ulong)sphere.vCenter.field0_0x0._0_8_ >> (7 - uVar9) * 8;
      uVar9 = (uint)&pEVar8->m_vPos & 7;
      puVar5 = (ulong *)((int)&pEVar8->m_vPos - uVar9);
      *puVar5 = sphere.vCenter.field0_0x0._0_8_ << uVar9 * 8 |
                *puVar5 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
      (pEVar8->m_vPos).field0_0x0.d[2] = sphere.vCenter.field0_0x0.d[2];
      uVar9 = (**(code **)(*(int *)p_Var18 + 0x44))
                        (&p_Var18->color + *(short *)(*(int *)p_Var18 + 0x40));
      fVar20 = CalcRoomAmbLight__6EHouseUi(this,uVar9);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      (pEVar8->field0_0x0).m_intensity = fVar20;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      (pEVar8->field0_0x0).m_vColor.field0_0x0.d[1] = 1.0;
      (pEVar8->field0_0x0).m_vColor.field0_0x0.d[2] = 1.0;
      (pEVar8->field0_0x0).m_vColor.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
      pEVar4 = (pEVar8->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar4[2].SafeDelete)
                ((int)((pEVar8->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                 (int)*(short *)(pEVar4 + 2));
      uVar9 = (**(code **)(*(int *)p_Var18 + 0x44))
                        (&p_Var18->color + *(short *)(*(int *)p_Var18 + 0x40));
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      puVar10 = Insert__13ERedBlackTreeUiUib
                          (&(this->m_roomLights).field0_0x0,uVar9,(uint)pEVar8,false);
                    /* end of inlined section */
      if (puVar10 == (undefined1 *)0x0) {
        if (pEVar8 != (EIPointAmbLight *)0x0) {
          pEVar4 = (pEVar8->field0_0x0).field0_0x0.field0_0x0.__vtable;
          (*(code *)pEVar4[1].GetTypeKey)
                    ((int)((pEVar8->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                     (int)*(short *)&pEVar4[1].GetTypeName,3);
        }
      }
      else if (this->m_pLevel != (ERLevel *)0x0) {
        InsertInstance__7ERLevelP9EInstanceT1(this->m_pLevel,(EInstance *)pEVar8,(EInstance *)0x0);
      }
    }
LAB_00140ed0:
    _Var16.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0xc);
    if (_Var16.node == (__rb_tree_node_base *)0x0) {
      _Var16.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 4);
      if (roomItr.field0_0x0.node == (__rb_tree_base_iterator)(_Var16.node)->right) {
        do {
          roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var16.node;
          _Var16.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 4);
        } while (roomItr.field0_0x0.node == (__rb_tree_base_iterator)(_Var16.node)->right);
      }
      if (*(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0xc) != _Var16.node) {
        roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var16.node;
      }
                    /* end of inlined section */
      _Var13.node = *pp_Var19;
    }
    else if ((_Var16.node)->left == (__rb_tree_node_base *)0x0) {
      _Var13.node = *pp_Var19;
      roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var16.node;
    }
    else {
      do {
        _Var16.node = (_Var16.node)->left;
      } while ((_Var16.node)->left != (__rb_tree_node_base *)0x0);
      _Var13.node = *pp_Var19;
      roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var16.node;
    }
                    /* inlined from ../MSrc/Tree.h */
                    /* end of inlined section */
    if (roomItr.field0_0x0.node == (__rb_tree_base_iterator)_Var13.node) {
      return;
    }
    p_Var18 = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0x14);
  } while( true );
}

void EHouse::UpdateRoomLight(u32 roomId) {
	EIPointAmbLight *pLight;
	u32 key;
	
  EStorable__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float fVar2;
  EIPointAmbLight *pLight;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pLight = (EIPointAmbLight *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  Find__C13ERedBlackTreeUiPUi(&(this->m_roomLights).field0_0x0,roomId,(uint *)&pLight);
                    /* end of inlined section */
  if (pLight != (EIPointAmbLight *)0x0) {
    fVar2 = CalcRoomAmbLight__6EHouseUi(this,roomId);
    (pLight->field0_0x0).m_intensity = fVar2;
    pEVar1 = (pLight->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[2].SafeDelete)
              ((int)((pLight->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)(pEVar1 + 2));
  }
  return;
}

float EHouse::CalcRoomAmbLight(u32 id) {
	float amb;
	Room *pRoom;
	RoomImpl *pRoomImpl;
	CTilePt *it;
	float portalCount;
	float roomArea;
	float portalFactor;
	RoomImpl *this;
	cXObject *pObj;
	
  int iVar1;
  float fVar2;
  TimeOfDay TVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  
  fVar2 = _roomambient;
  fVar9 = _outsideambient;
  if (id != 0) {
    TVar3 = EorGetTimeOfDay__Fi(this->m_lotNum);
                    /* inlined from ../MSrc/Function.h */
                    /* end of inlined section */
    fVar9 = fVar2;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    if ((TVar3 != kTimeOfDay_Night) &&
       (lVar5 = (*(code *)_5Globs_pRoomManager->__vtable->ClearRoomPartitions)
                          ((int)&_5Globs_pRoomManager->__vtable +
                           (int)*(short *)&_5Globs_pRoomManager->__vtable->GetHouse,id & 0xffff),
       fVar9 = _roomambient, lVar5 != 0)) {
      piVar8 = (int *)lVar5;
      fVar9 = 0.0;
      iVar4 = (**(code **)(*piVar8 + 0x3c))((int)piVar8 + (int)*(short *)(*piVar8 + 0x38));
                    /* inlined from ../MSrc/roomsimpl.h */
      iVar7 = *(int *)(iVar4 + 8);
                    /* end of inlined section */
      if (iVar7 != *(int *)(iVar4 + 0xc)) {
        do {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          uVar6 = (*(code *)_5Globs_pObjectModule->__vtable[1].GetSimFlag)
                            ((int)&_5Globs_pObjectModule->__vtable +
                             (int)*(short *)&_5Globs_pObjectModule->__vtable[1].SetSimFlag,iVar7);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          lVar5 = (*(code *)_5Globs_pObjectModule->__vtable->AdvanceSelectedPerson)
                            ((int)&_5Globs_pObjectModule->__vtable +
                             (int)*(short *)&_5Globs_pObjectModule->__vtable->SetSelectedPerson,
                             uVar6);
          if (lVar5 == 0) {
            iVar1 = *(int *)(iVar4 + 0xc);
          }
          else {
            iVar1 = *(int *)((int)lVar5 + 4);
            lVar5 = (**(code **)(iVar1 + 0x2ac))((int)lVar5 + (int)*(short *)(iVar1 + 0x2a8));
            if (lVar5 == 8) {
              fVar9 = fVar9 + 1.0;
            }
                    /* inlined from ../MSrc/Vector.h */
            iVar1 = *(int *)(iVar4 + 0xc);
          }
                    /* end of inlined section */
          iVar7 = iVar7 + 3;
        } while (iVar7 != iVar1);
      }
      iVar7 = (**(code **)(*piVar8 + 0x94))((int)piVar8 + (int)*(short *)(*piVar8 + 0x90));
      fVar9 = fVar9 / (float)iVar7;
      if (0.0 <= fVar9) {
        fVar9 = (float)((int)fVar9 * (uint)(fVar9 < 1.0) | (uint)(fVar9 >= 1.0) * 0x3f800000);
      }
      else {
        fVar9 = 0.0;
      }
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
      fVar9 = fVar9 * 0.25 * fVar2 + fVar2;
    }
  }
  return fVar9;
}

EIPointAmbLight* EHouse::GetRoomAmbLight(u32 roomId) {
	EIPointAmbLight *pLight;
	
  undefined8 unaff_retaddr;
  EIPointAmbLight *pLight;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pLight = (EIPointAmbLight *)0x0;
  Find__C13ERedBlackTreeUiPUi(&(this->m_roomLights).field0_0x0,roomId,(uint *)&pLight);
                    /* end of inlined section */
  return pLight;
}

void EHouse::CleanUpRoomLights() {
	TRedBlackTree<unsigned int,EIPointAmbLight *> *this;
	RBIterator i;
	ERedBlackTree *this;
	TLinkedList<ERedBlackTreeNode,12,16> *this;
	RBIterator i;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	
  int *piVar1;
  ERedBlackTreeNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  pEVar2 = (this->m_roomLights).field0_0x0.m_list.m_pHead;
  if (pEVar2 != (ERedBlackTreeNode *)0x0) {
    piVar1 = (int *)pEVar2->value;
    while( true ) {
      pEVar2 = pEVar2->pNext;
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8));
      if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
      piVar1 = (int *)pEVar2->value;
    }
  }
  RemoveAll__13ERedBlackTree(&(this->m_roomLights).field0_0x0);
  return;
}

void EHouse::AddParticleEffectToOrphanMan(ERParticleType *pType, EIParticleEmit *pEffect) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
  Insert__13ERedBlackTreeUiUib
            (&(this->m_particleEffectMan).field0_0x0,(uint)pEffect,(uint)pType,false);
  return;
}

void EHouse::RemoveOrphanParticleEffectsFromLevel() {
	RBIterator i;
	RBIterator next;
	ERParticleType *pValue;
	RBIterator i;
	void *pNode;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	RBIterator i;
	
  int *piVar1;
  ERedBlackTreeNode *pEVar2;
  EResource *this_00;
  ERedBlackTreeNode *i;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  i = (this->m_particleEffectMan).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
  if (i != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    piVar1 = (int *)i->key;
    while( true ) {
      pEVar2 = i->pNext;
                    /* end of inlined section */
      this_00 = (EResource *)i->value;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x34))((int)piVar1 + (int)*(short *)(*piVar1 + 0x30),3);
      }
      while (this_00 != (EResource *)0x0) {
        DelRef__9EResource(this_00);
        this_00 = (EResource *)0x0;
      }
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      Remove__13ERedBlackTreeP17RBIteratorPtrType
                (&(this->m_particleEffectMan).field0_0x0,(undefined1 *)i);
                    /* end of inlined section */
      if (pEVar2 == (ERedBlackTreeNode *)0x0) break;
      piVar1 = (int *)pEVar2->key;
      i = pEVar2;
    }
  }
  return;
}

void EHouse::_LM_STAGE_NONE() {
                    /* inlined from ../MSrc/Function.h */
                    /* end of inlined section */
  if (this->m_lmLastStage != LM_STAGE_NONE) {
    this->m_lmLastStage = LM_STAGE_NONE;
  }
  return;
}

void EHouse::_LM_INC_PREP_COMPUTE() {
	FTIterator i;
	EPanel *this;
	EVec3 vRoofOff;
	FTIterator i;
	FTValue v;
	FTIterator i;
	
  EILightmap__16_3148 *key;
  ERoofs *pEVar1;
  EFloatTreeNode *pEVar2;
  EVec3 vRoofOff;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
                    /* end of inlined section */
  if (1 < (_globals._pPanel)->m_panleState + ~LIVE_SIM_EDIT) {
                    /* inlined from ../MSrc/Function.h */
                    /* end of inlined section */
    this->m_iconAlpha = 1.0;
    if ((this->m_lmLastStage != LM_INC_PREP_COMPUTE) &&
       (this->m_lmLastStage = LM_INC_PREP_COMPUTE, this->m_pRoof == (ERoofs *)0x0)) {
      pEVar1 = (ERoofs *)__builtin_new(0xa4);
      pEVar1 = __6ERoofs(pEVar1);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      vRoofOff.field0_0x0.d[0] = (this->m_vHouse_off).field0_0x0.d[0] - 0.5;
      vRoofOff.field0_0x0.d[1] = (this->m_vHouse_off).field0_0x0.d[1] - 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vRoofOff.field0_0x0.d[2] = -0.1;
                    /* end of inlined section */
      this->m_pRoof = pEVar1;
      CreateRoof__6ERoofsR5EVec3b(pEVar1,&vRoofOff,true);
      SetVisible__6ERoofsb(this->m_pRoof,false);
      InsertInstance__7ERLevelP9EInstanceT1
                (this->m_pLevel,&this->m_pRoof->field0_0x0,(EInstance *)0x0);
    }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
    if (_16ISimsObjectModel_m_lmcomputefloattree.field0_0x0.m_list.m_pHead != (EFloatTreeNode *)0x0)
    {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
      key = (EILightmap__16_3148 *)
            (_16ISimsObjectModel_m_lmcomputefloattree.field0_0x0.m_list.m_pHead)->value;
      pEVar2 = _16ISimsObjectModel_m_lmcomputefloattree.field0_0x0.m_list.m_pHead;
      while( true ) {
                    /* end of inlined section */
        if (key->m_xRes == 0x80) {
          this->m_pFloorLM = key;
        }
        else {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
          Insert__13ERedBlackTreeUiUib
                    (&(this->m_lmcomputeList).field0_0x0,(uint)key,(uint)key,false);
        }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
        pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
        if (pEVar2 == (EFloatTreeNode *)0x0) break;
        key = (EILightmap__16_3148 *)pEVar2->value;
      }
    }
    RemoveAll__13ERedBlackTree(&_16ISimsObjectModel_m_lightmapComputeList.field0_0x0);
    RemoveAll__10EFloatTree(&_16ISimsObjectModel_m_lmcomputefloattree.field0_0x0);
    this->m_lmStage = LM_EXECUTE_INC_COMPUTE;
  }
  return;
}

void EHouse::ForceIncComputeComplete() {
	RBIterator rbi;
	RBIterator i;
	RBIterator i;
	
  ERedBlackTreeNode *pEVar1;
  
                    /* inlined from ../MSrc/Function.h */
                    /* end of inlined section */
  if (this->m_lmStage == LM_EXECUTE_INC_COMPUTE) {
    BeginLMCompute__6EHouse(this);
    if ((EILightmap__0_4024 *)this->m_pFloorLM == (EILightmap__0_4024 *)0x0) {
      pEVar1 = (this->m_lmcomputeList).field0_0x0.m_list.m_pHead;
    }
    else {
      Compute__10EILightmap((EILightmap__0_4024 *)this->m_pFloorLM);
      this->m_pFloorLM = (EILightmap__16_3148 *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
      pEVar1 = (this->m_lmcomputeList).field0_0x0.m_list.m_pHead;
    }
                    /* end of inlined section */
    for (; pEVar1 != (ERedBlackTreeNode *)0x0; pEVar1 = pEVar1->pNext) {
                    /* end of inlined section */
      Compute__10EILightmap((EILightmap__0_4024 *)pEVar1->value);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
    }
    EndLMCompute__6EHouse(this);
    RemoveAll__13ERedBlackTree(&(this->m_lmcomputeList).field0_0x0);
    this->m_lmStage = LM_STAGE_NONE;
  }
  return;
}

void EHouse::_LM_EXECUTE_INC_COMPUTE() {
	int n;
	
  EILightmap__0_4024 *this_00;
  ERedBlackTreeNode *i;
  int iVar1;
  
                    /* inlined from ../MSrc/Function.h */
                    /* end of inlined section */
  if (this->m_lmLastStage != LM_EXECUTE_INC_COMPUTE) {
    this->m_lmLastStage = LM_EXECUTE_INC_COMPUTE;
  }
  DoLightmapCompute__16ISimsObjectModel();
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
  if ((this->m_pFloorLM == (EILightmap__16_3148 *)0x0) &&
     ((this->m_lmcomputeList).field0_0x0.m_list.m_pHead == (ERedBlackTreeNode *)0x0)) {
    this->m_lmStage = LM_STAGE_NONE;
  }
  else {
    BeginLMCompute__6EHouse(this);
    if ((EILightmap__0_4024 *)this->m_pFloorLM == (EILightmap__0_4024 *)0x0) {
      iVar1 = 0;
      i = (this->m_lmcomputeList).field0_0x0.m_list.m_pHead;
                    /* end of inlined section */
                    /* end of inlined section */
      while (i != (ERedBlackTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        this_00 = (EILightmap__0_4024 *)i->value;
        iVar1 = iVar1 + 1;
        Remove__13ERedBlackTreeP17RBIteratorPtrType
                  (&(this->m_lmcomputeList).field0_0x0,(undefined1 *)i);
                    /* end of inlined section */
        Compute__10EILightmap(this_00);
        if (0 < iVar1) goto LAB_001415ec;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
        i = (this->m_lmcomputeList).field0_0x0.m_list.m_pHead;
      }
      this->m_lmStage = LM_STAGE_NONE;
    }
    else {
      Compute__10EILightmap((EILightmap__0_4024 *)this->m_pFloorLM);
      this->m_pFloorLM = (EILightmap__16_3148 *)0x0;
    }
LAB_001415ec:
    EndLMCompute__6EHouse(this);
  }
  return;
}

void EHouse::_LM_FULL_PREP_COMPUTE() {
	Panelstate panelstate;
	static float _lmIconFullFadeinTime = 0.f;
	static float _lmFullFadeinTime = 0.f;
	float dt;
	Panelstate state;
	EVec3 vRoofOff;
	
  bool bVar1;
  ELMComputeStage EVar2;
  ERoofs *pEVar3;
  Panelstate PVar4;
  float fVar5;
  float fVar6;
  EVec3 vRoofOff;
  
  PVar4 = LIVE_DEFAULT_STATE;
  if (_globals._pPanel != (EPanel *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
    PVar4 = (_globals._pPanel)->m_panleState;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
                    /* end of inlined section */
  if (1 < PVar4 + ~LIVE_SIM_EDIT) {
    if (__bDidInitialCompute == 0) {
                    /* inlined from ../MSrc/Function.h */
      EVar2 = this->m_lmLastStage;
    }
    else {
      if (PVar4 == LIVE_DIALOG_STATE) {
        this->m_fadeAlpha = 0.0;
        return;
      }
      EVar2 = this->m_lmLastStage;
    }
                    /* end of inlined section */
    if (EVar2 != LM_FULL_PREP_COMPUTE) {
      if (this->m_pWallMan2 == (ERoom *)0x0) {
        pEVar3 = this->m_pRoof;
      }
      else if (*(int *)this->m_pWallMan2 == 0) {
        EnableLightMaps__6EHouseb(this,false);
        pEVar3 = this->m_pRoof;
      }
      else {
        pEVar3 = this->m_pRoof;
      }
      if (pEVar3 == (ERoofs *)0x0) {
        pEVar3 = (ERoofs *)__builtin_new(0xa4);
        pEVar3 = __6ERoofs(pEVar3);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        vRoofOff.field0_0x0.d[0] = (this->m_vHouse_off).field0_0x0.d[0] - 0.5;
        vRoofOff.field0_0x0.d[1] = (this->m_vHouse_off).field0_0x0.d[1] - 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vRoofOff.field0_0x0.d[2] = -0.1;
                    /* end of inlined section */
        this->m_pRoof = pEVar3;
        CreateRoof__6ERoofsR5EVec3b(pEVar3,&vRoofOff,true);
        SetVisible__6ERoofsb(this->m_pRoof,false);
        InsertInstance__7ERLevelP9EInstanceT1
                  (this->m_pLevel,&this->m_pRoof->field0_0x0,(EInstance *)0x0);
      }
      this->m_iconAlpha = 0.0;
      this->m_lmLastStage = LM_FULL_PREP_COMPUTE;
      _lmFullFadeinTime_5623 = 0.0;
      _lmIconFullFadeinTime_5622 = 0.0;
    }
    fVar5 = (float)((int)_dt * (uint)(_dt < 0.03333334) | (uint)(_dt >= 0.03333334) * 0x3d088889);
    if (_lmIconFullFadeinTime_5622 < 0.15) {
      _lmFullFadeinTime_5623 = 0.0;
    }
    else {
      _lmFullFadeinTime_5623 = _lmFullFadeinTime_5623 + fVar5;
    }
    fVar6 = _lmFullFadeinTime_5623 * 4.0;
    _lmIconFullFadeinTime_5622 = _lmIconFullFadeinTime_5622 + fVar5;
    this->m_fadeAlpha = fVar6;
    if (0.0 <= fVar6) {
      fVar5 = (float)((int)fVar6 * (uint)(fVar6 < 1.0) | (uint)(fVar6 >= 1.0) * 0x3f800000);
    }
    else {
      fVar5 = 0.0;
    }
    fVar6 = _lmFullFadeinTime_5623 * 5.0;
    this->m_fadeAlpha = fVar5;
    this->m_iconAlpha = fVar6;
    if (0.0 <= fVar5) {
      fVar5 = (float)((int)fVar5 * (uint)(fVar5 < 1.0) | (uint)(fVar5 >= 1.0) * 0x3f800000);
    }
    else {
      fVar5 = 0.0;
    }
    bVar1 = __bDidInitialCompute == 0;
    this->m_iconAlpha = fVar5;
    if ((bVar1) || (this->m_fadeAlpha == 1.0)) {
      this->m_lmStage = LM_EXECUTE_FULL_COMPUTE;
      this->m_fadeAlpha = 1.0;
    }
  }
  return;
}

void EHouse::_LM_EXECUTE_FULL_COMPUTE() {
	EILightmap *pFloorLm;
	FTIterator fti;
	RBIterator rbi;
	FTIterator i;
	FTValue v;
	FTIterator i;
	RBIterator i;
	RBIterator i;
	
  ERedBlackTreeNode *pEVar1;
  EFloatTreeNode *pEVar2;
  EILightmap__0_4024 *pEVar3;
  EILightmap__0_4024 *this_00;
  
                    /* inlined from ../MSrc/Function.h */
                    /* end of inlined section */
  if (this->m_lmLastStage != LM_EXECUTE_FULL_COMPUTE) {
    this->m_lmLastStage = LM_EXECUTE_FULL_COMPUTE;
    ReComputeLighting__6EHouseb(this,true);
    EnableLightMaps__6EHouseb(this,true);
  }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
                    /* end of inlined section */
  this_00 = (EILightmap__0_4024 *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if (_16ISimsObjectModel_m_lmcomputefloattree.field0_0x0.m_list.m_pHead != (EFloatTreeNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
    pEVar2 = _16ISimsObjectModel_m_lmcomputefloattree.field0_0x0.m_list.m_pHead;
    pEVar3 = this_00;
    this_00 = (EILightmap__0_4024 *)
              (_16ISimsObjectModel_m_lmcomputefloattree.field0_0x0.m_list.m_pHead)->value;
    while( true ) {
                    /* end of inlined section */
      if (this_00->m_xRes != 0x80) {
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
        Insert__13ERedBlackTreeUiUib
                  (&(this->m_lmcomputeList).field0_0x0,(uint)this_00,(uint)this_00,false);
        this_00 = pEVar3;
      }
                    /* inlined from /eor/src2/common/datastruc/e_floattree.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (EFloatTreeNode *)0x0) break;
      pEVar3 = this_00;
      this_00 = (EILightmap__0_4024 *)pEVar2->value;
    }
  }
  RemoveAll__13ERedBlackTree(&_16ISimsObjectModel_m_lightmapComputeList.field0_0x0);
  RemoveAll__10EFloatTree(&_16ISimsObjectModel_m_lmcomputefloattree.field0_0x0);
  BeginLMCompute__6EHouse(this);
  if (this_00 == (EILightmap__0_4024 *)0x0) {
    pEVar1 = (this->m_lmcomputeList).field0_0x0.m_list.m_pHead;
  }
  else {
    Compute__10EILightmap(this_00);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
    pEVar1 = (this->m_lmcomputeList).field0_0x0.m_list.m_pHead;
  }
                    /* end of inlined section */
  for (; pEVar1 != (ERedBlackTreeNode *)0x0; pEVar1 = pEVar1->pNext) {
                    /* end of inlined section */
    Compute__10EILightmap((EILightmap__0_4024 *)pEVar1->value);
                    /* inlined from /eor/src2/common/datastruc/e_redblacktree.h */
                    /* end of inlined section */
  }
  EndLMCompute__6EHouse(this);
  RemoveAll__13ERedBlackTree(&(this->m_lmcomputeList).field0_0x0);
  this->m_lmStage = LM_EXIT_FULL_COMPUTE;
  return;
}

void EHouse::_LM_EXIT_FULL_COMPUTE() {
	static float _lmFullFadeOutTime = 0.f;
	
  ELMComputeStage EVar1;
  float fVar2;
  float fVar3;
  
  if (__bDidInitialCompute == 0) {
    __bDidInitialCompute = 1;
                    /* inlined from ../MSrc/Function.h */
    EVar1 = this->m_lmLastStage;
  }
  else {
    EVar1 = this->m_lmLastStage;
  }
                    /* end of inlined section */
  if (EVar1 != LM_EXIT_FULL_COMPUTE) {
    this->m_lmLastStage = LM_EXIT_FULL_COMPUTE;
    this->m_fadeAlpha = 1.0;
    _lmFullFadeOutTime_5630 = 0.0;
  }
  _lmFullFadeOutTime_5630 =
       _lmFullFadeOutTime_5630 +
       (float)((int)_dt * (uint)(_dt < 0.03333334) | (uint)(_dt >= 0.03333334) * 0x3d088889);
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
  fVar2 = 0.0;
                    /* inlined from /eor/src2/common/math/e_math.h */
  fVar3 = 1.0 - _lmFullFadeOutTime_5630 * 4.0;
                    /* end of inlined section */
  this->m_fadeAlpha = fVar3;
  if (0.0 <= fVar3) {
    fVar2 = (float)((int)fVar3 * (uint)(fVar3 < 1.0) | (uint)(fVar3 >= 1.0) * 0x3f800000);
  }
  this->m_fadeAlpha = fVar2;
  if (fVar2 == 0.0) {
    this->m_lmStage = LM_STAGE_NONE;
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
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    _vSunColorTimeOfDay[0].field0_0x0._0_4_ = 0x3f800000;
    _vSunColorTimeOfDay[0].field0_0x0._8_4_ = 0x3f666666;
    _vSunColorTimeOfDay[0].field0_0x0._4_4_ = 0x3f800000;
    _vSunColorTimeOfDay[1].field0_0x0._0_4_ = 0x3f800000;
    _vSunColorTimeOfDay[1].field0_0x0._8_4_ = 0x3f4a3d71;
    _vSunColorTimeOfDay[1].field0_0x0._4_4_ = 0x3f6e147b;
    _vSunColorTimeOfDay[2].field0_0x0._0_4_ = 0x3f68f5c3;
    _vSunColorTimeOfDay[2].field0_0x0._4_4_ = 0x3f5eb852;
    _vSunColorTimeOfDay[2].field0_0x0._8_4_ = 0x3f800000;
    _vSunPos.field0_0x0.d[0] = 70.0;
    _vSunPos.field0_0x0.d[2] = 200.0;
    _vSunColorTimeOfDay[3].field0_0x0._8_4_ = 0x3f7851ec;
    _vSunPos.field0_0x0.d[1] = -150.0;
    _vSunColor.field0_0x0.d[1] = 1.0;
    _vSunColor.field0_0x0.d[0] = 1.0;
    _vSunColorTimeOfDay[3].field0_0x0._0_4_ = 0x3f6e147b;
    _vSunColorTimeOfDay[3].field0_0x0._4_4_ = 0x3f59999a;
    _vSunColor.field0_0x0.d[2] = 1.0;
  }
  return;
}

ISimInstanceHandleGenerator* EIObjectMan::ISimInstanceHandleGenerator::ISimInstanceHandleGenerator() {
  this->m_lastHandle = 0;
  return this;
}

void global constructors keyed to EorGetTimeOfDay() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
