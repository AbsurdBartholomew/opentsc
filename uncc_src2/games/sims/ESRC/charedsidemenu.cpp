// STATUS: NOT STARTED

#include "charedsidemenu.h"

// warning: multiple differing types with the same name (name not equal)
struct SimInfoWin : EUIObjectNode, virtual Panelstateman {
	Panelstateman *$vb2300;
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

__vtbl_ptr_type ECharedSideMenu virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedSideMenu::~ECharedSideMenu,
		/* .__delta2 = */ -14200
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedSideMenu::Update,
		/* .__delta2 = */ -7112
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedSideMenu::Draw,
		/* .__delta2 = */ -8976
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
		/* .__pfn = */ &ECharedSideMenu::Message,
		/* .__delta2 = */ -6440
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

ECharedSideMenu* ECharedSideMenu::ECharedSideMenu() {
	ECharedName *this;
	ECharedTextIcon *this;
	ECharedAge *this;
	ECharedTextIcon *this;
	ECharedGender *this;
	ECharedTextIcon *this;
	
  ECharedName *this_00;
  ECharedTextMenuItem *pEVar1;
  ECharedAge *this_01;
  ECharedGender *this_02;
  ECharedPersonalItem *this_03;
  int iVar2;
  
  iVar2 = 4;
  this_03 = this->m_pPersonalMenuItems;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  this_02 = &this->m_simGender;
  this_01 = &this->m_simAge;
  this_00 = &this->m_simName;
                    /* end of inlined section */
  __13EUIObjectNode(&this->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_15ECharedSideMenu;
  __13EUIObjectNode((EUIObjectNode *)this_00);
  (this->m_simName).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Init__15ECharedTextIcon(&this_00->field0_0x0);
  (this->m_simName).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_11ECharedName;
  Init__11ECharedName(this_00);
  __13EUIObjectNode((EUIObjectNode *)this_01);
  (this->m_simAge).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Init__15ECharedTextIcon(&this_01->field0_0x0);
  (this->m_simAge).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_10ECharedAge;
  Init__10ECharedAge(this_01);
  __13EUIObjectNode((EUIObjectNode *)this_02);
  (this->m_simGender).field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Init__15ECharedTextIcon(&this_02->field0_0x0);
  (this->m_simGender).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_13ECharedGender;
  Init__13ECharedGender(this_02);
                    /* end of inlined section */
  __16ECharedBirthSign(&this->m_zodiacSign);
  do {
    iVar2 = iVar2 + -1;
    __19ECharedPersonalItem(this_03);
    this_03 = this_03 + 1;
  } while (iVar2 != -1);
  iVar2 = 7;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedmenuitems.h */
  pEVar1 = this->m_pBodyMenuItems;
  do {
    iVar2 = iVar2 + -1;
    __13EUIObjectNode(&pEVar1->field0_0x0);
    (pEVar1->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_19ECharedTextMenuItem;
    Init__19ECharedTextMenuItem(pEVar1);
                    /* end of inlined section */
    pEVar1 = pEVar1 + 1;
  } while (iVar2 != -1);
  iVar2 = 5;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedmenuitems.h */
  pEVar1 = this->m_pHeadMenuItems;
  do {
    iVar2 = iVar2 + -1;
    __13EUIObjectNode(&pEVar1->field0_0x0);
    (pEVar1->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_19ECharedTextMenuItem;
    Init__19ECharedTextMenuItem(pEVar1);
                    /* end of inlined section */
    pEVar1 = pEVar1 + 1;
  } while (iVar2 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_mover).m_startt = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_mover).m_stopt = 0.0;
                    /* end of inlined section */
  (this->m_mover).m_curtime = (this->m_mover).m_startt;
  Init__15ECharedSideMenu(this);
  return this;
}

void ECharedSideMenu::~ECharedSideMenu(int __in_chrg) {
	EUIObjectMover *this;
	void *pAddress;
	void *ptr;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  ECharedTextMenuItem *pEVar3;
  ECharedTextMenuItem *pEVar4;
  ECharedPersonalItem *pEVar5;
  
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_15ECharedSideMenu;
  CleanUp__15ECharedSideMenu(this);
                    /* end of inlined section */
  if ((this != (ECharedSideMenu *)0xfffff670) &&
     (this->m_pHeadMenuItems != (ECharedTextMenuItem *)&this->m_mover)) {
    for (pEVar3 = this->m_pHeadMenuItems + 5; pEVar2 = (pEVar3->field0_0x0).__vtable,
        (*(code *)pEVar2->Draw)
                  ((undefined *)
                   ((int)&(pEVar3->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar2->Update),0), this->m_pHeadMenuItems != pEVar3;
        pEVar3 = pEVar3 + -1) {
    }
  }
                    /* end of inlined section */
  pEVar3 = this->m_pBodyMenuItems;
  if ((this != (ECharedSideMenu *)0xfffffaf0) && (pEVar3 != this->m_pHeadMenuItems)) {
    pEVar4 = this->m_pBodyMenuItems + 7;
    do {
      pEVar2 = (pEVar4->field0_0x0).__vtable;
      (*(code *)pEVar2->Draw)
                ((undefined *)
                 ((int)&(pEVar4->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar2->Update),0);
      bVar1 = pEVar3 != pEVar4;
      pEVar4 = pEVar4 + -1;
    } while (bVar1);
  }
                    /* end of inlined section */
  if ((this != (ECharedSideMenu *)0xfffffdc0) &&
     ((ECharedTextMenuItem *)this->m_pPersonalMenuItems != pEVar3)) {
    pEVar5 = this->m_pPersonalMenuItems + 4;
    do {
      pEVar2 = (pEVar5->field0_0x0).__vtable;
      (*(code *)pEVar2->Draw)((int)pEVar5->m_szDescription + *(short *)&pEVar2->Update + -0x70,0);
      bVar1 = this->m_pPersonalMenuItems != pEVar5;
      pEVar5 = pEVar5 + -1;
    } while (bVar1);
  }
  ___16ECharedBirthSign(&this->m_zodiacSign,2);
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  (this->m_simGender).field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Cleanup__15ECharedTextIcon(&(this->m_simGender).field0_0x0);
  ___13EUIObjectNode((EUIObjectNode *)&this->m_simGender,2);
  (this->m_simAge).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Cleanup__15ECharedTextIcon(&(this->m_simAge).field0_0x0);
  ___13EUIObjectNode((EUIObjectNode *)&this->m_simAge,2);
  (this->m_simName).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_15ECharedTextIcon;
  Cleanup__15ECharedTextIcon(&(this->m_simName).field0_0x0);
  ___13EUIObjectNode((EUIObjectNode *)&this->m_simName,2);
                    /* end of inlined section */
  ___13EUIObjectNode(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsidemenu.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ECharedSideMenu::Init() {
	int i;
	float fTempWidest;
	float fWidest;
	EVec2 vNewSize;
	EVec4 *this;
	EVec4 *this;
	ECharedTextIcon *this;
	ECharedTextIcon *this;
	ECharedTextIcon *this;
	float fNewOffset;
	float fNewOffset;
	float fNewOffset;
	float x;
	EUIMenu *this;
	EUIMenu *this;
	EUIObjectNode *this;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	EUIMenu *this;
	EUIMenu *this;
	EUIObjectNode *this;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	EUIMenu *this;
	EUIMenu *this;
	EUIObjectNode *this;
	
  ERShader *pEVar1;
  ERFont *pEVar2;
  short *psVar3;
  short *psVar4;
  EUIMenu *pEVar5;
  EUIObjectNode__vtable *pEVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  int iVar7;
  undefined8 unaff_s2;
  ECharedTextMenuItem *pEVar8;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  ECharedPersonalItem *pEVar9;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fNewOffset;
  EStorable__vtable *pEVar10;
  float fVar11;
  EStorable__vtable *pEVar12;
  EVec2 vNewSize;
  EStorable__vtable *local_120;
  EStorable__vtable *local_11c;
  EStorable__vtable *local_118;
  ECharedTextMenuItem *local_110;
  ECharedTextMenuItem *local_10c;
  ECharedTextMenuItem *local_108;
  ECharedName *local_104;
  ECharedTextMenuItem *local_100;
  ECharedAge *local_fc;
  ECharedTextMenuItem *local_f8;
  ECharedTextMenuItem *local_f4;
  ECharedGender *local_f0;
  ECharedBirthSign *local_ec;
  ECharedTextMenuItem *local_e8;
  ECharedTextMenuItem *local_e4;
  EFontSize *local_e0;
  ECharedTextMenuItem *local_dc;
  ECharedTextMenuItem *local_d8;
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
  
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
                    /* end of inlined section */
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
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
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
                    /* end of inlined section */
  pEVar9 = this->m_pPersonalMenuItems;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (this->m_vStop).field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (this->m_vStop).field0_0x0.d[3] = 0.0;
  (this->m_vStop).field0_0x0.d[1] = 0.0;
  (this->m_vStop).field0_0x0.d[2] = 0.0;
  (this->m_vStart).field0_0x0.d[0] = 0.0;
  (this->m_vStart).field0_0x0.d[3] = 0.0;
  (this->m_vStart).field0_0x0.d[1] = 0.0;
  (this->m_vStart).field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  this->m_nCurrentMenuType = 0;
  *(undefined4 *)&this->m_bDisplayMenu = 0;
  *(undefined4 *)&this->m_bDisplayBackground = 0;
  this->m_pKeyboard = (ETextEntryDialog *)0x0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_nUnusedPersonalityOptions = 0x19;
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  fVar11 = 0.0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pBlankShdr = pEVar1;
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc9ff8b99,(EFile *)0x0,0);
  this->m_pSideMenuCurveShdr = pEVar1;
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xaac25e24,(EFile *)0x0,0);
  this->m_pBevelShdr = pEVar1;
  pEVar2 = (ERFont *)
           AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar2;
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"messy");
  psVar4 = GetCreateASimString__7EGlobalPCc(&_globals,"neat");
  SetStrings__19ECharedPersonalItemPCUsT1(pEVar9,psVar3,psVar4);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"shy");
  psVar4 = GetCreateASimString__7EGlobalPCc(&_globals,"outgoing");
  SetStrings__19ECharedPersonalItemPCUsT1(this->m_pPersonalMenuItems + 1,psVar3,psVar4);
  iVar7 = 4;
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"lazy");
  psVar4 = GetCreateASimString__7EGlobalPCc(&_globals,"active");
  SetStrings__19ECharedPersonalItemPCUsT1(this->m_pPersonalMenuItems + 2,psVar3,psVar4);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"serious");
  psVar4 = GetCreateASimString__7EGlobalPCc(&_globals,"playful");
  SetStrings__19ECharedPersonalItemPCUsT1(this->m_pPersonalMenuItems + 3,psVar3,psVar4);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"mean");
  psVar4 = GetCreateASimString__7EGlobalPCc(&_globals,"nice");
  SetStrings__19ECharedPersonalItemPCUsT1(this->m_pPersonalMenuItems + 4,psVar3,psVar4);
  do {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
    if (fVar11 < pEVar9->m_fLeftOffset) {
      fVar11 = pEVar9->m_fLeftOffset;
    }
    iVar7 = iVar7 + -1;
    pEVar9 = pEVar9 + 1;
  } while (-1 < iVar7);
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  local_104 = &this->m_simName;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  fNewOffset = (this->m_simName).field0_0x0.m_fLeftOffset;
                    /* end of inlined section */
  local_e0 = (EFontSize *)(this->m_pPersonalMenuItems + 4);
  if (fNewOffset <= fVar11) {
    fNewOffset = fVar11;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  local_fc = &this->m_simAge;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  fVar11 = (this->m_simAge).field0_0x0.m_fLeftOffset;
                    /* end of inlined section */
  if (fNewOffset < fVar11) {
    fNewOffset = fVar11;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  local_f0 = &this->m_simGender;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  fVar11 = (this->m_simGender).field0_0x0.m_fLeftOffset;
                    /* end of inlined section */
  if (fNewOffset < fVar11) {
    fNewOffset = fVar11;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
  local_ec = &this->m_zodiacSign;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  (this->m_simName).field0_0x0.m_fLeftOffset = fNewOffset;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
  pEVar9 = this->m_pPersonalMenuItems;
  iVar7 = 4;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  (this->m_simAge).field0_0x0.m_fLeftOffset = fNewOffset;
                    /* end of inlined section */
  local_110 = this->m_pBodyMenuItems + 4;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
  local_100 = this->m_pBodyMenuItems + 5;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  (this->m_simGender).field0_0x0.m_fLeftOffset = fNewOffset;
                    /* end of inlined section */
  local_f4 = this->m_pBodyMenuItems + 6;
  local_e4 = this->m_pBodyMenuItems + 7;
  local_d8 = this->m_pHeadMenuItems;
  local_108 = this->m_pHeadMenuItems + 1;
  local_f8 = this->m_pHeadMenuItems + 2;
  local_e8 = this->m_pHeadMenuItems + 3;
  local_dc = this->m_pHeadMenuItems + 4;
  local_10c = this->m_pHeadMenuItems + 5;
  do {
    NewLeftOffset__19ECharedPersonalItemf(pEVar9,fNewOffset);
    iVar7 = iVar7 + -1;
    pEVar9 = pEVar9 + 1;
  } while (-1 < iVar7);
  pEVar12 = (EStorable__vtable *)0x0;
  pEVar9 = this->m_pPersonalMenuItems;
  iVar7 = 4;
  do {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
    if ((float)pEVar12 < (float)(EStorable__vtable *)pEVar9->m_fTotalWidth) {
      pEVar12 = (EStorable__vtable *)pEVar9->m_fTotalWidth;
    }
    iVar7 = iVar7 + -1;
    pEVar9 = pEVar9 + 1;
  } while (-1 < iVar7);
  SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
  pEVar2 = this->m_pFont;
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"remaining");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vNewSize,pEVar2,SUB41(psVar3,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar10 = (EStorable__vtable *)(vNewSize.field0_0x0.d[0] + 0.02 + 0.24875);
  this->m_fLeftOffset = vNewSize.field0_0x0.d[0] + 0.02;
  if ((float)pEVar10 <= (float)pEVar12) {
    pEVar10 = pEVar12;
  }
  fVar11 = 0.05;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar12 = (EStorable__vtable *)0x3ccccccd;
                    /* end of inlined section */
  iVar7 = 3;
  this->m_fPersonalMenuWidth = (float)pEVar10 + 0.056;
  pEVar5 = (EUIMenu *)__builtin_new(0x98);
  pEVar5 = __7EUIMenuiifff(pEVar5,-1,0,fVar11,0.0,0.0);
  this->m_pMenu[0] = pEVar5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pEVar6 = (pEVar5->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_120 = (EStorable__vtable *)0x3d851eb8;
  local_11c = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_118 = (EStorable__vtable *)0x3e5f3b64;
                    /* end of inlined section */
  (*(code *)pEVar6->OnButtonRepeat)
            ((int)pEVar5->m_maxBackShdrSize + *(short *)&pEVar6->StateChanged + -0x44,&local_120);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar6 = (this->m_pMenu[0]->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3f1851ec;
                    /* end of inlined section */
  local_120 = pEVar10;
  (*(code *)pEVar6->RemoveChild)
            ((int)this->m_pMenu[0]->m_maxBackShdrSize + *(short *)&pEVar6->AddChild + -0x44,
             &local_120);
  pEVar6 = (this->m_pMenu[0]->field0_0x0).__vtable;
  (*(code *)pEVar6[2].RemoveChild)
            ((int)this->m_pMenu[0]->m_maxBackShdrSize + *(short *)&pEVar6[2].AddChild + -0x44,4);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar5 = this->m_pMenu[0];
  pEVar6 = (pEVar5->field0_0x0).__vtable;
  pEVar5->m_optgap = 0.02;
  (*(code *)pEVar6[2].Message)
            ((int)pEVar5->m_maxBackShdrSize + *(short *)&pEVar6[2].SetBoxDims + -0x44);
  pEVar5 = this->m_pMenu[0];
  pEVar6 = (pEVar5->field0_0x0).__vtable;
  pEVar5->m_yoff = -0.01;
  (*(code *)pEVar6[2].Message)
            ((int)pEVar5->m_maxBackShdrSize + *(short *)&pEVar6[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  pEVar6 = (this->m_pMenu[0]->field0_0x0).__vtable;
  (*(code *)pEVar6[2].GetPos)
            ((int)this->m_pMenu[0]->m_maxBackShdrSize + *(short *)&pEVar6[2].OnStickRepeat + -0x44,0
             ,2,0);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_pMenu[0]->field0_0x0).m_id = 1;
  (this->m_simName).field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] = (float)pEVar10;
  (this->m_simName).field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] = fVar11;
  (this->m_simAge).field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] = (float)pEVar10;
  (this->m_simAge).field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] = 0.025;
  (this->m_simGender).field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] = (float)pEVar10;
  (this->m_simGender).field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] = 0.06;
  (this->m_zodiacSign).field0_0x0.m_WDH.field0_0x0.d[0] = (float)pEVar10;
  (this->m_zodiacSign).field0_0x0.m_WDH.field0_0x0.d[2] = 0.018;
  local_118 = (EStorable__vtable *)0x0;
  local_11c = (EStorable__vtable *)0x0;
  local_120 = (EStorable__vtable *)0x0;
                    /* end of inlined section */
  pEVar6 = (this->m_pMenu[0]->field0_0x0).__vtable;
  (*(code *)pEVar6[2].SetBoxDims)
            ((int)this->m_pMenu[0]->m_maxBackShdrSize + *(short *)&pEVar6[2].SetPos + -0x44,
             local_104,&local_120);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_118 = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_11c = (EStorable__vtable *)0x0;
  local_120 = (EStorable__vtable *)0x0;
                    /* end of inlined section */
  pEVar6 = (this->m_pMenu[0]->field0_0x0).__vtable;
  (*(code *)pEVar6[2].SetBoxDims)
            ((int)this->m_pMenu[0]->m_maxBackShdrSize + *(short *)&pEVar6[2].SetPos + -0x44,local_fc
             ,&local_120);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_118 = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_11c = (EStorable__vtable *)0x0;
  local_120 = (EStorable__vtable *)0x0;
                    /* end of inlined section */
  pEVar6 = (this->m_pMenu[0]->field0_0x0).__vtable;
  (*(code *)pEVar6[2].SetBoxDims)
            ((int)this->m_pMenu[0]->m_maxBackShdrSize + *(short *)&pEVar6[2].SetPos + -0x44,local_f0
             ,&local_120);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_120 = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_118 = (EStorable__vtable *)0x0;
  local_11c = (EStorable__vtable *)0x0;
                    /* end of inlined section */
  pEVar6 = (this->m_pMenu[0]->field0_0x0).__vtable;
  (*(code *)pEVar6[2].SetBoxDims)
            ((int)this->m_pMenu[0]->m_maxBackShdrSize + *(short *)&pEVar6[2].SetPos + -0x44,local_ec
             ,&local_120);
  pEVar6 = this->m_pPersonalMenuItems[0].field0_0x0.__vtable;
  pEVar9 = this->m_pPersonalMenuItems;
  while( true ) {
    iVar7 = iVar7 + -1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_120 = pEVar10;
    local_11c = pEVar12;
    (*(code *)pEVar6->RemoveChild)
              ((int)pEVar9->m_szDescription + *(short *)&pEVar6->AddChild + -0x70,&local_120);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_118 = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_11c = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_120 = (EStorable__vtable *)0x0;
                    /* end of inlined section */
    pEVar6 = (this->m_pMenu[0]->field0_0x0).__vtable;
    (*(code *)pEVar6[2].SetBoxDims)
              ((int)this->m_pMenu[0]->m_maxBackShdrSize + *(short *)&pEVar6[2].SetPos + -0x44,pEVar9
               ,&local_120);
    if (iVar7 < 0) break;
    pEVar6 = pEVar9[1].field0_0x0.__vtable;
    pEVar9 = pEVar9 + 1;
  }
  pEVar6 = this->m_pPersonalMenuItems[4].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar8 = this->m_pBodyMenuItems;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3df5c28f;
                    /* end of inlined section */
  pEVar12 = (EStorable__vtable *)0x0;
  iVar7 = 7;
  local_120 = pEVar10;
  (*(code *)pEVar6->RemoveChild)
            ((int)&(((EUIObjectNode *)&local_e0->field0_0x0)->m_ChildList).field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pEVar6 = (this->m_pMenu[0]->field0_0x0).__vtable;
  local_120 = pEVar12;
  local_11c = pEVar12;
  local_118 = pEVar12;
  (*(code *)pEVar6[2].SetBoxDims)
            ((int)this->m_pMenu[0]->m_maxBackShdrSize + *(short *)&pEVar6[2].SetPos + -0x44,local_e0
             ,&local_120);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"skin tone");
  SetText__19ECharedTextMenuItemPCUs(this->m_pBodyMenuItems,psVar3);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"body type");
  SetText__19ECharedTextMenuItemPCUs(this->m_pBodyMenuItems + 1,psVar3);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"upper body");
  SetText__19ECharedTextMenuItemPCUs(this->m_pBodyMenuItems + 2,psVar3);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"upper color");
  SetText__19ECharedTextMenuItemPCUs(this->m_pBodyMenuItems + 3,psVar3);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"lower body");
  SetText__19ECharedTextMenuItemPCUs(local_110,psVar3);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"lower color");
  SetText__19ECharedTextMenuItemPCUs(local_100,psVar3);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"shoe");
  SetText__19ECharedTextMenuItemPCUs(local_f4,psVar3);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"shoe color");
  SetText__19ECharedTextMenuItemPCUs(local_e4,psVar3);
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedmenuitems.h */
  this->m_pBodyMenuItems[0].m_nNextMessage = 0x1a;
  this->m_pBodyMenuItems[0].m_nPrevMessage = 0x1b;
  this->m_pBodyMenuItems[1].m_nNextMessage = 0x18;
  this->m_pBodyMenuItems[1].m_nPrevMessage = 0x19;
  this->m_pBodyMenuItems[2].m_nNextMessage = 8;
  this->m_pBodyMenuItems[2].m_nPrevMessage = 9;
  this->m_pBodyMenuItems[3].m_nNextMessage = 0x1c;
  this->m_pBodyMenuItems[3].m_nPrevMessage = 0x1d;
  local_110->m_nNextMessage = 10;
  local_110->m_nPrevMessage = 0xb;
  local_100->m_nNextMessage = 0x1e;
  local_100->m_nPrevMessage = 0x1f;
  local_f4->m_nNextMessage = 0xc;
  local_f4->m_nPrevMessage = 0xd;
  local_e4->m_nNextMessage = 0x20;
  local_e4->m_nPrevMessage = 0x21;
  this->m_pBodyMenuItems[0].m_nCameraMessage = 0x2a;
  this->m_pBodyMenuItems[1].m_nCameraMessage = 0x2a;
  this->m_pBodyMenuItems[2].m_nCameraMessage = 0x2a;
  this->m_pBodyMenuItems[3].m_nCameraMessage = 0x2a;
  local_110->m_nCameraMessage = 0x2b;
  local_100->m_nCameraMessage = 0x2b;
  local_f4->m_nCameraMessage = 0x2b;
  local_e4->m_nCameraMessage = 0x2b;
  do {
                    /* end of inlined section */
    pEVar10 = (EStorable__vtable *)GetWidth__19ECharedTextMenuItem(pEVar8);
    if ((float)pEVar12 < (float)pEVar10) {
      pEVar12 = pEVar10;
    }
    iVar7 = iVar7 + -1;
    pEVar8 = pEVar8 + 1;
  } while (-1 < iVar7);
  pEVar6 = this->m_pBodyMenuItems[0].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  iVar7 = 7;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  this->m_fBodyMenuWidth = (float)pEVar12 + 0.056;
  pEVar10 = (EStorable__vtable *)0x0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3d3020c5;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&this->m_pBodyMenuItems[0].field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar6 = this->m_pBodyMenuItems[1].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3d408312;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&this->m_pBodyMenuItems[1].field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar6 = this->m_pBodyMenuItems[2].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3ccccccd;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&this->m_pBodyMenuItems[2].field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar6 = this->m_pBodyMenuItems[3].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3d343958;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&this->m_pBodyMenuItems[3].field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar6 = this->m_pBodyMenuItems[4].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3ccccccd;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&(local_110->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar6 = this->m_pBodyMenuItems[5].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3d343958;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&(local_100->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar6 = this->m_pBodyMenuItems[6].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3ccccccd;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&(local_f4->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar6 = this->m_pBodyMenuItems[7].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3d449ba6;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&(local_e4->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar5 = (EUIMenu *)__builtin_new(0x98);
  pEVar5 = __7EUIMenuiifff(pEVar5,-1,0,0.05,(float)pEVar10,(float)pEVar10);
  this->m_pMenu[1] = pEVar5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pEVar6 = (pEVar5->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_120 = (EStorable__vtable *)0x3d8b4396;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_118 = (EStorable__vtable *)0x3e78d4fe;
                    /* end of inlined section */
  local_11c = pEVar10;
  (*(code *)pEVar6->OnButtonRepeat)
            ((int)pEVar5->m_maxBackShdrSize + *(short *)&pEVar6->StateChanged + -0x44,&local_120);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar6 = (this->m_pMenu[1]->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3f000000;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)this->m_pMenu[1]->m_maxBackShdrSize + *(short *)&pEVar6->AddChild + -0x44,
             &local_120);
  pEVar6 = (this->m_pMenu[1]->field0_0x0).__vtable;
  (*(code *)pEVar6[2].RemoveChild)
            ((int)this->m_pMenu[1]->m_maxBackShdrSize + *(short *)&pEVar6[2].AddChild + -0x44,4);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar5 = this->m_pMenu[1];
  pEVar6 = (pEVar5->field0_0x0).__vtable;
  pEVar5->m_optgap = 0.02;
  (*(code *)pEVar6[2].Message)
            ((int)pEVar5->m_maxBackShdrSize + *(short *)&pEVar6[2].SetBoxDims + -0x44);
  pEVar5 = this->m_pMenu[1];
  pEVar6 = (pEVar5->field0_0x0).__vtable;
  pEVar5->m_yoff = -0.01;
  (*(code *)pEVar6[2].Message)
            ((int)pEVar5->m_maxBackShdrSize + *(short *)&pEVar6[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  pEVar6 = (this->m_pMenu[1]->field0_0x0).__vtable;
  (*(code *)pEVar6[2].GetPos)
            ((int)this->m_pMenu[1]->m_maxBackShdrSize + *(short *)&pEVar6[2].OnStickRepeat + -0x44,0
             ,2,0);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_pMenu[1]->field0_0x0).m_id = 3;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pEVar8 = this->m_pBodyMenuItems;
  do {
    local_118 = (EStorable__vtable *)0x0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_11c = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_120 = (EStorable__vtable *)0x0;
                    /* end of inlined section */
    iVar7 = iVar7 + -1;
    pEVar6 = (this->m_pMenu[1]->field0_0x0).__vtable;
    (*(code *)pEVar6[2].SetBoxDims)
              ((int)this->m_pMenu[1]->m_maxBackShdrSize + *(short *)&pEVar6[2].SetPos + -0x44,pEVar8
               ,&local_120);
    pEVar8 = pEVar8 + 1;
  } while (-1 < iVar7);
  pEVar12 = (EStorable__vtable *)0x0;
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"face style");
  pEVar8 = this->m_pHeadMenuItems;
  iVar7 = 5;
  SetText__19ECharedTextMenuItemPCUs(local_d8,psVar3);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"hairhat");
  SetText__19ECharedTextMenuItemPCUs(local_108,psVar3);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"hair color");
  SetText__19ECharedTextMenuItemPCUs(local_f8,psVar3);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"facial hair");
  SetText__19ECharedTextMenuItemPCUs(local_e8,psVar3);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"eye color");
  SetText__19ECharedTextMenuItemPCUs(local_dc,psVar3);
  psVar3 = GetCreateASimString__7EGlobalPCc(&_globals,"accessories");
  SetText__19ECharedTextMenuItemPCUs(local_10c,psVar3);
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedmenuitems.h */
  local_d8->m_nNextMessage = 0x10;
  local_d8->m_nPrevMessage = 0x11;
  local_108->m_nNextMessage = 0xe;
  local_108->m_nPrevMessage = 0xf;
  local_f8->m_nNextMessage = 0x22;
  local_f8->m_nPrevMessage = 0x23;
  local_e8->m_nNextMessage = 0x12;
  local_e8->m_nPrevMessage = 0x13;
  local_dc->m_nNextMessage = 0x26;
  local_dc->m_nPrevMessage = 0x27;
  local_10c->m_nNextMessage = 0x16;
  local_10c->m_nPrevMessage = 0x17;
  local_d8->m_nCameraMessage = 0x29;
  local_108->m_nCameraMessage = 0x29;
  local_f8->m_nCameraMessage = 0x29;
  local_e8->m_nCameraMessage = 0x29;
  local_dc->m_nCameraMessage = 0x29;
  local_10c->m_nCameraMessage = 0x29;
  do {
                    /* end of inlined section */
    pEVar10 = (EStorable__vtable *)GetWidth__19ECharedTextMenuItem(pEVar8);
    if ((float)pEVar12 < (float)pEVar10) {
      pEVar12 = pEVar10;
    }
    iVar7 = iVar7 + -1;
    pEVar8 = pEVar8 + 1;
  } while (-1 < iVar7);
  pEVar6 = this->m_pHeadMenuItems[0].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar10 = (EStorable__vtable *)0x0;
  this->m_fHeadMenuWidth = (float)pEVar12 + 0.056;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  iVar7 = 5;
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&(local_d8->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar6 = this->m_pHeadMenuItems[1].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3ccccccd;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&(local_108->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar6 = this->m_pHeadMenuItems[2].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3d6978d5;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&(local_f8->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar6 = this->m_pHeadMenuItems[3].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3d71a9fc;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&(local_e8->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar6 = this->m_pHeadMenuItems[4].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3d71a9fc;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&(local_dc->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar6 = this->m_pHeadMenuItems[5].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3d71a9fc;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)&(local_10c->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6->AddChild,&local_120);
  pEVar5 = (EUIMenu *)__builtin_new(0x98);
  pEVar5 = __7EUIMenuiifff(pEVar5,-1,0,0.05,(float)pEVar10,(float)pEVar10);
  this->m_pMenu[2] = pEVar5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pEVar6 = (pEVar5->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_120 = (EStorable__vtable *)0x3d8b4396;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_118 = (EStorable__vtable *)0x3e78d4fe;
                    /* end of inlined section */
  local_11c = pEVar10;
  (*(code *)pEVar6->OnButtonRepeat)
            ((int)pEVar5->m_maxBackShdrSize + *(short *)&pEVar6->StateChanged + -0x44,&local_120);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  pEVar6 = (this->m_pMenu[2]->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = (EStorable__vtable *)0x3f000000;
                    /* end of inlined section */
  local_120 = pEVar12;
  (*(code *)pEVar6->RemoveChild)
            ((int)this->m_pMenu[2]->m_maxBackShdrSize + *(short *)&pEVar6->AddChild + -0x44,
             &local_120);
  pEVar6 = (this->m_pMenu[2]->field0_0x0).__vtable;
  (*(code *)pEVar6[2].RemoveChild)
            ((int)this->m_pMenu[2]->m_maxBackShdrSize + *(short *)&pEVar6[2].AddChild + -0x44,4);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar5 = this->m_pMenu[2];
  pEVar6 = (pEVar5->field0_0x0).__vtable;
  pEVar5->m_optgap = 0.02;
  (*(code *)pEVar6[2].Message)
            ((int)pEVar5->m_maxBackShdrSize + *(short *)&pEVar6[2].SetBoxDims + -0x44);
  pEVar5 = this->m_pMenu[2];
  pEVar6 = (pEVar5->field0_0x0).__vtable;
  pEVar5->m_yoff = -0.01;
  (*(code *)pEVar6[2].Message)
            ((int)pEVar5->m_maxBackShdrSize + *(short *)&pEVar6[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  pEVar6 = (this->m_pMenu[2]->field0_0x0).__vtable;
  (*(code *)pEVar6[2].GetPos)
            ((int)this->m_pMenu[2]->m_maxBackShdrSize + *(short *)&pEVar6[2].OnStickRepeat + -0x44,0
             ,2,0);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_pMenu[2]->field0_0x0).m_id = 2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pEVar8 = this->m_pHeadMenuItems;
  do {
                    /* end of inlined section */
    local_118 = (EStorable__vtable *)0x0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_11c = (EStorable__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_120 = (EStorable__vtable *)0x0;
                    /* end of inlined section */
    iVar7 = iVar7 + -1;
    pEVar6 = (this->m_pMenu[2]->field0_0x0).__vtable;
    (*(code *)pEVar6[2].SetBoxDims)
              ((int)this->m_pMenu[2]->m_maxBackShdrSize + *(short *)&pEVar6[2].SetPos + -0x44,pEVar8
               ,&local_120);
    pEVar8 = pEVar8 + 1;
  } while (-1 < iVar7);
  pEVar6 = (this->field0_0x0).__vtable;
  (*(code *)pEVar6[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6[1].OnStickRepeat,this->m_pMenu[0]);
  pEVar6 = (this->field0_0x0).__vtable;
  (*(code *)pEVar6[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6[1].OnStickRepeat,this->m_pMenu[1]);
  pEVar6 = (this->field0_0x0).__vtable;
  (*(code *)pEVar6[1].GetPos)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar6[1].OnStickRepeat,this->m_pMenu[2]);
  SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[0]->field0_0x0,2,false);
  SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[1]->field0_0x0,2,false);
  SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[2]->field0_0x0,2,false);
  SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[0]->field0_0x0,4,false);
  SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[1]->field0_0x0,4,false);
  SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[2]->field0_0x0,4,false);
  GetZodiacName__Fs(1);
  return;
}

void ECharedSideMenu::CleanUp() {
	int i;
	
  EUIObjectNode__vtable *pEVar1;
  EUIMenu *pEVar2;
  ETextEntryDialog *pEVar3;
  ERShader *this_00;
  ERFont *this_01;
  EUIMenu **ppEVar4;
  int iVar5;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar1[1].AddChild,this->m_pMenu[0]);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar1[1].AddChild,this->m_pMenu[1]);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar1[1].AddChild,this->m_pMenu[2]);
  this->m_nCurrentMenuType = 0;
  while( true ) {
    ppEVar4 = this->m_pMenu;
    if (this->m_pBlankShdr == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_pBlankShdr->field0_0x0);
    this->m_pBlankShdr = (ERShader *)0x0;
  }
  while (this->m_pSideMenuCurveShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pSideMenuCurveShdr->field0_0x0);
    this->m_pSideMenuCurveShdr = (ERShader *)0x0;
  }
  this_00 = this->m_pBevelShdr;
  while (this_00 != (ERShader *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    this->m_pBevelShdr = (ERShader *)0x0;
    this_00 = this->m_pBevelShdr;
  }
  this_01 = this->m_pFont;
  while (iVar5 = 2, this_01 != (ERFont *)0x0) {
    DelRef__9EResource(&this_01->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
    this_01 = this->m_pFont;
  }
  do {
    pEVar2 = *ppEVar4;
    if (pEVar2 != (EUIMenu *)0x0) {
      pEVar1 = (pEVar2->field0_0x0).__vtable;
      (*(code *)pEVar1->Draw)((int)pEVar2->m_maxBackShdrSize + *(short *)&pEVar1->Update + -0x44,3);
    }
    *ppEVar4 = (EUIMenu *)0x0;
    iVar5 = iVar5 + -1;
    ppEVar4 = ppEVar4 + 1;
  } while (-1 < iVar5);
  pEVar3 = this->m_pKeyboard;
  if (pEVar3 != (ETextEntryDialog *)0x0) {
    pEVar1 = (pEVar3->field0_0x0).__vtable;
    (*(code *)pEVar1->Draw)((int)pEVar3->m_szText + *(short *)&pEVar1->Update + -0x3e,3);
    this->m_pKeyboard = (ETextEntryDialog *)0x0;
  }
  return;
}

void ECharedSideMenu::Draw(ERC *prc) {
	float fTemp;
	EUIObjectNode *this;
	float x;
	float x;
	float x;
	float x;
	float x;
	float y;
	float y;
	EUIObjectMover *this;
	
  short sVar1;
  int iVar2;
  EUIObjectNode__vtable *pEVar3;
  ERC__vtable *pEVar4;
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
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float local_160;
  undefined4 local_15c;
  float local_150;
  float local_14c;
  float local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  float local_12c;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
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
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  local_90 = (undefined4)unaff_s5;
  uStack_8c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_a0 = (undefined4)unaff_s4;
  uStack_9c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_retaddr;
  uStack_4c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s8;
  uStack_5c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_70 = (undefined4)unaff_s7;
  uStack_6c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_80 = (undefined4)unaff_s6;
  uStack_7c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_b0 = (undefined4)unaff_s3;
  uStack_ac = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_c0 = (undefined4)unaff_s2;
  uStack_bc = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_d0 = (undefined4)unaff_s1;
  uStack_cc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_e0 = (undefined4)unaff_s0;
  uStack_dc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 1 & 1U) == 0) {
    return;
  }
  if (*(int *)&this->m_bDisplayBackground == 0) {
    return;
  }
                    /* end of inlined section */
  fVar5 = (this->m_vCurPos).field0_0x0.d[2];
  if (0.2 < fVar5) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    uVar7 = 0x3f3f7cee;
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150 = (this->m_vCurPos).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_15c = 0x3e51eb85;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_160 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_140 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_13c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_f8 = 0x3ea9fbe7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130 = 0x3f800000;
    local_12c = 0.0;
    local_120 = 0x3c800000;
    local_11c = 0x3c800000;
    local_118 = 0x3ea9fbe7;
    local_114 = 0x3ea8f5c3;
                    /* end of inlined section */
    fVar5 = 0.0;
    local_14c = (float)uVar7;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_160,
               &local_150,&local_140,&local_130,&local_120);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_150 = (this->m_vCurPos).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_160 = 0.18;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_14c = 0.833;
    local_13c = 0x3f800000;
    local_110 = 0x3f800000;
    local_100 = 0x3c800000;
    local_fc = 0x3c800000;
    local_f4 = 0x3ea8f5c3;
                    /* end of inlined section */
    local_15c = uVar7;
    local_140 = fVar5;
    local_10c = fVar5;
    (*(code *)prc->__vtable[1].DisplayList)
              (fVar5,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_160,
               &local_150,&local_140,&local_110,&local_100);
    Select__8ERShaderP3ERCi(this->m_pSideMenuCurveShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_160 = 0.025;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_14c = 1.0;
    local_150 = 1.0;
    local_134 = 0x3f800000;
    local_138 = 0x3f800000;
    local_13c = 0x3f800000;
    local_140 = 1.0;
                    /* end of inlined section */
    local_15c = uVar7;
    (*(code *)prc->__vtable[1].ClipRect)
              (fVar5,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_160,
               &local_150,&local_140);
    Select__8ERShaderP3ERCi(this->m_pBevelShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_160 = (this->m_vCurPos).field0_0x0.d[2];
                    /* end of inlined section */
    local_150 = local_160 + 0.005;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_15c = 0x3e558106;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_14c = 0.833;
    local_13c = 0x3f800000;
    local_130 = 0x3f800000;
    local_e4 = 0x3f800000;
    local_e8 = 0x3f800000;
    local_ec = 0x3f800000;
    local_f0 = 0x3f800000;
                    /* end of inlined section */
    local_140 = fVar5;
    local_12c = fVar5;
    (*(code *)prc->__vtable[1].DisplayList)
              (fVar5,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_160,
               &local_150,&local_140,&local_130,&local_f0);
    if (*(int *)&this->m_bDisplayMenu != 0) {
      iVar2 = this->m_nCurrentMenuType;
      if (iVar2 == 2) {
        DrawBodyMenu__15ECharedSideMenuP3ERC(this,prc);
      }
      else if (iVar2 < 3) {
        if (iVar2 != 1) {
          fVar5 = (this->m_mover).m_stopt;
          goto LAB_0010e328;
        }
        DrawPersonalMenu__15ECharedSideMenuP3ERC(this,prc);
      }
      else {
        if (iVar2 != 3) {
          fVar5 = (this->m_mover).m_stopt;
          goto LAB_0010e328;
        }
        DrawHeadMenu__15ECharedSideMenuP3ERC(this,prc);
      }
    }
  }
  else {
                    /* end of inlined section */
    fVar8 = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    uVar7 = 0x3e51eb85;
    uVar6 = 0x3f800000;
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150 = (this->m_vCurPos).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_14c = 0.747891;
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
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_120 = 0x3c800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_118 = 0x3ea9fbe7;
    local_11c = 0x3c800000;
    local_114 = 0x3ea8f5c3;
                    /* end of inlined section */
    local_160 = fVar8;
    local_15c = uVar7;
    local_140 = fVar8;
    local_13c = uVar6;
    local_130 = uVar6;
    local_12c = fVar8;
    (*(code *)prc->__vtable[1].DisplayList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_160,&local_150,
               &local_140,&local_130,&local_120);
    Select__8ERShaderP3ERCi(this->m_pSideMenuCurveShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150 = (this->m_vCurPos).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_15c = 0x3f3f75c9;
    local_114 = 0x3ea8f5c3;
                    /* end of inlined section */
    local_160 = fVar8;
    local_14c = fVar5 * 5.0 * 0.15 + 0.747891;
    local_140 = fVar8;
    local_13c = uVar6;
    local_130 = uVar6;
    local_12c = fVar8;
    local_120 = uVar6;
    local_11c = uVar6;
    local_118 = uVar6;
    (*(code *)prc->__vtable[1].DisplayList)
              (fVar8,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_160,
               &local_150,&local_140,&local_130,&local_120);
    Select__8ERShaderP3ERCi(this->m_pBevelShdr,prc,0);
    local_160 = (this->m_vCurPos).field0_0x0.d[2];
    local_15c = uVar7;
    local_140 = fVar8;
    local_13c = uVar6;
    local_130 = uVar6;
    local_12c = fVar8;
    local_120 = uVar6;
    local_11c = uVar6;
    local_118 = uVar6;
    local_114 = uVar6;
    if (0.165 < local_160) {
      pEVar4 = prc->__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      sVar1 = *(short *)&pEVar4[1].SpriteList;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_14c = 0.833;
                    /* end of inlined section */
    }
    else {
                    /* end of inlined section */
      if (local_160 <= 0.07) {
        local_150 = local_160 + 0.005;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_14c = 0.747891;
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].DisplayList)
                  (fVar8,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_160,
                   &local_150,&local_140,&local_130,&local_120);
        goto LAB_0010e324;
      }
                    /* end of inlined section */
      pEVar4 = prc->__vtable;
      local_14c = local_160 + 0.677891;
      sVar1 = *(short *)&pEVar4[1].SpriteList;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    }
    local_150 = local_160 + 0.005;
                    /* end of inlined section */
                    /* end of inlined section */
    (*(code *)pEVar4[1].DisplayList)
              (fVar8,(int)&prc->m_pdl + (int)sVar1,&local_160,&local_150,&local_140,&local_130,
               &local_120);
  }
