// STATUS: NOT STARTED

#include "e_uialphamenu.h"

__vtbl_ptr_type EUIAlphaMenu virtual table[28] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIAlphaMenu::~EUIAlphaMenu,
		/* .__delta2 = */ 21400
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIGridMenu::Update,
		/* .__delta2 = */ 15240
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::Draw,
		/* .__delta2 = */ 8024
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
		/* .__pfn = */ &EUIAlphaMenu::Message,
		/* .__delta2 = */ 21120
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
		/* .__pfn = */ &EUIGridMenu::AddChild,
		/* .__delta2 = */ 17544
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
		/* .__pfn = */ &EUIMenu::RemoveAllOpts,
		/* .__delta2 = */ 7024
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
		/* .__pfn = */ &EUIGridMenu::AddOpt,
		/* .__delta2 = */ 16112
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetPositions,
		/* .__delta2 = */ 9000
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIGridMenu::SetCurOpt,
		/* .__delta2 = */ 16192
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetLayout,
		/* .__delta2 = */ 11688
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
		/* .__pfn = */ &EUIGridMenu::NextItem,
		/* .__delta2 = */ 17648
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIGridMenu::PrevItem,
		/* .__delta2 = */ 17680
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
		/* .__pfn = */ &EUIGridMenu::SetStick,
		/* .__delta2 = */ 17304
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIGridMenu::AddCol,
		/* .__delta2 = */ 16424
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIGridMenu::SetCurCol,
		/* .__delta2 = */ 16240
	},
	/* [27] = */ {
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

EUIAlphaMenu* EUIAlphaMenu::EUIAlphaMenu(EUIAlphaMenuDef &_def, u16 *szCharlist) {
	EUIGridMenu *this;
	EUIAlphaMenuDef *this;
	
                    /* inlined from c:/eor/src2/engine/ui/e_uigridmenu.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uigridmenu.h */
  __7EUIMenuiifff((EUIMenu *)this,-1,0,0.05,0.0,0.0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uigridmenu.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_12EUIAlphaMenu;
                    /* inlined from c:/eor/src2/engine/ui/e_uialphamenu.h */
  (this->m_def).m_nColumns = 0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uigridmenu.h */
  (this->field0_0x0).field0_0x0.m_layout = 1;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uigridmenu.h */
  (this->field0_0x0).field0_0x0.m_optJusty = 1;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uigridmenu.h */
  (this->field0_0x0).field0_0x0.m_optJustx = 0;
  (this->field0_0x0).m_pCurCol = (EUIMenu *)0x0;
  (this->field0_0x0).m_pCurRow = (EUIObjectNode *)0x0;
  (this->m_def).m_fontid = -1;
  (this->m_def).m_pointSize = 0.0;
  (this->m_def).m_nChars = 0;
  (this->m_def).m_charWH.field0_0x0.d[0] = 0.0;
  (this->m_def).m_charWH.field0_0x0.d[1] = 0.0;
  (this->m_def).m_colorIdxTxt = 1;
  (this->m_def).m_colorIdxBack = 1;
  (this->m_def).m_skipChar = 0;
  (this->m_def).m_selColorIdxBack = 0;
  (this->m_def).m_selColorIdxTxt = 0;
  (this->m_def).m_iconflags = 0;
  (this->m_def).m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  this->m_lastSelectedChar = 0;
  (this->m_def).m_nChars = 0;
  (this->m_def).m_nColumns = 0;
  this->m_ppColumns = (EUIMenu **)0x0;
  this->m_ppLetters = (EUITextIcon **)0x0;
  Init__12EUIAlphaMenuRC15EUIAlphaMenuDefPCUs(this,_def,szCharlist);
  return this;
}

void EUIAlphaMenu::Init(EUIAlphaMenuDef &_def, char *szCharlist) {
	float colHeight;
	u32 i;
	EUIIconDef iconDef;
	EUITextIconDef textIconDef;
	float x;
	float y;
	EUIMenu *this;
	float gap;
	u32 _flags;
	int _selColorIdx;
	int _colorIdx;
	EUIVirtualCtrl *pCtrl;
	f32 _pointsize;
	u32 _selColorIdx;
	u32 _colorIdx;
	u32 j;
	
  undefined *puVar1;
  float *pfVar2;
  EVec2 *pEVar3;
  int *piVar4;
  uint *puVar5;
  short sVar6;
  undefined4 uVar7;
  EUITextIcon *pEVar8;
  ulong *puVar9;
  EUIMenu **ppEVar10;
  EUIMenu *pEVar11;
  EUITextIcon **ppEVar12;
  EUIDynTextIcon *pEVar13;
  uint uVar14;
  ulong in_v0;
  ulong uVar15;
  size_t sVar16;
  ulong in_v1;
  ulong uVar17;
  ulong uVar18;
  EUIObjectNode__vtable *pEVar19;
  ulong uVar20;
  uint uVar21;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  uint uVar22;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float _yoff;
  float fVar27;
  EString2 local_100;
  float local_fc;
  EUIIconDef iconDef;
  EUITextIconDef textIconDef;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
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
  
  uVar20 = (ulong)(int)_def;
  uVar18 = (ulong)(int)this;
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (szCharlist == (char *)0x0) {
    CleanUp__12EUIAlphaMenu(this);
    this->m_ppLetters = (EUITextIcon **)0x0;
    (this->m_def).m_nChars = 0;
    (this->m_def).m_nColumns = 0;
    this->m_ppColumns = (EUIMenu **)0x0;
  }
  else {
    CleanUp__12EUIAlphaMenu(this);
    puVar1 = (undefined *)((int)&_def->m_fontid + 3);
    uVar22 = (uint)puVar1 & 7;
    uVar14 = (uint)_def & 7;
    uVar15 = (*(long *)(puVar1 + -uVar22) << (7 - uVar22) * 8 |
             in_v0 & 0xffffffffffffffffU >> (uVar22 + 1) * 8) & -1L << (8 - uVar14) * 8 |
             *(ulong *)((int)_def - uVar14) >> uVar14 * 8;
    puVar1 = (undefined *)((int)&_def->m_nChars + 3);
    uVar22 = (uint)puVar1 & 7;
    uVar14 = (uint)&_def->m_pointSize & 7;
    uVar17 = (*(long *)(puVar1 + -uVar22) << (7 - uVar22) * 8 |
             in_v1 & 0xffffffffffffffffU >> (uVar22 + 1) * 8) & -1L << (8 - uVar14) * 8 |
             *(ulong *)((int)&_def->m_pointSize - uVar14) >> uVar14 * 8;
    puVar1 = (undefined *)((int)&(_def->m_charWH).field0_0x0 + 7);
    uVar22 = (uint)puVar1 & 7;
    uVar14 = (uint)&_def->m_charWH & 7;
    uVar18 = (*(long *)(puVar1 + -uVar22) << (7 - uVar22) * 8 |
             uVar18 & 0xffffffffffffffffU >> (uVar22 + 1) * 8) & -1L << (8 - uVar14) * 8 |
             *(ulong *)((int)&_def->m_charWH - uVar14) >> uVar14 * 8;
    puVar1 = (undefined *)((int)&_def->m_colorIdxBack + 3);
    uVar22 = (uint)puVar1 & 7;
    uVar14 = (uint)&_def->m_selColorIdxBack & 7;
    uVar20 = (*(long *)(puVar1 + -uVar22) << (7 - uVar22) * 8 |
             uVar20 & 0xffffffffffffffffU >> (uVar22 + 1) * 8) & -1L << (8 - uVar14) * 8 |
             *(ulong *)((int)&_def->m_selColorIdxBack - uVar14) >> uVar14 * 8;
    puVar1 = (undefined *)((int)&(this->m_def).m_fontid + 3);
    uVar22 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar22);
    *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | uVar15 >> (7 - uVar22) * 8;
    uVar22 = (uint)&this->m_def & 7;
    puVar9 = (ulong *)((int)&this->m_def - uVar22);
    *puVar9 = uVar15 << uVar22 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    puVar1 = (undefined *)((int)&(this->m_def).m_nChars + 3);
    uVar22 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar22);
    *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | uVar17 >> (7 - uVar22) * 8;
    pfVar2 = &(this->m_def).m_pointSize;
    uVar22 = (uint)pfVar2 & 7;
    puVar9 = (ulong *)((int)pfVar2 - uVar22);
    *puVar9 = uVar17 << uVar22 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    puVar1 = (undefined *)((int)&(this->m_def).m_charWH.field0_0x0 + 7);
    uVar22 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar22);
    *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | uVar18 >> (7 - uVar22) * 8;
    pEVar3 = &(this->m_def).m_charWH;
    uVar22 = (uint)pEVar3 & 7;
    puVar9 = (ulong *)((int)pEVar3 - uVar22);
    *puVar9 = uVar18 << uVar22 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    puVar1 = (undefined *)((int)&(this->m_def).m_colorIdxBack + 3);
    uVar22 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar22);
    *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | uVar20 >> (7 - uVar22) * 8;
    piVar4 = &(this->m_def).m_selColorIdxBack;
    uVar22 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar22);
    *puVar9 = uVar20 << uVar22 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    puVar1 = (undefined *)((int)&_def->m_colorIdxTxt + 3);
    uVar22 = (uint)puVar1 & 7;
    uVar14 = (uint)&_def->m_selColorIdxTxt & 7;
    uVar18 = (*(long *)(puVar1 + -uVar22) << (7 - uVar22) * 8 |
             uVar15 & 0xffffffffffffffffU >> (uVar22 + 1) * 8) & -1L << (8 - uVar14) * 8 |
             *(ulong *)((int)&_def->m_selColorIdxTxt - uVar14) >> uVar14 * 8;
    puVar1 = (undefined *)((int)&_def->m_pCtrl + 3);
    uVar22 = (uint)puVar1 & 7;
    uVar14 = (uint)&_def->m_iconflags & 7;
    uVar20 = (*(long *)(puVar1 + -uVar22) << (7 - uVar22) * 8 |
             uVar17 & 0xffffffffffffffffU >> (uVar22 + 1) * 8) & -1L << (8 - uVar14) * 8 |
             *(ulong *)((int)&_def->m_iconflags - uVar14) >> uVar14 * 8;
    uVar7 = *(undefined4 *)&_def->m_skipChar;
    puVar1 = (undefined *)((int)&(this->m_def).m_colorIdxTxt + 3);
    uVar22 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar22);
    *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | uVar18 >> (7 - uVar22) * 8;
    piVar4 = &(this->m_def).m_selColorIdxTxt;
    uVar22 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar22);
    *puVar9 = uVar18 << uVar22 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    puVar1 = (undefined *)((int)&(this->m_def).m_pCtrl + 3);
    uVar22 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar22);
    *puVar9 = *puVar9 & -1L << (uVar22 + 1) * 8 | uVar20 >> (7 - uVar22) * 8;
    puVar5 = &(this->m_def).m_iconflags;
    uVar22 = (uint)puVar5 & 7;
    puVar9 = (ulong *)((int)puVar5 - uVar22);
    *puVar9 = uVar20 << uVar22 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar22) * 8;
    *(undefined4 *)&(this->m_def).m_skipChar = uVar7;
    sVar16 = strlen(szCharlist);
    uVar22 = (this->m_def).m_nChars;
    if ((ulong)(long)(int)uVar22 <= sVar16) {
      sVar16 = strlen(szCharlist);
      uVar22 = (uint)sVar16;
    }
    (this->m_def).m_nChars = uVar22;
    fVar27 = 0.0;
    ppEVar10 = (EUIMenu **)_memmanAlloc__FUiUi((this->m_def).m_nColumns << 2,4);
    uVar22 = (this->m_def).m_nColumns;
    this->m_ppColumns = ppEVar10;
    memset(ppEVar10,0,(long)(int)(uVar22 << 2));
    uVar22 = (this->m_def).m_nColumns;
    uVar14 = (this->m_def).m_nChars;
    if (uVar22 == 0) {
      trap(7);
    }
    uVar21 = (int)uVar14 / (int)uVar22;
    if ((int)uVar14 % (int)uVar22 != 0) {
      fVar27 = 1.0;
    }
    if (uVar22 == 0) {
      trap(7);
    }
    if ((int)uVar21 < 0) {
      fVar24 = (float)(uVar21 & 1 | uVar21 >> 1);
      fVar24 = fVar24 + fVar24;
      uVar22 = (this->m_def).m_nColumns;
    }
    else {
      fVar24 = (float)uVar21;
      uVar22 = (this->m_def).m_nColumns;
    }
    fVar25 = (this->m_def).m_charWH.field0_0x0.d[1];
    uVar14 = (int)(this->m_def).m_nChars / (int)uVar22;
    if (uVar22 == 0) {
      trap(7);
    }
    if ((int)uVar14 < 0) {
      fVar23 = (float)(uVar14 & 1 | uVar14 >> 1);
      fVar23 = fVar23 + fVar23;
      fVar26 = (this->field0_0x0).field0_0x0.m_optgap;
    }
    else {
      fVar23 = (float)uVar14;
      fVar26 = (this->field0_0x0).field0_0x0.m_optgap;
    }
    if (uVar22 != 0) {
      _yoff = 0.0;
      ppEVar10 = this->m_ppColumns;
      uVar22 = 0;
      while( true ) {
        pEVar11 = (EUIMenu *)__builtin_new(0x98);
        pEVar11 = __7EUIMenuiifff(pEVar11,-1,0,0.05,_yoff,_yoff);
        ppEVar10[uVar22] = pEVar11;
        pEVar19 = (this->m_ppColumns[uVar22]->field0_0x0).__vtable;
        (*(code *)pEVar19[2].GetPos)
                  ((int)this->m_ppColumns[uVar22]->m_maxBackShdrSize +
                   *(short *)&pEVar19[2].OnStickRepeat + -0x44,0,0,1);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_100.m_p = (short *)(this->m_def).m_charWH.field0_0x0.d[0];
                    /* end of inlined section */
        pEVar19 = (this->m_ppColumns[uVar22]->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        local_fc = (fVar27 + fVar24) * fVar25 + fVar26 * fVar23;
        (*(code *)pEVar19->RemoveChild)
                  ((int)this->m_ppColumns[uVar22]->m_maxBackShdrSize +
                   *(short *)&pEVar19->AddChild + -0x44,&local_100);
                    /* inlined from c:/eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uimenu.h */
        pEVar11 = this->m_ppColumns[uVar22];
        pEVar19 = (pEVar11->field0_0x0).__vtable;
        pEVar11->m_optgap = (this->field0_0x0).field0_0x0.m_optgap;
        (*(code *)pEVar19[2].Message)
                  ((int)pEVar11->m_maxBackShdrSize + *(short *)&pEVar19[2].SetBoxDims + -0x44);
                    /* end of inlined section */
        if ((this->m_def).m_nColumns <= uVar22 + 1) break;
        ppEVar10 = this->m_ppColumns;
        uVar22 = uVar22 + 1;
      }
    }
    ppEVar12 = (EUITextIcon **)_memmanAlloc__FUiUi(((this->m_def).m_nChars + 1) * 4,4);
    uVar22 = (this->m_def).m_nChars;
    this->m_ppLetters = ppEVar12;
    memset(ppEVar12,0,(long)(int)((uVar22 + 1) * 4));
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
    iconDef.m_flags = (this->m_def).m_iconflags;
    iconDef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    iconDef.m_pCtrl = (this->m_def).m_pCtrl;
    iconDef.m_selColorIdx = (this->m_def).m_selColorIdxBack;
    iconDef.m_colorIdx = (this->m_def).m_colorIdxBack;
    textIconDef.m_pointsize = (this->m_def).m_pointSize;
    textIconDef.m_selColorIdx = (this->m_def).m_selColorIdxTxt;
    textIconDef.m_colorIdx = (this->m_def).m_colorIdxTxt;
    iconDef.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
    textIconDef.m_maxChars = 2;
    textIconDef.m_retChar = -1;
    textIconDef.m_xAlign = E_FAX_LEFT;
                    /* end of inlined section */
    textIconDef.m_yAlign = E_FAY_TOP;
    if ((this->m_def).m_nChars != 0) {
      ppEVar12 = this->m_ppLetters;
      uVar22 = 0;
      while( true ) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_a8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_ac = 0;
                    /* end of inlined section */
                    /* end of inlined section */
        local_b0 = 0;
        pEVar13 = (EUIDynTextIcon *)__builtin_new(0x98);
        pEVar13 = __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                            (pEVar13,&textIconDef,&iconDef,(this->m_def).m_fontid,(EVec3 *)&local_b0
                            );
        ppEVar12[uVar22] = &pEVar13->field0_0x0;
        pEVar8 = this->m_ppLetters[uVar22];
        pEVar19 = (pEVar8->field0_0x0).field0_0x0.__vtable;
        sVar6 = *(short *)&pEVar19[2].StateChanged;
        __8EString2c(&local_100,*szCharlist);
        (*(code *)pEVar19[2].OnButtonRepeat)
                  ((int)(pEVar8->field0_0x0).m_maxBackShdrSize[-0xc] + sVar6 + 4,local_100.m_p,0);
                    /* inlined from /eor/src2/common/datastruc/e_string2.h */
        Deallocate__8EString2PUs(&local_100,local_100.m_p);
                    /* end of inlined section */
        if ((ulong)(ushort)(this->m_def).m_skipChar == (long)*szCharlist) {
          SetFlagsPropigate__13EUIObjectNodeUib
                    ((EUIObjectNode *)this->m_ppLetters[uVar22],0x10,false);
          ppEVar12 = this->m_ppLetters;
        }
        else {
          ppEVar12 = this->m_ppLetters;
        }
        szCharlist = szCharlist + 1;
        pEVar19 = (ppEVar12[uVar22]->field0_0x0).field0_0x0.__vtable;
        (*(code *)pEVar19->RemoveChild)
                  ((int)(ppEVar12[uVar22]->field0_0x0).m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar19->AddChild + 4,&(this->m_def).m_charWH);
        if ((this->m_def).m_nChars <= uVar22 + 1) break;
        ppEVar12 = this->m_ppLetters;
        uVar22 = uVar22 + 1;
      }
    }
    uVar22 = 0;
    if ((this->m_def).m_nChars != 0) {
      uVar14 = (this->m_def).m_nColumns;
      do {
        uVar21 = 0;
        if (uVar14 != 0) {
          ppEVar12 = this->m_ppLetters;
          while( true ) {
            ppEVar12 = ppEVar12 + uVar22;
            if (*ppEVar12 == (EUITextIcon *)0x0) break;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_a8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_ac = 0;
                    /* end of inlined section */
            ppEVar10 = this->m_ppColumns + uVar21;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_b0 = 0;
                    /* end of inlined section */
            uVar21 = uVar21 + 1;
            uVar22 = uVar22 + 1;
            pEVar19 = ((*ppEVar10)->field0_0x0).__vtable;
            (*(code *)pEVar19[2].SetBoxDims)
                      ((int)(*ppEVar10)->m_maxBackShdrSize + *(short *)&pEVar19[2].SetPos + -0x44,
                       *ppEVar12,&local_b0);
            if ((this->m_def).m_nColumns <= uVar21) break;
            ppEVar12 = this->m_ppLetters;
          }
        }
        if ((this->m_def).m_nChars <= uVar22) break;
        uVar14 = (this->m_def).m_nColumns;
      } while( true );
    }
    if ((this->m_def).m_nColumns != 0) {
      pEVar19 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
      uVar22 = 0;
      while( true ) {
        (*(code *)pEVar19[3].OnButtonRepeat)
                  ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
                   *(short *)&pEVar19[3].StateChanged + -0x44,this->m_ppColumns[uVar22]);
        if ((this->m_def).m_nColumns <= uVar22 + 1) break;
        pEVar19 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
        uVar22 = uVar22 + 1;
      }
    }
  }
                    /* end of inlined section */
  return;
}

