// STATUS: NOT STARTED

#include "memorymeterwin.h"

// warning: multiple differing types with the same name (name not equal)
struct ESimsCursor : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb881;
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

__vtbl_ptr_type EMemoryMeterWin virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMemoryMeterWin::~EMemoryMeterWin,
		/* .__delta2 = */ 27784
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMemoryMeterWin::SetState,
		/* .__delta2 = */ 28864
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMemoryMeterWin::SetEvent,
		/* .__delta2 = */ 31432
	},
	/* [4] = */ {
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

EMemoryMeterWin* EMemoryMeterWin::EMemoryMeterWin() {
	Panelstateman *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
  (this->field0_0x0).m_state = LIVE_DEFAULT_STATE;
                    /* end of inlined section */
  this->m_pBlankShader = (ERShader *)0x0;
  this->m_pBarTopShader = (ERShader *)0x0;
  this->m_pBarMidShader = (ERShader *)0x0;
  this->m_pBarBotShader = (ERShader *)0x0;
  this->m_pBarTopHShader = (ERShader *)0x0;
  this->m_pBarMidHShader = (ERShader *)0x0;
  this->m_pBarBotHShader = (ERShader *)0x0;
  this->m_pIconWall = (ERShader *)0x0;
  this->m_pIconFence = (ERShader *)0x0;
  this->m_pIconMemory = (ERShader *)0x0;
  (this->field0_0x0).__vtable = (Panelstateman__vtable *)_vt_15EMemoryMeterWin;
  Init__15EMemoryMeterWin(this);
  return this;
}

void EMemoryMeterWin::~EMemoryMeterWin(int __in_chrg) {
	Panelstateman *this;
	int __in_chrg;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (Panelstateman__vtable *)_vt_15EMemoryMeterWin;
  Reset__15EMemoryMeterWin(this);
                    /* inlined from c:/eor/src2/games/sims/ESRC/panelstateman.h */
  (this->field0_0x0).__vtable = (Panelstateman__vtable *)_vt_13Panelstateman;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EMemoryMeterWin::Init() {
	float x;
	EGraphics *this;
	
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ERShader *pEVar4;
  ERFont *this_00;
  uint uVar5;
  EWindow *pEVar6;
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBlankShader = pEVar4;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xd5b123c9,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBarTopShader = pEVar4;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x5662a60e,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBarMidShader = pEVar4;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xe83526df,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBarBotShader = pEVar4;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc6569957,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBarTopHShader = pEVar4;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x45851c90,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBarMidHShader = pEVar4;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x624d7538,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBarBotHShader = pEVar4;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x74cbdfd1,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pIconWall = pEVar4;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xd6e18b44,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pIconFence = pEVar4;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf32e682e,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pIconMemory = pEVar4;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  this_00 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = this_00;
  SetSize__6ERFontffb(this_00,12.0,1.0,true);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar3 = CONCAT44(0x3e4ccccd,_13EUIObjectNode_SAFE_RIGHT);
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar5);
  *puVar2 = *puVar2 & -1L << (uVar5 + 1) * 8 | uVar3 >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_vPos & 7;
  puVar2 = (ulong *)((int)&this->m_vPos - uVar5);
  *puVar2 = uVar3 << uVar5 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar3 = CONCAT44(0x3ef33333,16.0 / (float)_pGfx->m_xscreen);
  puVar1 = (undefined *)((int)&(this->m_vSize).field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar5);
  *puVar2 = *puVar2 & -1L << (uVar5 + 1) * 8 | uVar3 >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_vSize & 7;
  puVar2 = (ulong *)((int)&this->m_vSize - uVar5);
  *puVar2 = uVar3 << uVar5 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  this->m_nMode = 2;
  this->m_nObjectRange = 0x1200;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  uVar5 = (*(code *)_5Globs_pObjectFolder->__vtable[1].Load)
                    ((int)&_5Globs_pObjectFolder->__vtable +
                     (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].Save);
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
  this->m_nPerformanceMax = 4000;
  this->m_nDisplayMax = (uVar5 >> 10) + this->m_nObjectRange;
                    /* inlined from /eor/src2/engine/window/e_window.h */
  this->m_nObjectFloor = uVar5 >> 10;
  pEVar6 = (EWindow *)_memmanAlloc__FUiUi(0xa0,0x10);
                    /* end of inlined section */
  pEVar6 = __7EWindow(pEVar6);
  this->m_pClipWin = pEVar6;
  this->m_fTicker = 0.0;
  return;
}

void EMemoryMeterWin::Reset() {
  EWindow *pEVar1;
  ERShader *pEVar2;
  
  while (this->m_pBlankShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pBlankShader->field0_0x0);
    this->m_pBlankShader = (ERShader *)0x0;
  }
  pEVar2 = this->m_pBarTopShader;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pBarTopShader = (ERShader *)0x0;
    pEVar2 = this->m_pBarTopShader;
  }
  pEVar2 = this->m_pBarMidShader;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pBarMidShader = (ERShader *)0x0;
    pEVar2 = this->m_pBarMidShader;
  }
  pEVar2 = this->m_pBarBotShader;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pBarBotShader = (ERShader *)0x0;
    pEVar2 = this->m_pBarBotShader;
  }
  pEVar2 = this->m_pBarTopHShader;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pBarTopHShader = (ERShader *)0x0;
    pEVar2 = this->m_pBarTopHShader;
  }
  pEVar2 = this->m_pBarMidHShader;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pBarMidHShader = (ERShader *)0x0;
    pEVar2 = this->m_pBarMidHShader;
  }
  pEVar2 = this->m_pBarBotHShader;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pBarBotHShader = (ERShader *)0x0;
    pEVar2 = this->m_pBarBotHShader;
  }
  pEVar2 = this->m_pIconWall;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pIconWall = (ERShader *)0x0;
    pEVar2 = this->m_pIconWall;
  }
  pEVar2 = this->m_pIconFence;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pIconFence = (ERShader *)0x0;
    pEVar2 = this->m_pIconFence;
  }
  pEVar2 = this->m_pIconMemory;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pIconMemory = (ERShader *)0x0;
    pEVar2 = this->m_pIconMemory;
  }
  DelRef__9EResource(&this->m_pFont->field0_0x0);
  pEVar1 = this->m_pClipWin;
  this->m_pFont = (ERFont *)0x0;
  if (pEVar1 != (EWindow *)0x0) {
    (*(code *)pEVar1->__vtable->WindowMatrixChanged)
              ((int)&(pEVar1->m_mWindow).field0_0x0 + (int)*(short *)&pEVar1->__vtable->Select,3);
  }
  return;
}

