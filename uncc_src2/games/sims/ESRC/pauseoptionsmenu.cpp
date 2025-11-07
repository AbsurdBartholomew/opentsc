// STATUS: NOT STARTED

#include "pauseoptionsmenu.h"

__vtbl_ptr_type EPauseOptionsMenu virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseOptionsMenu::~EPauseOptionsMenu,
		/* .__delta2 = */ -25776
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseOptionsMenu::Update,
		/* .__delta2 = */ -18776
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseOptionsMenu::Draw,
		/* .__delta2 = */ -21016
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
		/* .__pfn = */ &EPauseOptionsMenu::Message,
		/* .__delta2 = */ -16064
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
		/* .__pfn = */ &EPauseOptionsMenu::OnButtonRepeat,
		/* .__delta2 = */ -14936
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
		/* .__pfn = */ &EUIMenu::AddOpt,
		/* .__delta2 = */ 8456
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
		/* .__pfn = */ &EUIMenu::SetCurOpt,
		/* .__delta2 = */ 7336
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
		/* .__pfn = */ &EPauseOptionsMenu::NextItem,
		/* .__delta2 = */ -15576
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseOptionsMenu::PrevItem,
		/* .__delta2 = */ -15528
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

__vtbl_ptr_type EPauseMenuRangeItem virtual table[23] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMenuRangeItem::~EPauseMenuRangeItem,
		/* .__delta2 = */ -28856
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMenuRangeItem::Update,
		/* .__delta2 = */ -28544
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMenuRangeItem::Draw,
		/* .__delta2 = */ -28224
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
		/* .__pfn = */ &EPauseMenuRangeItem::OnButtonRepeat,
		/* .__delta2 = */ -28664
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
		/* .__pfn = */ &EPauseMenuRangeItem::SetText,
		/* .__delta2 = */ -27128
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

__vtbl_ptr_type EPauseMenuBoolItem virtual table[23] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMenuBoolItem::~EPauseMenuBoolItem,
		/* .__delta2 = */ -31208
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMenuBoolItem::Update,
		/* .__delta2 = */ -30968
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMenuBoolItem::Draw,
		/* .__delta2 = */ -30672
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
		/* .__pfn = */ &EPauseMenuBoolItem::OnButtonRepeat,
		/* .__delta2 = */ -31016
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
		/* .__pfn = */ &EPauseMenuBoolItem::SetText,
		/* .__delta2 = */ -29560
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

EPauseMenuBoolItem* EPauseMenuBoolItem::EPauseMenuBoolItem() {
	EUIVirtualCtrl *pBase;
	EUIIconDef icondef;
	EUITextIconDef textdef;
	EUIVirtualCtrl *pCtrl;
	EUIObjectNode *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  uint uVar5;
  ulong *puVar6;
  EUiMonitorAutoRepeat *pEVar7;
  ERShader *pEVar8;
  EUIIconDef__vtable *local_120;
  undefined4 local_11c;
  undefined4 local_118;
  EUITextIconDef local_110;
  EUIIconDef local_f0;
  EUIIconDef icondef;
  EUITextIconDef textdef;
  
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_110.m_maxChars = 0x20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_118 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_11c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_120 = (EUIIconDef__vtable *)0x0;
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
                    /* end of inlined section */
  local_f0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&this->field0_0x0,&local_110,&local_f0,-1,(EVec3 *)&local_120);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_18EPauseMenuBoolItem;
  pEVar7 = (EUiMonitorAutoRepeat *)__builtin_new(0x104);
  pEVar7 = __20EUiMonitorAutoRepeatR13EUIObjectNodeff(pEVar7,(EUIObjectNode *)this,0.25,0.25);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pAutoRepeatMonitor = pEVar7;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar8 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xe3e852f9,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pLeftArrowShdr = pEVar8;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar8 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x19e76f9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pRightArrowShdr = pEVar8;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  icondef.m_flags = 0;
  icondef.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_selColorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  icondef.m_pCtrl = &(_globals.m_pCtrlPad)->field0_0x0;
  textdef.m_maxChars = 0x20;
  textdef.m_xAlign = E_FAX_LEFT;
  textdef.m_yAlign = E_FAY_TOP;
  textdef.m_selColorIdx = 6;
  textdef.m_pointsize = 16.0;
  textdef.m_colorIdx = 1;
                    /* end of inlined section */
  textdef.m_retChar = -1;
  SetFont__11EUITextIconi((EUITextIcon *)this,-0x2080f4e9);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_120 = (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = 0x3d23d70a;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] = 0.04;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] = 0.25;
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
  (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_120;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&this->field0_0x0,&textdef);
  InitString__17EUIStaticTextIconPCUsi(&this->field0_0x0,(short *)0x0,0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  this->m_fDataX = 0.5;
  *(undefined4 *)&this->m_bData = 0;
  *(undefined4 *)&this->m_bChanged = 0;
  return this;
}

void EPauseMenuBoolItem::~EPauseMenuBoolItem(int __in_chrg) {
	EUIStaticTextIcon *this;
	void *ptr;
	
  EUiMonitorAutoRepeat *pEVar1;
  
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_18EPauseMenuBoolItem;
  while (this->m_pLeftArrowShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pLeftArrowShdr->field0_0x0);
    this->m_pLeftArrowShdr = (ERShader *)0x0;
  }
  while (this->m_pRightArrowShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pRightArrowShdr->field0_0x0);
    this->m_pRightArrowShdr = (ERShader *)0x0;
  }
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pAutoRepeatMonitor;
  if (pEVar1 != (EUiMonitorAutoRepeat *)0x0) {
    (*(code *)pEVar1->__vtable[1].EUiMonitorAutoRepeat)
              ((int)pEVar1->m_totalDt + *(short *)(pEVar1->__vtable + 1) + -0xc,3);
  }
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pAutoRepeatMonitor =
       (EUiMonitorAutoRepeat *)0x0;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)this,0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EPauseMenuBoolItem::OnButtonRepeat(int buttonId) {
  if ((buttonId == 0x2000) || (buttonId == 0x8000)) {
    *(undefined4 *)&this->m_bChanged = 1;
    *(uint *)&this->m_bData = *(uint *)&this->m_bData ^ 1;
  }
  return;
}

void EPauseMenuBoolItem::Update() {
	EUIObjectNode *this;
	EControllerContext *pPadContext;
	int i;
	int j;
	
  EUiMonitorAutoRepeat *this_00;
  EControllerContext *this_01;
  int iVar1;
  int iVar2;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) == 0) {
    return;
  }
  this_01 = LockControllerFocus__18EControllerManagerib(_pCtrlMan,0,true);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
  _11EPausePanel_m_pDPadRight = _7DPadWin_m_pRightShdr;
  _11EPausePanel_m_pDPadLeft = _7DPadWin_m_pLeftShdr;
                    /* end of inlined section */
  this_00 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pAutoRepeatMonitor;
  *(undefined4 *)&this->m_bChanged = 0;
  UpdateButtons__20EUiMonitorAutoRepeati(this_00,0);
  iVar1 = GetPressedCount__18EControllerContexti(this_01,0x2000);
  iVar2 = 0;
  if (iVar1 == 0) {
    iVar1 = GetPressedCount__18EControllerContexti(this_01,0x8000);
    iVar2 = 0;
    if (iVar1 == 0) goto LAB_001b8804;
  }
  for (; iVar1 = GetPressedCount__18EControllerContexti(this_01,0x2000), iVar2 < iVar1;
      iVar2 = iVar2 + 1) {
    *(uint *)&this->m_bData = *(uint *)&this->m_bData ^ 1;
  }
  for (iVar1 = 0; iVar2 = GetPressedCount__18EControllerContexti(this_01,0x8000), iVar1 < iVar2;
      iVar1 = iVar1 + 1) {
    *(uint *)&this->m_bData = *(uint *)&this->m_bData ^ 1;
  }
  *(undefined4 *)&this->m_bChanged = 1;
LAB_001b8804:
  ReleaseControllerFocus__18EControllerManagerib(_pCtrlMan,0,true);
  return;
}

void EPauseMenuBoolItem::Draw(ERC *prc) {
	float fLargestWidth;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	EUIObjectNode *this;
	EControllerContext *pPadContext;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	
  ERFont *pEVar1;
  short *psVar2;
  EControllerContext *this_00;
  uint uVar3;
  ERShader *this_01;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  EStorable__vtable *pEVar4;
  undefined local_c0 [16];
  undefined local_b0 [16];
  EStorable__vtable *local_a0;
  EStorable__vtable *local_9c;
  ENodeListNode *local_98;
  ENodeListNode *local_94;
  int local_90;
  int local_8c;
  EHashTableNode *local_88;
  EHashTableNode *local_84;
  EHashTableNode **local_80;
  uint uStack_7c;
  EFontSize *local_70;
  uint uStack_6c;
  EFontSize *local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (EFontSize *)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (EFontSize *)unaff_s1;
  uStack_6c = (uint)((ulong)unaff_s1 >> 0x20);
  local_80 = (EHashTableNode **)unaff_s0;
  uStack_7c = (uint)((ulong)unaff_s0 >> 0x20);
  Draw__11EUITextIconP3ERC((EUITextIcon *)this,prc);
  Select__6ERFontP3ERC((this->field0_0x0).field0_0x0.m_pFont,prc);
  if (*(int *)&this->m_bData == 0) {
    psVar2 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"off_boolean_value");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_c0._0_4_ = (EStorable__vtable *)this->m_fDataX;
    local_c0._4_4_ =
         (EStorable__vtable *)
         (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2];
    local_a0 = local_c0._0_4_;
    local_9c = local_c0._4_4_;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).field0_0x0.m_pFont,prc,psVar2,true,(EVec2 *)(local_b0 + 0x10),
               E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0);
  }
  else {
    psVar2 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"on_boolean_value");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_c0._0_4_ = (EStorable__vtable *)this->m_fDataX;
    local_c0._4_4_ =
         (EStorable__vtable *)
         (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2];
    local_b0._0_4_ = local_c0._0_4_;
    local_b0._4_4_ = local_c0._4_4_;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              ((this->field0_0x0).field0_0x0.m_pFont,prc,psVar2,true,(EVec2 *)local_b0,E_FAX_LEFT,
               E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  }
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.m_pFont;
  psVar2 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"off_boolean_value");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_c0,pEVar1,SUB41(psVar2,0),(EWindow *)&pGifTag1);
  pEVar4 = local_c0._0_4_;
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.m_pFont;
  psVar2 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"on_boolean_value");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_c0,pEVar1,SUB41(psVar2,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  if ((float)pEVar4 < (float)local_c0._0_4_) {
    pEVar1 = (this->field0_0x0).field0_0x0.m_pFont;
    psVar2 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"on_boolean_value");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_b0,pEVar1,SUB41(psVar2,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    pEVar4 = local_b0._0_4_;
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) != 0) {
    this_00 = LockControllerFocus__18EControllerManagerib(_pCtrlMan,0,true);
    Select__8ERShaderP3ERCi(this->m_pLeftArrowShdr,prc,0);
    uVar3 = GetButtonsDown__18EControllerContexti(this_00,0x8000);
    if (uVar3 == 0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_c0._4_4_ =
           (EStorable__vtable *)
           ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2] -
           8.0 / (float)_pGfx->m_yscreen);
      local_c0._0_4_ = (EStorable__vtable *)(this->m_fDataX - 16.0 / (float)_pGfx->m_xscreen);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_b0._4_4_ = (EStorable__vtable *)0x3f800000;
      local_b0._0_4_ = (EStorable__vtable *)0x3f800000;
      local_84 = (EHashTableNode *)0x3f800000;
      local_88 = (EHashTableNode *)0x3f800000;
      local_8c = 0x3f800000;
      local_90 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_c0,local_b0,
                 &local_90);
      this_01 = this->m_pRightArrowShdr;
    }
    else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_c0._4_4_ =
           (EStorable__vtable *)
           ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2] -
           8.0 / (float)_pGfx->m_yscreen);
      local_c0._0_4_ = (EStorable__vtable *)(this->m_fDataX - 16.0 / (float)_pGfx->m_xscreen);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_b0._4_4_ = (EStorable__vtable *)0x3f800000;
      local_b0._0_4_ = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_c0,local_b0,
                 0x35f520);
      this_01 = this->m_pRightArrowShdr;
    }
    Select__8ERShaderP3ERCi(this_01,prc,0);
    uVar3 = GetButtonsDown__18EControllerContexti(this_00,0x2000);
    if (uVar3 == 0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_c0._0_4_ = (EStorable__vtable *)(this->m_fDataX + (float)pEVar4);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_c0._4_4_ =
           (EStorable__vtable *)
           ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2] -
           8.0 / (float)_pGfx->m_yscreen);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_b0._4_4_ = (EStorable__vtable *)0x3f800000;
      local_b0._0_4_ = (EStorable__vtable *)0x3f800000;
      local_94 = (ENodeListNode *)0x3f800000;
      local_98 = (ENodeListNode *)0x3f800000;
      local_9c = (EStorable__vtable *)0x3f800000;
      local_a0 = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_c0,local_b0,
                 local_b0 + 0x10);
    }
    else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_c0._0_4_ = (EStorable__vtable *)(this->m_fDataX + (float)pEVar4);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_c0._4_4_ =
           (EStorable__vtable *)
           ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2] -
           8.0 / (float)_pGfx->m_yscreen);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_b0._4_4_ = (EStorable__vtable *)0x3f800000;
      local_b0._0_4_ = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_c0,local_b0,
                 0x35f520);
    }
    ReleaseControllerFocus__18EControllerManagerib(_pCtrlMan,0,true);
  }
  return;
}