void EUIAlphaMenu::Init(EUIAlphaMenuDef &_def, u16 *szLongCharlist) {
	float colHeight;
	u32 i;
	EUIIconDef iconDef;
	EUITextIconDef textIconDef;
	float x;
	float y;
	EUIMenu *this;
	float gap;
	u32 _flags;
	int _selColorIdx;
	int _colorIdx;
	EUIVirtualCtrl *pCtrl;
	f32 _pointsize;
	u32 _selColorIdx;
	u32 _colorIdx;
	u32 j;
	
  undefined *puVar1;
  float *pfVar2;
  EVec2 *pEVar3;
  int *piVar4;
  uint *puVar5;
  short sVar6;
  undefined4 uVar7;
  EUITextIcon *pEVar8;
  ulong *puVar9;
  uint uVar10;
  uint uVar11;
  EUIMenu **ppEVar12;
  EUIMenu *pEVar13;
  EUITextIcon **ppEVar14;
  EUIDynTextIcon *pEVar15;
  ulong in_v0;
  ulong uVar16;
  ulong in_v1;
  ulong uVar17;
  ulong uVar18;
  EUIObjectNode__vtable *pEVar19;
  ulong uVar20;
  uint uVar21;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float _yoff;
  float fVar26;
  EString2 local_100;
  float local_fc;
  EUIIconDef iconDef;
  EUITextIconDef textIconDef;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
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
  
  uVar20 = (ulong)(int)_def;
  uVar18 = (ulong)(int)this;
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  if (szLongCharlist == (short *)0x0) {
    CleanUp__12EUIAlphaMenu(this);
    this->m_ppLetters = (EUITextIcon **)0x0;
    (this->m_def).m_nChars = 0;
    (this->m_def).m_nColumns = 0;
    this->m_ppColumns = (EUIMenu **)0x0;
  }
  else {
    CleanUp__12EUIAlphaMenu(this);
    puVar1 = (undefined *)((int)&_def->m_fontid + 3);
    uVar11 = (uint)puVar1 & 7;
    uVar10 = (uint)_def & 7;
    uVar16 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
             in_v0 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar10) * 8 |
             *(ulong *)((int)_def - uVar10) >> uVar10 * 8;
    puVar1 = (undefined *)((int)&_def->m_nChars + 3);
    uVar11 = (uint)puVar1 & 7;
    uVar10 = (uint)&_def->m_pointSize & 7;
    uVar17 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
             in_v1 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar10) * 8 |
             *(ulong *)((int)&_def->m_pointSize - uVar10) >> uVar10 * 8;
    puVar1 = (undefined *)((int)&(_def->m_charWH).field0_0x0 + 7);
    uVar11 = (uint)puVar1 & 7;
    uVar10 = (uint)&_def->m_charWH & 7;
    uVar18 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
             uVar18 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar10) * 8 |
             *(ulong *)((int)&_def->m_charWH - uVar10) >> uVar10 * 8;
    puVar1 = (undefined *)((int)&_def->m_colorIdxBack + 3);
    uVar11 = (uint)puVar1 & 7;
    uVar10 = (uint)&_def->m_selColorIdxBack & 7;
    uVar20 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
             uVar20 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar10) * 8 |
             *(ulong *)((int)&_def->m_selColorIdxBack - uVar10) >> uVar10 * 8;
    puVar1 = (undefined *)((int)&(this->m_def).m_fontid + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar11);
    *puVar9 = *puVar9 & -1L << (uVar11 + 1) * 8 | uVar16 >> (7 - uVar11) * 8;
    uVar11 = (uint)&this->m_def & 7;
    puVar9 = (ulong *)((int)&this->m_def - uVar11);
    *puVar9 = uVar16 << uVar11 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(this->m_def).m_nChars + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar11);
    *puVar9 = *puVar9 & -1L << (uVar11 + 1) * 8 | uVar17 >> (7 - uVar11) * 8;
    pfVar2 = &(this->m_def).m_pointSize;
    uVar11 = (uint)pfVar2 & 7;
    puVar9 = (ulong *)((int)pfVar2 - uVar11);
    *puVar9 = uVar17 << uVar11 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(this->m_def).m_charWH.field0_0x0 + 7);
    uVar11 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar11);
    *puVar9 = *puVar9 & -1L << (uVar11 + 1) * 8 | uVar18 >> (7 - uVar11) * 8;
    pEVar3 = &(this->m_def).m_charWH;
    uVar11 = (uint)pEVar3 & 7;
    puVar9 = (ulong *)((int)pEVar3 - uVar11);
    *puVar9 = uVar18 << uVar11 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(this->m_def).m_colorIdxBack + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar11);
    *puVar9 = *puVar9 & -1L << (uVar11 + 1) * 8 | uVar20 >> (7 - uVar11) * 8;
    piVar4 = &(this->m_def).m_selColorIdxBack;
    uVar11 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar11);
    *puVar9 = uVar20 << uVar11 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&_def->m_colorIdxTxt + 3);
    uVar11 = (uint)puVar1 & 7;
    uVar10 = (uint)&_def->m_selColorIdxTxt & 7;
    uVar18 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
             uVar16 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar10) * 8 |
             *(ulong *)((int)&_def->m_selColorIdxTxt - uVar10) >> uVar10 * 8;
    puVar1 = (undefined *)((int)&_def->m_pCtrl + 3);
    uVar11 = (uint)puVar1 & 7;
    uVar10 = (uint)&_def->m_iconflags & 7;
    uVar20 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
             uVar17 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar10) * 8 |
             *(ulong *)((int)&_def->m_iconflags - uVar10) >> uVar10 * 8;
    uVar7 = *(undefined4 *)&_def->m_skipChar;
    puVar1 = (undefined *)((int)&(this->m_def).m_colorIdxTxt + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar11);
    *puVar9 = *puVar9 & -1L << (uVar11 + 1) * 8 | uVar18 >> (7 - uVar11) * 8;
    piVar4 = &(this->m_def).m_selColorIdxTxt;
    uVar11 = (uint)piVar4 & 7;
    puVar9 = (ulong *)((int)piVar4 - uVar11);
    *puVar9 = uVar18 << uVar11 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(this->m_def).m_pCtrl + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar11);
    *puVar9 = *puVar9 & -1L << (uVar11 + 1) * 8 | uVar20 >> (7 - uVar11) * 8;
    puVar5 = &(this->m_def).m_iconflags;
    uVar11 = (uint)puVar5 & 7;
    puVar9 = (ulong *)((int)puVar5 - uVar11);
    *puVar9 = uVar20 << uVar11 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    *(undefined4 *)&(this->m_def).m_skipChar = uVar7;
    uVar10 = StrLenU16__8EString2PCUs(szLongCharlist);
    uVar11 = (this->m_def).m_nChars;
    if (uVar11 <= uVar10) {
      uVar11 = StrLenU16__8EString2PCUs(szLongCharlist);
    }
    (this->m_def).m_nChars = uVar11;
    fVar26 = 0.0;
    ppEVar12 = (EUIMenu **)_memmanAlloc__FUiUi((this->m_def).m_nColumns << 2,4);
    uVar11 = (this->m_def).m_nColumns;
    this->m_ppColumns = ppEVar12;
    memset(ppEVar12,0,(long)(int)(uVar11 << 2));
    uVar11 = (this->m_def).m_nColumns;
    uVar10 = (this->m_def).m_nChars;
    if (uVar11 == 0) {
      trap(7);
    }
    uVar21 = (int)uVar10 / (int)uVar11;
    if ((int)uVar10 % (int)uVar11 != 0) {
      fVar26 = 1.0;
    }
    if (uVar11 == 0) {
      trap(7);
    }
    if ((int)uVar21 < 0) {
      fVar23 = (float)(uVar21 & 1 | uVar21 >> 1);
      fVar23 = fVar23 + fVar23;
      uVar11 = (this->m_def).m_nColumns;
    }
    else {
      fVar23 = (float)uVar21;
      uVar11 = (this->m_def).m_nColumns;
    }
    fVar24 = (this->m_def).m_charWH.field0_0x0.d[1];
    uVar10 = (int)(this->m_def).m_nChars / (int)uVar11;
    if (uVar11 == 0) {
      trap(7);
    }
    if ((int)uVar10 < 0) {
      fVar22 = (float)(uVar10 & 1 | uVar10 >> 1);
      fVar22 = fVar22 + fVar22;
      fVar25 = (this->field0_0x0).field0_0x0.m_optgap;
    }
    else {
      fVar22 = (float)uVar10;
      fVar25 = (this->field0_0x0).field0_0x0.m_optgap;
    }
    if (uVar11 != 0) {
      _yoff = 0.0;
      ppEVar12 = this->m_ppColumns;
      uVar11 = 0;
      while( true ) {
        pEVar13 = (EUIMenu *)__builtin_new(0x98);
        pEVar13 = __7EUIMenuiifff(pEVar13,-1,0,0.05,_yoff,_yoff);
        ppEVar12[uVar11] = pEVar13;
        pEVar19 = (this->m_ppColumns[uVar11]->field0_0x0).__vtable;
        (*(code *)pEVar19[2].GetPos)
                  ((int)this->m_ppColumns[uVar11]->m_maxBackShdrSize +
                   *(short *)&pEVar19[2].OnStickRepeat + -0x44,0,0,1);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_100.m_p = (short *)(this->m_def).m_charWH.field0_0x0.d[0];
                    /* end of inlined section */
        pEVar19 = (this->m_ppColumns[uVar11]->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        local_fc = (fVar26 + fVar23) * fVar24 + fVar25 * fVar22;
        (*(code *)pEVar19->RemoveChild)
                  ((int)this->m_ppColumns[uVar11]->m_maxBackShdrSize +
                   *(short *)&pEVar19->AddChild + -0x44,&local_100);
                    /* inlined from c:/eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uimenu.h */
        pEVar13 = this->m_ppColumns[uVar11];
        pEVar19 = (pEVar13->field0_0x0).__vtable;
        pEVar13->m_optgap = (this->field0_0x0).field0_0x0.m_optgap;
        (*(code *)pEVar19[2].Message)
                  ((int)pEVar13->m_maxBackShdrSize + *(short *)&pEVar19[2].SetBoxDims + -0x44);
                    /* end of inlined section */
        if ((this->m_def).m_nColumns <= uVar11 + 1) break;
        ppEVar12 = this->m_ppColumns;
        uVar11 = uVar11 + 1;
      }
    }
    ppEVar14 = (EUITextIcon **)_memmanAlloc__FUiUi(((this->m_def).m_nChars + 1) * 4,4);
    uVar11 = (this->m_def).m_nChars;
    this->m_ppLetters = ppEVar14;
    memset(ppEVar14,0,(long)(int)((uVar11 + 1) * 4));
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
    iconDef.m_flags = (this->m_def).m_iconflags;
    iconDef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    iconDef.m_pCtrl = (this->m_def).m_pCtrl;
    iconDef.m_selColorIdx = (this->m_def).m_selColorIdxBack;
    iconDef.m_colorIdx = (this->m_def).m_colorIdxBack;
    textIconDef.m_pointsize = (this->m_def).m_pointSize;
    textIconDef.m_selColorIdx = (this->m_def).m_selColorIdxTxt;
    textIconDef.m_colorIdx = (this->m_def).m_colorIdxTxt;
    iconDef.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uiicon.h */
    textIconDef.m_maxChars = 2;
    textIconDef.m_retChar = -1;
    textIconDef.m_xAlign = E_FAX_LEFT;
                    /* end of inlined section */
    textIconDef.m_yAlign = E_FAY_TOP;
    if ((this->m_def).m_nChars != 0) {
      ppEVar14 = this->m_ppLetters;
      uVar11 = 0;
      while( true ) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_a8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_ac = 0;
                    /* end of inlined section */
                    /* end of inlined section */
        local_b0 = 0;
        pEVar15 = (EUIDynTextIcon *)__builtin_new(0x98);
        pEVar15 = __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                            (pEVar15,&textIconDef,&iconDef,(this->m_def).m_fontid,(EVec3 *)&local_b0
                            );
        ppEVar14[uVar11] = &pEVar15->field0_0x0;
        pEVar8 = this->m_ppLetters[uVar11];
        pEVar19 = (pEVar8->field0_0x0).field0_0x0.__vtable;
        sVar6 = *(short *)&pEVar19[2].StateChanged;
        __8EString2Us(&local_100,*szLongCharlist);
        (*(code *)pEVar19[2].OnButtonRepeat)
                  ((int)(pEVar8->field0_0x0).m_maxBackShdrSize[-0xc] + sVar6 + 4,local_100.m_p,0);
                    /* inlined from /eor/src2/common/datastruc/e_string2.h */
        Deallocate__8EString2PUs(&local_100,local_100.m_p);
                    /* end of inlined section */
        if ((this->m_def).m_skipChar == *szLongCharlist) {
          SetFlagsPropigate__13EUIObjectNodeUib
                    ((EUIObjectNode *)this->m_ppLetters[uVar11],0x10,false);
          ppEVar14 = this->m_ppLetters;
        }
        else {
          ppEVar14 = this->m_ppLetters;
        }
        szLongCharlist = szLongCharlist + 1;
        pEVar19 = (ppEVar14[uVar11]->field0_0x0).field0_0x0.__vtable;
        (*(code *)pEVar19->RemoveChild)
                  ((int)(ppEVar14[uVar11]->field0_0x0).m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar19->AddChild + 4,&(this->m_def).m_charWH);
        if ((this->m_def).m_nChars <= uVar11 + 1) break;
        ppEVar14 = this->m_ppLetters;
        uVar11 = uVar11 + 1;
      }
    }
    uVar11 = 0;
    if ((this->m_def).m_nChars != 0) {
      uVar10 = (this->m_def).m_nColumns;
      do {
        uVar21 = 0;
        if (uVar10 != 0) {
          ppEVar14 = this->m_ppLetters;
          while( true ) {
            ppEVar14 = ppEVar14 + uVar11;
            if (*ppEVar14 == (EUITextIcon *)0x0) break;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_a8 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_ac = 0;
                    /* end of inlined section */
            ppEVar12 = this->m_ppColumns + uVar21;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            local_b0 = 0;
                    /* end of inlined section */
            uVar21 = uVar21 + 1;
            uVar11 = uVar11 + 1;
            pEVar19 = ((*ppEVar12)->field0_0x0).__vtable;
            (*(code *)pEVar19[2].SetBoxDims)
                      ((int)(*ppEVar12)->m_maxBackShdrSize + *(short *)&pEVar19[2].SetPos + -0x44,
                       *ppEVar14,&local_b0);
            if ((this->m_def).m_nColumns <= uVar21) break;
            ppEVar14 = this->m_ppLetters;
          }
        }
        if ((this->m_def).m_nChars <= uVar11) break;
        uVar10 = (this->m_def).m_nColumns;
      } while( true );
    }
    if ((this->m_def).m_nColumns != 0) {
      pEVar19 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
      uVar11 = 0;
      while( true ) {
        (*(code *)pEVar19[3].OnButtonRepeat)
                  ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
                   *(short *)&pEVar19[3].StateChanged + -0x44,this->m_ppColumns[uVar11]);
        if ((this->m_def).m_nColumns <= uVar11 + 1) break;
        pEVar19 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
        uVar11 = uVar11 + 1;
      }
    }
  }
                    /* end of inlined section */
  return;
}