LAB_0010e324:
  fVar5 = (this->m_mover).m_stopt;
LAB_0010e328:
                    /* end of inlined section */
  if ((this->m_mover).m_curtime == fVar5) {
    DrawChildren__13EUIObjectNodeP3ERC(&this->field0_0x0,prc);
  }
  if (this->m_pKeyboard != (ETextEntryDialog *)0x0) {
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_160 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_15c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_150 = 1.0;
    local_14c = 1.0;
    local_140 = 0.0;
    local_13c = 0x3f800000;
    local_130 = 0x3f800000;
    local_12c = 0.0;
    local_120 = 0;
    local_11c = 0;
    local_118 = 0;
    local_114 = 0x3f000000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_160,
               &local_150,&local_140,&local_130,&local_120);
    pEVar3 = (this->m_pKeyboard->field0_0x0).__vtable;
    (*(code *)pEVar3->Message)
              ((int)this->m_pKeyboard->m_szText + *(short *)&pEVar3->SetBoxDims + -0x3e,prc);
  }
  return;
}

void ECharedSideMenu::Update() {
	EUIObjectNode *this;
	EUIObjectMover *this;
	float h;
	float dt;
	float u;
	float u;
	int i;
	int value;
	int value;
	int value;
	EUIMenu *this;
	
  EUIVirtualCtrl__vtable *pEVar1;
  EVec4__null___1__1 *pEVar2;
  EVec4__null___1__1 *pEVar3;
  bool bVar4;
  EVec4 *pEVar5;
  ETextEntryDialog *pEVar6;
  short *pTitle;
  EUIObjectNode__vtable *pEVar7;
  long lVar8;
  EVec4 *pEVar9;
  EVec4 *pEVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((((int)(this->field0_0x0).m_flags >> 2 & 1U) != 0) &&
     (*(int *)&this->m_bDisplayBackground != 0)) {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    fVar12 = (this->m_mover).m_curtime + _dt;
    (this->m_mover).m_curtime = fVar12;
    fVar13 = (this->m_mover).m_startt;
    if (fVar13 <= fVar12) {
      fVar13 = (this->m_mover).m_stopt;
      fVar13 = (float)((int)fVar12 * (uint)(fVar12 < fVar13) |
                      (int)fVar13 * (uint)(fVar12 >= fVar13));
    }
    (this->m_mover).m_curtime = fVar13;
    fVar13 = (this->m_mover).m_stopt;
    fVar12 = (this->m_mover).m_curtime;
                    /* end of inlined section */
    pEVar10 = &this->m_vCurPos;
    if (fVar12 < fVar13) {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      pEVar9 = &this->m_vStop;
      pEVar5 = &this->m_vStart;
      iVar11 = 3;
      fVar12 = 1.0 - (fVar13 - fVar12) / (fVar13 - (this->m_mover).m_startt);
      do {
        pEVar2 = &pEVar5->field0_0x0;
        iVar11 = iVar11 + -1;
        pEVar3 = &pEVar9->field0_0x0;
        pEVar5 = (EVec4 *)((int)&pEVar5->field0_0x0 + 4);
        pEVar9 = (EVec4 *)((int)&pEVar9->field0_0x0 + 4);
        (pEVar10->field0_0x0).d[0] =
             pEVar2->d[0] +
             (pEVar3->d[0] - pEVar2->d[0]) * (-fVar12 * fVar12 * fVar12 + fVar12 * fVar12 + fVar12);
        pEVar10 = (EVec4 *)((int)&pEVar10->field0_0x0 + 4);
      } while (-1 < iVar11);
                    /* end of inlined section */
      fVar15 = (this->m_vCurPos).field0_0x0.d[0];
      fVar14 = (this->m_vCurPos).field0_0x0.d[1];
      fVar13 = (this->m_vCurPos).field0_0x0.d[2];
      fVar12 = (this->m_vCurPos).field0_0x0.d[3];
      (this->field0_0x0).m_pos.field0_0x0.d[0] = fVar15;
      (this->field0_0x0).m_pos.field0_0x0.d[2] = fVar14;
      (this->field0_0x0).m_WDH.field0_0x0.d[0] = fVar13 - fVar15;
      (this->field0_0x0).m_WDH.field0_0x0.d[2] = fVar12 - fVar14;
    }
    else if (this->m_nCurrentMenuType == 0) {
      *(undefined4 *)&this->m_bDisplayBackground = 0;
      pEVar7 = (this->field0_0x0).__vtable;
      (*(code *)pEVar7[1].EUIObjectNode)
                ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)(pEVar7 + 1),this,5);
    }
    else if (this->m_pKeyboard == (ETextEntryDialog *)0x0) {
      Update__13EUIObjectNode(&this->field0_0x0);
      *(undefined4 *)&this->m_bDisplayMenu = 1;
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar8 = (*(code *)pEVar1[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                         0,0x40);
      if (lVar8 != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        if (_13EUIObjectNode_m_uiSfxSelect == (undefined1 *)0x0) {
          iVar11 = this->m_nCurrentMenuType;
        }
        else {
          (*(code *)_13EUIObjectNode_m_uiSfxSelect)();
                    /* end of inlined section */
          iVar11 = this->m_nCurrentMenuType;
        }
        if (iVar11 == 1) {
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
          if (this->m_pMenu[0]->m_pCurOpt == (EUIObjectNode *)&this->m_simName) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
            pEVar6 = (ETextEntryDialog *)_memmanAlloc__FUiUi(0x1c0,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
                    /* end of inlined section */
            pTitle = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"sim_name_title");
            pEVar6 = __16ETextEntryDialogPCUsUifib(pEVar6,pTitle,0xe,0.15,0,true);
            this->m_pKeyboard = pEVar6;
            SetBuffer__16ETextEntryDialogPCUs(pEVar6,this->m_pNamePointer);
            return;
          }
          pEVar7 = (this->field0_0x0).__vtable;
        }
        else {
          pEVar7 = (this->field0_0x0).__vtable;
        }
        (*(code *)pEVar7[1].EUIObjectNode)
                  ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)(pEVar7 + 1),this,4);
      }
    }
    else {
      bVar4 = UpdateKeyboard__16ETextEntryDialog(this->m_pKeyboard);
      if (!bVar4) {
        GetBuffer__16ETextEntryDialogPUs(this->m_pKeyboard,this->m_pNamePointer);
        pEVar6 = this->m_pKeyboard;
        if (pEVar6 != (ETextEntryDialog *)0x0) {
          pEVar7 = (pEVar6->field0_0x0).__vtable;
          (*(code *)pEVar7->Draw)((int)pEVar6->m_szText + *(short *)&pEVar7->Update + -0x3e,3);
        }
        this->m_pKeyboard = (ETextEntryDialog *)0x0;
      }
    }
  }
  return;
}