void EPauseMenuBoolItem::SetText(u16 *str) {
	EVec2 vSize;
	u16 *szString;
	float x;
	float z;
	
  EUIObjectNode__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EVec2 vSize;
  float local_40;
  EStorable__vtable *local_3c;
  ENodeListNode *local_38;
  int local_30;
  int iStack_2c;
  int local_20;
  int iStack_1c;
  EHashTableNode **local_10;
  uint uStack_c;
  
  local_20 = (int)unaff_s1;
  iStack_1c = (int)((ulong)unaff_s1 >> 0x20);
  local_30 = (int)unaff_s0;
  iStack_2c = (int)((ulong)unaff_s0 >> 0x20);
  local_10 = (EHashTableNode **)unaff_retaddr;
  uStack_c = (uint)((ulong)unaff_retaddr >> 0x20);
  SetText__17EUIStaticTextIconPCUs(&this->field0_0x0,str);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vSize,(this->field0_0x0).field0_0x0.m_pFont,SUB41(str,0),
             (EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_40 = vSize.field0_0x0.d[0];
  local_38 = (ENodeListNode *)vSize.field0_0x0.d[1];
  local_3c = (EStorable__vtable *)0x0;
                    /* end of inlined section */
  (*(code *)pEVar1->GetPos)
            ((int)(this->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar1->OnStickRepeat + 4,&local_40);
  return;
}

EPauseMenuRangeItem* EPauseMenuRangeItem::EPauseMenuRangeItem() {
	EUIIconDef icondef;
	EUITextIconDef textdef;
	EUIVirtualCtrl *pCtrl;
	EUIObjectNode *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  uint uVar5;
  ulong *puVar6;
  EUiMonitorAutoRepeat *pEVar7;
  ERShader *pEVar8;
  EUIIconDef__vtable *local_120;
  undefined4 local_11c;
  undefined4 local_118;
  EUITextIconDef local_110;
  EUIIconDef local_f0;
  EUIIconDef icondef;
  EUITextIconDef textdef;
  
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_110.m_maxChars = 0x20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_118 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_11c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_120 = (EUIIconDef__vtable *)0x0;
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
                    /* end of inlined section */
  local_f0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&this->field0_0x0,&local_110,&local_f0,-1,(EVec3 *)&local_120);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_19EPauseMenuRangeItem;
  pEVar7 = (EUiMonitorAutoRepeat *)__builtin_new(0x104);
  pEVar7 = __20EUiMonitorAutoRepeatR13EUIObjectNodeff(pEVar7,(EUIObjectNode *)this,0.25,0.25);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pAutoRepeatMonitor = pEVar7;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar8 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xe3e852f9,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pLeftArrowShdr = pEVar8;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar8 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x19e76f9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pRightArrowShdr = pEVar8;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  icondef.m_flags = 0;
  icondef.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_selColorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  icondef.m_pCtrl = &(_globals.m_pCtrlPad)->field0_0x0;
  textdef.m_maxChars = 0x20;
  textdef.m_xAlign = E_FAX_LEFT;
  textdef.m_yAlign = E_FAY_TOP;
  textdef.m_selColorIdx = 6;
  textdef.m_pointsize = 16.0;
  textdef.m_colorIdx = 1;
                    /* end of inlined section */
  textdef.m_retChar = -1;
  SetFont__11EUITextIconi((EUITextIcon *)this,-0x2080f4e9);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_120 = (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_11c = 0x3d23d70a;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] = 0.04;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] = 0.25;
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
  (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_120;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&this->field0_0x0,&textdef);
  InitString__17EUIStaticTextIconPCUsi(&this->field0_0x0,(short *)0x0,0x20);
  this->m_nMax = 10;
  this->m_fDataX = 0.5;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  this->m_nData = 0;
  this->m_nMin = 0;
  *(undefined4 *)&this->m_bChanged = 0;
  return this;
}

void EPauseMenuRangeItem::~EPauseMenuRangeItem(int __in_chrg) {
	EUIStaticTextIcon *this;
	void *ptr;
	
  EUiMonitorAutoRepeat *pEVar1;
  
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_19EPauseMenuRangeItem;
  while (this->m_pLeftArrowShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pLeftArrowShdr->field0_0x0);
    this->m_pLeftArrowShdr = (ERShader *)0x0;
  }
  while (this->m_pRightArrowShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pRightArrowShdr->field0_0x0);
    this->m_pRightArrowShdr = (ERShader *)0x0;
  }
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pAutoRepeatMonitor;
  if (pEVar1 != (EUiMonitorAutoRepeat *)0x0) {
    (*(code *)pEVar1->__vtable[1].EUiMonitorAutoRepeat)
              ((int)pEVar1->m_totalDt + *(short *)(pEVar1->__vtable + 1) + -0xc,3);
  }
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pAutoRepeatMonitor =
       (EUiMonitorAutoRepeat *)0x0;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)this,0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EPauseMenuRangeItem::OnButtonRepeat(int buttonId) {
  bool bVar1;
  int delta;
  uint minMax;
  
  *(undefined4 *)&this->m_bChanged = 0;
  if (buttonId == 0x2000) {
    minMax = this->m_nMax;
    delta = 1;
  }
  else {
    if (buttonId != 0x8000) {
      return;
    }
    minMax = this->m_nMin;
    delta = -1;
  }
  bVar1 = CheckIntPref__17EPauseOptionsMenuiRiii(1,(int *)&this->m_nData,delta,minMax);
  *(uint *)&this->m_bChanged = (uint)(*(int *)&this->m_bChanged != 0 || bVar1);
  return;
}

void EPauseMenuRangeItem::Update() {
	EUIObjectNode *this;
	EControllerContext *pPadContext;
	
  bool bVar1;
  EControllerContext *this_00;
  int iVar2;
  uint uVar3;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) != 0) {
    this_00 = LockControllerFocus__18EControllerManagerib(_pCtrlMan,0,true);
    *(undefined4 *)&this->m_bChanged = 0;
    iVar2 = GetPressedCount__18EControllerContexti(this_00,0x8000);
    bVar1 = CheckIntPref__17EPauseOptionsMenuiRiii(iVar2,(int *)&this->m_nData,-1,this->m_nMin);
    *(int *)&this->m_bChanged = (int)bVar1;
    if (!bVar1) {
      iVar2 = GetPressedCount__18EControllerContexti(this_00,0x2000);
      bVar1 = CheckIntPref__17EPauseOptionsMenuiRiii(iVar2,(int *)&this->m_nData,1,this->m_nMax);
      *(int *)&this->m_bChanged = (int)bVar1;
    }
    UpdateButtons__20EUiMonitorAutoRepeati
              ((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pAutoRepeatMonitor,0);
    if (this->m_nMin < this->m_nData) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
      _11EPausePanel_m_pDPadLeft = _7DPadWin_m_pLeftShdr;
                    /* end of inlined section */
      uVar3 = this->m_nData;
    }
    else {
      this->m_nData = this->m_nMin;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
      _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
                    /* end of inlined section */
      uVar3 = this->m_nData;
    }
    if (uVar3 < this->m_nMax) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
      _11EPausePanel_m_pDPadRight = _7DPadWin_m_pRightShdr;
    }
    else {
      this->m_nData = this->m_nMax;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
      _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
                    /* end of inlined section */
    }
                    /* end of inlined section */
    ReleaseControllerFocus__18EControllerManagerib(_pCtrlMan,0,true);
  }
  return;
}

void EPauseMenuRangeItem::Draw(ERC *prc) {
	char sTemp[32];
	short unsigned int wsTemp[32];
	EControllerContext *pPadContext;
	EVec4 vColor;
	int cidx;
	float fColScale;
	float fLargestWidth;
	float x;
	float y;
	ERFont *this;
	ERC *prc;
	EUIObjectNode *this;
	int which;
	EUIObjectNode *this;
	float scaler;
	EUIObjectNode *this;
	EGraphics *this;
	EUIObjectNode *this;
	int which;
	EUIObjectNode *this;
	float scaler;
	EUIObjectNode *this;
	EGraphics *this;
	
  ERFont *pEVar1;
  EControllerContext *this_00;
  int iVar2;
  short *psVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar8;
  EStorable__vtable *pEVar9;
  char sTemp [32];
  short wsTemp [32];
  EVec4 vColor;
  float local_c0;
  float local_bc;
  undefined local_b0 [16];
  int local_a0;
  EStorable__vtable *local_9c;
  undefined local_90 [96];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_90._48_4_ = (EFontSize *)unaff_s2;
  local_90._52_4_ = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90._32_4_ = (EHashTableNode **)unaff_s1;
  local_90._36_4_ = (uint)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90._16_4_ = (int)unaff_s0;
  local_90._20_4_ = (int)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_90._80_4_ = (undefined4)unaff_s4;
  local_90._84_4_ = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90._64_4_ = (undefined4)unaff_s3;
  local_90._68_4_ = (undefined4)((ulong)unaff_s3 >> 0x20);
  Draw__11EUITextIconP3ERC((EUITextIcon *)this,prc);
  Select__6ERFontP3ERC((this->field0_0x0).field0_0x0.m_pFont,prc);
  sprintf(sTemp,"%d");
  CopyCharStrToWString__FPCcPUsUi(sTemp,wsTemp,0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vColor.field0_0x0.d[0] = this->m_fDataX;
  vColor.field0_0x0.d[1] = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2]
  ;
  local_c0 = vColor.field0_0x0.d[0];
  local_bc = vColor.field0_0x0.d[1];
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            ((this->field0_0x0).field0_0x0.m_pFont,prc,wsTemp,true,(EVec2 *)&local_c0,E_FAX_LEFT,
             E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  this_00 = LockControllerFocus__18EControllerManagerib(_pCtrlMan,0,true);
  uVar4 = _GREAY.field0_0x0._0_8_;
  uVar5 = _GREAY.field0_0x0.d[2];
  uVar6 = _GREAY.field0_0x0.d[3];
  if (this->m_nData != this->m_nMin) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) == 0) {
      uVar7 = (this->field0_0x0).field0_0x0.m_textdef.m_colorIdx;
    }
    else {
      iVar2 = GetPressedCount__18EControllerContexti(this_00,0x8000);
      if (iVar2 == 0) {
        uVar7 = (this->field0_0x0).field0_0x0.m_textdef.m_colorIdx;
      }
      else {
        uVar7 = (this->field0_0x0).field0_0x0.m_textdef.m_selColorIdx;
      }
    }
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
    uVar4 = *(undefined8 *)&_7EUIIcon_m_vColors[uVar7].field0_0x0;
    uVar5 = _7EUIIcon_m_vColors[uVar7].field0_0x0.d[2];
    uVar6 = _7EUIIcon_m_vColors[uVar7].field0_0x0.d[3];
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  uVar7 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags;
                    /* end of inlined section */
  fVar8 = 0.65;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)uVar7 >> 2 & 1U) != 0) {
    fVar8 = 1.0;
  }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vColor.field0_0x0.d[0] = fVar8 * (float)uVar4;
  vColor.field0_0x0.d[1] = fVar8 * (float)((ulong)uVar4 >> 0x20);
  vColor.field0_0x0.d[2] = fVar8 * uVar5;
  vColor.field0_0x0.d[3] = fVar8 * uVar6;
                    /* end of inlined section */
  local_b0._0_4_ = (EStorable__vtable *)vColor.field0_0x0.d[0];
  local_b0._4_4_ = (char *)vColor.field0_0x0.d[1];
  local_b0._8_4_ = (EResourceManager *)vColor.field0_0x0.d[2];
  local_b0._12_4_ = vColor.field0_0x0.d[3];
  if (((int)uVar7 >> 3 & 1U) != 0) {
    Select__8ERShaderP3ERCi(this->m_pLeftArrowShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_b0._4_4_ =
         (char *)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2] -
                 8.0 / (float)_pGfx->m_yscreen);
    local_b0._0_4_ = (EStorable__vtable *)(this->m_fDataX - 16.0 / (float)_pGfx->m_xscreen);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_9c = (EStorable__vtable *)0x3f800000;
    local_a0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_b0,
               local_b0 + 0x10,&vColor);
  }
  pEVar1 = (this->field0_0x0).field0_0x0.m_pFont;
  psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"off_boolean_value");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_b0,pEVar1,SUB41(psVar3,0),(EWindow *)&pGifTag1);
  pEVar9 = local_b0._0_4_;
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.m_pFont;
  psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"on_boolean_value");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_b0,pEVar1,SUB41(psVar3,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  if ((float)pEVar9 < (float)local_b0._0_4_) {
    pEVar1 = (this->field0_0x0).field0_0x0.m_pFont;
    psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"on_boolean_value");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)(local_b0 + 0x20),pEVar1,SUB41(psVar3,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    pEVar9 = local_90._0_4_;
  }
  uVar4 = _GREAY.field0_0x0._0_8_;
  uVar5 = _GREAY.field0_0x0.d[2];
  uVar6 = _GREAY.field0_0x0.d[3];
  if (this->m_nData != this->m_nMax) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) == 0) {
      uVar7 = (this->field0_0x0).field0_0x0.m_textdef.m_colorIdx;
    }
    else {
      iVar2 = GetPressedCount__18EControllerContexti(this_00,0x2000);
      if (iVar2 == 0) {
        uVar7 = (this->field0_0x0).field0_0x0.m_textdef.m_colorIdx;
      }
      else {
        uVar7 = (this->field0_0x0).field0_0x0.m_textdef.m_selColorIdx;
      }
    }
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
    uVar4 = *(undefined8 *)&_7EUIIcon_m_vColors[uVar7].field0_0x0;
    uVar5 = _7EUIIcon_m_vColors[uVar7].field0_0x0.d[2];
    uVar6 = _7EUIIcon_m_vColors[uVar7].field0_0x0.d[3];
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  uVar7 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags;
                    /* end of inlined section */
  fVar8 = 0.65;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)uVar7 >> 2 & 1U) != 0) {
    fVar8 = 1.0;
  }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vColor.field0_0x0.d[0] = fVar8 * (float)uVar4;
  vColor.field0_0x0.d[1] = fVar8 * (float)((ulong)uVar4 >> 0x20);
  vColor.field0_0x0.d[2] = fVar8 * uVar5;
  vColor.field0_0x0.d[3] = fVar8 * uVar6;
                    /* end of inlined section */
  local_b0._0_4_ = (EStorable__vtable *)vColor.field0_0x0.d[0];
  local_b0._4_4_ = (char *)vColor.field0_0x0.d[1];
  local_b0._8_4_ = (EResourceManager *)vColor.field0_0x0.d[2];
  local_b0._12_4_ = vColor.field0_0x0.d[3];
  if (((int)uVar7 >> 3 & 1U) != 0) {
    Select__8ERShaderP3ERCi(this->m_pRightArrowShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_b0._0_4_ = (EStorable__vtable *)(this->m_fDataX + (float)pEVar9);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_b0._4_4_ =
         (char *)((this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2] -
                 8.0 / (float)_pGfx->m_yscreen);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_9c = (EStorable__vtable *)0x3f800000;
    local_a0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_b0,
               local_b0 + 0x10,&vColor);
  }
  ReleaseControllerFocus__18EControllerManagerib(_pCtrlMan,0,true);
  return;
}

