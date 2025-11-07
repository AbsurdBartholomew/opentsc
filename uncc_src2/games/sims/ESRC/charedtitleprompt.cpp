// STATUS: NOT STARTED

#include "charedtitleprompt.h"

__vtbl_ptr_type ECharedTitlePrompt virtual table[23] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedTitlePrompt::~ECharedTitlePrompt,
		/* .__delta2 = */ -17168
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedTitlePrompt::Update,
		/* .__delta2 = */ -15976
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedTitlePrompt::Draw,
		/* .__delta2 = */ -17056
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIPrompt::SetPos,
		/* .__delta2 = */ 1816
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIPrompt::SetBoxDims,
		/* .__delta2 = */ 1760
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIPrompt::SetBoxDims,
		/* .__delta2 = */ 1864
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
		/* .__pfn = */ &EUIPrompt::StateChanged,
		/* .__delta2 = */ 856
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
		/* .__pfn = */ &EUIPrompt::AddChild,
		/* .__delta2 = */ 1728
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

static EVec4 FADED_RED;
static EVec4 FADED_CYAN;
static EVec4 FADED_GREAY;

ECharedTitlePrompt* ECharedTitlePrompt::ECharedTitlePrompt(char *str, EUIIconDef &icondef, EUITextIconDef &textdef, int fontId, EVec3 vPos) {
	EUIPrompt *this;
	EVec3 vPos;
	
  EUITextIconDef *pEVar1;
  EFontAlignY *pEVar2;
  uint *puVar3;
  EUIIconDef *pEVar4;
  int *piVar5;
  EUIVirtualCtrl **ppEVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong *puVar11;
  ERShader *pEVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  undefined4 local_d8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  EUITextIconDef local_b0;
  EUIIconDef local_90;
  EUIIconDef__vtable *local_70;
  EUIIconDef__vtable *local_60;
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
  
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  uVar16 = 0xffff;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* end of inlined section */
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_b0.m_maxChars = 0x20;
  local_d8 = CONCAT22(local_d8._2_2_,0xffff);
  local_b8 = 0;
  local_bc = 0;
  local_c0 = 0;
  local_b0.m_xAlign = E_FAX_LEFT;
  local_b0.m_yAlign = E_FAY_TOP;
  local_b0.m_pointsize = 12.0;
  local_b0.m_selColorIdx = 0;
  local_b0.m_colorIdx = 1;
  local_b0.m_retChar = -1;
  local_90.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_90.m_flags = 0;
  local_90.m_trigger = 0x40;
  local_90.m_selColorIdx = 0;
  local_90.m_colorIdx = 1;
  local_90.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            ((EUIStaticTextIcon *)this,&local_b0,&local_90,-1,(EVec3 *)&local_c0);
  local_90.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar7 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x20UL >> (7 - uVar10) * 8;
  pEVar1 = &(this->field0_0x0).field0_0x0.field0_0x0.m_textdef;
  uVar10 = (uint)pEVar1 & 7;
  puVar11 = (ulong *)((int)pEVar1 - uVar10);
  *puVar11 = 0x20L << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x4140000000000000U >> (7 - uVar10) * 8;
  pEVar2 = &(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar10 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar10);
  *puVar11 = 0x4140000000000000 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x100000000U >> (7 - uVar10) * 8;
  puVar3 = &(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar10 = (uint)puVar3 & 7;
  puVar11 = (ulong *)((int)puVar3 - uVar10);
  *puVar11 = 0x100000000 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  *(undefined4 *)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_retChar = local_d8;
  local_70 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar7 = (undefined *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x4000000000U >> (7 - uVar10) * 8;
  pEVar4 = &(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar10 = (uint)pEVar4 & 7;
  puVar11 = (ulong *)((int)pEVar4 - uVar10);
  *puVar11 = 0x4000000000 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x100000000U >> (7 - uVar10) * 8;
  piVar5 = &(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar10 = (uint)piVar5 & 7;
  puVar11 = (ulong *)((int)piVar5 - uVar10);
  *puVar11 = 0x100000000 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | 0x3a890800000000U >> (7 - uVar10) * 8;
  ppEVar6 = &(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar10 = (uint)ppEVar6 & 7;
  puVar11 = (ulong *)((int)ppEVar6 - uVar10);
  *puVar11 = 0x3a890800000000 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_70;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_18ECharedTitlePrompt;
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  (this->field0_0x0).m_gap = 0.0;
  (this->field0_0x0).m_lastPressed = 0;
  puVar7 = (undefined *)((int)&textdef->m_xAlign + 3);
                    /* end of inlined section */
  uVar10 = (uint)puVar7 & 7;
  uVar8 = (uint)textdef & 7;
  uVar13 = (*(long *)(puVar7 + -uVar10) << (7 - uVar10) * 8 |
           0xffffffffffffffffU >> (uVar10 + 1) * 8 & 0x3a9c28) & -1L << (8 - uVar8) * 8 |
           *(ulong *)((int)textdef - uVar8) >> uVar8 * 8;
  puVar7 = (undefined *)((int)&textdef->m_pointsize + 3);
  uVar10 = (uint)puVar7 & 7;
  uVar8 = (uint)&textdef->m_yAlign & 7;
  uVar14 = (*(long *)(puVar7 + -uVar10) << (7 - uVar10) * 8 |
           (long)(int)local_70 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar8) * 8 |
           *(ulong *)((int)&textdef->m_yAlign - uVar8) >> uVar8 * 8;
  puVar7 = (undefined *)((int)&textdef->m_colorIdx + 3);
  uVar10 = (uint)puVar7 & 7;
  uVar8 = (uint)&textdef->m_selColorIdx & 7;
  uVar15 = (*(long *)(puVar7 + -uVar10) << (7 - uVar10) * 8 |
           0xffffffffffffffffU >> (uVar10 + 1) * 8 & 0x4000000000) & -1L << (8 - uVar8) * 8 |
           *(ulong *)((int)&textdef->m_selColorIdx - uVar8) >> uVar8 * 8;
  uVar9 = *(undefined4 *)&textdef->m_retChar;
  puVar7 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar13 >> (7 - uVar10) * 8;
  pEVar1 = &(this->field0_0x0).field0_0x0.field0_0x0.m_textdef;
  uVar10 = (uint)pEVar1 & 7;
  puVar11 = (ulong *)((int)pEVar1 - uVar10);
  *puVar11 = uVar13 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar14 >> (7 - uVar10) * 8;
  pEVar2 = &(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar10 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar10);
  *puVar11 = uVar14 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar15 >> (7 - uVar10) * 8;
  puVar3 = &(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar10 = (uint)puVar3 & 7;
  puVar11 = (ulong *)((int)puVar3 - uVar10);
  *puVar11 = uVar15 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  *(undefined4 *)&(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_retChar = uVar9;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  local_60 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar7 = (undefined *)((int)&icondef->m_trigger + 3);
  uVar10 = (uint)puVar7 & 7;
  uVar8 = (uint)icondef & 7;
  uVar15 = (*(long *)(puVar7 + -uVar10) << (7 - uVar10) * 8 |
           0xffffffffffffffffU >> (uVar10 + 1) * 8 & 0x3a890800000000) & -1L << (8 - uVar8) * 8 |
           *(ulong *)((int)icondef - uVar8) >> uVar8 * 8;
  puVar7 = (undefined *)((int)&icondef->m_colorIdx + 3);
  uVar10 = (uint)puVar7 & 7;
  uVar8 = (uint)&icondef->m_selColorIdx & 7;
  uVar16 = (*(long *)(puVar7 + -uVar10) << (7 - uVar10) * 8 |
           uVar16 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar8) * 8 |
           *(ulong *)((int)&icondef->m_selColorIdx - uVar8) >> uVar8 * 8;
  puVar7 = (undefined *)((int)&icondef->__vtable + 3);
  uVar10 = (uint)puVar7 & 7;
  uVar8 = (uint)&icondef->m_pCtrl & 7;
  uVar13 = (*(long *)(puVar7 + -uVar10) << (7 - uVar10) * 8 |
           uVar14 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar8) * 8 |
           *(ulong *)((int)&icondef->m_pCtrl - uVar8) >> uVar8 * 8;
  puVar7 = (undefined *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar15 >> (7 - uVar10) * 8;
  pEVar4 = &(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar10 = (uint)pEVar4 & 7;
  puVar11 = (ulong *)((int)pEVar4 - uVar10);
  *puVar11 = uVar15 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar16 >> (7 - uVar10) * 8;
  piVar5 = &(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar10 = (uint)piVar5 & 7;
  puVar11 = (ulong *)((int)piVar5 - uVar10);
  *puVar11 = uVar16 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  puVar7 = (undefined *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar10 = (uint)puVar7 & 7;
  puVar11 = (ulong *)(puVar7 + -uVar10);
  *puVar11 = *puVar11 & -1L << (uVar10 + 1) * 8 | uVar13 >> (7 - uVar10) * 8;
  ppEVar6 = &(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar10 = (uint)ppEVar6 & 7;
  puVar11 = (ulong *)((int)ppEVar6 - uVar10);
  *puVar11 = uVar13 << uVar10 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
  (this->field0_0x0).m_gap = 0.0;
  (this->field0_0x0).m_lastPressed = 0;
  this->m_nMessage = 0;
  this->m_PulseAccumulator = 0.0;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_60;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar12 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x43886001,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pGlowShader = pEVar12;
  return this;
}

void ECharedTitlePrompt::~ECharedTitlePrompt(int __in_chrg) {
	EUIPrompt *this;
	int __in_chrg;
	int __in_chrg;
	EUIStaticTextIcon *this;
	
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_18ECharedTitlePrompt;
  while (this->m_pGlowShader != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pGlowShader->field0_0x0);
    this->m_pGlowShader = (ERShader *)0x0;
  }
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)this,__in_chrg);
  return;
}

void ECharedTitlePrompt::Draw(ERC *prc) {
	NLIterator nli;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EVec2 vScreenSize;
	float PulseFactor;
	float PulseFactorX;
	float PulseFactorY;
	float fWidth;
	float fHeight;
	EVec2 vGlowPos;
	EGraphics *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	ERFont *this;
	EUIObjectNode *this;
	ERFont *this;
	ERFont *this;
	EUIObjectNode *this;
	ERFont *this;
	EUIObjectNode *this;
	ERFont *this;
	ERFont *this;
	float y;
	ERFont *this;
	ERC *prc;
	EFontAlignX xAlign;
	EFontAlignY yAlign;
	float y;
	ERFont *this;
	ERC *prc;
	EFontAlignX xAlign;
	EFontAlignY yAlign;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  uint uVar1;
  short *szString;
  char *szString_00;
  int iVar2;
  EVec4 *pEVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  ERFont *pEVar7;
  undefined8 uVar8;
  undefined8 unaff_s0;
  int *piVar9;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar10;
  EVec2 vScreenSize;
  EVec2 vGlowPos;
  float local_f0;
  float local_ec;
  float local_e0;
  float local_dc;
  undefined4 local_d0;
  float local_cc;
  float local_c0;
  undefined4 local_bc;
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
  
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
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
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  uVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags;
                    /* end of inlined section */
  if (((int)uVar1 >> 1 & 1U) == 0) {
    return;
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)uVar1 >> 2 & 1U) != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)uVar1 >> 3 & 1U) == 0) {
      pEVar7 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
      goto LAB_0011bef0;
    }
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    fVar5 = (float)_pGfx->m_yscreen;
    fVar6 = (float)_pGfx->m_xscreen;
    local_cc = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar10 = sinf(this->m_PulseAccumulator);
    fVar10 = (fVar10 * 0.5 + local_cc) * 8.0;
    vGlowPos.field0_0x0.d[1] =
         *(float *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_pos.
                          field0_0x0 + 8) + 16.0 / fVar5;
    vGlowPos.field0_0x0.d[0] =
         (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[0] +
         16.0 / fVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_dc = 40.0 / fVar5 + fVar10 / fVar5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_e0 = 40.0 / fVar6 + fVar10 / fVar6;
    Select__8ERShaderP3ERCi(this->m_pGlowShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_ec = vGlowPos.field0_0x0.d[1] - local_dc * 0.5;
    local_f0 = vGlowPos.field0_0x0.d[0] - local_e0 * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_d0 = 0;
                    /* end of inlined section */
    local_dc = local_ec + local_dc;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_e0 = local_f0 + local_e0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_bc = 0;
                    /* end of inlined section */
    local_c0 = local_cc;
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_f0,&local_e0,
               &local_d0,&local_c0,0x35f520);
  }
  pEVar7 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
LAB_0011bef0:
  if (pEVar7 == (ERFont *)0x0) {
    piVar9 = *(int **)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.
                       field0_0x0;
  }
  else {
    SetSize__6ERFontffb(pEVar7,(this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_pointsize,1.0,
                        true);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    uVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags;
                    /* end of inlined section */
    if (((int)uVar1 >> 2 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)uVar1 >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if (((int)uVar1 >> 4 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          pEVar7 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
          pEVar3 = &FADED_GREAY;
        }
        else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          pEVar7 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
          pEVar3 = &_GREAY;
                    /* end of inlined section */
        }
      }
      else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        pEVar7 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
        pEVar3 = &FADED_CYAN;
                    /* end of inlined section */
      }
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)uVar1 >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if (((int)uVar1 >> 4 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          pEVar7 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
                    /* end of inlined section */
          pEVar3 = &_GREAY;
        }
        else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          pEVar7 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
          pEVar3 = &_WHITE;
                    /* end of inlined section */
        }
      }
      else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        pEVar7 = (this->field0_0x0).field0_0x0.field0_0x0.m_pFont;
                    /* end of inlined section */
        pEVar3 = &_CYAN;
      }
    }
    uVar8 = *(undefined8 *)&pEVar3->field0_0x0;
    fVar5 = (pEVar3->field0_0x0).d[2];
    fVar6 = (pEVar3->field0_0x0).d[3];
    (pEVar7->m_vColor).field0_0x0.d[0] = (float)uVar8;
    (pEVar7->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar8 >> 0x20);
    (pEVar7->m_vColor).field0_0x0.d[2] = fVar5;
    (pEVar7->m_vColor).field0_0x0.d[3] = fVar6;
                    /* end of inlined section */
    Select__6ERFontP3ERC((this->field0_0x0).field0_0x0.field0_0x0.m_pFont,prc);
    szString = (this->field0_0x0).field0_0x0.m_pLong;
    if (szString == (short *)0x0) {
      szString_00 = (this->field0_0x0).field0_0x0.m_pShort;
      if (szString_00 != (char *)0x0) {
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        vGlowPos.field0_0x0.d[1] = (this->field0_0x0).m_textPos.field0_0x0.d[2];
                    /* end of inlined section */
        vGlowPos.field0_0x0.d[0] = (this->field0_0x0).m_textPos.field0_0x0.d[0] + 0.005;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  ((this->field0_0x0).field0_0x0.field0_0x0.m_pFont,prc,szString_00,false,&vGlowPos,
                   (this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_xAlign,
                   (this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_yAlign,(EVec2 *)0x0);
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      piVar9 = *(int **)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.
                         field0_0x0;
    }
    else {
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      vGlowPos.field0_0x0.d[1] = (this->field0_0x0).m_textPos.field0_0x0.d[2];
                    /* end of inlined section */
      vGlowPos.field0_0x0.d[0] = (this->field0_0x0).m_textPos.field0_0x0.d[0] + 0.005;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                ((this->field0_0x0).field0_0x0.field0_0x0.m_pFont,prc,szString,true,&vGlowPos,
                 (this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_xAlign,
                 (this->field0_0x0).field0_0x0.field0_0x0.m_textdef.m_yAlign,(EVec2 *)0x0);
                    /* end of inlined section */
      piVar9 = *(int **)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.
                         field0_0x0;
    }
  }
                    /* end of inlined section */
  if (piVar9 == (int *)0x0) {
    return;
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  iVar2 = *piVar9;
  do {
    iVar4 = *(int *)(iVar2 + 0x10);
                    /* end of inlined section */
    if ((iVar4 >> 1 & 1U) == 0) {
LAB_0011c150:
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      piVar9 = (int *)piVar9[2];
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((iVar4 >> 2 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((iVar4 >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
          if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags >> 4 & 1U
              ) != 0) goto LAB_0011c10c;
          (**(code **)(*(int *)(iVar2 + 0x38) + 0x74))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0x38) + 0x70),prc,0,0x3d0aa0);
          goto LAB_0011c150;
        }
        iVar4 = *(int *)(iVar2 + 0x38);
        uVar8 = 0x3d0a90;
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((iVar4 >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
          if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags >> 4 & 1U
              ) == 0) {
LAB_0011c10c:
            iVar4 = *(int *)(iVar2 + 0x38);
            uVar8 = 0x35f540;
          }
          else {
            iVar4 = *(int *)(iVar2 + 0x38);
            uVar8 = 0x35f4c0;
          }
        }
        else {
          iVar4 = *(int *)(iVar2 + 0x38);
          uVar8 = 0x35f520;
        }
      }
      (**(code **)(iVar4 + 0x74))(iVar2 + *(short *)(iVar4 + 0x70),prc,0,uVar8);
      piVar9 = (int *)piVar9[2];
    }
                    /* end of inlined section */
    if (piVar9 == (int *)0x0) {
      return;
    }
    iVar2 = *piVar9;
  } while( true );
}

void ECharedTitlePrompt::Update() {
  EUIVirtualCtrl__vtable *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  long lVar3;
  
  pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                     0x40);
  if (lVar3 != 0) {
    pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar2[1].EUIObjectNode)
              ((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               (int)*(short *)(pEVar2 + 1) + 4U,this,this->m_nMessage);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    if (_13EUIObjectNode_m_uiSfxSelect != (undefined1 *)0x0) {
      (*(code *)_13EUIObjectNode_m_uiSfxSelect)();
    }
  }
                    /* end of inlined section */
  this->m_PulseAccumulator = this->m_PulseAccumulator + _dt * 5.0;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    FADED_CYAN.field0_0x0.d[0] = 0.08;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    FADED_GREAY.field0_0x0.d[3] = 0.75;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    FADED_RED.field0_0x0.d[0] = 0.43;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    FADED_RED.field0_0x0.d[3] = 0.75;
    FADED_CYAN.field0_0x0.d[2] = 0.43;
    FADED_CYAN.field0_0x0.d[3] = 0.75;
    FADED_GREAY.field0_0x0.d[0] = 0.25;
    FADED_GREAY.field0_0x0.d[2] = 0.25;
    FADED_RED.field0_0x0.d[1] = 0.08;
    FADED_RED.field0_0x0.d[2] = 0.08;
    FADED_CYAN.field0_0x0.d[1] = 0.43;
    FADED_GREAY.field0_0x0.d[1] = 0.25;
  }
                    /* end of inlined section */
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

void ECharedTitlePrompt::SetMessage(u32 nMessage) {
  this->m_nMessage = nMessage;
  return;
}

void global constructors keyed to ECharedTitlePrompt::ECharedTitlePrompt() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
