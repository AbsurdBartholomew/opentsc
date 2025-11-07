// STATUS: NOT STARTED

#include "pausebudgetmenu.h"

__vtbl_ptr_type EPauseBudgetMenu virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseBudgetMenu::~EPauseBudgetMenu,
		/* .__delta2 = */ -27696
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseBudgetMenu::Update,
		/* .__delta2 = */ -22096
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseBudgetMenu::Draw,
		/* .__delta2 = */ -25928
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

EPauseBudgetMenu* EPauseBudgetMenu::EPauseBudgetMenu() {
	EVec3 vPos;
	
  undefined *puVar1;
  EUITextIconDef *pEVar2;
  EFontAlignY *pEVar3;
  uint *puVar4;
  EUIIconDef *pEVar5;
  int *piVar6;
  EUIVirtualCtrl **ppEVar7;
  uint uVar8;
  ulong *puVar9;
  EUIStaticTextIcon *this_00;
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
  EUIIconDef local_170;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  EVec3 vPos;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  EUITextIconDef local_110;
  EUIIconDef local_f0;
  EUIIconDef__vtable *local_d0;
  int local_c0;
  EVec3 *local_bc;
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
  
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
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
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  this_00 = (EUIStaticTextIcon *)this->m_Prompts;
  __13EUIObjectNode(&this->field0_0x0);
  local_c0 = 0;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16EPauseBudgetMenu;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170.m_trigger = 0x40;
  local_170.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_170.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon,&local_170,0,0,0x40);
  local_bc = (EVec3 *)&local_120;
  do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_170.m_trigger = 0x40;
                    /* end of inlined section */
    local_c0 = local_c0 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_170.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_170.m_flags = 0;
    local_170.m_selColorIdx = 0;
    local_170.m_colorIdx = 1;
    local_170.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_150 = 0x20;
    local_14c = 0;
    local_148 = 0;
    local_144 = 0x41400000;
    local_140 = 0;
    local_13c = 1;
    local_138 = CONCAT22(local_138._2_2_,0xffff);
    vPos.field0_0x0.d[2] = 0.0;
    vPos.field0_0x0.d[1] = 0.0;
    vPos.field0_0x0.d[0] = 0.0;
    local_118 = 0;
    local_11c = 0;
    local_120 = 0;
    local_110.m_maxChars = 0x20;
    local_110.m_xAlign = E_FAX_LEFT;
    local_110.m_yAlign = E_FAY_TOP;
    local_110.m_pointsize = 12.0;
    local_110.m_selColorIdx = 0;
    local_110.m_colorIdx = 1;
    local_110.m_retChar = -1;
    local_f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_f0.m_flags = 0;
    local_f0.m_trigger = 0x40;
    local_f0.m_selColorIdx = 0;
    local_f0.m_colorIdx = 1;
    local_f0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (this_00,&local_110,&local_f0,-1,local_bc);
    local_f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (this_00->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_xAlign + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_14c,local_150) >> (7 - uVar8) * 8;
    pEVar2 = &(this_00->field0_0x0).m_textdef;
    uVar8 = (uint)pEVar2 & 7;
    puVar9 = (ulong *)((int)pEVar2 - uVar8);
    *puVar9 = CONCAT44(local_14c,local_150) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_pointsize + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_144,local_148) >> (7 - uVar8) * 8;
    pEVar3 = &(this_00->field0_0x0).m_textdef.m_yAlign;
    uVar8 = (uint)pEVar3 & 7;
    puVar9 = (ulong *)((int)pEVar3 - uVar8);
    *puVar9 = CONCAT44(local_144,local_148) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_13c,local_140) >> (7 - uVar8) * 8;
    puVar4 = &(this_00->field0_0x0).m_textdef.m_selColorIdx;
    uVar8 = (uint)puVar4 & 7;
    puVar9 = (ulong *)((int)puVar4 - uVar8);
    *puVar9 = CONCAT44(local_13c,local_140) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    *(undefined4 *)&(this_00->field0_0x0).m_textdef.m_retChar = local_138;
    local_d0 = (this_00->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_170.m_trigger,local_170.m_flags) >> (7 - uVar8) * 8;
    pEVar5 = &(this_00->field0_0x0).field0_0x0.m_def;
    uVar8 = (uint)pEVar5 & 7;
    puVar9 = (ulong *)((int)pEVar5 - uVar8);
    *puVar9 = CONCAT44(local_170.m_trigger,local_170.m_flags) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_170.m_colorIdx,local_170.m_selColorIdx) >> (7 - uVar8) * 8;
    piVar6 = &(this_00->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar8 = (uint)piVar6 & 7;
    puVar9 = (ulong *)((int)piVar6 - uVar8);
    *puVar9 = CONCAT44(local_170.m_colorIdx,local_170.m_selColorIdx) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
              CONCAT44(local_170.__vtable,local_170.m_pCtrl) >> (7 - uVar8) * 8;
    ppEVar7 = &(this_00->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar8 = (uint)ppEVar7 & 7;
    puVar9 = (ulong *)((int)ppEVar7 - uVar8);
    *puVar9 = CONCAT44(local_170.__vtable,local_170.m_pCtrl) << uVar8 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
    (this_00->field0_0x0).field0_0x0.m_def.__vtable = local_d0;
                    /* end of inlined section */
    this_00 = (EUIStaticTextIcon *)&this_00[1].field0_0x0.field0_0x0.field0_0x0.m_id;
    local_170.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  } while (local_c0 != -1);
  __10EPromptBar(&this->m_PromptBar);
  this->m_pFont = (ERFont *)0x0;
  Init__16EPauseBudgetMenu(this);
  return this;
}

