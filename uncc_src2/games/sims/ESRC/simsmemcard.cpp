// STATUS: NOT STARTED

#include "simsmemcard.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2586;
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

struct EChecksummedConfigBuffer {
	u32 Checksum;
	u32 Version;
	char Buffer[8188];
};

struct SimpleReconObject<OptionsRecon> : ReconObject {
private:
	OptionsRecon *fObj;
	SInt32 fType;
	
public:
	SimpleReconObject<OptionsRecon>& operator=();
	SimpleReconObject();
	/* vtable[1] */ virtual SimpleReconObject(SimpleReconObject<OptionsRecon>*, int, void);
	SimpleReconObject();
	/* vtable[2] */ virtual void DoStream(ReconBuffer *r, SInt32 version);
	/* vtable[3] */ virtual SInt32 GetType();
};

static float m_fontSize = 15.f;
static float m_promptoff = 0.025f;

static int bgcolor[4][4] = {
	/* [0] = */ {
		/* [0] = */ 128,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0
	},
	/* [1] = */ {
		/* [0] = */ 0,
		/* [1] = */ 128,
		/* [2] = */ 0,
		/* [3] = */ 0
	},
	/* [2] = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 128,
		/* [3] = */ 0
	},
	/* [3] = */ {
		/* [0] = */ 128,
		/* [1] = */ 128,
		/* [2] = */ 128,
		/* [3] = */ 0
	}
};

static float lightdir[3][4] = {
	/* [0] = */ {
		/* [0] = */ 0.5f,
		/* [1] = */ 0.5f,
		/* [2] = */ 0.5f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.f,
		/* [1] = */ -0.4f,
		/* [2] = */ -0.1f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ -0.5f,
		/* [1] = */ -0.5f,
		/* [2] = */ 0.5f,
		/* [3] = */ 0.f
	}
};

static float lightcol[3][4] = {
	/* [0] = */ {
		/* [0] = */ 0.48f,
		/* [1] = */ 0.48f,
		/* [2] = */ 0.03f,
		/* [3] = */ 0.f
	},
	/* [1] = */ {
		/* [0] = */ 0.5f,
		/* [1] = */ 0.33f,
		/* [2] = */ 0.2f,
		/* [3] = */ 0.f
	},
	/* [2] = */ {
		/* [0] = */ 0.14f,
		/* [1] = */ 0.14f,
		/* [2] = */ 0.38f,
		/* [3] = */ 0.f
	}
};

static sceVu0FVECTOR ambient = {
	/* [0] = */ 0.5f,
	/* [1] = */ 0.5f,
	/* [2] = */ 0.5f,
	/* [3] = */ 0.f
};

__vtbl_ptr_type SimpleReconObject<OptionsRecon> virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<OptionsRecon>::~SimpleReconObject,
		/* .__delta2 = */ -20920
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<OptionsRecon>::DoStream,
		/* .__delta2 = */ -20888
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &SimpleReconObject<OptionsRecon>::GetType,
		/* .__delta2 = */ -20856
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

static EVec2 vTopLeft;
static EVec2 vTopLeftMessage;
static EVec2 vWHDialog;
static EVec2 vWHMessageBack;
static EVec2 vWHMessageBox;
static EVec2 vWTitleBar;
static EVec2 vWPromptBar;
static EChecksummedConfigBuffer CB;

static u32 getCurrentbuildVerNum(int w, int x, int y, int z) {
  return w << 0x18 | x << 0x10 | y << 8 | z / 100;
}

ESimsMemCard* ESimsMemCard::ESimsMemCard() {
  ERShader *pEVar1;
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bOverride = 0;
  this->m_MemCardMode = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bLoadMsgMode = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bCheckingCard = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc1d9c5ed,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pXIcon = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2ccf500a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTriIcon = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc45a417b,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pCircIcon = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x8b8cc935,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pSquareIcon = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xfd5d5154,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMemcardBackground = pEVar1;
  return this;
}

void ESimsMemCard::~ESimsMemCard(int __in_chrg) {
	void *pAddress;
	
  ERShader *pEVar1;
  
  while (this->m_pXIcon != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pXIcon->field0_0x0);
    this->m_pXIcon = (ERShader *)0x0;
  }
  while (this->m_pTriIcon != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pTriIcon->field0_0x0);
    this->m_pTriIcon = (ERShader *)0x0;
  }
  pEVar1 = this->m_pCircIcon;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pCircIcon = (ERShader *)0x0;
    pEVar1 = this->m_pCircIcon;
  }
  pEVar1 = this->m_pSquareIcon;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pSquareIcon = (ERShader *)0x0;
    pEVar1 = this->m_pSquareIcon;
  }
  pEVar1 = this->m_pMemcardBackground;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pMemcardBackground = (ERShader *)0x0;
    pEVar1 = this->m_pMemcardBackground;
  }
  if (this->m_pMemCardMenuMgr != (ESimsMemCardMenuMgr *)0x0) {
    ___19ESimsMemCardMenuMgr(this->m_pMemCardMenuMgr,3);
    this->m_pMemCardMenuMgr = (ESimsMemCardMenuMgr *)0x0;
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ESimsMemCard::Init() {
	u32 IconSize1;
	u32 IconSize2;
	u32 IconSize3;
	int i;
	
  EMemoryCard *pEVar1;
  uint IconSize;
  uint CopySize;
  uint DeleteSize;
  int iVar2;
  char (*pacVar3) [32];
  ESimsMemCardMenuMgr *pEVar4;
  ERFont *pEVar5;
  char *pcVar6;
  
  pEVar1 = _pMemoryCard;
  *(undefined4 *)&this->m_bOverride = 0;
  this->m_MemCardMode = 0;
  *(undefined4 *)&this->m_bCheckingCard = 0;
  if (pEVar1 != (EMemoryCard *)0x0) {
    if (_iVideoMode == 1) {
      pcVar6 = "BASLES-51257";
    }
    else {
      pcVar6 = "BASLUS-20573";
    }
    (*(code *)pEVar1->__vtable[1].SetupSaveTypes)
              ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable[1].GetFileList,pcVar6);
    (*(code *)_pMemoryCard->__vtable[1].IsCardFormated)
              ((int)&_pMemoryCard->__vtable +
               (int)*(short *)&_pMemoryCard->__vtable[1].AnyCardsPresent,1,0x2004);
    (*(code *)_pMemoryCard->__vtable[1].IsCardFormated)
              ((int)&_pMemoryCard->__vtable +
               (int)*(short *)&_pMemoryCard->__vtable[1].AnyCardsPresent,2,0x100000);
    this->m_SaveSize = 0x100000;
    this->m_SaveConfigSize = 0x2004;
    IconSize = GetSize__16EResourceManagerUi(&_binaryman.field0_0x0,0xc908e7fc);
    CopySize = GetSize__16EResourceManagerUi(&_binaryman.field0_0x0,0xc908e7fc);
    DeleteSize = GetSize__16EResourceManagerUi(&_binaryman.field0_0x0,0xc908e7fc);
    iVar2 = IconSize + CopySize + DeleteSize;
    this->m_SaveSize = this->m_SaveSize + 0x2800 + iVar2;
    this->m_SaveConfigSize = this->m_SaveConfigSize + 0x2800 + iVar2;
    Setup3DIconData__11EPS2MemCard12EMC_SaveTypeUiUiUiUiUiUiPCcN28PA3_iPA3_fT12_Pf
              (&_ps2memcard,EMC_TYPE_2,0xc908e7fc,0xc908e7fc,0xc908e7fc,IconSize,CopySize,DeleteSize
               ,"saveicon.ico","copyicon.ico","deleteicon.ico",bgcolor,lightdir,lightcol,ambient);
    Setup3DIconData__11EPS2MemCard12EMC_SaveTypeUiUiUiUiUiUiPCcN28PA3_iPA3_fT12_Pf
              (&_ps2memcard,EMC_TYPE_1,0xc908e7fc,0xc908e7fc,0xc908e7fc,IconSize,CopySize,DeleteSize
               ,"saveicon.ico","copyicon.ico","deleteicon.ico",bgcolor,lightdir,lightcol,ambient);
    *(undefined4 *)&this->m_bAlreadyCheckedForFile = 0;
    iVar2 = 7;
    pacVar3 = this->m_FileList[7];
    do {
      (*pacVar3)[0] = '\0';
      iVar2 = iVar2 + -1;
      pacVar3 = pacVar3[-1];
    } while (-1 < iVar2);
    *(undefined4 *)&this->m_bSaveLoadActive = 0;
    *(undefined4 *)&this->m_bErrorSavingFile = 0;
    *(undefined4 *)&this->m_bNoFile = 1;
    pEVar4 = (ESimsMemCardMenuMgr *)__builtin_new(0x400);
    pEVar4 = __19ESimsMemCardMenuMgr(pEVar4);
    *(undefined4 *)&this->m_bWaitForButUp = 0;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
    this->m_pMemCardMenuMgr = pEVar4;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
    pEVar5 = (ERFont *)
             AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pFont = pEVar5;
    *(undefined4 *)&this->m_bWaitOneFrameDraw = 0;
    this->m_pTempOR = (OptionsRecon *)0x0;
  }
  return;
}

void ESimsMemCard::Update() {
  EUIVirtualCtrl__vtable *pEVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(int *)&this->m_bWaitForButUp == 1) {
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar3 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,0x10
                      );
    if (lVar3 != 0) {
      return;
    }
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar3 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,0x10
                      );
    if (lVar3 != 0) {
      return;
    }
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar3 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,0x40
                      );
    if (lVar3 != 0) {
      return;
    }
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar3 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,0x40
                      );
    if (lVar3 != 0) {
      return;
    }
    *(undefined4 *)&this->m_bWaitForButUp = 0;
    iVar2 = *(int *)&this->m_bErrorSavingFile;
  }
  else {
    iVar2 = *(int *)&this->m_bErrorSavingFile;
  }
  if (iVar2 == 1) {
    uVar4 = 0x40;
    if (*(int *)&this->m_bExitSymbolIsTriangle != 0) {
      uVar4 = 0x10;
    }
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar3 = (**(code **)(pEVar1 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,
                       uVar4);
    if (lVar3 == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      uVar4 = 0x40;
      if (*(int *)&this->m_bExitSymbolIsTriangle != 0) {
        uVar4 = 0x10;
      }
      lVar3 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                         uVar4);
      if (lVar3 == 0) {
        return;
      }
      *(undefined4 *)&this->m_bErrorSavingFile = 0;
    }
    else {
      *(undefined4 *)&this->m_bErrorSavingFile = 0;
    }
    iVar2 = this->m_MemCardMode;
  }
  else {
    iVar2 = this->m_MemCardMode;
  }
  switch(iVar2) {
  case 1:
    UpdateMemCardCheckMode__12ESimsMemCard(this);
    break;
  case 2:
    UpdateLoadNeighborhoodMode__12ESimsMemCard(this);
    break;
  case 3:
    UpdateSaveNeighborhoodMode__12ESimsMemCard(this);
    break;
  case 4:
    UpdateImportHouseMode__12ESimsMemCard(this);
    break;
  case 5:
    UpdateSaveConfigMode__12ESimsMemCard(this);
    break;
  case 6:
    UpdateLoadConfigMode__12ESimsMemCard(this);
    break;
  case 7:
    UpdateSpecialSaveStage1__12ESimsMemCard(this);
    break;
  case 8:
    UpdateSpecialSaveStage2__12ESimsMemCard(this);
    break;
  default:
    *(undefined4 *)&this->m_bOverride = 0;
    break;
  case -0x452e541f:
    break;
  }
  return;
}

void ESimsMemCard::Draw(ERC *prc) {
  EGlobalManagerClient__vtable *pEVar1;
  short *Line1;
  char *pRef;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
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
  
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  (*(code *)(_app.m_pFullWindow)->__vtable->OutputCoordinatesChanged)
            ((int)&((_app.m_pFullWindow)->m_mWindow).field0_0x0 +
             (int)*(short *)&(_app.m_pFullWindow)->__vtable->InputCoordinatesChanged);
  _globals._436_4_ = 1;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
                    /* end of inlined section */
  (*(code *)pEVar1[4].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 4),&local_c0,1);
  if (this->m_MemCardMode != 0) {
    Select__8ERShaderP3ERCi(this->m_pMemcardBackground,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_bc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_c0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_ac = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_b0 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_a0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_9c = 0x3f800000;
    local_90 = 0x3f800000;
    local_8c = 0;
    local_80 = 0x3f800000;
    local_74 = 0x3f800000;
    local_7c = 0x3f800000;
    local_78 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_c0,&local_b0,
               &local_a0,&local_90,&local_80);
  }
  if (*(int *)&this->m_bWaitForButUp != 1) {
    if (*(int *)&this->m_bErrorSavingFile == 1) {
      *(undefined4 *)&this->m_bSaveSuccessful = 0;
      Select__8ERShaderP3ERCi(this->m_pMemcardBackground,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_bc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_c0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_ac = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_b0 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_a0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_9c = 0x3f800000;
      local_70 = 0x3f800000;
      local_6c = 0;
      local_60 = 0x3f800000;
      local_54 = 0x3f800000;
      local_5c = 0x3f800000;
      local_58 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_c0,
                 &local_b0,&local_a0,&local_70,&local_60);
      if (*(int *)&this->m_bLoadMsgMode == 1) {
        if (*(int *)&this->m_bLastMemCardModeWasConfig == 1) {
          pRef = "load_failed_config_line";
        }
        else {
          pRef = "load_failed_line";
        }
      }
      else {
        pRef = "save_failed_line";
      }
      Line1 = GetMemCardUIString__7EGlobalPCc(&_globals,pRef);
      DrawGenericMessage__12ESimsMemCardP3ERCPCUsN32
                (this,prc,Line1,(short *)0x0,(short *)0x0,(short *)0x0);
    }
    else if (*(int *)&this->m_bCheckingCard == 1) {
      CheckCardDraw__12ESimsMemCardP3ERC(this,prc);
    }
    else {
      switch(this->m_MemCardMode) {
      case 1:
        DrawMemCardCheckMode__12ESimsMemCardP3ERC(this,prc);
        break;
      case 2:
        DrawLoadNeighborhoodMode__12ESimsMemCardP3ERC(this,prc);
        break;
      case 3:
        DrawSaveNeighborhoodMode__12ESimsMemCardP3ERC(this,prc);
        break;
      case 4:
        DrawImportHouseMode__12ESimsMemCardP3ERC(this,prc);
        break;
      case 5:
        DrawSaveConfigMode__12ESimsMemCardP3ERC(this,prc);
        break;
      case 6:
        DrawLoadConfigMode__12ESimsMemCardP3ERC(this,prc);
      }
    }
  }
  return;
}

