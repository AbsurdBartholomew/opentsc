// STATUS: NOT STARTED

#include "pausemainmenu.h"

__vtbl_ptr_type EPauseMainMenu virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMainMenu::~EPauseMainMenu,
		/* .__delta2 = */ 14584
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMainMenu::Update,
		/* .__delta2 = */ 24720
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseMainMenu::Draw,
		/* .__delta2 = */ 20480
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
		/* .__pfn = */ &EPauseMainMenu::Message,
		/* .__delta2 = */ 25408
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
		/* .__pfn = */ &EUIMenu::NextItem,
		/* .__delta2 = */ 11968
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::PrevItem,
		/* .__delta2 = */ 12000
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

EPauseMainMenu* EPauseMainMenu::EPauseMainMenu() {
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
  long lVar13;
  EPauseMenuSlider *this_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int iVar14;
  EUIStaticTextIcon *pEVar15;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  EUIIconDef local_2b0;
  EUITextIconDef local_290;
  EUIIconDef local_270;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  EUITextIconDef local_220;
  EUIIconDef local_200;
  EUIIconDef__vtable *local_1e0;
  EUIIconDef local_1d0;
  uint local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  EVec3 vPos;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  EUITextIconDef local_170;
  EUIIconDef local_150;
  EUIIconDef__vtable *local_130;
  int local_120;
  undefined4 *local_11c;
  undefined4 *local_118;
  EVec3 *local_114;
  EVec3 *local_110;
  EUITextIconDef *local_10c;
  EUITextIconDef *local_108;
  EPromptBar *local_104;
  EUIIconDef *local_100;
  EUIIconDef *local_fc;
  EPromptBar *local_f8;
  EUIStaticTextIcon *local_f4;
  EUIIconDef *local_f0;
  uint *local_ec;
  EUIIcon *local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  int local_d0;
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
  
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  iVar14 = 7;
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  __7EUIMenuiifff(&this->field0_0x0,-1,0,0.05,0.0,0.0);
  local_118 = &local_250;
  local_110 = (EVec3 *)&local_230;
  local_108 = &local_220;
  local_114 = (EVec3 *)&local_180;
  local_fc = &local_200;
  local_f0 = &local_1d0;
  local_ec = &local_1b0;
  local_10c = &local_170;
  local_100 = &local_150;
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_14EPauseMainMenu;
  this_00 = this->m_MenuPrompts;
  do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_2b8 = 0;
    local_2bc = 0;
    local_2c0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_2b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_2b0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_2b0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_2b0.m_selColorIdx = 0;
    local_2b0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_2b0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_290.m_maxChars = 0x20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_290.m_xAlign = E_FAX_LEFT;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_290.m_yAlign = E_FAY_TOP;
                    /* end of inlined section */
    iVar14 = iVar14 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_290.m_pointsize = 12.0;
    local_290.m_selColorIdx = 0;
    local_290.m_colorIdx = 1;
                    /* end of inlined section */
    local_290.m_retChar = -1;
    __16EPauseMenuSliderPCcRC10EUIIconDefRC14EUITextIconDefiG5EVec3
              (this_00,"",&local_2b0,&local_290,-1,(EVec3 *)&local_2c0);
    local_2b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    this_00 = this_00 + 1;
  } while (iVar14 != -1);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_270.m_flags = 0;
  local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_270.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_InfoIcon,&local_270,0,0,0x40);
  pEVar15 = (EUIStaticTextIcon *)this->m_Prompts;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  local_11c = local_118;
  __7EUIIconG10EUIIconDefiii(&this->m_BudgetIcon,&local_270,0,0,0x40);
  pEVar12 = local_fc;
  pEVar11 = local_108;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_colorIdx = 1;
  local_270.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_BuyIcon,&local_270,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  local_120 = 1;
  __7EUIIconG10EUIIconDefiii(&this->m_BuildIcon,&local_270,0,0,0x40);
  local_104 = &this->m_PromptBar;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  local_e8 = &this->m_XIcon2;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_OptionsIcon,&local_270,0,0,0x40);
  local_f4 = (EUIStaticTextIcon *)this->m_PromptsSelect;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
  local_f8 = &this->m_PromptBarSelect;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_SaveIcon,&local_270,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_270.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_MapIcon,&local_270,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_270.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_QuitIcon,&local_270,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_270.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_XIcon,&local_270,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_270.m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_270.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_TriIcon,&local_270,0,0,0x40);
  do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
    local_120 = local_120 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_270.m_trigger = 0x40;
    local_250 = 0x20;
    local_270.m_flags = 0;
    local_270.m_selColorIdx = 0;
    local_270.m_colorIdx = 1;
    local_270.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_24c = 0;
    local_248 = 0;
    local_11c[3] = 0x41400000;
    local_240 = 0;
    local_11c[5] = 1;
    local_238 = CONCAT22(local_238._2_2_,0xffff);
    local_220.m_maxChars = 0x20;
    local_2b8 = 0;
    local_2bc = 0;
    local_2c0 = 0;
    local_228 = 0;
    local_22c = 0;
    local_230 = 0;
    local_220.m_xAlign = E_FAX_LEFT;
    local_220.m_yAlign = E_FAY_TOP;
    pEVar11->m_pointsize = 12.0;
    local_220.m_selColorIdx = 0;
    pEVar11->m_colorIdx = 1;
    local_220.m_retChar = -1;
    local_200.m_flags = 0;
    local_200.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    pEVar12->m_trigger = 0x40;
    local_200.m_selColorIdx = 0;
    pEVar12->m_colorIdx = 1;
    local_200.m_pCtrl = (EUIVirtualCtrl *)0x0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar15,pEVar11,pEVar12,-1,local_110);
    local_200.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar15->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar15->field0_0x0).m_textdef.m_xAlign + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_24c,local_250) >> (7 - uVar9) * 8;
    pEVar2 = &(pEVar15->field0_0x0).m_textdef;
    uVar9 = (uint)pEVar2 & 7;
    puVar10 = (ulong *)((int)pEVar2 - uVar9);
    *puVar10 = CONCAT44(local_24c,local_250) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar15->field0_0x0).m_textdef.m_pointsize + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(uStack_244,local_248) >> (7 - uVar9) * 8
    ;
    pEVar3 = &(pEVar15->field0_0x0).m_textdef.m_yAlign;
    uVar9 = (uint)pEVar3 & 7;
    puVar10 = (ulong *)((int)pEVar3 - uVar9);
    *puVar10 = CONCAT44(uStack_244,local_248) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar15->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(uStack_23c,local_240) >> (7 - uVar9) * 8
    ;
    puVar4 = &(pEVar15->field0_0x0).m_textdef.m_selColorIdx;
    uVar9 = (uint)puVar4 & 7;
    puVar10 = (ulong *)((int)puVar4 - uVar9);
    *puVar10 = CONCAT44(uStack_23c,local_240) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    *(undefined4 *)&(pEVar15->field0_0x0).m_textdef.m_retChar = local_238;
    local_1e0 = (pEVar15->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar15->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_270.m_trigger,local_270.m_flags) >> (7 - uVar9) * 8;
    pEVar5 = &(pEVar15->field0_0x0).field0_0x0.m_def;
    uVar9 = (uint)pEVar5 & 7;
    puVar10 = (ulong *)((int)pEVar5 - uVar9);
    *puVar10 = CONCAT44(local_270.m_trigger,local_270.m_flags) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar15->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_270.m_colorIdx,local_270.m_selColorIdx) >> (7 - uVar9) * 8;
    piVar6 = &(pEVar15->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar9 = (uint)piVar6 & 7;
    puVar10 = (ulong *)((int)piVar6 - uVar9);
    *puVar10 = CONCAT44(local_270.m_colorIdx,local_270.m_selColorIdx) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar15->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_270.__vtable,local_270.m_pCtrl) >> (7 - uVar9) * 8;
    ppEVar7 = &(pEVar15->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar9 = (uint)ppEVar7 & 7;
    puVar10 = (ulong *)((int)ppEVar7 - uVar9);
    *puVar10 = CONCAT44(local_270.__vtable,local_270.m_pCtrl) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    pEVar15[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar15[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
    (pEVar15->field0_0x0).field0_0x0.m_def.__vtable = local_1e0;
                    /* end of inlined section */
    pEVar15 = (EUIStaticTextIcon *)&pEVar15[1].field0_0x0.field0_0x0.field0_0x0.m_id;
    local_270.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  } while (local_120 != -1);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  __10EPromptBar(local_104);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1d0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_1d0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_f0->m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1d0.m_selColorIdx = 0;
                    /* end of inlined section */
  iVar14 = 0;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_f0->m_colorIdx = 1;
                    /* end of inlined section */
                    /* end of inlined section */
  local_1d0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(local_e8,local_f0,0,0,0x40);
  puVar4 = local_ec;
  pEVar12 = local_100;
  pEVar11 = local_10c;
  local_d0 = 0x40;
  uStack_cc = 0;
  lVar13 = (long)(int)local_f0;
  local_e0 = 0x20;
  uStack_dc = 0;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar15 = local_f4;
  do {
    local_1d0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_1d0.m_flags = 0;
    local_c0 = (int)lVar13;
    *(int *)(local_c0 + 4) = local_d0;
    local_1d0.m_selColorIdx = 0;
    *(undefined4 *)(local_c0 + 0xc) = 1;
                    /* end of inlined section */
    iVar14 = iVar14 + -1;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
    local_1d0.m_pCtrl = (EUIVirtualCtrl *)0x0;
    local_1ac = 0;
    local_1a8 = 0;
    puVar4[3] = 0x41400000;
    local_1a0 = 0;
    puVar4[5] = 1;
    local_198 = CONCAT22(local_198._2_2_,0xffff);
    vPos.field0_0x0.d[2] = 0.0;
    vPos.field0_0x0.d[1] = 0.0;
    vPos.field0_0x0.d[0] = 0.0;
    local_178 = 0;
    local_17c = 0;
    local_180 = 0;
    local_170.m_xAlign = E_FAX_LEFT;
    local_170.m_yAlign = E_FAY_TOP;
    pEVar11->m_pointsize = 12.0;
    local_170.m_selColorIdx = 0;
    pEVar11->m_colorIdx = 1;
    local_170.m_retChar = -1;
    local_150.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    local_150.m_flags = 0;
    pEVar12->m_trigger = local_d0;
    local_150.m_selColorIdx = 0;
    pEVar12->m_colorIdx = 1;
    local_150.m_pCtrl = (EUIVirtualCtrl *)0x0;
    uStack_bc = (undefined4)((ulong)lVar13 >> 0x20);
    local_1b0 = local_e0;
    local_170.m_maxChars = local_e0;
    __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
              (pEVar15,pEVar11,pEVar12,-1,local_114);
    local_150.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
    (pEVar15->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
    puVar1 = (undefined *)((int)&(pEVar15->field0_0x0).m_textdef.m_xAlign + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(local_1ac,local_1b0) >> (7 - uVar9) * 8;
    pEVar2 = &(pEVar15->field0_0x0).m_textdef;
    uVar9 = (uint)pEVar2 & 7;
    puVar10 = (ulong *)((int)pEVar2 - uVar9);
    *puVar10 = CONCAT44(local_1ac,local_1b0) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar15->field0_0x0).m_textdef.m_pointsize + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(uStack_1a4,local_1a8) >> (7 - uVar9) * 8
    ;
    pEVar3 = &(pEVar15->field0_0x0).m_textdef.m_yAlign;
    uVar9 = (uint)pEVar3 & 7;
    puVar10 = (ulong *)((int)pEVar3 - uVar9);
    *puVar10 = CONCAT44(uStack_1a4,local_1a8) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar15->field0_0x0).m_textdef.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | CONCAT44(uStack_19c,local_1a0) >> (7 - uVar9) * 8
    ;
    puVar8 = &(pEVar15->field0_0x0).m_textdef.m_selColorIdx;
    uVar9 = (uint)puVar8 & 7;
    puVar10 = (ulong *)((int)puVar8 - uVar9);
    *puVar10 = CONCAT44(uStack_19c,local_1a0) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    *(undefined4 *)&(pEVar15->field0_0x0).m_textdef.m_retChar = local_198;
    local_130 = (pEVar15->field0_0x0).field0_0x0.m_def.__vtable;
    puVar1 = (undefined *)((int)&(pEVar15->field0_0x0).field0_0x0.m_def.m_trigger + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1d0.m_trigger,local_1d0.m_flags) >> (7 - uVar9) * 8;
    pEVar5 = &(pEVar15->field0_0x0).field0_0x0.m_def;
    uVar9 = (uint)pEVar5 & 7;
    puVar10 = (ulong *)((int)pEVar5 - uVar9);
    *puVar10 = CONCAT44(local_1d0.m_trigger,local_1d0.m_flags) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar15->field0_0x0).field0_0x0.m_def.m_colorIdx + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1d0.m_colorIdx,local_1d0.m_selColorIdx) >> (7 - uVar9) * 8;
    piVar6 = &(pEVar15->field0_0x0).field0_0x0.m_def.m_selColorIdx;
    uVar9 = (uint)piVar6 & 7;
    puVar10 = (ulong *)((int)piVar6 - uVar9);
    *puVar10 = CONCAT44(local_1d0.m_colorIdx,local_1d0.m_selColorIdx) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    puVar1 = (undefined *)((int)&(pEVar15->field0_0x0).field0_0x0.m_def.__vtable + 3);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
               CONCAT44(local_1d0.__vtable,local_1d0.m_pCtrl) >> (7 - uVar9) * 8;
    ppEVar7 = &(pEVar15->field0_0x0).field0_0x0.m_def.m_pCtrl;
    uVar9 = (uint)ppEVar7 & 7;
    puVar10 = (ulong *)((int)ppEVar7 - uVar9);
    *puVar10 = CONCAT44(local_1d0.__vtable,local_1d0.m_pCtrl) << uVar9 * 8 |
               *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
    (pEVar15->field0_0x0).field0_0x0.m_def.__vtable = local_130;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    pEVar15[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
         (ENodeListNode *)0x0;
    pEVar15[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
         (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar15 = (EUIStaticTextIcon *)&pEVar15[1].field0_0x0.field0_0x0.field0_0x0.m_id;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    local_1d0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
    lVar13 = CONCAT44(uStack_bc,local_c0);
  } while (iVar14 != -1);
  __10EPromptBar(local_f8);
  this->m_pBlankShdr = (ERShader *)0x0;
  this->m_pMenuBevelShdr = (ERShader *)0x0;
  this->m_pMenuBevelBottomShdr = (ERShader *)0x0;
  this->m_pDPadBackgroundShdr = (ERShader *)0x0;
  this->m_pTextLineCenterShdr = (ERShader *)0x0;
  this->m_pTextLineRightShdr = (ERShader *)0x0;
  this->m_pTextLineLeftShdr = (ERShader *)0x0;
  this->m_pMenuTimeReverseShdr = (ERShader *)0x0;
  this->m_pTextBoxBGBC = (ERShader *)0x0;
  this->m_pTextBoxBGMR = (ERShader *)0x0;
  this->m_pTextBoxBGBR = (ERShader *)0x0;
  this->m_pGlowShader = (ERShader *)0x0;
  Init__14EPauseMainMenu(this);
  return this;
}

void EPauseMainMenu::~EPauseMainMenu(int __in_chrg) {
	void *ptr;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIPrompt *pEVar3;
  EPauseMenuSlider *pEVar4;
  
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_14EPauseMainMenu;
  Reset__14EPauseMainMenu(this);
  ___10EPromptBar(&this->m_PromptBarSelect,2);
  if ((this != (EPauseMainMenu *)0xfffff154) &&
     (this->m_PromptsSelect != (EUIPrompt *)&this->m_PromptBarSelect)) {
    for (pEVar3 = this->m_PromptsSelect;
        pEVar2 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable,
        (*(code *)pEVar2->Draw)
                  ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar2->Update + 4,0), this->m_PromptsSelect != pEVar3;
        pEVar3 = pEVar3 + -1) {
    }
  }
  ___7EUIIcon(&this->m_XIcon2,2);
  ___10EPromptBar(&this->m_PromptBar,2);
  if ((this != (EPauseMainMenu *)0xfffff38c) &&
     (this->m_Prompts != (EUIPrompt *)&this->m_nNumPrompts)) {
    for (pEVar3 = this->m_Prompts + 1;
        pEVar2 = (pEVar3->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable,
        (*(code *)pEVar2->Draw)
                  ((int)(pEVar3->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar2->Update + 4,0), this->m_Prompts != pEVar3; pEVar3 = pEVar3 + -1
        ) {
    }
  }
  ___7EUIIcon(&this->m_TriIcon,2);
  ___7EUIIcon(&this->m_XIcon,2);
  ___7EUIIcon(&this->m_QuitIcon,2);
  ___7EUIIcon(&this->m_MapIcon,2);
  ___7EUIIcon(&this->m_SaveIcon,2);
  ___7EUIIcon(&this->m_OptionsIcon,2);
  ___7EUIIcon(&this->m_BuildIcon,2);
  ___7EUIIcon(&this->m_BuyIcon,2);
  ___7EUIIcon(&this->m_BudgetIcon,2);
  ___7EUIIcon(&this->m_InfoIcon,2);
  if ((this != (EPauseMainMenu *)0xffffff04) &&
     (this->m_MenuPrompts != (EPauseMenuSlider *)&this->m_vBoxTL)) {
    pEVar4 = this->m_MenuPrompts + 7;
    do {
      pEVar2 = (pEVar4->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2->Draw)
                ((int)(pEVar4->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc]
                 + (int)*(short *)&pEVar2->Update + 4U,0);
      bVar1 = this->m_MenuPrompts != pEVar4;
      pEVar4 = pEVar4 + -1;
    } while (bVar1);
  }
  ___7EUIMenu(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemainmenu.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EPauseMainMenu::Init() {
	float fScreenYSize;
	EUIIconDef icondef;
	EUITextIconDef texticon;
	int i;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EUIIcon *this;
	EGraphics *this;
	ERFont *this;
	EPauseMenuSlider *this;
	EPauseMenuSlider *this;
	EPauseMenuSlider *this;
	EPauseMenuSlider *this;
	EPauseMenuSlider *this;
	EPauseMenuSlider *this;
	EPauseMenuSlider *this;
	float z;
	EUIMenu *this;
	EGraphics *this;
	float x;
	float y;
	float z;
	float w;
	float x;
	float y;
	float z;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	
  EUIIconDef *pEVar1;
  int *piVar2;
  EUIVirtualCtrl **ppEVar3;
  undefined *puVar4;
  short sVar5;
  EUIIconDef__vtable *pEVar6;
  EUIObjectNode__vtable *pEVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  EUIPrompt *pEVar11;
  EUIStaticTextIcon *pEVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ERShader *pEVar15;
  ERFont *pEVar16;
  short *psVar17;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  EPauseMenuSlider *pEVar18;
  undefined8 unaff_s2;
  EPauseMenuSlider *this_00;
  undefined8 unaff_s3;
  EPauseMenuSlider *this_01;
  undefined8 unaff_s4;
  EPauseMenuSlider *this_02;
  undefined8 unaff_s5;
  EPauseMenuSlider *this_03;
  undefined8 unaff_s6;
  EUITextIcon *this_04;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  EUIIconDef icondef;
  ENodeListNode *local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  EUIIconDef__vtable *local_1c0;
  EUIIconDef__vtable *local_1b0;
  EUIIconDef__vtable *local_1a0;
  EUIIconDef__vtable *local_190;
  EUIIconDef__vtable *local_180;
  EUITextIconDef texticon;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  uint uStack_144;
  undefined4 local_140;
  __vtbl_ptr_type *local_13c;
  EUIIcon *local_130;
  EUIIcon *local_12c;
  EUIIcon *local_128;
  EUIIcon *local_124;
  EUIIcon *local_120;
  EUIIcon *local_11c;
  int i;
  EPauseMenuSlider *local_114;
  EPauseMenuSlider *local_110;
  EPauseMenuSlider *local_10c;
  EPromptBar *local_108;
  EUIIcon *local_104;
  EPromptBar *local_100;
  EUIIcon *local_fc;
  EVec2 *local_f8;
  EUIPrompt *local_f4;
  EUIPrompt *local_f0;
  undefined4 *local_ec;
  EUIPrompt *local_e8;
  EUIIcon *local_e4;
  EPauseMenuSlider *local_e0;
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
  
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar15 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
  this->m_pBlankShdr = pEVar15;
  pEVar15 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
  this->m_pMenuBevelShdr = pEVar15;
  pEVar15 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x4185128e,(EFile *)0x0,0);
  this->m_pMenuBevelBottomShdr = pEVar15;
  pEVar15 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2d14ac7d,(EFile *)0x0,0);
  this->m_pDPadBackgroundShdr = pEVar15;
  pEVar15 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6b80ae,(EFile *)0x0,0);
  this->m_pTextLineCenterShdr = pEVar15;
  pEVar15 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6adba05c,(EFile *)0x0,0);
  local_130 = &this->m_BuyIcon;
  this->m_pTextLineRightShdr = pEVar15;
  pEVar15 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x90d49d3f,(EFile *)0x0,0);
  local_12c = &this->m_BuildIcon;
  this->m_pTextLineLeftShdr = pEVar15;
  pEVar15 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x26f8fc89,(EFile *)0x0,0);
  local_128 = &this->m_BudgetIcon;
  this->m_pMenuTimeReverseShdr = pEVar15;
  pEVar15 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x502567e1,(EFile *)0x0,0);
  local_124 = &this->m_OptionsIcon;
  this->m_pTextBoxBGBC = pEVar15;
  pEVar15 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xbd0d5bdc,(EFile *)0x0,0);
  local_120 = &this->m_SaveIcon;
  this->m_pTextBoxBGMR = pEVar15;
  pEVar15 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x3a954713,(EFile *)0x0,0);
  local_11c = &this->m_MapIcon;
  this->m_pTextBoxBGBR = pEVar15;
  pEVar15 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x43886001,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pGlowShader = pEVar15;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar6 = (this->m_InfoIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_InfoIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_InfoIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_InfoIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar2 = &(this->m_InfoIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_InfoIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_InfoIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_InfoIcon).m_def.__vtable = pEVar6;
  local_1c0 = (local_130->m_def).__vtable;
                    /* end of inlined section */
  i = 7;
  puVar4 = (undefined *)((int)&(this->m_BuyIcon).m_def.m_trigger + 3);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_BuyIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_BuyIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar2 = &(this->m_BuyIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_BuyIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_BuyIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_130->m_def).__vtable = local_1c0;
  local_1b0 = (local_12c->m_def).__vtable;
  puVar4 = (undefined *)((int)&(this->m_BuildIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_BuildIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_BuildIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar2 = &(this->m_BuildIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_BuildIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_BuildIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_12c->m_def).__vtable = local_1b0;
  local_1a0 = (local_128->m_def).__vtable;
  puVar4 = (undefined *)((int)&(this->m_BudgetIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_BudgetIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_BudgetIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar2 = &(this->m_BudgetIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_BudgetIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_BudgetIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_128->m_def).__vtable = local_1a0;
  local_190 = (local_124->m_def).__vtable;
  puVar4 = (undefined *)((int)&(this->m_OptionsIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_OptionsIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_OptionsIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar2 = &(this->m_OptionsIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_OptionsIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_OptionsIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_124->m_def).__vtable = local_190;
  local_180 = (local_120->m_def).__vtable;
  puVar4 = (undefined *)((int)&(this->m_SaveIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_SaveIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_SaveIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar2 = &(this->m_SaveIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_SaveIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_SaveIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_120->m_def).__vtable = local_180;
  pEVar6 = (local_11c->m_def).__vtable;
  puVar4 = (undefined *)((int)&(this->m_MapIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_MapIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_MapIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar2 = &(this->m_MapIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_MapIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_MapIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_11c->m_def).__vtable = pEVar6;
  local_1d0 = (ENodeListNode *)(this->m_QuitIcon).m_def.__vtable;
  puVar4 = (undefined *)((int)&(this->m_QuitIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_QuitIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_QuitIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
  piVar2 = &(this->m_QuitIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_QuitIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_QuitIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_QuitIcon).m_def.__vtable = (EUIIconDef__vtable *)local_1d0;
                    /* end of inlined section */
  iVar20 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_InfoIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_BuyIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
                    /* end of inlined section */
  fVar19 = 32.0 / (float)iVar20;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_BuildIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_BudgetIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_OptionsIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_InfoIcon).field0_0x0.m_WDH.field0_0x0.d[2] = fVar19;
  (this->m_BuyIcon).field0_0x0.m_WDH.field0_0x0.d[2] = fVar19;
  (this->m_BuildIcon).field0_0x0.m_WDH.field0_0x0.d[2] = fVar19;
  (this->m_BudgetIcon).field0_0x0.m_WDH.field0_0x0.d[2] = fVar19;
  (this->m_OptionsIcon).field0_0x0.m_WDH.field0_0x0.d[2] = fVar19;
  (this->m_QuitIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_QuitIcon).field0_0x0.m_WDH.field0_0x0.d[2] = fVar19;
  (this->m_SaveIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  (this->m_SaveIcon).field0_0x0.m_WDH.field0_0x0.d[2] = fVar19;
  (this->m_MapIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
                    /* end of inlined section */
  (this->m_MapIcon).field0_0x0.m_WDH.field0_0x0.d[2] = fVar19;
  InitActiveShader__7EUIIconi(&this->m_InfoIcon,-0x5ab67ae4);
  InitActiveShader__7EUIIconi(local_130,-0xcd197d2);
  InitActiveShader__7EUIIconi(local_12c,-0x79167a19);
  InitActiveShader__7EUIIconi(local_128,0x5ca6834e);
  InitActiveShader__7EUIIconi(local_124,-0x4ad59b1f);
  InitActiveShader__7EUIIconi(local_120,0x6ae60902);
  InitActiveShader__7EUIIconi(local_11c,0x21926751);
  InitActiveShader__7EUIIconi(&this->m_QuitIcon,-0xd64aff2);
  local_f8 = (EVec2 *)&local_1d0;
  local_ec = &local_150;
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  texticon.m_maxChars = 0;
  texticon.m_xAlign = E_FAX_LEFT;
  texticon.m_yAlign = E_FAY_CENTER;
  texticon.m_pointsize = 16.0;
  texticon.m_selColorIdx = 0;
  texticon.m_colorIdx = 1;
  texticon.m_retChar = -1;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1d0 = (ENodeListNode *)
              this->m_MenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  this_04 = (EUITextIcon *)this->m_MenuPrompts;
  while( true ) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
    i = i + -1;
    puVar4 = (undefined *)((int)&(this_04->field0_0x0).m_def.m_trigger + 3);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
    uVar8 = (uint)puVar4 & 7;
    puVar9 = (ulong *)(puVar4 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar8) * 8;
    pEVar1 = &(this_04->field0_0x0).m_def;
    uVar8 = (uint)pEVar1 & 7;
    puVar9 = (ulong *)((int)pEVar1 - uVar8);
    *puVar9 = -0xffffffff << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar4 = (undefined *)((int)&(this_04->field0_0x0).m_def.m_colorIdx + 3);
    uVar8 = (uint)puVar4 & 7;
    puVar9 = (ulong *)(puVar4 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x100000000U >> (7 - uVar8) * 8;
    piVar2 = &(this_04->field0_0x0).m_def.m_selColorIdx;
    uVar8 = (uint)piVar2 & 7;
    puVar9 = (ulong *)((int)piVar2 - uVar8);
    *puVar9 = 0x100000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    puVar4 = (undefined *)((int)&(this_04->field0_0x0).m_def.__vtable + 3);
    uVar8 = (uint)puVar4 & 7;
    puVar9 = (ulong *)(puVar4 + -uVar8);
    *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
    ppEVar3 = &(this_04->field0_0x0).m_def.m_pCtrl;
    uVar8 = (uint)ppEVar3 & 7;
    puVar9 = (ulong *)((int)ppEVar3 - uVar8);
    *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
    (this_04->field0_0x0).m_def.__vtable = (EUIIconDef__vtable *)local_1d0;
                    /* end of inlined section */
    pEVar7 = (this_04->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar7[2].GetPos)
              ((int)(this_04->field0_0x0).m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar7[2].OnStickRepeat + 4,&texticon);
    SetFont__11EUITextIconi(this_04,-0x2080f4e9);
    if (i < 0) break;
    local_1d0 = this_04[2].field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail;
    this_04 = (EUITextIcon *)&this_04[1].field0_0x0.m_def.m_colorIdx;
  }
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar16 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar16;
  pEVar18 = this->m_MenuPrompts;
                    /* end of inlined section */
  SetSize__6ERFontffb(pEVar16,16.0,1.0,true);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  fVar21 = 0.006;
  local_114 = this->m_MenuPrompts + 2;
  local_110 = this->m_MenuPrompts + 3;
  pEVar16 = this->m_pFont;
  local_10c = this->m_MenuPrompts + 4;
  local_1d0 = (ENodeListNode *)0x3f666666;
  local_f8[1].field0_0x0.d[0] = 0.9;
                    /* end of inlined section */
  local_f4 = this->m_Prompts;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_f8[1].field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (local_f8->field0_0x0).d[1] = 0.9;
                    /* end of inlined section */
  local_100 = &this->m_PromptBar;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
  local_e8 = this->m_Prompts + 1;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
  local_fc = &this->m_XIcon2;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  (pEVar16->m_vColor).field0_0x0.d[0] = 0.9;
  (pEVar16->m_vColor).field0_0x0.d[1] = local_1cc;
  (pEVar16->m_vColor).field0_0x0.d[2] = local_1c8;
  (pEVar16->m_vColor).field0_0x0.d[3] = local_1c4;
                    /* end of inlined section */
  local_f0 = this->m_PromptsSelect;
  local_e4 = &this->m_XIcon;
  i = 8;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
  this_00 = this->m_MenuPrompts + 1;
  this->m_MenuPrompts[0].m_nMessage = 1;
                    /* end of inlined section */
  local_108 = &this->m_PromptBarSelect;
  local_104 = &this->m_TriIcon;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
  this_03 = this->m_MenuPrompts + 5;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
  this_02 = this->m_MenuPrompts + 6;
                    /* end of inlined section */
  this_01 = this->m_MenuPrompts + 7;
  pEVar7 = this->m_MenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  local_e0 = pEVar18;
  psVar17 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"info_menu_title");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(pEVar18->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             (int)sVar5 + 4U,psVar17,0x20);
  AddIcon__9EUIPromptP7EUIIcon(&pEVar18->field0_0x0,&this->m_InfoIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  this->m_MenuPrompts[0].field0_0x0.m_gap = fVar21;
                    /* end of inlined section */
  CalculateIconWidth__16EPauseMenuSlider(pEVar18);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)pEVar18,0x12,true);
  SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)pEVar18,0xffffffff);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
  this->m_MenuPrompts[1].m_nMessage = 3;
                    /* end of inlined section */
  pEVar7 = this->m_MenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  psVar17 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"buy_menu_title");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(this_00->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             (int)sVar5 + 4U,psVar17,0x20);
  AddIcon__9EUIPromptP7EUIIcon(&this_00->field0_0x0,&this->m_BuyIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  this->m_MenuPrompts[1].field0_0x0.m_gap = fVar21;
                    /* end of inlined section */
  CalculateIconWidth__16EPauseMenuSlider(this_00);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this_00,0x12,true);
  SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this_00,0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
  local_114->m_nMessage = (uint)&vtxWEIGHTS;
                    /* end of inlined section */
  pEVar7 = this->m_MenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  pEVar11 = &local_114->field0_0x0;
  psVar17 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"build_menu_title");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(pEVar11->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             (int)sVar5 + 4U,psVar17,0x20);
  AddIcon__9EUIPromptP7EUIIcon(&local_114->field0_0x0,&this->m_BuildIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  (local_114->field0_0x0).m_gap = fVar21;
                    /* end of inlined section */
  CalculateIconWidth__16EPauseMenuSlider(local_114);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_114,0x12,true);
  SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)local_114,0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
  local_110->m_nMessage = (uint)&pModelMats;
                    /* end of inlined section */
  pEVar7 = this->m_MenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  pEVar11 = &local_110->field0_0x0;
  psVar17 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"budget_title");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(pEVar11->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             (int)sVar5 + 4U,psVar17,0x20);
  AddIcon__9EUIPromptP7EUIIcon(&local_110->field0_0x0,&this->m_BudgetIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  (local_110->field0_0x0).m_gap = fVar21;
                    /* end of inlined section */
  CalculateIconWidth__16EPauseMenuSlider(local_110);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_110,0x12,true);
  SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)local_110,0xffffffff);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
  local_10c->m_nMessage = (uint)&opVerts;
                    /* end of inlined section */
  pEVar7 = this->m_MenuPrompts[4].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  pEVar11 = &local_10c->field0_0x0;
  psVar17 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"options_menu_title");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(pEVar11->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             (int)sVar5 + 4U,psVar17,0x20);
  AddIcon__9EUIPromptP7EUIIcon(&local_10c->field0_0x0,&this->m_OptionsIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  (local_10c->field0_0x0).m_gap = fVar21;
                    /* end of inlined section */
  CalculateIconWidth__16EPauseMenuSlider(local_10c);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_10c,0x12,true);
  SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)local_10c,0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
  this->m_MenuPrompts[5].m_nMessage = 6;
                    /* end of inlined section */
  pEVar7 = this->m_MenuPrompts[5].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  psVar17 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"save_menu_title");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(this_03->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             (int)sVar5 + 4U,psVar17,0x20);
  AddIcon__9EUIPromptP7EUIIcon(&this_03->field0_0x0,&this->m_SaveIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  this->m_MenuPrompts[5].field0_0x0.m_gap = fVar21;
                    /* end of inlined section */
  CalculateIconWidth__16EPauseMenuSlider(this_03);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this_03,0x12,true);
  SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this_03,0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
  this->m_MenuPrompts[6].m_nMessage = 7;
                    /* end of inlined section */
  pEVar7 = this->m_MenuPrompts[6].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  psVar17 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"map_menu_title");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(this_02->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             (int)sVar5 + 4U,psVar17,0x20);
  AddIcon__9EUIPromptP7EUIIcon(&this_02->field0_0x0,&this->m_MapIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  this->m_MenuPrompts[6].field0_0x0.m_gap = fVar21;
                    /* end of inlined section */
  CalculateIconWidth__16EPauseMenuSlider(this_02);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this_02,0x12,true);
  SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this_02,0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
  this->m_MenuPrompts[7].m_nMessage = i;
                    /* end of inlined section */
  i = 7;
  pEVar7 = this->m_MenuPrompts[7].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  psVar17 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"quit_menu_title");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(this_01->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
             (int)sVar5 + 4U,psVar17,0x20);
  AddIcon__9EUIPromptP7EUIIcon(&this_01->field0_0x0,&this->m_QuitIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  this->m_MenuPrompts[7].field0_0x0.m_gap = fVar21;
                    /* end of inlined section */
  CalculateIconWidth__16EPauseMenuSlider(this_01);
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this_01,0x12,true);
  SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this_01,0xffffffff);
  fVar19 = _13EUIObjectNode_SAFE_LEFT;
  pEVar7 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_1d0 = (ENodeListNode *)(_13EUIObjectNode_SAFE_LEFT + 0.005);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_1c8 = _13EUIObjectNode_SAFE_TOP;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_1cc = 0.0;
                    /* end of inlined section */
  (*(code *)pEVar7->OnButtonRepeat)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar7->StateChanged + -0x44,
             local_f8);
  pEVar7 = (this->field0_0x0).field0_0x0.__vtable;
  local_1d0 = (ENodeListNode *)(0.75 - fVar19);
  sVar5 = *(short *)&pEVar7->AddChild;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (local_f8->field0_0x0).d[1] = 0.065;
                    /* end of inlined section */
  (*(code *)pEVar7->RemoveChild)((int)(this->field0_0x0).m_maxBackShdrSize + sVar5 + -0x44);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar7 = (this->field0_0x0).field0_0x0.__vtable;
  (this->field0_0x0).m_optgap = fVar21;
  (*(code *)pEVar7[2].Message)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar7[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  pEVar7 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar7[2].GetPos)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar7[2].OnStickRepeat + -0x44,
             1,1,1);
  SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this,0xffffffff);
                    /* end of inlined section */
  do {
    local_1c8 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1cc = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_1d0 = (ENodeListNode *)0x0;
                    /* end of inlined section */
    pEVar7 = (this->field0_0x0).field0_0x0.__vtable;
    i = i + -1;
    pEVar18 = local_e0;
    local_e0 = local_e0 + 1;
    (*(code *)pEVar7[2].SetBoxDims)
              ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar7[2].SetPos + -0x44,
               pEVar18,local_f8);
  } while (-1 < i);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
  fVar21 = 0.5;
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this,1,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  pEVar7 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  fVar22 = 32.0;
  (*(code *)pEVar7[2].RemoveChild)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar7[2].AddChild + -0x44,4);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar19 = _13EUIObjectNode_SAFE_TOP + 0.6;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemenuslider.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar10 = (ulong)(uint)(_13EUIObjectNode_SAFE_TOP + 41.0 / (float)_pGfx->m_yscreen) << 0x20;
  puVar4 = (undefined *)((int)&(this->m_vBoxTL).field0_0x0 + 7);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  _16EPauseMenuSlider_SlideMaxTime = fVar21;
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | uVar10 >> (7 - uVar8) * 8;
  uVar8 = (uint)&this->m_vBoxTL & 7;
  puVar9 = (ulong *)((int)&this->m_vBoxTL - uVar8);
  *puVar9 = uVar10 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar10 = CONCAT44(fVar19,0x3f400000);
  puVar4 = (undefined *)((int)&(this->m_vBoxBR).field0_0x0 + 7);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | uVar10 >> (7 - uVar8) * 8;
  uVar8 = (uint)&this->m_vBoxBR & 7;
  puVar9 = (ulong *)((int)&this->m_vBoxBR - uVar8);
  *puVar9 = uVar10 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  this->m_fAnimationTime = 0.25;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  this->m_nDisplayMode = '\x01';
  this->m_fAlpha = 0.0;
  uVar14 = _WHITE.field0_0x0.d[2];
  uVar13 = _WHITE.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_1c4 = this->m_fAlpha;
                    /* end of inlined section */
  (this->m_vUI_WHITE).field0_0x0.d[0] = _WHITE.field0_0x0.d[0];
  (this->m_vUI_WHITE).field0_0x0.d[1] = uVar13;
  (this->m_vUI_WHITE).field0_0x0.d[2] = uVar14;
  (this->m_vUI_WHITE).field0_0x0.d[3] = local_1c4;
  uVar14 = _RED.field0_0x0.d[2];
  uVar13 = _RED.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_1c8 = _RED.field0_0x0.d[2];
                    /* end of inlined section */
  (this->m_vUI_RED).field0_0x0.d[0] = _RED.field0_0x0.d[0];
  (this->m_vUI_RED).field0_0x0.d[1] = uVar13;
  (this->m_vUI_RED).field0_0x0.d[2] = uVar14;
  (this->m_vUI_RED).field0_0x0.d[3] = local_1c4;
  this->m_PulseAccumulator = local_1c4;
  this->m_nNumPrompts = 2;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_150 = 1;
  local_ec[1] = 0xffffffff;
  local_148 = 0;
  pEVar6 = (local_e4->m_def).__vtable;
  local_ec[3] = 1;
  local_140 = 0;
  puVar4 = (undefined *)((int)&(this->m_XIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_14c,1) >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_XIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = CONCAT44(uStack_14c,1) << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_XIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | ((ulong)uStack_144 << 0x20) >> (7 - uVar8) * 8;
  piVar2 = &(this->m_XIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = ((ulong)uStack_144 << 0x20) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_XIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_XIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_e4->m_def).__vtable = pEVar6;
  local_13c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar20 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = (ENodeListNode *)0x3d4ccccd;
                    /* end of inlined section */
  local_1cc = fVar22 / (float)iVar20;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_e4,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_e4,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_150 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_ec[1] = 0xffffffff;
  local_148 = 0;
  pEVar6 = (local_104->m_def).__vtable;
  local_ec[3] = 1;
  local_140 = 0;
  puVar4 = (undefined *)((int)&(this->m_TriIcon).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_14c,1) >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_TriIcon).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = CONCAT44(uStack_14c,1) << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_TriIcon).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | ((ulong)uStack_144 << 0x20) >> (7 - uVar8) * 8;
  piVar2 = &(this->m_TriIcon).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = ((ulong)uStack_144 << 0x20) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_TriIcon).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_TriIcon).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_104->m_def).__vtable = pEVar6;
  local_13c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar20 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = (ENodeListNode *)0x3d4ccccd;
                    /* end of inlined section */
  local_1cc = fVar22 / (float)iVar20;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_TriIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_104,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_104,0x2ccf500a);
  pEVar7 = this->m_Prompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  pEVar12 = &local_f4->field0_0x0;
  psVar17 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"select_action_prompt");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(pEVar12->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar17,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_f4,local_e4);
  pEVar7 = this->m_Prompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  pEVar12 = &local_e8->field0_0x0;
  psVar17 = GetUiString__7EGlobalPCc(&_globals,"back");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(pEVar12->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar17,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_e8,local_104);
  Init__10EPromptBar(local_100);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  fVar21 = (_13EUIObjectNode_SAFE_RIGHT + 0.178) * fVar21;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_1cc = _13EUIObjectNode_SAFE_BOTTOM - 23.0 / (float)_pGfx->m_yscreen;
  fVar19 = _13EUIObjectNode_SAFE_BOTTOM;
  local_1d0 = (ENodeListNode *)fVar21;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_100,local_f4,this->m_nNumPrompts,local_f8);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_150 = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_ec[1] = 0xffffffff;
  local_148 = 0;
  pEVar6 = (local_fc->m_def).__vtable;
  local_ec[3] = 1;
  local_140 = 0;
  puVar4 = (undefined *)((int)&(this->m_XIcon2).m_def.m_trigger + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_14c,1) >> (7 - uVar8) * 8;
  pEVar1 = &(this->m_XIcon2).m_def;
  uVar8 = (uint)pEVar1 & 7;
  puVar9 = (ulong *)((int)pEVar1 - uVar8);
  *puVar9 = CONCAT44(uStack_14c,1) << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_XIcon2).m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | ((ulong)uStack_144 << 0x20) >> (7 - uVar8) * 8;
  piVar2 = &(this->m_XIcon2).m_def.m_selColorIdx;
  uVar8 = (uint)piVar2 & 7;
  puVar9 = (ulong *)((int)piVar2 - uVar8);
  *puVar9 = ((ulong)uStack_144 << 0x20) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar4 = (undefined *)((int)&(this->m_XIcon2).m_def.__vtable + 3);
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)(puVar4 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | 0x3a890800000000U >> (7 - uVar8) * 8;
  ppEVar3 = &(this->m_XIcon2).m_def.m_pCtrl;
  uVar8 = (uint)ppEVar3 & 7;
  puVar9 = (ulong *)((int)ppEVar3 - uVar8);
  *puVar9 = 0x3a890800000000 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_fc->m_def).__vtable = pEVar6;
  local_13c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar20 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon2).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1d0 = (ENodeListNode *)0x3d4ccccd;
                    /* end of inlined section */
  local_1cc = fVar22 / (float)iVar20;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_XIcon2).field0_0x0.m_WDH.field0_0x0.d[2] = local_1cc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_fc,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_fc,-0x3e263a13);
  pEVar7 = this->m_PromptsSelect[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  sVar5 = *(short *)&pEVar7[2].StateChanged;
  pEVar12 = &local_f0->field0_0x0;
  psVar17 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"select_action_prompt");
  (*(code *)pEVar7[2].OnButtonRepeat)
            ((int)(pEVar12->field0_0x0).field0_0x0.m_maxBackShdrSize[-0xc] + sVar5 + 4,psVar17,0x20)
  ;
  AddIcon__9EUIPromptP7EUIIcon(local_f0,local_fc);
  Init__10EPromptBar(local_108);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_1cc = fVar19 - 23.0 / (float)_pGfx->m_yscreen;
  local_1d0 = (ENodeListNode *)fVar21;
                    /* end of inlined section */
  Setup__10EPromptBarP9EUIPromptUiG5EVec2(local_108,local_f0,1,local_f8);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  return;
}

