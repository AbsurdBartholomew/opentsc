// STATUS: NOT STARTED

#include "pausebuildmenu.h"

float _pblm_text_line_x = 0.205062494f;
float _pblm_text_line_y = 0.f;

__vtbl_ptr_type EPauseBuildMenu virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseBuildMenu::~EPauseBuildMenu,
		/* .__delta2 = */ -15240
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseBuildMenu::Update,
		/* .__delta2 = */ 3576
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseBuildMenu::Draw,
		/* .__delta2 = */ -5800
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
		/* .__pfn = */ &EPauseBuildMenu::Message,
		/* .__delta2 = */ 7952
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
		/* .__pfn = */ &EPauseBuildMenu::NextItem,
		/* .__delta2 = */ 7856
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPauseBuildMenu::PrevItem,
		/* .__delta2 = */ 7904
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

EPauseBuildMenu* EPauseBuildMenu::EPauseBuildMenu() {
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
  EUIIconDef local_930;
  undefined4 local_910;
  undefined4 local_90c;
  undefined4 local_908;
  undefined4 uStack_904;
  undefined4 local_900;
  undefined4 uStack_8fc;
  undefined4 local_8f8;
  undefined4 local_8f0;
  undefined4 local_8ec;
  undefined4 local_8e8;
  undefined4 local_8e0;
  undefined4 local_8dc;
  undefined4 local_8d8;
  EUITextIconDef local_8d0;
  EUIIconDef local_8b0;
  EUIIconDef__vtable *local_890;
  undefined4 local_880;
  undefined4 uStack_87c;
  undefined4 local_878;
  undefined4 uStack_874;
  undefined4 local_870;
  __vtbl_ptr_type *local_86c;
  undefined4 local_860;
  undefined4 local_85c;
  undefined4 local_858;
  undefined4 uStack_854;
  undefined4 local_850;
  undefined4 uStack_84c;
  undefined4 local_848;
  undefined4 local_840;
  undefined4 local_83c;
  undefined4 local_838;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  EUITextIconDef local_820;
  EUIIconDef local_800;
  EUIIconDef__vtable *local_7e0;
  undefined4 local_7d0;
  undefined4 uStack_7cc;
  undefined4 local_7c8;
  undefined4 uStack_7c4;
  undefined4 local_7c0;
  __vtbl_ptr_type *local_7bc;
  undefined4 local_7b0;
  undefined4 local_7ac;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined4 local_7a0;
  undefined4 uStack_79c;
  undefined4 local_798;
  undefined4 local_790;
  undefined4 local_78c;
  undefined4 local_788;
  undefined4 local_780;
  undefined4 local_77c;
  undefined4 local_778;
  EUITextIconDef local_770;
  EUIIconDef local_750;
  EUIIconDef__vtable *local_730;
  undefined4 local_720;
  undefined4 uStack_71c;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 local_710;
  __vtbl_ptr_type *local_70c;
  undefined4 local_700;
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 local_6f0;
  undefined4 uStack_6ec;
  undefined4 local_6e8;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined4 local_6d8;
  undefined4 local_6d0;
  undefined4 local_6cc;
  undefined4 local_6c8;
  EUITextIconDef local_6c0;
  EUIIconDef local_6a0;
  EUIIconDef__vtable *local_680;
  undefined4 local_670;
  undefined4 uStack_66c;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 local_660;
  __vtbl_ptr_type *local_65c;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 local_640;
  undefined4 uStack_63c;
  undefined4 local_638;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  EUITextIconDef local_610;
  EUIIconDef local_5f0;
  EUIIconDef__vtable *local_5d0;
  undefined4 local_5c0;
  undefined4 uStack_5bc;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 local_5b0;
  __vtbl_ptr_type *local_5ac;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 local_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  EUITextIconDef local_560;
  EUIIconDef local_540;
  EUIIconDef__vtable *local_520;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 local_500;
  __vtbl_ptr_type *local_4fc;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  EUITextIconDef local_4b0;
  EUIIconDef local_490;
  EUIIconDef__vtable *local_470;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 local_450;
  __vtbl_ptr_type *local_44c;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  EUITextIconDef local_400;
  EUIIconDef local_3e0;
  EUIIconDef__vtable *local_3c0;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  __vtbl_ptr_type *local_39c;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  EUITextIconDef local_350;
  EUIIconDef local_330;
  EUIIconDef__vtable *local_310;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 local_2f0;
  __vtbl_ptr_type *local_2ec;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  EUITextIconDef local_2a0;
  EUIIconDef local_280;
  EUIIconDef__vtable *local_260;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 local_240;
  __vtbl_ptr_type *local_23c;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  EVec3 vPos;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  EUITextIconDef local_1f0;
  EUIIconDef local_1d0;
  EUIIconDef__vtable *local_1b0;
  EUIStaticTextIcon *local_1a0;
  EUIStaticTextIcon *local_19c;
  EUIStaticTextIcon *local_198;
  EUIStaticTextIcon *local_194;
  EUIStaticTextIcon *local_190;
  EUIStaticTextIcon *local_18c;
  undefined4 *local_188;
  EUITextIconDef *local_184;
  EUIIconDef *local_180;
  undefined4 *local_17c;
  undefined4 *local_178;
  EVec3 *local_174;
  EUIIconDef *local_170;
  EUITextIconDef *local_16c;
  undefined4 *local_168;
  undefined4 *local_164;
  EVec3 *local_160;
  EUIIconDef *local_15c;
  undefined4 *local_158;
  EUITextIconDef *local_154;
  undefined4 *local_150;
  EVec3 *local_14c;
  EUITextIconDef *local_148;
  undefined4 *local_144;
  EUIIconDef *local_140;
  undefined4 *local_13c;
  EVec3 *local_138;
  EUIIconDef *local_134;
  EUITextIconDef *local_130;
  undefined4 *local_12c;
  EVec3 *local_128;
  EUITextIconDef *local_124;
  EUIIconDef *local_120;
  undefined4 *local_11c;
  EVec3 *local_118;
  EUIIconDef *local_114;
  EUITextIconDef *local_110;
  undefined4 *local_10c;
  undefined4 *local_108;
  EUIIconDef *local_104;
  undefined4 *local_100;
  undefined4 *local_fc;
  EVec3 *local_f8;
  EUITextIconDef *local_f4;
  undefined4 *local_f0;
  undefined4 *local_ec;
  EVec3 *local_e8;
  EUIIconDef *local_e4;
  EUITextIconDef *local_e0;
  undefined4 *local_dc;
  EVec3 *local_d8;
  EUITextIconDef *local_d4;
  undefined4 *local_d0;
  EUIIconDef *local_cc;
  undefined4 *local_c8;
  EVec3 *local_c4;
  EUIIconDef *local_c0;
  EUITextIconDef *local_bc;
  undefined4 *local_b8;
  EVec3 *local_b4;
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
  local_d0 = &local_910;
  local_b4 = (EVec3 *)&local_8e0;
  local_184 = &local_8d0;
  local_170 = &local_8b0;
  local_158 = &local_880;
  local_144 = &local_860;
  local_128 = (EVec3 *)&local_830;
  local_124 = &local_820;
  local_114 = &local_800;
  local_100 = &local_7d0;
  local_f0 = &local_7b0;
  local_d8 = (EVec3 *)&local_780;
  local_d4 = &local_770;
  local_c0 = &local_750;
  local_17c = &local_720;
  local_168 = &local_700;
  local_14c = (EVec3 *)&local_6d0;
  local_148 = &local_6c0;
  local_134 = &local_6a0;
  local_11c = &local_670;
  local_10c = &local_650;
  local_f8 = (EVec3 *)&local_620;
  local_f4 = &local_610;
  local_e4 = &local_5f0;
  local_c8 = &local_5c0;
  local_b8 = &local_5a0;
  local_174 = (EVec3 *)&local_570;
  local_16c = &local_560;
  local_15c = &local_540;
  local_13c = &local_510;
  local_12c = &local_4f0;
  local_118 = (EVec3 *)&local_4c0;
  local_110 = &local_4b0;
  local_104 = &local_490;
  local_ec = &local_460;
  local_dc = &local_440;
  local_c4 = (EVec3 *)&local_410;
  local_bc = &local_400;
  local_180 = &local_3e0;
  local_164 = &local_3b0;
  local_150 = &local_390;
  local_138 = (EVec3 *)&local_360;
  local_130 = &local_350;
  local_120 = &local_330;
  local_108 = &local_300;
  local_fc = &local_2e0;
  local_e8 = (EVec3 *)&local_2b0;
  local_e0 = &local_2a0;
  local_cc = &local_280;
  local_188 = &local_250;
  local_178 = &local_230;
  local_160 = (EVec3 *)&local_200;
  local_154 = &local_1f0;
  local_140 = &local_1d0;
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_15EPauseBuildMenu;
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
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_BuyPromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_InfoPromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_BackPromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_SellPromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_1a0 = (EUIStaticTextIcon *)&this->m_RotatePrompt;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_selColorIdx = 0;
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
                    /* end of inlined section */
  __7EUIIconG10EUIIconDefiii(&this->m_PreviewLPromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_19c = (EUIStaticTextIcon *)&this->m_GrabPrompt;
  local_198 = (EUIStaticTextIcon *)&this->m_CancelPrompt;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
  local_930.m_selColorIdx = 0;
                    /* end of inlined section */
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_PreviewRPromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_194 = (EUIStaticTextIcon *)&this->m_PlacePrompt;
  local_190 = (EUIStaticTextIcon *)&this->m_WallsPrompt;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
  local_930.m_selColorIdx = 0;
                    /* end of inlined section */
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_RotateLPromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_18c = (EUIStaticTextIcon *)&this->m_SwitchSidesPrompt;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
  local_930.m_selColorIdx = 0;
                    /* end of inlined section */
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_RotateRPromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_GrabPromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_CancelPromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_PlacePromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_WallsPromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_SwitchSidesLPromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_930.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_colorIdx = 1;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_930.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* end of inlined section */
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_SwitchSidesRPromptIcon,&local_930,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_930.m_trigger = 0x40;
  local_930.m_colorIdx = 1;
  local_910 = 0x20;
  local_930.m_flags = 0;
  local_930.m_selColorIdx = 0;
  local_930.m_pCtrl = (EUIVirtualCtrl *)0x0;
  local_90c = 0;
  local_908 = 0;
  local_d0[3] = 0x41400000;
  local_900 = 0;
  local_d0[5] = 1;
  local_8f8 = CONCAT22(local_8f8._2_2_,0xffff);
  local_8d0.m_maxChars = 0x20;
  local_8e8 = 0;
  local_8ec = 0;
  local_8f0 = 0;
  local_8d8 = 0;
  local_8dc = 0;
  local_8e0 = 0;
  local_8d0.m_xAlign = E_FAX_LEFT;
  local_8d0.m_yAlign = E_FAY_TOP;
  local_184->m_pointsize = 12.0;
  local_8d0.m_selColorIdx = 0;
  local_184->m_colorIdx = 1;
  local_8d0.m_retChar = -1;
  local_8b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_8b0.m_flags = 0;
  local_170->m_trigger = 0x40;
  local_8b0.m_selColorIdx = 0;
  local_170->m_colorIdx = 1;
  local_8b0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&(this->m_BuyPrompt).field0_0x0,local_184,local_170,-1,local_b4);
  local_8b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_90c,local_910) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_90c,local_910) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_904,local_908) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_904,local_908) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_8fc,local_900) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_8fc,local_900) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_BuyPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_8f8;
  local_890 = (this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
            CONCAT44(local_930.m_trigger,local_930.m_flags) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(local_930.m_trigger,local_930.m_flags) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
            CONCAT44(local_930.m_colorIdx,local_930.m_selColorIdx) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(local_930.m_colorIdx,local_930.m_selColorIdx) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
            CONCAT44(local_930.__vtable,local_930.m_pCtrl) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_930.__vtable,local_930.m_pCtrl) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_890;
  (this->m_BuyPrompt).m_lastPressed = 0;
  (this->m_BuyPrompt).m_gap = 0.0;
  local_930.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_86c = _vt_10EUIIconDef;
  local_880 = 0;
  local_158[1] = 0x40;
  local_878 = 0;
  local_158[3] = 1;
  local_870 = 0;
  local_860 = 0x20;
  local_85c = 0;
  local_858 = 0;
  local_144[3] = 0x41400000;
  local_850 = 0;
  local_144[5] = 1;
  local_848 = CONCAT22(local_848._2_2_,0xffff);
  local_838 = 0;
  local_83c = 0;
  local_840 = 0;
  local_828 = 0;
  local_82c = 0;
  local_830 = 0;
  local_820.m_maxChars = 0x20;
  local_820.m_xAlign = E_FAX_LEFT;
  local_820.m_yAlign = E_FAY_TOP;
  local_124->m_pointsize = 12.0;
  local_820.m_selColorIdx = 0;
  local_124->m_colorIdx = 1;
  local_820.m_retChar = -1;
  local_800.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_800.m_flags = 0;
  local_114->m_trigger = 0x40;
  local_800.m_selColorIdx = 0;
  local_114->m_colorIdx = 1;
  local_800.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&(this->m_InfoPrompt).field0_0x0,local_124,local_114,-1,local_128);
  local_800.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_85c,local_860) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_85c,local_860) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_854,local_858) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_854,local_858) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_84c,local_850) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_84c,local_850) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_InfoPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_848;
  local_7e0 = (this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_87c,local_880) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_87c,local_880) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_874,local_878) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_874,local_878) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_86c,local_870) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_86c,local_870) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_7e0;
  (this->m_InfoPrompt).m_lastPressed = 0;
  (this->m_InfoPrompt).m_gap = 0.0;
  local_86c = _vt_10EUIIconDef;
  local_7bc = _vt_10EUIIconDef;
  local_7d0 = 0;
  local_100[1] = 0x40;
  local_7c8 = 0;
  local_100[3] = 1;
  local_7b0 = 0x20;
  local_7c0 = 0;
  local_7ac = 0;
  local_7a8 = 0;
  local_f0[3] = 0x41400000;
  local_7a0 = 0;
  local_f0[5] = 1;
  local_798 = CONCAT22(local_798._2_2_,0xffff);
  local_788 = 0;
  local_78c = 0;
  local_790 = 0;
  local_778 = 0;
  local_770.m_maxChars = 0x20;
  local_77c = 0;
  local_780 = 0;
  local_770.m_xAlign = E_FAX_LEFT;
  local_770.m_yAlign = E_FAY_TOP;
  local_d4->m_pointsize = 12.0;
  local_770.m_selColorIdx = 0;
  local_d4->m_colorIdx = 1;
  local_770.m_retChar = -1;
  local_750.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_750.m_flags = 0;
  local_c0->m_trigger = 0x40;
  local_750.m_selColorIdx = 0;
  local_c0->m_colorIdx = 1;
  local_750.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&(this->m_BackPrompt).field0_0x0,local_d4,local_c0,-1,local_d8);
  local_750.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_7ac,local_7b0) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_7ac,local_7b0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_7a4,local_7a8) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_7a4,local_7a8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_79c,local_7a0) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_79c,local_7a0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_BackPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_798;
  local_730 = (this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_7cc,local_7d0) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_7cc,local_7d0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_7c4,local_7c8) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_7c4,local_7c8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_7bc,local_7c0) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_7bc,local_7c0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_730;
  (this->m_BackPrompt).m_lastPressed = 0;
  (this->m_BackPrompt).m_gap = 0.0;
  local_7bc = _vt_10EUIIconDef;
  local_70c = _vt_10EUIIconDef;
  local_720 = 0;
  local_17c[1] = 0x40;
  local_718 = 0;
  local_17c[3] = 1;
  local_700 = 0x20;
  local_710 = 0;
  local_6fc = 0;
  local_6f8 = 0;
  local_168[3] = 0x41400000;
  local_6f0 = 0;
  local_168[5] = 1;
  local_6e8 = CONCAT22(local_6e8._2_2_,0xffff);
  local_6d8 = 0;
  local_6dc = 0;
  local_6e0 = 0;
  local_6c8 = 0;
  local_6c0.m_maxChars = 0x20;
  local_6cc = 0;
  local_6d0 = 0;
  local_6c0.m_xAlign = E_FAX_LEFT;
  local_6c0.m_yAlign = E_FAY_TOP;
  local_148->m_pointsize = 12.0;
  local_6c0.m_selColorIdx = 0;
  local_148->m_colorIdx = 1;
  local_6a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_6c0.m_retChar = -1;
  local_6a0.m_flags = 0;
  local_134->m_trigger = 0x40;
  local_6a0.m_selColorIdx = 0;
  local_134->m_colorIdx = 1;
  local_6a0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&(this->m_SellPrompt).field0_0x0,local_148,local_134,-1,local_14c);
  local_6a0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_6fc,local_700) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_6fc,local_700) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_6f4,local_6f8) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_6f4,local_6f8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_6ec,local_6f0) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_6ec,local_6f0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_SellPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_6e8;
  local_680 = (this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_71c,local_720) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_71c,local_720) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_714,local_718) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_714,local_718) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_70c,local_710) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_70c,local_710) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_680;
  (this->m_SellPrompt).m_lastPressed = 0;
  (this->m_SellPrompt).m_gap = 0.0;
  local_70c = _vt_10EUIIconDef;
  local_65c = _vt_10EUIIconDef;
  local_670 = 0;
  local_11c[1] = 0x40;
  local_668 = 0;
  local_11c[3] = 1;
  local_650 = 0x20;
  local_660 = 0;
  local_64c = 0;
  local_648 = 0;
  local_10c[3] = 0x41400000;
  local_640 = 0;
  local_10c[5] = 1;
  local_638 = CONCAT22(local_638._2_2_,0xffff);
  local_628 = 0;
  local_62c = 0;
  local_630 = 0;
  local_618 = 0;
  local_610.m_maxChars = 0x20;
  local_61c = 0;
  local_620 = 0;
  local_610.m_xAlign = E_FAX_LEFT;
  local_610.m_yAlign = E_FAY_TOP;
  local_f4->m_pointsize = 12.0;
  local_610.m_selColorIdx = 0;
  local_f4->m_colorIdx = 1;
  local_5f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_610.m_retChar = -1;
  local_5f0.m_flags = 0;
  local_e4->m_trigger = 0x40;
  local_5f0.m_selColorIdx = 0;
  local_e4->m_colorIdx = 1;
  local_5f0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&(this->m_PreviewPrompt).field0_0x0,local_f4,local_e4,-1,local_f8);
  local_5f0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_PreviewPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_64c,local_650) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_PreviewPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_64c,local_650) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PreviewPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_644,local_648) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_PreviewPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_644,local_648) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PreviewPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_63c,local_640) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_PreviewPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_63c,local_640) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_PreviewPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_638;
  local_5d0 = (this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_66c,local_670) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_66c,local_670) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_664,local_668) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_664,local_668) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_65c,local_660) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_65c,local_660) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_5d0;
  (this->m_PreviewPrompt).m_lastPressed = 0;
  (this->m_PreviewPrompt).m_gap = 0.0;
  local_65c = _vt_10EUIIconDef;
  local_5ac = _vt_10EUIIconDef;
  local_5c0 = 0;
  local_c8[1] = 0x40;
  local_5b8 = 0;
  local_c8[3] = 1;
  local_5a0 = 0x20;
  local_5b0 = 0;
  local_59c = 0;
  local_598 = 0;
  local_b8[3] = 0x41400000;
  local_590 = 0;
  local_b8[5] = 1;
  local_588 = CONCAT22(local_588._2_2_,0xffff);
  local_578 = 0;
  local_57c = 0;
  local_580 = 0;
  local_560.m_maxChars = 0x20;
  local_568 = 0;
  local_56c = 0;
  local_570 = 0;
  local_560.m_xAlign = E_FAX_LEFT;
  local_560.m_yAlign = E_FAY_TOP;
  local_16c->m_pointsize = 12.0;
  local_560.m_selColorIdx = 0;
  local_16c->m_colorIdx = 1;
  local_540.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_560.m_retChar = -1;
  local_540.m_flags = 0;
  local_15c->m_trigger = 0x40;
  local_540.m_selColorIdx = 0;
  local_15c->m_colorIdx = 1;
  local_540.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (local_1a0,local_16c,local_15c,-1,local_174);
  local_540.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (local_1a0->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_59c,local_5a0) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_59c,local_5a0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_594,local_598) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_594,local_598) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_58c,local_590) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_58c,local_590) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_RotatePrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_588;
  local_520 = (local_1a0->field0_0x0).field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_5bc,local_5c0) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_5bc,local_5c0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_5b4,local_5b8) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_5b4,local_5b8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_5ac,local_5b0) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_5ac,local_5b0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_1a0->field0_0x0).field0_0x0.m_def.__vtable = local_520;
  local_1a0[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
       (ENodeListNode *)0x0;
  local_1a0[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
       (ENodeListNode *)0x0;
  local_5ac = _vt_10EUIIconDef;
  local_4fc = _vt_10EUIIconDef;
  local_510 = 0;
  local_13c[1] = 0x40;
  local_508 = 0;
  local_13c[3] = 1;
  local_4f0 = 0x20;
  local_500 = 0;
  local_4ec = 0;
  local_4e8 = 0;
  local_12c[3] = 0x41400000;
  local_4e0 = 0;
  local_12c[5] = 1;
  local_4d8 = CONCAT22(local_4d8._2_2_,0xffff);
  local_4c8 = 0;
  local_4b0.m_maxChars = 0x20;
  local_4cc = 0;
  local_4d0 = 0;
  local_4b8 = 0;
  local_4bc = 0;
  local_4c0 = 0;
  local_4b0.m_xAlign = E_FAX_LEFT;
  local_4b0.m_yAlign = E_FAY_TOP;
  local_110->m_pointsize = 12.0;
  local_4b0.m_selColorIdx = 0;
  local_110->m_colorIdx = 1;
  local_4b0.m_retChar = -1;
  local_490.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_490.m_flags = 0;
  local_104->m_trigger = 0x40;
  local_490.m_selColorIdx = 0;
  local_104->m_colorIdx = 1;
  local_490.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (local_19c,local_110,local_104,-1,local_118);
  local_490.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (local_19c->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_4ec,local_4f0) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_4ec,local_4f0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_4e4,local_4e8) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_4e4,local_4e8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_4dc,local_4e0) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_4dc,local_4e0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_GrabPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_4d8;
  local_470 = (local_19c->field0_0x0).field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_50c,local_510) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_50c,local_510) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_504,local_508) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_504,local_508) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_4fc,local_500) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_4fc,local_500) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_19c->field0_0x0).field0_0x0.m_def.__vtable = local_470;
  local_19c[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
       (ENodeListNode *)0x0;
  local_19c[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
       (ENodeListNode *)0x0;
  local_4fc = _vt_10EUIIconDef;
  local_44c = _vt_10EUIIconDef;
  local_460 = 0;
  local_ec[1] = 0x40;
  local_458 = 0;
  local_ec[3] = 1;
  local_450 = 0;
  local_440 = 0x20;
  local_43c = 0;
  local_438 = 0;
  local_dc[3] = 0x41400000;
  local_430 = 0;
  local_dc[5] = 1;
  local_428 = CONCAT22(local_428._2_2_,0xffff);
  local_418 = 0;
  local_41c = 0;
  local_420 = 0;
  local_408 = 0;
  local_40c = 0;
  local_410 = 0;
  local_400.m_maxChars = 0x20;
  local_400.m_xAlign = E_FAX_LEFT;
  local_400.m_yAlign = E_FAY_TOP;
  local_bc->m_pointsize = 12.0;
  local_400.m_selColorIdx = 0;
  local_bc->m_colorIdx = 1;
  local_400.m_retChar = -1;
  local_3e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_3e0.m_flags = 0;
  local_180->m_trigger = 0x40;
  local_3e0.m_selColorIdx = 0;
  local_180->m_colorIdx = 1;
  local_3e0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (local_198,local_bc,local_180,-1,local_c4);
  local_3e0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (local_198->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_43c,local_440) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_43c,local_440) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_434,local_438) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_434,local_438) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_42c,local_430) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_42c,local_430) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_CancelPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_428;
  local_3c0 = (local_198->field0_0x0).field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_45c,local_460) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_45c,local_460) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_454,local_458) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_454,local_458) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_44c,local_450) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_44c,local_450) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_198->field0_0x0).field0_0x0.m_def.__vtable = local_3c0;
  local_198[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
       (ENodeListNode *)0x0;
  local_198[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
       (ENodeListNode *)0x0;
  local_44c = _vt_10EUIIconDef;
  local_39c = _vt_10EUIIconDef;
  local_3b0 = 0;
  local_164[1] = 0x40;
  local_3a8 = 0;
  local_164[3] = 1;
  local_390 = 0x20;
  local_3a0 = 0;
  local_38c = 0;
  local_388 = 0;
  local_150[3] = 0x41400000;
  local_380 = 0;
  local_150[5] = 1;
  local_378 = CONCAT22(local_378._2_2_,0xffff);
  local_350.m_maxChars = 0x20;
  local_368 = 0;
  local_36c = 0;
  local_370 = 0;
  local_358 = 0;
  local_35c = 0;
  local_360 = 0;
  local_350.m_xAlign = E_FAX_LEFT;
  local_350.m_yAlign = E_FAY_TOP;
  local_130->m_pointsize = 12.0;
  local_350.m_selColorIdx = 0;
  local_130->m_colorIdx = 1;
  local_330.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_350.m_retChar = -1;
  local_330.m_flags = 0;
  local_120->m_trigger = 0x40;
  local_330.m_selColorIdx = 0;
  local_120->m_colorIdx = 1;
  local_330.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (local_194,local_130,local_120,-1,local_138);
  local_330.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (local_194->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_38c,local_390) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_38c,local_390) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_384,local_388) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_384,local_388) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_37c,local_380) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_37c,local_380) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_PlacePrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_378;
  local_310 = (local_194->field0_0x0).field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_3ac,local_3b0) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_3ac,local_3b0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_3a4,local_3a8) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_3a4,local_3a8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_39c,local_3a0) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_39c,local_3a0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_194->field0_0x0).field0_0x0.m_def.__vtable = local_310;
  local_194[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
       (ENodeListNode *)0x0;
  local_194[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
       (ENodeListNode *)0x0;
  local_39c = _vt_10EUIIconDef;
  local_2ec = _vt_10EUIIconDef;
  local_300 = 0;
  local_108[1] = 0x40;
  local_2f8 = 0;
  local_108[3] = 1;
  local_2e0 = 0x20;
  local_2f0 = 0;
  local_2dc = 0;
  local_2d8 = 0;
  local_fc[3] = 0x41400000;
  local_2d0 = 0;
  local_fc[5] = 1;
  local_2c8 = CONCAT22(local_2c8._2_2_,0xffff);
  local_2b8 = 0;
  local_2a0.m_maxChars = 0x20;
  local_2bc = 0;
  local_2c0 = 0;
  local_2a8 = 0;
  local_2ac = 0;
  local_2b0 = 0;
  local_2a0.m_xAlign = E_FAX_LEFT;
  local_2a0.m_yAlign = E_FAY_TOP;
  local_e0->m_pointsize = 12.0;
  local_2a0.m_selColorIdx = 0;
  local_e0->m_colorIdx = 1;
  local_2a0.m_retChar = -1;
  local_280.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_280.m_flags = 0;
  local_cc->m_trigger = 0x40;
  local_280.m_selColorIdx = 0;
  local_cc->m_colorIdx = 1;
  local_280.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (local_190,local_e0,local_cc,-1,local_e8);
  local_280.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (local_190->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_2dc,local_2e0) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_2dc,local_2e0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_2d4,local_2d8) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_2d4,local_2d8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_2cc,local_2d0) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_2cc,local_2d0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_WallsPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_2c8;
  local_260 = (local_190->field0_0x0).field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_2fc,local_300) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_2fc,local_300) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_2f4,local_2f8) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_2f4,local_2f8) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_2ec,local_2f0) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_2ec,local_2f0) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_190->field0_0x0).field0_0x0.m_def.__vtable = local_260;
  local_190[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
       (ENodeListNode *)0x0;
  local_190[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
       (ENodeListNode *)0x0;
  local_2ec = _vt_10EUIIconDef;
  local_23c = _vt_10EUIIconDef;
  local_250 = 0;
  local_188[1] = 0x40;
  local_248 = 0;
  local_188[3] = 1;
  local_240 = 0;
  local_230 = 0x20;
  local_22c = 0;
  local_228 = 0;
  local_178[3] = 0x41400000;
  local_220 = 0;
  local_178[5] = 1;
  local_1f0.m_maxChars = 0x20;
  local_218 = CONCAT22(local_218._2_2_,0xffff);
  vPos.field0_0x0.d[2] = 0.0;
  vPos.field0_0x0.d[1] = 0.0;
  vPos.field0_0x0.d[0] = 0.0;
  local_1f8 = 0;
  local_1fc = 0;
  local_200 = 0;
  local_1f0.m_xAlign = E_FAX_LEFT;
  local_1f0.m_yAlign = E_FAY_TOP;
  local_154->m_pointsize = 12.0;
  local_1f0.m_selColorIdx = 0;
  local_154->m_colorIdx = 1;
  local_1f0.m_retChar = -1;
  local_1d0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_1d0.m_flags = 0;
  local_140->m_trigger = 0x40;
  local_1d0.m_selColorIdx = 0;
  local_140->m_colorIdx = 1;
  local_1d0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (local_18c,local_154,local_140,-1,local_160);
  local_1d0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  (local_18c->field0_0x0).field0_0x0.field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_9EUIPrompt;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  puVar1 = (undefined *)
           ((int)&(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_22c,local_230) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_22c,local_230) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_224,local_228) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(uStack_224,local_228) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_21c,local_220) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(uStack_21c,local_220) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_218;
  local_1b0 = (local_18c->field0_0x0).field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_24c,local_250) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(uStack_24c,local_250) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(uStack_244,local_248) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(uStack_244,local_248) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_23c,local_240) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_23c,local_240) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (local_18c->field0_0x0).field0_0x0.m_def.__vtable = local_1b0;
  local_18c[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead =
       (ENodeListNode *)0x0;
  local_18c[1].field0_0x0.field0_0x0.field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail =
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
  local_23c = _vt_10EUIIconDef;
  Init__15EPauseBuildMenu(this);
  return this;
}