void ESimsMemCard::Reset() {
  OptionsRecon *pAddress;
  
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
  *(undefined4 *)&this->m_bOverride = 0;
  if (this->m_pMemCardMenuMgr != (ESimsMemCardMenuMgr *)0x0) {
    ___19ESimsMemCardMenuMgr(this->m_pMemCardMenuMgr,3);
    this->m_pMemCardMenuMgr = (ESimsMemCardMenuMgr *)0x0;
  }
  pAddress = this->m_pTempOR;
  if (pAddress == (OptionsRecon *)0x0) {
    *(undefined4 *)&this->m_bWaitOneFrameDraw = 0;
  }
  else {
    ___13UnlockedRecon(&pAddress->m_Unlocked,2);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(pAddress);
                    /* end of inlined section */
    this->m_pTempOR = (OptionsRecon *)0x0;
    *(undefined4 *)&this->m_bWaitOneFrameDraw = 0;
  }
  return;
}

void ESimsMemCard::SetMemCardCheckMode() {
  EGlobalManagerClient__vtable *pEVar1;
  
  *(undefined4 *)&this->m_bWaitForButUp = 1;
  *(undefined4 *)&this->m_bWaitOneFrame = 0;
  *(undefined4 *)&this->m_bErrorSavingFile = 0;
  *(undefined4 *)&this->m_bAlreadyCheckedForFile = 0;
  this->m_MemCardMode = 1;
  *(undefined4 *)&this->m_bOverride = 1;
  *(undefined4 *)&this->m_bLoadMsgMode = 0;
  *(undefined4 *)&this->m_bLastMemCardModeWasConfig = 0;
  *(undefined4 *)&this->m_bExitSymbolIsTriangle = 0;
  *(undefined4 *)&this->m_CanFormat = 0;
  *(undefined4 *)&this->m_bArtificialWait = 0;
  *(undefined4 *)&this->m_bCheckForOverwrite = 0;
  *(undefined4 *)&this->m_bOkToOverwrite = 0;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  return;
}

void ESimsMemCard::SetLoadNeighborhoodMode() {
  EGlobalManagerClient__vtable *pEVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  this->m_pNghPtr = (NghResFile__6_845 *)_5Globs_pNghResFile;
  this->m_MemCardMode = 2;
  *(undefined4 *)&this->m_bExitSymbolIsTriangle = 1;
  *(undefined4 *)&this->m_bWaitOneFrame = 0;
  *(undefined4 *)&this->m_bErrorSavingFile = 0;
  *(undefined4 *)&this->m_bAlreadyCheckedForFile = 0;
  *(undefined4 *)&this->m_bOverride = 1;
  *(undefined4 *)&this->m_bLoadMsgMode = 1;
  *(undefined4 *)&this->m_bLoadInittedMenu = 0;
  this->m_DrawLoadOneFrame = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)&this->m_bWaitForButUp = 1;
  *(undefined4 *)&this->m_bLastMemCardModeWasConfig = 0;
  this->m_LoadStoryAndNeighborhoodMode = 0;
  *(undefined4 *)&this->m_CanFormat = 0;
  *(undefined4 *)&this->m_bSkipCurrentNeighborhood = 0;
  *(undefined4 *)&this->m_bArtificialWait = 0;
  *(undefined4 *)&this->m_bCheckForOverwrite = 0;
  *(undefined4 *)&this->m_bOkToOverwrite = 0;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  return;
}

void ESimsMemCard::SetLoadStoryMode() {
  EGlobalManagerClient__vtable *pEVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  this->m_pNghPtr = (NghResFile__6_845 *)_5Globs_pNghResFile;
  this->m_MemCardMode = 2;
  *(undefined4 *)&this->m_bExitSymbolIsTriangle = 1;
  *(undefined4 *)&this->m_bWaitOneFrame = 0;
  *(undefined4 *)&this->m_bErrorSavingFile = 0;
  *(undefined4 *)&this->m_bAlreadyCheckedForFile = 0;
  *(undefined4 *)&this->m_bOverride = 1;
  *(undefined4 *)&this->m_bLoadMsgMode = 1;
  *(undefined4 *)&this->m_bLoadInittedMenu = 0;
  this->m_DrawLoadOneFrame = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)&this->m_bWaitForButUp = 1;
  *(undefined4 *)&this->m_bLastMemCardModeWasConfig = 0;
  this->m_LoadStoryAndNeighborhoodMode = 1;
  *(undefined4 *)&this->m_CanFormat = 0;
  *(undefined4 *)&this->m_bSkipCurrentNeighborhood = 0;
  *(undefined4 *)&this->m_bArtificialWait = 0;
  *(undefined4 *)&this->m_bCheckForOverwrite = 0;
  *(undefined4 *)&this->m_bOkToOverwrite = 0;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  return;
}

void ESimsMemCard::SetLoadNeighborhoodAndStoryMode() {
  EGlobalManagerClient__vtable *pEVar1;
  NghResFile__0_845 *pNVar2;
  
  pNVar2 = _5Globs_pNghResFile;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  this->m_LoadStoryAndNeighborhoodMode = 2;
  this->m_MemCardMode = 2;
  this->m_pNghPtr = (NghResFile__6_845 *)pNVar2;
  *(undefined4 *)&this->m_bExitSymbolIsTriangle = 1;
  *(undefined4 *)&this->m_bWaitOneFrame = 0;
  *(undefined4 *)&this->m_bErrorSavingFile = 0;
  *(undefined4 *)&this->m_bAlreadyCheckedForFile = 0;
  *(undefined4 *)&this->m_bOverride = 1;
  *(undefined4 *)&this->m_bLoadMsgMode = 1;
  *(undefined4 *)&this->m_bLoadInittedMenu = 0;
  this->m_DrawLoadOneFrame = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)&this->m_bWaitForButUp = 1;
  *(undefined4 *)&this->m_bLastMemCardModeWasConfig = 0;
  *(undefined4 *)&this->m_CanFormat = 0;
  *(undefined4 *)&this->m_bSkipCurrentNeighborhood = 0;
  *(undefined4 *)&this->m_bArtificialWait = 0;
  *(undefined4 *)&this->m_bCheckForOverwrite = 0;
  *(undefined4 *)&this->m_bOkToOverwrite = 0;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  return;
}

void ESimsMemCard::SetSaveNeighborhoodMode() {
  EGlobalManagerClient__vtable *pEVar1;
  
  *(undefined4 *)&this->m_bCheckForOverwrite = 1;
  this->m_MemCardMode = 3;
  *(undefined4 *)&this->m_bWaitOneFrame = 0;
  *(undefined4 *)&this->m_bErrorSavingFile = 0;
  *(undefined4 *)&this->m_bAlreadyCheckedForFile = 0;
  *(undefined4 *)&this->m_bOverride = 1;
  *(undefined4 *)&this->m_bProhibitDraw = 1;
  *(undefined4 *)&this->m_bLoadMsgMode = 0;
  *(undefined4 *)&this->m_bWaitForButUp = 1;
  *(undefined4 *)&this->m_bSaveSuccessful = 0;
  *(undefined4 *)&this->m_bLastMemCardModeWasConfig = 0;
  *(undefined4 *)&this->m_bExitSymbolIsTriangle = 1;
  *(undefined4 *)&this->m_CanFormat = 1;
  *(undefined4 *)&this->m_bArtificialWait = 0;
  *(undefined4 *)&this->m_bOkToOverwrite = 0;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  return;
}

void ESimsMemCard::SetSaveNeighborhoodAndConfigMode() {
  EGlobalManagerClient__vtable *pEVar1;
  
  *(undefined4 *)&this->m_CanFormat = 1;
  this->m_MemCardMode = 6;
  *(undefined4 *)&this->m_bWaitOneFrame = 0;
  *(undefined4 *)&this->m_bErrorSavingFile = 0;
  *(undefined4 *)&this->m_bAlreadyCheckedForFile = 0;
  *(undefined4 *)&this->m_bOverride = 1;
  *(undefined4 *)&this->m_bProhibitDraw = 1;
  *(undefined4 *)&this->m_bLoadMsgMode = 0;
  *(undefined4 *)&this->m_bWaitForButUp = 1;
  *(undefined4 *)&this->m_bSaveSuccessful = 0;
  *(undefined4 *)&this->m_bLastMemCardModeWasConfig = 0;
  *(undefined4 *)&this->m_bSpecialSaveSequence = 1;
  *(undefined4 *)&this->m_bExitSymbolIsTriangle = 1;
  *(undefined4 *)&this->m_bArtificialWait = 0;
  *(undefined4 *)&this->m_bCheckForOverwrite = 0;
  *(undefined4 *)&this->m_bOkToOverwrite = 0;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  return;
}

void ESimsMemCard::SetImportNeighborhoodMode(NghResFile *ptr, bool SkipCurrentNeighborhood) {
  EGlobalManagerClient__vtable *pEVar1;
  
  this->m_pNghPtr = (NghResFile__6_845 *)ptr;
  *(int *)&this->m_bSkipCurrentNeighborhood = (int)SkipCurrentNeighborhood;
  this->m_MemCardMode = 2;
  *(undefined4 *)&this->m_bExitSymbolIsTriangle = 1;
  *(undefined4 *)&this->m_bWaitOneFrame = 0;
  *(undefined4 *)&this->m_bErrorSavingFile = 0;
  *(undefined4 *)&this->m_bAlreadyCheckedForFile = 0;
  *(undefined4 *)&this->m_bOverride = 1;
  *(undefined4 *)&this->m_bLoadMsgMode = 1;
  *(undefined4 *)&this->m_bLoadInittedMenu = 0;
  this->m_DrawLoadOneFrame = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)&this->m_bWaitForButUp = 1;
  *(undefined4 *)&this->m_bLastMemCardModeWasConfig = 0;
  this->m_LoadStoryAndNeighborhoodMode = 0;
  *(undefined4 *)&this->m_CanFormat = 0;
  *(undefined4 *)&this->m_bArtificialWait = 0;
  *(undefined4 *)&this->m_bCheckForOverwrite = 0;
  *(undefined4 *)&this->m_bOkToOverwrite = 0;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  return;
}

void ESimsMemCard::SetSaveConfigMode() {
  EGlobalManagerClient__vtable *pEVar1;
  
  *(undefined4 *)&this->m_bOkToOverwrite = 1;
  this->m_MemCardMode = 5;
  *(undefined4 *)&this->m_bWaitOneFrame = 0;
  *(undefined4 *)&this->m_bErrorSavingFile = 0;
  *(undefined4 *)&this->m_bAlreadyCheckedForFile = 0;
  *(undefined4 *)&this->m_bOverride = 1;
  *(undefined4 *)&this->m_bProhibitDraw = 1;
  *(undefined4 *)&this->m_bLoadMsgMode = 0;
  *(undefined4 *)&this->m_bWaitForButUp = 1;
  *(undefined4 *)&this->m_bSaveSuccessful = 0;
  *(undefined4 *)&this->m_bLastMemCardModeWasConfig = 0;
  *(undefined4 *)&this->m_bExitSymbolIsTriangle = 1;
  *(undefined4 *)&this->m_CanFormat = 1;
  *(undefined4 *)&this->m_bArtificialWait = 0;
  *(undefined4 *)&this->m_bCheckForOverwrite = 0;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  return;
}

void ESimsMemCard::SetLoadConfigMode() {
  EGlobalManagerClient__vtable *pEVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  this->m_pNghPtr = (NghResFile__6_845 *)_5Globs_pNghResFile;
  *(undefined4 *)&this->m_bWaitOneFrameDraw = 1;
  this->m_MemCardMode = 6;
  *(undefined4 *)&this->m_bCheckForCurrentNghFile = 0;
  *(undefined4 *)&this->m_bErrorSavingFile = 0;
  *(undefined4 *)&this->m_bAlreadyCheckedForFile = 0;
  *(undefined4 *)&this->m_bOverride = 1;
  *(undefined4 *)&this->m_bLoadMsgMode = 1;
  *(undefined4 *)&this->m_bLoadInittedMenu = 0;
  this->m_DrawLoadOneFrame = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)&this->m_bWaitForButUp = 1;
  *(undefined4 *)&this->m_bLastMemCardModeWasConfig = 1;
  *(undefined4 *)&this->m_bExitSymbolIsTriangle = 0;
  *(undefined4 *)&this->m_CanFormat = 0;
  *(undefined4 *)&this->m_bArtificialWait = 0;
  *(undefined4 *)&this->m_bCheckForOverwrite = 0;
  *(undefined4 *)&this->m_bOkToOverwrite = 0;
  *(undefined4 *)&this->m_bWaitOneFrame = 0;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  return;
}

void ESimsMemCard::SaveNeighborhoodFileDirect() {
	char *NeighborhoodName;
	
  SetSaveNeighborhoodMode__12ESimsMemCard(this);
  *(undefined4 *)&this->m_bOverride = 1;
  this->m_pNeighborhoodName = "Testing";
  this->m_MemCardMode = 3;
  return;
}

void ESimsMemCard::LoadNeighborhoodFileDirect(char *NeighborhoodName) {
  SetLoadNeighborhoodMode__12ESimsMemCard(this);
  this->m_pNeighborhoodName = NeighborhoodName;
  *(undefined4 *)&this->m_bOverride = 1;
  this->m_MemCardMode = 2;
  return;
}

void ESimsMemCard::UpdateMemCardCheckMode() {
  int iVar1;
  
  *(undefined4 *)&this->m_bCheckForCurrentNghFile = 0;
  iVar1 = CheckCardUpdate__12ESimsMemCardb(this,false);
  if (iVar1 != 0) {
    *(undefined4 *)&this->m_bOverride = 0;
    this->m_MemCardMode = 0;
  }
  return;
}

