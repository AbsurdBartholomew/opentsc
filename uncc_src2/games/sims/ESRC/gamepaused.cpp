// STATUS: NOT STARTED

#include "gamepaused.h"

// warning: multiple differing types with the same name (name not equal)
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2865;
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
	Panelstateman *$vb2865;
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
	Panelstateman *$vb2865;
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
	Panelstateman *$vb2865;
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

__vtbl_ptr_type EWallPaperMenu virtual table[26] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EWallPaperMenu::~EWallPaperMenu,
		/* .__delta2 = */ -13800
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::Update,
		/* .__delta2 = */ -2696
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
		/* .__pfn = */ &EWallPaperMenu::Message,
		/* .__delta2 = */ -13424
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
		/* .__pfn = */ &EWallPaperMenu::Init,
		/* .__delta2 = */ -13632
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EWallPaperMenuItem virtual table[16] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EWallPaperMenuItem::~EWallPaperMenuItem,
		/* .__delta2 = */ -13984
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
		/* .__pfn = */ &EWallPaperMenuItem::Draw,
		/* .__delta2 = */ -13888
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

__vtbl_ptr_type EFloorStylesMenu virtual table[26] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFloorStylesMenu::~EFloorStylesMenu,
		/* .__delta2 = */ -14928
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::Update,
		/* .__delta2 = */ -2696
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
		/* .__pfn = */ &EFloorStylesMenu::Message,
		/* .__delta2 = */ -14440
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
		/* .__pfn = */ &EFloorStylesMenu::Init,
		/* .__delta2 = */ -14712
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EFloorStylesMenuItem virtual table[16] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFloorStylesMenuItem::~EFloorStylesMenuItem,
		/* .__delta2 = */ -15432
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
		/* .__pfn = */ &EFloorStylesMenuItem::Draw,
		/* .__delta2 = */ -15336
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

__vtbl_ptr_type EPauseMenu virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMenu::~EPauseMenu,
		/* .__delta2 = */ -18304
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMenu::Update,
		/* .__delta2 = */ -17232
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMenu::Draw,
		/* .__delta2 = */ -16752
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
		/* .__pfn = */ &EPauseMenu::Message,
		/* .__delta2 = */ -16288
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

__vtbl_ptr_type EPauseMenuItem virtual table[23] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMenuItem::~EPauseMenuItem,
		/* .__delta2 = */ -18784
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
		/* .__pfn = */ &EPauseMenuItem::Draw,
		/* .__delta2 = */ -18744
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
		/* .__pfn = */ &EUIStaticTextIcon::SetText,
		/* .__delta2 = */ -5592
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIStaticTextIcon::InitString,
		/* .__delta2 = */ -5584
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIStaticTextIcon::SetText,
		/* .__delta2 = */ -5576
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIStaticTextIcon::InitString,
		/* .__delta2 = */ -5568
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIStaticTextIcon::SetTextDef,
		/* .__delta2 = */ -5560
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIStaticTextIcon::GetText,
		/* .__delta2 = */ -5496
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIStaticTextIcon::DrawText,
		/* .__delta2 = */ -5488
	},
	/* [22] = */ {
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

static short unsigned int _szFloorTool[11] = {
	/* [0] = */ 102,
	/* [1] = */ 108,
	/* [2] = */ 111,
	/* [3] = */ 111,
	/* [4] = */ 114,
	/* [5] = */ 32,
	/* [6] = */ 116,
	/* [7] = */ 111,
	/* [8] = */ 111,
	/* [9] = */ 108,
	/* [10] = */ 0
};

static short unsigned int _szWallTool[10] = {
	/* [0] = */ 119,
	/* [1] = */ 97,
	/* [2] = */ 108,
	/* [3] = */ 108,
	/* [4] = */ 32,
	/* [5] = */ 116,
	/* [6] = */ 111,
	/* [7] = */ 111,
	/* [8] = */ 108,
	/* [9] = */ 0
};

static short unsigned int _szPaperTool[16] = {
	/* [0] = */ 119,
	/* [1] = */ 97,
	/* [2] = */ 108,
	/* [3] = */ 108,
	/* [4] = */ 32,
	/* [5] = */ 112,
	/* [6] = */ 97,
	/* [7] = */ 112,
	/* [8] = */ 101,
	/* [9] = */ 114,
	/* [10] = */ 32,
	/* [11] = */ 116,
	/* [12] = */ 111,
	/* [13] = */ 111,
	/* [14] = */ 108,
	/* [15] = */ 0
};

static short unsigned int _szFenceTool[11] = {
	/* [0] = */ 102,
	/* [1] = */ 101,
	/* [2] = */ 110,
	/* [3] = */ 99,
	/* [4] = */ 101,
	/* [5] = */ 32,
	/* [6] = */ 116,
	/* [7] = */ 111,
	/* [8] = */ 111,
	/* [9] = */ 108,
	/* [10] = */ 0
};

EPauseMenuItem* EPauseMenuItem::EPauseMenuItem() {
	EUIIconDef icondef;
	EUITextIconDef textdef;
	EUIObjectNode *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  uint uVar5;
  ulong *puVar6;
  EUIIconDef__vtable *local_110;
  undefined4 local_10c;
  undefined4 local_108;
  EUITextIconDef local_100;
  EUIIconDef local_e0;
  EUIIconDef icondef;
  EUITextIconDef textdef;
  
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_100.m_maxChars = 0x20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_108 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_10c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_110 = (EUIIconDef__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_100.m_xAlign = E_FAX_LEFT;
  local_100.m_yAlign = E_FAY_TOP;
  local_100.m_pointsize = 12.0;
  local_100.m_selColorIdx = 0;
  local_100.m_colorIdx = 1;
  local_100.m_retChar = -1;
  local_e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_e0.m_flags = 0;
  local_e0.m_trigger = 0x40;
  local_e0.m_selColorIdx = 0;
  local_e0.m_colorIdx = 1;
                    /* end of inlined section */
  local_e0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&this->field0_0x0,&local_100,&local_e0,-1,(EVec3 *)&local_110);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  icondef.m_flags = 0;
  icondef.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  textdef.m_maxChars = 0x20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  textdef.m_xAlign = E_FAX_CENTER;
  textdef.m_yAlign = E_FAY_TOP;
  textdef.m_selColorIdx = 2;
  textdef.m_pointsize = 16.0;
  textdef.m_colorIdx = 1;
  textdef.m_retChar = -1;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_14EPauseMenuItem;
  SetFont__11EUITextIconi((EUITextIcon *)this,-0x2080f4e9);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110 = (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_10c = 0x3d23d70a;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] = 0.25;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] = 0.04;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar5) * 8;
  pEVar2 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def;
  uVar5 = (uint)pEVar2 & 7;
  puVar6 = (ulong *)((int)pEVar2 - uVar5);
  *puVar6 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar5) * 8;
  piVar3 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar5 = (uint)piVar3 & 7;
  puVar6 = (ulong *)((int)piVar3 - uVar5);
  *puVar6 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar5 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar5) * 8;
  ppEVar4 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar5 = (uint)ppEVar4 & 7;
  puVar6 = (ulong *)((int)ppEVar4 - uVar5);
  *puVar6 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar5 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_110;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&this->field0_0x0,&textdef);
  InitString__17EUIStaticTextIconPCUsi(&this->field0_0x0,(short *)0x0,0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  this->m_pSelector = (ObjSelector *)0x0;
  return this;
}

