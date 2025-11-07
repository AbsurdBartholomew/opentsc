// STATUS: NOT STARTED

#include "simsmemcardmenus.h"

__vtbl_ptr_type ESimsMemCardMenu virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsMemCardMenu::~ESimsMemCardMenu,
		/* .__delta2 = */ -18296
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsMemCardMenu::Update,
		/* .__delta2 = */ -16544
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsMemCardMenu::Draw,
		/* .__delta2 = */ -17912
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::SetPos,
		/* .__delta2 = */ 416
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
		/* .__pfn = */ &ESimsMemCardMenu::Message,
		/* .__delta2 = */ -16512
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::StateChanged,
		/* .__delta2 = */ 472
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
		/* .__pfn = */ &EUIScrollMenu::RemoveAllOpts,
		/* .__delta2 = */ -3056
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
		/* .__pfn = */ &EUIScrollMenu::AddOpt,
		/* .__delta2 = */ -3008
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::SetPositions,
		/* .__delta2 = */ -2176
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
		/* .__pfn = */ &EUIScrollMenu::SetLayout,
		/* .__delta2 = */ 360
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
		/* .__pfn = */ &EUIScrollMenu::NextItem,
		/* .__delta2 = */ 536
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::PrevItem,
		/* .__delta2 = */ 568
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

__vtbl_ptr_type ESimsMemCardMenuItem virtual table[23] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsMemCardMenuItem::~ESimsMemCardMenuItem,
		/* .__delta2 = */ -20352
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsMemCardMenuItem::Update,
		/* .__delta2 = */ -18744
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsMemCardMenuItem::Draw,
		/* .__delta2 = */ -20256
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
		/* .__pfn = */ &EUIIcon::ShaderRect,
		/* .__delta2 = */ 12848
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::SetText,
		/* .__delta2 = */ -4560
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::InitString,
		/* .__delta2 = */ -4016
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::SetText,
		/* .__delta2 = */ -3800
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::InitString,
		/* .__delta2 = */ -3632
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::SetTextDef,
		/* .__delta2 = */ -4680
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::GetText,
		/* .__delta2 = */ -3352
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIDynTextIcon::DrawText,
		/* .__delta2 = */ -4368
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

static EVec2 vTopLeft;
static EVec2 vWHMessageBack;

ESimsMemCardMenuItem* ESimsMemCardMenuItem::ESimsMemCardMenuItem() {
	EUIIconDef icondef;
	EUITextIconDef textdef;
	EUIObjectNode *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  uint uVar5;
  ulong *puVar6;
  EUIIconDef__vtable *local_110;
  undefined4 local_10c;
  undefined4 local_108;
  EUITextIconDef local_100;
  EUIIconDef local_e0;
  EUIIconDef icondef;
  EUITextIconDef textdef;
  
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_100.m_maxChars = 0x20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_108 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_10c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_110 = (EUIIconDef__vtable *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_100.m_xAlign = E_FAX_LEFT;
  local_100.m_yAlign = E_FAY_TOP;
  local_100.m_pointsize = 12.0;
  local_100.m_selColorIdx = 0;
  local_100.m_colorIdx = 1;
  local_100.m_retChar = -1;
  local_e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_e0.m_flags = 0;
  local_e0.m_trigger = 0x40;
  local_e0.m_selColorIdx = 0;
  local_e0.m_colorIdx = 1;
                    /* end of inlined section */
  local_e0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __14EUIDynTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&this->field0_0x0,&local_100,&local_e0,-1,(EVec3 *)&local_110);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_string2.h */
                    /* inlined from /eor/src2/common/datastruc/e_string2.h */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_20ESimsMemCardMenuItem;
  SetToNull__8EString2(&this->m_Name);
  SetToNull__7EString(&this->m_FileName);
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  icondef.m_flags = 0;
  icondef.m_trigger = 0x40;
  icondef.m_selColorIdx = 0;
  icondef.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  textdef.m_maxChars = 0x20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  textdef.m_xAlign = E_FAX_CENTER;
  textdef.m_yAlign = E_FAY_TOP;
  textdef.m_selColorIdx = 4;
  textdef.m_pointsize = 16.0;
  textdef.m_colorIdx = 1;
                    /* end of inlined section */
  textdef.m_retChar = -1;
  SetFont__11EUITextIconi((EUITextIcon *)this,-0x2080f4e9);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110 = (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_10c = 0x3dcccccd;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] = 0.8;
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] = 0.1;
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
  (this->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_110;
  SetTextDef__14EUIDynTextIconRC14EUITextIconDef(&this->field0_0x0,&textdef);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_activeCtrl = -1;
  this->m_MenuPtr = (ESimsMemCardMenuMgr *)0x0;
  *(undefined4 *)&this->m_bNoFilesOnCard = 0;
  this->m_Mode = 0;
  return this;
}

void ESimsMemCardMenuItem::~ESimsMemCardMenuItem(int __in_chrg) {
  char *p;
  
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  p = (this->m_FileName).m_p;
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_20ESimsMemCardMenuItem;
  Deallocate__7EStringPc(&this->m_FileName,p);
  Deallocate__8EString2PUs(&this->m_Name,(this->m_Name).m_p);
                    /* end of inlined section */
  ___14EUIDynTextIcon(&this->field0_0x0,__in_chrg);
  return;
}