void ESimsMemCard::UpdateLoadNeighborhoodMode() {
	int retval;
	
  EUIVirtualCtrl__vtable *pEVar1;
  bool bVar2;
  int iVar3;
  short *Title;
  long lVar4;
  ESimsMemCardMenuMgr *this_00;
  undefined8 uVar5;
  
  iVar3 = CheckCardUpdate__12ESimsMemCardb(this,true);
  if (iVar3 == -1) {
    iVar3 = CheckCardUpdate__12ESimsMemCardb(this,false);
  }
  if (iVar3 == 0) {
    *(undefined4 *)&this->m_bLoadInittedMenu = 0;
    return;
  }
  if (iVar3 == -1) {
    this->m_MemCardMode = 0;
    *(undefined4 *)&this->m_bOverride = 0;
    this_00 = this->m_pMemCardMenuMgr;
  }
  else {
    if (1 < this->m_DrawLoadOneFrame) {
      uVar5 = 0x40;
      if (*(int *)&this->m_bExitSymbolIsTriangle != 0) {
        uVar5 = 0x10;
      }
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar4 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,0,
                         uVar5);
      if (lVar4 != 0) {
        return;
      }
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      uVar5 = 0x40;
      if (*(int *)&this->m_bExitSymbolIsTriangle != 0) {
        uVar5 = 0x10;
      }
      lVar4 = (**(code **)(pEVar1 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1->GetBut + -4,1,
                         uVar5);
      if (lVar4 != 0) {
        return;
      }
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
      iVar3 = ReadFromMemoryCard__10NghResFilePCc
                        ((NghResFile__0_845 *)this->m_pNghPtr,
                         (this->m_pMemCardMenuMgr->m_LoadFileName).m_p);
      if (iVar3 == 0) {
        *(undefined4 *)this = 1;
      }
      else {
        *(undefined4 *)&this->m_bErrorSavingFile = 1;
      }
      *(undefined4 *)&this->m_bSaveLoadActive = 0;
      Reset__19ESimsMemCardMenuMgr(this->m_pMemCardMenuMgr);
      this->m_MemCardMode = 0;
      return;
    }
    if (*(int *)&this->m_bLoadInittedMenu == 0) {
      if (this->m_LoadStoryAndNeighborhoodMode == 1) {
        Title = GetMemCardUIString__7EGlobalPCc(&_globals,"select_a_life");
        Init__19ESimsMemCardMenuMgrPCUsib
                  (this->m_pMemCardMenuMgr,Title,this->m_LoadStoryAndNeighborhoodMode,
                   SUB41(*(undefined4 *)&this->m_bSkipCurrentNeighborhood,0));
      }
      else {
        Init__19ESimsMemCardMenuMgrPCUsib
                  (this->m_pMemCardMenuMgr,(short *)0x0,this->m_LoadStoryAndNeighborhoodMode,
                   SUB41(*(undefined4 *)&this->m_bSkipCurrentNeighborhood,0));
      }
      *(undefined4 *)&this->m_bLoadInittedMenu = 1;
      iVar3 = *(int *)&this->m_bLoadInittedMenu;
    }
    else {
      iVar3 = *(int *)&this->m_bLoadInittedMenu;
    }
    if (iVar3 != 1) {
      return;
    }
    bVar2 = Update__19ESimsMemCardMenuMgr(this->m_pMemCardMenuMgr);
    if (!bVar2) {
      return;
    }
    this_00 = this->m_pMemCardMenuMgr;
    if (*(int *)&this_00->m_bExitLoad == 0) {
      this->m_DrawLoadOneFrame = 1;
      return;
    }
    this->m_MemCardMode = 0;
    *(undefined4 *)&this->m_bOverride = 0;
  }
  Reset__19ESimsMemCardMenuMgr(this_00);
  *(undefined4 *)&this->m_bLoadInittedMenu = 0;
  return;
}

void ESimsMemCard::UpdateSaveNeighborhoodMode() {
	int retval;
	char FName[64];
	char FName2[64];
	char Buffer[128];
	
  OptionsRecon *pAddress;
  int iVar1;
  short *pSource;
  long lVar2;
  char *pcVar3;
  char FName [64];
  char FName2 [64];
  char Buffer [128];
  
  *(undefined4 *)&this->m_bCheckForCurrentNghFile = 1;
  iVar1 = CheckCardUpdate__12ESimsMemCardb(this,true);
  if (iVar1 == -1) {
    iVar1 = CheckCardUpdate__12ESimsMemCardb(this,false);
  }
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      *(undefined4 *)&this->m_bSaveLoadActive = 0;
      this->m_MemCardMode = 0;
      if (*(int *)&this->m_bSpecialSaveSequence == 1) {
        pAddress = this->m_pTempOR;
        if (pAddress != (OptionsRecon *)0x0) {
          ___13UnlockedRecon(&pAddress->m_Unlocked,2);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
          _memmanFree__FPv(pAddress);
        }
                    /* end of inlined section */
        this->m_pTempOR = (OptionsRecon *)0x0;
      }
    }
    else if (*(int *)&this->m_bWaitOneFrame == 1) {
      *(undefined4 *)&this->m_bWaitOneFrame = 0;
    }
    else {
      *(undefined4 *)&this->m_bProhibitDraw = 0;
      if (*(int *)&this->m_bSaveLoadActive == 1) {
        GetCompressedNeighborhoodName__12ESimsMemCardPc(this,FName);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        FName2[0] = 'N';
        if (*(short *)(iVar1 + 0x2e6) == 1) {
          FName2[0] = 'S';
        }
        FName2[1] = '\0';
        strcat(FName2,FName);
        strcpy(FName,"/");
        if (_iVideoMode == 1) {
          pcVar3 = "BASLES-51257";
        }
        else {
          pcVar3 = "BASLUS-20573";
        }
        strcat(FName,pcVar3);
        strcat(FName,FName2);
        strcat(FName,"/");
        if (_iVideoMode == 1) {
          pcVar3 = "BASLES-51257";
        }
        else {
          pcVar3 = "BASLUS-20573";
        }
        strcat(FName,pcVar3);
        strcat(FName,FName2);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        pSource = c_str__C13StringBuffer2((StringBuffer2 *)(iVar1 + 0x110));
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        iVar1 = length__C13StringBuffer2((StringBuffer2 *)(iVar1 + 0x110));
        memcpy(Buffer,pSource,(iVar1 + 1) * 2);
        iVar1 = WriteToMemoryCard__10NghResFilePCc(_5Globs_pNghResFile,FName2);
        if (iVar1 == 0) {
          *(undefined4 *)&this->m_bSaveSuccessful = 1;
        }
        else {
          *(undefined4 *)&this->m_bErrorSavingFile = 1;
        }
        lVar2 = (*(code *)_pMemoryCard->__vtable->DeleteDataA)
                          ((int)&_pMemoryCard->__vtable +
                           (int)*(short *)&_pMemoryCard->__vtable->SaveDataA,FName,0,0x80,Buffer);
        if (lVar2 != 1) {
          *(undefined4 *)&this->m_bSaveSuccessful = 0;
        }
        *(undefined4 *)&this->m_bSaveLoadActive = 0;
        if ((*(int *)&this->m_bSpecialSaveSequence == 1) && (*(int *)&this->m_bSaveSuccessful != 0))
        {
          this->m_MemCardMode = 8;
        }
        else {
          this->m_MemCardMode = 0;
        }
      }
    }
  }
  return;
}

void ESimsMemCard::UpdateSaveConfigMode() {
	int retval;
	short unsigned int finalstring[33];
	HandleNode *handle;
	HandleNode *mem;
	HandleNode *mem;
	HandleNode *mem;
	HandleNode *h;
	HandleNode *mem;
	
  int iVar1;
  short *pInput;
  HandleNode *pAddress;
  long lVar2;
  OptionsRecon *pOVar3;
  uint nBytes;
  short finalstring [33];
  
  iVar1 = CheckCardUpdate__12ESimsMemCardb(this,true);
  if (iVar1 == -1) {
    iVar1 = CheckCardUpdate__12ESimsMemCardb(this,false);
  }
  if (iVar1 != 0) {
    if (iVar1 == -1) {
      *(undefined4 *)&this->m_bSaveLoadActive = 0;
      this->m_MemCardMode = 0;
      if (*(int *)&this->m_bSpecialSaveSequence == 1) {
        pOVar3 = this->m_pTempOR;
        if (pOVar3 == (OptionsRecon *)0x0) {
          this->m_pTempOR = (OptionsRecon *)0x0;
        }
        else {
          ___13UnlockedRecon(&pOVar3->m_Unlocked,2);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
          _memmanFree__FPv(pOVar3);
                    /* end of inlined section */
          this->m_pTempOR = (OptionsRecon *)0x0;
        }
      }
    }
    else {
      *(undefined4 *)&this->m_bProhibitDraw = 0;
      if (*(int *)&this->m_bSaveLoadActive == 1) {
                    /* end of inlined section */
        pInput = GetMemCardUIString__7EGlobalPCc(_5Globs_pEORGlobals,"ps2_browser_config_text");
        ConvertUnicodeToShiftJIS__7EGlobalPCUsPUsUi(_5Globs_pEORGlobals,pInput,finalstring,0x42);
        SetBrowserText__11EPS2MemCard12EMC_SaveTypePUsUi(&_ps2memcard,EMC_TYPE_1,finalstring,0x10);
        memset(CB.Buffer,0,0x1ffc);
        if ((*(int *)&this->m_bSpecialSaveSequence != 1) ||
           (pOVar3 = this->m_pTempOR, this->m_pTempOR == (OptionsRecon *)0x0)) {
          pOVar3 = _globals.m_pOptionsRecon;
        }
        pAddress = ReconSaveObject__H1Z12OptionsRecon_PX01ii_PQ26Memory10HandleNode(pOVar3,0,2);
                    /* inlined from ../MSrc/MHandle.h */
        nBytes = 0;
        if (pAddress != (HandleNode *)0x0) {
          nBytes = pAddress->allocSize;
        }
                    /* end of inlined section */
        memcpy(CB.Buffer,pAddress->ptr,nBytes);
                    /* inlined from ../MSrc/MHandle.h */
        if (pAddress != (HandleNode *)0x0) {
          if (*(int *)&pAddress->owned != 0) {
            free(pAddress->ptr);
          }
          free(pAddress);
                    /* end of inlined section */
        }
        CB.Checksum = Compute__9EChecksumPCvi(CB.Buffer,0x1ffc);
        CB.Version = getCurrentbuildVerNum__Fiiii(1,0xb,10,0x12d);
        lVar2 = (*(code *)_pMemoryCard->__vtable->DeleteDataA)
                          ((int)&_pMemoryCard->__vtable +
                           (int)*(short *)&_pMemoryCard->__vtable->SaveDataA,0x3b4b98,0,0x2004,
                           0x3d0b40);
        if (lVar2 == 1) {
          *(undefined4 *)&this->m_bSaveSuccessful = 1;
          *(undefined4 *)&this->m_bErrorSavingFile = 0;
        }
        else {
          *(undefined4 *)&this->m_bErrorSavingFile = 1;
        }
        *(undefined4 *)&this->m_bSaveLoadActive = 0;
        if (*(int *)&this->m_bSpecialSaveSequence == 1) {
          pOVar3 = this->m_pTempOR;
          *(undefined4 *)&this->m_bSpecialSaveSequence = 0;
          if (pOVar3 != (OptionsRecon *)0x0) {
            ___13UnlockedRecon(&pOVar3->m_Unlocked,2);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
            _memmanFree__FPv(pOVar3);
          }
                    /* end of inlined section */
          this->m_pTempOR = (OptionsRecon *)0x0;
        }
        this->m_MemCardMode = 0;
      }
    }
  }
  return;
}

void ESimsMemCard::UpdateLoadConfigMode() {
	int retval;
	bool Exists;
	EMC_OpStatus result;
	HandleNode handle;
	SInt32 version;
	
  int iVar1;
  uint uVar2;
  OptionsRecon *pOVar3;
  long lVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar5;
  HandleNode handle;
  bool Exists;
  int version;
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
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  if (*(int *)&this->m_bArtificialWait == 1) {
    fVar5 = this->m_ArtificialWaitTime - _dt;
    this->m_ArtificialWaitTime = fVar5;
    if (0.0 <= fVar5) {
      return;
    }
    *(undefined4 *)&this->m_bWaitOneFrameDraw = 0;
    *(undefined4 *)&this->m_bArtificialWait = 0;
    goto LAB_001d6a3c;
  }
  iVar1 = CheckCardUpdate__12ESimsMemCardb(this,true);
  if (iVar1 == -1) {
    iVar1 = CheckCardUpdate__12ESimsMemCardb(this,false);
  }
  if (iVar1 == 0) {
    *(undefined4 *)&this->m_bLoadInittedMenu = 0;
    return;
  }
  if (iVar1 == -1) {
    this->m_MemCardMode = 0;
    *(undefined4 *)&this->m_bWaitOneFrameDraw = 0;
    *(undefined4 *)&this->m_bOverride = 0;
    if (*(int *)&this->m_bSpecialSaveSequence != 1) {
      return;
    }
    pOVar3 = this->m_pTempOR;
    if (pOVar3 != (OptionsRecon *)0x0) {
      ___13UnlockedRecon(&pOVar3->m_Unlocked,2);
                    /* inlined from /eor/src2/common/e_standard_heap.h */
      _memmanFree__FPv(pOVar3);
    }
                    /* end of inlined section */
    this->m_pTempOR = (OptionsRecon *)0x0;
    return;
  }
  *(undefined4 *)&this->m_bWaitOneFrameDraw = 1;
  if (*(int *)&this->m_bSaveLoadActive != 1) {
    return;
  }
  memset(CB.Buffer,0,0x1ffc);
  _Exists = 0;
  lVar4 = (*(code *)_pMemoryCard->__vtable[1].DoesFileExist)
                    ((int)&_pMemoryCard->__vtable +
                     (int)*(short *)&_pMemoryCard->__vtable[1].SetGameCode,0x3b4b98,0,1,&Exists);
  if (lVar4 != 1) {
    return;
  }
  if (_Exists == 1) {
    lVar4 = (*(code *)_pMemoryCard->__vtable->LoadDataA)
                      ((int)&_pMemoryCard->__vtable +
                       (int)*(short *)&_pMemoryCard->__vtable->UnFormatCardS,0x3b4b98,0,0x2004,
                       0x3d0b40);
    if (lVar4 == 1) {
      uVar2 = Compute__9EChecksumPCvi(CB.Buffer,0x1ffc);
      if ((CB.Checksum == uVar2) &&
         (uVar2 = getCurrentbuildVerNum__Fiiii(1,0xb,10,0x12d), CB.Version == uVar2)) {
        handle.ptr = CB.Buffer;
        handle.allocSize = 0x2004;
        handle._8_4_ = 0;
        if (*(int *)&this->m_bSpecialSaveSequence == 1) {
          pOVar3 = (OptionsRecon *)__builtin_new(0xd74);
          pOVar3 = __12OptionsRecon(pOVar3);
          this->m_pTempOR = pOVar3;
          ReconLoadObject__H1Z12OptionsRecon_PX01PQ26Memory10HandleNodeiPi_v
                    (pOVar3,&handle,0,&version);
        }
        else {
          ReconLoadObject__H1Z12OptionsRecon_PX01PQ26Memory10HandleNodeiPi_v
                    (_globals.m_pOptionsRecon,&handle,0,&version);
        }
        *(undefined4 *)this = 1;
      }
      else {
        *(undefined4 *)&this->m_bErrorSavingFile = 1;
        *(undefined4 *)&this->m_bWaitForButUp = 1;
      }
      iVar1 = *(int *)&this->m_bSpecialSaveSequence;
      if (*(int *)&this->m_bErrorSavingFile != 1) goto LAB_001d69f8;
      if (iVar1 == 1) {
        *(undefined4 *)&this->m_bErrorSavingFile = 0;
      }
    }
    else {
      *(undefined4 *)&this->m_bErrorSavingFile = 1;
      *(undefined4 *)&this->m_bWaitForButUp = 1;
    }
    iVar1 = *(int *)&this->m_bSpecialSaveSequence;
  }
  else {
    iVar1 = *(int *)&this->m_bSpecialSaveSequence;
  }
LAB_001d69f8:
  *(undefined4 *)&this->m_bSaveLoadActive = 0;
  if (iVar1 == 1) {
    this->m_MemCardMode = 7;
    return;
  }
  if (*(int *)&this->m_bErrorSavingFile == 0) {
    if (*(int *)this == 1) {
      *(undefined4 *)&this->m_bArtificialWait = 1;
      this->m_ArtificialWaitTime = 2.0;
      return;
    }
    *(undefined4 *)&this->m_bWaitOneFrameDraw = 0;
  }
  else {
    *(undefined4 *)&this->m_bWaitOneFrameDraw = 0;
  }
LAB_001d6a3c:
  this->m_MemCardMode = 0;
  return;
}