void EPauseMainMenu::Reset() {
  EUIObjectNode__vtable *pEVar1;
  ERShader *pEVar2;
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
  pEVar2 = this->m_pMenuBevelBottomShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pMenuBevelBottomShdr = (ERShader *)0x0;
    pEVar2 = this->m_pMenuBevelBottomShdr;
  }
  pEVar2 = this->m_pDPadBackgroundShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pDPadBackgroundShdr = (ERShader *)0x0;
    pEVar2 = this->m_pDPadBackgroundShdr;
  }
  pEVar2 = this->m_pTextLineCenterShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pTextLineCenterShdr = (ERShader *)0x0;
    pEVar2 = this->m_pTextLineCenterShdr;
  }
  pEVar2 = this->m_pTextLineRightShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pTextLineRightShdr = (ERShader *)0x0;
    pEVar2 = this->m_pTextLineRightShdr;
  }
  pEVar2 = this->m_pTextLineLeftShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pTextLineLeftShdr = (ERShader *)0x0;
    pEVar2 = this->m_pTextLineLeftShdr;
  }
  pEVar2 = this->m_pMenuTimeReverseShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pMenuTimeReverseShdr = (ERShader *)0x0;
    pEVar2 = this->m_pMenuTimeReverseShdr;
  }
  pEVar2 = this->m_pTextBoxBGBC;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pTextBoxBGBC = (ERShader *)0x0;
    pEVar2 = this->m_pTextBoxBGBC;
  }
  pEVar2 = this->m_pTextBoxBGMR;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pTextBoxBGMR = (ERShader *)0x0;
    pEVar2 = this->m_pTextBoxBGMR;
  }
  pEVar2 = this->m_pTextBoxBGBR;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pTextBoxBGBR = (ERShader *)0x0;
    pEVar2 = this->m_pTextBoxBGBR;
  }
  pEVar2 = this->m_pGlowShader;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pGlowShader = (ERShader *)0x0;
    pEVar2 = this->m_pGlowShader;
  }
  this_00 = this->m_pFont;
  while (this_00 != (ERFont *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
    this_00 = this->m_pFont;
  }
  pEVar1 = this->m_MenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)this->m_MenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar1[1].AddChild + 4U,
             &this->m_InfoIcon);
  pEVar1 = this->m_MenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)this->m_MenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar1[1].AddChild + 4U,
             &this->m_BuyIcon);
  pEVar1 = this->m_MenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)this->m_MenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar1[1].AddChild + 4U,
             &this->m_BuildIcon);
  pEVar1 = this->m_MenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)this->m_MenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar1[1].AddChild + 4U,
             &this->m_BudgetIcon);
  pEVar1 = this->m_MenuPrompts[4].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)this->m_MenuPrompts[4].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar1[1].AddChild + 4U,
             &this->m_OptionsIcon);
  pEVar1 = this->m_MenuPrompts[5].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)this->m_MenuPrompts[5].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar1[1].AddChild + 4U,
             &this->m_SaveIcon);
  pEVar1 = this->m_MenuPrompts[6].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)this->m_MenuPrompts[6].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar1[1].AddChild + 4U,
             &this->m_MapIcon);
  pEVar1 = this->m_MenuPrompts[7].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
  (*(code *)pEVar1[1].RemoveChild)
            ((int)this->m_MenuPrompts[7].field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                  m_maxBackShdrSize[0xfffffff4] + (int)*(short *)&pEVar1[1].AddChild + 4U,
             &this->m_QuitIcon);
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar1[2].EUIObjectNode)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)(pEVar1 + 2) + -0x44);
  Reset__10EPromptBar(&this->m_PromptBar);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_Prompts);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)(this->m_Prompts + 1));
  Reset__10EPromptBar(&this->m_PromptBarSelect);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)this->m_PromptsSelect);
  return;
}

