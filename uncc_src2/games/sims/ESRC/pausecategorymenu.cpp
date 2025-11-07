// STATUS: NOT STARTED

#include "pausecategorymenu.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2373;
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
	Panelstateman *$vb2373;
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
	Panelstateman *$vb2373;
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
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2373;
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

float _d_pad_inverse_x = -8.f;
float _d_pad_inverse_y = 88.f;

__vtbl_ptr_type EPauseCategoryMenu virtual table[16] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseCategoryMenu::~EPauseCategoryMenu,
		/* .__delta2 = */ -29760
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseCategoryMenu::Update,
		/* .__delta2 = */ -28240
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseCategoryMenu::Draw,
		/* .__delta2 = */ -28640
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
		/* .__pfn = */ &EPauseCategoryMenu::Message,
		/* .__delta2 = */ -28176
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
		/* .__pfn = */ &EUIIcon::ShaderRect,
		/* .__delta2 = */ 12848
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EPauseScrollMenu virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseScrollMenu::~EPauseScrollMenu,
		/* .__delta2 = */ -30448
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseScrollMenu::Update,
		/* .__delta2 = */ -30288
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::Draw,
		/* .__delta2 = */ -2936
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
		/* .__pfn = */ &EPauseScrollMenu::Message,
		/* .__delta2 = */ -30336
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
		/* .__pfn = */ &EPauseScrollMenu::NextItem,
		/* .__delta2 = */ -30168
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseScrollMenu::PrevItem,
		/* .__delta2 = */ -30120
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

__vtbl_ptr_type EPauseCategoryMenuItem virtual table[16] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseCategoryMenuItem::~EPauseCategoryMenuItem,
		/* .__delta2 = */ -31864
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIIcon::Update,
		/* .__delta2 = */ 13552
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseCategoryMenuItem::Draw,
		/* .__delta2 = */ -31824
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
		/* .__pfn = */ &EUIIcon::ShaderRect,
		/* .__delta2 = */ 12848
	},
	/* [15] = */ {
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

ERShader *EPauseCategoryMenu::m_pOutlineShdr;
ERShader *EPauseCategoryMenu::m_pLockedShader;

EPauseCategoryMenuItem* EPauseCategoryMenuItem::EPauseCategoryMenuItem() {
	EUIIconDef icondef;
	EUIVirtualCtrl *pCtrl;
	EUIObjectNode *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  EUIIconDef__vtable *pEVar5;
  uint uVar6;
  ulong *puVar7;
  Controllpad *pCVar8;
  EUIIconDef icondef;
  
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_colorIdx = 1;
  icondef.m_flags = 0;
  icondef.m_selColorIdx = 0;
                    /* end of inlined section */
  icondef.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->field0_0x0,&icondef,0,0,0x40);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_22EPauseCategoryMenuItem;
  pCVar8 = _globals.m_pCtrlPad;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar5 = (this->field0_0x0).m_def.__vtable;
  (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0] = 0.0625;
  (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2] = 0.0893;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x4000000000U >> (7 - uVar6) * 8;
  pEVar2 = &(this->field0_0x0).m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar7 = (ulong *)((int)pEVar2 - uVar6);
  *puVar7 = 0x4000000000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x100000001U >> (7 - uVar6) * 8;
  piVar3 = &(this->field0_0x0).m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar7 = (ulong *)((int)piVar3 - uVar6);
  *puVar7 = 0x100000001 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | CONCAT44(0x3a8908,pCVar8) >> (7 - uVar6) * 8;
  ppEVar4 = &(this->field0_0x0).m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar7 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar7 = CONCAT44(0x3a8908,pCVar8) << uVar6 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (this->field0_0x0).m_def.__vtable = pEVar5;
                    /* end of inlined section */
  this->m_type = 6;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  this->m_pMasterSel = (ObjSelector *)0x0;
  this->m_pResSel = (ObjSelector *)0x0;
  this->m_pResSel2 = (ObjSelector *)0x0;
  return this;
}

EPauseCategoryMenuItem* EPauseCategoryMenuItem::EPauseCategoryMenuItem(FloorTile *floorNode) {
	EUIIconDef icondef;
	EUIVirtualCtrl *pCtrl;
	EUIObjectNode *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  EUIIconDef__vtable *pEVar5;
  uint uVar6;
  ulong *puVar7;
  EUIIconDef icondef;
  
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_trigger = 0x40;
  icondef.m_colorIdx = 1;
  icondef.m_flags = 0;
  icondef.m_selColorIdx = 0;
                    /* end of inlined section */
  icondef.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->field0_0x0,&icondef,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_trigger = 0x40;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_22EPauseCategoryMenuItem;
  icondef.m_pCtrl = &(_globals.m_pCtrlPad)->field0_0x0;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_colorIdx = 1;
                    /* end of inlined section */
  this->m_floorNode = floorNode;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  icondef.m_selColorIdx = 1;
                    /* end of inlined section */
  icondef.m_flags = 0;
  InitActiveShader__7EUIIconi(&this->field0_0x0,floorNode->shaderID);
  InitInActiveShader__7EUIIconi(&this->field0_0x0,floorNode->shaderID);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar5 = (this->field0_0x0).m_def.__vtable;
  (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0] = 0.0625;
  (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2] = 0.0893;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 |
            CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar6) * 8;
  pEVar2 = &(this->field0_0x0).m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar7 = (ulong *)((int)pEVar2 - uVar6);
  *puVar7 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar6 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 |
            CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar6) * 8;
  piVar3 = &(this->field0_0x0).m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar7 = (ulong *)((int)piVar3 - uVar6);
  *puVar7 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar6 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 |
            CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar6) * 8;
  ppEVar4 = &(this->field0_0x0).m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar7 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar7 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar6 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (this->field0_0x0).m_def.__vtable = pEVar5;
                    /* end of inlined section */
  this->m_pMasterSel = (ObjSelector *)0x0;
  this->m_pResSel = (ObjSelector *)0x0;
  this->m_pResSel2 = (ObjSelector *)0x0;
  this->m_type = 0;
  return this;
}