void ECharedSideMenu::Message(EUIObjectNode *pChild, u32 messId) {
	short int nPersonData[5];
	EUIMenu *this;
	int nNew;
	short int nPersonData[5];
	EUIMenu *this;
	int nNew;
	int nCurrentSign;
	short int nPersonalityTraits[5];
	EUIMenu *this;
	int nNewSign;
	int nCurrentSign;
	short int nPersonalityTraits[5];
	EUIMenu *this;
	int nNewSign;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	u32 messId;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	u32 messId;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	u32 messId;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	u32 messId;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	u32 messId;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	u32 messId;
	
  byte bVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  short *psVar6;
  ENodeListNode *pEVar7;
  ushort inSign;
  uint uVar8;
  char *pcVar9;
  EUIObjectNode *pEVar10;
  ushort nPersonData [5];
  
  switch(messId) {
  case 4:
    HideMenu__15ECharedSideMenu(this);
                    /* end of inlined section */
    pEVar10 = (this->field0_0x0).m_pParent;
    goto LAB_0010e954;
  default:
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    pEVar10 = (this->field0_0x0).m_pParent;
    if (pEVar10 == (EUIObjectNode *)0x0) {
      return;
    }
    (*(code *)pEVar10->__vtable[1].EUIObjectNode)
              ((int)&(pEVar10->m_ChildList).field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar10->__vtable + 1),this,messId);
    return;
  case 0x30:
    bVar3 = IsMale__13ECharedGender(&this->m_simGender);
    if (bVar3) {
LAB_0010e908:
      pcVar9 = "facial hair";
      goto LAB_0010e914;
    }
    pcVar9 = "makeup";
    break;
  case 0x31:
    pcVar9 = "variations";
                    /* end of inlined section */
LAB_0010e914:
    psVar6 = GetCreateASimString__7EGlobalPCc(&_globals,pcVar9);
    SetText__19ECharedTextMenuItemPCUs(this->m_pHeadMenuItems + 3,psVar6);
    pEVar10 = (this->field0_0x0).m_pParent;
    goto LAB_0010e954;
  case 0x32:
    bVar3 = IsAdult__10ECharedAge(&this->m_simAge);
    if (bVar3) goto LAB_0010e908;
                    /* end of inlined section */
    pcVar9 = "variations";
    break;
  case 0x33:
    bVar3 = IsAdult__10ECharedAge(&this->m_simAge);
    if (bVar3) {
      pcVar9 = "makeup";
      goto LAB_0010e914;
    }
                    /* end of inlined section */
    pcVar9 = "variations";
    break;
  case 0x34:
    if (this->m_nUnusedPersonalityOptions < 1) {
      return;
    }
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
    pEVar7 = pChild[1].m_ChildList.field0_0x0.m_l.m_pHead;
    bVar1 = *(byte *)&pEVar7[5].data;
                    /* end of inlined section */
    if (9 < bVar1) goto LAB_0010e778;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
    *(byte *)&pEVar7[5].data = bVar1 + 1;
                    /* end of inlined section */
                    /* end of inlined section */
    iVar5 = this->m_nUnusedPersonalityOptions + -1;
    goto LAB_0010e774;
  case 0x35:
    if (0x18 < this->m_nUnusedPersonalityOptions) {
      return;
    }
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
    pEVar7 = pChild[1].m_ChildList.field0_0x0.m_l.m_pHead;
    cVar2 = *(char *)&pEVar7[5].data;
                    /* end of inlined section */
    if (cVar2 == '\0') goto LAB_0010e778;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
    *(char *)&pEVar7[5].data = cVar2 + -1;
                    /* end of inlined section */
    iVar5 = this->m_nUnusedPersonalityOptions + 1;
LAB_0010e774:
    this->m_nUnusedPersonalityOptions = iVar5;
LAB_0010e778:
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
    nPersonData[0] = (ushort)this->m_pPersonalMenuItems[0].m_nNumBlocksFilled;
    nPersonData[1] = (ushort)this->m_pPersonalMenuItems[1].m_nNumBlocksFilled;
    nPersonData[2] = (ushort)this->m_pPersonalMenuItems[2].m_nNumBlocksFilled;
    nPersonData[3] = (ushort)this->m_pPersonalMenuItems[3].m_nNumBlocksFilled;
    nPersonData[4] = (ushort)this->m_pPersonalMenuItems[4].m_nNumBlocksFilled;
    uVar4 = EORComputeZodiacSign__FPCs(nPersonData);
                    /* end of inlined section */
    (this->m_zodiacSign).m_nCurrentSign = (uchar)uVar4;
    return;
  case 0x36:
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
    pEVar7 = pChild[1].m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    uVar4 = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
    uVar8 = *(byte *)&pEVar7[5].data + 1;
                    /* end of inlined section */
    bVar3 = uVar8 < 0xd;
    goto LAB_0010e7e4;
  case 0x37:
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
    pEVar7 = pChild[1].m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    uVar4 = 0xc;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
    uVar8 = *(byte *)&pEVar7[5].data - 1;
    bVar3 = 0 < (int)uVar8;
LAB_0010e7e4:
    inSign = (ushort)uVar8;
    if (!bVar3) {
      inSign = uVar4;
    }
                    /* end of inlined section */
    *(char *)&pEVar7[5].data = (char)inSign;
    EORSetZodiacSign__FPss(nPersonData,inSign);
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
    this->m_pPersonalMenuItems[0].m_nNumBlocksFilled = (uchar)((int)(short)nPersonData[3] / 100);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
    this->m_pPersonalMenuItems[1].m_nNumBlocksFilled = (uchar)((int)(short)nPersonData[0] / 100);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
    this->m_pPersonalMenuItems[2].m_nNumBlocksFilled = (uchar)((int)(short)nPersonData[4] / 100);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
    this->m_pPersonalMenuItems[3].m_nNumBlocksFilled = (uchar)((int)(short)nPersonData[2] / 100);
                    /* end of inlined section */
    this->m_nUnusedPersonalityOptions = 0;
                    /* end of inlined section */
    this->m_pPersonalMenuItems[4].m_nNumBlocksFilled = (uchar)((int)(short)nPersonData[1] / 100);
    return;
  }
  psVar6 = GetCreateASimString__7EGlobalPCc(&_globals,pcVar9);
  SetText__19ECharedTextMenuItemPCUs(this->m_pHeadMenuItems + 3,psVar6);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  pEVar10 = (this->field0_0x0).m_pParent;