void EPauseMainMenu::Draw(ERC *prc) {
	EVec2 vScreenSize;
	float PulseFactor;
	float PulseFactorX;
	float PulseFactorY;
	float fWidth;
	float fHeight;
	NLIterator nli;
	EUIObjectNode *this;
	EGraphics *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	EVec3 vPos3;
	EVec2 vGlowPos;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EGraphics *this;
	EGraphics *this;
	
  int iVar1;
  bool bVar2;
  float *pfVar3;
  ENodeListNode *pEVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  EVec2 vScreenSize;
  EVec3 vPos3;
  EVec2 vGlowPos;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a0;
  undefined4 local_9c;
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
  
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.m_flags >> 1 & 1U) != 0) {
    DrawNormal__14EPauseMainMenuP3ERC(this,prc);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    fVar5 = (float)_pGfx->m_xscreen;
    fVar6 = (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar7 = sinf(this->m_PulseAccumulator);
    fVar9 = 0.5;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar4 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    fVar7 = (fVar7 * 0.5 + 1.0) * 8.0;
    fVar8 = 40.0 / fVar6 + fVar7 / fVar6;
    fVar7 = 40.0 / fVar5 + fVar7 / fVar5;
    if (pEVar4 != (ENodeListNode *)0x0) {
      uVar10 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      iVar1 = pEVar4->data;
      do {
                    /* end of inlined section */
        if ((*(int *)(iVar1 + 0x10) >> 2 & 1U) == 0) {
LAB_001b51d8:
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          pEVar4 = pEVar4->pNext;
        }
        else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
          if ((*(int *)(iVar1 + 0x10) >> 3 & 1U) != 0) {
            pfVar3 = (float *)(**(code **)(*(int *)(iVar1 + 0x38) + 0x5c))
                                        (iVar1 + *(short *)(*(int *)(iVar1 + 0x38) + 0x58));
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            vPos3.field0_0x0.d[0] = *pfVar3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            vPos3.field0_0x0.d[1] = pfVar3[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
            vPos3.field0_0x0.d[2] = pfVar3[2];
                    /* end of inlined section */
            vGlowPos.field0_0x0.d[0] = vPos3.field0_0x0.d[0] + 16.0 / fVar5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
            vGlowPos.field0_0x0.d[1] = vPos3.field0_0x0.d[2] + 16.0 / fVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
            Select__8ERShaderP3ERCi(this->m_pGlowShader,prc,0);
            local_e0 = vGlowPos.field0_0x0.d[0] - fVar7 * fVar9;
            local_dc = vGlowPos.field0_0x0.d[1] - fVar8 * fVar9;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            local_c0 = 0;
                    /* end of inlined section */
            local_d0 = local_e0 + fVar7;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
            local_cc = local_dc + fVar8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            local_bc = 0x3f800000;
            local_b0 = 0x3f800000;
            local_ac = 0;
                    /* end of inlined section */
            (*(code *)prc->__vtable[1].DisplayList)
                      (uVar10,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
                       &local_e0,&local_d0,&local_c0,&local_b0,0x35f520);
            goto LAB_001b51d8;
          }
          pEVar4 = pEVar4->pNext;
        }
                    /* end of inlined section */
        if (pEVar4 == (ENodeListNode *)0x0) break;
        iVar1 = pEVar4->data;
      } while( true );
    }
    Draw__7EUIMenuP3ERC(&this->field0_0x0,prc);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.m_flags >> 2 & 1U) != 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      fVar5 = 0.178;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vPos3.field0_0x0.d[0] = 0.178;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vGlowPos.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
      vPos3.field0_0x0.d[1] = _13EUIObjectNode_SAFE_BOTTOM - 46.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vGlowPos.field0_0x0.d[1] = 1.0;
      local_e0 = 0.0;
      local_dc = 1.0;
      local_9c = 0;
      local_a0 = 0x3f800000;
                    /* end of inlined section */
      fVar9 = _13EUIObjectNode_SAFE_BOTTOM;
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vPos3,&vGlowPos,
                 &local_e0,&local_a0,0x35f4b0);
      Select__8ERShaderP3ERCi(this->m_pMenuBevelShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vGlowPos.field0_0x0.d[0] = 2.055;
                    /* end of inlined section */
      vPos3.field0_0x0.d[1] = fVar9 - 50.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vGlowPos.field0_0x0.d[1] = 0.5;
      local_d4 = 0x3f800000;
      local_d8 = 0x3f800000;
      local_dc = 1.0;
      local_e0 = 1.0;
                    /* end of inlined section */
      vPos3.field0_0x0.d[0] = fVar5;
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vPos3,&vGlowPos,
                 &local_e0);
      bVar2 = IsBuildHouseMode__7EGlobal(&_globals);
      if (bVar2) {
        Draw__10EPromptBarP3ERC(&this->m_PromptBarSelect,prc);
      }
      else {
        Draw__10EPromptBarP3ERC(&this->m_PromptBar,prc);
      }
    }
  }
  return;
}

