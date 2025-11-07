// STATUS: NOT STARTED

#include "e_uiprompt.h"

__vtbl_ptr_type EUIPrompt virtual table[23] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIPrompt::~EUIPrompt,
		/* .__delta2 = */ 1688
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
		/* .__pfn = */ &EUIPrompt::Draw,
		/* .__delta2 = */ 864
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

void EUIPrompt::AddIcon(EUIIcon *pButt) {
  AddChild__13EUIObjectNodeP13EUIObjectNode((EUIObjectNode *)this,&pButt->field0_0x0);
  SetPositions__9EUIPrompt(this);
  return;
}

void EUIPrompt::SetPositions() {
	NLIterator nli;
	float lastX;
	float lastW;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	float z;
	
  int *piVar1;
  int iVar2;
  float *pfVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  fVar6 = 0.0;
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar7 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[0] - this->m_gap;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (piVar1 = *(int **)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0
                          .m_l; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    iVar2 = *piVar1;
                    /* end of inlined section */
    local_50 = fVar7 + fVar6 + this->m_gap;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_48 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_4c = 0;
                    /* end of inlined section */
    (**(code **)(*(int *)(iVar2 + 0x38) + 0x24))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x38) + 0x20),&local_50);
    pfVar3 = (float *)(**(code **)(*(int *)(iVar2 + 0x38) + 0x5c))
                                (iVar2 + *(short *)(*(int *)(iVar2 + 0x38) + 0x58));
    fVar7 = *pfVar3;
                    /* end of inlined section */
    fVar6 = *(float *)(iVar2 + 0x18);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  }
                    /* end of inlined section */
  fVar4 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2];
  fVar5 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2];
  (this->m_textPos).field0_0x0.d[0] = fVar7 + fVar6 + this->m_gap;
  (this->m_textPos).field0_0x0.d[2] = fVar5 + fVar4 * 0.5;
  return;
}

void EUIPrompt::StateChanged(u32 state, bool on) {
  return;
}

void EUIPrompt::Draw(ERC *prc) {
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	ERFont *this;
	ERFont *this;
	EUIObjectNode *this;
	ERFont *this;
	ERFont *this;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	EFontAlignX xAlign;
	EFontAlignY yAlign;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	EFontAlignX xAlign;
	EFontAlignY yAlign;
	
  uint uVar1;
  short *szString;
  char *szString_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  ERFont *pEVar9;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
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
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 1 & 1U) != 0) {
    DrawShader__7EUIIconP3ERC((EUIIcon *)this,prc);
    pEVar9 = (this->field0_0x0).field0_0x0.m_pFont;
    if (pEVar9 != (ERFont *)0x0) {
      SetSize__6ERFontffb(pEVar9,(this->field0_0x0).field0_0x0.m_textdef.m_pointsize,1.0,true);
      fVar7 = _7EUIIcon_m_vColors[1].field0_0x0._12_4_;
      fVar6 = _7EUIIcon_m_vColors[1].field0_0x0._8_4_;
      fVar5 = _7EUIIcon_m_vColors[1].field0_0x0._4_4_;
      fVar4 = _7EUIIcon_m_vColors[0].field0_0x0._12_4_;
      fVar3 = _7EUIIcon_m_vColors[0].field0_0x0._8_4_;
      fVar2 = _7EUIIcon_m_vColors[0].field0_0x0._4_4_;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
      uVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags;
                    /* end of inlined section */
      uVar8 = (int)uVar1 >> 3;
      if (((int)uVar1 >> 2 & 1U) == 0) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((uVar8 & 1) == 0) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
          pEVar9 = (this->field0_0x0).field0_0x0.m_pFont;
          local_50 = _7EUIIcon_m_vColors[1].field0_0x0._0_4_;
          local_4c = _7EUIIcon_m_vColors[1].field0_0x0._4_4_;
          local_48 = _7EUIIcon_m_vColors[1].field0_0x0._8_4_;
          local_44 = _7EUIIcon_m_vColors[1].field0_0x0._12_4_;
        }
        else {
          pEVar9 = (this->field0_0x0).field0_0x0.m_pFont;
          local_50 = _7EUIIcon_m_vColors[0].field0_0x0._0_4_;
          local_4c = _7EUIIcon_m_vColors[0].field0_0x0._4_4_;
          local_48 = _7EUIIcon_m_vColors[0].field0_0x0._8_4_;
          local_44 = _7EUIIcon_m_vColors[0].field0_0x0._12_4_;
                    /* end of inlined section */
        }
        local_44 = local_44 * 0.65;
        local_48 = local_48 * 0.65;
        local_4c = local_4c * 0.65;
        local_50 = local_50 * 0.65;
        (pEVar9->m_vColor).field0_0x0.d[0] = local_50;
        (pEVar9->m_vColor).field0_0x0.d[1] = local_4c;
        (pEVar9->m_vColor).field0_0x0.d[2] = local_48;
        (pEVar9->m_vColor).field0_0x0.d[3] = local_44;
      }
      else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((uVar8 & 1) == 0) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
          pEVar9 = (this->field0_0x0).field0_0x0.m_pFont;
                    /* end of inlined section */
          (pEVar9->m_vColor).field0_0x0.d[0] = _7EUIIcon_m_vColors[1].field0_0x0._0_4_;
          (pEVar9->m_vColor).field0_0x0.d[1] = fVar5;
          (pEVar9->m_vColor).field0_0x0.d[2] = fVar6;
          (pEVar9->m_vColor).field0_0x0.d[3] = fVar7;
        }
        else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
          pEVar9 = (this->field0_0x0).field0_0x0.m_pFont;
                    /* end of inlined section */
          (pEVar9->m_vColor).field0_0x0.d[0] = _7EUIIcon_m_vColors[0].field0_0x0._0_4_;
          (pEVar9->m_vColor).field0_0x0.d[1] = fVar2;
          (pEVar9->m_vColor).field0_0x0.d[2] = fVar3;
          (pEVar9->m_vColor).field0_0x0.d[3] = fVar4;
        }
      }
                    /* end of inlined section */
      Select__6ERFontP3ERC((this->field0_0x0).field0_0x0.m_pFont,prc);
      szString = (this->field0_0x0).m_pLong;
      if (szString == (short *)0x0) {
        szString_00 = (this->field0_0x0).m_pShort;
        if (szString_00 != (char *)0x0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          local_40 = (this->m_textPos).field0_0x0.d[0];
          local_3c = (this->m_textPos).field0_0x0.d[2];
          DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                    ((this->field0_0x0).field0_0x0.m_pFont,prc,szString_00,false,(EVec2 *)&local_40,
                     (this->field0_0x0).field0_0x0.m_textdef.m_xAlign,
                     (this->field0_0x0).field0_0x0.m_textdef.m_yAlign,(EVec2 *)0x0);
        }
      }
      else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_40 = (this->m_textPos).field0_0x0.d[0];
        local_3c = (this->m_textPos).field0_0x0.d[2];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  ((this->field0_0x0).field0_0x0.m_pFont,prc,szString,true,(EVec2 *)&local_40,
                   (this->field0_0x0).field0_0x0.m_textdef.m_xAlign,
                   (this->field0_0x0).field0_0x0.m_textdef.m_yAlign,(EVec2 *)0x0);
                    /* end of inlined section */
      }
    }
    Draw__13EUIObjectNodeP3ERC((EUIObjectNode *)this,prc);
  }
  return;
}