void ESimsMemCardMenuItem::Draw(ERC *prc) {
	static float PulseValue = 0.f;
	EVec2 Pos;
	EVec2 Size;
	EVec2 Displacement;
	EVec2 TempVec1;
	EVec2 TempVec2;
	EVec2 Dimensions;
	EVec2 NewPos;
	EUIObjectNode *this;
	EUIObjectNode *this;
	ERFont *this;
	ERFont *this;
	c16 *string;
	EVec2 Dimensions;
	EVec2 NewPos;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	
  undefined *puVar1;
  EUIObjectNode *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ERFont *pEVar7;
  float *pfVar8;
  EVec4 *pEVar9;
  short *szString;
  float fVar10;
  float fVar11;
  char *pRef;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar12;
  EVec2 Pos;
  EVec2 Size;
  EVec2 Displacement;
  EVec2 TempVec1;
  EVec2 TempVec2;
  EVec2 Dimensions;
  EVec2 NewPos;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  EHashTableNode **local_50;
  uint uStack_4c;
  EFontSize *local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (EFontSize *)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (EHashTableNode **)unaff_s0;
  uStack_4c = (uint)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 1 & 1U) != 0) {
    pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pParent;
    pEVar3 = pEVar2->__vtable;
    pfVar8 = (float *)(*(code *)pEVar3[1].OnButtonRepeat)
                                ((int)&(pEVar2->m_ChildList).field0_0x0.m_l.m_pHead +
                                 (int)*(short *)&pEVar3[1].StateChanged);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    fVar12 = *pfVar8;
                    /* end of inlined section */
    local_5c = (this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_pos.field0_0x0.d[2];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Dimensions.field0_0x0.d[0] = fVar12;
    Dimensions.field0_0x0.d[1] = local_5c;
                    /* end of inlined section */
    TempVec1.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_5c,fVar12);
    puVar1 = (undefined *)((int)&TempVec1.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)TempVec1.field0_0x0 >> (7 - uVar4) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Dimensions.field0_0x0.d[0] = fVar12 + 0.8;
    Dimensions.field0_0x0.d[1] = local_5c + 0.09;
                    /* end of inlined section */
    TempVec2.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_5c + 0.09,fVar12 + 0.8);
    puVar1 = (undefined *)((int)&TempVec2.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)TempVec2.field0_0x0 >> (7 - uVar4) * 8;
    DrawBackgroud__20ESimsMemCardMenuItemP3ERCR5EVec2T2(this,prc,&TempVec1,&TempVec2);
    SetSize__6ERFontffb(_globals.m_pFont,16.0,1.0,true);
    pEVar7 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar9 = &_WHITE;
    }
    else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      pEVar9 = &_BLACK;
    }
    uVar6 = *(undefined8 *)&pEVar9->field0_0x0;
    fVar10 = (pEVar9->field0_0x0).d[2];
    fVar11 = (pEVar9->field0_0x0).d[3];
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)uVar6;
    (pEVar7->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar6 >> 0x20);
    (pEVar7->m_vColor).field0_0x0.d[2] = fVar10;
    (pEVar7->m_vColor).field0_0x0.d[3] = fVar11;
                    /* end of inlined section */
    Select__6ERFontP3ERC(_globals.m_pFont,prc);
    if (*(int *)&this->m_bNoFilesOnCard == 1) {
      if (this->m_Mode == 2) {
        pRef = "no_files_to_load";
      }
      else if (this->m_Mode == 1) {
        pRef = "no_files_storymode";
      }
      else {
        pRef = "no_files_freeplay";
      }
      szString = GetMemCardUIString__7EGlobalPCc(&_globals,pRef);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)&Dimensions,_globals.m_pFont,SUB41(szString,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_6c = local_5c + 0.05;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_70 = (fVar12 + 0.4) - Dimensions.field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_globals.m_pFont,prc,szString,true,(EVec2 *)&local_70,E_FAX_LEFT,E_FAY_TOP,
                 (EVec2 *)0x0);
                    /* end of inlined section */
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_string2.h */
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)&Dimensions,_globals.m_pFont,SUB41((this->m_Name).m_p,0),
                 (EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_string2.h */
                    /* end of inlined section */
      local_5c = local_5c + 0.05;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      local_60 = (fVar12 + 0.4) - Dimensions.field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (_globals.m_pFont,prc,(this->m_Name).m_p,true,(EVec2 *)&local_60,E_FAX_LEFT,
                 E_FAY_TOP,(EVec2 *)0x0);
    }
  }
  return;
}

void ESimsMemCardMenuItem::DrawBackgroud(ERC *prc, EVec2 &UL, EVec2 &LR) {
	float Width;
	float Height;
	EVec4 Color;
	float y;
	float x;
	float y;
	float y;
	EUIObjectNode *this;
	float y;
	float x;
	float y;
	float y;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  EVec4 Color;
  float local_e0;
  float local_dc;
  float local_d0;
  float local_cc;
  undefined4 local_c0;
  float local_bc;
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
  
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  if (this->m_MenuPtr != (ESimsMemCardMenuMgr *)0x0) {
    fVar1 = (UL->field0_0x0).d[0];
    fVar3 = (LR->field0_0x0).d[0];
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    fVar2 = (LR->field0_0x0).d[1] - (UL->field0_0x0).d[1];
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    Color.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    Color.field0_0x0.d[2] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    Color.field0_0x0.d[1] = 1.0;
    Color.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
    uVar4 = 0;
    Select__8ERShaderP3ERCi(this->m_MenuPtr->m_pTitleBgCenterShdr,prc,0);
    local_e0 = (UL->field0_0x0).d[0] + 0.05;
    fVar2 = fVar2 * 20.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_dc = (UL->field0_0x0).d[1];
                    /* end of inlined section */
    fVar1 = ((fVar3 - fVar1) - 0.1) * 20.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_d0 = fVar1;
    local_cc = fVar2;
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar4,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_e0,
               &local_d0,&Color);
    Select__8ERShaderP3ERCi(this->m_MenuPtr->m_pTitleBgLeftShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_e0 = (UL->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_dc = (UL->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_c0 = 0x3f800000;
                    /* end of inlined section */
    local_bc = fVar2;
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar4,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_e0,
               &local_c0,&Color);
    Select__8ERShaderP3ERCi(this->m_MenuPtr->m_pTitleBgRightShdr,prc,0);
    local_e0 = (LR->field0_0x0).d[0] - 0.05;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_dc = (UL->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_b0 = 0x3f800000;
                    /* end of inlined section */
    local_ac = fVar2;
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar4,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_e0,
               &local_b0,&Color);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_flags >> 3 & 1U) != 0) {
      Color.field0_0x0.d[0] = (float)(int)_CYAN.field0_0x0._0_8_;
      Color.field0_0x0.d[1] = (float)(int)((ulong)_CYAN.field0_0x0._0_8_ >> 0x20);
      Color.field0_0x0.d[2] = _CYAN.field0_0x0.d[2];
      Color.field0_0x0.d[3] = _CYAN.field0_0x0.d[3];
      Select__8ERShaderP3ERCi(this->m_MenuPtr->m_pTitleHighCenterShdr,prc,0);
      local_e0 = (UL->field0_0x0).d[0] + 0.05;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_dc = (UL->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_d0 = fVar1;
      local_cc = fVar2;
      (*(code *)prc->__vtable[1].ClipRect)
                (uVar4,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_e0,
                 &local_d0,&Color);
      Select__8ERShaderP3ERCi(this->m_MenuPtr->m_pTitleHighLeftShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_e0 = (UL->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_dc = (UL->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_d0 = 1.0;
                    /* end of inlined section */
      local_cc = fVar2;
      (*(code *)prc->__vtable[1].ClipRect)
                (uVar4,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_e0,
                 &local_d0,&Color);
      Select__8ERShaderP3ERCi(this->m_MenuPtr->m_pTitleHighRightShdr,prc,0);
      local_e0 = (LR->field0_0x0).d[0] - 0.05;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_dc = (UL->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_d0 = 1.0;
                    /* end of inlined section */
      local_cc = fVar2;
      (*(code *)prc->__vtable[1].ClipRect)
                (uVar4,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_e0,
                 &local_d0,&Color);
    }
  }
  return;
}

void ESimsMemCardMenuItem::Update() {
  Update__7EUIIcon((EUIIcon *)this);
  return;
}

ESimsMemCardMenu* ESimsMemCardMenu::ESimsMemCardMenu() {
	EUIObjectNode *this;
	EUIMenu *this;
	EUIScrollMenu *this;
	EUIMenu *this;
	EUIMenu *this;
	EUIScrollMenu *this;
	EUIMenu *this;
	
  uint uVar1;
  EUIObjectNode__vtable *pEVar2;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  float fVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar3 = 0.05;
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __13EUIScrollMenuiifffiib(&this->field0_0x0,-1,-1,0.05,0.0,0.0,-1,-1,true);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_itemList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_itemList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_16ESimsMemCardMenu;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (*_vt_16ESimsMemCardMenu[8]._4_4_)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             (short)_vt_16ESimsMemCardMenu[8].__delta + -0x44,0x16,1);
  uVar1 = (this->field0_0x0).field0_0x0.field0_0x0.m_flags;
  (this->field0_0x0).field0_0x0.m_xoff = 0.0;
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (this->field0_0x0).field0_0x0.field0_0x0.m_flags = uVar1 | 0x16;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (this->field0_0x0).field0_0x0.m_layout = 0;
  (this->field0_0x0).field0_0x0.m_optJusty = 1;
  (this->field0_0x0).field0_0x0.m_optJustx = 0;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_50 = 0x3f4ccccd;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_4c = 0x3ed1eb85;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  (this->field0_0x0).field0_0x0.m_stick = 4;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.m_activeCtrl = -1;
  SetBoxDims__7EUIMenuRC5EVec2((EUIMenu *)this,(EVec2 *)&local_50);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_3c = _13EUIObjectNode_SAFE_TOP + _pimenu_yoff;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_40 = 0x3dcccccd;
  local_38 = 0x3ea8f5c3;
  SetPos__13EUIObjectNodeRC5EVec3((EUIObjectNode *)this,(EVec3 *)&local_40);
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
  pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (this->field0_0x0).field0_0x0.m_optgap = fVar3;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar2[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.m_pCurOpt = (EUIObjectNode *)0x0;
  Init__16ESimsMemCardMenu(this);
  return this;
}

void ESimsMemCardMenu::~ESimsMemCardMenu(int __in_chrg) {
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_16ESimsMemCardMenu;
  Reset__16ESimsMemCardMenu(this);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_itemList).field0_0x0);
                    /* end of inlined section */
  ___13EUIScrollMenu(&this->field0_0x0,__in_chrg);
  return;
}

void ESimsMemCardMenu::Init() {
  ERShader *pEVar1;
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6b7cd394,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMorePrompts[0] = pEVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar1 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x373ae809,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMorePrompts[1] = pEVar1;
  return;
}

void ESimsMemCardMenu::Reset() {
	NLIterator i;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  EUIObjectNode__vtable *pEVar1;
  uint uVar2;
  ENodeListNode *pEVar3;
  
  while( true ) {
    if (this->m_pMorePrompts[0] == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_pMorePrompts[0]->field0_0x0);
    this->m_pMorePrompts[0] = (ERShader *)0x0;
  }
  while (this->m_pMorePrompts[1] != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pMorePrompts[1]->field0_0x0);
    this->m_pMorePrompts[1] = (ERShader *)0x0;
  }
  pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[2].EUIObjectNode)
            ((int)(this->field0_0x0).field0_0x0.m_maxBackShdrSize + *(short *)(pEVar1 + 2) + -0x44);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_itemList).field0_0x0.m_l.m_pHead;
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
  RemoveAll__9ENodeList(&(this->m_itemList).field0_0x0);
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.m_pCurOpt = (EUIObjectNode *)0x0;
  return;
}