void EPauseMainMenu::DrawNormal(ERC *prc) {
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	
  float fVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float local_d0;
  float local_cc;
  float local_c0;
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
  
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar3 = 0.5;
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
  fVar1 = _13EUIObjectNode_SAFE_TOP;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_d0 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_cc = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_b0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0 = 0.75;
                    /* end of inlined section */
  fVar4 = 32.0;
  local_bc = _13EUIObjectNode_SAFE_TOP + 37.3 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_ac = 0x3f800000;
  local_9c = 0;
  local_a0 = 0x3f800000;
                    /* end of inlined section */
  uVar2 = 0;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_d0,&local_c0,
             &local_b0,&local_a0,0x35f4b0);
  Select__8ERShaderP3ERCi(this->m_pMenuTimeReverseShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_d0 = 0.7485;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0 = 1.65;
                    /* end of inlined section */
  local_bc = 85.0 / (float)_pGfx->m_yscreen + 1.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_84 = 0x3f800000;
  local_88 = 0x3f800000;
  local_8c = 0x3f800000;
  local_90 = 0x3f800000;
                    /* end of inlined section */
  local_cc = (float)uVar2;
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar2,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_d0,&local_c0
             ,&local_90);
  Select__8ERShaderP3ERCi(this->m_pMenuBevelBottomShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_d0 = -0.0015625;
  local_c0 = 1.9875;
                    /* end of inlined section */
  local_cc = fVar1 + 36.3 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_a4 = 0x3f800000;
  local_a8 = 0x3f800000;
  local_ac = 0x3f800000;
  local_b0 = 0x3f800000;
                    /* end of inlined section */
  local_bc = fVar3;
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar2,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_d0,&local_c0
             ,&local_b0);
  Select__8ERShaderP3ERCi(this->m_pTextLineLeftShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_cc = fVar1;
                    /* end of inlined section */
  local_d0 = 0.39 - this->m_fIconBarWidth * fVar3;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_bc = 1.0;
  local_c0 = 1.0;
  local_a4 = 0x3f800000;
  local_a8 = 0x3f800000;
  local_ac = 0x3f800000;
  local_b0 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar2,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_d0,&local_c0
             ,&local_b0);
  Select__8ERShaderP3ERCi(this->m_pTextLineRightShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_cc = fVar1;
                    /* end of inlined section */
  local_d0 = (this->m_fIconBarWidth * fVar3 + 0.39) - fVar4 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_bc = 1.0;
  local_c0 = 1.0;
  local_a4 = 0x3f800000;
  local_a8 = 0x3f800000;
  local_ac = 0x3f800000;
  local_b0 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar2,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_d0,&local_c0
             ,&local_b0);
  Select__8ERShaderP3ERCi(this->m_pTextLineCenterShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_cc = fVar1;
                    /* end of inlined section */
  local_d0 = (0.39 - this->m_fIconBarWidth * fVar3) + fVar4 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_c0 = (this->m_fIconBarWidth - 64.0 / (float)_pGfx->m_xscreen) * (float)_pGfx->m_xscreen *
             0.03125;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_bc = 1.0;
  local_a4 = 0x3f800000;
  local_a8 = 0x3f800000;
  local_ac = 0x3f800000;
  local_b0 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar2,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_d0,&local_c0
             ,&local_b0);
  return;
}

