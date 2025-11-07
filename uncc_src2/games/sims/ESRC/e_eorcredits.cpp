// STATUS: NOT STARTED

#include "e_eorcredits.h"

__vtbl_ptr_type EEorCreditsMode virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEorCreditsMode::~EEorCreditsMode,
		/* .__delta2 = */ 5264
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEorCreditsMode::Init,
		/* .__delta2 = */ 5608
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEorCreditsMode::Update,
		/* .__delta2 = */ 10528
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEorCreditsMode::Draw,
		/* .__delta2 = */ 9304
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEorCreditsMode::Reset,
		/* .__delta2 = */ 8824
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EGameState virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGameState::~EGameState,
		/* .__delta2 = */ 13440
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [6] = */ {
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

EEorCreditsMode* EEorCreditsMode::EEorCreditsMode() {
	EGameState *this;
	EGameStateId *this;
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
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  EUIIconDef local_130;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  EVec3 vPos;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  EUITextIconDef local_d0;
  EUIIconDef local_b0;
  EUIIconDef__vtable *local_90;
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
  
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_130.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_130.m_flags = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_130.m_trigger = 0x40;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_130.m_selColorIdx = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_130.m_colorIdx = 1;
  (this->field0_0x0).m_state.m_id = 0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EGameState__vtable *)_vt_15EEorCreditsMode;
  local_130.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __7EUIIconG10EUIIconDefiii(&this->m_PromptIcon,&local_130,0,0,0x40);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_130.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_130.m_flags = 0;
  local_130.m_trigger = 0x40;
  local_130.m_selColorIdx = 0;
  local_130.m_colorIdx = 1;
  local_130.m_pCtrl = (EUIVirtualCtrl *)0x0;
  local_110 = 0x20;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0x41400000;
  local_100 = 0;
  local_fc = 1;
  local_d0.m_maxChars = 0x20;
  local_f8 = CONCAT22(local_f8._2_2_,0xffff);
  vPos.field0_0x0.d[2] = 0.0;
  vPos.field0_0x0.d[1] = 0.0;
  vPos.field0_0x0.d[0] = 0.0;
  local_d8 = 0;
  local_dc = 0;
  local_e0 = 0;
  local_d0.m_xAlign = E_FAX_LEFT;
  local_d0.m_yAlign = E_FAY_TOP;
  local_d0.m_pointsize = 12.0;
  local_d0.m_selColorIdx = 0;
  local_d0.m_colorIdx = 1;
  local_b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  local_d0.m_retChar = -1;
  local_b0.m_flags = 0;
  local_b0.m_trigger = 0x40;
  local_b0.m_selColorIdx = 0;
  local_b0.m_colorIdx = 1;
  local_b0.m_pCtrl = (EUIVirtualCtrl *)0x0;
  __17EUIStaticTextIconRC14EUITextIconDefRC10EUIIconDefiG5EVec3
            (&(this->m_Prompt).field0_0x0,&local_d0,&local_b0,-1,(EVec3 *)&local_e0);
  local_b0.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiprompt.h */
  (this->m_Prompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_9EUIPrompt;
  puVar1 = (undefined *)((int)&(this->m_Prompt).field0_0x0.field0_0x0.m_textdef.m_xAlign + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_10c,local_110) >> (7 - uVar8) * 8;
  pEVar2 = &(this->m_Prompt).field0_0x0.field0_0x0.m_textdef;
  uVar8 = (uint)pEVar2 & 7;
  puVar9 = (ulong *)((int)pEVar2 - uVar8);
  *puVar9 = CONCAT44(local_10c,local_110) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_Prompt).field0_0x0.field0_0x0.m_textdef.m_pointsize + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_104,local_108) >> (7 - uVar8) * 8;
  pEVar3 = &(this->m_Prompt).field0_0x0.field0_0x0.m_textdef.m_yAlign;
  uVar8 = (uint)pEVar3 & 7;
  puVar9 = (ulong *)((int)pEVar3 - uVar8);
  *puVar9 = CONCAT44(local_104,local_108) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_Prompt).field0_0x0.field0_0x0.m_textdef.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | CONCAT44(local_fc,local_100) >> (7 - uVar8) * 8;
  puVar4 = &(this->m_Prompt).field0_0x0.field0_0x0.m_textdef.m_selColorIdx;
  uVar8 = (uint)puVar4 & 7;
  puVar9 = (ulong *)((int)puVar4 - uVar8);
  *puVar9 = CONCAT44(local_fc,local_100) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  *(undefined4 *)&(this->m_Prompt).field0_0x0.field0_0x0.m_textdef.m_retChar = local_f8;
  local_90 = (this->m_Prompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable;
  puVar1 = (undefined *)
           ((int)&(this->m_Prompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_trigger + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
            CONCAT44(local_130.m_trigger,local_130.m_flags) >> (7 - uVar8) * 8;
  pEVar5 = &(this->m_Prompt).field0_0x0.field0_0x0.field0_0x0.m_def;
  uVar8 = (uint)pEVar5 & 7;
  puVar9 = (ulong *)((int)pEVar5 - uVar8);
  *puVar9 = CONCAT44(local_130.m_trigger,local_130.m_flags) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)
           ((int)&(this->m_Prompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_colorIdx + 3);
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
            CONCAT44(local_130.m_colorIdx,local_130.m_selColorIdx) >> (7 - uVar8) * 8;
  piVar6 = &(this->m_Prompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_selColorIdx;
  uVar8 = (uint)piVar6 & 7;
  puVar9 = (ulong *)((int)piVar6 - uVar8);
  *puVar9 = CONCAT44(local_130.m_colorIdx,local_130.m_selColorIdx) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  puVar1 = (undefined *)((int)&(this->m_Prompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable + 3)
  ;
  uVar8 = (uint)puVar1 & 7;
  puVar9 = (ulong *)(puVar1 + -uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 |
            CONCAT44(local_130.__vtable,local_130.m_pCtrl) >> (7 - uVar8) * 8;
  ppEVar7 = &(this->m_Prompt).field0_0x0.field0_0x0.field0_0x0.m_def.m_pCtrl;
  uVar8 = (uint)ppEVar7 & 7;
  puVar9 = (ulong *)((int)ppEVar7 - uVar8);
  *puVar9 = CONCAT44(local_130.__vtable,local_130.m_pCtrl) << uVar8 * 8 |
            *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  (this->m_Prompt).field0_0x0.field0_0x0.field0_0x0.m_def.__vtable = local_90;
  (this->m_Prompt).m_lastPressed = 0;
  (this->m_Prompt).m_gap = 0.0;
                    /* end of inlined section */
  local_130.__vtable = (EUIIconDef__vtable *)_vt_10EUIIconDef;
  __10EPromptBar(&this->m_PromptBar);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  (this->field0_0x0).m_state.m_id = 5;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bEorMovieNeedsPlaying = 0;
  *(undefined4 *)&this->m_bMaxisMovieNeedsPlaying = 0;
  this->m_fPauseTime = 0.0;
  return this;
}

void EEorCreditsMode::~EEorCreditsMode(int __in_chrg) {
	u32 i;
	EGameState *this;
	EGameStateId *this;
	void *pAddress;
	void *ptr;
	void *ptr;
	
  EEorJobTitle **ppEVar1;
  EEorEmployeeName **ppEVar2;
  uint uVar3;
  
  (this->field0_0x0).__vtable = (EGameState__vtable *)_vt_15EEorCreditsMode;
  if (this->m_pTitles != (EEorJobTitle **)0x0) {
    uVar3 = 0;
    ppEVar1 = this->m_pTitles;
    while( true ) {
      if (ppEVar1[uVar3] != (EEorJobTitle *)0x0) {
        ___12EEorJobTitle(ppEVar1[uVar3],3);
        this->m_pTitles[uVar3] = (EEorJobTitle *)0x0;
      }
      uVar3 = uVar3 + 1;
      if (0x29 < uVar3) break;
      ppEVar1 = this->m_pTitles;
    }
  }
  if (this->m_pNames != (EEorEmployeeName **)0x0) {
    uVar3 = 0;
    ppEVar2 = this->m_pNames;
    while( true ) {
      if (ppEVar2[uVar3] != (EEorEmployeeName *)0x0) {
        ___16EEorEmployeeName(ppEVar2[uVar3],3);
        this->m_pNames[uVar3] = (EEorEmployeeName *)0x0;
      }
      uVar3 = uVar3 + 1;
      if (0x7f < uVar3) break;
      ppEVar2 = this->m_pNames;
    }
  }
  ___10EPromptBar(&this->m_PromptBar,2);
                    /* inlined from /eor/src2/engine/ui/e_uitexticon.h */
  (this->m_Prompt).field0_0x0.field0_0x0.field0_0x0.field0_0x0.__vtable =
       (EUIObjectNode__vtable *)_vt_17EUIStaticTextIcon;
  ___11EUITextIcon((EUITextIcon *)&this->m_Prompt,2);
                    /* end of inlined section */
  ___7EUIIcon(&this->m_PromptIcon,2);
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EGameState__vtable *)_vt_10EGameState;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EEorCreditsMode::Init(int FromState) {
	u32 i;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	
  undefined *puVar1;
  EUIIconDef *pEVar2;
  int *piVar3;
  EUIVirtualCtrl **ppEVar4;
  EGlobalManagerClient__vtable *pEVar5;
  EUIIconDef__vtable *pEVar6;
  ulong *puVar7;
  EEorJobTitle **ppEVar8;
  EEorEmployeeName **ppEVar9;
  short *psVar10;
  uint uVar11;
  uint uVar12;
  EUIPrompt *pEVar13;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  EUIIcon *this_00;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  int iVar14;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  __vtbl_ptr_type *local_7c;
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
  
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pEVar5 = (_pGfx->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_a0._0_4_ = 0;
  local_a0._4_4_ = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_98 = 0;
                    /* end of inlined section */
  (*(code *)pEVar5[4].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar5 + 4),&local_a0,1);
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
  AddRef__16EResourceManagerUiP5EFilei(&_datasetman.field0_0x0,0x7e522f64,(EFile *)0x0,0);
                    /* end of inlined section */
  ppEVar8 = (EEorJobTitle **)_memmanAlloc__FUiUi(0xa8,4);
  this->m_pTitles = ppEVar8;
  ppEVar9 = (EEorEmployeeName **)_memmanAlloc__FUiUi(0x200,4);
  this->m_pNames = ppEVar9;
  uVar11 = 0;
  do {
    uVar12 = uVar11 + 1;
    this->m_pTitles[uVar11] = (EEorJobTitle *)0x0;
    uVar11 = uVar12;
  } while (uVar12 < 0x2a);
  this_00 = &this->m_PromptIcon;
  uVar11 = 0;
  do {
    uVar12 = uVar11 + 1;
    this->m_pNames[uVar11] = (EEorEmployeeName *)0x0;
    uVar11 = uVar12;
  } while (uVar12 < 0x80);
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bEorMovieNeedsPlaying = 0;
  *(undefined4 *)&this->m_bMaxisMovieNeedsPlaying = 0;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bWaitingForMovieToStop = 0;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bLoadingNeighborhoodData = 0;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
                    /* end of inlined section */
  this->m_FadingAudio = kFadeNone;
  this->m_fPauseTime = 0.0;
  this->m_fFrameCount = 0.0;
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  local_90 = 1;
  local_8c = 0xffffffff;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiicon.h */
  pEVar6 = (this->m_PromptIcon).m_def.__vtable;
  local_88 = 0;
  local_84 = 1;
  local_80 = 0;
  puVar1 = (undefined *)((int)&(this->m_PromptIcon).m_def.m_trigger + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar11);
  *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | 0xffffffff00000001U >> (7 - uVar11) * 8;
  pEVar2 = &(this->m_PromptIcon).m_def;
  uVar11 = (uint)pEVar2 & 7;
  puVar7 = (ulong *)((int)pEVar2 - uVar11);
  *puVar7 = -0xffffffff << uVar11 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  puVar1 = (undefined *)((int)&(this->m_PromptIcon).m_def.m_colorIdx + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar11);
  *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | 0x100000000U >> (7 - uVar11) * 8;
  piVar3 = &(this->m_PromptIcon).m_def.m_selColorIdx;
  uVar11 = (uint)piVar3 & 7;
  puVar7 = (ulong *)((int)piVar3 - uVar11);
  *puVar7 = 0x100000000 << uVar11 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  puVar1 = (undefined *)((int)&(this->m_PromptIcon).m_def.__vtable + 3);
  uVar11 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar11);
  *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | 0x3a890800000000U >> (7 - uVar11) * 8;
  ppEVar4 = &(this->m_PromptIcon).m_def.m_pCtrl;
  uVar11 = (uint)ppEVar4 & 7;
  puVar7 = (ulong *)((int)ppEVar4 - uVar11);
  *puVar7 = 0x3a890800000000 << uVar11 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  (this->m_PromptIcon).m_def.__vtable = pEVar6;
  local_7c = _vt_10EUIIconDef;
                    /* end of inlined section */
  iVar14 = _pGfx->m_yscreen;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_PromptIcon).field0_0x0.m_WDH.field0_0x0.d[0] = 0.05;
  local_a0._0_4_ = 0x3d4ccccd;
                    /* end of inlined section */
  local_a0._4_4_ = 32.0 / (float)iVar14;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  (this->m_PromptIcon).field0_0x0.m_WDH.field0_0x0.d[2] = local_a0._4_4_;
                    /* end of inlined section */
  if (_globals.m_nCreditMode == 1) {
    this->m_nCurrentMode = 1;
    pEVar13 = &this->m_Prompt;
    InitEorCredits__15EEorCreditsMode(this);
    InitActiveShader__7EUIIconi(this_00,0x2ccf500a);
    InitInActiveShader__7EUIIconi(this_00,0x2ccf500a);
    psVar10 = GetCreateASimString__7EGlobalPCc(&_globals,"back");
    InitString__17EUIStaticTextIconPCUsi(&pEVar13->field0_0x0,psVar10,0x20);
    AddIcon__9EUIPromptP7EUIIcon(pEVar13,this_00);
    Init__10EPromptBar(&this->m_PromptBar);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_a0._0_4_ = 0x3e800000;
                    /* end of inlined section */
    local_a0._4_4_ = _13EUIObjectNode_SAFE_BOTTOM - 23.0 / (float)_pGfx->m_yscreen;
                    /* end of inlined section */
    Setup__10EPromptBarP9EUIPromptUiG5EVec2(&this->m_PromptBar,pEVar13,1,(EVec2 *)&local_a0);
    *(undefined4 *)&this->m_bDrawCredits = 0;
  }
  else if (_globals.m_nCreditMode == 0) {
    this->m_nCurrentMode = 0;
    InitActiveShader__7EUIIconi(this_00,-0x3e263a13);
    InitInActiveShader__7EUIIconi(this_00,-0x3e263a13);
    psVar10 = GetCreateASimString__7EGlobalPCc(&_globals,"continue");
    InitString__17EUIStaticTextIconPCUsi(&(this->m_Prompt).field0_0x0,psVar10,0x20);
    AddIcon__9EUIPromptP7EUIIcon(&this->m_Prompt,this_00);
    *(undefined4 *)&this->m_bMaxisMovieNeedsPlaying = 1;
    *(undefined4 *)&this->m_bDrawCredits = 0;
  }
  else if (_globals.m_nCreditMode == 2) {
    this->m_nCurrentMode = 2;
    InitMaxisCredits__15EEorCreditsMode(this);
    pEVar13 = &this->m_Prompt;
    InitActiveShader__7EUIIconi(this_00,0x2ccf500a);
    InitInActiveShader__7EUIIconi(this_00,0x2ccf500a);
    psVar10 = GetCreateASimString__7EGlobalPCc(&_globals,"back");
    InitString__17EUIStaticTextIconPCUsi(&pEVar13->field0_0x0,psVar10,0x20);
    AddIcon__9EUIPromptP7EUIIcon(pEVar13,this_00);
    Init__10EPromptBar(&this->m_PromptBar);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_a0._0_4_ = 0x3f000000;
                    /* end of inlined section */
    local_a0._4_4_ = _13EUIObjectNode_SAFE_BOTTOM - 23.0 / (float)_pGfx->m_yscreen;
                    /* end of inlined section */
    Setup__10EPromptBarP9EUIPromptUiG5EVec2(&this->m_PromptBar,pEVar13,1,(EVec2 *)&local_a0);
    *(undefined4 *)&this->m_bDrawCredits = 1;
  }
  else {
    *(undefined4 *)&this->m_bDrawCredits = 1;
  }
  return;
}

void EEorCreditsMode::InitEorCredits() {
	char szTempTitle[64];
	u8 *pTextData;
	c16 *pLocalizedTitle;
	u32 i;
	u32 nNameIndex;
	u32 nTitleIndex;
	u32 nTextDataIndex;
	u32 nStringIndex;
	short unsigned int szString[64];
	float fCurrentOffset;
	bool bIsJobTitle;
	u32 nTotalBytes;
	EGraphics *this;
	float y;
	EGraphics *this;
	float y;
	EEorEmployeeName *this;
	EVec2 vNewPos;
	EGraphics *this;
	
  undefined *puVar1;
  EVec2 *pEVar2;
  byte bVar3;
  uchar uVar4;
  char cVar5;
  uint uVar6;
  EEorJobTitle **ppEVar7;
  EEorEmployeeName **ppEVar8;
  ulong *puVar9;
  bool bVar10;
  ERBinary *pEVar11;
  uint uVar12;
  short *szName;
  EEorJobTitle *pEVar13;
  EEorEmployeeName *pEVar14;
  byte *pbVar15;
  char *pcVar16;
  ushort *puVar17;
  ushort *szName_00;
  uint uVar18;
  EPromptBar *this_00;
  uint uVar19;
  float fVar20;
  float fVar21;
  char szTempTitle [64];
  short szString [64];
  EVec2 vNewPos;
  uchar *pTextData;
  uint nTitleIndex;
  
                    /* inlined from /eor/src2/engine/binary/e_binaryman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/binary/e_binaryman.h */
                    /* end of inlined section */
  uVar19 = 0;
                    /* inlined from /eor/src2/engine/binary/e_binaryman.h */
  nTitleIndex = 0;
  pEVar11 = (ERBinary *)
            AddRef__16EResourceManagerUiP5EFilei(&_binaryman.field0_0x0,0x4a05d7eb,(EFile *)0x0,0);
                    /* end of inlined section */
  fVar21 = 1.0;
  this->m_pCreditText = pEVar11;
                    /* inlined from /eor/src2/engine/binary/e_rbinary.h */
  pTextData = (uchar *)pEVar11->m_pData;
  uVar6 = pEVar11->m_size;
                    /* end of inlined section */
  uVar12 = 0xffffffff;
  if (uVar6 != 0) {
    fVar20 = 0.74;
    uVar18 = 0;
    do {
      bVar10 = false;
      uVar12 = 0;
      pbVar15 = pTextData + uVar19;
      szName_00 = (ushort *)szString;
      if ((*pbVar15 != 0xd) && (uVar19 < uVar6)) {
        bVar3 = *pbVar15;
        puVar17 = szName_00;
        while( true ) {
          if (bVar3 == 0x2a) {
            bVar10 = true;
          }
          else {
            uVar12 = uVar12 + 1;
            *puVar17 = (ushort)*pbVar15;
            puVar17 = puVar17 + 1;
          }
          pbVar15 = pbVar15 + 1;
          uVar19 = uVar19 + 1;
          if (((*pbVar15 == 0xd) || (uVar6 <= uVar19)) || (0x3e < uVar12)) break;
          bVar3 = *pbVar15;
        }
      }
      uVar4 = pTextData[uVar19];
      szName_00[uVar12] = 0;
      if (uVar4 == '\r') {
        uVar19 = uVar19 + 2;
      }
      uVar12 = uVar18;
      if (bVar10) {
        if (nTitleIndex < 0x2a) {
          uVar18 = 0;
          do {
            pcVar16 = szTempTitle + uVar18;
            cVar5 = *(char *)szName_00;
            uVar18 = uVar18 + 1;
            szName_00 = szName_00 + 1;
            *pcVar16 = cVar5;
          } while (uVar18 < 0x40);
          szName = GetCreditUIStrings__7EGlobalPCc(&_globals,szTempTitle);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
          ppEVar7 = this->m_pTitles;
          fVar21 = fVar21 + 72.0 / (float)_pGfx->m_yscreen;
          pEVar13 = (EEorJobTitle *)__builtin_new(0x1c);
          pEVar13 = __12EEorJobTitlePCUs(pEVar13,szName);
          ppEVar7[nTitleIndex] = pEVar13;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          vNewPos.field0_0x0.d[0] = fVar20;
          vNewPos.field0_0x0.d[1] = fVar21;
          SetScreenPosition__12EEorJobTitleG5EVec2(this->m_pTitles[nTitleIndex],&vNewPos);
          nTitleIndex = nTitleIndex + 1;
        }
      }
      else if (uVar18 < 0x80) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
        ppEVar8 = this->m_pNames;
        uVar12 = uVar18 + 1;
        fVar21 = fVar21 + 24.0 / (float)_pGfx->m_yscreen;
        pEVar14 = (EEorEmployeeName *)__builtin_new(0xc);
        pEVar14 = __16EEorEmployeeNamePUs(pEVar14,(short *)szName_00);
        ppEVar8[uVar18] = pEVar14;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        vNewPos.field0_0x0.d[0] = fVar20;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        vNewPos.field0_0x0.d[1] = fVar21;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_eorcredits.h */
        pEVar14 = this->m_pNames[uVar18];
        puVar1 = (undefined *)((int)&(pEVar14->m_vScreenPos).field0_0x0 + 7);
        uVar18 = (uint)puVar1 & 7;
        puVar9 = (ulong *)(puVar1 + -uVar18);
        *puVar9 = *puVar9 & -1L << (uVar18 + 1) * 8 | CONCAT44(fVar21,fVar20) >> (7 - uVar18) * 8;
        pEVar2 = &pEVar14->m_vScreenPos;
        uVar18 = (uint)pEVar2 & 7;
        puVar9 = (ulong *)((int)pEVar2 - uVar18);
        *puVar9 = CONCAT44(fVar21,fVar20) << uVar18 * 8 |
                  *puVar9 & 0xffffffffffffffffU >> (8 - uVar18) * 8;
      }
      uVar18 = uVar12;
                    /* end of inlined section */
    } while (uVar19 < uVar6);
    uVar12 = uVar12 - 1;
  }
  this->m_nLastIndex = uVar12;
  while (this->m_pCreditText != (ERBinary *)0x0) {
    DelRef__9EResource(&this->m_pCreditText->field0_0x0);
    this->m_pCreditText = (ERBinary *)0x0;
  }
  *(undefined4 *)&this->m_bEorMovieNeedsPlaying = 1;
  if (_globals.m_nCreditMode == 0) {
    this_00 = &this->m_PromptBar;
    Reset__10EPromptBar(this_00);
    Init__10EPromptBar(this_00);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vNewPos.field0_0x0.d[0] = 0.25;
                    /* end of inlined section */
    vNewPos.field0_0x0.d[1] = _13EUIObjectNode_SAFE_BOTTOM - 23.0 / (float)_pGfx->m_yscreen;
                    /* end of inlined section */
    Setup__10EPromptBarP9EUIPromptUiG5EVec2(this_00,&this->m_Prompt,1,&vNewPos);
    this->m_FadingAudio = kFadeNone;
  }
  else {
    this->m_FadingAudio = kFadeNone;
  }
  return;
}

void EEorCreditsMode::InitMaxisCredits() {
	char szTempTitle[64];
	u8 *pTextData;
	c16 *pLocalizedTitle;
	EVec2 vNameSize;
	u32 i;
	u32 nNameIndex;
	u32 nTitleIndex;
	u32 nTextDataIndex;
	u32 nStringIndex;
	short unsigned int szString[64];
	short unsigned int szMikePerry[14];
	float fCurrentOffset;
	bool bIsJobTitle;
	bool bIsSameLine;
	u32 nTotalBytes;
	EGraphics *this;
	float y;
	float y;
	EEorEmployeeName *this;
	EVec2 vNewPos;
	float y;
	EEorEmployeeName *this;
	EVec2 vNewPos;
	EGraphics *this;
	float y;
	EEorEmployeeName *this;
	EVec2 vNewPos;
	EGraphics *this;
	float y;
	EEorEmployeeName *this;
	EVec2 vNewPos;
	EGraphics *this;
	
  undefined *puVar1;
  EVec2 *pEVar2;
  byte bVar3;
  uchar uVar4;
  char cVar5;
  uint uVar6;
  EEorJobTitle **ppEVar7;
  EEorEmployeeName **ppEVar8;
  ulong *puVar9;
  bool bVar10;
  ulong uVar11;
  ERBinary *pEVar12;
  uint uVar13;
  short *szName;
  EEorJobTitle *pEVar14;
  EEorEmployeeName *pEVar15;
  byte *pbVar16;
  char *pcVar17;
  ushort *puVar18;
  ushort *szName_00;
  EPromptBar *this_00;
  uint uVar19;
  uint uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  char szTempTitle [64];
  EVec2 vNameSize;
  short szString [64];
  short szMikePerry [14];
  EVec2 vNewPos;
  uchar *pTextData;
  uint nTitleIndex;
  bool bIsSameLine;
  
  uVar20 = 0;
  uVar19 = 0;
  SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kLoad);
  uVar22 = 1.0;
  nTitleIndex = 0;
  SetSize__6ERFontffb(_globals.m_pFont,14.0,1.0,true);
                    /* inlined from /eor/src2/engine/binary/e_binaryman.h */
                    /* end of inlined section */
  _bIsSameLine = (ENodeListNode *)0x0;
                    /* inlined from /eor/src2/engine/binary/e_binaryman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/binary/e_binaryman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/binary/e_binaryman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/binary/e_binaryman.h */
  pEVar12 = (ERBinary *)
            AddRef__16EResourceManagerUiP5EFilei(&_binaryman.field0_0x0,0xc9392eca,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pCreditText = pEVar12;
                    /* inlined from /eor/src2/engine/binary/e_rbinary.h */
  pTextData = (uchar *)pEVar12->m_pData;
  uVar6 = pEVar12->m_size;
                    /* end of inlined section */
  uVar13 = 0xffffffff;
  if (uVar6 != 0) {
    fVar21 = 0.5;
    fVar23 = 0.3;
    do {
      bVar10 = false;
      uVar13 = 0;
      pbVar16 = pTextData + uVar19;
      szName_00 = (ushort *)szString;
      if ((*pbVar16 != 0xd) && (uVar19 < uVar6)) {
        bVar3 = *pbVar16;
        puVar18 = szName_00;
        while( true ) {
          if (bVar3 == 0x2a) {
            _bIsSameLine = (ENodeListNode *)0x0;
            bVar10 = true;
          }
          else {
            uVar13 = uVar13 + 1;
            *puVar18 = (ushort)*pbVar16;
            puVar18 = puVar18 + 1;
          }
          pbVar16 = pbVar16 + 1;
          uVar19 = uVar19 + 1;
          if (((*pbVar16 == 0xd) || (uVar6 <= uVar19)) || (0x3e < uVar13)) break;
          bVar3 = *pbVar16;
        }
      }
      uVar4 = pTextData[uVar19];
      szName_00[uVar13] = 0;
      if (uVar4 == '\r') {
        uVar19 = uVar19 + 2;
      }
      if (bVar10) {
        if (nTitleIndex < 0x2a) {
          uVar13 = 0;
          do {
            pcVar17 = szTempTitle + uVar13;
            cVar5 = *(char *)szName_00;
            uVar13 = uVar13 + 1;
            szName_00 = szName_00 + 1;
            *pcVar17 = cVar5;
          } while (uVar13 < 0x40);
          szName = GetCreditUIStrings__7EGlobalPCc(&_globals,szTempTitle);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
          ppEVar7 = this->m_pTitles;
          uVar22 = uVar22 + 72.0 / (float)_pGfx->m_yscreen;
          pEVar14 = (EEorJobTitle *)__builtin_new(0x1c);
          pEVar14 = __12EEorJobTitlePCUs(pEVar14,szName);
          ppEVar7[nTitleIndex] = pEVar14;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          vNewPos.field0_0x0.d[0] = fVar21;
          vNewPos.field0_0x0.d[1] = uVar22;
          SetScreenPosition__12EEorJobTitleG5EVec2(this->m_pTitles[nTitleIndex],&vNewPos);
          nTitleIndex = nTitleIndex + 1;
        }
      }
      else if (uVar20 < 0x80) {
        ppEVar8 = this->m_pNames;
        pEVar15 = (EEorEmployeeName *)__builtin_new(0xc);
        pEVar15 = __16EEorEmployeeNamePUs(pEVar15,(short *)szName_00);
        ppEVar8[uVar20] = pEVar15;
        if (_bIsSameLine == (ENodeListNode *)0x0) {
          SetSize__6ERFontffb(_globals.m_pFont,14.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          DoGetStringSize__6ERFontPvbP7EWindow
                    ((ERFont *)&vNewPos,_globals.m_pFont,SUB41(szName_00,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
          vNameSize.field0_0x0 =
               (EVec2__null___1__1)CONCAT44(vNewPos.field0_0x0.d[1],vNewPos.field0_0x0.d[0]);
          puVar1 = (undefined *)((int)&vNameSize.field0_0x0 + 7);
          uVar13 = (uint)puVar1 & 7;
          puVar9 = (ulong *)(puVar1 + -uVar13);
          *puVar9 = *puVar9 & -1L << (uVar13 + 1) * 8 |
                    (ulong)vNameSize.field0_0x0 >> (7 - uVar13) * 8;
          if (vNewPos.field0_0x0.d[0] < fVar23) {
            _bIsSameLine = (ENodeListNode *)&pGifTag1;
          }
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          vNewPos.field0_0x0.d[0] = fVar21;
                    /* end of inlined section */
          vNewPos.field0_0x0.d[1] = uVar22 + 24.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          pEVar15 = this->m_pNames[uVar20];
          uVar11 = CONCAT44(vNewPos.field0_0x0.d[1],fVar21);
          puVar1 = (undefined *)((int)&(pEVar15->m_vScreenPos).field0_0x0 + 7);
          uVar13 = (uint)puVar1 & 7;
          puVar9 = (ulong *)(puVar1 + -uVar13);
          *puVar9 = *puVar9 & -1L << (uVar13 + 1) * 8 | uVar11 >> (7 - uVar13) * 8;
          pEVar2 = &pEVar15->m_vScreenPos;
          uVar13 = (uint)pEVar2 & 7;
          puVar9 = (ulong *)((int)pEVar2 - uVar13);
          *puVar9 = uVar11 << uVar13 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
                    /* end of inlined section */
        }
        else {
          _bIsSameLine = (ENodeListNode *)0x0;
          SetSize__6ERFontffb(_globals.m_pFont,14.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          DoGetStringSize__6ERFontPvbP7EWindow
                    ((ERFont *)&vNewPos,_globals.m_pFont,SUB41(szName_00,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
          vNameSize.field0_0x0 =
               (EVec2__null___1__1)CONCAT44(vNewPos.field0_0x0.d[1],vNewPos.field0_0x0.d[0]);
          puVar1 = (undefined *)((int)&vNameSize.field0_0x0 + 7);
          uVar13 = (uint)puVar1 & 7;
          puVar9 = (ulong *)(puVar1 + -uVar13);
          *puVar9 = *puVar9 & -1L << (uVar13 + 1) * 8 |
                    (ulong)vNameSize.field0_0x0 >> (7 - uVar13) * 8;
          if (vNewPos.field0_0x0.d[0] < fVar23) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            pEVar15 = this->m_pNames[uVar20 - 1];
            puVar1 = (undefined *)((int)&(pEVar15->m_vScreenPos).field0_0x0 + 7);
            uVar13 = (uint)puVar1 & 7;
            puVar9 = (ulong *)(puVar1 + -uVar13);
            *puVar9 = *puVar9 & -1L << (uVar13 + 1) * 8 |
                      CONCAT44(uVar22,0x3eb33333) >> (7 - uVar13) * 8;
            pEVar2 = &pEVar15->m_vScreenPos;
            uVar13 = (uint)pEVar2 & 7;
            puVar9 = (ulong *)((int)pEVar2 - uVar13);
            *puVar9 = CONCAT44(uVar22,0x3eb33333) << uVar13 * 8 |
                      *puVar9 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
            vNewPos.field0_0x0.d[0] = 0.65;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            vNewPos.field0_0x0.d[1] = uVar22;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_eorcredits.h */
            pEVar15 = this->m_pNames[uVar20];
            puVar1 = (undefined *)((int)&(pEVar15->m_vScreenPos).field0_0x0 + 7);
            uVar13 = (uint)puVar1 & 7;
            puVar9 = (ulong *)(puVar1 + -uVar13);
            *puVar9 = *puVar9 & -1L << (uVar13 + 1) * 8 |
                      CONCAT44(uVar22,0x3f266666) >> (7 - uVar13) * 8;
            pEVar2 = &pEVar15->m_vScreenPos;
            uVar13 = (uint)pEVar2 & 7;
            puVar9 = (ulong *)((int)pEVar2 - uVar13);
            *puVar9 = CONCAT44(uVar22,0x3f266666) << uVar13 * 8 |
                      *puVar9 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
                    /* end of inlined section */
          }
          else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            vNewPos.field0_0x0.d[0] = fVar21;
                    /* end of inlined section */
            vNewPos.field0_0x0.d[1] = uVar22 + 24.0 / (float)_pGfx->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
            pEVar15 = this->m_pNames[uVar20];
            uVar11 = CONCAT44(vNewPos.field0_0x0.d[1],fVar21);
            puVar1 = (undefined *)((int)&(pEVar15->m_vScreenPos).field0_0x0 + 7);
            uVar13 = (uint)puVar1 & 7;
            puVar9 = (ulong *)(puVar1 + -uVar13);
            *puVar9 = *puVar9 & -1L << (uVar13 + 1) * 8 | uVar11 >> (7 - uVar13) * 8;
            pEVar2 = &pEVar15->m_vScreenPos;
            uVar13 = (uint)pEVar2 & 7;
            puVar9 = (ulong *)((int)pEVar2 - uVar13);
            *puVar9 = uVar11 << uVar13 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar13) * 8;
                    /* end of inlined section */
          }
        }
        uVar20 = uVar20 + 1;
        uVar22 = vNewPos.field0_0x0.d[1];
      }
    } while (uVar19 < uVar6);
    uVar13 = uVar20 - 1;
  }
  this->m_nLastIndex = uVar13;
  while (this->m_pCreditText != (ERBinary *)0x0) {
    DelRef__9EResource(&this->m_pCreditText->field0_0x0);
    this->m_pCreditText = (ERBinary *)0x0;
  }
  if (_globals.m_nCreditMode == 0) {
    this_00 = &this->m_PromptBar;
    Reset__10EPromptBar(this_00);
    Init__10EPromptBar(this_00);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vNewPos.field0_0x0.d[0] = 0.5;
                    /* end of inlined section */
    vNewPos.field0_0x0.d[1] = _13EUIObjectNode_SAFE_BOTTOM - 23.0 / (float)_pGfx->m_yscreen;
                    /* end of inlined section */
    Setup__10EPromptBarP9EUIPromptUiG5EVec2(this_00,&this->m_Prompt,1,&vNewPos);
    this->m_FadingAudio = kFadeNone;
  }
  else {
    this->m_FadingAudio = kFadeNone;
  }
  return;
}

void EEorCreditsMode::Reset(int ToState) {
	u32 i;
	
  EEorJobTitle **ppEVar1;
  EEorEmployeeName **ppEVar2;
  uint uVar3;
  
  if (this->m_pTitles != (EEorJobTitle **)0x0) {
    uVar3 = 0;
    ppEVar1 = this->m_pTitles;
    while( true ) {
      if (ppEVar1[uVar3] != (EEorJobTitle *)0x0) {
        ___12EEorJobTitle(ppEVar1[uVar3],3);
        this->m_pTitles[uVar3] = (EEorJobTitle *)0x0;
      }
      uVar3 = uVar3 + 1;
      if (0x29 < uVar3) break;
      ppEVar1 = this->m_pTitles;
    }
    _memmanFree__FPv(this->m_pTitles);
    this->m_pTitles = (EEorJobTitle **)0x0;
  }
  if (this->m_pNames != (EEorEmployeeName **)0x0) {
    uVar3 = 0;
    ppEVar2 = this->m_pNames;
    while( true ) {
      if (ppEVar2[uVar3] != (EEorEmployeeName *)0x0) {
        ___16EEorEmployeeName(ppEVar2[uVar3],3);
        this->m_pNames[uVar3] = (EEorEmployeeName *)0x0;
      }
      uVar3 = uVar3 + 1;
      if (0x7f < uVar3) break;
      ppEVar2 = this->m_pNames;
    }
    _memmanFree__FPv(this->m_pNames);
    this->m_pNames = (EEorEmployeeName **)0x0;
  }
  Reset__10EPromptBar(&this->m_PromptBar);
  RemoveAllChildren__13EUIObjectNode((EUIObjectNode *)&this->m_Prompt);
  DelRef__16EResourceManagerUi(&_datasetman.field0_0x0,0x7e522f64);
  return;
}

void EEorCreditsMode::ClearCurrentCredits() {
	u32 i;
	
  EEorJobTitle **ppEVar1;
  EEorEmployeeName **ppEVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (this->m_pTitles != (EEorJobTitle **)0x0) {
    ppEVar1 = this->m_pTitles;
    while( true ) {
      if (ppEVar1[uVar3] != (EEorJobTitle *)0x0) {
        ___12EEorJobTitle(ppEVar1[uVar3],3);
        this->m_pTitles[uVar3] = (EEorJobTitle *)0x0;
      }
      uVar3 = uVar3 + 1;
      if (0x29 < uVar3) break;
      ppEVar1 = this->m_pTitles;
    }
  }
  uVar3 = 0;
  if (this->m_pNames != (EEorEmployeeName **)0x0) {
    ppEVar2 = this->m_pNames;
    while( true ) {
      if (ppEVar2[uVar3] != (EEorEmployeeName *)0x0) {
        ___16EEorEmployeeName(ppEVar2[uVar3],3);
        this->m_pNames[uVar3] = (EEorEmployeeName *)0x0;
      }
      uVar3 = uVar3 + 1;
      if (0x7f < uVar3) break;
      ppEVar2 = this->m_pNames;
    }
  }
  return;
}

void EEorCreditsMode::Draw(ERC *prc) {
	u32 i;
	float fPositionChange;
	bool ctrl1valid;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	EGraphics *this;
	ERFont *this;
	EController *this;
	bool bStable;
	bool bSupported;
	EController *this;
	bool bStable;
	bool bSupported;
	
  bool bVar1;
  ERFont *pEVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  EEorJobTitle **ppEVar7;
  uint uVar8;
  undefined8 unaff_s0;
  uint uVar9;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar10;
  float fVar11;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
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
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (*(int *)&this->m_bDrawCredits != 0) {
    fVar10 = this->m_fFrameCount + _dt;
    fVar11 = 0.0;
    this->m_fFrameCount = fVar10;
    if (0.033 <= fVar10) {
      if (fVar10 < 0.066) {
        if (this->m_nCurrentMode == 2) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
          fVar11 = 2.0;
        }
        else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
          fVar11 = 4.0;
        }
      }
      else if (fVar10 < 0.099) {
        if (this->m_nCurrentMode == 2) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
          fVar11 = 4.0;
        }
        else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
          fVar11 = 8.0;
        }
      }
      else if (this->m_nCurrentMode == 2) {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
        fVar11 = 6.0;
      }
      else {
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
        fVar11 = 12.0;
      }
      fVar11 = fVar11 / (float)_pGfx->m_yscreen;
      this->m_fFrameCount = 0.0;
    }
    Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
    if (this->m_nCurrentMode == 2) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_100 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_fc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_ec = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_e0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_dc = 0x3f800000;
      local_d0 = 0x3f800000;
      local_cc = 0;
      local_c0 = 0;
      local_bc = 0;
      local_b8 = 0;
      local_b4 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_100,
                 &local_f0,&local_e0,&local_d0,&local_c0);
    }
    uVar9 = 0;
    ppEVar7 = this->m_pTitles;
    while( true ) {
      if (ppEVar7[uVar9] != (EEorJobTitle *)0x0) {
        DrawLine__12EEorJobTitleP3ERCf(ppEVar7[uVar9],prc,fVar11);
      }
      uVar9 = uVar9 + 1;
      if (0x29 < uVar9) break;
      ppEVar7 = this->m_pTitles;
    }
    uVar9 = 0;
    Select__6ERFontP3ERC(_globals.m_pFont,prc);
    uVar5 = _WHITE.field0_0x0.d[3];
    uVar4 = _WHITE.field0_0x0.d[2];
    uVar3 = _WHITE.field0_0x0._0_8_;
    pEVar2 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
    (pEVar2->m_vColor).field0_0x0.d[2] = uVar4;
    (pEVar2->m_vColor).field0_0x0.d[3] = uVar5;
                    /* end of inlined section */
    SetSize__6ERFontffb(_globals.m_pFont,18.0,1.0,true);
    bVar1 = true;
    while ((bVar1 && (this->m_pTitles[uVar9] != (EEorJobTitle *)0x0))) {
      DrawText__12EEorJobTitleP3ERC(this->m_pTitles[uVar9],prc);
      uVar9 = uVar9 + 1;
      bVar1 = uVar9 < 0x2a;
    }
    uVar9 = 0;
    SetSize__6ERFontffb(_globals.m_pFont,14.0,1.0,true);
    bVar1 = true;
    while ((bVar1 && (this->m_pNames[uVar9] != (EEorEmployeeName *)0x0))) {
      Draw__16EEorEmployeeNameP3ERCf(this->m_pNames[uVar9],prc,fVar11);
      uVar9 = uVar9 + 1;
      bVar1 = uVar9 < 0x80;
    }
    if (this->m_nCurrentMode == 2) {
      Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_84 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_fc = 0x3f570a3d;
      local_100 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_f0 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_ec = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_e0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_dc = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_ac = 0;
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      local_b0 = 0x3f800000;
      local_94 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].DisplayList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_100,&local_f0
                 ,&local_e0,&local_b0,&local_a0);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_100 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_fc = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_ec = 0x3da3d70a;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_e0 = 0;
      local_cc = 0;
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
                    /* end of inlined section */
      local_f0 = local_84;
      local_dc = local_84;
      local_d0 = local_84;
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_100,
                 &local_f0,&local_e0,&local_d0,&local_90);
                    /* inlined from /eor/src2/engine/e_ctrl.h */
    }
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_ctrl.h */
    uVar9 = 0;
    if ((_ctrlPads[0]->m_status >> 2 & 1U) != 0) {
      uVar9 = _ctrlPads[0]->m_status & 1;
    }
                    /* end of inlined section */
    bVar6 = IsTwoPlayer__7EGlobal(&_globals);
    bVar1 = true;
    if (bVar6) {
                    /* inlined from /eor/src2/engine/e_ctrl.h */
      uVar8 = 0;
      if ((_ctrlPads[1]->m_status >> 2 & 1U) != 0) {
        uVar8 = _ctrlPads[1]->m_status & 1;
      }
                    /* end of inlined section */
      bVar1 = uVar8 != 0;
    }
    if (((uVar9 != 0) && (bVar1)) && (this->m_nCurrentMode != 0)) {
      Draw__10EPromptBarP3ERC(&this->m_PromptBar,prc);
    }
  }
  return;
}

