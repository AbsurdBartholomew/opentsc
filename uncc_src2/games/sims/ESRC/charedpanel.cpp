// STATUS: NOT STARTED

#include "charedpanel.h"

__vtbl_ptr_type ECharedPanel virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedPanel::~ECharedPanel,
		/* .__delta2 = */ -25736
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedPanel::Update,
		/* .__delta2 = */ 17080
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedPanel::Draw,
		/* .__delta2 = */ 20336
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
		/* .__pfn = */ &ECharedPanel::Message,
		/* .__delta2 = */ 28064
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

ECharedPanel* ECharedPanel::ECharedPanel() {
	EVec3 vPos;
	EVec3 vPos;
	
  undefined *puVar1;
  EUITextIconDef *pEVar2;
  EFontAlignY *pEVar3;
  uint *puVar4;
  EUIIconDef *pEVar5;
  int *piVar6;
  EUIVirtualCtrl **ppEVar7;
  uint *puVar8;
  uint uVar9;
  ulong *puVar10;
  EUITextIconDef *pEVar11;
  EUIIconDef *pEVar12;
  undefined8 uVar13;
  EUIIcon *this_00;
  EUIStaticTextIcon *pEVar14;
  undefined8 unaff_s0;
  int iVar15;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EUIIconDef local_290;
  uint local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  uint local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  EUITextIconDef local_230;
  EUIIconDef local_210;
  EUIIconDef__vtable *local_1f0;
  EUIIconDef local_1e0;
  uint local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  EVec3 vPos;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  EUITextIconDef local_180;
  EUIIconDef local_160;
  EUIIconDef__vtable *local_140;
  EVec3 *local_130;
  uint *local_12c;
  EAnimController *local_128;
  EPortalWindow *local_124;
  ECharedSideMenu *local_120;
  EUITextIconDef *local_11c;
  EPromptBar *local_118;
  EUIStaticTextIcon *local_114;
  EUIIconDef *local_110;
  EVec3 *local_10c;
  EUIIcon *local_108;
  EUITextIconDef *local_104;
  EUIIcon *local_100;
  EAnimController *local_fc;
  ECharedSkin *local_f8;
  ECharedTitleMenu *local_f4;
  EUIIconDef *local_f0;
  EPromptBar *local_ec;
  CustomCharacter *local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  uint local_d0;
  undefined4 uStack_cc;
  int local_c0;
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
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar15 = 7;
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __13EUIObjectNode(&this->field0_0x0);
  local_130 = (EVec3 *)&local_240;
  local_11c = &local_230;
  local_10c = (EVec3 *)&local_190;
  local_110 = &local_210;
  local_12c = &local_1c0;
  local_104 = &local_180;
  local_f0 = &local_160;
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_12ECharedPanel;
                    /* end of inlined section */
  this_00 = this->m_dpadIcons;
  do {
    local_290.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_290.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_290.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_290.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_290.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_290.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
    __7EUIIconG10EUIIconDefiii(this_00,&local_290,0,0,0x40);
    iVar15 = iVar15 + -1;
    this_00 = this_00 + 1;
  } while (iVar15 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_290.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_290.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_290.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_290.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_290.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_290.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_SelectXIcon,&local_290,0,0,0x40);
  pEVar11 = local_11c;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_290.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_290.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_290.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_290.m_flags = 0;
  local_290.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_290.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  pEVar14 = (EUIStaticTextIcon *)this->m_SelectPrompts;
  iVar15 = 1;
  __7EUIIconG10EUIIconDefiii(&this->m_SelectTriIcon,&local_290,0,0,0x40);
  pEVar12 = local_110;
  local_ec = &this->m_SelectPromptBar;
  local_100 = &this->m_AcceptXIcon;
  local_108 = &this->m_AcceptTriIcon;
  local_114 = (EUIStaticTextIcon *)this->m_AcceptPrompts;
  local_118 = &this->m_AcceptPromptBar;
  local_124 = &this->m_win;
  local_f4 = &this->m_TitleMenu;
  local_120 = &this->m_SideMenu;
  local_f8 = &this->m_customSkin;
  local_e8 = &(this->m_oldCharacterData).c;
  local_128 = &this->m_ACThief;
  local_fc = &this->m_ACThiefVase;
  local_c0 = 0x40;
  uStack_bc = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  uVar13 = 0xffff;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_290.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_290.m_flags = 0;
    local_290.m_selColorIdx = 0;
                    /* end of inlined section */
    iVar15 = iVar15 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_290.m_colorIdx = 1;
    local_290.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_26c = 0;
    local_268 = 0;
    local_264 = 0x41400000;
    local_260 = 0;
    local_25c = 1;
    local_230.m_retChar = (short)uVar13;
    local_258 = local_258 & 0xffff0000 | (uint)(ushort)local_230.m_retChar;
    local_248 = 0;
    local_24c = 0;
    local_250 = 0;
    local_238 = 0;
    local_23c = 0;
    local_240 = 0;
    local_230.m_xAlign = E_FAX_LEFT;
    local_230.m_yAlign = E_FAY_TOP;
    pEVar11->m_pointsize = 12.0;
    local_230.m_selColorIdx = 0;
    pEVar11->m_colorIdx = 1;
    local_210.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_210.m_flags = 0;
    pEVar12->m_trigger = local_c0;
    local_210.m_selColorIdx = 0;
    pEVar12->m_colorIdx = 1;
    local_210.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_e0 = (uint)uVar13;
    uStack_dc = (undefined4)((ulong)uVar13 >> 0x20);
    local_290.m_trigger = local_c0;
    local_270 = local_d0;
    local_230.m_maxChars = local_d0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar14,pEVar11,pEVar12,-1,local_130);
    local_210.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar14->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar14->field0_0x0).m_textdef.m_xAlign + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_26c,local_270) >> (7 - uVar9) * 8;
    pEVar2 = &(pEVar14->field0_0x0).m_textdef;
    uVar9 = (uint)pEVar2 & 7;
    puVar10 = (ulong *)((int)pEVar2 - uVar9);
    *puVar10 = CONCAT44(local_26c,local_270) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar14->field0_0x0).m_textdef.m_pointsize + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_264,local_268) >> (7 - uVar9) * 8;
    pEVar3 = &(pEVar14->field0_0x0).m_textdef.m_yAlign;
    uVar9 = (uint)pEVar3 & 7;
    puVar10 = (ulong *)((int)pEVar3 - uVar9);
    *puVar10 = CONCAT44(local_264,local_268) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar14->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_25c,local_260) >> (7 - uVar9) * 8;
    puVar4 = &(pEVar14->field0_0x0).m_textdef.m_selColorIdx;
    uVar9 = (uint)puVar4 & 7;
    puVar10 = (ulong *)((int)puVar4 - uVar9);
    *puVar10 = CONCAT44(local_25c,local_260) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    *(uint *)&(pEVar14->field0_0x0).m_textdef.m_retChar = local_258;
    local_1f0 = (pEVar14->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar14->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_290.m_trigger,local_290.m_flags) >> (7 - uVar9) * 8;
    pEVar5 = &(pEVar14->field0_0x0).field0_0x0.m_def;
    uVar9 = (uint)pEVar5 & 7;
    puVar10 = (ulong *)((int)pEVar5 - uVar9);
    *puVar10 = CONCAT44(local_290.m_trigger,local_290.m_flags) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar14->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_290.m_colorIdx,local_290.m_selColorIdx) >> (7 - uVar9) * 8;
    piVar6 = &(pEVar14->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar9 = (uint)piVar6 & 7;
    puVar10 = (ulong *)((int)piVar6 - uVar9);
    *puVar10 = CONCAT44(local_290.m_colorIdx,local_290.m_selColorIdx) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar14->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_290.__vtable,local_290.m_pCtrl) >> (7 - uVar9) * 8;
    ppEVar7 = &(pEVar14->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar9 = (uint)ppEVar7 & 7;
    puVar10 = (ulong *)((int)ppEVar7 - uVar9);
    *puVar10 = CONCAT44(local_290.__vtable,local_290.m_pCtrl) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    (pEVar14->field0_0x0).field0_0x0.m_def.__vtable = local_1f0;
    pEVar14[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar14[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar14 = (EUIStaticTextIcon *)&pEVar14[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_290.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
    uVar13 = CONCAT44(uStack_dc,local_e0);
  } while (iVar15 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  __10EPromptBar(local_ec);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0.m_colorIdx = 1;
                    /* end of inlined section */
  iVar15 = 1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(local_100,&local_1e0,0,0,0x40);
  pEVar14 = local_114;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0.m_selColorIdx = 0;
  local_1e0.m_colorIdx = 1;
                    /* end of inlined section */
  local_1e0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_108,&local_1e0,0,0,0x40);
  pEVar12 = local_f0;
  pEVar11 = local_104;
  puVar4 = local_12c;
  local_d0 = 0x40;
  uStack_cc = 0;
  local_e0 = 0x20;
  uStack_dc = 0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_1e0.m_flags = 0;
    local_1e0.m_selColorIdx = 0;
                    /* end of inlined section */
    iVar15 = iVar15 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1e0.m_colorIdx = 1;
    local_1e0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_1bc = 0;
    local_1b8 = 0;
    puVar4[3] = 0x41400000;
    local_1b0 = 0;
    puVar4[5] = 1;
    local_1a8 = CONCAT22(local_1a8._2_2_,0xffff);
    vPos.field0_0x0.d[2] = 0.0;
    vPos.field0_0x0.d[1] = 0.0;
    vPos.field0_0x0.d[0] = 0.0;
    local_188 = 0;
    local_18c = 0;
    local_190 = 0;
    local_180.m_xAlign = E_FAX_LEFT;
    local_180.m_yAlign = E_FAY_TOP;
    pEVar11->m_pointsize = 12.0;
    local_180.m_selColorIdx = 0;
    pEVar11->m_colorIdx = 1;
    local_180.m_retChar = -1;
    local_160.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_160.m_flags = 0;
    pEVar12->m_trigger = local_d0;
    local_160.m_selColorIdx = 0;
    pEVar12->m_colorIdx = 1;
    local_160.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_1e0.m_trigger = local_d0;
    local_1c0 = local_e0;
    local_180.m_maxChars = local_e0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar14,pEVar11,pEVar12,-1,local_10c);
    local_160.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar14->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar14->field0_0x0).m_textdef.m_xAlign + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_1bc,local_1c0) >> (7 - uVar9) * 8;
    pEVar2 = &(pEVar14->field0_0x0).m_textdef;
    uVar9 = (uint)pEVar2 & 7;
    puVar10 = (ulong *)((int)pEVar2 - uVar9);
    *puVar10 = CONCAT44(local_1bc,local_1c0) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar14->field0_0x0).m_textdef.m_pointsize + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(uStack_1b4,local_1b8) >> (7 - uVar9) * 8
    ;
    pEVar3 = &(pEVar14->field0_0x0).m_textdef.m_yAlign;
    uVar9 = (uint)pEVar3 & 7;
    puVar10 = (ulong *)((int)pEVar3 - uVar9);
    *puVar10 = CONCAT44(uStack_1b4,local_1b8) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar14->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(uStack_1ac,local_1b0) >> (7 - uVar9) * 8
    ;
    puVar8 = &(pEVar14->field0_0x0).m_textdef.m_selColorIdx;
    uVar9 = (uint)puVar8 & 7;
    puVar10 = (ulong *)((int)puVar8 - uVar9);
    *puVar10 = CONCAT44(uStack_1ac,local_1b0) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    *(undefined4 *)&(pEVar14->field0_0x0).m_textdef.m_retChar = local_1a8;
    local_140 = (pEVar14->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar14->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1e0.m_trigger,local_1e0.m_flags) >> (7 - uVar9) * 8;
    pEVar5 = &(pEVar14->field0_0x0).field0_0x0.m_def;
    uVar9 = (uint)pEVar5 & 7;
    puVar10 = (ulong *)((int)pEVar5 - uVar9);
    *puVar10 = CONCAT44(local_1e0.m_trigger,local_1e0.m_flags) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar14->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1e0.m_colorIdx,local_1e0.m_selColorIdx) >> (7 - uVar9) * 8;
    piVar6 = &(pEVar14->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar9 = (uint)piVar6 & 7;
    puVar10 = (ulong *)((int)piVar6 - uVar9);
    *puVar10 = CONCAT44(local_1e0.m_colorIdx,local_1e0.m_selColorIdx) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar14->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1e0.__vtable,local_1e0.m_pCtrl) >> (7 - uVar9) * 8;
    ppEVar7 = &(pEVar14->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar9 = (uint)ppEVar7 & 7;
    puVar10 = (ulong *)((int)ppEVar7 - uVar9);
    *puVar10 = CONCAT44(local_1e0.__vtable,local_1e0.m_pCtrl) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    (pEVar14->field0_0x0).field0_0x0.m_def.__vtable = local_140;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar14[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
    pEVar14[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar14 = (EUIStaticTextIcon *)&pEVar14[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar15 != -1);
  __10EPromptBar(local_118);
  __13EPortalWindow(local_124);
  __16ECharedTitleMenu(local_f4);
  __15ECharedSideMenu(local_120);
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedskin.h */
  Init__11ECharedSkin(local_f8);
  __15CustomCharacter(local_e8);
                    /* end of inlined section */
  __15EAnimController(local_128);
  __15EAnimController(local_fc);
  return this;
}

void ECharedPanel::Update() {
	int i;
	short unsigned int pCharacterName[32];
	bool bIn;
	short unsigned int pCharacterName[32];
	short unsigned int pCharacterName[32];
	short unsigned int pCharacterName[32];
	ENeighborhoodCustomChar *pDescription;
	ECharedSkin *pSkin;
	bool bIn;
	int i;
	float joystickPos;
	float rad;
	float deg;
	
  uint uVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  EUIVirtualCtrl__vtable *pEVar5;
  EFamilyConstructData *pEVar6;
  ECharedDiamondMenuItem *pEVar7;
  EUIMenu *pEVar8;
  bool bVar9;
  ECharedSim *pEVar10;
  ETextEntryDialog *pEVar11;
  short *psVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  short *psVar16;
  EUIObjectNode__vtable *pEVar17;
  ECharedDiamondMenuItem **ppEVar18;
  ECharedSim **ppEVar19;
  EAnimController *this_00;
  undefined8 unaff_s0;
  int iVar20;
  int iVar21;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  ECharedSideMenu *pEVar22;
  undefined8 unaff_s4;
  ECharedTitleMenu *pEVar23;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar24;
  short pCharacterName [32];
  StringBuffer2 SStack_290;
  short asStack_288 [260];
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
  
  psVar12 = pCharacterName;
  psVar16 = pCharacterName;
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  Update__7ERLevel(this->m_pRoom);
  Update__7ERLevel(this->m_pMirrorRoom);
  iVar21 = this->m_nCurrentMenu;
  if (iVar21 == 4) {
    pEVar5 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar14 = (*(code *)pEVar5[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar5[1].ClearBut + -4,0
                        ,0x10);
    if (lVar14 == 0) {
      bVar9 = UpdateKeyboard__16ETextEntryDialog(this->m_pKeyboard);
      if (!bVar9) {
        GetBuffer__16ETextEntryDialogPUs(this->m_pKeyboard,pCharacterName);
        if (pCharacterName[0] == 0) {
          pEVar17 = (this->field0_0x0).__vtable;
          this->m_nCurrentMenu = 0;
          (*(code *)pEVar17[1].EUIObjectNode)
                    ((int)this->m_dpadIcons + *(short *)(pEVar17 + 1) + -0x4c,this,0x41);
          pEVar17 = (this->field0_0x0).__vtable;
          (*(code *)pEVar17[1].EUIObjectNode)
                    ((int)this->m_dpadIcons + *(short *)(pEVar17 + 1) + -0x4c,this,0x40);
        }
        else {
          this->m_nCurrentMenu = 0;
          this->m_nAlteredSimIndex = -1;
          pEVar22 = &this->m_SideMenu;
          pEVar23 = &this->m_TitleMenu;
          if (*(int *)this->m_pNewFamily->CharacterInSlot == 0) {
            this->m_nAlteredSimIndex = '\0';
          }
          else {
            for (iVar21 = 1; iVar21 < 4; iVar21 = iVar21 + 1) {
              if (*(int *)(this->m_pNewFamily->CharacterInSlot + iVar21 * 4) == 0) {
                this->m_nAlteredSimIndex = (char)iVar21;
                break;
              }
            }
          }
          if (-1 < this->m_nAlteredSimIndex) {
            iVar21 = 0;
            do {
              iVar20 = iVar21 + 1;
              sVar4 = *psVar12;
              psVar12 = psVar12 + 1;
              this->m_pNewFamily->CustomData[this->m_nAlteredSimIndex].Name[iVar21] = sVar4;
              iVar21 = iVar20;
            } while (iVar20 < 0x20);
          }
          pEVar10 = this->m_pCustomSim;
          if (pEVar10 != (ECharedSim *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
            CleanUp__10ECharedSim(pEVar10);
            ___15EAnimController(&pEVar10->m_ac,2);
            _memmanFree__FPv(pEVar10);
          }
                    /* end of inlined section */
          pEVar10 = (ECharedSim *)__builtin_new(0x100);
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
          __15EAnimController(&pEVar10->m_ac);
          __15CustomCharacter(&pEVar10->m_character);
          __15CustomCharacter(&pEVar10->m_oldCharacter);
          Init__10ECharedSimbT1P11ECharedSkin(pEVar10,true,true,&this->m_customSkin);
                    /* end of inlined section */
          cVar2 = this->m_nAlteredSimIndex;
          pEVar6 = this->m_pNewFamily;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
                    /* end of inlined section */
          this->m_pCustomSim = pEVar10;
          this->m_nCurSim = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
          *(undefined4 *)&pEVar10->m_bInStoryMode = *(undefined4 *)&this->m_bInStoryMode;
                    /* end of inlined section */
          ResetMenus__15ECharedSideMenuPUs(pEVar22,pEVar6->CustomData[cVar2].Name);
          EnableAgeEdit__15ECharedSideMenu(pEVar22);
          EnableGenderEdit__15ECharedSideMenu(pEVar22);
          Activate__16ECharedTitleMenub(pEVar23,true);
          EnablePersonalityMenu__16ECharedTitleMenu(pEVar23);
          SwitchToCreateASim__16ECharedTitleMenu(pEVar23);
          this->m_fFOV = this->m_fCharFOV;
        }
        pEVar11 = this->m_pKeyboard;
        if (pEVar11 != (ETextEntryDialog *)0x0) {
          pEVar17 = (pEVar11->field0_0x0).__vtable;
          (*(code *)pEVar17->Draw)((int)pEVar11->m_szText + *(short *)&pEVar17->Update + -0x3e,3);
        }
        this->m_pKeyboard = (ETextEntryDialog *)0x0;
      }
      goto LAB_00104c6c;
    }
    pEVar11 = this->m_pKeyboard;
    if (pEVar11 != (ETextEntryDialog *)0x0) {
      pEVar17 = (pEVar11->field0_0x0).__vtable;
      (*(code *)pEVar17->Draw)((int)pEVar11->m_szText + *(short *)&pEVar17->Update + -0x3e,3);
    }
    this->m_pKeyboard = (ETextEntryDialog *)0x0;
LAB_001045a4:
    this->m_nCurrentMenu = 0;
  }
  else if (iVar21 == 5) {
    pEVar5 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar14 = (*(code *)pEVar5[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar5[1].ClearBut + -4,0
                        ,0x10);
    if (lVar14 != 0) {
      pEVar11 = this->m_pKeyboard;
      if (pEVar11 != (ETextEntryDialog *)0x0) {
        pEVar17 = (pEVar11->field0_0x0).__vtable;
        (*(code *)pEVar17->Draw)((int)pEVar11->m_szText + *(short *)&pEVar17->Update + -0x3e,3);
      }
      this->m_pKeyboard = (ETextEntryDialog *)0x0;
      this->m_nDoneState = -1;
      goto LAB_001045a4;
    }
    bVar9 = UpdateKeyboard__16ETextEntryDialog(this->m_pKeyboard);
    if (bVar9) goto LAB_00104c6c;
    GetBuffer__16ETextEntryDialogPUs(this->m_pKeyboard,pCharacterName);
    this->m_nCurrentMenu = 0;
    if (pCharacterName[0] == 0) {
      this->m_nDoneState = -1;
      pEVar11 = this->m_pKeyboard;
    }
    else {
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
      pEVar6 = this->m_pNewFamily;
                    /* inlined from ../MSrc/stringbuffer2.h */
      __13StringBuffer2PUsUi(&SStack_290,asStack_288,0x100);
      append__13StringBuffer2PCUsi(&SStack_290,pCharacterName,-1);
      copy__13StringBuffer2RC13StringBuffer2(&pEVar6->FamilyName->field0_0x0,&SStack_290);
                    /* end of inlined section */
      pEVar11 = this->m_pKeyboard;
    }
    if (pEVar11 != (ETextEntryDialog *)0x0) {
      pEVar17 = (pEVar11->field0_0x0).__vtable;
      (*(code *)pEVar17->Draw)((int)pEVar11->m_szText + *(short *)&pEVar17->Update + -0x3e,3);
    }
    pEVar17 = (this->field0_0x0).__vtable;
    this->m_pKeyboard = (ETextEntryDialog *)0x0;
    (*(code *)pEVar17[1].EUIObjectNode)
              ((int)this->m_dpadIcons + *(short *)(pEVar17 + 1) + -0x4c,this,0x41);
    pEVar17 = (this->field0_0x0).__vtable;
    uVar15 = 0x40;
    sVar4 = *(short *)(pEVar17 + 1);
    pcVar13 = (code *)pEVar17[1].EUIObjectNode;
LAB_00104994:
    (*pcVar13)((int)this->m_dpadIcons + sVar4 + -0x4c,this,uVar15);
  }
  else if (iVar21 == 6) {
    pEVar5 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar14 = (*(code *)pEVar5[1].GetBut)
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar5[1].ClearBut + -4,0
                        ,0x10);
    if (lVar14 == 0) {
      bVar9 = UpdateKeyboard__16ETextEntryDialog(this->m_pKeyboard);
      if (!bVar9) {
        GetBuffer__16ETextEntryDialogPUs(this->m_pKeyboard,pCharacterName);
        pEVar11 = this->m_pKeyboard;
        if (pEVar11 != (ETextEntryDialog *)0x0) {
          pEVar17 = (pEVar11->field0_0x0).__vtable;
          (*(code *)pEVar17->Draw)((int)pEVar11->m_szText + *(short *)&pEVar17->Update + -0x3e,3);
        }
        if (pCharacterName[0] == 0) goto LAB_00104c68;
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
        pEVar6 = this->m_pNewFamily;
                    /* inlined from ../MSrc/stringbuffer2.h */
        this->m_nCurrentMenu = 7;
        __13StringBuffer2PUsUi(&SStack_290,asStack_288,0x100);
        append__13StringBuffer2PCUsi(&SStack_290,pCharacterName,-1);
        copy__13StringBuffer2RC13StringBuffer2(&pEVar6->FamilyName->field0_0x0,&SStack_290);
        pEVar11 = (ETextEntryDialog *)_memmanAlloc__FUiUi(0x1c0,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
                    /* end of inlined section */
        psVar12 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"sim_name_title");
        pEVar11 = __16ETextEntryDialogPCUsUifib(pEVar11,psVar12,0xe,0.15,0,true);
        this->m_pKeyboard = pEVar11;
        pEVar17 = (this->field0_0x0).__vtable;
        *(undefined4 *)&this->m_bUseAcceptPrompt = 0;
        (*(code *)pEVar17[1].EUIObjectNode)
                  ((int)this->m_dpadIcons + *(short *)(pEVar17 + 1) + -0x4c,this,0x3f);
        pEVar17 = (this->field0_0x0).__vtable;
        uVar15 = 0x40;
        goto LAB_0010498c;
      }
    }
    else {
      pEVar11 = this->m_pKeyboard;
      if (pEVar11 != (ETextEntryDialog *)0x0) {
        pEVar17 = (pEVar11->field0_0x0).__vtable;
        (*(code *)pEVar17->Draw)((int)pEVar11->m_szText + *(short *)&pEVar17->Update + -0x3e,3);
      }
      this->m_pKeyboard = (ETextEntryDialog *)0x0;
      this->m_nDoneState = -1;
    }
  }
  else {
    if (iVar21 == 7) {
      pEVar5 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar14 = (*(code *)pEVar5[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar5[1].ClearBut + -4
                          ,0,0x10);
      if (lVar14 == 0) {
        bVar9 = UpdateKeyboard__16ETextEntryDialog(this->m_pKeyboard);
        if (bVar9) goto LAB_00104c6c;
        GetBuffer__16ETextEntryDialogPUs(this->m_pKeyboard,pCharacterName);
        if (pCharacterName[0] == 0) {
          this->m_nDoneState = -1;
          pEVar11 = this->m_pKeyboard;
        }
        else {
          this->m_nCurrentMenu = 0;
          *(undefined4 *)&this->m_bDrawCASObjects = 1;
          iVar21 = 0;
          do {
            iVar20 = iVar21 + 1;
            sVar4 = *psVar16;
            psVar16 = psVar16 + 1;
            this->m_pNewFamily->CustomData[this->m_nAlteredSimIndex].Name[iVar21] = sVar4;
            iVar21 = iVar20;
          } while (iVar20 < 0x20);
          pEVar11 = this->m_pKeyboard;
        }
        if (pEVar11 != (ETextEntryDialog *)0x0) {
          pEVar17 = (pEVar11->field0_0x0).__vtable;
          (*(code *)pEVar17->Draw)((int)pEVar11->m_szText + *(short *)&pEVar17->Update + -0x3e,3);
        }
        pEVar17 = (this->field0_0x0).__vtable;
        this->m_pKeyboard = (ETextEntryDialog *)0x0;
        (*(code *)pEVar17[1].EUIObjectNode)
                  ((int)this->m_dpadIcons + *(short *)(pEVar17 + 1) + -0x4c,this,0x40);
        pEVar17 = (this->field0_0x0).__vtable;
        uVar15 = 0x41;
      }
      else {
        pEVar11 = this->m_pKeyboard;
        if (pEVar11 != (ETextEntryDialog *)0x0) {
          pEVar17 = (pEVar11->field0_0x0).__vtable;
          (*(code *)pEVar17->Draw)((int)pEVar11->m_szText + *(short *)&pEVar17->Update + -0x3e,3);
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
        }
        pEVar11 = (ETextEntryDialog *)_memmanAlloc__FUiUi(0x1c0,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
                    /* end of inlined section */
        psVar12 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"family_name_title");
        pEVar11 = __16ETextEntryDialogPCUsUifib(pEVar11,psVar12,0xe,0.15,0,false);
        this->m_pKeyboard = pEVar11;
        psVar12 = c_str__C13StringBuffer2(&this->m_pNewFamily->FamilyName->field0_0x0);
        SetBuffer__16ETextEntryDialogPCUs(this->m_pKeyboard,psVar12);
        pEVar17 = (this->field0_0x0).__vtable;
        this->m_nCurrentMenu = 6;
        *(undefined4 *)&this->m_bUseAcceptPrompt = 0;
        (*(code *)pEVar17[1].EUIObjectNode)
                  ((int)this->m_dpadIcons + *(short *)(pEVar17 + 1) + -0x4c,this,0x3f);
        pEVar17 = (this->field0_0x0).__vtable;
        uVar15 = 0x40;
      }
LAB_0010498c:
      sVar4 = *(short *)(pEVar17 + 1);
      pcVar13 = (code *)pEVar17[1].EUIObjectNode;
      goto LAB_00104994;
    }
    if (iVar21 == 0) {
      Update__13EUIObjectNode(&this->field0_0x0);
      pEVar5 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar14 = (*(code *)pEVar5[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar5[1].ClearBut + -4
                          ,0,0x10);
      if (((lVar14 != 0) && (1.0 <= this->m_fCameraPos)) && (this->m_nNextCamPos == 0)) {
        if (*(int *)&this->m_bInStoryMode == 0) {
          pEVar23 = &this->m_TitleMenu;
          if (*(int *)&this->m_bDrawCASObjects == 0) {
            if (this->m_pSelectMenu == (EUIMenu *)0x0) goto LAB_00104c68;
            if (this->m_nNumFamilyMembers < 4) {
              Activate__16ECharedTitleMenub(&this->m_TitleMenu,true);
              fVar24 = this->m_fFamFOV;
            }
            else {
              Activate__16ECharedTitleMenub(&this->m_TitleMenu,false);
              fVar24 = this->m_fFamFOV;
            }
            iVar21 = 0;
            this->m_fFOV = fVar24;
            if (this->m_nNumFamilyMembers != '\0') {
              ppEVar18 = this->m_pDiamonds;
              pEVar8 = this->m_pSelectMenu;
              while( true ) {
                iVar21 = iVar21 + 1;
                pEVar7 = *ppEVar18;
                pEVar17 = (pEVar8->field0_0x0).__vtable;
                ppEVar18 = ppEVar18 + 1;
                (*(code *)pEVar17[1].RemoveChild)
                          ((int)pEVar8->m_maxBackShdrSize + *(short *)&pEVar17[1].AddChild + -0x44,
                           pEVar7);
                if ((int)(uint)this->m_nNumFamilyMembers <= iVar21) break;
                pEVar8 = this->m_pSelectMenu;
              }
            }
            pEVar17 = (this->field0_0x0).__vtable;
            (*(code *)pEVar17[1].RemoveChild)
                      ((int)this->m_dpadIcons + *(short *)&pEVar17[1].AddChild + -0x4c,
                       this->m_pSelectMenu);
            *(undefined4 *)&this->m_bDeleteSelectMenu = 1;
          }
          else {
            Activate__16ECharedTitleMenub(pEVar23,true);
            SwitchToCreateAFamily__16ECharedTitleMenub(pEVar23,true);
            if (this->m_nNumFamilyMembers < 4) {
              fVar24 = this->m_fFamFOV;
            }
            else {
              DeactivateNew__16ECharedTitleMenu(pEVar23);
              fVar24 = this->m_fFamFOV;
            }
            this->m_fFOV = fVar24;
          }
        }
        else {
LAB_00104c68:
          this->m_nDoneState = -1;
        }
      }
    }
    else {
      if (iVar21 == 1) {
        bVar9 = IsNameSelected__15ECharedSideMenu(&this->m_SideMenu);
        if (bVar9) {
          *(undefined4 *)&this->m_bUseAcceptPrompt = 0;
        }
        else {
          *(undefined4 *)&this->m_bUseAcceptPrompt = 1;
        }
      }
      pEVar5 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar14 = (*(code *)pEVar5[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar5[1].ClearBut + -4
                          ,0,0x10);
      if (lVar14 == 0) {
        Update__13EUIObjectNode(&this->field0_0x0);
      }
      else {
        pEVar22 = &this->m_SideMenu;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
        bVar9 = IsKeyboardRunning__15ECharedSideMenu(pEVar22);
        if (bVar9) {
          KillKeyboard__15ECharedSideMenu(pEVar22);
        }
        else {
          pEVar10 = this->m_pCustomSim;
          if (pEVar10 != (ECharedSim *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
            CleanUp__10ECharedSim(pEVar10);
            ___15EAnimController(&pEVar10->m_ac,2);
            _memmanFree__FPv(pEVar10);
                    /* end of inlined section */
          }
                    /* end of inlined section */
          pEVar10 = (ECharedSim *)__builtin_new(0x100);
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
          __15EAnimController(&pEVar10->m_ac);
          __15CustomCharacter(&pEVar10->m_character);
          __15CustomCharacter(&pEVar10->m_oldCharacter);
          Init__10ECharedSimP23ENeighborhoodCustomCharP11ECharedSkin
                    (pEVar10,&this->m_oldCharacterData,&this->m_customSkin);
                    /* end of inlined section */
          this->m_pCustomSim = pEVar10;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
          *(undefined4 *)&pEVar10->m_bInStoryMode = *(undefined4 *)&this->m_bInStoryMode;
                    /* end of inlined section */
          ResetMenus__15ECharedSideMenuP23ENeighborhoodCustomCharb
                    (pEVar22,&this->m_oldCharacterData,false);
          iVar21 = *(int *)&(this->m_oldCharacterData).c;
          if (*(int *)&(this->m_oldCharacterData).c.m_bAdult == 0) {
            iVar20 = 2;
            if (iVar21 == 0) {
              iVar20 = 3;
            }
LAB_00104ad4:
            this->m_nCurSim = iVar20;
          }
          else {
            iVar20 = 1;
            if (iVar21 == 0) goto LAB_00104ad4;
            this->m_nCurSim = 0;
          }
          HideMenu__15ECharedSideMenu(pEVar22);
          this->m_nCurrentMenu = 0;
          *(undefined4 *)&this->m_bUseAcceptPrompt = 0;
        }
      }
    }
  }
LAB_00104c6c:
  ppEVar19 = this->m_pFamilyMembers;
  UpdateCamera__12ECharedPanel(this);
  if (*(int *)&this->m_bDrawCASObjects != 0) {
    fVar24 = GetStick__11EControllerii(_ctrlPads[0],1,0);
    if (fVar24 != 0.0) {
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
      fVar24 = (fVar24 + fVar24) * _dt * 45.0 + this->m_fSimRotation * 57.29578;
      if (360.0 < fVar24) {
        fVar24 = fVar24 - 360.0;
      }
      else if (fVar24 < 0.0) {
        fVar24 = fVar24 + 360.0;
      }
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
      this->m_fSimRotation = fVar24 * 0.01745329;
    }
    Update__10ECharedSim(this->m_pCustomSim);
  }
  iVar21 = 7;
  do {
    iVar21 = iVar21 + -1;
    if (*ppEVar19 != (ECharedSim *)0x0) {
      Update__10ECharedSim(*ppEVar19);
    }
    ppEVar19 = ppEVar19 + 1;
  } while (-1 < iVar21);
  if (*(int *)&this->m_bDrawCASObjects == 0) {
    iVar21 = *(int *)&this->m_bDeleteSelectMenu;
    goto LAB_00104ebc;
  }
  if (90.0 < this->m_fThiefTime) {
    this_00 = &this->m_ACThief;
    if (this->m_nCurrentThiefAnim < 4) {
                    /* end of inlined section */
      bVar9 = IsTrackAnimComplete__15EAnimControlleri(this_00,1);
      if (!bVar9) goto LAB_00104e78;
      do {
        iVar21 = rand();
        uVar1 = iVar21 % 5;
      } while (uVar1 == this->m_nCurrentThiefAnim);
      this->m_nCurrentThiefAnim = (uchar)uVar1;
      if ((uVar1 & 0xff) < 4) {
        bVar3 = this->m_nCurrentThiefAnim;
        goto LAB_00104e5c;
      }
LAB_00104e44:
      RestartTrack__15EAnimControlleri(&this->m_ACThiefVase,1);
      this->m_fThiefTime = 0.0;
    }
    else {
      this_00 = &this->m_ACThiefVase;
      bVar9 = IsTrackAnimComplete__15EAnimControlleri(this_00,1);
      if (!bVar9) {
LAB_00104e78:
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        pCharacterName._0_4_ = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        pCharacterName._8_4_ = 0x3f800000;
                    /* end of inlined section */
        pCharacterName._4_4_ = 0x3f800000;
        Update__15EAnimControllerP5EVec3T1G5EVec3
                  (this_00,(EVec3 *)0x0,(EVec3 *)0x0,(EVec3 *)pCharacterName);
        iVar21 = *(int *)&this->m_bDeleteSelectMenu;
        goto LAB_00104ebc;
      }
      do {
        iVar21 = rand();
        uVar1 = iVar21 % 5;
      } while (uVar1 == this->m_nCurrentThiefAnim);
      this->m_nCurrentThiefAnim = (uchar)uVar1;
      if (3 < (uVar1 & 0xff)) goto LAB_00104e44;
      bVar3 = this->m_nCurrentThiefAnim;
LAB_00104e5c:
      SetTrackAnim__15EAnimControlleriUi(&this->m_ACThief,1,this->m_nThiefAnimationID[bVar3]);
      this->m_fThiefTime = 0.0;
    }
  }
  else {
    this->m_fThiefTime = this->m_fThiefTime + _dt;
  }
  iVar21 = *(int *)&this->m_bDeleteSelectMenu;
LAB_00104ebc:
  ppEVar18 = this->m_pDiamonds;
  if (iVar21 != 0) {
    iVar21 = 3;
    do {
      pEVar7 = *ppEVar18;
      if (pEVar7 != (ECharedDiamondMenuItem *)0x0) {
        pEVar17 = (pEVar7->field0_0x0).__vtable;
        (*(code *)pEVar17->Draw)
                  ((int)&(pEVar7->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar17->Update,3);
        *ppEVar18 = (ECharedDiamondMenuItem *)0x0;
      }
      iVar21 = iVar21 + -1;
      ppEVar18 = ppEVar18 + 1;
    } while (-1 < iVar21);
    pEVar8 = this->m_pSelectMenu;
    if (pEVar8 != (EUIMenu *)0x0) {
      pEVar17 = (pEVar8->field0_0x0).__vtable;
      (*(code *)pEVar17->Draw)
                ((int)pEVar8->m_maxBackShdrSize + *(short *)&pEVar17->Update + -0x44,3);
    }
    this->m_pSelectMenu = (EUIMenu *)0x0;
    *(undefined4 *)&this->m_bDeleteSelectMenu = 0;
  }
  if (*(int *)&this->m_bUseAcceptPrompt == 0) {
    Update__10EPromptBar(&this->m_SelectPromptBar);
  }
  else {
    Update__10EPromptBar(&this->m_AcceptPromptBar);
  }
  return;
}

void ECharedPanel::Draw(ERC *prc) {
	int i;
	ERC *this;
	EGraphics *this;
	EPortalDef pd;
	EMat4 mPortalRot;
	int cp;
	EMat4 mProj;
	ERC *this;
	int cmv;
	int cp;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EGraphics *this;
	ERC *this;
	ERLevel *this;
	ERLevel *this;
	ERC *this;
	EMat4 mID;
	EVec3 vPosIn;
	EVec3 vRotIn;
	EVec3 vScaleIn;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  short sVar1;
  EGlobalManagerClient__vtable *pEVar2;
  ERLevel *pEVar3;
  EUIObjectNode__vtable *pEVar4;
  uint uVar5;
  ulong *puVar6;
  ERFont *pEVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  ELights *pEVar12;
  ERC__vtable *pEVar13;
  float *pfVar14;
  undefined4 *puVar15;
  EMat4 *pEVar16;
  short *psVar17;
  undefined4 *puVar18;
  ERShader *this_00;
  EPortalWindow *this_01;
  ECharedSim **ppEVar19;
  ETextEntryDialog *pEVar20;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  EPortalDef *portal;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined *puVar21;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar22;
  int iVar23;
  float fVar24;
  int iVar25;
  undefined4 uVar26;
  float fVar27;
  EMat4 mID;
  EVec3 vPosIn;
  EVec3 vRotIn;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  EMat4 mPortalRot;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  EMat4 mProj;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  EMat4 *local_e0;
  ECharedSim **local_dc;
  undefined4 *local_d8;
  EVec3 *local_d4;
  EVec3 *local_d0;
  undefined *local_cc;
  EVec3 *local_c8;
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
  
                    /* inlined from /eor/src2/engine/e_dl.h */
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* end of inlined section */
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/e_dl.h */
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  pEVar12 = (ELights *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x30,0x10);
  puVar21 = (undefined *)((int)&(pEVar12->a).vColor.field0_0x0 + 7);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar5 = (uint)puVar21 & 7;
  puVar6 = (ulong *)(puVar21 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0x3f19999a3f19999aU >> (7 - uVar5) * 8;
  uVar5 = (uint)pEVar12 & 7;
  *(ulong *)((int)pEVar12 - uVar5) =
       0x3f19999a3f19999a << uVar5 * 8 |
       *(ulong *)((int)pEVar12 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (pEVar12->a).vColor.field0_0x0.d[2] = 0.6;
  puVar21 = (undefined *)((int)&pEVar12[1].a.vColor.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar5 = (uint)puVar21 & 7;
  puVar6 = (ulong *)(puVar21 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0x3f19999a3f19999aU >> (7 - uVar5) * 8;
  uVar5 = (uint)(pEVar12 + 1) & 7;
  puVar6 = (ulong *)((int)(pEVar12 + 1) - uVar5);
  *puVar6 = 0x3f19999a3f19999a << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  pEVar12[1].a.vColor.field0_0x0.d[2] = 0.6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mID.field0_0x0.d[0][1] = 10.0;
  mID.field0_0x0.d[0][2] = -11.0;
  mID.field0_0x0.d[0][0] = 10.0;
  puVar21 = (undefined *)((int)&pEVar12[2].a.vColor.field0_0x0 + 7);
                    /* end of inlined section */
  uVar5 = (uint)puVar21 & 7;
  puVar6 = (ulong *)(puVar21 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 | 0x4120000041200000U >> (7 - uVar5) * 8;
  uVar5 = (uint)(pEVar12 + 2) & 7;
  puVar6 = (ulong *)((int)(pEVar12 + 2) - uVar5);
  *puVar6 = 0x4120000041200000 << uVar5 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  pEVar12[2].a.vColor.field0_0x0.d[2] = -11.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar24 = pEVar12[2].a.vColor.field0_0x0.d[0];
  fVar22 = pEVar12[2].a.vColor.field0_0x0.d[1];
  fVar27 = pEVar12[2].a.vColor.field0_0x0.d[2];
  fVar22 = sqrtf(fVar24 * fVar24 + fVar22 * fVar22 + fVar27 * fVar27);
  if (fVar22 == 0.0) {
    pEVar13 = prc->__vtable;
  }
  else {
    fVar22 = 1.0 / fVar22;
    pEVar12[2].a.vColor.field0_0x0.d[0] = pEVar12[2].a.vColor.field0_0x0.d[0] * fVar22;
    fVar24 = pEVar12[2].a.vColor.field0_0x0.d[2];
    pEVar12[2].a.vColor.field0_0x0.d[1] = pEVar12[2].a.vColor.field0_0x0.d[1] * fVar22;
    pEVar12[2].a.vColor.field0_0x0.d[2] = fVar24 * fVar22;
                    /* end of inlined section */
    pEVar13 = prc->__vtable;
  }
  this_01 = &this->m_win;
  fVar22 = 1.0;
  (*(code *)pEVar13[1].LineList)((int)&prc->m_pdl + (int)*(short *)&pEVar13[1].QuadList,pEVar12,1);
  local_dc = this->m_pFamilyMembers;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  fVar27 = this->m_fFOV;
  iVar25 = _pGfx->m_yscreen;
  pEVar2 = (_pGfx->field0_0x0).__vtable;
  iVar23 = _pGfx->m_xscreen;
  local_d4 = &this->m_vEye;
  local_d0 = &this->m_vCameraTarget;
  fVar24 = (float)(*(code *)pEVar2[0xd].EGlobalManagerClient)
                            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 0xd));
  SetProjection__13EPortalWindowffff
            (this_01,(fVar27 * (float)iVar25) / (float)iVar23,fVar24,fVar22,1000.0);
  SetClipRatio__13EPortalWindowf(this_01,3.0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mID.field0_0x0.d[0][1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mID.field0_0x0.d[0][0] = 0.0;
  mID.field0_0x0.d[0][2] = fVar22;
                    /* end of inlined section */
  SetLookAt__13EPortalWindowRC5EVec3N21(this_01,&this->m_vEye,&this->m_vCameraTarget,(EVec3 *)&mID);
  Select__13EPortalWindowP3ERC(this_01,prc);
  local_c8 = &vPosIn;
  local_cc = (undefined *)((int)&mID.field0_0x0 + 0x30);
  portal = (EPortalDef *)((int)&mID.field0_0x0 + 0x10);
  puVar21 = (undefined *)((int)&mID.field0_0x0 + 0x20);
  if (*(int *)&this->m_bDrawCASObjects != 0) {
                    /* inlined from /eor/src2/engine/window/e_portalwindow.h */
                    /* end of inlined section */
    for (iVar23 = 4; iVar23 != -1; iVar23 = iVar23 + -1) {
    }
                    /* end of inlined section */
    vRotIn.field0_0x0.d[2] = 5.605194e-45;
    mID.field0_0x0.d[2][2] = 0.37;
    mID.field0_0x0.d[3][1] = -0.37;
    mID.field0_0x0.d[3][3] = 1.375;
    mID.field0_0x0.d[1][0] = -0.37;
    mID.field0_0x0.d[1][1] = 0.0;
    mID.field0_0x0.d[1][2] = 0.0;
    mID.field0_0x0.d[1][3] = 0.37;
    mID.field0_0x0.d[2][0] = 0.0;
    mID.field0_0x0.d[2][1] = 0.0;
    mID.field0_0x0.d[2][3] = 0.0;
    mID.field0_0x0.d[3][0] = 1.375;
    mID.field0_0x0.d[3][2] = 0.0;
    Id__5EMat4(&mPortalRot);
    RotateX__5EMat4f(&mPortalRot,-0.1754721);
    PostRotateZ__5EMat4f(&mPortalRot,0.6083076);
    PostTranslate__5EMat4RC5EVec3(&mPortalRot,&this->m_vMirror);
    pfVar14 = &mID.field0_0x0.field1._10;
    iVar23 = 3;
    do {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      fVar22 = *pfVar14;
                    /* end of inlined section */
      iVar23 = iVar23 + -1;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      fVar27 = pfVar14[1];
      fVar24 = pfVar14[2];
      mID.field0_0x0.d[0][0] =
           fVar22 * mPortalRot.field0_0x0.d[0][0] + fVar27 * mPortalRot.field0_0x0.d[1][0] +
           fVar24 * mPortalRot.field0_0x0.d[2][0] + mPortalRot.field0_0x0.d[3][0];
      mID.field0_0x0.d[0][2] =
           fVar22 * mPortalRot.field0_0x0.d[0][2] + fVar27 * mPortalRot.field0_0x0.d[1][2] +
           fVar24 * mPortalRot.field0_0x0.d[2][2] + mPortalRot.field0_0x0.d[3][2];
      mID.field0_0x0.d[0][1] =
           fVar22 * mPortalRot.field0_0x0.d[0][1] + fVar27 * mPortalRot.field0_0x0.d[1][1] +
           fVar24 * mPortalRot.field0_0x0.d[2][1] + mPortalRot.field0_0x0.d[3][1];
                    /* end of inlined section */
      uVar5 = (uint)(undefined *)((int)pfVar14 + 7U) & 7;
      puVar6 = (ulong *)((undefined *)((int)pfVar14 + 7U) + -uVar5);
      *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
                CONCAT44(mID.field0_0x0.d[0][1],mID.field0_0x0.d[0][0]) >> (7 - uVar5) * 8;
      uVar5 = (uint)pfVar14 & 7;
      *(ulong *)((int)pfVar14 - uVar5) =
           CONCAT44(mID.field0_0x0.d[0][1],mID.field0_0x0.d[0][0]) << uVar5 * 8 |
           *(ulong *)((int)pfVar14 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      pfVar14[2] = mID.field0_0x0.d[0][2];
      pfVar14 = pfVar14 + 3;
    } while (-1 < iVar23);
    CalcMirrorMatrix__13EPortalWindowR10EPortalDef(portal);
    bVar11 = PushPortal__13EPortalWindowRC10EPortalDefbUi(this_01,portal,true,0x15);
    if (bVar11) {
      (*(code *)prc->__vtable->Init)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->LoadMPG,0,0);
      (*(code *)prc->__vtable->FlushQueuedMatrices)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->GeometrySetup,1);
      (*(code *)prc->__vtable[1].TriStrip)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriStrip,0x48,0);
      (*(code *)prc->__vtable[1].RectList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].Rect,2,2,2,1,0,0);
      (*(code *)prc->__vtable[1].DisableGeometryModes)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,1,0,0);
      (*(code *)prc->__vtable[1].EnableRasterModes)
                (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,0,5
                 ,0);
      (*(code *)prc->__vtable[1].Callback)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].Material,0,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      mID.field0_0x0.d[0][1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      mID.field0_0x0.d[0][0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_17c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_180 = 0x3f800000;
      local_16c = 0;
      local_170 = 0;
      local_15c = 0;
      local_160 = 0;
      local_144 = 0x3f800000;
      local_148 = 0x3f800000;
      local_14c = 0x3f800000;
      local_150 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&mID,&local_180,
                 &local_170,&local_160,&local_150);
                    /* inlined from /eor/src2/engine/e_dl.h */
      puVar15 = (undefined4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x140,0x10);
                    /* end of inlined section */
      local_e0 = &mProj;
      local_d8 = &local_100;
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
      iVar23 = 0;
      puVar18 = puVar15;
      do {
        iVar25 = 3;
        if ((iVar23 != 2) && (iVar25 = iVar23, iVar23 == 3)) {
          iVar25 = 2;
        }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        iVar25 = iVar25 * 0xc;
                    /* end of inlined section */
        iVar23 = iVar23 + 1;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        *puVar18 = *(undefined4 *)((int)&mID.field0_0x0 + iVar25 + 0x10);
        puVar18[1] = *(undefined4 *)((int)&mID.field0_0x0 + iVar25 + 0x14);
        uVar26 = *(undefined4 *)((int)&mID.field0_0x0 + iVar25 + 0x18);
                    /* end of inlined section */
        puVar18[4] = 0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        puVar18[2] = uVar26;
                    /* end of inlined section */
        puVar18[5] = 0;
        puVar18[6] = 0;
        puVar18[7] = 0;
        puVar18[0xc] = 0;
        puVar18[0xd] = 0;
        puVar18[0xe] = 0;
        puVar18[0xf] = 0xff;
        puVar18 = puVar18 + 0x14;
      } while (iVar23 < 4);
                    /* end of inlined section */
      local_f0 = 0x3f800000;
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[0x1c] = 0x3f800000;
      puVar15[0x1d] = 0;
      puVar15[0x30] = 0;
      puVar15[0x31] = 0x3f800000;
      puVar15[0x44] = 0x3f800000;
      puVar15[0x45] = 0x3f800000;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
      fVar24 = this->m_fCharFOV;
      iVar25 = _pGfx->m_yscreen;
      pEVar2 = (_pGfx->field0_0x0).__vtable;
      iVar23 = _pGfx->m_xscreen;
      fVar22 = (float)(*(code *)pEVar2[0xd].EGlobalManagerClient)
                                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 0xd))
      ;
      Projection__5EMat4ffff(local_e0,(fVar24 * (float)iVar25) / (float)iVar23,fVar22,0.0001,1000.0)
      ;
                    /* inlined from /eor/src2/engine/e_dl.h */
      pEVar16 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
      __as__5EMat4RC5EMat4(pEVar16,local_e0);
      (*(code *)prc->__vtable->SaveImageData)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Debug,pEVar16);
      (*(code *)prc->__vtable->ZTest)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
      (*(code *)prc->__vtable->TriIndexed)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar15,4);
      Select__13EPortalWindowP3ERC(this_01,prc);
                    /* inlined from /eor/src2/engine/level/e_rlevel.h */
      pEVar3 = this->m_pMirrorRoom;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/level/e_rlevel.h */
      pEVar3->m_nDirLights = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/level/e_rlevel.h */
      pEVar3->m_pLights = pEVar12;
                    /* end of inlined section */
      Draw__7ERLevelP3ERCUii(this->m_pMirrorRoom,prc,4,0);
      Draw__10ECharedSimP3ERCf(this->m_pCustomSim,prc,this->m_fSimRotation);
      PopPortal__13EPortalWindow(this_01);
      Select__13EPortalWindowP3ERC(this_01,prc);
      (*(code *)prc->__vtable->Init)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->LoadMPG,0,0);
      (*(code *)prc->__vtable->FlushQueuedMatrices)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->GeometrySetup,1);
      (*(code *)prc->__vtable[1].TriStrip)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriStrip,0x48,0);
      (*(code *)prc->__vtable[1].RectList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].Rect,2,2,2,1,0,0);
      (*(code *)prc->__vtable[1].DisableGeometryModes)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].EnableGeometryModes,1,1,0,0);
      (*(code *)prc->__vtable[1].EnableRasterModes)
                (0x3f000000,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SetGeometryModes,0,5
                 ,0);
      (*(code *)prc->__vtable[1].Callback)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].Material,0,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      mID.field0_0x0.d[0][1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      mID.field0_0x0.d[0][0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_16c = 0;
      local_170 = 0;
      local_fc = 0;
      local_100 = 0;
                    /* end of inlined section */
      local_180 = local_f0;
      local_17c = local_f0;
      local_ec = local_f0;
      local_e8 = local_f0;
      local_e4 = local_f0;
      (*(code *)prc->__vtable[1].DisplayList)
                (local_f0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&mID,
                 &local_180,&local_170,local_d8,&local_f0);
      Select__8ERShaderP3ERCi(this->m_pMirrorShdr,prc,0);
      (*(code *)prc->__vtable->ZTest)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
      (*(code *)prc->__vtable->TriIndexed)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar15,4);
    }
    else {
      Select__13EPortalWindowP3ERC(this_01,prc);
    }
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  mID.field0_0x0.d[0][2] = 1.0;
  mID.field0_0x0.d[0][0] = 0.0;
                    /* end of inlined section */
  mID.field0_0x0.d[0][1] = 0.0;
  SetLookAt__13EPortalWindowRC5EVec3N21(this_01,local_d4,local_d0,(EVec3 *)&mID);
  Select__13EPortalWindowP3ERC(this_01,prc);
                    /* inlined from /eor/src2/engine/level/e_rlevel.h */
  pEVar3 = this->m_pRoom;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/level/e_rlevel.h */
  pEVar3->m_nDirLights = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/level/e_rlevel.h */
  pEVar3->m_pLights = pEVar12;
                    /* end of inlined section */
  Draw__7ERLevelP3ERCUii(this->m_pRoom,prc,4,0);
  if (*(int *)&this->m_bDrawCASObjects != 0) {
                    /* inlined from /eor/src2/engine/e_rc.h */
    pEVar16 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
    Id__5EMat4(pEVar16);
    PreScale__5EMat4f(pEVar16,this->m_pMirror->m_scaler);
    PreRotateZ__5EMat4f(pEVar16,0.6084219);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    mID.field0_0x0.d[0][0] = -0.75;
    mID.field0_0x0.d[0][1] = 1.15;
                    /* end of inlined section */
    mID.field0_0x0.d[0][2] = 0.0;
    PostTranslate__5EMat4RC5EVec3(pEVar16,(EVec3 *)&mID);
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,pEVar16);
    Draw__7ERModelP3ERCUi(this->m_pMirror,prc,5);
    if (*(int *)&this->m_bDrawCASObjects != 0) {
      Draw__10ECharedSimP3ERCf(this->m_pCustomSim,prc,this->m_fSimRotation);
    }
  }
  iVar23 = 7;
  ppEVar19 = local_dc;
  do {
    if (*ppEVar19 != (ECharedSim *)0x0) {
      Draw__10ECharedSimP3ERCf(*ppEVar19,prc,0.0);
    }
    iVar23 = iVar23 + -1;
    ppEVar19 = ppEVar19 + 1;
  } while (-1 < iVar23);
  if (*(int *)&this->m_bDrawCASObjects == 0) {
    this_00 = this->m_pBlankShdr;
  }
  else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vPosIn.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vPosIn.field0_0x0.d[1] = 0.0;
    vPosIn.field0_0x0.d[0] = 0.0;
    vRotIn.field0_0x0.d[2] = 0.0;
    vRotIn.field0_0x0.d[1] = 0.0;
    vRotIn.field0_0x0.d[0] = 0.0;
    local_1f8 = 0x3f800000;
    local_1fc = 0x3f800000;
                    /* end of inlined section */
    local_200 = 0x3f800000;
    if (90.0 < this->m_fThiefTime) {
      if (3 < this->m_nCurrentThiefAnim) {
        CalcOrientMatrix__15EAnimControllerRC5EVec3N21R5EMat4
                  (local_c8,&vRotIn,(EVec3 *)&local_200,&mID);
        Draw__15EAnimControllerP3ERCP7ERModelRC5EMat4Ui
                  (&this->m_ACThiefVase,prc,this->m_pThiefVase,&mID,5);
        this_00 = this->m_pBlankShdr;
        goto LAB_00105a10;
      }
      CalcOrientMatrix__15EAnimControllerRC5EVec3N21R5EMat4
                (local_c8,&vRotIn,(EVec3 *)&local_200,&mID);
      Draw__15EAnimControllerP3ERCP7ERModelRC5EMat4Ui(&this->m_ACThief,prc,this->m_pThief,&mID,5);
    }
    this_00 = this->m_pBlankShdr;
  }