EPauseCategoryMenuItem* EPauseCategoryMenuItem::EPauseCategoryMenuItem(WallTile *wallNode) {
	EUIIconDef icondef;
	EUIVirtualCtrl *pCtrl;
	EUIObjectNode *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  EUIIconDef__vtable *pEVar5;
  uint uVar6;
  ulong *puVar7;
  EUIIconDef icondef;
  
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_trigger = 0x40;
  icondef.m_colorIdx = 1;
  icondef.m_flags = 0;
  icondef.m_selColorIdx = 0;
                    /* end of inlined section */
  icondef.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->field0_0x0,&icondef,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_trigger = 0x40;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_22EPauseCategoryMenuItem;
  icondef.m_pCtrl = &(_globals.m_pCtrlPad)->field0_0x0;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  this->m_wallNode = wallNode;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_selColorIdx = 1;
  icondef.m_colorIdx = 1;
                    /* end of inlined section */
  icondef.m_flags = 0;
  InitActiveShader__7EUIIconi(&this->field0_0x0,wallNode->shaderID);
  InitInActiveShader__7EUIIconi(&this->field0_0x0,wallNode->shaderID);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar5 = (this->field0_0x0).m_def.__vtable;
  (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0] = 0.0625;
  (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2] = 0.0893;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 |
            CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar6) * 8;
  pEVar2 = &(this->field0_0x0).m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar7 = (ulong *)((int)pEVar2 - uVar6);
  *puVar7 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar6 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 |
            CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar6) * 8;
  piVar3 = &(this->field0_0x0).m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar7 = (ulong *)((int)piVar3 - uVar6);
  *puVar7 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar6 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 |
            CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar6) * 8;
  ppEVar4 = &(this->field0_0x0).m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar7 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar7 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar6 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* end of inlined section */
  this->m_type = 1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  (this->field0_0x0).m_def.__vtable = pEVar5;
                    /* end of inlined section */
  this->m_pMasterSel = (ObjSelector *)0x0;
  this->m_pResSel = (ObjSelector *)0x0;
  this->m_pResSel2 = (ObjSelector *)0x0;
  return this;
}

EPauseCategoryMenuItem* EPauseCategoryMenuItem::EPauseCategoryMenuItem(u32 type) {
	EUIIconDef icondef;
	EUIVirtualCtrl *pCtrl;
	EUIObjectNode *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  EUIIconDef__vtable *pEVar5;
  uint uVar6;
  ulong *puVar7;
  Controllpad *pCVar8;
  EUIIconDef icondef;
  
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_colorIdx = 1;
  icondef.m_flags = 0;
  icondef.m_selColorIdx = 0;
                    /* end of inlined section */
  icondef.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->field0_0x0,&icondef,0,0,0x40);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_22EPauseCategoryMenuItem;
  pCVar8 = _globals.m_pCtrlPad;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar5 = (this->field0_0x0).m_def.__vtable;
  (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0] = 0.0625;
  (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2] = 0.0893;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x4000000000U >> (7 - uVar6) * 8;
  pEVar2 = &(this->field0_0x0).m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar7 = (ulong *)((int)pEVar2 - uVar6);
  *puVar7 = 0x4000000000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x100000001U >> (7 - uVar6) * 8;
  piVar3 = &(this->field0_0x0).m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar7 = (ulong *)((int)piVar3 - uVar6);
  *puVar7 = 0x100000001 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | CONCAT44(0x3a8908,pCVar8) >> (7 - uVar6) * 8;
  ppEVar4 = &(this->field0_0x0).m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar7 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar7 = CONCAT44(0x3a8908,pCVar8) << uVar6 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* end of inlined section */
  this->m_type = type;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  (this->field0_0x0).m_def.__vtable = pEVar5;
                    /* end of inlined section */
  this->m_pMasterSel = (ObjSelector *)0x0;
  this->m_pResSel = (ObjSelector *)0x0;
  this->m_pResSel2 = (ObjSelector *)0x0;
  return this;
}

void EPauseCategoryMenuItem::~EPauseCategoryMenuItem(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_22EPauseCategoryMenuItem;
  ___7EUIIcon(&this->field0_0x0,__in_chrg);
  return;
}