void EPauseMainMenu::DrawBudget(ERC *prc) {
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
  cSimulator *pcVar2;
  short *psVar3;
  ERFont *pEVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  int iVar11;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar12;
  float fVar13;
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
  iVar11 = 0;
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  iVar6 = 0;
  local_b0 = (undefined4)unaff_s1;
  uStack_ac = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_c0 = (undefined4)unaff_s0;
  uStack_bc = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar5 = 0;
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  nCashFlow = 0;
  nHistoryCashFlow = 0;
  fVar12 = 0.75;
  vPos.field0_0x0.d[1] = _13EUIObjectNode_SAFE_TOP + 41.0 / (float)_pGfx->m_yscreen;
  fVar13 = _13EUIObjectNode_SAFE_LEFT + 10.0 / (float)_pGfx->m_xscreen;
  vPos.field0_0x0.d[0] = fVar13;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  Select__6ERFontP3ERC(this->m_pFont,prc);
  SetSize__6ERFontffb(this->m_pFont,15.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar4 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  fVar7 = (this->m_vUI_WHITE).field0_0x0.d[1];
  fVar8 = (this->m_vUI_WHITE).field0_0x0.d[2];
  fVar9 = (this->m_vUI_WHITE).field0_0x0.d[3];
                    /* end of inlined section */
                    /* end of inlined section */
  (pEVar4->m_vColor).field0_0x0.d[0] = (this->m_vUI_WHITE).field0_0x0.d[0];
  (pEVar4->m_vColor).field0_0x0.d[1] = fVar7;
  (pEVar4->m_vColor).field0_0x0.d[2] = fVar8;
  (pEVar4->m_vColor).field0_0x0.d[3] = fVar9;
  psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"budget_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  outReport.fSpent[0] = (int)((fVar13 + fVar12) * 0.5);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  outReport.fSpent[5] = (int)vPos.field0_0x0.d[1];
  outReport.fSpent[1] = (int)vPos.field0_0x0.d[1];
  outReport.fSpent[4] = outReport.fSpent[0];
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,psVar3,true,(EVec2 *)(outReport.fSpent + 4),E_FAX_CENTER,E_FAY_TOP,
             (EVec2 *)0x0);
                    /* end of inlined section */
  psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"budget_3_days_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_32c = vPos.field0_0x0.d[1];
  outReport.fSpent[1] = (int)vPos.field0_0x0.d[1];
  outReport.fSpent[0] = 0x3f19999a;
  local_330 = 0x3f19999a;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_330,E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
  psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"budget_today_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  outReport.fSpent[5] = (int)vPos.field0_0x0.d[1];
  outReport.fSpent[1] = (int)vPos.field0_0x0.d[1];
  outReport.fSpent[0] = (int)fVar12;
  outReport.fSpent[4] = (int)fVar12;
  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
            (this->m_pFont,prc,psVar3,true,(EVec2 *)(outReport.fSpent + 4),E_FAX_RIGHT,E_FAY_TOP,
             &vPos);
                    /* end of inlined section */
  vPos.field0_0x0.d[0] = fVar13;
  fVar7 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
                    /* inlined from ../MSrc/stringbuffer2.h */
                    /* end of inlined section */
  vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar7;
                    /* inlined from ../MSrc/stringbuffer2.h */
  __13StringBuffer2PUsUi(&moneyString.field0_0x0,moneyString.fChars,0x100);
  reset__13ExpenseReport(&outReport);
  reset__13ExpenseReport(&prevReport);
  pcVar2 = _5Globs_pSimulator;
                    /* end of inlined section */
  (*(code *)_5Globs_pSimulator->__vtable->RestoreTrueDt)
            ((int)&_5Globs_pSimulator->__vtable +
             (int)*(short *)&_5Globs_pSimulator->__vtable->SetProbe,&outReport);
  pcVar1 = pcVar2->__vtable;
  (*(code *)pcVar1[1].Simulate)((int)&pcVar2->__vtable + (int)*(short *)&pcVar1[1].Init,&prevReport)
  ;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  pEVar4 = this->m_pFont;
  do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    fVar7 = (this->m_vUI_WHITE).field0_0x0.d[1];
    fVar8 = (this->m_vUI_WHITE).field0_0x0.d[2];
    fVar9 = (this->m_vUI_WHITE).field0_0x0.d[3];
                    /* end of inlined section */
    (pEVar4->m_vColor).field0_0x0.d[0] = (this->m_vUI_WHITE).field0_0x0.d[0];
    (pEVar4->m_vColor).field0_0x0.d[1] = fVar7;
    (pEVar4->m_vColor).field0_0x0.d[2] = fVar8;
    (pEVar4->m_vColor).field0_0x0.d[3] = fVar9;
    switch(iVar11) {
    case 0:
      psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"job_income_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0)
      ;
                    /* end of inlined section */
      iVar5 = abs(prevReport.fSpent[1]);
      iVar6 = outReport.fSpent[1];
      break;
    case 1:
      psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"misc_income_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0)
      ;
                    /* end of inlined section */
      iVar5 = abs(prevReport.fSpent[2]);
      iVar6 = outReport.fSpent[2];
      break;
    case 2:
      psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"bills_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0)
      ;
                    /* end of inlined section */
      iVar5 = abs(prevReport.fSpent[4]);
      iVar6 = outReport.fSpent[4];
      break;
    case 3:
      psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"food_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0)
      ;
                    /* end of inlined section */
      iVar5 = abs(prevReport.fSpent[3]);
      iVar6 = outReport.fSpent[3];
      break;
    case 4:
      psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"maintenance_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0)
      ;
                    /* end of inlined section */
      iVar5 = abs(prevReport.fSpent[5]);
      iVar6 = outReport.fSpent[5];
      break;
    case 5:
      psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"purchases_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0)
      ;
                    /* end of inlined section */
      iVar5 = abs(prevReport.fSpent[6]);
      iVar6 = outReport.fSpent[6];
      break;
    case 6:
      psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"architecture_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0)
      ;
                    /* end of inlined section */
      iVar5 = abs(prevReport.fSpent[7]);
      iVar6 = outReport.fSpent[7];
      break;
    case 7:
      psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"miscellaneous_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0)
      ;
                    /* end of inlined section */
      iVar5 = abs(prevReport.fSpent[0]);
      iVar6 = outReport.fSpent[0];
      break;
    default:
      goto switchD_001b59ec_caseD_8;
    }
    iVar6 = abs(iVar6);
switchD_001b59ec_caseD_8:
    if (1 < iVar11) {
      pEVar4 = this->m_pFont;
      if (iVar5 < 1) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        fVar7 = (this->m_vUI_WHITE).field0_0x0.d[0];
        fVar8 = (this->m_vUI_WHITE).field0_0x0.d[1];
        fVar9 = (this->m_vUI_WHITE).field0_0x0.d[2];
        fVar10 = (this->m_vUI_WHITE).field0_0x0.d[3];
      }
      else {
                    /* end of inlined section */
        iVar5 = -iVar5;
                    /* end of inlined section */
        fVar7 = (this->m_vUI_RED).field0_0x0.d[0];
        fVar8 = (this->m_vUI_RED).field0_0x0.d[1];
        fVar9 = (this->m_vUI_RED).field0_0x0.d[2];
        fVar10 = (this->m_vUI_RED).field0_0x0.d[3];
      }
      (pEVar4->m_vColor).field0_0x0.d[0] = fVar7;
      (pEVar4->m_vColor).field0_0x0.d[1] = fVar8;
      (pEVar4->m_vColor).field0_0x0.d[2] = fVar9;
      (pEVar4->m_vColor).field0_0x0.d[3] = fVar10;
                    /* end of inlined section */
    }
    GetMoneyString__FiRt12StackString21Ui256(iVar5,&moneyString);
    nHistoryCashFlow = nHistoryCashFlow + iVar5;
    psVar3 = c_str__C13StringBuffer2(&moneyString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_dc = vPos.field0_0x0.d[1];
    local_f0 = 0.6;
    local_ec = vPos.field0_0x0.d[1];
    local_e0 = 0.6;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_e0,E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
    if (1 < iVar11) {
      pEVar4 = this->m_pFont;
      if (iVar6 < 1) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        fVar7 = (this->m_vUI_WHITE).field0_0x0.d[0];
        fVar8 = (this->m_vUI_WHITE).field0_0x0.d[1];
        fVar9 = (this->m_vUI_WHITE).field0_0x0.d[2];
        fVar10 = (this->m_vUI_WHITE).field0_0x0.d[3];
      }
      else {
                    /* end of inlined section */
        iVar6 = -iVar6;
                    /* end of inlined section */
        fVar7 = (this->m_vUI_RED).field0_0x0.d[0];
        fVar8 = (this->m_vUI_RED).field0_0x0.d[1];
        fVar9 = (this->m_vUI_RED).field0_0x0.d[2];
        fVar10 = (this->m_vUI_RED).field0_0x0.d[3];
      }
      (pEVar4->m_vColor).field0_0x0.d[0] = fVar7;
      (pEVar4->m_vColor).field0_0x0.d[1] = fVar8;
      (pEVar4->m_vColor).field0_0x0.d[2] = fVar9;
      (pEVar4->m_vColor).field0_0x0.d[3] = fVar10;
                    /* end of inlined section */
    }
    GetMoneyString__FiRt12StackString21Ui256(iVar6,&moneyString);
    nCashFlow = nCashFlow + iVar6;
    psVar3 = c_str__C13StringBuffer2(&moneyString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_dc = vPos.field0_0x0.d[1];
    local_ec = vPos.field0_0x0.d[1];
    local_f0 = fVar12;
    local_e0 = fVar12;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_e0,E_FAX_RIGHT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
    vPos.field0_0x0.d[0] = fVar13;
    fVar7 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
    vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar7;
    if ((iVar11 == 1) || (iVar11 == 7)) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
      vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + 6.0 / (float)_pGfx->m_yscreen;
    }
    iVar11 = iVar11 + 1;
    if (7 < iVar11) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar4 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      fVar7 = (this->m_vUI_WHITE).field0_0x0.d[1];
      fVar8 = (this->m_vUI_WHITE).field0_0x0.d[2];
      fVar9 = (this->m_vUI_WHITE).field0_0x0.d[3];
                    /* end of inlined section */
                    /* end of inlined section */
      (pEVar4->m_vColor).field0_0x0.d[0] = (this->m_vUI_WHITE).field0_0x0.d[0];
      (pEVar4->m_vColor).field0_0x0.d[1] = fVar7;
      (pEVar4->m_vColor).field0_0x0.d[2] = fVar8;
      (pEVar4->m_vColor).field0_0x0.d[3] = fVar9;
      psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"cash_flow_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0)
      ;
                    /* end of inlined section */
      GetMoneyString__FiRt12StackString21Ui256(nHistoryCashFlow,&moneyString);
      pEVar4 = this->m_pFont;
      if (nHistoryCashFlow < 0) {
                    /* end of inlined section */
        fVar7 = (this->m_vUI_RED).field0_0x0.d[0];
        fVar8 = (this->m_vUI_RED).field0_0x0.d[1];
        fVar9 = (this->m_vUI_RED).field0_0x0.d[2];
        fVar10 = (this->m_vUI_RED).field0_0x0.d[3];
      }
      else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        fVar7 = (this->m_vUI_WHITE).field0_0x0.d[0];
        fVar8 = (this->m_vUI_WHITE).field0_0x0.d[1];
        fVar9 = (this->m_vUI_WHITE).field0_0x0.d[2];
        fVar10 = (this->m_vUI_WHITE).field0_0x0.d[3];
      }
      (pEVar4->m_vColor).field0_0x0.d[0] = fVar7;
      (pEVar4->m_vColor).field0_0x0.d[1] = fVar8;
      (pEVar4->m_vColor).field0_0x0.d[2] = fVar9;
      (pEVar4->m_vColor).field0_0x0.d[3] = fVar10;
                    /* end of inlined section */
      psVar3 = c_str__C13StringBuffer2(&moneyString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_dc = vPos.field0_0x0.d[1];
      local_f0 = 0.6;
      local_ec = vPos.field0_0x0.d[1];
      local_e0 = 0.6;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_e0,E_FAX_RIGHT,E_FAY_TOP,(EVec2 *)0x0
                );
                    /* end of inlined section */
      GetMoneyString__FiRt12StackString21Ui256(nCashFlow,&moneyString);
      pEVar4 = this->m_pFont;
      if (nCashFlow < 0) {
                    /* end of inlined section */
        fVar7 = (this->m_vUI_RED).field0_0x0.d[0];
        fVar8 = (this->m_vUI_RED).field0_0x0.d[1];
        fVar9 = (this->m_vUI_RED).field0_0x0.d[2];
        fVar10 = (this->m_vUI_RED).field0_0x0.d[3];
      }
      else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        fVar7 = (this->m_vUI_WHITE).field0_0x0.d[0];
        fVar8 = (this->m_vUI_WHITE).field0_0x0.d[1];
        fVar9 = (this->m_vUI_WHITE).field0_0x0.d[2];
        fVar10 = (this->m_vUI_WHITE).field0_0x0.d[3];
      }
      (pEVar4->m_vColor).field0_0x0.d[0] = fVar7;
      (pEVar4->m_vColor).field0_0x0.d[1] = fVar8;
      (pEVar4->m_vColor).field0_0x0.d[2] = fVar9;
      (pEVar4->m_vColor).field0_0x0.d[3] = fVar10;
                    /* end of inlined section */
      psVar3 = c_str__C13StringBuffer2(&moneyString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_dc = vPos.field0_0x0.d[1];
      local_ec = vPos.field0_0x0.d[1];
      local_f0 = fVar12;
      local_e0 = fVar12;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_e0,E_FAX_RIGHT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
      vPos.field0_0x0.d[0] = fVar13;
      fVar12 = GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar4 = this->m_pFont;
                    /* end of inlined section */
      vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar12;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      fVar12 = (this->m_vUI_WHITE).field0_0x0.d[1];
      fVar7 = (this->m_vUI_WHITE).field0_0x0.d[2];
      fVar8 = (this->m_vUI_WHITE).field0_0x0.d[3];
                    /* end of inlined section */
                    /* end of inlined section */
      (pEVar4->m_vColor).field0_0x0.d[0] = (this->m_vUI_WHITE).field0_0x0.d[0];
      (pEVar4->m_vColor).field0_0x0.d[1] = fVar12;
      (pEVar4->m_vColor).field0_0x0.d[2] = fVar7;
      (pEVar4->m_vColor).field0_0x0.d[3] = fVar8;
      psVar3 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"household_worth_title");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = vPos.field0_0x0.d[0];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_f0,E_FAX_LEFT,E_FAY_TOP,(EVec2 *)0x0)
      ;
                    /* end of inlined section */
      iVar5 = (*(code *)_5Globs_pSimulator->__vtable[1].GetTicks)
                        ((int)&_5Globs_pSimulator->__vtable +
                         (int)*(short *)&_5Globs_pSimulator->__vtable[1].SetCurrentHour);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar6 = (*(code *)_5Globs_pSimulator->__vtable[1].GetDaysRunning)
                        ((int)&_5Globs_pSimulator->__vtable +
                         (int)*(short *)&_5Globs_pSimulator->__vtable[1].GetExpensesHistory);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar11 = (*(code *)_5Globs_pSimulator->__vtable[1].GetLotValue)
                         ((int)&_5Globs_pSimulator->__vtable +
                          (int)*(short *)&_5Globs_pSimulator->__vtable[1].GetTutorialOn);
      GetMoneyString__FiRt12StackString21Ui256(iVar5 + iVar6 + iVar11,&moneyString);
      psVar3 = c_str__C13StringBuffer2(&moneyString.field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_e0 = 0.6;
      local_f0 = 0.6;
      local_dc = vPos.field0_0x0.d[1];
      local_ec = vPos.field0_0x0.d[1];
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar3,true,(EVec2 *)&local_e0,E_FAX_RIGHT,E_FAY_TOP,&vPos);
                    /* end of inlined section */
      vPos.field0_0x0.d[0] = fVar13;
      GetLineSpacing__6ERFontP7EWindow(this->m_pFont,(EWindow *)0x0);
      return;
    }
    pEVar4 = this->m_pFont;
  } while( true );
}

