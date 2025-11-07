// STATUS: NOT STARTED

#include "charedtitlemenu.h"

__vtbl_ptr_type ECharedTitleMenu virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedTitleMenu::~ECharedTitleMenu,
		/* .__delta2 = */ -27176
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedTitleMenu::Update,
		/* .__delta2 = */ -19544
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedTitleMenu::Draw,
		/* .__delta2 = */ -21592
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

ECharedTitleMenu* ECharedTitleMenu::ECharedTitleMenu() {
	EUIObjectMover *this;
	
  EUIIconDef *icondef;
  EUITextIconDef *textdef;
  ECharedTitlePrompt *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  int iVar2;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float optGap;
  float _yoff;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  EUIIconDef local_190;
  EUITextIconDef local_170;
  EUIIconDef local_150;
  EUITextIconDef local_130;
  EUIIconDef local_110;
  EUIIcon *local_f0;
  EUIIcon *local_ec;
  EUIIcon *local_e8;
  EUIIcon *local_e4;
  EUIIcon *local_e0;
  EUIIcon *local_dc;
  EUIIcon *local_d8;
  EUIIconDef *local_d4;
  EUIIcon *local_d0;
  EUIIcon *local_cc;
  EUIIcon *local_c8;
  EUITextIconDef *local_c4;
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
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  iVar2 = 3;
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __13EUIObjectNode(&this->field0_0x0);
  optGap = 0.05;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_mover).m_startt = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16ECharedTitleMenu;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_mover).m_stopt = 0.0;
                    /* end of inlined section */
  _yoff = (this->m_mover).m_stopt;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
                    /* end of inlined section */
  (this->m_mover).m_curtime = (this->m_mover).m_startt;
  __7EUIMenuiifff(&this->m_SimMenu,-1,0,0.05,_yoff,_yoff);
  __7EUIMenuiifff(&this->m_FamilyMenu,-1,0,optGap,_yoff,_yoff);
  local_d4 = &local_150;
  local_c4 = &local_130;
  pEVar1 = this->m_SimMenuPrompts;
  do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_198 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_19c = 0;
    local_1a0 = 0;
    local_190.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_190.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_190.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_190.m_selColorIdx = 0;
    local_190.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_170.m_maxChars = 0x20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_190.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_170.m_xAlign = E_FAX_LEFT;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_170.m_yAlign = E_FAY_TOP;
                    /* end of inlined section */
    iVar2 = iVar2 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_170.m_pointsize = 12.0;
    local_170.m_selColorIdx = 0;
    local_170.m_colorIdx = 1;
                    /* end of inlined section */
    local_170.m_retChar = -1;
    __18ECharedTitlePromptPCcRC10EUIIconDefRC14EUITextIconDefiG5EVec3
              (pEVar1,"",&local_190,&local_170,-1,(EVec3 *)&local_1a0);
    textdef = local_c4;
    icondef = local_d4;
    local_190.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    pEVar1 = pEVar1 + 1;
  } while (iVar2 != -1);
  local_d8 = &this->m_CreateASimIcon;
  local_dc = &this->m_PersonalIcon;
  iVar2 = 3;
  local_e0 = &this->m_BodyIcon;
  local_e4 = &this->m_HeadIcon;
  local_e8 = &this->m_SimDoneIcon;
  local_ec = &this->m_CreateAFamilyIcon;
  local_f0 = &this->m_NewIcon;
  local_c8 = &this->m_EditIcon;
  local_cc = &this->m_DeleteIcon;
  local_d0 = &this->m_FamilyDoneIcon;
  pEVar1 = this->m_FamilyMenuPrompts;
  do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_198 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_19c = 0;
    local_1a0 = 0;
    local_150.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_150.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    icondef->m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_150.m_selColorIdx = 0;
    icondef->m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_130.m_maxChars = 0x20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_150.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_130.m_xAlign = E_FAX_LEFT;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_130.m_yAlign = E_FAY_TOP;
                    /* end of inlined section */
    iVar2 = iVar2 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    textdef->m_pointsize = 12.0;
    local_130.m_selColorIdx = 0;
    textdef->m_colorIdx = 1;
                    /* end of inlined section */
    local_130.m_retChar = -1;
    __18ECharedTitlePromptPCcRC10EUIIconDefRC14EUITextIconDefiG5EVec3
              (pEVar1,"",icondef,textdef,-1,(EVec3 *)&local_1a0);
    local_150.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    pEVar1 = pEVar1 + 1;
  } while (iVar2 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110.m_flags = 0;
  local_110.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_110.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_110.m_colorIdx = 1;
                    /* end of inlined section */
  local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_d8,&local_110,0,0,0x40);
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
  local_110.m_colorIdx = 1;
                    /* end of inlined section */
  local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_dc,&local_110,0,0,0x40);
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
  local_110.m_colorIdx = 1;
                    /* end of inlined section */
  local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_e0,&local_110,0,0,0x40);
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
  local_110.m_colorIdx = 1;
                    /* end of inlined section */
  local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_e4,&local_110,0,0,0x40);
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
  local_110.m_colorIdx = 1;
                    /* end of inlined section */
  local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_e8,&local_110,0,0,0x40);
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
  local_110.m_colorIdx = 1;
                    /* end of inlined section */
  local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_ec,&local_110,0,0,0x40);
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
  local_110.m_colorIdx = 1;
                    /* end of inlined section */
  local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_f0,&local_110,0,0,0x40);
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
  local_110.m_colorIdx = 1;
                    /* end of inlined section */
  local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_c8,&local_110,0,0,0x40);
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
  local_110.m_colorIdx = 1;
                    /* end of inlined section */
  local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_cc,&local_110,0,0,0x40);
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
  local_110.m_colorIdx = 1;
                    /* end of inlined section */
  local_110.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_d0,&local_110,0,0,0x40);
  Init__16ECharedTitleMenu(this);
  return this;
}