void EPauseMenuRangeItem::SetText(u16 *str) {
	EVec2 vSize;
	u16 *szString;
	float x;
	float z;
	
  EUIObjectNode__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EVec2 vSize;
  float local_40;
  EStorable__vtable *local_3c;
  ENodeListNode *local_38;
  int local_30;
  int iStack_2c;
  int local_20;
  int iStack_1c;
  EHashTableNode **local_10;
  uint uStack_c;
  
  local_20 = (int)unaff_s1;
  iStack_1c = (int)((ulong)unaff_s1 >> 0x20);
  local_30 = (int)unaff_s0;
  iStack_2c = (int)((ulong)unaff_s0 >> 0x20);
  local_10 = (EHashTableNode **)unaff_retaddr;
  uStack_c = (uint)((ulong)unaff_retaddr >> 0x20);
  SetText__17EUIStaticTextIconPCUs(&this->field0_0x0,str);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vSize,(this->field0_0x0).field0_0x0.m_pFont,SUB41(str,0),
             (EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_40 = vSize.field0_0x0.d[0];
  local_38 = (ENodeListNode *)vSize.field0_0x0.d[1];
  local_3c = (EStorable__vtable *)0x0;
                    /* end of inlined section */
  (*(code *)pEVar1->GetPos)
            ((int)(this->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar1->OnStickRepeat + 4,&local_40);
  return;
}

EPauseOptionsMenu* EPauseOptionsMenu::EPauseOptionsMenu() {
	EVec3 vPos;
	EVec3 vPos;
	
  undefined *puVar1;
  EUITextIconDef *pEVar2;
  EFontAlignY *pEVar3;
  uint *puVar4;
  EUIIconDef *pEVar5;
  int *piVar6;
  EUIVirtualCtrl **ppEVar7;
  EUITextIconDef *pEVar8;
  uint *puVar9;
  EUIIconDef *pEVar10;
  uint uVar11;
  ulong *puVar12;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  EUIStaticTextIcon *pEVar13;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar14;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EUIIconDef local_250;
  uint local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  EUITextIconDef local_1f0;
  EUIIconDef local_1d0;
  EUIIconDef__vtable *local_1b0;
  EUIIconDef local_1a0;
  uint local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  EVec3 vPos;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  EUITextIconDef local_140;
  EUIIconDef local_120;
  EUIIconDef__vtable *local_100;
  int local_f0;
  EVec3 *local_ec;
  EUIIconDef *local_e8;
  uint *local_e4;
  EVec3 *local_e0;
  EPromptBar *local_dc;
  EUITextIconDef *local_d8;
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
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  pEVar13 = (EUIStaticTextIcon *)this->m_PromptsSelectCancel;
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  __7EUIMenuiifff(&this->field0_0x0,-1,0,0.05,0.0,0.0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_ItemList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_ItemList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_17EPauseOptionsMenu;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.m_selColorIdx = 0;
  local_250.m_colorIdx = 1;
                    /* end of inlined section */
  local_f0 = 1;
                    /* end of inlined section */
  local_250.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon2,&local_250,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_250.m_flags = 0;
  local_250.m_selColorIdx = 0;
                    /* end of inlined section */
  local_250.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon2,&local_250,0,0,0x40);
  local_ec = (EVec3 *)&local_200;
  local_e4 = &local_180;
  local_e0 = (EVec3 *)&local_150;
  local_d8 = &local_140;
  local_e8 = &local_120;
  local_d0 = 0x20;
  uStack_cc = 0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_250.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    local_250.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
    local_f0 = local_f0 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_250.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    local_250.m_selColorIdx = 0;
    local_250.m_colorIdx = 1;
    local_250.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_22c = 0;
    local_228 = 0;
    local_224 = 0x41400000;
    local_220 = 0;
    local_21c = 1;
    local_218 = CONCAT22(local_218._2_2_,0xffff);
    local_208 = 0;
    local_20c = 0;
    local_210 = 0;
    local_1f8 = 0;
    local_1fc = 0;
    local_200 = 0;
    local_1f0.m_xAlign = E_FAX_LEFT;
    local_1f0.m_yAlign = E_FAY_TOP;
    local_1f0.m_pointsize = 12.0;
    local_1f0.m_selColorIdx = 0;
    local_1f0.m_colorIdx = 1;
    local_1f0.m_retChar = -1;
    local_1d0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_1d0.m_flags = 0;
    local_1d0.m_trigger = 0x40;
    local_1d0.m_selColorIdx = 0;
    local_1d0.m_colorIdx = 1;
    local_1d0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_230 = local_d0;
    local_1f0.m_maxChars = local_d0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar13,&local_1f0,&local_1d0,-1,local_ec);
    local_1d0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar13->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_xAlign + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_22c,local_230) >> (7 - uVar11) * 8;
    pEVar2 = &(pEVar13->field0_0x0).m_textdef;
    uVar11 = (uint)pEVar2 & 7;
    puVar12 = (ulong *)((int)pEVar2 - uVar11);
    *puVar12 = CONCAT44(local_22c,local_230) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_pointsize + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_224,local_228) >> (7 - uVar11) * 8;
    pEVar3 = &(pEVar13->field0_0x0).m_textdef.m_yAlign;
    uVar11 = (uint)pEVar3 & 7;
    puVar12 = (ulong *)((int)pEVar3 - uVar11);
    *puVar12 = CONCAT44(local_224,local_228) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_21c,local_220) >> (7 - uVar11) * 8;
    puVar4 = &(pEVar13->field0_0x0).m_textdef.m_selColorIdx;
    uVar11 = (uint)puVar4 & 7;
    puVar12 = (ulong *)((int)puVar4 - uVar11);
    *puVar12 = CONCAT44(local_21c,local_220) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    *(undefined4 *)&(pEVar13->field0_0x0).m_textdef.m_retChar = local_218;
    local_1b0 = (pEVar13->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_250.m_trigger,local_250.m_flags) >> (7 - uVar11) * 8;
    pEVar5 = &(pEVar13->field0_0x0).field0_0x0.m_def;
    uVar11 = (uint)pEVar5 & 7;
    puVar12 = (ulong *)((int)pEVar5 - uVar11);
    *puVar12 = CONCAT44(local_250.m_trigger,local_250.m_flags) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_250.m_colorIdx,local_250.m_selColorIdx) >> (7 - uVar11) * 8;
    piVar6 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar11 = (uint)piVar6 & 7;
    puVar12 = (ulong *)((int)piVar6 - uVar11);
    *puVar12 = CONCAT44(local_250.m_colorIdx,local_250.m_selColorIdx) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_250.__vtable,local_250.m_pCtrl) >> (7 - uVar11) * 8;
    ppEVar7 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar11 = (uint)ppEVar7 & 7;
    puVar12 = (ulong *)((int)ppEVar7 - uVar11);
    *puVar12 = CONCAT44(local_250.__vtable,local_250.m_pCtrl) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
    (pEVar13->field0_0x0).field0_0x0.m_def.__vtable = local_1b0;
                    /* end of inlined section */
    pEVar13 = (EUIStaticTextIcon *)&pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_250.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (local_f0 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  __10EPromptBar(&this->m_PromptBarSelectCancel);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon3,&local_1a0,0,0,0x40);
  puVar4 = local_e4;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  pEVar13 = (EUIStaticTextIcon *)this->m_PromptsOKCancel;
  iVar14 = 1;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon3,&local_1a0,0,0,0x40);
  pEVar2 = local_d8;
  pEVar5 = local_e8;
  local_dc = &this->m_PromptBarOKCancel;
  local_c0 = 0x40;
  uStack_bc = 0;
  local_d0 = 0x20;
  uStack_cc = 0;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_1a0.m_flags = 0;
    local_1a0.m_selColorIdx = 0;
                    /* end of inlined section */
    iVar14 = iVar14 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1a0.m_colorIdx = 1;
    local_1a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_17c = 0;
    local_178 = 0;
    puVar4[3] = 0x41400000;
    local_170 = 0;
    puVar4[5] = 1;
    local_168 = CONCAT22(local_168._2_2_,0xffff);
    vPos.field0_0x0.d[2] = 0.0;
    vPos.field0_0x0.d[1] = 0.0;
    vPos.field0_0x0.d[0] = 0.0;
    local_148 = 0;
    local_14c = 0;
    local_150 = 0;
    local_140.m_xAlign = E_FAX_LEFT;
    local_140.m_yAlign = E_FAY_TOP;
    pEVar2->m_pointsize = 12.0;
    local_140.m_selColorIdx = 0;
    pEVar2->m_colorIdx = 1;
    local_140.m_retChar = -1;
    local_120.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_120.m_flags = 0;
    pEVar5->m_trigger = local_c0;
    local_120.m_selColorIdx = 0;
    pEVar5->m_colorIdx = 1;
    local_120.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_1a0.m_trigger = local_c0;
    local_180 = local_d0;
    local_140.m_maxChars = local_d0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3(pEVar13,pEVar2,pEVar5,-1,local_e0)
    ;
    local_120.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar13->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_xAlign + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_17c,local_180) >> (7 - uVar11) * 8;
    pEVar8 = &(pEVar13->field0_0x0).m_textdef;
    uVar11 = (uint)pEVar8 & 7;
    puVar12 = (ulong *)((int)pEVar8 - uVar11);
    *puVar12 = CONCAT44(local_17c,local_180) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_pointsize + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(uStack_174,local_178) >> (7 - uVar11) * 8;
    pEVar3 = &(pEVar13->field0_0x0).m_textdef.m_yAlign;
    uVar11 = (uint)pEVar3 & 7;
    puVar12 = (ulong *)((int)pEVar3 - uVar11);
    *puVar12 = CONCAT44(uStack_174,local_178) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(uStack_16c,local_170) >> (7 - uVar11) * 8;
    puVar9 = &(pEVar13->field0_0x0).m_textdef.m_selColorIdx;
    uVar11 = (uint)puVar9 & 7;
    puVar12 = (ulong *)((int)puVar9 - uVar11);
    *puVar12 = CONCAT44(uStack_16c,local_170) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    *(undefined4 *)&(pEVar13->field0_0x0).m_textdef.m_retChar = local_168;
    local_100 = (pEVar13->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_1a0.m_trigger,local_1a0.m_flags) >> (7 - uVar11) * 8;
    pEVar10 = &(pEVar13->field0_0x0).field0_0x0.m_def;
    uVar11 = (uint)pEVar10 & 7;
    puVar12 = (ulong *)((int)pEVar10 - uVar11);
    *puVar12 = CONCAT44(local_1a0.m_trigger,local_1a0.m_flags) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_1a0.m_colorIdx,local_1a0.m_selColorIdx) >> (7 - uVar11) * 8;
    piVar6 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar11 = (uint)piVar6 & 7;
    puVar12 = (ulong *)((int)piVar6 - uVar11);
    *puVar12 = CONCAT44(local_1a0.m_colorIdx,local_1a0.m_selColorIdx) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(pEVar13->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar11);
    *puVar12 = *puVar12 & -1L << (uVar11 + 1) * 8 |
               CONCAT44(local_1a0.__vtable,local_1a0.m_pCtrl) >> (7 - uVar11) * 8;
    ppEVar7 = &(pEVar13->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar11 = (uint)ppEVar7 & 7;
    puVar12 = (ulong *)((int)ppEVar7 - uVar11);
    *puVar12 = CONCAT44(local_1a0.__vtable,local_1a0.m_pCtrl) << uVar11 * 8 |
               *puVar12 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    (pEVar13->field0_0x0).field0_0x0.m_def.__vtable = local_100;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
    pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar13 = (EUIStaticTextIcon *)&pEVar13[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  } while (iVar14 != -1);
  __10EPromptBar(local_dc);
  this->m_pFont = (ERFont *)0x0;
  Init__17EPauseOptionsMenu(this);
  return this;
}