void EPauseCategoryMenuItem::Draw(ERC *prc) {
	EVec2 vScreenSize;
	EGraphics *this;
	EPauseCategoryMenuItem *this;
	int cidx;
	float cint;
	int i;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	float x;
	float y;
	float scaler;
	EVec4 &vVec;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EUIObjectNode *this;
	EVec4 vColor;
	float y;
	EPauseCategoryMenuItem *this;
	EGraphics *this;
	EGraphics *this;
	
  uint uVar1;
  uint uVar2;
  EVec4 *pEVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar4;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  float fVar5;
  float fVar6;
  EVec2 vScreenSize;
  EVec4 vColor;
  float local_c0;
  float local_bc;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
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
  
                    /* inlined from /eor/src2/engine/e_graphics.h */
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  fVar6 = (float)_pGfx->m_yscreen;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
  fVar5 = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  if ((*(int *)&this->m_bLocked == 0) || (_globals.Cheats._12_4_ != 0)) {
    Draw__7EUIIconP3ERC(&this->field0_0x0,prc);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    uVar2 = (this->field0_0x0).field0_0x0.m_flags;
  }
  else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    uVar2 = (this->field0_0x0).field0_0x0.m_flags;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    uVar1 = (int)uVar2 >> 3;
                    /* end of inlined section */
    if ((uVar1 & 1) == 0) {
      iVar4 = (this->field0_0x0).m_def.m_colorIdx;
    }
    else {
      iVar4 = (this->field0_0x0).m_def.m_selColorIdx;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    local_a8 = 0.65;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)uVar2 >> 2 & 1U) != 0) {
      local_a8 = 1.0;
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if ((this->field0_0x0).m_pShaders[uVar1 & 1 ^ 1] == (ERShader *)0x0) {
      return;
    }
    Select__8ERShaderP3ERCi(_18EPauseCategoryMenu_m_pLockedShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vColor.field0_0x0.d[0] = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_a4 = local_a8 * _7EUIIcon_m_vColors[iVar4].field0_0x0.d[3];
    local_b0 = local_a8 * _7EUIIcon_m_vColors[iVar4].field0_0x0.d[0];
    vColor.field0_0x0.d[1] = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2];
    local_ac = local_a8 * _7EUIIcon_m_vColors[iVar4].field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_a8 = local_a8 * _7EUIIcon_m_vColors[iVar4].field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_bc = 1.25;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_c0 = 1.25;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vColor,&local_c0,
               &local_b0);
    uVar2 = (this->field0_0x0).field0_0x0.m_flags;
  }
                    /* end of inlined section */
  if (((int)uVar2 >> 3 & 1U) == 0) {
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vColor.field0_0x0.d[1] = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2];
                    /* end of inlined section */
    vColor.field0_0x0.d[0] = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + 0.00078125;
    local_c0 = vColor.field0_0x0.d[0] + (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_bc = vColor.field0_0x0.d[1] + (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_a0 = 0;
    local_9c = 0x3f800000;
    local_90 = 0x3f800000;
    local_8c = 0;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0x3edc28f6;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vColor,&local_c0,
               &local_a0,&local_90,&local_80);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
    if ((*(int *)&this->m_bLocked == 0) || (_globals.Cheats._12_4_ != 0)) {
      pEVar3 = &_WHITE;
    }
    else {
      pEVar3 = &_RED;
    }
    vColor.field0_0x0.d[2] = (pEVar3->field0_0x0).d[2];
    vColor.field0_0x0.d[3] = (pEVar3->field0_0x0).d[3];
    vColor.field0_0x0.d[0] = (float)(int)*(undefined8 *)&pEVar3->field0_0x0;
    vColor.field0_0x0.d[1] = (float)(int)((ulong)*(undefined8 *)&pEVar3->field0_0x0 >> 0x20);
    Select__8ERShaderP3ERCi(_18EPauseCategoryMenu_m_pOutlineShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    local_b0 = ((this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0] + 2.0 / fVar5) / (64.0 / fVar5);
    local_ac = ((this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2] + 2.0 / fVar6) / (64.0 / fVar6);
    local_bc = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] - 1.0 / (float)_pGfx->m_yscreen;
    local_c0 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] - 1.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_b0,
               &vColor);
  }
  else {
    Select__8ERShaderP3ERCi(_18EPauseCategoryMenu_m_pOutlineShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    local_c0 = ((this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0] + 2.0 / fVar5) / (64.0 / fVar5);
    local_bc = ((this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2] + 2.0 / fVar6) / (64.0 / fVar6);
    vColor.field0_0x0.d[1] =
         (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] - 1.0 / (float)_pGfx->m_yscreen;
    vColor.field0_0x0.d[0] =
         (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] - 1.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vColor,&local_c0,
               0x35f520);
  }
  return;
}

u32 EPauseCategoryMenuItem::GetPrice() {
	u32 nPrice;
	ObjSelector *this;
	
  FloorTile *pFVar1;
  uint uVar2;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  switch(this->m_type) {
  case 0:
    pFVar1 = this->m_floorNode;
    goto LAB_001a881c;
  case 1:
    pFVar1 = (FloorTile *)this->m_wallNode;
LAB_001a881c:
    if (pFVar1 == (FloorTile *)0x0) {
      return 0;
    }
    uVar2 = pFVar1->cost;
    break;
  case 2:
    uVar2 = 0x46;
    break;
  case 3:
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    uVar2 = (*((_globals._pFenceSet)->field0_0x0).pData)->cost;
    break;
  case 4:
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    uVar2 = ((_globals._pFenceSet)->field0_0x0).pData[1]->cost;
    break;
  case 5:
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    uVar2 = ((_globals._pFenceSet)->field0_0x0).pData[2]->cost;
    break;
  case 6:
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
    uVar2 = (uint)(short)this->m_pMasterSel->fHeader->price;
    break;
  default:
    return 0;
  }
  return uVar2;
}