void EEorCreditsMode::Update() {
	bool bGotoNextState;
	EEorEmployeeName *this;
	EEorEmployeeName *this;
	float vol;
	float maxisVol;
	float maxisVol;
	float vol;
	float maxisVol;
	float vol;
	
  short sVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  cSoundPlayer *this_00;
  bool bVar3;
  EResource *pEVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  MOVIE_FADE MVar8;
  code *pcVar9;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  float fVar10;
  uint uVar11;
  float fVar12;
  EGameStateId local_80 [4];
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
  
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  uVar11 = 0;
  if (*(int *)&this->m_bWaitingForMovieToStop == 0) {
    if (*(int *)&this->m_bLoadingNeighborhoodData == 0) {
      if (this->m_nCurrentMode == 0) {
        if (*(int *)&this->m_bMaxisMovieNeedsPlaying == 0) {
          bVar3 = IsMoviePlaying__4EApp(&_app.field0_0x0);
          if (!bVar3) {
            uVar11 = 1;
            StopMovie__4EApp(&_app.field0_0x0);
          }
        }
        else {
                    /* end of inlined section */
          SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kFrontEnd);
          lVar6 = (*(code *)_pAudio->__vtable[1].PauseMusic)
                            ((int)&_pAudio->__vtable +
                             (int)*(short *)&_pAudio->__vtable[1].StopMusic);
          if (lVar6 == 0) {
            PlayMovie__4EAppUiii(&_app.field0_0x0,0x9cb41de2,-1,-1);
            *(undefined4 *)&this->m_bMaxisMovieNeedsPlaying = 0;
            this->m_FadingAudio = kFadeUp;
            this->m_fPauseTime = 0.0;
          }
        }
      }
      else if (this->m_nCurrentMode == 1) {
        if (*(int *)&this->m_bEorMovieNeedsPlaying == 0) {
          bVar3 = IsMoviePlaying__4EApp(&_app.field0_0x0);
          if (bVar3) {
            *(undefined4 *)&this->m_bDrawCredits = 1;
          }
          else {
            StopMovie__4EApp(&_app.field0_0x0);
          }
        }
        else {
                    /* end of inlined section */
          SetGameMode__12cSoundPlayerQ23snd5eMode(_5Globs_pSound,kFrontEnd);
          lVar6 = (*(code *)_pAudio->__vtable[1].PauseMusic)
                            ((int)&_pAudio->__vtable +
                             (int)*(short *)&_pAudio->__vtable[1].StopMusic);
          if (lVar6 == 0) {
            PlayMovie__4EAppUiii(&_app.field0_0x0,0xbe464f2d,0x10,0x60);
            this->m_FadingAudio = kFadeUp;
            *(undefined4 *)&this->m_bEorMovieNeedsPlaying = 0;
            this->m_fPauseTime = 0.0;
          }
        }
      }
      if (_globals.m_nCreditMode == 0) {
LAB_00132bd4:
        pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar6 = (*(code *)pEVar2[1].GetBut)
                          ((int)(_globals.m_pCtrlPad)->m_pressed +
                           *(short *)&pEVar2[1].ClearBut + -4,0,0x40);
        if ((lVar6 != 0) && (this->m_FadingAudio == kFadeNone)) {
          uVar11 = 1;
        }
        uVar7 = this->m_nCurrentMode;
      }
      else {
        pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
        lVar6 = (*(code *)pEVar2[1].GetBut)
                          ((int)(_globals.m_pCtrlPad)->m_pressed +
                           *(short *)&pEVar2[1].ClearBut + -4,0,0x10);
        if ((lVar6 != 0) && (this->m_FadingAudio == kFadeNone)) {
          uVar11 = 1;
        }
        if (_globals.m_nCreditMode == 0) goto LAB_00132bd4;
        uVar7 = this->m_nCurrentMode;
      }
      if (uVar7 == 1) {
        if (this->m_FadingAudio != kFadeNone) {
          uVar7 = this->m_nCurrentMode;
          goto LAB_00132c68;
        }
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_eorcredits.h */
                    /* end of inlined section */
        if (((this->m_pNames[this->m_nLastIndex]->m_vScreenPos).field0_0x0.d[1] <= -0.2) &&
           (bVar3 = IsMoviePlaying__4EApp(&_app.field0_0x0), !bVar3)) {
          uVar11 = uVar7;
        }
      }
      else {
        uVar7 = this->m_nCurrentMode;
LAB_00132c68:
                    /* inlined from c:/eor/src2/games/sims/ESRC/e_eorcredits.h */
                    /* end of inlined section */
        if ((uVar7 == 2) &&
           ((this->m_pNames[this->m_nLastIndex]->m_vScreenPos).field0_0x0.d[1] <= -0.2)) {
          uVar11 = 1;
        }
      }
      if (uVar11 == 0) {
        uVar11 = this->m_nCurrentMode;
      }
      else if (this->m_nCurrentMode < 2) {
        bVar3 = IsMoviePlaying__4EApp(&_app.field0_0x0);
        if (bVar3) {
          this->m_fPauseTime = 0.0;
          this->m_FadingAudio = kFadeDown;
        }
        else {
          StopMovie__4EApp(&_app.field0_0x0);
          *(undefined4 *)&this->m_bWaitingForMovieToStop = 1;
        }
LAB_00132d68:
        uVar11 = this->m_nCurrentMode;
      }
      else if (this->m_nCurrentMode == 2) {
        bVar3 = IsMoviePlaying__4EApp(&_app.field0_0x0);
        if (bVar3) {
          uVar11 = this->m_nCurrentMode;
        }
        else {
          if (_globals.m_nCreditMode == 0) {
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
            __16EResourceManager_m_bTraceEnabled = 0;
            AddRefAsync__16EResourceManagerUi(&_datasetman.field0_0x0,0x6bc3a0fe);
                    /* end of inlined section */
            _globals._380_4_ = 1;
            *(undefined4 *)&this->m_bLoadingNeighborhoodData = 1;
            goto LAB_00132d68;
          }
                    /* end of inlined section */
                    /* end of inlined section */
          local_80[0].m_id = 2;
          SetState__13EGameStateManG12EGameStateId(_app.m_pGameStateMan,local_80);
          uVar11 = this->m_nCurrentMode;
        }
      }
      else {
        uVar11 = this->m_nCurrentMode;
      }
      if (uVar11 == 0) {
        MVar8 = this->m_FadingAudio;
        goto LAB_00132d80;
      }
      Update__10EPromptBar(&this->m_PromptBar);
    }
    else {
      pEVar4 = GetRef__16EResourceManagerUi(&_datasetman.field0_0x0,0x6bc3a0fe);
      if (pEVar4 != (EResource *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
        _globals.m_GenTransitionLoadPercent = 1.1;
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
        __16EResourceManager_m_bTraceEnabled = 1;
LAB_00132a1c:
                    /* end of inlined section */
        local_80[0].m_id = 2;
        SetState__13EGameStateManG12EGameStateId(_app.m_pGameStateMan,local_80);
        MVar8 = this->m_FadingAudio;
        goto LAB_00132d80;
      }
      StopAllVibration__8EVibrate(_globals.m_pVibrate);
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
                    /* end of inlined section */
      _globals.m_GenTransitionLoadPercent = _datasetman.m_fLoadProgress;
    }
  }
  else if (this->m_nCurrentMode == 0) {
    *(undefined4 *)&this->m_bWaitingForMovieToStop = 0;
    ClearCurrentCredits__15EEorCreditsMode(this);
    InitEorCredits__15EEorCreditsMode(this);
    this->m_nCurrentMode = 1;
  }
  else {
    if (this->m_nCurrentMode != 1) {
      MVar8 = this->m_FadingAudio;
      goto LAB_00132d80;
    }
    if (_globals.m_nCreditMode != 0) goto LAB_00132a1c;
    *(undefined4 *)&this->m_bWaitingForMovieToStop = 0;
    ClearCurrentCredits__15EEorCreditsMode(this);
    InitMaxisCredits__15EEorCreditsMode(this);
    this->m_nCurrentMode = 2;
  }
  MVar8 = this->m_FadingAudio;
LAB_00132d80:
  if (MVar8 == kFadeDown) {
    fVar10 = this->m_fPauseTime + _dt + _dt;
    fVar12 = 1.0 - fVar10;
    this->m_fPauseTime = fVar10;
    if (fVar12 <= 0.0) {
      this->m_FadingAudio = kFadeNone;
      (*(code *)_pAudio->__vtable[1].InitAudio)
                ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].EAudio);
      bVar3 = IsMoviePlaying__4EApp(&_app.field0_0x0);
      if (!bVar3) {
        return;
      }
      StopMovie__4EApp(&_app.field0_0x0);
      *(undefined4 *)&this->m_bWaitingForMovieToStop = 1;
      return;
    }
                    /* end of inlined section */
    iVar5 = GetMusicVolume__12cSoundPlayer(_5Globs_pSound);
    fVar10 = (float)iVar5 * 0.1;
    sVar1 = *(short *)&_pAudio->__vtable[1].EAudio;
    pcVar9 = (code *)_pAudio->__vtable[1].InitAudio;
    uVar11 = (int)fVar10 * (uint)(fVar10 < fVar12) | (int)fVar12 * (uint)(fVar10 >= fVar12);
  }
  else {
    if (MVar8 != kFadeUp) {
      return;
    }
    fVar10 = this->m_fPauseTime + _dt + _dt;
    this->m_fPauseTime = fVar10;
    this_00 = _5Globs_pSound;
    if (1.0 <= fVar10) {
      this->m_FadingAudio = kFadeNone;
      iVar5 = GetMusicVolume__12cSoundPlayer(this_00);
      fVar10 = (float)iVar5 * 0.1;
      (*(code *)_pAudio->__vtable[1].InitAudio)
                ((int)fVar10 * (uint)(fVar10 < 1.0) | (uint)(fVar10 >= 1.0) * 0x3f800000,
                 (int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].EAudio);
      return;
    }
                    /* end of inlined section */
    iVar5 = GetMusicVolume__12cSoundPlayer(_5Globs_pSound);
    fVar12 = (float)iVar5 * 0.1;
    fVar10 = this->m_fPauseTime;
    sVar1 = *(short *)&_pAudio->__vtable[1].EAudio;
    pcVar9 = (code *)_pAudio->__vtable[1].InitAudio;
    uVar11 = (int)fVar12 * (uint)(fVar12 < fVar10) | (int)fVar10 * (uint)(fVar12 >= fVar10);
  }
  (*pcVar9)(uVar11,(int)&_pAudio->__vtable + (int)sVar1);
  return;
}