void EPauseMenuItem::~EPauseMenuItem(int __in_chrg) {
	EUIStaticTextIcon *this;
	
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)this,__in_chrg);
  return;
}

void EPauseMenuItem::Draw(ERC *prc) {
  Draw__11EUITextIconP3ERC((EUITextIcon *)this,prc);
  return;
}

EPauseMenu* EPauseMenu::EPauseMenu() {
	EUIObjectNode *this;
	EUIMenu *this;
	EUIMenu *this;
	EUIScrollMenu *this;
	EUIMenu *this;
	EUIMenu *this;
	EUIScrollMenu *this;
	EUIMenu *this;
	
  uint uVar1;
  EUIObjectNode__vtable *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  undefined4 local_50;
  float local_4c;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_3c = 0.0;
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __13EUIScrollMenuiifffiib(&this->field0_0x0,-1,-1,0.05,0.0,0.0,-1,-1,true);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_itemList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_itemList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_10EPauseMenu;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  this->m_pFont = (ERFont *)0x0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  this->m_pFloorStyles = (EFloorStylesMenu *)0x0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (*_vt_10EPauseMenu[8]._4_4_)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             (short)_vt_10EPauseMenu[8].__delta + -0x44,0x16,1);
  uVar1 = (this->field0_0x0).field0_0x0.field0_0x0.m_flags;
  (this->field0_0x0).field0_0x0.m_xoff = local_3c;
  (this->field0_0x0).field0_0x0.field0_0x0.m_flags = uVar1 | 0x16;
  (this->field0_0x0).field0_0x0.m_pulseTime = 0.09;
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
  (this->field0_0x0).field0_0x0.m_layout = 0;
  (this->field0_0x0).field0_0x0.m_optJusty = 1;
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (this->field0_0x0).field0_0x0.m_optJustx = 0;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
  local_38 = _13EUIObjectNode_SAFE_TOP;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_4c = _13EUIObjectNode_SAFE_BOTTOM - _13EUIObjectNode_SAFE_TOP;
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  (this->field0_0x0).field0_0x0.m_stick = 4;
  local_50 = 0x3e800000;
                    /* end of inlined section */
  SetBoxDims__7EUIMenuRC5EVec2((EUIMenu *)this,(EVec2 *)&local_50);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_40 = 0x3f000000;
  SetPos__13EUIObjectNodeRC5EVec3((EUIObjectNode *)this,(EVec3 *)&local_40);
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (this->field0_0x0).field0_0x0.m_optgap = 0.0145;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.m_pCurOpt = (EUIObjectNode *)0x0;
  *(undefined4 *)&this->m_done = 0;
  Init__10EPauseMenu(this);
  return this;
}

