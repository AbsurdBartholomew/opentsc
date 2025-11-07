// STATUS: NOT STARTED

#include "textentry.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2251;
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

__vtbl_ptr_type ETextEntryDialog virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETextEntryDialog::~ETextEntryDialog,
		/* .__delta2 = */ 328
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::Update,
		/* .__delta2 = */ 2272
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ETextEntryDialog::Draw,
		/* .__delta2 = */ 1120
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
		/* .__pfn = */ &ETextEntryDialog::Message,
		/* .__delta2 = */ 2656
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

ETextEntryDialog* ETextEntryDialog::ETextEntryDialog(c16 *pTitle, float fMaxWidth, s32 nControllerId, bool bAddSpace) {
  int iVar1;
  TNodeList_EUIObjectNode___ *pTVar2;
  
  __13EUIObjectNode(&this->field0_0x0);
  pTVar2 = this->m_ctrlicons;
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16ETextEntryDialog;
  iVar1 = 2;
  do {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    (pTVar2->field0_0x0).m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
    iVar1 = iVar1 + -1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    (pTVar2->field0_0x0).m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
    pTVar2 = pTVar2 + 1;
  } while (iVar1 != -1);
  CreateKeyboard__16ETextEntryDialogPCUsib(this,pTitle,nControllerId,bAddSpace);
  this->m_nMaxCharacters = 0x1f;
  this->m_fMaxWidth = fMaxWidth + 0.06;
  return this;
}

ETextEntryDialog* ETextEntryDialog::ETextEntryDialog(c16 *pTitle, u32 nMaxCharacters, s32 nControllerId, bool bAddSpace) {
	EVec2 vSize;
	
  int iVar1;
  TNodeList_EUIObjectNode___ *pTVar2;
  float fVar3;
  EVec2 vSize;
  
  __13EUIObjectNode(&this->field0_0x0);
  pTVar2 = this->m_ctrlicons;
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16ETextEntryDialog;
  iVar1 = 2;
  do {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    (pTVar2->field0_0x0).m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
    iVar1 = iVar1 + -1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    (pTVar2->field0_0x0).m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
    pTVar2 = pTVar2 + 1;
  } while (iVar1 != -1);
  CreateKeyboard__16ETextEntryDialogPCUsib(this,pTitle,nControllerId,bAddSpace);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&vSize,this->m_pFont,true,(EWindow *)0x0);
                    /* end of inlined section */
  if ((int)nMaxCharacters < 0) {
    fVar3 = (float)(nMaxCharacters & 1 | nMaxCharacters >> 1);
    fVar3 = fVar3 + fVar3;
  }
  else {
    fVar3 = (float)nMaxCharacters;
  }
  this->m_nMaxCharacters = nMaxCharacters;
  this->m_fMaxWidth = fVar3 * vSize.field0_0x0.d[0] + 0.06;
  return this;
}

ETextEntryDialog* ETextEntryDialog::ETextEntryDialog(c16 *pTitle, u32 nMaxCharacters, float fMaxWidth, s32 nControllerId, bool bAddSpace) {
  int iVar1;
  TNodeList_EUIObjectNode___ *pTVar2;
  
  __13EUIObjectNode(&this->field0_0x0);
  pTVar2 = this->m_ctrlicons;
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16ETextEntryDialog;
  iVar1 = 2;
  do {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    (pTVar2->field0_0x0).m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
    iVar1 = iVar1 + -1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    (pTVar2->field0_0x0).m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
    pTVar2 = pTVar2 + 1;
  } while (iVar1 != -1);
  CreateKeyboard__16ETextEntryDialogPCUsib(this,pTitle,nControllerId,bAddSpace);
  this->m_nMaxCharacters = nMaxCharacters;
  this->m_fMaxWidth = fMaxWidth + 0.06;
  return this;
}