s32 EPauseCategoryMenuItem::GetGUID() {
  if (this->m_pMasterSel != (ObjSelector *)0x0) {
                    /* end of inlined section */
    return this->m_pMasterSel->fHeader->guid;
  }
  return 0;
}

EPauseScrollMenu* EPauseScrollMenu::EPauseScrollMenu(int _layout, int background_id, float optGap, float _yoff, float _xoff, int backid, int forewardid, bool clampAtEnds) {
	EUiMonitorAutoRepeat *this;
	
  EUiMonitorAutoRepeat *pEVar1;
  
  __13EUIScrollMenuiifffiib
            (&this->field0_0x0,_layout,background_id,optGap,_yoff,_xoff,0x3f933f2,0x24100c84,true);
                    /* inlined from /eor/src2/engine/ui/e_uimonitorautorep.h */
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.m_pAutoRepeatMonitor;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uimonitorautorep.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_16EPauseScrollMenu;
                    /* inlined from /eor/src2/engine/ui/e_uimonitorautorep.h */
  pEVar1->m_maxUpdatesPerFrame = 1;
  pEVar1->m_delay = 0.5;
  pEVar1->m_period = 0.1;
  return this;
}

void EPauseScrollMenu::~EPauseScrollMenu(int __in_chrg) {
  ERShader *pEVar1;
  
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_16EPauseScrollMenu;
  pEVar1 = (this->field0_0x0).m_pMorePrompts[0];
  if (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
  }
  pEVar1 = (this->field0_0x0).m_pMorePrompts[1];
  if (pEVar1 == (ERShader *)0x0) {
    (this->field0_0x0).m_pMorePrompts[1] = (ERShader *)0x0;
  }
  else {
    DelRef__9EResource(&pEVar1->field0_0x0);
    (this->field0_0x0).m_pMorePrompts[1] = (ERShader *)0x0;
  }
  (this->field0_0x0).m_pMorePrompts[0] = (ERShader *)0x0;
  ___13EUIScrollMenu(&this->field0_0x0,__in_chrg);
  return;
}

void EPauseScrollMenu::Message(EUIObjectNode *pChild, u32 messId) {
  EUIObjectNode__vtable *pEVar1;
  
  pEVar1 = this->m_pReceiver->__vtable;
  (*(code *)pEVar1[1].EUIObjectNode)
            ((int)&(this->m_pReceiver->m_ChildList).field0_0x0.m_l.m_pHead +
             (int)*(short *)(pEVar1 + 1),pChild,messId);
  return;
}