void EPauseOptionsMenu::~EPauseOptionsMenu(int __in_chrg) {
	void *ptr;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIPrompt *pEVar3;
  
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_17EPauseOptionsMenu;
  Reset__17EPauseOptionsMenu(this);
  ___10EPromptBar(&this->m_PromptBarOKCancel,2);
  if ((this != (EPauseOptionsMenu *)0xfffffb24) &&
     (this->m_PromptsOKCancel != (EUIPrompt *)&this->m_PromptBarOKCancel)) {
    pEVar3 = this->m_PromptsOKCancel + 1;
    do {
      pEVar2 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2->Draw)
                ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->Update + 4,0);
      bVar1 = this->m_PromptsOKCancel != pEVar3;
      pEVar3 = (EUIPrompt *)((int)(pEVar3 + -2) + 0xb0);
    } while (bVar1);
  }
  ___7EUIIcon(&this->m_TriIcon3,2);
  ___7EUIIcon(&this->m_XIcon3,2);
  ___10EPromptBar(&this->m_PromptBarSelectCancel,2);
  if ((this != (EPauseOptionsMenu *)0xfffffdcc) &&
     (this->m_PromptsSelectCancel != (EUIPrompt *)&this->m_PromptBarSelectCancel)) {
    pEVar3 = this->m_PromptsSelectCancel + 1;
    do {
      pEVar2 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2->Draw)
                ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar2->Update + 4,0);
      bVar1 = this->m_PromptsSelectCancel != pEVar3;
      pEVar3 = (EUIPrompt *)((int)(pEVar3 + -2) + 0xb0);
    } while (bVar1);
  }
  ___7EUIIcon(&this->m_TriIcon2,2);
  ___7EUIIcon(&this->m_XIcon2,2);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_ItemList).field0_0x0);
                    /* end of inlined section */
  ___7EUIMenu(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EPauseOptionsMenu::Init() {
	EUIObjectNode *pItem;
	float fXPos;
	EUIIconDef icondef;
	EUITextIconDef textdef;
	EVec2 vSize;
	EGraphics *this;
	EUIMenu *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	void *result;
	EPauseMenuBoolItem *this;
	bool bData;
	EPauseMenuBoolItem *this;
	float fX;
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	void *result;
	EPauseMenuBoolItem *this;
	bool bData;
	EPauseMenuBoolItem *this;
	float fX;
	EUIObjectNode *data;
	void *result;
	EPauseMenuBoolItem *this;
	bool bData;
	EPauseMenuBoolItem *this;
	float fX;
	EUIObjectNode *data;
	void *result;
	EPauseMenuRangeItem *this;
	EPauseMenuRangeItem *this;
	EPauseMenuRangeItem *this;
	float fX;
	EUIObjectNode *data;
	void *result;
	EPauseMenuRangeItem *this;
	EPauseMenuRangeItem *this;
	EPauseMenuRangeItem *this;
	float fX;
	EUIObjectNode *data;
	EUIVirtualCtrl *pCtrl;
	float x;
	float z;
	EUIIcon *this;
	EUIObjectNode *data;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  EUIObjectNode__vtable *pEVar9;
  undefined4 uVar10;
  EUIIconDef__vtable *pEVar11;
  ulong *puVar12;
  EGraphics *pEVar13;
  ERShader *pEVar14;
  ERFont *pEVar15;
  short *psVar16;
  EPauseMenuBoolItem *pEVar17;
  EPauseMenuRangeItem *pEVar18;
  EUIStaticTextIcon *pEVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  char *pRef;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  TNodeList_EUIObjectNode___ *this_00;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  int iVar23;
  float fVar24;
  EFontSize *pEVar25;
  float fVar26;
  EUIIconDef icondef;
  EUITextIconDef textdef;
  EVec2 vSize;
  EUIIconDef local_170;
  EFontSize *local_150;
  float local_14c;
  EHashTableNode *local_148;
  EHashTableNode *local_144;
  EHashTableNode **local_140;
  __vtbl_ptr_type *local_13c;
  float local_138;
  float local_134;
  EFontSize *local_130;
  __vtbl_ptr_type *local_12c;
  EUIIconDef__vtable *local_120;
  EUIIconDef__vtable *local_110;
  EUIIconDef__vtable *local_100;
  EUIIcon *local_f0;
  EUIIcon *local_ec;
  EUIIcon *local_e8;
  EUIIcon *local_e4;
  EUIPrompt *local_e0;
  EUIPrompt *local_dc;
  EUIPrompt *local_d8;
  EUIPrompt *local_d4;
  EPromptBar *local_d0;
  EPromptBar *local_cc;
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
  
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
                    /* end of inlined section */
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  (this->m_vCurScreenAdjust).field0_0x0.d[0] =
       (float)(int)(_globals.m_pOptionsRecon)->m_nScreenAdjustX;
  uVar20 = (ulong)(int)_globals.m_pOptionsRecon;
  (this->m_vCurScreenAdjust).field0_0x0.d[1] =
       (float)(int)(_globals.m_pOptionsRecon)->m_nScreenAdjustY;
  puVar1 = (undefined *)((int)&(this->m_vCurScreenAdjust).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  uVar7 = (uint)&this->m_vCurScreenAdjust & 7;
  uVar20 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
           uVar20 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar7) * 8 |
           *(ulong *)((int)&this->m_vCurScreenAdjust - uVar7) >> uVar7 * 8;
  puVar1 = (undefined *)((int)&(this->m_vOldScreenAdjust).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | uVar20 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vOldScreenAdjust & 7;
  puVar12 = (ulong *)((int)&this->m_vOldScreenAdjust - uVar6);
  *puVar12 = uVar20 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar14 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
  this->m_pBlankShdr = pEVar14;
  pEVar14 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
  this->m_pMenuBevelShdr = pEVar14;
  pEVar14 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x502567e1,(EFile *)0x0,0);
  this->m_pTextBoxBGBC = pEVar14;
  pEVar14 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xbd0d5bdc,(EFile *)0x0,0);
  this->m_pTextBoxBGMR = pEVar14;
  pEVar14 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3a954713,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTextBoxBGBR = pEVar14;
  fVar24 = _13EUIObjectNode_SAFE_LEFT;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  icondef.m_trigger = 0;
                    /* end of inlined section */
  icondef.m_selColorIdx = (int)(_13EUIObjectNode_SAFE_TOP + 50.0 / (float)_pGfx->m_yscreen);
  icondef.m_flags = (uint)(_13EUIObjectNode_SAFE_LEFT + 10.0 / (float)_pGfx->m_xscreen);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar26 = _13EUIObjectNode_SAFE_TOP;
  (*(code *)pEVar9->OnButtonRepeat)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9->StateChanged + -0x44,
             &icondef);
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  icondef.m_flags = (uint)(0.75 - fVar24);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_trigger = 0x3ecccccd;
                    /* end of inlined section */
  (*(code *)pEVar9->RemoveChild)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9->AddChild + -0x44,
             &icondef);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (this->field0_0x0).m_optgap = 0.006;
  (*(code *)pEVar9[2].Message)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  uVar22 = (ulong)(int)pEVar9;
  (*(code *)pEVar9[2].GetPos)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].OnStickRepeat + -0x44,
             0,1,1);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this,1,true);
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].RemoveChild)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].AddChild + -0x44,4);
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar15 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  uVar21 = 1;
  this->m_pFont = pEVar15;
  SetSize__6ERFontffb(pEVar15,16.0,1.0,true);
  this->m_nDisplayMode = '\x01';
  pEVar13 = _pGfx;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  this->m_fAnimationTime = 0.25;
  iVar23 = _iVideoMode;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar20 = (ulong)(uint)(fVar26 - 75.0 / (float)pEVar13->m_yscreen) << 0x20;
  puVar1 = (undefined *)((int)&(this->m_vBoxStartTL).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | uVar20 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBoxStartTL & 7;
  puVar12 = (ulong *)((int)&this->m_vBoxStartTL - uVar6);
  *puVar12 = uVar20 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar20 = CONCAT44(fVar26 + 0.09151,0x3f347ae1);
  puVar1 = (undefined *)((int)&(this->m_vBoxStartBR).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | uVar20 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBoxStartBR & 7;
  puVar12 = (ulong *)((int)&this->m_vBoxStartBR - uVar6);
  *puVar12 = uVar20 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar20 = (ulong)(uint)(fVar26 + 41.0 / (float)_pGfx->m_yscreen) << 0x20;
  puVar1 = (undefined *)((int)&(this->m_vBoxTL).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | uVar20 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBoxTL & 7;
  puVar12 = (ulong *)((int)&this->m_vBoxTL - uVar6);
  *puVar12 = uVar20 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  if (iVar23 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    uVar22 = CONCAT44(fVar26 + 0.4,0x3f347ae1);
    puVar1 = (undefined *)((int)&(this->m_vBoxBR).field0_0x0 + 7);
    uVar6 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar6);
    *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | uVar22 >> (7 - uVar6) * 8;
    uVar6 = (uint)&this->m_vBoxBR & 7;
    puVar12 = (ulong *)((int)&this->m_vBoxBR - uVar6);
    *puVar12 = uVar22 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  }
  else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    uVar20 = CONCAT44(fVar26 + 0.345,0x3f347ae1);
    puVar1 = (undefined *)((int)&(this->m_vBoxBR).field0_0x0 + 7);
    uVar6 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar6);
    *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | uVar20 >> (7 - uVar6) * 8;
    uVar6 = (uint)&this->m_vBoxBR & 7;
    puVar12 = (ulong *)((int)&this->m_vBoxBR - uVar6);
    *puVar12 = uVar20 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  }
  puVar1 = (undefined *)((int)&(this->m_vBoxStartTL).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  uVar7 = (uint)&this->m_vBoxStartTL & 7;
  uVar20 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
           uVar22 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar7) * 8 |
           *(ulong *)((int)&this->m_vBoxStartTL - uVar7) >> uVar7 * 8;
  puVar1 = (undefined *)((int)&(this->m_vBoxAnimateTL).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | uVar20 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBoxAnimateTL & 7;
  puVar12 = (ulong *)((int)&this->m_vBoxAnimateTL - uVar6);
  *puVar12 = uVar20 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBoxStartBR).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  uVar7 = (uint)&this->m_vBoxStartBR & 7;
  uVar20 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
           uVar21 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar7) * 8 |
           *(ulong *)((int)&this->m_vBoxStartBR - uVar7) >> uVar7 * 8;
  puVar1 = (undefined *)((int)&(this->m_vBoxAnimateBR).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | uVar20 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBoxAnimateBR & 7;
  puVar12 = (ulong *)((int)&this->m_vBoxAnimateBR - uVar6);
  *puVar12 = uVar20 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar20 = CONCAT44(_13EUIObjectNode_SAFE_BOTTOM - 46.0 / (float)_pGfx->m_yscreen,0x3e3645a2);
  puVar1 = (undefined *)((int)&(this->m_vBottomPosEnd).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | uVar20 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBottomPosEnd & 7;
  puVar12 = (ulong *)((int)&this->m_vBottomPosEnd - uVar6);
  *puVar12 = uVar20 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar22 = CONCAT44(1.0 - (this->m_vBottomPosEnd).field0_0x0.d[1],
                    1.0 - (this->m_vBottomPosEnd).field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&(this->m_vBottomSize).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | uVar22 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBottomSize & 7;
  puVar12 = (ulong *)((int)&this->m_vBottomSize - uVar6);
  *puVar12 = uVar22 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_flags = 0x3e3645a2;
  icondef.m_trigger = 0x3f866666;
  puVar1 = (undefined *)((int)&(this->m_vBottomPosStart).field0_0x0 + 7);
                    /* end of inlined section */
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | 0x3f8666663e3645a2U >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBottomPosStart & 7;
  puVar12 = (ulong *)((int)&this->m_vBottomPosStart - uVar6);
  *puVar12 = 0x3f8666663e3645a2 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPosStart).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  uVar7 = (uint)&this->m_vBottomPosStart & 7;
  uVar20 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
           uVar20 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar7) * 8 |
           *(ulong *)((int)&this->m_vBottomPosStart - uVar7) >> uVar7 * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | uVar20 >> (7 - uVar6) * 8;
  uVar6 = (uint)&this->m_vBottomPos & 7;
  puVar12 = (ulong *)((int)&this->m_vBottomPos - uVar6);
  *puVar12 = uVar20 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  *(undefined4 *)&this->m_bResetSound = 0;
  pEVar15 = this->m_pFont;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"on_boolean_value");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&icondef,pEVar15,SUB41(psVar16,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar15 = this->m_pFont;
  pRef = "off_boolean_value";
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"off_boolean_value");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&icondef.m_pCtrl,pEVar15,SUB41(psVar16,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  if ((float)icondef.m_pCtrl < (float)icondef.m_flags) {
    pRef = "on_boolean_value";
                    /* end of inlined section */
  }
  pEVar15 = this->m_pFont;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,pRef);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&textdef,pEVar15,SUB41(psVar16,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  fVar26 = 0.7 - (float)textdef.m_maxChars;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  pEVar17 = (EPauseMenuBoolItem *)_memmanAlloc__FUiUi(0xb0,4);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  memset(pEVar17,0,0xb0);
  this_00 = &this->m_ItemList;
                    /* end of inlined section */
                    /* end of inlined section */
  pEVar17 = __18EPauseMenuBoolItem(pEVar17);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  pEVar9 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  fVar24 = 32.0;
  sVar8 = *(short *)&pEVar9[2].SetBoxDims;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"free_will_option");
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_f0 = &this->m_XIcon2;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  (*(code *)pEVar9[2].Message)
            ((int)(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,
             psVar16);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_ec = &this->m_TriIcon2;
  local_e8 = &this->m_XIcon3;
                    /* end of inlined section */
  local_d8 = this->m_PromptsOKCancel;
  local_d4 = this->m_PromptsOKCancel + 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  uVar10 = *(undefined4 *)_globals.m_pOptionsRecon;
                    /* end of inlined section */
  local_dc = this->m_PromptsSelectCancel + 1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e4 = &this->m_TriIcon3;
  pEVar17->m_fDataX = fVar26;
                    /* end of inlined section */
  local_d0 = &this->m_PromptBarSelectCancel;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  *(undefined4 *)&pEVar17->m_bData = uVar10;
                    /* end of inlined section */
  local_cc = &this->m_PromptBarOKCancel;
  local_e0 = this->m_PromptsSelectCancel;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  icondef.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  icondef.m_trigger = 0;
  icondef.m_flags = 0;
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].SetBoxDims)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetPos + -0x44,pEVar17
             ,&icondef);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pEVar17);
  pEVar17 = (EPauseMenuBoolItem *)_memmanAlloc__FUiUi(0xb0,4);
  memset(pEVar17,0,0xb0);
                    /* end of inlined section */
  pEVar17 = __18EPauseMenuBoolItem(pEVar17);
  pEVar9 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].SetBoxDims;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"rumble_option");
  (*(code *)pEVar9[2].Message)
            ((int)(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,
             psVar16);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  uVar10 = *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bRumble;
  pEVar17->m_fDataX = fVar26;
  *(undefined4 *)&pEVar17->m_bData = uVar10;
  icondef.m_selColorIdx = 0;
  icondef.m_trigger = 0;
  icondef.m_flags = 0;
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].SetBoxDims)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetPos + -0x44,pEVar17
             ,&icondef);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pEVar17);
  pEVar17 = (EPauseMenuBoolItem *)_memmanAlloc__FUiUi(0xb0,4);
  memset(pEVar17,0,0xb0);
                    /* end of inlined section */
  pEVar17 = __18EPauseMenuBoolItem(pEVar17);
  pEVar9 = (pEVar17->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].SetBoxDims;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"auto_center_option");
  (*(code *)pEVar9[2].Message)
            ((int)(pEVar17->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,
             psVar16);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  uVar10 = *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bAutoCenter;
  pEVar17->m_fDataX = fVar26;
  *(undefined4 *)&pEVar17->m_bData = uVar10;
  icondef.m_selColorIdx = 0;
  icondef.m_trigger = 0;
  icondef.m_flags = 0;
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].SetBoxDims)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetPos + -0x44,pEVar17
             ,&icondef);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pEVar17);
  pEVar18 = (EPauseMenuRangeItem *)_memmanAlloc__FUiUi(0xb8,4);
  memset(pEVar18,0,0xb8);
                    /* end of inlined section */
  pEVar18 = __19EPauseMenuRangeItem(pEVar18);
  pEVar9 = (pEVar18->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].SetBoxDims;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"sound_effects_volume_option");
  (*(code *)pEVar9[2].Message)
            ((int)(pEVar18->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,
             psVar16);
  cVar5 = (_globals.m_pOptionsRecon)->m_nSFXVolume;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  pEVar18->m_nMax = 10;
  pEVar18->m_fDataX = fVar26;
  pEVar18->m_nMin = 0;
  pEVar18->m_nData = (int)cVar5;
  icondef.m_selColorIdx = 0;
  icondef.m_trigger = 0;
  icondef.m_flags = 0;
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].SetBoxDims)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetPos + -0x44,pEVar18
             ,&icondef);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pEVar18);
                    /* end of inlined section */
  this->m_pSFXVolumeObject = (EUIObjectNode *)pEVar18;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  pEVar18 = (EPauseMenuRangeItem *)_memmanAlloc__FUiUi(0xb8,4);
  memset(pEVar18,0,0xb8);
                    /* end of inlined section */
  pEVar18 = __19EPauseMenuRangeItem(pEVar18);
  pEVar9 = (pEVar18->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].SetBoxDims;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"music_volume_option");
  (*(code *)pEVar9[2].Message)
            ((int)(pEVar18->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,
             psVar16);
  cVar5 = (_globals.m_pOptionsRecon)->m_nMusicVolume;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
  pEVar18->m_nMax = 10;
  pEVar18->m_fDataX = fVar26;
  pEVar18->m_nData = (int)cVar5;
  pEVar18->m_nMin = 0;
  icondef.m_selColorIdx = 0;
  icondef.m_trigger = 0;
  icondef.m_flags = 0;
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].SetBoxDims)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetPos + -0x44,pEVar18
             ,&icondef);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pEVar18);
                    /* end of inlined section */
  this->m_pMusicVolumeObject = (EUIObjectNode *)pEVar18;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  icondef.m_selColorIdx = 0;
  icondef.m_trigger = 0;
                    /* end of inlined section */
  icondef.m_flags = 0;
  pEVar19 = (EUIStaticTextIcon *)__builtin_new(0x9c);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  textdef.m_selColorIdx = 0x20;
  textdef.m_colorIdx = 0;
  textdef._24_4_ = 0;
  vSize.field0_0x0.d[0] = 0.0;
  vSize.field0_0x0.d[1] = 1.401298e-45;
  local_170.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170.m_trigger = (int)&GM_WEIGHTING;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170.m_colorIdx = (int)&pGifTag1;
                    /* end of inlined section */
  local_170.m_pCtrl = (EUIVirtualCtrl *)0x0;
  pEVar19 = __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
                      (pEVar19,(EUITextIconDef *)&textdef.m_selColorIdx,&local_170,-1,
                       (EVec3 *)&icondef);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_170.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  pEVar9 = (pEVar19->field0_0x0).field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].SetBoxDims;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"screen_adjust_option");
  (*(code *)pEVar9[2].Message)
            ((int)(pEVar19->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,psVar16);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_pCtrl = &(_globals.m_pCtrlPad)->field0_0x0;
  icondef.m_trigger = 0x40;
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  icondef.m_selColorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  textdef.m_maxChars = 0x20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_flags = 0;
  textdef.m_xAlign = E_FAX_LEFT;
  textdef.m_yAlign = E_FAY_TOP;
  textdef.m_pointsize = 16.0;
  textdef.m_selColorIdx = 6;
  textdef.m_colorIdx = 1;
  textdef._24_4_ = CONCAT22(textdef._26_2_,0xffff);
                    /* end of inlined section */
  SetFont__11EUITextIconi(&pEVar19->field0_0x0,-0x2080f4e9);
  pEVar15 = this->m_pFont;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"screen_adjust_option");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vSize,pEVar15,SUB41(psVar16,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar9 = (pEVar19->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_150 = (EFontSize *)vSize.field0_0x0.d[0];
  local_148 = (EHashTableNode *)vSize.field0_0x0.d[1];
  local_14c = 0.0;
                    /* end of inlined section */
  (*(code *)pEVar9->GetPos)
            ((int)(pEVar19->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar9->OnStickRepeat + 4,(EVec2 *)&local_150);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_150 = (EFontSize *)(pEVar19->field0_0x0).field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).field0_0x0.m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar6) * 8;
  pEVar2 = &(pEVar19->field0_0x0).field0_0x0.m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar6);
  *puVar12 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar6 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar6) * 8;
  piVar3 = &(pEVar19->field0_0x0).field0_0x0.m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar6);
  *puVar12 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar6 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(pEVar19->field0_0x0).field0_0x0.m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar6) * 8;
  ppEVar4 = &(pEVar19->field0_0x0).field0_0x0.m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar12 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar12 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar6 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* end of inlined section */
  pEVar9 = (pEVar19->field0_0x0).field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  (pEVar19->field0_0x0).field0_0x0.m_def.__vtable = (EUIIconDef__vtable *)local_150;
                    /* end of inlined section */
  (*(code *)pEVar9[2].GetPos)
            ((int)(pEVar19->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar9[2].OnStickRepeat + 4,&textdef);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_148 = (EHashTableNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_14c = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_150 = (EFontSize *)0x0;
                    /* end of inlined section */
  pEVar9 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar9[2].SetBoxDims)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar9[2].SetPos + -0x44,pEVar19
             ,(EVec2 *)&local_150);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&this_00->field0_0x0,(uint)pEVar19);
  local_140 = (EHashTableNode **)&pGifTag1;
  local_13c = (__vtbl_ptr_type *)0xffffffff;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_138 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_134 = 1.401298e-45;
                    /* end of inlined section */
  this->m_pScreenAdjustObject = (EUIObjectNode *)pEVar19;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_130 = (EFontSize *)0x0;
  pEVar11 = (local_f0->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_XIcon2).m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar6) * 8;
  pEVar2 = &(this->m_XIcon2).m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar6);
  *puVar12 = -0xffffffff << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon2).m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | 0x100000000U >> (7 - uVar6) * 8;
  piVar3 = &(this->m_XIcon2).m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar6);
  *puVar12 = 0x100000000 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon2).m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | 0x3a890800000000U >> (7 - uVar6) * 8;
  ppEVar4 = &(this->m_XIcon2).m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar12 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar12 = 0x3a890800000000 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (local_f0->m_def).__vtable = pEVar11;
  local_12c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar23 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon2).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_150 = (EFontSize *)0x3d4ccccd;
                    /* end of inlined section */
  local_14c = fVar24 / (float)iVar23;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon2).field0_0x0.m_WDH.field0_0x0.d[2] = local_14c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_f0,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_f0,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_148 = (EHashTableNode *)0x0;
  local_144 = (EHashTableNode *)&pGifTag1;
  local_140 = (EHashTableNode **)0x0;
  local_120 = (local_ec->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_TriIcon2).m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar6) * 8;
  pEVar2 = &(this->m_TriIcon2).m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar6);
  *puVar12 = -0xffffffff << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon2).m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | 0x100000000U >> (7 - uVar6) * 8;
  piVar3 = &(this->m_TriIcon2).m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar6);
  *puVar12 = 0x100000000 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon2).m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | 0x3a890800000000U >> (7 - uVar6) * 8;
  ppEVar4 = &(this->m_TriIcon2).m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar12 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar12 = 0x3a890800000000 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (local_ec->m_def).__vtable = local_120;
  local_13c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar23 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon2).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_150 = (EFontSize *)0x3d4ccccd;
                    /* end of inlined section */
  local_14c = fVar24 / (float)iVar23;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon2).field0_0x0.m_WDH.field0_0x0.d[2] = local_14c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_ec,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_ec,0x2ccf500a);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_148 = (EHashTableNode *)0x0;
  local_144 = (EHashTableNode *)&pGifTag1;
  local_140 = (EHashTableNode **)0x0;
  local_110 = (local_e8->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_XIcon3).m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar6) * 8;
  pEVar2 = &(this->m_XIcon3).m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar6);
  *puVar12 = -0xffffffff << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon3).m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | 0x100000000U >> (7 - uVar6) * 8;
  piVar3 = &(this->m_XIcon3).m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar6);
  *puVar12 = 0x100000000 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon3).m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | 0x3a890800000000U >> (7 - uVar6) * 8;
  ppEVar4 = &(this->m_XIcon3).m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar12 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar12 = 0x3a890800000000 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (local_e8->m_def).__vtable = local_110;
  local_13c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar23 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon3).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_150 = (EFontSize *)0x3d4ccccd;
                    /* end of inlined section */
  local_14c = fVar24 / (float)iVar23;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon3).field0_0x0.m_WDH.field0_0x0.d[2] = local_14c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_e8,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_e8,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_148 = (EHashTableNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_144 = (EHashTableNode *)&pGifTag1;
  local_140 = (EHashTableNode **)0x0;
  local_100 = (local_e4->m_def).__vtable;
  puVar1 = (undefined *)((int)&(this->m_TriIcon3).m_def.m_trigger + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar6) * 8;
  pEVar2 = &(this->m_TriIcon3).m_def;
  uVar6 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar6);
  *puVar12 = -0xffffffff << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon3).m_def.m_colorIdx + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | 0x100000000U >> (7 - uVar6) * 8;
  piVar3 = &(this->m_TriIcon3).m_def.m_selColorIdx;
  uVar6 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar6);
  *puVar12 = 0x100000000 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon3).m_def.__vtable + 3);
  uVar6 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar6);
  *puVar12 = *puVar12 & -1L << (uVar6 + 1) * 8 | 0x3a890800000000U >> (7 - uVar6) * 8;
  ppEVar4 = &(this->m_TriIcon3).m_def.m_pCtrl;
  uVar6 = (uint)ppEVar4 & 7;
  puVar12 = (ulong *)((int)ppEVar4 - uVar6);
  *puVar12 = 0x3a890800000000 << uVar6 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (local_e4->m_def).__vtable = local_100;
  local_13c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar23 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon3).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_150 = (EFontSize *)0x3d4ccccd;
                    /* end of inlined section */
  local_14c = fVar24 / (float)iVar23;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon3).field0_0x0.m_WDH.field0_0x0.d[2] = local_14c;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_e4,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_e4,0x2ccf500a);
  pEVar9 = this->m_PromptsSelectCancel[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].StateChanged;
  pEVar19 = &local_e0->field0_0x0;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"select_action_prompt");
  (*(code *)pEVar9[2].OnButtonRepeat)
            ((int)(pEVar19->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,psVar16,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_e0,local_f0);
  pEVar9 = this->m_PromptsSelectCancel[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].StateChanged;
  pEVar19 = &local_dc->field0_0x0;
  psVar16 = GetUiString__7EGlobalPCc(&_globals,"cancel");
  (*(code *)pEVar9[2].OnButtonRepeat)
            ((int)(pEVar19->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,psVar16,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_dc,local_ec);
  pEVar9 = this->m_PromptsOKCancel[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].StateChanged;
  pEVar19 = &local_d8->field0_0x0;
  psVar16 = GetUiString__7EGlobalPCc(&_globals,"ok");
  (*(code *)pEVar9[2].OnButtonRepeat)
            ((int)(pEVar19->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,psVar16,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_d8,local_e8);
  pEVar9 = this->m_PromptsOKCancel[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar8 = *(short *)&pEVar9[2].StateChanged;
  pEVar19 = &local_d4->field0_0x0;
  psVar16 = GetUiString__7EGlobalPCc(&_globals,"cancel");
  (*(code *)pEVar9[2].OnButtonRepeat)
            ((int)(pEVar19->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar8 + 4,psVar16,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_d4,local_e4);
  Init__10EPromptBar(local_d0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  pEVar25 = (EFontSize *)((_13EUIObjectNode_SAFE_RIGHT + 0.178) * 0.5);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_14c = _13EUIObjectNode_SAFE_BOTTOM - 23.0 / (float)_pGfx->m_yscreen;
  fVar24 = _13EUIObjectNode_SAFE_BOTTOM;
  local_150 = pEVar25;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_d0,local_e0,2,(EVec2 *)&local_150);
  Init__10EPromptBar(local_cc);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_14c = fVar24 - 23.0 / (float)_pGfx->m_yscreen;
  local_150 = pEVar25;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_cc,local_d8,2,(EVec2 *)&local_150);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  return;
}

void EPauseOptionsMenu::Reset() {
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
	
  EUIObjectNode__vtable *pEVar1;
  uint uVar2;
  ENodeListNode *pEVar3;
  ERShader *pEVar4;
  ERFont *this_00;
  
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar1[2].EUIObjectNode)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)(pEVar1 + 2) + -0x44);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_ItemList).field0_0x0.m_l.m_pHead;
  if (pEVar3 != (ENodeListNode *)0x0) {
    uVar2 = pEVar3->data;
    while( true ) {
      pEVar3 = pEVar3->pNext;
      if (uVar2 != 0) {
        (**(code **)(*(int *)(uVar2 + 0x38) + 0xc))
                  (uVar2 + (int)*(short *)(*(int *)(uVar2 + 0x38) + 8),3);
      }
      if (pEVar3 == (ENodeListNode *)0x0) break;
      uVar2 = pEVar3->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_ItemList).field0_0x0);
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
  pEVar4 = this->m_pTextBoxBGBC;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pTextBoxBGBC = (ERShader *)0x0;
    pEVar4 = this->m_pTextBoxBGBC;
  }
  pEVar4 = this->m_pTextBoxBGMR;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pTextBoxBGMR = (ERShader *)0x0;
    pEVar4 = this->m_pTextBoxBGMR;
  }
  pEVar4 = this->m_pTextBoxBGBR;
  while (pEVar4 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar4->field0_0x0);
    this->m_pTextBoxBGBR = (ERShader *)0x0;
    pEVar4 = this->m_pTextBoxBGBR;
  }
  this_00 = this->m_pFont;
  while (this_00 != (ERFont *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
    this_00 = this->m_pFont;
  }
  Reset__10EPromptBar(&this->m_PromptBarSelectCancel);
  Reset__10EPromptBar(&this->m_PromptBarOKCancel);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_PromptsSelectCancel);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsSelectCancel + 1));
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_PromptsOKCancel);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_PromptsOKCancel + 1));
  return;
}