void ESimsMemCard::UpdateSpecialSaveStage1() {
  SetSaveNeighborhoodMode__12ESimsMemCard(this);
  return;
}

void ESimsMemCard::UpdateSpecialSaveStage2() {
	bool bFound;
	UnlockedId LockId;
	int nGlobalSize;
	int nCardSize;
	int nGlobal;
	int nCard;
	int nHouse;
	int nScore;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	unsigned int n;
	unsigned int n;
	unsigned int n;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	
  UnlockedId *pUVar1;
  bool bVar2;
  UnlockedId *pUVar3;
  short *psVar4;
  int iVar5;
  OptionsRecon *pOVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  UnlockedId LockId;
  
  if (this->m_pTempOR != (OptionsRecon *)0x0) {
    iVar7 = 0;
    *(undefined4 *)this->m_pTempOR = *(undefined4 *)_globals.m_pOptionsRecon;
    *(undefined4 *)&this->m_pTempOR->m_bRumble =
         *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bRumble;
    *(undefined4 *)&this->m_pTempOR->m_bAutoCenter =
         *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bAutoCenter;
    this->m_pTempOR->m_nMusicVolume = (_globals.m_pOptionsRecon)->m_nMusicVolume;
    this->m_pTempOR->m_nScreenAdjustX = (_globals.m_pOptionsRecon)->m_nScreenAdjustX;
    this->m_pTempOR->m_nScreenAdjustY = (_globals.m_pOptionsRecon)->m_nScreenAdjustY;
    this->m_pTempOR->m_nSFXVolume = (_globals.m_pOptionsRecon)->m_nSFXVolume;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).objects.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).objects.start;
                    /* end of inlined section */
    iVar8 = (int)(this->m_pTempOR->m_Unlocked).objects.finish -
            (int)(this->m_pTempOR->m_Unlocked).objects.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).objects.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).objects.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).objects.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).objects.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).objects.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).objects,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).objects.finish = (pOVar6->m_Unlocked).objects.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).gameModes.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).gameModes.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).gameModes.finish - (int)(pOVar6->m_Unlocked).gameModes.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).gameModes.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).gameModes.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).gameModes.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).gameModes.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).gameModes.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).gameModes,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).gameModes.finish = (pOVar6->m_Unlocked).gameModes.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).challengeLevels.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).challengeLevels.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).challengeLevels.finish -
            (int)(pOVar6->m_Unlocked).challengeLevels.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).challengeLevels.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).challengeLevels.start[iVar7].id ==
                pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).challengeLevels.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).challengeLevels.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).challengeLevels.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).challengeLevels,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).challengeLevels.finish =
                 (pOVar6->m_Unlocked).challengeLevels.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).careers.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).careers.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).careers.finish - (int)(pOVar6->m_Unlocked).careers.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).careers.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).careers.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).careers.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).careers.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).careers.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).careers,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).careers.finish = (pOVar6->m_Unlocked).careers.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_hair.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_hair.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).ma_hair.finish - (int)(pOVar6->m_Unlocked).ma_hair.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).ma_hair.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).ma_hair.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).ma_hair.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).ma_hair.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).ma_hair.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).ma_hair,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).ma_hair.finish = (pOVar6->m_Unlocked).ma_hair.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_makeup.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_makeup.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).ma_makeup.finish - (int)(pOVar6->m_Unlocked).ma_makeup.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).ma_makeup.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).ma_makeup.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).ma_makeup.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).ma_makeup.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).ma_makeup.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).ma_makeup,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).ma_makeup.finish = (pOVar6->m_Unlocked).ma_makeup.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_accessories.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_accessories.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).ma_accessories.finish -
            (int)(pOVar6->m_Unlocked).ma_accessories.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).ma_accessories.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).ma_accessories.start[iVar7].id ==
                pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).ma_accessories.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).ma_accessories.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).ma_accessories.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).ma_accessories,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).ma_accessories.finish =
                 (pOVar6->m_Unlocked).ma_accessories.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_face.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_face.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).ma_face.finish - (int)(pOVar6->m_Unlocked).ma_face.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).ma_face.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).ma_face.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).ma_face.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).ma_face.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).ma_face.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).ma_face,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).ma_face.finish = (pOVar6->m_Unlocked).ma_face.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_upperBody.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_upperBody.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).ma_upperBody.finish -
            (int)(pOVar6->m_Unlocked).ma_upperBody.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).ma_upperBody.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).ma_upperBody.start[iVar7].id == pUVar3->id)
            {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).ma_upperBody.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).ma_upperBody.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).ma_upperBody.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).ma_upperBody,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).ma_upperBody.finish = (pOVar6->m_Unlocked).ma_upperBody.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_lowerBody.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_lowerBody.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).ma_lowerBody.finish -
            (int)(pOVar6->m_Unlocked).ma_lowerBody.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).ma_lowerBody.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).ma_lowerBody.start[iVar7].id == pUVar3->id)
            {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).ma_lowerBody.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).ma_lowerBody.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).ma_lowerBody.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).ma_lowerBody,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).ma_lowerBody.finish = (pOVar6->m_Unlocked).ma_lowerBody.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_shoes.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).ma_shoes.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).ma_shoes.finish - (int)(pOVar6->m_Unlocked).ma_shoes.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).ma_shoes.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).ma_shoes.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).ma_shoes.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).ma_shoes.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).ma_shoes.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).ma_shoes,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).ma_shoes.finish = (pOVar6->m_Unlocked).ma_shoes.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_hair.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_hair.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).mc_hair.finish - (int)(pOVar6->m_Unlocked).mc_hair.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).mc_hair.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).mc_hair.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).mc_hair.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).mc_hair.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).mc_hair.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).mc_hair,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).mc_hair.finish = (pOVar6->m_Unlocked).mc_hair.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_makeup.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_makeup.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).mc_makeup.finish - (int)(pOVar6->m_Unlocked).mc_makeup.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).mc_makeup.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).mc_makeup.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).mc_makeup.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).mc_makeup.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).mc_makeup.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).mc_makeup,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).mc_makeup.finish = (pOVar6->m_Unlocked).mc_makeup.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_accessories.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_accessories.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).mc_accessories.finish -
            (int)(pOVar6->m_Unlocked).mc_accessories.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).mc_accessories.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).mc_accessories.start[iVar7].id ==
                pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).mc_accessories.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).mc_accessories.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).mc_accessories.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).mc_accessories,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).mc_accessories.finish =
                 (pOVar6->m_Unlocked).mc_accessories.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_face.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_face.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).mc_face.finish - (int)(pOVar6->m_Unlocked).mc_face.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).mc_face.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).mc_face.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).mc_face.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).mc_face.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).mc_face.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).mc_face,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).mc_face.finish = (pOVar6->m_Unlocked).mc_face.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_upperBody.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_upperBody.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).mc_upperBody.finish -
            (int)(pOVar6->m_Unlocked).mc_upperBody.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).mc_upperBody.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).mc_upperBody.start[iVar7].id == pUVar3->id)
            {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).mc_upperBody.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).mc_upperBody.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).mc_upperBody.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).mc_upperBody,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).mc_upperBody.finish = (pOVar6->m_Unlocked).mc_upperBody.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_lowerBody.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_lowerBody.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).mc_lowerBody.finish -
            (int)(pOVar6->m_Unlocked).mc_lowerBody.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).mc_lowerBody.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).mc_lowerBody.start[iVar7].id == pUVar3->id)
            {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).mc_lowerBody.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).mc_lowerBody.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).mc_lowerBody.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).mc_lowerBody,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).mc_lowerBody.finish = (pOVar6->m_Unlocked).mc_lowerBody.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_shoes.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).mc_shoes.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).mc_shoes.finish - (int)(pOVar6->m_Unlocked).mc_shoes.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).mc_shoes.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).mc_shoes.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).mc_shoes.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).mc_shoes.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).mc_shoes.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).mc_shoes,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).mc_shoes.finish = (pOVar6->m_Unlocked).mc_shoes.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_hair.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_hair.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).fa_hair.finish - (int)(pOVar6->m_Unlocked).fa_hair.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fa_hair.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fa_hair.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fa_hair.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fa_hair.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fa_hair.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fa_hair,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fa_hair.finish = (pOVar6->m_Unlocked).fa_hair.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_makeup.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_makeup.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).fa_makeup.finish - (int)(pOVar6->m_Unlocked).fa_makeup.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fa_makeup.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fa_makeup.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fa_makeup.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fa_makeup.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fa_makeup.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fa_makeup,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fa_makeup.finish = (pOVar6->m_Unlocked).fa_makeup.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_accessories.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_accessories.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).fa_accessories.finish -
            (int)(pOVar6->m_Unlocked).fa_accessories.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fa_accessories.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fa_accessories.start[iVar7].id ==
                pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fa_accessories.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fa_accessories.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fa_accessories.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fa_accessories,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fa_accessories.finish =
                 (pOVar6->m_Unlocked).fa_accessories.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_face.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_face.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).fa_face.finish - (int)(pOVar6->m_Unlocked).fa_face.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fa_face.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fa_face.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fa_face.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fa_face.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fa_face.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fa_face,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fa_face.finish = (pOVar6->m_Unlocked).fa_face.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_upperBody.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_upperBody.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).fa_upperBody.finish -
            (int)(pOVar6->m_Unlocked).fa_upperBody.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fa_upperBody.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fa_upperBody.start[iVar7].id == pUVar3->id)
            {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fa_upperBody.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fa_upperBody.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fa_upperBody.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fa_upperBody,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fa_upperBody.finish = (pOVar6->m_Unlocked).fa_upperBody.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_lowerBody.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_lowerBody.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).fa_lowerBody.finish -
            (int)(pOVar6->m_Unlocked).fa_lowerBody.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fa_lowerBody.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fa_lowerBody.start[iVar7].id == pUVar3->id)
            {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fa_lowerBody.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fa_lowerBody.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fa_lowerBody.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fa_lowerBody,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fa_lowerBody.finish = (pOVar6->m_Unlocked).fa_lowerBody.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_shoes.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fa_shoes.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).fa_shoes.finish - (int)(pOVar6->m_Unlocked).fa_shoes.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fa_shoes.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fa_shoes.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fa_shoes.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fa_shoes.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fa_shoes.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fa_shoes,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fa_shoes.finish = (pOVar6->m_Unlocked).fa_shoes.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_hair.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_hair.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).fc_hair.finish - (int)(pOVar6->m_Unlocked).fc_hair.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fc_hair.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fc_hair.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fc_hair.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fc_hair.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fc_hair.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fc_hair,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fc_hair.finish = (pOVar6->m_Unlocked).fc_hair.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_makeup.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_makeup.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).fc_makeup.finish - (int)(pOVar6->m_Unlocked).fc_makeup.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fc_makeup.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fc_makeup.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fc_makeup.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fc_makeup.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fc_makeup.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fc_makeup,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fc_makeup.finish = (pOVar6->m_Unlocked).fc_makeup.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_accessories.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_accessories.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).fc_accessories.finish -
            (int)(pOVar6->m_Unlocked).fc_accessories.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fc_accessories.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fc_accessories.start[iVar7].id ==
                pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fc_accessories.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fc_accessories.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fc_accessories.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fc_accessories,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fc_accessories.finish =
                 (pOVar6->m_Unlocked).fc_accessories.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_face.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_face.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).fc_face.finish - (int)(pOVar6->m_Unlocked).fc_face.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fc_face.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fc_face.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fc_face.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fc_face.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fc_face.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fc_face,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fc_face.finish = (pOVar6->m_Unlocked).fc_face.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
    pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_upperBody.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_upperBody.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).fc_upperBody.finish -
            (int)(pOVar6->m_Unlocked).fc_upperBody.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fc_upperBody.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fc_upperBody.start[iVar7].id == pUVar3->id)
            {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fc_upperBody.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fc_upperBody.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fc_upperBody.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fc_upperBody,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fc_upperBody.finish = (pOVar6->m_Unlocked).fc_upperBody.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
                    /* inlined from ../MSrc/vector.h */
      pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
    }
    iVar7 = 0;
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_lowerBody.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_lowerBody.start;
                    /* end of inlined section */
    iVar8 = (int)(pOVar6->m_Unlocked).fc_lowerBody.finish -
            (int)(pOVar6->m_Unlocked).fc_lowerBody.start;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fc_lowerBody.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fc_lowerBody.start[iVar7].id == pUVar3->id)
            {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fc_lowerBody.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fc_lowerBody.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fc_lowerBody.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fc_lowerBody,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fc_lowerBody.finish = (pOVar6->m_Unlocked).fc_lowerBody.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
                    /* inlined from ../MSrc/vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/vector.h */
    iVar10 = (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_shoes.finish -
             (int)((_globals.m_pOptionsRecon)->m_Unlocked).fc_shoes.start;
                    /* end of inlined section */
    iVar8 = (int)(this->m_pTempOR->m_Unlocked).fc_shoes.finish -
            (int)(this->m_pTempOR->m_Unlocked).fc_shoes.start;
    iVar7 = 0;
    if (0 < iVar10) {
      do {
        iVar5 = 0;
        bVar2 = false;
        iVar9 = iVar7 + 1;
        if (0 < iVar8) {
          pUVar1 = (this->m_pTempOR->m_Unlocked).fc_shoes.start;
                    /* inlined from ../MSrc/vector.h */
          pUVar3 = pUVar1;
          do {
            iVar5 = iVar5 + 1;
            if (((_globals.m_pOptionsRecon)->m_Unlocked).fc_shoes.start[iVar7].id == pUVar3->id) {
              bVar2 = true;
            }
          } while ((iVar5 < iVar8) && (pUVar3 = pUVar1 + iVar5, !bVar2));
        }
        if (!bVar2) {
                    /* inlined from ../MSrc/vector.h */
          pOVar6 = this->m_pTempOR;
                    /* end of inlined section */
          LockId.id = ((_globals.m_pOptionsRecon)->m_Unlocked).fc_shoes.start[iVar7].id;
                    /* inlined from ../MSrc/vector.h */
          pUVar1 = (pOVar6->m_Unlocked).fc_shoes.finish;
          if (pUVar1 == (pOVar6->m_Unlocked).fc_shoes.end_of_storage) {
            insert_aux__t6vector2Z10UnlockedIdZt23__malloc_alloc_template1i0P10UnlockedIdRC10UnlockedId
                      (&(pOVar6->m_Unlocked).fc_shoes,pUVar1,&LockId);
          }
          else {
            pUVar1->id = LockId.id;
            (pOVar6->m_Unlocked).fc_shoes.finish = (pOVar6->m_Unlocked).fc_shoes.finish + 1;
          }
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar10);
    }
    iVar8 = 0;
    iVar7 = 0;
    do {
      iVar8 = iVar8 + 1;
      iVar10 = 0;
      do {
        iVar5 = iVar10 + 1;
        *(undefined4 *)
         ((int)(&this->m_pTempOR->m_HighScores[iVar10].m_sbPlayerInitials + 1) + iVar7) =
             *(undefined4 *)
              ((int)(&(_globals.m_pOptionsRecon)->m_HighScores[iVar10].m_sbPlayerInitials + 1) +
              iVar7);
        *(undefined4 *)
         ((int)(&this->m_pTempOR->m_HighScores[iVar10].m_sbPlayerInitials + 1) + iVar7 + 4) =
             *(undefined4 *)
              ((int)(&(_globals.m_pOptionsRecon)->m_HighScores[iVar10].m_sbPlayerInitials + 1) +
              iVar7 + 4);
        *(undefined4 *)
         ((int)(&this->m_pTempOR->m_HighScores[iVar10].m_sbPlayerInitials + 1) + iVar7 + 8) =
             *(undefined4 *)
              ((int)(&(_globals.m_pOptionsRecon)->m_HighScores[iVar10].m_sbPlayerInitials + 1) +
              iVar7 + 8);
        *(undefined4 *)
         ((int)(&this->m_pTempOR->m_HighScores[iVar10].m_sbPlayerInitials + 1) + iVar7 + 0xc) =
             *(undefined4 *)
              ((int)(&(_globals.m_pOptionsRecon)->m_HighScores[iVar10].m_sbPlayerInitials + 1) +
              iVar7 + 0xc);
        *(undefined4 *)
         ((int)(&this->m_pTempOR->m_HighScores[iVar10].m_sbPlayerInitials + 2) + iVar7) =
             *(undefined4 *)
              ((int)(&(_globals.m_pOptionsRecon)->m_HighScores[iVar10].m_sbPlayerInitials + 2) +
              iVar7);
        erase__13StringBuffer2
                  ((StringBuffer2 *)
                   ((int)this->m_pTempOR->m_HighScores[iVar10].m_sbSimName.fChars + iVar7 + -8));
        pOVar6 = this->m_pTempOR;
        psVar4 = c_str__C13StringBuffer2
                           ((StringBuffer2 *)
                            ((int)(_globals.m_pOptionsRecon)->m_HighScores[iVar10].m_sbSimName.
                                  fChars + iVar7 + -8));
        append__13StringBuffer2PCUsi
                  ((StringBuffer2 *)
                   ((int)pOVar6->m_HighScores[iVar10].m_sbSimName.fChars + iVar7 + -8),psVar4,-1);
        erase__13StringBuffer2
                  ((StringBuffer2 *)
                   ((int)this->m_pTempOR->m_HighScores[iVar10].m_sbPlayerInitials.fChars +
                   iVar7 + -8));
        pOVar6 = this->m_pTempOR;
        psVar4 = c_str__C13StringBuffer2
                           ((StringBuffer2 *)
                            ((int)(_globals.m_pOptionsRecon)->m_HighScores[iVar10].
                                  m_sbPlayerInitials.fChars + iVar7 + -8));
        append__13StringBuffer2PCUsi
                  ((StringBuffer2 *)
                   ((int)pOVar6->m_HighScores[iVar10].m_sbPlayerInitials.fChars + iVar7 + -8),psVar4
                   ,-1);
        iVar10 = iVar5;
      } while (iVar5 < 5);
      iVar7 = iVar8 * 0x17c;
    } while (iVar8 < 8);
  }
  SetSaveConfigMode__12ESimsMemCard(this);
  return;
}

void ESimsMemCard::UpdateImportHouseMode() {
  return;
}

void ESimsMemCard::DrawMemCardCheckMode(ERC *prc) {
  return;
}

void ESimsMemCard::DrawLoadNeighborhoodMode(ERC *prc) {
  short *psVar1;
  int iVar2;
  
  if (*(int *)&this->m_bLoadInittedMenu == 1) {
    if (this->m_DrawLoadOneFrame != 0) {
      iVar2 = this->m_DrawLoadOneFrame;
      goto LAB_001d8a0c;
    }
    Draw__19ESimsMemCardMenuMgrP3ERC(this->m_pMemCardMenuMgr,prc);
  }
  iVar2 = this->m_DrawLoadOneFrame;
LAB_001d8a0c:
  if (iVar2 == 1) {
    if (this->m_LoadStoryAndNeighborhoodMode == 1) {
      psVar1 = GetMemCardUIString__7EGlobalPCc(&_globals,"loading_story_msg_line");
      DrawGenericMessage__12ESimsMemCardP3ERCPCUsN32
                (this,prc,psVar1,(short *)0x0,(short *)0x0,(short *)0x0);
    }
    else {
      psVar1 = GetMemCardUIString__7EGlobalPCc(&_globals,"loading_msg_line");
      DrawGenericMessage__12ESimsMemCardP3ERCPCUsN32
                (this,prc,psVar1,(short *)0x0,(short *)0x0,(short *)0x0);
    }
    this->m_DrawLoadOneFrame = 2;
  }
  return;
}

void ESimsMemCard::DrawSaveNeighborhoodMode(ERC *prc) {
  int iVar1;
  short *psVar2;
  
  if (*(int *)&this->m_bProhibitDraw != 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    if (*(short *)(iVar1 + 0x2e6) == 1) {
      psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,"saving_story_msg_line");
      DrawGenericMessage__12ESimsMemCardP3ERCPCUsN32
                (this,prc,psVar2,(short *)0x0,(short *)0x0,(short *)0x0);
    }
    else {
      psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,"saving_msg_line");
      DrawGenericMessage__12ESimsMemCardP3ERCPCUsN32
                (this,prc,psVar2,(short *)0x0,(short *)0x0,(short *)0x0);
    }
    *(undefined4 *)&this->m_bSaveLoadActive = 1;
  }
  return;
}