void EUIAlphaMenu::CleanUp() {
	u32 i;
	
  EUIMenu *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  EUITextIcon *pEVar3;
  EUIMenu **ppEVar4;
  EUITextIcon **ppEVar5;
  uint uVar6;
  uint uVar7;
  
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this);
  uVar6 = 0;
  if ((this->m_def).m_nColumns != 0) {
    ppEVar4 = this->m_ppColumns;
    while( true ) {
      pEVar1 = ppEVar4[uVar6];
      if (pEVar1 != (EUIMenu *)0x0) {
        pEVar2 = (pEVar1->field0_0x0).__vtable;
        (*(code *)pEVar2->Draw)
                  ((int)pEVar1->m_maxBackShdrSize + *(short *)&pEVar2->Update + -0x44,3);
      }
      uVar6 = uVar6 + 1;
      if ((this->m_def).m_nColumns <= uVar6) break;
      ppEVar4 = this->m_ppColumns;
    }
  }
  if (this->m_ppColumns == (EUIMenu **)0x0) {
    uVar6 = (this->m_def).m_nChars;
  }
  else {
    _memmanFree__FPv(this->m_ppColumns);
    uVar6 = (this->m_def).m_nChars;
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    ppEVar5 = this->m_ppLetters;
    while( true ) {
      pEVar3 = ppEVar5[uVar7];
      if (pEVar3 != (EUITextIcon *)0x0) {
        pEVar2 = (pEVar3->field0_0x0).field0_0x0.__vtable;
        (*(code *)pEVar2->Draw)
                  ((int)(pEVar3->field0_0x0).m_maxBackShdrSize[-0xc] + *(short *)&pEVar2->Update + 4
                   ,3);
      }
      uVar7 = uVar7 + 1;
      if ((this->m_def).m_nChars <= uVar7) break;
      ppEVar5 = this->m_ppLetters;
    }
  }
  if (this->m_ppLetters == (EUITextIcon **)0x0) {
    (this->m_def).m_nChars = 0;
  }
  else {
    _memmanFree__FPv(this->m_ppLetters);
    (this->m_def).m_nChars = 0;
  }
  this->m_ppColumns = (EUIMenu **)0x0;
  this->m_ppLetters = (EUITextIcon **)0x0;
  (this->m_def).m_nColumns = 0;
  return;
}