void EPauseOptionsMenu::Draw(ERC *prc) {
	EVec2 vScreenSize;
	EUIObjectNode *this;
	EGraphics *this;
	EUIObjectNode *this;
	EVec2 vScreen;
	EVec2 vShaderSize;
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
	EUIMenu *this;
	float fTextHeight;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	float x;
	
  uint uVar1;
  EWindow__vtable *pEVar2;
  ERFont *pEVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  EWindow *pEVar7;
  short *psVar8;
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
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  EHashTableNode **ppEVar13;
  undefined4 uVar14;
  EVec2 vScreenSize;
  EVec2 vScreen;
  EVec2 vShaderSize;
  undefined local_160 [8];
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  EHashTableNode **local_140;
  uint local_13c;
  float local_138;
  float local_134;
  EFontSize *local_130;
  EHashTableNode **local_12c;
  EHashTableNode **local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  EHashTableNode **local_10c;
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
  
  local_80 = (undefined4)unaff_s6;
  uStack_7c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_90 = (undefined4)unaff_s5;
  uStack_8c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_retaddr;
  uStack_4c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s8;
  uStack_5c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_70 = (undefined4)unaff_s7;
  uStack_6c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_a0 = (undefined4)unaff_s4;
  uStack_9c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_b0 = (undefined4)unaff_s3;
  uStack_ac = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_c0 = (undefined4)unaff_s2;
  uStack_bc = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_d0 = (undefined4)unaff_s1;
  uStack_cc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_e0 = (undefined4)unaff_s0;
  uStack_dc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  uVar1 = (this->field0_0x0).field0_0x0.m_flags;
                    /* end of inlined section */
  if (((int)uVar1 >> 1 & 1U) != 0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    fVar10 = (float)_pGfx->m_xscreen;
    fVar9 = (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    if (((int)uVar1 >> 2 & 1U) != 0) {
      if (this->m_nDisplayMode == '\x03') {
        local_158 = 1.0;
        fVar11 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
        pEVar3 = this->m_pFont;
        psVar8 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"adjust_message_line1");
        fVar12 = 0.3;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        DoGetStringSize__6ERFontPvbP7EWindow
                  ((ERFont *)&vScreen,pEVar3,SUB41(psVar8,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
        fVar11 = vScreen.field0_0x0.d[1] + fVar11;
        DrawBigBox__10EDialogWinP3ERCfffff(prc,0.15,fVar12,0.85,0.7,local_158);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        vScreen.field0_0x0.d[0] = local_158;
        vScreen.field0_0x0.d[1] = local_158;
        DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
                  (prc,16.0 / fVar10 + 0.15,16.0 / fVar9 + fVar12,0.4 - 32.0 / fVar9,
                   0.7 - 32.0 / fVar10,local_158,(EVec4 *)&vScreen);
        Select__6ERFontP3ERC(this->m_pFont,prc);
        uVar6 = _WHITE.field0_0x0.d[3];
        uVar5 = _WHITE.field0_0x0.d[2];
        uVar4 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        pEVar3 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
        (pEVar3->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
        (pEVar3->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
        (pEVar3->m_vColor).field0_0x0.d[2] = uVar5;
        (pEVar3->m_vColor).field0_0x0.d[3] = uVar6;
        psVar8 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"adjust_message_line1");
        vScreen.field0_0x0.d[1] = 0.5 - fVar11;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        vScreen.field0_0x0.d[0] = 0.5;
        vShaderSize.field0_0x0.d[0] = 0.5;
        vShaderSize.field0_0x0.d[1] = vScreen.field0_0x0.d[1];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar8,true,&vShaderSize,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
        psVar8 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"adjust_message_line2");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        vScreen.field0_0x0.d[1] = 0.5;
        vShaderSize.field0_0x0.d[1] = 0.5;
        vScreen.field0_0x0.d[0] = 0.5;
        vShaderSize.field0_0x0.d[0] = 0.5;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this->m_pFont,prc,psVar8,true,&vShaderSize,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
        Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        vScreen.field0_0x0.d[0] =
             (this->m_vBottomPos).field0_0x0.d[0] + (this->m_vBottomSize).field0_0x0.d[0];
        vScreen.field0_0x0.d[1] =
             (this->m_vBottomPos).field0_0x0.d[1] + (this->m_vBottomSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        vShaderSize.field0_0x0.d[0] = 0.0;
        local_160._4_4_ = 0.0;
                    /* end of inlined section */
        vShaderSize.field0_0x0.d[1] = local_158;
        local_160._0_4_ = local_158;
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
                   &this->m_vBottomPos,(EVec4 *)&vScreen,&vShaderSize,local_160,0x35f4b0);
        Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        vScreen.field0_0x0.d[0] = (this->m_vBottomPos).field0_0x0.d[0];
                    /* end of inlined section */
        vShaderSize.field0_0x0.d[0] = (this->m_vBottomSize).field0_0x0.d[0] * fVar10 * 0.00390625;
        vScreen.field0_0x0.d[1] = (this->m_vBottomPos).field0_0x0.d[1] - 4.0 / fVar9;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        vShaderSize.field0_0x0.d[1] = 0.5;
                    /* end of inlined section */
        local_160._0_4_ = local_158;
        local_160._4_4_ = local_158;
        local_154 = local_158;
        (*(code *)prc->__vtable[1].ClipRect)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,(EVec4 *)&vScreen
                   ,&vShaderSize,local_160);
        Draw__10EPromptBarP3ERC(&this->m_PromptBarOKCancel,prc);
      }
      else {
                    /* end of inlined section */
        vScreen.field0_0x0.d[1] = (float)_pGfx->m_yscreen;
        vScreen.field0_0x0.d[0] = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        if ((byte)(this->m_nDisplayMode - 1) < 2) {
                    /* inlined from /eor/src2/engine/window/e_window.h */
          pEVar7 = (EWindow *)_memmanAlloc__FUiUi(0xa0,0x10);
                    /* end of inlined section */
          pEVar7 = __7EWindow(pEVar7);
                    /* inlined from /eor/src2/common/math/e_rect.h */
          vShaderSize.field0_0x0.d[1] = (this->m_vBoxTL).field0_0x0.d[1];
          vShaderSize.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
          this->m_pWin = pEVar7;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
          SetClip__7EWindowRCt5TRect1Zf(pEVar7,(TRect_float_ *)&vShaderSize);
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
        local_160._0_4_ = (this->m_vBoxAnimateTL).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_160._4_4_ = (this->m_vBoxAnimateTL).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_150 = (this->m_vBoxAnimateBR).field0_0x0.d[0];
        local_14c = (this->m_vBoxAnimateBR).field0_0x0.d[1];
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
        local_140 = (EHashTableNode **)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_13c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_12c = (EHashTableNode **)0x0;
        local_130 = (EFontSize *)0x3f800000;
                    /* end of inlined section */
        ppEVar13 = (EHashTableNode **)0x0;
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
                   (EVec4 *)local_160,&local_150,&local_140,&local_130,0x35f4b0);
        Select__8ERShaderP3ERCi(this->m_pTextBoxBGBC,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_160._4_4_ = (this->m_vBoxAnimateBR).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_160._0_4_ = (this->m_vBoxAnimateTL).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_150 = (this->m_vBoxAnimateBR).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        local_14c = local_160._4_4_ + vShaderSize.field0_0x0.d[1] / vScreen.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_11c = 0x3f800000;
        local_110 = 0x3f800000;
        local_f4 = 0x3f800000;
        local_f8 = 0x3f800000;
        local_fc = 0x3f800000;
        local_100 = 0x3f800000;
                    /* end of inlined section */
        local_120 = ppEVar13;
        local_10c = ppEVar13;
        (*(code *)prc->__vtable[1].DisplayList)
                  (ppEVar13,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
                   (EVec4 *)local_160,&local_150,&local_120,&local_110,&local_100);
        Select__8ERShaderP3ERCi(this->m_pTextBoxBGMR,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_160._0_4_ = (this->m_vBoxAnimateBR).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_160._4_4_ = (this->m_vBoxAnimateTL).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_14c = (this->m_vBoxAnimateBR).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        local_150 = local_160._0_4_ + vShaderSize.field0_0x0.d[0] / vScreen.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_13c = 0x3f800000;
        local_130 = (EFontSize *)0x3f800000;
        local_e4 = 0x3f800000;
        local_e8 = 0x3f800000;
        local_ec = 0x3f800000;
        local_f0 = 0x3f800000;
                    /* end of inlined section */
        local_140 = ppEVar13;
        local_12c = ppEVar13;
        (*(code *)prc->__vtable[1].DisplayList)
                  (ppEVar13,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
                   (EVec4 *)local_160,&local_150,&local_140,&local_130,&local_f0);
        Select__8ERShaderP3ERCi(this->m_pTextBoxBGBR,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_160._4_4_ = (this->m_vBoxAnimateBR).field0_0x0.d[1];
        local_160._0_4_ = (this->m_vBoxAnimateBR).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        local_150 = local_160._0_4_ + vShaderSize.field0_0x0.d[0] / vScreen.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        local_14c = local_160._4_4_ + vShaderSize.field0_0x0.d[1] / vScreen.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_13c = 0x3f800000;
        local_130 = (EFontSize *)0x3f800000;
        local_114 = 0x3f800000;
        local_118 = 0x3f800000;
        local_11c = 0x3f800000;
        local_120 = (EHashTableNode **)0x3f800000;
                    /* end of inlined section */
        local_140 = ppEVar13;
        local_12c = ppEVar13;
        (*(code *)prc->__vtable[1].DisplayList)
                  (ppEVar13,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
                   (EVec4 *)local_160,&local_150,&local_140,&local_130,&local_120);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_154 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_158 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_160._4_4_ = 1.0;
                    /* end of inlined section */
        fVar12 = (this->m_vBoxAnimateTL).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_160._0_4_ = 1.0;
                    /* end of inlined section */
        DrawBigBlackBox__10EDialogWinP3ERCfffffG5EVec4
                  (prc,_13EUIObjectNode_SAFE_LEFT,fVar12,
                   ((this->m_vBoxAnimateBR).field0_0x0.d[1] - fVar12) +
                   16.0 / vScreen.field0_0x0.d[1],
                   ((this->m_vBoxAnimateBR).field0_0x0.d[0] - _13EUIObjectNode_SAFE_LEFT) +
                   16.0 / vScreen.field0_0x0.d[0],1.0,(EVec4 *)local_160);
        if (this->m_nDisplayMode - 1 < 2) {
          SelectWin__7EGlobalP3ERC(&_globals,prc);
          pEVar7 = this->m_pWin;
          if (pEVar7 != (EWindow *)0x0) {
            (*(code *)pEVar7->__vtable->WindowMatrixChanged)
                      ((int)&(pEVar7->m_mWindow).field0_0x0 +
                       (int)*(short *)&pEVar7->__vtable->Select,3);
          }
        }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
        local_160._0_4_ =
             (this->m_vBottomPos).field0_0x0.d[0] + (this->m_vBottomSize).field0_0x0.d[0];
        local_160._4_4_ =
             (this->m_vBottomPos).field0_0x0.d[1] + (this->m_vBottomSize).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_13c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_150 = 0.0;
        local_140 = (EHashTableNode **)0x3f800000;
        local_14c = 1.0;
                    /* end of inlined section */
        uVar14 = 0;
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
                   &this->m_vBottomPos,local_160,&local_150,&local_140,0x35f4b0);
        Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_160._0_4_ = (this->m_vBottomPos).field0_0x0.d[0];
                    /* end of inlined section */
        local_150 = (this->m_vBottomSize).field0_0x0.d[0] * fVar10 * 0.00390625;
        local_160._4_4_ = (this->m_vBottomPos).field0_0x0.d[1] - 4.0 / fVar9;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_14c = 0.5;
        local_140 = (EHashTableNode **)0x3f800000;
        local_134 = 1.0;
        local_138 = 1.0;
        local_13c = 0x3f800000;
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].ClipRect)
                  (uVar14,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_160,
                   &local_150,&local_140);
        if (this->m_nDisplayMode == '\0') {
          Draw__7EUIMenuP3ERC(&this->field0_0x0,prc);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
          if ((this->field0_0x0).m_pCurOpt == this->m_pScreenAdjustObject) {
            Draw__10EPromptBarP3ERC(&this->m_PromptBarSelectCancel,prc);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
            _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
            _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
                    /* end of inlined section */
          }
          else {
            Draw__10EPromptBarP3ERC(&this->m_PromptBarOKCancel,prc);
          }
        }
      }
    }
  }
  return;
}

void EPauseOptionsMenu::Update() {
	EControllerContext *pPadContext;
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
	NLIterator nli;
	EUIObjectNode *pNode;
	NLIterator i;
	NLIterator i;
	EPauseMenuBoolItem *this;
	bool bData;
	NLIterator i;
	NLIterator i;
	EPauseMenuBoolItem *this;
	bool bData;
	NLIterator i;
	NLIterator i;
	EPauseMenuBoolItem *this;
	bool bData;
	NLIterator i;
	NLIterator i;
	EPauseMenuRangeItem *this;
	u32 nData;
	float fVolume;
	NLIterator i;
	NLIterator i;
	EPauseMenuRangeItem *this;
	u32 nData;
	EUIObjectNode *this;
	EUIMenu *this;
	bool bTemp;
	int nVolume;
	EPauseMenuRangeItem *this;
	float fVolume;
	EUIMenu *this;
	bool bTemp;
	EPauseMenuRangeItem *this;
	EUIMenu *this;
	EUIMenu *this;
	bool bTemp;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	
  undefined *puVar1;
  uchar uVar2;
  uint uVar3;
  EUIObjectNode__vtable *pEVar4;
  ENodeListNode *pEVar5;
  EUiMonitorAutoRepeat *pEVar6;
  ulong *puVar7;
  EGraphics *pEVar8;
  cSoundPlayer *pcVar9;
  EControllerContext *pPadContext;
  int iVar10;
  code *pcVar11;
  uint uVar12;
  ulong uVar13;
  EUIObjectNode *pEVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  EUIObjectMover HermiteBlend;
  float local_60;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.m_flags >> 2 & 1U) == 0) {
    return;
  }
  pPadContext = LockControllerFocus__18EControllerManagerib(_pCtrlMan,0,true);
  this->m_prefChangeState = 0;
  *(undefined4 *)&this->m_bChanged = 0;
  if ((this->m_nDisplayMode - 1 < 2) &&
     (fVar15 = this->m_fAnimationTime - _dt, this->m_fAnimationTime = fVar15, fVar15 <= 0.0)) {
    this->m_fAnimationTime = 0.0;
    if (this->m_nDisplayMode == 1) {
      this->m_nDisplayMode = '\0';
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
      _11EPausePanel_m_pDPadUp = _7DPadWin_m_pUpShdr;
      _11EPausePanel_m_pDPadDown = _7DPadWin_m_pDownShdr;
      _11EPausePanel_m_pDPadLeft = _7DPadWin_m_pLeftShdr;
      _11EPausePanel_m_pDPadRight = _7DPadWin_m_pRightShdr;
                    /* end of inlined section */
    }
    else {
      this->m_nDisplayMode = '\x01';
      this->m_fAnimationTime = 0.25;
      pEVar14 = (this->field0_0x0).field0_0x0.m_pParent;
      pEVar4 = pEVar14->__vtable;
      (*(code *)pEVar4[1].EUIObjectNode)
                ((int)&(pEVar14->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)(pEVar4 + 1),0
                 ,0x15);
    }
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  fVar15 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  HermiteBlend.m_stopt = 0.0;
                    /* end of inlined section */
  HermiteBlend.m_curtime = 0.0;
  if (this->m_nDisplayMode == '\x01') {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
    fVar16 = 0.25 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    if (0.0 <= fVar16) {
      fVar15 = (float)((int)fVar16 * (uint)(fVar16 < 0.25) | (uint)(fVar16 >= 0.25) * 0x3e800000);
    }
    fVar17 = (this->m_vBoxStartTL).field0_0x0.d[0];
    fVar16 = 1.0 - (0.25 - fVar15) / 0.25;
    fVar16 = -fVar16 * fVar16 * fVar16 + fVar16 * fVar16 + fVar16;
    uVar13 = CONCAT44((this->m_vBoxStartTL).field0_0x0.d[1] +
                      ((this->m_vBoxTL).field0_0x0.d[1] - (this->m_vBoxStartTL).field0_0x0.d[1]) *
                      fVar16,fVar17 + ((this->m_vBoxTL).field0_0x0.d[0] - fVar17) * fVar16);
    puVar1 = (undefined *)((int)&(this->m_vBoxAnimateTL).field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar12);
    *puVar7 = *puVar7 & -1L << (uVar12 + 1) * 8 | uVar13 >> (7 - uVar12) * 8;
    uVar12 = (uint)&this->m_vBoxAnimateTL & 7;
    puVar7 = (ulong *)((int)&this->m_vBoxAnimateTL - uVar12);
    *puVar7 = uVar13 << uVar12 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
                    /* end of inlined section */
    fVar16 = (this->m_vBoxTL).field0_0x0.d[1];
    if (fVar16 < (this->m_vBoxAnimateTL).field0_0x0.d[1]) {
      (this->m_vBoxAnimateTL).field0_0x0.d[1] = fVar16;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    fVar17 = (this->m_vBoxStartBR).field0_0x0.d[0];
    fVar16 = 1.0 - (0.25 - fVar15) / 0.25;
    fVar16 = -fVar16 * fVar16 * fVar16 + fVar16 * fVar16 + fVar16;
    uVar13 = CONCAT44((this->m_vBoxStartBR).field0_0x0.d[1] +
                      ((this->m_vBoxBR).field0_0x0.d[1] - (this->m_vBoxStartBR).field0_0x0.d[1]) *
                      fVar16,fVar17 + ((this->m_vBoxBR).field0_0x0.d[0] - fVar17) * fVar16);
    puVar1 = (undefined *)((int)&(this->m_vBoxAnimateBR).field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar12);
    *puVar7 = *puVar7 & -1L << (uVar12 + 1) * 8 | uVar13 >> (7 - uVar12) * 8;
    uVar12 = (uint)&this->m_vBoxAnimateBR & 7;
    puVar7 = (ulong *)((int)&this->m_vBoxAnimateBR - uVar12);
    *puVar7 = uVar13 << uVar12 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
                    /* end of inlined section */
    fVar16 = (this->m_vBoxBR).field0_0x0.d[1];
    if (fVar16 < (this->m_vBoxAnimateBR).field0_0x0.d[1]) {
      (this->m_vBoxAnimateBR).field0_0x0.d[1] = fVar16;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    local_60 = (this->m_vBottomPosStart).field0_0x0.d[0];
    fVar16 = 1.0 - (0.25 - fVar15) / 0.25;
    fVar16 = -fVar16 * fVar16 * fVar16 + fVar16 * fVar16 + fVar16;
    local_60 = local_60 + ((this->m_vBottomPosEnd).field0_0x0.d[0] - local_60) * fVar16;
                    /* end of inlined section */
    fVar16 = (this->m_vBottomPosStart).field0_0x0.d[1] +
             ((this->m_vBottomPosEnd).field0_0x0.d[1] - (this->m_vBottomPosStart).field0_0x0.d[1]) *
             fVar16;
    HermiteBlend.m_curtime = fVar15;
LAB_001bbbdc:
    HermiteBlend.m_stopt = 0.25;
    puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar12);
    *puVar7 = *puVar7 & -1L << (uVar12 + 1) * 8 | CONCAT44(fVar16,local_60) >> (7 - uVar12) * 8;
    uVar12 = (uint)&this->m_vBottomPos & 7;
    puVar7 = (ulong *)((int)&this->m_vBottomPos - uVar12);
    *puVar7 = CONCAT44(fVar16,local_60) << uVar12 * 8 |
              *puVar7 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
                    /* end of inlined section */
    fVar15 = (this->m_vBottomPosEnd).field0_0x0.d[1];
    if ((this->m_vBottomPos).field0_0x0.d[1] < fVar15) {
      (this->m_vBottomPos).field0_0x0.d[1] = fVar15;
      goto LAB_001bbc40;
    }
    uVar2 = this->m_nDisplayMode;
  }
  else {
    if (this->m_nDisplayMode == '\x02') {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar16 = 0.25 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      if (0.0 <= fVar16) {
        fVar15 = (float)((int)fVar16 * (uint)(fVar16 < 0.25) | (uint)(fVar16 >= 0.25) * 0x3e800000);
      }
      fVar17 = (this->m_vBoxTL).field0_0x0.d[0];
      fVar16 = 1.0 - (0.25 - fVar15) / 0.25;
      fVar16 = -fVar16 * fVar16 * fVar16 + (fVar16 + fVar16) * fVar16;
      uVar13 = CONCAT44((this->m_vBoxTL).field0_0x0.d[1] +
                        ((this->m_vBoxStartTL).field0_0x0.d[1] - (this->m_vBoxTL).field0_0x0.d[1]) *
                        fVar16,fVar17 + ((this->m_vBoxStartTL).field0_0x0.d[0] - fVar17) * fVar16);
      puVar1 = (undefined *)((int)&(this->m_vBoxAnimateTL).field0_0x0 + 7);
      uVar12 = (uint)puVar1 & 7;
      puVar7 = (ulong *)(puVar1 + -uVar12);
      *puVar7 = *puVar7 & -1L << (uVar12 + 1) * 8 | uVar13 >> (7 - uVar12) * 8;
      uVar12 = (uint)&this->m_vBoxAnimateTL & 7;
      puVar7 = (ulong *)((int)&this->m_vBoxAnimateTL - uVar12);
      *puVar7 = uVar13 << uVar12 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
                    /* end of inlined section */
      fVar16 = (this->m_vBoxTL).field0_0x0.d[1];
      if (fVar16 < (this->m_vBoxAnimateTL).field0_0x0.d[1]) {
        (this->m_vBoxAnimateTL).field0_0x0.d[1] = fVar16;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      fVar17 = (this->m_vBoxBR).field0_0x0.d[0];
      fVar16 = 1.0 - (0.25 - fVar15) / 0.25;
      fVar16 = -fVar16 * fVar16 * fVar16 + (fVar16 + fVar16) * fVar16;
      uVar13 = CONCAT44((this->m_vBoxBR).field0_0x0.d[1] +
                        ((this->m_vBoxStartBR).field0_0x0.d[1] - (this->m_vBoxBR).field0_0x0.d[1]) *
                        fVar16,fVar17 + ((this->m_vBoxStartBR).field0_0x0.d[0] - fVar17) * fVar16);
      puVar1 = (undefined *)((int)&(this->m_vBoxAnimateBR).field0_0x0 + 7);
      uVar12 = (uint)puVar1 & 7;
      puVar7 = (ulong *)(puVar1 + -uVar12);
      *puVar7 = *puVar7 & -1L << (uVar12 + 1) * 8 | uVar13 >> (7 - uVar12) * 8;
      uVar12 = (uint)&this->m_vBoxAnimateBR & 7;
      puVar7 = (ulong *)((int)&this->m_vBoxAnimateBR - uVar12);
      *puVar7 = uVar13 << uVar12 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
                    /* end of inlined section */
      fVar16 = (this->m_vBoxBR).field0_0x0.d[1];
      if (fVar16 < (this->m_vBoxAnimateBR).field0_0x0.d[1]) {
        (this->m_vBoxAnimateBR).field0_0x0.d[1] = fVar16;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      local_60 = (this->m_vBottomPosEnd).field0_0x0.d[0];
      fVar16 = 1.0 - (0.25 - fVar15) / 0.25;
      fVar16 = -fVar16 * fVar16 * fVar16 + (fVar16 + fVar16) * fVar16;
      local_60 = local_60 + ((this->m_vBottomPosStart).field0_0x0.d[0] - local_60) * fVar16;
      fVar16 = (this->m_vBottomPosEnd).field0_0x0.d[1] +
               ((this->m_vBottomPosStart).field0_0x0.d[1] - (this->m_vBottomPosEnd).field0_0x0.d[1])
               * fVar16;
      HermiteBlend.m_curtime = fVar15;
      goto LAB_001bbbdc;
    }
    puVar1 = (undefined *)((int)&(this->m_vBoxTL).field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_vBoxTL & 7;
    uVar13 = (*(long *)(puVar1 + -uVar12) << (7 - uVar12) * 8 |
             (long)(int)&HermiteBlend & 0xffffffffffffffffU >> (uVar12 + 1) * 8) &
             -1L << (8 - uVar3) * 8 | *(ulong *)((int)&this->m_vBoxTL - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&(this->m_vBoxAnimateTL).field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar12);
    *puVar7 = *puVar7 & -1L << (uVar12 + 1) * 8 | uVar13 >> (7 - uVar12) * 8;
    uVar12 = (uint)&this->m_vBoxAnimateTL & 7;
    puVar7 = (ulong *)((int)&this->m_vBoxAnimateTL - uVar12);
    *puVar7 = uVar13 << uVar12 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(this->m_vBoxBR).field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_vBoxBR & 7;
    uVar13 = (*(long *)(puVar1 + -uVar12) << (7 - uVar12) * 8 |
             uVar13 & 0xffffffffffffffffU >> (uVar12 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&this->m_vBoxBR - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&(this->m_vBoxAnimateBR).field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar12);
    *puVar7 = *puVar7 & -1L << (uVar12 + 1) * 8 | uVar13 >> (7 - uVar12) * 8;
    uVar12 = (uint)&this->m_vBoxAnimateBR & 7;
    puVar7 = (ulong *)((int)&this->m_vBoxAnimateBR - uVar12);
    *puVar7 = uVar13 << uVar12 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
    puVar1 = (undefined *)((int)&(this->m_vBottomPosEnd).field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    uVar3 = (uint)&this->m_vBottomPosEnd & 7;
    uVar13 = (*(long *)(puVar1 + -uVar12) << (7 - uVar12) * 8 |
             uVar13 & 0xffffffffffffffffU >> (uVar12 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)&this->m_vBottomPosEnd - uVar3) >> uVar3 * 8;
    puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
    uVar12 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar12);
    *puVar7 = *puVar7 & -1L << (uVar12 + 1) * 8 | uVar13 >> (7 - uVar12) * 8;
    uVar12 = (uint)&this->m_vBottomPos & 7;
    puVar7 = (ulong *)((int)&this->m_vBottomPos - uVar12);
    *puVar7 = uVar13 << uVar12 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
LAB_001bbc40:
    uVar2 = this->m_nDisplayMode;
  }
  HermiteBlend.m_startt = 0.0;
  if (uVar2 == '\x03') {
    this->m_prefChangeState = 1;
    CheckScreenPosition__17EPauseOptionsMenuP18EControllerContext(this,pPadContext);
    UpdateButtons__20EUiMonitorAutoRepeati((this->field0_0x0).field0_0x0.m_pAutoRepeatMonitor,0);
    iVar10 = GetPressedCount__18EControllerContexti(pPadContext,0x10);
    if ((long)iVar10 != 0) {
      puVar1 = (undefined *)((int)&(this->m_vOldScreenAdjust).field0_0x0 + 7);
      uVar12 = (uint)puVar1 & 7;
      uVar3 = (uint)&this->m_vOldScreenAdjust & 7;
      uVar13 = (*(long *)(puVar1 + -uVar12) << (7 - uVar12) * 8 |
               (long)iVar10 & 0xffffffffffffffffU >> (uVar12 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)&this->m_vOldScreenAdjust - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&(this->m_vCurScreenAdjust).field0_0x0 + 7);
      uVar12 = (uint)puVar1 & 7;
      puVar7 = (ulong *)(puVar1 + -uVar12);
      *puVar7 = *puVar7 & -1L << (uVar12 + 1) * 8 | uVar13 >> (7 - uVar12) * 8;
      uVar12 = (uint)&this->m_vCurScreenAdjust & 7;
      puVar7 = (ulong *)((int)&this->m_vCurScreenAdjust - uVar12);
      *puVar7 = uVar13 << uVar12 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
      pEVar8 = _pGfx;
                    /* inlined from /eor/src2/engine/e_graphics.h */
      _pGfx->m_xoffset = (int)(this->m_vCurScreenAdjust).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
      pEVar8->m_yoffset = (int)(this->m_vCurScreenAdjust).field0_0x0.d[1];
                    /* end of inlined section */
      this->m_nDisplayMode = '\0';
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
      _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
      _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
      if (_13EUIObjectNode_m_uiSfxBack != (undefined1 *)0x0) {
        (*(code *)_13EUIObjectNode_m_uiSfxBack)();
                    /* end of inlined section */
      }
    }
    iVar10 = GetPressedCount__18EControllerContexti(pPadContext,0x40);
    if ((long)iVar10 == 0) {
      iVar10 = *(int *)&this->m_bChanged;
    }
    else {
      puVar1 = (undefined *)((int)&(this->m_vCurScreenAdjust).field0_0x0 + 7);
      uVar12 = (uint)puVar1 & 7;
      uVar3 = (uint)&this->m_vCurScreenAdjust & 7;
      uVar13 = (*(long *)(puVar1 + -uVar12) << (7 - uVar12) * 8 |
               (long)iVar10 & 0xffffffffffffffffU >> (uVar12 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)&this->m_vCurScreenAdjust - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&(this->m_vOldScreenAdjust).field0_0x0 + 7);
      uVar12 = (uint)puVar1 & 7;
      puVar7 = (ulong *)(puVar1 + -uVar12);
      *puVar7 = *puVar7 & -1L << (uVar12 + 1) * 8 | uVar13 >> (7 - uVar12) * 8;
      uVar12 = (uint)&this->m_vOldScreenAdjust & 7;
      puVar7 = (ulong *)((int)&this->m_vOldScreenAdjust - uVar12);
      *puVar7 = uVar13 << uVar12 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar12) * 8;
      (_globals.m_pOptionsRecon)->m_nScreenAdjustX =
           (char)(int)(this->m_vCurScreenAdjust).field0_0x0.d[0];
      (_globals.m_pOptionsRecon)->m_nScreenAdjustY =
           (char)(int)(this->m_vCurScreenAdjust).field0_0x0.d[1];
      pEVar8 = _pGfx;
                    /* inlined from /eor/src2/engine/e_graphics.h */
      _pGfx->m_xoffset = (int)(this->m_vCurScreenAdjust).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
      pEVar8->m_yoffset = (int)(this->m_vCurScreenAdjust).field0_0x0.d[1];
                    /* end of inlined section */
      this->m_nDisplayMode = '\0';
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
      _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
      _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
      if (_13EUIObjectNode_m_uiSfxSelect == (undefined1 *)0x0) {
        iVar10 = *(int *)&this->m_bChanged;
      }
      else {
        (*(code *)_13EUIObjectNode_m_uiSfxSelect)();
                    /* end of inlined section */
        iVar10 = *(int *)&this->m_bChanged;
      }
    }
    if (iVar10 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
      pEVar8 = _pGfx;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
      _pGfx->m_xoffset = (int)(this->m_vCurScreenAdjust).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
      pEVar8->m_yoffset = (int)(this->m_vCurScreenAdjust).field0_0x0.d[1];
    }
                    /* end of inlined section */
    Update__10EPromptBar(&this->m_PromptBarOKCancel);
    goto LAB_001bc114;
  }
  if (uVar2 != '\0') goto LAB_001bc114;
  iVar10 = GetPressedCount__18EControllerContexti(pPadContext,0x10);
  if (iVar10 == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)this->m_pScreenAdjustObject->m_flags >> 3 & 1U) == 0) {
      iVar10 = GetPressedCount__18EControllerContexti(pPadContext,0x40);
      if (iVar10 != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar5 = (this->m_ItemList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
                    /* end of inlined section */
        *(undefined4 *)_globals.m_pOptionsRecon = *(undefined4 *)(pEVar5->data + 0x9c);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar5 = pEVar5->pNext;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
        *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bRumble = *(undefined4 *)(pEVar5->data + 0x9c)
        ;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar5 = pEVar5->pNext;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
        *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bAutoCenter =
             *(undefined4 *)(pEVar5->data + 0x9c);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar5 = pEVar5->pNext;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
        (_globals.m_pOptionsRecon)->m_nSFXVolume = (char)*(undefined4 *)(pEVar5->data + 0x9c);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
        (_globals.m_pOptionsRecon)->m_nMusicVolume =
             (char)*(undefined4 *)(pEVar5->pNext->data + 0x9c);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        pcVar11 = (code *)_13EUIObjectNode_m_uiSfxSelect;
        goto LAB_001bbdd8;
      }
      goto LAB_001bbe1c;
    }
    uVar2 = this->m_nDisplayMode;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar5 = (this->m_ItemList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
    *(undefined4 *)(pEVar5->data + 0x9c) = *(undefined4 *)&this->m_bOrigFreeWill;
    pEVar5 = pEVar5->pNext;
    *(undefined4 *)(pEVar5->data + 0x9c) = *(undefined4 *)&this->m_bOrigRumble;
    pEVar5 = pEVar5->pNext;
    *(undefined4 *)(pEVar5->data + 0x9c) = *(undefined4 *)&this->m_bOrigAutoCenter;
    pEVar5 = pEVar5->pNext;
    *(int *)(pEVar5->data + 0x9c) = this->m_nOrigSFXVolume;
                    /* end of inlined section */
    fVar15 = (float)this->m_nOrigSFXVolume * 0.1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    if (0.0 <= fVar15) {
      _8EUiAudio_m_fVolume =
           (float)((int)fVar15 * (uint)(fVar15 < 1.0) | (uint)(fVar15 >= 1.0) * 0x3f800000);
    }
    else {
      _8EUiAudio_m_fVolume = 0.0;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
    SetFXVolume__12cSoundPlayeri(_5Globs_pSound,this->m_nOrigSFXVolume);
    SetVoxVolume__12cSoundPlayeri(_5Globs_pSound,this->m_nOrigSFXVolume);
    pcVar9 = _5Globs_pSound;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
    *(int *)(pEVar5->pNext->data + 0x9c) = this->m_nOrigMusicVolume;
                    /* end of inlined section */
    SetMusicVolume__12cSoundPlayeri(pcVar9,this->m_nOrigMusicVolume);
    pcVar11 = (code *)_13EUIObjectNode_m_uiSfxBack;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
LAB_001bbdd8:
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)();
    }
                    /* end of inlined section */
    this->m_nDisplayMode = '\x02';
    this->m_fAnimationTime = 0.25;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
    _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
    _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
    _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
    _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
LAB_001bbe1c:
                    /* end of inlined section */
    uVar2 = this->m_nDisplayMode;
  }
  if (uVar2 == '\0') {
    Update__7EUIMenu(&this->field0_0x0);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
    pEVar14 = (this->field0_0x0).m_pCurOpt;
  }
  else {
    pEVar14 = (this->field0_0x0).m_pCurOpt;
  }
                    /* end of inlined section */
  if (pEVar14 == this->m_pSFXVolumeObject) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
    pEVar6 = pEVar14[2].m_pAutoRepeatMonitor;
                    /* end of inlined section */
    pEVar14[2].m_pAutoRepeatMonitor = (EUiMonitorAutoRepeat *)0x0;
    if (pEVar6 != (EUiMonitorAutoRepeat *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
      iVar10 = *(int *)&this->m_pSFXVolumeObject[2].m_pos.field0_0x0;
                    /* end of inlined section */
      fVar15 = (float)iVar10 * 0.1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      if (0.0 <= fVar15) {
        _8EUiAudio_m_fVolume =
             (float)((int)fVar15 * (uint)(fVar15 < 1.0) | (uint)(fVar15 >= 1.0) * 0x3f800000);
      }
      else {
        _8EUiAudio_m_fVolume = 0.0;
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
      SetFXVolume__12cSoundPlayeri(_5Globs_pSound,iVar10);
      SetVoxVolume__12cSoundPlayeri(_5Globs_pSound,iVar10);
      uVar12 = (uint)((*(uint *)&this->m_bChanged | 1) != 0);
LAB_001bbf6c:
      *(uint *)&this->m_bChanged = uVar12;
    }
LAB_001bbf70:
    iVar10 = *(int *)&this->m_bChanged;
  }
  else {
                    /* end of inlined section */
    if (pEVar14 != this->m_pMusicVolumeObject) {
                    /* end of inlined section */
      if (pEVar14 == this->m_pScreenAdjustObject) {
        iVar10 = *(int *)&this->m_bChanged;
        goto LAB_001bbf74;
      }
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
      fVar15 = pEVar14[2].m_pos.field0_0x0.d[2];
                    /* end of inlined section */
      pEVar14[2].m_pos.field0_0x0.d[2] = 0.0;
      if (fVar15 != 0.0) {
        uVar12 = 1;
        goto LAB_001bbf6c;
      }
      goto LAB_001bbf70;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
    pEVar6 = pEVar14[2].m_pAutoRepeatMonitor;
                    /* end of inlined section */
    pEVar14[2].m_pAutoRepeatMonitor = (EUiMonitorAutoRepeat *)0x0;
    if (pEVar6 == (EUiMonitorAutoRepeat *)0x0) goto LAB_001bbf70;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseoptionsmenu.h */
    fVar15 = this->m_pMusicVolumeObject[2].m_pos.field0_0x0.d[0];
                    /* end of inlined section */
    SetMusicVolume__12cSoundPlayeri(_5Globs_pSound,(int)fVar15);
    *(uint *)&this->m_bChanged = (uint)((*(uint *)&this->m_bChanged | 1) != 0);
    pcVar9 = _5Globs_pSound;
    if (fVar15 == 0.0) {
      *(undefined4 *)&this->m_bResetSound = 1;
      SetGameMode__12cSoundPlayerQ23snd5eMode(pcVar9,kLive);
      iVar10 = *(int *)&this->m_bChanged;
    }
    else {
      if (*(int *)&this->m_bResetSound == 1) {
                    /* end of inlined section */
        SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kBuy);
        *(undefined4 *)&this->m_bResetSound = 0;
        goto LAB_001bbf70;
      }
      iVar10 = *(int *)&this->m_bChanged;
    }
  }
LAB_001bbf74:
  if (iVar10 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
  }
                    /* end of inlined section */
  Update__10EPromptBar(&this->m_PromptBarSelectCancel);
LAB_001bc114:
  ReleaseControllerFocus__18EControllerManagerib(_pCtrlMan,0,true);
                    /* end of inlined section */
  return;
}

void EPauseOptionsMenu::Message(EUIObjectNode *pChild, u32 messId) {
	EUIObjectNode *pNode;
	EUIObjectNode *pLastNode;
	EUIMenu *this;
	EUIMenu *this;
	EUIObjectNode *this;
	NLIterator i;
	void *pNode;
	EUIObjectNode *pTop;
	EUIObjectNode *this;
	NLIterator i;
	ENodeListNode *pNode;
	EUIMenu *this;
	EUIObjectNode *this;
	NLIterator i;
	ENodeListNode *pNode;
	EUIObjectNode *pBottom;
	EUIObjectNode *this;
	NLIterator i;
	void *pNode;
	EGraphics *this;
	
  short sVar1;
  EUIObjectNode *pEVar2;
  undefined1 *puVar3;
  EGraphics *pEVar4;
  EUIObjectNode__vtable *pEVar5;
  EUIObjectNode *pEVar6;
  EUIObjectNode *pEVar7;
  
                    /* end of inlined section */
  pEVar2 = (this->field0_0x0).m_pCurOpt;
  if (messId == 0x1d) {
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
    pEVar7 = (EUIObjectNode *)0x0;
    if (*(EUIObjectNode ***)(pEVar2->m_listIr + 8) != (EUIObjectNode **)0x0) {
      pEVar7 = **(EUIObjectNode ***)(pEVar2->m_listIr + 8);
    }
                    /* end of inlined section */
    if (pEVar7 == (EUIObjectNode *)0x0) {
      pEVar5 = (this->field0_0x0).field0_0x0.__vtable;
      pEVar6 = pEVar2;
      pEVar7 = pEVar2;
      if (pEVar2 == (EUIObjectNode *)0x0) goto LAB_001bc254;
      do {
        pEVar7 = pEVar6;
        pEVar6 = (EUIObjectNode *)0x0;
        if (*(EUIObjectNode ***)(pEVar7->m_listIr + 4) != (EUIObjectNode **)0x0) {
          pEVar6 = **(EUIObjectNode ***)(pEVar7->m_listIr + 4);
        }
                    /* end of inlined section */
      } while (pEVar6 != (EUIObjectNode *)0x0);
                    /* end of inlined section */
      sVar1 = *(short *)&pEVar5[2].StateChanged;
      goto LAB_001bc258;
    }
    pEVar5 = (this->field0_0x0).field0_0x0.__vtable;
  }
  else {
    if (messId < 0x1e) {
      if (messId != 1) {
        return;
      }
      this->m_nDisplayMode = '\x03';
      pEVar4 = _pGfx;
      puVar3 = _13EUIObjectNode_m_uiSfxSelect;
      _11EPausePanel_m_pDPadRight = _7DPadWin_m_pRightShdr;
      _11EPausePanel_m_pDPadLeft = _7DPadWin_m_pLeftShdr;
      _11EPausePanel_m_pDPadDown = _7DPadWin_m_pDownShdr;
      _11EPausePanel_m_pDPadUp = _7DPadWin_m_pUpShdr;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
                    /* end of inlined section */
      (this->m_vOldScreenAdjust).field0_0x0.d[0] = (float)_pGfx->m_xoffset;
      (this->m_vOldScreenAdjust).field0_0x0.d[1] = (float)pEVar4->m_yoffset;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
      if (puVar3 == (undefined1 *)0x0) {
        return;
      }
      (*(code *)puVar3)();
      return;
                    /* end of inlined section */
    }
    if (messId != 0x1e) {
      return;
    }
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
    pEVar7 = (EUIObjectNode *)0x0;
    if (*(EUIObjectNode ***)(pEVar2->m_listIr + 4) != (EUIObjectNode **)0x0) {
      pEVar7 = **(EUIObjectNode ***)(pEVar2->m_listIr + 4);
    }
                    /* end of inlined section */
    if (pEVar7 == (EUIObjectNode *)0x0) {
      pEVar5 = (this->field0_0x0).field0_0x0.__vtable;
      pEVar7 = pEVar2;
      pEVar6 = pEVar2;
      while (pEVar6 != (EUIObjectNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar7 = pEVar6;
        pEVar6 = (EUIObjectNode *)0x0;
        if (*(EUIObjectNode ***)(pEVar6->m_listIr + 8) != (EUIObjectNode **)0x0) {
          pEVar6 = **(EUIObjectNode ***)(pEVar6->m_listIr + 8);
        }
      }
LAB_001bc254:
      sVar1 = *(short *)&pEVar5[2].StateChanged;
LAB_001bc258:
      (*(code *)pEVar5[2].OnButtonRepeat)
                ((int)(this->field0_0x0).m_maxBackShdrSize + sVar1 + -0x44,pEVar7);
      goto LAB_001bc26c;
    }
    pEVar5 = (this->field0_0x0).field0_0x0.__vtable;
  }
  (*(code *)pEVar5[2].OnButtonRepeat)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar5[2].StateChanged + -0x44,
             pEVar7);
LAB_001bc26c:
  if (pEVar7 != pEVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x867a1f00);
                    /* end of inlined section */
  }
  return;
}

void EPauseOptionsMenu::NextItem() {
  EUIObjectNode__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar1[1].EUIObjectNode)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)(pEVar1 + 1) + -0x44,0,0x1d);
  return;
}