void EPauseMenu::~EPauseMenu(int __in_chrg) {
	TNodeList<EUIObjectNode *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  EFloorStylesMenu *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  uint uVar3;
  ENodeListNode *pEVar4;
  
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_10EPauseMenu;
  pEVar1 = this->m_pFloorStyles;
  if (pEVar1 != (EFloorStylesMenu *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar2->Draw)
              ((int)(pEVar1->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar2->Update + -0x44,3);
  }
  this->m_pFloorStyles = (EFloorStylesMenu *)0x0;
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar4 = (this->m_itemList).field0_0x0.m_l.m_pHead;
  if (pEVar4 != (ENodeListNode *)0x0) {
    uVar3 = pEVar4->data;
    while( true ) {
      pEVar4 = pEVar4->pNext;
      if (uVar3 != 0) {
        (**(code **)(*(int *)(uVar3 + 0x38) + 0xc))
                  (uVar3 + (int)*(short *)(*(int *)(uVar3 + 0x38) + 8),3);
      }
      if (pEVar4 == (ENodeListNode *)0x0) break;
      uVar3 = pEVar4->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_itemList).field0_0x0);
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.m_pCurOpt = (EUIObjectNode *)0x0;
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_itemList).field0_0x0);
                    /* end of inlined section */
  ___13EUIScrollMenu(&this->field0_0x0,__in_chrg);
  return;
}