EUIPrompt* EUIPrompt::EUIPrompt(char *str, EUIIconDef &icondef, EUITextIconDef &textdef, int fontId, EVec3 vPos) {
  undefined *puVar1;
  EUITextIconDef *pEVar2;
  EFontAlignY *pEVar3;
  uint *puVar4;
  EUIIconDef *pEVar5;
  int *piVar6;
  EUIVirtualCtrl **ppEVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  EUIIconDef__vtable *pEVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  EUITextIconDef local_a0;
  EUIIconDef local_80 [2];
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
  
  uVar14 = (ulong)(int)this;
                    /* inlined from c:/eor/src2/engine/ui/e_uitexticon.h */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  uVar15 = (ulong)(int)&local_a0;
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_a0.m_maxChars = 0x20;
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uitexticon.h */
  local_a0.m_xAlign = E_FAX_LEFT;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uitexticon.h */
  local_a0.m_yAlign = E_FAY_TOP;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uitexticon.h */
  local_a0.m_pointsize = 12.0;
                    /* inlined from c:/eor/src2/engine/ui/e_uitexticon.h */
  local_a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uitexticon.h */
  local_a0.m_colorIdx = 1;
                    /* end of inlined section */
  uVar16 = 0xffffffffffffffff;
                    /* inlined from c:/eor/src2/engine/ui/e_uitexticon.h */
  local_a0.m_retChar = -1;
  local_80[0].__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_80[0].m_flags = 0;
  local_80[0].m_trigger = 0x40;
  local_80[0].m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
  local_80[0].m_colorIdx = 1;
                    /* end of inlined section */
  local_80[0].m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&this->field0_0x0,&local_a0,local_80,-1,(EVec3 *)&local_b0);
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&textdef->m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  uVar9 = (uint)textdef & 7;
  uVar13 = (*(long *)(puVar1 + -uVar8) << (7 - uVar8) * 8 |
           0xffffffffffffffffU >> (uVar8 + 1) * 8 & 0x3c2e08) & -1L << (8 - uVar9) * 8 |
           *(ulong *)((int)textdef - uVar9) >> uVar9 * 8;
  puVar1 = (undefined *)((int)&textdef->m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  uVar9 = (uint)&textdef->m_yAlign & 7;
  uVar14 = (*(long *)(puVar1 + -uVar8) << (7 - uVar8) * 8 |
           uVar14 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar9) * 8 |
           *(ulong *)((int)&textdef->m_yAlign - uVar9) >> uVar9 * 8;
  puVar1 = (undefined *)((int)&textdef->m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  uVar9 = (uint)&textdef->m_selColorIdx & 7;
  uVar15 = (*(long *)(puVar1 + -uVar8) << (7 - uVar8) * 8 |
           uVar15 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar9) * 8 |
           *(ulong *)((int)&textdef->m_selColorIdx - uVar9) >> uVar9 * 8;
  uVar10 = *(undefined4 *)&textdef->m_retChar;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar8);
  *puVar12 = *puVar12 & -1L << (uVar8 + 1) * 8 | uVar13 >> (7 - uVar8) * 8;
  pEVar2 = &(this->field0_0x0).field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar8);
  *puVar12 = uVar13 << uVar8 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar8);
  *puVar12 = *puVar12 & -1L << (uVar8 + 1) * 8 | uVar14 >> (7 - uVar8) * 8;
  pEVar3 = &(this->field0_0x0).field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar12 = (ulong *)((int)pEVar3 - uVar8);
  *puVar12 = uVar14 << uVar8 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar8);
  *puVar12 = *puVar12 & -1L << (uVar8 + 1) * 8 | uVar15 >> (7 - uVar8) * 8;
  puVar4 = &(this->field0_0x0).field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar12 = (ulong *)((int)puVar4 - uVar8);
  *puVar12 = uVar15 << uVar8 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->field0_0x0).field0_0x0.m_textdef.m_retChar = uVar10;
  pEVar11 = (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)((int)&icondef->m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  uVar9 = (uint)icondef & 7;
  uVar16 = (*(long *)(puVar1 + -uVar8) << (7 - uVar8) * 8 |
           uVar16 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar9) * 8 |
           *(ulong *)((int)icondef - uVar9) >> uVar9 * 8;
  puVar1 = (undefined *)((int)&icondef->m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  uVar9 = (uint)&icondef->m_selColorIdx & 7;
  uVar13 = (*(long *)(puVar1 + -uVar8) << (7 - uVar8) * 8 |
           uVar14 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar9) * 8 |
           *(ulong *)((int)&icondef->m_selColorIdx - uVar9) >> uVar9 * 8;
  puVar1 = (undefined *)((int)&icondef->__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  uVar9 = (uint)&icondef->m_pCtrl & 7;
  uVar14 = (*(long *)(puVar1 + -uVar8) << (7 - uVar8) * 8 |
           uVar15 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar9) * 8 |
           *(ulong *)((int)&icondef->m_pCtrl - uVar9) >> uVar9 * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar8);
  *puVar12 = *puVar12 & -1L << (uVar8 + 1) * 8 | uVar16 >> (7 - uVar8) * 8;
  pEVar5 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar12 = (ulong *)((int)pEVar5 - uVar8);
  *puVar12 = uVar16 << uVar8 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar8);
  *puVar12 = *puVar12 & -1L << (uVar8 + 1) * 8 | uVar13 >> (7 - uVar8) * 8;
  piVar6 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar12 = (ulong *)((int)piVar6 - uVar8);
  *puVar12 = uVar13 << uVar8 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar8);
  *puVar12 = *puVar12 & -1L << (uVar8 + 1) * 8 | uVar14 >> (7 - uVar8) * 8;
  ppEVar7 = &(this->field0_0x0).field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar12 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar12 = uVar14 << uVar8 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = pEVar11;
  this->m_gap = 0.0;
  this->m_lastPressed = 0;
  return this;
}

