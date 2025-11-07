// STATUS: NOT STARTED

#include "pausebuymenu.h"

float _pbm_text_line_x = 0.205062494f;
float _pbm_text_line_y = 0.f;

__vtbl_ptr_type EPauseBuyMenu virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseBuyMenu::~EPauseBuyMenu,
		/* .__delta2 = */ 13880
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseBuyMenu::Update,
		/* .__delta2 = */ 27008
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseBuyMenu::Draw,
		/* .__delta2 = */ 21464
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
		/* .__pfn = */ &EPauseBuyMenu::Message,
		/* .__delta2 = */ 30840
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
		/* .__pfn = */ &EPauseBuyMenu::NextItem,
		/* .__delta2 = */ 30744
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseBuyMenu::PrevItem,
		/* .__delta2 = */ 30792
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

EPauseBuyMenu* EPauseBuyMenu::EPauseBuyMenu() {
	EUIPrompt *this;
	EVec3 vPos;
	EUIPrompt *this;
	EVec3 vPos;
	EUIPrompt *this;
	EVec3 vPos;
	EUIPrompt *this;
	EVec3 vPos;
	EUIPrompt *this;
	EVec3 vPos;
	EUIPrompt *this;
	EVec3 vPos;
	EUIPrompt *this;
	EVec3 vPos;
	EUIPrompt *this;
	EVec3 vPos;
	EUIPrompt *this;
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
  int iVar10;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  EPauseCategoryMenu *this_00;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EUIIconDef local_7a0;
  undefined4 local_780;
  undefined4 local_77c;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 local_770;
  undefined4 uStack_76c;
  undefined4 local_768;
  undefined4 local_760;
  undefined4 local_75c;
  undefined4 local_758;
  undefined4 local_750;
  undefined4 local_74c;
  undefined4 local_748;
  EUITextIconDef local_740;
  EUIIconDef local_720;
  EUIIconDef__vtable *local_700;
  undefined4 local_6f0;
  undefined4 uStack_6ec;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 local_6e0;
  __vtbl_ptr_type *local_6dc;
  undefined4 local_6d0;
  undefined4 local_6cc;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 local_6c0;
  undefined4 uStack_6bc;
  undefined4 local_6b8;
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined4 local_6a8;
  undefined4 local_6a0;
  undefined4 local_69c;
  undefined4 local_698;
  EUITextIconDef local_690;
  EUIIconDef local_670;
  EUIIconDef__vtable *local_650;
  undefined4 local_640;
  undefined4 uStack_63c;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 local_630;
  __vtbl_ptr_type *local_62c;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 uStack_614;
  undefined4 local_610;
  undefined4 uStack_60c;
  undefined4 local_608;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  EUITextIconDef local_5e0;
  EUIIconDef local_5c0;
  EUIIconDef__vtable *local_5a0;
  undefined4 local_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 local_580;
  __vtbl_ptr_type *local_57c;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 local_558;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  EUITextIconDef local_530;
  EUIIconDef local_510;
  EUIIconDef__vtable *local_4f0;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4d0;
  __vtbl_ptr_type *local_4cc;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  EUITextIconDef local_480;
  EUIIconDef local_460;
  EUIIconDef__vtable *local_440;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 local_420;
  __vtbl_ptr_type *local_41c;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  EUITextIconDef local_3d0;
  EUIIconDef local_3b0;
  EUIIconDef__vtable *local_390;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 local_370;
  __vtbl_ptr_type *local_36c;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  EUITextIconDef local_320;
  EUIIconDef local_300;
  EUIIconDef__vtable *local_2e0;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  __vtbl_ptr_type *local_2bc;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  EUITextIconDef local_270;
  EUIIconDef local_250;
  EUIIconDef__vtable *local_230;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  __vtbl_ptr_type *local_20c;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  EVec3 vPos;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  EUITextIconDef local_1c0;
  EUIIconDef local_1a0;
  EUIIconDef__vtable *local_180;
  EUIStaticTextIcon *local_170;
  EUIStaticTextIcon *local_16c;
  EUIStaticTextIcon *local_168;
  EUIStaticTextIcon *local_164;
  undefined4 *local_160;
  undefined4 *local_15c;
  EVec3 *local_158;
  undefined4 *local_154;
  EUITextIconDef *local_150;
  EVec3 *local_14c;
  undefined4 *local_148;
  EUITextIconDef *local_144;
  EVec3 *local_140;
  EUIIconDef *local_13c;
  EUITextIconDef *local_138;
  EVec3 *local_134;
  EUIIconDef *local_130;
  EUITextIconDef *local_12c;
  EVec3 *local_128;
  EUIIconDef *local_124;
  EUITextIconDef *local_120;
  undefined4 *local_11c;
  EUIIconDef *local_118;
  undefined4 *local_114;
  EUIIconDef *local_110;
  undefined4 *local_10c;
  undefined4 *local_108;
  undefined4 *local_104;
  undefined4 *local_100;
  undefined4 *local_fc;
  EVec3 *local_f8;
  undefined4 *local_f4;
  EUITextIconDef *local_f0;
  EVec3 *local_ec;
  EUITextIconDef *local_e8;
  EVec3 *local_e4;
  EUIIconDef *local_e0;
  EUITextIconDef *local_dc;
  EVec3 *local_d8;
  EUIIconDef *local_d4;
  EUITextIconDef *local_d0;
  EUIIconDef *local_cc;
  undefined4 *local_c8;
  EUIIconDef *local_c4;
  undefined4 *local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined4 *local_b4;
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
  
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  this_00 = this->m_Categories;
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  iVar10 = 7;
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  __7EUIMenuiifff(&this->field0_0x0,-1,0,0.05,0.0,0.0);
  local_c0 = &local_780;
  local_158 = (EVec3 *)&local_750;
  local_150 = &local_740;
  local_13c = &local_720;
  local_11c = &local_6f0;
  local_10c = &local_6d0;
  local_f8 = (EVec3 *)&local_6a0;
  local_f0 = &local_690;
  local_e0 = &local_670;
  local_c8 = &local_640;
  local_b8 = &local_620;
  local_14c = (EVec3 *)&local_5f0;
  local_144 = &local_5e0;
  local_130 = &local_5c0;
  local_114 = &local_590;
  local_104 = &local_570;
  local_ec = (EVec3 *)&local_540;
  local_e8 = &local_530;
  local_d4 = &local_510;
  local_bc = &local_4e0;
  local_160 = &local_4c0;
  local_140 = (EVec3 *)&local_490;
  local_138 = &local_480;
  local_124 = &local_460;
  local_108 = &local_430;
  local_fc = &local_410;
  local_e4 = (EVec3 *)&local_3e0;
  local_dc = &local_3d0;
  local_cc = &local_3b0;
  local_b4 = &local_380;
  local_154 = &local_360;
  local_134 = (EVec3 *)&local_330;
  local_12c = &local_320;
  local_118 = &local_300;
  local_100 = &local_2d0;
  local_f4 = &local_2b0;
  local_d8 = (EVec3 *)&local_280;
  local_d0 = &local_270;
  local_c4 = &local_250;
  local_15c = &local_220;
  local_148 = &local_200;
  local_128 = (EVec3 *)&local_1d0;
  local_120 = &local_1c0;
  local_110 = &local_1a0;
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_13EPauseBuyMenu;
  do {
    iVar10 = iVar10 + -1;
    __18EPauseCategoryMenu(this_00);
    this_00 = this_00 + 1;
  } while (iVar10 != -1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
  Init__13ESlideTextBox(&this->m_SlideTextBox);
  __13StringBuffer2PUsUi(&(this->m_sSliderText).field0_0x0,(this->m_sSliderText).fChars,0x100);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_7a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_BuyPromptIcon,&local_7a0,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_7a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_InfoPromptIcon,&local_7a0,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_7a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_BackPromptIcon,&local_7a0,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_7a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_7a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_SellPromptIcon,&local_7a0,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_170 = (EUIStaticTextIcon *)&this->m_GrabPrompt;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_flags = 0;
  local_7a0.m_selColorIdx = 0;
                    /* end of inlined section */
  local_7a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_RotateLPromptIcon,&local_7a0,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_168 = (EUIStaticTextIcon *)&this->m_PlacePrompt;
  local_16c = (EUIStaticTextIcon *)&this->m_CancelPrompt;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_7a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_flags = 0;
  local_7a0.m_selColorIdx = 0;
                    /* end of inlined section */
  local_7a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_RotateRPromptIcon,&local_7a0,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_164 = (EUIStaticTextIcon *)&this->m_WallsPrompt;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_flags = 0;
  local_7a0.m_selColorIdx = 0;
                    /* end of inlined section */
  local_7a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_GrabPromptIcon,&local_7a0,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_7a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_7a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_CancelPromptIcon,&local_7a0,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_7a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_7a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_PlacePromptIcon,&local_7a0,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_7a0.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_7a0.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_7a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_WallsPromptIcon,&local_7a0,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_780 = 0x20;
  local_7a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_7a0.m_trigger = 0x40;
  local_7a0.m_colorIdx = 1;
  local_7a0.m_flags = 0;
  local_7a0.m_selColorIdx = 0;
  local_7a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  local_77c = 0;
  local_778 = 0;
  local_c0[3] = 0x41400000;
  local_770 = 0;
  local_c0[5] = 1;
  local_768 = CONCAT22(local_768._2_2_,0xffff);
  local_740.m_maxChars = 0x20;
  local_758 = 0;
  local_75c = 0;
  local_760 = 0;
  local_748 = 0;
  local_74c = 0;
  local_750 = 0;
  local_740.m_xAlign = E_FAX_LEFT;
  local_740.m_yAlign = E_FAY_TOP;
  local_150->m_pointsize = 12.0;
  local_740.m_selColorIdx = 0;
  local_150->m_colorIdx = 1;
  local_740.m_retChar = -1;
  local_720.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_720.m_flags = 0;
  local_13c->m_trigger = 0x40;
  local_720.m_selColorIdx = 0;
  local_13c->m_colorIdx = 1;
  local_720.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&(this->m_BuyPrompt).field0_0x0,local_150,local_13c,-1,local_158);
  local_720.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_77c,local_780) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_77c,local_780) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_774,local_778) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_774,local_778) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_76c,local_770) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_76c,local_770) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_768;
  local_700 = (this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
            CONCAT44(local_7a0.m_trigger,local_7a0.m_flags) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(local_7a0.m_trigger,local_7a0.m_flags) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
            CONCAT44(local_7a0.m_colorIdx,local_7a0.m_selColorIdx) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(local_7a0.m_colorIdx,local_7a0.m_selColorIdx) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
            CONCAT44(local_7a0.__vtable,local_7a0.m_pCtrl) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_7a0.__vtable,local_7a0.m_pCtrl) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_BuyPrompt).m_lastPressed = 0;
  (this->m_BuyPrompt).m_gap = 0.0;
  (this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_700;
  local_7a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_6dc = _vt_10EUIIconDef;
  local_6f0 = 0;
  local_11c[1] = 0x40;
  local_6e8 = 0;
  local_11c[3] = 1;
  local_6d0 = 0x20;
  local_6e0 = 0;
  local_6cc = 0;
  local_6c8 = 0;
  local_10c[3] = 0x41400000;
  local_6c0 = 0;
  local_10c[5] = 1;
  local_6b8 = CONCAT22(local_6b8._2_2_,0xffff);
  local_6a8 = 0;
  local_6ac = 0;
  local_6b0 = 0;
  local_698 = 0;
  local_690.m_maxChars = 0x20;
  local_69c = 0;
  local_6a0 = 0;
  local_690.m_xAlign = E_FAX_LEFT;
  local_690.m_yAlign = E_FAY_TOP;
  local_f0->m_pointsize = 12.0;
  local_690.m_selColorIdx = 0;
  local_f0->m_colorIdx = 1;
  local_690.m_retChar = -1;
  local_670.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_670.m_flags = 0;
  local_e0->m_trigger = 0x40;
  local_670.m_selColorIdx = 0;
  local_e0->m_colorIdx = 1;
  local_670.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&(this->m_InfoPrompt).field0_0x0,local_f0,local_e0,-1,local_f8);
  local_670.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_6cc,local_6d0) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_6cc,local_6d0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_6c4,local_6c8) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_6c4,local_6c8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_6bc,local_6c0) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_6bc,local_6c0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_6b8;
  local_650 = (this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_6ec,local_6f0) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_6ec,local_6f0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_6e4,local_6e8) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_6e4,local_6e8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_6dc,local_6e0) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_6dc,local_6e0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_650;
  (this->m_InfoPrompt).m_lastPressed = 0;
  (this->m_InfoPrompt).m_gap = 0.0;
  local_6dc = _vt_10EUIIconDef;
  local_62c = _vt_10EUIIconDef;
  local_640 = 0;
  local_c8[1] = 0x40;
  local_638 = 0;
  local_c8[3] = 1;
  local_630 = 0;
  local_620 = 0x20;
  local_61c = 0;
  local_618 = 0;
  local_b8[3] = 0x41400000;
  local_610 = 0;
  local_b8[5] = 1;
  local_608 = CONCAT22(local_608._2_2_,0xffff);
  local_5f8 = 0;
  local_5fc = 0;
  local_600 = 0;
  local_5e8 = 0;
  local_5ec = 0;
  local_5f0 = 0;
  local_5e0.m_maxChars = 0x20;
  local_5e0.m_xAlign = E_FAX_LEFT;
  local_5e0.m_yAlign = E_FAY_TOP;
  local_144->m_pointsize = 12.0;
  local_5e0.m_selColorIdx = 0;
  local_144->m_colorIdx = 1;
  local_5e0.m_retChar = -1;
  local_5c0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_5c0.m_flags = 0;
  local_130->m_trigger = 0x40;
  local_5c0.m_selColorIdx = 0;
  local_130->m_colorIdx = 1;
  local_5c0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&(this->m_BackPrompt).field0_0x0,local_144,local_130,-1,local_14c);
  local_5c0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_61c,local_620) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_61c,local_620) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_614,local_618) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_614,local_618) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_60c,local_610) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_60c,local_610) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_608;
  local_5a0 = (this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_63c,local_640) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_63c,local_640) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_634,local_638) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_634,local_638) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_62c,local_630) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_62c,local_630) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_5a0;
  (this->m_BackPrompt).m_lastPressed = 0;
  (this->m_BackPrompt).m_gap = 0.0;
  local_62c = _vt_10EUIIconDef;
  local_57c = _vt_10EUIIconDef;
  local_590 = 0;
  local_114[1] = 0x40;
  local_588 = 0;
  local_114[3] = 1;
  local_570 = 0x20;
  local_580 = 0;
  local_56c = 0;
  local_568 = 0;
  local_104[3] = 0x41400000;
  local_560 = 0;
  local_104[5] = 1;
  local_558 = CONCAT22(local_558._2_2_,0xffff);
  local_548 = 0;
  local_54c = 0;
  local_550 = 0;
  local_538 = 0;
  local_530.m_maxChars = 0x20;
  local_53c = 0;
  local_540 = 0;
  local_530.m_xAlign = E_FAX_LEFT;
  local_530.m_yAlign = E_FAY_TOP;
  local_e8->m_pointsize = 12.0;
  local_530.m_selColorIdx = 0;
  local_e8->m_colorIdx = 1;
  local_530.m_retChar = -1;
  local_510.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_510.m_flags = 0;
  local_d4->m_trigger = 0x40;
  local_510.m_selColorIdx = 0;
  local_d4->m_colorIdx = 1;
  local_510.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&(this->m_SellPrompt).field0_0x0,local_e8,local_d4,-1,local_ec);
  local_510.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_56c,local_570) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_56c,local_570) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_564,local_568) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_564,local_568) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_55c,local_560) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_55c,local_560) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_558;
  local_4f0 = (this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_58c,local_590) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_58c,local_590) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_584,local_588) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_584,local_588) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_57c,local_580) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_57c,local_580) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_4f0;
  (this->m_SellPrompt).m_lastPressed = 0;
  (this->m_SellPrompt).m_gap = 0.0;
  local_57c = _vt_10EUIIconDef;
  local_4cc = _vt_10EUIIconDef;
  local_4e0 = 0;
  local_bc[1] = 0x40;
  local_4d8 = 0;
  local_bc[3] = 1;
  local_4c0 = 0x20;
  local_4d0 = 0;
  local_4bc = 0;
  local_4b8 = 0;
  local_160[3] = 0x41400000;
  local_4b0 = 0;
  local_160[5] = 1;
  local_4a8 = CONCAT22(local_4a8._2_2_,0xffff);
  local_498 = 0;
  local_49c = 0;
  local_4a0 = 0;
  local_488 = 0;
  local_480.m_maxChars = 0x20;
  local_48c = 0;
  local_490 = 0;
  local_480.m_xAlign = E_FAX_LEFT;
  local_480.m_yAlign = E_FAY_TOP;
  local_138->m_pointsize = 12.0;
  local_480.m_selColorIdx = 0;
  local_138->m_colorIdx = 1;
  local_460.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_480.m_retChar = -1;
  local_460.m_flags = 0;
  local_124->m_trigger = 0x40;
  local_460.m_selColorIdx = 0;
  local_124->m_colorIdx = 1;
  local_460.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&(this->m_RotatePrompt).field0_0x0,local_138,local_124,-1,local_140);
  local_460.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_4bc,local_4c0) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_4bc,local_4c0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_4b4,local_4b8) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_4b4,local_4b8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_4ac,local_4b0) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_4ac,local_4b0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_4a8;
  local_440 = (this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_4dc,local_4e0) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_4dc,local_4e0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_4d4,local_4d8) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_4d4,local_4d8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_4cc,local_4d0) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_4cc,local_4d0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_440;
  (this->m_RotatePrompt).m_lastPressed = 0;
  (this->m_RotatePrompt).m_gap = 0.0;
  local_4cc = _vt_10EUIIconDef;
  local_41c = _vt_10EUIIconDef;
  local_430 = 0;
  local_108[1] = 0x40;
  local_428 = 0;
  local_108[3] = 1;
  local_410 = 0x20;
  local_420 = 0;
  local_40c = 0;
  local_408 = 0;
  local_fc[3] = 0x41400000;
  local_400 = 0;
  local_fc[5] = 1;
  local_3f8 = CONCAT22(local_3f8._2_2_,0xffff);
  local_3e8 = 0;
  local_3ec = 0;
  local_3f0 = 0;
  local_3d0.m_maxChars = 0x20;
  local_3d8 = 0;
  local_3dc = 0;
  local_3e0 = 0;
  local_3d0.m_xAlign = E_FAX_LEFT;
  local_3d0.m_yAlign = E_FAY_TOP;
  local_dc->m_pointsize = 12.0;
  local_3d0.m_selColorIdx = 0;
  local_dc->m_colorIdx = 1;
  local_3b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_3d0.m_retChar = -1;
  local_3b0.m_flags = 0;
  local_cc->m_trigger = 0x40;
  local_3b0.m_selColorIdx = 0;
  local_cc->m_colorIdx = 1;
  local_3b0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (local_170,local_dc,local_cc,-1,local_e4);
  local_3b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (local_170->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_40c,local_410) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_40c,local_410) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_404,local_408) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_404,local_408) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_3fc,local_400) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_3fc,local_400) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_3f8;
  local_390 = (local_170->field0_0x0).field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_42c,local_430) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_42c,local_430) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_424,local_428) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_424,local_428) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_41c,local_420) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_41c,local_420) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_170->field0_0x0).field0_0x0.m_def.__vtable = local_390;
  local_170[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
       (ENodeListNode *)0x0;
  local_170[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
       (ENodeListNode *)0x0;
  local_41c = _vt_10EUIIconDef;
  local_36c = _vt_10EUIIconDef;
  local_380 = 0;
  local_b4[1] = 0x40;
  local_378 = 0;
  local_b4[3] = 1;
  local_360 = 0x20;
  local_370 = 0;
  local_35c = 0;
  local_358 = 0;
  local_154[3] = 0x41400000;
  local_350 = 0;
  local_154[5] = 1;
  local_348 = CONCAT22(local_348._2_2_,0xffff);
  local_338 = 0;
  local_320.m_maxChars = 0x20;
  local_33c = 0;
  local_340 = 0;
  local_328 = 0;
  local_32c = 0;
  local_330 = 0;
  local_320.m_xAlign = E_FAX_LEFT;
  local_320.m_yAlign = E_FAY_TOP;
  local_12c->m_pointsize = 12.0;
  local_320.m_selColorIdx = 0;
  local_12c->m_colorIdx = 1;
  local_320.m_retChar = -1;
  local_300.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_300.m_flags = 0;
  local_118->m_trigger = 0x40;
  local_300.m_selColorIdx = 0;
  local_118->m_colorIdx = 1;
  local_300.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (local_16c,local_12c,local_118,-1,local_134);
  local_300.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (local_16c->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_35c,local_360) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_35c,local_360) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_354,local_358) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_354,local_358) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_34c,local_350) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_34c,local_350) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_348;
  local_2e0 = (local_16c->field0_0x0).field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_37c,local_380) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_37c,local_380) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_374,local_378) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_374,local_378) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_36c,local_370) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_36c,local_370) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_16c->field0_0x0).field0_0x0.m_def.__vtable = local_2e0;
  local_16c[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
       (ENodeListNode *)0x0;
  local_16c[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
       (ENodeListNode *)0x0;
  local_36c = _vt_10EUIIconDef;
  local_2bc = _vt_10EUIIconDef;
  local_2d0 = 0;
  local_100[1] = 0x40;
  local_2c8 = 0;
  local_100[3] = 1;
  local_2c0 = 0;
  local_2b0 = 0x20;
  local_2ac = 0;
  local_2a8 = 0;
  local_f4[3] = 0x41400000;
  local_2a0 = 0;
  local_f4[5] = 1;
  local_298 = CONCAT22(local_298._2_2_,0xffff);
  local_288 = 0;
  local_28c = 0;
  local_290 = 0;
  local_278 = 0;
  local_27c = 0;
  local_280 = 0;
  local_270.m_maxChars = 0x20;
  local_270.m_xAlign = E_FAX_LEFT;
  local_270.m_yAlign = E_FAY_TOP;
  local_d0->m_pointsize = 12.0;
  local_270.m_selColorIdx = 0;
  local_d0->m_colorIdx = 1;
  local_270.m_retChar = -1;
  local_250.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_250.m_flags = 0;
  local_c4->m_trigger = 0x40;
  local_250.m_selColorIdx = 0;
  local_c4->m_colorIdx = 1;
  local_250.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (local_168,local_d0,local_c4,-1,local_d8);
  local_250.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (local_168->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_2ac,local_2b0) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_2ac,local_2b0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_2a4,local_2a8) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_2a4,local_2a8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_29c,local_2a0) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_29c,local_2a0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_298;
  local_230 = (local_168->field0_0x0).field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_2cc,local_2d0) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_2cc,local_2d0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_2c4,local_2c8) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_2c4,local_2c8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_2bc,local_2c0) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_2bc,local_2c0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_168->field0_0x0).field0_0x0.m_def.__vtable = local_230;
  local_168[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
       (ENodeListNode *)0x0;
  local_168[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
       (ENodeListNode *)0x0;
  local_2bc = _vt_10EUIIconDef;
  local_20c = _vt_10EUIIconDef;
  local_220 = 0;
  local_15c[1] = 0x40;
  local_218 = 0;
  local_15c[3] = 1;
  local_200 = 0x20;
  local_210 = 0;
  local_1fc = 0;
  local_1f8 = 0;
  local_148[3] = 0x41400000;
  local_1f0 = 0;
  local_148[5] = 1;
  local_1c0.m_maxChars = 0x20;
  local_1e8 = CONCAT22(local_1e8._2_2_,0xffff);
  vPos.field0_0x0.d[2] = 0.0;
  vPos.field0_0x0.d[1] = 0.0;
  vPos.field0_0x0.d[0] = 0.0;
  local_1c8 = 0;
  local_1cc = 0;
  local_1d0 = 0;
  local_1c0.m_xAlign = E_FAX_LEFT;
  local_1c0.m_yAlign = E_FAY_TOP;
  local_120->m_pointsize = 12.0;
  local_1c0.m_selColorIdx = 0;
  local_120->m_colorIdx = 1;
  local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_1c0.m_retChar = -1;
  local_1a0.m_flags = 0;
  local_110->m_trigger = 0x40;
  local_1a0.m_selColorIdx = 0;
  local_110->m_colorIdx = 1;
  local_1a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (local_164,local_120,local_110,-1,local_128);
  local_1a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (local_164->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  puVar1 = (undefined *)((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_1fc,local_200) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_1fc,local_200) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_1f4,local_1f8) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_1f4,local_1f8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_1ec,local_1f0) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_1ec,local_1f0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_1e8;
  local_180 = (local_164->field0_0x0).field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_21c,local_220) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_21c,local_220) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_214,local_218) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_214,local_218) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_20c,local_210) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_20c,local_210) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_164->field0_0x0).field0_0x0.m_def.__vtable = local_180;
  local_164[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
       (ENodeListNode *)0x0;
  local_164[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
       (ENodeListNode *)0x0;
                    /* end of inlined section */
  this->m_pFont = (ERFont *)0x0;
  this->m_pBlankShdr = (ERShader *)0x0;
  this->m_pMenuBevelRightShdr = (ERShader *)0x0;
  this->m_pTextLineButtonBevelShdr = (ERShader *)0x0;
  this->m_pMenuDPadReverseShdr = (ERShader *)0x0;
  this->m_pMenuBevelShdr = (ERShader *)0x0;
  this->m_pGlowShader = (ERShader *)0x0;
                    /* end of inlined section */
  local_20c = _vt_10EUIIconDef;
  Init__13EPauseBuyMenu(this);
  return this;
}

void EPauseBuyMenu::~EPauseBuyMenu(int __in_chrg) {
	EUIPrompt *this;
	EUIStaticTextIcon *this;
	EUIPrompt *this;
	EUIStaticTextIcon *this;
	EUIPrompt *this;
	EUIStaticTextIcon *this;
	EUIPrompt *this;
	EUIStaticTextIcon *this;
	EUIPrompt *this;
	EUIStaticTextIcon *this;
	EUIPrompt *this;
	EUIStaticTextIcon *this;
	EUIPrompt *this;
	EUIStaticTextIcon *this;
	EUIPrompt *this;
	EUIStaticTextIcon *this;
	EUIPrompt *this;
	EUIStaticTextIcon *this;
	void *ptr;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  EPauseCategoryMenu *pEVar3;
  
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_13EPauseBuyMenu;
  Reset__13EPauseBuyMenu(this);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  (this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_WallsPrompt,2);
  (this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_PlacePrompt,2);
  (this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_CancelPrompt,2);
  (this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_GrabPrompt,2);
  (this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_RotatePrompt,2);
  (this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_SellPrompt,2);
  (this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_BackPrompt,2);
  (this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_InfoPrompt,2);
  (this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_BuyPrompt,2);
                    /* end of inlined section */
  ___7EUIIcon(&this->m_WallsPromptIcon,2);
  ___7EUIIcon(&this->m_PlacePromptIcon,2);
  ___7EUIIcon(&this->m_CancelPromptIcon,2);
  ___7EUIIcon(&this->m_GrabPromptIcon,2);
  ___7EUIIcon(&this->m_RotateRPromptIcon,2);
  ___7EUIIcon(&this->m_RotateLPromptIcon,2);
  ___7EUIIcon(&this->m_SellPromptIcon,2);
  ___7EUIIcon(&this->m_BackPromptIcon,2);
  ___7EUIIcon(&this->m_InfoPromptIcon,2);
  ___7EUIIcon(&this->m_BuyPromptIcon,2);
  if ((this != (EPauseBuyMenu *)0xfffffef4) &&
     (this->m_Categories != (EPauseCategoryMenu *)&this->m_pItemInfo)) {
    pEVar3 = this->m_Categories + 7;
    do {
      pEVar2 = (pEVar3->field0_0x0).field0_0x0.__vtable;
      (*(code *)pEVar2->Draw)
                ((int)(pEVar3->field0_0x0).m_maxBackShdrSize[-0xc] + *(short *)&pEVar2->Update + 4,0
                );
      bVar1 = this->m_Categories != pEVar3;
      pEVar3 = pEVar3 + -1;
    } while (bVar1);
  }
                    /* end of inlined section */
  ___7EUIMenu(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausebuymenu.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EPauseBuyMenu::Init() {
	int i;
	EVec2 vScreenSize;
	int nCategoryIndex;
	ObjSelector *pMasterSel;
	ObjDefinition *pMasterDef;
	ObjSelector *psel;
	EUIIconDef icondef;
	EUITextIconDef texticon;
	EUIMenu *this;
	EGraphics *this;
	float x;
	float y;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	float x;
	ObjDefinition *pdef;
	ObjSelector *this;
	ObjSelector *this;
	EPauseCategoryMenuItem *pFoundItem;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	ObjSelector *this;
	EPauseCategoryMenuItem *this;
	ObjSelector *pSelector;
	EPauseCategoryMenuItem *pItem;
	u32 id;
	u32 LockId;
	bool bLocked;
	EPauseCategoryMenuItem *this;
	ObjSelector *pSelector;
	EPauseCategoryMenuItem *this;
	ObjSelector *pSelector;
	EPauseCategoryMenuItem *this;
	bool on;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  EUIObjectNode__vtable *pEVar6;
  ResData *pRVar7;
  ObjAnimDef *pOVar8;
  ObjDefinition *pOVar9;
  ObjDefinition *pOVar10;
  ulong *puVar11;
  bool bVar12;
  ERShader *pEVar13;
  ObjSelector *pSel;
  EPauseCategoryMenuItem *pEVar14;
  ERFont *pEVar15;
  short *psVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  EPauseCategoryMenu *pEVar20;
  uint uVar21;
  undefined8 unaff_s0;
  int iVar22;
  uint uVar23;
  undefined8 unaff_s1;
  EUIVirtualCtrl **ppEVar24;
  undefined8 unaff_s2;
  ObjSelector *this_00;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  EVec2 vScreenSize;
  EUIIconDef icondef;
  float local_1f0;
  float local_1ec;
  float local_1e0;
  float local_1dc;
  EUITextIconDef texticon;
  EUIIconDef__vtable *local_1b0;
  float local_1ac;
  undefined4 local_1a8;
  uint uStack_1a4;
  undefined local_1a0 [112];
  uint LockId;
  EUIIcon *local_12c;
  EUIIcon *local_128;
  EUITextIconDef *local_124;
  EUIPrompt *local_120;
  EUIIcon *local_11c;
  EUIIconDef__vtable **local_118;
  EUIPrompt *local_114;
  EUIIcon *local_110;
  EUIPrompt *local_10c;
  EUIPrompt *local_108;
  EUIIcon *local_104;
  EUIPrompt *local_100;
  EUIIcon *local_fc;
  EUIPrompt *local_f8;
  EUIIcon *local_f4;
  EUIPrompt *local_f0;
  EUIIcon *local_ec;
  EUIIcon *local_e8;
  EUIPrompt *local_e4;
  EUIIcon *local_e0;
  EUIPrompt *local_dc;
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
  
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
                    /* end of inlined section */
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
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
                    /* end of inlined section */
  iVar22 = 7;
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pEVar20 = this->m_Categories;
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  AddRef__16EResourceManagerUiP5EFilei(&_quickdataman.field0_0x0,0xa173a1ee,(EFile *)0x0,0);
                    /* end of inlined section */
  local_124 = &texticon;
  local_118 = &local_1b0;
  this->m_nDisplayMode = '\x05';
  ppEVar24 = &icondef.m_pCtrl;
  this->m_fAnimationTime = 0.25;
  *(undefined4 *)&this->m_bListenToStick = 1;
  *(undefined4 *)&this->m_bDeleteInfo = 0;
  this->m_pPreloadSelector = (ObjSelector *)0x0;
  *(undefined4 *)&this->m_bWaitForPreload = 0;
  *(undefined4 *)&this->m_bCleanUpModelReference = 0;
  this->m_PulseAccumulator = 0.0;
  *(undefined4 *)&this->m_bShowingSlider = 0;
  this->m_nSliderNumber = 0;
  do {
    iVar22 = iVar22 + -1;
    Reset__18EPauseCategoryMenu(pEVar20);
    Init__18EPauseCategoryMenu(pEVar20);
    pEVar20 = pEVar20 + 1;
  } while (-1 < iVar22);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  fVar28 = 0.052;
  pEVar13 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
  this->m_pBlankShdr = pEVar13;
  pEVar13 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xaac25e24,(EFile *)0x0,0);
  icondef.m_trigger = 0x3d851eb8;
  this->m_pMenuBevelRightShdr = pEVar13;
  pEVar13 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x527287a1,(EFile *)0x0,0);
  this->m_pTextLineButtonBevelShdr = pEVar13;
  pEVar13 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc9ff8b99,(EFile *)0x0,0);
                    /* end of inlined section */
  local_fc = &this->m_BuyPromptIcon;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pMenuDPadReverseShdr = pEVar13;
  pEVar13 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
                    /* end of inlined section */
  local_ec = &this->m_InfoPromptIcon;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pMenuBevelShdr = pEVar13;
  pEVar13 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x43886001,(EFile *)0x0,0);
  fVar25 = _13EUIObjectNode_SAFE_TOP;
                    /* end of inlined section */
  local_e0 = &this->m_BackPromptIcon;
  local_128 = &this->m_SellPromptIcon;
  local_104 = &this->m_RotateRPromptIcon;
  this->m_pGlowShader = pEVar13;
  fVar27 = _13EUIObjectNode_SAFE_LEFT;
  local_110 = &this->m_RotateLPromptIcon;
  (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] = _13EUIObjectNode_SAFE_LEFT;
  local_f4 = &this->m_GrabPromptIcon;
  (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[1] = 0.0;
  pEVar6 = (this->field0_0x0).field0_0x0.__vtable;
  local_e8 = &this->m_CancelPromptIcon;
  local_12c = &this->m_PlacePromptIcon;
  local_11c = &this->m_WallsPromptIcon;
  (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] = (fVar25 + 0.09166667) - 0.0011;
  local_10c = &this->m_BuyPrompt;
  local_f8 = &this->m_InfoPrompt;
  local_e4 = &this->m_BackPrompt;
  local_120 = &this->m_SellPrompt;
  (*(code *)pEVar6[2].GetPos)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar6[2].OnStickRepeat + -0x44,
             0,1,1);
  local_108 = &this->m_RotatePrompt;
  local_dc = &this->m_CancelPrompt;
  local_f0 = &this->m_GrabPrompt;
  local_114 = &this->m_PlacePrompt;
  pEVar6 = (this->field0_0x0).field0_0x0.__vtable;
  local_100 = &this->m_WallsPrompt;
  (*(code *)pEVar6[2].RemoveChild)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar6[2].AddChild + -0x44,4);
  fVar26 = _13EUIObjectNode_SAFE_BOTTOM - 0.1941964;
  pEVar6 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vScreenSize.field0_0x0.d[1] = fVar26 - (fVar25 + 0.09151786);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vScreenSize.field0_0x0.d[0] = fVar28;
  (*(code *)pEVar6->RemoveChild)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar6->AddChild + -0x44,
             &vScreenSize);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar6 = (this->field0_0x0).field0_0x0.__vtable;
  (this->field0_0x0).m_optgap = 0.0125;
  (*(code *)pEVar6[2].Message)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar6[2].SetBoxDims + -0x44);
                    /* end of inlined section */
  (this->field0_0x0).m_pCurOpt = (EUIObjectNode *)0x0;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  vScreenSize.field0_0x0.d[1] = (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vScreenSize.field0_0x0.d[0] = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar25 = fVar25 + 41.0 / vScreenSize.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar18 = CONCAT44(fVar25,-(fVar27 + fVar28));
  puVar1 = (undefined *)((int)&(this->m_vSidePosStart).field0_0x0 + 7);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | uVar18 >> (7 - uVar21) * 8;
  uVar21 = (uint)&this->m_vSidePosStart & 7;
  puVar11 = (ulong *)((int)&this->m_vSidePosStart - uVar21);
  *puVar11 = uVar18 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar18 = (ulong)(uint)fVar25 << 0x20;
  puVar1 = (undefined *)((int)&(this->m_vSidePosEnd).field0_0x0 + 7);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | uVar18 >> (7 - uVar21) * 8;
  uVar21 = (uint)&this->m_vSidePosEnd & 7;
  puVar11 = (ulong *)((int)&this->m_vSidePosEnd - uVar21);
  *puVar11 = uVar18 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_vSidePosStart).field0_0x0 + 7);
  uVar21 = (uint)puVar1 & 7;
  uVar23 = (uint)&this->m_vSidePosStart & 7;
  uVar18 = (*(long *)(puVar1 + -uVar21) << (7 - uVar21) * 8 |
           uVar18 & 0xffffffffffffffffU >> (uVar21 + 1) * 8) & -1L << (8 - uVar23) * 8 |
           *(ulong *)((int)&this->m_vSidePosStart - uVar23) >> uVar23 * 8;
  puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | uVar18 >> (7 - uVar21) * 8;
  uVar21 = (uint)&this->m_vSidePos & 7;
  puVar11 = (ulong *)((int)&this->m_vSidePos - uVar21);
  *puVar11 = uVar18 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar18 = CONCAT44(fVar26 - (this->m_vSidePos).field0_0x0.d[1],fVar27 + fVar28);
  puVar1 = (undefined *)((int)&(this->m_vSideSize).field0_0x0 + 7);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | uVar18 >> (7 - uVar21) * 8;
  uVar21 = (uint)&this->m_vSideSize & 7;
  puVar11 = (ulong *)((int)&this->m_vSideSize - uVar21);
  *puVar11 = uVar18 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPosStart).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | 0x3f8000003e3645a2U >> (7 - uVar21) * 8;
  uVar21 = (uint)&this->m_vBottomPosStart & 7;
  puVar11 = (ulong *)((int)&this->m_vBottomPosStart - uVar21);
  *puVar11 = 0x3f8000003e3645a2 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPosEnd).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | 0x3f417c1c3e3645a2U >> (7 - uVar21) * 8;
  uVar21 = (uint)&this->m_vBottomPosEnd & 7;
  puVar11 = (ulong *)((int)&this->m_vBottomPosEnd - uVar21);
  *puVar11 = 0x3f417c1c3e3645a2 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPosStart).field0_0x0 + 7);
  uVar21 = (uint)puVar1 & 7;
  uVar23 = (uint)&this->m_vBottomPosStart & 7;
  uVar18 = (*(long *)(puVar1 + -uVar21) << (7 - uVar21) * 8 |
           0xffffffffffffffffU >> (uVar21 + 1) * 8 & 0x3f417c1c3e3645a2) & -1L << (8 - uVar23) * 8 |
           *(ulong *)((int)&this->m_vBottomPosStart - uVar23) >> uVar23 * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | uVar18 >> (7 - uVar21) * 8;
  uVar21 = (uint)&this->m_vBottomPos & 7;
  puVar11 = (ulong *)((int)&this->m_vBottomPos - uVar21);
  *puVar11 = uVar18 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar18 = CONCAT44(1.0 - (this->m_vBottomPosEnd).field0_0x0.d[1],
                    1.0 - (this->m_vBottomPosEnd).field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&(this->m_vBottomSize).field0_0x0 + 7);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | uVar18 >> (7 - uVar21) * 8;
  uVar21 = (uint)&this->m_vBottomSize & 7;
  puVar11 = (ulong *)((int)&this->m_vBottomSize - uVar21);
  *puVar11 = uVar18 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_flags = 0x3d4ccccd;
  icondef.m_pCtrl = (EUIVirtualCtrl *)(this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0];
  icondef.__vtable = (EUIIconDef__vtable *)(this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2];
                    /* end of inlined section */
  SetupIcon__18EPauseCategoryMenuG5EVec2iT1
            (this->m_Categories,(EVec2 *)&icondef,0x43a3091c,(EVec2 *)ppEVar24);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_flags = 0x3d4ccccd;
                    /* end of inlined section */
  local_1ec = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.07589286;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1f0 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetupIcon__18EPauseCategoryMenuG5EVec2iT1
            (this->m_Categories + 1,(EVec2 *)&icondef,0x33c4e1a2,(EVec2 *)&local_1f0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_flags = 0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.1517857;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_1e0 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetupIcon__18EPauseCategoryMenuG5EVec2iT1
            (this->m_Categories + 2,(EVec2 *)&icondef,-0x55e00404,(EVec2 *)&local_1e0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_flags = 0x3d4ccccd;
                    /* end of inlined section */
  icondef.__vtable =
       (EUIIconDef__vtable *)((this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.2276786);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_pCtrl = (EUIVirtualCtrl *)(this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetupIcon__18EPauseCategoryMenuG5EVec2iT1
            (this->m_Categories + 3,(EVec2 *)&icondef,-0x5f45b1d2,(EVec2 *)ppEVar24);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_flags = 0x3d4ccccd;
                    /* end of inlined section */
  icondef.__vtable =
       (EUIIconDef__vtable *)((this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.3035714);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_pCtrl = (EUIVirtualCtrl *)(this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetupIcon__18EPauseCategoryMenuG5EVec2iT1
            (this->m_Categories + 4,(EVec2 *)&icondef,-0x585bd09b,(EVec2 *)ppEVar24);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_flags = 0x3d4ccccd;
                    /* end of inlined section */
  icondef.__vtable =
       (EUIIconDef__vtable *)((this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.3794643);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_pCtrl = (EUIVirtualCtrl *)(this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetupIcon__18EPauseCategoryMenuG5EVec2iT1
            (this->m_Categories + 5,(EVec2 *)&icondef,-0x3c2be685,(EVec2 *)ppEVar24);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_flags = 0x3d4ccccd;
                    /* end of inlined section */
  icondef.__vtable =
       (EUIIconDef__vtable *)((this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.4553571);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_pCtrl = (EUIVirtualCtrl *)(this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetupIcon__18EPauseCategoryMenuG5EVec2iT1
            (this->m_Categories + 6,(EVec2 *)&icondef,0x4974361b,(EVec2 *)ppEVar24);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_flags = 0x3d4ccccd;
                    /* end of inlined section */
  icondef.__vtable =
       (EUIIconDef__vtable *)((this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.53125);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_pCtrl = (EUIVirtualCtrl *)(this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetupIcon__18EPauseCategoryMenuG5EVec2iT1
            (this->m_Categories + 7,(EVec2 *)&icondef,-0x54b2f11,(EVec2 *)ppEVar24);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar19 = 0;
  while (lVar19 = (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                            ((int)&_5Globs_pObjectFolder->__vtable +
                             (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,
                             lVar19), lVar19 != 0) {
    this_00 = (ObjSelector *)lVar19;
    pOVar10 = this_00->fHeader;
                    /* end of inlined section */
    if ((pOVar10 != (ObjDefinition *)0x0) && (pRVar7 = pOVar10->pResData, pRVar7 != (ResData *)0x0))
    {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      pOVar8 = (pRVar7->objectStates).pData;
      if (pOVar8 == (ObjAnimDef *)0x0) {
        iVar22 = 0;
      }
      else {
        iVar22 = pOVar8[-1].graphic;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      if ((iVar22 != 0) && (((pRVar7->objectStates).pData)->modelID != 0)) {
        iVar22 = -1;
        pSel = GetMasterSelector__11ObjSelector(this_00);
                    /* inlined from ../MSrc/objselector.h */
        pOVar9 = pSel->fHeader;
                    /* end of inlined section */
        uVar4 = pOVar9->functionFlags;
        if (uVar4 == 8) {
          iVar22 = 3;
        }
        else if ((short)uVar4 < 9) {
          if (uVar4 == 2) {
            iVar22 = 1;
          }
          else if ((short)uVar4 < 3) {
            if (uVar4 == 1) {
              iVar22 = 0;
            }
          }
          else if (uVar4 == 4) {
            iVar22 = 4;
          }
        }
        else if (uVar4 == 0x20) {
          iVar22 = 2;
        }
        else if ((short)uVar4 < 0x21) {
          if (uVar4 == 0x10) {
            iVar22 = 5;
          }
        }
        else if (uVar4 == 0x40) {
          iVar22 = 7;
        }
        else if (uVar4 == 0x80) {
          iVar22 = 6;
        }
        if (iVar22 != -1) {
          pEVar14 = SearchExistingSelector__18EPauseCategoryMenuP11ObjSelector
                              (this->m_Categories + iVar22,pSel);
          if (pEVar14 == (EPauseCategoryMenuItem *)0x0) {
            uVar21 = 0;
            pEVar14 = (EPauseCategoryMenuItem *)__builtin_new(0x90);
            pEVar14 = __22EPauseCategoryMenuItem(pEVar14);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
            pEVar14->m_pMasterSel = pSel;
            pEVar14->m_pResSel = this_00;
                    /* end of inlined section */
            if (pOVar9->pResData != (ResData *)0x0) {
              uVar21 = pOVar9->pResData->eorQueueShaderID;
            }
            if ((uVar21 == 0) && (uVar21 = pOVar10->pResData->eorQueueShaderID, uVar21 == 0)) {
              uVar21 = 0xd59c7bb5;
            }
            InitActiveShader__7EUIIconi(&pEVar14->field0_0x0,uVar21);
            uVar23 = 0;
            InitInActiveShader__7EUIIconi(&pEVar14->field0_0x0,uVar21);
            LockId = 0;
            bVar12 = CheckLockableByData__FUiiPUi(0,pOVar9->guid,&LockId);
            if (bVar12) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
              uVar23 = 1;
              lVar17 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                                 ((int)&_5Globs_pNeighborhood->__vtable +
                                  (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
              if (lVar17 == 1) {
                bVar12 = CheckNeighborhoodUnlocked__FUiUi(0,LockId);
                uVar23 = (uint)!bVar12;
              }
              else {
                bVar12 = CheckGlobalUnlocked__FUiUi(0,LockId);
                if (bVar12) {
                  uVar23 = 0;
                }
              }
            }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
            *(uint *)&pEVar14->m_bLocked = uVar23;
                    /* end of inlined section */
            InsertOption__18EPauseCategoryMenuP22EPauseCategoryMenuItem
                      (this->m_Categories + iVar22,pEVar14);
          }
          else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
            if (pEVar14->m_pResSel2 == (ObjSelector *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
              pOVar10 = pEVar14->m_pResSel->fHeader;
                    /* end of inlined section */
              if (((((*(uint *)&pOVar10->pResData->field_0x4 & 0x20) ==
                     (*(uint *)&this_00->fHeader->pResData->field_0x4 & 0x20)) &&
                   (uVar4 = pOVar10->interactionGroup, (short)uVar4 < 0)) &&
                  (uVar5 = this_00->fHeader->interactionGroup, (short)uVar5 < 0)) &&
                 (uVar4 != uVar5)) {
                pEVar14->m_pResSel2 = this_00;
              }
            }
          }
        }
      }
    }
  }
  iVar22 = 7;
  pEVar20 = this->m_Categories;
  do {
    iVar22 = iVar22 + -1;
    AddItemsToMenu__18EPauseCategoryMenu(pEVar20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
    pEVar20->m_messageId = 0x16;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    icondef.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    icondef.m_trigger = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    icondef.m_flags = 0;
                    /* end of inlined section */
    pEVar6 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar6[2].SetBoxDims)
              ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar6[2].SetPos + -0x44,
               pEVar20,&icondef);
    pEVar20 = pEVar20 + 1;
  } while (-1 < iVar22);
  DelRef__16EResourceManagerUi(&_quickdataman.field0_0x0,0xa173a1ee);
  this->m_bBuyCursor = 0;
  *(undefined4 *)&this->m_bShowInfo = 0;
  this->m_pItemInfo = (EPauseItemInfo *)0x0;
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar15 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar15;
                    /* end of inlined section */
  SetSize__6ERFontffb(pEVar15,16.0,1.0,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_flags = 1;
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  icondef.m_trigger = -1;
  icondef.m_selColorIdx = 0;
  icondef.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  texticon.m_maxChars = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  texticon.m_xAlign = E_FAX_LEFT;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_124->m_pointsize = 16.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_124->m_yAlign = E_FAY_CENTER;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  texticon.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_124->m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  texticon.m_retChar = -1;
  local_118[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1a8 = 0;
                    /* end of inlined section */
  fVar27 = 32.0;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1a0._16_4_ = (local_fc->m_def).__vtable;
  local_118[3] = (EUIIconDef__vtable *)0x1;
  local_1a0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_BuyPromptIcon).m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | CONCAT44(local_1ac,1) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_BuyPromptIcon).m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(local_1ac,1) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_BuyPromptIcon).m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | ((ulong)uStack_1a4 << 0x20) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_BuyPromptIcon).m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = ((ulong)uStack_1a4 << 0x20) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_BuyPromptIcon).m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | 0x3a890800000000U >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_BuyPromptIcon).m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = 0x3a890800000000 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  (local_fc->m_def).__vtable = local_1a0._16_4_;
  local_1a0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar22 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_BuyPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1b0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1ac = 32.0 / (float)iVar22;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_BuyPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1ac;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_fc,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_fc,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_118[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1a8 = 0;
  local_1a0._32_4_ = (local_ec->m_def).__vtable;
  local_118[3] = (EUIIconDef__vtable *)0x1;
  local_1a0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_InfoPromptIcon).m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | CONCAT44(local_1ac,1) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_InfoPromptIcon).m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(local_1ac,1) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_InfoPromptIcon).m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | ((ulong)uStack_1a4 << 0x20) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_InfoPromptIcon).m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = ((ulong)uStack_1a4 << 0x20) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_InfoPromptIcon).m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | 0x3a890800000000U >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_InfoPromptIcon).m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = 0x3a890800000000 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  (local_ec->m_def).__vtable = local_1a0._32_4_;
  local_1a0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar22 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_InfoPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1b0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1ac = fVar27 / (float)iVar22;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_InfoPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1ac;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_ec,-0x747336cb);
  InitInActiveShader__7EUIIconi(local_ec,-0x747336cb);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_118[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1a8 = 0;
  local_1a0._48_4_ = (local_e0->m_def).__vtable;
  local_118[3] = (EUIIconDef__vtable *)0x1;
  local_1a0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_BackPromptIcon).m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | CONCAT44(local_1ac,1) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_BackPromptIcon).m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(local_1ac,1) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_BackPromptIcon).m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | ((ulong)uStack_1a4 << 0x20) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_BackPromptIcon).m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = ((ulong)uStack_1a4 << 0x20) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_BackPromptIcon).m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | 0x3a890800000000U >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_BackPromptIcon).m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = 0x3a890800000000 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  (local_e0->m_def).__vtable = local_1a0._48_4_;
  local_1a0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar22 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_BackPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1b0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1ac = fVar27 / (float)iVar22;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_BackPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1ac;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_e0,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_e0,0x2ccf500a);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_118[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1a8 = 0;
  local_1a0._64_4_ = (local_128->m_def).__vtable;
  local_118[3] = (EUIIconDef__vtable *)0x1;
  local_1a0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_SellPromptIcon).m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | CONCAT44(local_1ac,1) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_SellPromptIcon).m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(local_1ac,1) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_SellPromptIcon).m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | ((ulong)uStack_1a4 << 0x20) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_SellPromptIcon).m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = ((ulong)uStack_1a4 << 0x20) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_SellPromptIcon).m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | 0x3a890800000000U >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_SellPromptIcon).m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = 0x3a890800000000 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  (local_128->m_def).__vtable = local_1a0._64_4_;
  local_1a0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar22 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SellPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1b0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1ac = fVar27 / (float)iVar22;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SellPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1ac;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_128,-0x747336cb);
  InitInActiveShader__7EUIIconi(local_128,-0x747336cb);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_118[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1a8 = 0;
  local_1a0._80_4_ = (EFontSize *)(local_110->m_def).__vtable;
  local_118[3] = (EUIIconDef__vtable *)0x1;
  local_1a0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_RotateLPromptIcon).m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | CONCAT44(local_1ac,1) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_RotateLPromptIcon).m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(local_1ac,1) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_RotateLPromptIcon).m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | ((ulong)uStack_1a4 << 0x20) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_RotateLPromptIcon).m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = ((ulong)uStack_1a4 << 0x20) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_RotateLPromptIcon).m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | 0x3a890800000000U >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_RotateLPromptIcon).m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = 0x3a890800000000 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  (local_110->m_def).__vtable = (EUIIconDef__vtable *)local_1a0._80_4_;
  local_1a0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar22 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_RotateLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1b0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1ac = fVar27 / (float)iVar22;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_RotateLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1ac;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_110,0x4ccb12cc);
  InitInActiveShader__7EUIIconi(local_110,0x4ccb12cc);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_118[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1a8 = 0;
  local_1a0._96_4_ = (local_104->m_def).__vtable;
  local_118[3] = (EUIIconDef__vtable *)0x1;
  local_1a0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_RotateRPromptIcon).m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | CONCAT44(local_1ac,1) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_RotateRPromptIcon).m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(local_1ac,1) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_RotateRPromptIcon).m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | ((ulong)uStack_1a4 << 0x20) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_RotateRPromptIcon).m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = ((ulong)uStack_1a4 << 0x20) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_RotateRPromptIcon).m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | 0x3a890800000000U >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_RotateRPromptIcon).m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = 0x3a890800000000 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  (local_104->m_def).__vtable = local_1a0._96_4_;
  local_1a0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar22 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_RotateRPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1b0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1ac = fVar27 / (float)iVar22;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_RotateRPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1ac;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_104,-0x6775d2ed);
  InitInActiveShader__7EUIIconi(local_104,-0x6775d2ed);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_118[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1a8 = 0;
  local_1a0._16_4_ = (local_f4->m_def).__vtable;
  local_118[3] = (EUIIconDef__vtable *)0x1;
  local_1a0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_GrabPromptIcon).m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | CONCAT44(local_1ac,1) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_GrabPromptIcon).m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(local_1ac,1) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_GrabPromptIcon).m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | ((ulong)uStack_1a4 << 0x20) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_GrabPromptIcon).m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = ((ulong)uStack_1a4 << 0x20) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_GrabPromptIcon).m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | 0x3a890800000000U >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_GrabPromptIcon).m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = 0x3a890800000000 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  (local_f4->m_def).__vtable = local_1a0._16_4_;
  local_1a0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar22 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_GrabPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1b0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1ac = fVar27 / (float)iVar22;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_GrabPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1ac;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_f4,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_f4,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_118[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1a8 = 0;
  local_1a0._16_4_ = (local_e8->m_def).__vtable;
  local_118[3] = (EUIIconDef__vtable *)0x1;
  local_1a0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_CancelPromptIcon).m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | CONCAT44(local_1ac,1) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_CancelPromptIcon).m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(local_1ac,1) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_CancelPromptIcon).m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | ((ulong)uStack_1a4 << 0x20) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_CancelPromptIcon).m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = ((ulong)uStack_1a4 << 0x20) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_CancelPromptIcon).m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | 0x3a890800000000U >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_CancelPromptIcon).m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = 0x3a890800000000 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  (local_e8->m_def).__vtable = local_1a0._16_4_;
  local_1a0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar22 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_CancelPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1b0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1ac = fVar27 / (float)iVar22;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_CancelPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1ac;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_e8,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_e8,0x2ccf500a);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_118[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1a8 = 0;
  local_1a0._16_4_ = (local_12c->m_def).__vtable;
  local_118[3] = (EUIIconDef__vtable *)0x1;
  local_1a0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_PlacePromptIcon).m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | CONCAT44(local_1ac,1) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_PlacePromptIcon).m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(local_1ac,1) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_PlacePromptIcon).m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | ((ulong)uStack_1a4 << 0x20) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_PlacePromptIcon).m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = ((ulong)uStack_1a4 << 0x20) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_PlacePromptIcon).m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | 0x3a890800000000U >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_PlacePromptIcon).m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = 0x3a890800000000 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  (local_12c->m_def).__vtable = local_1a0._16_4_;
  local_1a0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar22 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_PlacePromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1b0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1ac = fVar27 / (float)iVar22;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_PlacePromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1ac;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_12c,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_12c,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_118[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1a8 = 0;
  local_1a0._16_4_ = (local_11c->m_def).__vtable;
  local_118[3] = (EUIIconDef__vtable *)0x1;
  local_1a0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_WallsPromptIcon).m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | CONCAT44(local_1ac,1) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_WallsPromptIcon).m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(local_1ac,1) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_WallsPromptIcon).m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | ((ulong)uStack_1a4 << 0x20) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_WallsPromptIcon).m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = ((ulong)uStack_1a4 << 0x20) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)((int)&(this->m_WallsPromptIcon).m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 | 0x3a890800000000U >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_WallsPromptIcon).m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = 0x3a890800000000 << uVar21 * 8 | *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  (local_11c->m_def).__vtable = local_1a0._16_4_;
  local_1a0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar22 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_WallsPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1b0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1ac = fVar27 / (float)iVar22;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_WallsPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1ac;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_11c,-0x3ba5be85);
  InitInActiveShader__7EUIIconi(local_11c,-0x3ba5be85);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0 = (local_10c->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
                    /* end of inlined section */
  (local_10c->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1b0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_10c->field0_0x0,local_124);
  SetFont__11EUITextIconi((EUITextIcon *)local_10c,-0x2080f4e9);
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"buy_action_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_10c->field0_0x0,psVar16,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_10c,local_fc);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_10c->m_gap = 0.006;
  fVar27 = (this->m_BuyPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar15 = this->m_pFont;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"buy_action_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1a0,pEVar15,SUB41(psVar16,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1ac = (this->m_BuyPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1b0 = (EUIIconDef__vtable *)(fVar27 + 0.006 + (float)local_1a0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0
            + 8) = local_1ac;
  (this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1b0;
  SetPositions__9EUIPrompt(local_10c);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_10c,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0 = (local_f8->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
                    /* end of inlined section */
  (local_f8->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1b0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_f8->field0_0x0,local_124);
  SetFont__11EUITextIconi((EUITextIcon *)local_f8,-0x2080f4e9);
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"information_action_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_f8->field0_0x0,psVar16,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_f8,local_ec);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_f8->m_gap = 0.006;
  fVar27 = (this->m_InfoPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar15 = this->m_pFont;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"information_action_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1a0,pEVar15,SUB41(psVar16,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1ac = (this->m_InfoPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1b0 = (EUIIconDef__vtable *)(fVar27 + 0.006 + (float)local_1a0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0
            + 8) = local_1ac;
  (this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1b0;
  SetPositions__9EUIPrompt(local_f8);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_f8,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0 = (local_e4->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
                    /* end of inlined section */
  (local_e4->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1b0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_e4->field0_0x0,local_124);
  SetFont__11EUITextIconi((EUITextIcon *)local_e4,-0x2080f4e9);
  psVar16 = GetUiString__7EGlobalPCc(&_globals,"back");
  InitString__17EUIStaticTextIconPCUsi(&local_e4->field0_0x0,psVar16,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_e4,local_e0);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_e4->m_gap = 0.006;
  fVar27 = (this->m_BackPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar15 = this->m_pFont;
  psVar16 = GetUiString__7EGlobalPCc(&_globals,"back");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1a0,pEVar15,SUB41(psVar16,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1ac = (this->m_BackPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1b0 = (EUIIconDef__vtable *)(fVar27 + 0.006 + (float)local_1a0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0
            + 8) = local_1ac;
  (this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1b0;
  SetPositions__9EUIPrompt(local_e4);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_e4,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0 = (local_120->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
                    /* end of inlined section */
  (local_120->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1b0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_120->field0_0x0,local_124);
  SetFont__11EUITextIconi((EUITextIcon *)local_120,-0x2080f4e9);
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"sell_action_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_120->field0_0x0,psVar16,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_120,local_128);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_120->m_gap = 0.006;
  fVar27 = (this->m_SellPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar15 = this->m_pFont;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"sell_action_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1a0,pEVar15,SUB41(psVar16,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1ac = (this->m_SellPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1b0 = (EUIIconDef__vtable *)(fVar27 + 0.006 + (float)local_1a0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0
            + 8) = local_1ac;
  (this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1b0;
  SetPositions__9EUIPrompt(local_120);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_120,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0 = (local_108->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
                    /* end of inlined section */
  (local_108->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1b0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_108->field0_0x0,local_124);
  SetFont__11EUITextIconi((EUITextIcon *)local_108,-0x2080f4e9);
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"rotate_action_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_108->field0_0x0,psVar16,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_108,&this->m_RotateLPromptIcon);
  AddIcon__9EUIPromptP7EUIIcon(local_108,&this->m_RotateRPromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_108->m_gap = 0.006;
  fVar25 = (this->m_RotateLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
  fVar27 = (this->m_RotateRPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar15 = this->m_pFont;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"rotate_action_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1a0,pEVar15,SUB41(psVar16,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1ac = (this->m_RotateLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1b0 = (EUIIconDef__vtable *)(fVar25 + 0.006 + fVar27 + 0.006 + (float)local_1a0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                   field0_0x0 + 8) = local_1ac;
  (this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1b0;
  SetPositions__9EUIPrompt(local_108);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_108,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0 = (local_f0->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
                    /* end of inlined section */
  (local_f0->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1b0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_f0->field0_0x0,local_124);
  SetFont__11EUITextIconi((EUITextIcon *)local_f0,-0x2080f4e9);
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"grab_action_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_f0->field0_0x0,psVar16,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_f0,&this->m_GrabPromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_f0->m_gap = 0.006;
  fVar27 = (this->m_GrabPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar15 = this->m_pFont;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"grab_action_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1a0,pEVar15,SUB41(psVar16,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1ac = (this->m_GrabPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1b0 = (EUIIconDef__vtable *)(fVar27 + 0.006 + (float)local_1a0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0
            + 8) = local_1ac;
  (this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1b0;
  SetPositions__9EUIPrompt(local_f0);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_f0,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0 = (local_dc->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
                    /* end of inlined section */
  (local_dc->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1b0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_dc->field0_0x0,local_124);
  SetFont__11EUITextIconi((EUITextIcon *)local_dc,-0x2080f4e9);
  psVar16 = GetUiString__7EGlobalPCc(&_globals,"cancel");
  InitString__17EUIStaticTextIconPCUsi(&local_dc->field0_0x0,psVar16,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_dc,&this->m_CancelPromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_dc->m_gap = 0.006;
  fVar27 = (this->m_CancelPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar15 = this->m_pFont;
  psVar16 = GetUiString__7EGlobalPCc(&_globals,"cancel");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1a0,pEVar15,SUB41(psVar16,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1ac = (this->m_CancelPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1b0 = (EUIIconDef__vtable *)(fVar27 + 0.006 + (float)local_1a0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                   field0_0x0 + 8) = local_1ac;
  (this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1b0;
  SetPositions__9EUIPrompt(local_dc);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_dc,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0 = (local_114->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
                    /* end of inlined section */
  (local_114->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1b0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_114->field0_0x0,local_124);
  SetFont__11EUITextIconi((EUITextIcon *)local_114,-0x2080f4e9);
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"place_action_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_114->field0_0x0,psVar16,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_114,&this->m_PlacePromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_114->m_gap = 0.006;
  fVar27 = (this->m_PlacePromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar15 = this->m_pFont;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"place_action_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1a0,pEVar15,SUB41(psVar16,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1ac = (this->m_PlacePromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1b0 = (EUIIconDef__vtable *)(fVar27 + 0.006 + (float)local_1a0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                   field0_0x0 + 8) = local_1ac;
  (this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1b0;
  SetPositions__9EUIPrompt(local_114);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_114,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1b0 = (local_100->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar21) * 8;
  pEVar2 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar21 = (uint)pEVar2 & 7;
  puVar11 = (ulong *)((int)pEVar2 - uVar21);
  *puVar11 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar21) * 8;
  piVar3 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar21 = (uint)piVar3 & 7;
  puVar11 = (ulong *)((int)piVar3 - uVar21);
  *puVar11 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar21 = (uint)puVar1 & 7;
  puVar11 = (ulong *)(puVar1 + -uVar21);
  *puVar11 = *puVar11 & -1L << (uVar21 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar21) * 8;
  ppEVar24 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar21 = (uint)ppEVar24 & 7;
  puVar11 = (ulong *)((int)ppEVar24 - uVar21);
  *puVar11 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar21 * 8 |
             *puVar11 & 0xffffffffffffffffU >> (8 - uVar21) * 8;
                    /* end of inlined section */
  (local_100->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1b0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_100->field0_0x0,local_124);
  SetFont__11EUITextIconi((EUITextIcon *)local_100,-0x2080f4e9);
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"walls_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_100->field0_0x0,psVar16,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_100,&this->m_WallsPromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_100->m_gap = 0.006;
  fVar27 = (this->m_WallsPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar15 = this->m_pFont;
  psVar16 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"walls_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1a0,pEVar15,SUB41(psVar16,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1ac = (this->m_WallsPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1b0 = (EUIIconDef__vtable *)(fVar27 + 0.006 + (float)local_1a0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                   field0_0x0 + 8) = local_1ac;
  (this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1b0;
  SetPositions__9EUIPrompt(local_100);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_100,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  return;
}

void EPauseBuyMenu::Reset() {
	int i;
	
  EUIObjectNode__vtable *pEVar1;
  ERShader *pEVar2;
  EPauseCategoryMenu *this_00;
  int iVar3;
  
  while( true ) {
    if (this->m_pBlankShdr == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_pBlankShdr->field0_0x0);
    this->m_pBlankShdr = (ERShader *)0x0;
  }
  while (this->m_pMenuBevelRightShdr != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pMenuBevelRightShdr->field0_0x0);
    this->m_pMenuBevelRightShdr = (ERShader *)0x0;
  }
  pEVar2 = this->m_pTextLineButtonBevelShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pTextLineButtonBevelShdr = (ERShader *)0x0;
    pEVar2 = this->m_pTextLineButtonBevelShdr;
  }
  pEVar2 = this->m_pMenuDPadReverseShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pMenuDPadReverseShdr = (ERShader *)0x0;
    pEVar2 = this->m_pMenuDPadReverseShdr;
  }
  pEVar2 = this->m_pMenuBevelShdr;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pMenuBevelShdr = (ERShader *)0x0;
    pEVar2 = this->m_pMenuBevelShdr;
  }
  pEVar2 = this->m_pGlowShader;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_pGlowShader = (ERShader *)0x0;
    pEVar2 = this->m_pGlowShader;
  }
  iVar3 = 7;
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_BuyPrompt);
  this_00 = this->m_Categories;
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_InfoPrompt);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_BackPrompt);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_SellPrompt);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_RotatePrompt);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_GrabPrompt);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_CancelPrompt);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_PlacePrompt);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_WallsPrompt);
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar1[2].EUIObjectNode)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)(pEVar1 + 2) + -0x44);
  do {
    iVar3 = iVar3 + -1;
    Reset__18EPauseCategoryMenu(this_00);
    this_00 = this_00 + 1;
  } while (-1 < iVar3);
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
  return;
}

void EPauseBuyMenu::Draw(ERC *prc) {
	int i;
	s32 nCursorValue;
	bool bCantAfford;
	EVec2 vScreenSize;
	EUIObjectNode *this;
	EGraphics *this;
	float x;
	float PulseFactor;
	float PulseFactorX;
	float PulseFactorY;
	float fWidth;
	float fHeight;
	EVec2 vSize;
	StringBufW255 sPrice;
	EPauseCategoryMenuItem *pItem;
	ObjSelector *pSel;
	EGraphics *this;
	EVec3 vPos3;
	EVec2 vGlowPos;
	EPauseCategoryMenuItem *this;
	ERFont *this;
	ERFont *this;
	EPauseCategoryMenuItem *this;
	EGraphics *this;
	float x;
	ERFont *this;
	ERC *prc;
	EGraphics *this;
	float x;
	ERFont *this;
	ERC *prc;
	ObjSelector *this;
	ERFont *this;
	ERFont *this;
	EPauseCategoryMenuItem *this;
	ObjSelector *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EVec3 vPos;
	EGraphics *this;
	ObjSelector *this;
	EPauseCategoryMenuItem *this;
	EGraphics *this;
	EUIPrompt *this;
	EPauseCategoryMenuItem *this;
	EGraphics *this;
	EUIPrompt *this;
	EGraphics *this;
	EUIPrompt *this;
	ERFont *this;
	ERFont *this;
	ObjSelector *this;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	EPauseCategoryMenuItem *this;
	ObjSelector *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EUIPrompt *pC1R1;
	EUIPrompt *pC1R2;
	EUIPrompt *pC2R1;
	EUIPrompt *pC2R2;
	EUIPrompt *pC3R1;
	ESimsCursor *pCurs;
	bool bHasObject;
	bool bCanSell;
	float fCol1Width;
	float fCol2Width;
	float fCol3Width;
	float fPromptsWidth;
	float fVisibleWidth;
	EVec3 vCol1;
	EVec3 vCol2;
	EVec3 vCol3;
	ESimsCursor *this;
	ESimsCursor *this;
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
	EGraphics *this;
	EGraphics *this;
	float x;
	EGraphics *this;
	float x;
	
  undefined *puVar1;
  EVec2 *pEVar2;
  uchar uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ESimsCursor__15_1743 *this_00;
  CursorMode CVar7;
  EUIObjectNode__vtable *pEVar8;
  uint uVar9;
  ulong *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  bool bVar15;
  short sVar16;
  undefined8 *puVar17;
  EPauseCategoryMenuItem *pEVar18;
  ELocString EVar19;
  short *psVar20;
  ERShader *pEVar21;
  ERFont *pEVar22;
  ulong uVar23;
  null____pfn_or_delta2 nVar24;
  EPauseCategoryMenu *pEVar25;
  EUIPrompt *pEVar26;
  undefined8 unaff_s0;
  EPauseScrollMenu *this_01;
  EUIPrompt *pEVar27;
  undefined8 unaff_s1;
  int iVar28;
  EUIPrompt *pEVar29;
  undefined8 unaff_s2;
  EUIPrompt *pEVar30;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  EUIPrompt *pEVar31;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  ObjSelector *this_02;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  EVec2 vScreenSize;
  EVec3 vCol1;
  EVec3 vPos;
  EVec3 vCol3;
  float local_340;
  float local_33c;
  float local_338;
  int local_334;
  int local_330;
  int local_32c;
  EHashTableNode *local_328;
  EHashTableNode *local_324;
  EHashTableNode **local_320;
  float local_31c;
  EFontSize *local_310;
  undefined4 local_30c;
  undefined4 local_300;
  undefined4 local_2fc;
  StackString2_256_ sPrice;
  undefined local_e0 [96];
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
  
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_e0._80_4_ = (EFontSize *)unaff_s4;
  local_e0._84_4_ = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_e0._64_4_ = (EHashTableNode **)unaff_s3;
  local_e0._68_4_ = (uint)((ulong)unaff_s3 >> 0x20);
  local_e0._48_4_ = (int)unaff_s2;
  local_e0._52_4_ = (int)((ulong)unaff_s2 >> 0x20);
  local_e0._32_4_ = (int)unaff_s1;
  local_e0._36_4_ = (int)((ulong)unaff_s1 >> 0x20);
  local_e0._16_4_ = (int)unaff_s0;
  local_e0._20_4_ = (EStorable__vtable *)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.m_flags >> 1 & 1U) == 0) {
    return;
  }
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  fVar32 = (float)_pGfx->m_yscreen;
  fVar33 = (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  _pbm_text_line_y = (_13EUIObjectNode_SAFE_BOTTOM - 0.155) - 6.0 / fVar32;
  Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vCol1.field0_0x0._0_8_ =
       CONCAT44((this->m_vSidePos).field0_0x0.d[1] + (this->m_vSideSize).field0_0x0.d[1],
                (this->m_vSidePos).field0_0x0.d[0] + (this->m_vSideSize).field0_0x0.d[0]);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0._0_8_ = 0x3f80000000000000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vCol3.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vCol3.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
  fVar35 = 0.0;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&this->m_vSidePos,
             &vCol1,&vPos,&vCol3,0x35f4b0);
  Select__8ERShaderP3ERCi(this->m_pMenuBevelRightShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  local_340 = 10.0 / fVar33;
  local_33c = (this->m_vSideSize).field0_0x0.d[1] * fVar32 * 0.00390625;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vCol1.field0_0x0._0_8_ =
       CONCAT44((this->m_vSidePos).field0_0x0.d[1] - 1.0 / fVar32,
                ((this->m_vSidePos).field0_0x0.d[0] + (this->m_vSideSize).field0_0x0.d[0]) -
                1.0 / fVar33);
  local_324 = (EHashTableNode *)0x3f800000;
  local_328 = (EHashTableNode *)0x3f800000;
  local_32c = 0x3f800000;
  local_330 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (fVar35,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vCol1,&local_340,
             &local_330);
  Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vCol1.field0_0x0._0_8_ =
       CONCAT44((this->m_vBottomPos).field0_0x0.d[1] + (this->m_vBottomSize).field0_0x0.d[1],
                (this->m_vBottomPos).field0_0x0.d[0] + (this->m_vBottomSize).field0_0x0.d[0]);
  vPos.field0_0x0._0_8_ = CONCAT44(0x3f800000,fVar35);
  vCol3.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
  vCol3.field0_0x0.d[1] = fVar35;
  (*(code *)prc->__vtable[1].DisplayList)
            (fVar35,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
             &this->m_vBottomPos,&vCol1,&vPos,&vCol3,0x35f4b0);
  if ((this->m_nDisplayMode == '\0') || (this->m_nDisplayMode == '\x05')) {
    Select__8ERShaderP3ERCi(this->m_pMenuDPadReverseShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vCol3.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0._0_8_ = 0x3f8000003f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vCol1.field0_0x0._0_8_ =
         CONCAT44((this->m_vBottomPos).field0_0x0.d[1] - 1.0 / fVar32,
                  _13EUIObjectNode_SAFE_LEFT + -8.0 / fVar33);
    vCol3.field0_0x0.d[2] = 1.0;
    vCol3.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (fVar35,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vCol1,&vPos,
               &vCol3);
    pEVar21 = this->m_pMenuBevelShdr;
  }
  else {
    pEVar21 = this->m_pMenuBevelShdr;
  }
  Select__8ERShaderP3ERCi(pEVar21,prc,0);
  if ((this->m_nDisplayMode == '\0') || (this->m_nDisplayMode == '\x05')) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0._0_8_ = CONCAT44(0x3f000000,fVar33 * 0.00390625);
    vCol3.field0_0x0.d[0] = 1.0;
    vCol1.field0_0x0._0_8_ =
         (ulong)(uint)((this->m_vBottomPos).field0_0x0.d[1] - 4.0 / fVar32) << 0x20;
    vCol3.field0_0x0.d[2] = 1.0;
    vCol3.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vCol1,&vPos,&vCol3);
    uVar3 = this->m_nDisplayMode;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vCol1.field0_0x0._0_8_ =
         CONCAT44((this->m_vBottomPos).field0_0x0.d[1] - 4.0 / fVar32,
                  (this->m_vBottomPos).field0_0x0.d[0]);
    vPos.field0_0x0._0_8_ =
         CONCAT44(0x3f000000,(this->m_vBottomSize).field0_0x0.d[0] * fVar33 * 0.00390625);
    vCol3.field0_0x0.d[0] = 1.0;
    vCol3.field0_0x0.d[2] = 1.0;
    vCol3.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vCol1,&vPos,&vCol3);
    uVar3 = this->m_nDisplayMode;
  }
  if (uVar3 != '\0') {
    if (uVar3 == '\x05') {
      this_00 = (ESimsCursor__15_1743 *)_globals._pCursor[_globals.m_whichPlayerPaused];
      SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
                    /* end of inlined section */
      bVar14 = this_00->m_pCursorObject == (cXCursorObject__15_1968 *)0x0;
      bVar15 = CanUserSell__11ESimsCursor(this_00);
      if (bVar14) {
        *(undefined4 *)&this->m_bShowingSlider = 0;
        *(undefined4 *)&this->m_SlideTextBox = 0;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
        CVar7 = this_00->m_mode;
        if (CVar7 < nToolModes) {
          uVar5 = this_00->m_ToolValueCalcFnTab[CVar7].__index;
          iVar28 = 0;
          if (uVar5 != 0) {
            if ((short)uVar5 < 0) {
              nVar24 = this_00->m_ToolValueCalcFnTab[CVar7].__pfn_or_delta2;
            }
            else {
              unaff_s6 = *(undefined8 *)
                          ((short)uVar5 * 8 +
                           *(int *)((int)&(((ESimsCursor__15_1743 *)
                                           (this_00->m_ToolValueCalcFnTab + -8))->field0_0x0).
                                          m_state +
                                   (int)(short)this_00->m_ToolValueCalcFnTab[CVar7].__pfn_or_delta2.
                                               __delta2) + -8);
              nVar24 = SUB84((ulong)unaff_s6 >> 0x20,0);
            }
            uVar6 = this_00->m_ToolValueCalcFnTab[CVar7].__delta;
            if ((short)uVar5 < 0) {
              iVar28 = (int)(short)uVar6;
            }
            else {
              iVar28 = (int)(short)unaff_s6 + (int)(short)uVar6;
            }
            iVar28 = (*(code *)nVar24)((int)&(((ESimsCursor__15_1743 *)
                                              (this_00->m_ToolValueCalcFnTab + -8))->field0_0x0).
                                             m_state + iVar28);
          }
        }
        else {
          iVar28 = 0;
        }
                    /* end of inlined section */
        if (*(int *)&this->m_bShowingSlider == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/siminfowin.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          *(undefined4 *)&this->m_SlideTextBox = 0;
          (this->m_SlideTextBox).m_vCur.field0_0x0.d[0] = -1.0;
          (this->m_SlideTextBox).m_vStart.field0_0x0.d[1] = -1.0;
          (this->m_SlideTextBox).m_vStart.field0_0x0.d[0] = -1.0;
          (this->m_SlideTextBox).m_vStop.field0_0x0.d[1] = -1.0;
          (this->m_SlideTextBox).m_vStop.field0_0x0.d[0] = -1.0;
          (this->m_SlideTextBox).m_vCur.field0_0x0.d[1] = -1.0;
          (this->m_SlideTextBox).m_clock = 0.0;
                    /* end of inlined section */
          *(undefined4 *)&this->m_SlideTextBox = 1;
          puVar1 = (undefined *)((int)&(this->m_SlideTextBox).m_vStart.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          uVar9 = (uint)puVar1 & 7;
          puVar10 = (ulong *)(puVar1 + -uVar9);
          *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3f2b851f3f800000U >> (7 - uVar9) * 8;
          pEVar2 = &(this->m_SlideTextBox).m_vStart;
          uVar9 = (uint)pEVar2 & 7;
          puVar10 = (ulong *)((int)pEVar2 - uVar9);
          *puVar10 = 0x3f2b851f3f800000 << uVar9 * 8 |
                     *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          vCol1.field0_0x0._0_8_ = 0x3f2b851f3f400000;
          puVar1 = (undefined *)((int)&(this->m_SlideTextBox).m_vStop.field0_0x0 + 7);
                    /* end of inlined section */
          uVar9 = (uint)puVar1 & 7;
          puVar10 = (ulong *)(puVar1 + -uVar9);
          *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | 0x3f2b851f3f400000U >> (7 - uVar9) * 8;
          pEVar2 = &(this->m_SlideTextBox).m_vStop;
          uVar9 = (uint)pEVar2 & 7;
          puVar10 = (ulong *)((int)pEVar2 - uVar9);
          *puVar10 = 0x3f2b851f3f400000 << uVar9 * 8 |
                     *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
          puVar1 = (undefined *)((int)&(this->m_SlideTextBox).m_vStart.field0_0x0 + 7);
          uVar9 = (uint)puVar1 & 7;
          pEVar2 = &(this->m_SlideTextBox).m_vStart;
          uVar4 = (uint)pEVar2 & 7;
          uVar23 = (*(long *)(puVar1 + -uVar9) << (7 - uVar9) * 8 |
                   0xffffffffffffffffU >> (uVar9 + 1) * 8 & 0x3f2b851f3f400000) &
                   -1L << (8 - uVar4) * 8 | *(ulong *)((int)pEVar2 - uVar4) >> uVar4 * 8;
          puVar1 = (undefined *)((int)&(this->m_SlideTextBox).m_vCur.field0_0x0 + 7);
          uVar9 = (uint)puVar1 & 7;
          puVar10 = (ulong *)(puVar1 + -uVar9);
          *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | uVar23 >> (7 - uVar9) * 8;
          pEVar2 = &(this->m_SlideTextBox).m_vCur;
          uVar9 = (uint)pEVar2 & 7;
          puVar10 = (ulong *)((int)pEVar2 - uVar9);
          *puVar10 = uVar23 << uVar9 * 8 | *puVar10 & 0xffffffffffffffffU >> (8 - uVar9) * 8;
          *(undefined4 *)&this->m_bShowingSlider = 1;
        }
        erase__13StringBuffer2(&(this->m_sSliderText).field0_0x0);
        GetMoneyString__FiRt12StackString21Ui256(-iVar28,&this->m_sSliderText);
        this->m_nSliderNumber = -iVar28;
      }
      if (*(int *)&this->m_bShowingSlider != 0) {
        if (this->m_nSliderNumber < 0) {
          psVar20 = c_str__C13StringBuffer2(&(this->m_sSliderText).field0_0x0);
          Draw__13ESlideTextBoxP3ERCPCUsiRC5EVec4(&this->m_SlideTextBox,prc,psVar20,0,&_RED);
        }
        else {
          psVar20 = c_str__C13StringBuffer2(&(this->m_sSliderText).field0_0x0);
          Draw__13ESlideTextBoxP3ERCPCUsiRC5EVec4(&this->m_SlideTextBox,prc,psVar20,0,&_GREEN);
        }
      }
      if (bVar14) {
        pEVar26 = (EUIPrompt *)0x0;
        pEVar27 = &this->m_GrabPrompt;
        pEVar29 = &this->m_BackPrompt;
        pEVar31 = (EUIPrompt *)0x0;
      }
      else {
        pEVar26 = (EUIPrompt *)0x0;
        if (bVar15) {
          pEVar26 = &this->m_SellPrompt;
        }
        pEVar27 = &this->m_PlacePrompt;
        pEVar29 = &this->m_CancelPrompt;
        pEVar31 = &this->m_RotatePrompt;
      }
      pEVar30 = &this->m_WallsPrompt;
      fVar32 = 0.0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((pEVar26 != (EUIPrompt *)0x0) &&
         (fVar33 = (pEVar26->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0],
         0.0 < fVar33)) {
        fVar32 = fVar33;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((pEVar27 != (EUIPrompt *)0x0) &&
         (fVar33 = (pEVar27->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0],
         fVar32 < fVar33)) {
        fVar32 = fVar33;
      }
                    /* end of inlined section */
      fVar33 = 0.0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((pEVar29 != (EUIPrompt *)0x0) &&
         (fVar35 = (pEVar29->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0],
         0.0 < fVar35)) {
        fVar33 = fVar35;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((pEVar30 != (EUIPrompt *)0x0) &&
         (fVar35 = (this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                   field0_0x0.d[0], fVar33 < fVar35)) {
        fVar33 = fVar35;
      }
                    /* end of inlined section */
      fVar35 = 0.0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((pEVar31 != (EUIPrompt *)0x0) &&
         (fVar36 = (pEVar31->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0],
         0.0 < fVar36)) {
        fVar35 = fVar36;
      }
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
      fVar34 = 20.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar36 = _pbm_text_line_x + 15.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      vCol1.field0_0x0.d[2] = _pbm_text_line_y - 4.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar35 = (fVar36 + (_13EUIObjectNode_SAFE_RIGHT - fVar36) * 0.5) -
               (fVar32 + fVar34 + fVar33 + fVar34 + fVar35) * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vCol1.field0_0x0._0_8_ = ZEXT48((uint)fVar35);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vCol3.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
      fVar35 = fVar35 + fVar32 + 20.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      vPos.field0_0x0._0_8_ = ZEXT48((uint)fVar35);
      vCol3.field0_0x0.d[0] = fVar35 + fVar33 + 20.0 / (float)_pGfx->m_xscreen;
      vPos.field0_0x0.d[2] = vCol1.field0_0x0.d[2];
      vCol3.field0_0x0.d[2] = vCol1.field0_0x0.d[2];
      if (pEVar26 != (EUIPrompt *)0x0) {
        pEVar8 = (pEVar26->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar8->OnButtonRepeat)
                  ((int)(pEVar26->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar8->StateChanged + 4,&vCol1);
      }
      if (pEVar27 != (EUIPrompt *)0x0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
        pEVar8 = (pEVar27->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_340 = vCol1.field0_0x0.d[0];
        local_33c = 0.0;
                    /* end of inlined section */
        local_338 = vCol1.field0_0x0.d[2] + 40.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        (*(code *)pEVar8->OnButtonRepeat)
                  ((int)(pEVar27->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar8->StateChanged + 4,&local_340);
      }
      if (pEVar29 != (EUIPrompt *)0x0) {
        pEVar8 = (pEVar29->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar8->OnButtonRepeat)
                  ((int)(pEVar29->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar8->StateChanged + 4,&vPos);
      }
      if (pEVar30 != (EUIPrompt *)0x0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
        pEVar8 = (this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_340 = vPos.field0_0x0.d[0];
        local_33c = 0.0;
                    /* end of inlined section */
        local_338 = vPos.field0_0x0.d[2] + 40.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
        (*(code *)pEVar8->OnButtonRepeat)
                  ((int)(pEVar30->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar8->StateChanged + 4,&local_340);
      }
      if (pEVar31 != (EUIPrompt *)0x0) {
        pEVar8 = (pEVar31->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar8->OnButtonRepeat)
                  ((int)(pEVar31->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar8->StateChanged + 4,&vCol3);
      }
                    /* end of inlined section */
      if (pEVar26 != (EUIPrompt *)0x0) {
        pEVar8 = (pEVar26->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar8->Message)
                  ((int)(pEVar26->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar8->SetBoxDims + 4,prc);
      }
      if (pEVar27 != (EUIPrompt *)0x0) {
        pEVar8 = (pEVar27->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar8->Message)
                  ((int)(pEVar27->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar8->SetBoxDims + 4,prc);
      }
      if (pEVar29 != (EUIPrompt *)0x0) {
        pEVar8 = (pEVar29->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar8->Message)
                  ((int)(pEVar29->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar8->SetBoxDims + 4,prc);
      }
      if (pEVar30 != (EUIPrompt *)0x0) {
        pEVar8 = (this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar8->Message)
                  ((int)(pEVar30->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar8->SetBoxDims + 4,prc);
      }
      if (pEVar31 != (EUIPrompt *)0x0) {
        pEVar8 = (pEVar31->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
        (*(code *)pEVar8->Message)
                  ((int)(pEVar31->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
                   *(short *)&pEVar8->SetBoxDims + 4,prc);
      }
      iVar28 = *(int *)&this->m_bShowInfo;
    }
    else {
      iVar28 = *(int *)&this->m_bShowInfo;
    }
    goto LAB_001a691c;
  }
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  uVar37 = 0x3f800000;
  pEVar25 = this->m_Categories;
  iVar28 = 7;
  DrawTextBox__10SimInfoWinP3ERCffff
            (prc,0.193625,(_13EUIObjectNode_SAFE_BOTTOM - 0.155) - 7.0 / (float)_pGfx->m_yscreen,
             (_13EUIObjectNode_SAFE_RIGHT - 0.003125) - 0.193625,1.0);
  fVar35 = sinf(this->m_PulseAccumulator);
  fVar35 = (fVar35 * 0.5 + 1.0) * 10.0;
  fVar36 = 32.0 / fVar32 + fVar35 / fVar32;
  fVar35 = 32.0 / fVar33 + fVar35 / fVar33;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(pEVar25->field0_0x0).field0_0x0.m_flags >> 3 & 1U) != 0) {
      pEVar8 = (pEVar25->field0_0x0).field0_0x0.__vtable;
      puVar17 = (undefined8 *)
                (*(code *)pEVar8[1].OnButtonRepeat)
                          ((int)(pEVar25->field0_0x0).m_maxBackShdrSize[-0xc] +
                           *(short *)&pEVar8[1].StateChanged + 4);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vCol1.field0_0x0._0_8_ = *puVar17;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vCol1.field0_0x0.d[2] = (float)*(undefined4 *)(puVar17 + 1);
                    /* end of inlined section */
      vPos.field0_0x0._0_8_ =
           CONCAT44(vCol1.field0_0x0.d[2] + 13.0 / fVar32,*(float *)puVar17 + 16.0 / fVar33);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      Select__8ERShaderP3ERCi(this->m_pGlowShader,prc,0);
      vCol3.field0_0x0.d[0] = vPos.field0_0x0.d[0] - fVar35 * 0.5;
      vCol3.field0_0x0.d[1] = vPos.field0_0x0.d[1] - fVar36 * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_310 = (EFontSize *)0x0;
                    /* end of inlined section */
      local_320 = (EHashTableNode **)(vCol3.field0_0x0.d[0] + fVar35);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_31c = vCol3.field0_0x0.d[1] + fVar36;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_2fc = 0;
                    /* end of inlined section */
      local_30c = uVar37;
      local_300 = uVar37;
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCol3,&local_320,
                 &local_310,&local_300,0x3632a0);
    }
    iVar28 = iVar28 + -1;
    pEVar25 = pEVar25 + 1;
  } while (-1 < iVar28);
  Draw__7EUIMenuP3ERC(&this->field0_0x0,prc);
  pEVar18 = (EPauseCategoryMenuItem *)0x0;
                    /* inlined from ../MSrc/stringbuffer2.h */
  this_02 = (ObjSelector *)0x0;
  __13StringBuffer2PUsUi(&sPrice.field0_0x0,sPrice.fChars,0x100);
                    /* end of inlined section */
  this_01 = &this->m_Categories[0].m_menu;
  pEVar25 = this->m_Categories;
  iVar28 = 7;
  do {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(pEVar25->field0_0x0).field0_0x0.m_flags >> 3 & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
      pEVar18 = GetSelectedItem__16EPauseScrollMenu(this_01);
      this_02 = pEVar18->m_pMasterSel;
                    /* end of inlined section */
    }
    this_01 = (EPauseScrollMenu *)&this_01[1].field0_0x0.m_pFirstVis;
    iVar28 = iVar28 + -1;
    pEVar25 = pEVar25 + 1;
  } while (-1 < iVar28);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
                    /* end of inlined section */
  if (0.0 < _11EPausePanel_m_ItemInfoTimer) {
    SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
    uVar13 = _WHITE.field0_0x0.d[3];
    uVar12 = _WHITE.field0_0x0.d[2];
    uVar11 = _WHITE.field0_0x0.d[1];
    if (this->m_bBuyCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar22 = this->m_pFont;
      (pEVar22->m_vColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0];
      (pEVar22->m_vColor).field0_0x0.d[1] = uVar11;
      (pEVar22->m_vColor).field0_0x0.d[2] = uVar12;
      (pEVar22->m_vColor).field0_0x0.d[3] = uVar13;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      fVar32 = _WHITE.field0_0x0.d[3] * 0.65;
      fVar33 = _WHITE.field0_0x0.d[1] * 0.65;
      vPos.field0_0x0.d[2] = _WHITE.field0_0x0.d[2] * 0.65;
      pEVar22 = this->m_pFont;
      vPos.field0_0x0._0_8_ = CONCAT44(fVar33,_WHITE.field0_0x0.d[0] * 0.65);
                    /* end of inlined section */
      (pEVar22->m_vColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * 0.65;
      (pEVar22->m_vColor).field0_0x0.d[1] = fVar33;
      (pEVar22->m_vColor).field0_0x0.d[2] = vPos.field0_0x0.d[2];
      (pEVar22->m_vColor).field0_0x0.d[3] = fVar32;
    }
                    /* end of inlined section */
    Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
    if ((*(int *)&pEVar18->m_bLocked == 0) || (_globals.Cheats._12_4_ != 0)) {
      EVar19 = GetCatalogName__11ObjSelector(this_02);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      vCol3.field0_0x0.d[0] = _pbm_text_line_x;
                    /* end of inlined section */
      vCol3.field0_0x0.d[1] = _pbm_text_line_y + 12.0 / (float)_pGfx->m_yscreen;
      vPos.field0_0x0._0_8_ = CONCAT44(vCol3.field0_0x0.d[1],_pbm_text_line_x);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,*EVar19.ptr,true,(EVec2 *)&vCol3,E_FAX_LEFT,E_FAY_CENTER,
                 (EVec2 *)0x0);
    }
    else {
      psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"locked_object_message");
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vCol3.field0_0x0.d[0] = _pbm_text_line_x;
                    /* end of inlined section */
      vCol3.field0_0x0.d[1] = _pbm_text_line_y + 12.0 / (float)_pGfx->m_yscreen;
      vPos.field0_0x0._0_8_ = CONCAT44(vCol3.field0_0x0.d[1],_pbm_text_line_x);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar20,true,(EVec2 *)&vCol3,E_FAX_LEFT,E_FAY_CENTER,(EVec2 *)0x0
                );
                    /* end of inlined section */
    }
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
    uVar5 = this_02->fHeader->price;
    sVar16 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                       ((int)&_5Globs_pSimulator->__vtable +
                        (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
    if (sVar16 < (short)uVar5) {
      bVar14 = IsBuildHouseMode__7EGlobal(&_globals);
      if (!bVar14) {
        SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
        uVar13 = _RED.field0_0x0.d[3];
        uVar12 = _RED.field0_0x0.d[2];
        uVar11 = _RED.field0_0x0.d[1];
        if (this->m_bBuyCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          pEVar22 = this->m_pFont;
          (pEVar22->m_vColor).field0_0x0.d[0] = _RED.field0_0x0.d[0];
          (pEVar22->m_vColor).field0_0x0.d[1] = uVar11;
          (pEVar22->m_vColor).field0_0x0.d[2] = uVar12;
          (pEVar22->m_vColor).field0_0x0.d[3] = uVar13;
        }
        else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          fVar32 = _RED.field0_0x0.d[3] * 0.65;
          fVar33 = _RED.field0_0x0.d[1] * 0.65;
          pEVar22 = this->m_pFont;
          vPos.field0_0x0.d[2] = _RED.field0_0x0.d[2] * 0.65;
          vPos.field0_0x0._0_8_ = CONCAT44(fVar33,_RED.field0_0x0.d[0] * 0.65);
                    /* end of inlined section */
          (pEVar22->m_vColor).field0_0x0.d[0] = _RED.field0_0x0.d[0] * 0.65;
          (pEVar22->m_vColor).field0_0x0.d[1] = fVar33;
          (pEVar22->m_vColor).field0_0x0.d[2] = vPos.field0_0x0.d[2];
          (pEVar22->m_vColor).field0_0x0.d[3] = fVar32;
        }
                    /* end of inlined section */
        Select__6ERFontP3ERC(this->m_pFont,prc);
        goto LAB_001a5c94;
      }
      iVar28 = *(int *)&pEVar18->m_bLocked;
    }
    else {
LAB_001a5c94:
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
      iVar28 = *(int *)&pEVar18->m_bLocked;
    }
                    /* end of inlined section */
    if ((iVar28 == 0) || (_globals.Cheats._12_4_ != 0)) {
      erase__13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
      GetMoneyString__FiRt12StackString21Ui256((int)(short)this_02->fHeader->price,&sPrice);
      pEVar22 = this->m_pFont;
      psVar20 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)&vPos,pEVar22,SUB41(psVar20,0),(EWindow *)&pGifTag1);
      vCol1.field0_0x0._0_8_ = vPos.field0_0x0._0_8_;
      puVar1 = (undefined *)((int)&vCol1.field0_0x0 + 7);
                    /* end of inlined section */
      uVar9 = (uint)puVar1 & 7;
      puVar10 = (ulong *)(puVar1 + -uVar9);
      *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | (ulong)vPos.field0_0x0._0_8_ >> (7 - uVar9) * 8
      ;
      psVar20 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      vCol3.field0_0x0.d[0] = (_13EUIObjectNode_SAFE_RIGHT - 0.0125) - vCol1.field0_0x0.d[0];
      vCol3.field0_0x0.d[1] = _pbm_text_line_y + 12.0 / (float)_pGfx->m_yscreen;
      vPos.field0_0x0._0_8_ = CONCAT44(vCol3.field0_0x0.d[1],vCol3.field0_0x0.d[0]);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this->m_pFont,prc,psVar20,true,(EVec2 *)&vCol3,E_FAX_LEFT,E_FAY_CENTER,(EVec2 *)0x0
                );
                    /* end of inlined section */
      iVar28 = *(int *)&this->m_bShowInfo;
    }
    else {
      iVar28 = *(int *)&this->m_bShowInfo;
    }
    goto LAB_001a691c;
  }
  bVar14 = false;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vCol3.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  vPos.field0_0x0.d[2] = _pbm_text_line_y - 4.0 / (float)_pGfx->m_yscreen;
  vCol3.field0_0x0.d[0] = _pbm_text_line_x + 15.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vCol3.field0_0x0.d[2] = vPos.field0_0x0.d[2];
                    /* end of inlined section */
  vPos.field0_0x0._0_8_ = ZEXT48((uint)vCol3.field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
  uVar9 = (uint)puVar1 & 7;
  puVar10 = (ulong *)(puVar1 + -uVar9);
  *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 |
             (ulong)((uint)vCol3.field0_0x0.d[0] >> (7 - uVar9) * 8);
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
  uVar5 = this_02->fHeader->price;
  sVar16 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                     ((int)&_5Globs_pSimulator->__vtable +
                      (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
  if (sVar16 < (short)uVar5) {
    bVar14 = IsBuildHouseMode__7EGlobal(&_globals);
    bVar14 = !bVar14;
    iVar28 = this->m_bBuyCursor;
  }
  else {
    iVar28 = this->m_bBuyCursor;
  }
  if (iVar28 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
    if (((*(int *)&pEVar18->m_bLocked == 0) || (_globals.Cheats._12_4_ != 0)) && (!bVar14)) {
      pEVar26 = &this->m_BuyPrompt;
                    /* end of inlined section */
      Select__8ERShaderP3ERCi(this->m_pTextLineButtonBevelShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_340 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_33c = 1.0;
                    /* end of inlined section */
      vCol3.field0_0x0.d[1] = vPos.field0_0x0.d[2] - 16.0 / (float)_pGfx->m_yscreen;
      vCol3.field0_0x0.d[0] = vPos.field0_0x0.d[0] - 16.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_e0._12_4_ = 1.0;
      local_e0._8_4_ = (EResourceManager *)0x3f800000;
      local_e0._4_4_ = (char *)0x3f800000;
      local_e0._0_4_ = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vCol3,&local_340,
                 local_e0);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
      SetPos__13EUIObjectNodeRC5EVec3((EUIObjectNode *)pEVar26,&vPos);
      SetPositions__9EUIPrompt(pEVar26);
                    /* end of inlined section */
      Draw__9EUIPromptP3ERC(pEVar26,prc);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      vPos.field0_0x0._0_8_ =
           vPos.field0_0x0._0_8_ & 0xffffffff00000000 |
           (ulong)(uint)(vPos.field0_0x0.d[0] +
                        (this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                        field0_0x0.d[0] + 0.01);
    }
    if (*(int *)&this->m_bShowInfo == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
      if ((*(int *)&pEVar18->m_bLocked == 0) || (_globals.Cheats._12_4_ != 0)) {
        pEVar26 = &this->m_InfoPrompt;
                    /* end of inlined section */
        Select__8ERShaderP3ERCi(this->m_pTextLineButtonBevelShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_340 = 1.0;
        vCol3.field0_0x0.d[0] = 1.0;
        vCol3.field0_0x0.d[1] = 1.0;
        local_334 = 0x3f800000;
                    /* end of inlined section */
        local_e0._4_4_ = (char *)(vPos.field0_0x0.d[2] - 16.0 / (float)_pGfx->m_yscreen);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_338 = 1.0;
                    /* end of inlined section */
        local_e0._0_4_ =
             (EStorable__vtable *)(vPos.field0_0x0.d[0] - 16.0 / (float)_pGfx->m_xscreen);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_33c = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].ClipRect)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_e0,&vCol3,
                   &local_340);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
        SetPos__13EUIObjectNodeRC5EVec3((EUIObjectNode *)pEVar26,&vPos);
        SetPositions__9EUIPrompt(pEVar26);
                    /* end of inlined section */
        Draw__9EUIPromptP3ERC(pEVar26,prc);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        vPos.field0_0x0._0_8_ =
             vPos.field0_0x0._0_8_ & 0xffffffff00000000 |
             (ulong)(uint)(vPos.field0_0x0.d[0] +
                          (this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                          field0_0x0.d[0] + 0.01);
        pEVar21 = this->m_pTextLineButtonBevelShdr;
      }
      else {
        pEVar21 = this->m_pTextLineButtonBevelShdr;
      }
    }
    else {
      pEVar21 = this->m_pTextLineButtonBevelShdr;
    }
    pEVar26 = &this->m_BackPrompt;
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(pEVar21,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_340 = 1.0;
    vCol3.field0_0x0.d[0] = 1.0;
    vCol3.field0_0x0.d[1] = 1.0;
    local_334 = 0x3f800000;
                    /* end of inlined section */
    local_e0._4_4_ = (char *)(vPos.field0_0x0.d[2] - 16.0 / (float)_pGfx->m_yscreen);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_338 = 1.0;
                    /* end of inlined section */
    local_e0._0_4_ = (EStorable__vtable *)(vPos.field0_0x0.d[0] - 16.0 / (float)_pGfx->m_xscreen);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_33c = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_e0,&vCol3,
               &local_340);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
    SetPos__13EUIObjectNodeRC5EVec3((EUIObjectNode *)pEVar26,&vPos);
    SetPositions__9EUIPrompt(pEVar26);
                    /* end of inlined section */
    Draw__9EUIPromptP3ERC(pEVar26,prc);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    vPos.field0_0x0._0_8_ =
         vPos.field0_0x0._0_8_ & 0xffffffff00000000 |
         (ulong)(uint)(vPos.field0_0x0.d[0] +
                      (this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                      field0_0x0.d[0] + 0.01);
    pEVar22 = this->m_pFont;
  }
  else {
    pEVar22 = this->m_pFont;
  }
  SetSize__6ERFontffb(pEVar22,16.0,1.0,true);
  uVar13 = _WHITE.field0_0x0.d[3];
  uVar12 = _WHITE.field0_0x0.d[2];
  uVar11 = _WHITE.field0_0x0.d[1];
  if (this->m_bBuyCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    pEVar22 = this->m_pFont;
    (pEVar22->m_vColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0];
    (pEVar22->m_vColor).field0_0x0.d[1] = uVar11;
    (pEVar22->m_vColor).field0_0x0.d[2] = uVar12;
    (pEVar22->m_vColor).field0_0x0.d[3] = uVar13;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_e0._12_4_ = _WHITE.field0_0x0.d[3] * 0.65;
    local_e0._4_4_ = (char *)(_WHITE.field0_0x0.d[1] * 0.65);
    local_e0._8_4_ = (EResourceManager *)(_WHITE.field0_0x0.d[2] * 0.65);
    pEVar22 = this->m_pFont;
    local_e0._0_4_ = (EStorable__vtable *)(_WHITE.field0_0x0.d[0] * 0.65);
                    /* end of inlined section */
    (pEVar22->m_vColor).field0_0x0.d[0] = (float)local_e0._0_4_;
    (pEVar22->m_vColor).field0_0x0.d[1] = (float)local_e0._4_4_;
    (pEVar22->m_vColor).field0_0x0.d[2] = (float)local_e0._8_4_;
    (pEVar22->m_vColor).field0_0x0.d[3] = local_e0._12_4_;
  }
                    /* end of inlined section */
  Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  uVar5 = this_02->fHeader->price;
  sVar16 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                     ((int)&_5Globs_pSimulator->__vtable +
                      (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
  if (sVar16 < (short)uVar5) {
    bVar14 = IsBuildHouseMode__7EGlobal(&_globals);
    pEVar22 = this->m_pFont;
    if (bVar14) goto LAB_001a626c;
    SetSize__6ERFontffb(pEVar22,16.0,1.0,true);
    uVar13 = _RED.field0_0x0.d[3];
    uVar12 = _RED.field0_0x0.d[2];
    uVar11 = _RED.field0_0x0.d[1];
    if (this->m_bBuyCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar22 = this->m_pFont;
      (pEVar22->m_vColor).field0_0x0.d[0] = _RED.field0_0x0.d[0];
      (pEVar22->m_vColor).field0_0x0.d[1] = uVar11;
      (pEVar22->m_vColor).field0_0x0.d[2] = uVar12;
      (pEVar22->m_vColor).field0_0x0.d[3] = uVar13;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_e0._0_4_ = (EStorable__vtable *)(_RED.field0_0x0.d[0] * 0.65);
      local_e0._12_4_ = _RED.field0_0x0.d[3] * 0.65;
      local_e0._4_4_ = (char *)(_RED.field0_0x0.d[1] * 0.65);
      pEVar22 = this->m_pFont;
      local_e0._8_4_ = (EResourceManager *)(_RED.field0_0x0.d[2] * 0.65);
                    /* end of inlined section */
      (pEVar22->m_vColor).field0_0x0.d[0] = (float)local_e0._0_4_;
      (pEVar22->m_vColor).field0_0x0.d[1] = (float)local_e0._4_4_;
      (pEVar22->m_vColor).field0_0x0.d[2] = (float)local_e0._8_4_;
      (pEVar22->m_vColor).field0_0x0.d[3] = local_e0._12_4_;
    }
                    /* end of inlined section */
    Select__6ERFontP3ERC(this->m_pFont,prc);
    iVar28 = *(int *)&pEVar18->m_bLocked;
  }
  else {
    pEVar22 = this->m_pFont;
LAB_001a626c:
    SetSize__6ERFontffb(pEVar22,16.0,1.0,true);
    uVar13 = _WHITE.field0_0x0.d[3];
    uVar12 = _WHITE.field0_0x0.d[2];
    uVar11 = _WHITE.field0_0x0.d[1];
    if (this->m_bBuyCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar22 = this->m_pFont;
      (pEVar22->m_vColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0];
      (pEVar22->m_vColor).field0_0x0.d[1] = uVar11;
      (pEVar22->m_vColor).field0_0x0.d[2] = uVar12;
      (pEVar22->m_vColor).field0_0x0.d[3] = uVar13;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_e0._12_4_ = _WHITE.field0_0x0.d[3] * 0.65;
      local_e0._4_4_ = (char *)(_WHITE.field0_0x0.d[1] * 0.65);
      local_e0._8_4_ = (EResourceManager *)(_WHITE.field0_0x0.d[2] * 0.65);
      pEVar22 = this->m_pFont;
      local_e0._0_4_ = (EStorable__vtable *)(_WHITE.field0_0x0.d[0] * 0.65);
                    /* end of inlined section */
      (pEVar22->m_vColor).field0_0x0.d[0] = (float)local_e0._0_4_;
      (pEVar22->m_vColor).field0_0x0.d[1] = (float)local_e0._4_4_;
      (pEVar22->m_vColor).field0_0x0.d[2] = (float)local_e0._8_4_;
      (pEVar22->m_vColor).field0_0x0.d[3] = local_e0._12_4_;
    }
                    /* end of inlined section */
    Select__6ERFontP3ERC(this->m_pFont,prc);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
    iVar28 = *(int *)&pEVar18->m_bLocked;
  }
                    /* end of inlined section */
  if ((iVar28 == 0) || (_globals.Cheats._12_4_ != 0)) {
    erase__13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
    GetMoneyString__FiRt12StackString21Ui256((int)(short)this_02->fHeader->price,&sPrice);
    pEVar22 = this->m_pFont;
    psVar20 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)local_e0,pEVar22,SUB41(psVar20,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
    vCol1.field0_0x0._0_8_ = CONCAT44(local_e0._4_4_,local_e0._0_4_);
    puVar1 = (undefined *)((int)&vCol1.field0_0x0 + 7);
    uVar9 = (uint)puVar1 & 7;
    puVar10 = (ulong *)(puVar1 + -uVar9);
    *puVar10 = *puVar10 & -1L << (uVar9 + 1) * 8 | (ulong)vCol1.field0_0x0._0_8_ >> (7 - uVar9) * 8;
    psVar20 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    vCol3.field0_0x0.d[0] = (_13EUIObjectNode_SAFE_RIGHT - 0.0125) - vCol1.field0_0x0.d[0];
    vCol3.field0_0x0.d[1] = _pbm_text_line_y + 12.0 / (float)_pGfx->m_yscreen;
    local_e0._0_4_ = (EStorable__vtable *)vCol3.field0_0x0.d[0];
    local_e0._4_4_ = (char *)vCol3.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,psVar20,true,(EVec2 *)&vCol3,E_FAX_LEFT,E_FAY_CENTER,(EVec2 *)0x0);
                    /* end of inlined section */
    iVar28 = *(int *)&this->m_bShowInfo;
  }
  else {
    iVar28 = *(int *)&this->m_bShowInfo;
  }
LAB_001a691c:
  if (iVar28 != 0) {
    pEVar8 = (this->m_pItemInfo->field0_0x0).__vtable;
    (*(code *)pEVar8->Message)
              ((int)&(this->m_pItemInfo->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar8->SetBoxDims,prc);
  }
  return;
}

void EPauseBuyMenu::Update() {
	ObjSelector *pSelMaster;
	ObjSelector *pSelRes;
	ObjSelector *pSelRes2;
	bool bLocked;
	EUIObjectMover HermiteBlend;
	bool bReady;
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
	EUIObjectMover *this;
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
	EUIObjectMover *this;
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
	EUIObjectMover *this;
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
	EUIObjectNode *this;
	int i;
	void *result;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	float StickX;
	float StickY;
	EVec3 vStick;
	
  undefined *puVar1;
  byte bVar2;
  uchar uVar3;
  uint uVar4;
  EUIVirtualCtrl__vtable *pEVar5;
  EUIObjectNode *pEVar6;
  EUIObjectNode__vtable *pEVar7;
  ulong *puVar8;
  bool bVar9;
  uint uVar10;
  EPauseCategoryMenuItem *pEVar11;
  EPauseItemInfo *pEVar12;
  ESimsCam *pEVar13;
  ulong uVar14;
  long lVar15;
  EPauseScrollMenu *this_00;
  EPauseScrollMenu *this_01;
  EPauseScrollMenu *this_02;
  EPauseScrollMenu *this_03;
  EPauseCategoryMenu *pEVar16;
  int iVar17;
  ObjSelector *pSel;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  EUIObjectMover HermiteBlend;
  EVec3 vStick;
  ObjSelector *pSelMaster;
  ObjSelector *pSelRes2;
  bool bLocked;
  
  pSel = (ObjSelector *)0x0;
  pSelMaster = (ObjSelector *)0x0;
  bVar2 = this->m_nDisplayMode;
  pSelRes2 = (ObjSelector *)0x0;
  _bLocked = 0;
  if ((bVar2 - 1 < 4) &&
     (fVar18 = this->m_fAnimationTime - _dt, this->m_fAnimationTime = fVar18, fVar18 <= 0.0)) {
    this->m_fAnimationTime = 0.0;
                    /* end of inlined section */
    if ((bVar2 == 1) || (bVar2 == 2)) {
      this->m_nDisplayMode = '\0';
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
      _11EPausePanel_m_pDPadUp = _7DPadWin_m_pUpShdr;
      _11EPausePanel_m_pDPadDown = _7DPadWin_m_pDownShdr;
      _11EPausePanel_m_pDPadLeft = _7DPadWin_m_pLeftShdr;
      _11EPausePanel_m_pDPadRight = _7DPadWin_m_pRightShdr;
                    /* end of inlined section */
    }
    else if (bVar2 == 3) {
      this->m_nDisplayMode = '\x01';
      this->m_fAnimationTime = 0.25;
      pEVar6 = (this->field0_0x0).field0_0x0.m_pParent;
      pEVar7 = pEVar6->__vtable;
      (*(code *)pEVar7[1].EUIObjectNode)
                ((int)&(pEVar6->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)(pEVar7 + 1),0,
                 0x15);
    }
    else if (bVar2 == 4) {
      bVar9 = false;
      if (*(int *)&this->m_bWaitForPreload == 0) {
        bVar9 = true;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        lVar15 = (*(code *)_5Globs_pObjectFolder->__vtable[1].ResumeObjectFiles)
                           ((int)&_5Globs_pObjectFolder->__vtable +
                            (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].SuspendObjectFiles,
                            this->m_pPreloadSelector,0);
        if (lVar15 != 0) {
          bVar9 = true;
          *(undefined4 *)&this->m_bWaitForPreload = 0;
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
          __16EResourceManager_m_bTraceEnabled = 1;
                    /* end of inlined section */
        }
      }
      if (bVar9) {
        *(undefined4 *)&this->m_bListenToStick = 0;
        this->m_nDisplayMode = '\x05';
        this->m_fAnimationTime = 0.25;
        SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this,4,false);
        UpdateBuyCursorFlag__13EPauseBuyMenub(this,true);
        if (this->m_pPreloadSelector != (ObjSelector *)0x0) {
          SetCursorObject__11ESimsCursorP11ObjSelector
                    ((ESimsCursor__15_1743 *)_globals._pCursor[_globals.m_whichPlayerPaused],
                     this->m_pPreloadSelector);
        }
        Message__7EGlobalPvUi(&_globals,(void *)0x0,0x24);
      }
    }
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  fVar18 = 0.0;
                    /* end of inlined section */
  uVar3 = this->m_nDisplayMode;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
  if (uVar3 == '\x03') {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
    fVar19 = 0.25 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    if (0.0 <= fVar19) {
      fVar18 = (float)((int)fVar19 * (uint)(fVar19 < 0.25) | (uint)(fVar19 >= 0.25) * 0x3e800000);
    }
    fVar20 = (this->m_vSidePosEnd).field0_0x0.d[0];
    fVar19 = 1.0 - (0.25 - fVar18) / 0.25;
    fVar19 = -fVar19 * fVar19 * fVar19 + (fVar19 + fVar19) * fVar19;
    uVar14 = CONCAT44((this->m_vSidePosEnd).field0_0x0.d[1] +
                      ((this->m_vSidePosStart).field0_0x0.d[1] -
                      (this->m_vSidePosEnd).field0_0x0.d[1]) * fVar19,
                      fVar20 + ((this->m_vSidePosStart).field0_0x0.d[0] - fVar20) * fVar19);
    puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar10);
    *puVar8 = *puVar8 & -1L << (uVar10 + 1) * 8 | uVar14 >> (7 - uVar10) * 8;
    uVar10 = (uint)&this->m_vSidePos & 7;
    puVar8 = (ulong *)((int)&this->m_vSidePos - uVar10);
    *puVar8 = uVar14 << uVar10 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* end of inlined section */
    fVar19 = (this->m_vSidePosStart).field0_0x0.d[0];
    if ((this->m_vSidePos).field0_0x0.d[0] < fVar19) {
      (this->m_vSidePos).field0_0x0.d[0] = fVar19;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    fVar20 = (this->m_vBottomPosEnd).field0_0x0.d[0];
    fVar19 = (this->m_vBottomPosStart).field0_0x0.d[0] - fVar20;
    fVar21 = (this->m_vBottomPosStart).field0_0x0.d[1] - (this->m_vBottomPosEnd).field0_0x0.d[1];
    fVar18 = 1.0 - (0.25 - fVar18) / 0.25;
                    /* end of inlined section */
    fVar18 = -fVar18 * fVar18 * fVar18 + (fVar18 + fVar18) * fVar18;
LAB_001a72f8:
    uVar14 = CONCAT44((this->m_vBottomPosEnd).field0_0x0.d[1] + fVar21 * fVar18,
                      fVar20 + fVar19 * fVar18);
    puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
    uVar10 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar10);
    *puVar8 = *puVar8 & -1L << (uVar10 + 1) * 8 | uVar14 >> (7 - uVar10) * 8;
    uVar10 = (uint)&this->m_vBottomPos & 7;
    puVar8 = (ulong *)((int)&this->m_vBottomPos - uVar10);
    *puVar8 = uVar14 << uVar10 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* end of inlined section */
    fVar18 = (this->m_vBottomPosStart).field0_0x0.d[1];
    bVar9 = fVar18 < (this->m_vBottomPos).field0_0x0.d[1];
code_r0x001a733c:
    if (bVar9) {
      (this->m_vBottomPos).field0_0x0.d[1] = fVar18;
LAB_001a7394:
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      uVar10 = (this->field0_0x0).field0_0x0.m_flags;
    }
    else {
      uVar10 = (this->field0_0x0).field0_0x0.m_flags;
    }
  }
  else {
    if (uVar3 == '\x01') {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar19 = 0.25 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      if (0.0 <= fVar19) {
        fVar18 = (float)((int)fVar19 * (uint)(fVar19 < 0.25) | (uint)(fVar19 >= 0.25) * 0x3e800000);
      }
      fVar20 = (this->m_vSidePosStart).field0_0x0.d[0];
      fVar19 = 1.0 - (0.25 - fVar18) / 0.25;
      fVar19 = -fVar19 * fVar19 * fVar19 + fVar19 * fVar19 + fVar19;
      uVar14 = CONCAT44((this->m_vSidePosStart).field0_0x0.d[1] +
                        ((this->m_vSidePosEnd).field0_0x0.d[1] -
                        (this->m_vSidePosStart).field0_0x0.d[1]) * fVar19,
                        fVar20 + ((this->m_vSidePosEnd).field0_0x0.d[0] - fVar20) * fVar19);
      puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar10);
      *puVar8 = *puVar8 & -1L << (uVar10 + 1) * 8 | uVar14 >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vSidePos & 7;
      puVar8 = (ulong *)((int)&this->m_vSidePos - uVar10);
      *puVar8 = uVar14 << uVar10 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* end of inlined section */
      fVar19 = (this->m_vSidePosEnd).field0_0x0.d[0];
      if (fVar19 < (this->m_vSidePos).field0_0x0.d[0]) {
        (this->m_vSidePos).field0_0x0.d[0] = fVar19;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      fVar19 = (this->m_vBottomPosStart).field0_0x0.d[0];
      fVar18 = 1.0 - (0.25 - fVar18) / 0.25;
      fVar18 = -fVar18 * fVar18 * fVar18 + fVar18 * fVar18 + fVar18;
      uVar14 = CONCAT44((this->m_vBottomPosStart).field0_0x0.d[1] +
                        ((this->m_vBottomPosEnd).field0_0x0.d[1] -
                        (this->m_vBottomPosStart).field0_0x0.d[1]) * fVar18,
                        fVar19 + ((this->m_vBottomPosEnd).field0_0x0.d[0] - fVar19) * fVar18);
      puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar10);
      *puVar8 = *puVar8 & -1L << (uVar10 + 1) * 8 | uVar14 >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vBottomPos & 7;
      puVar8 = (ulong *)((int)&this->m_vBottomPos - uVar10);
      *puVar8 = uVar14 << uVar10 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* end of inlined section */
      fVar18 = (this->m_vBottomPosEnd).field0_0x0.d[1];
      bVar9 = (this->m_vBottomPos).field0_0x0.d[1] < fVar18;
      goto code_r0x001a733c;
    }
    if (uVar3 == '\x02') {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar19 = 0.25 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      if (0.0 <= fVar19) {
        fVar18 = (float)((int)fVar19 * (uint)(fVar19 < 0.25) | (uint)(fVar19 >= 0.25) * 0x3e800000);
      }
      fVar19 = (this->m_vSidePosStart).field0_0x0.d[0];
      fVar18 = 1.0 - (0.25 - fVar18) / 0.25;
      fVar18 = -fVar18 * fVar18 * fVar18 + fVar18 * fVar18 + fVar18;
      uVar14 = CONCAT44((this->m_vSidePosStart).field0_0x0.d[1] +
                        ((this->m_vSidePosEnd).field0_0x0.d[1] -
                        (this->m_vSidePosStart).field0_0x0.d[1]) * fVar18,
                        fVar19 + ((this->m_vSidePosEnd).field0_0x0.d[0] - fVar19) * fVar18);
      puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar10);
      *puVar8 = *puVar8 & -1L << (uVar10 + 1) * 8 | uVar14 >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vSidePos & 7;
      puVar8 = (ulong *)((int)&this->m_vSidePos - uVar10);
      *puVar8 = uVar14 << uVar10 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* end of inlined section */
      fVar18 = (this->m_vSidePosEnd).field0_0x0.d[0];
      if (fVar18 < (this->m_vSidePos).field0_0x0.d[0]) {
        (this->m_vSidePos).field0_0x0.d[0] = fVar18;
      }
      fVar18 = this->m_fAnimationTime;
      if (0.125 <= fVar18) {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
        fVar18 = 0.25 - fVar18;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
        if (0.0 <= fVar18) {
                    /* end of inlined section */
          fVar18 = (float)((int)fVar18 * (uint)(fVar18 < 0.125) |
                          (uint)(fVar18 >= 0.125) * 0x3e000000);
        }
        else {
LAB_001a7288:
          fVar18 = 0.0;
        }
LAB_001a7294:
        fVar20 = (this->m_vBottomPosEnd).field0_0x0.d[0];
        fVar19 = (this->m_vBottomPosStart).field0_0x0.d[0] - fVar20;
        fVar21 = (this->m_vBottomPosStart).field0_0x0.d[1] - (this->m_vBottomPosEnd).field0_0x0.d[1]
        ;
        fVar18 = 1.0 - (0.125 - fVar18) / 0.125;
        fVar18 = -fVar18 * fVar18 * fVar18 + (fVar18 + fVar18) * fVar18;
        goto LAB_001a72f8;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar18 = 0.125 - fVar18;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      fVar19 = 0.0;
      if (0.0 <= fVar18) {
        fVar19 = (float)((int)fVar18 * (uint)(fVar18 < 0.125) | (uint)(fVar18 >= 0.125) * 0x3e000000
                        );
      }
      fVar20 = (this->m_vBottomPosStart).field0_0x0.d[0];
      fVar18 = 1.0 - (0.125 - fVar19) / 0.125;
      fVar18 = -fVar18 * fVar18 * fVar18 + fVar18 * fVar18 + fVar18;
      uVar14 = CONCAT44((this->m_vBottomPosStart).field0_0x0.d[1] +
                        ((this->m_vBottomPosEnd).field0_0x0.d[1] -
                        (this->m_vBottomPosStart).field0_0x0.d[1]) * fVar18,
                        fVar20 + ((this->m_vBottomPosEnd).field0_0x0.d[0] - fVar20) * fVar18);
      puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar10);
      *puVar8 = *puVar8 & -1L << (uVar10 + 1) * 8 | uVar14 >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vBottomPos & 7;
      puVar8 = (ulong *)((int)&this->m_vBottomPos - uVar10);
      *puVar8 = uVar14 << uVar10 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* end of inlined section */
      fVar18 = (this->m_vBottomPosEnd).field0_0x0.d[1];
      bVar9 = (this->m_vBottomPos).field0_0x0.d[1] < fVar18;
      goto code_r0x001a733c;
    }
    if (uVar3 == '\x04') {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar19 = 0.25 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      if (0.0 <= fVar19) {
        fVar18 = (float)((int)fVar19 * (uint)(fVar19 < 0.25) | (uint)(fVar19 >= 0.25) * 0x3e800000);
      }
      fVar19 = (this->m_vSidePosEnd).field0_0x0.d[0];
      fVar18 = 1.0 - (0.25 - fVar18) / 0.25;
      fVar18 = -fVar18 * fVar18 * fVar18 + (fVar18 + fVar18) * fVar18;
      uVar14 = CONCAT44((this->m_vSidePosEnd).field0_0x0.d[1] +
                        ((this->m_vSidePosStart).field0_0x0.d[1] -
                        (this->m_vSidePosEnd).field0_0x0.d[1]) * fVar18,
                        fVar19 + ((this->m_vSidePosStart).field0_0x0.d[0] - fVar19) * fVar18);
      puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar10);
      *puVar8 = *puVar8 & -1L << (uVar10 + 1) * 8 | uVar14 >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vSidePos & 7;
      puVar8 = (ulong *)((int)&this->m_vSidePos - uVar10);
      *puVar8 = uVar14 << uVar10 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* end of inlined section */
      fVar18 = (this->m_vSidePosStart).field0_0x0.d[0];
      if ((this->m_vSidePos).field0_0x0.d[0] < fVar18) {
        (this->m_vSidePos).field0_0x0.d[0] = fVar18;
      }
      fVar18 = this->m_fAnimationTime;
      if (0.125 <= fVar18) {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
        fVar18 = 0.25 - fVar18;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
        if (fVar18 < 0.0) goto LAB_001a7288;
        fVar18 = (float)((int)fVar18 * (uint)(fVar18 < 0.125) | (uint)(fVar18 >= 0.125) * 0x3e000000
                        );
        goto LAB_001a7294;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar18 = 0.125 - fVar18;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      fVar19 = 0.0;
      if (0.0 <= fVar18) {
        fVar19 = (float)((int)fVar18 * (uint)(fVar18 < 0.125) | (uint)(fVar18 >= 0.125) * 0x3e000000
                        );
      }
      fVar20 = (this->m_vBottomPosStart).field0_0x0.d[0];
      fVar18 = 1.0 - (0.125 - fVar19) / 0.125;
      fVar18 = -fVar18 * fVar18 * fVar18 + fVar18 * fVar18 + fVar18;
      uVar14 = CONCAT44((this->m_vBottomPosStart).field0_0x0.d[1] +
                        ((this->m_vBottomPosEnd).field0_0x0.d[1] -
                        (this->m_vBottomPosStart).field0_0x0.d[1]) * fVar18,
                        fVar20 + ((this->m_vBottomPosEnd).field0_0x0.d[0] - fVar20) * fVar18);
      puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar10);
      *puVar8 = *puVar8 & -1L << (uVar10 + 1) * 8 | uVar14 >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vBottomPos & 7;
      puVar8 = (ulong *)((int)&this->m_vBottomPos - uVar10);
      *puVar8 = uVar14 << uVar10 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* end of inlined section */
      fVar18 = (this->m_vBottomPosEnd).field0_0x0.d[1];
      bVar9 = (this->m_vBottomPos).field0_0x0.d[1] < fVar18;
      goto code_r0x001a733c;
    }
    if (uVar3 == '\x05') {
      puVar1 = (undefined *)((int)&(this->m_vSidePosStart).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      uVar4 = (uint)&this->m_vSidePosStart & 7;
      uVar14 = (*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
               0xffffffffffffffffU >> (uVar10 + 1) * 8 & 5) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&this->m_vSidePosStart - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar10);
      *puVar8 = *puVar8 & -1L << (uVar10 + 1) * 8 | uVar14 >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vSidePos & 7;
      puVar8 = (ulong *)((int)&this->m_vSidePos - uVar10);
      *puVar8 = uVar14 << uVar10 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
LAB_001a7384:
      puVar1 = (undefined *)((int)&(this->m_vBottomPosEnd).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      uVar4 = (uint)&this->m_vBottomPosEnd & 7;
      uVar14 = (*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
               uVar14 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&this->m_vBottomPosEnd - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar10);
      *puVar8 = *puVar8 & -1L << (uVar10 + 1) * 8 | uVar14 >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vBottomPos & 7;
      puVar8 = (ulong *)((int)&this->m_vBottomPos - uVar10);
      *puVar8 = uVar14 << uVar10 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      goto LAB_001a7394;
    }
    if (uVar3 == '\0') {
      puVar1 = (undefined *)((int)&(this->m_vSidePosEnd).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      uVar4 = (uint)&this->m_vSidePosEnd & 7;
      uVar14 = (*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
               0xffffffffffffffffU >> (uVar10 + 1) * 8 & 5) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&this->m_vSidePosEnd - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
      uVar10 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar10);
      *puVar8 = *puVar8 & -1L << (uVar10 + 1) * 8 | uVar14 >> (7 - uVar10) * 8;
      uVar10 = (uint)&this->m_vSidePos & 7;
      puVar8 = (ulong *)((int)&this->m_vSidePos - uVar10);
      *puVar8 = uVar14 << uVar10 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      goto LAB_001a7384;
    }
    uVar10 = (this->field0_0x0).field0_0x0.m_flags;
  }
                    /* end of inlined section */
  if (((int)uVar10 >> 2 & 1U) == 0) {
    iVar17 = *(int *)&this->m_bShowInfo;
  }
  else {
    if (this->m_nDisplayMode == '\0') {
      pEVar5 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar15 = (*(code *)pEVar5[1].GetBut)
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar5[1].ClearBut + -4
                          ,_globals.m_whichPlayerPaused,0x10);
      if (lVar15 == 0) {
        pEVar5 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar15 = (*(code *)pEVar5[1].GetBut)
                           ((int)(_globals.m_pCtrlPad)->m_pressed +
                            *(short *)&pEVar5[1].ClearBut + -4,_globals.m_whichPlayerPaused,0x80);
        this_01 = &this->m_Categories[0].m_menu;
        if (lVar15 != 0) {
          pEVar16 = this->m_Categories;
          iVar17 = 7;
          this_00 = this_01;
          this_02 = this_01;
          this_03 = this_01;
          do {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
            if (((int)(pEVar16->field0_0x0).field0_0x0.m_flags >> 3 & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
              pEVar11 = GetSelectedItem__16EPauseScrollMenu(this_02);
              pSelMaster = pEVar11->m_pMasterSel;
              pEVar11 = GetSelectedItem__16EPauseScrollMenu(this_00);
              pSel = pEVar11->m_pResSel;
              pEVar11 = GetSelectedItem__16EPauseScrollMenu(this_03);
              pSelRes2 = pEVar11->m_pResSel2;
              pEVar11 = GetSelectedItem__16EPauseScrollMenu(this_01);
              _bLocked = *(int *)&pEVar11->m_bLocked;
                    /* end of inlined section */
            }
            this_01 = (EPauseScrollMenu *)&this_01[1].field0_0x0.m_pFirstVis;
            pEVar16 = pEVar16 + 1;
            this_03 = (EPauseScrollMenu *)&this_03[1].field0_0x0.m_pFirstVis;
            this_00 = (EPauseScrollMenu *)&this_00[1].field0_0x0.m_pFirstVis;
            iVar17 = iVar17 + -1;
            this_02 = (EPauseScrollMenu *)&this_02[1].field0_0x0.m_pFirstVis;
          } while (-1 < iVar17);
          if ((_globals.Cheats._12_4_ == 0) && (_bLocked != 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
            PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
          }
          else {
            pEVar12 = (EPauseItemInfo *)_memmanAlloc__FUiUi(0xd50,0x10);
            memset(pEVar12,0,0xd50);
                    /* end of inlined section */
            pEVar12 = __14EPauseItemInfoP13EUIObjectNode(pEVar12,(EUIObjectNode *)this);
            this->m_pItemInfo = pEVar12;
            SetMasterSelector__14EPauseItemInfoP11ObjSelector(pEVar12,pSelMaster);
            if (pSelRes2 == (ObjSelector *)0x0) {
              SetResSelector__14EPauseItemInfoP11ObjSelectorT1
                        (this->m_pItemInfo,pSel,(ObjSelector *)0x0);
            }
            else {
              SetResSelector__14EPauseItemInfoP11ObjSelectorT1(this->m_pItemInfo,pSel,pSelRes2);
            }
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
            _11EPausePanel_m_pDPadUp = _7DPadWin_m_pUpShdr;
            _11EPausePanel_m_pDPadDown = _7DPadWin_m_pDownShdr;
            _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
            _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
                    /* end of inlined section */
            SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this,4,false);
            *(undefined4 *)&this->m_bShowInfo = 1;
          }
        }
                    /* end of inlined section */
        iVar17 = *(int *)&this->m_bShowInfo;
      }
      else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        if (_13EUIObjectNode_m_uiSfxBack != (undefined1 *)0x0) {
          (*(code *)_13EUIObjectNode_m_uiSfxBack)();
        }
                    /* end of inlined section */
        this->m_nDisplayMode = '\x03';
        this->m_fAnimationTime = 0.25;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
        _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
        _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
        _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
        _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
                    /* end of inlined section */
        iVar17 = *(int *)&this->m_bShowInfo;
      }
      if ((iVar17 == 0) && (this->m_nDisplayMode == '\0')) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
        if ((this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead == (ENodeListNode *)0x0
           ) {
          return;
        }
                    /* end of inlined section */
        pEVar6 = (this->field0_0x0).m_pCurOpt;
        pEVar7 = pEVar6->__vtable;
        (*(code *)pEVar7->SetBoxDims)
                  ((int)&(pEVar6->m_ChildList).field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar7->SetPos);
        ProcessUserInput__7EUIMenu(&this->field0_0x0);
        if (((this->field0_0x0).field0_0x0.m_flags & 0x40) == 0) {
          uVar3 = this->m_nDisplayMode;
        }
        else {
          RemoveMarkedChildren__13EUIObjectNode((EUIObjectNode *)this);
          uVar3 = this->m_nDisplayMode;
        }
        if (uVar3 == '\0') {
          fVar18 = GetStick__11EControllerii(_ctrlPads[_globals.m_whichPlayerPaused],0,0);
          fVar19 = GetStick__11EControllerii(_ctrlPads[_globals.m_whichPlayerPaused],0,1);
          fVar19 = ABS(fVar19) * fVar19;
          pEVar13 = GetCam__7EGlobal(&_globals);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
          fVar18 = fVar18 * ABS(fVar18) * pEVar13->m_transSpeed * _dt;
          pEVar13 = GetCam__7EGlobal(&_globals);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* end of inlined section */
          if ((fVar18 == 0.0) && (fVar19 * pEVar13->m_transSpeed * _dt == 0.0)) {
            *(undefined4 *)&this->m_bListenToStick = 1;
          }
          else if (*(int *)&this->m_bListenToStick != 0) {
            this->m_nDisplayMode = '\x04';
            this->m_fAnimationTime = 0.25;
            this->m_pPreloadSelector = (ObjSelector *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
            _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
            _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
            _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
            _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
                    /* end of inlined section */
            *(undefined4 *)&this->m_bListenToStick = 0;
          }
        }
      }
      goto LAB_001a7754;
    }
    iVar17 = *(int *)&this->m_bShowInfo;
  }
  if (iVar17 != 0) {
    pEVar7 = (this->m_pItemInfo->field0_0x0).__vtable;
    (*(code *)pEVar7->SetBoxDims)
              ((int)&(this->m_pItemInfo->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar7->SetPos);
  }
LAB_001a7754:
  Update__13ESlideTextBox(&this->m_SlideTextBox);
  if (*(int *)&this->m_bDeleteInfo == 0) {
    iVar17 = *(int *)&this->m_bCleanUpModelReference;
  }
  else {
    pEVar12 = this->m_pItemInfo;
    if (pEVar12 != (EPauseItemInfo *)0x0) {
      pEVar7 = (pEVar12->field0_0x0).__vtable;
      (*(code *)pEVar7->Draw)
                ((int)&(pEVar12->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar7->Update,3);
    }
    this->m_pItemInfo = (EPauseItemInfo *)0x0;
    *(undefined4 *)&this->m_bDeleteInfo = 0;
    iVar17 = *(int *)&this->m_bCleanUpModelReference;
  }
  if (iVar17 != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pObjectFolder->__vtable->GetLeadSelector)
              ((int)&_5Globs_pObjectFolder->__vtable +
               (int)*(short *)&_5Globs_pObjectFolder->__vtable->GetSubTileSelector);
    *(undefined4 *)&this->m_bCleanUpModelReference = 0;
  }
  this->m_PulseAccumulator = this->m_PulseAccumulator + _dt * 5.0;
                    /* end of inlined section */
  return;
}

void EPauseBuyMenu::NextItem() {
  ListForward__7EUIMenub(&this->field0_0x0,true);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
  _11EPausePanel_m_ItemInfoTimer = 2.0;
  return;
}

void EPauseBuyMenu::PrevItem() {
  ListBackward__7EUIMenub(&this->field0_0x0,true);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
  _11EPausePanel_m_ItemInfoTimer = 2.0;
  return;
}

void EPauseBuyMenu::Message(EUIObjectNode *pChild, u32 messId) {
	int cost;
	ObjSelector *pSel;
	bool bRoom;
	bool bLocked;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	int i;
	EPauseItemInfo *this;
	ObjSelector *this;
	
  byte bVar1;
  ushort uVar2;
  ObjectFolder__vtable *pOVar3;
  ObjectFolder *pOVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  ObjSelector *pOVar8;
  EPauseCategoryMenuItem *pEVar9;
  int iVar10;
  EPauseCategoryMenu *pEVar11;
  EPauseScrollMenu *this_00;
  int iVar12;
  
  iVar10 = 0;
  if (messId == 0x1b) {
                    /* end of inlined section */
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this,4,true);
    _11EPausePanel_m_pDPadRight = _7DPadWin_m_pRightShdr;
    _11EPausePanel_m_pDPadLeft = _7DPadWin_m_pLeftShdr;
    _11EPausePanel_m_pDPadDown = _7DPadWin_m_pDownShdr;
    _11EPausePanel_m_pDPadUp = _7DPadWin_m_pUpShdr;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
                    /* end of inlined section */
    *(undefined4 *)&this->m_bCleanUpModelReference = 1;
    *(undefined4 *)&this->m_bDeleteInfo = 1;
    *(undefined4 *)&this->m_bShowInfo = 0;
    return;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
                    /* end of inlined section */
  }
  if (messId < 0x1c) {
    if (messId != 0x16) {
      return;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
    if ((_globals.Cheats._12_4_ != 0) || (pChild[2].m_id == 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
      uVar2 = ((ObjSelector *)pChild[1].__vtable)->fHeader->price;
      bVar5 = GetAffordable__15EMemoryMeterWinP11ObjSelector
                        (&(_globals._pPanel)->m_MemoryMeterWin,(ObjSelector *)pChild[1].__vtable);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      if (((_globals.Cheats._4_4_ != 0) ||
          ((bVar6 = IsBuildHouseMode__7EGlobal(&_globals), bVar6 ||
           (sVar7 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                              ((int)&_5Globs_pSimulator->__vtable +
                               (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue),
           (short)uVar2 <= sVar7)))) && (bVar5)) {
        if (_globals.Cheats._4_4_ == 0) {
          bVar5 = IsBuildHouseMode__7EGlobal(&_globals);
          if (bVar5) {
            pOVar8 = (ObjSelector *)pChild[1].__vtable;
          }
          else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
            (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,6,uVar2);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
            pOVar8 = (ObjSelector *)pChild[1].__vtable;
          }
        }
        else {
          pOVar8 = (ObjSelector *)pChild[1].__vtable;
        }
                    /* end of inlined section */
        pOVar4 = _5Globs_pObjectFolder;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this->m_pPreloadSelector = pOVar8;
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
        __16EResourceManager_m_bTraceEnabled = 0;
                    /* end of inlined section */
        pOVar3 = pOVar4->__vtable;
        (*(code *)pOVar3[1].ResumeObjectFiles)
                  ((int)&pOVar4->__vtable + (int)*(short *)&pOVar3[1].SuspendObjectFiles,
                   pChild[1].__vtable,0);
        this->m_nDisplayMode = '\x04';
        this->m_fAnimationTime = 0.25;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
        *(undefined4 *)&this->m_bWaitForPreload = 1;
                    /* end of inlined section */
        goto LAB_001a7bc4;
      }
    }
LAB_001a7ac4:
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
  }
  else {
    if (messId != 0x1c) {
      return;
    }
    this_00 = &this->m_Categories[0].m_menu;
    pEVar11 = this->m_Categories;
    iVar12 = 7;
    do {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)(pEVar11->field0_0x0).field0_0x0.m_flags >> 3 & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
        pEVar9 = GetSelectedItem__16EPauseScrollMenu(this_00);
        iVar10 = *(int *)&pEVar9->m_bLocked;
                    /* end of inlined section */
      }
      this_00 = (EPauseScrollMenu *)&this_00[1].field0_0x0.m_pFirstVis;
      iVar12 = iVar12 + -1;
      pEVar11 = pEVar11 + 1;
    } while (-1 < iVar12);
    if (_globals.Cheats._12_4_ == 0) {
      if (iVar10 != 0) goto LAB_001a7ac4;
      bVar1 = *(byte *)((int)&pChild[0x30].m_ChildList.field0_0x0.m_l.m_pTail + 2);
    }
    else {
      bVar1 = *(byte *)((int)&pChild[0x30].m_ChildList.field0_0x0.m_l.m_pTail + 2);
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseiteminfo.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseiteminfo.h */
    pOVar8 = *(ObjSelector **)((int)&pChild[2].m_WDH.field0_0x0 + (uint)bVar1 * 4 + 4);
                    /* end of inlined section */
    uVar2 = pOVar8->fHeader->price;
    bVar5 = GetAffordable__15EMemoryMeterWinP11ObjSelector
                      (&(_globals._pPanel)->m_MemoryMeterWin,pOVar8);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    if ((((_globals.Cheats._4_4_ == 0) && (bVar6 = IsBuildHouseMode__7EGlobal(&_globals), !bVar6))
        && (sVar7 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                              ((int)&_5Globs_pSimulator->__vtable +
                               (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue),
           sVar7 < (short)uVar2)) || (!bVar5)) {
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
      return;
                    /* end of inlined section */
    }
    *(undefined4 *)&this->m_bShowInfo = 0;
    *(undefined4 *)&this->m_bDeleteInfo = 1;
    if ((_globals.Cheats._4_4_ == 0) && (bVar5 = IsBuildHouseMode__7EGlobal(&_globals), !bVar5)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,6,uVar2);
    }
    this->m_nDisplayMode = '\x04';
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
    this->m_fAnimationTime = 0.25;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
    this->m_pPreloadSelector = pOVar8;
    *(undefined4 *)&this->m_bWaitForPreload = 0;
    *(undefined4 *)&this->m_bCleanUpModelReference = 0;
LAB_001a7bc4:
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
    _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
    _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
    _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xb2ad3ecd);
                    /* end of inlined section */
  }
  return;
}

void EPauseBuyMenu::UpdateBuyCursorFlag(bool flag) {
	int i;
	
  EUIObjectNode *this_00;
  int iVar1;
  
  iVar1 = 7;
  this->m_bBuyCursor = (int)flag;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
  this_00 = (EUIObjectNode *)&this->m_Categories[0].m_menu;
  do {
    SetFlagsPropigate__13EUIObjectNodeUib(this_00,4,!flag);
                    /* end of inlined section */
    iVar1 = iVar1 + -1;
    this_00 = (EUIObjectNode *)((int)&this_00[5].m_pos.field0_0x0 + 4);
  } while (-1 < iVar1);
  return;
}

void EPauseBuyMenu::UnlockGUID(s32 guid) {
	EPauseCategoryMenuItem *pItem;
	bool bFound;
	int i;
	EPauseCategoryMenuItem *this;
	
  bool bVar1;
  EPauseCategoryMenuItem *pEVar2;
  EPauseCategoryMenu *this_00;
  int iVar3;
  
  bVar1 = false;
  iVar3 = 0;
  this_00 = this->m_Categories;
  do {
    pEVar2 = SearchGUID__18EPauseCategoryMenui(this_00,guid);
    iVar3 = iVar3 + 1;
    if (pEVar2 != (EPauseCategoryMenuItem *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
      *(undefined4 *)&pEVar2->m_bLocked = 0;
                    /* end of inlined section */
      bVar1 = true;
    }
    this_00 = this_00 + 1;
  } while ((iVar3 < 8) && (!bVar1));
  return;
}

void EPauseBuyMenu::AnimateIn() {
  if (this->m_bBuyCursor != 0) {
    this->m_nDisplayMode = '\x02';
    return;
  }
  this->m_nDisplayMode = '\x01';
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

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausebuymenu.cpp */
    _pbm_text_line_y = _13EUIObjectNode_SAFE_BOTTOM - 0.155;
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

void ESlideTextBox::Init() {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(undefined4 *)this = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->m_vCur).field0_0x0.d[0] = -1.0;
                    /* end of inlined section */
  this->m_clock = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->m_vStart).field0_0x0.d[1] = -1.0;
  (this->m_vStart).field0_0x0.d[0] = -1.0;
  (this->m_vStop).field0_0x0.d[1] = -1.0;
  (this->m_vStop).field0_0x0.d[0] = -1.0;
  (this->m_vCur).field0_0x0.d[1] = -1.0;
  return;
}

void* EPauseBuyMenu::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,4);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EPauseBuyMenu::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

void global constructors keyed to EPauseBuyMenu::EPauseBuyMenu() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