void EPauseBudgetMenu::~EPauseBudgetMenu(int __in_chrg) {
	void *ptr;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIPrompt *pEVar3;
  
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16EPauseBudgetMenu;
  Reset__16EPauseBudgetMenu(this);
  ___10EPromptBar(&this->m_PromptBar,2);
  if ((this != (EPauseBudgetMenu *)0xfffffee0) &&
     (this->m_Prompts != (EUIPrompt *)&this->m_PromptBar)) {
    pEVar3 = this->m_Prompts;
    do {
      pEVar2 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2->Draw)
                ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->Update + 4,0);
      bVar1 = this->m_Prompts != pEVar3;
      pEVar3 = pEVar3 + -1;
    } while (bVar1);
  }
  ___7EUIIcon(&this->m_TriIcon,2);
  ___13EUIObjectNode(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausebudgetmenu.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EPauseBudgetMenu::Init() {
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EGraphics *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  uint uVar5;
  short sVar6;
  EUIObjectNode__vtable *pEVar7;
  EUIIconDef__vtable *pEVar8;
  uint uVar9;
  ulong *puVar10;
  ERShader *pEVar11;
  ERFont *this_00;
  short *psVar12;
  ulong uVar13;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  EUIIcon *this_01;
  undefined8 unaff_s2;
  EUIPrompt *this_02;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  float fVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined8 local_b0;
  float local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  __vtbl_ptr_type *local_8c;
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
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pBlankShdr = pEVar11;
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
  this->m_pMenuBevelShdr = pEVar11;
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x502567e1,(EFile *)0x0,0);
  this->m_pTextBoxBGBC = pEVar11;
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xbd0d5bdc,(EFile *)0x0,0);
  this->m_pTextBoxBGMR = pEVar11;
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3a954713,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTextBoxBGBR = pEVar11;
  fVar14 = _13EUIObjectNode_SAFE_LEFT;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  pEVar7 = (this->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_b0._4_4_ = 0.0;
                    /* end of inlined section */
  local_a8 = _13EUIObjectNode_SAFE_TOP + 50.0 / (float)_pGfx->m_yscreen;
  local_b0._0_4_ = _13EUIObjectNode_SAFE_LEFT + 10.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar16 = _13EUIObjectNode_SAFE_TOP;
  (*(code *)pEVar7->OnButtonRepeat)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar7->StateChanged,&local_b0);
  pEVar7 = (this->field0_0x0).__vtable;
  local_b0._0_4_ = 0.75 - fVar14;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_b0._4_4_ = 0.4;
                    /* end of inlined section */
  (*(code *)pEVar7->RemoveChild)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar7->AddChild,&local_b0);
  SetFlagsPropigate__13EUIObjectNodeUib(&this->field0_0x0,1,true);
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  this_00 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = this_00;
  SetSize__6ERFontffb(this_00,16.0,1.0,true);
  this->m_nDisplayMode = '\x01';
  this->m_fAnimationTime = 0.25;
  iVar15 = _iVideoMode;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar13 = (ulong)(uint)(fVar16 + 41.0 / (float)_pGfx->m_yscreen) << 0x20;
  puVar1 = (undefined *)((int)&(this->m_vBoxTL).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar13 >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vBoxTL & 7;
  puVar10 = (ulong *)((int)&this->m_vBoxTL - uVar9);
  *puVar10 = uVar13 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  if (iVar15 == 0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    uVar13 = CONCAT44(fVar16 + 0.6,0x3f400000);
    puVar1 = (undefined *)((int)&(this->m_vBoxBR).field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar13 >> (7 - uVar9) * 8;
    uVar9 = (uint)&this->m_vBoxBR & 7;
    puVar10 = (ulong *)((int)&this->m_vBoxBR - uVar9);
    *puVar10 = uVar13 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    fVar14 = (this->m_vBoxTL).field0_0x0.d[1];
  }
  else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    uVar13 = CONCAT44(fVar16 + 0.54,0x3f400000);
    puVar1 = (undefined *)((int)&(this->m_vBoxBR).field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar13 >> (7 - uVar9) * 8;
    uVar9 = (uint)&this->m_vBoxBR & 7;
    puVar10 = (ulong *)((int)&this->m_vBoxBR - uVar9);
    *puVar10 = uVar13 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    fVar14 = (this->m_vBoxTL).field0_0x0.d[1];
  }
  fVar16 = _13EUIObjectNode_SAFE_BOTTOM;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar17 = 0.178;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  this_01 = &this->m_TriIcon;
                    /* end of inlined section */
  uVar13 = (ulong)(uint)(fVar14 - ((this->m_vBoxBR).field0_0x0.d[1] - fVar14)) << 0x20;
  puVar1 = (undefined *)((int)&(this->m_vBoxStartTL).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar13 >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vBoxStartTL & 7;
  puVar10 = (ulong *)((int)&this->m_vBoxStartTL - uVar9);
  *puVar10 = uVar13 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  this_02 = this->m_Prompts;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar14 = (this->m_vBoxTL).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar13 = CONCAT44(fVar14 - ((this->m_vBoxBR).field0_0x0.d[1] - fVar14),0x3f400000);
  puVar1 = (undefined *)((int)&(this->m_vBoxStartBR).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar13 >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vBoxStartBR & 7;
  puVar10 = (ulong *)((int)&this->m_vBoxStartBR - uVar9);
  *puVar10 = uVar13 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBoxStartTL).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  uVar5 = (uint)&this->m_vBoxStartTL & 7;
  uVar13 = (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
           uVar13 & 0xffffffffffffffffU >> (uVar9 + 1) * 8) & -1L << (8 - uVar5) * 8 |
           *(ulong *)((int)&this->m_vBoxStartTL - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&(this->m_vBoxAnimateTL).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar13 >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vBoxAnimateTL & 7;
  puVar10 = (ulong *)((int)&this->m_vBoxAnimateTL - uVar9);
  *puVar10 = uVar13 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBoxStartBR).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  uVar5 = (uint)&this->m_vBoxStartBR & 7;
  uVar13 = (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
           uVar13 & 0xffffffffffffffffU >> (uVar9 + 1) * 8) & -1L << (8 - uVar5) * 8 |
           *(ulong *)((int)&this->m_vBoxStartBR - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&(this->m_vBoxAnimateBR).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar13 >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vBoxAnimateBR & 7;
  puVar10 = (ulong *)((int)&this->m_vBoxAnimateBR - uVar9);
  *puVar10 = uVar13 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar13 = CONCAT44(fVar16 - 46.0 / (float)_pGfx->m_yscreen,0x3e3645a2);
  puVar1 = (undefined *)((int)&(this->m_vBottomPosEnd).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar13 >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vBottomPosEnd & 7;
  puVar10 = (ulong *)((int)&this->m_vBottomPosEnd - uVar9);
  *puVar10 = uVar13 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar13 = CONCAT44(1.0 - (this->m_vBottomPosEnd).field0_0x0.d[1],
                    1.0 - (this->m_vBottomPosEnd).field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&(this->m_vBottomSize).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar13 >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vBottomSize & 7;
  puVar10 = (ulong *)((int)&this->m_vBottomSize - uVar9);
  *puVar10 = uVar13 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPosStart).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3f8666663e3645a2U >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vBottomPosStart & 7;
  puVar10 = (ulong *)((int)&this->m_vBottomPosStart - uVar9);
  *puVar10 = 0x3f8666663e3645a2 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPosStart).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  uVar5 = (uint)&this->m_vBottomPosStart & 7;
  uVar13 = (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
           0xffffffffffffffffU >> (uVar9 + 1) * 8 & 0x3f8666663e3645a2) & -1L << (8 - uVar5) * 8 |
           *(ulong *)((int)&this->m_vBottomPosStart - uVar5) >> uVar5 * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar13 >> (7 - uVar9) * 8;
  uVar9 = (uint)&this->m_vBottomPos & 7;
  puVar10 = (ulong *)((int)&this->m_vBottomPos - uVar9);
  *puVar10 = uVar13 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_a0 = 1;
  local_9c = 0xffffffff;
  local_98 = 0;
  local_94 = 1;
  local_90 = 0;
  pEVar8 = (this->m_TriIcon).m_def.__vtable;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_trigger + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar9) * 8;
  pEVar2 = &(this->m_TriIcon).m_def;
  uVar9 = (uint)pEVar2 & 7;
  puVar10 = (ulong *)((int)pEVar2 - uVar9);
  *puVar10 = -0xffffffff << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_colorIdx + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x100000000U >> (7 - uVar9) * 8;
  piVar3 = &(this->m_TriIcon).m_def.m_selColorIdx;
  uVar9 = (uint)piVar3 & 7;
  puVar10 = (ulong *)((int)piVar3 - uVar9);
  *puVar10 = 0x100000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.__vtable + 3);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3a890800000000U >> (7 - uVar9) * 8;
  ppEVar4 = &(this->m_TriIcon).m_def.m_pCtrl;
  uVar9 = (uint)ppEVar4 & 7;
  puVar10 = (ulong *)((int)ppEVar4 - uVar9);
  *puVar10 = 0x3a890800000000 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
  (this->m_TriIcon).m_def.__vtable = pEVar8;
  local_8c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar15 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_b0._0_4_ = 0.05;
                    /* end of inlined section */
  local_b0._4_4_ = 32.0 / (float)iVar15;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_b0._4_4_;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_01,0x2ccf500a);
  InitInActiveShader__7EUIIconi(this_01,0x2ccf500a);
  pEVar7 = this->m_Prompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar6 = *(short *)&pEVar7[2].StateChanged;
  psVar12 = GetUiString__7EGlobalPCc(&_globals,"back");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(this_02->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar6 + 4,
             psVar12,0x20);
  AddIcon__9EUIPromptP7EUIIcon(this_02,this_01);
  Init__10EPromptBar(&this->m_PromptBar);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  local_b0._0_4_ = (_13EUIObjectNode_SAFE_RIGHT + fVar17) * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_b0._4_4_ = fVar16 - 23.0 / (float)_pGfx->m_yscreen;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(&this->m_PromptBar,this_02,1,(EVec2 *)&local_b0);
  return;
}