void EUIPrompt::~EUIPrompt(int __in_chrg) {
	EUIStaticTextIcon *this;
	
                    /* inlined from c:/eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uitexticon.h */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)this,__in_chrg);
  return;
}

void EUIPrompt::AddChild(EUIObjectNode *pChild) {
  AddIcon__9EUIPromptP7EUIIcon(this,(EUIIcon *)pChild);
  return;
}

void EUIPrompt::SetBoxDims(EVec3 &dims) {
  undefined *puVar1;
  EVec3 *pEVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  ulong *puVar6;
  ulong in_v1;
  ulong uVar7;
  
  puVar1 = (undefined *)((int)&dims->field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)dims & 7;
  uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)dims - uVar4) >> uVar4 * 8;
  fVar5 = (dims->field0_0x0).d[2];
  puVar1 = (undefined *)
           ((int)&(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar3);
  *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  pEVar2 = &(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH;
  uVar3 = (uint)pEVar2 & 7;
  puVar6 = (ulong *)((int)pEVar2 - uVar3);
  *puVar6 = uVar7 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] = fVar5;
  SetPositions__9EUIPrompt(this);
  return;
}

void EUIPrompt::SetPos(EVec3 &Pos) {
  SetPos__13EUIObjectNodeRC5EVec3((EUIObjectNode *)this,Pos);
  SetPositions__9EUIPrompt(this);
  return;
}

void EUIPrompt::SetBoxDims(EVec2 &dims) {
	EVec2 *this;
	EVec2 *this;
	
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (dims->field0_0x0).d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] =
       (dims->field0_0x0).d[1];
  SetPositions__9EUIPrompt(this);
  return;
}

float EUIPrompt::GetGap() {
  return this->m_gap;
}

void EUIPrompt::SetGap(float gap) {
  this->m_gap = gap;
  return;
}

u32 EUIPrompt::GetLastPressed() {
  return this->m_lastPressed;
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