void ESimsMemCard::DrawSaveConfigMode(ERC *prc) {
  int iVar1;
  short *psVar2;
  
  if (*(int *)&this->m_bProhibitDraw != 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    if (*(short *)(iVar1 + 0x2e6) == 1) {
      psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,"saving_story_msg_line");
      DrawGenericMessage__12ESimsMemCardP3ERCPCUsN32
                (this,prc,psVar2,(short *)0x0,(short *)0x0,(short *)0x0);
    }
    else {
      psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,"saving_msg_line");
      DrawGenericMessage__12ESimsMemCardP3ERCPCUsN32
                (this,prc,psVar2,(short *)0x0,(short *)0x0,(short *)0x0);
    }
    *(undefined4 *)&this->m_bSaveLoadActive = 1;
  }
  return;
}

void ESimsMemCard::DrawLoadConfigMode(ERC *prc) {
  short *Line1;
  
  if (*(int *)&this->m_bWaitOneFrameDraw == 1) {
    *(undefined4 *)&this->m_bWaitOneFrameDraw = 0;
  }
  else if ((*(int *)&this->m_bSpecialSaveSequence != 1) && (*(int *)&this->m_bErrorSavingFile == 0))
  {
    Line1 = GetMemCardUIString__7EGlobalPCc(&_globals,"loading_config_msg_line");
    DrawGenericMessage__12ESimsMemCardP3ERCPCUsN32
              (this,prc,Line1,(short *)0x0,(short *)0x0,(short *)0x0);
  }
  *(undefined4 *)&this->m_bSaveLoadActive = 1;
  return;
}

void ESimsMemCard::DrawImportHouseMode(ERC *prc) {
  return;
}

int ESimsMemCard::CheckCardUpdate(bool ReturnOnError) {
	bool Formatted;
	int SaveSize;
	int ConfigSize;
	int MainSize;
	bool Available;
	bool Exists;
	int Size;
	char NeighborhoodName[64];
	char NeighborhoodName2[64];
	bool Exists;
	EMC_OpStatus result;
	char FName[64];
	int i;
	int Size;
	bool Exists;
	char FName[64];
	int i;
	char FName[64];
	int i;
	char NeighborhoodName[64];
	char NeighborhoodName2[64];
	bool Exists;
	EMC_OpStatus result;
	
  bool bVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  char (*pacVar3) [32];
  int iVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  char (*pacVar9) [32];
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
  char FName [64];
  char NeighborhoodName2 [64];
  char local_100 [64];
  bool Formatted;
  bool Available;
  int local_b8;
  int local_b4;
  bool Exists;
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
  
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if ((this->m_bCheckingCardDrawMode == 3) && (*(int *)&this->m_bDrawCalled == 1)) {
    (*(code *)_pMemoryCard->__vtable->GetFreeSpaceS)
              ((int)&_pMemoryCard->__vtable +
               (int)*(short *)&_pMemoryCard->__vtable->UpdateOperation,0);
    this->m_bCheckingCardDrawMode = 0;
LAB_001d8d48:
    iVar4 = 0;
  }
  else {
    bVar1 = _pMemoryCard == (EMemoryCard *)0x0;
    *(undefined4 *)&this->m_bCheckingCard = 0;
    if (bVar1) {
      return -1;
    }
    if (this->m_bCheckingCardDrawMode == 2) {
      pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar2 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0,
                         0x20);
      if (lVar5 == 0) {
        pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar5 = (**(code **)(pEVar2 + 1))
                          ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,1,
                           0x20);
        if (lVar5 != 0) {
          iVar4 = *(int *)&this->m_CanFormat;
          goto LAB_001d8dd0;
        }
      }
      else {
        iVar4 = *(int *)&this->m_CanFormat;
LAB_001d8dd0:
        if (iVar4 == 1) {
          *(undefined4 *)&this->m_bCheckingCard = 1;
          this->m_bCheckingCardDrawMode = 3;
          goto LAB_001d8d48;
        }
      }
      pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      uVar8 = 0x40;
      if (*(int *)&this->m_bExitSymbolIsTriangle != 0) {
        uVar8 = 0x10;
      }
      lVar5 = (**(code **)(pEVar2 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0,
                         uVar8);
      if (lVar5 == 0) {
        pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        uVar8 = 0x40;
        if (*(int *)&this->m_bExitSymbolIsTriangle != 0) {
          uVar8 = 0x10;
        }
        lVar5 = (**(code **)(pEVar2 + 1))
                          ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,1,
                           uVar8);
        if (lVar5 == 0) goto LAB_001d8f00;
      }
      if (!ReturnOnError) {
        return -1;
      }
    }
    else if (this->m_bCheckingCardDrawMode != 6) {
      uVar8 = 0x40;
      if (*(int *)&this->m_bExitSymbolIsTriangle != 0) {
        uVar8 = 0x10;
      }
      pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar5 = (**(code **)(pEVar2 + 1))
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,0,
                         uVar8);
      if (lVar5 == 0) {
        pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        uVar8 = 0x40;
        if (*(int *)&this->m_bExitSymbolIsTriangle != 0) {
          uVar8 = 0x10;
        }
        lVar5 = (**(code **)(pEVar2 + 1))
                          ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,1,
                           uVar8);
        if (lVar5 == 0) goto LAB_001d8f00;
      }
      if (!ReturnOnError) {
        if (this->m_bCheckingCardDrawMode != 4) {
          return -1;
        }
        if (this->m_MemCardMode == 6) {
          if (*(int *)&this->m_bSpecialSaveSequence == 1) {
            return -1;
          }
          return 1;
        }
        return -1;
      }
    }