void EPauseBudgetMenu::Reset() {
  ERShader *pEVar1;
  ERFont *this_00;
  
  while( true ) {
    if (this->m_pBlankShdr == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_pBlankShdr->field0_0x0);
    this->m_pBlankShdr = (ERShader *)0x0;
  }
  while (this->m_pMenuBevelShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pMenuBevelShdr->field0_0x0);
    this->m_pMenuBevelShdr = (ERShader *)0x0;
  }
  pEVar1 = this->m_pTextBoxBGBC;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pTextBoxBGBC = (ERShader *)0x0;
    pEVar1 = this->m_pTextBoxBGBC;
  }
  pEVar1 = this->m_pTextBoxBGMR;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pTextBoxBGMR = (ERShader *)0x0;
    pEVar1 = this->m_pTextBoxBGMR;
  }
  pEVar1 = this->m_pTextBoxBGBR;
  while (pEVar1 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar1->field0_0x0);
    this->m_pTextBoxBGBR = (ERShader *)0x0;
    pEVar1 = this->m_pTextBoxBGBR;
  }
  this_00 = this->m_pFont;
  while (this_00 != (ERFont *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
    this_00 = this->m_pFont;
  }
  Reset__10EPromptBar(&this->m_PromptBar);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_Prompts);
  return;
}