void ESimsMemCardMenu::Draw(ERC *prc) {
	EUIObjectNode *this;
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
	
  EUIObjectNode **ppEVar1;
  ENodeListNode *pEVar2;
  EUIObjectNode *pEVar3;
  
  Draw__13EUIScrollMenuP3ERC(&this->field0_0x0,prc);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((((int)(this->field0_0x0).field0_0x0.field0_0x0.m_flags >> 2 & 1U) != 0) &&
     (ppEVar1 = (EUIObjectNode **)
                (this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead,
     ppEVar1 != (EUIObjectNode **)0x0)) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    pEVar3 = (EUIObjectNode *)0x0;
    if (ppEVar1 != (EUIObjectNode **)0x0) {
      pEVar3 = *ppEVar1;
    }
                    /* end of inlined section */
    if (pEVar3 != (this->field0_0x0).m_pFirstVis) {
      DrawBlinkingPrompt__16ESimsMemCardMenuP3ERCi(this,prc,0);
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    pEVar2 = (this->field0_0x0).field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail;
    pEVar3 = (EUIObjectNode *)0x0;
    if (pEVar2 != (ENodeListNode *)0x0) {
      pEVar3 = (EUIObjectNode *)pEVar2->data;
    }
                    /* end of inlined section */
    if (pEVar3 != (this->field0_0x0).m_pLastVis) {
      DrawBlinkingPrompt__16ESimsMemCardMenuP3ERCi(this,prc,1);
    }
  }
  return;
}

void ESimsMemCardMenu::DrawBlinkingPrompt(ERC *prc, int which) {
	ETexture *ptxt;
	float w;
	float h;
	EVec4 vRed;
	static int _0 = 0;
	static int _1 = 1;
	static float piPromtTime = 0.f;
	EVec4 *color[2];
	EVec2 vPos;
	ETexture *this;
	EGraphics *this;
	ETexture *this;
	int t;
	int i;
	int value;
	int value;
	int value;
	
  uint uVar1;
  ulong *puVar2;
  EVec4__null___1__1 *pEVar3;
  EVec4__null___1__1 *pEVar4;
  int iVar5;
  EVec4 *pEVar6;
  EVec4 *pEVar7;
  EVec4 *pEVar8;
  int iVar9;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  EVec4 vRed;
  EVec4 *color [2];
  EVec2 vPos;
  float local_100;
  float local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b0;
  undefined4 local_ac;
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
  
  iVar5 = _1_3104;
  pEVar8 = &vRed;
                    /* inlined from /eor/src2/engine/e_graphics.h */
  local_70 = (int)unaff_s3;
  uStack_6c = (int)((ulong)unaff_s3 >> 0x20);
  local_a0 = (int)unaff_s0;
  uStack_9c = (int)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_90 = (int)unaff_s1;
  uStack_8c = (int)((ulong)unaff_s1 >> 0x20);
  local_20 = (int)unaff_retaddr;
  uStack_1c = (int)((ulong)unaff_retaddr >> 0x20);
  local_30 = (int)unaff_s7;
  uStack_2c = (int)((ulong)unaff_s7 >> 0x20);
  local_40 = (int)unaff_s6;
  uStack_3c = (int)((ulong)unaff_s6 >> 0x20);
  local_50 = (int)unaff_s5;
  uStack_4c = (int)((ulong)unaff_s5 >> 0x20);
  local_60 = (int)unaff_s4;
  uStack_5c = (int)((ulong)unaff_s4 >> 0x20);
  local_80 = (int)unaff_s2;
  uStack_7c = (int)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  iVar9 = *(int *)(((this->m_pMorePrompts[which]->m_rtextureList).field0_0x0.m_l.m_pHead)->data +
                  0x14);
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
  fVar13 = (float)(uint)*(ushort *)(iVar9 + 0x10) / (float)_pGfx->m_xscreen;
  piPromtTime_3105 = piPromtTime_3105 + _dt;
  fVar11 = (float)(uint)*(ushort *)(iVar9 + 0x12) / (float)_pGfx->m_yscreen;
  if (0.85 < piPromtTime_3105) {
    _1_3104 = _0_3103;
    _0_3103 = iVar5;
    piPromtTime_3105 = 0.0;
  }
  uVar1 = (int)color + 7U & 7;
  puVar2 = (ulong *)(((int)color + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)_PTR__RED_003b4ee0 >> (7 - uVar1) * 8;
  color = _PTR__RED_003b4ee0;
  fVar10 = piPromtTime_3105 * 1.176471;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  pEVar6 = color[_1_3104];
  pEVar7 = color[_0_3103];
  iVar9 = 3;
  do {
    pEVar3 = &pEVar7->field0_0x0;
    iVar9 = iVar9 + -1;
    pEVar4 = &pEVar6->field0_0x0;
    pEVar7 = (EVec4 *)((int)&pEVar7->field0_0x0 + 4);
    pEVar6 = (EVec4 *)((int)&pEVar6->field0_0x0 + 4);
    *(float *)pEVar8 = pEVar3->d[0] + (pEVar4->d[0] - pEVar3->d[0]) * fVar10;
    pEVar8 = (EVec4 *)((int)pEVar8 + 4);
  } while (-1 < iVar9);
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pMorePrompts[which],prc,0);
  fVar10 = (this->field0_0x0).field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0];
  if (which == 0) {
                    /* end of inlined section */
    fVar13 = fVar13 - fVar10;
    if (fVar13 < 0.0) {
                    /* end of inlined section */
      fVar13 = -fVar13;
    }
    vPos.field0_0x0.d[0] =
         (this->field0_0x0).field0_0x0.field0_0x0.m_pos.field0_0x0.d[0] + fVar13 * 0.5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vPos.field0_0x0.d[1] =
         (this->field0_0x0).field0_0x0.field0_0x0.m_pos.field0_0x0.d[2] - (fVar11 + 0.004);
                    /* end of inlined section */
  }
  else {
                    /* end of inlined section */
    fVar13 = fVar13 - fVar10;
    if (fVar13 < 0.0) {
                    /* end of inlined section */
      fVar13 = -fVar13;
    }
    vPos.field0_0x0.d[0] =
         (this->field0_0x0).field0_0x0.field0_0x0.m_pos.field0_0x0.d[0] + fVar13 * 0.5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vPos.field0_0x0.d[1] =
         (this->field0_0x0).field0_0x0.field0_0x0.m_pos.field0_0x0.d[2] +
         (this->field0_0x0).field0_0x0.field0_0x0.m_WDH.field0_0x0.d[2] +
         (this->field0_0x0).field0_0x0.m_optgap + 0.004;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  }
                    /* end of inlined section */
  vPos.field0_0x0.d[0] = vPos.field0_0x0.d[0] - 0.3;
  if (which == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_ec = 0x3ba3d70a;
    local_100 = vPos.field0_0x0.d[0] + 0.005;
    local_f0 = 0x3ba3d70a;
                    /* end of inlined section */
    local_fc = vPos.field0_0x0.d[1] + 0.005;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_dc = 0x3ba3d70a;
    local_100 = vPos.field0_0x0.d[0] - 0.005;
    local_e0 = 0x3ba3d70a;
    local_fc = vPos.field0_0x0.d[1] - 0.005;
  }
                    /* end of inlined section */
  uVar12 = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_d0 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_cc = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_100,&local_d0,
             0x35f4d0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = 1.0;
  local_fc = 1.0;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar12,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vPos,&local_100,
             &vRed);
  vPos.field0_0x0.d[0] = vPos.field0_0x0.d[0] + 0.6;
  if (which == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_ec = 0x3ba3d70a;
    local_100 = vPos.field0_0x0.d[0] + 0.005;
    local_f0 = 0x3ba3d70a;
                    /* end of inlined section */
    local_fc = vPos.field0_0x0.d[1] + 0.005;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_bc = 0x3ba3d70a;
    local_100 = vPos.field0_0x0.d[0] - 0.005;
    local_c0 = 0x3ba3d70a;
    local_fc = vPos.field0_0x0.d[1] - 0.005;
  }
                    /* end of inlined section */
  uVar12 = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_b0 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ac = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_100,&local_b0,
             0x35f4d0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_100 = 1.0;
  local_fc = 1.0;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar12,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vPos,&local_100,
             &vRed);
  return;
}