void EMemoryMeterWin::SetState(Panelstate newstate) {
  return;
}

void EMemoryMeterWin::Update() {
  ObjectFolder__vtable *pOVar1;
  float fVar2;
  ObjectFolder *pOVar3;
  uint uVar4;
  
  pOVar3 = _5Globs_pObjectFolder;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  uVar4 = (*(code *)_5Globs_pObjectFolder->__vtable[1].PrepareForModuleSave)
                    ((int)&_5Globs_pObjectFolder->__vtable +
                     (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].PrepareForModuleLoad);
  this->m_nCurVal = uVar4 >> 10;
  pOVar1 = pOVar3->__vtable;
  uVar4 = (*(code *)pOVar1[1].GetTreeTable)
                    ((int)&pOVar3->__vtable + (int)*(short *)&pOVar1[1].OpenResFile);
  fVar2 = _dt;
  this->m_nCurPerformanceVal = uVar4;
  this->m_fTicker = this->m_fTicker + fVar2;
  return;
}

void EMemoryMeterWin::Draw(ERC *prc) {
	EVec2 vScreenPos;
	EVec2 vScreenSize;
	float fPerformance;
	ESimsCursor *pCurs;
	CursorMode mode;
	float fPercentage;
	EVec4 vColor;
	EVec4 vStartColor;
	EVec4 vMiddleColor;
	EVec4 vEndColor;
	EGraphics *this;
	ESimsCursor *this;
	float y;
	float x;
	float y;
	float z;
	float y;
	
  CursorMode CVar1;
  EWindow__vtable *pEVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ERShader *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  EVec2 vScreenPos;
  EVec2 vScreenSize;
  EVec4 vColor;
  EVec4 vStartColor;
  EVec4 vMiddleColor;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  EVec4 vEndColor;
  TRect_float_ local_d0;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b0;
  float local_ac;
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
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* end of inlined section */
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar6 = (float)_pGfx->m_yscreen;
  fVar8 = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetSize__6ERFontffb(this->m_pFont,12.0,1.0,true);
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
  CVar1 = _globals._pCursor[_globals.m_whichPlayerPaused]->m_mode;
                    /* end of inlined section */
  if (CVar1 == kWallTool) {
    this->m_nMode = 0;
    fVar9 = GetWallMeterValue__9ERoomWall();
  }
  else if (CVar1 == kFenceTool) {
    this->m_nMode = 1;
    fVar9 = GetFenceMeterValue__11EIFenceWall();
  }
  else {
    uVar5 = this->m_nCurVal - this->m_nObjectFloor;
    this->m_nMode = 2;
    if ((int)uVar5 < 0) {
      fVar11 = (float)(uVar5 & 1 | uVar5 >> 1);
      fVar11 = fVar11 + fVar11;
      uVar5 = this->m_nDisplayMax;
    }
    else {
      fVar11 = (float)uVar5;
      uVar5 = this->m_nDisplayMax;
    }
    uVar5 = uVar5 - this->m_nObjectFloor;
    if ((int)uVar5 < 0) {
      fVar10 = (float)(uVar5 & 1 | uVar5 >> 1);
      fVar10 = fVar10 + fVar10;
      uVar5 = this->m_nCurPerformanceVal;
    }
    else {
      fVar10 = (float)uVar5;
      uVar5 = this->m_nCurPerformanceVal;
    }
    if ((int)uVar5 < 0) {
      fVar7 = (float)(uVar5 & 1 | uVar5 >> 1);
      fVar7 = fVar7 + fVar7;
      uVar5 = this->m_nPerformanceMax;
    }
    else {
      fVar7 = (float)uVar5;
      uVar5 = this->m_nPerformanceMax;
    }
    if ((int)uVar5 < 0) {
      fVar12 = (float)(uVar5 & 1 | uVar5 >> 1);
      fVar12 = fVar12 + fVar12;
    }
    else {
      fVar12 = (float)uVar5;
    }
    fVar9 = fVar11 / fVar10;
    if (fVar11 / fVar10 < fVar7 / fVar12) {
      fVar9 = fVar7 / fVar12;
    }
  }
  fVar11 = 10.0;
  fVar10 = 1.0;
  fVar12 = (this->m_vPos).field0_0x0.d[0];
  fVar7 = (this->m_vPos).field0_0x0.d[1] +
          ((this->m_vSize).field0_0x0.d[1] - 10.0 / fVar6) * (1.0 - fVar9);
  Select__8ERShaderP3ERCi(this->m_pBarTopShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  vColor.field0_0x0.d[0] = fVar12 - (this->m_vSize).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vColor.field0_0x0.d[1] = (this->m_vPos).field0_0x0.d[1];
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
                    /* end of inlined section */
  vStartColor.field0_0x0.d[0] = fVar10;
  vStartColor.field0_0x0.d[1] = fVar10;
  vMiddleColor.field0_0x0.d[0] = fVar10;
  vMiddleColor.field0_0x0.d[1] = fVar10;
  vMiddleColor.field0_0x0.d[2] = fVar10;
  vMiddleColor.field0_0x0.d[3] = fVar10;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vColor,&vStartColor,
             &vMiddleColor);
  Select__8ERShaderP3ERCi(this->m_pBarMidShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  vColor.field0_0x0.d[0] = fVar12 - (this->m_vSize).field0_0x0.d[0];
  vStartColor.field0_0x0.d[1] = ((this->m_vSize).field0_0x0.d[1] * fVar6 - 37.0) * 0.0625;
  vColor.field0_0x0.d[1] = (this->m_vPos).field0_0x0.d[1] + 16.0 / fVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vStartColor.field0_0x0.d[0] = fVar10;
  local_f0 = fVar10;
  local_ec = fVar10;
  local_e8 = fVar10;
  local_e4 = fVar10;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vColor,&vStartColor,
             &local_f0);
  Select__8ERShaderP3ERCi(this->m_pBarBotShader,prc,0);
  vColor.field0_0x0.d[0] = fVar12 - 42.0 / fVar8;
  vColor.field0_0x0.d[1] =
       ((this->m_vPos).field0_0x0.d[1] + (this->m_vSize).field0_0x0.d[1]) - 56.0 / fVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vStartColor.field0_0x0.d[0] = fVar10;
  vStartColor.field0_0x0.d[1] = fVar10;
  vMiddleColor.field0_0x0.d[0] = fVar10;
  vMiddleColor.field0_0x0.d[1] = fVar10;
  vMiddleColor.field0_0x0.d[2] = fVar10;
  vMiddleColor.field0_0x0.d[3] = fVar10;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vColor,&vStartColor,
             &vMiddleColor);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vStartColor.field0_0x0.d[3] = _GREEN.field0_0x0.d[3];
  vMiddleColor.field0_0x0.d[3] = _YELLOW.field0_0x0.d[3];
  vEndColor.field0_0x0.d[3] = _RED.field0_0x0.d[3];
  vStartColor.field0_0x0.d[0] = _GREEN.field0_0x0.d[0];
  vStartColor.field0_0x0.d[1] = _GREEN.field0_0x0.d[1];
  vStartColor.field0_0x0.d[2] = _GREEN.field0_0x0.d[2];
  vMiddleColor.field0_0x0.d[0] = _YELLOW.field0_0x0.d[0];
  vMiddleColor.field0_0x0.d[1] = _YELLOW.field0_0x0.d[1];
  vMiddleColor.field0_0x0.d[2] = _YELLOW.field0_0x0.d[2];
  vEndColor.field0_0x0.d[0] = _RED.field0_0x0.d[0];
  vEndColor.field0_0x0.d[1] = _RED.field0_0x0.d[1];
                    /* end of inlined section */
  vEndColor.field0_0x0.d[2] = _RED.field0_0x0.d[2];
  uVar3 = _GREEN.field0_0x0.d[0];
  uVar4 = _GREEN.field0_0x0.d[1];
  vColor.field0_0x0.d[2] = _GREEN.field0_0x0.d[2];
  vColor.field0_0x0.d[3] = _GREEN.field0_0x0.d[3];
  if (0.2 <= fVar9) {
    if (0.4 <= fVar9) {
      uVar3 = _YELLOW.field0_0x0.d[0];
      uVar4 = _YELLOW.field0_0x0.d[1];
      vColor.field0_0x0.d[2] = _YELLOW.field0_0x0.d[2];
      vColor.field0_0x0.d[3] = _YELLOW.field0_0x0.d[3];
      if (0.6 <= fVar9) {
        if (fVar9 < 0.8) {
          fVar9 = fVar9 - 0.6;
          vColor.field0_0x0.d[2] =
               _YELLOW.field0_0x0.d[2] +
               (_RED.field0_0x0.d[2] - _YELLOW.field0_0x0.d[2]) * fVar9 * 5.0;
          uVar3 = _YELLOW.field0_0x0.d[0] +
                  (_RED.field0_0x0.d[0] - _YELLOW.field0_0x0.d[0]) * fVar9 * 5.0;
          uVar4 = _YELLOW.field0_0x0.d[1] +
                  (_RED.field0_0x0.d[1] - _YELLOW.field0_0x0.d[1]) * fVar9 * 5.0;
          vColor.field0_0x0.d[3] = fVar10;
        }
        else {
          uVar3 = _RED.field0_0x0.d[0];
          uVar4 = _RED.field0_0x0.d[1];
          vColor.field0_0x0.d[2] = _RED.field0_0x0.d[2];
          vColor.field0_0x0.d[3] = _RED.field0_0x0.d[3];
          if (0.95 <= fVar9) {
            fVar9 = sinf(this->m_fTicker * fVar11);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
            local_d0.bottom = fVar9 * 0.25 + 0.75;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
            local_d0.left = vEndColor.field0_0x0.d[0];
            local_d0.top = vEndColor.field0_0x0.d[1];
            local_d0.right = vEndColor.field0_0x0.d[2];
                    /* end of inlined section */
            uVar3 = vEndColor.field0_0x0.d[0];
            uVar4 = vEndColor.field0_0x0.d[1];
            vColor.field0_0x0.d[2] = vEndColor.field0_0x0.d[2];
            vColor.field0_0x0.d[3] = local_d0.bottom;
          }
        }
      }
    }
    else {
      fVar9 = fVar9 - 0.2;
      vColor.field0_0x0.d[2] =
           _GREEN.field0_0x0.d[2] + (_YELLOW.field0_0x0.d[2] - _GREEN.field0_0x0.d[2]) * fVar9 * 5.0
      ;
      uVar3 = _GREEN.field0_0x0.d[0] +
              (_YELLOW.field0_0x0.d[0] - _GREEN.field0_0x0.d[0]) * fVar9 * 5.0;
      uVar4 = _GREEN.field0_0x0.d[1] +
              (_YELLOW.field0_0x0.d[1] - _GREEN.field0_0x0.d[1]) * fVar9 * 5.0;
      vColor.field0_0x0.d[3] = fVar10;
    }
  }
  vColor.field0_0x0.d[1] = uVar4;
  vColor.field0_0x0.d[0] = uVar3;
  fVar9 = (this->m_vPos).field0_0x0.d[1] + (this->m_vSize).field0_0x0.d[1];
  if (fVar7 < fVar9 - 1.0 / fVar6) {
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    uVar13 = 0;
    local_d0.left = fVar12 - 52.0 / fVar8;
    local_d0.right = fVar12 + 20.0 / fVar8;
    local_d0.top = fVar7;
    local_d0.bottom = fVar9;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    SetClip__7EWindowRCt5TRect1Zf(this->m_pClipWin,&local_d0);
    pEVar2 = this->m_pClipWin->__vtable;
    (*(code *)pEVar2->OutputCoordinatesChanged)
              ((int)&(this->m_pClipWin->m_mWindow).field0_0x0 +
               (int)*(short *)&pEVar2->InputCoordinatesChanged,prc);
    Select__8ERShaderP3ERCi(this->m_pBarTopHShader,prc,0);
    local_d0.left = fVar12 - (this->m_vSize).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_d0.top = (this->m_vPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_bc = 0x3f800000;
    local_c0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar13,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_d0,
               &local_c0,&vColor);
    Select__8ERShaderP3ERCi(this->m_pBarMidHShader,prc,0);
    local_d0.left = fVar12 - (this->m_vSize).field0_0x0.d[0];
    local_ac = ((this->m_vSize).field0_0x0.d[1] * fVar6 - 56.0) * 0.0625;
    local_d0.top = (this->m_vPos).field0_0x0.d[1] + 16.0 / fVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_b0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar13,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_d0,
               &local_b0,&vColor);
    Select__8ERShaderP3ERCi(this->m_pBarBotHShader,prc,0);
    local_d0.top = ((this->m_vPos).field0_0x0.d[1] + (this->m_vSize).field0_0x0.d[1]) - 56.0 / fVar6
    ;
    local_d0.left = fVar12 - 42.0 / fVar8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_bc = 0x3f800000;
    local_c0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar13,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_d0,
               &local_c0,&vColor);
    SelectWin__7EGlobalP3ERC(&_globals,prc);
  }
  uVar5 = this->m_nMode;
  if (uVar5 == 1) {
    this_00 = this->m_pIconFence;
  }
  else {
    if (uVar5 != 0) {
      if (uVar5 == 2) {
        Select__8ERShaderP3ERCi(this->m_pIconMemory,prc,0);
      }
      goto LAB_00187938;
    }
    this_00 = this->m_pIconWall;
  }
  Select__8ERShaderP3ERCi(this_00,prc,0);