void EPauseBudgetMenu::Draw(ERC *prc) {
	EUIObjectNode *this;
	EUIObjectNode *this;
	EVec2 vScreen;
	EVec2 vShaderSize;
	EGraphics *this;
	float Top;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float x;
	float y;
	float y;
	float x;
	float y;
	float x;
	
  uint uVar1;
  EWindow__vtable *pEVar2;
  EWindow *pEVar3;
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
  float fVar4;
  float fVar5;
  float _y;
  undefined4 uVar6;
  EVec2 vScreen;
  EVec2 vShaderSize;
  undefined local_130 [8];
  undefined4 local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
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
  
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  uVar1 = (this->field0_0x0).m_flags;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((((int)uVar1 >> 1 & 1U) != 0) && (((int)uVar1 >> 2 & 1U) != 0)) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    fVar5 = (float)_pGfx->m_yscreen;
    fVar4 = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    if (this->m_nDisplayMode - 1 < 2) {
                    /* inlined from /eor/src2/engine/window/e_window.h */
      pEVar3 = (EWindow *)_memmanAlloc__FUiUi(0xa0,0x10);
                    /* end of inlined section */
      pEVar3 = __7EWindow(pEVar3);
                    /* inlined from /eor/src2/common/math/e_rect.h */
      vShaderSize.field0_0x0.d[1] = (this->m_vBoxTL).field0_0x0.d[1];
      vShaderSize.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
      this->m_pWin = pEVar3;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
      SetClip__7EWindowRCt5TRect1Zf(pEVar3,(TRect_float_ *)&vShaderSize);
      pEVar2 = this->m_pWin->__vtable;
      (*(code *)pEVar2->OutputCoordinatesChanged)
                ((int)&(this->m_pWin->m_mWindow).field0_0x0 +
                 (int)*(short *)&pEVar2->InputCoordinatesChanged,prc);
    }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vShaderSize.field0_0x0.d[0] = 32.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vShaderSize.field0_0x0.d[1] = 32.0;
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130._0_4_ = (this->m_vBoxAnimateTL).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130._4_4_ = (this->m_vBoxAnimateTL).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_120 = (this->m_vBoxAnimateBR).field0_0x0.d[0];
    local_11c = (this->m_vBoxAnimateBR).field0_0x0.d[1];
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
    local_110 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_10c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_fc = 0;
    local_100 = 0x3f800000;
                    /* end of inlined section */
    uVar6 = 0;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,(EVec4 *)local_130,
               &local_120,&local_110,&local_100,0x35f4b0);
    Select__8ERShaderP3ERCi(this->m_pTextBoxBGBC,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_130._4_4_ = (this->m_vBoxAnimateBR).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130._0_4_ = (this->m_vBoxAnimateTL).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_120 = (this->m_vBoxAnimateBR).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_11c = local_130._4_4_ + vShaderSize.field0_0x0.d[1] / fVar5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_ec = 0x3f800000;
    local_e0 = 0x3f800000;
    local_c4 = 0x3f800000;
    local_c8 = 0x3f800000;
    local_cc = 0x3f800000;
    local_d0 = 0x3f800000;
                    /* end of inlined section */
    local_f0 = uVar6;
    local_dc = uVar6;
    (*(code *)prc->__vtable[1].DisplayList)
              (uVar6,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
               (EVec4 *)local_130,&local_120,&local_f0,&local_e0,&local_d0);
    Select__8ERShaderP3ERCi(this->m_pTextBoxBGMR,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130._0_4_ = (this->m_vBoxAnimateBR).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130._4_4_ = (this->m_vBoxAnimateTL).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_11c = (this->m_vBoxAnimateBR).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_120 = local_130._0_4_ + vShaderSize.field0_0x0.d[0] / fVar4;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_10c = 0x3f800000;
    local_100 = 0x3f800000;
    local_b4 = 0x3f800000;
    local_b8 = 0x3f800000;
    local_bc = 0x3f800000;
    local_c0 = 0x3f800000;
                    /* end of inlined section */
    local_110 = uVar6;
    local_fc = uVar6;
    (*(code *)prc->__vtable[1].DisplayList)
              (uVar6,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
               (EVec4 *)local_130,&local_120,&local_110,&local_100,&local_c0);
    Select__8ERShaderP3ERCi(this->m_pTextBoxBGBR,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130._4_4_ = (this->m_vBoxAnimateBR).field0_0x0.d[1];
    local_130._0_4_ = (this->m_vBoxAnimateBR).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_120 = local_130._0_4_ + vShaderSize.field0_0x0.d[0] / fVar4;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_11c = local_130._4_4_ + vShaderSize.field0_0x0.d[1] / fVar5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_10c = 0x3f800000;
    local_100 = 0x3f800000;
    local_e4 = 0x3f800000;
    local_e8 = 0x3f800000;
    local_ec = 0x3f800000;
    local_f0 = 0x3f800000;
                    /* end of inlined section */
    local_110 = uVar6;
    local_fc = uVar6;
    (*(code *)prc->__vtable[1].DisplayList)
              (uVar6,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
               (EVec4 *)local_130,&local_120,&local_110,&local_100,&local_f0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_124 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_128 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_130._4_4_ = 1.0;
                    /* end of inlined section */
    _y = (this->m_vBoxAnimateTL).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_130._0_4_ = 1.0;
                    /* end of inlined section */
    DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
              (prc,_13EUIObjectNode_SAFE_LEFT,_y,
               ((this->m_vBoxAnimateBR).field0_0x0.d[1] - _y) + 16.0 / fVar5,
               ((this->m_vBoxAnimateBR).field0_0x0.d[0] - _13EUIObjectNode_SAFE_LEFT) + 16.0 / fVar4
               ,1.0,(EVec4 *)local_130);
    if (this->m_nDisplayMode - 1 < 2) {
      SelectWin__7EGlobalP3ERC(&_globals,prc);
      pEVar3 = this->m_pWin;
      if (pEVar3 != (EWindow *)0x0) {
        (*(code *)pEVar3->__vtable->WindowMatrixChanged)
                  ((int)&(pEVar3->m_mWindow).field0_0x0 + (int)*(short *)&pEVar3->__vtable->Select,3
                  );
      }
    }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
    local_130._0_4_ = (this->m_vBottomPos).field0_0x0.d[0] + (this->m_vBottomSize).field0_0x0.d[0];
    local_130._4_4_ = (this->m_vBottomPos).field0_0x0.d[1] + (this->m_vBottomSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_10c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_120 = 0.0;
    local_110 = 0x3f800000;
    local_11c = 1.0;
                    /* end of inlined section */
    uVar6 = 0;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&this->m_vBottomPos,
               local_130,&local_120,&local_110,0x35f4b0);
    Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_130._0_4_ = (this->m_vBottomPos).field0_0x0.d[0];
                    /* end of inlined section */
    local_120 = (this->m_vBottomSize).field0_0x0.d[0] * fVar4 * 0.00390625;
    local_130._4_4_ = (this->m_vBottomPos).field0_0x0.d[1] - 4.0 / fVar5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_11c = 0.5;
    local_110 = 0x3f800000;
    local_104 = 0x3f800000;
    local_108 = 0x3f800000;
    local_10c = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar6,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_130,
               &local_120,&local_110);
    if (this->m_nDisplayMode == '\0') {
      DrawBudget__16EPauseBudgetMenuP3ERC(this,prc);
      Draw__10EPromptBarP3ERC(&this->m_PromptBar,prc);
    }
  }
  return;
}

void EPauseBudgetMenu::DrawBudget(ERC *prc) {
	float fTextXStart;
	float fColumn1X;
	float fColumn2X;
	EVec2 vPos;
	int money;
	int prevMoney;
	int nCashFlow;
	int nHistoryCashFlow;
	StringBufW255 moneyString;
	ExpenseReport outReport;
	ExpenseReport prevReport;
	int i;
	EGraphics *this;
	float x;
	ERFont *this;
	float y;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	EGraphics *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	
  cSimulator__vtable *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  cSimulator *pcVar9;
  short *psVar10;
  EVec4 *pEVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  ERFont *pEVar15;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  int iVar16;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar17;
  float fVar18;
  float fVar19;
  EVec2 vPos;
  ExpenseReport outReport;
  undefined4 local_330;
  float local_32c;
  StackString2_256_ moneyString;
  ExpenseReport prevReport;
  float local_f0;
  float local_ec;
  float local_e0;
  float local_dc;
  int nCashFlow;
  int nHistoryCashFlow;
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
  
                    /* inlined from /eor/src2/engine/e_graphics.h */
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
                    /* end of inlined section */
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  iVar16 = 0;
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  iVar13 = 0;
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar12 = 0;
  nCashFlow = 0;
  nHistoryCashFlow = 0;
  fVar18 = 0.75;
  vPos.field0_0x0.d[1] = _13EUIObjectNode_SAFE_TOP + 41.0 / (float)_pGfx->m_yscreen;
  fVar19 = _13EUIObjectNode_SAFE_LEFT + 10.0 / (float)_pGfx->m_xscreen;
  vPos.field0_0x0.d[0] = fVar19;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__6ERFontP3ERC(this->m_pFont,prc);
  SetSize__6ERFontffb(this->m_pFont,15.0,1.0,true);
  uVar5 = _WHITE.field0_0x0.d[3];
  uVar4 = _WHITE.field0_0x0.d[2];
  uVar3 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar15 = this->m_pFont;
                    /* end of inlined section */
                    /* end of inlined section */
  (pEVar15->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar15->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
  (pEVar15->m_vColor).field0_0x0.d[2] = uVar4;
  (pEVar15->m_vColor).field0_0x0.d[3] = uVar5;
  psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"budget_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  outReport.fSpent[0] = (int)((fVar19 + fVar18) * 0.5);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  outReport.fSpent[5] = (int)vPos.field0_0x0.d[1];
  outReport.fSpent[1] = (int)vPos.field0_0x0.d[1];
  outReport.fSpent[4] = outReport.fSpent[0];
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,psVar10,true,(EVec2 *)(outReport.fSpent + 4),E_FAX_CENTER,E_FAY_TOP,
             (EVec2 *)0x0);
                    /* end of inlined section */
  psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"budget_3_days_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_32c = vPos.field0_0x0.d[1];
  outReport.fSpent[1] = (int)vPos.field0_0x0.d[1];
  outReport.fSpent[0] = 0x3f19999a;
  local_330 = 0x3f19999a;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_330,E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"budget_today_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  outReport.fSpent[5] = (int)vPos.field0_0x0.d[1];
  outReport.fSpent[1] = (int)vPos.field0_0x0.d[1];
  outReport.fSpent[0] = (int)fVar18;
  outReport.fSpent[4] = (int)fVar18;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,psVar10,true,(EVec2 *)(outReport.fSpent + 4),E_FAX_RIGHT,E_FAY_TOP,
             &vPos);
                    /* end of inlined section */
  vPos.field0_0x0.d[0] = fVar19;
  fVar17 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
  vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar17;
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&moneyString.field0_0x0,moneyString.fChars,0x100);
  reset__13ExpenseReport(&outReport);
  reset__13ExpenseReport(&prevReport);
  pcVar9 = _5Globs_pSimulator;
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable->RestoreTrueDt)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable->SetProbe,&outReport);
  pcVar1 = pcVar9->__vtable;
  (*(code *)pcVar1[1].Simulate)((int)&pcVar9->__vtable + (int)*(short *)&pcVar1[1].Init,&prevReport)
  ;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  do {
    uVar5 = _WHITE.field0_0x0.d[3];
    uVar4 = _WHITE.field0_0x0.d[2];
    uVar3 = _WHITE.field0_0x0._0_8_;
    pEVar15 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    (pEVar15->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar15->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
    (pEVar15->m_vColor).field0_0x0.d[2] = uVar4;
    (pEVar15->m_vColor).field0_0x0.d[3] = uVar5;
    switch(iVar16) {
    case 0:
      psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"job_income_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
                );
                    /* end of inlined section */
      iVar12 = abs(prevReport.fSpent[1]);
      iVar13 = outReport.fSpent[1];
      break;
    case 1:
      psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"misc_income_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
                );
                    /* end of inlined section */
      iVar12 = abs(prevReport.fSpent[2]);
      iVar13 = outReport.fSpent[2];
      break;
    case 2:
      psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"bills_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
                );
                    /* end of inlined section */
      iVar12 = abs(prevReport.fSpent[4]);
      iVar13 = outReport.fSpent[4];
      break;
    case 3:
      psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"food_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
                );
                    /* end of inlined section */
      iVar12 = abs(prevReport.fSpent[3]);
      iVar13 = outReport.fSpent[3];
      break;
    case 4:
      psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"maintenance_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
                );
                    /* end of inlined section */
      iVar12 = abs(prevReport.fSpent[5]);
      iVar13 = outReport.fSpent[5];
      break;
    case 5:
      psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"purchases_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
                );
                    /* end of inlined section */
      iVar12 = abs(prevReport.fSpent[6]);
      iVar13 = outReport.fSpent[6];
      break;
    case 6:
      psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"architecture_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
                );
                    /* end of inlined section */
      iVar12 = abs(prevReport.fSpent[7]);
      iVar13 = outReport.fSpent[7];
      break;
    case 7:
      psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"miscellaneous_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
                );
                    /* end of inlined section */
      iVar12 = abs(prevReport.fSpent[0]);
      iVar13 = outReport.fSpent[0];
      break;
    default:
      goto switchD_0019a2bc_caseD_8;
    }
    iVar13 = abs(iVar13);