LAB_0010e954:
  if (pEVar10 != (EUIObjectNode *)0x0) {
    (*(code *)pEVar10->__vtable[1].EUIObjectNode)
              ((int)&(pEVar10->m_ChildList).field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar10->__vtable + 1),this,messId);
                    /* end of inlined section */
  }
  return;
}

void ECharedSideMenu::NewSize(EVec4 vNewLocation, float fTime) {
	EUIObjectMover *this;
	float stopt;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (this->m_vStop).field0_0x0.d[1];
  fVar2 = (this->m_vStop).field0_0x0.d[2];
  fVar3 = (this->m_vStop).field0_0x0.d[3];
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
  (this->m_vStart).field0_0x0.d[0] = (this->m_vStop).field0_0x0.d[0];
  (this->m_vStart).field0_0x0.d[1] = fVar1;
  (this->m_vStart).field0_0x0.d[2] = fVar2;
  (this->m_vStart).field0_0x0.d[3] = fVar3;
  fVar1 = (vNewLocation->field0_0x0).d[1];
  fVar2 = (vNewLocation->field0_0x0).d[2];
  fVar3 = (vNewLocation->field0_0x0).d[3];
  (this->m_vStop).field0_0x0.d[0] = (vNewLocation->field0_0x0).d[0];
  (this->m_vStop).field0_0x0.d[1] = fVar1;
  (this->m_vStop).field0_0x0.d[2] = fVar2;
  (this->m_vStop).field0_0x0.d[3] = fVar3;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_mover).m_curtime = 0.0;
  (this->m_mover).m_startt = 0.0;
  (this->m_mover).m_stopt = fTime;
  fVar1 = (this->m_mover).m_curtime;
  fVar2 = (this->m_mover).m_startt;
  if (fVar2 <= fVar1) {
    fVar2 = (float)((int)fVar1 * (uint)(fVar1 < fTime) | (int)fTime * (uint)(fVar1 >= fTime));
  }
  (this->m_mover).m_curtime = fVar2;
                    /* end of inlined section */
  fVar4 = (this->m_vStart).field0_0x0.d[0];
  fVar3 = (this->m_vStart).field0_0x0.d[1];
  fVar2 = (this->m_vStart).field0_0x0.d[2];
  fVar1 = (this->m_vStart).field0_0x0.d[3];
  (this->field0_0x0).m_pos.field0_0x0.d[0] = fVar4;
  (this->field0_0x0).m_pos.field0_0x0.d[2] = fVar3;
  (this->field0_0x0).m_WDH.field0_0x0.d[0] = fVar2 - fVar4;
  (this->field0_0x0).m_WDH.field0_0x0.d[2] = fVar1 - fVar3;
  return;
}