void ETextEntryDialog::CreateKeyboard(c16 *pTitle, s32 nControllerId, bool bAddSpace) {
	int i;
	u32 nNumColumns;
	EUIVirtualCtrl *pBase;
	EUIAlphaMenuDef def;
	EVec2 vSize;
	u32 _nColumns;
	EUIVirtualCtrl *pCtrl;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	
  EUIObjectNode__vtable *pEVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ERFont *pEVar5;
  uint uVar6;
  EUIAlphaMenu *pEVar7;
  short *psVar8;
  int iVar9;
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
  float fVar10;
  float fVar11;
  EUIAlphaMenuDef def;
  EVec2 vSize;
  float local_f0;
  EStorable__vtable *local_ec;
  ENodeListNode *local_e8;
  float local_e0;
  int local_dc;
  float local_d8;
  uint nNumColumns;
  float *local_cc;
  EHashTableNode **local_c0;
  uint uStack_bc;
  EFontSize *local_b0;
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
  
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (EHashTableNode **)unaff_s0;
  uStack_bc = (uint)((ulong)unaff_s0 >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* end of inlined section */
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_b0 = (EFontSize *)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  this->m_pKeyboard[0] = (EUIAlphaMenu *)0x0;
  this->m_pKeyboard[1] = (EUIAlphaMenu *)0x0;
  this->m_pKeyboard[2] = (EUIAlphaMenu *)0x0;
  this->m_pCtrlKeys[0] = (EUIMenu *)0x0;
  this->m_pCtrlKeys[1] = (EUIMenu *)0x0;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  this->m_pCtrlKeys[2] = (EUIMenu *)0x0;
  pEVar5 = (ERFont *)
           AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar5;
  uVar4 = _WHITE.field0_0x0.d[3];
  uVar3 = _WHITE.field0_0x0.d[2];
  uVar2 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar5->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar5->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
  (pEVar5->m_vColor).field0_0x0.d[2] = uVar3;
  (pEVar5->m_vColor).field0_0x0.d[3] = uVar4;
                    /* end of inlined section */
  SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
  local_cc = &local_f0;
  *(undefined4 *)&this->m_bReturnValue = 1;
  this->m_szTitle[0] = *pTitle;
  if (*pTitle != 0) {
    psVar8 = this->m_szTitle;
    iVar9 = 1;
    do {
      psVar8 = psVar8 + 1;
      pTitle = pTitle + 1;
      if (0x3e < iVar9) break;
      *psVar8 = *pTitle;
      iVar9 = iVar9 + 1;
    } while (*pTitle != 0);
  }
  this->m_szTitle[0x3f] = 0;
                    /* end of inlined section */
  uVar6 = GetNumUserCharacters__7EGlobalUi(&_globals,0);
  GetBackgroundSize__16ETextEntryDialogUiPUiP5EVec4T3
            (this,uVar6,&nNumColumns,&this->m_vBackground,&this->m_vDimentions);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vSize.field0_0x0.d[0] = 0.05;
  vSize.field0_0x0.d[1] = 0.05;
  def.m_fontid = -0x2080f4e9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  def.m_pointSize = 15.0;
  def.m_charWH.field0_0x0.d[0] = 0.05;
  def.m_nChars = 0;
  def.m_nColumns = nNumColumns;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  def.m_charWH.field0_0x0.d[1] = 0.05;
  def.m_selColorIdxTxt = 6;
  def.m_iconflags = 2;
  def.m_pCtrl = &(_globals.m_pCtrlPad)->field0_0x0;
  def.m_selColorIdxBack = 0;
  def.m_colorIdxBack = 0;
  def.m_colorIdxTxt = 1;
                    /* end of inlined section */
  def.m_skipChar = 0;
  pEVar7 = (EUIAlphaMenu *)__builtin_new(0xe0);
  psVar8 = GetUserCharacterArray__7EGlobalUi(&_globals,0);
  pEVar7 = __12EUIAlphaMenuRC15EUIAlphaMenuDefPCUs(pEVar7,&def,psVar8);
  vSize.field0_0x0.d[0] = (this->m_vBackground).field0_0x0.d[0] + 0.025;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  vSize.field0_0x0.d[1] = (this->m_vBackground).field0_0x0.d[1] + 0.0125;
  this->m_pKeyboard[0] = pEVar7;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar1 = (pEVar7->field0_0x0).field0_0x0.field0_0x0.__vtable;
  local_ec = (EStorable__vtable *)0x0;
  local_f0 = vSize.field0_0x0.d[0];
  local_e8 = (ENodeListNode *)vSize.field0_0x0.d[1];
  (*(code *)pEVar1->OnButtonRepeat)
            ((int)(pEVar7->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar1->StateChanged + -0x44,local_cc);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vSize.field0_0x0.d[0] = (this->m_vBackground).field0_0x0.d[2];
                    /* end of inlined section */
  pEVar1 = (this->m_pKeyboard[0]->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vSize.field0_0x0.d[1] = (this->m_vBackground).field0_0x0.d[3];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (*(code *)pEVar1->RemoveChild)
            ((int)(this->m_pKeyboard[0]->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar1->AddChild + -0x44,&vSize);
  SetOptGapXY__11EUIGridMenuff(&this->m_pKeyboard[0]->field0_0x0,0.0,0.0);
  if (nControllerId < 0) {
    nControllerId = 0;
  }
  else if (1 < nControllerId) {
    nControllerId = 1;
  }
  SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_pKeyboard[0],nControllerId);
  pEVar1 = (this->m_pKeyboard[0]->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[3].Message)
            ((int)(this->m_pKeyboard[0]->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar1[3].SetBoxDims + -0x44,4);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].GetPos)
            ((int)this->m_szText + *(short *)&pEVar1[1].OnStickRepeat + -0x3e,this->m_pKeyboard[0]);
  uVar6 = GetNumUserCharacters__7EGlobalUi(&_globals,1);
  if (uVar6 == 0) {
    InitCtrlKeyCol__16ETextEntryDialogbUiUi(this,bAddSpace,0,1);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_pKeyboard[0],nControllerId);
    pEVar1 = (this->m_pKeyboard[0]->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[3].Message)
              ((int)(this->m_pKeyboard[0]->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar1[3].SetBoxDims + -0x44,4);
    this->m_nCurrentChar = '\0';
  }
  else {
    uVar6 = GetNumUserCharacters__7EGlobalUi(&_globals,1);
    fVar11 = 0.0125;
    GetBackgroundSize__16ETextEntryDialogUiPUiP5EVec4T3
              (this,uVar6,&nNumColumns,&this->m_vBackgroundTwo,&this->m_vDimentionsTwo);
    def.m_nColumns = nNumColumns;
    pEVar7 = (EUIAlphaMenu *)__builtin_new(0xe0);
    psVar8 = GetUserCharacterArray__7EGlobalUi(&_globals,1);
    pEVar7 = __12EUIAlphaMenuRC15EUIAlphaMenuDefPCUs(pEVar7,&def,psVar8);
                    /* end of inlined section */
    fVar10 = (this->m_vBackgroundTwo).field0_0x0.d[1];
    vSize.field0_0x0.d[0] = (this->m_vBackgroundTwo).field0_0x0.d[0] + 0.025;
    this->m_pKeyboard[1] = pEVar7;
    vSize.field0_0x0.d[1] = fVar10 + fVar11;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    pEVar1 = (pEVar7->field0_0x0).field0_0x0.field0_0x0.__vtable;
    local_dc = 0;
    local_e0 = vSize.field0_0x0.d[0];
    local_d8 = vSize.field0_0x0.d[1];
    (*(code *)pEVar1->OnButtonRepeat)
              ((int)(pEVar7->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar1->StateChanged + -0x44,&local_e0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vSize.field0_0x0.d[0] = (this->m_vBackgroundTwo).field0_0x0.d[2];
                    /* end of inlined section */
    pEVar1 = (this->m_pKeyboard[1]->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vSize.field0_0x0.d[1] = (this->m_vBackgroundTwo).field0_0x0.d[3];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    (*(code *)pEVar1->RemoveChild)
              ((int)(this->m_pKeyboard[1]->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar1->AddChild + -0x44,&vSize);
    SetOptGapXY__11EUIGridMenuff(&this->m_pKeyboard[1]->field0_0x0,0.0,0.0);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_pKeyboard[0],nControllerId);
    pEVar1 = (this->m_pKeyboard[0]->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[3].Message)
              ((int)(this->m_pKeyboard[0]->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar1[3].SetBoxDims + -0x44,4);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_pKeyboard[1],nControllerId);
    pEVar1 = (this->m_pKeyboard[1]->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[3].Message)
              ((int)(this->m_pKeyboard[1]->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar1[3].SetBoxDims + -0x44,4);
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetPos)
              ((int)this->m_szText + *(short *)&pEVar1[1].OnStickRepeat + -0x3e,this->m_pKeyboard[1]
              );
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[0],2,true);
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[0],4,true);
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[1],2,false);
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[1],4,false);
    uVar6 = GetNumUserCharacters__7EGlobalUi(&_globals,2);
    if (uVar6 == 0) {
      SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_pKeyboard[0],nControllerId);
      pEVar1 = (this->m_pKeyboard[0]->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[3].Message)
                ((int)(this->m_pKeyboard[0]->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1[3].SetBoxDims + -0x44,4);
      SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_pKeyboard[1],nControllerId);
      pEVar1 = (this->m_pKeyboard[1]->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[3].Message)
                ((int)(this->m_pKeyboard[1]->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1[3].SetBoxDims + -0x44,4);
      InitCtrlKeyCol__16ETextEntryDialogbUiUi(this,bAddSpace,0,2);
      InitCtrlKeyCol__16ETextEntryDialogbUiUi(this,bAddSpace,1,2);
      SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_pKeyboard[0],nControllerId);
      pEVar1 = (this->m_pKeyboard[0]->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[3].Message)
                ((int)(this->m_pKeyboard[0]->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1[3].SetBoxDims + -0x44,4);
      SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_pKeyboard[1],nControllerId);
      pEVar1 = (this->m_pKeyboard[1]->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[3].Message)
                ((int)(this->m_pKeyboard[1]->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1[3].SetBoxDims + -0x44,4);
      this->m_nCurrentChar = '\0';
    }
    else {
      uVar6 = GetNumUserCharacters__7EGlobalUi(&_globals,2);
      GetBackgroundSize__16ETextEntryDialogUiPUiP5EVec4T3
                (this,uVar6,&nNumColumns,&this->m_vBackgroundThree,&this->m_vDimentionsThree);
      def.m_nColumns = nNumColumns;
      pEVar7 = (EUIAlphaMenu *)__builtin_new(0xe0);
      psVar8 = GetUserCharacterArray__7EGlobalUi(&_globals,2);
      pEVar7 = __12EUIAlphaMenuRC15EUIAlphaMenuDefPCUs(pEVar7,&def,psVar8);
      vSize.field0_0x0.d[0] = (this->m_vBackgroundThree).field0_0x0.d[0] + 0.025;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      vSize.field0_0x0.d[1] = (this->m_vBackgroundThree).field0_0x0.d[1] + fVar11;
      this->m_pKeyboard[2] = pEVar7;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      pEVar1 = (pEVar7->field0_0x0).field0_0x0.field0_0x0.__vtable;
      local_ec = (EStorable__vtable *)0x0;
      local_f0 = vSize.field0_0x0.d[0];
      local_e8 = (ENodeListNode *)vSize.field0_0x0.d[1];
      (*(code *)pEVar1->OnButtonRepeat)
                ((int)(pEVar7->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1->StateChanged + -0x44,local_cc);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vSize.field0_0x0.d[0] = (this->m_vBackgroundThree).field0_0x0.d[2];
                    /* end of inlined section */
      pEVar1 = (this->m_pKeyboard[2]->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vSize.field0_0x0.d[1] = (this->m_vBackgroundThree).field0_0x0.d[3];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      (*(code *)pEVar1->RemoveChild)
                ((int)(this->m_pKeyboard[2]->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1->AddChild + -0x44,&vSize);
      SetOptGapXY__11EUIGridMenuff(&this->m_pKeyboard[2]->field0_0x0,0.0,0.0);
      SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_pKeyboard[2],nControllerId);
      pEVar1 = (this->m_pKeyboard[2]->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[3].Message)
                ((int)(this->m_pKeyboard[2]->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1[3].SetBoxDims + -0x44,4);
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1[1].GetPos)
                ((int)this->m_szText + *(short *)&pEVar1[1].OnStickRepeat + -0x3e,
                 this->m_pKeyboard[2]);
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[2],2,false);
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[2],4,false);
      InitCtrlKeyCol__16ETextEntryDialogbUiUi(this,bAddSpace,0,3);
      InitCtrlKeyCol__16ETextEntryDialogbUiUi(this,bAddSpace,1,3);
      InitCtrlKeyCol__16ETextEntryDialogbUiUi(this,bAddSpace,2,3);
      SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_pKeyboard[0],nControllerId);
      pEVar1 = (this->m_pKeyboard[0]->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[3].Message)
                ((int)(this->m_pKeyboard[0]->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1[3].SetBoxDims + -0x44,4);
      SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_pKeyboard[1],nControllerId);
      pEVar1 = (this->m_pKeyboard[1]->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[3].Message)
                ((int)(this->m_pKeyboard[1]->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1[3].SetBoxDims + -0x44,4);
      SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_pKeyboard[2],nControllerId);
      pEVar1 = (this->m_pKeyboard[2]->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar1[3].Message)
                ((int)(this->m_pKeyboard[2]->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar1[3].SetBoxDims + -0x44,4);
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1[1].GetPos)
                ((int)this->m_szText + *(short *)&pEVar1[1].OnStickRepeat + -0x3e,
                 this->m_pKeyboard[2]);
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[0],2,false);
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[0],4,false);
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[1],2,false);
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[1],4,false);
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[2],2,false);
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[2],4,false);
      this->m_nCurrentChar = '\0';
    }
  }
  iVar9 = 0x1f;
  psVar8 = this->m_szText + 0x1f;
  do {
    *psVar8 = 0;
    iVar9 = iVar9 + -1;
    psVar8 = psVar8 + -1;
  } while (-1 < iVar9);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vSize,this->m_pFont,(bool)((char)this + '~'),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  this->m_nCurrentPage = 0;
  this->m_fTitleWidth = vSize.field0_0x0.d[0] + 0.1;
  return;
}