void EPauseBuildMenu::~EPauseBuildMenu(int __in_chrg) {
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
	EUIPrompt *this;
	EUIStaticTextIcon *this;
	EUIPrompt *this;
	EUIStaticTextIcon *this;
	void *ptr;
	
  bool bVar1;
  EUIObjectNode__vtable *pEVar2;
  EPauseCategoryMenu *pEVar3;
  
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_15EPauseBuildMenu;
  Reset__15EPauseBuildMenu(this);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  (this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_SwitchSidesPrompt,2);
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
  (this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_PreviewPrompt,2);
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
  ___7EUIIcon(&this->m_SwitchSidesRPromptIcon,2);
  ___7EUIIcon(&this->m_SwitchSidesLPromptIcon,2);
  ___7EUIIcon(&this->m_WallsPromptIcon,2);
  ___7EUIIcon(&this->m_PlacePromptIcon,2);
  ___7EUIIcon(&this->m_CancelPromptIcon,2);
  ___7EUIIcon(&this->m_GrabPromptIcon,2);
  ___7EUIIcon(&this->m_RotateRPromptIcon,2);
  ___7EUIIcon(&this->m_RotateLPromptIcon,2);
  ___7EUIIcon(&this->m_PreviewRPromptIcon,2);
  ___7EUIIcon(&this->m_PreviewLPromptIcon,2);
  ___7EUIIcon(&this->m_SellPromptIcon,2);
  ___7EUIIcon(&this->m_BackPromptIcon,2);
  ___7EUIIcon(&this->m_InfoPromptIcon,2);
  ___7EUIIcon(&this->m_BuyPromptIcon,2);
  if ((this != (EPauseBuildMenu *)0xfffffef0) &&
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
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausebuildmenu.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EPauseBuildMenu::Init() {
	int i;
	EVec2 vScreenSize;
	int nCategoryIndex;
	u32 id;
	ObjSelector *pMasterSel;
	ObjDefinition *pMasterDef;
	ObjSelector *psel;
	EPauseCategoryMenuItem *pItem;
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
	EPauseCategoryMenuItem *pItem;
	u32 LockId;
	bool bLocked;
	EPauseCategoryMenuItem *this;
	ObjSelector *pSelector;
	EPauseCategoryMenuItem *this;
	ObjSelector *pSelector;
	EPauseCategoryMenuItem *this;
	bool on;
	EPauseCategoryMenuItem *pItem;
	unsigned int n;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *pItem;
	unsigned int n;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenu *this;
	EPauseCategoryMenu *this;
	EPauseCategoryMenu *this;
	EPauseCategoryMenu *this;
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
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EUIPrompt *this;
	EUIIcon *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  ushort uVar4;
  EUIObjectNode__vtable *pEVar5;
  ResData *pRVar6;
  ObjAnimDef *pOVar7;
  ObjDefinition *pOVar8;
  ObjDefinition *pOVar9;
  FloorTile **ppFVar10;
  WallTile **ppWVar11;
  ulong *puVar12;
  FloorSet *pFVar13;
  WallSet *pWVar14;
  FenceSet *pFVar15;
  EUIPrompt *this_00;
  bool bVar16;
  ERShader *pEVar17;
  ObjSelector *pSel;
  EPauseCategoryMenuItem *pEVar18;
  ERFont *pEVar19;
  short *psVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  EPauseCategoryMenu *pEVar24;
  uint uVar25;
  FloorTile *pFVar26;
  WallTile *pWVar27;
  undefined8 unaff_s0;
  uint uVar28;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar29;
  int iVar30;
  undefined8 unaff_s5;
  EUIVirtualCtrl **ppEVar31;
  ObjSelector *this_01;
  EPauseCategoryMenu *this_02;
  undefined8 unaff_s6;
  EPauseCategoryMenu *pEVar32;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  EVec2 vScreenSize;
  EUIIconDef icondef;
  float local_220;
  float local_21c;
  float local_210;
  float local_20c;
  EUITextIconDef texticon;
  EUIIconDef__vtable *local_1e0;
  float local_1dc;
  undefined4 local_1d8;
  uint uStack_1d4;
  undefined local_1d0 [112];
  uint LockId;
  EPauseCategoryMenu *local_15c;
  EPauseCategoryMenu *local_158;
  EUIPrompt *local_154;
  EUIPrompt *local_150;
  EUIIcon *local_14c;
  EPauseCategoryMenu *local_148;
  EUIPrompt *local_144;
  EUIIcon *local_140;
  EUIPrompt *local_13c;
  EUIIcon *local_138;
  EUIPrompt *local_134;
  EPauseCategoryMenu *local_130;
  EUIIcon *local_12c;
  EUIIcon *local_128;
  EUIPrompt *local_124;
  EUIPrompt *local_120;
  EUIIcon *local_11c;
  EUIIcon *local_118;
  EUIPrompt *local_114;
  EUIIcon *local_110;
  EUIPrompt *local_10c;
  EUIIcon *local_108;
  EPauseCategoryMenu *local_104;
  EUIIcon *local_100;
  EUIIcon *local_fc;
  EUIPrompt *local_f8;
  EUIPrompt *local_f4;
  EUIIcon *local_f0;
  EVec2 *local_ec;
  EUIIcon *local_e8;
  EUITextIconDef *local_e4;
  EUIIconDef__vtable **local_e0;
  EUIPrompt *local_dc;
  EUIIcon *local_d8;
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
  local_ec = (EVec2 *)&local_210;
  local_e4 = &texticon;
  local_e0 = &local_1e0;
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  ppEVar31 = &icondef.m_pCtrl;
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  iVar29 = 7;
  local_d0 = (undefined4)unaff_s0;
  uStack_cc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pEVar24 = this->m_Categories;
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (undefined4)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (undefined4)unaff_s1;
  uStack_bc = (undefined4)((ulong)unaff_s1 >> 0x20);
  do {
    iVar29 = iVar29 + -1;
    Reset__18EPauseCategoryMenu(pEVar24);
    Init__18EPauseCategoryMenu(pEVar24);
    pEVar24 = pEVar24 + 1;
  } while (-1 < iVar29);
  *(undefined4 *)&this->m_bDeleteInfo = 0;
  this->m_pPreloadSelector = (ObjSelector *)0x0;
  *(undefined4 *)&this->m_bWaitForPreload = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bCleanUpModelReference = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pWallFloorItem = (EPauseCategoryMenuItem *)0x0;
  this->m_PulseAccumulator = 0.0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bShowingSlider = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_nSliderNumber = 0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_nDisplayMode = '\v';
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_fAnimationTime = 0.25;
  *(undefined4 *)&this->m_bListenToStick = 1;
  local_130 = this->m_Categories;
  local_104 = this->m_Categories + 1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar17 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
  fVar36 = 0.052;
  this->m_pBlankShdr = pEVar17;
  pEVar17 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xaac25e24,(EFile *)0x0,0);
  this->m_pMenuBevelRightShdr = pEVar17;
  pEVar17 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x527287a1,(EFile *)0x0,0);
  icondef.m_trigger = 0x3d851eb8;
  this->m_pTextLineButtonBevelShdr = pEVar17;
  pEVar17 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc9ff8b99,(EFile *)0x0,0);
  this->m_pMenuDPadReverseShdr = pEVar17;
  pEVar17 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x542a4dcf,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_pMenuBevelShdr = pEVar17;
  local_148 = this->m_Categories + 2;
  pEVar17 = (ERShader *)
            AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x43886001,(EFile *)0x0,0);
  fVar33 = _13EUIObjectNode_SAFE_TOP;
                    /* end of inlined section */
  local_138 = &this->m_BuyPromptIcon;
  local_128 = &this->m_InfoPromptIcon;
  local_118 = &this->m_BackPromptIcon;
  this->m_pGlowShader = pEVar17;
  fVar35 = _13EUIObjectNode_SAFE_LEFT;
  local_108 = &this->m_SellPromptIcon;
  (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] = _13EUIObjectNode_SAFE_LEFT;
  local_fc = &this->m_PreviewLPromptIcon;
  (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[1] = 0.0;
  pEVar5 = (this->field0_0x0).field0_0x0.__vtable;
  local_e8 = &this->m_PreviewRPromptIcon;
  local_14c = &this->m_RotateLPromptIcon;
  local_140 = &this->m_RotateRPromptIcon;
  (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] = (fVar33 + 0.09166667) - 0.0011;
  local_12c = &this->m_GrabPromptIcon;
  local_11c = &this->m_CancelPromptIcon;
  local_f0 = &this->m_SwitchSidesLPromptIcon;
  local_110 = &this->m_PlacePromptIcon;
  (*(code *)pEVar5[2].GetPos)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar5[2].OnStickRepeat + -0x44,
             0,1,1);
  local_d8 = &this->m_SwitchSidesRPromptIcon;
  local_144 = &this->m_BuyPrompt;
  local_100 = &this->m_WallsPromptIcon;
  local_124 = &this->m_InfoPrompt;
  local_114 = &this->m_BackPrompt;
  pEVar5 = (this->field0_0x0).field0_0x0.__vtable;
  local_f8 = &this->m_SellPrompt;
  (*(code *)pEVar5[2].RemoveChild)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar5[2].AddChild + -0x44,4);
  local_dc = &this->m_PreviewPrompt;
  local_120 = &this->m_GrabPrompt;
  local_13c = &this->m_RotatePrompt;
  fVar34 = _13EUIObjectNode_SAFE_BOTTOM - 0.1941964;
  pEVar5 = (this->field0_0x0).field0_0x0.__vtable;
  local_10c = &this->m_CancelPrompt;
  local_f4 = &this->m_PlacePrompt;
  vScreenSize.field0_0x0.d[1] = fVar34 - (fVar33 + 0.09151786);
  local_134 = &this->m_SwitchSidesPrompt;
  local_150 = &this->m_WallsPrompt;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vScreenSize.field0_0x0.d[0] = fVar36;
  (*(code *)pEVar5->RemoveChild)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar5->AddChild + -0x44,
             &vScreenSize);
                    /* inlined from /eor/src2/engine/ui/e_uimenu.h */
  pEVar5 = (this->field0_0x0).field0_0x0.__vtable;
  (this->field0_0x0).m_optgap = 0.0125;
  (*(code *)pEVar5[2].Message)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar5[2].SetBoxDims + -0x44);
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
  fVar33 = fVar33 + 41.0 / vScreenSize.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar22 = CONCAT44(fVar33,-(fVar35 + fVar36));
  puVar1 = (undefined *)((int)&(this->m_vSidePosStart).field0_0x0 + 7);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | uVar22 >> (7 - uVar25) * 8;
  uVar25 = (uint)&this->m_vSidePosStart & 7;
  puVar12 = (ulong *)((int)&this->m_vSidePosStart - uVar25);
  *puVar12 = uVar22 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar22 = (ulong)(uint)fVar33 << 0x20;
  puVar1 = (undefined *)((int)&(this->m_vSidePosEnd).field0_0x0 + 7);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | uVar22 >> (7 - uVar25) * 8;
  uVar25 = (uint)&this->m_vSidePosEnd & 7;
  puVar12 = (ulong *)((int)&this->m_vSidePosEnd - uVar25);
  *puVar12 = uVar22 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_vSidePosStart).field0_0x0 + 7);
  uVar25 = (uint)puVar1 & 7;
  uVar28 = (uint)&this->m_vSidePosStart & 7;
  uVar22 = (*(long *)(puVar1 + -uVar25) << (7 - uVar25) * 8 |
           uVar22 & 0xffffffffffffffffU >> (uVar25 + 1) * 8) & -1L << (8 - uVar28) * 8 |
           *(ulong *)((int)&this->m_vSidePosStart - uVar28) >> uVar28 * 8;
  puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | uVar22 >> (7 - uVar25) * 8;
  uVar25 = (uint)&this->m_vSidePos & 7;
  puVar12 = (ulong *)((int)&this->m_vSidePos - uVar25);
  *puVar12 = uVar22 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar22 = CONCAT44(fVar34 - (this->m_vSidePos).field0_0x0.d[1],fVar35 + fVar36);
  puVar1 = (undefined *)((int)&(this->m_vSideSize).field0_0x0 + 7);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | uVar22 >> (7 - uVar25) * 8;
  uVar25 = (uint)&this->m_vSideSize & 7;
  puVar12 = (ulong *)((int)&this->m_vSideSize - uVar25);
  *puVar12 = uVar22 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPosStart).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3f8000003e3645a2U >> (7 - uVar25) * 8;
  uVar25 = (uint)&this->m_vBottomPosStart & 7;
  puVar12 = (ulong *)((int)&this->m_vBottomPosStart - uVar25);
  *puVar12 = 0x3f8000003e3645a2 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPosEnd).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3f417c1c3e3645a2U >> (7 - uVar25) * 8;
  uVar25 = (uint)&this->m_vBottomPosEnd & 7;
  puVar12 = (ulong *)((int)&this->m_vBottomPosEnd - uVar25);
  *puVar12 = 0x3f417c1c3e3645a2 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPosStart).field0_0x0 + 7);
  uVar25 = (uint)puVar1 & 7;
  uVar28 = (uint)&this->m_vBottomPosStart & 7;
  uVar22 = (*(long *)(puVar1 + -uVar25) << (7 - uVar25) * 8 |
           0xffffffffffffffffU >> (uVar25 + 1) * 8 & 0x3f417c1c3e3645a2) & -1L << (8 - uVar28) * 8 |
           *(ulong *)((int)&this->m_vBottomPosStart - uVar28) >> uVar28 * 8;
  puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | uVar22 >> (7 - uVar25) * 8;
  uVar25 = (uint)&this->m_vBottomPos & 7;
  puVar12 = (ulong *)((int)&this->m_vBottomPos - uVar25);
  *puVar12 = uVar22 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar22 = CONCAT44(1.0 - (this->m_vBottomPosEnd).field0_0x0.d[1],
                    1.0 - (this->m_vBottomPosEnd).field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&(this->m_vBottomSize).field0_0x0 + 7);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | uVar22 >> (7 - uVar25) * 8;
  uVar25 = (uint)&this->m_vBottomSize & 7;
  puVar12 = (ulong *)((int)&this->m_vBottomSize - uVar25);
  *puVar12 = uVar22 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_flags = 0x3d4ccccd;
  icondef.m_pCtrl = (EUIVirtualCtrl *)(this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0];
  icondef.__vtable = (EUIIconDef__vtable *)(this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2];
                    /* end of inlined section */
  SetupIcon__18EPauseCategoryMenuG5EVec2iT1
            (this->m_Categories,(EVec2 *)&icondef,-0x10d8dc10,(EVec2 *)ppEVar31);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_flags = 0x3d4ccccd;
                    /* end of inlined section */
  local_21c = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.07589286;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_220 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetupIcon__18EPauseCategoryMenuG5EVec2iT1
            (this->m_Categories + 1,(EVec2 *)&icondef,0x2cf723d8,(EVec2 *)&local_220);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  icondef.m_flags = 0x3d4ccccd;
                    /* end of inlined section */
  local_20c = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + 0.1517857;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_210 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  SetupIcon__18EPauseCategoryMenuG5EVec2iT1
            (this->m_Categories + 2,(EVec2 *)&icondef,-0x636e703e,local_ec);
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
            (this->m_Categories + 3,(EVec2 *)&icondef,0x5caa01bb,(EVec2 *)ppEVar31);
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
            (this->m_Categories + 4,(EVec2 *)&icondef,0x1914a31f,(EVec2 *)ppEVar31);
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
            (this->m_Categories + 5,(EVec2 *)&icondef,0x6e40ebdf,(EVec2 *)ppEVar31);
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
            (this->m_Categories + 6,(EVec2 *)&icondef,-0x7628ab62,(EVec2 *)ppEVar31);
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
            (this->m_Categories + 7,(EVec2 *)&icondef,-0x2618b2ca,(EVec2 *)ppEVar31);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar23 = 0;
  while (lVar23 = (*(code *)_5Globs_pObjectFolder->__vtable->ResumeObjectFiles)
                            ((int)&_5Globs_pObjectFolder->__vtable +
                             (int)*(short *)&_5Globs_pObjectFolder->__vtable->SuspendObjectFiles,
                             lVar23), pFVar13 = _globals._pFloorSet, lVar23 != 0) {
    this_01 = (ObjSelector *)lVar23;
    pOVar9 = this_01->fHeader;
                    /* end of inlined section */
    if ((pOVar9 != (ObjDefinition *)0x0) && (pRVar6 = pOVar9->pResData, pRVar6 != (ResData *)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      pOVar7 = (pRVar6->objectStates).pData;
      if (pOVar7 == (ObjAnimDef *)0x0) {
        iVar29 = 0;
      }
      else {
        iVar29 = pOVar7[-1].graphic;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      if ((iVar29 != 0) && (((pRVar6->objectStates).pData)->modelID != 0)) {
        iVar29 = -1;
        pSel = GetMasterSelector__11ObjSelector(this_01);
                    /* inlined from ../MSrc/objselector.h */
        pOVar8 = pSel->fHeader;
                    /* end of inlined section */
        uVar4 = pOVar8->buildModeType;
        if (uVar4 == 5) {
          iVar29 = 5;
        }
        else if ((short)uVar4 < 6) {
          if (uVar4 == 2) {
            iVar29 = 4;
          }
          else if ((short)uVar4 < 3) {
            if (uVar4 == 1) {
              iVar29 = 3;
            }
          }
          else if (uVar4 == 4) {
            iVar29 = 6;
          }
        }
        else if (uVar4 == 7) {
          iVar29 = 7;
        }
        if ((iVar29 != -1) &&
           (pEVar18 = SearchExistingSelector__18EPauseCategoryMenuP11ObjSelector
                                (this->m_Categories + iVar29,pSel),
           pEVar18 == (EPauseCategoryMenuItem *)0x0)) {
          uVar25 = 0;
          pEVar18 = (EPauseCategoryMenuItem *)__builtin_new(0x90);
          pEVar18 = __22EPauseCategoryMenuItem(pEVar18);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18->m_pMasterSel = pSel;
          pEVar18->m_pResSel = this_01;
                    /* end of inlined section */
          if (pOVar8->pResData != (ResData *)0x0) {
            uVar25 = pOVar8->pResData->eorQueueShaderID;
          }
          if ((uVar25 == 0) && (uVar25 = pOVar9->pResData->eorQueueShaderID, uVar25 == 0)) {
            uVar25 = 0xd59c7bb5;
          }
          InitActiveShader__7EUIIconi(&pEVar18->field0_0x0,uVar25);
          uVar28 = 0;
          InitInActiveShader__7EUIIconi(&pEVar18->field0_0x0,uVar25);
          LockId = 0;
          bVar16 = CheckLockableByData__FUiiPUi(0,pOVar8->guid,&LockId);
          if (bVar16) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
            uVar28 = 1;
            lVar21 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                               ((int)&_5Globs_pNeighborhood->__vtable +
                                (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1);
            if (lVar21 == 1) {
              bVar16 = CheckNeighborhoodUnlocked__FUiUi(0,LockId);
              uVar28 = (uint)!bVar16;
            }
            else {
              bVar16 = CheckGlobalUnlocked__FUiUi(0,LockId);
              if (bVar16) {
                uVar28 = 0;
              }
            }
          }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          *(uint *)&pEVar18->m_bLocked = uVar28;
                    /* end of inlined section */
          InsertOption__18EPauseCategoryMenuP22EPauseCategoryMenuItem
                    (this->m_Categories + iVar29,pEVar18);
        }
      }
    }
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  ppFVar10 = ((_globals._pFloorSet)->field0_0x0).pData;
  pFVar26 = (FloorTile *)0x0;
  if (ppFVar10 != (FloorTile **)0x0) {
    pFVar26 = ppFVar10[-1];
  }
                    /* end of inlined section */
  iVar29 = 0;
  if (0 < (int)pFVar26) {
    do {
      pEVar18 = (EPauseCategoryMenuItem *)__builtin_new(0x90);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      iVar30 = iVar29 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      pEVar18 = __22EPauseCategoryMenuItemPC9FloorTile(pEVar18,(pFVar13->field0_0x0).pData[iVar29]);
                    /* end of inlined section */
      *(undefined4 *)&pEVar18->m_bLocked = 0;
      InsertOption__18EPauseCategoryMenuP22EPauseCategoryMenuItem(local_148,pEVar18);
      iVar29 = iVar30;
    } while (iVar30 < (int)pFVar26);
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  pWVar14 = _globals._pWallSet;
  ppWVar11 = ((_globals._pWallSet)->field0_0x0).pData;
  pWVar27 = (WallTile *)0x0;
  if (ppWVar11 != (WallTile **)0x0) {
    pWVar27 = ppWVar11[-1];
  }
                    /* end of inlined section */
  iVar29 = 0;
  if (0 < (int)pWVar27) {
    do {
      pEVar18 = (EPauseCategoryMenuItem *)__builtin_new(0x90);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      iVar30 = iVar29 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      pEVar18 = __22EPauseCategoryMenuItemPC8WallTile(pEVar18,(pWVar14->field0_0x0).pData[iVar29]);
                    /* end of inlined section */
      *(undefined4 *)&pEVar18->m_bLocked = 0;
      InsertOption__18EPauseCategoryMenuP22EPauseCategoryMenuItem(local_104,pEVar18);
      iVar29 = iVar30;
    } while (iVar30 < (int)pWVar27);
  }
  this_02 = this->m_Categories;
  pEVar18 = (EPauseCategoryMenuItem *)__builtin_new(0x90);
  iVar30 = 0;
  local_15c = local_130;
  iVar29 = 0;
  pEVar18 = __22EPauseCategoryMenuItemUi(pEVar18,2);
  local_158 = local_104;
  InitActiveShader__7EUIIconi(&pEVar18->field0_0x0,-0x20e5717d);
  pEVar24 = local_148;
  InitInActiveShader__7EUIIconi(&pEVar18->field0_0x0,-0x20e5717d);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
  *(undefined4 *)&pEVar18->m_bLocked = 0;
                    /* end of inlined section */
  AddOption__18EPauseCategoryMenuP22EPauseCategoryMenuItem(local_130,pEVar18);
  pFVar15 = _globals._pFenceSet;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  pEVar18 = (EPauseCategoryMenuItem *)__builtin_new(0x90);
  pEVar18 = __22EPauseCategoryMenuItemUi(pEVar18,3);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
  *(undefined4 *)&pEVar18->m_bLocked = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(&pEVar18->field0_0x0,(*(pFVar15->field0_0x0).pData)->shaderID);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  InitInActiveShader__7EUIIconi(&pEVar18->field0_0x0,(*(pFVar15->field0_0x0).pData)->shaderID);
  AddOption__18EPauseCategoryMenuP22EPauseCategoryMenuItem(local_130,pEVar18);
  pEVar18 = (EPauseCategoryMenuItem *)__builtin_new(0x90);
  pEVar18 = __22EPauseCategoryMenuItemUi(pEVar18,4);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
  *(undefined4 *)&pEVar18->m_bLocked = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(&pEVar18->field0_0x0,(pFVar15->field0_0x0).pData[1]->shaderID);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  InitInActiveShader__7EUIIconi(&pEVar18->field0_0x0,(pFVar15->field0_0x0).pData[1]->shaderID);
  AddOption__18EPauseCategoryMenuP22EPauseCategoryMenuItem(local_130,pEVar18);
  pEVar18 = (EPauseCategoryMenuItem *)__builtin_new(0x90);
  pEVar18 = __22EPauseCategoryMenuItemUi(pEVar18,5);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
  *(undefined4 *)&pEVar18->m_bLocked = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(&pEVar18->field0_0x0,(pFVar15->field0_0x0).pData[2]->shaderID);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  InitInActiveShader__7EUIIconi(&pEVar18->field0_0x0,(pFVar15->field0_0x0).pData[2]->shaderID);
  AddOption__18EPauseCategoryMenuP22EPauseCategoryMenuItem(local_130,pEVar18);
  pEVar32 = this_02;
  do {
    if (iVar30 == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
      local_15c->m_messageId = 0x18;
    }
    else {
      AddItemsToMenu__18EPauseCategoryMenu(this_02);
      if (iVar30 == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
        local_158->m_messageId = 0x19;
      }
      else if (iVar30 == 2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
        pEVar24->m_messageId = 0x1a;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
        *(undefined4 *)((int)&this->m_Categories[0].m_messageId + iVar29) = 0x17;
      }
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    icondef.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    icondef.m_trigger = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    icondef.m_flags = 0;
                    /* end of inlined section */
    iVar30 = iVar30 + 1;
    this_02 = this_02 + 1;
    pEVar5 = (this->field0_0x0).field0_0x0.__vtable;
    iVar29 = iVar29 + 0x154;
    (*(code *)pEVar5[2].SetBoxDims)
              ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar5[2].SetPos + -0x44,
               pEVar32,&icondef);
    pEVar32 = pEVar32 + 1;
  } while (iVar30 < 8);
  this->m_bBuildCursor = 0;
  *(undefined4 *)&this->m_bShowInfo = 0;
  this->m_pItemInfo = (EPauseItemInfo *)0x0;
  while (this->m_pFont != (ERFont *)0x0) {
    DelRef__9EResource(&this->m_pFont->field0_0x0);
    this->m_pFont = (ERFont *)0x0;
  }
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
  fVar35 = 16.0;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar19 = (ERFont *)
            AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar19;
                    /* end of inlined section */
  SetSize__6ERFontffb(pEVar19,fVar35,1.0,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  SetSize__6ERFontffb(this->m_pFont,fVar35,1.0,true);
  this_00 = local_150;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  icondef.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  icondef.m_flags = 1;
  local_154 = &this->m_InfoPrompt;
  icondef.m_trigger = -1;
  icondef.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
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
  local_e4->m_pointsize = fVar35;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  local_e4->m_yAlign = E_FAY_CENTER;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  texticon.m_selColorIdx = 0;
  local_e4->m_colorIdx = 1;
  texticon.m_retChar = -1;
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
                    /* end of inlined section */
  fVar35 = 32.0;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1d0._16_4_ = (local_138->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_BuyPromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_BuyPromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_BuyPromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_BuyPromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_BuyPromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_BuyPromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  (local_138->m_def).__vtable = local_1d0._16_4_;
  local_1d0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  (this->m_BuyPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = 32.0 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_BuyPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_138,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_138,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
  local_1d0._32_4_ = (local_128->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_InfoPromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_InfoPromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_InfoPromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_InfoPromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_InfoPromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_InfoPromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  (local_128->m_def).__vtable = local_1d0._32_4_;
  local_1d0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_InfoPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = fVar35 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_InfoPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
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
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
  local_1d0._48_4_ = (local_118->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_BackPromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_BackPromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_BackPromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_BackPromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_BackPromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_BackPromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  (local_118->m_def).__vtable = local_1d0._48_4_;
  local_1d0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_BackPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = fVar35 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_BackPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_118,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_118,0x2ccf500a);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
  local_1d0._64_4_ = (local_108->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_SellPromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_SellPromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_SellPromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_SellPromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_SellPromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_SellPromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  (local_108->m_def).__vtable = local_1d0._64_4_;
  local_1d0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SellPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = fVar35 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SellPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_108,-0x747336cb);
  InitInActiveShader__7EUIIconi(local_108,-0x747336cb);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
  local_1d0._80_4_ = (EFontSize *)(local_fc->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_PreviewLPromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_PreviewLPromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_PreviewLPromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_PreviewLPromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_PreviewLPromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_PreviewLPromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  (local_fc->m_def).__vtable = (EUIIconDef__vtable *)local_1d0._80_4_;
  local_1d0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_PreviewLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = fVar35 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_PreviewLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_fc,0x4ccb12cc);
  InitInActiveShader__7EUIIconi(local_fc,0x4ccb12cc);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
  local_1d0._96_4_ = (local_e8->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_PreviewRPromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_PreviewRPromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_PreviewRPromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_PreviewRPromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_PreviewRPromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_PreviewRPromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  (local_e8->m_def).__vtable = local_1d0._96_4_;
  local_1d0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_PreviewRPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = fVar35 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_PreviewRPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_e8,-0x6775d2ed);
  InitInActiveShader__7EUIIconi(local_e8,-0x6775d2ed);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
  local_1d0._16_4_ = (local_14c->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_RotateLPromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_RotateLPromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_RotateLPromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_RotateLPromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_RotateLPromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_RotateLPromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  (local_14c->m_def).__vtable = local_1d0._16_4_;
  local_1d0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_RotateLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = fVar35 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_RotateLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_14c,0x4ccb12cc);
  InitInActiveShader__7EUIIconi(local_14c,0x4ccb12cc);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
  local_1d0._16_4_ = (local_140->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_RotateRPromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_RotateRPromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_RotateRPromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_RotateRPromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_RotateRPromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_RotateRPromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  (local_140->m_def).__vtable = local_1d0._16_4_;
  local_1d0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_RotateRPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = fVar35 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_RotateRPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_140,-0x6775d2ed);
  InitInActiveShader__7EUIIconi(local_140,-0x6775d2ed);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
  local_1d0._16_4_ = (local_12c->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_GrabPromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_GrabPromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_GrabPromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_GrabPromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_GrabPromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_GrabPromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  (local_12c->m_def).__vtable = local_1d0._16_4_;
  local_1d0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_GrabPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = fVar35 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_GrabPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
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
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
  local_1d0._16_4_ = (local_11c->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_CancelPromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_CancelPromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_CancelPromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_CancelPromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_CancelPromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_CancelPromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  (local_11c->m_def).__vtable = local_1d0._16_4_;
  local_1d0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_CancelPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = fVar35 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_CancelPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_11c,0x2ccf500a);
  InitInActiveShader__7EUIIconi(local_11c,0x2ccf500a);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
  local_1d0._16_4_ = (local_110->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_PlacePromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_PlacePromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_PlacePromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_PlacePromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_PlacePromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_PlacePromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  (local_110->m_def).__vtable = local_1d0._16_4_;
  local_1d0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_PlacePromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = fVar35 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_PlacePromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_110,-0x3e263a13);
  InitInActiveShader__7EUIIconi(local_110,-0x3e263a13);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
  local_1d0._16_4_ = (local_f0->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_SwitchSidesLPromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_SwitchSidesLPromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_SwitchSidesLPromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_SwitchSidesLPromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_SwitchSidesLPromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_SwitchSidesLPromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  (local_f0->m_def).__vtable = local_1d0._16_4_;
  local_1d0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SwitchSidesLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = fVar35 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SwitchSidesLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_f0,-0x2a3dbc8a);
  InitInActiveShader__7EUIIconi(local_f0,-0x2a3dbc8a);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
  local_1d0._16_4_ = (local_d8->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_SwitchSidesRPromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_SwitchSidesRPromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_SwitchSidesRPromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_SwitchSidesRPromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_SwitchSidesRPromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_SwitchSidesRPromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  (local_d8->m_def).__vtable = local_1d0._16_4_;
  local_1d0._4_4_ = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SwitchSidesRPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = fVar35 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_SwitchSidesRPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_d8,0x1837ca9);
  InitInActiveShader__7EUIIconi(local_d8,0x1837ca9);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_e0[1] = (EUIIconDef__vtable *)0xffffffff;
  local_1d8 = 0;
  local_1d0._16_4_ = (local_100->m_def).__vtable;
  local_e0[3] = (EUIIconDef__vtable *)0x1;
  local_1d0._0_4_ = (EStorable__vtable *)0x0;
  puVar1 = (undefined *)((int)&(this->m_WallsPromptIcon).m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | CONCAT44(local_1dc,1) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_WallsPromptIcon).m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(local_1dc,1) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_WallsPromptIcon).m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | ((ulong)uStack_1d4 << 0x20) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_WallsPromptIcon).m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = ((ulong)uStack_1d4 << 0x20) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)((int)&(this->m_WallsPromptIcon).m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 | 0x3a890800000000U >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_WallsPromptIcon).m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = 0x3a890800000000 << uVar25 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  local_1d0._4_4_ = _vt_10EUIIconDef;
  (local_100->m_def).__vtable = local_1d0._16_4_;
                    /* end of inlined section */
  iVar29 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_WallsPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_1e0 = (EUIIconDef__vtable *)0x3d4ccccd;
                    /* end of inlined section */
  local_1dc = fVar35 / (float)iVar29;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_WallsPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_1dc;
                    /* end of inlined section */
  InitActiveShader__7EUIIconi(local_100,-0x3ba5be85);
  InitInActiveShader__7EUIIconi(local_100,-0x3ba5be85);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0 = (local_144->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* end of inlined section */
  (local_144->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1e0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_144->field0_0x0,local_e4);
  SetFont__11EUITextIconi((EUITextIcon *)local_144,-0x2080f4e9);
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"buy_action_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_144->field0_0x0,psVar20,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_144,local_138);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_144->m_gap = 0.006;
  fVar35 = (this->m_BuyPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar19 = this->m_pFont;
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"buy_action_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1d0,pEVar19,SUB41(psVar20,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1dc = (this->m_BuyPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1e0 = (EUIIconDef__vtable *)(fVar35 + 0.006 + (float)local_1d0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0
            + 8) = local_1dc;
  (this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1e0;
  SetPositions__9EUIPrompt(local_144);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_144,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0 = (local_124->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* end of inlined section */
  (local_124->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1e0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_124->field0_0x0,local_e4);
  SetFont__11EUITextIconi((EUITextIcon *)local_124,-0x2080f4e9);
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"information_action_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_124->field0_0x0,psVar20,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_124,local_128);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_124->m_gap = 0.006;
  fVar35 = (this->m_InfoPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar19 = this->m_pFont;
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"information_action_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1d0,pEVar19,SUB41(psVar20,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1dc = (this->m_InfoPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1e0 = (EUIIconDef__vtable *)(fVar35 + 0.006 + (float)local_1d0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0
            + 8) = local_1dc;
  (this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1e0;
  SetPositions__9EUIPrompt(local_154);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_154,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0 = (local_114->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* end of inlined section */
  (local_114->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1e0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_114->field0_0x0,local_e4);
  SetFont__11EUITextIconi((EUITextIcon *)local_114,-0x2080f4e9);
  psVar20 = GetUiString__7EGlobalPCc(&_globals,"back");
  InitString__17EUIStaticTextIconPCUsi(&local_114->field0_0x0,psVar20,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_114,&this->m_BackPromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_114->m_gap = 0.006;
  fVar35 = (this->m_BackPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar19 = this->m_pFont;
  psVar20 = GetUiString__7EGlobalPCc(&_globals,"back");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1d0,pEVar19,SUB41(psVar20,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1dc = (this->m_BackPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1e0 = (EUIIconDef__vtable *)(fVar35 + 0.006 + (float)local_1d0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0
            + 8) = local_1dc;
  (this->m_BackPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1e0;
  SetPositions__9EUIPrompt(local_114);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_114,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0 = (local_f8->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* end of inlined section */
  (local_f8->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1e0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_f8->field0_0x0,local_e4);
  SetFont__11EUITextIconi((EUITextIcon *)local_f8,-0x2080f4e9);
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"sell_action_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_f8->field0_0x0,psVar20,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_f8,&this->m_SellPromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_f8->m_gap = 0.006;
  fVar35 = (this->m_SellPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar19 = this->m_pFont;
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"sell_action_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1d0,pEVar19,SUB41(psVar20,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1dc = (this->m_SellPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1e0 = (EUIIconDef__vtable *)(fVar35 + 0.006 + (float)local_1d0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0
            + 8) = local_1dc;
  (this->m_SellPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1e0;
  SetPositions__9EUIPrompt(local_f8);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_f8,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0 = (local_dc->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* end of inlined section */
  (local_dc->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1e0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_dc->field0_0x0,local_e4);
  SetFont__11EUITextIconi((EUITextIcon *)local_dc,-0x2080f4e9);
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"preview_action_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_dc->field0_0x0,psVar20,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_dc,&this->m_PreviewLPromptIcon);
  AddIcon__9EUIPromptP7EUIIcon(local_dc,&this->m_PreviewRPromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_dc->m_gap = 0.006;
  fVar33 = (this->m_PreviewLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
  fVar35 = (this->m_PreviewRPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar19 = this->m_pFont;
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"preview_action_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1d0,pEVar19,SUB41(psVar20,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1dc = (this->m_PreviewLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1e0 = (EUIIconDef__vtable *)(fVar33 + 0.006 + fVar35 + 0.006 + (float)local_1d0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                   field0_0x0 + 8) = local_1dc;
  (this->m_PreviewPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1e0;
  SetPositions__9EUIPrompt(local_dc);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_dc,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0 = (local_13c->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* end of inlined section */
  (local_13c->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1e0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_13c->field0_0x0,local_e4);
  SetFont__11EUITextIconi((EUITextIcon *)local_13c,-0x2080f4e9);
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"rotate_action_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_13c->field0_0x0,psVar20,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_13c,&this->m_RotateLPromptIcon);
  AddIcon__9EUIPromptP7EUIIcon(local_13c,&this->m_RotateRPromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_13c->m_gap = 0.006;
  fVar33 = (this->m_RotateLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
  fVar35 = (this->m_RotateRPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar19 = this->m_pFont;
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"rotate_action_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1d0,pEVar19,SUB41(psVar20,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1dc = (this->m_RotateLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1e0 = (EUIIconDef__vtable *)(fVar33 + 0.006 + fVar35 + 0.006 + (float)local_1d0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                   field0_0x0 + 8) = local_1dc;
  (this->m_RotatePrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1e0;
  SetPositions__9EUIPrompt(local_13c);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_13c,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0 = (local_120->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* end of inlined section */
  (local_120->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1e0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_120->field0_0x0,local_e4);
  SetFont__11EUITextIconi((EUITextIcon *)local_120,-0x2080f4e9);
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"grab_action_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_120->field0_0x0,psVar20,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_120,&this->m_GrabPromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_120->m_gap = 0.006;
  fVar35 = (this->m_GrabPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar19 = this->m_pFont;
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"grab_action_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1d0,pEVar19,SUB41(psVar20,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1dc = (this->m_GrabPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1e0 = (EUIIconDef__vtable *)(fVar35 + 0.006 + (float)local_1d0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0
            + 8) = local_1dc;
  (this->m_GrabPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1e0;
  SetPositions__9EUIPrompt(local_120);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_120,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0 = (local_10c->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* end of inlined section */
  (local_10c->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1e0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_10c->field0_0x0,local_e4);
  SetFont__11EUITextIconi((EUITextIcon *)local_10c,-0x2080f4e9);
  psVar20 = GetUiString__7EGlobalPCc(&_globals,"cancel");
  InitString__17EUIStaticTextIconPCUsi(&local_10c->field0_0x0,psVar20,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_10c,&this->m_CancelPromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_10c->m_gap = 0.006;
  fVar35 = (this->m_CancelPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar19 = this->m_pFont;
  psVar20 = GetUiString__7EGlobalPCc(&_globals,"cancel");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1d0,pEVar19,SUB41(psVar20,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1dc = (this->m_CancelPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1e0 = (EUIIconDef__vtable *)(fVar35 + 0.006 + (float)local_1d0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                   field0_0x0 + 8) = local_1dc;
  (this->m_CancelPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1e0;
  SetPositions__9EUIPrompt(local_10c);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_10c,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0 = (local_f4->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* end of inlined section */
  (local_f4->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1e0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_f4->field0_0x0,local_e4);
  SetFont__11EUITextIconi((EUITextIcon *)local_f4,-0x2080f4e9);
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"place_action_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_f4->field0_0x0,psVar20,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_f4,&this->m_PlacePromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_f4->m_gap = 0.006;
  fVar35 = (this->m_PlacePromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar19 = this->m_pFont;
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"place_action_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1d0,pEVar19,SUB41(psVar20,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1dc = (this->m_PlacePromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1e0 = (EUIIconDef__vtable *)(fVar35 + 0.006 + (float)local_1d0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                   field0_0x0 + 8) = local_1dc;
  (this->m_PlacePrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1e0;
  SetPositions__9EUIPrompt(local_f4);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_f4,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0 = (local_134->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3)
  ;
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* end of inlined section */
  (local_134->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1e0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&local_134->field0_0x0,local_e4);
  SetFont__11EUITextIconi((EUITextIcon *)local_134,-0x2080f4e9);
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"switch_sides_prompt");
  InitString__17EUIStaticTextIconPCUsi(&local_134->field0_0x0,psVar20,0x20);
  AddIcon__9EUIPromptP7EUIIcon(local_134,&this->m_SwitchSidesLPromptIcon);
  AddIcon__9EUIPromptP7EUIIcon(local_134,&this->m_SwitchSidesRPromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_134->m_gap = 0.006;
  fVar33 = (this->m_SwitchSidesLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
  fVar35 = (this->m_SwitchSidesRPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar19 = this->m_pFont;
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"switch_sides_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1d0,pEVar19,SUB41(psVar20,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  local_1dc = (this->m_SwitchSidesLPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1e0 = (EUIIconDef__vtable *)(fVar33 + 0.006 + fVar35 + 0.006 + (float)local_1d0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                   field0_0x0 + 8) = local_1dc;
  (this->m_SwitchSidesPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1e0;
  SetPositions__9EUIPrompt(local_134);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)local_134,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_1e0 = (this_00->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_trigger,icondef.m_flags) >> (7 - uVar25) * 8;
  pEVar2 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar25 = (uint)pEVar2 & 7;
  puVar12 = (ulong *)((int)pEVar2 - uVar25);
  *puVar12 = CONCAT44(icondef.m_trigger,icondef.m_flags) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) >> (7 - uVar25) * 8;
  piVar3 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar25 = (uint)piVar3 & 7;
  puVar12 = (ulong *)((int)piVar3 - uVar25);
  *puVar12 = CONCAT44(icondef.m_colorIdx,icondef.m_selColorIdx) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3);
  uVar25 = (uint)puVar1 & 7;
  puVar12 = (ulong *)(puVar1 + -uVar25);
  *puVar12 = *puVar12 & -1L << (uVar25 + 1) * 8 |
             CONCAT44(icondef.__vtable,icondef.m_pCtrl) >> (7 - uVar25) * 8;
  ppEVar31 = &(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar25 = (uint)ppEVar31 & 7;
  puVar12 = (ulong *)((int)ppEVar31 - uVar25);
  *puVar12 = CONCAT44(icondef.__vtable,icondef.m_pCtrl) << uVar25 * 8 |
             *puVar12 & 0xffffffffffffffffU >> (8 - uVar25) * 8;
                    /* end of inlined section */
  (this_00->field0_0x0).field0_0x0.field0_0x0.m_def.__vtable = local_1e0;
  SetTextDef__17EUIStaticTextIconRC14EUITextIconDef(&this_00->field0_0x0,local_e4);
  SetFont__11EUITextIconi((EUITextIcon *)this_00,-0x2080f4e9);
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"walls_prompt");
  InitString__17EUIStaticTextIconPCUsi(&this_00->field0_0x0,psVar20,0x20);
  AddIcon__9EUIPromptP7EUIIcon(this_00,&this->m_WallsPromptIcon);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  this_00->m_gap = 0.006;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  fVar35 = (this->m_WallsPromptIcon).field0_0x0.m_WDH.field0_0x0.d[0];
                    /* end of inlined section */
  pEVar19 = this->m_pFont;
  psVar20 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"walls_prompt");
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)local_1d0,pEVar19,SUB41(psVar20,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  local_1dc = (this->m_WallsPromptIcon).field0_0x0.m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
  local_1e0 = (EUIIconDef__vtable *)(fVar35 + 0.006 + (float)local_1d0._0_4_);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  *(float *)((int)&(this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                   field0_0x0 + 8) = local_1dc;
  (this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0] =
       (float)local_1e0;
  SetPositions__9EUIPrompt(this_00);
                    /* end of inlined section */
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this_00,2,true);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  return;
}

void EPauseBuildMenu::Reset() {
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
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_PreviewPrompt);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_RotatePrompt);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_GrabPrompt);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_CancelPrompt);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_PlacePrompt);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_SwitchSidesPrompt);
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

void EPauseBuildMenu::Draw(ERC *prc) {
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
	ERFont *this;
	ERFont *this;
	EPauseCategoryMenuItem *this;
	EGraphics *this;
	float x;
	ERFont *this;
	ERC *prc;
	EPauseCategoryMenuItem *this;
	EGraphics *this;
	float x;
	ERFont *this;
	ERC *prc;
	EPauseCategoryMenuItem *this;
	EGraphics *this;
	float x;
	ERFont *this;
	ERC *prc;
	EPauseCategoryMenuItem *this;
	EGraphics *this;
	float x;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EPauseCategoryMenuItem *this;
	EGraphics *this;
	float x;
	ERFont *this;
	ERC *prc;
	EPauseCategoryMenuItem *this;
	ERFont *this;
	ERFont *this;
	EPauseCategoryMenuItem *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EPauseCategoryMenuItem *this;
	EGraphics *this;
	float x;
	ERFont *this;
	ERC *prc;
	EPauseCategoryMenuItem *this;
	ERFont *this;
	ERFont *this;
	EPauseCategoryMenuItem *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EPauseCategoryMenuItem *this;
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
	int nSelectedIndex;
	EGraphics *this;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
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
	ERFont *this;
	ERFont *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	ERFont *this;
	ERFont *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	ERFont *this;
	ERFont *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	ObjSelector *this;
	ObjSelector *this;
	ERFont *this;
	ERFont *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EUIPrompt *pC1R1;
	EUIPrompt *pC1R2;
	EUIPrompt *pC2R1;
	EUIPrompt *pC2R2;
	EUIPrompt *pC3R1;
	EUIPrompt *pC3R2;
	ESimsCursor *pCurs;
	CursorMode mode;
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
	EUIObjectNode *this;
	EUIObjectNode *this;
	EGraphics *this;
	EGraphics *this;
	float x;
	EGraphics *this;
	float x;
	EGraphics *this;
	float x;
	
  undefined *puVar1;
  EVec2 *pEVar2;
  uchar uVar3;
  ushort uVar4;
  ushort uVar5;
  EUIObjectNode__vtable *pEVar6;
  WallTile *pWVar7;
  FloorTile *pFVar8;
  ObjSelector *pOVar9;
  ESimsCursor__15_1743 *this_00;
  CursorMode CVar10;
  EUIVirtualCtrl__vtable *pEVar11;
  ulong *puVar12;
  bool bVar13;
  bool bVar14;
  short sVar15;
  undefined8 *puVar16;
  ELocString EVar17;
  EPauseCategoryMenuItem *pEVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  short *psVar22;
  CursorMode CVar23;
  undefined8 uVar24;
  undefined4 uVar26;
  long lVar25;
  undefined4 uVar27;
  undefined4 uVar28;
  ERFont *pEVar29;
  ERShader *pEVar30;
  FenceData *pFVar31;
  ulong uVar32;
  null____pfn_or_delta2 nVar33;
  EPauseCategoryMenu *pEVar34;
  EUIPrompt *pEVar35;
  undefined8 unaff_s0;
  EUIPrompt *pEVar36;
  undefined8 unaff_s1;
  EUIPrompt *pEVar37;
  undefined8 unaff_s2;
  EUIPrompt *pEVar38;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  EUIPrompt *pEVar39;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  EPauseScrollMenu *pEVar40;
  undefined8 unaff_s7;
  EUIPrompt *pEVar41;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  int iVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  EVec2 vScreenSize;
  EVec3 vCol1;
  EVec3 vPos;
  EVec3 vCol3;
  float local_360;
  float local_35c;
  float local_358;
  int local_354;
  int local_350;
  int local_34c;
  EHashTableNode *local_348;
  EHashTableNode *local_344;
  EHashTableNode **local_340;
  float local_33c;
  EFontSize *local_330;
  undefined4 local_32c;
  undefined4 local_320;
  undefined4 local_31c;
  StackString2_256_ sPrice;
  undefined local_100 [20];
  int i;
  int nSelectedIndex;
  EPauseScrollMenu *local_e4;
  EPauseCategoryMenu *local_e0;
  EPauseScrollMenu *local_dc;
  int local_d0;
  int iStack_cc;
  EHashTableNode **local_c0;
  uint uStack_bc;
  EFontSize *local_b0;
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
  
  local_70 = (undefined4)unaff_s6;
  uStack_6c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_90 = (undefined4)unaff_s4;
  uStack_8c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s7;
  uStack_5c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_80 = (undefined4)unaff_s5;
  uStack_7c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_a0 = (undefined4)unaff_s3;
  uStack_9c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_b0 = (EFontSize *)unaff_s2;
  uStack_ac = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_c0 = (EHashTableNode **)unaff_s1;
  uStack_bc = (uint)((ulong)unaff_s1 >> 0x20);
  local_d0 = (int)unaff_s0;
  iStack_cc = (int)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).field0_0x0.m_flags >> 1 & 1U) == 0) {
    return;
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  fVar44 = (float)_pGfx->m_yscreen;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  fVar43 = (float)_pGfx->m_xscreen;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  local_100._16_4_ = _globals._pFenceSet;
                    /* end of inlined section */
  _pblm_text_line_y = (_13EUIObjectNode_SAFE_BOTTOM - 0.155) - 6.0 / fVar44;
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
  fVar46 = 0.0;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&this->m_vSidePos,
             &vCol1,&vPos,&vCol3,0x35f4b0);
  Select__8ERShaderP3ERCi(this->m_pMenuBevelRightShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  local_360 = 10.0 / fVar43;
  local_35c = (this->m_vSideSize).field0_0x0.d[1] * fVar44 * 0.00390625;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vCol1.field0_0x0._0_8_ =
       CONCAT44((this->m_vSidePos).field0_0x0.d[1] - 1.0 / fVar44,
                ((this->m_vSidePos).field0_0x0.d[0] + (this->m_vSideSize).field0_0x0.d[0]) -
                1.0 / fVar43);
  local_344 = (EHashTableNode *)0x3f800000;
  local_348 = (EHashTableNode *)0x3f800000;
  local_34c = 0x3f800000;
  local_350 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].ClipRect)
            (fVar46,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vCol1,&local_360,
             &local_350);
  Select__8ERShaderP3ERCi(this->m_pBlankShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vCol1.field0_0x0._0_8_ =
       CONCAT44((this->m_vBottomPos).field0_0x0.d[1] + (this->m_vBottomSize).field0_0x0.d[1],
                (this->m_vBottomPos).field0_0x0.d[0] + (this->m_vBottomSize).field0_0x0.d[0]);
  vPos.field0_0x0._0_8_ = CONCAT44(0x3f800000,fVar46);
  vCol3.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
  vCol3.field0_0x0.d[1] = fVar46;
  (*(code *)prc->__vtable[1].DisplayList)
            (fVar46,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,
             &this->m_vBottomPos,&vCol1,&vPos,&vCol3,0x35f4b0);
  if ((this->m_nDisplayMode == '\0') || (this->m_nDisplayMode == '\v')) {
    Select__8ERShaderP3ERCi(this->m_pMenuDPadReverseShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vCol3.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0._0_8_ = 0x3f8000003f800000;
    vCol1.field0_0x0._0_8_ =
         CONCAT44((this->m_vBottomPos).field0_0x0.d[1] - 1.0 / fVar44,
                  _13EUIObjectNode_SAFE_LEFT + -8.0 / fVar43);
    vCol3.field0_0x0.d[2] = 1.0;
    vCol3.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (fVar46,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vCol1,&vPos,
               &vCol3);
    pEVar30 = this->m_pMenuBevelShdr;
  }
  else {
    pEVar30 = this->m_pMenuBevelShdr;
  }
  Select__8ERShaderP3ERCi(pEVar30,prc,0);
  if ((this->m_nDisplayMode == '\0') || (this->m_nDisplayMode == '\v')) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vPos.field0_0x0._0_8_ = CONCAT44(0x3f000000,fVar43 * 0.00390625);
    vCol3.field0_0x0.d[0] = 1.0;
    vCol1.field0_0x0._0_8_ =
         (ulong)(uint)((this->m_vBottomPos).field0_0x0.d[1] - 4.0 / fVar44) << 0x20;
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
         CONCAT44((this->m_vBottomPos).field0_0x0.d[1] - 4.0 / fVar44,
                  (this->m_vBottomPos).field0_0x0.d[0]);
    vPos.field0_0x0._0_8_ =
         CONCAT44(0x3f000000,(this->m_vBottomSize).field0_0x0.d[0] * fVar43 * 0.00390625);
    vCol3.field0_0x0.d[0] = 1.0;
    vCol3.field0_0x0.d[2] = 1.0;
    vCol3.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vCol1,&vPos,&vCol3);
    uVar3 = this->m_nDisplayMode;
  }
  if (uVar3 == '\0') {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    pEVar34 = this->m_Categories;
    uVar48 = 0x3f800000;
    i = 7;
    DrawTextBox__10SimInfoWinP3ERCffff
              (prc,0.193625,(_13EUIObjectNode_SAFE_BOTTOM - 0.155) - 7.0 / (float)_pGfx->m_yscreen,
               (_13EUIObjectNode_SAFE_RIGHT - 0.003125) - 0.193625,1.0);
    fVar46 = sinf(this->m_PulseAccumulator);
    fVar46 = (fVar46 * 0.5 + 1.0) * 10.0;
    fVar47 = 32.0 / fVar44 + fVar46 / fVar44;
    fVar46 = 32.0 / fVar43 + fVar46 / fVar43;
    do {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)(pEVar34->field0_0x0).field0_0x0.m_flags >> 3 & 1U) != 0) {
        pEVar6 = (pEVar34->field0_0x0).field0_0x0.__vtable;
        puVar16 = (undefined8 *)
                  (*(code *)pEVar6[1].OnButtonRepeat)
                            ((int)(pEVar34->field0_0x0).m_maxBackShdrSize[-0xc] +
                             *(short *)&pEVar6[1].StateChanged + 4);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vCol1.field0_0x0._0_8_ = *puVar16;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vCol1.field0_0x0.d[2] = (float)*(undefined4 *)(puVar16 + 1);
                    /* end of inlined section */
        vPos.field0_0x0._0_8_ =
             CONCAT44(vCol1.field0_0x0.d[2] + 13.0 / fVar44,*(float *)puVar16 + 16.0 / fVar43);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        Select__8ERShaderP3ERCi(this->m_pGlowShader,prc,0);
        vCol3.field0_0x0.d[0] = vPos.field0_0x0.d[0] - fVar46 * 0.5;
        vCol3.field0_0x0.d[1] = vPos.field0_0x0.d[1] - fVar47 * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_330 = (EFontSize *)0x0;
                    /* end of inlined section */
        local_340 = (EHashTableNode **)(vCol3.field0_0x0.d[0] + fVar46);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        local_33c = vCol3.field0_0x0.d[1] + fVar47;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_31c = 0;
                    /* end of inlined section */
        local_32c = uVar48;
        local_320 = uVar48;
        (*(code *)prc->__vtable[1].DisplayList)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vCol3,
                   &local_340,&local_330,&local_320,0x3632a0);
      }
      pEVar34 = pEVar34 + 1;
      i = i + -1;
    } while (-1 < i);
    Draw__7EUIMenuP3ERC(&this->field0_0x0,prc);
    pEVar18 = (EPauseCategoryMenuItem *)0x0;
                    /* inlined from ../MSrc/stringbuffer2.h */
    __13StringBuffer2PUsUi(&sPrice.field0_0x0,sPrice.fChars,0x100);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
                    /* end of inlined section */
    if (0.0 < _11EPausePanel_m_ItemInfoTimer) {
      SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
      uVar28 = _WHITE.field0_0x0.d[3];
      uVar27 = _WHITE.field0_0x0.d[2];
      uVar26 = _WHITE.field0_0x0.d[1];
      if (this->m_bBuildCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        pEVar29 = this->m_pFont;
        (pEVar29->m_vColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0];
        (pEVar29->m_vColor).field0_0x0.d[1] = uVar26;
        (pEVar29->m_vColor).field0_0x0.d[2] = uVar27;
        (pEVar29->m_vColor).field0_0x0.d[3] = uVar28;
      }
      else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        fVar43 = _WHITE.field0_0x0.d[3] * 0.65;
        fVar44 = _WHITE.field0_0x0.d[1] * 0.65;
        pEVar29 = this->m_pFont;
        vPos.field0_0x0.d[2] = _WHITE.field0_0x0.d[2] * 0.65;
        vPos.field0_0x0._0_8_ = CONCAT44(fVar44,_WHITE.field0_0x0.d[0] * 0.65);
                    /* end of inlined section */
        (pEVar29->m_vColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0] * 0.65;
        (pEVar29->m_vColor).field0_0x0.d[1] = fVar44;
        (pEVar29->m_vColor).field0_0x0.d[2] = vPos.field0_0x0.d[2];
        (pEVar29->m_vColor).field0_0x0.d[3] = fVar43;
      }
                    /* end of inlined section */
      pEVar40 = &this->m_Categories[0].m_menu;
      Select__6ERFontP3ERC(this->m_pFont,prc);
      fVar43 = _13EUIObjectNode_SAFE_RIGHT;
      fVar44 = 12.0;
      local_e0 = this->m_Categories;
      fVar46 = 0.0125;
      i = 0;
      local_dc = pEVar40;
      do {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if (((int)(local_e0->field0_0x0).field0_0x0.m_flags >> 3 & 1U) == 0) goto LAB_0019f944;
        if (i == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18 = GetSelectedItem__16EPauseScrollMenu(&this->m_Categories[0].m_menu);
          uVar19 = pEVar18->m_type;
                    /* end of inlined section */
          if (uVar19 == 2) {
            psVar22 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"wall_tool_name");
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            vCol3.field0_0x0.d[0] = _pblm_text_line_x;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
            vCol3.field0_0x0.d[1] = _pblm_text_line_y + fVar44 / (float)_pGfx->m_yscreen;
            vPos.field0_0x0._0_8_ = CONCAT44(vCol3.field0_0x0.d[1],_pblm_text_line_x);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (this->m_pFont,prc,psVar22,true,(EVec2 *)&vCol3,E_FAX_LEFT,E_FAY_CENTER,
                       (EVec2 *)0x0);
                    /* end of inlined section */
          }
          else {
                    /* end of inlined section */
            if (uVar19 == 3) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              iVar42 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              pFVar31 = *((local_100._16_4_)->field0_0x0).pData;
            }
            else {
                    /* end of inlined section */
              if (uVar19 != 4) {
                    /* end of inlined section */
                if (uVar19 == 5) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                  vCol3.field0_0x0.d[0] = _pblm_text_line_x;
                    /* end of inlined section */
                  vCol3.field0_0x0.d[1] = _pblm_text_line_y + fVar44 / (float)_pGfx->m_yscreen;
                  vPos.field0_0x0._0_8_ = CONCAT44(vCol3.field0_0x0.d[1],_pblm_text_line_x);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                  DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                            (this->m_pFont,prc,
                             *(((local_100._16_4_)->field0_0x0).pData[2]->name).ptr,true,
                             (EVec2 *)&vCol3,E_FAX_LEFT,E_FAY_CENTER,(EVec2 *)0x0);
                }
                goto LAB_0019f238;
              }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
              iVar42 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
              pFVar31 = ((local_100._16_4_)->field0_0x0).pData[1];
            }
                    /* end of inlined section */
            vCol3.field0_0x0.d[0] = _pblm_text_line_x;
                    /* end of inlined section */
            vCol3.field0_0x0.d[1] = _pblm_text_line_y + fVar44 / (float)iVar42;
            vPos.field0_0x0._0_8_ = CONCAT44(vCol3.field0_0x0.d[1],_pblm_text_line_x);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (this->m_pFont,prc,*(pFVar31->name).ptr,true,(EVec2 *)&vCol3,E_FAX_LEFT,
                       E_FAY_CENTER,(EVec2 *)0x0);
                    /* end of inlined section */
          }
LAB_0019f238:
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18 = GetSelectedItem__16EPauseScrollMenu(local_dc);
                    /* end of inlined section */
          erase__13StringBuffer2(&sPrice.field0_0x0);
          uVar19 = GetPrice__22EPauseCategoryMenuItem(pEVar18);
          GetMoneyString__FiRt12StackString21Ui256(uVar19,&sPrice);
          uVar19 = GetPrice__22EPauseCategoryMenuItem(pEVar18);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          uVar20 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                             ((int)&_5Globs_pSimulator->__vtable +
                              (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
          if ((uVar20 < uVar19) && (bVar13 = IsBuildHouseMode__7EGlobal(&_globals), !bVar13)) {
            SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
            if (this->m_bBuildCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
              pEVar29 = this->m_pFont;
              uVar24 = CONCAT44(_RED.field0_0x0.d[1],_RED.field0_0x0.d[0]);
              uVar27 = _RED.field0_0x0.d[2];
              uVar28 = _RED.field0_0x0.d[3];
            }
            else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
              vPos.field0_0x0.d[2] = _RED.field0_0x0.d[2] * 0.65;
              pEVar29 = this->m_pFont;
              vPos.field0_0x0._0_8_ =
                   CONCAT44(_RED.field0_0x0.d[1] * 0.65,_RED.field0_0x0.d[0] * 0.65);
              uVar24 = vPos.field0_0x0._0_8_;
              uVar27 = vPos.field0_0x0.d[2];
              uVar28 = _RED.field0_0x0.d[3] * 0.65;
                    /* end of inlined section */
            }
            (pEVar29->m_vColor).field0_0x0.d[0] = (float)uVar24;
            (pEVar29->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar24 >> 0x20);
            (pEVar29->m_vColor).field0_0x0.d[2] = uVar27;
            (pEVar29->m_vColor).field0_0x0.d[3] = uVar28;
                    /* end of inlined section */
            Select__6ERFontP3ERC(this->m_pFont,prc);
          }
          pEVar29 = this->m_pFont;
          psVar22 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          DoGetStringSize__6ERFontPvbP7EWindow
                    ((ERFont *)&vPos,pEVar29,SUB41(psVar22,0),(EWindow *)&pGifTag1);
          vCol1.field0_0x0._0_8_ = vPos.field0_0x0._0_8_;
          puVar1 = (undefined *)((int)&vCol1.field0_0x0 + 7);
                    /* end of inlined section */
          uVar19 = (uint)puVar1 & 7;
          puVar12 = (ulong *)(puVar1 + -uVar19);
          *puVar12 = *puVar12 & -1L << (uVar19 + 1) * 8 |
                     (ulong)vPos.field0_0x0._0_8_ >> (7 - uVar19) * 8;
                    /* end of inlined section */
LAB_0019f65c:
          psVar22 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          vCol3.field0_0x0.d[0] = (fVar43 - fVar46) - vCol1.field0_0x0.d[0];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          vCol3.field0_0x0.d[1] = _pblm_text_line_y + fVar44 / (float)_pGfx->m_yscreen;
          vPos.field0_0x0._0_8_ = CONCAT44(vCol3.field0_0x0.d[1],vCol3.field0_0x0.d[0]);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                    (this->m_pFont,prc,psVar22,true,(EVec2 *)&vCol3,E_FAX_LEFT,E_FAY_CENTER,
                     (EVec2 *)0x0);
                    /* end of inlined section */
        }
        else if (i == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18 = GetSelectedItem__16EPauseScrollMenu(&this->m_Categories[1].m_menu);
                    /* end of inlined section */
          if (pEVar18 != (EPauseCategoryMenuItem *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
            vCol3.field0_0x0.d[0] = _pblm_text_line_x;
                    /* end of inlined section */
            vCol3.field0_0x0.d[1] = _pblm_text_line_y + fVar44 / (float)_pGfx->m_yscreen;
            vPos.field0_0x0._0_8_ = CONCAT44(vCol3.field0_0x0.d[1],_pblm_text_line_x);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (this->m_pFont,prc,*(pEVar18->m_wallNode->name).ptr,true,(EVec2 *)&vCol3,
                       E_FAX_LEFT,E_FAY_CENTER,(EVec2 *)0x0);
            pWVar7 = pEVar18->m_wallNode;
                    /* end of inlined section */
            uVar19 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                               ((int)&_5Globs_pSimulator->__vtable +
                                (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
            if ((uVar19 < pWVar7->cost) && (bVar13 = IsBuildHouseMode__7EGlobal(&_globals), !bVar13)
               ) {
              SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
              if (this->m_bBuildCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                pEVar29 = this->m_pFont;
                uVar24 = CONCAT44(_RED.field0_0x0.d[1],_RED.field0_0x0.d[0]);
                uVar27 = _RED.field0_0x0.d[2];
                uVar28 = _RED.field0_0x0.d[3];
              }
              else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                vPos.field0_0x0.d[2] = _RED.field0_0x0.d[2] * 0.65;
                pEVar29 = this->m_pFont;
                vPos.field0_0x0._0_8_ =
                     CONCAT44(_RED.field0_0x0.d[1] * 0.65,_RED.field0_0x0.d[0] * 0.65);
                uVar24 = vPos.field0_0x0._0_8_;
                uVar27 = vPos.field0_0x0.d[2];
                uVar28 = _RED.field0_0x0.d[3] * 0.65;
                    /* end of inlined section */
              }
              (pEVar29->m_vColor).field0_0x0.d[0] = (float)uVar24;
              (pEVar29->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar24 >> 0x20);
              (pEVar29->m_vColor).field0_0x0.d[2] = uVar27;
              (pEVar29->m_vColor).field0_0x0.d[3] = uVar28;
                    /* end of inlined section */
              Select__6ERFontP3ERC(this->m_pFont,prc);
            }
            erase__13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
            GetMoneyString__FiRt12StackString21Ui256(pEVar18->m_wallNode->cost,&sPrice);
            pEVar29 = this->m_pFont;
            psVar22 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            DoGetStringSize__6ERFontPvbP7EWindow
                      ((ERFont *)&vPos,pEVar29,SUB41(psVar22,0),(EWindow *)&pGifTag1);
            vCol1.field0_0x0._0_8_ = vPos.field0_0x0._0_8_;
            puVar1 = (undefined *)((int)&vCol1.field0_0x0 + 7);
                    /* end of inlined section */
            uVar19 = (uint)puVar1 & 7;
            puVar12 = (ulong *)(puVar1 + -uVar19);
            *puVar12 = *puVar12 & -1L << (uVar19 + 1) * 8 |
                       (ulong)vPos.field0_0x0._0_8_ >> (7 - uVar19) * 8;
                    /* end of inlined section */
            goto LAB_0019f65c;
          }
        }
        else if (i == 2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18 = GetSelectedItem__16EPauseScrollMenu(&this->m_Categories[2].m_menu);
                    /* end of inlined section */
          if (pEVar18 != (EPauseCategoryMenuItem *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
            vCol3.field0_0x0.d[0] = _pblm_text_line_x;
                    /* end of inlined section */
            vCol3.field0_0x0.d[1] = _pblm_text_line_y + fVar44 / (float)_pGfx->m_yscreen;
            vPos.field0_0x0._0_8_ = CONCAT44(vCol3.field0_0x0.d[1],_pblm_text_line_x);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (this->m_pFont,prc,*(pEVar18->m_floorNode->name).ptr,true,(EVec2 *)&vCol3,
                       E_FAX_LEFT,E_FAY_CENTER,(EVec2 *)0x0);
            pFVar8 = pEVar18->m_floorNode;
                    /* end of inlined section */
            uVar19 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                               ((int)&_5Globs_pSimulator->__vtable +
                                (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
            if ((uVar19 < pFVar8->cost) && (bVar13 = IsBuildHouseMode__7EGlobal(&_globals), !bVar13)
               ) {
              SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
              if (this->m_bBuildCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                pEVar29 = this->m_pFont;
                uVar24 = CONCAT44(_RED.field0_0x0.d[1],_RED.field0_0x0.d[0]);
                uVar27 = _RED.field0_0x0.d[2];
                uVar28 = _RED.field0_0x0.d[3];
              }
              else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                vPos.field0_0x0.d[2] = _RED.field0_0x0.d[2] * 0.65;
                pEVar29 = this->m_pFont;
                vPos.field0_0x0._0_8_ =
                     CONCAT44(_RED.field0_0x0.d[1] * 0.65,_RED.field0_0x0.d[0] * 0.65);
                uVar24 = vPos.field0_0x0._0_8_;
                uVar27 = vPos.field0_0x0.d[2];
                uVar28 = _RED.field0_0x0.d[3] * 0.65;
                    /* end of inlined section */
              }
              (pEVar29->m_vColor).field0_0x0.d[0] = (float)uVar24;
              (pEVar29->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar24 >> 0x20);
              (pEVar29->m_vColor).field0_0x0.d[2] = uVar27;
              (pEVar29->m_vColor).field0_0x0.d[3] = uVar28;
                    /* end of inlined section */
              Select__6ERFontP3ERC(this->m_pFont,prc);
            }
            erase__13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
            GetMoneyString__FiRt12StackString21Ui256(pEVar18->m_floorNode->cost,&sPrice);
            pEVar29 = this->m_pFont;
            psVar22 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            DoGetStringSize__6ERFontPvbP7EWindow
                      ((ERFont *)&vPos,pEVar29,SUB41(psVar22,0),(EWindow *)&pGifTag1);
            vCol1.field0_0x0._0_8_ = vPos.field0_0x0._0_8_;
            puVar1 = (undefined *)((int)&vCol1.field0_0x0 + 7);
                    /* end of inlined section */
            uVar19 = (uint)puVar1 & 7;
            puVar12 = (ulong *)(puVar1 + -uVar19);
            *puVar12 = *puVar12 & -1L << (uVar19 + 1) * 8 |
                       (ulong)vPos.field0_0x0._0_8_ >> (7 - uVar19) * 8;
            goto LAB_0019f65c;
          }
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18 = GetSelectedItem__16EPauseScrollMenu(pEVar40);
                    /* end of inlined section */
          if (pEVar18 != (EPauseCategoryMenuItem *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
            pOVar9 = pEVar18->m_pMasterSel;
            if ((*(int *)&pEVar18->m_bLocked == 0) || (_globals.Cheats._12_4_ != 0)) {
              EVar17 = GetCatalogName__11ObjSelector(pOVar9);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
              vCol3.field0_0x0.d[0] = _pblm_text_line_x;
                    /* end of inlined section */
              vCol3.field0_0x0.d[1] = _pblm_text_line_y + fVar44 / (float)_pGfx->m_yscreen;
              vPos.field0_0x0._0_8_ = CONCAT44(vCol3.field0_0x0.d[1],_pblm_text_line_x);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
              DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                        (this->m_pFont,prc,*EVar17.ptr,true,(EVec2 *)&vCol3,E_FAX_LEFT,E_FAY_CENTER,
                         (EVec2 *)0x0);
            }
            else {
              psVar22 = GetLiveModeMenuUIString__7EGlobalPCc(&_globals,"locked_object_message");
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
              vCol3.field0_0x0.d[0] = _pblm_text_line_x;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              vCol3.field0_0x0.d[1] = _pblm_text_line_y + fVar44 / (float)_pGfx->m_yscreen;
              vPos.field0_0x0._0_8_ = CONCAT44(vCol3.field0_0x0.d[1],_pblm_text_line_x);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
              DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                        (this->m_pFont,prc,psVar22,true,(EVec2 *)&vCol3,E_FAX_LEFT,E_FAY_CENTER,
                         (EVec2 *)0x0);
                    /* end of inlined section */
            }
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
            uVar4 = pOVar9->fHeader->price;
            sVar15 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                               ((int)&_5Globs_pSimulator->__vtable +
                                (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
            if (sVar15 < (short)uVar4) {
              bVar13 = IsBuildHouseMode__7EGlobal(&_globals);
              if (!bVar13) {
                SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
                if (this->m_bBuildCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                  pEVar29 = this->m_pFont;
                  uVar24 = CONCAT44(_RED.field0_0x0.d[1],_RED.field0_0x0.d[0]);
                  uVar27 = _RED.field0_0x0.d[2];
                  uVar28 = _RED.field0_0x0.d[3];
                }
                else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                  vPos.field0_0x0.d[2] = _RED.field0_0x0.d[2] * 0.65;
                  pEVar29 = this->m_pFont;
                  vPos.field0_0x0._0_8_ =
                       CONCAT44(_RED.field0_0x0.d[1] * 0.65,_RED.field0_0x0.d[0] * 0.65);
                  uVar24 = vPos.field0_0x0._0_8_;
                  uVar27 = vPos.field0_0x0.d[2];
                  uVar28 = _RED.field0_0x0.d[3] * 0.65;
                    /* end of inlined section */
                }
                (pEVar29->m_vColor).field0_0x0.d[0] = (float)uVar24;
                (pEVar29->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar24 >> 0x20);
                (pEVar29->m_vColor).field0_0x0.d[2] = uVar27;
                (pEVar29->m_vColor).field0_0x0.d[3] = uVar28;
                    /* end of inlined section */
                Select__6ERFontP3ERC(this->m_pFont,prc);
                goto LAB_0019f874;
              }
              iVar42 = *(int *)&pEVar18->m_bLocked;
            }
            else {
LAB_0019f874:
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
              iVar42 = *(int *)&pEVar18->m_bLocked;
            }
                    /* end of inlined section */
            if ((iVar42 == 0) || (_globals.Cheats._12_4_ != 0)) {
              erase__13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
              GetMoneyString__FiRt12StackString21Ui256((int)(short)pOVar9->fHeader->price,&sPrice);
              pEVar29 = this->m_pFont;
              psVar22 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
              DoGetStringSize__6ERFontPvbP7EWindow
                        ((ERFont *)&vPos,pEVar29,SUB41(psVar22,0),(EWindow *)&pGifTag1);
              vCol1.field0_0x0._0_8_ = vPos.field0_0x0._0_8_;
              puVar1 = (undefined *)((int)&vCol1.field0_0x0 + 7);
                    /* end of inlined section */
              uVar19 = (uint)puVar1 & 7;
              puVar12 = (ulong *)(puVar1 + -uVar19);
              *puVar12 = *puVar12 & -1L << (uVar19 + 1) * 8 |
                         (ulong)vPos.field0_0x0._0_8_ >> (7 - uVar19) * 8;
              psVar22 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
              vCol3.field0_0x0.d[0] = (fVar43 - fVar46) - vCol1.field0_0x0.d[0];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
              vCol3.field0_0x0.d[1] = _pblm_text_line_y + fVar44 / (float)_pGfx->m_yscreen;
              vPos.field0_0x0._0_8_ = CONCAT44(vCol3.field0_0x0.d[1],vCol3.field0_0x0.d[0]);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
              DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                        (this->m_pFont,prc,psVar22,true,(EVec2 *)&vCol3,E_FAX_LEFT,E_FAY_CENTER,
                         (EVec2 *)0x0);
            }
          }
        }
LAB_0019f944:
        pEVar40 = (EPauseScrollMenu *)&pEVar40[1].field0_0x0.m_pFirstVis;
        i = i + 1;
        local_e0 = local_e0 + 1;
        local_dc = (EPauseScrollMenu *)&local_dc[1].field0_0x0.m_pFirstVis;
      } while (i < 8);
      iVar42 = *(int *)&this->m_bShowInfo;
      goto LAB_001a0d90;
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    nSelectedIndex = -1;
    pEVar40 = &this->m_Categories[0].m_menu;
    i = 0;
    pEVar34 = this->m_Categories;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vCol3.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
    vPos.field0_0x0.d[2] = _pblm_text_line_y - 4.0 / (float)_pGfx->m_yscreen;
    vCol3.field0_0x0.d[0] = _pblm_text_line_x + 15.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vCol3.field0_0x0.d[2] = vPos.field0_0x0.d[2];
                    /* end of inlined section */
    vPos.field0_0x0._0_8_ = ZEXT48((uint)vCol3.field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&vPos.field0_0x0 + 7);
    uVar19 = (uint)puVar1 & 7;
    puVar12 = (ulong *)(puVar1 + -uVar19);
    *puVar12 = *puVar12 & -1L << (uVar19 + 1) * 8 |
               (ulong)((uint)vCol3.field0_0x0.d[0] >> (7 - uVar19) * 8);
    do {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if ((((int)(pEVar34->field0_0x0).field0_0x0.m_flags >> 3 & 1U) != 0) &&
         (nSelectedIndex = i, 2 < i)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
        pEVar18 = GetSelectedItem__16EPauseScrollMenu(pEVar40);
      }
                    /* end of inlined section */
      pEVar40 = (EPauseScrollMenu *)&pEVar40[1].field0_0x0.m_pFirstVis;
      pEVar34 = pEVar34 + 1;
      i = i + 1;
    } while (i < 8);
    i = 0;
    iVar42 = 0;
    pEVar40 = &this->m_Categories[0].m_menu;
    pEVar34 = this->m_Categories;
    do {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)(pEVar34->field0_0x0).field0_0x0.m_flags >> 3 & 1U) != 0) {
        if (i == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18 = GetSelectedItem__16EPauseScrollMenu(&this->m_Categories[0].m_menu);
                    /* end of inlined section */
          if (pEVar18 != (EPauseCategoryMenuItem *)0x0) {
            uVar19 = GetPrice__22EPauseCategoryMenuItem(pEVar18);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
            uVar20 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                               ((int)&_5Globs_pSimulator->__vtable +
                                (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
            if (uVar20 < uVar19) {
              bVar13 = IsBuildHouseMode__7EGlobal(&_globals);
              if (!bVar13) {
                iVar42 = 1;
              }
            }
          }
        }
        else if (i == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18 = GetSelectedItem__16EPauseScrollMenu(&this->m_Categories[1].m_menu);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
          if (((pEVar18 != (EPauseCategoryMenuItem *)0x0) &&
              (pWVar7 = pEVar18->m_wallNode,
              uVar19 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                                 ((int)&_5Globs_pSimulator->__vtable +
                                  (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue),
              uVar19 < pWVar7->cost)) && (bVar13 = IsBuildHouseMode__7EGlobal(&_globals), !bVar13))
          {
            iVar42 = i;
          }
        }
        else if (i == 2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18 = GetSelectedItem__16EPauseScrollMenu(&this->m_Categories[2].m_menu);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
          if ((pEVar18 != (EPauseCategoryMenuItem *)0x0) &&
             (pFVar8 = pEVar18->m_floorNode,
             uVar19 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                                ((int)&_5Globs_pSimulator->__vtable +
                                 (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue),
             uVar19 < pFVar8->cost)) {
LAB_0019fbc4:
            bVar13 = IsBuildHouseMode__7EGlobal(&_globals);
            if (!bVar13) {
              iVar42 = 1;
            }
          }
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18 = GetSelectedItem__16EPauseScrollMenu(pEVar40);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
          if ((pEVar18 != (EPauseCategoryMenuItem *)0x0) &&
             (uVar4 = pEVar18->m_pMasterSel->fHeader->price,
             sVar15 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                                ((int)&_5Globs_pSimulator->__vtable +
                                 (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue),
             sVar15 < (short)uVar4)) goto LAB_0019fbc4;
        }
      }
      pEVar40 = (EPauseScrollMenu *)&pEVar40[1].field0_0x0.m_pFirstVis;
      pEVar34 = pEVar34 + 1;
      i = i + 1;
    } while (i < 8);
    if (this->m_bBuildCursor == 0) {
      bVar13 = 2 < nSelectedIndex;
      if (bVar13) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
        if (((*(int *)&pEVar18->m_bLocked == 0) || (_globals.Cheats._12_4_ != 0)) && (iVar42 == 0))
        {
          pEVar30 = this->m_pTextLineButtonBevelShdr;
          goto LAB_0019fc38;
        }
      }
      else {
        pEVar30 = this->m_pTextLineButtonBevelShdr;
LAB_0019fc38:
        pEVar41 = &this->m_BuyPrompt;
                    /* end of inlined section */
        Select__8ERShaderP3ERCi(pEVar30,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_360 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_35c = 1.0;
                    /* end of inlined section */
        vCol3.field0_0x0.d[1] = vPos.field0_0x0.d[2] - 16.0 / (float)_pGfx->m_yscreen;
        vCol3.field0_0x0.d[0] = vPos.field0_0x0.d[0] - 16.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_100._12_4_ = 1.0;
        local_100._8_4_ = (EResourceManager *)0x3f800000;
        local_100._4_4_ = (char *)0x3f800000;
        local_100._0_4_ = (EStorable__vtable *)0x3f800000;
                    /* end of inlined section */
        (*(code *)prc->__vtable[1].ClipRect)
                  (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vCol3,&local_360
                   ,local_100);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
        SetPos__13EUIObjectNodeRC5EVec3((EUIObjectNode *)pEVar41,&vPos);
        SetPositions__9EUIPrompt(pEVar41);
                    /* end of inlined section */
        Draw__9EUIPromptP3ERC(pEVar41,prc);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        vPos.field0_0x0._0_8_ =
             vPos.field0_0x0._0_8_ & 0xffffffff00000000 |
             (ulong)(uint)(vPos.field0_0x0.d[0] +
                          (this->m_BuyPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                          field0_0x0.d[0] + 0.01);
      }
      if (*(int *)&this->m_bShowInfo == 0) {
        if (bVar13) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
          if ((*(int *)&pEVar18->m_bLocked == 0) || (_globals.Cheats._12_4_ != 0)) {
            pEVar41 = &this->m_InfoPrompt;
                    /* end of inlined section */
            Select__8ERShaderP3ERCi(this->m_pTextLineButtonBevelShdr,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
            local_360 = 1.0;
            vCol3.field0_0x0.d[0] = 1.0;
            vCol3.field0_0x0.d[1] = 1.0;
            local_354 = 0x3f800000;
                    /* end of inlined section */
            local_100._4_4_ = (char *)(vPos.field0_0x0.d[2] - 16.0 / (float)_pGfx->m_yscreen);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
            local_358 = 1.0;
                    /* end of inlined section */
            local_100._0_4_ =
                 (EStorable__vtable *)(vPos.field0_0x0.d[0] - 16.0 / (float)_pGfx->m_xscreen);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
            local_35c = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
            (*(code *)prc->__vtable[1].ClipRect)
                      (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_100,
                       &vCol3,&local_360);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
            SetPos__13EUIObjectNodeRC5EVec3((EUIObjectNode *)pEVar41,&vPos);
            SetPositions__9EUIPrompt(pEVar41);
                    /* end of inlined section */
            Draw__9EUIPromptP3ERC(pEVar41,prc);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
            vPos.field0_0x0._0_8_ =
                 vPos.field0_0x0._0_8_ & 0xffffffff00000000 |
                 (ulong)(uint)(vPos.field0_0x0.d[0] +
                              (this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH
                              .field0_0x0.d[0] + 0.01);
            pEVar30 = this->m_pTextLineButtonBevelShdr;
          }
          else {
            pEVar30 = this->m_pTextLineButtonBevelShdr;
          }
        }
        else {
          pEVar30 = this->m_pTextLineButtonBevelShdr;
        }
      }
      else {
        pEVar30 = this->m_pTextLineButtonBevelShdr;
      }
      pEVar41 = &this->m_BackPrompt;
                    /* end of inlined section */
      Select__8ERShaderP3ERCi(pEVar30,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_360 = 1.0;
      vCol3.field0_0x0.d[0] = 1.0;
      vCol3.field0_0x0.d[1] = 1.0;
      local_354 = 0x3f800000;
                    /* end of inlined section */
      local_100._4_4_ = (char *)(vPos.field0_0x0.d[2] - 16.0 / (float)_pGfx->m_yscreen);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_358 = 1.0;
                    /* end of inlined section */
      local_100._0_4_ = (EStorable__vtable *)(vPos.field0_0x0.d[0] - 16.0 / (float)_pGfx->m_xscreen)
      ;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_35c = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,local_100,&vCol3,
                 &local_360);
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
      SetPos__13EUIObjectNodeRC5EVec3((EUIObjectNode *)pEVar41,&vPos);
      SetPositions__9EUIPrompt(pEVar41);
                    /* end of inlined section */
      Draw__9EUIPromptP3ERC(pEVar41,prc);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      vPos.field0_0x0._0_8_ =
           vPos.field0_0x0._0_8_ & 0xffffffff00000000 |
           (ulong)(uint)(vPos.field0_0x0.d[0] +
                        (this->m_InfoPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.
                        field0_0x0.d[0] + 0.01);
      pEVar29 = this->m_pFont;
    }
    else {
      pEVar29 = this->m_pFont;
    }
    SetSize__6ERFontffb(pEVar29,16.0,1.0,true);
    uVar28 = _WHITE.field0_0x0.d[3];
    uVar27 = _WHITE.field0_0x0.d[2];
    uVar26 = _WHITE.field0_0x0.d[1];
    if (this->m_bBuildCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar29 = this->m_pFont;
      (pEVar29->m_vColor).field0_0x0.d[0] = _WHITE.field0_0x0.d[0];
      (pEVar29->m_vColor).field0_0x0.d[1] = uVar26;
      (pEVar29->m_vColor).field0_0x0.d[2] = uVar27;
      (pEVar29->m_vColor).field0_0x0.d[3] = uVar28;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_100._0_4_ = (EStorable__vtable *)(_WHITE.field0_0x0.d[0] * 0.65);
      local_100._12_4_ = _WHITE.field0_0x0.d[3] * 0.65;
      local_100._4_4_ = (char *)(_WHITE.field0_0x0.d[1] * 0.65);
      pEVar29 = this->m_pFont;
      local_100._8_4_ = (EResourceManager *)(_WHITE.field0_0x0.d[2] * 0.65);
                    /* end of inlined section */
      (pEVar29->m_vColor).field0_0x0.d[0] = (float)local_100._0_4_;
      (pEVar29->m_vColor).field0_0x0.d[1] = (float)local_100._4_4_;
      (pEVar29->m_vColor).field0_0x0.d[2] = (float)local_100._8_4_;
      (pEVar29->m_vColor).field0_0x0.d[3] = local_100._12_4_;
    }
                    /* end of inlined section */
    Select__6ERFontP3ERC(this->m_pFont,prc);
    fVar44 = 0.0125;
    local_e4 = &this->m_Categories[0].m_menu;
    i = 0;
    pEVar34 = this->m_Categories;
    fVar43 = _13EUIObjectNode_SAFE_RIGHT;
    do {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)(pEVar34->field0_0x0).field0_0x0.m_flags >> 3 & 1U) != 0) {
        if (i == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18 = GetSelectedItem__16EPauseScrollMenu(&this->m_Categories[0].m_menu);
                    /* end of inlined section */
          if (pEVar18 != (EPauseCategoryMenuItem *)0x0) {
            erase__13StringBuffer2(&sPrice.field0_0x0);
            uVar19 = GetPrice__22EPauseCategoryMenuItem(pEVar18);
            GetMoneyString__FiRt12StackString21Ui256(uVar19,&sPrice);
            uVar19 = GetPrice__22EPauseCategoryMenuItem(pEVar18);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
            uVar20 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                               ((int)&_5Globs_pSimulator->__vtable +
                                (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
            if ((uVar20 < uVar19) && (bVar13 = IsBuildHouseMode__7EGlobal(&_globals), !bVar13)) {
              SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
              if (this->m_bBuildCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                pEVar29 = this->m_pFont;
                uVar27 = _RED.field0_0x0.d[2];
                uVar28 = _RED.field0_0x0.d[3];
                uVar21 = _RED.field0_0x0.d[0];
                uVar26 = _RED.field0_0x0.d[1];
              }
              else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                local_100._4_4_ = (char *)(_RED.field0_0x0.d[1] * 0.65);
                local_100._8_4_ = (EResourceManager *)(_RED.field0_0x0.d[2] * 0.65);
                local_100._12_4_ = _RED.field0_0x0.d[3] * 0.65;
                pEVar29 = this->m_pFont;
                local_100._0_4_ = (EStorable__vtable *)(_RED.field0_0x0.d[0] * 0.65);
                uVar27 = (float)local_100._8_4_;
                uVar28 = local_100._12_4_;
                uVar21 = (float)local_100._0_4_;
                uVar26 = (float)local_100._4_4_;
                    /* end of inlined section */
              }
              (pEVar29->m_vColor).field0_0x0.d[0] = uVar21;
              (pEVar29->m_vColor).field0_0x0.d[1] = uVar26;
              (pEVar29->m_vColor).field0_0x0.d[2] = uVar27;
              (pEVar29->m_vColor).field0_0x0.d[3] = uVar28;
                    /* end of inlined section */
              Select__6ERFontP3ERC(this->m_pFont,prc);
            }
            pEVar29 = this->m_pFont;
            psVar22 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            DoGetStringSize__6ERFontPvbP7EWindow
                      ((ERFont *)local_100,pEVar29,SUB41(psVar22,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
            vCol1.field0_0x0._0_8_ = CONCAT44(local_100._4_4_,local_100._0_4_);
            puVar1 = (undefined *)((int)&vCol1.field0_0x0 + 7);
            uVar19 = (uint)puVar1 & 7;
            puVar12 = (ulong *)(puVar1 + -uVar19);
            *puVar12 = *puVar12 & -1L << (uVar19 + 1) * 8 |
                       (ulong)vCol1.field0_0x0._0_8_ >> (7 - uVar19) * 8;
                    /* end of inlined section */
LAB_001a0364:
            psVar22 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
            vCol3.field0_0x0.d[0] = (fVar43 - fVar44) - vCol1.field0_0x0.d[0];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
            vCol3.field0_0x0.d[1] = _pblm_text_line_y + 12.0 / (float)_pGfx->m_yscreen;
            local_100._0_4_ = (EStorable__vtable *)vCol3.field0_0x0.d[0];
            local_100._4_4_ = (char *)vCol3.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (this->m_pFont,prc,psVar22,true,(EVec2 *)&vCol3,E_FAX_LEFT,E_FAY_CENTER,
                       (EVec2 *)0x0);
                    /* end of inlined section */
          }
        }
        else if (i == 1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18 = GetSelectedItem__16EPauseScrollMenu(&this->m_Categories[1].m_menu);
                    /* end of inlined section */
          if (pEVar18 != (EPauseCategoryMenuItem *)0x0) {
            erase__13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
            GetMoneyString__FiRt12StackString21Ui256(pEVar18->m_wallNode->cost,&sPrice);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
            pWVar7 = pEVar18->m_wallNode;
                    /* end of inlined section */
            uVar19 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                               ((int)&_5Globs_pSimulator->__vtable +
                                (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
            if ((uVar19 < pWVar7->cost) && (bVar13 = IsBuildHouseMode__7EGlobal(&_globals), !bVar13)
               ) {
              SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
              if (this->m_bBuildCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                pEVar29 = this->m_pFont;
                uVar27 = _RED.field0_0x0.d[2];
                uVar28 = _RED.field0_0x0.d[3];
                uVar21 = _RED.field0_0x0.d[0];
                uVar26 = _RED.field0_0x0.d[1];
              }
              else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                local_100._4_4_ = (char *)(_RED.field0_0x0.d[1] * 0.65);
                local_100._8_4_ = (EResourceManager *)(_RED.field0_0x0.d[2] * 0.65);
                local_100._12_4_ = _RED.field0_0x0.d[3] * 0.65;
                pEVar29 = this->m_pFont;
                local_100._0_4_ = (EStorable__vtable *)(_RED.field0_0x0.d[0] * 0.65);
                uVar27 = (float)local_100._8_4_;
                uVar28 = local_100._12_4_;
                uVar21 = (float)local_100._0_4_;
                uVar26 = (float)local_100._4_4_;
                    /* end of inlined section */
              }
              (pEVar29->m_vColor).field0_0x0.d[0] = uVar21;
              (pEVar29->m_vColor).field0_0x0.d[1] = uVar26;
              (pEVar29->m_vColor).field0_0x0.d[2] = uVar27;
              (pEVar29->m_vColor).field0_0x0.d[3] = uVar28;
                    /* end of inlined section */
              Select__6ERFontP3ERC(this->m_pFont,prc);
            }
            pEVar29 = this->m_pFont;
            psVar22 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            DoGetStringSize__6ERFontPvbP7EWindow
                      ((ERFont *)local_100,pEVar29,SUB41(psVar22,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
            vCol1.field0_0x0._0_8_ = CONCAT44(local_100._4_4_,local_100._0_4_);
            puVar1 = (undefined *)((int)&vCol1.field0_0x0 + 7);
            uVar19 = (uint)puVar1 & 7;
            puVar12 = (ulong *)(puVar1 + -uVar19);
            *puVar12 = *puVar12 & -1L << (uVar19 + 1) * 8 |
                       (ulong)vCol1.field0_0x0._0_8_ >> (7 - uVar19) * 8;
                    /* end of inlined section */
            goto LAB_001a0364;
          }
        }
        else if (i == 2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18 = GetSelectedItem__16EPauseScrollMenu(&this->m_Categories[2].m_menu);
                    /* end of inlined section */
          if (pEVar18 != (EPauseCategoryMenuItem *)0x0) {
            erase__13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
            GetMoneyString__FiRt12StackString21Ui256(pEVar18->m_floorNode->cost,&sPrice);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
            pFVar8 = pEVar18->m_floorNode;
                    /* end of inlined section */
            uVar19 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                               ((int)&_5Globs_pSimulator->__vtable +
                                (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
            if ((uVar19 < pFVar8->cost) && (bVar13 = IsBuildHouseMode__7EGlobal(&_globals), !bVar13)
               ) {
              SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
              if (this->m_bBuildCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                pEVar29 = this->m_pFont;
                uVar27 = _RED.field0_0x0.d[2];
                uVar28 = _RED.field0_0x0.d[3];
                uVar21 = _RED.field0_0x0.d[0];
                uVar26 = _RED.field0_0x0.d[1];
              }
              else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                local_100._4_4_ = (char *)(_RED.field0_0x0.d[1] * 0.65);
                local_100._8_4_ = (EResourceManager *)(_RED.field0_0x0.d[2] * 0.65);
                local_100._12_4_ = _RED.field0_0x0.d[3] * 0.65;
                pEVar29 = this->m_pFont;
                local_100._0_4_ = (EStorable__vtable *)(_RED.field0_0x0.d[0] * 0.65);
                uVar27 = (float)local_100._8_4_;
                uVar28 = local_100._12_4_;
                uVar21 = (float)local_100._0_4_;
                uVar26 = (float)local_100._4_4_;
                    /* end of inlined section */
              }
              (pEVar29->m_vColor).field0_0x0.d[0] = uVar21;
              (pEVar29->m_vColor).field0_0x0.d[1] = uVar26;
              (pEVar29->m_vColor).field0_0x0.d[2] = uVar27;
              (pEVar29->m_vColor).field0_0x0.d[3] = uVar28;
                    /* end of inlined section */
              Select__6ERFontP3ERC(this->m_pFont,prc);
            }
            pEVar29 = this->m_pFont;
            psVar22 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            DoGetStringSize__6ERFontPvbP7EWindow
                      ((ERFont *)local_100,pEVar29,SUB41(psVar22,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
            vCol1.field0_0x0._0_8_ = CONCAT44(local_100._4_4_,local_100._0_4_);
            puVar1 = (undefined *)((int)&vCol1.field0_0x0 + 7);
            uVar19 = (uint)puVar1 & 7;
            puVar12 = (ulong *)(puVar1 + -uVar19);
            *puVar12 = *puVar12 & -1L << (uVar19 + 1) * 8 |
                       (ulong)vCol1.field0_0x0._0_8_ >> (7 - uVar19) * 8;
            goto LAB_001a0364;
          }
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
          pEVar18 = GetSelectedItem__16EPauseScrollMenu(local_e4);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
          if ((pEVar18 != (EPauseCategoryMenuItem *)0x0) &&
             ((*(int *)&pEVar18->m_bLocked == 0 || (_globals.Cheats._12_4_ != 0)))) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
            pOVar9 = pEVar18->m_pMasterSel;
                    /* end of inlined section */
            erase__13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
            GetMoneyString__FiRt12StackString21Ui256((int)(short)pOVar9->fHeader->price,&sPrice);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
            uVar4 = pOVar9->fHeader->price;
            sVar15 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                               ((int)&_5Globs_pSimulator->__vtable +
                                (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
            if ((sVar15 < (short)uVar4) && (bVar13 = IsBuildHouseMode__7EGlobal(&_globals), !bVar13)
               ) {
              SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
              if (this->m_bBuildCursor == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                pEVar29 = this->m_pFont;
                uVar27 = _RED.field0_0x0.d[2];
                uVar28 = _RED.field0_0x0.d[3];
                uVar21 = _RED.field0_0x0.d[0];
                uVar26 = _RED.field0_0x0.d[1];
              }
              else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                local_100._4_4_ = (char *)(_RED.field0_0x0.d[1] * 0.65);
                local_100._8_4_ = (EResourceManager *)(_RED.field0_0x0.d[2] * 0.65);
                local_100._12_4_ = _RED.field0_0x0.d[3] * 0.65;
                pEVar29 = this->m_pFont;
                local_100._0_4_ = (EStorable__vtable *)(_RED.field0_0x0.d[0] * 0.65);
                uVar27 = (float)local_100._8_4_;
                uVar28 = local_100._12_4_;
                uVar21 = (float)local_100._0_4_;
                uVar26 = (float)local_100._4_4_;
                    /* end of inlined section */
              }
              (pEVar29->m_vColor).field0_0x0.d[0] = uVar21;
              (pEVar29->m_vColor).field0_0x0.d[1] = uVar26;
              (pEVar29->m_vColor).field0_0x0.d[2] = uVar27;
              (pEVar29->m_vColor).field0_0x0.d[3] = uVar28;
                    /* end of inlined section */
              Select__6ERFontP3ERC(this->m_pFont,prc);
            }
            pEVar29 = this->m_pFont;
            psVar22 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            DoGetStringSize__6ERFontPvbP7EWindow
                      ((ERFont *)local_100,pEVar29,SUB41(psVar22,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
            vCol1.field0_0x0._0_8_ = CONCAT44(local_100._4_4_,local_100._0_4_);
            puVar1 = (undefined *)((int)&vCol1.field0_0x0 + 7);
            uVar19 = (uint)puVar1 & 7;
            puVar12 = (ulong *)(puVar1 + -uVar19);
            *puVar12 = *puVar12 & -1L << (uVar19 + 1) * 8 |
                       (ulong)vCol1.field0_0x0._0_8_ >> (7 - uVar19) * 8;
            psVar22 = c_str__C13StringBuffer2(&sPrice.field0_0x0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
            vCol3.field0_0x0.d[0] = (fVar43 - fVar44) - vCol1.field0_0x0.d[0];
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
            vCol3.field0_0x0.d[1] = _pblm_text_line_y + 12.0 / (float)_pGfx->m_yscreen;
            local_100._0_4_ = (EStorable__vtable *)vCol3.field0_0x0.d[0];
            local_100._4_4_ = (char *)vCol3.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                      (this->m_pFont,prc,psVar22,true,(EVec2 *)&vCol3,E_FAX_LEFT,E_FAY_CENTER,
                       (EVec2 *)0x0);
          }
        }
      }
      pEVar34 = pEVar34 + 1;
      local_e4 = (EPauseScrollMenu *)&local_e4[1].field0_0x0.m_pFirstVis;
      i = i + 1;
    } while (i < 8);
    iVar42 = *(int *)&this->m_bShowInfo;
    goto LAB_001a0d90;
  }
  if (uVar3 != '\v') {
    iVar42 = *(int *)&this->m_bShowInfo;
    goto LAB_001a0d90;
  }
  this_00 = (ESimsCursor__15_1743 *)_globals._pCursor[_globals.m_whichPlayerPaused];
                    /* end of inlined section */
  CVar10 = this_00->m_mode;
  SetSize__6ERFontffb(this->m_pFont,16.0,1.0,true);
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
                    /* end of inlined section */
  bVar13 = this_00->m_pCursorObject != (cXCursorObject__15_1968 *)0x0;
  bVar14 = CanUserSell__11ESimsCursor(this_00);
  if (((CVar10 + ~kPiMenu < 2) || (CVar10 == kFenceTool)) || (CVar10 == kPaperTool)) {
    pEVar11 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar25 = (**(code **)(pEVar11 + 1))
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar11->GetBut + -4,
                        _globals.m_whichPlayerPaused,0x40);
    if (lVar25 == 0) {
      pEVar11 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar25 = (**(code **)(pEVar11 + 1))
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar11->GetBut + -4,
                          _globals.m_whichPlayerPaused,0x80);
      if (lVar25 == 0) {
        pEVar11 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar25 = (**(code **)(pEVar11 + 1))
                           ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar11->GetBut + -4,
                            _globals.m_whichPlayerPaused,4);
        if (lVar25 == 0) {
          pEVar11 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
          lVar25 = (**(code **)(pEVar11 + 1))
                             ((int)(_globals.m_pCtrlPad)->m_pressed +
                              *(short *)&pEVar11->GetBut + -4,_globals.m_whichPlayerPaused,8);
          if (lVar25 == 0) {
            *(undefined4 *)&this->m_bShowingSlider = 0;
            goto LAB_001a086c;
          }
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
          CVar23 = this_00->m_mode;
        }
        else {
          CVar23 = this_00->m_mode;
        }
      }
      else {
        CVar23 = this_00->m_mode;
      }
    }
    else {
      CVar23 = this_00->m_mode;
    }
    if (CVar23 < nToolModes) {
      uVar4 = this_00->m_ToolValueCalcFnTab[CVar23].__index;
      if (uVar4 == 0) {
        iVar42 = 0;
      }
      else {
        if ((short)uVar4 < 0) {
          nVar33 = this_00->m_ToolValueCalcFnTab[CVar23].__pfn_or_delta2;
        }
        else {
          unaff_s8 = *(undefined8 *)
                      ((short)uVar4 * 8 +
                       *(int *)((int)&(((ESimsCursor__15_1743 *)(this_00->m_ToolValueCalcFnTab + -8)
                                       )->field0_0x0).m_state +
                               (int)(short)this_00->m_ToolValueCalcFnTab[CVar23].__pfn_or_delta2.
                                           __delta2) + -8);
          nVar33 = SUB84((ulong)unaff_s8 >> 0x20,0);
        }
        uVar5 = this_00->m_ToolValueCalcFnTab[CVar23].__delta;
        if (-1 < (short)uVar4) {
          sVar15 = (short)unaff_s8;
          goto LAB_001a0788;
        }
LAB_001a0798:
        iVar42 = (int)(short)uVar5;
LAB_001a079c:
        iVar42 = (*(code *)nVar33)((int)&(((ESimsCursor__15_1743 *)
                                          (this_00->m_ToolValueCalcFnTab + -8))->field0_0x0).m_state
                                   + iVar42);
      }
    }
    else {
LAB_001a07ac:
      iVar42 = 0;
    }
LAB_001a07b0:
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
      uVar19 = (uint)puVar1 & 7;
      puVar12 = (ulong *)(puVar1 + -uVar19);
      *puVar12 = *puVar12 & -1L << (uVar19 + 1) * 8 | 0x3f2b851f3f800000U >> (7 - uVar19) * 8;
      pEVar2 = &(this->m_SlideTextBox).m_vStart;
      uVar19 = (uint)pEVar2 & 7;
      puVar12 = (ulong *)((int)pEVar2 - uVar19);
      *puVar12 = 0x3f2b851f3f800000 << uVar19 * 8 |
                 *puVar12 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vCol1.field0_0x0._0_8_ = 0x3f2b851f3f400000;
      puVar1 = (undefined *)((int)&(this->m_SlideTextBox).m_vStop.field0_0x0 + 7);
                    /* end of inlined section */
      uVar19 = (uint)puVar1 & 7;
      puVar12 = (ulong *)(puVar1 + -uVar19);
      *puVar12 = *puVar12 & -1L << (uVar19 + 1) * 8 | 0x3f2b851f3f400000U >> (7 - uVar19) * 8;
      pEVar2 = &(this->m_SlideTextBox).m_vStop;
      uVar19 = (uint)pEVar2 & 7;
      puVar12 = (ulong *)((int)pEVar2 - uVar19);
      *puVar12 = 0x3f2b851f3f400000 << uVar19 * 8 |
                 *puVar12 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
      puVar1 = (undefined *)((int)&(this->m_SlideTextBox).m_vStart.field0_0x0 + 7);
      uVar19 = (uint)puVar1 & 7;
      pEVar2 = &(this->m_SlideTextBox).m_vStart;
      uVar20 = (uint)pEVar2 & 7;
      uVar32 = (*(long *)(puVar1 + -uVar19) << (7 - uVar19) * 8 |
               0xffffffffffffffffU >> (uVar19 + 1) * 8 & 0x3f2b851f3f400000) &
               -1L << (8 - uVar20) * 8 | *(ulong *)((int)pEVar2 - uVar20) >> uVar20 * 8;
      puVar1 = (undefined *)((int)&(this->m_SlideTextBox).m_vCur.field0_0x0 + 7);
      uVar19 = (uint)puVar1 & 7;
      puVar12 = (ulong *)(puVar1 + -uVar19);
      *puVar12 = *puVar12 & -1L << (uVar19 + 1) * 8 | uVar32 >> (7 - uVar19) * 8;
      pEVar2 = &(this->m_SlideTextBox).m_vCur;
      uVar19 = (uint)pEVar2 & 7;
      puVar12 = (ulong *)((int)pEVar2 - uVar19);
      *puVar12 = uVar32 << uVar19 * 8 | *puVar12 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
      *(undefined4 *)&this->m_bShowingSlider = 1;
    }
    erase__13StringBuffer2(&(this->m_sSliderText).field0_0x0);
    GetMoneyString__FiRt12StackString21Ui256(-iVar42,&this->m_sSliderText);
    this->m_nSliderNumber = -iVar42;
  }
  else {
                    /* end of inlined section */
    if (bVar13) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
      CVar23 = this_00->m_mode;
      if (kPausedPanel < CVar23) goto LAB_001a07ac;
      uVar4 = this_00->m_ToolValueCalcFnTab[CVar23].__index;
      iVar42 = 0;
      if (uVar4 != 0) {
        if ((short)uVar4 < 0) {
          nVar33 = this_00->m_ToolValueCalcFnTab[CVar23].__pfn_or_delta2;
        }
        else {
          unaff_s5 = *(undefined8 *)
                      ((short)uVar4 * 8 +
                       *(int *)((int)&(((ESimsCursor__15_1743 *)(this_00->m_ToolValueCalcFnTab + -8)
                                       )->field0_0x0).m_state +
                               (int)(short)this_00->m_ToolValueCalcFnTab[CVar23].__pfn_or_delta2.
                                           __delta2) + -8);
          nVar33 = SUB84((ulong)unaff_s5 >> 0x20,0);
        }
        uVar5 = this_00->m_ToolValueCalcFnTab[CVar23].__delta;
        if ((short)uVar4 < 0) goto LAB_001a0798;
        sVar15 = (short)unaff_s5;
LAB_001a0788:
        iVar42 = (int)sVar15 + (int)(short)uVar5;
        goto LAB_001a079c;
      }
      goto LAB_001a07b0;
    }
    *(undefined4 *)&this->m_bShowingSlider = 0;
LAB_001a086c:
    *(undefined4 *)&this->m_SlideTextBox = 0;
  }
  if (*(int *)&this->m_bShowingSlider != 0) {
    if (this->m_nSliderNumber < 0) {
      psVar22 = c_str__C13StringBuffer2(&(this->m_sSliderText).field0_0x0);
      Draw__13ESlideTextBoxP3ERCPCUsiRC5EVec4(&this->m_SlideTextBox,prc,psVar22,0,&_RED);
    }
    else {
      psVar22 = c_str__C13StringBuffer2(&(this->m_sSliderText).field0_0x0);
      Draw__13ESlideTextBoxP3ERCPCUsiRC5EVec4(&this->m_SlideTextBox,prc,psVar22,0,&_GREEN);
    }
  }
  if (((CVar10 + ~kPiMenu < 2) || (CVar10 == kFenceTool)) || (CVar10 == kPaperTool)) {
    pEVar11 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar25 = (**(code **)(pEVar11 + 1))
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar11->GetBut + -4,
                        _globals.m_whichPlayerPaused,4);
    if ((lVar25 != 0) ||
       (pEVar11 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable,
       lVar25 = (**(code **)(pEVar11 + 1))
                          ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar11->GetBut + -4,
                           _globals.m_whichPlayerPaused,8), lVar25 != 0)) {
      pEVar41 = (EUIPrompt *)0x0;
      pEVar36 = &this->m_BuyPrompt;
      pEVar37 = &this->m_BackPrompt;
      pEVar39 = &this->m_PreviewPrompt;
      goto LAB_001a0a10;
    }
    pEVar41 = &this->m_SellPrompt;
    pEVar36 = &this->m_BuyPrompt;
    pEVar37 = &this->m_BackPrompt;
    pEVar39 = &this->m_PreviewPrompt;
    if (CVar10 != kPaperTool) goto LAB_001a0a10;
    pEVar11 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar25 = (**(code **)(pEVar11 + 1))
                       ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar11->GetBut + -4,
                        _globals.m_whichPlayerPaused,0x40);
    if (lVar25 == 0) {
      pEVar11 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar25 = (**(code **)(pEVar11 + 1))
                         ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar11->GetBut + -4,
                          _globals.m_whichPlayerPaused,0x80);
      pEVar35 = &this->m_SwitchSidesPrompt;
      if (lVar25 == 0) goto LAB_001a0a10;
    }
    else {
      pEVar35 = &this->m_SwitchSidesPrompt;
    }
  }
  else {
    if (bVar13) {
      pEVar41 = (EUIPrompt *)0x0;
      if (bVar14) {
        pEVar41 = &this->m_SellPrompt;
      }
      pEVar36 = &this->m_PlacePrompt;
      pEVar37 = &this->m_CancelPrompt;
      pEVar39 = &this->m_RotatePrompt;
    }
    else {
      pEVar41 = (EUIPrompt *)0x0;
      pEVar36 = &this->m_GrabPrompt;
      pEVar37 = &this->m_BackPrompt;
      pEVar39 = (EUIPrompt *)0x0;
    }
LAB_001a0a10:
    pEVar35 = (EUIPrompt *)0x0;
  }
  pEVar38 = &this->m_WallsPrompt;
  fVar43 = 0.0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((pEVar41 != (EUIPrompt *)0x0) &&
     (fVar44 = (pEVar41->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0],
     0.0 < fVar44)) {
    fVar43 = fVar44;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((pEVar36 != (EUIPrompt *)0x0) &&
     (fVar44 = (pEVar36->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0],
     fVar43 < fVar44)) {
    fVar43 = fVar44;
  }
                    /* end of inlined section */
  fVar44 = 0.0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((pEVar37 != (EUIPrompt *)0x0) &&
     (fVar46 = (pEVar37->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0],
     0.0 < fVar46)) {
    fVar44 = fVar46;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((pEVar38 != (EUIPrompt *)0x0) &&
     (fVar46 = (this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d
               [0], fVar44 < fVar46)) {
    fVar44 = fVar46;
  }
                    /* end of inlined section */
  fVar46 = 0.0;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((pEVar39 != (EUIPrompt *)0x0) &&
     (fVar47 = (pEVar39->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0],
     0.0 < fVar47)) {
    fVar46 = fVar47;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((pEVar35 != (EUIPrompt *)0x0) &&
     (fVar47 = (pEVar35->field0_0x0).field0_0x0.field0_0x0.field0_0x0.m_WDH.field0_0x0.d[0],
     fVar46 < fVar47)) {
    fVar46 = fVar47;
  }
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  fVar45 = 20.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar47 = _pblm_text_line_x + 15.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  vCol1.field0_0x0.d[2] = _pblm_text_line_y - 4.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar46 = (fVar47 + (_13EUIObjectNode_SAFE_RIGHT - fVar47) * 0.5) -
           (fVar43 + fVar45 + fVar44 + fVar45 + fVar46) * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vCol1.field0_0x0._0_8_ = ZEXT48((uint)fVar46);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vCol3.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
  fVar46 = fVar46 + fVar43 + 20.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  vPos.field0_0x0._0_8_ = ZEXT48((uint)fVar46);
  vCol3.field0_0x0.d[0] = fVar46 + fVar44 + 20.0 / (float)_pGfx->m_xscreen;
  vPos.field0_0x0.d[2] = vCol1.field0_0x0.d[2];
  vCol3.field0_0x0.d[2] = vCol1.field0_0x0.d[2];
  if (pEVar41 != (EUIPrompt *)0x0) {
    pEVar6 = (pEVar41->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar6->OnButtonRepeat)
              ((int)(pEVar41->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6->StateChanged + 4,&vCol1);
  }
  if (pEVar36 != (EUIPrompt *)0x0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    pEVar6 = (pEVar36->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_360 = vCol1.field0_0x0.d[0];
    local_35c = 0.0;
                    /* end of inlined section */
    local_358 = vCol1.field0_0x0.d[2] + 40.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    (*(code *)pEVar6->OnButtonRepeat)
              ((int)(pEVar36->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6->StateChanged + 4,&local_360);
  }
  if (pEVar37 != (EUIPrompt *)0x0) {
    pEVar6 = (pEVar37->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar6->OnButtonRepeat)
              ((int)(pEVar37->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6->StateChanged + 4,&vPos);
  }
  if (pEVar38 != (EUIPrompt *)0x0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    pEVar6 = (this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_360 = vPos.field0_0x0.d[0];
    local_35c = 0.0;
                    /* end of inlined section */
    local_358 = vPos.field0_0x0.d[2] + 40.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    (*(code *)pEVar6->OnButtonRepeat)
              ((int)(pEVar38->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6->StateChanged + 4,&local_360);
  }
  if (pEVar39 != (EUIPrompt *)0x0) {
    pEVar6 = (pEVar39->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar6->OnButtonRepeat)
              ((int)(pEVar39->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6->StateChanged + 4,&vCol3);
  }
  if (pEVar35 != (EUIPrompt *)0x0) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    pEVar6 = (pEVar35->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_360 = vCol3.field0_0x0.d[0];
    local_35c = 0.0;
                    /* end of inlined section */
    local_358 = vCol3.field0_0x0.d[2] + 40.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    (*(code *)pEVar6->OnButtonRepeat)
              ((int)(pEVar35->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6->StateChanged + 4,&local_360);
  }
  if (pEVar41 != (EUIPrompt *)0x0) {
    pEVar6 = (pEVar41->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar6->Message)
              ((int)(pEVar41->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6->SetBoxDims + 4,prc);
  }
  if (pEVar36 != (EUIPrompt *)0x0) {
    pEVar6 = (pEVar36->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar6->Message)
              ((int)(pEVar36->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6->SetBoxDims + 4,prc);
  }
  if (pEVar37 != (EUIPrompt *)0x0) {
    pEVar6 = (pEVar37->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar6->Message)
              ((int)(pEVar37->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6->SetBoxDims + 4,prc);
  }
  if (pEVar38 != (EUIPrompt *)0x0) {
    pEVar6 = (this->m_WallsPrompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar6->Message)
              ((int)(pEVar38->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6->SetBoxDims + 4,prc);
  }
  if (pEVar39 != (EUIPrompt *)0x0) {
    pEVar6 = (pEVar39->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar6->Message)
              ((int)(pEVar39->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6->SetBoxDims + 4,prc);
  }
  if (pEVar35 != (EUIPrompt *)0x0) {
    pEVar6 = (pEVar35->field0_0x0).field0_0x0.field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar6->Message)
              ((int)(pEVar35->field0_0x0).field0_0x0.field0_0x0.m_maxBackShdrSize[-0xc] +
               *(short *)&pEVar6->SetBoxDims + 4,prc);
  }
  iVar42 = *(int *)&this->m_bShowInfo;
LAB_001a0d90:
  if (iVar42 != 0) {
    pEVar6 = (this->m_pItemInfo->field0_0x0).__vtable;
    (*(code *)pEVar6->Message)
              ((int)&(this->m_pItemInfo->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar6->SetBoxDims,prc);
  }
  return;
}

void EPauseBuildMenu::Update() {
	ObjSelector *pSelMaster;
	ObjSelector *pSelRes;
	ObjSelector *pSelRes2;
	bool bLocked;
	bool bDontShow;
	EUIObjectMover HermiteBlend;
	bool bReady;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
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
  FenceSet *pFVar10;
  int iVar11;
  EPauseCategoryMenuItem *pEVar12;
  EPauseItemInfo *pEVar13;
  ESimsCam *pEVar14;
  long lVar15;
  ulong uVar16;
  FenceData *pFVar17;
  EPauseScrollMenu *this_00;
  EPauseScrollMenu *this_01;
  EPauseScrollMenu *this_02;
  EPauseScrollMenu *this_03;
  EPauseScrollMenu *this_04;
  EPauseCategoryMenu *pEVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  EUIObjectMover HermiteBlend;
  EVec3 vStick;
  ObjSelector *pSelMaster;
  ObjSelector *pSelRes;
  ObjSelector *pSelRes2;
  bool bDontShow;
  
  pFVar10 = _globals._pFenceSet;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  bVar2 = this->m_nDisplayMode;
  pSelMaster = (ObjSelector *)0x0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  pSelRes = (ObjSelector *)0x0;
  pSelRes2 = (ObjSelector *)0x0;
  if ((((((4 < bVar2 - 1) && (bVar2 != 9)) && (bVar2 != 10)) && ((bVar2 != 6 && (bVar2 != 7)))) &&
      (bVar2 != 8)) ||
     (fVar21 = this->m_fAnimationTime - _dt, this->m_fAnimationTime = fVar21, 0.0 < fVar21))
  goto LAB_001a118c;
  uVar3 = this->m_nDisplayMode;
  this->m_fAnimationTime = 0.0;
                    /* end of inlined section */
  if ((uVar3 == '\x01') || (uVar3 == '\x02')) {
    this->m_nDisplayMode = '\0';
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
    _11EPausePanel_m_pDPadUp = _7DPadWin_m_pUpShdr;
    _11EPausePanel_m_pDPadDown = _7DPadWin_m_pDownShdr;
    _11EPausePanel_m_pDPadLeft = _7DPadWin_m_pLeftShdr;
    _11EPausePanel_m_pDPadRight = _7DPadWin_m_pRightShdr;
                    /* end of inlined section */
    goto LAB_001a118c;
  }
  if (uVar3 == '\x03') {
    this->m_nDisplayMode = '\x01';
    this->m_fAnimationTime = 0.25;
    pEVar6 = (this->field0_0x0).field0_0x0.m_pParent;
    pEVar7 = pEVar6->__vtable;
    (*(code *)pEVar7[1].EUIObjectNode)
              ((int)&(pEVar6->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)(pEVar7 + 1),0,
               0x15);
    goto LAB_001a118c;
  }
  if ((byte)(uVar3 - 4) < 2) {
    iVar11 = *(int *)&this->m_bWaitForPreload;
  }
  else {
    if ((((uVar3 != '\t') && (uVar3 != '\n')) && (uVar3 != '\x06')) &&
       ((uVar3 != '\a' && (uVar3 != '\b')))) goto LAB_001a118c;
    iVar11 = *(int *)&this->m_bWaitForPreload;
  }
  bVar9 = false;
  if (iVar11 == 0) {
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
  if (!bVar9) goto LAB_001a118c;
  SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this,4,false);
  UpdateBuildCursorFlag__15EPauseBuildMenub(this,true);
  switch(this->m_nDisplayMode) {
  case '\x04':
    if (this->m_pPreloadSelector != (ObjSelector *)0x0) {
      SetCursorObject__11ESimsCursorP11ObjSelector
                ((ESimsCursor__15_1743 *)_globals._pCursor[_globals.m_whichPlayerPaused],
                 this->m_pPreloadSelector);
    }
    break;
  case '\x05':
    BeginWallTool__11ESimsCursor9WallStyleUi
              ((ESimsCursor__16_2000 *)_globals._pCursor[_globals.m_whichPlayerPaused],kNormalStyle,
               0x46);
    break;
  case '\x06':
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    pFVar17 = *(pFVar10->field0_0x0).pData;
    goto LAB_001a1110;
  case '\a':
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    pFVar17 = (pFVar10->field0_0x0).pData[1];
LAB_001a1110:
    BeginWallTool__11ESimsCursor9WallStyleUi
              ((ESimsCursor__16_2000 *)_globals._pCursor[_globals.m_whichPlayerPaused],pFVar17->type
               ,pFVar17->cost);
    break;
  case '\b':
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    pFVar17 = (pFVar10->field0_0x0).pData[2];
    BeginWallTool__11ESimsCursor9WallStyleUi
              ((ESimsCursor__16_2000 *)_globals._pCursor[_globals.m_whichPlayerPaused],pFVar17->type
               ,pFVar17->cost);
    break;
  case '\t':
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
    InitFloorTool__11ESimsCursorRC9FloorTile
              ((ESimsCursor__16_2000 *)_globals._pCursor[_globals.m_whichPlayerPaused],
               this->m_pWallFloorItem->m_floorNode);
    break;
  case '\n':
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
    BeginPaperTool__11ESimsCursorRC8WallTile
              ((ESimsCursor__16_2000 *)_globals._pCursor[_globals.m_whichPlayerPaused],
               this->m_pWallFloorItem->m_wallNode);
  }
  *(undefined4 *)&this->m_bListenToStick = 0;
  this->m_nDisplayMode = '\v';
  this->m_fAnimationTime = 0.25;
  Message__7EGlobalPvUi(&_globals,(void *)0x0,0x24);
LAB_001a118c:
                    /* end of inlined section */
  uVar3 = this->m_nDisplayMode;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  fVar21 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
  if (uVar3 == '\x03') {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
    fVar20 = 0.25 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    if (0.0 <= fVar20) {
      fVar21 = (float)((int)fVar20 * (uint)(fVar20 < 0.25) | (uint)(fVar20 >= 0.25) * 0x3e800000);
    }
    fVar22 = (this->m_vSidePosEnd).field0_0x0.d[0];
    fVar20 = 1.0 - (0.25 - fVar21) / 0.25;
    fVar20 = -fVar20 * fVar20 * fVar20 + (fVar20 + fVar20) * fVar20;
    uVar16 = CONCAT44((this->m_vSidePosEnd).field0_0x0.d[1] +
                      ((this->m_vSidePosStart).field0_0x0.d[1] -
                      (this->m_vSidePosEnd).field0_0x0.d[1]) * fVar20,
                      fVar22 + ((this->m_vSidePosStart).field0_0x0.d[0] - fVar22) * fVar20);
    puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
    uVar19 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar19);
    *puVar8 = *puVar8 & -1L << (uVar19 + 1) * 8 | uVar16 >> (7 - uVar19) * 8;
    uVar19 = (uint)&this->m_vSidePos & 7;
    puVar8 = (ulong *)((int)&this->m_vSidePos - uVar19);
    *puVar8 = uVar16 << uVar19 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
                    /* end of inlined section */
    fVar20 = (this->m_vSidePosStart).field0_0x0.d[0];
    if ((this->m_vSidePos).field0_0x0.d[0] < fVar20) {
      (this->m_vSidePos).field0_0x0.d[0] = fVar20;
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
    fVar22 = (this->m_vBottomPosEnd).field0_0x0.d[0];
    fVar20 = (this->m_vBottomPosStart).field0_0x0.d[0] - fVar22;
    fVar23 = (this->m_vBottomPosStart).field0_0x0.d[1] - (this->m_vBottomPosEnd).field0_0x0.d[1];
    fVar21 = 1.0 - (0.25 - fVar21) / 0.25;
                    /* end of inlined section */
    fVar21 = -fVar21 * fVar21 * fVar21 + (fVar21 + fVar21) * fVar21;
LAB_001a1950:
    uVar16 = CONCAT44((this->m_vBottomPosEnd).field0_0x0.d[1] + fVar23 * fVar21,
                      fVar22 + fVar20 * fVar21);
    puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
    uVar19 = (uint)puVar1 & 7;
    puVar8 = (ulong *)(puVar1 + -uVar19);
    *puVar8 = *puVar8 & -1L << (uVar19 + 1) * 8 | uVar16 >> (7 - uVar19) * 8;
    uVar19 = (uint)&this->m_vBottomPos & 7;
    puVar8 = (ulong *)((int)&this->m_vBottomPos - uVar19);
    *puVar8 = uVar16 << uVar19 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
                    /* end of inlined section */
    fVar21 = (this->m_vBottomPosStart).field0_0x0.d[1];
    bVar9 = fVar21 < (this->m_vBottomPos).field0_0x0.d[1];
code_r0x001a1994:
    if (bVar9) {
      (this->m_vBottomPos).field0_0x0.d[1] = fVar21;
LAB_001a19ec:
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      uVar19 = (this->field0_0x0).field0_0x0.m_flags;
    }
    else {
      uVar19 = (this->field0_0x0).field0_0x0.m_flags;
    }
  }
  else {
    if (uVar3 == '\x01') {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar20 = 0.25 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      if (0.0 <= fVar20) {
        fVar21 = (float)((int)fVar20 * (uint)(fVar20 < 0.25) | (uint)(fVar20 >= 0.25) * 0x3e800000);
      }
      fVar22 = (this->m_vSidePosStart).field0_0x0.d[0];
      fVar20 = 1.0 - (0.25 - fVar21) / 0.25;
      fVar20 = -fVar20 * fVar20 * fVar20 + fVar20 * fVar20 + fVar20;
      uVar16 = CONCAT44((this->m_vSidePosStart).field0_0x0.d[1] +
                        ((this->m_vSidePosEnd).field0_0x0.d[1] -
                        (this->m_vSidePosStart).field0_0x0.d[1]) * fVar20,
                        fVar22 + ((this->m_vSidePosEnd).field0_0x0.d[0] - fVar22) * fVar20);
      puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
      uVar19 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar19);
      *puVar8 = *puVar8 & -1L << (uVar19 + 1) * 8 | uVar16 >> (7 - uVar19) * 8;
      uVar19 = (uint)&this->m_vSidePos & 7;
      puVar8 = (ulong *)((int)&this->m_vSidePos - uVar19);
      *puVar8 = uVar16 << uVar19 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
                    /* end of inlined section */
      fVar20 = (this->m_vSidePosEnd).field0_0x0.d[0];
      if (fVar20 < (this->m_vSidePos).field0_0x0.d[0]) {
        (this->m_vSidePos).field0_0x0.d[0] = fVar20;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      fVar20 = (this->m_vBottomPosStart).field0_0x0.d[0];
      fVar21 = 1.0 - (0.25 - fVar21) / 0.25;
      fVar21 = -fVar21 * fVar21 * fVar21 + fVar21 * fVar21 + fVar21;
      uVar16 = CONCAT44((this->m_vBottomPosStart).field0_0x0.d[1] +
                        ((this->m_vBottomPosEnd).field0_0x0.d[1] -
                        (this->m_vBottomPosStart).field0_0x0.d[1]) * fVar21,
                        fVar20 + ((this->m_vBottomPosEnd).field0_0x0.d[0] - fVar20) * fVar21);
      puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
      uVar19 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar19);
      *puVar8 = *puVar8 & -1L << (uVar19 + 1) * 8 | uVar16 >> (7 - uVar19) * 8;
      uVar19 = (uint)&this->m_vBottomPos & 7;
      puVar8 = (ulong *)((int)&this->m_vBottomPos - uVar19);
      *puVar8 = uVar16 << uVar19 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
                    /* end of inlined section */
      fVar21 = (this->m_vBottomPosEnd).field0_0x0.d[1];
      bVar9 = (this->m_vBottomPos).field0_0x0.d[1] < fVar21;
      goto code_r0x001a1994;
    }
    if (uVar3 == '\x02') {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar20 = 0.25 - this->m_fAnimationTime;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      if (0.0 <= fVar20) {
        fVar21 = (float)((int)fVar20 * (uint)(fVar20 < 0.25) | (uint)(fVar20 >= 0.25) * 0x3e800000);
      }
      fVar20 = (this->m_vSidePosStart).field0_0x0.d[0];
      fVar21 = 1.0 - (0.25 - fVar21) / 0.25;
      fVar21 = -fVar21 * fVar21 * fVar21 + fVar21 * fVar21 + fVar21;
      uVar16 = CONCAT44((this->m_vSidePosStart).field0_0x0.d[1] +
                        ((this->m_vSidePosEnd).field0_0x0.d[1] -
                        (this->m_vSidePosStart).field0_0x0.d[1]) * fVar21,
                        fVar20 + ((this->m_vSidePosEnd).field0_0x0.d[0] - fVar20) * fVar21);
      puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
      uVar19 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar19);
      *puVar8 = *puVar8 & -1L << (uVar19 + 1) * 8 | uVar16 >> (7 - uVar19) * 8;
      uVar19 = (uint)&this->m_vSidePos & 7;
      puVar8 = (ulong *)((int)&this->m_vSidePos - uVar19);
      *puVar8 = uVar16 << uVar19 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
                    /* end of inlined section */
      fVar21 = (this->m_vSidePosEnd).field0_0x0.d[0];
      if (fVar21 < (this->m_vSidePos).field0_0x0.d[0]) {
        (this->m_vSidePos).field0_0x0.d[0] = fVar21;
      }
      fVar21 = this->m_fAnimationTime;
      if (fVar21 < 0.125) {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
        fVar21 = 0.125 - fVar21;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
        fVar20 = 0.0;
        if (0.0 <= fVar21) {
          fVar20 = (float)((int)fVar21 * (uint)(fVar21 < 0.125) |
                          (uint)(fVar21 >= 0.125) * 0x3e000000);
        }
        fVar22 = (this->m_vBottomPosStart).field0_0x0.d[0];
        fVar21 = 1.0 - (0.125 - fVar20) / 0.125;
        fVar21 = -fVar21 * fVar21 * fVar21 + fVar21 * fVar21 + fVar21;
        uVar16 = CONCAT44((this->m_vBottomPosStart).field0_0x0.d[1] +
                          ((this->m_vBottomPosEnd).field0_0x0.d[1] -
                          (this->m_vBottomPosStart).field0_0x0.d[1]) * fVar21,
                          fVar22 + ((this->m_vBottomPosEnd).field0_0x0.d[0] - fVar22) * fVar21);
        puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
        uVar19 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar19);
        *puVar8 = *puVar8 & -1L << (uVar19 + 1) * 8 | uVar16 >> (7 - uVar19) * 8;
        uVar19 = (uint)&this->m_vBottomPos & 7;
        puVar8 = (ulong *)((int)&this->m_vBottomPos - uVar19);
        *puVar8 = uVar16 << uVar19 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
                    /* end of inlined section */
        fVar21 = (this->m_vBottomPosEnd).field0_0x0.d[1];
        bVar9 = (this->m_vBottomPos).field0_0x0.d[1] < fVar21;
        goto code_r0x001a1994;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar21 = 0.25 - fVar21;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      if (0.0 <= fVar21) {
                    /* end of inlined section */
        fVar21 = (float)((int)fVar21 * (uint)(fVar21 < 0.125) | (uint)(fVar21 >= 0.125) * 0x3e000000
                        );
      }
      else {
LAB_001a18e0:
        fVar21 = 0.0;
      }
LAB_001a18ec:
      fVar22 = (this->m_vBottomPosEnd).field0_0x0.d[0];
      fVar20 = (this->m_vBottomPosStart).field0_0x0.d[0] - fVar22;
      fVar23 = (this->m_vBottomPosStart).field0_0x0.d[1] - (this->m_vBottomPosEnd).field0_0x0.d[1];
      fVar21 = 1.0 - (0.125 - fVar21) / 0.125;
      fVar21 = -fVar21 * fVar21 * fVar21 + (fVar21 + fVar21) * fVar21;
      goto LAB_001a1950;
    }
    if ((byte)(uVar3 - 4) < 2) {
      fVar21 = this->m_fAnimationTime;
LAB_001a16d8:
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar21 = 0.25 - fVar21;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      fVar20 = 0.0;
      if (0.0 <= fVar21) {
        fVar20 = (float)((int)fVar21 * (uint)(fVar21 < 0.25) | (uint)(fVar21 >= 0.25) * 0x3e800000);
      }
      fVar22 = (this->m_vSidePosEnd).field0_0x0.d[0];
      fVar21 = 1.0 - (0.25 - fVar20) / 0.25;
      fVar21 = -fVar21 * fVar21 * fVar21 + (fVar21 + fVar21) * fVar21;
      uVar16 = CONCAT44((this->m_vSidePosEnd).field0_0x0.d[1] +
                        ((this->m_vSidePosStart).field0_0x0.d[1] -
                        (this->m_vSidePosEnd).field0_0x0.d[1]) * fVar21,
                        fVar22 + ((this->m_vSidePosStart).field0_0x0.d[0] - fVar22) * fVar21);
      puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
      uVar19 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar19);
      *puVar8 = *puVar8 & -1L << (uVar19 + 1) * 8 | uVar16 >> (7 - uVar19) * 8;
      uVar19 = (uint)&this->m_vSidePos & 7;
      puVar8 = (ulong *)((int)&this->m_vSidePos - uVar19);
      *puVar8 = uVar16 << uVar19 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
                    /* end of inlined section */
      fVar21 = (this->m_vSidePosStart).field0_0x0.d[0];
      if ((this->m_vSidePos).field0_0x0.d[0] < fVar21) {
        (this->m_vSidePos).field0_0x0.d[0] = fVar21;
      }
      fVar21 = this->m_fAnimationTime;
      if (fVar21 < 0.125) {
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
        fVar21 = 0.125 - fVar21;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
        fVar20 = 0.0;
        if (0.0 <= fVar21) {
          fVar20 = (float)((int)fVar21 * (uint)(fVar21 < 0.125) |
                          (uint)(fVar21 >= 0.125) * 0x3e000000);
        }
        fVar22 = (this->m_vBottomPosStart).field0_0x0.d[0];
        fVar21 = 1.0 - (0.125 - fVar20) / 0.125;
        fVar21 = -fVar21 * fVar21 * fVar21 + fVar21 * fVar21 + fVar21;
        uVar16 = CONCAT44((this->m_vBottomPosStart).field0_0x0.d[1] +
                          ((this->m_vBottomPosEnd).field0_0x0.d[1] -
                          (this->m_vBottomPosStart).field0_0x0.d[1]) * fVar21,
                          fVar22 + ((this->m_vBottomPosEnd).field0_0x0.d[0] - fVar22) * fVar21);
        puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
        uVar19 = (uint)puVar1 & 7;
        puVar8 = (ulong *)(puVar1 + -uVar19);
        *puVar8 = *puVar8 & -1L << (uVar19 + 1) * 8 | uVar16 >> (7 - uVar19) * 8;
        uVar19 = (uint)&this->m_vBottomPos & 7;
        puVar8 = (ulong *)((int)&this->m_vBottomPos - uVar19);
        *puVar8 = uVar16 << uVar19 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
                    /* end of inlined section */
        fVar21 = (this->m_vBottomPosEnd).field0_0x0.d[1];
        bVar9 = (this->m_vBottomPos).field0_0x0.d[1] < fVar21;
        goto code_r0x001a1994;
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      fVar21 = 0.25 - fVar21;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
      if (fVar21 < 0.0) goto LAB_001a18e0;
      fVar21 = (float)((int)fVar21 * (uint)(fVar21 < 0.125) | (uint)(fVar21 >= 0.125) * 0x3e000000);
      goto LAB_001a18ec;
    }
    if (((uVar3 == '\t') || (uVar3 == '\n')) ||
       ((uVar3 == '\x06' || ((uVar3 == '\a' || (uVar3 == '\b')))))) {
      fVar21 = this->m_fAnimationTime;
      goto LAB_001a16d8;
    }
    if (uVar3 == '\v') {
      puVar1 = (undefined *)((int)&(this->m_vSidePosStart).field0_0x0 + 7);
      uVar19 = (uint)puVar1 & 7;
      uVar4 = (uint)&this->m_vSidePosStart & 7;
      uVar16 = (*(long *)(puVar1 + -uVar19) << (7 - uVar19) * 8 |
               0xffffffffffffffffU >> (uVar19 + 1) * 8 & 0xb) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&this->m_vSidePosStart - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
      uVar19 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar19);
      *puVar8 = *puVar8 & -1L << (uVar19 + 1) * 8 | uVar16 >> (7 - uVar19) * 8;
      uVar19 = (uint)&this->m_vSidePos & 7;
      puVar8 = (ulong *)((int)&this->m_vSidePos - uVar19);
      *puVar8 = uVar16 << uVar19 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
LAB_001a19dc:
      puVar1 = (undefined *)((int)&(this->m_vBottomPosEnd).field0_0x0 + 7);
      uVar19 = (uint)puVar1 & 7;
      uVar4 = (uint)&this->m_vBottomPosEnd & 7;
      uVar16 = (*(long *)(puVar1 + -uVar19) << (7 - uVar19) * 8 |
               uVar16 & 0xffffffffffffffffU >> (uVar19 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&this->m_vBottomPosEnd - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(this->m_vBottomPos).field0_0x0 + 7);
      uVar19 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar19);
      *puVar8 = *puVar8 & -1L << (uVar19 + 1) * 8 | uVar16 >> (7 - uVar19) * 8;
      uVar19 = (uint)&this->m_vBottomPos & 7;
      puVar8 = (ulong *)((int)&this->m_vBottomPos - uVar19);
      *puVar8 = uVar16 << uVar19 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
      goto LAB_001a19ec;
    }
    if (uVar3 == '\0') {
      puVar1 = (undefined *)((int)&(this->m_vSidePosEnd).field0_0x0 + 7);
      uVar19 = (uint)puVar1 & 7;
      uVar4 = (uint)&this->m_vSidePosEnd & 7;
      uVar16 = *(long *)(puVar1 + -uVar19) << (7 - uVar19) * 8 & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&this->m_vSidePosEnd - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(this->m_vSidePos).field0_0x0 + 7);
      uVar19 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar19);
      *puVar8 = *puVar8 & -1L << (uVar19 + 1) * 8 | uVar16 >> (7 - uVar19) * 8;
      uVar19 = (uint)&this->m_vSidePos & 7;
      puVar8 = (ulong *)((int)&this->m_vSidePos - uVar19);
      *puVar8 = uVar16 << uVar19 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar19) * 8;
      goto LAB_001a19dc;
    }
    uVar19 = (this->field0_0x0).field0_0x0.m_flags;
  }
                    /* end of inlined section */
  if (((int)uVar19 >> 2 & 1U) == 0) {
    iVar11 = *(int *)&this->m_bShowInfo;
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
        this_02 = &this->m_Categories[0].m_menu;
        if (lVar15 != 0) {
          bVar9 = false;
          iVar11 = 1;
          uVar19 = 0;
          pEVar18 = this->m_Categories;
          this_00 = this_02;
          this_04 = this_02;
          this_01 = this_02;
          this_03 = this_02;
          do {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
            if (((int)(pEVar18->field0_0x0).field0_0x0.m_flags >> 3 & 1U) != 0) {
              if (uVar19 < 3) {
                bVar9 = true;
              }
              else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                pEVar12 = GetSelectedItem__16EPauseScrollMenu(this_01);
                    /* end of inlined section */
                if (pEVar12 != (EPauseCategoryMenuItem *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                  pEVar12 = GetSelectedItem__16EPauseScrollMenu(this_03);
                  pSelMaster = pEVar12->m_pMasterSel;
                  pEVar12 = GetSelectedItem__16EPauseScrollMenu(this_00);
                  pSelRes = pEVar12->m_pResSel;
                  pEVar12 = GetSelectedItem__16EPauseScrollMenu(this_04);
                  pSelRes2 = pEVar12->m_pResSel2;
                  pEVar12 = GetSelectedItem__16EPauseScrollMenu(this_02);
                  iVar11 = *(int *)&pEVar12->m_bLocked;
                }
              }
            }
                    /* end of inlined section */
            uVar19 = uVar19 + 1;
            this_02 = (EPauseScrollMenu *)&this_02[1].field0_0x0.m_pFirstVis;
            pEVar18 = pEVar18 + 1;
            this_04 = (EPauseScrollMenu *)&this_04[1].field0_0x0.m_pFirstVis;
            this_00 = (EPauseScrollMenu *)&this_00[1].field0_0x0.m_pFirstVis;
            this_03 = (EPauseScrollMenu *)&this_03[1].field0_0x0.m_pFirstVis;
            this_01 = (EPauseScrollMenu *)&this_01[1].field0_0x0.m_pFirstVis;
          } while ((int)uVar19 < 8);
          if ((bVar9) || ((_globals.Cheats._12_4_ == 0 && (iVar11 != 0)))) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
            PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
          }
          else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseiteminfo.h */
            pEVar13 = (EPauseItemInfo *)_memmanAlloc__FUiUi(0xd50,0x10);
            memset(pEVar13,0,0xd50);
                    /* end of inlined section */
            pEVar13 = __14EPauseItemInfoP13EUIObjectNode(pEVar13,(EUIObjectNode *)this);
            this->m_pItemInfo = pEVar13;
            SetMasterSelector__14EPauseItemInfoP11ObjSelector(pEVar13,pSelMaster);
            if (pSelRes2 == (ObjSelector *)0x0) {
              SetResSelector__14EPauseItemInfoP11ObjSelectorT1
                        (this->m_pItemInfo,pSelRes,(ObjSelector *)0x0);
            }
            else {
              SetResSelector__14EPauseItemInfoP11ObjSelectorT1(this->m_pItemInfo,pSelRes,pSelRes2);
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
        iVar11 = *(int *)&this->m_bShowInfo;
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
        iVar11 = *(int *)&this->m_bShowInfo;
      }
      if ((iVar11 == 0) && (this->m_nDisplayMode == '\0')) {
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
          fVar21 = GetStick__11EControllerii(_ctrlPads[_globals.m_whichPlayerPaused],0,0);
          fVar20 = GetStick__11EControllerii(_ctrlPads[_globals.m_whichPlayerPaused],0,1);
          fVar20 = ABS(fVar20) * fVar20;
          pEVar14 = GetCam__7EGlobal(&_globals);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
          fVar21 = fVar21 * ABS(fVar21) * pEVar14->m_transSpeed * _dt;
          pEVar14 = GetCam__7EGlobal(&_globals);
                    /* inlined from c:/eor/src2/games/sims/ESRC/camera.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* end of inlined section */
          if ((fVar21 == 0.0) && (fVar20 * pEVar14->m_transSpeed * _dt == 0.0)) {
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
      goto LAB_001a1dec;
    }
    iVar11 = *(int *)&this->m_bShowInfo;
  }
  if (iVar11 != 0) {
    pEVar7 = (this->m_pItemInfo->field0_0x0).__vtable;
    (*(code *)pEVar7->SetBoxDims)
              ((int)&(this->m_pItemInfo->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar7->SetPos);
  }
LAB_001a1dec:
  Update__13ESlideTextBox(&this->m_SlideTextBox);
  if (*(int *)&this->m_bDeleteInfo == 0) {
    iVar11 = *(int *)&this->m_bCleanUpModelReference;
  }
  else {
    pEVar13 = this->m_pItemInfo;
    if (pEVar13 != (EPauseItemInfo *)0x0) {
      pEVar7 = (pEVar13->field0_0x0).__vtable;
      (*(code *)pEVar7->Draw)
                ((int)&(pEVar13->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar7->Update,3);
    }
    this->m_pItemInfo = (EPauseItemInfo *)0x0;
    *(undefined4 *)&this->m_bDeleteInfo = 0;
    iVar11 = *(int *)&this->m_bCleanUpModelReference;
  }
  if (iVar11 != 0) {
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

void EPauseBuildMenu::NextItem() {
  ListForward__7EUIMenub(&this->field0_0x0,true);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
  _11EPausePanel_m_ItemInfoTimer = 2.0;
  return;
}

void EPauseBuildMenu::PrevItem() {
  ListBackward__7EUIMenub(&this->field0_0x0,true);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
  _11EPausePanel_m_ItemInfoTimer = 2.0;
  return;
}

void EPauseBuildMenu::Message(EUIObjectNode *pChild, u32 messId) {
	u32 cost;
	ObjSelector *pSel;
	bool bRoom;
	bool bLocked;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
	EPauseCategoryMenuItem *this;
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
  EUIObjectNode *pEVar4;
  ObjectFolder *pOVar5;
  uchar uVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  ObjSelector *pOVar10;
  EPauseCategoryMenuItem *pEVar11;
  int iVar12;
  EPauseCategoryMenu *pEVar13;
  EPauseScrollMenu *this_00;
  int iVar14;
  
  iVar12 = 0;
  switch(messId) {
  case 0x17:
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
    if ((_globals.Cheats._12_4_ != 0) || (pChild[2].m_id == 0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/objselector.h */
                    /* end of inlined section */
      uVar2 = ((ObjSelector *)pChild[1].__vtable)->fHeader->price;
      bVar7 = GetAffordable__15EMemoryMeterWinP11ObjSelector
                        (&(_globals._pPanel)->m_MemoryMeterWin,(ObjSelector *)pChild[1].__vtable);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      if (((_globals.Cheats._4_4_ != 0) ||
          ((bVar8 = IsBuildHouseMode__7EGlobal(&_globals), bVar8 ||
           (uVar9 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                              ((int)&_5Globs_pSimulator->__vtable +
                               (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue),
           uVar2 <= uVar9)))) && (bVar7)) {
        if (_globals.Cheats._4_4_ == 0) {
          bVar7 = IsBuildHouseMode__7EGlobal(&_globals);
          if (bVar7) {
            pOVar10 = (ObjSelector *)pChild[1].__vtable;
          }
          else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
            (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,7,uVar2);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
            pOVar10 = (ObjSelector *)pChild[1].__vtable;
          }
        }
        else {
          pOVar10 = (ObjSelector *)pChild[1].__vtable;
        }
                    /* end of inlined section */
        pOVar5 = _5Globs_pObjectFolder;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        this->m_pPreloadSelector = pOVar10;
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
        __16EResourceManager_m_bTraceEnabled = 0;
                    /* end of inlined section */
        pOVar3 = pOVar5->__vtable;
        (*(code *)pOVar3[1].ResumeObjectFiles)
                  ((int)&pOVar5->__vtable + (int)*(short *)&pOVar3[1].SuspendObjectFiles,
                   pChild[1].__vtable,0);
        this->m_nDisplayMode = '\x04';
        this->m_fAnimationTime = 0.25;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
        *(undefined4 *)&this->m_bWaitForPreload = 1;
                    /* end of inlined section */
        goto LAB_001a234c;
      }
    }
LAB_001a224c:
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
    break;
  case 0x18:
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this,4,false);
    UpdateBuildCursorFlag__15EPauseBuildMenub(this,true);
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
    pEVar4 = pChild[2].m_pParent;
                    /* end of inlined section */
    if (pEVar4 == (EUIObjectNode *)&pModelMats) {
      uVar6 = '\x05';
LAB_001a2150:
      this->m_nDisplayMode = uVar6;
    }
    else {
                    /* end of inlined section */
      if (pEVar4 == (EUIObjectNode *)&maxMatrices) {
        uVar6 = '\x06';
        goto LAB_001a2150;
      }
                    /* end of inlined section */
      if (pEVar4 == (EUIObjectNode *)&vtxWEIGHTS) {
        uVar6 = '\a';
        goto LAB_001a2150;
      }
                    /* end of inlined section */
      uVar6 = '\b';
      if (pEVar4 == (EUIObjectNode *)&opVerts) goto LAB_001a2150;
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
    _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
    _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
    _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
    _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
                    /* end of inlined section */
    this->m_fAnimationTime = 0.25;
    *(undefined4 *)&this->m_bWaitForPreload = 0;
    break;
  case 0x19:
    SetFlagsPropigate__13EUIObjectNodeUib((EUIObjectNode *)this,4,false);
    UpdateBuildCursorFlag__15EPauseBuildMenub(this,true);
    uVar6 = '\n';
    goto LAB_001a20c0;
  case 0x1a:
    uVar6 = '\t';
                    /* end of inlined section */
                    /* end of inlined section */
LAB_001a20c0:
    this->m_nDisplayMode = uVar6;
    this->m_fAnimationTime = 0.25;
    *(undefined4 *)&this->m_bWaitForPreload = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
    _11EPausePanel_m_pDPadUp = (ERShader *)0x0;
    _11EPausePanel_m_pDPadDown = (ERShader *)0x0;
    _11EPausePanel_m_pDPadLeft = (ERShader *)0x0;
    _11EPausePanel_m_pDPadRight = (ERShader *)0x0;
                    /* end of inlined section */
    this->m_pWallFloorItem = (EPauseCategoryMenuItem *)pChild;
    break;
  case 0x1b:
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
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausemain.h */
                    /* end of inlined section */
    break;
  case 0x1c:
    this_00 = &this->m_Categories[0].m_menu;
    pEVar13 = this->m_Categories;
    iVar14 = 7;
    do {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)(pEVar13->field0_0x0).field0_0x0.m_flags >> 3 & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
        pEVar11 = GetSelectedItem__16EPauseScrollMenu(this_00);
        iVar12 = *(int *)&pEVar11->m_bLocked;
                    /* end of inlined section */
      }
      this_00 = (EPauseScrollMenu *)&this_00[1].field0_0x0.m_pFirstVis;
      iVar14 = iVar14 + -1;
      pEVar13 = pEVar13 + 1;
    } while (-1 < iVar14);
    if (_globals.Cheats._12_4_ == 0) {
      if (iVar12 != 0) goto LAB_001a224c;
      bVar1 = *(byte *)((int)&pChild[0x30].m_ChildList.field0_0x0.m_l.m_pTail + 2);
    }
    else {
      bVar1 = *(byte *)((int)&pChild[0x30].m_ChildList.field0_0x0.m_l.m_pTail + 2);
    }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseiteminfo.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/pauseiteminfo.h */
    pOVar10 = *(ObjSelector **)((int)&pChild[2].m_WDH.field0_0x0 + (uint)bVar1 * 4 + 4);
                    /* end of inlined section */
    uVar2 = pOVar10->fHeader->price;
    bVar7 = GetAffordable__15EMemoryMeterWinP11ObjSelector
                      (&(_globals._pPanel)->m_MemoryMeterWin,pOVar10);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    if ((((_globals.Cheats._4_4_ == 0) && (bVar8 = IsBuildHouseMode__7EGlobal(&_globals), !bVar8))
        && (uVar9 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                              ((int)&_5Globs_pSimulator->__vtable +
                               (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue),
           uVar9 < uVar2)) || (!bVar7)) {
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
      return;
    }
    *(undefined4 *)&this->m_bShowInfo = 0;
    *(undefined4 *)&this->m_bDeleteInfo = 1;
    if ((_globals.Cheats._4_4_ == 0) && (bVar7 = IsBuildHouseMode__7EGlobal(&_globals), !bVar7)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,7,uVar2);
    }
    this->m_nDisplayMode = '\x04';
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
    this->m_pPreloadSelector = pOVar10;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
    this->m_fAnimationTime = 0.25;
    *(undefined4 *)&this->m_bWaitForPreload = 0;
    *(undefined4 *)&this->m_bCleanUpModelReference = 0;
LAB_001a234c:
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

void EPauseBuildMenu::UpdateBuildCursorFlag(bool flag) {
	int i;
	
  EUIObjectNode *this_00;
  int iVar1;
  
  iVar1 = 7;
  this->m_bBuildCursor = (int)flag;
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

void EPauseBuildMenu::UnlockGUID(s32 guid) {
	EPauseCategoryMenuItem *pItem;
	bool bFound;
	int i;
	EPauseCategoryMenuItem *this;
	
  bool bVar1;
  bool bVar2;
  EPauseCategoryMenuItem *pEVar3;
  int iVar4;
  EPauseCategoryMenu *this_00;
  
  bVar2 = false;
  this_00 = this->m_Categories;
  iVar4 = 0;
  bVar1 = true;
  do {
    if ((!bVar1) &&
       (pEVar3 = SearchGUID__18EPauseCategoryMenui(this_00,guid),
       pEVar3 != (EPauseCategoryMenuItem *)0x0)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausecategorymenu.h */
      *(undefined4 *)&pEVar3->m_bLocked = 0;
                    /* end of inlined section */
      bVar2 = true;
    }
    iVar4 = iVar4 + 1;
    this_00 = this_00 + 1;
  } while ((iVar4 < 8) && (bVar1 = iVar4 < 3, !bVar2));
  return;
}

void EPauseBuildMenu::AnimateIn() {
  if (this->m_bBuildCursor != 0) {
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
                    /* inlined from c:/eor/src2/games/sims/ESRC/pausebuildmenu.cpp */
    _pblm_text_line_y = _13EUIObjectNode_SAFE_BOTTOM - 0.155;
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

void* EPauseBuildMenu::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _memmanAlloc__FUiUi(size,4);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EPauseBuildMenu::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

void global constructors keyed to EPauseBuildMenu::EPauseBuildMenu() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