void ECharedSideMenu::InitMenu(int nMenuType) {
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  *(undefined4 *)&this->m_bDisplayBackground = 1;
  if (nMenuType == 2) {
    SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[1]->field0_0x0,2,true);
    SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[1]->field0_0x0,4,true);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_38 = this->m_fBodyMenuWidth + 0.055;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_40 = 0;
    local_34 = 0x3f553f7d;
                    /* end of inlined section */
    local_3c = 0x3e6b851f;
    NewSize__15ECharedSideMenuG5EVec4f(this,(EVec4 *)&local_40,0.23);
    this->m_nCurrentMenuType = 2;
  }
  else if (nMenuType < 3) {
    if (nMenuType == 1) {
      SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[0]->field0_0x0,2,true);
      SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[0]->field0_0x0,4,true);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      local_38 = this->m_fPersonalMenuWidth + 0.055;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_3c = 0x3e6b851f;
      local_34 = 0x3f553f7d;
                    /* end of inlined section */
      local_40 = 0;
      NewSize__15ECharedSideMenuG5EVec4f(this,(EVec4 *)&local_40,0.3);
      this->m_nCurrentMenuType = 1;
    }
    else {
      this->m_nCurrentMenuType = nMenuType;
    }
  }
  else if (nMenuType == 3) {
    SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[2]->field0_0x0,2,true);
    SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[2]->field0_0x0,4,true);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    local_38 = this->m_fHeadMenuWidth + 0.055;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_40 = 0;
    local_34 = 0x3f553f7d;
                    /* end of inlined section */
    local_3c = 0x3e6b851f;
    NewSize__15ECharedSideMenuG5EVec4f(this,(EVec4 *)&local_40,0.23);
    this->m_nCurrentMenuType = 3;
  }
  else {
    this->m_nCurrentMenuType = nMenuType;
  }
  return;
}