switchD_0019a2bc_caseD_8:
    if (1 < iVar16) {
      if (iVar12 < 1) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        pEVar15 = this->m_pFont;
        pEVar11 = &_WHITE;
      }
      else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        pEVar15 = this->m_pFont;
        pEVar11 = &_RED;
        iVar12 = -iVar12;
                    /* end of inlined section */
      }
      uVar2 = *(undefined8 *)&pEVar11->field0_0x0;
      fVar17 = (pEVar11->field0_0x0).d[2];
      fVar14 = (pEVar11->field0_0x0).d[3];
      (pEVar15->m_vColor).field0_0x0.d[0] = (float)uVar2;
      (pEVar15->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
      (pEVar15->m_vColor).field0_0x0.d[2] = fVar17;
      (pEVar15->m_vColor).field0_0x0.d[3] = fVar14;
                    /* end of inlined section */
    }
    GetMoneyString__FiRt12StackString21Ui256(iVar12,&moneyString);
    nHistoryCashFlow = nHistoryCashFlow + iVar12;
    psVar10 = c_str__C13StringBuffer2(&moneyString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_dc = vPos.field0_0x0.d[1];
    local_f0 = 0.6;
    local_ec = vPos.field0_0x0.d[1];
    local_e0 = 0.6;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_e0,E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0)
    ;
                    /* end of inlined section */
    if (1 < iVar16) {
      if (iVar13 < 1) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        pEVar15 = this->m_pFont;
        pEVar11 = &_WHITE;
      }
      else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        pEVar15 = this->m_pFont;
        pEVar11 = &_RED;
        iVar13 = -iVar13;
                    /* end of inlined section */
      }
      uVar2 = *(undefined8 *)&pEVar11->field0_0x0;
      fVar17 = (pEVar11->field0_0x0).d[2];
      fVar14 = (pEVar11->field0_0x0).d[3];
      (pEVar15->m_vColor).field0_0x0.d[0] = (float)uVar2;
      (pEVar15->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
      (pEVar15->m_vColor).field0_0x0.d[2] = fVar17;
      (pEVar15->m_vColor).field0_0x0.d[3] = fVar14;
                    /* end of inlined section */
    }
    GetMoneyString__FiRt12StackString21Ui256(iVar13,&moneyString);
    nCashFlow = nCashFlow + iVar13;
    psVar10 = c_str__C13StringBuffer2(&moneyString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_dc = vPos.field0_0x0.d[1];
    local_ec = vPos.field0_0x0.d[1];
    local_f0 = fVar18;
    local_e0 = fVar18;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_e0,E_FAX_RIGHT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
    vPos.field0_0x0.d[0] = fVar19;
    fVar17 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
    uVar5 = _WHITE.field0_0x0.d[3];
    uVar4 = _WHITE.field0_0x0.d[2];
    uVar3 = _WHITE.field0_0x0._0_8_;
    vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar17;
    if ((iVar16 == 1) || (iVar16 == 7)) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
      vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + 6.0 / (float)_pGfx->m_yscreen;
    }
    iVar16 = iVar16 + 1;
    if (7 < iVar16) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar15 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      (pEVar15->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
      (pEVar15->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
      (pEVar15->m_vColor).field0_0x0.d[2] = uVar4;
      (pEVar15->m_vColor).field0_0x0.d[3] = uVar5;
      psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"cash_flow_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
                );
                    /* end of inlined section */
      GetMoneyString__FiRt12StackString21Ui256(nHistoryCashFlow,&moneyString);
      uVar8 = _RED.field0_0x0.d[3];
      uVar7 = _RED.field0_0x0.d[2];
      uVar6 = _RED.field0_0x0._0_8_;
      uVar5 = _WHITE.field0_0x0.d[3];
      uVar4 = _WHITE.field0_0x0.d[2];
      uVar3 = _WHITE.field0_0x0._0_8_;
      if (nHistoryCashFlow < 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        pEVar15 = this->m_pFont;
                    /* end of inlined section */
        (pEVar15->m_vColor).field0_0x0.d[0] = (float)_RED.field0_0x0._0_8_;
        (pEVar15->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
        (pEVar15->m_vColor).field0_0x0.d[2] = uVar7;
        (pEVar15->m_vColor).field0_0x0.d[3] = uVar8;
      }
      else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        pEVar15 = this->m_pFont;
        (pEVar15->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
        (pEVar15->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
        (pEVar15->m_vColor).field0_0x0.d[2] = uVar4;
        (pEVar15->m_vColor).field0_0x0.d[3] = uVar5;
      }
                    /* end of inlined section */
      psVar10 = c_str__C13StringBuffer2(&moneyString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_dc = vPos.field0_0x0.d[1];
      local_f0 = 0.6;
      local_ec = vPos.field0_0x0.d[1];
      local_e0 = 0.6;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_e0,E_FAX_RIGHT,E_FAY_TOP,
                 (EVec2 *)0x0);
                    /* end of inlined section */
      GetMoneyString__FiRt12StackString21Ui256(nCashFlow,&moneyString);
      if (nCashFlow < 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        pEVar15 = this->m_pFont;
                    /* end of inlined section */
        pEVar11 = &_RED;
      }
      else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        pEVar15 = this->m_pFont;
        pEVar11 = &_WHITE;
      }
      uVar2 = *(undefined8 *)&pEVar11->field0_0x0;
      fVar17 = (pEVar11->field0_0x0).d[2];
      fVar14 = (pEVar11->field0_0x0).d[3];
      (pEVar15->m_vColor).field0_0x0.d[0] = (float)uVar2;
      (pEVar15->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
      (pEVar15->m_vColor).field0_0x0.d[2] = fVar17;
      (pEVar15->m_vColor).field0_0x0.d[3] = fVar14;
                    /* end of inlined section */
      psVar10 = c_str__C13StringBuffer2(&moneyString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_dc = vPos.field0_0x0.d[1];
      local_ec = vPos.field0_0x0.d[1];
      local_f0 = fVar18;
      local_e0 = fVar18;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_e0,E_FAX_RIGHT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
      vPos.field0_0x0.d[0] = fVar19;
      fVar18 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
      uVar5 = _WHITE.field0_0x0.d[3];
      uVar4 = _WHITE.field0_0x0.d[2];
      uVar3 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar18;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar15 = this->m_pFont;
                    /* end of inlined section */
                    /* end of inlined section */
      (pEVar15->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
      (pEVar15->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
      (pEVar15->m_vColor).field0_0x0.d[2] = uVar4;
      (pEVar15->m_vColor).field0_0x0.d[3] = uVar5;
      psVar10 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"household_worth_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0
                );
                    /* end of inlined section */
      iVar12 = (*(code *)_5Globs_pSimulator->__vtable[1].GetTicks)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable[1].SetCurrentHour);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar13 = (*(code *)_5Globs_pSimulator->__vtable[1].GetDaysRunning)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable[1].GetExpensesHistory);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar16 = (*(code *)_5Globs_pSimulator->__vtable[1].GetLotValue)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable[1].GetTutorialOn);
      GetMoneyString__FiRt12StackString21Ui256(iVar12 + iVar13 + iVar16,&moneyString);
      psVar10 = c_str__C13StringBuffer2(&moneyString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_e0 = 0.6;
      local_f0 = 0.6;
      local_dc = vPos.field0_0x0.d[1];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar10,true,(EVec2 *)&local_e0,E_FAX_RIGHT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
      vPos.field0_0x0.d[0] = fVar19;
      GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
      return;
    }
  } while( true );
}