void ESimsMemCardMenu::Update() {
  Update__13EUIScrollMenu(&this->field0_0x0);
  return;
}

void ESimsMemCardMenu::Message(EUIObjectNode *p, u32 MessId) {
  if (MessId == 1) {
    if (p[2].m_pos.field0_0x0.d[1] == 1.401298e-45) {
      *(undefined4 *)((int)p[2].m_pos.field0_0x0.d[0] + 0x48) = 1;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xcf99db1e);
      __as__7EStringPCc((EString *)((int)p[2].m_pos.field0_0x0.d[0] + 0x40),
                        (char *)p[2].m_pAutoRepeatMonitor);
                    /* end of inlined section */
      *(undefined4 *)((int)p[2].m_pos.field0_0x0.d[0] + 0x44) = 1;
    }
  }
  return;
}

ESimsMemCardMenuMgr* ESimsMemCardMenuMgr::ESimsMemCardMenuMgr() {
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
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 unaff_s0;
  EUIStaticTextIcon *this_00;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  int iVar13;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  uint local_188;
  EVec3 vPos;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  EUITextIconDef local_160;
  EUIIconDef local_140;
  EUIIconDef__vtable *local_120;
  EUIIconDef local_110;
  EVec3 *local_f0;
  undefined4 local_e0;
  undefined4 uStack_dc;
  uint local_d0;
  undefined4 uStack_cc;
  uint local_c0;
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
  
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
                    /* end of inlined section */
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  iVar13 = 1;
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  this_00 = (EUIStaticTextIcon *)this->m_Prompts;
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  SetToNull__7EString(&this->m_LoadFileName);
                    /* end of inlined section */
  local_f0 = (EVec3 *)&local_170;
  uStack_bc = 0;
  uStack_cc = 0;
  uVar10 = 0xffff;
  uVar11 = 0x20;
  uVar12 = 0x40;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
    iVar13 = iVar13 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_160.m_retChar = (short)uVar10;
    local_188 = local_188 & 0xffff0000 | (uint)(ushort)local_160.m_retChar;
    local_168 = 0;
    local_16c = 0;
    local_170 = 0;
    local_160.m_xAlign = E_FAX_LEFT;
    local_160.m_yAlign = E_FAY_TOP;
    local_160.m_pointsize = 12.0;
    local_160.m_selColorIdx = 0;
    local_160.m_colorIdx = 1;
    local_140.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_140.m_flags = 0;
    local_140.m_selColorIdx = 0;
    local_140.m_colorIdx = 1;
    local_140.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_e0 = (undefined4)uVar10;
    uStack_dc = (undefined4)((ulong)uVar10 >> 0x20);
    local_160.m_maxChars = uVar11;
    local_140.m_trigger = uVar12;
    local_d0 = uVar11;
    local_c0 = uVar12;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (this_00,&local_160,&local_140,-1,local_f0);
    local_140.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (this_00->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_xAlign + 3);
    uVar8 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | (ulong)(uVar11 >> (7 - uVar8) * 8);
    pEVar2 = &(this_00->field0_0x0).m_textdef;
    uVar8 = (uint)pEVar2 & 7;
    puVar9 = (ulong *)((int)pEVar2 - uVar8);
    *puVar9 = (ulong)uVar11 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_pointsize + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar11);
    *puVar9 = *puVar9 & -1L << (uVar11 + 1) * 8 | 0x4140000000000000U >> (7 - uVar11) * 8;
    pEVar3 = &(this_00->field0_0x0).m_textdef.m_yAlign;
    uVar11 = (uint)pEVar3 & 7;
    puVar9 = (ulong *)((int)pEVar3 - uVar11);
    *puVar9 = 0x4140000000000000 << uVar11 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar11);
    *puVar9 = *puVar9 & -1L << (uVar11 + 1) * 8 | 0x100000000U >> (7 - uVar11) * 8;
    puVar4 = &(this_00->field0_0x0).m_textdef.m_selColorIdx;
    uVar11 = (uint)puVar4 & 7;
    puVar9 = (ulong *)((int)puVar4 - uVar11);
    *puVar9 = 0x100000000 << uVar11 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    *(uint *)&(this_00->field0_0x0).m_textdef.m_retChar = local_188;
    local_120 = (this_00->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar11);
    *puVar9 = *puVar9 & -1L << (uVar11 + 1) * 8 | ((ulong)uVar12 << 0x20) >> (7 - uVar11) * 8;
    pEVar5 = &(this_00->field0_0x0).field0_0x0.m_def;
    uVar11 = (uint)pEVar5 & 7;
    puVar9 = (ulong *)((int)pEVar5 - uVar11);
    *puVar9 = ((ulong)uVar12 << 0x20) << uVar11 * 8 |
              *puVar9 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar11);
    *puVar9 = *puVar9 & -1L << (uVar11 + 1) * 8 | 0x100000000U >> (7 - uVar11) * 8;
    piVar6 = &(this_00->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar11 = (uint)piVar6 & 7;
    puVar9 = (ulong *)((int)piVar6 - uVar11);
    *puVar9 = 0x100000000 << uVar11 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    puVar1 = (undefined *)((int)&(this_00->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar11 = (uint)puVar1 & 7;
    puVar9 = (ulong *)(puVar1 + -uVar11);
    *puVar9 = *puVar9 & -1L << (uVar11 + 1) * 8 | 0x3a890800000000U >> (7 - uVar11) * 8;
    ppEVar7 = &(this_00->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar11 = (uint)ppEVar7 & 7;
    puVar9 = (ulong *)((int)ppEVar7 - uVar11);
    *puVar9 = 0x3a890800000000 << uVar11 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    (this_00->field0_0x0).field0_0x0.m_def.__vtable = local_120;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
    this_00[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    this_00 = (EUIStaticTextIcon *)&this_00[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
    uVar10 = CONCAT44(uStack_dc,local_e0);
    uVar11 = local_d0;
    uVar12 = local_c0;
  } while (iVar13 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  __10EPromptBar(&this->m_PromptBar);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon,&local_110,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon,&local_110,0,0,0x40);
  this->m_Menu = (ESimsMemCardMenu *)0x0;
  this->m_pBlankShdr = (ERShader *)0x0;
  this->m_pMenuBevelShdr = (ERShader *)0x0;
  this->m_pMenuBevelBottomShdr = (ERShader *)0x0;
  this->m_pTextLineCenterShdr = (ERShader *)0x0;
  this->m_pTextLineRightShdr = (ERShader *)0x0;
  this->m_pTextLineLeftShdr = (ERShader *)0x0;
  this->m_pXIcon = (ERShader *)0x0;
  this->m_pTriIcon = (ERShader *)0x0;
  this->m_pTitleBgCenterShdr = (ERShader *)0x0;
  this->m_pTitleBgLeftShdr = (ERShader *)0x0;
  this->m_pTitleBgRightShdr = (ERShader *)0x0;
  this->m_pTitleHighCenterShdr = (ERShader *)0x0;
  this->m_pTitleHighLeftShdr = (ERShader *)0x0;
  this->m_pTitleHighRightShdr = (ERShader *)0x0;
  *(undefined4 *)&this->m_pPromptBarInitted = 0;
  *(undefined4 *)&this->m_bAlreadyInitted = 0;
  return this;
}

void ESimsMemCardMenuMgr::~ESimsMemCardMenuMgr(int __in_chrg) {
	void *pAddress;
	
  bool bVar1;
  ESimsMemCardMenu *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  char *p;
  EUIPrompt *pEVar4;
  
  pEVar2 = this->m_Menu;
  if (pEVar2 != (ESimsMemCardMenu *)0x0) {
    pEVar3 = (pEVar2->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar3->Draw)
              ((int)(pEVar2->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar3->Update + -0x44,3);
    this->m_Menu = (ESimsMemCardMenu *)0x0;
  }
  ___7EUIIcon(&this->m_TriIcon,2);
  ___7EUIIcon(&this->m_XIcon,2);
  ___10EPromptBar(&this->m_PromptBar,2);
  if (this != (ESimsMemCardMenuMgr *)0xffffffb4) {
    if (this->m_Prompts == (EUIPrompt *)&this->m_PromptBar) {
      p = (this->m_LoadFileName).m_p;
      goto LAB_001dc374;
    }
    pEVar4 = this->m_Prompts + 1;
    do {
      pEVar3 = (pEVar4->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar3->Draw)
                ((int)(pEVar4->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                 *(short *)&pEVar3->Update + 4,0);
      bVar1 = this->m_Prompts != pEVar4;
      pEVar4 = pEVar4 + -1;
    } while (bVar1);
  }
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  p = (this->m_LoadFileName).m_p;
LAB_001dc374:
  Deallocate__7EStringPc(&this->m_LoadFileName,p);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ESimsMemCardMenuMgr::Init(c16 *Title, int ListStoryModeFiles, bool bSkipCurrentNeighborhood) {
	ESimsMemCardMenuItem *psaveopt;
	char FileList[32][32];
	int Ptr;
	char Buffer[32];
	int max;
	int i;
	EUIIcon *this;
	EGraphics *this;
	EUIIcon *this;
	EGraphics *this;
	ESimsMemCardMenuItem *data;
	short unsigned int Title[64];
	char FName[64];
	int i;
	int count;
	ESimsMemCardMenuItem *data;
	ESimsMemCardMenuItem *data;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  short sVar5;
  EUIIconDef__vtable *pEVar6;
  EUIObjectNode__vtable *pEVar7;
  uint uVar8;
  ulong *puVar9;
  short *psVar10;
  ERShader *pEVar11;
  ESimsMemCardMenu *pEVar12;
  char (*pacVar13) [32];
  ESimsMemCardMenuItem *pEVar14;
  int iVar15;
  char *pcVar16;
  char (*__src) [32];
  EUIIcon *this_00;
  EUIIcon *this_01;
  EUIPrompt *this_02;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  char Buffer [32];
  char FileList [32] [32];
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  short local_190 [64];
  char FName [64];
  int Ptr;
  int max;
  
  if (*(int *)&this->m_bAlreadyInitted == 1) {
    Reset__19ESimsMemCardMenuMgr(this);
  }
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  this_00 = &this->m_XIcon;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  Buffer._12_4_ = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  Buffer._8_4_ = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  Buffer._16_4_ = 0;
  this_01 = &this->m_TriIcon;
                    /* end of inlined section */
  *(undefined4 *)&this->m_bAlreadyInitted = 1;
  this_02 = this->m_Prompts;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar6 = (this->m_XIcon).m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  uVar20 = 0x3d4ccccd;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_XIcon).m_def;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar3 = &(this->m_XIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar3 & 7;
  puVar9 = (ulong *)((int)piVar3 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_XIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar4 = &(this->m_XIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar4 & 7;
  puVar9 = (ulong *)((int)ppEVar4 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  (this->m_XIcon).m_def.__vtable = pEVar6;
                    /* end of inlined section */
  max = 0x20;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  Buffer._20_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  Ptr = 0;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  iVar19 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  Buffer[0] = -0x33;
  Buffer[1] = -0x34;
  Buffer[2] = 'L';
  Buffer[3] = '=';
                    /* end of inlined section */
  Buffer._4_4_ = 32.0 / (float)iVar19;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[2] = Buffer._4_4_;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_00,-0x3e263a13);
  InitInActiveShader__7EUIIconi(this_00,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  Buffer._12_4_ = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  Buffer._8_4_ = 0;
  Buffer._16_4_ = 0;
  pEVar6 = (this->m_TriIcon).m_def.__vtable;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_TriIcon).m_def;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar3 = &(this->m_TriIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar3 & 7;
  puVar9 = (ulong *)((int)piVar3 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_TriIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar4 = &(this->m_TriIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar4 & 7;
  puVar9 = (ulong *)((int)ppEVar4 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_TriIcon).m_def.__vtable = pEVar6;
  Buffer._20_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar19 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  *(undefined4 *)&(this->m_TriIcon).field0_0x0.m_WDH.field0_0x0 = uVar20;
  Buffer[0] = (char)uVar20;
  Buffer[1] = (char)((uint)uVar20 >> 8);
  Buffer[2] = (char)((uint)uVar20 >> 0x10);
  Buffer[3] = (char)((uint)uVar20 >> 0x18);
                    /* end of inlined section */
  Buffer._4_4_ = 32.0 / (float)iVar19;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[2] = Buffer._4_4_;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(this_01,0x2ccf500a);
  InitInActiveShader__7EUIIconi(this_01,0x2ccf500a);
  pEVar7 = this->m_Prompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  psVar10 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"select");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(this_02->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,
             psVar10,0x20);
  AddIcon__9EUIPromptP7EUIIcon(this_02,this_00);
  pEVar7 = this->m_Prompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  psVar10 = GetNeighborhoodModeString__7EGlobalPCc(&_globals,"exit");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)this->m_Prompts[1].field0_0x0.field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             sVar5 + 4,psVar10,0x20);
  AddIcon__9EUIPromptP7EUIIcon(this->m_Prompts + 1,this_01);
  Init__10EPromptBar(&this->m_PromptBar);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Buffer[0] = '\0';
  Buffer[1] = '\0';
  Buffer[2] = '\0';
  Buffer[3] = '?';
                    /* end of inlined section */
  Buffer._4_4_ = 0.92;
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(&this->m_PromptBar,this_02,2,(EVec2 *)Buffer);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_pPromptBarInitted = 1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6b80ae,(EFile *)0x0,0);
  this->m_pTitleBgCenterShdr = pEVar11;
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x90d49d3f,(EFile *)0x0,0);
  this->m_pTitleBgLeftShdr = pEVar11;
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6adba05c,(EFile *)0x0,0);
  this->m_pTitleBgRightShdr = pEVar11;
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xff679fa5,(EFile *)0x0,0);
  this->m_pTitleHighCenterShdr = pEVar11;
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6fd88234,(EFile *)0x0,0);
  this->m_pTitleHighLeftShdr = pEVar11;
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x95d7bf57,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTitleHighRightShdr = pEVar11;
  pEVar12 = (ESimsMemCardMenu *)__builtin_new(0xc0);
  pEVar12 = __16ESimsMemCardMenu(pEVar12);
  __src = FileList;
  this->m_Menu = pEVar12;
  iVar19 = 0x1f;
  Buffer[2] = '\0';
  pacVar13 = FileList[0x1f];
  Buffer[1] = '*';
  do {
    (*pacVar13)[0] = '\0';
    iVar19 = iVar19 + -1;
    pacVar13 = pacVar13[-1];
  } while (-1 < iVar19);
  iVar19 = Ptr;
  if (ListStoryModeFiles - 1U < 2) {
    Buffer[0] = 'S';
    (*(code *)_pMemoryCard->__vtable[1].IsCardAvailable)
              ((int)&_pMemoryCard->__vtable +
               (int)*(short *)&_pMemoryCard->__vtable[1].CheckForOverwriteSpace,0,Buffer,0x20,__src)
    ;
    iVar17 = 0;
    if (FileList[0][0] == '\0') {
      Ptr = 0;
      iVar19 = Ptr;
    }
    else {
      max = 0x20;
      do {
        iVar17 = iVar17 + 1;
        max = max + -1;
        iVar19 = Ptr;
        if (0x1f < iVar17) break;
        iVar19 = iVar17;
      } while (__src[iVar17][0] != '\0');
    }
  }
  Ptr = iVar19;
  if ((ListStoryModeFiles == 0) || (ListStoryModeFiles == 2)) {
    Buffer[0] = 'N';
    (*(code *)_pMemoryCard->__vtable[1].IsCardAvailable)
              ((int)&_pMemoryCard->__vtable +
               (int)*(short *)&_pMemoryCard->__vtable[1].CheckForOverwriteSpace,0,Buffer,max,
               __src[Ptr]);
  }
  iVar19 = _iVideoMode;
  if (FileList[0][0] == '\0') {
    pEVar14 = (ESimsMemCardMenuItem *)__builtin_new(0xb0);
    pEVar14 = __20ESimsMemCardMenuItem(pEVar14);
    pEVar14->m_MenuPtr = this;
    pEVar14->m_Mode = ListStoryModeFiles;
    *(undefined4 *)&pEVar14->m_bNoFilesOnCard = 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_198 = 0;
    local_19c = 0;
    local_1a0 = 0;
                    /* end of inlined section */
    pEVar7 = (this->m_Menu->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar7[2].SetBoxDims)
              ((int)(this->m_Menu->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar7[2].SetPos + -0x44,pEVar14,&local_1a0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    AddTail__9ENodeListUi(&(this->m_Menu->m_itemList).field0_0x0,(uint)pEVar14);
                    /* end of inlined section */
    this->m_Selection = 0;
  }
  else {
    iVar18 = 0;
    iVar17 = 0;
    do {
      FName[1] = '\0';
      FName[0] = '/';
      if (iVar19 == 1) {
        pcVar16 = "BASLES-51257";
      }
      else {
        pcVar16 = "BASLUS-20573";
      }
      strcat(FName,pcVar16);
      strcat(FName,(char *)__src);
      strcat(FName,"/");
      if (iVar19 == 1) {
        pcVar16 = "BASLES-51257";
      }
      else {
        pcVar16 = "BASLUS-20573";
      }
      strcat(FName,pcVar16);
      strcat(FName,(char *)__src);
      local_190[0] = 0;
      (*(code *)_pMemoryCard->__vtable->LoadDataA)
                ((int)&_pMemoryCard->__vtable +
                 (int)*(short *)&_pMemoryCard->__vtable->UnFormatCardS,FName,0,0x80,local_190);
      if (bSkipCurrentNeighborhood) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        psVar10 = (short *)(*(code *)_5Globs_pNeighborhood->__vtable->SetFilename)
                                     ((int)&_5Globs_pNeighborhood->__vtable +
                                      (int)*(short *)&_5Globs_pNeighborhood->__vtable->LevelComplete
                                     );
        iVar15 = wcscmp__FPCUsT0(local_190,psVar10);
        if (iVar15 != 0) goto LAB_001dc9c0;
      }
      else {
LAB_001dc9c0:
        iVar18 = iVar18 + 1;
        pEVar14 = (ESimsMemCardMenuItem *)__builtin_new(0xb0);
        pEVar14 = __20ESimsMemCardMenuItem(pEVar14);
        pEVar14->m_MenuPtr = this;
        *(undefined4 *)&pEVar14->m_bNoFilesOnCard = 0;
        __as__8EString2PCUs(&pEVar14->m_Name,local_190);
        __as__7EStringPCc(&pEVar14->m_FileName,(char *)__src);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_198 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_19c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_1a0 = 0;
                    /* end of inlined section */
        pEVar7 = (this->m_Menu->field0_0x0).field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar7[2].SetBoxDims)
                  ((int)(this->m_Menu->field0_0x0).field0_0x0.m_maxBackShdrSize +
                   *(short *)&pEVar7[2].SetPos + -0x44,pEVar14,&local_1a0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        AddTail__9ENodeListUi(&(this->m_Menu->m_itemList).field0_0x0,(uint)pEVar14);
                    /* end of inlined section */
      }
      iVar17 = iVar17 + 1;
      __src = __src[1];
    } while ((iVar17 < 0x20) && ((*__src)[0] != '\0'));
    if (iVar18 == 0) {
      pEVar14 = (ESimsMemCardMenuItem *)__builtin_new(0xb0);
      pEVar14 = __20ESimsMemCardMenuItem(pEVar14);
      *(undefined4 *)&pEVar14->m_bNoFilesOnCard = 1;
      pEVar14->m_MenuPtr = this;
      pEVar14->m_Mode = ListStoryModeFiles;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_198 = 0;
      local_19c = 0;
      local_1a0 = 0;
                    /* end of inlined section */
      pEVar7 = (this->m_Menu->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar7[2].SetBoxDims)
                ((int)(this->m_Menu->field0_0x0).field0_0x0.m_maxBackShdrSize +
                 *(short *)&pEVar7[2].SetPos + -0x44,pEVar14,&local_1a0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      AddTail__9ENodeListUi(&(this->m_Menu->m_itemList).field0_0x0,(uint)pEVar14);
                    /* end of inlined section */
      this->m_Selection = 0;
    }
    else {
      this->m_Selection = 0;
    }
  }
  if (Title == (short *)0x0) {
    psVar10 = GetMemCardUIString__7EGlobalPCc(&_globals,"select_a_neighborhood");
    wcscpy__FPUsPCUs(this->m_TitleString,psVar10);
    *(undefined4 *)&this->m_bStartLoad = 0;
  }
  else {
    wcscpy__FPUsPCUs(this->m_TitleString,Title);
    *(undefined4 *)&this->m_bStartLoad = 0;
  }
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bExitLoad = 0;
  __as__7EStringPCc(&this->m_LoadFileName,"");
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc1d9c5ed,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pXIcon = pEVar11;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2ccf500a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTriIcon = pEVar11;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBlankShdr = pEVar11;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMenuBevelShdr = pEVar11;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x4185128e,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pMenuBevelBottomShdr = pEVar11;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x9c19fe1e,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTextLineCenterShdr = pEVar11;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf6a9deec,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTextLineRightShdr = pEVar11;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xca6e38f,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTextLineLeftShdr = pEVar11;
  return;
}

bool ESimsMemCardMenuMgr::Update() {
  EUIObjectNode__vtable *pEVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  long lVar3;
  bool bVar4;
  
  pEVar1 = (this->m_Menu->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1->SetBoxDims)
            ((int)(this->m_Menu->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar1->SetPos + -0x44);
  pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar2[1].GetBut)
                    ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,0,
                     0x10);
  if (lVar3 == 0) {
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar3 = (*(code *)pEVar2[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,1,
                       0x10);
    if (lVar3 == 0) goto LAB_001dcccc;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x48ae94f);
                    /* end of inlined section */
  *(undefined4 *)&this->m_bExitLoad = 1;
LAB_001dcccc:
  Update__10EPromptBar(&this->m_PromptBar);
  bVar4 = false;
  if ((*(int *)&this->m_bStartLoad != 0) || (*(int *)&this->m_bExitLoad != 0)) {
    bVar4 = true;
  }
  return bVar4;
}

void ESimsMemCardMenuMgr::Draw(ERC *prc) {
	EVec2 Dimensions;
	EVec2 Pos;
	ERFont *this;
	u16 *szString;
	ERFont *this;
	ERC *prc;
	
  EUIObjectNode__vtable *pEVar1;
  ERFont *pEVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  undefined4 uVar6;
  float fVar7;
  EVec2 Dimensions;
  EVec2 Pos;
  float local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  EHashTableNode *local_88;
  EHashTableNode *local_84;
  EHashTableNode **local_80;
  uint uStack_7c;
  EFontSize *local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (EFontSize *)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  local_80 = (EHashTableNode **)unaff_s0;
  uStack_7c = (uint)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  DrawBigBox__10EDialogWinP3ERCfffff(prc,0.05,0.2,0.95,0.83,1.0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar7 = 0.9;
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pTitleBgCenterShdr,prc,0);
  uVar6 = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Dimensions.field0_0x0.d[0] = 0.36;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Pos.field0_0x0.d[0] = 5.6;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Dimensions.field0_0x0.d[1] = 0.25;
  local_94 = 0x3f800000;
  local_98 = 0x3f800000;
  local_9c = 0x3f800000;
  local_a0 = 1.0;
                    /* end of inlined section */
  Pos.field0_0x0.d[1] = fVar7;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&Dimensions,&Pos,
             (EVec2 *)&local_a0);
  Select__8ERShaderP3ERCi(this->m_pTitleBgLeftShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Dimensions.field0_0x0.d[0] = 0.31;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Dimensions.field0_0x0.d[1] = 0.25;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Pos.field0_0x0.d[0] = 1.0;
  local_84 = (EHashTableNode *)0x3f800000;
  local_88 = (EHashTableNode *)0x3f800000;
  local_8c = 0x3f800000;
  local_90 = 0x3f800000;
                    /* end of inlined section */
  Pos.field0_0x0.d[1] = fVar7;
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar6,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&Dimensions,&Pos,
             &local_90);
  Select__8ERShaderP3ERCi(this->m_pTitleBgRightShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Dimensions.field0_0x0.d[0] = 0.64;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  Dimensions.field0_0x0.d[1] = 0.25;
  Pos.field0_0x0.d[0] = 1.0;
  local_94 = 0x3f800000;
  local_98 = 0x3f800000;
  local_9c = 0x3f800000;
  local_a0 = 1.0;
                    /* end of inlined section */
  Pos.field0_0x0.d[1] = fVar7;
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar6,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&Dimensions,&Pos,
             (EVec2 *)&local_a0);
  SetSize__6ERFontffb(_globals.m_pFont,16.0,1.0,true);
  uVar5 = _WHITE.field0_0x0.d[3];
  uVar4 = _WHITE.field0_0x0.d[2];
  uVar3 = _WHITE.field0_0x0._0_8_;
  pEVar2 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
  (pEVar2->m_vColor).field0_0x0.d[2] = uVar4;
  (pEVar2->m_vColor).field0_0x0.d[3] = uVar5;
                    /* end of inlined section */
  Select__6ERFontP3ERC(_globals.m_pFont,prc);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&Dimensions,_globals.m_pFont,SUB41(this->m_TitleString,0),
             (EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  local_9c = 0x3e866666;
                    /* end of inlined section */
  Pos.field0_0x0.d[0] = 0.5 - Dimensions.field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  Pos.field0_0x0.d[1] = 0.2625;
  local_a0 = Pos.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (_globals.m_pFont,prc,this->m_TitleString,true,(EVec2 *)&local_a0,E_FAX_LEFT,E_FAY_TOP,
             (EVec2 *)0x0);
                    /* end of inlined section */
  pEVar1 = (this->m_Menu->field0_0x0).field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1->Message)
            ((int)(this->m_Menu->field0_0x0).field0_0x0.m_maxBackShdrSize +
             *(short *)&pEVar1->SetBoxDims + -0x44,prc);
  Draw__10EPromptBarP3ERC(&this->m_PromptBar,prc);
  return;
}

void ESimsMemCardMenuMgr::Reset() {
  ESimsMemCardMenu *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  ERShader *pEVar3;
  
  pEVar1 = this->m_Menu;
  if (pEVar1 != (ESimsMemCardMenu *)0x0) {
    pEVar2 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar2->Draw)
              ((int)(pEVar1->field0_0x0).field0_0x0.m_maxBackShdrSize +
               *(short *)&pEVar2->Update + -0x44,3);
    this->m_Menu = (ESimsMemCardMenu *)0x0;
  }
  if (*(int *)&this->m_pPromptBarInitted != 1) {
    pEVar3 = this->m_pBlankShdr;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pBlankShdr = (ERShader *)0x0;
LAB_001dd038:
      pEVar3 = this->m_pBlankShdr;
    }
    pEVar3 = this->m_pMenuBevelShdr;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pMenuBevelShdr = (ERShader *)0x0;
      pEVar3 = this->m_pMenuBevelShdr;
    }
    pEVar3 = this->m_pMenuBevelBottomShdr;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pMenuBevelBottomShdr = (ERShader *)0x0;
      pEVar3 = this->m_pMenuBevelBottomShdr;
    }
    pEVar3 = this->m_pTextLineCenterShdr;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pTextLineCenterShdr = (ERShader *)0x0;
      pEVar3 = this->m_pTextLineCenterShdr;
    }
    pEVar3 = this->m_pTextLineRightShdr;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pTextLineRightShdr = (ERShader *)0x0;
      pEVar3 = this->m_pTextLineRightShdr;
    }
    pEVar3 = this->m_pTextLineLeftShdr;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pTextLineLeftShdr = (ERShader *)0x0;
      pEVar3 = this->m_pTextLineLeftShdr;
    }
    pEVar3 = this->m_pXIcon;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pXIcon = (ERShader *)0x0;
      pEVar3 = this->m_pXIcon;
    }
    pEVar3 = this->m_pTriIcon;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pTriIcon = (ERShader *)0x0;
      pEVar3 = this->m_pTriIcon;
    }
    pEVar3 = this->m_pTitleBgCenterShdr;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pTitleBgCenterShdr = (ERShader *)0x0;
      pEVar3 = this->m_pTitleBgCenterShdr;
    }
    pEVar3 = this->m_pTitleBgLeftShdr;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pTitleBgLeftShdr = (ERShader *)0x0;
      pEVar3 = this->m_pTitleBgLeftShdr;
    }
    pEVar3 = this->m_pTitleBgRightShdr;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pTitleBgRightShdr = (ERShader *)0x0;
      pEVar3 = this->m_pTitleBgRightShdr;
    }
    pEVar3 = this->m_pTitleHighCenterShdr;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pTitleHighCenterShdr = (ERShader *)0x0;
      pEVar3 = this->m_pTitleHighCenterShdr;
    }
    pEVar3 = this->m_pTitleHighLeftShdr;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pTitleHighLeftShdr = (ERShader *)0x0;
      pEVar3 = this->m_pTitleHighLeftShdr;
    }
    pEVar3 = this->m_pTitleHighRightShdr;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pTitleHighRightShdr = (ERShader *)0x0;
      pEVar3 = this->m_pTitleHighRightShdr;
    }
    *(undefined4 *)&this->m_bAlreadyInitted = 0;
    return;
  }
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_Prompts);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_Prompts + 1));
  Reset__10EPromptBar(&this->m_PromptBar);
  *(undefined4 *)&this->m_pPromptBarInitted = 0;
  goto LAB_001dd038;
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

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vTopLeft.field0_0x0.d[1] = 0.2;
    vWHMessageBack.field0_0x0.d[1] = 0.6;
    vTopLeft.field0_0x0.d[0] = 0.2;
    vWHMessageBack.field0_0x0.d[0] = 0.6;
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

void global constructors keyed to ESimsMemCardMenuItem::ESimsMemCardMenuItem() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