void EPauseScrollMenu::Update() {
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  EUIObjectNode *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((((int)(this->field0_0x0).field0_0x0.field0_0x0.m_flags >> 2 & 1U) != 0) &&
     ((this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead !=
      (ENodeListNode *)0x0)) {
    pEVar1 = (this->field0_0x0).field0_0x0.m_pCurOpt;
    pEVar2 = pEVar1->__vtable;
    (*(code *)pEVar2->SetBoxDims)
              ((int)&(pEVar1->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)&pEVar2->SetPos);
    ProcessUserInput__7EUIMenu((EUIMenu *)this);
    if (((this->field0_0x0).field0_0x0.field0_0x0.m_flags & 0x40) != 0) {
      RemoveMarkedChildren__13EUIObjectNode((EUIObjectNode *)this);
    }
  }
  return;
}

void EPauseScrollMenu::NextItem() {
  ListForward__13EUIScrollMenu(&this->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
  _11EPausePanel_m_ItemInfoTimer = 2.0;
  return;
}

void EPauseScrollMenu::PrevItem() {
  ListBackward__13EUIScrollMenu(&this->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
  _11EPausePanel_m_ItemInfoTimer = 2.0;
  return;
}

EPauseCategoryMenuItem* EPauseScrollMenu::GetSelectedItem() {
	bool bFound;
	EPauseCategoryMenuItem *item;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EPauseCategoryMenuItem *pEVar1;
  bool bVar2;
  EPauseCategoryMenuItem *pEVar3;
  EPauseCategoryMenuItem *pEVar4;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (EPauseCategoryMenuItem *)
           (this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  bVar2 = false;
  pEVar4 = (EPauseCategoryMenuItem *)0x0;
  if (pEVar3 != (EPauseCategoryMenuItem *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar1 = *(EPauseCategoryMenuItem **)&pEVar3->field0_0x0;
    while( true ) {
                    /* end of inlined section */
      if (((int)(pEVar1->field0_0x0).field0_0x0.m_flags >> 3 & 1U) != 0) {
        bVar2 = true;
        pEVar4 = pEVar1;
      }
                    /* end of inlined section */
      pEVar3 = *(EPauseCategoryMenuItem **)((int)&pEVar3->field0_0x0 + 8);
      if ((bVar2) || (pEVar3 == (EPauseCategoryMenuItem *)0x0)) break;
      pEVar1 = *(EPauseCategoryMenuItem **)&pEVar3->field0_0x0;
    }
  }
  return pEVar4;
}

void EPauseScrollMenu::PrintFlags() {
	NLIterator nli;
	NLIterator i;
	NLIterator i;
	
  int iVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  iVar1 = (int)(this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (iVar1 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    for (iVar1 = *(int *)(iVar1 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    }
  }
  return;
}

EPauseCategoryMenu* EPauseCategoryMenu::EPauseCategoryMenu() {
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EUIIconDef local_40;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_40.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_40.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_40.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_40.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_40.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->field0_0x0,&local_40,0,0,0x40);
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_18EPauseCategoryMenu;
  __16EPauseScrollMenuiifffiib(&this->m_menu,-1,-1,0.05,0.0,0.0,-1,-1,true);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_itemList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* end of inlined section */
  (this->m_itemList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  Init__18EPauseCategoryMenu(this);
  return this;
}

void EPauseCategoryMenu::~EPauseCategoryMenu(int __in_chrg) {
	void *ptr;
	
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_18EPauseCategoryMenu;
  Reset__18EPauseCategoryMenu(this);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_itemList).field0_0x0);
                    /* end of inlined section */
  ___16EPauseScrollMenu(&this->m_menu,2);
  ___7EUIIcon(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EPauseCategoryMenu::Init() {
	EUIObjectNode *this;
	EGraphics *this;
	EUIObjectNode *pReceiver;
	
  EUIObjectNode__vtable *pEVar1;
  uint uVar2;
  ERShader *pEVar3;
  EPauseScrollMenu *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar4;
  float local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  this_00 = &this->m_menu;
  fVar4 = 0.09;
  pEVar1 = (this->m_menu).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (*(code *)pEVar1[1].Draw)((int)&this_00->field0_0x0 + *(short *)&pEVar1[1].Update + -0x44,0x16,1);
  uVar2 = (this->m_menu).field0_0x0.field0_0x0.field0_0x0.m_flags;
  (this->m_menu).field0_0x0.field0_0x0.m_pulseTime = fVar4;
  pEVar1 = (this->m_menu).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (this->m_menu).field0_0x0.field0_0x0.field0_0x0.m_flags = uVar2 | 0x16;
  (this->m_menu).field0_0x0.field0_0x0.m_xoff = 0.0;
  (*(code *)pEVar1[2].Message)((int)&this_00->field0_0x0 + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  pEVar1 = (this->m_menu).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (this->m_menu).field0_0x0.field0_0x0.m_optJusty = 1;
  (this->m_menu).field0_0x0.field0_0x0.m_layout = 1;
  (this->m_menu).field0_0x0.field0_0x0.m_optJustx = 1;
  (*(code *)pEVar1[2].Message)((int)&this_00->field0_0x0 + *(short *)&pEVar1[2].SetBoxDims + -0x44);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
  local_70 = _13EUIObjectNode_SAFE_RIGHT - 0.014;
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  (this->m_menu).field0_0x0.field0_0x0.m_stick = 4;
  local_6c = 0x3dcccccd;
                    /* end of inlined section */
  local_70 = local_70 - 0.2;
                    /* end of inlined section */
  SetBoxDims__7EUIMenuRC5EVec2((EUIMenu *)this_00,(EVec2 *)&local_70);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiscrollmenu.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_60 = 0x3e4ccccd;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_5c = 0;
                    /* end of inlined section */
  local_58 = (_13EUIObjectNode_SAFE_BOTTOM - fVar4) + 1.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  SetPos__13EUIObjectNodeRC5EVec3((EUIObjectNode *)this_00,(EVec3 *)&local_60);
  pEVar1 = (this->m_menu).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[2].Message)((int)&this_00->field0_0x0 + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  pEVar1 = (this->m_menu).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (this->m_menu).field0_0x0.field0_0x0.m_optgap = 0.00625;
  (*(code *)pEVar1[2].Message)((int)&this_00->field0_0x0 + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  (this->m_menu).m_pReceiver = (EUIObjectNode *)this;
  pEVar3 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBlankShdr = pEVar3;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar3 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMenuBevelShdr = pEVar3;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar3 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x4185128e,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMenuBevelBottomShdr = pEVar3;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar3 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2d14ac7d,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pDPadBackgroundShdr = pEVar3;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar3 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x9c19fe1e,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTextLineCenterShdr = pEVar3;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar3 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf6a9deec,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTextLineRightShdr = pEVar3;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar3 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xca6e38f,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTextLineLeftShdr = pEVar3;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar3 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc9ff8b99,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMenuDPadReverseShdr = pEVar3;
  return;
}

void EPauseCategoryMenu::Reset() {
	NLIterator i;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  ERShader *pEVar2;
  ENodeListNode *pEVar3;
  
  while( true ) {
    if (this->m_pBlankShdr == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_pBlankShdr->field0_0x0);
    this->m_pBlankShdr = (ERShader *)0x0;
  }
  while (this->m_pMenuBevelShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pMenuBevelShdr->field0_0x0);
    this->m_pMenuBevelShdr = (ERShader *)0x0;
  }
  pEVar2 = this->m_pMenuBevelBottomShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pMenuBevelBottomShdr = (ERShader *)0x0;
    pEVar2 = this->m_pMenuBevelBottomShdr;
  }
  pEVar2 = this->m_pDPadBackgroundShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pDPadBackgroundShdr = (ERShader *)0x0;
    pEVar2 = this->m_pDPadBackgroundShdr;
  }
  pEVar2 = this->m_pTextLineCenterShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pTextLineCenterShdr = (ERShader *)0x0;
    pEVar2 = this->m_pTextLineCenterShdr;
  }
  pEVar2 = this->m_pTextLineRightShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pTextLineRightShdr = (ERShader *)0x0;
    pEVar2 = this->m_pTextLineRightShdr;
  }
  pEVar2 = this->m_pTextLineLeftShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pTextLineLeftShdr = (ERShader *)0x0;
    pEVar2 = this->m_pTextLineLeftShdr;
  }
  pEVar2 = this->m_pMenuDPadReverseShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pMenuDPadReverseShdr = (ERShader *)0x0;
    pEVar2 = this->m_pMenuDPadReverseShdr;
  }
  RemoveAllOpts__13EUIScrollMenu(&(this->m_menu).field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_itemList).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar1 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      if (uVar1 != 0) {
        (**(code **)(*(int *)(uVar1 + 0x38) + 0xc))
                  (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x38) + 8),3);
      }
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_itemList).field0_0x0);
  return;
}