void EPauseMainMenu::Update() {
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  byte bVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  EUIObjectNode *pEVar3;
  EUIObjectNode__vtable *pEVar4;
  bool bVar5;
  uchar uVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  
  if (this->m_nDisplayMode == '\x03') {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.m_flags >> 2 & 1U) != 0) {
      this->m_nDisplayMode = '\x01';
      this->m_fAnimationTime = 0.25;
    }
    bVar1 = this->m_nDisplayMode;
  }
  else {
    bVar1 = this->m_nDisplayMode;
  }
  if (bVar1 - 1 < 2) {
    fVar9 = this->m_fAnimationTime - _dt;
    this->m_fAnimationTime = fVar9;
    if (fVar9 <= 0.0) {
      this->m_fAnimationTime = 0.0;
      if (bVar1 == 1) {
        this->m_nDisplayMode = '\0';
        _11EPausePanel_m_pDPadRight = _7DPadWin_m_pRightShdr;
        _11EPausePanel_m_pDPadLeft = _7DPadWin_m_pLeftShdr;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
                    /* end of inlined section */
        (this->m_vUI_RED).field0_0x0.d[3] = 1.0;
        this->m_fAlpha = 1.0;
        (this->m_vUI_WHITE).field0_0x0.d[3] = 1.0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
        _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
        _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
                    /* end of inlined section */
        uVar6 = this->m_nDisplayMode;
        goto LAB_001b6194;
      }
      this->m_nDisplayMode = '\x03';
      this->m_fAnimationTime = 0.25;
      (this->m_vUI_RED).field0_0x0.d[3] = 0.0;
      this->m_fAlpha = 0.0;
      (this->m_vUI_WHITE).field0_0x0.d[3] = 0.0;
    }
    uVar6 = this->m_nDisplayMode;
  }
  else {
    uVar6 = this->m_nDisplayMode;
  }