void EPauseBudgetMenu::Update() {
	EUIObjectMover HermiteBlend;
	EUIObjectNode *this;
	EUIObjectMover *this;
	EVec2 &startpos;
	float dt;
	float u;
	EVec2 &vA;
	EVec2 &v;
	EVec2 *this;
	EVec2 &startpos;
	float dt;
	float u;
	EVec2 &vA;
	EVec2 &v;
	EVec2 *this;
	EVec2 &startpos;
	float dt;
	float u;
	EVec2 &vA;
	EVec2 &v;
	EVec2 *this;
	EUIObjectMover *this;
	EVec2 &startpos;
	float dt;
	float u;
	EVec2 &vA;
	EVec2 &v;
	EVec2 *this;
	EVec2 &startpos;
	float dt;
	float u;
	EVec2 &vA;
	EVec2 &v;
	EVec2 *this;
	EVec2 &startpos;
	float dt;
	float u;
	EVec2 &vA;
	EVec2 &v;
	EVec2 *this;
	
  undefined *puVar1;
  uchar uVar2;
  uint uVar3;
  EUIObjectNode *pEVar4;
  EUIObjectNode__vtable *pEVar5;
  EUIVirtualCtrl__vtable *pEVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  EUIObjectMover HermiteBlend;
  float local_50;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 2 & 1U) == 0) {
    return;
  }
  if ((this->m_nDisplayMode - 1 < 2) &&
     (fVar12 = this->m_fAnimationTime - _dt, this->m_fAnimationTime = fVar12, fVar12 <= 0.0)) {
    this->m_fAnimationTime = 0.0;
    if (this->m_nDisplayMode == 1) {
      this->m_nDisplayMode = '\0';
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
      _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
      _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
      _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
      _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
                    /* end of inlined section */
    }
    else {
      this->m_nDisplayMode = '\x01';
      this->m_fAnimationTime = 0.25;
      pEVar4 = (this->field0_0x0).m_pParent;
      pEVar5 = pEVar4->__vtable;
      (*(code *)pEVar5[1].EUIObjectNode)
                ((int)&(pEVar4->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)(pEVar5 + 1),0,
                 0x15);
    }
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  fVar12 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  HermiteBlend.m_stopt = 0.0;
                    /* end of inlined section */
  HermiteBlend.m_curtime = 0.0;
  if (this->m_nDisplayMode == '\x01') {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
    fVar11 = 0.25 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    if (0.0 <= fVar11) {
      fVar12 = (float)((int)fVar11 * (uint)(fVar11 < 0.25) | (uint)(fVar11 >= 0.25) * 0x3e800000);
    }
    fVar13 = (this->m_vBoxStartTL).field0_0x0.d[0];
    fVar11 = 1.0 - (0.25 - fVar12) / 0.25;
    fVar11 = -fVar11 * fVar11 * fVar11 + fVar11 * fVar11 + fVar11;
    uVar9 = CONCAT44((this->m_vBoxStartTL).field0_0x0.d[1] +
                     ((this->m_vBoxTL).field0_0x0.d[1] - (this->m_vBoxStartTL).field0_0x0.d[1]) *
                     fVar11,fVar13 + ((this->m_vBoxTL).field0_0x0.d[0] - fVar13) * fVar11);
    puVar1 = (undefined *)((int)&(this->m_vBoxAnimateTL).field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | uVar9 >> (7 - uVar7) * 8;
    uVar7 = (uint)&this->m_vBoxAnimateTL & 7;
    puVar8 = (ulong *)((int)&this->m_vBoxAnimateTL - uVar7);
    *puVar8 = uVar9 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
                    /* end of inlined section */
    fVar11 = (this->m_vBoxTL).field0_0x0.d[1];
    if (fVar11 < (this->m_vBoxAnimateTL).field0_0x0.d[1]) {
      (this->m_vBoxAnimateTL).field0_0x0.d[1] = fVar11;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    fVar13 = (this->m_vBoxStartBR).field0_0x0.d[0];
    fVar11 = 1.0 - (0.25 - fVar12) / 0.25;
    fVar11 = -fVar11 * fVar11 * fVar11 + fVar11 * fVar11 + fVar11;
    uVar9 = CONCAT44((this->m_vBoxStartBR).field0_0x0.d[1] +
                     ((this->m_vBoxBR).field0_0x0.d[1] - (this->m_vBoxStartBR).field0_0x0.d[1]) *
                     fVar11,fVar13 + ((this->m_vBoxBR).field0_0x0.d[0] - fVar13) * fVar11);
    puVar1 = (undefined *)((int)&(this->m_vBoxAnimateBR).field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | uVar9 >> (7 - uVar7) * 8;
    uVar7 = (uint)&this->m_vBoxAnimateBR & 7;
    puVar8 = (ulong *)((int)&this->m_vBoxAnimateBR - uVar7);
    *puVar8 = uVar9 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
                    /* end of inlined section */
    fVar11 = (this->m_vBoxBR).field0_0x0.d[1];
    if (fVar11 < (this->m_vBoxAnimateBR).field0_0x0.d[1]) {
      (this->m_vBoxAnimateBR).field0_0x0.d[1] = fVar11;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    local_50 = (this->m_vBottomPosStart).field0_0x0.d[0];
    fVar11 = 1.0 - (0.25 - fVar12) / 0.25;
    fVar11 = -fVar11 * fVar11 * fVar11 + fVar11 * fVar11 + fVar11;
    local_50 = local_50 + ((this->m_vBottomPosEnd).field0_0x0.d[0] - local_50) * fVar11;
                    /* end of inlined section */
    fVar11 = (this->m_vBottomPosStart).field0_0x0.d[1] +
             ((this->m_vBottomPosEnd).field0_0x0.d[1] - (this->m_vBottomPosStart).field0_0x0.d[1]) *
             fVar11;
    HermiteBlend.m_curtime = fVar12;
LAB_0019aea8:
    HermiteBlend.m_stopt = 0.25;
    puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | CONCAT44(fVar11,local_50) >> (7 - uVar7) * 8;
    uVar7 = (uint)&this->m_vBottomPos & 7;
    puVar8 = (ulong *)((int)&this->m_vBottomPos - uVar7);
    *puVar8 = CONCAT44(fVar11,local_50) << uVar7 * 8 |
              *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
                    /* end of inlined section */
    fVar12 = (this->m_vBottomPosEnd).field0_0x0.d[1];
    if (fVar12 <= (this->m_vBottomPos).field0_0x0.d[1]) {
      uVar2 = this->m_nDisplayMode;
      goto LAB_0019af10;
    }
    (this->m_vBottomPos).field0_0x0.d[1] = fVar12;
  }
  else {
    if (this->m_nDisplayMode == '\x02') {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar11 = 0.25 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      if (0.0 <= fVar11) {
        fVar12 = (float)((int)fVar11 * (uint)(fVar11 < 0.25) | (uint)(fVar11 >= 0.25) * 0x3e800000);
      }
      fVar13 = (this->m_vBoxTL).field0_0x0.d[0];
      fVar11 = 1.0 - (0.25 - fVar12) / 0.25;
      fVar11 = -fVar11 * fVar11 * fVar11 + (fVar11 + fVar11) * fVar11;
      uVar9 = CONCAT44((this->m_vBoxTL).field0_0x0.d[1] +
                       ((this->m_vBoxStartTL).field0_0x0.d[1] - (this->m_vBoxTL).field0_0x0.d[1]) *
                       fVar11,fVar13 + ((this->m_vBoxStartTL).field0_0x0.d[0] - fVar13) * fVar11);
      puVar1 = (undefined *)((int)&(this->m_vBoxAnimateTL).field0_0x0 + 7);
      uVar7 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar7);
      *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | uVar9 >> (7 - uVar7) * 8;
      uVar7 = (uint)&this->m_vBoxAnimateTL & 7;
      puVar8 = (ulong *)((int)&this->m_vBoxAnimateTL - uVar7);
      *puVar8 = uVar9 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
                    /* end of inlined section */
      fVar11 = (this->m_vBoxTL).field0_0x0.d[1];
      if (fVar11 < (this->m_vBoxAnimateTL).field0_0x0.d[1]) {
        (this->m_vBoxAnimateTL).field0_0x0.d[1] = fVar11;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      fVar13 = (this->m_vBoxBR).field0_0x0.d[0];
      fVar11 = 1.0 - (0.25 - fVar12) / 0.25;
      fVar11 = -fVar11 * fVar11 * fVar11 + (fVar11 + fVar11) * fVar11;
      uVar9 = CONCAT44((this->m_vBoxBR).field0_0x0.d[1] +
                       ((this->m_vBoxStartBR).field0_0x0.d[1] - (this->m_vBoxBR).field0_0x0.d[1]) *
                       fVar11,fVar13 + ((this->m_vBoxStartBR).field0_0x0.d[0] - fVar13) * fVar11);
      puVar1 = (undefined *)((int)&(this->m_vBoxAnimateBR).field0_0x0 + 7);
      uVar7 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar7);
      *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | uVar9 >> (7 - uVar7) * 8;
      uVar7 = (uint)&this->m_vBoxAnimateBR & 7;
      puVar8 = (ulong *)((int)&this->m_vBoxAnimateBR - uVar7);
      *puVar8 = uVar9 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
                    /* end of inlined section */
      fVar11 = (this->m_vBoxBR).field0_0x0.d[1];
      if (fVar11 < (this->m_vBoxAnimateBR).field0_0x0.d[1]) {
        (this->m_vBoxAnimateBR).field0_0x0.d[1] = fVar11;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      local_50 = (this->m_vBottomPosEnd).field0_0x0.d[0];
      fVar11 = 1.0 - (0.25 - fVar12) / 0.25;
      fVar11 = -fVar11 * fVar11 * fVar11 + (fVar11 + fVar11) * fVar11;
      local_50 = local_50 + ((this->m_vBottomPosStart).field0_0x0.d[0] - local_50) * fVar11;
      fVar11 = (this->m_vBottomPosEnd).field0_0x0.d[1] +
               ((this->m_vBottomPosStart).field0_0x0.d[1] - (this->m_vBottomPosEnd).field0_0x0.d[1])
               * fVar11;
      HermiteBlend.m_curtime = fVar12;
      goto LAB_0019aea8;
    }
    puVar1 = (undefined *)((int)&(this->m_vBoxTL).field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_vBoxTL & 7;
    uVar9 = (*(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 |
            (long)(int)&HermiteBlend & 0xffffffffffffffffU >> (uVar7 + 1) * 8) &
            -1L << (8 - uVar3) * 8 | *(ulong *)((int)&this->m_vBoxTL - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&(this->m_vBoxAnimateTL).field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | uVar9 >> (7 - uVar7) * 8;
    uVar7 = (uint)&this->m_vBoxAnimateTL & 7;
    puVar8 = (ulong *)((int)&this->m_vBoxAnimateTL - uVar7);
    *puVar8 = uVar9 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
    puVar1 = (undefined *)((int)&(this->m_vBoxBR).field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_vBoxBR & 7;
    uVar9 = (*(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 |
            uVar9 & 0xffffffffffffffffU >> (uVar7 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&this->m_vBoxBR - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&(this->m_vBoxAnimateBR).field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | uVar9 >> (7 - uVar7) * 8;
    uVar7 = (uint)&this->m_vBoxAnimateBR & 7;
    puVar8 = (ulong *)((int)&this->m_vBoxAnimateBR - uVar7);
    *puVar8 = uVar9 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
    puVar1 = (undefined *)((int)&(this->m_vBottomPosEnd).field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_vBottomPosEnd & 7;
    uVar9 = (*(long *)(puVar1 + -uVar7) << (7 - uVar7) * 8 |
            uVar9 & 0xffffffffffffffffU >> (uVar7 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&this->m_vBottomPosEnd - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
    uVar7 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | uVar9 >> (7 - uVar7) * 8;
    uVar7 = (uint)&this->m_vBottomPos & 7;
    puVar8 = (ulong *)((int)&this->m_vBottomPos - uVar7);
    *puVar8 = uVar9 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  }
  uVar2 = this->m_nDisplayMode;
LAB_0019af10:
  HermiteBlend.m_startt = 0.0;
  if (uVar2 == '\0') {
    pEVar6 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar10 = (*(code *)pEVar6[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar6[1].ClearBut + -4,
                        _globals.m_whichPlayerPaused,0x10);
    if (lVar10 != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      if (_13EUIObjectNode_m_uiSfxBack != (undefined1 *)0x0) {
        (*(code *)_13EUIObjectNode_m_uiSfxBack)();
      }
                    /* end of inlined section */
      this->m_nDisplayMode = '\x02';
      this->m_fAnimationTime = 0.25;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
      _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
      _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
      _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
      _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
    }
                    /* end of inlined section */
    Update__10EPromptBar(&this->m_PromptBar);
                    /* end of inlined section */
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

void* EPauseBudgetMenu::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,4);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EPauseBudgetMenu::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

void ExpenseReport::reset() {
	int i;
	
  int iVar1;
  int *piVar2;
  
  piVar2 = this->fSpent + 7;
  iVar1 = 7;
  do {
    *piVar2 = 0;
    iVar1 = iVar1 + -1;
    piVar2 = piVar2 + -1;
  } while (-1 < iVar1);
  return;
}