void EPauseCategoryMenu::Draw(ERC *prc) {
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  short sVar1;
  uint uVar2;
  EUIObjectNode__vtable *pEVar3;
  undefined4 uVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
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
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  uVar2 = (this->field0_0x0).field0_0x0.m_flags;
                    /* end of inlined section */
  if (((int)uVar2 >> 1 & 1U) != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)uVar2 >> 3 & 1U) != 0) {
      Draw__13EUIScrollMenuP3ERC(&(this->m_menu).field0_0x0,prc);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      uVar2 = (this->field0_0x0).field0_0x0.m_flags;
    }
                    /* end of inlined section */
    if (((int)uVar2 >> 2 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)uVar2 >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
        pEVar3 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_34 = _7EUIIcon_m_vColors[1].field0_0x0._12_4_ * 0.65;
        local_40 = _7EUIIcon_m_vColors[1].field0_0x0._0_4_ * 0.65;
        local_3c = _7EUIIcon_m_vColors[1].field0_0x0._4_4_ * 0.65;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_38 = _7EUIIcon_m_vColors[1].field0_0x0._8_4_ * 0.65;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        (*(code *)pEVar3[2].EUIObjectNode)
                  ((int)(this->field0_0x0).m_maxBackShdrSize[-0xc] + *(short *)(pEVar3 + 2) + 4,prc,
                   0,&local_40);
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
        pEVar3 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_34 = _7EUIIcon_m_vColors[6].field0_0x0._12_4_ * 0.65;
        local_40 = _7EUIIcon_m_vColors[6].field0_0x0._0_4_ * 0.65;
        local_3c = _7EUIIcon_m_vColors[6].field0_0x0._4_4_ * 0.65;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_38 = _7EUIIcon_m_vColors[6].field0_0x0._8_4_ * 0.65;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        (*(code *)pEVar3[2].EUIObjectNode)
                  ((int)(this->field0_0x0).m_maxBackShdrSize[-0xc] + *(short *)(pEVar3 + 2) + 4,prc,
                   0,&local_40);
      }
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)uVar2 >> 3 & 1U) == 0) {
        pEVar3 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
        sVar1 = *(short *)(pEVar3 + 2);
        uVar4 = 0x3896f0;
      }
      else {
        pEVar3 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
        sVar1 = *(short *)(pEVar3 + 2);
        uVar4 = 0x389740;
      }
      (*(code *)pEVar3[2].EUIObjectNode)
                ((int)(this->field0_0x0).m_maxBackShdrSize[-0xc] + sVar1 + 4,prc,0,uVar4);
    }
  }
  return;
}

void EPauseCategoryMenu::Update() {
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  uint uVar1;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  uVar1 = (this->field0_0x0).field0_0x0.m_flags;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((((int)uVar1 >> 2 & 1U) != 0) && (((int)uVar1 >> 3 & 1U) != 0)) {
    Update__16EPauseScrollMenu(&this->m_menu);
  }
  return;
}