void EPauseMenu::Init() {
	EPauseMenuItem *psaveopt;
	ObjSelector *psel;
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	EUIObjectNode *data;
	EUIObjectNode *data;
	EUIObjectNode *data;
	ObjDefinition *pdef;
	ObjSelector *this;
	EPauseMenuItem *pItem;
	EPauseMenuItem *this;
	ObjSelector *pSelector;
	EUIObjectNode *data;
	
  short sVar1;
  EUIObjectNode__vtable *pEVar2;
  ResData *pRVar3;
  ObjAnimDef *pOVar4;
  EPauseMenuItem *pEVar5;
  ObjSelector *this_00;
  ELocString EVar6;
  ERFont *pEVar7;
  int iVar8;
  long lVar9;
  TNodeList_EUIObjectNode___ *this_01;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  ObjSelector *this_02;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
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
  
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  this_01 = &this->m_itemList;
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  TurnOffAllHighlights__11EIObjectManUi((_globals._pCurHouse)->m_pObjectMan,0);
  pEVar5 = (EPauseMenuItem *)__builtin_new(0xa0);
  __14EPauseMenuItem(pEVar5);
  pEVar5 = (EPauseMenuItem *)__builtin_new(0xa0);
  pEVar5 = __14EPauseMenuItem(pEVar5);
  pEVar2 = (pEVar5->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[2].Message)
            ((int)(pEVar5->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar2[2].SetBoxDims + 4,0x3ad918);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_68 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_6c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_70 = 0;
                    /* end of inlined section */
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[2].SetBoxDims)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetPos + -0x44,pEVar5,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_01->field0_0x0,(uint)pEVar5);
                    /* end of inlined section */
  pEVar5 = (EPauseMenuItem *)__builtin_new(0xa0);
  pEVar5 = __14EPauseMenuItem(pEVar5);
  pEVar2 = (pEVar5->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[2].Message)
            ((int)(pEVar5->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar2[2].SetBoxDims + 4,0x3ad930);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_68 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_6c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_70 = 0;
                    /* end of inlined section */
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[2].SetBoxDims)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetPos + -0x44,pEVar5,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_01->field0_0x0,(uint)pEVar5);
                    /* end of inlined section */
  pEVar5 = (EPauseMenuItem *)__builtin_new(0xa0);
  pEVar5 = __14EPauseMenuItem(pEVar5);
  pEVar2 = (pEVar5->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[2].Message)
            ((int)(pEVar5->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar2[2].SetBoxDims + 4,0x3ad948);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_68 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_6c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_70 = 0;
                    /* end of inlined section */
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[2].SetBoxDims)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetPos + -0x44,pEVar5,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_01->field0_0x0,(uint)pEVar5);
                    /* end of inlined section */
  pEVar5 = (EPauseMenuItem *)__builtin_new(0xa0);
  pEVar5 = __14EPauseMenuItem(pEVar5);
  pEVar2 = (pEVar5->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[2].Message)
            ((int)(pEVar5->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar2[2].SetBoxDims + 4,0x3ad968);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_68 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_6c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_70 = 0;
                    /* end of inlined section */
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[2].SetBoxDims)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetPos + -0x44,pEVar5,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_01->field0_0x0,(uint)pEVar5);
                    /* end of inlined section */
  lVar9 = 0;
  while (lVar9 = (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                           ((int)&_5Globs_pObjectFolder->__vtable +
                            (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,
                            lVar9), lVar9 != 0) {
    this_02 = (ObjSelector *)lVar9;
                    /* end of inlined section */
    if ((this_02->fHeader != (ObjDefinition *)0x0) &&
       (pRVar3 = this_02->fHeader->pResData, pRVar3 != (ResData *)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      pOVar4 = (pRVar3->objectStates).pData;
      if (pOVar4 == (ObjAnimDef *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = pOVar4[-1].graphic;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      if ((iVar8 != 0) && (((pRVar3->objectStates).pData)->modelID != 0)) {
        pEVar5 = (EPauseMenuItem *)__builtin_new(0xa0);
        pEVar5 = __14EPauseMenuItem(pEVar5);
        pEVar2 = (pEVar5->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
        sVar1 = *(short *)&pEVar2[2].SetBoxDims;
        this_00 = GetMasterSelector__11ObjSelector(this_02);
        EVar6 = GetCatalogName__11ObjSelector(this_00);
        (*(code *)pEVar2[2].Message)
                  ((int)(pEVar5->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   sVar1 + 4,*EVar6.ptr);
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamepaused.h */
        pEVar5->m_pSelector = this_02;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_68 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_6c = 0;
        local_70 = 0;
                    /* end of inlined section */
        pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar2[2].SetBoxDims)
                  ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
                   *(short *)&pEVar2[2].SetPos + -0x44,pEVar5,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi(&(this->m_itemList).field0_0x0,(uint)pEVar5);
      }
    }
  }
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar7 = (ERFont *)
           AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar7;
  return;
}

bool EPauseMenu::InMainMenu() {
  return this->m_pFloorStyles == (EFloorStylesMenu *)0x0;
}

void EPauseMenu::Update() {
	float StickX;
	float StickY;
	EVec3 vStick;
	EUIObjectNode *this;
	
  EFloorStylesMenu *pEVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  ESimsCam *pEVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  EVec3 vStick;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((((int)(this->field0_0x0).field0_0x0.field0_0x0.m_flags >> 2 & 1U) != 0) &&
     (*(int *)&this->m_done == 0)) {
    pEVar1 = this->m_pFloorStyles;
    if (pEVar1 == (EFloorStylesMenu *)0x0) {
      Update__13EUIScrollMenu(&this->field0_0x0);
      fVar6 = GetStick__11EControllerii(_ctrlPads[0],0,0);
      fVar7 = GetStick__11EControllerii(_ctrlPads[0],0,1);
      fVar7 = ABS(fVar7) * fVar7;
      pEVar4 = GetCam__7EGlobal(&_globals);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
      fVar6 = fVar6 * ABS(fVar6) * pEVar4->m_transSpeed * _dt;
      pEVar4 = GetCam__7EGlobal(&_globals);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* end of inlined section */
      if ((fVar6 == 0.0) && (fVar7 * pEVar4->m_transSpeed * _dt == 0.0)) {
        pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar5 = (*(code *)pEVar2[1].GetBut)
                          ((int)(_globals.m_pCtrlPad)->m_pressed +
                           *(short *)&pEVar2[1].ClearBut + -4,0,0x10);
        if ((lVar5 != 0) ||
           (pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
           lVar5 = (*(code *)pEVar2[1].GetBut)
                             ((int)(_globals.m_pCtrlPad)->m_pressed +
                              *(short *)&pEVar2[1].ClearBut + -4,1,0x10), lVar5 != 0)) {
          pEVar3 = ((_globals._pPanel)->field0_0x0).__vtable;
          (*(code *)pEVar3[1].EUIObjectNode)
                    ((int)(_globals._pPanel)->m_messageFns + *(short *)(pEVar3 + 1) + -0x3c,this,
                     0x22);
        }
      }
      else {
        SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this,4,false);
      }
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamepaused.h */
                    /* end of inlined section */
      if (*(int *)&pEVar1->m_done == 0) {
        pEVar3 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar3->SetBoxDims)
                  ((int)(pEVar1->field0_0x0).field0_0x0.m_maxBackShdrSize +
                   *(short *)&pEVar3->SetPos + -0x44,3);
      }
      else {
        pEVar3 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar3->Draw)
                  ((int)(pEVar1->field0_0x0).field0_0x0.m_maxBackShdrSize +
                   *(short *)&pEVar3->Update + -0x44);
        this->m_pFloorStyles = (EFloorStylesMenu *)0x0;
        *(undefined4 *)&this->m_done = 1;
      }
    }
  }
  return;
}

void EPauseMenu::Draw(ERC *prc) {
	ERFont *this;
	float y;
	ERFont *this;
	ERC *prc;
	EUIObjectNode *this;
	
  EFloorStylesMenu *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  ERFont *pEVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a0;
  float local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
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
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (*(int *)&this->m_done == 0) {
    pEVar1 = this->m_pFloorStyles;
    if (pEVar1 == (EFloorStylesMenu *)0x0) {
      SetSize__6ERFontffb(this->m_pFont,25.0,1.0,true);
      uVar6 = _RED.field0_0x0.d[3];
      uVar5 = _RED.field0_0x0.d[2];
      uVar4 = _RED.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar3 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      (pEVar3->m_vColor).field0_0x0.d[0] = (float)_RED.field0_0x0._0_8_;
      (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
      (pEVar3->m_vColor).field0_0x0.d[2] = uVar5;
      (pEVar3->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
      Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_a0 = 0x3f000000;
      local_9c = _13EUIObjectNode_SAFE_TOP;
      local_b0 = 0x3f000000;
      local_ac = _13EUIObjectNode_SAFE_TOP;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,"PAUSED",false,(EVec2 *)&local_a0,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
                    /* end of inlined section */
      if (((int)(this->field0_0x0).field0_0x0.field0_0x0.m_flags >> 2 & 1U) != 0) {
        Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_ac = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_b0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_8c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_90 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_80 = 0;
        local_7c = 0x3f800000;
        local_50 = 0;
        local_44 = 0x3eb33333;
        local_4c = 0;
        local_60 = _vBlueBack.field0_0x0.d[0] + 0.0;
        local_48 = 0;
        local_5c = _vBlueBack.field0_0x0.d[1] + 0.0;
        local_58 = _vBlueBack.field0_0x0.d[2] + 0.0;
        local_70 = 0x3f800000;
        local_54 = _vBlueBack.field0_0x0.d[3] + 0.35;
        local_6c = 0;
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_b0,
                   &local_90,&local_80,&local_70,&local_60);
        Draw__13EUIScrollMenuP3ERC(&this->field0_0x0,prc);
      }
    }
    else {
      pEVar2 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2->Message)
                ((int)(pEVar1->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar2->SetBoxDims + -0x44);
    }
  }
  return;
}

void EPauseMenu::Message(EUIObjectNode *pChild, u32 messId) {
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
	EUIObjectNode *this;
	NLIterator i;
	void *pNode;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	NLIterator i;
	void *pNode;
	EUIObjectNode *this;
	NLIterator i;
	void *pNode;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	NLIterator i;
	void *pNode;
	EUIObjectNode *this;
	NLIterator i;
	void *pNode;
	EUIObjectNode *this;
	NLIterator i;
	void *pNode;
	
  EUIObjectNode **ppEVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIObjectNode **ppEVar3;
  int *piVar4;
  ObjSelector *pSel;
  EFloorStylesMenu *pEVar5;
  int iVar6;
  EWallPaperMenu *this_00;
  EUIObjectNode *pEVar7;
  WallStyle style;
  uint cost;
  
  if (messId != 1) {
    return;
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  ppEVar1 = (EUIObjectNode **)
            (this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
  pEVar7 = (EUIObjectNode *)0x0;
  if (ppEVar1 != (EUIObjectNode **)0x0) {
    pEVar7 = *ppEVar1;
  }
                    /* end of inlined section */
  if (pChild == pEVar7) {
    pEVar5 = this->m_pFloorStyles;
    if (pEVar5 != (EFloorStylesMenu *)0x0) {
      pEVar2 = (pEVar5->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2->Draw)
                ((int)(pEVar5->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar2->Update + -0x44,3);
    }
    pEVar5 = (EFloorStylesMenu *)__builtin_new(0xc0);
    pEVar5 = __16EFloorStylesMenu(pEVar5);
    this->m_pFloorStyles = pEVar5;
LAB_0015c174:
    pEVar2 = (pEVar5->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar2[3].Message)
              ((int)(pEVar5->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar2[3].SetBoxDims + -0x44);
  }
  else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    pEVar7 = (EUIObjectNode *)0x0;
    if (ppEVar1 != (EUIObjectNode **)0x0) {
      pEVar7 = *ppEVar1;
    }
    if (*(EUIObjectNode ***)(pEVar7->m_listIr + 8) == (EUIObjectNode **)0x0) {
      pEVar7 = (EUIObjectNode *)0x0;
    }
    else {
      pEVar7 = **(EUIObjectNode ***)(pEVar7->m_listIr + 8);
    }
                    /* end of inlined section */
    if (pChild == pEVar7) {
      style = kNormalStyle;
      cost = 0x46;
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      pEVar7 = (EUIObjectNode *)0x0;
      if (ppEVar1 != (EUIObjectNode **)0x0) {
        pEVar7 = *ppEVar1;
      }
      if (*(int **)(pEVar7->m_listIr + 8) == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = **(int **)(pEVar7->m_listIr + 8);
      }
      ppEVar3 = *(EUIObjectNode ***)(*(int *)(iVar6 + 0xc) + 8);
      if (ppEVar3 == (EUIObjectNode **)0x0) {
        pEVar7 = (EUIObjectNode *)0x0;
      }
      else {
        pEVar7 = *ppEVar3;
      }
                    /* end of inlined section */
      if (pChild == pEVar7) {
        pEVar5 = this->m_pFloorStyles;
        if (pEVar5 != (EFloorStylesMenu *)0x0) {
          pEVar2 = (pEVar5->field0_0x0).field0_0x0.field0_0x0.__vtable;
          (*(code *)pEVar2->Draw)
                    ((int)(pEVar5->field0_0x0).field0_0x0.m_maxBackShdrSize +
                     *(short *)&pEVar2->Update + -0x44,3);
        }
        this_00 = (EWallPaperMenu *)__builtin_new(0xc0);
        pEVar5 = (EFloorStylesMenu *)__14EWallPaperMenu(this_00);
        this->m_pFloorStyles = pEVar5;
        goto LAB_0015c174;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      pEVar7 = (EUIObjectNode *)0x0;
      if (ppEVar1 != (EUIObjectNode **)0x0) {
        pEVar7 = *ppEVar1;
      }
      if (*(int **)(pEVar7->m_listIr + 8) == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = **(int **)(pEVar7->m_listIr + 8);
      }
      piVar4 = *(int **)(*(int *)(iVar6 + 0xc) + 8);
      if (piVar4 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar4;
      }
      ppEVar1 = *(EUIObjectNode ***)(*(int *)(iVar6 + 0xc) + 8);
      if (ppEVar1 == (EUIObjectNode **)0x0) {
        pEVar7 = (EUIObjectNode *)0x0;
      }
      else {
        pEVar7 = *ppEVar1;
      }
                    /* end of inlined section */
      if (pChild != pEVar7) {
        pSel = (ObjSelector *)pChild[2].m_pos.field0_0x0.d[0];
                    /* end of inlined section */
        if (pSel == (ObjSelector *)0x0) {
          return;
        }
        SetCursorObject__11ESimsCursorP11ObjSelector
                  ((ESimsCursor__15_1743 *)_globals._pCursor[0],pSel);
        Message__7EGlobalPvUi(&_globals,(void *)0x0,0x24);
        *(undefined4 *)&this->m_done = 1;
        return;
      }
      style = kFenceStyle1;
      cost = 10;
    }
    BeginWallTool__11ESimsCursor9WallStyleUi
              ((ESimsCursor__16_2000 *)_globals._pCursor[0],style,cost);
    *(undefined4 *)&this->m_done = 1;
    Message__7EGlobalPvUi(&_globals,(void *)0x0,0x24);
  }
  return;
}

EFloorStylesMenuItem* EFloorStylesMenuItem::EFloorStylesMenuItem(FloorTile &id, bool bfloor) {
	EUIIconDef icondef;
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
  icondef.m_colorIdx = 1;
  icondef.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  icondef.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->field0_0x0,&icondef,0,0,0x40);
  this->m_idMap = id;
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_20EFloorStylesMenuItem;
  if (bfloor) {
    InitInActiveShader__7EUIIconi(&this->field0_0x0,id->shaderID);
    InitActiveShader__7EUIIconi(&this->field0_0x0,id->shaderID);
  }
  else {
    InitInActiveShader__7EUIIconi(&this->field0_0x0,id->shaderID);
    InitActiveShader__7EUIIconi(&this->field0_0x0,id->shaderID);
  }
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar5 = (this->field0_0x0).m_def.__vtable;
  (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2] = 0.07142857;
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
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 1UL >> (7 - uVar6) * 8;
  piVar3 = &(this->field0_0x0).m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar7 = (ulong *)((int)piVar3 - uVar6);
  *puVar7 = 1L << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3a890800000000U >> (7 - uVar6) * 8;
  ppEVar4 = &(this->field0_0x0).m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar7 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar7 = 0x3a890800000000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (this->field0_0x0).m_def.__vtable = pEVar5;
  return this;
}

void EFloorStylesMenuItem::~EFloorStylesMenuItem(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_20EFloorStylesMenuItem;
  ___7EUIIcon(&this->field0_0x0,__in_chrg);
  return;
}

u16 EFloorStylesMenuItem::GetMaxisId() {
  int iVar1;
  
  iVar1 = GetFloorIndex__7EGlobalPC9FloorTile(&_globals,this->m_idMap);
  return (short)iVar1;
}

u32 EFloorStylesMenuItem::GetEorId() {
  return this->m_idMap->shaderID;
}

void EFloorStylesMenuItem::Draw(ERC *prc) {
  Draw__7EUIIconP3ERC(&this->field0_0x0,prc);
  return;
}

EFloorStylesMenu* EFloorStylesMenu::EFloorStylesMenu() {
	EUIObjectNode *this;
	EUIMenu *this;
	EUIScrollMenu *this;
	EUIMenu *this;
	EUIMenu *this;
	float x;
	EUIScrollMenu *this;
	EUIMenu *this;
	
  uint uVar1;
  EUIObjectNode__vtable *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  undefined4 local_50;
  float local_4c;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_3c = 0.0;
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __13EUIScrollMenuiifffiib(&this->field0_0x0,-1,-1,0.05,0.0,0.0,-1,-1,true);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_itemList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_itemList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_16EFloorStylesMenu;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  this->m_pFont = (ERFont *)0x0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (*_vt_16EFloorStylesMenu[8]._4_4_)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             (short)_vt_16EFloorStylesMenu[8].__delta + -0x44,0x16,1);
  uVar1 = (this->field0_0x0).field0_0x0.field0_0x0.m_flags;
  (this->field0_0x0).field0_0x0.m_xoff = local_3c;
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (this->field0_0x0).field0_0x0.field0_0x0.m_flags = uVar1 | 0x16;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (this->field0_0x0).field0_0x0.m_layout = 0;
  (this->field0_0x0).field0_0x0.m_optJusty = 1;
  (this->field0_0x0).field0_0x0.m_optJustx = 0;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
  local_38 = _13EUIObjectNode_SAFE_TOP;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_4c = _13EUIObjectNode_SAFE_BOTTOM - _13EUIObjectNode_SAFE_TOP;
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  (this->field0_0x0).field0_0x0.m_stick = 4;
  local_50 = 0x3e800000;
                    /* end of inlined section */
  SetBoxDims__7EUIMenuRC5EVec2((EUIMenu *)this,(EVec2 *)&local_50);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_40 = _13EUIObjectNode_SAFE_LEFT;
  SetPos__13EUIObjectNodeRC5EVec3((EUIObjectNode *)this,(EVec3 *)&local_40);
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (this->field0_0x0).field0_0x0.m_optgap = 0.0145;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.m_pCurOpt = (EUIObjectNode *)0x0;
  return this;
}

void EFloorStylesMenu::~EFloorStylesMenu(int __in_chrg) {
	TNodeList<EUIObjectNode *> *this;
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
  ENodeListNode *pEVar2;
  
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_16EFloorStylesMenu;
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
                    /* end of inlined section */
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_itemList).field0_0x0.m_l.m_pHead;
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
  RemoveAll__9ENodeList(&(this->m_itemList).field0_0x0);
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.m_pCurOpt = (EUIObjectNode *)0x0;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_itemList).field0_0x0);
                    /* end of inlined section */
  ___13EUIScrollMenu(&this->field0_0x0,__in_chrg);
  return;
}

void EFloorStylesMenu::Init() {
	int i;
	EFloorStylesMenuItem *pItem;
	unsigned int n;
	EUIObjectNode *data;
	
  EUIObjectNode__vtable *pEVar1;
  FloorSet *pFVar2;
  EFloorStylesMenuItem *pEVar3;
  ERFont *pEVar4;
  FloorTile **ppFVar5;
  undefined8 unaff_s0;
  int iVar6;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  FloorTile *pFVar7;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
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
  
  pFVar2 = _globals._pFloorSet;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  ppFVar5 = ((_globals._pFloorSet)->field0_0x0).pData;
  pFVar7 = (FloorTile *)0x0;
  if (ppFVar5 != (FloorTile **)0x0) {
    pFVar7 = ppFVar5[-1];
  }
                    /* end of inlined section */
  iVar6 = 0;
  if (0 < (int)pFVar7) {
    do {
      pEVar3 = (EFloorStylesMenuItem *)__builtin_new(0x78);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      ppFVar5 = (pFVar2->field0_0x0).pData + iVar6;
                    /* end of inlined section */
      iVar6 = iVar6 + 1;
      pEVar3 = __20EFloorStylesMenuItemRC9FloorTileb(pEVar3,*ppFVar5,true);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_68 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_6c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_70 = 0;
                    /* end of inlined section */
      pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[2].SetBoxDims)
                ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1[2].SetPos + -0x44,pEVar3,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&(this->m_itemList).field0_0x0,(uint)pEVar3);
                    /* end of inlined section */
    } while (iVar6 < (int)pFVar7);
  }
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar4 = (ERFont *)
           AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar4;
  *(undefined4 *)&this->m_done = 0;
  return;
}