EEorJobTitle* EEorJobTitle::EEorJobTitle(c16 *szName) {
	u32 i;
	
  short sVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  psVar2 = (short *)_memmanAlloc__FUiUi(0x80,4);
  this->m_szName = psVar2;
  if (*szName == 0) {
    psVar2 = this->m_szName;
  }
  else {
    iVar3 = 0;
    psVar2 = this->m_szName;
    while( true ) {
      uVar4 = uVar4 + 1;
      sVar1 = *szName;
      szName = szName + 1;
      *(short *)(iVar3 + (int)psVar2) = sVar1;
      iVar3 = iVar3 + 2;
      if ((0x3e < uVar4) || (*szName == 0)) break;
      psVar2 = this->m_szName;
    }
    psVar2 = this->m_szName;
  }
  psVar2[uVar4] = 0;
  (this->m_vScreenPos).field0_0x0.d[0] = 0.5;
  (this->m_vScreenPos).field0_0x0.d[1] = -0.5;
  (this->m_vUpperLeft).field0_0x0.d[0] = 0.0;
  (this->m_vUpperLeft).field0_0x0.d[1] = 0.0;
  (this->m_vLowerRight).field0_0x0.d[0] = 0.0;
  (this->m_vLowerRight).field0_0x0.d[1] = 0.0;
  return this;
}