void EPauseCategoryMenu::Message(EUIObjectNode *pChild, u32 messId) {
	int bFound;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EUIObjectNode *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  bool bVar3;
  ENodeListNode *pEVar4;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar4 = (this->m_itemList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  bVar3 = false;
  if (pEVar4 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar1 = (EUIObjectNode *)pEVar4->data;
                    /* end of inlined section */
    while( true ) {
      if (pEVar1 == pChild) {
        bVar3 = true;
      }
      pEVar4 = pEVar4->pNext;
      if (bVar3) goto LAB_001a9234;
      if (pEVar4 == (ENodeListNode *)0x0) break;
      pEVar1 = (EUIObjectNode *)pEVar4->data;
    }
  }
  if (bVar3) {
LAB_001a9234:
    pEVar1 = (this->field0_0x0).field0_0x0.m_pParent;
    pEVar2 = pEVar1->__vtable;
    (*(code *)pEVar2[1].EUIObjectNode)
              ((int)&(pEVar1->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)(pEVar2 + 1),
               pChild,this->m_messageId);
  }
  return;
}

void EPauseCategoryMenu::SetupIcon(EVec2 vSize, int shaderID, EVec2 vPos) {
	EUIVirtualCtrl *pCtrl;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  EUIIconDef__vtable *pEVar5;
  EUIObjectNode__vtable *pEVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar5 = (this->field0_0x0).m_def.__vtable;
  uVar9 = CONCAT44(0x3a8908,_globals.m_pCtrlPad);
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &(this->field0_0x0).m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &(this->field0_0x0).m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | uVar9 >> (7 - uVar7) * 8;
  ppEVar4 = &(this->field0_0x0).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = uVar9 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->field0_0x0).m_def.__vtable = pEVar5;
                    /* end of inlined section */
  pEVar6 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar6->RemoveChild)
            ((int)(this->field0_0x0).m_maxBackShdrSize[-0xc] + *(short *)&pEVar6->AddChild + 4,vSize
            );
  InitActiveShader__7EUIIconi(&this->field0_0x0,shaderID);
  return;
}

EPauseCategoryMenuItem* EPauseCategoryMenu::SearchExistingSelector(ObjSelector *pSel) {
	int bFound;
	EPauseCategoryMenuItem *pReturn;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	ObjSelector *pSel;
	
  EPauseCategoryMenuItem *pEVar1;
  bool bVar2;
  ENodeListNode *pEVar3;
  EPauseCategoryMenuItem *pEVar4;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_itemList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  bVar2 = false;
  pEVar4 = (EPauseCategoryMenuItem *)0x0;
  if (pEVar3 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar1 = (EPauseCategoryMenuItem *)pEVar3->data;
    while( true ) {
                    /* end of inlined section */
      if (pSel == pEVar1->m_pMasterSel) {
        bVar2 = true;
        pEVar4 = pEVar1;
      }
                    /* end of inlined section */
      pEVar3 = (ENodeListNode *)(&pEVar3->data)[2];
      if ((bVar2) || (pEVar3 == (ENodeListNode *)0x0)) break;
      pEVar1 = (EPauseCategoryMenuItem *)pEVar3->data;
    }
  }
  return pEVar4;
}

void EPauseCategoryMenu::AddOption(EPauseCategoryMenuItem *pItem) {
	EUIObjectNode *data;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
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
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_38 = 0;
  local_3c = 0;
                    /* end of inlined section */
  local_40 = 0;
  AddOpt__13EUIScrollMenuP13EUIObjectNodeG5EVec3
            (&(this->m_menu).field0_0x0,(EUIObjectNode *)pItem,(EVec3 *)&local_40);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&(this->m_itemList).field0_0x0,(uint)pItem);
  return;
}

void EPauseCategoryMenu::InsertOption(EPauseCategoryMenuItem *pItem) {
	NLIterator nli;
	bool bDone;
	NLIterator i;
	NLIterator i;
	NLIterator target;
	EUIObjectNode *data;
	EUIObjectNode *data;
	
  ENodeListNode *target;
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
                    /* end of inlined section */
  bVar1 = false;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  target = (this->m_itemList).field0_0x0.m_l.m_pHead;
  do {
                    /* end of inlined section */
    if (target == (ENodeListNode *)0x0) {
      if (bVar1) {
        return;
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&(this->m_itemList).field0_0x0,(uint)pItem);
      return;
    }
                    /* end of inlined section */
    uVar2 = GetPrice__22EPauseCategoryMenuItem((EPauseCategoryMenuItem *)target->data);
    uVar3 = GetPrice__22EPauseCategoryMenuItem(pItem);
    if (uVar3 <= uVar2) {
      bVar1 = true;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      InsertBefore__9ENodeListP17NLIteratorPtrTypeUi
                (&(this->m_itemList).field0_0x0,(undefined1 *)target,(uint)pItem);
    }
                    /* end of inlined section */
    target = (ENodeListNode *)(&target->data)[2];
  } while (!bVar1);
  return;
}

void EPauseCategoryMenu::AddItemsToMenu() {
	NLIterator nli;
	EUIObjectNode *pNode;
	NLIterator i;
	NLIterator i;
	
  EUIObjectNode *pOpt;
  ENodeListNode *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_itemList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pOpt = (EUIObjectNode *)pEVar1->data;
    while( true ) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_38 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_3c = 0;
                    /* end of inlined section */
      local_40 = 0;
      AddOpt__13EUIScrollMenuP13EUIObjectNodeG5EVec3
                (&(this->m_menu).field0_0x0,pOpt,(EVec3 *)&local_40);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      pOpt = (EUIObjectNode *)pEVar1->data;
    }
  }
  return;
}

