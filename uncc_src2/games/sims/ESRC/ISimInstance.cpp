// STATUS: NOT STARTED

#include "ISimInstance.h"

// warning: multiple differing types with the same name (name not equal)
struct cXObject : virtual TreeSim {
	TreeSim *$vb2602;
	__vtbl_ptr_type *$vf2557;
	
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
	Panelstateman *$vb3261;
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
	Panelstateman *$vb3261;
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
	Panelstateman *$vb3261;
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
	Panelstateman *$vb3261;
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

ELights ISimInstance::_ERRORLightCur = {
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

EVec3 ISimInstance::_ERRORLight = {
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

float _cursorlightfadedur = 0.7f;
ETypeInfo *gpTypeInfo_ISimInstance = NULL;

__vtbl_ptr_type ISimInstance::IBaseSimInstance virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -304,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::~ISimInstance,
		/* .__delta2 = */ 17888
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

__vtbl_ptr_type ISimInstance virtual table[40] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::SafeDelete,
		/* .__delta2 = */ 20320
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetTypeInfo,
		/* .__delta2 = */ 20376
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetTypeName,
		/* .__delta2 = */ 20392
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetTypeKey,
		/* .__delta2 = */ 20408
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetTypeVersion,
		/* .__delta2 = */ 20424
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::~ISimInstance,
		/* .__delta2 = */ 17888
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
		/* .__pfn = */ &EInstance::Update,
		/* .__delta2 = */ -5200
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::VisibilityTest,
		/* .__delta2 = */ -23936
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIStaticModel::Draw,
		/* .__delta2 = */ -23776
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
		/* .__pfn = */ &EInstance::CalcLights3,
		/* .__delta2 = */ -7600
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
		/* .__pfn = */ &ISimInstance::TestForCursorOverlap,
		/* .__delta2 = */ 18928
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ISimInstance::GetObCenter,
		/* .__delta2 = */ 20040
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type IBaseSimInstance virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &IBaseSimInstance::~IBaseSimInstance,
		/* .__delta2 = */ 17312
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

ETypeInfo ISimInstance::m_typeInfo;

void IBaseSimInstance::~IBaseSimInstance(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (IBaseSimInstance__vtable *)_vt_16IBaseSimInstance;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

EStream& operator<<(EStream &s, ISimInstance *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ISimInstance *&pD) {
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
  *pD = (ISimInstance *)pStorable;
  return s;
}

void ISimInstance::SetPlacementError(bool on) {
  SetHighlight__12ISimInstanceUib(this,4,on);
  return;
}

void ISimInstance::Create(cXObject *pXOb, EHouse *pEHouse) {
  return;
}

void ISimInstance::OrentSubObject(cXObject *pRotOb) {
  return;
}

void ISimInstance::SetObjOrient() {
  return;
}

void ISimInstance::CreateShadow() {
  return;
}

void ISimInstance::InsertSubModelsInHouse(ERLevel *pLevel) {
  return;
}

void ISimInstance::RemoveSubModelsFromHouse(ERLevel *pLevel) {
  return;
}

void ISimInstance::PropigateFlagsToSubModels() {
  return;
}

void ISimInstance::SetOutOfWorld() {
  return;
}

void ISimInstance::SetCarryOrient() {
  return;
}

void ISimInstance::StartBurp(int player) {
  return;
}

EIStaticModel* ISimInstance::GetShadow() {
  return (EIStaticModel *)0x0;
}

void ISimInstance::SetXOb(cXObject *p) {
  this->m_pXOb = (cXObject__179_1116 *)p;
  return;
}

cXObject* ISimInstance::GetXOb() {
  return (cXObject__56_2557 *)this->m_pXOb;
}

ISimInstance* ISimInstance::ISimInstance() {
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  
  __13EIStaticModel(&this->field0_0x0);
  *(__vtbl_ptr_type **)&this->field_0x130 = _vt_12ISimInstance_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_12ISimInstance;
  __15EAnimController(&this->m_AC);
                    /* end of inlined section */
  iVar5 = 0;
  do {
    bVar2 = iVar5 != -1;
    iVar5 = iVar5 + -1;
  } while (bVar2);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  this->m_pXOb = (cXObject__179_1116 *)0x0;
  this->m_cursFlags = 0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  _12ISimInstance__ERRORLightCur.a.vColor.field0_0x0._0_8_ = 0x40000000;
  _12ISimInstance__ERRORLight.field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  _12ISimInstance__ERRORLightCur.a.vColor.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&this->m_highlight[0].a.vColor.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  _12ISimInstance__ERRORLight.field0_0x0._0_8_ =
       _12ISimInstance__ERRORLightCur.a.vColor.field0_0x0._0_8_;
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0x3f8000003f800000U >> (7 - uVar3) * 8;
  uVar3 = (uint)this->m_highlight & 7;
  puVar4 = (ulong *)((int)this->m_highlight - uVar3);
  *puVar4 = 0x3f8000003f800000 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  this->m_highlight[0].a.vColor.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&this->m_highlight[1].a.vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0x3f8000003f800000U >> (7 - uVar3) * 8;
  uVar3 = (uint)(this->m_highlight + 1) & 7;
  puVar4 = (ulong *)((int)(this->m_highlight + 1) - uVar3);
  *puVar4 = 0x3f8000003f800000 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  this->m_highlight[1].a.vColor.field0_0x0.d[2] = 0.0;
  return this;
}

void ISimInstance::~ISimInstance(int __in_chrg) {
	void *p;
	
  cXObject__179_1116 *pcVar1;
  
  pcVar1 = this->m_pXOb;
  *(__vtbl_ptr_type **)&this->field_0x130 = _vt_12ISimInstance_16IBaseSimInstance;
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_12ISimInstance;
  if (pcVar1 != (cXObject__179_1116 *)0x0) {
    this->m_pXOb = (cXObject__179_1116 *)0x0;
  }
  ___15EAnimController(&this->m_AC,2);
  ___16IBaseSimInstance((IBaseSimInstance *)&this->field_0x130,0);
  ___13EIStaticModel(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/isiminstance.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ISimInstance::SetHighlight(u32 flag, bool on) {
  if (on) {
    this->m_cursFlags = this->m_cursFlags | flag;
    return;
  }
  this->m_cursFlags = this->m_cursFlags & ~flag;
  return;
}

bool ISimInstance::GetIsPerson() {
  cXObject__179_1116 *pcVar1;
  bool bVar2;
  ObjSelector *this_00;
  
  pcVar1 = this->m_pXOb;
  if (pcVar1 == (cXObject__179_1116 *)0x0) {
    bVar2 = false;
  }
  else {
    this_00 = (ObjSelector *)
              (*(code *)pcVar1->__vtable[1].SetLevel)
                        ((int)&pcVar1->_vb1050 + (int)*(short *)&pcVar1->__vtable[1].GetTreeID);
    bVar2 = GetIsPerson__11ObjSelector(this_00);
  }
  return bVar2;
}

void ESim::TestForCursorOverlap(int player, float cursrad, OverlapMode mode) {
	u32 flag;
	EBound3 cursorBound;
	EVec3 vPelvis;
	EBound3 mBound;
	EVec3 *this;
	InteractionList mInteractions;
	ObjTestSim testSim1;
	
  undefined *puVar1;
  undefined *puVar2;
  ESimsCursor__67_3982 *pEVar3;
  cXPerson__150_1300__vtable *pcVar4;
  code *pcVar5;
  EStorable__vtable *pEVar6;
  uint uVar7;
  ulong *puVar8;
  bool bVar9;
  int *piVar10;
  cXObject__124_908 *stackObj;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  EBound3 cursorBound;
  EVec3 vPelvis;
  EBound3 mBound;
  InteractionList mInteractions;
  ObjTestSim testSim1;
  
  if (_globals._pSelectedSims[player] == (cXPerson__150_1300 *)0x0) {
    return;
  }
  pEVar3 = _globals._pCursor[player];
  uVar14 = 8;
  if (player == 0) {
    uVar14 = 1;
  }
  if (pEVar3 != (ESimsCursor__67_3982 *)0x0) {
    if (mode != OV_MODE_LIVE) {
      uVar12 = (this->field0_0x0).m_cursFlags;
      goto LAB_001749b8;
    }
                    /* inlined from /eor/src2/common/math/e_bound3.h */
    vPelvis.field0_0x0.d[2] = 0.0;
    vPelvis.field0_0x0.d[1] = 0.0;
    vPelvis.field0_0x0.d[0] = 0.0;
    puVar1 = (undefined *)((int)&cursorBound.vMax.field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar12);
    *puVar8 = *puVar8 & -1L << (uVar12 + 1) * 8 | 0UL >> (7 - uVar12) * 8;
    uVar12 = (uint)&cursorBound.vMax & 7;
    puVar8 = (ulong *)((int)&cursorBound.vMax - uVar12);
    *puVar8 = 0L << uVar12 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    cursorBound.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&cursorBound.vMax.field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    uVar11 = (uint)&cursorBound.vMax & 7;
    puVar2 = (undefined *)((int)&cursorBound.vMin.field0_0x0 + 7);
    uVar7 = (uint)puVar2 & 7;
    puVar8 = (ulong *)(puVar2 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 |
              (*(long *)(puVar1 + -uVar12) << (7 - uVar12) * 8 & -1L << (8 - uVar11) * 8 |
              *(ulong *)((int)&cursorBound.vMax - uVar11) >> uVar11 * 8) >> (7 - uVar7) * 8;
                    /* end of inlined section */
    cursorBound.vMax.field0_0x0.d[0] = (pEVar3->m_vPos).field0_0x0.d[0] + cursrad;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    cursorBound.vMax.field0_0x0.d[1] = (pEVar3->m_vPos).field0_0x0.d[1] + cursrad;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    cursorBound.vMax.field0_0x0.d[2] = 10.0;
                    /* end of inlined section */
    cursorBound.vMin.field0_0x0.d[0] = (pEVar3->m_vPos).field0_0x0.d[0] - cursrad;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    cursorBound.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    cursorBound.vMin.field0_0x0.d[1] = (pEVar3->m_vPos).field0_0x0.d[1] - cursrad;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    pcVar4 = this->m_pPerson->__vtable;
    piVar10 = (int *)(*(code *)pcVar4->GetPersonImplementation)
                               ((int)&this->m_pPerson->_vb1187 +
                                (int)*(short *)&pcVar4->GetControllingObject);
    pcVar5 = *(code **)(*piVar10 + 0x104);
    uVar13 = (ulong)(int)pcVar5;
    (*pcVar5)((int)piVar10 + (int)*(short *)(*piVar10 + 0x100),1,&vPelvis);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    bVar9 = false;
    mInteractions.m_pLast = (Interaction *)0x0;
    mInteractions.m_pFirst = (Interaction *)0x0;
    puVar1 = (undefined *)((int)&mBound.vMax.field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar12);
    *puVar8 = *puVar8 & -1L << (uVar12 + 1) * 8 | 0UL >> (7 - uVar12) * 8;
    uVar12 = (uint)&mBound.vMax & 7;
    puVar8 = (ulong *)((int)&mBound.vMax - uVar12);
    *puVar8 = 0L << uVar12 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    mBound.vMax.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&mBound.vMax.field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    uVar11 = (uint)&mBound.vMax & 7;
    puVar2 = (undefined *)((int)&mBound.vMin.field0_0x0 + 7);
    uVar7 = (uint)puVar2 & 7;
    puVar8 = (ulong *)(puVar2 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 |
              ((*(long *)(puVar1 + -uVar12) << (7 - uVar12) * 8 |
               uVar13 & 0xffffffffffffffffU >> (uVar12 + 1) * 8) & -1L << (8 - uVar11) * 8 |
              *(ulong *)((int)&mBound.vMax - uVar11) >> uVar11 * 8) >> (7 - uVar7) * 8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    mBound.vMax.field0_0x0.d[0] = vPelvis.field0_0x0.d[0] + 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    mBound.vMax.field0_0x0.d[1] = vPelvis.field0_0x0.d[1] + 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mBound.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mBound.vMax.field0_0x0.d[2] = 1.8;
    mBound.vMin.field0_0x0._0_8_ =
         CONCAT44(vPelvis.field0_0x0.d[1] - 0.5,vPelvis.field0_0x0.d[0] - 0.5);
    if ((((vPelvis.field0_0x0.d[0] - 0.5 <= cursorBound.vMax.field0_0x0.d[0]) &&
         (cursorBound.vMin.field0_0x0.d[0] <= mBound.vMax.field0_0x0.d[0])) &&
        (vPelvis.field0_0x0.d[1] - 0.5 <= cursorBound.vMax.field0_0x0.d[1])) &&
       (((cursorBound.vMin.field0_0x0.d[1] <= mBound.vMax.field0_0x0.d[1] &&
         (0.0 <= cursorBound.vMax.field0_0x0.d[2])) && (cursorBound.vMin.field0_0x0.d[2] <= 1.8))))
    {
      bVar9 = true;
    }
                    /* end of inlined section */
    if (bVar9) {
      __15InteractionList(&mInteractions);
      stackObj = (cXObject__124_908 *)GetXOb__12ISimInstance(&this->field0_0x0);
      __10ObjTestSimP8cXPersonP8cXObjectb
                (&testSim1,(cXPerson__124_906 *)_globals._pSelectedSims[player],stackObj,false);
      AppendInteractions__10ObjTestSimR15InteractionList(&testSim1,&mInteractions);
      uVar11 = size__C15InteractionList(&mInteractions);
      uVar12 = (this->field0_0x0).m_cursFlags;
      if (uVar11 == 0) {
        uVar12 = uVar12 & ~uVar14;
      }
      else {
        if ((uVar14 & uVar12) == 0) {
          pEVar6 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
          (*(code *)pEVar6[7].EStorable)
                    ((int)((this->field0_0x0).field0_0x0.field0_0x0.m_otd.m_minPos + -7) +
                     (int)*(short *)&pEVar6[7].GetTypeVersion,player);
          uVar12 = (this->field0_0x0).m_cursFlags;
        }
        else {
          uVar12 = (this->field0_0x0).m_cursFlags;
        }
        uVar12 = uVar12 | uVar14;
      }
      (this->field0_0x0).m_cursFlags = uVar12;
      ___10ObjTestSim(&testSim1,2);
      ___15InteractionList(&mInteractions,2);
      return;
    }
  }
  uVar12 = (this->field0_0x0).m_cursFlags;
LAB_001749b8:
  (this->field0_0x0).m_cursFlags = uVar12 & ~uVar14;
  return;
}

void ISimInstance::TestForCursorOverlap(int player, float cursrad, OverlapMode mode) {
	u32 flag;
	EBound3 cursorBound;
	EInstance *this;
	EPanel *pPanel;
	ESimsCam *pCam0;
	ESimsCam *pCam1;
	bool intrack0;
	bool intrack1;
	EPanel *this;
	EPanel *this;
	ESimsCam *this;
	ESimsCam *this;
	cXObject *pXObj;
	InteractionList mInteractions;
	cXObject *pXObj;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ESimsCursor__67_3982 *pEVar4;
  uint uVar5;
  ulong *puVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  cXObject__56_2557 *pcVar10;
  EStorable__vtable *pEVar11;
  long lVar12;
  ESimsCam *pEVar13;
  ESimsCam *pEVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  EBound3 cursorBound;
  InteractionList mInteractions;
  
  if ((this->m_cursFlags & 4) != 0) {
    return;
  }
  pEVar4 = _globals._pCursor[player];
  uVar15 = 8;
  if (player == 0) {
    uVar15 = 1;
  }
  if (pEVar4 == (ESimsCursor__67_3982 *)0x0) {
    this->m_cursFlags = this->m_cursFlags & ~uVar15;
    return;
  }
                    /* inlined from /eor/src2/common/math/e_bound3.h */
  mInteractions.m_pLast = (Interaction *)0x0;
  mInteractions.m_pFirst = (Interaction *)0x0;
  bVar7 = false;
  puVar1 = (undefined *)((int)&cursorBound.vMax.field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar9);
  *puVar6 = *puVar6 & -1L << (uVar9 + 1) * 8 | 0UL >> (7 - uVar9) * 8;
  uVar9 = (uint)&cursorBound.vMax & 7;
  puVar6 = (ulong *)((int)&cursorBound.vMax - uVar9);
  *puVar6 = 0L << uVar9 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  cursorBound.vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&cursorBound.vMax.field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  uVar3 = (uint)&cursorBound.vMax & 7;
  puVar2 = (undefined *)((int)&cursorBound.vMin.field0_0x0 + 7);
  uVar5 = (uint)puVar2 & 7;
  puVar6 = (ulong *)(puVar2 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&cursorBound.vMax - uVar3) >> uVar3 * 8) >> (7 - uVar5) * 8;
                    /* end of inlined section */
  cursorBound.vMax.field0_0x0.d[0] = (pEVar4->m_vPos).field0_0x0.d[0] + cursrad;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  cursorBound.vMax.field0_0x0.d[1] = (pEVar4->m_vPos).field0_0x0.d[1] + cursrad;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  cursorBound.vMax.field0_0x0.d[2] = 10.0;
                    /* end of inlined section */
  fVar16 = (pEVar4->m_vPos).field0_0x0.d[0] - cursrad;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar17 = (pEVar4->m_vPos).field0_0x0.d[1] - cursrad;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  cursorBound.vMin.field0_0x0.d[2] = 0.0;
  cursorBound.vMin.field0_0x0._0_8_ = CONCAT44(fVar17,fVar16);
  if ((((((this->field0_0x0).field0_0x0.m_otd.m_bPos.vMin.field0_0x0.d[0] <=
          cursorBound.vMax.field0_0x0.d[0]) &&
        (fVar16 <= (this->field0_0x0).field0_0x0.m_otd.m_bPos.vMax.field0_0x0.d[0])) &&
       ((this->field0_0x0).field0_0x0.m_otd.m_bPos.vMin.field0_0x0.d[1] <=
        cursorBound.vMax.field0_0x0.d[1])) &&
      ((fVar17 <= (this->field0_0x0).field0_0x0.m_otd.m_bPos.vMax.field0_0x0.d[1] &&
       ((this->field0_0x0).field0_0x0.m_otd.m_bPos.vMin.field0_0x0.d[2] <= 10.0)))) &&
     (0.0 <= (this->field0_0x0).field0_0x0.m_otd.m_bPos.vMax.field0_0x0.d[2])) {
    bVar7 = true;
  }
                    /* end of inlined section */
  if (bVar7) {
    if ((int)mode < 3) {
      if ((int)mode < 1) {
        if (mode == OV_MODE_LIVE) {
          pEVar13 = (ESimsCam *)0x0;
          if (_globals._pPanel != (EPanel *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
            pEVar13 = (_globals._pPanel)->m_pCameras[0];
          }
                    /* end of inlined section */
          pEVar14 = (ESimsCam *)0x0;
          if (_globals._pPanel != (EPanel *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/livemodepanel.h */
            pEVar14 = (_globals._pPanel)->m_pCameras[1];
          }
                    /* end of inlined section */
          bVar7 = false;
          if (pEVar13 != (ESimsCam *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
            bVar7 = pEVar13->m_mode == 4;
          }
          bVar8 = false;
          if (pEVar14 != (ESimsCam *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
            bVar8 = pEVar14->m_mode == 4;
          }
          if ((bVar7) && (player == 0)) {
            uVar9 = this->m_cursFlags;
          }
          else {
            if ((!bVar8) || (player != 1)) {
              pcVar10 = GetXOb__12ISimInstance(this);
              __15InteractionList(&mInteractions);
              clear__15InteractionList(&mInteractions);
              lVar12 = (*(code *)pcVar10->__vtable->ReconType)
                                 ((int)&pcVar10->_vb2602 +
                                  (int)*(short *)&pcVar10->__vtable->ReconStream,0x22);
              if (lVar12 == 0) {
                CollectInteractionsForObject__FP8cXObjectR15InteractionListi
                          ((cXObject__47_3244 *)pcVar10,&mInteractions,player);
              }
              uVar9 = size__C15InteractionList(&mInteractions);
              if (uVar9 == 0) {
                uVar9 = this->m_cursFlags & ~uVar15;
              }
              else {
                if ((uVar15 & this->m_cursFlags) == 0) {
                  pEVar11 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
                  (*(code *)pEVar11[7].EStorable)
                            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                             (int)*(short *)&pEVar11[7].GetTypeVersion,player);
                  uVar9 = this->m_cursFlags;
                }
                else {
                  uVar9 = this->m_cursFlags;
                }
                uVar9 = uVar9 | uVar15;
              }
              this->m_cursFlags = uVar9;
              ___15InteractionList(&mInteractions,2);
              pEVar11 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
              goto LAB_00174d0c;
            }
            uVar9 = this->m_cursFlags;
          }
        }
        else {
          uVar9 = this->m_cursFlags;
        }
      }
      else {
        uVar9 = this->m_cursFlags;
      }
      goto LAB_00174cfc;
    }
    if (mode != OV_MODE_ALL) {
      uVar9 = this->m_cursFlags;
      goto LAB_00174cfc;
    }
    pcVar10 = GetXOb__12ISimInstance(this);
    lVar12 = (*(code *)pcVar10->__vtable->ReconType)
                       ((int)&pcVar10->_vb2602 + (int)*(short *)&pcVar10->__vtable->ReconStream,0x22
                       );
    if (lVar12 != 0) {
      uVar9 = this->m_cursFlags;
      goto LAB_00174cfc;
    }
    lVar12 = (*(code *)pcVar10->__vtable->GetContainer)
                       ((int)&pcVar10->_vb2602 + (int)*(short *)&pcVar10->__vtable->GetSlotHeight);
    uVar9 = this->m_cursFlags;
    if (lVar12 == 0) goto LAB_00174cfc;
    uVar9 = uVar9 | uVar15;
  }
  else {
    uVar9 = this->m_cursFlags;
LAB_00174cfc:
    uVar9 = uVar9 & ~uVar15;
  }
  this->m_cursFlags = uVar9;
  pEVar11 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
LAB_00174d0c:
  (**(code **)(pEVar11 + 7))
            ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
             (int)*(short *)&pEVar11[6].Write);
  return;
}

EVec3 ESim::GetObCenter() {
	EVec3 vPelvis;
	EBound3 mBound;
	EBoundSphere shpere;
	EVec3 *this;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  cXPerson__150_1300__vtable *pcVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  int *piVar8;
  EVec3 vPelvis;
  EBound3 mBound;
  EBoundSphere shpere;
  
  pcVar4 = this->m_pPerson->__vtable;
  piVar8 = (int *)(*(code *)pcVar4->GetPersonImplementation)
                            ((int)&this->m_pPerson->_vb1187 +
                             (int)*(short *)&pcVar4->GetControllingObject);
  (**(code **)(*piVar8 + 0x104))((int)piVar8 + (int)*(short *)(*piVar8 + 0x100),1,&vPelvis);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  shpere.vCenter.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  shpere.vCenter.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  shpere.vCenter.field0_0x0.d[0] = 0.0;
  puVar1 = (undefined *)((int)&mBound.vMax.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar5);
  *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  uVar5 = (uint)&mBound.vMax & 7;
  puVar7 = (ulong *)((int)&mBound.vMax - uVar5);
  *puVar7 = 0L << uVar5 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  mBound.vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&mBound.vMax.field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  uVar3 = (uint)&mBound.vMax & 7;
  puVar2 = (undefined *)((int)&mBound.vMin.field0_0x0 + 7);
  uVar6 = (uint)puVar2 & 7;
  puVar7 = (ulong *)(puVar2 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 |
            (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&mBound.vMax - uVar3) >> uVar3 * 8) >> (7 - uVar6) * 8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  mBound.vMax.field0_0x0.d[0] = vPelvis.field0_0x0.d[0] + 0.5;
  mBound.vMax.field0_0x0.d[1] = vPelvis.field0_0x0.d[1] + 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mBound.vMax.field0_0x0.d[2] = 1.8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mBound.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  mBound.vMin.field0_0x0._0_8_ =
       CONCAT44(vPelvis.field0_0x0.d[1] - 0.5,vPelvis.field0_0x0.d[0] - 0.5);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  CalcBoundSphere__7EBound3R12EBoundSphere(&mBound,&shpere);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[0] = shpere.vCenter.field0_0x0.d[0];
  (__return_storage_ptr__->field0_0x0).d[1] = shpere.vCenter.field0_0x0.d[1];
  (__return_storage_ptr__->field0_0x0).d[2] = shpere.vCenter.field0_0x0.d[2];
  return __return_storage_ptr__;
}

EVec3 ISimInstance::GetObCenter() {
	EVec3 *this;
	EVec3 &v;
	
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[0] =
       (this->field0_0x0).m_boundSphere.vCenter.field0_0x0.d[0];
  (__return_storage_ptr__->field0_0x0).d[1] =
       (this->field0_0x0).m_boundSphere.vCenter.field0_0x0.d[1];
  (__return_storage_ptr__->field0_0x0).d[2] =
       (this->field0_0x0).m_boundSphere.vCenter.field0_0x0.d[2];
  return __return_storage_ptr__;
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
                    /* inlined from c:/eor/src2/games/sims/ESRC/ISimInstance.cpp */
    gpTypeInfo_ISimInstance =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_12ISimInstance_m_typeInfo,New__12ISimInstance,0,"ISimInstance",
                    &_13EIStaticModel_m_typeInfo);
  }
  return;
}

IBaseSimInstance* IBaseSimInstance::IBaseSimInstance() {
  this->__vtable = (IBaseSimInstance__vtable *)_vt_16IBaseSimInstance;
  return this;
}

ISimInstance* ISimInstance::New() {
  ISimInstance *pIVar1;
  
  pIVar1 = (ISimInstance *)__nw__12ISimInstanceUi(0x1b0);
  pIVar1 = __12ISimInstance(pIVar1);
  return pIVar1;
}

void ISimInstance::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ISimInstance *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* ISimInstance::GetTypeInfo() {
  return &_12ISimInstance_m_typeInfo;
}

char* ISimInstance::GetTypeName() {
  return _12ISimInstance_m_typeInfo.m_name;
}

u32 ISimInstance::GetTypeKey() {
  return _12ISimInstance_m_typeInfo.m_key;
}

u16 ISimInstance::GetTypeVersion() {
  return _12ISimInstance_m_typeInfo.m_version;
}

u16 ISimInstance::GetReadVersion() {
  return _12ISimInstance_m_typeInfo.m_readVersion;
}

ETypeInfo* ISimInstance::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_12ISimInstance_m_typeInfo,New__12ISimInstance,version,"ISimInstance",
                      &_13EIStaticModel_m_typeInfo);
  return pEVar1;
}

ISimInstance* ISimInstance::CreateCopy() {
  ISimInstance *pIVar1;
  
  pIVar1 = (ISimInstance *)CreateCopy__9EStorable((EStorable *)this);
  return pIVar1;
}

void* ISimInstance::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,(long)(int)size);
  return __s;
}

void ISimInstance::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

void ISimInstance::SetCursFlags(u32 flags) {
  this->m_cursFlags = flags;
  return;
}

u32 ISimInstance::GetCursFlags() {
  return this->m_cursFlags;
}

ISimInstance* ISimInstance::GetSimInstance() {
  return this;
}

bool ISimInstance::IsMultiTilePart() {
  return false;
}

bool ISimInstance::HasModel() {
  return (this->field0_0x0).m_pModel != (ERModel *)0x0;
}

void global constructors keyed to ISimInstance::_ERRORLightCur() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