void EUIAlphaMenu::SetLetterBackShader(int id) {
	u32 i;
	
  EUITextIcon **ppEVar1;
  uint uVar2;
  
  if ((this->m_def).m_nChars != 0) {
    ppEVar1 = this->m_ppLetters;
    uVar2 = 0;
    while( true ) {
      InitActiveShader__7EUIIconi(&ppEVar1[uVar2]->field0_0x0,id);
      if ((this->m_def).m_nChars <= uVar2 + 1) break;
      ppEVar1 = this->m_ppLetters;
      uVar2 = uVar2 + 1;
    }
  }
  return;
}

void EUIAlphaMenu::Message(EUIObjectNode *pChild, u32 messId) {
  ENodeListNode *pEVar1;
  EUIObjectNode *pEVar2;
  short *psVar3;
  
  if (messId == 1) {
                    /* inlined from c:/eor/src2/engine/ui/e_uimenu.h */
    pEVar1 = pChild[1].m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    if (*(short *)&pEVar1[0xc].data == -1) {
      psVar3 = (short *)(*(code *)pEVar1[4].pNext[0xd].pNext)
                                  ((int)&pEVar1->data + (int)*(short *)&pEVar1[4].pNext[0xd].pLast);
                    /* end of inlined section */
      this->m_lastSelectedChar = *psVar3;
    }
    else {
      this->m_lastSelectedChar = *(short *)&pEVar1[0xc].data;
    }
  }
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.m_pParent;
  if (pEVar2 != (EUIObjectNode *)0x0) {
    (*(code *)pEVar2->__vtable[1].EUIObjectNode)
              ((int)&(pEVar2->m_ChildList).field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar2->__vtable + 1),this,messId);
  }
  return;
}