LAB_001d8f00:
    lVar5 = (*(code *)_pMemoryCard->__vtable[1].UnFormatCardA)
                      ((int)&_pMemoryCard->__vtable +
                       (int)*(short *)&_pMemoryCard->__vtable[1].FormatCardA,0);
    if (lVar5 == 0) {
      if (!ReturnOnError) {
        *(undefined4 *)&this->m_bOkToOverwrite = 0;
        *(undefined4 *)&this->m_bCheckingCard = 1;
        *(undefined4 *)&this->m_bAlreadyCheckedForFile = 0;
        this->m_bCheckingCardDrawMode = 1;
        return 0;
      }
      return -1;
    }
    _Formatted = 0;
    lVar5 = (*(code *)_pMemoryCard->__vtable[1].IsSpaceAvailable)
                      ((int)&_pMemoryCard->__vtable +
                       (int)*(short *)&_pMemoryCard->__vtable[1].IsSpaceAvailable,0,&Formatted);
    if (lVar5 != 1) {
      return 0;
    }
    if (_Formatted == 0) {
      if (!ReturnOnError) {
        *(undefined4 *)&this->m_bCheckingCard = 1;
        this->m_bCheckingCardDrawMode = 2;
        *(undefined4 *)&this->m_bDrawCalled = 0;
        return 0;
      }
      return -1;
    }
    iVar4 = this->m_MemCardMode;
    if (iVar4 == 2) {
      iVar4 = *(int *)&this->m_bCheckForOverwrite;
LAB_001d9558:
      if (iVar4 == 1) {
        if (*(int *)&this->m_bOkToOverwrite == 0) {
          GetCompressedNeighborhoodName__12ESimsMemCardPc(this,FName);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          iVar4 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                            ((int)&_5Globs_pNeighborhood->__vtable +
                             (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat
                            );
          NeighborhoodName2[0] = 'N';
          if (*(short *)(iVar4 + 0x2e6) == 1) {
            NeighborhoodName2[0] = 'S';
          }
          NeighborhoodName2[1] = '\0';
          strcat(NeighborhoodName2,FName);
          _Exists = 0;
          lVar5 = (*(code *)_pMemoryCard->__vtable[1].DoesFileExist)
                            ((int)&_pMemoryCard->__vtable +
                             (int)*(short *)&_pMemoryCard->__vtable[1].SetGameCode,NeighborhoodName2
                             ,0,2,&Exists);
          if (lVar5 != 1) {
            return 0;
          }
          if (_Exists == 1) {
            *(undefined4 *)&this->m_bCheckingCard = 1;
            this->m_bCheckingCardDrawMode = 6;
            pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
            uVar8 = 0x40;
            if (*(int *)&this->m_bExitSymbolIsTriangle != 0) {
              uVar8 = 0x10;
            }
            lVar5 = (**(code **)(pEVar2 + 1))
                              ((int)(_globals.m_pCtrlPad)->m_pressed +
                               *(short *)&pEVar2->GetBut + -4,0,uVar8);
            if (lVar5 != 0) {
              return -1;
            }
            pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
            uVar8 = 0x40;
            if (*(int *)&this->m_bExitSymbolIsTriangle != 0) {
              uVar8 = 0x10;
            }
            lVar5 = (**(code **)(pEVar2 + 1))
                              ((int)(_globals.m_pCtrlPad)->m_pressed +
                               *(short *)&pEVar2->GetBut + -4,1,uVar8);
            if (lVar5 != 0) {
              return -1;
            }
            pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
            lVar5 = (**(code **)(pEVar2 + 1))
                              ((int)(_globals.m_pCtrlPad)->m_pressed +
                               *(short *)&pEVar2->GetBut + -4,0,0x20);
            if (lVar5 == 0) {
              pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
              lVar5 = (**(code **)(pEVar2 + 1))
                                ((int)(_globals.m_pCtrlPad)->m_pressed +
                                 *(short *)&pEVar2->GetBut + -4,1,0x20);
              if (lVar5 == 0) {
                return 0;
              }
              *(undefined4 *)&this->m_bWaitOneFrame = 1;
            }
            else {
              *(undefined4 *)&this->m_bWaitOneFrame = 1;
            }
            *(undefined4 *)&this->m_bOkToOverwrite = 1;
            *(undefined4 *)&this->m_bCheckingCard = 0;
            goto LAB_001d8d48;
          }
          iVar4 = *(int *)&this->m_bCheckingCard;
        }
        else {
          iVar4 = *(int *)&this->m_bCheckingCard;
        }
      }
      else {
        iVar4 = *(int *)&this->m_bCheckingCard;
      }
      if (iVar4 != 1) {
        return 1;
      }
    }
    else {
      if ((*(int *)&this->m_bSpecialSaveSequence == 1) && (iVar4 == 6)) {
        iVar4 = *(int *)&this->m_bCheckForOverwrite;
        goto LAB_001d9558;
      }
      iVar7 = 0x18e400;
      if ((iVar4 != 6) && (iVar4 == 5)) {
        iVar7 = 0x48400;
      }
      lVar5 = (*(code *)_pMemoryCard->__vtable[1].FormatCardS)
                        ((int)&_pMemoryCard->__vtable +
                         (int)*(short *)&_pMemoryCard->__vtable[1].DeleteDataS,0,iVar7,&Available);
      if (lVar5 == 1) {
        if (_Available == 1) {
          iVar4 = *(int *)&this->m_bCheckForOverwrite;
        }
        else {
          if (*(int *)&this->m_bAlreadyCheckedForFile == 0) {
            if (this->m_MemCardMode == 5) {
              local_b8 = 0;
              lVar5 = (*(code *)_pMemoryCard->__vtable[1].DoesFileExist)
                                ((int)&_pMemoryCard->__vtable +
                                 (int)*(short *)&_pMemoryCard->__vtable[1].SetGameCode,0x3b4b98,0,1,
                                 &local_b8);
              if (lVar5 != 1) {
                return 0;
              }
              if (local_b8 == 1) {
                *(undefined4 *)&this->m_bNoFile = 0;
              }
              else {
                *(undefined4 *)&this->m_bNoFile = 1;
              }
            }
            else {
              if (*(int *)&this->m_bCheckForCurrentNghFile == 0) {
                *(undefined4 *)&this->m_bNoFile = 1;
                if (this->m_MemCardMode != 6) {
                  FName[0] = 'N';
                  FName[1] = '*';
                  pacVar9 = this->m_FileList;
                  FName[2] = '\0';
                  iVar4 = 7;
                  pacVar3 = this->m_FileList[7];
                  do {
                    (*pacVar3)[0] = '\0';
                    iVar4 = iVar4 + -1;
                    pacVar3 = pacVar3[-1];
                  } while (-1 < iVar4);
                  (*(code *)_pMemoryCard->__vtable[1].IsCardAvailable)
                            ((int)&_pMemoryCard->__vtable +
                             (int)*(short *)&_pMemoryCard->__vtable[1].CheckForOverwriteSpace,0,
                             FName,1,pacVar9);
                  iVar4 = 7;
                  pacVar3 = pacVar9;
                  do {
                    if ((*pacVar3)[0] != '\0') {
                      *(undefined4 *)&this->m_bNoFile = 0;
                    }
                    (*pacVar3)[0] = '\0';
                    iVar4 = iVar4 + -1;
                    pacVar3 = pacVar3[1];
                  } while (-1 < iVar4);
                  FName[0] = 'S';
                  (*(code *)_pMemoryCard->__vtable[1].IsCardAvailable)
                            ((int)&_pMemoryCard->__vtable +
                             (int)*(short *)&_pMemoryCard->__vtable[1].CheckForOverwriteSpace,0,
                             FName,1,pacVar9);
                  iVar4 = 7;
                  pacVar3 = pacVar9;
                  do {
                    if ((*pacVar3)[0] != '\0') {
                      *(undefined4 *)&this->m_bNoFile = 0;
                    }
                    (*pacVar3)[0] = '\0';
                    iVar4 = iVar4 + -1;
                    pacVar3 = pacVar3[1];
                  } while (-1 < iVar4);
                  if (*(int *)&this->m_bNoFile == 0) {
                    FName[0] = '\0';
                    strcpy(FName,"Config");
                    (*(code *)_pMemoryCard->__vtable[1].IsCardAvailable)
                              ((int)&_pMemoryCard->__vtable +
                               (int)*(short *)&_pMemoryCard->__vtable[1].CheckForOverwriteSpace,0,
                               FName,1,pacVar9);
                    *(undefined4 *)&this->m_bNoFile = 1;
                    iVar4 = 7;
                    do {
                      if ((*pacVar9)[0] != '\0') {
                        *(undefined4 *)&this->m_bNoFile = 0;
                      }
                      (*pacVar9)[0] = '\0';
                      iVar4 = iVar4 + -1;
                      pacVar9 = pacVar9[1];
                    } while (-1 < iVar4);
                  }
                  goto LAB_001d9530;
                }
                FName[0] = 'N';
                FName[1] = '*';
                FName[2] = '\0';
                bVar1 = false;
                pacVar9 = this->m_FileList;
                iVar4 = 7;
                pacVar3 = this->m_FileList[7];
                do {
                  (*pacVar3)[0] = '\0';
                  iVar4 = iVar4 + -1;
                  pacVar3 = pacVar3[-1];
                } while (-1 < iVar4);
                (*(code *)_pMemoryCard->__vtable[1].IsCardAvailable)
                          ((int)&_pMemoryCard->__vtable +
                           (int)*(short *)&_pMemoryCard->__vtable[1].CheckForOverwriteSpace,0,FName,
                           1,pacVar9);
                iVar4 = 7;
                pacVar3 = pacVar9;
                do {
                  cVar6 = (*pacVar3)[0];
                  iVar4 = iVar4 + -1;
                  (*pacVar3)[0] = '\0';
                  if (cVar6 != '\0') {
                    bVar1 = true;
                  }
                  pacVar3 = pacVar3[1];
                } while (-1 < iVar4);
                FName[0] = 'S';
                (*(code *)_pMemoryCard->__vtable[1].IsCardAvailable)
                          ((int)&_pMemoryCard->__vtable +
                           (int)*(short *)&_pMemoryCard->__vtable[1].CheckForOverwriteSpace,0,FName,
                           1,pacVar9);
                iVar4 = 7;
                pacVar3 = pacVar9;
                do {
                  cVar6 = (*pacVar3)[0];
                  iVar4 = iVar4 + -1;
                  (*pacVar3)[0] = '\0';
                  if (cVar6 != '\0') {
                    bVar1 = true;
                  }
                  pacVar3 = pacVar3[1];
                } while (-1 < iVar4);
                FName[0] = '\0';
                iVar4 = iVar7 + -0x146000;
                if (!bVar1) {
                  iVar4 = iVar7;
                }
                strcpy(FName,"Config");
                (*(code *)_pMemoryCard->__vtable[1].IsCardAvailable)
                          ((int)&_pMemoryCard->__vtable +
                           (int)*(short *)&_pMemoryCard->__vtable[1].CheckForOverwriteSpace,0,FName,
                           1,pacVar9);
                cVar6 = this->m_FileList[0];
                iVar7 = 0;
                *(undefined4 *)&this->m_bNoFile = 1;
                while (cVar6 == '\0') {
                  pacVar3 = pacVar9[iVar7];
                  iVar7 = iVar7 + 1;
                  (*pacVar3)[0] = '\0';
                  if (7 < iVar7) goto joined_r0x001d91dc;
                  cVar6 = pacVar9[iVar7][0];
                }
                iVar4 = iVar4 + -0x48400;
              }
              else {
                *(undefined4 *)&this->m_bNoFile = 1;
                GetCompressedNeighborhoodName__12ESimsMemCardPc(this,FName);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
                iVar4 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                                  ((int)&_5Globs_pNeighborhood->__vtable +
                                   (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].
                                                   AddFamilyHistoryStat);
                NeighborhoodName2[0] = 'N';
                if (*(short *)(iVar4 + 0x2e6) == 1) {
                  NeighborhoodName2[0] = 'S';
                }
                NeighborhoodName2[1] = '\0';
                strcat(NeighborhoodName2,FName);
                local_b4 = 0;
                lVar5 = (*(code *)_pMemoryCard->__vtable[1].DoesFileExist)
                                  ((int)&_pMemoryCard->__vtable +
                                   (int)*(short *)&_pMemoryCard->__vtable[1].SetGameCode,
                                   NeighborhoodName2,0,2,&local_b4);
                if (lVar5 != 1) {
                  return 0;
                }
                local_100[0] = '\0';
                iVar4 = iVar7 + -0x146000;
                if (local_b4 != 1) {
                  iVar4 = iVar7;
                }
                pacVar3 = this->m_FileList;
                strcpy(local_100,"Config");
                (*(code *)_pMemoryCard->__vtable[1].IsCardAvailable)
                          ((int)&_pMemoryCard->__vtable +
                           (int)*(short *)&_pMemoryCard->__vtable[1].CheckForOverwriteSpace,0,
                           local_100,1,pacVar3);
                cVar6 = this->m_FileList[0];
                iVar7 = 0;
                *(undefined4 *)&this->m_bNoFile = 1;
                while (cVar6 == '\0') {
                  pacVar9 = pacVar3[iVar7];
                  iVar7 = iVar7 + 1;
                  (*pacVar9)[0] = '\0';
                  if (7 < iVar7) goto joined_r0x001d91dc;
                  cVar6 = pacVar3[iVar7][0];
                }
                iVar4 = iVar4 + -0x48400;
              }
joined_r0x001d91dc:
              if ((iVar4 < 1) ||
                 ((lVar5 = (*(code *)_pMemoryCard->__vtable[1].FormatCardS)
                                     ((int)&_pMemoryCard->__vtable +
                                      (int)*(short *)&_pMemoryCard->__vtable[1].DeleteDataS,0,iVar4,
                                      &Available), lVar5 == 1 && (_Available != 0)))) {
                *(undefined4 *)&this->m_bNoFile = 0;
              }
            }
LAB_001d9530:
            *(undefined4 *)&this->m_bAlreadyCheckedForFile = 1;
            iVar4 = *(int *)&this->m_bNoFile;
          }
          else {
            iVar4 = *(int *)&this->m_bNoFile;
          }
          if (iVar4 == 1) {
            *(undefined4 *)&this->m_bCheckingCard = 1;
            this->m_bCheckingCardDrawMode = 4;
            iVar4 = *(int *)&this->m_bCheckForOverwrite;
          }
          else {
            iVar4 = *(int *)&this->m_bCheckForOverwrite;
          }
        }
        goto LAB_001d9558;
      }
    }
    iVar4 = -1;
    if (!ReturnOnError) {
      iVar4 = 0;
    }
  }
  return iVar4;
}

void ESimsMemCard::CheckCardDraw(ERC *prc) {
	BString2 StString1;
	short unsigned int Buffer[32];
	int SaveSize;
	StringBufW255 StString;
	BString2 StString1;
	short unsigned int Buffer[32];
	int SaveSize;
	
  int iVar1;
  short *psVar2;
  short *psVar3;
  short *substring;
  uint uVar4;
  char *pcVar5;
  BString2 StString1;
  short Buffer [32];
  StackString2_256_ StString;
  
  *(undefined4 *)&this->m_bDrawCalled = 1;
  iVar1 = this->m_bCheckingCardDrawMode;
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      if (*(int *)&this->m_bLoadMsgMode == 1) {
        if (this->m_MemCardMode == 6) {
          psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,"not_formatted_load_line");
        }
        else {
          psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,"not_formatted_load_regular");
        }
      }
      else {
        psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,"not_formatted_line");
      }
LAB_001d9a10:
      DrawGenericMessage__12ESimsMemCardP3ERCPCUsN32
                (this,prc,psVar2,(short *)0x0,(short *)0x0,(short *)0x0);
      return;
    }
    if (iVar1 == 3) {
      psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,"format_msg_line");
      goto LAB_001d9a10;
    }
    if (iVar1 == 6) {
      if (*(int *)&this->m_bOkToOverwrite == 0) {
                    /* inlined from ../MSrc/stringbuffer2.h */
        __13StringBuffer2PUsUi(&StString.field0_0x0,StString.fChars,0x100);
                    /* end of inlined section */
        iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        if (*(short *)(iVar1 + 0x2e6) == 1) {
          psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,"overwrite_warning_story");
                    /* end of inlined section */
        }
        else {
          psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,"overwrite_warning_freeplay");
        }
        psVar3 = c_str__C8BString2(&_sName);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                          ((int)&_5Globs_pNeighborhood->__vtable +
                           (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
        substring = c_str__C13StringBuffer2((StringBuffer2 *)(iVar1 + 0x110));
        SubstituteString__FPCUsN20Rt12StackString21Ui256(psVar2,psVar3,substring,&StString);
        psVar2 = c_str__C13StringBuffer2(&StString.field0_0x0);
        goto LAB_001d9a10;
      }
      iVar1 = this->m_bCheckingCardDrawMode;
    }
    else {
      iVar1 = this->m_bCheckingCardDrawMode;
    }
    if (iVar1 != 4) {
      return;
    }
    __8BString2(&StString1);
    uVar4 = 0x18e400;
    if (this->m_MemCardMode == 5) {
      uVar4 = 0x48400;
    }
    IntToWString__FiPUsUii(uVar4 >> 10,Buffer,0x20,0);
    if (this->m_MemCardMode == 5) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
      if (*(short *)(iVar1 + 0x2e6) == 1) {
        pcVar5 = "nospace_story_msg_config_line";
      }
      else {
        pcVar5 = "nospace_msg_config_line";
      }
    }
    else if (this->m_MemCardMode == 6) {
      pcVar5 = "nospace_start";
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                        ((int)&_5Globs_pNeighborhood->__vtable +
                         (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
      if (*(short *)(iVar1 + 0x2e6) != 1) {
        psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,"nospace_msg_line");
        psVar3 = c_str__C8BString2(&_sAmount);
        SubstituteString__FPCUsN20R8BString2(psVar2,psVar3,Buffer,&StString1);
        goto LAB_001d9b7c;
      }
      pcVar5 = "nospace_story_msg_line";
    }
    psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,pcVar5);
    psVar3 = c_str__C8BString2(&_sAmount);
    SubstituteString__FPCUsN20R8BString2(psVar2,psVar3,Buffer,&StString1);