void EFloorStylesMenu::Message(EUIObjectNode *pChild, u32 messId) {
  if ((messId == 1) && (pChild != (EUIObjectNode *)0x0)) {
    InitFloorTool__11ESimsCursorRC9FloorTile
              ((ESimsCursor__16_2000 *)_globals._pCursor[0],(FloorTile *)pChild[1].__vtable);
    *(undefined4 *)&this->m_done = 1;
    Message__7EGlobalPvUi(&_globals,(void *)0x0,0x24);
  }
  return;
}

EWallPaperMenuItem* EWallPaperMenuItem::EWallPaperMenuItem(WallTile &id, bool bfloor) {
	EUIIconDef icondef;
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
  icondef.m_colorIdx = 1;
  icondef.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  icondef.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->field0_0x0,&icondef,0,0,0x40);
  this->m_idMap = id;
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_18EWallPaperMenuItem;
  if (bfloor) {
    InitInActiveShader__7EUIIconi(&this->field0_0x0,id->shaderID);
    InitActiveShader__7EUIIconi(&this->field0_0x0,id->shaderID);
  }
  else {
    InitInActiveShader__7EUIIconi(&this->field0_0x0,id->shaderID);
    InitActiveShader__7EUIIconi(&this->field0_0x0,id->shaderID);
  }
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar5 = (this->field0_0x0).m_def.__vtable;
  (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2] = 0.07142857;
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
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 1UL >> (7 - uVar6) * 8;
  piVar3 = &(this->field0_0x0).m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar7 = (ulong *)((int)piVar3 - uVar6);
  *puVar7 = 1L << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0x3a890800000000U >> (7 - uVar6) * 8;
  ppEVar4 = &(this->field0_0x0).m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar7 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar7 = 0x3a890800000000 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (this->field0_0x0).m_def.__vtable = pEVar5;
  return this;
}