void ECharedSideMenu::HideMenu() {
  int iVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIMenu *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar1 = this->m_nCurrentMenuType;
  if (iVar1 == 2) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_30 = 0;
    local_24 = 0x3f553f7d;
    local_2c = 0x3e6b851f;
                    /* end of inlined section */
    local_28 = 0;
    NewSize__15ECharedSideMenuG5EVec4f(this,(EVec4 *)&local_30,0.23);
    SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[1]->field0_0x0,2,false);
    this_00 = this->m_pMenu[1];
  }
  else {
    if (2 < iVar1) {
      if (iVar1 == 3) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_30 = 0;
        local_24 = 0x3f553f7d;
        local_2c = 0x3e6b851f;
                    /* end of inlined section */
        local_28 = 0;
        NewSize__15ECharedSideMenuG5EVec4f(this,(EVec4 *)&local_30,0.23);
        SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[2]->field0_0x0,2,false);
        SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[2]->field0_0x0,4,false);
        pEVar2 = (this->field0_0x0).__vtable;
      }
      else {
        pEVar2 = (this->field0_0x0).__vtable;
      }
      goto LAB_0010ed38;
    }
    if (iVar1 != 1) {
      pEVar2 = (this->field0_0x0).__vtable;
      goto LAB_0010ed38;
    }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_2c = 0x3e6b851f;
    local_24 = 0x3f553f7d;
    local_30 = 0;
                    /* end of inlined section */
    local_28 = 0;
    NewSize__15ECharedSideMenuG5EVec4f(this,(EVec4 *)&local_30,0.3);
    SetFlagsPropigate__13EUIObjectNodeUib(&this->m_pMenu[0]->field0_0x0,2,false);
    this_00 = this->m_pMenu[0];
  }
  SetFlagsPropigate__13EUIObjectNodeUib(&this_00->field0_0x0,4,false);
  pEVar2 = (this->field0_0x0).__vtable;