LAB_001d9b7c:
    psVar2 = c_str__C8BString2(&StString1);
    DrawGenericMessage__12ESimsMemCardP3ERCPCUsN32
              (this,prc,psVar2,(short *)0x0,(short *)0x0,(short *)0x0);
    ___8BString2(&StString1,2);
    return;
  }
  __8BString2(&StString1);
  uVar4 = 0x18e400;
  if (this->m_MemCardMode == 5) {
    uVar4 = 0x48400;
  }
  IntToWString__FiPUsUii(uVar4 >> 10,Buffer,0x20,0);
  if (*(int *)&this->m_bLoadMsgMode == 1) {
    if (this->m_MemCardMode == 6) {
      IntToWString__FiPUsUii(0x639,Buffer,0x20,0);
      pcVar5 = "no_mem_card_start";
    }
    else {
      pcVar5 = "no_mem_card_load_line";
    }
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar1 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                      ((int)&_5Globs_pNeighborhood->__vtable +
                       (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
    if (*(short *)(iVar1 + 0x2e6) != 1) {
      psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,"no_mem_card_line");
      psVar3 = c_str__C8BString2(&_sAmount);
      SubstituteString__FPCUsN20R8BString2(psVar2,psVar3,Buffer,&StString1);
      goto LAB_001d9878;
    }
    pcVar5 = "no_mem_card_story";
  }
  psVar2 = GetMemCardUIString__7EGlobalPCc(&_globals,pcVar5);
  psVar3 = c_str__C8BString2(&_sAmount);
  SubstituteString__FPCUsN20R8BString2(psVar2,psVar3,Buffer,&StString1);
LAB_001d9878:
  psVar2 = c_str__C8BString2(&StString1);
  DrawGenericMessage__12ESimsMemCardP3ERCPCUsN32
            (this,prc,psVar2,(short *)0x0,(short *)0x0,(short *)0x0);
  ___8BString2(&StString1,2);
  return;
}

void ESimsMemCard::DrawGenericMessage(ERC *prc, c16 *Line1, c16 *Line2, c16 *Line3, c16 *Line4) {
	BString2 Str;
	BString2 TempBuf;
	short unsigned int tmp[2];
	float height;
	EVec2 Pos;
	EVec2 DrawPos;
	short unsigned int LineBuff[128];
	c16 *CharPtr;
	short unsigned int WordBuff[128];
	c16 *WordBuffPtr;
	EVec2 Dimensions;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	
  undefined *puVar1;
  ERFont *pEVar2;
  ulong *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  EStorable__vtable *pEVar9;
  ushort uVar10;
  short *psVar12;
  short *psVar13;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar14;
  float fVar15;
  BString2 Str;
  BString2 TempBuf;
  short tmp [2];
  EVec2 Pos;
  EVec2 DrawPos;
  short LineBuff [128];
  short WordBuff [128];
  EVec2 Dimensions;
  undefined local_d0 [20];
  EStorable__vtable *local_bc;
  int local_b0;
  int iStack_ac;
  int local_a0;
  int iStack_9c;
  EHashTableNode **local_90;
  uint uStack_8c;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  int iVar11;
  
  local_90 = (EHashTableNode **)unaff_s2;
  uStack_8c = (uint)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (EFontSize *)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (int)unaff_s1;
  iStack_9c = (int)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_b0 = (int)unaff_s0;
  iStack_ac = (int)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __8BString2(&Str);
  __8BString2(&TempBuf);
  __as__8BString2PCUs(&TempBuf,Line1);
  uVar4 = (int)tmp + 3U & 3;
  puVar5 = (uint *)(((int)tmp + 3U) - uVar4);
  *puVar5 = *puVar5 & -1 << (uVar4 + 1) * 8 | (uint)DAT_003b4d80 >> (3 - uVar4) * 8;
  tmp = DAT_003b4d80;
  if (Line2 != (short *)0x0) {
    append__8BString2PCUs(&TempBuf,tmp);
    append__8BString2PCUs(&TempBuf,Line2);
  }
  if (Line3 != (short *)0x0) {
    append__8BString2PCUs(&TempBuf,tmp);
    append__8BString2PCUs(&TempBuf,Line3);
  }
  if (Line4 == (short *)0x0) {
    iVar11 = *(int *)&this->m_bExitSymbolIsTriangle;
  }
  else {
    append__8BString2PCUs(&TempBuf,tmp);
    append__8BString2PCUs(&TempBuf,Line4);
    iVar11 = *(int *)&this->m_bExitSymbolIsTriangle;
  }
  uVar10 = 4;
  if (iVar11 == 0) {
    uVar10 = 3;
  }
  tmp = (short  [2])((uint)tmp & 0xffff0000 | (uint)uVar10);
  Pos.field0_0x0.d[0] = 0.25;
  psVar12 = c_str__C8BString2(&TempBuf);
  psVar13 = c_str__C8BString2(&_sButtonSymbol);
  SubstituteString__FPCUsN20R8BString2(psVar12,psVar13,tmp,&Str);
  __as__8BString2RC8BString2(&TempBuf,&Str);
  psVar12 = c_str__C8BString2(&TempBuf);
  ReplaceButtonPrompts__FPCUsR8BString2(psVar12,&Str);
  SetSize__6ERFontffb(this->m_pFont,15.0,1.0,true);
  uVar8 = _WHITE.field0_0x0.d[3];
  uVar7 = _WHITE.field0_0x0.d[2];
  uVar6 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar2 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar2->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
  (pEVar2->m_vColor).field0_0x0.d[2] = uVar7;
  (pEVar2->m_vColor).field0_0x0.d[3] = uVar8;
                    /* end of inlined section */
  Select__6ERFontP3ERC(this->m_pFont,prc);
  Pos.field0_0x0.d[1] = 0.2;
  LineBuff[0] = 0;
  fVar14 = Pos.field0_0x0.d[0];
  psVar13 = c_str__C8BString2(&Str);
  psVar12 = WordBuff;
  if (*psVar13 != 0) {
    fVar15 = 0.75;
    WordBuff[0] = *psVar13;
    while( true ) {
      psVar12 = psVar12 + 1;
      if (*psVar13 == 0x20) {
        *psVar12 = 0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        DoGetStringSize__6ERFontPvbP7EWindow
                  ((ERFont *)local_d0,this->m_pFont,true,(EWindow *)&pGifTag1);
        pEVar9 = local_d0._0_4_;
                    /* end of inlined section */
        Dimensions.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_d0._4_4_,local_d0._0_4_);
        puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
        uVar4 = (uint)puVar1 & 7;
        puVar3 = (ulong *)(puVar1 + -uVar4);
        *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | (ulong)Dimensions.field0_0x0 >> (7 - uVar4) * 8
        ;
        if (fVar15 < Pos.field0_0x0.d[0] + (float)pEVar9) {
          if (LineBuff[0] != 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            local_bc = (EStorable__vtable *)Pos.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            local_d0._16_4_ = 0x3f000000;
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (this->m_pFont,prc,LineBuff,true,(EVec2 *)(local_d0 + 0x10),E_FAX_CENTER,
                       E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
            LineBuff[0] = 0;
          }
          Pos.field0_0x0.d[1] = Pos.field0_0x0.d[1] + 0.05;
          Pos.field0_0x0.d[0] = fVar14;
        }
        CatWsAToBuff__FPCUsPUsUi(WordBuff,LineBuff,0x80);
        Pos.field0_0x0.d[0] = Pos.field0_0x0.d[0] + Dimensions.field0_0x0.d[0];
        psVar12 = WordBuff;
      }
      psVar13 = psVar13 + 1;
      if (*psVar13 == 0) break;
      *psVar12 = *psVar13;
    }
  }
  *psVar12 = 0;
  if ((psVar12 != WordBuff) || (LineBuff[0] != 0)) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_d0,this->m_pFont,SUB41(WordBuff,0),(EWindow *)&pGifTag1);
    pEVar9 = local_d0._0_4_;
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar4);
    *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 |
              CONCAT44(local_d0._4_4_,local_d0._0_4_) >> (7 - uVar4) * 8;
    if (0.75 < Pos.field0_0x0.d[0] + (float)pEVar9) {
      if (LineBuff[0] != 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        local_d0._0_4_ = (EStorable__vtable *)0x3f000000;
        local_d0._4_4_ = (char *)Pos.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,LineBuff,true,(EVec2 *)local_d0,E_FAX_CENTER,E_FAY_TOP,
                   (EVec2 *)0x0);
                    /* end of inlined section */
        LineBuff[0] = 0;
      }
      Pos.field0_0x0.d[1] = Pos.field0_0x0.d[1] + 0.05;
    }
    CatWsAToBuff__FPCUsPUsUi(WordBuff,LineBuff,0x80);
    if (LineBuff[0] != 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      local_d0._4_4_ = (char *)Pos.field0_0x0.d[1];
      local_d0._0_4_ = (EStorable__vtable *)0x3f000000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,LineBuff,true,(EVec2 *)local_d0,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
                    /* end of inlined section */
      LineBuff[0] = 0;
    }
  }
  ___8BString2(&TempBuf,2);
  ___8BString2(&Str,2);
  return;
}