void EWallPaperMenuItem::~EWallPaperMenuItem(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_18EWallPaperMenuItem;
  ___7EUIIcon(&this->field0_0x0,__in_chrg);
  return;
}

u16 EWallPaperMenuItem::GetMaxisId() {
  int iVar1;
  
  iVar1 = GetWallIndex__7EGlobalPC8WallTile(&_globals,this->m_idMap);
  return (short)iVar1;
}

u32 EWallPaperMenuItem::GetEorId() {
  return this->m_idMap->shaderID;
}

void EWallPaperMenuItem::Draw(ERC *prc) {
  Draw__7EUIIconP3ERC(&this->field0_0x0,prc);
  return;
}

EWallPaperMenu* EWallPaperMenu::EWallPaperMenu() {
  __16EFloorStylesMenu(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_14EWallPaperMenu;
  return this;
}

void EWallPaperMenu::~EWallPaperMenu(int __in_chrg) {
	TNodeList<EUIObjectNode *> *this;
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
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_14EWallPaperMenu;
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->field0_0x0).m_itemList.field0_0x0.m_l.m_pHead;
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
  RemoveAll__9ENodeList(&(this->field0_0x0).m_itemList.field0_0x0);
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.m_pCurOpt = (EUIObjectNode *)0x0;
  ___16EFloorStylesMenu(&this->field0_0x0,__in_chrg);
  return;
}