LAB_001b6194:
  if (uVar6 == '\x01') {
    fVar9 = (0.25 - this->m_fAnimationTime) * 4.0;
  }
  else {
    if (uVar6 != '\x02') {
      uVar7 = (this->field0_0x0).field0_0x0.m_flags;
      goto LAB_001b6200;
    }
    fVar9 = 1.0 - (0.25 - this->m_fAnimationTime) * 4.0;
  }
  (this->m_vUI_RED).field0_0x0.d[3] = fVar9;
  this->m_fAlpha = fVar9;
  (this->m_vUI_WHITE).field0_0x0.d[3] = fVar9;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  uVar7 = (this->field0_0x0).field0_0x0.m_flags;
LAB_001b6200:
                    /* end of inlined section */
  if (((int)uVar7 >> 2 & 1U) != 0) {
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar8 = (*(code *)pEVar2[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,
                       _globals.m_whichPlayerPaused,0x10);
    if ((lVar8 == 0) &&
       (pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
       lVar8 = (*(code *)pEVar2[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4
                          ,_globals.m_whichPlayerPaused,0x800), lVar8 == 0)) {
      uVar6 = this->m_nDisplayMode;
    }
    else {
      bVar5 = IsBuildHouseMode__7EGlobal(&_globals);
      if (bVar5) {
        uVar6 = this->m_nDisplayMode;
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        if (_13EUIObjectNode_m_uiSfxBack == (undefined1 *)0x0) {
          this->m_fAlpha = 0.0;
        }
        else {
          (*(code *)_13EUIObjectNode_m_uiSfxBack)();
                    /* end of inlined section */
          this->m_fAlpha = 0.0;
        }
        fVar9 = this->m_fAlpha;
        this->m_nDisplayMode = '\x03';
        this->m_fAnimationTime = 0.25;
        (this->m_vUI_RED).field0_0x0.d[3] = fVar9;
        (this->m_vUI_WHITE).field0_0x0.d[3] = fVar9;
        pEVar3 = (this->field0_0x0).field0_0x0.m_pParent;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
        _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
                    /* end of inlined section */
        pEVar4 = pEVar3->__vtable;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
        _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
        _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
        _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
                    /* end of inlined section */
        (*(code *)pEVar4[1].EUIObjectNode)
                  ((int)&(pEVar3->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)(pEVar4 + 1),
                   0,0x23);
        uVar6 = this->m_nDisplayMode;
      }
    }
    if (uVar6 == '\0') {
      Update__7EUIMenu(&this->field0_0x0);
      Update__10EPromptBar(&this->m_PromptBar);
    }
  }
  this->m_PulseAccumulator = this->m_PulseAccumulator + _dt * 5.0;
  return;
}

void EPauseMainMenu::Message(EUIObjectNode *pChild, u32 messId) {
	int nNMode;
	
  EUIObjectNode__vtable *pEVar1;
  ulong uVar2;
  undefined8 uVar3;
  EUIObjectNode *pEVar4;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  uVar2 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
  switch(messId) {
  case 1:
    this->m_nDisplayMode = '\x02';
    this->m_fAnimationTime = 0.25;
    uVar3 = 0x10;
    pEVar4 = (this->field0_0x0).field0_0x0.m_pParent;
    break;
  case 2:
    this->m_nDisplayMode = '\x02';
    this->m_fAnimationTime = 0.25;
    uVar3 = 0x11;
    pEVar4 = (this->field0_0x0).field0_0x0.m_pParent;
    break;
  case 3:
    this->m_nDisplayMode = '\x02';
    this->m_fAnimationTime = 0.25;
    uVar3 = 0x12;
    pEVar4 = (this->field0_0x0).field0_0x0.m_pParent;
    break;
  case 4:
    this->m_nDisplayMode = '\x02';
    this->m_fAnimationTime = 0.25;
    uVar3 = 0x13;
    pEVar4 = (this->field0_0x0).field0_0x0.m_pParent;
    break;
  case 5:
    pEVar4 = (this->field0_0x0).field0_0x0.m_pParent;
    pEVar1 = pEVar4->__vtable;
    (*(code *)pEVar1[1].EUIObjectNode)
              ((int)&(pEVar4->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)(pEVar1 + 1),0,
               0x14);
    this->m_nDisplayMode = '\x02';
    this->m_fAnimationTime = 0.25;
    return;
  case 6:
    this->m_nDisplayMode = '\x02';
    this->m_fAnimationTime = 0.25;
    uVar3 = 10;
    pEVar4 = (this->field0_0x0).field0_0x0.m_pParent;
    break;
  case 7:
    this->m_nDisplayMode = '\x02';
    this->m_fAnimationTime = 0.25;
    uVar3 = 0xc;
    pEVar4 = (this->field0_0x0).field0_0x0.m_pParent;
    break;
  case 8:
    this->m_nDisplayMode = '\x02';
    this->m_fAnimationTime = 0.25;
    if (1 < uVar2) {
      pEVar4 = (this->field0_0x0).field0_0x0.m_pParent;
      pEVar1 = pEVar4->__vtable;
      (*(code *)pEVar1[1].EUIObjectNode)
                ((int)&(pEVar4->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)(pEVar1 + 1),0,
                 0xb);
      return;
    }
    pEVar4 = (this->field0_0x0).field0_0x0.m_pParent;
    if (_globals.m_whichPlayerPaused == 0) {
      uVar3 = 0xd;
    }
    else {
      uVar3 = 0xf;
    }
    break;
  default:
    goto switchD_001b639c_caseD_8;
  }
  (*(code *)pEVar4->__vtable[1].EUIObjectNode)
            ((int)&(pEVar4->m_ChildList).field0_0x0.m_l.m_pHead +
             (int)*(short *)(pEVar4->__vtable + 1),0,uVar3);
switchD_001b639c_caseD_8:
  return;
}

void EPauseMainMenu::UpdateAnimation() {
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EPauseMenuSlider *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar1 = (EPauseMenuSlider *)(this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead
      ; pEVar1 != (EPauseMenuSlider *)0x0;
      pEVar1 = *(EPauseMenuSlider **)((int)&pEVar1->field0_0x0 + 8)) {
                    /* end of inlined section */
    UpdateAnimation__16EPauseMenuSlider(*(EPauseMenuSlider **)&pEVar1->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  }
  SetPauseLayout__14EPauseMainMenu(this);
  return;
}

void EPauseMainMenu::SetPauseLayout() {
	NLIterator nli;
	EVec3 vPos;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	EGraphics *this;
	EGraphics *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EGraphics *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	EGraphics *this;
	
  int iVar1;
  EPauseMenuSlider *this_00;
  EUIObjectNode__vtable *pEVar2;
  int iVar3;
  EPauseMenuSlider *pEVar4;
  ENodeListNode *pEVar5;
  float fVar6;
  EVec3 vPos;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar5 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  this->m_fIconBarWidth = 0.0;
  if (pEVar5 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar4 = (EPauseMenuSlider *)pEVar5->data;
    while( true ) {
                    /* end of inlined section */
      if (((int)(pEVar4->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags >> 1 & 1U)
          == 0) {
        pEVar5 = pEVar5->pNext;
      }
      else {
        fVar6 = GetSliderWidth__16EPauseMenuSlider(pEVar4);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
        this->m_fIconBarWidth = this->m_fIconBarWidth + fVar6 + 8.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar5 = pEVar5->pNext;
      }
                    /* end of inlined section */
      if (pEVar5 == (ENodeListNode *)0x0) break;
      pEVar4 = (EPauseMenuSlider *)pEVar5->data;
    }
  }
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar5 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  this->m_fIconBarWidth = this->m_fIconBarWidth + 8.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  iVar3 = pEVar5->data;
                    /* end of inlined section */
  iVar1 = *(int *)(iVar3 + 0x38);
  iVar3 = (**(code **)(iVar1 + 0x5c))(iVar3 + *(short *)(iVar1 + 0x58));
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vPos.field0_0x0.d[1] = *(float *)(iVar3 + 4);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vPos.field0_0x0.d[2] = *(float *)(iVar3 + 8);
  pEVar4 = (EPauseMenuSlider *)(this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  vPos.field0_0x0.d[0] = (0.39 - this->m_fIconBarWidth * 0.5) + 8.0 / (float)_pGfx->m_xscreen;
  if (pEVar4 != (EPauseMenuSlider *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this_00 = *(EPauseMenuSlider **)&pEVar4->field0_0x0;
    while( true ) {
                    /* end of inlined section */
      pEVar2 = (this_00->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar2->OnButtonRepeat)
                ((int)(this_00->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc]
                 + (int)*(short *)&pEVar2->StateChanged + 4U,&vPos);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)(this_00->field0_0x0).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags >> 1 & 1U)
          == 0) {
        pEVar4 = *(EPauseMenuSlider **)((int)&pEVar4->field0_0x0 + 8);
      }
      else {
        fVar6 = GetSliderWidth__16EPauseMenuSlider(this_00);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
        vPos.field0_0x0.d[0] = vPos.field0_0x0.d[0] + fVar6 + 8.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar4 = *(EPauseMenuSlider **)((int)&pEVar4->field0_0x0 + 8);
      }
                    /* end of inlined section */
      if (pEVar4 == (EPauseMenuSlider *)0x0) break;
      this_00 = *(EPauseMenuSlider **)&pEVar4->field0_0x0;
    }
  }
  return;
}

void EPauseMainMenu::CheckLockStates() {
	ObjectModule *pObjMod;
	NLIterator nli;
	bool bDone;
	bool bResetCurOpt;
	int nNMode;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EHouse *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EHouse *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  bool bVar1;
  int iVar2;
  EUIObjectNode__vtable *pEVar3;
  ObjectModule *pOVar4;
  bool bVar5;
  long lVar6;
  EUIObjectNode *this_00;
  ENodeListNode *pEVar7;
  
  pOVar4 = _5Globs_pObjectModule;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  bVar1 = false;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar6 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                    ((int)&_5Globs_pNeighborhood->__vtable +
                     (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
  if (lVar6 == 1) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if ((this->m_MenuPrompts[6].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr !=
         (undefined1 *)0x0) &&
       (bVar1 = (this->m_MenuPrompts[6].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                 m_flags & 0x10) != 0, bVar1)) {
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)(this->m_MenuPrompts + 6),0x16,false);
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if ((this->m_MenuPrompts[5].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr !=
         (undefined1 *)0x0) &&
       ((this->m_MenuPrompts[5].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
        0x10) == 0)) {
      bVar1 = true;
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)(this->m_MenuPrompts + 5),0x16,true);
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
    if ((_globals._pCurHouse)->m_lotNum + -1 < 6) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((this->m_MenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr !=
           (undefined1 *)0x0) &&
         ((this->m_MenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
          0x10) == 0)) {
        bVar1 = true;
        SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_MenuPrompts,0x16,true);
      }
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((this->m_MenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr !=
           (undefined1 *)0x0) &&
         ((this->m_MenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
          0x10) != 0)) {
        bVar1 = true;
        SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_MenuPrompts,0x16,false);
      }
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
    this_00 = (EUIObjectNode *)(this->m_MenuPrompts + 3);
                    /* end of inlined section */
    if ((_globals._pCurHouse)->m_lotNum + -1 < 6) goto LAB_001b6b44;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    this_00 = (EUIObjectNode *)(this->m_MenuPrompts + 3);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if ((this->m_MenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr ==
         (undefined1 *)0x0) ||
       ((this->m_MenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
        0x10) == 0)) goto LAB_001b6ba0;
    bVar5 = false;
  }
  else {
    if (lVar6 == 0) {
      if (_globals.m_whichPlayerPaused == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((this->m_MenuPrompts[6].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr
             != (undefined1 *)0x0) &&
           ((this->m_MenuPrompts[6].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
            0x10) == 0)) {
          bVar1 = true;
          SetFlagsPropigate__13EUIObjectNodeUib
                    ((EUIObjectNode *)(this->m_MenuPrompts + 6),0x16,true);
        }
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((this->m_MenuPrompts[6].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr
             != (undefined1 *)0x0) &&
           (bVar1 = (this->m_MenuPrompts[6].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                     m_flags & 0x10) != 0, bVar1)) {
          SetFlagsPropigate__13EUIObjectNodeUib
                    ((EUIObjectNode *)(this->m_MenuPrompts + 6),0x16,false);
        }
      }
      if (_globals.m_whichPlayerPaused == 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((this->m_MenuPrompts[5].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr
             != (undefined1 *)0x0) &&
           ((this->m_MenuPrompts[5].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
            0x10) == 0)) {
          bVar1 = true;
          SetFlagsPropigate__13EUIObjectNodeUib
                    ((EUIObjectNode *)(this->m_MenuPrompts + 5),0x16,true);
        }
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((this->m_MenuPrompts[5].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr
             != (undefined1 *)0x0) &&
           ((this->m_MenuPrompts[5].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
            0x10) != 0)) {
          bVar1 = true;
          SetFlagsPropigate__13EUIObjectNodeUib
                    ((EUIObjectNode *)(this->m_MenuPrompts + 5),0x16,false);
        }
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((this->m_MenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr !=
           (undefined1 *)0x0) &&
         ((this->m_MenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
          0x10) != 0)) {
        bVar1 = true;
        SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_MenuPrompts,0x16,false);
      }
      bVar5 = IsBuildHouseMode__7EGlobal(&_globals);
      if (bVar5) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((this->m_MenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr
             != (undefined1 *)0x0) &&
           ((this->m_MenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
            0x10) != 0)) {
          bVar1 = true;
          SetFlagsPropigate__13EUIObjectNodeUib
                    ((EUIObjectNode *)(this->m_MenuPrompts + 3),0x16,false);
        }
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((this->m_MenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr
             != (undefined1 *)0x0) &&
           ((this->m_MenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
            0x10) == 0)) {
          bVar1 = true;
          SetFlagsPropigate__13EUIObjectNodeUib
                    ((EUIObjectNode *)(this->m_MenuPrompts + 3),0x16,true);
        }
      }
      this_00 = (EUIObjectNode *)(this->m_MenuPrompts + 4);
      if (_globals.m_whichPlayerPaused != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((this->m_MenuPrompts[4].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr
             == (undefined1 *)0x0) ||
           ((this->m_MenuPrompts[4].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
            0x10) == 0)) goto LAB_001b6ba0;
        bVar5 = false;
        goto LAB_001b6b64;
      }
    }
    else {
      if (lVar6 != 2) goto LAB_001b6ba0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((this->m_MenuPrompts[6].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr !=
           (undefined1 *)0x0) &&
         (bVar1 = (this->m_MenuPrompts[6].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.
                   m_flags & 0x10) != 0, bVar1)) {
        SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)(this->m_MenuPrompts + 6),0x16,false)
        ;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((this->m_MenuPrompts[5].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr !=
           (undefined1 *)0x0) &&
         ((this->m_MenuPrompts[5].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
          0x10) != 0)) {
        bVar1 = true;
        SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)(this->m_MenuPrompts + 5),0x16,false)
        ;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((this->m_MenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr !=
           (undefined1 *)0x0) &&
         ((this->m_MenuPrompts[0].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
          0x10) == 0)) {
        bVar1 = true;
        SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this->m_MenuPrompts,0x16,true);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((this->m_MenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr !=
           (undefined1 *)0x0) &&
         ((this->m_MenuPrompts[3].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
          0x10) == 0)) {
        bVar1 = true;
        SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)(this->m_MenuPrompts + 3),0x16,true);
      }
      if (_globals.m_whichPlayerPaused != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if ((this->m_MenuPrompts[4].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr
             != (undefined1 *)0x0) &&
           ((this->m_MenuPrompts[4].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
            0x10) != 0)) {
          bVar1 = true;
          SetFlagsPropigate__13EUIObjectNodeUib
                    ((EUIObjectNode *)(this->m_MenuPrompts + 4),0x16,false);
        }
        goto LAB_001b6ba0;
      }
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    this_00 = (EUIObjectNode *)(this->m_MenuPrompts + 4);
LAB_001b6b44:
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if ((this_00->m_listIr == (undefined1 *)0x0) || ((this_00->m_flags & 0x10) != 0))
    goto LAB_001b6ba0;
    bVar5 = true;
  }