LAB_00105a10:
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this_00,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  mID.field0_0x0.d[0][0] = 0.173;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  mID.field0_0x0.d[0][1] = 0.833;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  mID.field0_0x0.d[1][0] = 1.0;
  mID.field0_0x0.d[1][1] = 1.0;
  mID.field0_0x0.d[2][0] = 0.0;
  mID.field0_0x0.d[2][1] = 1.0;
  mID.field0_0x0.d[3][1] = 0.0;
  mID.field0_0x0.d[3][0] = 1.0;
                    /* end of inlined section */
  fVar22 = 0.0;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&mID,portal,puVar21,
             local_cc,0x35f4b0);
  Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
  pEVar13 = prc->__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  sVar1 = *(short *)&pEVar13[1].SpriteList;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  mID.field0_0x0.d[0][0] = 0.179;
  mID.field0_0x0.d[0][1] = 0.833;
  mID.field0_0x0.d[1][0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  mID.field0_0x0.d[1][1] = 0.843;
  mID.field0_0x0.d[2][1] = 1.0;
  mID.field0_0x0.d[3][0] = 1.0;
  local_c8[1].field0_0x0.d[0] = 1.0;
  (local_c8->field0_0x0).d[2] = 1.0;
  (local_c8->field0_0x0).d[1] = 1.0;
  vPosIn.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
  mID.field0_0x0.d[2][0] = fVar22;
  mID.field0_0x0.d[3][1] = fVar22;
  (*(code *)pEVar13[1].DisplayList)
            (fVar22,(int)&prc->m_pdl + (int)sVar1,&mID,portal,puVar21,local_cc,local_c8);
  Select__8ERShaderP3ERCi(this->m_pDPadBackgroundShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  mID.field0_0x0.d[0][0] = -0.22;
  mID.field0_0x0.d[0][1] = 0.747891;
  mID.field0_0x0.d[1][1] = 1.0;
  mID.field0_0x0.d[1][0] = 1.0;
  mID.field0_0x0.d[2][3] = 1.0;
  mID.field0_0x0.d[2][2] = 1.0;
  mID.field0_0x0.d[2][1] = 1.0;
  mID.field0_0x0.d[2][0] = 1.0;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (fVar22,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&mID,portal,
             puVar21);
  if (*(int *)&this->m_bUseAcceptPrompt == 0) {
    Draw__10EPromptBarP3ERC(&this->m_SelectPromptBar,prc);
  }
  else {
    Draw__10EPromptBarP3ERC(&this->m_AcceptPromptBar,prc);
  }
  Draw__13EUIObjectNodeP3ERC(&this->field0_0x0,prc);
  if (this->m_nCurrentMenu == 6) {
    Select__6ERFontP3ERC(_globals.m_pFont,prc);
    SetSize__6ERFontffb(_globals.m_pFont,16.0,1.0,true);
    uVar10 = _WHITE.field0_0x0.d[3];
    uVar9 = _WHITE.field0_0x0.d[2];
    uVar8 = _WHITE.field0_0x0._0_8_;
    pEVar7 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar7->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar8 >> 0x20);
    (pEVar7->m_vColor).field0_0x0.d[2] = uVar9;
    (pEVar7->m_vColor).field0_0x0.d[3] = uVar10;
    psVar17 = GetCreateASimString__7EGlobalPCc(&_globals,"last");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    mID.field0_0x0.d[1][0] = 0.5;
    mID.field0_0x0.d[1][1] = 0.142;
    mID.field0_0x0.d[0][0] = 0.5;
    mID.field0_0x0.d[0][1] = 0.142;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,psVar17,true,(EVec2 *)portal,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0
              );
                    /* end of inlined section */
    pEVar20 = this->m_pKeyboard;
  }
  else if (this->m_nCurrentMenu == 7) {
    Select__6ERFontP3ERC(_globals.m_pFont,prc);
    SetSize__6ERFontffb(_globals.m_pFont,16.0,1.0,true);
    uVar10 = _WHITE.field0_0x0.d[3];
    uVar9 = _WHITE.field0_0x0.d[2];
    uVar8 = _WHITE.field0_0x0._0_8_;
    pEVar7 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar7->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar8 >> 0x20);
    (pEVar7->m_vColor).field0_0x0.d[2] = uVar9;
    (pEVar7->m_vColor).field0_0x0.d[3] = uVar10;
    psVar17 = GetCreateASimString__7EGlobalPCc(&_globals,"first");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    mID.field0_0x0.d[1][0] = 0.5;
    mID.field0_0x0.d[1][1] = 0.142;
    mID.field0_0x0.d[0][0] = 0.5;
    mID.field0_0x0.d[0][1] = 0.142;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,psVar17,true,(EVec2 *)portal,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0
              );
                    /* end of inlined section */
    pEVar20 = this->m_pKeyboard;
  }
  else {
    pEVar20 = this->m_pKeyboard;
  }
  if (pEVar20 != (ETextEntryDialog *)0x0) {
    pEVar4 = (pEVar20->field0_0x0).__vtable;
    (*(code *)pEVar4->Message)((int)pEVar20->m_szText + *(short *)&pEVar4->SetBoxDims + -0x3e,prc);
  }
  return;
}