void EPauseOptionsMenu::PrevItem() {
  EUIObjectNode__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar1[1].EUIObjectNode)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)(pEVar1 + 1) + -0x44,0,0x1e);
  return;
}

void EPauseOptionsMenu::CheckScreenPosition(EControllerContext *pPadContext) {
  bool bVar1;
  int iVar2;
  float *rPref;
  float delta;
  float delta_00;
  
  rPref = (this->m_vCurScreenAdjust).field0_0x0.d + 1;
  delta = -1.0;
  iVar2 = GetPressedCount__18EControllerContexti(pPadContext,0x1000);
  delta_00 = 1.0;
  bVar1 = CheckFloatPref__17EPauseOptionsMenuiRfff(iVar2,rPref,delta,-25.0);
  *(int *)&this->m_bChanged = (int)bVar1;
  iVar2 = GetPressedCount__18EControllerContexti(pPadContext,0x4000);
  bVar1 = CheckFloatPref__17EPauseOptionsMenuiRfff(iVar2,rPref,delta_00,25.0);
  *(uint *)&this->m_bChanged = (uint)(*(int *)&this->m_bChanged != 0 || bVar1);
  iVar2 = GetPressedCount__18EControllerContexti(pPadContext,0x8000);
  bVar1 = CheckFloatPref__17EPauseOptionsMenuiRfff
                    (iVar2,(float *)&this->m_vCurScreenAdjust,delta,-25.0);
  *(uint *)&this->m_bChanged = (uint)(*(int *)&this->m_bChanged != 0 || bVar1);
  iVar2 = GetPressedCount__18EControllerContexti(pPadContext,0x2000);
  bVar1 = CheckFloatPref__17EPauseOptionsMenuiRfff
                    (iVar2,(float *)&this->m_vCurScreenAdjust,delta_00,25.0);
  *(uint *)&this->m_bChanged = (uint)(*(int *)&this->m_bChanged != 0 || bVar1);
  return;
}