LAB_001b6b64:
  bVar1 = true;
  SetFlagsPropigate__13EUIObjectNodeUib(this_00,0x16,bVar5);
LAB_001b6ba0:
  if ((((pOVar4 == (ObjectModule *)0x0) ||
       (lVar6 = (*(code *)pOVar4->__vtable[1].GetTutorialObject)
                          ((int)&pOVar4->__vtable +
                           (int)*(short *)&pOVar4->__vtable[1].DoReconPerson), lVar6 == 0)) ||
      (bVar5 = IsBuildHouseMode__7EGlobal(&_globals), bVar5)) && (_globals.m_whichPlayerPaused == 0)
     ) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if ((this->m_MenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr !=
         (undefined1 *)0x0) &&
       ((this->m_MenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
        0x10) == 0)) {
      bVar1 = true;
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)(this->m_MenuPrompts + 1),0x16,true);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if ((this->m_MenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr !=
         (undefined1 *)0x0) &&
       ((this->m_MenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
        0x10) == 0)) {
      bVar1 = true;
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)(this->m_MenuPrompts + 2),0x16,true);
    }
  }
  else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if ((this->m_MenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr !=
         (undefined1 *)0x0) &&
       ((this->m_MenuPrompts[1].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
        0x10) != 0)) {
      bVar1 = true;
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)(this->m_MenuPrompts + 1),0x16,false);
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if ((this->m_MenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_listIr !=
         (undefined1 *)0x0) &&
       ((this->m_MenuPrompts[2].field0_0x0.field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_flags &
        0x10) != 0)) {
      bVar1 = true;
      SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)(this->m_MenuPrompts + 2),0x16,false);
    }
  }
  if (bVar1) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar7 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    bVar1 = false;
    if (pEVar7 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      iVar2 = pEVar7->data;
      while( true ) {
                    /* end of inlined section */
        if ((*(uint *)(iVar2 + 0x10) & 0x10) == 0) {
                    /* end of inlined section */
          pEVar7 = pEVar7->pNext;
        }
        else {
          pEVar3 = (this->field0_0x0).field0_0x0.__vtable;
          (*(code *)pEVar3[2].OnButtonRepeat)
                    ((int)(this->field0_0x0).m_maxBackShdrSize +
                     *(short *)&pEVar3[2].StateChanged + -0x44);
          bVar1 = true;
        }
        if ((bVar1) || (pEVar7 == (ENodeListNode *)0x0)) break;
        iVar2 = pEVar7->data;
      }
    }
    UpdateAnimation__14EPauseMainMenu(this);
    SetPauseLayout__14EPauseMainMenu(this);
  }
  return;
}

void EPauseMainMenu::SetControllerState(u32 nWhichPlayerPaused) {
  SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this,nWhichPlayerPaused);
  if (nWhichPlayerPaused == 0) {
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_MenuPrompts,0);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 1),0);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 2),0);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 3),0);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 4),0);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 5),0);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 6),0);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 7),0);
  }
  else if (nWhichPlayerPaused == 1) {
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)this->m_MenuPrompts,1);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 1),1);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 2),1);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 3),1);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 4),1);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 5),1);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 6),1);
    SetActiveController__13EUIObjectNodeUi((EUIObjectNode *)(this->m_MenuPrompts + 7),1);
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

void* EPauseMainMenu::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,4);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EPauseMainMenu::operator delete(void *ptr) {
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