void ECharedPanel::Init() {
	int i;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EGraphics *this;
	float scaler;
	float scaler;
	
  EUIIconDef *pEVar1;
  int *piVar2;
  EUIVirtualCtrl **ppEVar3;
  undefined *puVar4;
  short sVar5;
  EUIIconDef__vtable *pEVar6;
  EUIObjectNode__vtable *pEVar7;
  uint uVar8;
  ulong *puVar9;
  EUIStaticTextIcon *pEVar10;
  ERModel *pEVar11;
  ECharedSim **ppEVar12;
  ERShader *pEVar13;
  short *psVar14;
  ERLevel *pEVar15;
  int iVar16;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  EUIPrompt *this_00;
  undefined8 unaff_s3;
  EUIIcon *this_01;
  undefined8 unaff_s4;
  EUIIcon *this_02;
  undefined8 unaff_s5;
  EUIIcon *this_03;
  undefined8 unaff_s6;
  EUIIcon *this_04;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  __vtbl_ptr_type *local_12c;
  undefined4 local_128;
  undefined4 local_124;
  EUIIconDef__vtable *local_120;
  __vtbl_ptr_type *local_11c;
  EUIIconDef__vtable *local_110;
  EUIIconDef__vtable *local_100;
  EUIPrompt *local_f0;
  EPromptBar *local_ec;
  EUIPrompt *local_e8;
  EUIPrompt *local_e4;
  EPromptBar *local_e0;
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
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
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
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  (this->m_vMirror).field0_0x0.d[0] = -0.550979;
  (this->m_vMirror).field0_0x0.d[1] = 0.852105;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  (this->m_vMirror).field0_0x0.d[2] = 0.175;
  pEVar11 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x7f701308,(EFile *)0x0,0);
                    /* end of inlined section */
  *(undefined4 *)&this->m_bInStoryMode = 0;
  *(undefined4 *)&this->m_bDrawCASObjects = 0;
  *(undefined4 *)&this->m_bEnableTitleMenu = 0;
  *(undefined4 *)&this->m_bDeleteSelectMenu = 0;
  *(undefined4 *)&this->m_bUseAcceptPrompt = 0;
  this->m_pSelectMenu = (EUIMenu *)0x0;
  this->m_pKeyboard = (ETextEntryDialog *)0x0;
  this->m_nNextCamPos = 0;
  this->m_nNumFamilyMembers = '\0';
  this->m_pMirror = pEVar11;
  this->m_fSimRotation = 3.0;
  DeactivateEditDelete__16ECharedTitleMenu(&this->m_TitleMenu);
  ppEVar12 = this->m_pFamilyMembers;
  iVar16 = 7;
  do {
    ppEVar12[-0xd26] = (ECharedSim *)0x0;
    iVar16 = iVar16 + -1;
    *ppEVar12 = (ECharedSim *)0x0;
    ppEVar12 = ppEVar12 + 1;
  } while (-1 < iVar16);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_134 = 0x3f800000;
  _7EUIIcon_m_vColors[0].field0_0x0._8_4_ = 0;
  _7EUIIcon_m_vColors[0].field0_0x0._12_4_ = 0x3f800000;
  local_138 = 0x3f800000;
  local_13c = 1.0;
  local_140 = 1.0;
  _7EUIIcon_m_vColors[0].field0_0x0._0_4_ = 0;
  _7EUIIcon_m_vColors[0].field0_0x0._4_4_ = 0;
  this_01 = &this->m_SelectXIcon;
  _7EUIIcon_m_vColors[1].field0_0x0._8_4_ = 0x3f800000;
  _7EUIIcon_m_vColors[1].field0_0x0._12_4_ = 0x3f800000;
  this_02 = &this->m_SelectTriIcon;
                    /* end of inlined section */
  this_00 = this->m_SelectPrompts;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  _7EUIIcon_m_vColors[1].field0_0x0._0_4_ = 0x3f800000;
  _7EUIIcon_m_vColors[1].field0_0x0._4_4_ = 0x3f800000;
  this_03 = &this->m_AcceptXIcon;
                    /* end of inlined section */
  local_f0 = this->m_SelectPrompts + 1;
  this_04 = &this->m_AcceptTriIcon;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar13 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  fVar19 = 23.0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pBlankShdr = pEVar13;
  pEVar13 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
                    /* end of inlined section */
  local_ec = &this->m_SelectPromptBar;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pMenuBevelShdr = pEVar13;
  pEVar13 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2d14ac7d,(EFile *)0x0,0);
  this->m_pDPadBackgroundShdr = pEVar13;
  pEVar13 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xab5fdccc,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMirrorShdr = pEVar13;
  SetupDpadWin__12ECharedPanel(this);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_130 = 1;
  local_12c = (__vtbl_ptr_type *)0xffffffff;
                    /* end of inlined section */
  local_e8 = this->m_AcceptPrompts;
  local_e0 = &this->m_AcceptPromptBar;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_128 = 0;
                    /* end of inlined section */
  local_e4 = this->m_AcceptPrompts + 1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_124 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_120 = (EUIIconDef__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar6 = (this->m_SelectXIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_SelectXIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_SelectXIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_SelectXIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar2 = &(this->m_SelectXIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_SelectXIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_SelectXIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_SelectXIcon).m_def.__vtable = pEVar6;
  local_11c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar16 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SelectXIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_140 = 0.05;
                    /* end of inlined section */
  local_13c = 32.0 / (float)iVar16;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SelectXIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_13c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_01,-0x3e263a13);
  InitInActiveShader__7EUIIconi(this_01,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_134 = 1;
  local_138 = 0;
  local_130 = 0;
  local_110 = (this->m_SelectTriIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_SelectTriIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_SelectTriIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_SelectTriIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar2 = &(this->m_SelectTriIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_SelectTriIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_SelectTriIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_SelectTriIcon).m_def.__vtable = local_110;
  local_12c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar16 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SelectTriIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_140 = 0.05;
                    /* end of inlined section */
  local_13c = 32.0 / (float)iVar16;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SelectTriIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_13c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_02,0x2ccf500a);
  InitInActiveShader__7EUIIconi(this_02,0x2ccf500a);
  pEVar7 = this->m_SelectPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  psVar14 = GetCreateASimString__7EGlobalPCc(&_globals,"select");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(this_00->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,
             psVar14,0x20);
  AddIcon__9EUIPromptP7EUIIcon(this_00,this_01);
  pEVar7 = this->m_SelectPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  pEVar10 = &local_f0->field0_0x0;
  psVar14 = GetCreateASimString__7EGlobalPCc(&_globals,"cancel");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(pEVar10->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar14,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_f0,this_02);
  Init__10EPromptBar(local_ec);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  fVar18 = (_13EUIObjectNode_SAFE_RIGHT + 0.178) * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_13c = _13EUIObjectNode_SAFE_BOTTOM - fVar19 / (float)_pGfx->m_yscreen;
  fVar17 = _13EUIObjectNode_SAFE_BOTTOM;
  local_140 = fVar18;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_ec,this_00,2,(EVec2 *)&local_140);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_138 = 0;
  local_134 = 1;
  local_130 = 0;
  local_100 = (this->m_AcceptXIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_AcceptXIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_AcceptXIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_AcceptXIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar2 = &(this->m_AcceptXIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_AcceptXIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_AcceptXIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_AcceptXIcon).m_def.__vtable = local_100;
  local_12c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar16 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_AcceptXIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_140 = 0.05;
                    /* end of inlined section */
  local_13c = 32.0 / (float)iVar16;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_AcceptXIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_13c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_03,-0x3e263a13);
  InitInActiveShader__7EUIIconi(this_03,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_134 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_138 = 0;
  local_130 = 0;
  local_120 = (this->m_AcceptTriIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_AcceptTriIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_AcceptTriIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_AcceptTriIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar2 = &(this->m_AcceptTriIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_AcceptTriIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_AcceptTriIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_AcceptTriIcon).m_def.__vtable = local_120;
  local_12c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar16 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_AcceptTriIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_140 = 0.05;
                    /* end of inlined section */
  local_13c = 32.0 / (float)iVar16;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_AcceptTriIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_13c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_04,0x2ccf500a);
  InitInActiveShader__7EUIIconi(this_04,0x2ccf500a);
  pEVar7 = this->m_AcceptPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  pEVar10 = &local_e8->field0_0x0;
  psVar14 = GetCreateASimString__7EGlobalPCc(&_globals,"accept");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(pEVar10->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar14,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_e8,this_03);
  pEVar7 = this->m_AcceptPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  pEVar10 = &local_e4->field0_0x0;
  psVar14 = GetCreateASimString__7EGlobalPCc(&_globals,"cancel");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(pEVar10->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar14,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_e4,this_04);
  Init__10EPromptBar(local_e0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_13c = fVar17 - fVar19 / (float)_pGfx->m_yscreen;
  local_140 = fVar18;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_e0,local_e8,2,(EVec2 *)&local_140);
  pEVar7 = (this->field0_0x0).__vtable;
  (*(code *)pEVar7[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar7[1].OnStickRepeat + -0x4c,&this->m_TitleMenu)
  ;
  pEVar7 = (this->field0_0x0).__vtable;
  (*(code *)pEVar7[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar7[1].OnStickRepeat + -0x4c,&this->m_SideMenu);
  puVar4 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x4030c0d7bfa54fdfU >> (7 - uVar8) * 8;
  uVar8 = (uint)&this->m_vEye & 7;
  puVar9 = (ulong *)((int)&this->m_vEye - uVar8);
  *puVar9 = 0x4030c0d7bfa54fdf << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_vEye).field0_0x0.d[2] = 2.81667;
  iVar16 = _iVideoMode;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_140 = 1.2434;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_13c = -8.29873;
  local_138 = 0x3f93d70a;
  puVar4 = (undefined *)((int)&(this->m_vCameraTarget).field0_0x0 + 7);
                    /* end of inlined section */
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xc104c7993f9f27bbU >> (7 - uVar8) * 8;
  uVar8 = (uint)&this->m_vCameraTarget & 7;
  puVar9 = (ulong *)((int)&this->m_vCameraTarget - uVar8);
  *puVar9 = -0x3efb3866c060d845 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_vCameraTarget).field0_0x0.d[2] = 1.155;
  this->m_nCameraStatus = '-';
  this->m_fCameraPos = 1.0;
  if (iVar16 == 0) {
    fVar17 = 33.0;
    this->m_fCharFOV = 28.091;
  }
  else {
    fVar17 = 28.0;
    this->m_fCharFOV = 24.8;
  }
  this->m_fFamFOV = fVar17;
                    /* inlined from /eor/src2/engine/level/e_levelman.h */
                    /* end of inlined section */
  this->m_fFOV = this->m_fFamFOV;
                    /* inlined from /eor/src2/engine/level/e_levelman.h */
  pEVar15 = (ERLevel *)
            AddRef__16EResourceManagerUiP5EFilei(&_levelman.field0_0x0,0xf56854ce,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pRoom = pEVar15;
                    /* inlined from /eor/src2/engine/level/e_levelman.h */
  pEVar15 = (ERLevel *)
            AddRef__16EResourceManagerUiP5EFilei(&_levelman.field0_0x0,0x6f895fc3,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_nCurrentMenu = 0;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
  this->m_pCustomSim = (ECharedSim *)0x0;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
  this->m_nCurSim = 0;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
  this->m_nThiefAnimationID[0] = 0xe15db6f4;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
  this->m_nThiefAnimationID[1] = 0x8e1f9973;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
  this->m_nThiefAnimationID[2] = 0x23b01681;
  this->m_nThiefAnimationID[3] = 0x3427987b;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  this->m_pMirrorRoom = pEVar15;
  pEVar11 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0xe15db6f4,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pThief = pEVar11;
  Init__15EAnimControllerUi(&this->m_ACThief,0x38eb076e);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
  (this->m_ACThief).m_modelScaler = this->m_pThief->m_scaler;
                    /* end of inlined section */
  SetTrackAnim__15EAnimControlleriUi(&this->m_ACThief,1,this->m_nThiefAnimationID[0]);
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar11 = (ERModel *)
            AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x21995ece,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pThiefVase = pEVar11;
  Init__15EAnimControllerUi(&this->m_ACThiefVase,0x6264d711);
                    /* inlined from /eor/src2/engine/animation/e_animcontroller.h */
                    /* end of inlined section */
                    /* end of inlined section */
  (this->m_ACThiefVase).m_modelScaler = this->m_pThiefVase->m_scaler;
  SetTrackAnim__15EAnimControlleriUi(&this->m_ACThiefVase,1,0x21995ece);
  this->m_nCurrentThiefAnim = '\0';
  this->m_fThiefTime = 0.0;
  return;
}

void ECharedPanel::StartStoryEdit(EFamilyConstructData *pNewFamily) {
	int i;
	ECharedSkin *pSkin;
	
  undefined *puVar1;
  char cVar2;
  EUIObjectNode__vtable *pEVar3;
  uint uVar4;
  ulong *puVar5;
  EFamilyConstructData *pEVar6;
  ECharedSim *pEVar7;
  ETextEntryDialog *pEVar8;
  short *pTitle;
  ECharedSim **ppEVar9;
  int iVar10;
  ECharedSideMenu *this_00;
  int iVar11;
  
  iVar11 = 0;
  ppEVar9 = this->m_pFamilyMembers;
  *(undefined4 *)&this->m_bDrawCASObjects = 0;
  iVar10 = 7;
  *(undefined4 *)&this->m_bUseAcceptPrompt = 0;
  this->m_nAlteredSimIndex = '\0';
  this->m_nDoneState = 0;
  this->m_nNumFamilyMembers = '\0';
  *(undefined4 *)&this->m_bInStoryMode = 1;
  this->m_pNewFamily = pNewFamily;
  SetBackgroundColor__7EGlobal(&_globals);
  do {
    pEVar7 = *ppEVar9;
    if (pEVar7 == (ECharedSim *)0x0) {
      pEVar6 = this->m_pNewFamily;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
      CleanUp__10ECharedSim(pEVar7);
      ___15EAnimController(&pEVar7->m_ac,2);
      _memmanFree__FPv(pEVar7);
                    /* end of inlined section */
      *ppEVar9 = (ECharedSim *)0x0;
      pEVar6 = this->m_pNewFamily;
    }
    ppEVar9 = ppEVar9 + 1;
    iVar10 = iVar10 + -1;
    *(undefined4 *)((int)pEVar6->CustomData[0].Name + iVar11 + 0x40) = 0;
    iVar11 = iVar11 + 0xc4;
  } while (-1 < iVar10);
  pEVar7 = this->m_pCustomSim;
  if (pEVar7 != (ECharedSim *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
    CleanUp__10ECharedSim(pEVar7);
    ___15EAnimController(&pEVar7->m_ac,2);
    _memmanFree__FPv(pEVar7);
                    /* end of inlined section */
  }
                    /* end of inlined section */
  pEVar7 = (ECharedSim *)__builtin_new(0x100);
  this_00 = &this->m_SideMenu;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
  __15EAnimController(&pEVar7->m_ac);
  __15CustomCharacter(&pEVar7->m_character);
  __15CustomCharacter(&pEVar7->m_oldCharacter);
  Init__10ECharedSimbT1P11ECharedSkin(pEVar7,true,true,&this->m_customSkin);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  this->m_pCustomSim = pEVar7;
  this->m_nCurSim = 0;
  puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0xc0f3bf5540880323U >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_vEye & 7;
  puVar5 = (ulong *)((int)&this->m_vEye - uVar4);
  *puVar5 = -0x3f0c40aabf77fcdd << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->m_vEye).field0_0x0.d[2] = 1.116668;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)&pEVar7->m_bPlayAllAnims = 1;
  puVar1 = (undefined *)((int)&(this->m_vCameraTarget).field0_0x0 + 7);
                    /* end of inlined section */
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0x3f051687beb8b418U >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_vCameraTarget & 7;
  puVar5 = (ulong *)((int)&this->m_vCameraTarget - uVar4);
  *puVar5 = 0x3f051687beb8b418 << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->m_vCameraTarget).field0_0x0.d[2] = 1.0;
  this->m_nCameraStatus = '(';
  cVar2 = this->m_nAlteredSimIndex;
  pEVar6 = this->m_pNewFamily;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
  *(undefined4 *)&pEVar7->m_bInStoryMode = 1;
                    /* end of inlined section */
  ResetMenus__15ECharedSideMenuPUs(this_00,pEVar6->CustomData[cVar2].Name);
  DisableAgeEdit__15ECharedSideMenu(this_00);
  EnableGenderEdit__15ECharedSideMenu(this_00);
  EnablePersonalityMenu__16ECharedTitleMenu(&this->m_TitleMenu);
  ActivateCreateASimMenu__16ECharedTitleMenu(&this->m_TitleMenu);
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
  this->m_fFOV = this->m_fCharFOV;
  pEVar8 = (ETextEntryDialog *)_memmanAlloc__FUiUi(0x1c0,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/textentry.h */
                    /* end of inlined section */
  pTitle = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"family_name_title");
  pEVar8 = __16ETextEntryDialogPCUsUifib(pEVar8,pTitle,0xe,0.15,0,false);
  this->m_pKeyboard = pEVar8;
  pEVar3 = (this->field0_0x0).__vtable;
  this->m_nCurrentMenu = 6;
  *(undefined4 *)&this->m_bUseAcceptPrompt = 0;
  (*(code *)pEVar3[1].EUIObjectNode)
            ((int)this->m_dpadIcons + *(short *)(pEVar3 + 1) + -0x4c,this,0x3f);
  pEVar3 = (this->field0_0x0).__vtable;
  (*(code *)pEVar3[1].EUIObjectNode)
            ((int)this->m_dpadIcons + *(short *)(pEVar3 + 1) + -0x4c,this,0x40);
  return;
}

void ECharedPanel::StartFamilyEdit(EFamilyConstructData *pNewFamily) {
	int i;
	EVec3 vSimPos;
	ENeighborhoodCustomChar *pDescription;
	bool bIn;
	ECharedSim *this;
	EVec3 vNewPos;
}

void ECharedPanel::Message(EUIObjectNode *pChild, u32 messId) {
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	u32 i;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSkin *pSkin;
	bool bIn;
	ECharedSkin *pSkin;
	bool bIn;
	ECharedSkin *pSkin;
	bool bIn;
	ECharedSkin *pSkin;
	bool bIn;
	ECharedSkin *pSkin;
	bool bIn;
	ECharedSkin *pSkin;
	bool bIn;
	ECharedSkin *pSkin;
	bool bIn;
	ECharedSkin *pSkin;
	bool bIn;
	int i;
	int i;
	int x;
	int index;
	EVec2 vPosOne;
	EVec2 vPosTwo;
	EVec3 &v;
	EVec3 vNewPos;
	ECharedDiamondMenuItem *this;
	int nNewIndex;
	EUIMenu *this;
	EUIMenu *this;
	EUIMenu *this;
	ENeighborhoodCustomChar *pDescription;
	ECharedSkin *pSkin;
	bool bIn;
	int i;
	int i;
	int x;
	int index;
	EVec2 vPosOne;
	EVec2 vPosTwo;
	EVec3 &v;
	EVec3 vNewPos;
	ECharedDiamondMenuItem *this;
	int nNewIndex;
	EUIMenu *this;
	EUIMenu *this;
	int nSimIndex;
	EUIMenu *this;
	int i;
	ENeighborhoodCustomChar *pData;
	ECharedSim *this;
	EVec2 vSimPos;
	ENeighborhoodCustomChar *pData;
	ECharedSim *this;
	ENeighborhoodCustomChar *pDescription;
	ECharedSkin *pSkin;
	ECharedSim *this;
	bool bIn;
	ECharedSim *this;
	EVec3 vNewPos;
	
  EVec2 vPosOne;
  EVec3 vNewPos;
  EVec2 vPosTwo;
  
  if (messId < 0x43) {
                    /* WARNING: Could not recover jumptable at 0x00106df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_003a8640)[messId])((&PTR_LAB_003a8640)[messId],pChild);
    return;
  }
  return;
}

int ECharedPanel::UpdatePanel() {
  EUIObjectNode__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1->SetBoxDims)((int)this->m_dpadIcons + *(short *)&pEVar1->SetPos + -0x4c);
  return this->m_nDoneState;
}

void ECharedPanel::CleanUp() {
	int i;
	
  ECharedSim *pEVar1;
  ETextEntryDialog *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  ERShader *pEVar4;
  ERLevel *pEVar5;
  ERModel *pEVar6;
  EUIIcon *pEVar7;
  ECharedSim **ppEVar8;
  int iVar9;
  
  if (this->m_pBlankShdr != (ERShader *)0x0) {
    pEVar3 = (this->field0_0x0).__vtable;
    iVar9 = 7;
    (*(code *)pEVar3[1].RemoveChild)
              ((int)this->m_dpadIcons + *(short *)&pEVar3[1].AddChild + -0x4c,&this->m_TitleMenu);
    pEVar3 = (this->field0_0x0).__vtable;
    (*(code *)pEVar3[1].RemoveChild)
              ((int)this->m_dpadIcons + *(short *)&pEVar3[1].AddChild + -0x4c,&this->m_SideMenu);
    Reset__10EPromptBar(&this->m_SelectPromptBar);
    Reset__10EPromptBar(&this->m_AcceptPromptBar);
    RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_SelectPrompts);
    RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_AcceptPrompts);
    RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_SelectPrompts + 1));
    RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_AcceptPrompts + 1));
    pEVar3 = (this->field0_0x0).__vtable;
    pEVar7 = this->m_dpadIcons;
    while( true ) {
      iVar9 = iVar9 + -1;
      (*(code *)pEVar3[1].RemoveChild)
                ((int)this->m_dpadIcons + *(short *)&pEVar3[1].AddChild + -0x4c,pEVar7);
      if (iVar9 < 0) break;
      pEVar3 = (this->field0_0x0).__vtable;
      pEVar7 = pEVar7 + 1;
    }
  }
  ppEVar8 = this->m_pFamilyMembers;
  while (this->m_pBlankShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pBlankShdr->field0_0x0);
    this->m_pBlankShdr = (ERShader *)0x0;
  }
  pEVar4 = this->m_pMenuBevelShdr;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pMenuBevelShdr = (ERShader *)0x0;
    pEVar4 = this->m_pMenuBevelShdr;
  }
  pEVar4 = this->m_pDPadBackgroundShdr;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pDPadBackgroundShdr = (ERShader *)0x0;
    pEVar4 = this->m_pDPadBackgroundShdr;
  }
  pEVar4 = this->m_pMirrorShdr;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pMirrorShdr = (ERShader *)0x0;
    pEVar4 = this->m_pMirrorShdr;
  }
  pEVar5 = this->m_pRoom;
  while (pEVar5 != (ERLevel *)0x0) {
    DelRef__9EResource(&pEVar5->field0_0x0);
    this->m_pRoom = (ERLevel *)0x0;
    pEVar5 = this->m_pRoom;
  }
  pEVar5 = this->m_pMirrorRoom;
  while (pEVar5 != (ERLevel *)0x0) {
    DelRef__9EResource(&pEVar5->field0_0x0);
    this->m_pMirrorRoom = (ERLevel *)0x0;
    pEVar5 = this->m_pMirrorRoom;
  }
  pEVar1 = this->m_pCustomSim;
  if (pEVar1 == (ECharedSim *)0x0) {
    this->m_pCustomSim = (ECharedSim *)0x0;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
    CleanUp__10ECharedSim(pEVar1);
    ___15EAnimController(&pEVar1->m_ac,2);
    _memmanFree__FPv(pEVar1);
                    /* end of inlined section */
    this->m_pCustomSim = (ECharedSim *)0x0;
  }
  iVar9 = 7;
  do {
    pEVar1 = *ppEVar8;
    if (pEVar1 != (ECharedSim *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
      CleanUp__10ECharedSim(pEVar1);
      ___15EAnimController(&pEVar1->m_ac,2);
      _memmanFree__FPv(pEVar1);
                    /* end of inlined section */
      *ppEVar8 = (ECharedSim *)0x0;
    }
    iVar9 = iVar9 + -1;
    ppEVar8 = ppEVar8 + 1;
  } while (-1 < iVar9);
  while (this->m_pThief != (ERModel *)0x0) {
    DelRef__9EResource(&this->m_pThief->field0_0x0);
    this->m_pThief = (ERModel *)0x0;
  }
  pEVar6 = this->m_pThiefVase;
  while (pEVar6 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar6->field0_0x0);
    this->m_pThiefVase = (ERModel *)0x0;
    pEVar6 = this->m_pThiefVase;
  }
  pEVar6 = this->m_pMirror;
  while (pEVar6 != (ERModel *)0x0) {
    DelRef__9EResource(&pEVar6->field0_0x0);
    this->m_pMirror = (ERModel *)0x0;
    pEVar6 = this->m_pMirror;
  }
  pEVar2 = this->m_pKeyboard;
  this->m_nDoneState = 0;
  if (pEVar2 != (ETextEntryDialog *)0x0) {
    pEVar3 = (pEVar2->field0_0x0).__vtable;
    (*(code *)pEVar3->Draw)((int)pEVar2->m_szText + *(short *)&pEVar3->Update + -0x3e,3);
    this->m_pKeyboard = (ETextEntryDialog *)0x0;
  }
  return;
}

void ECharedPanel::SetupDpadWin() {
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  EUIIconDef__vtable *pEVar5;
  EUIObjectNode__vtable *pEVar6;
  uint uVar7;
  ulong *puVar8;
  undefined8 unaff_s0;
  EUIIcon *this_00;
  undefined8 unaff_s1;
  EUIIcon *this_01;
  undefined8 unaff_s2;
  EUIIcon *this_02;
  undefined8 unaff_s3;
  EUIIcon *this_03;
  undefined8 unaff_s4;
  EUIIcon *this_04;
  undefined8 unaff_s5;
  EUIIcon *this_05;
  undefined8 unaff_s6;
  EUIIcon *this_06;
  undefined8 unaff_s7;
  EUIIcon *this_07;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  char *pcVar9;
  char *pcVar10;
  undefined4 uVar11;
  EString local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  __vtbl_ptr_type *local_13c;
  EUIIconDef__vtable *local_130;
  EUIIconDef__vtable *local_120;
  EUIIconDef__vtable *local_110;
  EUIIconDef__vtable *local_100;
  EUIIconDef__vtable *local_f0;
  EUIIconDef__vtable *local_e0;
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
  
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  this_07 = this->m_dpadIcons + 7;
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  this_06 = this->m_dpadIcons + 6;
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  this_05 = this->m_dpadIcons + 5;
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  this_04 = this->m_dpadIcons + 4;
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  this_03 = this->m_dpadIcons + 3;
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  this_02 = this->m_dpadIcons + 2;
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  this_01 = this->m_dpadIcons + 1;
  this_00 = this->m_dpadIcons;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pcVar9 = (char *)0x3d89374c;
  pEVar5 = this->m_dpadIcons[0].m_def.__vtable;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[0].m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &this->m_dpadIcons[0].m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[0].m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &this->m_dpadIcons[0].m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[0].m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &this->m_dpadIcons[0].m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  this->m_dpadIcons[0].m_def.__vtable = pEVar5;
  pcVar10 = (char *)0x3d0b4398;
  local_120 = this->m_dpadIcons[1].m_def.__vtable;
  uVar11 = 0x3f620c4a;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[1].m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &this->m_dpadIcons[1].m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[1].m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &this->m_dpadIcons[1].m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[1].m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &this->m_dpadIcons[1].m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  this->m_dpadIcons[1].m_def.__vtable = local_120;
  local_110 = this->m_dpadIcons[2].m_def.__vtable;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[2].m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &this->m_dpadIcons[2].m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[2].m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &this->m_dpadIcons[2].m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[2].m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &this->m_dpadIcons[2].m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  this->m_dpadIcons[2].m_def.__vtable = local_110;
  local_100 = this->m_dpadIcons[3].m_def.__vtable;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[3].m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &this->m_dpadIcons[3].m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[3].m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &this->m_dpadIcons[3].m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[3].m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &this->m_dpadIcons[3].m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  this->m_dpadIcons[3].m_def.__vtable = local_100;
  local_f0 = this->m_dpadIcons[4].m_def.__vtable;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[4].m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &this->m_dpadIcons[4].m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[4].m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &this->m_dpadIcons[4].m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[4].m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &this->m_dpadIcons[4].m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  this->m_dpadIcons[4].m_def.__vtable = local_f0;
  local_e0 = this->m_dpadIcons[5].m_def.__vtable;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[5].m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &this->m_dpadIcons[5].m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[5].m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &this->m_dpadIcons[5].m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[5].m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &this->m_dpadIcons[5].m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  this->m_dpadIcons[5].m_def.__vtable = local_e0;
  pEVar5 = this->m_dpadIcons[6].m_def.__vtable;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[6].m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &this->m_dpadIcons[6].m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[6].m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &this->m_dpadIcons[6].m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[6].m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &this->m_dpadIcons[6].m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  this->m_dpadIcons[6].m_def.__vtable = pEVar5;
  local_144 = 1;
  local_150.m_p = &pGifTag1;
  local_14c = 0xffffffff;
  local_148 = 0;
  local_140 = 0;
  local_130 = this->m_dpadIcons[7].m_def.__vtable;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[7].m_def.m_trigger + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar2 = &this->m_dpadIcons[7].m_def;
  uVar7 = (uint)pEVar2 & 7;
  puVar8 = (ulong *)((int)pEVar2 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[7].m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar3 = &this->m_dpadIcons[7].m_def.m_selColorIdx;
  uVar7 = (uint)piVar3 & 7;
  puVar8 = (ulong *)((int)piVar3 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar1 = (undefined *)((int)&this->m_dpadIcons[7].m_def.__vtable + 3);
  uVar7 = (uint)puVar1 & 7;
  puVar8 = (ulong *)(puVar1 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar4 = &this->m_dpadIcons[7].m_def.m_pCtrl;
  uVar7 = (uint)ppEVar4 & 7;
  puVar8 = (ulong *)((int)ppEVar4 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  this->m_dpadIcons[7].m_def.__vtable = local_130;
                    /* end of inlined section */
  local_13c = _vt_10EUIIconDef;
  InitActiveShader__7EUIIconi(this_00,0x32272593);
  InitActiveShader__7EUIIconi(this_02,-0x5297d65a);
  InitActiveShader__7EUIIconi(this_01,-0xc504a5b);
  InitActiveShader__7EUIIconi(this_03,-0x340fa10b);
  InitInActiveShader__7EUIIconi(this_00,0x32272593);
  InitInActiveShader__7EUIIconi(this_02,-0x5297d65a);
  InitInActiveShader__7EUIIconi(this_01,-0xc504a5b);
  InitInActiveShader__7EUIIconi(this_03,-0x340fa10b);
  InitActiveShader__7EUIIconi(this_04,0x29a47441);
  InitActiveShader__7EUIIconi(this_06,0x20af4da);
  InitActiveShader__7EUIIconi(this_05,-0x554c1591);
  InitActiveShader__7EUIIconi(this_07,0x64928389);
  InitInActiveShader__7EUIIconi(this_04,0x29a47441);
  InitInActiveShader__7EUIIconi(this_06,0x20af4da);
  InitInActiveShader__7EUIIconi(this_05,-0x554c1591);
  InitInActiveShader__7EUIIconi(this_07,0x64928389);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  MakeCopy__7EStringPCc(&local_150,"m_dpadIcons[ PAD_UP    ]");
  Deallocate__7EStringPc(&local_150,local_150.m_p);
  MakeCopy__7EStringPCc(&local_150,"m_dpadIcons[ PAD_LEFT  ]");
  Deallocate__7EStringPc(&local_150,local_150.m_p);
  MakeCopy__7EStringPCc(&local_150,"m_dpadIcons[ PAD_RIGHT ]");
  Deallocate__7EStringPc(&local_150,local_150.m_p);
  MakeCopy__7EStringPCc(&local_150,"m_dpadIcons[ PAD_DOWN  ]");
  Deallocate__7EStringPc(&local_150,local_150.m_p);
  MakeCopy__7EStringPCc(&local_150,"m_dpadIcons[ BLANK_UP    ]");
  Deallocate__7EStringPc(&local_150,local_150.m_p);
  MakeCopy__7EStringPCc(&local_150,"m_dpadIcons[ BLANK_LEFT  ]");
  Deallocate__7EStringPc(&local_150,local_150.m_p);
  MakeCopy__7EStringPCc(&local_150,"m_dpadIcons[ BLANK_RIGHT ]");
  Deallocate__7EStringPc(&local_150,local_150.m_p);
  MakeCopy__7EStringPCc(&local_150,"m_dpadIcons[ BLANK_DOWN  ]");
  Deallocate__7EStringPc(&local_150,local_150.m_p);
                    /* end of inlined section */
  pEVar6 = this->m_dpadIcons[0].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_148 = 0x3f4b020c;
  local_14c = 0;
                    /* end of inlined section */
  local_150.m_p = pcVar9;
  (*(code *)pEVar6->OnButtonRepeat)
            ((int)this_00->m_maxBackShdrSize[-0xc] + *(short *)&pEVar6->StateChanged + 4,&local_150)
  ;
  pEVar6 = this->m_dpadIcons[2].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_148 = 0x3f5851ec;
  local_14c = 0;
                    /* end of inlined section */
  local_150.m_p = pcVar10;
  (*(code *)pEVar6->OnButtonRepeat)
            ((int)this_02->m_maxBackShdrSize[-0xc] + *(short *)&pEVar6->StateChanged + 4,&local_150)
  ;
  pEVar6 = this->m_dpadIcons[1].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_150.m_p = (char *)0x3dbc6a80;
  local_148 = 0x3f5851ec;
  local_14c = 0;
                    /* end of inlined section */
  (*(code *)pEVar6->OnButtonRepeat)
            ((int)this_01->m_maxBackShdrSize[-0xc] + *(short *)&pEVar6->StateChanged + 4,&local_150)
  ;
  pEVar6 = this->m_dpadIcons[3].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_14c = 0;
                    /* end of inlined section */
  local_150.m_p = pcVar9;
  local_148 = uVar11;
  (*(code *)pEVar6->OnButtonRepeat)
            ((int)this_03->m_maxBackShdrSize[-0xc] + *(short *)&pEVar6->StateChanged + 4,&local_150)
  ;
  pEVar6 = this->m_dpadIcons[4].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_148 = 0x3f4b020c;
  local_14c = 0;
                    /* end of inlined section */
  local_150.m_p = pcVar9;
  (*(code *)pEVar6->OnButtonRepeat)
            ((int)this_04->m_maxBackShdrSize[-0xc] + *(short *)&pEVar6->StateChanged + 4,&local_150)
  ;
  pEVar6 = this->m_dpadIcons[6].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_148 = 0x3f5851ec;
  local_14c = 0;
                    /* end of inlined section */
  local_150.m_p = pcVar10;
  (*(code *)pEVar6->OnButtonRepeat)
            ((int)this_06->m_maxBackShdrSize[-0xc] + *(short *)&pEVar6->StateChanged + 4,&local_150)
  ;
  pEVar6 = this->m_dpadIcons[5].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_150.m_p = (char *)0x3dbc6a80;
  local_148 = 0x3f5851ec;
  local_14c = 0;
                    /* end of inlined section */
  (*(code *)pEVar6->OnButtonRepeat)
            ((int)this_05->m_maxBackShdrSize[-0xc] + *(short *)&pEVar6->StateChanged + 4,&local_150)
  ;
  pEVar6 = this->m_dpadIcons[7].field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_14c = 0;
                    /* end of inlined section */
  local_150.m_p = pcVar9;
  local_148 = uVar11;
  (*(code *)pEVar6->OnButtonRepeat)
            ((int)this_07->m_maxBackShdrSize[-0xc] + *(short *)&pEVar6->StateChanged + 4,&local_150)
  ;
  pEVar6 = (this->field0_0x0).__vtable;
  (*(code *)pEVar6[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar6[1].OnStickRepeat + -0x4c,this_00);
  pEVar6 = (this->field0_0x0).__vtable;
  (*(code *)pEVar6[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar6[1].OnStickRepeat + -0x4c,this_01);
  pEVar6 = (this->field0_0x0).__vtable;
  (*(code *)pEVar6[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar6[1].OnStickRepeat + -0x4c,this_02);
  pEVar6 = (this->field0_0x0).__vtable;
  (*(code *)pEVar6[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar6[1].OnStickRepeat + -0x4c,this_03);
  pEVar6 = (this->field0_0x0).__vtable;
  (*(code *)pEVar6[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar6[1].OnStickRepeat + -0x4c,this_04);
  pEVar6 = (this->field0_0x0).__vtable;
  (*(code *)pEVar6[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar6[1].OnStickRepeat + -0x4c,this_05);
  pEVar6 = (this->field0_0x0).__vtable;
  (*(code *)pEVar6[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar6[1].OnStickRepeat + -0x4c,this_06);
  pEVar6 = (this->field0_0x0).__vtable;
  (*(code *)pEVar6[1].GetPos)
            ((int)this->m_dpadIcons + *(short *)&pEVar6[1].OnStickRepeat + -0x4c,this_07);
  return;
}

void ECharedPanel::UpdateCamera() {
	float fHermPos;
	float u;
	float u;
	EVec3 *this;
	EVec3 &v;
	float scaler;
	EVec3 *this;
	EVec3 &v;
	float scaler;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (this->m_fCameraPos < 1.0) {
    fVar5 = this->m_fCameraPos + _dt;
    this->m_fCameraPos = fVar5;
    if (1.0 < fVar5) {
      this->m_fCameraPos = 1.0;
    }
    fVar5 = this->m_fCameraPos;
    if (this->m_nCameraStatus == '.') {
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
      fVar5 = -fVar5 * fVar5 * fVar5 + (fVar5 + fVar5) * fVar5;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_math.h */
      fVar5 = -fVar5 * fVar5 * fVar5 + fVar5 * fVar5 + fVar5;
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar8 = (this->m_vOldEye).field0_0x0.d[2];
    fVar7 = (this->m_vNewEye).field0_0x0.d[2];
    fVar9 = (this->m_vOldEye).field0_0x0.d[0];
    fVar6 = (this->m_vOldEye).field0_0x0.d[2];
                    /* end of inlined section */
    uVar4 = CONCAT44((this->m_vOldEye).field0_0x0.d[1] +
                     fVar5 * ((this->m_vNewEye).field0_0x0.d[1] - (this->m_vOldEye).field0_0x0.d[1])
                     ,fVar9 + fVar5 * ((this->m_vNewEye).field0_0x0.d[0] - fVar9));
    puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
    uVar2 = (uint)&this->m_vEye & 7;
    puVar3 = (ulong *)((int)&this->m_vEye - uVar2);
    *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (this->m_vEye).field0_0x0.d[2] = fVar6 + fVar5 * (fVar7 - fVar8);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar6 = (this->m_vNewCameraTarget).field0_0x0.d[2];
    fVar8 = (this->m_vOldCameraTarget).field0_0x0.d[2];
    fVar9 = (this->m_vOldCameraTarget).field0_0x0.d[0];
    fVar7 = (this->m_vOldCameraTarget).field0_0x0.d[2];
                    /* end of inlined section */
    uVar4 = CONCAT44((this->m_vOldCameraTarget).field0_0x0.d[1] +
                     fVar5 * ((this->m_vNewCameraTarget).field0_0x0.d[1] -
                             (this->m_vOldCameraTarget).field0_0x0.d[1]),
                     fVar9 + fVar5 * ((this->m_vNewCameraTarget).field0_0x0.d[0] - fVar9));
    puVar1 = (undefined *)((int)&(this->m_vCameraTarget).field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
    uVar2 = (uint)&this->m_vCameraTarget & 7;
    puVar3 = (ulong *)((int)&this->m_vCameraTarget - uVar2);
    *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (this->m_vCameraTarget).field0_0x0.d[2] = fVar7 + fVar5 * (fVar6 - fVar8);
  }
  else if (this->m_nNextCamPos == 0) {
    if (*(int *)&this->m_bEnableTitleMenu != 0) {
      Activate__16ECharedTitleMenub(&this->m_TitleMenu,true);
      *(undefined4 *)&this->m_bEnableTitleMenu = 0;
    }
  }
  else {
    this->m_nCameraStatus = *(uchar *)&this->m_nNextCamPos;
    RepositionCamera__12ECharedPanelUc(this,*(uchar *)&this->m_nNextCamPos);
  }
  return;
}

void ECharedPanel::RepositionCamera(u8 nNewPosIndex) {
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	ECharedSim *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  ulong in_v1;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
  fVar8 = this->m_fCameraPos;
  if (fVar8 < 1.0) {
    if (0.5 < fVar8) {
      fVar8 = 1.0 - fVar8;
    }
    this->m_fCameraPos = fVar8;
  }
  else {
    this->m_fCameraPos = 0.0;
  }
  puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  uVar2 = (uint)&this->m_vEye & 7;
  uVar5 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar2) * 8 |
          *(ulong *)((int)&this->m_vEye - uVar2) >> uVar2 * 8;
  fVar8 = (this->m_vEye).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vOldEye).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar4);
  *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | uVar5 >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_vOldEye & 7;
  puVar3 = (ulong *)((int)&this->m_vOldEye - uVar4);
  *puVar3 = uVar5 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->m_vOldEye).field0_0x0.d[2] = fVar8;
  puVar1 = (undefined *)((int)&(this->m_vCameraTarget).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  uVar2 = (uint)&this->m_vCameraTarget & 7;
  uVar5 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
          (long)(char)nNewPosIndex & 0xffU & 0xffffffffffffffffU >> (uVar4 + 1) * 8) &
          -1L << (8 - uVar2) * 8 | *(ulong *)((int)&this->m_vCameraTarget - uVar2) >> uVar2 * 8;
  fVar8 = (this->m_vCameraTarget).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&(this->m_vOldCameraTarget).field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar4);
  *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | uVar5 >> (7 - uVar4) * 8;
  uVar4 = (uint)&this->m_vOldCameraTarget & 7;
  puVar3 = (ulong *)((int)&this->m_vOldCameraTarget - uVar4);
  *puVar3 = uVar5 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  (this->m_vOldCameraTarget).field0_0x0.d[2] = fVar8;
  this->m_nNextCamPos = 0;
  switch((int)((long)(char)nNewPosIndex & 0xffU)) {
  case 0x28:
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
    *(undefined4 *)&this->m_pCustomSim->m_bPlayAllAnims = 1;
    puVar1 = (undefined *)((int)&(this->m_vNewEye).field0_0x0 + 7);
                    /* end of inlined section */
    uVar4 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar4);
    *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0xc0f3bf5540880323U >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_vNewEye & 7;
    puVar3 = (ulong *)((int)&this->m_vNewEye - uVar4);
    *puVar3 = -0x3f0c40aabf77fcdd << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (this->m_vNewEye).field0_0x0.d[2] = 1.116668;
    puVar1 = (undefined *)((int)&(this->m_vNewCameraTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar4 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar4);
    *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0x3f051687beb8b418U >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_vNewCameraTarget & 7;
    puVar3 = (ulong *)((int)&this->m_vNewCameraTarget - uVar4);
    *puVar3 = 0x3f051687beb8b418 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (this->m_vNewCameraTarget).field0_0x0.d[2] = 1.0;
    *(undefined4 *)&this->m_bDrawCASObjects = 1;
    break;
  case 0x29:
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
    *(undefined4 *)&this->m_pCustomSim->m_bPlayAllAnims = 0;
                    /* end of inlined section */
    if ((uint)this->m_nCurSim < 2) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_10 = 0x3f4d6052;
      local_c = 0xbfc857eb;
      local_8 = 1.9;
      uVar7 = 0xc01c1477;
      uVar6 = 0x405d1687;
      fVar8 = 1.333333;
                    /* end of inlined section */
LAB_00109864:
                    /* end of inlined section */
      puVar1 = (undefined *)((int)&(this->m_vNewEye).field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar4);
      *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | CONCAT44(local_c,local_10) >> (7 - uVar4) * 8;
      uVar4 = (uint)&this->m_vNewEye & 7;
      puVar3 = (ulong *)((int)&this->m_vNewEye - uVar4);
      *puVar3 = CONCAT44(local_c,local_10) << uVar4 * 8 |
                *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      (this->m_vNewEye).field0_0x0.d[2] = local_8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      puVar1 = (undefined *)((int)&(this->m_vNewCameraTarget).field0_0x0 + 7);
      uVar4 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar4);
      *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | CONCAT44(uVar6,uVar7) >> (7 - uVar4) * 8;
      uVar4 = (uint)&this->m_vNewCameraTarget & 7;
      puVar3 = (ulong *)((int)&this->m_vNewCameraTarget - uVar4);
      *puVar3 = CONCAT44(uVar6,uVar7) << uVar4 * 8 |
                *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      (this->m_vNewCameraTarget).field0_0x0.d[2] = fVar8;
    }
    else {
      puVar1 = (undefined *)((int)&(this->m_vNewEye).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar4 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar4);
      *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0xbfc318553f094f8bU >> (7 - uVar4) * 8;
      uVar4 = (uint)&this->m_vNewEye & 7;
      puVar3 = (ulong *)((int)&this->m_vNewEye - uVar4);
      *puVar3 = -0x403ce7aac0f6b075 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      (this->m_vNewEye).field0_0x0.d[2] = 1.13333;
      puVar1 = (undefined *)((int)&(this->m_vNewCameraTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar4 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar4);
      *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0x40846b7bbff97cc4U >> (7 - uVar4) * 8;
      uVar4 = (uint)&this->m_vNewCameraTarget & 7;
      puVar3 = (ulong *)((int)&this->m_vNewCameraTarget - uVar4);
      *puVar3 = 0x40846b7bbff97cc4 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      (this->m_vNewCameraTarget).field0_0x0.d[2] = 1.43333;
    }
    goto LAB_001098a4;
  case 0x2a:
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
    *(undefined4 *)&this->m_pCustomSim->m_bPlayAllAnims = 1;
                    /* end of inlined section */
    if ((uint)this->m_nCurSim < 2) {
      puVar1 = (undefined *)((int)&(this->m_vNewEye).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar4 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar4);
      *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0xc05e79c83fb58937U >> (7 - uVar4) * 8;
      uVar4 = (uint)&this->m_vNewEye & 7;
      puVar3 = (ulong *)((int)&this->m_vNewEye - uVar4);
      *puVar3 = -0x3fa18637c04a76c9 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      (this->m_vNewEye).field0_0x0.d[2] = 1.749999;
      puVar1 = (undefined *)((int)&(this->m_vNewCameraTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar4 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar4);
      *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0x3f379dc3bf433322U >> (7 - uVar4) * 8;
      uVar4 = (uint)&this->m_vNewCameraTarget & 7;
      puVar3 = (ulong *)((int)&this->m_vNewCameraTarget - uVar4);
      *puVar3 = 0x3f379dc3bf433322 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      (this->m_vNewCameraTarget).field0_0x0.d[2] = 1.383332;
    }
    else {
      puVar1 = (undefined *)((int)&(this->m_vNewEye).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar4 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar4);
      *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0xc010bf343f79fbe7U >> (7 - uVar4) * 8;
      uVar4 = (uint)&this->m_vNewEye & 7;
      puVar3 = (ulong *)((int)&this->m_vNewEye - uVar4);
      *puVar3 = -0x3fef40cbc0860419 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      (this->m_vNewEye).field0_0x0.d[2] = 0.96666;
      puVar1 = (undefined *)((int)&(this->m_vNewCameraTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar4 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar4);
      *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0x3fe6e536bf8dadebU >> (7 - uVar4) * 8;
      uVar4 = (uint)&this->m_vNewCameraTarget & 7;
      puVar3 = (ulong *)((int)&this->m_vNewCameraTarget - uVar4);
      *puVar3 = 0x3fe6e536bf8dadeb << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
      (this->m_vNewCameraTarget).field0_0x0.d[2] = 1.21666;
    }
    goto LAB_001098a4;
  case 0x2b:
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
    *(undefined4 *)&this->m_pCustomSim->m_bPlayAllAnims = 1;
                    /* end of inlined section */
    if (1 < (uint)this->m_nCurSim) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_10 = 0x3ff33333;
      local_c = 0xc0600000;
      local_8 = 0.19999;
      uVar7 = 0xbff384cb;
      uVar6 = 0x40277cc4;
      fVar8 = 0.6;
      goto LAB_00109864;
    }
    puVar1 = (undefined *)((int)&(this->m_vNewEye).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar4 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar4);
    *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0xc0a0000040133333U >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_vNewEye & 7;
    puVar3 = (ulong *)((int)&this->m_vNewEye - uVar4);
    *puVar3 = -0x3f5fffffbfeccccd << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (this->m_vNewEye).field0_0x0.d[2] = 0.416665;
    puVar1 = (undefined *)((int)&(this->m_vNewCameraTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar4 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar4);
    *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0x3fccf5cbbfe04591U >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_vNewCameraTarget & 7;
    puVar3 = (ulong *)((int)&this->m_vNewCameraTarget - uVar4);
    *puVar3 = 0x3fccf5cbbfe04591 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (this->m_vNewCameraTarget).field0_0x0.d[2] = 0.68333;
LAB_001098a4:
    *(undefined4 *)&this->m_bDrawCASObjects = 1;
    break;
  case 0x2c:
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
    *(undefined4 *)&this->m_pCustomSim->m_bPlayAllAnims = 1;
    local_10 = 0x40453d8a;
    local_c = 0xc0f1f25e;
    uVar7 = 0xbfde146a;
    uVar6 = 0x3f52a7f0;
                    /* end of inlined section */
    goto LAB_00109958;
  case 0x2d:
    puVar1 = (undefined *)((int)&(this->m_vNewEye).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar4 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar4);
    *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0x4030c0d7bfa54fdfU >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_vNewEye & 7;
    puVar3 = (ulong *)((int)&this->m_vNewEye - uVar4);
    *puVar3 = 0x4030c0d7bfa54fdf << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (this->m_vNewEye).field0_0x0.d[2] = 2.81667;
    puVar1 = (undefined *)((int)&(this->m_vNewCameraTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar4 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar4);
    *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0xc104c7993f9f27bbU >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_vNewCameraTarget & 7;
    puVar3 = (ulong *)((int)&this->m_vNewCameraTarget - uVar4);
    *puVar3 = -0x3efb3866c060d845 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (this->m_vNewCameraTarget).field0_0x0.d[2] = 1.155;
    *(undefined4 *)&this->m_bDrawCASObjects = 0;
    break;
  case 0x2e:
    puVar1 = (undefined *)((int)&(this->m_vNewEye).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar4 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar4);
    *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0xc01b5f70c0400000U >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_vNewEye & 7;
    puVar3 = (ulong *)((int)&this->m_vNewEye - uVar4);
    *puVar3 = -0x3fe4a08f3fc00000 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (this->m_vNewEye).field0_0x0.d[2] = 1.7;
    puVar1 = (undefined *)((int)&(this->m_vNewCameraTarget).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar4 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar4);
    *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | 0xc078ec613e800000U >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_vNewCameraTarget & 7;
    puVar3 = (ulong *)((int)&this->m_vNewCameraTarget - uVar4);
    *puVar3 = -0x3f87139ec1800000 << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (this->m_vNewCameraTarget).field0_0x0.d[2] = 1.5;
    uVar4 = 0x2d;
    if (*(int *)&this->m_bDrawCASObjects == 0) {
      uVar4 = 0x2f;
    }
    this->m_nNextCamPos = uVar4;
    break;
  case 0x2f:
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedsim.h */
    *(undefined4 *)&this->m_pCustomSim->m_bPlayAllAnims = 1;
    local_10 = 0x40880323;
    local_c = 0xc0f3bf55;
    uVar7 = 0xbeb8b418;
    uVar6 = 0x3f051687;
LAB_00109958:
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&(this->m_vNewEye).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar4);
    *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | CONCAT44(local_c,local_10) >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_vNewEye & 7;
    puVar3 = (ulong *)((int)&this->m_vNewEye - uVar4);
    *puVar3 = CONCAT44(local_c,local_10) << uVar4 * 8 |
              *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (this->m_vNewEye).field0_0x0.d[2] = 1.116668;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&(this->m_vNewCameraTarget).field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar4);
    *puVar3 = *puVar3 & -1L << (uVar4 + 1) * 8 | CONCAT44(uVar6,uVar7) >> (7 - uVar4) * 8;
    uVar4 = (uint)&this->m_vNewCameraTarget & 7;
    puVar3 = (ulong *)((int)&this->m_vNewCameraTarget - uVar4);
    *puVar3 = CONCAT44(uVar6,uVar7) << uVar4 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    (this->m_vNewCameraTarget).field0_0x0.d[2] = 1.0;
    *(undefined4 *)&this->m_bDrawCASObjects = 1;
  }
  return;
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

void* ECharedPanel::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,(long)(int)size);
  return __s;
}

void ECharedPanel::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

void ECharedPanel::~ECharedPanel(int __in_chrg) {
	void *ptr;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIPrompt *pEVar3;
  EUIIcon *pEVar4;
  
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_12ECharedPanel;
  CleanUp__12ECharedPanel(this);
  ___15EAnimController(&this->m_ACThiefVase,2);
  ___15EAnimController(&this->m_ACThief,2);
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedskin.h */
  Cleanup__11ECharedSkin(&this->m_customSkin);
                    /* end of inlined section */
  ___15ECharedSideMenu(&this->m_SideMenu,2);
  ___16ECharedTitleMenu(&this->m_TitleMenu,2);
  ___13EPortalWindow(&this->m_win,2);
  ___10EPromptBar(&this->m_AcceptPromptBar,2);
  if ((this != (ECharedPanel *)0xfffff884) &&
     (this->m_AcceptPrompts != (EUIPrompt *)&this->m_AcceptPromptBar)) {
    pEVar3 = this->m_AcceptPrompts + 1;
    do {
      pEVar2 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2->Draw)
                ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->Update + 4,0);
      bVar1 = this->m_AcceptPrompts != pEVar3;
      pEVar3 = (EUIPrompt *)((int)(pEVar3 + -2) + 0xb0);
    } while (bVar1);
  }
  ___7EUIIcon(&this->m_AcceptTriIcon,2);
  ___7EUIIcon(&this->m_AcceptXIcon,2);
  ___10EPromptBar(&this->m_SelectPromptBar,2);
  if ((this != (ECharedPanel *)0xfffffb2c) &&
     (this->m_SelectPrompts != (EUIPrompt *)&this->m_SelectPromptBar)) {
    for (pEVar3 = this->m_SelectPrompts + 1;
        pEVar2 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable,
        (*(code *)pEVar2->Draw)
                  ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar2->Update + 4,0), this->m_SelectPrompts != pEVar3;
        pEVar3 = (EUIPrompt *)((int)(pEVar3 + -2) + 0xb0)) {
    }
  }
  ___7EUIIcon(&this->m_SelectTriIcon,2);
  ___7EUIIcon(&this->m_SelectXIcon,2);
  if ((this != (ECharedPanel *)0xffffffb4) && (this->m_dpadIcons != &this->m_SelectXIcon)) {
    pEVar4 = this->m_dpadIcons + 7;
    do {
      pEVar2 = (pEVar4->field0_0x0).__vtable;
      (*(code *)pEVar2->Draw)
                ((int)pEVar4->m_maxBackShdrSize[-0xc] + *(short *)&pEVar2->Update + 4,0);
      bVar1 = this->m_dpadIcons != pEVar4;
      pEVar4 = pEVar4 + -1;
    } while (bVar1);
  }
  ___13EUIObjectNode(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}