bool EPauseOptionsMenu::CheckFloatPref(int nDeltas, float &rPref, float delta, float minMax) {
	float oldValue;
	int i;
	
  float fVar1;
  float fVar2;
  
  fVar1 = *rPref;
  fVar2 = fVar1;
  if (0 < nDeltas) {
    do {
      nDeltas = nDeltas + -1;
      fVar2 = fVar2 + delta;
    } while (nDeltas != 0);
    *rPref = fVar2;
  }
  fVar2 = *rPref;
  if (0.0 < delta) {
    fVar2 = (float)((int)minMax * (uint)(minMax < fVar2) | (int)fVar2 * (uint)(minMax >= fVar2));
  }
  else {
    fVar2 = (float)((int)minMax * (uint)(fVar2 < minMax) | (int)fVar2 * (uint)(fVar2 >= minMax));
  }
  *rPref = fVar2;
  return *rPref != fVar1;
}

bool EPauseOptionsMenu::CheckIntPref(int nDeltas, int &rPref, int delta, int minMax) {
	int oldValue;
	int i;
	
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = *rPref;
  iVar3 = iVar1;
  if (0 < nDeltas) {
    do {
      nDeltas = nDeltas + -1;
      iVar3 = iVar3 + delta;
    } while (nDeltas != 0);
    *rPref = iVar3;
  }
  iVar3 = *rPref;
  if (delta < 1) {
    bVar2 = minMax < iVar3;
  }
  else {
    bVar2 = iVar3 < minMax;
  }
  if (!bVar2) {
    iVar3 = minMax;
  }
  *rPref = iVar3;
  return *rPref != iVar1;
}