LAB_0010ed38:
  this->m_nCurrentMenuType = 0;
  *(undefined4 *)&this->m_bDisplayMenu = 0;
  (*(code *)pEVar2[1].EUIObjectNode)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)(pEVar2 + 1),this,0x28);
  pEVar2 = (this->field0_0x0).__vtable;
  (*(code *)pEVar2[1].EUIObjectNode)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)(pEVar2 + 1),this,0x41);
  pEVar2 = (this->field0_0x0).__vtable;
  (*(code *)pEVar2[1].EUIObjectNode)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)(pEVar2 + 1),this,0x40);
  return;
}

void ECharedSideMenu::DrawPersonalMenu(ERC *prc) {
	int i;
	float fLeft;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	float x;
	float x;
	
  ERFont *pEVar1;
  short *szString;
  undefined8 unaff_s0;
  int iVar2;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined local_150 [8];
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_120;
  float local_11c;
  float local_110;
  undefined4 local_10c;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
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
  undefined4 local_60;
  undefined4 uStack_5c;
  
  local_70 = (undefined4)unaff_s7;
  uStack_6c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_80 = (undefined4)unaff_s6;
  uStack_7c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_a0 = (undefined4)unaff_s4;
  uStack_9c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_c0 = (undefined4)unaff_s2;
  uStack_bc = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_d0 = (undefined4)unaff_s1;
  uStack_cc = (undefined4)((ulong)unaff_s1 >> 0x20);
  iVar2 = 0;
  local_60 = (undefined4)unaff_retaddr;
  uStack_5c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_90 = (undefined4)unaff_s5;
  uStack_8c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_b0 = (undefined4)unaff_s3;
  uStack_ac = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_e0 = (undefined4)unaff_s0;
  uStack_dc = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar3 = 1.0;
  DrawTextBox__10EDialogWinP3ERCffff(prc,0.04,0.218,this->m_fPersonalMenuWidth,1.0);
  local_150._0_4_ = fVar3;
  local_150._4_4_ = fVar3;
  local_148 = fVar3;
  local_144 = fVar3;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* end of inlined section */
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,0.04,0.29,0.1,this->m_fPersonalMenuWidth,fVar3,(EVec4 *)local_150);
  local_150._0_4_ = fVar3;
  local_150._4_4_ = fVar3;
  local_148 = fVar3;
  local_144 = fVar3;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,0.04,0.41,0.32,this->m_fPersonalMenuWidth,fVar3,(EVec4 *)local_150);
  Select__6ERFontP3ERC(this->m_pFont,prc);
  SetSize__6ERFontffb(this->m_pFont,14.0,fVar3,true);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  pEVar1 = this->m_pFont;
                    /* end of inlined section */
  (pEVar1->m_vColor).field0_0x0.d[0] = fVar3;
  (pEVar1->m_vColor).field0_0x0.d[1] = fVar3;
  (pEVar1->m_vColor).field0_0x0.d[2] = fVar3;
  (pEVar1->m_vColor).field0_0x0.d[3] = fVar3;
  local_150._0_4_ = fVar3;
  local_150._4_4_ = fVar3;
  local_148 = fVar3;
  local_144 = fVar3;
  local_140 = fVar3;
  local_13c = fVar3;
  local_138 = fVar3;
  szString = GetCreateASimString__7EGlobalPCc(&_globals,"remaining");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_130 = 0x3d8b4396;
  local_12c = 0x3f333333;
  local_150._0_4_ = 0.068;
  local_150._4_4_ = 0.7;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,szString,true,(EVec2 *)&local_130,E_FAX_LEFT,E_FAY_CENTER,
             (EVec2 *)0x0);
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
  if (0 < this->m_nUnusedPersonalityOptions) {
    fVar5 = 0.0096875;
    local_150._4_4_ = 0.685;
    local_13c = 0.707917;
    uVar4 = 0x3f666666;
    do {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_150._0_4_ = this->m_fLeftOffset + 0.065 + (float)iVar2 * fVar5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_120 = 0;
                    /* end of inlined section */
      local_140 = local_150._0_4_ + 0.0065625;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_10c = 0;
      local_100 = 0x3dcccccd;
      local_fc = 0x3f000000;
                    /* end of inlined section */
      iVar2 = iVar2 + 1;
      local_11c = fVar3;
      local_110 = fVar3;
      local_f8 = uVar4;
      local_f4 = fVar3;
      (*(code *)prc->__vtable[1].DisplayList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,&local_140
                 ,&local_120,&local_110,&local_100);
    } while (iVar2 < this->m_nUnusedPersonalityOptions);
  }
  if (iVar2 < 0x19) {
    fVar3 = 0.0096875;
    fVar5 = 0.0065625;
    local_12c = 0x3f800000;
    do {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_150._4_4_ = 0.685;
                    /* end of inlined section */
      local_150._0_4_ = this->m_fLeftOffset + 0.065 + (float)iVar2 * fVar3;
      local_140 = local_150._0_4_ + fVar5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_13c = 0.707917;
      local_130 = 0;
      local_11c = 0.0;
      local_f0 = 0x3ecccccd;
      local_ec = 0x3ecccccd;
      local_e8 = 0x3ecccccd;
                    /* end of inlined section */
      iVar2 = iVar2 + 1;
      local_120 = local_12c;
      local_e4 = local_12c;
      (*(code *)prc->__vtable[1].DisplayList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,local_150,&local_140
                 ,(EVec2 *)&local_130,&local_120,&local_f0);
    } while (iVar2 < 0x19);
  }
  return;
}

void ECharedSideMenu::DrawBodyMenu(ERC *prc) {
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float _x;
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
  
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  _x = 0.04;
  DrawTextBox__10EDialogWinP3ERCffff(prc,0.04,0.239,this->m_fBodyMenuWidth,1.0);
  DrawTextBox__10EDialogWinP3ERCffff(prc,_x,0.303,this->m_fBodyMenuWidth,1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_54 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_58 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_5c = 0x3f800000;
                    /* end of inlined section */
                    /* end of inlined section */
  local_60 = 0x3f800000;
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,_x,0.371,0.102,this->m_fBodyMenuWidth,1.0,(EVec4 *)&local_60);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_54 = 0x3f800000;
  local_58 = 0x3f800000;
  local_5c = 0x3f800000;
                    /* end of inlined section */
  local_60 = 0x3f800000;
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,_x,0.479,0.102,this->m_fBodyMenuWidth,1.0,(EVec4 *)&local_60);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_54 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_58 = 0x3f800000;
  local_5c = 0x3f800000;
                    /* end of inlined section */
  local_60 = 0x3f800000;
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,_x,0.589,0.102,this->m_fBodyMenuWidth,1.0,(EVec4 *)&local_60);
  return;
}