void ETextEntryDialog::InitCtrlKeyCol(bool bAddSpace, u32 nIndex, u32 nNumPages) {
	float strH;
	EUITextIconDef textDef;
	EUIIconDef icondef;
	EUITextIcon *pIcon;
	EUIObjectNode *this;
	EUIMenu *this;
	EUIVirtualCtrl *pCtrl;
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	EUIObjectNode *data;
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	EUIObjectNode *data;
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	EUIObjectNode *data;
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	
  short sVar1;
  ERFont *szString;
  EUIObjectNode__vtable *pEVar2;
  uint uVar3;
  EUIMenu *pEVar4;
  short *psVar5;
  EUIDynTextIcon *pEVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  EUIMenu **ppEVar7;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar8;
  EStorable__vtable *pEVar9;
  undefined local_130 [16];
  EUITextIconDef textDef;
  EUIIconDef icondef;
  EFontSize *local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d0;
  uint local_cc;
  uint local_c8;
  int local_c4;
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
  
                    /* end of inlined section */
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  local_c4 = nIndex << 3;
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  ppEVar7 = this->m_pCtrlKeys + nIndex;
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  local_d0 = (int)bAddSpace;
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_cc = nIndex;
  local_c8 = nNumPages;
  pEVar4 = (EUIMenu *)__builtin_new(0x98);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar9 = (EStorable__vtable *)0x3df5c28f;
                    /* end of inlined section */
  pEVar4 = __7EUIMenuiifff(pEVar4,-1,0,0.05,0.0,0.0);
  *ppEVar7 = pEVar4;
  szString = this->m_pFont;
  psVar5 = GetMemCardUIString__7EGlobalPCc(&_globals,"Backspace");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_130,szString,SUB41(psVar5,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar2 = ((*ppEVar7)->field0_0x0).__vtable;
  local_130._4_4_ = (char *)((float)local_130._4_4_ * 3.0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130._0_4_ = (EStorable__vtable *)0x3e4ccccd;
                    /* end of inlined section */
  (*(code *)pEVar2->RemoveChild)
            ((int)(*ppEVar7)->m_maxBackShdrSize + *(short *)&pEVar2->AddChild + -0x44,local_130);
  pEVar2 = ((*ppEVar7)->field0_0x0).__vtable;
  (*(code *)pEVar2[2].GetPos)
            ((int)(*ppEVar7)->m_maxBackShdrSize + *(short *)&pEVar2[2].OnStickRepeat + -0x44,0,2,1);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  SetActiveController__13EUIObjectNodeUi
            (&(*ppEVar7)->field0_0x0,
             (this->m_pKeyboard[nIndex]->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl);
  pEVar2 = ((*ppEVar7)->field0_0x0).__vtable;
  (*(code *)pEVar2[2].RemoveChild)
            ((int)(*ppEVar7)->m_maxBackShdrSize + *(short *)&pEVar2[2].AddChild + -0x44,4);
  fVar8 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar4 = *ppEVar7;
  pEVar4->m_optgap = fVar8;
  pEVar2 = (pEVar4->field0_0x0).__vtable;
  (*(code *)pEVar2[2].Message)
            ((int)pEVar4->m_maxBackShdrSize + *(short *)&pEVar2[2].SetBoxDims + -0x44);
  textDef.m_maxChars = 0xf;
  textDef.m_xAlign = E_FAX_CENTER;
  textDef.m_yAlign = E_FAY_TOP;
  textDef.m_selColorIdx = 6;
  textDef.m_colorIdx = 1;
  textDef.m_pointsize = 15.0;
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_flags = 2;
  icondef.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_pCtrl = &(_globals.m_pCtrlPad)->field0_0x0;
                    /* end of inlined section */
  textDef.m_retChar = 1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_selColorIdx = 0;
  icondef.m_colorIdx = 0;
  local_d8 = 0;
  local_dc = 0;
                    /* end of inlined section */
  local_e0 = (EFontSize *)0x0;
  pEVar6 = (EUIDynTextIcon *)__builtin_new(0x98);
  pEVar6 = __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                     (pEVar6,&textDef,&icondef,-0x2080f4e9,(EVec3 *)&local_e0);
  pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
  sVar1 = *(short *)&pEVar2[2].StateChanged;
  psVar5 = GetMemCardUIString__7EGlobalPCc(&_globals,"Backspace");
  (*(code *)pEVar2[2].OnButtonRepeat)
            ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar1 + 4,psVar5,0);
  pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130._4_4_ = (char *)0x3d4ccccd;
                    /* end of inlined section */
  local_130._0_4_ = pEVar9;
  (*(code *)pEVar2->RemoveChild)
            ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar2->AddChild + 4,local_130);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi
            ((ENodeList *)((int)&this->m_ctrlicons[0].field0_0x0.m_l.m_pHead + local_c4),
             (uint)pEVar6);
  local_d8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_dc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_e0 = (EFontSize *)0x0;
                    /* end of inlined section */
  pEVar2 = ((*ppEVar7)->field0_0x0).__vtable;
  (*(code *)pEVar2[2].SetBoxDims)
            ((int)(*ppEVar7)->m_maxBackShdrSize + *(short *)&pEVar2[2].SetPos + -0x44,pEVar6,
             (EVec3 *)&local_e0);
  if (local_d0 != 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_d8 = 0;
                    /* end of inlined section */
    textDef.m_retChar = 0x20;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_dc = 0;
                    /* end of inlined section */
    local_e0 = (EFontSize *)0x0;
    pEVar6 = (EUIDynTextIcon *)__builtin_new(0x98);
    pEVar6 = __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                       (pEVar6,&textDef,&icondef,-0x2080f4e9,(EVec3 *)&local_e0);
    pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
    sVar1 = *(short *)&pEVar2[2].StateChanged;
    psVar5 = GetMemCardUIString__7EGlobalPCc(&_globals,"Space");
    (*(code *)pEVar2[2].OnButtonRepeat)
              ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar1 + 4,psVar5,0);
    pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130._4_4_ = (char *)0x3d4ccccd;
                    /* end of inlined section */
    local_130._0_4_ = pEVar9;
    (*(code *)pEVar2->RemoveChild)
              ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar2->AddChild + 4,local_130);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi
              ((ENodeList *)((int)&this->m_ctrlicons[0].field0_0x0.m_l.m_pHead + local_c4),
               (uint)pEVar6);
    local_d8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_dc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_e0 = (EFontSize *)0x0;
                    /* end of inlined section */
    pEVar2 = ((*ppEVar7)->field0_0x0).__vtable;
    (*(code *)pEVar2[2].SetBoxDims)
              ((int)(*ppEVar7)->m_maxBackShdrSize + *(short *)&pEVar2[2].SetPos + -0x44,pEVar6,
               (EVec3 *)&local_e0);
  }
  if (local_c8 == 2) {
    if (local_cc == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_d8 = 0;
                    /* end of inlined section */
      textDef.m_retChar = 0xd;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_dc = 0;
                    /* end of inlined section */
      local_e0 = (EFontSize *)0x0;
      pEVar6 = (EUIDynTextIcon *)__builtin_new(0x98);
      pEVar6 = __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                         (pEVar6,&textDef,&icondef,-0x2080f4e9,(EVec3 *)&local_e0);
      pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
      sVar1 = *(short *)&pEVar2[2].StateChanged;
      psVar5 = GetMemCardUIString__7EGlobalPCc(&_globals,"user_characters_two_prompt");
      (*(code *)pEVar2[2].OnButtonRepeat)
                ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar1 + 4,psVar5,0);
      pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_130._4_4_ = (char *)0x3d4ccccd;
                    /* end of inlined section */
      local_130._0_4_ = pEVar9;
      (*(code *)pEVar2->RemoveChild)
                ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->AddChild + 4,local_130);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&this->m_ctrlicons[0].field0_0x0,(uint)pEVar6);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      pEVar4 = this->m_pCtrlKeys[0];
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_d8 = 0;
                    /* end of inlined section */
      textDef.m_retChar = 0xc;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_dc = 0;
                    /* end of inlined section */
      local_e0 = (EFontSize *)0x0;
      pEVar6 = (EUIDynTextIcon *)__builtin_new(0x98);
      pEVar6 = __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                         (pEVar6,&textDef,&icondef,-0x2080f4e9,(EVec3 *)&local_e0);
      pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
      sVar1 = *(short *)&pEVar2[2].StateChanged;
      psVar5 = GetMemCardUIString__7EGlobalPCc(&_globals,"user_characters_prompt");
      (*(code *)pEVar2[2].OnButtonRepeat)
                ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar1 + 4,psVar5,0);
      pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_130._4_4_ = (char *)0x3d4ccccd;
                    /* end of inlined section */
      local_130._0_4_ = pEVar9;
      (*(code *)pEVar2->RemoveChild)
                ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->AddChild + 4,local_130);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi
                ((ENodeList *)((int)&this->m_ctrlicons[0].field0_0x0.m_l.m_pHead + local_c4),
                 (uint)pEVar6);
                    /* end of inlined section */
      pEVar4 = *ppEVar7;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    }
  }
  else {
    if (local_c8 != 3) goto LAB_001dffe4;
    if (local_cc == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_d8 = 0;
                    /* end of inlined section */
      textDef.m_retChar = 0xd;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_dc = 0;
                    /* end of inlined section */
      local_e0 = (EFontSize *)0x0;
      pEVar6 = (EUIDynTextIcon *)__builtin_new(0x98);
      pEVar6 = __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                         (pEVar6,&textDef,&icondef,-0x2080f4e9,(EVec3 *)&local_e0);
      pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
      sVar1 = *(short *)&pEVar2[2].StateChanged;
      psVar5 = GetMemCardUIString__7EGlobalPCc(&_globals,"user_characters_two_prompt");
      (*(code *)pEVar2[2].OnButtonRepeat)
                ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar1 + 4,psVar5,0);
      pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_130._4_4_ = (char *)0x3d4ccccd;
                    /* end of inlined section */
      local_130._0_4_ = pEVar9;
      (*(code *)pEVar2->RemoveChild)
                ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->AddChild + 4,local_130);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&this->m_ctrlicons[0].field0_0x0,(uint)pEVar6);
      local_d8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_dc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_e0 = (EFontSize *)0x0;
                    /* end of inlined section */
      pEVar2 = (this->m_pCtrlKeys[0]->field0_0x0).__vtable;
      (*(code *)pEVar2[2].SetBoxDims)
                ((int)this->m_pCtrlKeys[0]->m_maxBackShdrSize + *(short *)&pEVar2[2].SetPos + -0x44,
                 pEVar6,(EVec3 *)&local_e0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_d8 = 0;
                    /* end of inlined section */
      textDef.m_retChar = 0xe;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_dc = 0;
                    /* end of inlined section */
      local_e0 = (EFontSize *)0x0;
      pEVar6 = (EUIDynTextIcon *)__builtin_new(0x98);
      pEVar6 = __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                         (pEVar6,&textDef,&icondef,-0x2080f4e9,(EVec3 *)&local_e0);
      pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
      sVar1 = *(short *)&pEVar2[2].StateChanged;
      psVar5 = GetMemCardUIString__7EGlobalPCc(&_globals,"user_characters_three_prompt");
      (*(code *)pEVar2[2].OnButtonRepeat)
                ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar1 + 4,psVar5,0);
      pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_130._4_4_ = (char *)0x3d4ccccd;
                    /* end of inlined section */
      local_130._0_4_ = pEVar9;
      (*(code *)pEVar2->RemoveChild)
                ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->AddChild + 4,local_130);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&this->m_ctrlicons[0].field0_0x0,(uint)pEVar6);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      pEVar4 = this->m_pCtrlKeys[0];
    }
    else {
      if (local_cc != 1) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_d8 = 0;
                    /* end of inlined section */
        textDef.m_retChar = 0xc;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_dc = 0;
                    /* end of inlined section */
        local_e0 = (EFontSize *)0x0;
        pEVar6 = (EUIDynTextIcon *)__builtin_new(0x98);
        pEVar6 = __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                           (pEVar6,&textDef,&icondef,-0x2080f4e9,(EVec3 *)&local_e0);
        pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
        sVar1 = *(short *)&pEVar2[2].StateChanged;
        psVar5 = GetMemCardUIString__7EGlobalPCc(&_globals,"user_characters_prompt");
        (*(code *)pEVar2[2].OnButtonRepeat)
                  ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar1 + 4,psVar5,0
                  );
        pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_130._4_4_ = (char *)0x3d4ccccd;
                    /* end of inlined section */
        local_130._0_4_ = pEVar9;
        (*(code *)pEVar2->RemoveChild)
                  ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar2->AddChild + 4,local_130);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi
                  ((ENodeList *)((int)&this->m_ctrlicons[0].field0_0x0.m_l.m_pHead + local_c4),
                   (uint)pEVar6);
        local_d8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_dc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_e0 = (EFontSize *)0x0;
                    /* end of inlined section */
        pEVar2 = ((*ppEVar7)->field0_0x0).__vtable;
        (*(code *)pEVar2[2].SetBoxDims)
                  ((int)(*ppEVar7)->m_maxBackShdrSize + *(short *)&pEVar2[2].SetPos + -0x44,pEVar6,
                   (EVec3 *)&local_e0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_d8 = 0;
                    /* end of inlined section */
        textDef.m_retChar = 0xd;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_dc = 0;
                    /* end of inlined section */
        local_e0 = (EFontSize *)0x0;
        pEVar6 = (EUIDynTextIcon *)__builtin_new(0x98);
        pEVar6 = __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                           (pEVar6,&textDef,&icondef,-0x2080f4e9,(EVec3 *)&local_e0);
        pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
        sVar1 = *(short *)&pEVar2[2].StateChanged;
        psVar5 = GetMemCardUIString__7EGlobalPCc(&_globals,"user_characters_two_prompt");
        (*(code *)pEVar2[2].OnButtonRepeat)
                  ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar1 + 4,psVar5,0
                  );
        pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_130._4_4_ = (char *)0x3d4ccccd;
                    /* end of inlined section */
        local_130._0_4_ = pEVar9;
        (*(code *)pEVar2->RemoveChild)
                  ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar2->AddChild + 4,local_130);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi
                  ((ENodeList *)((int)&this->m_ctrlicons[0].field0_0x0.m_l.m_pHead + local_c4),
                   (uint)pEVar6);
        local_e0 = (EFontSize *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_d8 = 0;
        local_dc = 0;
                    /* end of inlined section */
        pEVar2 = ((*ppEVar7)->field0_0x0).__vtable;
        (*(code *)pEVar2[2].SetBoxDims)
                  ((int)(*ppEVar7)->m_maxBackShdrSize + *(short *)&pEVar2[2].SetPos + -0x44,pEVar6,
                   (EVec3 *)&local_e0);
        goto LAB_001dffe4;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_d8 = 0;
                    /* end of inlined section */
      textDef.m_retChar = 0xc;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_dc = 0;
                    /* end of inlined section */
      local_e0 = (EFontSize *)0x0;
      pEVar6 = (EUIDynTextIcon *)__builtin_new(0x98);
      pEVar6 = __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                         (pEVar6,&textDef,&icondef,-0x2080f4e9,(EVec3 *)&local_e0);
      pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
      sVar1 = *(short *)&pEVar2[2].StateChanged;
      psVar5 = GetMemCardUIString__7EGlobalPCc(&_globals,"user_characters_prompt");
      (*(code *)pEVar2[2].OnButtonRepeat)
                ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar1 + 4,psVar5,0);
      pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_130._4_4_ = (char *)0x3d4ccccd;
                    /* end of inlined section */
      local_130._0_4_ = pEVar9;
      (*(code *)pEVar2->RemoveChild)
                ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->AddChild + 4,local_130);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&this->m_ctrlicons[1].field0_0x0,(uint)pEVar6);
      local_d8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_dc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_e0 = (EFontSize *)0x0;
                    /* end of inlined section */
      pEVar2 = (this->m_pCtrlKeys[1]->field0_0x0).__vtable;
      (*(code *)pEVar2[2].SetBoxDims)
                ((int)this->m_pCtrlKeys[1]->m_maxBackShdrSize + *(short *)&pEVar2[2].SetPos + -0x44,
                 pEVar6,(EVec3 *)&local_e0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_d8 = 0;
                    /* end of inlined section */
      textDef.m_retChar = 0xe;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_dc = 0;
                    /* end of inlined section */
      local_e0 = (EFontSize *)0x0;
      pEVar6 = (EUIDynTextIcon *)__builtin_new(0x98);
      pEVar6 = __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                         (pEVar6,&textDef,&icondef,-0x2080f4e9,(EVec3 *)&local_e0);
      pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
      sVar1 = *(short *)&pEVar2[2].StateChanged;
      psVar5 = GetMemCardUIString__7EGlobalPCc(&_globals,"user_characters_three_prompt");
      (*(code *)pEVar2[2].OnButtonRepeat)
                ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar1 + 4,psVar5,0);
      pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_130._4_4_ = (char *)0x3d4ccccd;
                    /* end of inlined section */
      local_130._0_4_ = pEVar9;
      (*(code *)pEVar2->RemoveChild)
                ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->AddChild + 4,local_130);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&this->m_ctrlicons[1].field0_0x0,(uint)pEVar6);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      pEVar4 = this->m_pCtrlKeys[1];
    }
  }
  local_d8 = 0;
  local_dc = 0;
  local_e0 = (EFontSize *)0x0;
  pEVar2 = (pEVar4->field0_0x0).__vtable;
  (*(code *)pEVar2[2].SetBoxDims)
            ((int)pEVar4->m_maxBackShdrSize + *(short *)&pEVar2[2].SetPos + -0x44,pEVar6,
             (EVec3 *)&local_e0);