void EEorJobTitle::~EEorJobTitle(int __in_chrg) {
	void *pAddress;
	
  _memmanFree__FPv(this->m_szName);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EEorJobTitle::DrawText(ERC *prc) {
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	
  undefined8 unaff_retaddr;
  float fVar1;
  float local_20;
  float local_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  fVar1 = (this->m_vScreenPos).field0_0x0.d[1];
                    /* end of inlined section */
  if ((fVar1 < 1.0) && (-0.2 < fVar1)) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_20 = (this->m_vScreenPos).field0_0x0.d[0];
    local_1c = (this->m_vScreenPos).field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,this->m_szName,true,(EVec2 *)&local_20,E_FAX_CENTER,E_FAY_CENTER
               ,(EVec2 *)0x0);
  }
                    /* end of inlined section */
  return;
}

void EEorJobTitle::DrawLine(ERC *prc, float fDelta) {
	EVec2 *this;
	EVec2 *this;
	
  undefined8 unaff_retaddr;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  fVar1 = (this->m_vScreenPos).field0_0x0.d[1];
  if (-0.2 < fVar1) {
                    /* end of inlined section */
    fVar1 = fVar1 - fDelta;
    fVar3 = (this->m_vLowerRight).field0_0x0.d[1];
    fVar2 = (this->m_vUpperLeft).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    (this->m_vScreenPos).field0_0x0.d[1] = fVar1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    (this->m_vLowerRight).field0_0x0.d[1] = fVar3 - fDelta;
    (this->m_vUpperLeft).field0_0x0.d[1] = fVar2 - fDelta;
    if (fVar1 < 1.0) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_40 = 0;
      local_3c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_30 = 0x3f800000;
      local_2c = 0;
      local_14 = 0x3f800000;
      local_18 = 0x3f800000;
      local_1c = 0x3f800000;
      local_20 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].DisplayList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&this->m_vUpperLeft,
                 &this->m_vLowerRight,&local_40,&local_30,&local_20);
    }
  }
  return;
}