void EWallPaperMenu::Init() {
	int i;
	EWallPaperMenuItem *pItem;
	unsigned int n;
	EUIObjectNode *data;
	
  EUIObjectNode__vtable *pEVar1;
  WallSet *pWVar2;
  EWallPaperMenuItem *pEVar3;
  WallTile **ppWVar4;
  undefined8 unaff_s0;
  int iVar5;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  WallTile *pWVar6;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
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
  
  pWVar2 = _globals._pWallSet;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  ppWVar4 = ((_globals._pWallSet)->field0_0x0).pData;
  pWVar6 = (WallTile *)0x0;
  if (ppWVar4 != (WallTile **)0x0) {
    pWVar6 = ppWVar4[-1];
  }
                    /* end of inlined section */
  iVar5 = 0;
  if (0 < (int)pWVar6) {
    do {
      pEVar3 = (EWallPaperMenuItem *)__builtin_new(0x78);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      ppWVar4 = (pWVar2->field0_0x0).pData + iVar5;
                    /* end of inlined section */
      iVar5 = iVar5 + 1;
      pEVar3 = __18EWallPaperMenuItemRC8WallTileb(pEVar3,*ppWVar4,false);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_68 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_6c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_70 = 0;
                    /* end of inlined section */
      pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[2].SetBoxDims)
                ((int)(this->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1[2].SetPos + -0x44,pEVar3,&local_70);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&(this->field0_0x0).m_itemList.field0_0x0,(uint)pEVar3);
                    /* end of inlined section */
    } while (iVar5 < (int)pWVar6);
  }
  *(undefined4 *)&(this->field0_0x0).m_done = 0;
  return;
}

void EWallPaperMenu::Message(EUIObjectNode *pChild, u32 messId) {
  if ((messId == 1) && (pChild != (EUIObjectNode *)0x0)) {
    BeginPaperTool__11ESimsCursorRC8WallTile
              ((ESimsCursor__16_2000 *)_globals._pCursor[0],(WallTile *)pChild[1].__vtable);
    *(undefined4 *)&(this->field0_0x0).m_done = 1;
    Message__7EGlobalPvUi(&_globals,(void *)0x0,0x24);
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

void EPauseMenuItem::SetSelector(ObjSelector *pSelector) {
  this->m_pSelector = pSelector;
  return;
}

ObjSelector* EPauseMenuItem::GetSelector() {
  return this->m_pSelector;
}

FloorTile& EFloorStylesMenuItem::GetNode() {
  return this->m_idMap;
}

bool EFloorStylesMenu::GetReadyToKill() {
  return SUB41(*(undefined4 *)&this->m_done,0);
}

WallTile& EWallPaperMenuItem::GetNode() {
  return this->m_idMap;
}