void ESimsMemCard::DrawGenericStatementBox(ERC *prc, c16 *Line1, c16 *Line2, c16 *Line3) {
	EVec2 vBigBoxTL;
	EVec2 vBigBoxBR;
	EVec2 vposPrompt;
	EVec2 Pos;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	
  ERFont *pEVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  EVec2 vBigBoxTL;
  EVec2 vBigBoxBR;
  EVec2 vposPrompt;
  EVec2 Pos;
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
  
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
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
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
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
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  DrawBigBox__10EDialogWinP3ERCfffff
            (prc,vTopLeft.field0_0x0.d[0],vTopLeft.field0_0x0.d[1],
             vTopLeft.field0_0x0.d[0] + vWHDialog.field0_0x0.d[0],
             vTopLeft.field0_0x0.d[1] + vWHDialog.field0_0x0.d[1],1.0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  Pos.field0_0x0.d[1] = 1.0;
  Pos.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,vTopLeftMessage.field0_0x0.d[0],vTopLeftMessage.field0_0x0.d[1],
             vWHMessageBox.field0_0x0.d[1],vWHMessageBox.field0_0x0.d[0],1.0,(EVec4 *)&Pos);
  SetSize__6ERFontffb(this->m_pFont,15.0,1.0,true);
  uVar4 = _WHITE.field0_0x0.d[3];
  uVar3 = _WHITE.field0_0x0.d[2];
  uVar2 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar1 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar1->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
  (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
  (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
                    /* end of inlined section */
  Select__6ERFontP3ERC(this->m_pFont,prc);
  if (Line1 != (short *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[0] = vTopLeftMessage.field0_0x0.d[0] + 0.05;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[1] = vTopLeftMessage.field0_0x0.d[0] + 0.12;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_90 = Pos.field0_0x0.d[0];
    local_8c = Pos.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,Line1,true,(EVec2 *)&local_90,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  }
                    /* end of inlined section */
  if (Line2 != (short *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[0] = vTopLeftMessage.field0_0x0.d[0] + 0.05;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[1] = vTopLeftMessage.field0_0x0.d[0] + 0.17;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_90 = Pos.field0_0x0.d[0];
    local_8c = Pos.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,Line2,true,(EVec2 *)&local_90,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  }
                    /* end of inlined section */
  if (Line3 != (short *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[0] = vTopLeftMessage.field0_0x0.d[0] + 0.05;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[1] = vTopLeftMessage.field0_0x0.d[0] + 0.22;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_90 = Pos.field0_0x0.d[0];
    local_8c = Pos.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,Line3,true,(EVec2 *)&local_90,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  }
                    /* end of inlined section */
  return;
}

void ESimsMemCard::GetCompressedNeighborhoodName(char *OutName) {
	u32 Checksum;
	char Buffer[8];
	char FiveBitChunk[7];
	int i;
	
  char cVar1;
  int iVar2;
  short *pData;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  char Buffer [8];
  char FiveBitChunk [7];
  
  pcVar6 = Buffer;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar2 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  pData = c_str__C13StringBuffer2((StringBuffer2 *)(iVar2 + 0x110));
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar2 = (*(code *)_5Globs_pNeighborhood->__vtable[1].GetImpl)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable[1].AddFamilyHistoryStat);
  iVar2 = length__C13StringBuffer2((StringBuffer2 *)(iVar2 + 0x110));
  uVar3 = Compute__9EChecksumPCvi(pData,iVar2 << 1);
  iVar2 = 0;
  uVar5 = 0;
  do {
    pbVar4 = (byte *)(FiveBitChunk + iVar2);
    iVar2 = iVar2 + 1;
    *pbVar4 = (byte)(uVar3 >> (uVar5 & 0x1f)) & 0x1f;
    uVar5 = uVar5 + 5;
  } while (iVar2 < 6);
  iVar2 = 0;
  FiveBitChunk[6] = (byte)(uVar3 >> 0x1e);
  do {
    cVar1 = FiveBitChunk[iVar2];
    if (FiveBitChunk[iVar2] < '\x10') {
      cVar1 = cVar1 + 'A';
    }
    else {
      cVar1 = cVar1 + 'Q';
    }
    *pcVar6 = cVar1;
    iVar2 = iVar2 + 1;
    pcVar6 = pcVar6 + 1;
  } while (iVar2 < 7);
  Buffer[7] = '\0';
  strcpy(OutName,Buffer);
  return;
}

void ESimsMemCard::DrawGenericMessageBox(ERC *prc, c16 *Title, c16 *Line1, c16 *Line2, c16 *Line3) {
	EVec2 vBigBoxTL;
	EVec2 vBigBoxBR;
	float dialogCenterX;
	EVec2 vposPrompt;
	EVec2 titleStringWH;
	float titleStringw;
	EVec2 vTitleBack;
	float promptBackW;
	c16 *string;
	EVec2 Pos;
	EVec2 Dimensions;
	u16 *szString;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	
  ERFont *pEVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
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
  float _y;
  float fVar6;
  float fVar7;
  float _y_00;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  EVec2 vBigBoxTL;
  EVec2 vBigBoxBR;
  EVec2 vposPrompt;
  EVec2 titleStringWH;
  EVec2 vTitleBack;
  EVec2 Pos;
  EVec2 Dimensions;
  EHashTableNode **local_120;
  EStorable__vtable *local_11c;
  ENodeListNode *local_118;
  ENodeListNode *local_114;
  EFontSize *local_110;
  int local_10c;
  int local_108;
  int local_104;
  short *local_100;
  short *szString;
  EHashTableNode **local_f0;
  uint uStack_ec;
  EFontSize *local_e0;
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
  undefined4 local_60;
  undefined4 uStack_5c;
  
  local_c0 = (undefined4)unaff_s3;
  uStack_bc = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s8;
  uStack_6c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_80 = (undefined4)unaff_s7;
  uStack_7c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_a0 = (undefined4)unaff_s5;
  uStack_9c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_b0 = (undefined4)unaff_s4;
  uStack_ac = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_retaddr;
  uStack_5c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_90 = (undefined4)unaff_s6;
  uStack_8c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_d0 = (undefined4)unaff_s2;
  uStack_cc = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_e0 = (EFontSize *)unaff_s1;
  uStack_dc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_f0 = (EHashTableNode **)unaff_s0;
  uStack_ec = (uint)((ulong)unaff_s0 >> 0x20);
  local_100 = Line2;
  szString = Line3;
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
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
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
  DrawBigBox__10EDialogWinP3ERCfffff
            (prc,vTopLeft.field0_0x0.d[0],vTopLeft.field0_0x0.d[1],
             vTopLeft.field0_0x0.d[0] + vWHDialog.field0_0x0.d[0],
             vTopLeft.field0_0x0.d[1] + vWHDialog.field0_0x0.d[1],1.0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  _y = vTopLeftMessage.field0_0x0.d[1] + vWHMessageBox.field0_0x0.d[1] + m_promptoff;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar12 = vTopLeftMessage.field0_0x0.d[0] + vWTitleBar.field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&titleStringWH,this->m_pFont,SUB41(Title,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  fVar7 = 0.2;
  titleStringWH.field0_0x0.d[0] = titleStringWH.field0_0x0.d[0] + 0.1;
  if (0.2 <= titleStringWH.field0_0x0.d[0]) {
    fVar7 = (float)((int)titleStringWH.field0_0x0.d[0] *
                    (uint)(titleStringWH.field0_0x0.d[0] < vWTitleBar.field0_0x0.d[0]) |
                   (int)vWTitleBar.field0_0x0.d[0] *
                   (uint)(titleStringWH.field0_0x0.d[0] >= vWTitleBar.field0_0x0.d[0]));
  }
  fVar9 = 0.5;
  fVar10 = 0.01;
  fVar6 = fVar7 * 0.5;
  _y_00 = vTopLeftMessage.field0_0x0.d[1] - (vWTitleBar.field0_0x0.d[1] + 0.01);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar8 = 0.9;
                    /* end of inlined section */
  SetSize__6ERFontffb(this->m_pFont,m_fontSize,1.0,true);
  uVar4 = _WHITE.field0_0x0.d[3];
  uVar3 = _WHITE.field0_0x0.d[2];
  uVar2 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar1 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar1->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
  (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
  (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
                    /* end of inlined section */
  fVar11 = 0.05;
  Select__6ERFontP3ERC(this->m_pFont,prc);
  DrawTextBox__10EDialogWinP3ERCffff(prc,fVar12 - fVar6,_y_00,fVar7,1.0);
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  Pos.field0_0x0.d[1] = 1.0;
  Pos.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,vTopLeftMessage.field0_0x0.d[0],vTopLeftMessage.field0_0x0.d[1],
             vWHMessageBox.field0_0x0.d[1],vWHMessageBox.field0_0x0.d[0],1.0,(EVec4 *)&Pos);
  fVar7 = fVar12 - vWPromptBar.field0_0x0.d[0] * 0.6 * fVar9;
  DrawTextBox__10EDialogWinP3ERCffff(prc,fVar7,_y,vWPromptBar.field0_0x0.d[0] * 0.6,1.0);
  Select__8ERShaderP3ERCi(this->m_pXIcon,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  Pos.field0_0x0.d[0] = fVar7 + 0.005;
  Pos.field0_0x0.d[1] = _y + 0.005;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_114 = (ENodeListNode *)0x3f800000;
  local_118 = (ENodeListNode *)0x3f800000;
  local_11c = (EStorable__vtable *)0x3f800000;
  local_120 = (EHashTableNode **)0x3f800000;
                    /* end of inlined section */
  Dimensions.field0_0x0.d[0] = fVar8;
  Dimensions.field0_0x0.d[1] = fVar8;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,(EVec4 *)&Pos,
             (ERFont *)&Dimensions,(EVec2 *)&local_120);
  Select__8ERShaderP3ERCi(this->m_pTriIcon,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  Pos.field0_0x0.d[1] = _y + 0.005;
  Pos.field0_0x0.d[0] = fVar7 + 0.18;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_104 = 0x3f800000;
  local_108 = 0x3f800000;
  local_10c = 0x3f800000;
  local_110 = (EFontSize *)0x3f800000;
                    /* end of inlined section */
  Dimensions.field0_0x0.d[0] = fVar8;
  Dimensions.field0_0x0.d[1] = fVar8;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,(EVec4 *)&Pos,
             (ERFont *)&Dimensions,&local_110);
  psVar5 = GetUiString__7EGlobalPCc(&_globals,"yes");
  SetSize__6ERFontffb(this->m_pFont,15.0,1.0,true);
  uVar4 = _WHITE.field0_0x0.d[3];
  uVar3 = _WHITE.field0_0x0.d[2];
  uVar2 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar1 = this->m_pFont;
  (pEVar1->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar1->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
  (pEVar1->m_vColor).field0_0x0.d[2] = uVar3;
  (pEVar1->m_vColor).field0_0x0.d[3] = uVar4;
                    /* end of inlined section */
  Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  Pos.field0_0x0.d[0] = fVar7 + fVar11;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  Pos.field0_0x0.d[1] = _y + fVar10;
  Dimensions.field0_0x0.d[0] = Pos.field0_0x0.d[0];
  Dimensions.field0_0x0.d[1] = Pos.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,psVar5,true,(EVec2 *)(ERFont *)&Dimensions,E_FAX_LEFT,E_FAY_TOP,
             (EVec2 *)0x0);
                    /* end of inlined section */
  psVar5 = GetUiString__7EGlobalPCc(&_globals,"no");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  Pos.field0_0x0.d[0] = fVar7 + 0.23;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  Dimensions.field0_0x0.d[1] = Pos.field0_0x0.d[1];
  Dimensions.field0_0x0.d[0] = Pos.field0_0x0.d[0];
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,psVar5,true,(EVec2 *)(ERFont *)&Dimensions,E_FAX_LEFT,E_FAY_TOP,
             (EVec2 *)0x0);
                    /* end of inlined section */
  SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&Dimensions,this->m_pFont,SUB41(Title,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  Pos.field0_0x0.d[1] = vTopLeftMessage.field0_0x0.d[1] - vWTitleBar.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  Pos.field0_0x0.d[0] = fVar12 - Dimensions.field0_0x0.d[0] * fVar9;
  local_120 = (EHashTableNode **)Pos.field0_0x0.d[0];
  local_11c = (EStorable__vtable *)Pos.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,Title,true,(EVec2 *)&local_120,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  SetSize__6ERFontffb(this->m_pFont,15.0,1.0,true);
  if (Line1 != (short *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[0] = vTopLeftMessage.field0_0x0.d[0] + fVar11;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[1] = vTopLeftMessage.field0_0x0.d[0] + 0.12;
    local_120 = (EHashTableNode **)Pos.field0_0x0.d[0];
    local_11c = (EStorable__vtable *)Pos.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,Line1,true,(EVec2 *)&local_120,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  }
                    /* end of inlined section */
  if (local_100 != (short *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[0] = vTopLeftMessage.field0_0x0.d[0] + fVar11;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[1] = vTopLeftMessage.field0_0x0.d[0] + 0.17;
    local_120 = (EHashTableNode **)Pos.field0_0x0.d[0];
    local_11c = (EStorable__vtable *)Pos.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,local_100,true,(EVec2 *)&local_120,E_FAX_LEFT,E_FAY_TOP,
               (EVec2 *)0x0);
  }
                    /* end of inlined section */
  if (szString != (short *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[0] = vTopLeftMessage.field0_0x0.d[0] + fVar11;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    Pos.field0_0x0.d[1] = vTopLeftMessage.field0_0x0.d[0] + 0.22;
    local_120 = (EHashTableNode **)Pos.field0_0x0.d[0];
    local_11c = (EStorable__vtable *)Pos.field0_0x0.d[1];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,szString,true,(EVec2 *)&local_120,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
              );
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

HandleNode* Memory::HandleNode * ReconSaveObject<OptionsRecon>(OptionsRecon *obj, SInt32 type, SInt32 version) {
	SimpleReconObject<OptionsRecon> recon;
	ReconBuilder rb;
	OptionsRecon *obj;
	SInt32 type;
	
  HandleNode *pHVar1;
  SimpleReconObject_OptionsRecon_ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z12OptionsRecon;
  recon.fObj = obj;
  recon.fType = type;
  pHVar1 = Compact__12ReconBuilderP11ReconObjecti
                     ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return pHVar1;
}

void void ReconLoadObject<OptionsRecon>(OptionsRecon *obj, HandleNode *mem, SInt32 type, SInt32 *version) {
	SimpleReconObject<OptionsRecon> recon;
	ReconBuilder rb;
	OptionsRecon *obj;
	SInt32 type;
	
  SimpleReconObject_OptionsRecon_ recon;
  ReconBuilder__26_4392 rb;
  
  recon.field0_0x0.__vtable = (ReconObject__vtable *)_vt_t17SimpleReconObject1Z12OptionsRecon;
  recon.fObj = obj;
  recon.fType = type;
  Reconstitute__12ReconBuilderP11ReconObjectPQ26Memory10HandleNodePi
            ((ReconBuilder__6_5003 *)&rb,&recon.field0_0x0,mem,version);
  ___11ReconObject(&recon.field0_0x0,2);
  return;
}

UnlockedId* UnlockedId * copy_backward<UnlockedId *, UnlockedId *>(UnlockedId *first, UnlockedId *last, UnlockedId *result) {
  if (first != last) {
    do {
      last = last + -1;
      result = result + -1;
      result->id = last->id;
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

UnlockedId* UnlockedId * uninitialized_copy<UnlockedId *, UnlockedId *>(UnlockedId *first, UnlockedId *last, UnlockedId *result) {
	UnlockedId *p;
	UnlockedId &value;
	void *pAddress;
	
  uchar *puVar1;
  UnlockedId *pUVar2;
  
  pUVar2 = result;
  if (first != last) {
    do {
      puVar1 = &first->id;
      first = first + 1;
      result = pUVar2 + 1;
      pUVar2->id = *puVar1;
      pUVar2 = result;
    } while (first != last);
  }
  return result;
}

void vector<UnlockedId, __malloc_alloc_template<0> >::insert_aux(UnlockedId *position, UnlockedId &x) {
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	void *result;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	UnlockedId *p;
	UnlockedId &value;
	void *pAddress;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	UnlockedId *first;
	UnlockedId *pointer;
	vector<UnlockedId,__malloc_alloc_template<0> > *this;
	
  uchar uVar1;
  UnlockedId *pUVar2;
  UnlockedId *pUVar3;
  int iVar4;
  UnlockedId *pUVar5;
  uint size;
  
  pUVar2 = this->finish;
  if (pUVar2 == this->end_of_storage) {
    iVar4 = (int)pUVar2 - (int)this->start;
    size = 1;
    if (iVar4 != 0) {
      size = iVar4 * 2;
    }
                    /* inlined from ../MSrc/alloc.h */
    pUVar2 = (UnlockedId *)0x0;
    if ((size != 0) && (pUVar2 = (UnlockedId *)malloc(size), pUVar2 == (UnlockedId *)0x0)) {
      pUVar2 = (UnlockedId *)oom_malloc__t23__malloc_alloc_template1i0Ui(size);
    }
                    /* end of inlined section */
                    /* end of inlined section */
    uninitialized_copy__H2ZP10UnlockedIdZP10UnlockedId_X01X01X11_X11(this->start,position,pUVar2);
                    /* inlined from ../MSrc/algobase.h */
    pUVar5 = pUVar2 + iVar4;
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    pUVar2[(int)position - (int)this->start].id = x->id;
                    /* end of inlined section */
    uninitialized_copy__H2ZP10UnlockedIdZP10UnlockedId_X01X01X11_X11
              (position,this->finish,pUVar2 + (int)(position + (1 - (int)this->start)));
                    /* inlined from ../MSrc/algobase.h */
    pUVar3 = this->start;
    if (pUVar3 == this->finish) {
      pUVar3 = this->start;
    }
    else {
      do {
        pUVar3 = pUVar3 + 1;
      } while (pUVar3 != this->finish);
                    /* end of inlined section */
      pUVar3 = this->start;
    }
                    /* inlined from ../MSrc/alloc.h */
    if ((pUVar3 != (UnlockedId *)0x0) && (this->end_of_storage != pUVar3)) {
      free(pUVar3);
                    /* end of inlined section */
    }
    this->start = pUVar2;
    this->end_of_storage = pUVar2 + size;
  }
  else {
                    /* inlined from ../MSrc/algobase.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/algobase.h */
    pUVar2->id = pUVar2[-1].id;
                    /* end of inlined section */
    uVar1 = x->id;
    copy_backward__H2ZP10UnlockedIdZP10UnlockedId_X01X01X11_X11
              (position,this->finish + -1,this->finish);
    position->id = uVar1;
    pUVar5 = this->finish;
  }
  this->finish = pUVar5 + 1;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vTopLeft.field0_0x0.d[0] = 0.184375;
    vTopLeft.field0_0x0.d[1] = 0.1875;
    vTopLeftMessage.field0_0x0.d[0] = 0.2;
    vTopLeftMessage.field0_0x0.d[1] = 0.28;
    vWHDialog.field0_0x0.d[0] = 0.6390625;
    vWHDialog.field0_0x0.d[1] = 0.49375;
    vWHMessageBack.field0_0x0.d[0] = 0.5428125;
    vWHMessageBack.field0_0x0.d[1] = 0.26625;
    vWHMessageBox.field0_0x0.d[1] = 0.2958333;
    vWPromptBar.field0_0x0.d[0] = 0.603125;
    vWPromptBar.field0_0x0.d[1] = 0.05;
    vWHMessageBox.field0_0x0.d[0] = 0.603125;
    vWTitleBar.field0_0x0.d[0] = 0.603125;
    vWTitleBar.field0_0x0.d[1] = 0.05;
  }
  return;
}

void SimpleReconObject<OptionsRecon>::~SimpleReconObject(int __in_chrg) {
  ___11ReconObject(&this->field0_0x0,__in_chrg);
  return;
}

void SimpleReconObject<OptionsRecon>::DoStream(ReconBuffer *r, SInt32 version) {
  DoStream__12OptionsReconP11ReconBufferi(this->fObj,r,version);
  return;
}

SInt32 SimpleReconObject<OptionsRecon>::GetType() {
  return this->fType;
}

void global constructors keyed to ESimsMemCard::ESimsMemCard() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