void EUIAlphaMenu::SetPointSize(float size) {
	NLIterator nli;
	NLIterator i;
	EUIObjectNode *pChild;
	NLIterator i;
	NLIterator i;
	EUITextIcon *this;
	float size;
	NLIterator i;
	void *pNode;
	
  int **ppiVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  ppiVar4 = (int **)(this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (ppiVar4 != (int **)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    ppiVar1 = (int **)*ppiVar4;
    while( true ) {
      iVar3 = 0;
      if (*ppiVar1 != (int *)0x0) {
        iVar3 = **ppiVar1;
      }
                    /* end of inlined section */
      if (iVar3 == 0) {
        ppiVar4 = (int **)ppiVar4[2];
      }
      else {
                    /* inlined from c:/eor/src2/engine/ui/e_uitexticon.h */
        iVar2 = *(int *)(iVar3 + 0xc);
        while( true ) {
          *(float *)(iVar3 + 0x84) = size;
          iVar3 = 0;
          if (*(int **)(iVar2 + 8) != (int *)0x0) {
            iVar3 = **(int **)(iVar2 + 8);
          }
                    /* end of inlined section */
          if (iVar3 == 0) break;
          iVar2 = *(int *)(iVar3 + 0xc);
        }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        ppiVar4 = (int **)ppiVar4[2];
      }
                    /* end of inlined section */
      if (ppiVar4 == (int **)0x0) break;
      ppiVar1 = (int **)*ppiVar4;
    }
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

void EUIAlphaMenu::~EUIAlphaMenu(int __in_chrg) {
	EUIGridMenu *this;
	int __in_chrg;
	
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_12EUIAlphaMenu;
  CleanUp__12EUIAlphaMenu(this);
                    /* inlined from c:/eor/src2/engine/ui/e_uigridmenu.h */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_11EUIGridMenu;
  ___7EUIMenu((EUIMenu *)this,__in_chrg);
  return;
}

char EUIAlphaMenu::GetLastSelChar() {
  return *(char *)&this->m_lastSelectedChar;
}