void EPauseCategoryMenu::ResetCurrentOption() {
  int *piVar1;
  EUIObjectNode **ppEVar2;
  int iVar3;
  EUIObjectNode *pOpt;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  piVar1 = (int *)(this->m_menu).field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead
  ;
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
                    /* end of inlined section */
  if (iVar3 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    ppEVar2 = (EUIObjectNode **)
              (this->m_menu).field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    if (ppEVar2 == (EUIObjectNode **)0x0) {
      pOpt = (EUIObjectNode *)0x0;
    }
    else {
      pOpt = *ppEVar2;
    }
                    /* end of inlined section */
    SetCurOpt__7EUIMenuP13EUIObjectNode((EUIMenu *)&this->m_menu,pOpt);
    SetPositions__13EUIScrollMenu(&(this->m_menu).field0_0x0);
  }
  return;
}

void EPauseCategoryMenu::SetStaticShaders() {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  _18EPauseCategoryMenu_m_pOutlineShdr =
       (ERShader *)
       AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x1239c594,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  _18EPauseCategoryMenu_m_pLockedShader =
       (ERShader *)
       AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xbfa964d1,(EFile *)0x0,0);
                    /* end of inlined section */
  return;
}

void EPauseCategoryMenu::DelRefStaticShaders() {
  while (_18EPauseCategoryMenu_m_pOutlineShdr != (ERShader *)0x0) {
    DelRef__9EResource(&_18EPauseCategoryMenu_m_pOutlineShdr->field0_0x0);
    _18EPauseCategoryMenu_m_pOutlineShdr = (ERShader *)0x0;
  }
  while (_18EPauseCategoryMenu_m_pLockedShader != (ERShader *)0x0) {
    DelRef__9EResource(&_18EPauseCategoryMenu_m_pLockedShader->field0_0x0);
    _18EPauseCategoryMenu_m_pLockedShader = (ERShader *)0x0;
  }
  return;
}

EPauseCategoryMenuItem* EPauseCategoryMenu::SearchGUID(s32 guid) {
	bool bFound;
	EPauseCategoryMenuItem *pData;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  bool bVar1;
  int iVar2;
  EPauseCategoryMenuItem *pEVar3;
  ENodeListNode *pEVar4;
  EPauseCategoryMenuItem *this_00;
  
  this_00 = (EPauseCategoryMenuItem *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar4 = (this->m_itemList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  bVar1 = false;
  if (pEVar4 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this_00 = (EPauseCategoryMenuItem *)pEVar4->data;
    while( true ) {
                    /* end of inlined section */
      iVar2 = GetGUID__22EPauseCategoryMenuItem(this_00);
                    /* end of inlined section */
      if (iVar2 == guid) {
        bVar1 = true;
      }
      pEVar4 = (ENodeListNode *)(&pEVar4->data)[2];
      if ((bVar1) || (pEVar4 == (ENodeListNode *)0x0)) break;
      this_00 = (EPauseCategoryMenuItem *)pEVar4->data;
    }
  }
  pEVar3 = (EPauseCategoryMenuItem *)0x0;
  if (bVar1) {
    pEVar3 = this_00;
  }
  return pEVar3;
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

void EPauseCategoryMenuItem::SetMasterSelector(ObjSelector *pSelector) {
  this->m_pMasterSel = pSelector;
  return;
}

void EPauseCategoryMenuItem::SetResSelector(ObjSelector *pSelector) {
  this->m_pResSel = pSelector;
  return;
}

void EPauseCategoryMenuItem::SetResSelector2(ObjSelector *pSelector) {
  this->m_pResSel2 = pSelector;
  return;
}

ObjSelector* EPauseCategoryMenuItem::GetMasterSelector() {
  return this->m_pMasterSel;
}

ObjSelector* EPauseCategoryMenuItem::GetResSelector() {
  return this->m_pResSel;
}

ObjSelector* EPauseCategoryMenuItem::GetResSelector2() {
  return this->m_pResSel2;
}

int EPauseCategoryMenuItem::CompareMasterSelector(ObjSelector *pSel) {
  return (int)(pSel == this->m_pMasterSel);
}

u32 EPauseCategoryMenuItem::GetType() {
  return this->m_type;
}

FloorTile* EPauseCategoryMenuItem::GetFloorTile() {
  return this->m_floorNode;
}

WallTile* EPauseCategoryMenuItem::GetWallTile() {
  return this->m_wallNode;
}

bool EPauseCategoryMenuItem::GetLockedState() {
  return SUB41(*(undefined4 *)&this->m_bLocked,0);
}

void EPauseCategoryMenuItem::SetLockedState(bool on) {
  *(int *)&this->m_bLocked = (int)on;
  return;
}

void EPauseScrollMenu::SetReceiver(EUIObjectNode *pReceiver) {
  this->m_pReceiver = pReceiver;
  return;
}

void* EPauseCategoryMenu::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,4);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EPauseCategoryMenu::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

void EPauseCategoryMenu::SetMenuFlagsPropigate(u32 mask, bool on) {
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_menu,mask,on);
  return;
}

void EPauseCategoryMenu::SetMessageId(u32 id) {
  this->m_messageId = id;
  return;
}

EPauseCategoryMenuItem* EPauseCategoryMenu::GetSelectedItem() {
  EPauseCategoryMenuItem *pEVar1;
  
  pEVar1 = GetSelectedItem__16EPauseScrollMenu(&this->m_menu);
  return pEVar1;
}

void EPauseCategoryMenu::PrintFlags() {
  PrintFlags__16EPauseScrollMenu(&this->m_menu);
  return;
}