void ECharedSideMenu::DrawHeadMenu(ERC *prc) {
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float _x;
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
  
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  _x = 0.04;
  DrawTextBox__10EDialogWinP3ERCffff(prc,0.04,0.256,this->m_fHeadMenuWidth,1.0);
  DrawTextBox__10EDialogWinP3ERCffff(prc,_x,0.448,this->m_fHeadMenuWidth,1.0);
  DrawTextBox__10EDialogWinP3ERCffff(prc,_x,0.528,this->m_fHeadMenuWidth,1.0);
  DrawTextBox__10EDialogWinP3ERCffff(prc,_x,0.606,this->m_fHeadMenuWidth,1.0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_44 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_48 = 0x3f800000;
  local_4c = 0x3f800000;
                    /* end of inlined section */
  local_50 = 0x3f800000;
  DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
            (prc,_x,0.328,0.102,this->m_fHeadMenuWidth,1.0,(EVec4 *)&local_50);
  return;
}

void ECharedSideMenu::ResetMenus(ENeighborhoodCustomChar *pNewData, bool bUseStringPointer) {
	short int nPersonData[5];
	u32 i;
	StdPrm nZodiacText;
	ECharedPersonalItem *this;
	ECharedPersonalItem *this;
	ECharedPersonalItem *this;
	ECharedPersonalItem *this;
	ECharedPersonalItem *this;
	
  EUIObjectNode__vtable *pEVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  ushort nPersonData [5];
  
  puVar6 = nPersonData;
  iVar8 = 0;
  uVar7 = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  this->m_pPersonalMenuItems[0].m_nNumBlocksFilled = pNewData->m_nPersNeat;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  this->m_pPersonalMenuItems[1].m_nNumBlocksFilled = pNewData->m_nPersOutgoing;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  this->m_pPersonalMenuItems[2].m_nNumBlocksFilled = pNewData->m_nPersActive;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  this->m_pPersonalMenuItems[3].m_nNumBlocksFilled = pNewData->m_nPersPlayful;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  this->m_pPersonalMenuItems[4].m_nNumBlocksFilled = pNewData->m_nPersNice;
                    /* end of inlined section */
  iVar3 = 0x19 - (uint)pNewData->m_nPersNeat;
  this->m_nUnusedPersonalityOptions = iVar3;
  iVar3 = iVar3 - (uint)pNewData->m_nPersOutgoing;
  this->m_nUnusedPersonalityOptions = iVar3;
  iVar3 = iVar3 - (uint)pNewData->m_nPersActive;
  this->m_nUnusedPersonalityOptions = iVar3;
  iVar3 = iVar3 - (uint)pNewData->m_nPersPlayful;
  this->m_nUnusedPersonalityOptions = iVar3;
  this->m_nUnusedPersonalityOptions = iVar3 - (uint)pNewData->m_nPersNice;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
  nPersonData[0] = (ushort)this->m_pPersonalMenuItems[0].m_nNumBlocksFilled;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
  nPersonData[1] = (ushort)this->m_pPersonalMenuItems[1].m_nNumBlocksFilled;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
  nPersonData[2] = (ushort)this->m_pPersonalMenuItems[2].m_nNumBlocksFilled;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
  nPersonData[3] = (ushort)this->m_pPersonalMenuItems[3].m_nNumBlocksFilled;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
  nPersonData[4] = (ushort)this->m_pPersonalMenuItems[4].m_nNumBlocksFilled;
  do {
    uVar2 = *puVar6;
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 1;
    iVar8 = (int)((iVar8 + (uint)uVar2) * 0x10000) >> 0x10;
  } while (uVar7 < 5);
  if (iVar8 == 0) {
    (this->m_zodiacSign).m_nCurrentSign = '\0';
  }
  else {
    uVar2 = EORComputeZodiacSign__FPCs(nPersonData);
                    /* end of inlined section */
    (this->m_zodiacSign).m_nCurrentSign = (uchar)uVar2;
  }
                    /* end of inlined section */
  if (*(int *)&(pNewData->c).m_bAdult == 0) {
    SetAge__10ECharedAgeb(&this->m_simAge,false);
    psVar4 = GetCreateASimString__7EGlobalPCc(&_globals,"variations");
    SetText__19ECharedTextMenuItemPCUs(this->m_pHeadMenuItems + 3,psVar4);
    if (*(int *)&pNewData->c == 0) {
      SetGender__13ECharedGenderb(&this->m_simGender,false);
      goto LAB_0010f600;
    }
  }
  else {
    SetAge__10ECharedAgeb(&this->m_simAge,true);
    if (*(int *)&pNewData->c == 0) {
      psVar4 = GetCreateASimString__7EGlobalPCc(&_globals,"makeup");
      SetText__19ECharedTextMenuItemPCUs(this->m_pHeadMenuItems + 3,psVar4);
      SetGender__13ECharedGenderb(&this->m_simGender,false);
      goto LAB_0010f600;
    }
    psVar4 = GetCreateASimString__7EGlobalPCc(&_globals,"facial hair");
    SetText__19ECharedTextMenuItemPCUs(this->m_pHeadMenuItems + 3,psVar4);
  }
  SetGender__13ECharedGenderb(&this->m_simGender,true);
LAB_0010f600:
  if (bUseStringPointer) {
    this->m_pNamePointer = pNewData->Name;
  }
  else {
    *this->m_pNamePointer = pNewData->Name[0];
    if (*this->m_pNamePointer != 0) {
      psVar4 = pNewData->Name;
      uVar7 = 1;
      do {
        psVar4 = psVar4 + 1;
        if (0x1f < uVar7) break;
        this->m_pNamePointer[uVar7] = *psVar4;
        psVar5 = this->m_pNamePointer + uVar7;
        uVar7 = uVar7 + 1;
      } while (*psVar5 != 0);
    }
  }
  SetName__11ECharedNamePUs(&this->m_simName,this->m_pNamePointer);
  pEVar1 = (this->m_pMenu[0]->field0_0x0).__vtable;
  (*(code *)pEVar1[2].OnButtonRepeat)
            ((int)this->m_pMenu[0]->m_maxBackShdrSize + *(short *)&pEVar1[2].StateChanged + -0x44,
             &this->m_simName);
  pEVar1 = (this->m_pMenu[1]->field0_0x0).__vtable;
  (*(code *)pEVar1[2].OnButtonRepeat)
            ((int)this->m_pMenu[1]->m_maxBackShdrSize + *(short *)&pEVar1[2].StateChanged + -0x44,
             this->m_pBodyMenuItems);
  pEVar1 = (this->m_pMenu[2]->field0_0x0).__vtable;
  (*(code *)pEVar1[2].OnButtonRepeat)
            ((int)this->m_pMenu[2]->m_maxBackShdrSize + *(short *)&pEVar1[2].StateChanged + -0x44,
             this->m_pHeadMenuItems);
  return;
}

void ECharedSideMenu::ResetMenus(c16 *szName) {
  EUIObjectNode__vtable *pEVar1;
  short *szText;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  this->m_pPersonalMenuItems[0].m_nNumBlocksFilled = '\0';
  this->m_pPersonalMenuItems[1].m_nNumBlocksFilled = '\0';
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  this->m_pPersonalMenuItems[2].m_nNumBlocksFilled = '\0';
  this->m_pPersonalMenuItems[3].m_nNumBlocksFilled = '\0';
  this->m_pPersonalMenuItems[4].m_nNumBlocksFilled = '\0';
                    /* end of inlined section */
  this->m_nUnusedPersonalityOptions = 0x19;
  Cleanup__16ECharedBirthSign(&this->m_zodiacSign);
  Init__16ECharedBirthSign(&this->m_zodiacSign);
  szText = GetCreateASimString__7EGlobalPCc(&_globals,"facial hair");
  SetText__19ECharedTextMenuItemPCUs(this->m_pHeadMenuItems + 3,szText);
  SetGender__13ECharedGenderb(&this->m_simGender,true);
  SetAge__10ECharedAgeb(&this->m_simAge,true);
  SetName__11ECharedNamePUs(&this->m_simName,szName);
  this->m_pNamePointer = szName;
  pEVar1 = (this->m_pMenu[0]->field0_0x0).__vtable;
  (*(code *)pEVar1[2].OnButtonRepeat)
            ((int)this->m_pMenu[0]->m_maxBackShdrSize + *(short *)&pEVar1[2].StateChanged + -0x44,
             &this->m_simName);
  pEVar1 = (this->m_pMenu[1]->field0_0x0).__vtable;
  (*(code *)pEVar1[2].OnButtonRepeat)
            ((int)this->m_pMenu[1]->m_maxBackShdrSize + *(short *)&pEVar1[2].StateChanged + -0x44,
             this->m_pBodyMenuItems);
  pEVar1 = (this->m_pMenu[2]->field0_0x0).__vtable;
  (*(code *)pEVar1[2].OnButtonRepeat)
            ((int)this->m_pMenu[2]->m_maxBackShdrSize + *(short *)&pEVar1[2].StateChanged + -0x44,
             this->m_pHeadMenuItems);
  return;
}

void ECharedSideMenu::GetPersonalAttributes(ENeighborhoodCustomChar *pSim, bool bUseZeros) {
	StdPrm nCurrSign;
	short int newAttributes[5];
	
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  ushort newAttributes [5];
  
  uVar1 = (this->m_zodiacSign).m_nCurrentSign;
  if ((uVar1 == '\0') && (bUseZeros)) {
    iVar3 = rand();
    iVar3 = iVar3 % 0xb + 1;
    EORSetZodiacSign__FPss(newAttributes,(ushort)iVar3);
    pSim->m_nPersNeat = (uchar)((int)(short)newAttributes[0] / 100);
    pSim->m_nPersOutgoing = (uchar)((int)(short)newAttributes[1] / 100);
    pSim->m_nPersActive = (uchar)((int)(short)newAttributes[2] / 100);
    uVar2 = (uchar)((int)(short)newAttributes[4] / 100);
    pSim->m_nPersPlayful = (uchar)((int)(short)newAttributes[3] / 100);
    pSim->m_ZodiacSign = (uchar)iVar3;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
    pSim->m_nPersNeat = this->m_pPersonalMenuItems[0].m_nNumBlocksFilled;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
    pSim->m_nPersOutgoing = this->m_pPersonalMenuItems[1].m_nNumBlocksFilled;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
    pSim->m_nPersActive = this->m_pPersonalMenuItems[2].m_nNumBlocksFilled;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
    pSim->m_nPersPlayful = this->m_pPersonalMenuItems[3].m_nNumBlocksFilled;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
    uVar2 = this->m_pPersonalMenuItems[4].m_nNumBlocksFilled;
                    /* end of inlined section */
    pSim->m_ZodiacSign = uVar1;
  }
  pSim->m_nPersNice = uVar2;
  return;
}

void ECharedSideMenu::EnableAgeEdit() {
	ECharedAge *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  *(undefined4 *)&(this->m_simAge).m_bAllowTextChange = 1;
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_simAge,0x10,true);
  return;
}

void ECharedSideMenu::DisableAgeEdit() {
	ECharedAge *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  *(undefined4 *)&(this->m_simAge).m_bAllowTextChange = 0;
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_simAge,0x10,false);
  return;
}

void ECharedSideMenu::EnableGenderEdit() {
	ECharedGender *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  *(undefined4 *)&(this->m_simGender).m_bAllowTextChange = 1;
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_simGender,0x10,true);
  return;
}

void ECharedSideMenu::DisableGenderEdit() {
	ECharedGender *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedpersonalitem.h */
  *(undefined4 *)&(this->m_simGender).m_bAllowTextChange = 0;
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)&this->m_simGender,0x10,false);
  return;
}

void ECharedSideMenu::KillKeyboard() {
  ETextEntryDialog *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  
  pEVar1 = this->m_pKeyboard;
  if (pEVar1 != (ETextEntryDialog *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).__vtable;
    (*(code *)pEVar2->Draw)((int)pEVar1->m_szText + *(short *)&pEVar2->Update + -0x3e,3);
    this->m_pKeyboard = (ETextEntryDialog *)0x0;
  }
  return;
}

bool ECharedSideMenu::IsKeyboardRunning() {
  return this->m_pKeyboard != (ETextEntryDialog *)0x0;
}

bool ECharedSideMenu::IsNameSelected() {
	bool bRetVal;
	EUIObjectNode *this;
	
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->m_pMenu[0]->field0_0x0).m_flags >> 2 & 1U) != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
    return this->m_pMenu[0]->m_pCurOpt == (EUIObjectNode *)&this->m_simName;
  }
  return false;
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

void* ECharedSideMenu::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,(long)(int)size);
  return __s;
}

void ECharedSideMenu::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}