LAB_001dffe4:
  uVar3 = local_cc;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_d8 = 0;
                    /* end of inlined section */
  textDef.m_retChar = 2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_dc = 0;
                    /* end of inlined section */
  local_e0 = (EFontSize *)0x0;
  pEVar6 = (EUIDynTextIcon *)__builtin_new(0x98);
  pEVar6 = __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                     (pEVar6,&textDef,&icondef,-0x2080f4e9,(EVec3 *)&local_e0);
  pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
  sVar1 = *(short *)&pEVar2[2].StateChanged;
  psVar5 = GetMemCardUIString__7EGlobalPCc(&_globals,"Done");
  (*(code *)pEVar2[2].OnButtonRepeat)
            ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar1 + 4,psVar5,0);
  pEVar2 = (pEVar6->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130._0_4_ = (EStorable__vtable *)0x3df5c28f;
  local_130._4_4_ = (char *)0x3d4ccccd;
                    /* end of inlined section */
  (*(code *)pEVar2->RemoveChild)
            ((int)(pEVar6->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar2->AddChild + 4,local_130);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this->m_ctrlicons[local_cc].field0_0x0,(uint)pEVar6);
  local_d8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_dc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_e0 = (EFontSize *)0x0;
                    /* end of inlined section */
  pEVar4 = this->m_pCtrlKeys[uVar3];
  pEVar2 = (pEVar4->field0_0x0).__vtable;
  (*(code *)pEVar2[2].SetBoxDims)
            ((int)pEVar4->m_maxBackShdrSize + *(short *)&pEVar2[2].SetPos + -0x44,pEVar6,
             (EVec3 *)&local_e0);
  pEVar2 = (this->m_pKeyboard[uVar3]->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[3].OnButtonRepeat)
            ((int)(this->m_pKeyboard[uVar3]->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[3].StateChanged + -0x44,this->m_pCtrlKeys[uVar3]);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  return;
}

void ETextEntryDialog::~ETextEntryDialog(int __in_chrg) {
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
	TNodeList<EUIObjectNode *> *this;
	ENodeList *this;
	void *pAddress;
	void *p;
	
  bool bVar1;
  EUIAlphaMenu *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  uint uVar4;
  EUIMenu *pEVar5;
  ENodeListNode *pEVar6;
  ERFont *this_00;
  TNodeList_EUIObjectNode___ *this_01;
  
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16ETextEntryDialog;
  pEVar2 = this->m_pKeyboard[0];
  if (pEVar2 != (EUIAlphaMenu *)0x0) {
    pEVar3 = (pEVar2->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    (*(code *)pEVar3[1].RemoveChild)
              ((int)(pEVar2->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar3[1].AddChild + -0x44,this->m_pCtrlKeys[0]);
    RemoveAllChildren__13EUIObjectNode(&this->m_pCtrlKeys[0]->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar6 = this->m_ctrlicons[0].field0_0x0.m_l.m_pHead;
    if (pEVar6 != (ENodeListNode *)0x0) {
      uVar4 = pEVar6->data;
      while( true ) {
        pEVar6 = pEVar6->pNext;
        if (uVar4 != 0) {
          (**(code **)(*(int *)(uVar4 + 0x38) + 0xc))
                    (uVar4 + (int)*(short *)(*(int *)(uVar4 + 0x38) + 8),3);
        }
        if (pEVar6 == (ENodeListNode *)0x0) break;
        uVar4 = pEVar6->data;
      }
    }
    RemoveAll__9ENodeList(&this->m_ctrlicons[0].field0_0x0);
                    /* end of inlined section */
    pEVar5 = this->m_pCtrlKeys[0];
    if (pEVar5 != (EUIMenu *)0x0) {
      pEVar3 = (pEVar5->field0_0x0).__vtable;
      (*(code *)pEVar3->Draw)((int)pEVar5->m_maxBackShdrSize + *(short *)&pEVar3->Update + -0x44,3);
    }
    this->m_pCtrlKeys[0] = (EUIMenu *)0x0;
    RemoveChild__13EUIObjectNodeP13EUIObjectNode
              (&this->field0_0x0,(EUIObjectNode *)this->m_pKeyboard[0]);
    pEVar2 = this->m_pKeyboard[0];
    if (pEVar2 != (EUIAlphaMenu *)0x0) {
      pEVar3 = (pEVar2->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar3->Draw)
                ((int)(pEVar2->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar3->Update + -0x44,3);
    }
    this->m_pKeyboard[0] = (EUIAlphaMenu *)0x0;
  }
  pEVar2 = this->m_pKeyboard[1];
  if (pEVar2 != (EUIAlphaMenu *)0x0) {
    pEVar3 = (pEVar2->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    (*(code *)pEVar3[1].RemoveChild)
              ((int)(pEVar2->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar3[1].AddChild + -0x44,this->m_pCtrlKeys[1]);
    RemoveAllChildren__13EUIObjectNode(&this->m_pCtrlKeys[1]->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar6 = this->m_ctrlicons[1].field0_0x0.m_l.m_pHead;
    if (pEVar6 != (ENodeListNode *)0x0) {
      uVar4 = pEVar6->data;
      while( true ) {
        pEVar6 = pEVar6->pNext;
        if (uVar4 != 0) {
          (**(code **)(*(int *)(uVar4 + 0x38) + 0xc))
                    (uVar4 + (int)*(short *)(*(int *)(uVar4 + 0x38) + 8),3);
        }
        if (pEVar6 == (ENodeListNode *)0x0) break;
        uVar4 = pEVar6->data;
      }
    }
    RemoveAll__9ENodeList(&this->m_ctrlicons[1].field0_0x0);
                    /* end of inlined section */
    pEVar5 = this->m_pCtrlKeys[1];
    if (pEVar5 != (EUIMenu *)0x0) {
      pEVar3 = (pEVar5->field0_0x0).__vtable;
      (*(code *)pEVar3->Draw)((int)pEVar5->m_maxBackShdrSize + *(short *)&pEVar3->Update + -0x44,3);
    }
    this->m_pCtrlKeys[1] = (EUIMenu *)0x0;
    RemoveChild__13EUIObjectNodeP13EUIObjectNode
              (&this->field0_0x0,(EUIObjectNode *)this->m_pKeyboard[1]);
    pEVar2 = this->m_pKeyboard[1];
    if (pEVar2 != (EUIAlphaMenu *)0x0) {
      pEVar3 = (pEVar2->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar3->Draw)
                ((int)(pEVar2->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar3->Update + -0x44,3);
    }
    this->m_pKeyboard[1] = (EUIAlphaMenu *)0x0;
  }
  pEVar2 = this->m_pKeyboard[2];
  if (pEVar2 == (EUIAlphaMenu *)0x0) {
    this_00 = this->m_pFont;
    while (this_00 != (ERFont *)0x0) {
      DelRef__9EResource(&this_00->field0_0x0);
      this->m_pFont = (ERFont *)0x0;
LAB_001e03d8:
      this_00 = this->m_pFont;
    }
    if ((this != (ETextEntryDialog *)0xfffffe68) &&
       (this->m_ctrlicons != (TNodeList_EUIObjectNode___ *)&this->m_pFont)) {
      this_01 = this->m_ctrlicons + 2;
      do {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        RemoveAll__9ENodeList(&this_01->field0_0x0);
                    /* end of inlined section */
        bVar1 = this->m_ctrlicons != this_01;
        this_01 = this_01 + -1;
      } while (bVar1);
    }
    ___13EUIObjectNode(&this->field0_0x0,0);
    if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
      _memmanFree__FPv(this);
                    /* end of inlined section */
    }
    return;
  }
  pEVar3 = (pEVar2->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  (*(code *)pEVar3[1].RemoveChild)
            ((int)(pEVar2->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar3[1].AddChild + -0x44,this->m_pCtrlKeys[2]);
  RemoveAllChildren__13EUIObjectNode(&this->m_pCtrlKeys[2]->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar6 = this->m_ctrlicons[2].field0_0x0.m_l.m_pHead;
  if (pEVar6 != (ENodeListNode *)0x0) {
    uVar4 = pEVar6->data;
    while( true ) {
      pEVar6 = pEVar6->pNext;
      if (uVar4 != 0) {
        (**(code **)(*(int *)(uVar4 + 0x38) + 0xc))
                  (uVar4 + (int)*(short *)(*(int *)(uVar4 + 0x38) + 8),3);
      }
      if (pEVar6 == (ENodeListNode *)0x0) break;
      uVar4 = pEVar6->data;
    }
  }
  RemoveAll__9ENodeList(&this->m_ctrlicons[2].field0_0x0);
                    /* end of inlined section */
  pEVar5 = this->m_pCtrlKeys[2];
  if (pEVar5 != (EUIMenu *)0x0) {
    pEVar3 = (pEVar5->field0_0x0).__vtable;
    (*(code *)pEVar3->Draw)((int)pEVar5->m_maxBackShdrSize + *(short *)&pEVar3->Update + -0x44,3);
  }
  this->m_pCtrlKeys[2] = (EUIMenu *)0x0;
  RemoveChild__13EUIObjectNodeP13EUIObjectNode
            (&this->field0_0x0,(EUIObjectNode *)this->m_pKeyboard[2]);
  pEVar2 = this->m_pKeyboard[2];
  if (pEVar2 != (EUIAlphaMenu *)0x0) {
    pEVar3 = (pEVar2->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar3->Draw)
              ((int)(pEVar2->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar3->Update + -0x44,3);
  }
  this->m_pKeyboard[2] = (EUIAlphaMenu *)0x0;
  goto LAB_001e03d8;
}

void ETextEntryDialog::Draw(ERC *prc) {
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar1;
  float fVar2;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  if (this->m_nCurrentPage == 0) {
                    /* end of inlined section */
    fVar2 = 0.5;
    DrawBigBox__10EDialogWinP3ERCfffff
              (prc,(this->m_vDimentions).field0_0x0.d[0],(this->m_vDimentions).field0_0x0.d[1],
               (this->m_vDimentions).field0_0x0.d[2],(this->m_vDimentions).field0_0x0.d[3],1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_64 = 0x3f800000;
    local_68 = 0x3f800000;
    local_6c = 1.0;
                    /* end of inlined section */
    local_70 = 1.0;
    DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
              (prc,(this->m_vBackground).field0_0x0.d[0],(this->m_vBackground).field0_0x0.d[1],
               (this->m_vBackground).field0_0x0.d[3],(this->m_vBackground).field0_0x0.d[2],1.0,
               (EVec4 *)&local_70);
    fVar1 = (this->m_vDimentions).field0_0x0.d[0];
    DrawTextBox__10EDialogWinP3ERCffff
              (prc,fVar1 + (((this->m_vDimentions).field0_0x0.d[2] - fVar1) - this->m_fTitleWidth) *
                           fVar2,(this->m_vDimentions).field0_0x0.d[1] + 0.015,this->m_fTitleWidth,
               1.0);
    fVar1 = (this->m_vDimentions).field0_0x0.d[0];
    DrawTextBox__10EDialogWinP3ERCffff
              (prc,fVar1 + (((this->m_vDimentions).field0_0x0.d[2] - fVar1) - this->m_fMaxWidth) *
                           fVar2,(this->m_vDimentions).field0_0x0.d[1] + 0.08,this->m_fMaxWidth,1.0)
    ;
    SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
    Select__6ERFontP3ERC(this->m_pFont,prc);
    local_70 = (this->m_vDimentions).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_6c = (this->m_vDimentions).field0_0x0.d[1] + 0.022;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_70 = local_70 + ((this->m_vDimentions).field0_0x0.d[2] - local_70) * fVar2;
    local_60 = local_70;
    local_5c = local_6c;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_szTitle,true,(EVec2 *)&local_60,E_FAX_CENTER,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    if (this->m_szText[0] == 0) goto LAB_001e0a10;
    SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
    Select__6ERFontP3ERC(this->m_pFont,prc);
    local_70 = (this->m_vDimentions).field0_0x0.d[0];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    fVar1 = (this->m_vDimentions).field0_0x0.d[2];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_6c = (this->m_vDimentions).field0_0x0.d[1];
  }
  else {
    if (this->m_nCurrentPage != 1) {
                    /* end of inlined section */
      fVar2 = 0.5;
      DrawBigBox__10EDialogWinP3ERCfffff
                (prc,(this->m_vDimentionsThree).field0_0x0.d[0],
                 (this->m_vDimentionsThree).field0_0x0.d[1],
                 (this->m_vDimentionsThree).field0_0x0.d[2],
                 (this->m_vDimentionsThree).field0_0x0.d[3],1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_64 = 0x3f800000;
      local_68 = 0x3f800000;
      local_6c = 1.0;
                    /* end of inlined section */
      local_70 = 1.0;
      DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
                (prc,(this->m_vBackgroundThree).field0_0x0.d[0],
                 (this->m_vBackgroundThree).field0_0x0.d[1],
                 (this->m_vBackgroundThree).field0_0x0.d[3],
                 (this->m_vBackgroundThree).field0_0x0.d[2],1.0,(EVec4 *)&local_70);
      fVar1 = (this->m_vDimentionsThree).field0_0x0.d[0];
      DrawTextBox__10EDialogWinP3ERCffff
                (prc,fVar1 + (((this->m_vDimentionsThree).field0_0x0.d[2] - fVar1) -
                             this->m_fTitleWidth) * fVar2,
                 (this->m_vDimentionsThree).field0_0x0.d[1] + 0.015,this->m_fTitleWidth,1.0);
      fVar1 = (this->m_vDimentionsThree).field0_0x0.d[0];
      DrawTextBox__10EDialogWinP3ERCffff
                (prc,fVar1 + (((this->m_vDimentionsThree).field0_0x0.d[2] - fVar1) -
                             this->m_fMaxWidth) * fVar2,
                 (this->m_vDimentionsThree).field0_0x0.d[1] + 0.08,this->m_fMaxWidth,1.0);
      SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
      Select__6ERFontP3ERC(this->m_pFont,prc);
      local_70 = (this->m_vDimentionsThree).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_6c = (this->m_vDimentionsThree).field0_0x0.d[1] + 0.022;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_70 = local_70 + ((this->m_vDimentionsThree).field0_0x0.d[2] - local_70) * fVar2;
      local_60 = local_70;
      local_5c = local_6c;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,this->m_szTitle,true,(EVec2 *)&local_60,E_FAX_CENTER,E_FAY_TOP,
                 (EVec2 *)0x0);
                    /* end of inlined section */
      if (this->m_szText[0] != 0) {
        SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
        Select__6ERFontP3ERC(this->m_pFont,prc);
        local_70 = (this->m_vDimentionsThree).field0_0x0.d[0];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
        local_6c = (this->m_vDimentionsThree).field0_0x0.d[1] + 0.0925;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
        local_70 = local_70 + ((this->m_vDimentionsThree).field0_0x0.d[2] - local_70) * fVar2;
        local_60 = local_70;
        local_5c = local_6c;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,this->m_szText,true,(EVec2 *)&local_60,E_FAX_CENTER,E_FAY_TOP,
                   (EVec2 *)0x0);
      }
      goto LAB_001e0a10;
    }
                    /* end of inlined section */
    fVar2 = 0.5;
    DrawBigBox__10EDialogWinP3ERCfffff
              (prc,(this->m_vDimentionsTwo).field0_0x0.d[0],(this->m_vDimentionsTwo).field0_0x0.d[1]
               ,(this->m_vDimentionsTwo).field0_0x0.d[2],(this->m_vDimentionsTwo).field0_0x0.d[3],
               1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_64 = 0x3f800000;
    local_68 = 0x3f800000;
    local_6c = 1.0;
                    /* end of inlined section */
    local_70 = 1.0;
    DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
              (prc,(this->m_vBackgroundTwo).field0_0x0.d[0],(this->m_vBackgroundTwo).field0_0x0.d[1]
               ,(this->m_vBackgroundTwo).field0_0x0.d[3],(this->m_vBackgroundTwo).field0_0x0.d[2],
               1.0,(EVec4 *)&local_70);
    fVar1 = (this->m_vDimentionsTwo).field0_0x0.d[0];
    DrawTextBox__10EDialogWinP3ERCffff
              (prc,fVar1 + (((this->m_vDimentionsTwo).field0_0x0.d[2] - fVar1) - this->m_fTitleWidth
                           ) * fVar2,(this->m_vDimentionsTwo).field0_0x0.d[1] + 0.015,
               this->m_fTitleWidth,1.0);
    fVar1 = (this->m_vDimentionsTwo).field0_0x0.d[0];
    DrawTextBox__10EDialogWinP3ERCffff
              (prc,fVar1 + (((this->m_vDimentionsTwo).field0_0x0.d[2] - fVar1) - this->m_fMaxWidth)
                           * fVar2,(this->m_vDimentionsTwo).field0_0x0.d[1] + 0.08,this->m_fMaxWidth
               ,1.0);
    SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
    Select__6ERFontP3ERC(this->m_pFont,prc);
    local_70 = (this->m_vDimentionsTwo).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_6c = (this->m_vDimentionsTwo).field0_0x0.d[1] + 0.022;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_70 = local_70 + ((this->m_vDimentionsTwo).field0_0x0.d[2] - local_70) * fVar2;
    local_60 = local_70;
    local_5c = local_6c;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_szTitle,true,(EVec2 *)&local_60,E_FAX_CENTER,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
    if (this->m_szText[0] == 0) goto LAB_001e0a10;
    SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
    Select__6ERFontP3ERC(this->m_pFont,prc);
    local_70 = (this->m_vDimentionsTwo).field0_0x0.d[0];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    fVar1 = (this->m_vDimentionsTwo).field0_0x0.d[2];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_6c = (this->m_vDimentionsTwo).field0_0x0.d[1];
  }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_6c = local_6c + 0.0925;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_70 = local_70 + (fVar1 - local_70) * fVar2;
  local_60 = local_70;
  local_5c = local_6c;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,this->m_szText,true,(EVec2 *)&local_60,E_FAX_CENTER,E_FAY_TOP,
             (EVec2 *)0x0);
                    /* end of inlined section */
LAB_001e0a10:
  Draw__13EUIObjectNodeP3ERC(&this->field0_0x0,prc);
  return;
}

bool ETextEntryDialog::UpdateKeyboard() {
  Update__13EUIObjectNode(&this->field0_0x0);
  return SUB41(*(undefined4 *)&this->m_bReturnValue,0);
}

void ETextEntryDialog::Message(EUIObjectNode *pChild, u32 messId) {
	c16 cNewChar;
	EUIAlphaMenu *this;
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
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	bool bAdded;
	EVec2 vStringSize;
	bool bAdded;
	EVec2 vStringSize;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	u32 messId;
	
  EUIMenu **ppEVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIObjectNode *pEVar3;
  bool bVar4;
  bool bVar5;
  EUiAudio *pEVar6;
  uchar uVar7;
  short sVar8;
  byte bVar9;
  uint uVar10;
  EUIAlphaMenu *pEVar11;
  EUIMenu *pCol;
  short *psVar12;
  EVec2 vStringSize;
  
  pEVar6 = _8EUiAudio__pUiAudioMan;
  if (messId != 1) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    pEVar3 = (this->field0_0x0).m_pParent;
    if (pEVar3 == (EUIObjectNode *)0x0) {
      return;
    }
    (*(code *)pEVar3->__vtable[1].EUIObjectNode)
              ((int)&(pEVar3->m_ChildList).field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar3->__vtable + 1),this);
    return;
  }
                    /* inlined from /eor/src2/engine/ui/e_uialphamenu.h */
  sVar8 = (short)*(char *)((int)&pChild[3].m_pos.field0_0x0 + 4);
                    /* end of inlined section */
  switch(sVar8) {
  case 1:
    bVar9 = this->m_nCurrentChar - 1;
    if (this->m_nCurrentChar != '\0') {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
      this->m_nCurrentChar = bVar9;
      pEVar6 = _8EUiAudio__pUiAudioMan;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      this->m_szText[bVar9] = 0;
      PlayUiSound__8EUiAudioUi(pEVar6,0xcf99db1e);
      return;
                    /* end of inlined section */
    }
    break;
  case 2:
                    /* end of inlined section */
    if (this->m_nCurrentChar != '\0') {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
      *(undefined4 *)&this->m_bReturnValue = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(pEVar6,0xcf99db1e);
                    /* end of inlined section */
      if (this->m_szText[this->m_nCurrentChar - 1] != 0x20) {
        return;
      }
      uVar7 = this->m_nCurrentChar;
      while( true ) {
        this->m_nCurrentChar = uVar7 - 1;
        this->m_szText[(byte)(uVar7 - 1)] = 0;
        if (this->m_szText[this->m_nCurrentChar - 1] != 0x20) break;
        uVar7 = this->m_nCurrentChar;
      }
      return;
    }
    break;
  default:
                    /* end of inlined section */
    uVar10 = (uint)this->m_nCurrentChar;
    bVar4 = uVar10 < this->m_nMaxCharacters;
    psVar12 = this->m_szText;
    if (bVar4) {
      psVar12[uVar10] = sVar8;
      this->m_nCurrentChar = this->m_nCurrentChar + '\x01';
    }
    SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)&vStringSize,this->m_pFont,SUB41(psVar12,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    bVar5 = this->m_fMaxWidth - 0.06 < vStringSize.field0_0x0.d[0];
    if (bVar5) {
      bVar9 = this->m_nCurrentChar - 1;
      this->m_nCurrentChar = bVar9;
      psVar12[bVar9] = 0;
    }
    if (!bVar5 && bVar4) {
LAB_001e0ee8:
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
      return;
                    /* end of inlined section */
    }
    break;
  case 0xc:
                    /* end of inlined section */
    SetFlagsPropigate__13EUIObjectNodeUib
              ((EUIObjectNode *)this->m_pKeyboard[this->m_nCurrentPage],2,false);
    SetFlagsPropigate__13EUIObjectNodeUib
              ((EUIObjectNode *)this->m_pKeyboard[this->m_nCurrentPage],4,false);
    this->m_nCurrentPage = 0;
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[0],2,true);
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[0],4,true);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    ppEVar1 = (EUIMenu **)
              (this->m_pKeyboard[0]->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.
              m_pHead;
    pCol = (EUIMenu *)0x0;
    if (ppEVar1 != (EUIMenu **)0x0) {
      pCol = *ppEVar1;
    }
                    /* end of inlined section */
    pEVar2 = (this->m_pKeyboard[0]->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar2[3].GetPos)
              ((int)(this->m_pKeyboard[0]->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar2[3].OnStickRepeat + -0x44,pCol,1);
    pEVar11 = this->m_pKeyboard[0];
    goto LAB_001e0d4c;
  case 0xd:
    SetFlagsPropigate__13EUIObjectNodeUib
              ((EUIObjectNode *)this->m_pKeyboard[this->m_nCurrentPage],2,false);
    SetFlagsPropigate__13EUIObjectNodeUib
              ((EUIObjectNode *)this->m_pKeyboard[this->m_nCurrentPage],4,false);
    pEVar11 = this->m_pKeyboard[1];
    this->m_nCurrentPage = 1;
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)pEVar11,2,true);
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[1],4,true);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    ppEVar1 = (EUIMenu **)
              (this->m_pKeyboard[1]->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.
              m_pHead;
    pCol = (EUIMenu *)0x0;
    if (ppEVar1 != (EUIMenu **)0x0) {
      pCol = *ppEVar1;
    }
                    /* end of inlined section */
    pEVar2 = (this->m_pKeyboard[1]->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar2[3].GetPos)
              ((int)(this->m_pKeyboard[1]->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar2[3].OnStickRepeat + -0x44,pCol,1);
    pEVar11 = this->m_pKeyboard[1];
    goto LAB_001e0d4c;
  case 0xe:
    SetFlagsPropigate__13EUIObjectNodeUib
              ((EUIObjectNode *)this->m_pKeyboard[this->m_nCurrentPage],2,false);
    SetFlagsPropigate__13EUIObjectNodeUib
              ((EUIObjectNode *)this->m_pKeyboard[this->m_nCurrentPage],4,false);
    pEVar11 = this->m_pKeyboard[2];
    this->m_nCurrentPage = 2;
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)pEVar11,2,true);
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_pKeyboard[2],4,true);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    ppEVar1 = (EUIMenu **)
              (this->m_pKeyboard[2]->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.
              m_pHead;
    pCol = (EUIMenu *)0x0;
    if (ppEVar1 != (EUIMenu **)0x0) {
      pCol = *ppEVar1;
    }
                    /* end of inlined section */
    pEVar2 = (this->m_pKeyboard[2]->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar2[3].GetPos)
              ((int)(this->m_pKeyboard[2]->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar2[3].OnStickRepeat + -0x44,pCol,1);
    pEVar11 = this->m_pKeyboard[2];
LAB_001e0d4c:
    SetCurRow__11EUIGridMenuP7EUIMenuii(&pEVar11->field0_0x0,pCol,0,1);
    return;
  case 0x20:
    uVar10 = (uint)this->m_nCurrentChar;
    if (uVar10 != 0) {
      bVar4 = uVar10 < this->m_nMaxCharacters;
      psVar12 = this->m_szText;
      if (bVar4) {
        psVar12[uVar10] = 0x20;
        this->m_nCurrentChar = this->m_nCurrentChar + '\x01';
      }
      SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)&vStringSize,this->m_pFont,SUB41(psVar12,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
      bVar5 = this->m_fMaxWidth - 0.06 < vStringSize.field0_0x0.d[0];
      if (bVar5) {
        bVar9 = this->m_nCurrentChar - 1;
        this->m_nCurrentChar = bVar9;
        psVar12[bVar9] = 0;
      }
      if (!bVar5 && bVar4) goto LAB_001e0ee8;
    }
  }
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
  return;
                    /* end of inlined section */
}

void ETextEntryDialog::GetBuffer(c16 *pBuffer) {
	int i;
	
  short sVar1;
  int iVar2;
  short *psVar3;
  
  psVar3 = this->m_szText;
  iVar2 = 0;
  sVar1 = *psVar3;
  while( true ) {
    iVar2 = iVar2 + 1;
    *pBuffer = sVar1;
    pBuffer = pBuffer + 1;
    sVar1 = *psVar3;
    psVar3 = psVar3 + 1;
    if ((sVar1 == 0) || (0x1f < iVar2)) break;
    sVar1 = *psVar3;
  }
  return;
}

void ETextEntryDialog::SetBuffer(c16 *pNewText) {
  byte bVar1;
  
  this->m_nCurrentChar = '\0';
  if (*pNewText != 0) {
    bVar1 = this->m_nCurrentChar;
    while( true ) {
      this->m_szText[bVar1] = pNewText[bVar1];
      bVar1 = this->m_nCurrentChar + 1;
      this->m_nCurrentChar = bVar1;
      if ((pNewText[bVar1] == 0) || (0x1e < bVar1)) break;
      bVar1 = this->m_nCurrentChar;
    }
  }
  return;
}

void ETextEntryDialog::GetBackgroundSize(u32 nNumCharacters, u32 *nNumColumns, EVec4 *vBackground, EVec4 *vDimentions) {
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (nNumCharacters < 0x1f) {
    fVar7 = 0.265;
    fVar5 = 0.41;
    fVar3 = 0.47;
    fVar1 = 0.275;
    *nNumColumns = 6;
    fVar6 = 0.235;
    fVar4 = 0.26;
    fVar8 = 0.77;
    fVar2 = 0.71;
LAB_001e1068:
    (vBackground->field0_0x0).d[3] = fVar1;
    (vBackground->field0_0x0).d[0] = fVar7;
    (vBackground->field0_0x0).d[1] = fVar5;
    (vBackground->field0_0x0).d[2] = fVar3;
    (vDimentions->field0_0x0).d[3] = fVar2;
    (vDimentions->field0_0x0).d[0] = fVar6;
    (vDimentions->field0_0x0).d[1] = fVar4;
    (vDimentions->field0_0x0).d[2] = fVar8;
    return;
  }
  if (nNumCharacters < 0x30) {
    *nNumColumns = 7;
    (vBackground->field0_0x0).d[0] = 0.235;
    (vBackground->field0_0x0).d[2] = 0.53;
    (vDimentions->field0_0x0).d[0] = 0.215;
    (vDimentions->field0_0x0).d[2] = 0.78;
    if (nNumCharacters < 0x24) {
      fVar7 = 0.41;
      fVar5 = 0.26;
      fVar1 = 0.71;
      (vBackground->field0_0x0).d[3] = 0.275;
    }
    else {
      fVar7 = 0.395;
      fVar5 = 0.25;
      fVar1 = 0.745;
      (vBackground->field0_0x0).d[3] = 0.325;
    }
    goto LAB_001e145c;
  }
  if (nNumCharacters < 0x36) {
    fVar7 = 0.21;
    fVar5 = 0.345;
    fVar3 = 0.565;
    fVar1 = 0.375;
    fVar6 = 0.195;
    fVar4 = 0.2;
    fVar8 = 0.795;
    fVar2 = 0.74;
    *nNumColumns = 8;
    goto LAB_001e1068;
  }
  if (nNumCharacters < 0x52) {
    *nNumColumns = 9;
    (vBackground->field0_0x0).d[0] = 0.185;
    (vBackground->field0_0x0).d[2] = 0.615;
    (vDimentions->field0_0x0).d[0] = 0.17;
    (vDimentions->field0_0x0).d[2] = 0.82;
    if (nNumCharacters < 0x37) {
      fVar7 = 0.395;
      fVar5 = 0.225;
      fVar1 = 0.74;
      (vBackground->field0_0x0).d[3] = 0.325;
      goto LAB_001e145c;
    }
    if (nNumCharacters < 0x40) {
      fVar7 = 0.37;
      fVar5 = 0.225;
      fVar1 = 0.765;
      (vBackground->field0_0x0).d[3] = 0.375;
      goto LAB_001e145c;
    }
    if (nNumCharacters < 0x49) {
      fVar7 = 0.32;
      fVar5 = 0.175;
      fVar1 = 0.765;
      (vBackground->field0_0x0).d[3] = 0.425;
      goto LAB_001e145c;
    }
    fVar7 = 0.295;
    fVar3 = 0.475;
    fVar5 = 0.15;
  }
  else if (nNumCharacters < 0x65) {
    *nNumColumns = 10;
    (vBackground->field0_0x0).d[0] = 0.21;
    (vBackground->field0_0x0).d[2] = 0.665;
    (vDimentions->field0_0x0).d[0] = 0.195;
    (vDimentions->field0_0x0).d[2] = 0.895;
    if (nNumCharacters < 0x5b) {
      fVar7 = 0.295;
      fVar3 = 0.475;
      fVar5 = 0.15;
    }
    else {
      fVar7 = 0.245;
      fVar3 = 0.525;
      fVar5 = 0.1;
    }
  }
  else {
    *nNumColumns = 0xb;
    (vBackground->field0_0x0).d[0] = 0.185;
    (vBackground->field0_0x0).d[2] = 0.715;
    (vDimentions->field0_0x0).d[0] = 0.17;
    (vDimentions->field0_0x0).d[2] = 0.92;
    if (nNumCharacters < 0x6f) {
      fVar7 = 0.245;
      fVar3 = 0.525;
      fVar5 = 0.1;
    }
    else {
      fVar7 = 0.195;
      fVar3 = 0.575;
      fVar5 = 0.05;
    }
  }
  fVar1 = 0.79;
  (vBackground->field0_0x0).d[3] = fVar3;
LAB_001e145c:
  (vBackground->field0_0x0).d[1] = fVar7;
  (vDimentions->field0_0x0).d[3] = fVar1;
  (vDimentions->field0_0x0).d[1] = fVar5;
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

void* ETextEntryDialog::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(0x1c0,0x10);
  return pvVar1;
}

void ETextEntryDialog::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}