void EEorJobTitle::SetScreenPosition(EVec2 vNewPos) {
	EVec2 vStringSize;
	float invScaler;
	EVec2 *this;
	EVec2 *this;
	EGraphics *this;
	EVec2 *this;
	EVec2 *this;
	EGraphics *this;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong in_v0;
  ulong uVar5;
  EVec2 vStringSize;
  
  puVar1 = (undefined *)((int)&vNewPos->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vNewPos & 7;
  uVar5 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vNewPos - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(this->m_vScreenPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vScreenPos & 7;
  puVar4 = (ulong *)((int)&this->m_vScreenPos - uVar2);
  *puVar4 = uVar5 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  SetSize__6ERFontffb(_globals.m_pFont,18.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vStringSize,_globals.m_pFont,SUB41(this->m_szName,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (this->m_vUpperLeft).field0_0x0.d[0] =
       ((vNewPos->field0_0x0).d[0] - vStringSize.field0_0x0.d[0] * 0.5) - 0.015;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  (this->m_vUpperLeft).field0_0x0.d[1] =
       (vNewPos->field0_0x0).d[1] + vStringSize.field0_0x0.d[1] * 0.5 +
       2.0 / (float)_pGfx->m_yscreen;
  (this->m_vLowerRight).field0_0x0.d[0] =
       (vNewPos->field0_0x0).d[0] + vStringSize.field0_0x0.d[0] * 0.5 + 0.015;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  (this->m_vLowerRight).field0_0x0.d[1] =
       (vNewPos->field0_0x0).d[1] + vStringSize.field0_0x0.d[1] * 0.5 +
       5.0 / (float)_pGfx->m_yscreen;
  return;
}

EEorEmployeeName* EEorEmployeeName::EEorEmployeeName(c16 *szName) {
	u32 i;
	
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = 0;
  pcVar2 = (char *)_memmanAlloc__FUiUi(0x40,4);
  this->m_szName = pcVar2;
  if (*szName == 0) {
    pcVar2 = this->m_szName;
  }
  else {
    pcVar2 = this->m_szName;
    while( true ) {
      cVar1 = *(char *)szName;
      pcVar2 = pcVar2 + uVar3;
      szName = szName + 1;
      uVar3 = uVar3 + 1;
      *pcVar2 = cVar1;
      if ((0x3e < uVar3) || (*szName == 0)) break;
      pcVar2 = this->m_szName;
    }
    pcVar2 = this->m_szName;
  }
  pcVar2[uVar3] = '\0';
  (this->m_vScreenPos).field0_0x0.d[0] = 0.5;
  (this->m_vScreenPos).field0_0x0.d[1] = -0.5;
  return this;
}

void EEorEmployeeName::~EEorEmployeeName(int __in_chrg) {
	void *pAddress;
	
  _memmanFree__FPv(this->m_szName);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EEorEmployeeName::Draw(ERC *prc, float fDelta) {
	EVec2 *this;
	ERFont *this;
	ERC *prc;
	char *szString;
	
  undefined8 unaff_retaddr;
  float fVar1;
  float local_20;
  float local_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  fVar1 = (this->m_vScreenPos).field0_0x0.d[1];
                    /* end of inlined section */
  if ((-0.2 < fVar1) &&
     (fVar1 = fVar1 - fDelta, (this->m_vScreenPos).field0_0x0.d[1] = fVar1, fVar1 < 1.0)) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_20 = (this->m_vScreenPos).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    local_1c = (this->m_vScreenPos).field0_0x0.d[1];
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,this->m_szName,false,(EVec2 *)&local_20,E_FAX_CENTER,E_FAY_TOP,
               (EVec2 *)0x0);
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

void EGameState::~EGameState(int __in_chrg) {
	EGameStateId *this;
	void *pAddress;
	void *ptr;
	
  this->__vtable = (EGameState__vtable *)_vt_10EGameState;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}