void ECharedTitleMenu::~ECharedTitleMenu(int __in_chrg) {
	int i;
	void *ptr;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIIcon *this_00;
  ERShader *this_01;
  ERFont *this_02;
  EUIObjectNode *pEVar3;
  ECharedTitlePrompt *pEVar4;
  int iVar5;
  ECharedTitlePrompt *pEVar6;
  EUIMenu *this_03;
  EUIMenu *this_04;
  
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_16ECharedTitleMenu;
  while( true ) {
    if (this->m_pBlankShdr == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_pBlankShdr->field0_0x0);
    this->m_pBlankShdr = (ERShader *)0x0;
  }
  this_00 = &this->m_CreateASimIcon;
  pEVar6 = this->m_SimMenuPrompts;
  this_04 = &this->m_SimMenu;
  pEVar4 = this->m_FamilyMenuPrompts;
  this_03 = &this->m_FamilyMenu;
  while (this->m_pMenuBevelShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pMenuBevelShdr->field0_0x0);
    this->m_pMenuBevelShdr = (ERShader *)0x0;
  }
  this_01 = this->m_pTitleIconShdr;
  while (this_01 != (ERShader *)0x0) {
    DelRef__9EResource(&this_01->field0_0x0);
    this->m_pTitleIconShdr = (ERShader *)0x0;
    this_01 = this->m_pTitleIconShdr;
  }
  this_02 = this->m_pFont;
  while (this_02 != (ERFont *)0x0) {
    DelRef__9EResource(&this_02->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
    this_02 = this->m_pFont;
  }
  pEVar2 = this->m_SimMenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable
  ;
  pEVar3 = (EUIObjectNode *)this->m_SimMenuPrompts;
  iVar5 = 3;
  (*(code *)pEVar2[1].RemoveChild)
            ((int)((uint (*) [2])&pEVar6->field0_0x0)[-0xc] + *(short *)&pEVar2[1].AddChild + 4,
             &this->m_PersonalIcon);
  pEVar2 = this->m_SimMenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable
  ;
  (*(code *)pEVar2[1].RemoveChild)
            ((int)this->m_SimMenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar2[1].AddChild + 4U,
             &this->m_BodyIcon);
  pEVar2 = this->m_SimMenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable
  ;
  (*(code *)pEVar2[1].RemoveChild)
            ((int)this->m_SimMenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar2[1].AddChild + 4U,
             &this->m_HeadIcon);
  pEVar2 = this->m_SimMenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable
  ;
  (*(code *)pEVar2[1].RemoveChild)
            ((int)this->m_SimMenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar2[1].AddChild + 4U,
             &this->m_SimDoneIcon);
  do {
    RemoveChild__13EUIObjectNodeP13EUIObjectNode(&this_04->field0_0x0,pEVar3);
    iVar5 = iVar5 + -1;
    pEVar3 = (EUIObjectNode *)&pEVar3[3].m_pParent;
  } while (-1 < iVar5);
  pEVar2 = this->m_FamilyMenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
           __vtable;
  pEVar3 = (EUIObjectNode *)this->m_FamilyMenuPrompts;
  iVar5 = 3;
  (*(code *)pEVar2[1].RemoveChild)
            ((int)((uint (*) [2])&pEVar4->field0_0x0)[-0xc] + *(short *)&pEVar2[1].AddChild + 4,
             &this->m_NewIcon);
  pEVar2 = this->m_FamilyMenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
           __vtable;
  (*(code *)pEVar2[1].RemoveChild)
            ((int)this->m_FamilyMenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar2[1].AddChild + 4U,
             &this->m_EditIcon);
  pEVar2 = this->m_FamilyMenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
           __vtable;
  (*(code *)pEVar2[1].RemoveChild)
            ((int)this->m_FamilyMenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar2[1].AddChild + 4U,
             &this->m_DeleteIcon);
  pEVar2 = this->m_FamilyMenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
           __vtable;
  (*(code *)pEVar2[1].RemoveChild)
            ((int)this->m_FamilyMenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar2[1].AddChild + 4U,
             &this->m_FamilyDoneIcon);
  do {
    RemoveChild__13EUIObjectNodeP13EUIObjectNode(&this_03->field0_0x0,pEVar3);
    iVar5 = iVar5 + -1;
    pEVar3 = (EUIObjectNode *)&pEVar3[3].m_pParent;
  } while (-1 < iVar5);
  RemoveChild__13EUIObjectNodeP13EUIObjectNode(&this->field0_0x0,&this_04->field0_0x0);
  RemoveChild__13EUIObjectNodeP13EUIObjectNode(&this->field0_0x0,&this_03->field0_0x0);
  ___7EUIIcon(&this->m_FamilyDoneIcon,2);
  ___7EUIIcon(&this->m_DeleteIcon,2);
  ___7EUIIcon(&this->m_EditIcon,2);
  ___7EUIIcon(&this->m_NewIcon,2);
  ___7EUIIcon(&this->m_CreateAFamilyIcon,2);
  ___7EUIIcon(&this->m_SimDoneIcon,2);
  ___7EUIIcon(&this->m_HeadIcon,2);
  ___7EUIIcon(&this->m_BodyIcon,2);
  ___7EUIIcon(&this->m_PersonalIcon,2);
  ___7EUIIcon(this_00,2);
  if (pEVar4 != (ECharedTitlePrompt *)0x0) {
    while (pEVar4 != (ECharedTitlePrompt *)this_00) {
      (**(code **)(*(int *)((int)(this_00 + -2) + 100) + 0xc))
                ((int)((EUIIcon *)((int)(this_00 + -2) + 0x2c))->m_maxBackShdrSize[-0xc] +
                 *(short *)(*(int *)((int)(this_00 + -2) + 100) + 8) + 4,0);
      this_00 = (EUIIcon *)((int)(this_00 + -2) + 0x2c);
    }
  }
                    /* end of inlined section */
  if ((pEVar6 != (ECharedTitlePrompt *)0x0) && (pEVar6 != pEVar4)) {
    pEVar4 = this->m_SimMenuPrompts + 3;
    do {
      pEVar2 = (pEVar4->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2->Draw)
                ((int)((uint (*) [2])&pEVar4->field0_0x0)[-0xc] + *(short *)&pEVar2->Update + 4,0);
      bVar1 = pEVar6 != pEVar4;
      pEVar4 = pEVar4 + -1;
    } while (bVar1);
  }
  ___7EUIMenu(this_03,2);
  ___7EUIMenu(this_04,2);
  ___13EUIObjectNode(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitlemenu.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ECharedTitleMenu::Init() {
	EUIIconDef icondef;
	EUITextIconDef texticon;
	int i;
	EVec2 vIconSize;
	EVec2 vTextSize;
	EUIObjectMover *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIObjectNode *this;
	
  EUIIconDef *pEVar1;
  int *piVar2;
  EUIVirtualCtrl **ppEVar3;
  undefined *puVar4;
  short sVar5;
  EUIObjectNode__vtable *pEVar6;
  uint uVar7;
  ulong *puVar8;
  EUIPrompt *pEVar9;
  EVec2 EVar10;
  ERShader *pEVar11;
  ERFont *pEVar12;
  short *psVar13;
  EUIIconDef__vtable *pEVar14;
  EUITextIcon *pEVar15;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar16;
  undefined8 unaff_s5;
  EUIMenu *this_00;
  undefined8 unaff_s6;
  EUIObjectNode *pEVar17;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar18;
  float fVar19;
  EUIIconDef icondef;
  EVec2 vIconSize;
  EUITextIconDef texticon;
  EVec2 vTextSize;
  undefined local_140 [32];
  EUIIcon *local_120;
  EUIIcon *local_11c;
  EUIIcon *local_118;
  EUIIcon *local_114;
  EUIIcon *local_110;
  EUIIcon *local_10c;
  EUIIcon *local_108;
  EUIIcon *local_104;
  EFontSize *local_100;
  EUIPrompt *local_fc;
  EUIPrompt *local_f8;
  EUIIcon *local_f4;
  EUIIcon *local_f0;
  EUIPrompt *local_ec;
  EUIPrompt *local_e8;
  EUIIcon *local_e4;
  EUIMenu *local_e0;
  EUIIcon *local_dc;
  EUIPrompt *local_d8;
  EUIPrompt *local_d4;
  EUIIcon *local_d0;
  EUIIcon *local_cc;
  EVec2 *local_c8;
  EUIPrompt *local_c4;
  EUIIcon *local_c0;
  EUIPrompt *local_bc;
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
  
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
                    /* end of inlined section */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
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
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  (this->m_mover).m_curtime = 0.0;
  (this->m_mover).m_startt = 0.0;
  (this->m_mover).m_stopt = 0.5;
  fVar18 = (this->m_mover).m_curtime;
  fVar19 = (this->m_mover).m_startt;
  if (fVar19 <= fVar18) {
    fVar19 = (float)((int)fVar18 * (uint)(fVar18 < 0.5) | (uint)(fVar18 >= 0.5) * 0x3f000000);
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_mover).m_curtime = fVar19;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bEditDeleteActive = 1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bIsPersonalityAvailable = 1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_nNextDrawMode = '\0';
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_nIsMenuVisible = '\x01';
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_nDrawMode = '\x02';
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
  this->m_pBlankShdr = pEVar11;
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
  this->m_pMenuBevelShdr = pEVar11;
  pEVar11 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x53e46563,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pTitleIconShdr = pEVar11;
  this_00 = &this->m_SimMenu;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar12 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  iVar16 = 3;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_120 = &this->m_PersonalIcon;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  this->m_pFont = pEVar12;
  SetSize__6ERFontffb(pEVar12,14.0,1.0,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_11c = &this->m_BodyIcon;
  local_118 = &this->m_CreateAFamilyIcon;
  local_114 = &this->m_NewIcon;
  local_110 = &this->m_EditIcon;
  local_10c = &this->m_DeleteIcon;
                    /* end of inlined section */
  local_104 = local_120;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_108 = &this->m_FamilyDoneIcon;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar14 = (this->m_CreateASimIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_CreateASimIcon).m_def.m_trigger + 3);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar1 = &(this->m_CreateASimIcon).m_def;
  uVar7 = (uint)pEVar1 & 7;
  puVar8 = (ulong *)((int)pEVar1 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_CreateASimIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar2 = &(this->m_CreateASimIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar2 & 7;
  puVar8 = (ulong *)((int)piVar2 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_CreateASimIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar3 = &(this->m_CreateASimIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar3 & 7;
  puVar8 = (ulong *)((int)ppEVar3 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  (this->m_CreateASimIcon).m_def.__vtable = pEVar14;
                    /* end of inlined section */
  local_f8 = (EUIPrompt *)(this->m_SimMenuPrompts + 1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  local_bc = (EUIPrompt *)(this->m_SimMenuPrompts + 3);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  local_d8 = (EUIPrompt *)(this->m_SimMenuPrompts + 2);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar14 = (local_120->m_def).__vtable;
  puVar4 = (undefined *)((int)&(this->m_PersonalIcon).m_def.m_trigger + 3);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar1 = &(this->m_PersonalIcon).m_def;
  uVar7 = (uint)pEVar1 & 7;
  puVar8 = (ulong *)((int)pEVar1 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_PersonalIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar2 = &(this->m_PersonalIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar2 & 7;
  puVar8 = (ulong *)((int)piVar2 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_PersonalIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar3 = &(this->m_PersonalIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar3 & 7;
  puVar8 = (ulong *)((int)ppEVar3 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
                    /* end of inlined section */
  local_ec = (EUIPrompt *)this->m_FamilyMenuPrompts;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  (local_120->m_def).__vtable = pEVar14;
                    /* end of inlined section */
  local_d4 = (EUIPrompt *)(this->m_FamilyMenuPrompts + 1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  local_e8 = (EUIPrompt *)(this->m_FamilyMenuPrompts + 3);
  local_e0 = &this->m_FamilyMenu;
  local_fc = (EUIPrompt *)(this->m_FamilyMenuPrompts + 2);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar14 = (this->m_BodyIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_BodyIcon).m_def.m_trigger + 3);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar1 = &(this->m_BodyIcon).m_def;
  uVar7 = (uint)pEVar1 & 7;
  puVar8 = (ulong *)((int)pEVar1 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_BodyIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar2 = &(this->m_BodyIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar2 & 7;
  puVar8 = (ulong *)((int)piVar2 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_BodyIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar3 = &(this->m_BodyIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar3 & 7;
  puVar8 = (ulong *)((int)ppEVar3 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_BodyIcon).m_def.__vtable = pEVar14;
  pEVar14 = (this->m_HeadIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_HeadIcon).m_def.m_trigger + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar1 = &(this->m_HeadIcon).m_def;
  uVar7 = (uint)pEVar1 & 7;
  puVar8 = (ulong *)((int)pEVar1 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_HeadIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar2 = &(this->m_HeadIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar2 & 7;
  puVar8 = (ulong *)((int)piVar2 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_HeadIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar3 = &(this->m_HeadIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar3 & 7;
  puVar8 = (ulong *)((int)ppEVar3 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_HeadIcon).m_def.__vtable = pEVar14;
  pEVar14 = (this->m_SimDoneIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_SimDoneIcon).m_def.m_trigger + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar1 = &(this->m_SimDoneIcon).m_def;
  uVar7 = (uint)pEVar1 & 7;
  puVar8 = (ulong *)((int)pEVar1 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_SimDoneIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar2 = &(this->m_SimDoneIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar2 & 7;
  puVar8 = (ulong *)((int)piVar2 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_SimDoneIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar3 = &(this->m_SimDoneIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar3 & 7;
  puVar8 = (ulong *)((int)ppEVar3 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_SimDoneIcon).m_def.__vtable = pEVar14;
  pEVar14 = (this->m_CreateAFamilyIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_CreateAFamilyIcon).m_def.m_trigger + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar1 = &(this->m_CreateAFamilyIcon).m_def;
  uVar7 = (uint)pEVar1 & 7;
  puVar8 = (ulong *)((int)pEVar1 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_CreateAFamilyIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar2 = &(this->m_CreateAFamilyIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar2 & 7;
  puVar8 = (ulong *)((int)piVar2 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_CreateAFamilyIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar3 = &(this->m_CreateAFamilyIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar3 & 7;
  puVar8 = (ulong *)((int)ppEVar3 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_CreateAFamilyIcon).m_def.__vtable = pEVar14;
  pEVar14 = (this->m_NewIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_NewIcon).m_def.m_trigger + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar1 = &(this->m_NewIcon).m_def;
  uVar7 = (uint)pEVar1 & 7;
  puVar8 = (ulong *)((int)pEVar1 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_NewIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar2 = &(this->m_NewIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar2 & 7;
  puVar8 = (ulong *)((int)piVar2 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_NewIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar3 = &(this->m_NewIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar3 & 7;
  puVar8 = (ulong *)((int)ppEVar3 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_NewIcon).m_def.__vtable = pEVar14;
  pEVar14 = (this->m_EditIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_EditIcon).m_def.m_trigger + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar1 = &(this->m_EditIcon).m_def;
  uVar7 = (uint)pEVar1 & 7;
  puVar8 = (ulong *)((int)pEVar1 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_EditIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar2 = &(this->m_EditIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar2 & 7;
  puVar8 = (ulong *)((int)piVar2 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_EditIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar3 = &(this->m_EditIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar3 & 7;
  puVar8 = (ulong *)((int)ppEVar3 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_EditIcon).m_def.__vtable = pEVar14;
  pEVar14 = (this->m_DeleteIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_DeleteIcon).m_def.m_trigger + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar1 = &(this->m_DeleteIcon).m_def;
  uVar7 = (uint)pEVar1 & 7;
  puVar8 = (ulong *)((int)pEVar1 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_DeleteIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar2 = &(this->m_DeleteIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar2 & 7;
  puVar8 = (ulong *)((int)piVar2 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_DeleteIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar3 = &(this->m_DeleteIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar3 & 7;
  puVar8 = (ulong *)((int)ppEVar3 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_DeleteIcon).m_def.__vtable = pEVar14;
  pEVar14 = (this->m_FamilyDoneIcon).m_def.__vtable;
  vIconSize.field0_0x0 = (EVec2__null___1__1)CONCAT44(vIconSize.field0_0x0.d[1],pEVar14);
  puVar4 = (undefined *)((int)&(this->m_FamilyDoneIcon).m_def.m_trigger + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
  pEVar1 = &(this->m_FamilyDoneIcon).m_def;
  uVar7 = (uint)pEVar1 & 7;
  puVar8 = (ulong *)((int)pEVar1 - uVar7);
  *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_FamilyDoneIcon).m_def.m_colorIdx + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
  piVar2 = &(this->m_FamilyDoneIcon).m_def.m_selColorIdx;
  uVar7 = (uint)piVar2 & 7;
  puVar8 = (ulong *)((int)piVar2 - uVar7);
  *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  puVar4 = (undefined *)((int)&(this->m_FamilyDoneIcon).m_def.__vtable + 3);
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
  ppEVar3 = &(this->m_FamilyDoneIcon).m_def.m_pCtrl;
  uVar7 = (uint)ppEVar3 & 7;
  puVar8 = (ulong *)((int)ppEVar3 - uVar7);
  *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
  (this->m_FamilyDoneIcon).m_def.__vtable = pEVar14;
  (this->m_FamilyDoneIcon).field0_0x0.m_WDH.field0_0x0.d[2] = 0.06;
  (this->m_FamilyDoneIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_CreateASimIcon).field0_0x0.m_WDH.field0_0x0.d[2] = 0.06;
  (this->m_PersonalIcon).field0_0x0.m_WDH.field0_0x0.d[2] = 0.06;
  (this->m_BodyIcon).field0_0x0.m_WDH.field0_0x0.d[2] = 0.06;
  (this->m_HeadIcon).field0_0x0.m_WDH.field0_0x0.d[2] = 0.06;
  (this->m_SimDoneIcon).field0_0x0.m_WDH.field0_0x0.d[2] = 0.06;
  (this->m_CreateAFamilyIcon).field0_0x0.m_WDH.field0_0x0.d[2] = 0.06;
  (this->m_NewIcon).field0_0x0.m_WDH.field0_0x0.d[2] = 0.06;
  (this->m_CreateASimIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_PersonalIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_BodyIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_HeadIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_SimDoneIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_CreateAFamilyIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_NewIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_EditIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_EditIcon).field0_0x0.m_WDH.field0_0x0.d[2] = 0.06;
  (this->m_DeleteIcon).field0_0x0.m_WDH.field0_0x0.d[2] = 0.06;
                    /* end of inlined section */
  (this->m_DeleteIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_f4 = local_114;
  local_f0 = local_11c;
  local_e4 = local_110;
  local_dc = &this->m_HeadIcon;
  local_d0 = local_10c;
  local_cc = &this->m_SimDoneIcon;
  local_c4 = &this->m_SimMenuPrompts[0].field0_0x0;
  local_c0 = local_108;
  InitActiveShader__7EUIIconi(&this->m_CreateASimIcon,0x53e46563);
  InitActiveShader__7EUIIconi(local_120,0x5e2e38e3);
  InitActiveShader__7EUIIconi(local_11c,0x3764a3b5);
  InitActiveShader__7EUIIconi(&this->m_HeadIcon,0x4b3f5e9b);
  InitActiveShader__7EUIIconi(&this->m_SimDoneIcon,0x76bf34ab);
  InitActiveShader__7EUIIconi(local_118,0x9ff3cc8);
  InitActiveShader__7EUIIconi(local_114,0x4cc6e2f8);
  InitActiveShader__7EUIIconi(local_110,0x37e22fb6);
  InitActiveShader__7EUIIconi(local_10c,0x5cf0ff55);
  InitActiveShader__7EUIIconi(local_108,0x76bf34ab);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  local_c8 = &vIconSize;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  local_100 = (EFontSize *)local_140;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  texticon.m_maxChars = 0;
  texticon.m_xAlign = E_FAX_LEFT;
  texticon.m_yAlign = E_FAY_TOP;
  texticon.m_pointsize = 16.0;
  texticon.m_selColorIdx = 0;
  texticon.m_colorIdx = 1;
  texticon.m_retChar = -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar14 = this->m_SimMenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  pEVar15 = (EUITextIcon *)this->m_SimMenuPrompts;
  while( true ) {
                    /* end of inlined section */
    iVar16 = iVar16 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    vIconSize.field0_0x0 =
         (EVec2__null___1__1)((ulong)vIconSize.field0_0x0 & 0xffffffff00000000 | ZEXT48(pEVar14));
    puVar4 = (undefined *)((int)&(pEVar15->field0_0x0).m_def.m_trigger + 3);
    uVar7 = (uint)puVar4 & 7;
    puVar8 = (ulong *)(puVar4 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
    pEVar1 = &(pEVar15->field0_0x0).m_def;
    uVar7 = (uint)pEVar1 & 7;
    puVar8 = (ulong *)((int)pEVar1 - uVar7);
    *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
    puVar4 = (undefined *)((int)&(pEVar15->field0_0x0).m_def.m_colorIdx + 3);
    uVar7 = (uint)puVar4 & 7;
    puVar8 = (ulong *)(puVar4 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
    piVar2 = &(pEVar15->field0_0x0).m_def.m_selColorIdx;
    uVar7 = (uint)piVar2 & 7;
    puVar8 = (ulong *)((int)piVar2 - uVar7);
    *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
    puVar4 = (undefined *)((int)&(pEVar15->field0_0x0).m_def.__vtable + 3);
    uVar7 = (uint)puVar4 & 7;
    puVar8 = (ulong *)(puVar4 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
    ppEVar3 = &(pEVar15->field0_0x0).m_def.m_pCtrl;
    uVar7 = (uint)ppEVar3 & 7;
    puVar8 = (ulong *)((int)ppEVar3 - uVar7);
    *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
    (pEVar15->field0_0x0).m_def.__vtable = pEVar14;
                    /* end of inlined section */
    pEVar6 = (pEVar15->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar6[2].GetPos)
              ((int)(pEVar15->field0_0x0).m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6[2].OnStickRepeat + 4,&texticon);
    SetFont__11EUITextIconi(pEVar15,-0x2080f4e9);
    if (iVar16 < 0) break;
    pEVar14 = (EUIIconDef__vtable *)pEVar15[1].m_textdef.m_maxChars;
    pEVar15 = (EUITextIcon *)((int)&pEVar15[1].field0_0x0.field0_0x0.m_pos.field0_0x0 + 4);
  }
  pEVar12 = this->m_pFont;
  this->m_fCASMenuWidth = 0.06;
  psVar13 = GetCreateASimString__7EGlobalPCc(&_globals,"personal");
  fVar18 = 0.04;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vIconSize,pEVar12,SUB41(psVar13,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar17 = (EUIObjectNode *)this->m_SimMenuPrompts;
  vIconSize.field0_0x0 =
       (EVec2__null___1__1)
       ((ulong)vIconSize.field0_0x0 & 0xffffffff00000000 |
       (ulong)(uint)(vIconSize.field0_0x0.d[0] + 0.05));
  this->m_fCASMenuWidth = this->m_fCASMenuWidth + vIconSize.field0_0x0.d[0] + 0.05 + fVar18;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
  *(uint *)&local_c4[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l = 0;
                    /* end of inlined section */
  pEVar6 = this->m_SimMenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable
  ;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = (EUIPrompt *)&local_c4->field0_0x0;
  psVar13 = GetCreateASimString__7EGlobalPCc(&_globals,"personal");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             (int)sVar5 + 4U,psVar13,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_c4,local_104);
  pEVar6 = this->m_SimMenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable
  ;
  (*(code *)pEVar6->RemoveChild)
            ((int)(local_c4->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar6->AddChild + 4,local_c8);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_c4,2,true);
  pEVar12 = this->m_pFont;
  psVar13 = GetCreateASimString__7EGlobalPCc(&_globals,"body");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vTextSize,pEVar12,SUB41(psVar13,0),(EWindow *)&pGifTag1);
  EVar10 = vTextSize;
  puVar4 = (undefined *)((int)&vIconSize.field0_0x0 + 7);
                    /* end of inlined section */
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | (ulong)vTextSize.field0_0x0 >> (7 - uVar7) * 8;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
                    /* end of inlined section */
  vIconSize.field0_0x0.d[0] = SUB84(EVar10.field0_0x0,0);
  vIconSize.field0_0x0 =
       (EVec2__null___1__1)
       ((ulong)EVar10.field0_0x0 & 0xffffffff00000000 |
       (ulong)(uint)(vIconSize.field0_0x0.d[0] + 0.05));
  this->m_fCASMenuWidth = this->m_fCASMenuWidth + vIconSize.field0_0x0.d[0] + 0.05 + fVar18;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
  *(uint *)&local_f8[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l = 2;
                    /* end of inlined section */
  pEVar6 = this->m_SimMenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable
  ;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = (EUIPrompt *)&local_f8->field0_0x0;
  psVar13 = GetCreateASimString__7EGlobalPCc(&_globals,"body");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             (int)sVar5 + 4U,psVar13,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_f8,local_f0);
  pEVar6 = this->m_SimMenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable
  ;
  (*(code *)pEVar6->RemoveChild)
            ((int)(local_f8->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar6->AddChild + 4,local_c8);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_f8,2,true);
  pEVar12 = this->m_pFont;
  psVar13 = GetCreateASimString__7EGlobalPCc(&_globals,"head");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vTextSize,pEVar12,SUB41(psVar13,0),(EWindow *)&pGifTag1);
  EVar10 = vTextSize;
  puVar4 = (undefined *)((int)&vIconSize.field0_0x0 + 7);
                    /* end of inlined section */
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | (ulong)vTextSize.field0_0x0 >> (7 - uVar7) * 8;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
                    /* end of inlined section */
  vIconSize.field0_0x0.d[0] = SUB84(EVar10.field0_0x0,0);
  vIconSize.field0_0x0 =
       (EVec2__null___1__1)
       ((ulong)EVar10.field0_0x0 & 0xffffffff00000000 |
       (ulong)(uint)(vIconSize.field0_0x0.d[0] + 0.05));
  this->m_fCASMenuWidth = this->m_fCASMenuWidth + vIconSize.field0_0x0.d[0] + 0.05 + fVar18;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
  *(uint *)&local_d8[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l = 1;
                    /* end of inlined section */
  pEVar6 = this->m_SimMenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable
  ;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = (EUIPrompt *)&local_d8->field0_0x0;
  psVar13 = GetCreateASimString__7EGlobalPCc(&_globals,"head");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             (int)sVar5 + 4U,psVar13,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_d8,local_dc);
  pEVar6 = this->m_SimMenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable
  ;
  (*(code *)pEVar6->RemoveChild)
            ((int)(local_d8->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar6->AddChild + 4,local_c8);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_d8,2,true);
  pEVar12 = this->m_pFont;
  psVar13 = GetCreateASimString__7EGlobalPCc(&_globals,"done");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vTextSize,pEVar12,SUB41(psVar13,0),(EWindow *)&pGifTag1);
  puVar4 = (undefined *)((int)&vIconSize.field0_0x0 + 7);
                    /* end of inlined section */
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | (ulong)vTextSize.field0_0x0 >> (7 - uVar7) * 8;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
                    /* end of inlined section */
  vIconSize.field0_0x0.d[0] = SUB84(vTextSize.field0_0x0,0);
  vIconSize.field0_0x0 =
       (EVec2__null___1__1)
       ((ulong)vTextSize.field0_0x0 & 0xffffffff00000000 |
       (ulong)(uint)(vIconSize.field0_0x0.d[0] + 0.05));
  this->m_fCASMenuWidth = this->m_fCASMenuWidth + vIconSize.field0_0x0.d[0] + 0.05 + fVar18;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
  *(uint *)&local_bc[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l = 3;
                    /* end of inlined section */
  pEVar6 = this->m_SimMenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable
  ;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = (EUIPrompt *)&local_bc->field0_0x0;
  psVar13 = GetCreateASimString__7EGlobalPCc(&_globals,"done");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             (int)sVar5 + 4U,psVar13,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_bc,local_cc);
  pEVar6 = this->m_SimMenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable
  ;
  (*(code *)pEVar6->RemoveChild)
            ((int)(local_bc->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar6->AddChild + 4,local_c8);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_bc,2,true);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_140._0_4_ = 0x3d0ff972;
  local_140._4_4_ = (EStorable__vtable *)0x0;
                    /* end of inlined section */
  local_100->m_xsize = 0x3df5c28f;
  SetPos__13EUIObjectNodeRC5EVec3(&this_00->field0_0x0,(EVec3 *)local_100);
  vTextSize.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3d851eb83f6e00d2;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetBoxDims__7EUIMenuRC5EVec2(this_00,(EVec2 *)(ERFont *)&vTextSize);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar6 = (this->m_SimMenu).field0_0x0.__vtable;
  (this->m_SimMenu).m_optgap = fVar18;
  (*(code *)pEVar6[2].Message)
            ((int)this_00->m_maxBackShdrSize + *(short *)&pEVar6[2].SetBoxDims + -0x44);
  pEVar6 = (this->m_SimMenu).field0_0x0.__vtable;
  (this->m_SimMenu).m_yoff = -0.01;
  (*(code *)pEVar6[2].Message)
            ((int)this_00->m_maxBackShdrSize + *(short *)&pEVar6[2].SetBoxDims + -0x44);
  (this->m_SimMenu).m_stick = 4;
  (this->m_SimMenu).m_layout = 1;
  iVar16 = 3;
  SetOptJust__7EUIMenuii(this_00,0,0);
  do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vTextSize.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x0;
                    /* end of inlined section */
    AddOpt__7EUIMenuP13EUIObjectNodeG5EVec3(this_00,pEVar17,(EVec3 *)(ERFont *)&vTextSize);
    iVar16 = iVar16 + -1;
    pEVar17 = (EUIObjectNode *)&pEVar17[3].m_pParent;
  } while (-1 < iVar16);
  pEVar6 = (this->field0_0x0).__vtable;
  iVar16 = 3;
  (*(code *)pEVar6[1].GetPos)
            ((int)&this->m_SimMenu + *(short *)&pEVar6[1].OnStickRepeat + -0x7c,this_00);
  SetFlagsPropigate__13EUIObjectNodeUib(&this_00->field0_0x0,2,false);
  SetFlagsPropigate__13EUIObjectNodeUib(&this_00->field0_0x0,4,false);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar14 = this->m_FamilyMenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  pEVar15 = (EUITextIcon *)this->m_FamilyMenuPrompts;
  while( true ) {
    iVar16 = iVar16 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    vTextSize.field0_0x0 =
         (EVec2__null___1__1)((ulong)vTextSize.field0_0x0 & 0xffffffff00000000 | ZEXT48(pEVar14));
    puVar4 = (undefined *)((int)&(pEVar15->field0_0x0).m_def.m_trigger + 3);
    uVar7 = (uint)puVar4 & 7;
    puVar8 = (ulong *)(puVar4 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar7) * 8;
    pEVar1 = &(pEVar15->field0_0x0).m_def;
    uVar7 = (uint)pEVar1 & 7;
    puVar8 = (ulong *)((int)pEVar1 - uVar7);
    *puVar8 = -0xffffffff << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
    puVar4 = (undefined *)((int)&(pEVar15->field0_0x0).m_def.m_colorIdx + 3);
    uVar7 = (uint)puVar4 & 7;
    puVar8 = (ulong *)(puVar4 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x100000000U >> (7 - uVar7) * 8;
    piVar2 = &(pEVar15->field0_0x0).m_def.m_selColorIdx;
    uVar7 = (uint)piVar2 & 7;
    puVar8 = (ulong *)((int)piVar2 - uVar7);
    *puVar8 = 0x100000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
    puVar4 = (undefined *)((int)&(pEVar15->field0_0x0).m_def.__vtable + 3);
    uVar7 = (uint)puVar4 & 7;
    puVar8 = (ulong *)(puVar4 + -uVar7);
    *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | 0x3a890800000000U >> (7 - uVar7) * 8;
    ppEVar3 = &(pEVar15->field0_0x0).m_def.m_pCtrl;
    uVar7 = (uint)ppEVar3 & 7;
    puVar8 = (ulong *)((int)ppEVar3 - uVar7);
    *puVar8 = 0x3a890800000000 << uVar7 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar7) * 8;
    (pEVar15->field0_0x0).m_def.__vtable = pEVar14;
                    /* end of inlined section */
    pEVar6 = (pEVar15->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar6[2].GetPos)
              ((int)(pEVar15->field0_0x0).m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6[2].OnStickRepeat + 4,&texticon);
    SetFont__11EUITextIconi(pEVar15,-0x2080f4e9);
    if (iVar16 < 0) break;
    pEVar14 = (EUIIconDef__vtable *)pEVar15[1].m_textdef.m_maxChars;
    pEVar15 = (EUITextIcon *)((int)&pEVar15[1].field0_0x0.field0_0x0.m_pos.field0_0x0 + 4);
  }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  this->m_fCAFMenuWidth = 0.06;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&vTextSize,this->m_pFont,true,(EWindow *)0x0);
  EVar10 = vTextSize;
  puVar4 = (undefined *)((int)&vIconSize.field0_0x0 + 7);
                    /* end of inlined section */
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | (ulong)vTextSize.field0_0x0 >> (7 - uVar7) * 8;
  fVar18 = 0.04;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
                    /* end of inlined section */
  vIconSize.field0_0x0.d[0] = SUB84(EVar10.field0_0x0,0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  vIconSize.field0_0x0 =
       (EVec2__null___1__1)
       ((ulong)EVar10.field0_0x0 & 0xffffffff00000000 |
       (ulong)(uint)(vIconSize.field0_0x0.d[0] + 0.05));
  this->m_fCAFMenuWidth = this->m_fCAFMenuWidth + vIconSize.field0_0x0.d[0] + 0.05 + 0.04;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
  *(uint *)&local_ec[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l =
       0x38;
                    /* end of inlined section */
  pEVar6 = this->m_FamilyMenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
           __vtable;
  (*(code *)pEVar6[2].SetBoxDims)
            ((int)(((EUIPrompt *)&local_ec->field0_0x0)->field0_0x0).field0_0x0.field0_0x0.
                  m_maxBackShdrSize[-0xc] + (int)*(short *)&pEVar6[2].SetPos + 4U,0x3a9a98,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_ec,local_f4);
  pEVar6 = this->m_FamilyMenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
           __vtable;
  (*(code *)pEVar6->RemoveChild)
            ((int)(local_ec->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar6->AddChild + 4,local_c8);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_ec,2,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&vTextSize,this->m_pFont,true,(EWindow *)0x0);
  EVar10 = vTextSize;
  puVar4 = (undefined *)((int)&vIconSize.field0_0x0 + 7);
                    /* end of inlined section */
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | (ulong)vTextSize.field0_0x0 >> (7 - uVar7) * 8;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
                    /* end of inlined section */
  vIconSize.field0_0x0.d[0] = SUB84(EVar10.field0_0x0,0);
  vIconSize.field0_0x0 =
       (EVec2__null___1__1)
       ((ulong)EVar10.field0_0x0 & 0xffffffff00000000 |
       (ulong)(uint)(vIconSize.field0_0x0.d[0] + 0.05));
  this->m_fCAFMenuWidth = this->m_fCAFMenuWidth + vIconSize.field0_0x0.d[0] + 0.05 + fVar18;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
  *(uint *)&local_d4[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l =
       0x39;
                    /* end of inlined section */
  pEVar6 = this->m_FamilyMenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
           __vtable;
  (*(code *)pEVar6[2].SetBoxDims)
            ((int)(((EUIPrompt *)&local_d4->field0_0x0)->field0_0x0).field0_0x0.field0_0x0.
                  m_maxBackShdrSize[-0xc] + (int)*(short *)&pEVar6[2].SetPos + 4U,0x3a9aa0,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_d4,local_e4);
  pEVar6 = this->m_FamilyMenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
           __vtable;
  (*(code *)pEVar6->RemoveChild)
            ((int)(local_d4->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar6->AddChild + 4,local_c8);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_d4,2,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow((ERFont *)&vTextSize,this->m_pFont,true,(EWindow *)0x0);
  EVar10 = vTextSize;
  puVar4 = (undefined *)((int)&vIconSize.field0_0x0 + 7);
                    /* end of inlined section */
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | (ulong)vTextSize.field0_0x0 >> (7 - uVar7) * 8;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
                    /* end of inlined section */
  vIconSize.field0_0x0.d[0] = SUB84(EVar10.field0_0x0,0);
  vIconSize.field0_0x0 =
       (EVec2__null___1__1)
       ((ulong)EVar10.field0_0x0 & 0xffffffff00000000 |
       (ulong)(uint)(vIconSize.field0_0x0.d[0] + 0.05));
  this->m_fCAFMenuWidth = this->m_fCAFMenuWidth + vIconSize.field0_0x0.d[0] + 0.05 + fVar18;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
  *(uint *)&local_fc[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l =
       0x3a;
                    /* end of inlined section */
  pEVar6 = this->m_FamilyMenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
           __vtable;
  (*(code *)pEVar6[2].SetBoxDims)
            ((int)(((EUIPrompt *)&local_fc->field0_0x0)->field0_0x0).field0_0x0.field0_0x0.
                  m_maxBackShdrSize[-0xc] + (int)*(short *)&pEVar6[2].SetPos + 4U,0x3a9aa8,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_fc,local_d0);
  pEVar6 = this->m_FamilyMenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
           __vtable;
  (*(code *)pEVar6->RemoveChild)
            ((int)(local_fc->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar6->AddChild + 4,local_c8);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_fc,2,true);
  pEVar12 = this->m_pFont;
  psVar13 = GetCreateASimString__7EGlobalPCc(&_globals,"done");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vTextSize,pEVar12,SUB41(psVar13,0),(EWindow *)&pGifTag1);
  EVar10 = vTextSize;
  puVar4 = (undefined *)((int)&vIconSize.field0_0x0 + 7);
                    /* end of inlined section */
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | (ulong)vTextSize.field0_0x0 >> (7 - uVar7) * 8;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
                    /* end of inlined section */
  vIconSize.field0_0x0.d[0] = SUB84(EVar10.field0_0x0,0);
  vIconSize.field0_0x0 =
       (EVec2__null___1__1)
       ((ulong)EVar10.field0_0x0 & 0xffffffff00000000 |
       (ulong)(uint)(vIconSize.field0_0x0.d[0] + 0.05));
  this->m_fCAFMenuWidth = this->m_fCAFMenuWidth + vIconSize.field0_0x0.d[0] + 0.05 + fVar18;
                    /* inlined from c:/eor/src2/games/sims/ESRC/charedtitleprompt.h */
  *(uint *)&local_e8[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l =
       0x3d;
                    /* end of inlined section */
  pEVar6 = this->m_FamilyMenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
           __vtable;
  sVar5 = *(short *)&pEVar6[2].StateChanged;
  pEVar9 = (EUIPrompt *)&local_e8->field0_0x0;
  psVar13 = GetCreateASimString__7EGlobalPCc(&_globals,"done");
  (*(code *)pEVar6[2].OnButtonRepeat)
            ((int)(pEVar9->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             (int)sVar5 + 4U,psVar13,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_e8,local_c0);
  pEVar6 = this->m_FamilyMenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
           __vtable;
  (*(code *)pEVar6->RemoveChild)
            ((int)(local_e8->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             *(short *)&pEVar6->AddChild + 4,local_c8);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_e8,2,true);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vTextSize.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3d0ff972;
                    /* end of inlined section */
  SetPos__13EUIObjectNodeRC5EVec3(&local_e0->field0_0x0,(EVec3 *)(ERFont *)&vTextSize);
  vTextSize.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3d851eb83f6e00d2;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetBoxDims__7EUIMenuRC5EVec2(local_e0,(EVec2 *)(ERFont *)&vTextSize);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar6 = (local_e0->field0_0x0).__vtable;
  local_e0->m_optgap = fVar18;
  (*(code *)pEVar6[2].Message)
            ((int)local_e0->m_maxBackShdrSize + *(short *)&pEVar6[2].SetBoxDims + -0x44);
  pEVar6 = (local_e0->field0_0x0).__vtable;
  local_e0->m_yoff = -0.01;
  (*(code *)pEVar6[2].Message)
            ((int)local_e0->m_maxBackShdrSize + *(short *)&pEVar6[2].SetBoxDims + -0x44);
  local_e0->m_stick = 4;
  local_e0->m_layout = 1;
                    /* end of inlined section */
  iVar16 = 3;
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  SetOptJust__7EUIMenuii(local_e0,0,0);
                    /* end of inlined section */
  pEVar17 = (EUIObjectNode *)this->m_FamilyMenuPrompts;
  do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vTextSize.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x0;
                    /* end of inlined section */
    iVar16 = iVar16 + -1;
    AddOpt__7EUIMenuP13EUIObjectNodeG5EVec3(local_e0,pEVar17,(EVec3 *)(ERFont *)&vTextSize);
    pEVar17 = (EUIObjectNode *)&pEVar17[3].m_pParent;
  } while (-1 < iVar16);
  pEVar6 = (this->field0_0x0).__vtable;
  fVar18 = 0.11;
  (*(code *)pEVar6[1].GetPos)
            ((int)&this->m_SimMenu + *(short *)&pEVar6[1].OnStickRepeat + -0x7c,local_e0);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->field0_0x0).m_id = 1;
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib(&this->field0_0x0,1,true);
  SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
  pEVar12 = this->m_pFont;
  psVar13 = GetCreateASimString__7EGlobalPCc(&_globals,"title");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vTextSize,pEVar12,SUB41(psVar13,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  pEVar12 = this->m_pFont;
  this->m_fCASTitleWidth = vTextSize.field0_0x0.d[0] + fVar18;
  this->m_fCASTitleXPos = 0.5 - (vTextSize.field0_0x0.d[0] + fVar18) * 0.5;
  psVar13 = GetCreateASimString__7EGlobalPCc(&_globals,"create a family");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)(local_140 + 0x10),pEVar12,SUB41(psVar13,0),(EWindow *)&pGifTag1);
  puVar4 = (undefined *)((int)&vTextSize.field0_0x0 + 7);
                    /* end of inlined section */
  uVar7 = (uint)puVar4 & 7;
  puVar8 = (ulong *)(puVar4 + -uVar7);
  *puVar8 = *puVar8 & -1L << (uVar7 + 1) * 8 | local_140._16_8_ >> (7 - uVar7) * 8;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  vTextSize.field0_0x0.d[0] = (float)local_140._16_8_;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  this->m_fCAFTitleWidth = vTextSize.field0_0x0.d[0] + fVar18;
  this->m_fCAFTitleXPos = 0.5 - (vTextSize.field0_0x0.d[0] + fVar18) * 0.5;
  return;
}

void ECharedTitleMenu::Draw(ERC *prc) {
	EUIObjectNode *this;
	EUIObjectMover *this;
	
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 1 & 1U) != 0) {
    if (this->m_nDrawMode == '\x02') {
      DrawSliding__16ECharedTitleMenuP3ERC(this,prc);
    }
    else {
      DrawNormal__16ECharedTitleMenuP3ERC(this,prc);
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    }
                    /* end of inlined section */
    if (((this->m_mover).m_curtime == (this->m_mover).m_stopt) && (this->m_nIsMenuVisible != '\0'))
    {
      Draw__13EUIObjectNodeP3ERC(&this->field0_0x0,prc);
    }
  }
  return;
}

void ECharedTitleMenu::EnablePersonalityMenu() {
  *(undefined4 *)&this->m_bIsPersonalityAvailable = 1;
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_SimMenuPrompts,0x10,true);
  return;
}

void ECharedTitleMenu::DisablePersonalityMenu() {
  *(undefined4 *)&this->m_bIsPersonalityAvailable = 0;
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_SimMenuPrompts,0x10,false);
  return;
}

void ECharedTitleMenu::DrawSliding(ERC *prc) {
	float y;
	float y;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  undefined4 uVar1;
  float fVar2;
  undefined4 local_c0;
  float local_bc;
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
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
  
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  uVar1 = 0x40200000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ac = this->m_fCurPos;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0 = 0;
  local_bc = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_b0 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_a0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_9c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_8c = 0;
  local_80 = 0;
  local_90 = 0x3f800000;
  local_7c = 0x3e000000;
  local_78 = 0x3f2b851f;
  local_74 = 0x3ea8f5c3;
  fVar2 = 0.5;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_c0,&local_b0,
             &local_a0,&local_90,&local_80);
  Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
  local_bc = this->m_fCurPos - 0.1013;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0 = 0;
  local_94 = 0x3f800000;
  local_98 = 0x3f800000;
  local_9c = 0x3f800000;
  local_a0 = 0x3f800000;
                    /* end of inlined section */
  local_b0 = uVar1;
  local_ac = fVar2;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_b0,
             &local_a0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_bc = this->m_fCurPos;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0 = 0;
  local_94 = 0x3f800000;
  local_98 = 0x3f800000;
  local_9c = 0x3f800000;
  local_a0 = 0x3f800000;
                    /* end of inlined section */
  local_b0 = uVar1;
  local_ac = fVar2;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_b0,
             &local_a0);
  if (this->m_nDrawMode == '\x01') {
    DrawTextBox__10EDialogWinP3ERCffff
              (prc,this->m_fCASTitleXPos,this->m_fCurPos - 0.18485,this->m_fCASTitleWidth,1.0);
    DrawTextBox__10EDialogWinP3ERCffff
              (prc,fVar2 - this->m_fCASMenuWidth * fVar2,this->m_fCurPos - 0.08,
               this->m_fCASMenuWidth,1.0);
  }
  else {
    DrawTextBox__10EDialogWinP3ERCffff
              (prc,this->m_fCAFTitleXPos,this->m_fCurPos - 0.18485,this->m_fCAFTitleWidth,1.0);
    DrawTextBox__10EDialogWinP3ERCffff
              (prc,fVar2 - this->m_fCAFMenuWidth * fVar2,this->m_fCurPos - 0.08,
               this->m_fCAFMenuWidth,1.0);
  }
  return;
}

void ECharedTitleMenu::DrawNormal(ERC *prc) {
	EVec2 vIconLocation;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	EVec2 vIconLocation;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  ERFont *pEVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short *psVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar6;
  float fVar7;
  EVec2 vIconLocation;
  undefined4 local_c0;
  float local_bc;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
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
  
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar6 = 0.2;
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vIconLocation.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vIconLocation.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_b0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ac = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_a0 = 0x3f800000;
  local_9c = 0;
  local_90 = 0;
  local_8c = 0x3e000000;
  local_84 = 0x3ea8f5c3;
  local_88 = 0x3f2b851f;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar7 = 0.5;
  local_bc = fVar6;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vIconLocation,
             (EVec2 *)&local_c0,&local_b0,&local_a0,&local_90);
  Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vIconLocation.field0_0x0.d[1] = 0.113;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vIconLocation.field0_0x0.d[0] = 0.0;
  local_c0 = 0x40200000;
  local_a4 = 0x3f800000;
  local_a8 = 0x3f800000;
  local_ac = 0x3f800000;
  local_b0 = 0x3f800000;
                    /* end of inlined section */
  local_bc = fVar7;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vIconLocation,
             (EVec2 *)&local_c0,&local_b0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0 = 0x40200000;
  vIconLocation.field0_0x0.d[0] = 0.0;
  local_a4 = 0x3f800000;
  local_a8 = 0x3f800000;
  local_ac = 0x3f800000;
  local_b0 = 0x3f800000;
                    /* end of inlined section */
  vIconLocation.field0_0x0.d[1] = fVar6;
  local_bc = fVar7;
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vIconLocation,
             (EVec2 *)&local_c0,&local_b0);
  if (this->m_nDrawMode == '\x01') {
    DrawTextBox__10EDialogWinP3ERCffff(prc,this->m_fCASTitleXPos,0.0402,this->m_fCASTitleWidth,1.0);
    DrawTextBox__10EDialogWinP3ERCffff
              (prc,fVar7 - this->m_fCASMenuWidth * fVar7,0.137,this->m_fCASMenuWidth,1.0);
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
    SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
    Select__6ERFontP3ERC(this->m_pFont,prc);
    psVar5 = GetCreateASimString__7EGlobalPCc(&_globals,"title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_c0 = 0x3f051eb8;
    local_bc = 0.046;
    vIconLocation.field0_0x0.d[0] = 0.52;
    vIconLocation.field0_0x0.d[1] = 0.046;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar5,true,(EVec2 *)&local_c0,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0)
    ;
                    /* end of inlined section */
    vIconLocation.field0_0x0.d[1] = 0.032;
    vIconLocation.field0_0x0.d[0] = fVar7 - (this->m_fCASTitleWidth - 0.04) * fVar7;
    Select__8ERShaderP3ERCi(this->m_pTitleIconShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_bc = 1.0;
    local_c0 = 0x3f800000;
    local_a4 = 0x3f800000;
    local_a8 = 0x3f800000;
    local_ac = 0x3f800000;
    local_b0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vIconLocation,
               (EVec2 *)&local_c0,&local_b0);
  }
  else {
    DrawTextBox__10EDialogWinP3ERCffff(prc,this->m_fCAFTitleXPos,0.0358,this->m_fCAFTitleWidth,1.0);
    DrawTextBox__10EDialogWinP3ERCffff
              (prc,fVar7 - this->m_fCAFMenuWidth * fVar7,0.135,this->m_fCAFMenuWidth,1.0);
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
    SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
    Select__6ERFontP3ERC(this->m_pFont,prc);
    psVar5 = GetCreateASimString__7EGlobalPCc(&_globals,"create a family");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_c0 = 0x3f051eb8;
    local_bc = 0.07;
    vIconLocation.field0_0x0.d[0] = 0.52;
    vIconLocation.field0_0x0.d[1] = 0.07;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar5,true,(EVec2 *)&local_c0,E_FAX_CENTER,E_FAY_CENTER,
               (EVec2 *)0x0);
                    /* end of inlined section */
    vIconLocation.field0_0x0.d[1] = 0.032;
    vIconLocation.field0_0x0.d[0] = fVar7 - (this->m_fCAFTitleWidth - 0.04) * fVar7;
    Select__8ERShaderP3ERCi(this->m_pTitleIconShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_bc = 1.0;
    local_c0 = 0x3f800000;
    local_a4 = 0x3f800000;
    local_a8 = 0x3f800000;
    local_ac = 0x3f800000;
    local_b0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vIconLocation,
               (EVec2 *)&local_c0,&local_b0);
  }
  return;
}

void ECharedTitleMenu::Update() {
	EUIObjectNode *this;
	EUIObjectMover *this;
	float dt;
	float u;
	
  float fVar1;
  float fVar2;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 2 & 1U) != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    fVar1 = (this->m_mover).m_curtime + _dt;
    (this->m_mover).m_curtime = fVar1;
    fVar2 = (this->m_mover).m_startt;
    if (fVar2 <= fVar1) {
      fVar2 = (this->m_mover).m_stopt;
      fVar2 = (float)((int)fVar1 * (uint)(fVar1 < fVar2) | (int)fVar2 * (uint)(fVar1 >= fVar2));
    }
    (this->m_mover).m_curtime = fVar2;
    fVar1 = (this->m_mover).m_curtime;
    fVar2 = (this->m_mover).m_stopt;
                    /* end of inlined section */
    if (fVar1 < fVar2) {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      fVar1 = 1.0 - (fVar2 - fVar1) / (fVar2 - (this->m_mover).m_startt);
                    /* end of inlined section */
      fVar1 = (-fVar1 * fVar1 * fVar1 + fVar1 * fVar1 + fVar1) * 0.2;
      if (this->m_nIsMenuVisible == '\0') {
        this->m_fCurPos = 0.2 - fVar1;
      }
      else {
        this->m_fCurPos = fVar1;
      }
    }
    else if (this->m_nIsMenuVisible == '\0') {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      (this->m_mover).m_curtime = 0.0;
      (this->m_mover).m_startt = 0.0;
      (this->m_mover).m_stopt = 0.5;
      fVar1 = (this->m_mover).m_curtime;
      fVar2 = (this->m_mover).m_startt;
      if (fVar2 <= fVar1) {
        fVar2 = (float)((int)fVar1 * (uint)(fVar1 < 0.5) | (uint)(fVar1 >= 0.5) * 0x3f000000);
      }
      (this->m_mover).m_curtime = fVar2;
                    /* end of inlined section */
      this->m_nDrawMode = '\x02';
      this->m_nIsMenuVisible = '\x01';
    }
    else {
      Update__13EUIObjectNode(&this->field0_0x0);
      this->m_nDrawMode = this->m_nNextDrawMode;
    }
  }
  return;
}

void ECharedTitleMenu::Activate(bool bResetCurOpt) {
  EUIObjectNode__vtable *pEVar1;
  
  SetFlagsPropigate__13EUIObjectNodeUib(&this->field0_0x0,4,true);
  if (this->m_nDrawMode == '\x01') {
    SetFlagsPropigate__13EUIObjectNodeUib(&(this->m_FamilyMenu).field0_0x0,4,false);
    pEVar1 = (this->field0_0x0).__vtable;
  }
  else {
    SetFlagsPropigate__13EUIObjectNodeUib(&(this->m_SimMenu).field0_0x0,4,false);
    if (*(int *)&this->m_bEditDeleteActive == 0) {
      DeactivateEditDelete__16ECharedTitleMenu(this);
      pEVar1 = (this->field0_0x0).__vtable;
    }
    else {
      ActivateEditDelete__16ECharedTitleMenub(this,bResetCurOpt);
      pEVar1 = (this->field0_0x0).__vtable;
    }
  }
  (*(code *)pEVar1[1].EUIObjectNode)
            ((int)&this->m_SimMenu + *(short *)(pEVar1 + 1) + -0x7c,this,0x40);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].EUIObjectNode)
            ((int)&this->m_SimMenu + *(short *)(pEVar1 + 1) + -0x7c,this,0x41);
  return;
}

void ECharedTitleMenu::ActivateEditDelete(bool bResetCurOpt) {
  *(undefined4 *)&this->m_bEditDeleteActive = 1;
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)(this->m_FamilyMenuPrompts + 1),0x10,true);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)(this->m_FamilyMenuPrompts + 2),0x10,true);
  if (bResetCurOpt) {
    SetCurOpt__7EUIMenuP13EUIObjectNode
              (&this->m_FamilyMenu,(EUIObjectNode *)this->m_FamilyMenuPrompts);
  }
  return;
}

void ECharedTitleMenu::DeactivateEditDelete() {
  *(undefined4 *)&this->m_bEditDeleteActive = 0;
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)(this->m_FamilyMenuPrompts + 1),0x10,false)
  ;
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)(this->m_FamilyMenuPrompts + 2),0x10,false)
  ;
  SetCurOpt__7EUIMenuP13EUIObjectNode
            (&this->m_FamilyMenu,(EUIObjectNode *)this->m_FamilyMenuPrompts);
  return;
}

void ECharedTitleMenu::ActivateNew() {
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_FamilyMenuPrompts,0x10,true);
  return;
}

void ECharedTitleMenu::DeactivateNew() {
	EUIMenu *this;
	
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_FamilyMenuPrompts,0x10,false);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
  if ((ECharedTitlePrompt *)(this->m_FamilyMenu).m_pCurOpt == this->m_FamilyMenuPrompts) {
    SetCurOpt__7EUIMenuP13EUIObjectNode
              (&this->m_FamilyMenu,(EUIObjectNode *)(this->m_FamilyMenuPrompts + 1));
  }
  return;
}

void ECharedTitleMenu::ActivateCreateASimMenu() {
	EUIObjectMover *this;
	
  EUIMenu *this_00;
  EUIMenu *this_01;
  float fVar1;
  float fVar2;
  
  this_01 = &this->m_FamilyMenu;
  SetFlagsPropigate__13EUIObjectNodeUib(&this->field0_0x0,4,true);
  SetFlagsPropigate__13EUIObjectNodeUib(&this_01->field0_0x0,4,false);
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_mover).m_curtime = 0.0;
  (this->m_mover).m_startt = 0.0;
  (this->m_mover).m_stopt = 0.5;
  fVar1 = (this->m_mover).m_curtime;
  fVar2 = (this->m_mover).m_startt;
  if (fVar2 <= fVar1) {
    fVar2 = (float)((int)fVar1 * (uint)(fVar1 < 0.5) | (uint)(fVar1 >= 0.5) * 0x3f000000);
  }
  (this->m_mover).m_curtime = fVar2;
                    /* end of inlined section */
  this->m_nIsMenuVisible = '\x01';
  this->m_nDrawMode = '\x01';
  this_00 = &this->m_SimMenu;
  this->m_nNextDrawMode = '\x01';
  SetFlagsPropigate__13EUIObjectNodeUib(&this_01->field0_0x0,2,false);
  SetFlagsPropigate__13EUIObjectNodeUib(&this_01->field0_0x0,4,false);
  SetFlagsPropigate__13EUIObjectNodeUib(&this_00->field0_0x0,2,true);
  SetFlagsPropigate__13EUIObjectNodeUib(&this_00->field0_0x0,4,true);
  if (*(int *)&this->m_bIsPersonalityAvailable == 0) {
    SetCurOpt__7EUIMenuP13EUIObjectNode(this_00,(EUIObjectNode *)(this->m_SimMenuPrompts + 1));
  }
  else {
    SetCurOpt__7EUIMenuP13EUIObjectNode(this_00,(EUIObjectNode *)this->m_SimMenuPrompts);
  }
  return;
}

void ECharedTitleMenu::SwitchToCreateASim() {
	EUIObjectMover *this;
	
  EUIObjectNode__vtable *pEVar1;
  EUIMenu *this_00;
  float fVar2;
  float fVar3;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_mover).m_curtime = 0.0;
  (this->m_mover).m_startt = 0.0;
  (this->m_mover).m_stopt = 0.5;
  fVar2 = (this->m_mover).m_curtime;
  fVar3 = (this->m_mover).m_startt;
  if (fVar3 <= fVar2) {
    fVar3 = (float)((int)fVar2 * (uint)(fVar2 < 0.5) | (uint)(fVar2 >= 0.5) * 0x3f000000);
  }
  (this->m_mover).m_curtime = fVar3;
                    /* end of inlined section */
  this->m_nIsMenuVisible = '\0';
  this->m_nDrawMode = '\x02';
  this->m_nNextDrawMode = '\x01';
  SetFlagsPropigate__13EUIObjectNodeUib(&(this->m_FamilyMenu).field0_0x0,2,false);
  this_00 = &this->m_SimMenu;
  SetFlagsPropigate__13EUIObjectNodeUib(&(this->m_FamilyMenu).field0_0x0,4,false);
  SetFlagsPropigate__13EUIObjectNodeUib(&this_00->field0_0x0,2,true);
  SetFlagsPropigate__13EUIObjectNodeUib(&this_00->field0_0x0,4,true);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].EUIObjectNode)
            ((int)&this->m_SimMenu + *(short *)(pEVar1 + 1) + -0x7c,this,0x2e);
  if (*(int *)&this->m_bIsPersonalityAvailable == 0) {
    SetCurOpt__7EUIMenuP13EUIObjectNode(this_00,(EUIObjectNode *)(this->m_SimMenuPrompts + 1));
  }
  else {
    SetCurOpt__7EUIMenuP13EUIObjectNode(this_00,(EUIObjectNode *)this->m_SimMenuPrompts);
  }
  return;
}

void ECharedTitleMenu::SwitchToCreateAFamily(bool bMoveCamera) {
	EUIObjectMover *this;
	
  EUIObjectNode__vtable *pEVar1;
  int iVar2;
  EUIMenu *this_00;
  float fVar3;
  float fVar4;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_mover).m_curtime = 0.0;
  (this->m_mover).m_startt = 0.0;
  (this->m_mover).m_stopt = 0.5;
  fVar3 = (this->m_mover).m_curtime;
  fVar4 = (this->m_mover).m_startt;
  if (fVar4 <= fVar3) {
    fVar4 = (float)((int)fVar3 * (uint)(fVar3 < 0.5) | (uint)(fVar3 >= 0.5) * 0x3f000000);
  }
  (this->m_mover).m_curtime = fVar4;
                    /* end of inlined section */
  this_00 = &this->m_SimMenu;
  this->m_nNextDrawMode = '\0';
  this->m_nDrawMode = '\x02';
  SetFlagsPropigate__13EUIObjectNodeUib(&this_00->field0_0x0,2,false);
  SetFlagsPropigate__13EUIObjectNodeUib(&this_00->field0_0x0,4,false);
  SetFlagsPropigate__13EUIObjectNodeUib(&(this->m_FamilyMenu).field0_0x0,2,true);
  SetFlagsPropigate__13EUIObjectNodeUib(&(this->m_FamilyMenu).field0_0x0,4,true);
  if (bMoveCamera) {
    this->m_nIsMenuVisible = '\0';
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].EUIObjectNode)
              ((int)&this->m_SimMenu + *(short *)(pEVar1 + 1) + -0x7c,this,0x2e);
    iVar2 = *(int *)&this->m_bIsPersonalityAvailable;
  }
  else {
    this->m_fCurPos = 0.0;
    this->m_nIsMenuVisible = '\x01';
    iVar2 = *(int *)&this->m_bIsPersonalityAvailable;
  }
  if (iVar2 == 0) {
    SetCurOpt__7EUIMenuP13EUIObjectNode(this_00,(EUIObjectNode *)(this->m_SimMenuPrompts + 1));
  }
  else {
    SetCurOpt__7EUIMenuP13EUIObjectNode(this_00,(EUIObjectNode *)this->m_SimMenuPrompts);
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

void* ECharedTitleMenu::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,0x10);
  memset(__s,0,(long)(int)size);
  return __s;
}

void ECharedTitleMenu::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}