LAB_00187938:
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_d0.left = (this->m_vPos).field0_0x0.d[0] - 26.0 / fVar8;
  local_d0.top = ((this->m_vPos).field0_0x0.d[1] + (this->m_vSize).field0_0x0.d[1]) - 40.0 / fVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_bc = 0x3f800000;
  local_c0 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_d0,&local_c0,
             0x35f4c0);
  return;
}

bool EMemoryMeterWin::GetAffordable(ObjSelector *sel) {
	u32 nCost;
	u32 nPerformance;
	
  ObjectFolder__vtable *pOVar1;
  ObjectFolder *pOVar2;
  uint uVar3;
  int iVar4;
  
  pOVar2 = _5Globs_pObjectFolder;
  if (sel != (ObjSelector *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    uVar3 = (*(code *)_5Globs_pObjectFolder->__vtable[1].DeletingInstance)
                      ((int)&_5Globs_pObjectFolder->__vtable +
                       (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].CreatingInstance,sel);
    pOVar1 = pOVar2->__vtable;
    iVar4 = (*(code *)pOVar1[1].GetPlaceholder)
                      ((int)&pOVar2->__vtable + (int)*(short *)&pOVar1[1].DoStream,sel);
    if (this->m_nDisplayMax < this->m_nCurVal + (uVar3 >> 10)) {
      return false;
    }
    if (this->m_nCurPerformanceVal + iVar4 < this->m_nPerformanceMax) {
      return true;
    }
  }
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

void EMemoryMeterWin::SetEvent(PanelEvent event, u32 data) {
  return;
}