void EPauseOptionsMenu::OnButtonRepeat(int buttonId) {
  EUIObjectNode__vtable *pEVar1;
  bool bVar2;
  EVec2 *rPref;
  float minMax;
  float delta;
  
  if (this->m_prefChangeState != 1) {
    if (buttonId == 0x1000) {
      pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
      (*(code *)pEVar1[3].Draw)
                ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar1[3].Update + -0x44);
      return;
    }
    if (buttonId != 0x4000) {
      return;
    }
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[3].EUIObjectNode)
              ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)(pEVar1 + 3) + -0x44);
    return;
  }
  if (buttonId == 0x2000) {
    delta = 1.0;
    minMax = 25.0;
  }
  else {
    if (buttonId < 0x2001) {
      if (buttonId != 0x1000) {
        return;
      }
      delta = -1.0;
      minMax = -25.0;
      rPref = (EVec2 *)((this->m_vCurScreenAdjust).field0_0x0.d + 1);
      goto LAB_001bc670;
    }
    if (buttonId == 0x4000) {
      delta = 1.0;
      minMax = 25.0;
      rPref = (EVec2 *)((this->m_vCurScreenAdjust).field0_0x0.d + 1);
      goto LAB_001bc670;
    }
    if (buttonId != 0x8000) {
      return;
    }
    delta = -1.0;
    minMax = -25.0;
  }
  rPref = &this->m_vCurScreenAdjust;
LAB_001bc670:
  bVar2 = CheckFloatPref__17EPauseOptionsMenuiRfff(1,(float *)rPref,delta,minMax);
  *(uint *)&this->m_bChanged = (uint)(*(int *)&this->m_bChanged != 0 || bVar2);
  return;
}

void EPauseOptionsMenu::SaveCurrentValues() {
  *(undefined4 *)&this->m_bOrigFreeWill = *(undefined4 *)_globals.m_pOptionsRecon;
  *(undefined4 *)&this->m_bOrigRumble = *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bRumble;
  *(undefined4 *)&this->m_bOrigAutoCenter =
       *(undefined4 *)&(_globals.m_pOptionsRecon)->m_bAutoCenter;
  this->m_nOrigSFXVolume = (int)(_globals.m_pOptionsRecon)->m_nSFXVolume;
  this->m_nOrigMusicVolume = (int)(_globals.m_pOptionsRecon)->m_nMusicVolume;
  this->m_nOrigScreenAdjustX = (int)(_globals.m_pOptionsRecon)->m_nScreenAdjustX;
  this->m_nOrigScreenAdjustY = (int)(_globals.m_pOptionsRecon)->m_nScreenAdjustY;
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

void* EPauseMenuBoolItem::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,4);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EPauseMenuBoolItem::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

bool EPauseMenuBoolItem::GetDataValue() {
  return SUB41(*(undefined4 *)&this->m_bData,0);
}

void EPauseMenuBoolItem::SetDataValue(bool bData) {
  *(int *)&this->m_bData = (int)bData;
  return;
}

void EPauseMenuBoolItem::SetXPos(float fX) {
  this->m_fDataX = fX;
  return;
}

bool EPauseMenuBoolItem::GetChanged() {
	bool bTemp;
	
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)&this->m_bChanged;
  *(undefined4 *)&this->m_bChanged = 0;
  return SUB41(uVar1,0);
}

void* EPauseMenuRangeItem::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,4);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EPauseMenuRangeItem::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

u32 EPauseMenuRangeItem::GetDataValue() {
  return this->m_nData;
}

void EPauseMenuRangeItem::SetDataValue(u32 nData) {
  this->m_nData = nData;
  return;
}

void EPauseMenuRangeItem::SetDataRange(u32 nMin, u32 nMax) {
  this->m_nMax = nMax;
  this->m_nMin = nMin;
  return;
}

void EPauseMenuRangeItem::SetXPos(float fX) {
  this->m_fDataX = fX;
  return;
}

bool EPauseMenuRangeItem::GetChanged() {
	bool bTemp;
	
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)&this->m_bChanged;
  *(undefined4 *)&this->m_bChanged = 0;
  return SUB41(uVar1,0);
}

void* EPauseOptionsMenu::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,4);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EPauseOptionsMenu::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}
