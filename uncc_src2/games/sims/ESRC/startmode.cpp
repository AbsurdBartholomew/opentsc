// STATUS: NOT STARTED

#include "startmode.h"

__vtbl_ptr_type EStartMode virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStartMode::~EStartMode,
		/* .__delta2 = */ -11424
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStartMode::Init,
		/* .__delta2 = */ -11376
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStartMode::Update,
		/* .__delta2 = */ -10600
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStartMode::Draw,
		/* .__delta2 = */ -9328
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStartMode::Reset,
		/* .__delta2 = */ -10912
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

EStartMode* EStartMode::EStartMode() {
	EGameState *this;
	EGameStateId *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EGameState__vtable *)_vt_10EStartMode;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  (this->field0_0x0).m_state.m_id = 4;
  this->m_introdoneTime = 0.0;
  this->m_pBackground = (ERShader *)0x0;
  this->m_BarLeft = (ERShader *)0x0;
  this->m_BarMiddle = (ERShader *)0x0;
  this->m_BarRight = (ERShader *)0x0;
  this->m_BarHighlightLeft = (ERShader *)0x0;
  this->m_BarHighlightMiddle = (ERShader *)0x0;
  this->m_BarHighlightRight = (ERShader *)0x0;
  *(undefined4 *)&this->m_bDrawFirstTime = 0;
  *(undefined4 *)&this->m_bMovieNeedsFading = 0;
  return this;
}

void EStartMode::~EStartMode(int __in_chrg) {
	EGameState *this;
	EGameStateId *this;
	void *pAddress;
	void *ptr;
	void *ptr;
	
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

void EStartMode::Init(int FromState) {
	EGraphics *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  EGraphics *pEVar4;
  ERShader *pEVar5;
  EWindow *pEVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float fVar7;
  TRect_float_ local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  this->m_introdoneTime = 0.0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_flashTime = 0.43;
  fVar7 = this->m_introdoneTime;
  *(undefined4 *)&this->m_bDrawFirstTime = 1;
  *(undefined4 *)&this->m_bMovieNeedsFading = 0;
  this->m_nDisplayMode = '\0';
  puVar1 = (undefined *)((int)&(this->m_vBarPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x3f4666663f000000U >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vBarPos & 7;
  puVar3 = (ulong *)((int)&this->m_vBarPos - uVar2);
  *puVar3 = 0x3f4666663f000000 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  this->m_fBarWidth = 0.6;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_fHighestProgress = fVar7;
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf584d6bf,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBackground = pEVar5;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x55894b94,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_BarLeft = pEVar5;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc5365605,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_BarMiddle = pEVar5;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xaf8676f7,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_BarRight = pEVar5;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf0ba748c,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_BarHighlightLeft = pEVar5;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6005691d,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_BarHighlightMiddle = pEVar5;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xab549ef,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_BarHighlightRight = pEVar5;
                    /* inlined from /eor/src2/engine/window/e_window.h */
  pEVar6 = (EWindow *)_memmanAlloc__FUiUi(0xa0,0x10);
                    /* end of inlined section */
  pEVar6 = __7EWindow(pEVar6);
  pEVar4 = _pGfx;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  this->m_pClipWin = pEVar6;
  local_50.left = (this->m_vBarPos).field0_0x0.d[0];
  fVar7 = this->m_fBarWidth * 0.5;
  local_50.top = (this->m_vBarPos).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  local_50.right = local_50.left + fVar7;
  local_50.left = local_50.left - fVar7;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  local_50.bottom = local_50.top + 32.0 / (float)pEVar4->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  SetClip__7EWindowRCt5TRect1Zf(pEVar6,&local_50);
  return;
}

void EStartMode::Reset(int ToState) {
  EWindow *pEVar1;
  ERShader *pEVar2;
  
  this->m_introdoneTime = 0.0;
  this->m_flashTime = 0.43;
  this->m_nDisplayMode = '\x01';
  while (this->m_pBackground != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pBackground->field0_0x0);
    this->m_pBackground = (ERShader *)0x0;
  }
  pEVar2 = this->m_BarLeft;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_BarLeft = (ERShader *)0x0;
    pEVar2 = this->m_BarLeft;
  }
  pEVar2 = this->m_BarMiddle;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_BarMiddle = (ERShader *)0x0;
    pEVar2 = this->m_BarMiddle;
  }
  pEVar2 = this->m_BarRight;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_BarRight = (ERShader *)0x0;
    pEVar2 = this->m_BarRight;
  }
  pEVar2 = this->m_BarHighlightLeft;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_BarHighlightLeft = (ERShader *)0x0;
    pEVar2 = this->m_BarHighlightLeft;
  }
  pEVar2 = this->m_BarHighlightMiddle;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_BarHighlightMiddle = (ERShader *)0x0;
    pEVar2 = this->m_BarHighlightMiddle;
  }
  pEVar2 = this->m_BarHighlightRight;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_BarHighlightRight = (ERShader *)0x0;
    pEVar2 = this->m_BarHighlightRight;
  }
  pEVar1 = this->m_pClipWin;
  if (pEVar1 != (EWindow *)0x0) {
    (*(code *)pEVar1->__vtable->WindowMatrixChanged)
              ((int)&(pEVar1->m_mWindow).field0_0x0 + (int)*(short *)&pEVar1->__vtable->Select,3);
  }
  return;
}

void EStartMode::Update() {
	static bool sMovieWasPlaying = false;
	float vol;
	int nVolume;
	float fVolume;
	
  char cVar1;
  short sVar2;
  EUIVirtualCtrl__vtable *pEVar3;
  EAudio__0_3277__vtable *pEVar4;
  EAudio__0_3277__vtable **ppEVar5;
  bool bVar6;
  EResource *pEVar7;
  long lVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar9;
  EPMDesc local_80;
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
  
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar9 = this->m_introdoneTime + _dt;
  this->m_introdoneTime = fVar9;
  if (this->m_flashTime <= fVar9) {
    *(uint *)&this->m_bDrawPrompt = *(uint *)&this->m_bDrawPrompt ^ 1;
    this->m_flashTime = fVar9 + 0.43;
  }
  switch(this->m_nDisplayMode) {
  case '\0':
    if (0.25 <= this->m_introdoneTime) {
      this->m_introdoneTime = 0.0;
      this->m_nDisplayMode = '\x01';
    }
    break;
  case '\x01':
    if (15.0 < this->m_introdoneTime) {
      (*(code *)_pAudio->__vtable[1].InitAudio)
                (0x3f800000,(int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].EAudio);
      PlayMovie__4EAppUiii(&_app.field0_0x0,0xb5968ed8,-1,-1);
      *(undefined4 *)&this->m_bMovieNeedsFading = 0;
      sMovieWasPlaying_2385 = 1;
      this->m_nDisplayMode = '\x02';
    }
    else {
      pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar8 = (*(code *)pEVar3[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,
                         0,0x800);
      if (lVar8 != 0) {
        this->m_nDisplayMode = '\a';
      }
    }
    break;
  case '\x02':
    pEVar3 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar8 = (*(code *)pEVar3[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar3[1].ClearBut + -4,0,
                       0x800);
    if (lVar8 != 0) {
      *(undefined4 *)&this->m_bMovieNeedsFading = 1;
    }
    if (*(int *)&this->m_bMovieNeedsFading != 0) {
      fVar9 = (float)(*(code *)_pAudio->__vtable[1].Update)
                               ((int)&_pAudio->__vtable +
                                (int)*(short *)&_pAudio->__vtable[1].Shutdown);
      fVar9 = fVar9 - (_dt + _dt);
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
        StopMovie__4EApp(&_app.field0_0x0);
      }
      (*(code *)_pAudio->__vtable[1].InitAudio)
                (fVar9,(int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].EAudio);
    }
    bVar6 = IsMoviePlaying__4EApp(&_app.field0_0x0);
    if (!bVar6) {
      sMovieWasPlaying_2385 = 0;
      this->m_nDisplayMode = '\x01';
      this->m_flashTime = 0.43;
      this->m_introdoneTime = 0.0;
    }
    break;
  case '\x03':
    CreateGlobal__8EUiAudio();
    SetDefaults__7EGlobal(&_globals);
    if (_globals.Cheats._0_4_ != 0) {
      cVar1 = (_globals.m_pOptionsRecon)->m_nSFXVolume;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
      fVar9 = (float)(int)cVar1 * 0.1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      if (0.0 <= fVar9) {
        _8EUiAudio_m_fVolume =
             (float)((int)fVar9 * (uint)(fVar9 < 1.0) | (uint)(fVar9 >= 1.0) * 0x3f800000);
      }
      else {
        _8EUiAudio_m_fVolume = 0.0;
      }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
                    /* end of inlined section */
      SetFXVolume__12cSoundPlayeri(_5Globs_pSound,(int)cVar1);
      SetVoxVolume__12cSoundPlayeri(_5Globs_pSound,(int)cVar1);
      SetMusicVolume__12cSoundPlayeri
                (_5Globs_pSound,(int)(_globals.m_pOptionsRecon)->m_nMusicVolume);
    }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_80.uAudioStreamID = 0x3e800000;
                    /* end of inlined section */
    local_80.sLoopStartOffset = 0x3e800000;
    DisplayTiming__9EGraphicsbRC5EVec2(_pGfx,SUB41(_globals.Cheats._32_4_,0),(EVec2 *)&local_80);
    this->m_nDisplayMode = '\x04';
    break;
  case '\x04':
    pEVar7 = GetRef__16EResourceManagerUi(&_datasetman.field0_0x0,0x5012e600);
    if (pEVar7 != (EResource *)0x0) {
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
      __16EResourceManager_m_bTraceEnabled = 0;
      AddRefAsync__16EResourceManagerUi(&_datasetman.field0_0x0,0x6bc3a0fe);
                    /* end of inlined section */
      this->m_nDisplayMode = '\x05';
    }
    break;
  case '\x05':
    pEVar7 = GetRef__16EResourceManagerUi(&_datasetman.field0_0x0,0x6bc3a0fe);
    if (pEVar7 != (EResource *)0x0) {
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
      __16EResourceManager_m_bTraceEnabled = 1;
                    /* end of inlined section */
                    /* end of inlined section */
      local_80.uAudioStreamID = 2;
      SetState__13EGameStateManG12EGameStateId(_app.m_pGameStateMan,(EGameStateId *)&local_80);
    }
    break;
  case '\x06':
    pEVar7 = GetRef__16EResourceManagerUi(&_datasetman.field0_0x0,0x5012e600);
    if (pEVar7 != (EResource *)0x0) {
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
                    /* end of inlined section */
      this->m_nDisplayMode = '\x03';
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
      __16EResourceManager_m_bTraceEnabled = 1;
                    /* end of inlined section */
    }
    break;
  case '\a':
    LoadPreGlobalRequirements__7EGlobal(&_globals);
    if (_globals.Cheats._0_4_ != 0) {
      (*(code *)_pAudio->__vtable[1].InitAudio)
                ((float)(int)(_globals.m_pOptionsRecon)->m_nMusicVolume * 0.1,
                 (int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].EAudio);
      pEVar4 = _pAudio->__vtable;
      sVar2 = *(short *)&pEVar4->IsPlayingMusic;
      ppEVar5 = &_pAudio->__vtable;
      __7EPMDescUib(&local_80,0x76aa055d,true);
      (*(code *)pEVar4->AllocVoice)((int)ppEVar5 + (int)sVar2,&local_80);
      (*(code *)_pAudio->__vtable->ResumeMusic)
                ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->PauseMusic,0);
    }
    if (_globals.Cheats.LocTestEnabled != 0xff) {
      _quickdataman.m_iLanguage = (uint)_globals.Cheats.LocTestEnabled;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
      Reload__16EResourceManagerUi(&_quickdataman.field0_0x0,0xa173a1ee);
    }
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
    __16EResourceManager_m_bTraceEnabled = 0;
    AddRefAsync__16EResourceManagerUi(&_datasetman.field0_0x0,0x5012e600);
                    /* end of inlined section */
    this->m_nDisplayMode = '\x06';
  }
  return;
}

void EStartMode::Draw(ERC *prc) {
	ERFont &font;
	float fProgress;
	ERFont *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	float y;
	EGraphics *this;
	float y;
	EGraphics *this;
	float y;
	EVec4 vStartColor;
	EVec4 vEndColor;
	EVec4 vCurColor;
	EGraphics *this;
	float y;
	EGraphics *this;
	float y;
	EGraphics *this;
	float y;
	float y;
	EGraphics *this;
	float y;
	EGraphics *this;
	float y;
	EVec4 vStartColor;
	EVec4 vEndColor;
	EVec4 vCurColor;
	EGraphics *this;
	float y;
	EGraphics *this;
	float y;
	EGraphics *this;
	float y;
	
  EGlobalManagerClient__vtable *pEVar1;
  EWindow__vtable *pEVar2;
  ERFont *this_00;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short *psVar6;
  undefined8 uVar7;
  ERShader *this_01;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  EVec4 vStartColor;
  EVec4 vEndColor;
  EVec4 vCurColor;
  TRect_float_ local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
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
  
  this_00 = _globals.m_pFont;
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  switch(this->m_nDisplayMode) {
  case '\0':
    Select__8ERShaderP3ERCi(this->m_pBackground,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vStartColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStartColor.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vEndColor.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vEndColor.field0_0x0.d[1] = 1.0;
    vCurColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
    local_d4 = this->m_introdoneTime * 4.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vCurColor.field0_0x0.d[1] = 1.0;
    local_f0.left = 1.0;
    local_f0.top = 0.0;
    local_e0 = 1.0;
    local_d8 = 1.0;
    local_dc = 1.0;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vStartColor,
               &vEndColor,&vCurColor,&local_f0,&local_e0);
    break;
  case '\x01':
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pBackground,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStartColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStartColor.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vEndColor.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vEndColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vCurColor.field0_0x0.d[0] = 0.0;
    vCurColor.field0_0x0.d[1] = 1.0;
    local_d0 = 0x3f800000;
    local_cc = 0;
    local_b4 = 0x3f800000;
    local_b8 = 0x3f800000;
    local_bc = 0x3f800000;
    local_c0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vStartColor,
               &vEndColor,&vCurColor,&local_d0,&local_c0);
    if (*(int *)&this->m_bDrawPrompt != 0) {
      SetSize__6ERFontffb(this_00,25.0,1.0,true);
      Select__6ERFontP3ERC(this_00,prc);
      uVar5 = _BLACK.field0_0x0.d[3];
      uVar4 = _BLACK.field0_0x0.d[2];
      uVar3 = _BLACK.field0_0x0._0_8_;
      fVar8 = 0.5;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
      (this_00->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
      (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
      (this_00->m_vColor).field0_0x0.d[2] = uVar4;
      (this_00->m_vColor).field0_0x0.d[3] = uVar5;
      psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"press_start_button_message");
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      vStartColor.field0_0x0.d[1] = 1.0 / (float)_pGfx->m_yscreen + 0.775;
      vStartColor.field0_0x0.d[0] = 1.0 / (float)_pGfx->m_xscreen + fVar8;
      vEndColor.field0_0x0.d[0] = vStartColor.field0_0x0.d[0];
      vEndColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this_00,prc,psVar6,true,(EVec2 *)&vEndColor,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
      uVar5 = _RED.field0_0x0.d[3];
      uVar4 = _RED.field0_0x0.d[2];
      uVar3 = _RED.field0_0x0._0_8_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
      (this_00->m_vColor).field0_0x0.d[0] = (float)_RED.field0_0x0._0_8_;
      (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
      (this_00->m_vColor).field0_0x0.d[2] = uVar4;
      (this_00->m_vColor).field0_0x0.d[3] = uVar5;
      psVar6 = GetMainMenuUIString__7EGlobalPCc(&_globals,"press_start_button_message");
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      vEndColor.field0_0x0.d[1] = 0.775;
      vStartColor.field0_0x0.d[1] = 0.775;
      vStartColor.field0_0x0.d[0] = fVar8;
      vEndColor.field0_0x0.d[0] = fVar8;
      DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                (this_00,prc,psVar6,true,(EVec2 *)&vEndColor,E_FAX_CENTER,E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
    }
    break;
  case '\x03':
  case '\x06':
    if (*(int *)&this->m_bDrawFirstTime == 1) {
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[3].ManagedShutdown)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
      *(undefined4 *)&this->m_bDrawFirstTime = 0;
      this_01 = this->m_pBackground;
    }
    else {
      this_01 = this->m_pBackground;
    }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStartColor.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this_01,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vStartColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStartColor.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vCurColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0.top = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    vEndColor.field0_0x0.d[0] = vStartColor.field0_0x0.d[3];
    vEndColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[3];
    local_f0.left = vStartColor.field0_0x0.d[3];
    local_e0 = vStartColor.field0_0x0.d[3];
    local_dc = vStartColor.field0_0x0.d[3];
    local_d8 = vStartColor.field0_0x0.d[3];
    local_d4 = vStartColor.field0_0x0.d[3];
    (*(code *)prc->__vtable[1].DisplayList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vStartColor,
               &vEndColor,&vCurColor,&local_f0,&local_e0);
    Select__8ERShaderP3ERCi(this->m_BarLeft,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStartColor.field0_0x0.d[1] = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
    vStartColor.field0_0x0.d[0] = (this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vEndColor.field0_0x0.d[0] = vStartColor.field0_0x0.d[3];
    vEndColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[0] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[2] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[3] = vStartColor.field0_0x0.d[3];
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vStartColor,
               &vEndColor,&vCurColor);
    Select__8ERShaderP3ERCi(this->m_BarRight,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStartColor.field0_0x0.d[1] = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vStartColor.field0_0x0.d[0] =
         ((this->m_vBarPos).field0_0x0.d[0] + this->m_fBarWidth * 0.5) -
         33.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vEndColor.field0_0x0.d[0] = vStartColor.field0_0x0.d[3];
    vEndColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[0] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[2] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[3] = vStartColor.field0_0x0.d[3];
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vStartColor,
               &vEndColor,&vCurColor);
    Select__8ERShaderP3ERCi(this->m_BarMiddle,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStartColor.field0_0x0.d[1] = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vStartColor.field0_0x0.d[0] =
         ((this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5) +
         32.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vEndColor.field0_0x0.d[0] =
         (this->m_fBarWidth - 64.0 / (float)_pGfx->m_xscreen) * (float)_pGfx->m_xscreen * 0.03125;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vEndColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[0] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[2] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[3] = vStartColor.field0_0x0.d[3];
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vStartColor,
               &vEndColor,&vCurColor);
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
                    /* end of inlined section */
    if (this->m_fHighestProgress < _datasetman.m_fLoadProgress * 0.5) {
      this->m_fHighestProgress = _datasetman.m_fLoadProgress * 0.5;
    }
    fVar8 = this->m_fHighestProgress;
    if (fVar8 < 0.01) {
      return;
    }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vStartColor.field0_0x0.d[1] = 0.133;
    vStartColor.field0_0x0.d[2] = 0.32;
    vEndColor.field0_0x0.d[0] = 0.547;
    vStartColor.field0_0x0.d[0] = 0.0;
    vEndColor.field0_0x0.d[1] = 0.863;
    vEndColor.field0_0x0.d[2] = 0.883;
                    /* end of inlined section */
    if (fVar8 <= 0.0) {
      uVar7 = 0x3e08312700000000;
      vCurColor.field0_0x0.d[2] = 0.32;
LAB_001de23c:
      vCurColor.field0_0x0.d[0] = (float)(int)uVar7;
      vCurColor.field0_0x0.d[1] = (float)(int)((ulong)uVar7 >> 0x20);
    }
    else {
      if (vStartColor.field0_0x0.d[3] <= fVar8) {
        uVar7 = 0x3f5ced913f0c0831;
        vCurColor.field0_0x0.d[2] = 0.883;
        goto LAB_001de23c;
      }
      vCurColor.field0_0x0.d[0] = fVar8 * 0.547 + 0.0;
      vCurColor.field0_0x0.d[1] = fVar8 * 0.73 + 0.133;
      vCurColor.field0_0x0.d[2] = fVar8 * 0.563 + 0.32;
    }
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
    local_f0.top = (this->m_vBarPos).field0_0x0.d[1];
    local_f0.left = (this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5;
                    /* inlined from /eor/src2/common/math/e_rect.h */
    fVar8 = 1.0;
                    /* end of inlined section */
    local_f0.bottom = local_f0.top + 32.0 / (float)_pGfx->m_yscreen;
    local_f0.right = local_f0.left + this->m_fHighestProgress * this->m_fBarWidth;
    uVar10 = 0;
    vEndColor.field0_0x0.d[3] = vStartColor.field0_0x0.d[3];
    vCurColor.field0_0x0.d[3] = vStartColor.field0_0x0.d[3];
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    SetClip__7EWindowRCt5TRect1Zf(this->m_pClipWin,&local_f0);
    pEVar2 = this->m_pClipWin->__vtable;
    (*(code *)pEVar2->OutputCoordinatesChanged)
              ((int)&(this->m_pClipWin->m_mWindow).field0_0x0 +
               (int)*(short *)&pEVar2->InputCoordinatesChanged,prc);
    Select__8ERShaderP3ERCi(this->m_BarHighlightLeft,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0.top = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
    local_f0.left = (this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_e0 = fVar8;
    local_dc = fVar8;
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar10,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_f0,
               &local_e0,&vCurColor);
    Select__8ERShaderP3ERCi(this->m_BarHighlightRight,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0.top = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_f0.left =
         ((this->m_vBarPos).field0_0x0.d[0] + this->m_fBarWidth * 0.5) -
         33.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_e0 = fVar8;
    local_dc = fVar8;
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar10,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_f0,
               &local_e0,&vCurColor);
    Select__8ERShaderP3ERCi(this->m_BarHighlightMiddle,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0.top = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_f0.left =
         ((this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5) +
         32.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_e0 = (this->m_fBarWidth - 64.0 / (float)_pGfx->m_xscreen) * (float)_pGfx->m_xscreen *
               0.03125;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_dc = fVar8;
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar10,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_f0,
               &local_e0,&vCurColor);
    (*(code *)(_app.m_pFullWindow)->__vtable->OutputCoordinatesChanged)
              ((int)&((_app.m_pFullWindow)->m_mWindow).field0_0x0 +
               (int)*(short *)&(_app.m_pFullWindow)->__vtable->InputCoordinatesChanged,prc);
    break;
  case '\x04':
  case '\x05':
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    Select__8ERShaderP3ERCi(this->m_pBackground,prc,0);
    fVar9 = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vStartColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStartColor.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vEndColor.field0_0x0.d[0] = 1.0;
    vEndColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vCurColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vCurColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0.top = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0.left = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_d4 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_d8 = 1.0;
    local_dc = 1.0;
    local_e0 = 1.0;
                    /* end of inlined section */
    fVar8 = 0.5;
    (*(code *)prc->__vtable[1].DisplayList)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vStartColor,
               &vEndColor,&vCurColor,&local_f0,&local_e0);
    Select__8ERShaderP3ERCi(this->m_BarLeft,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStartColor.field0_0x0.d[1] = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
    vStartColor.field0_0x0.d[0] = (this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vEndColor.field0_0x0.d[1] = 1.0;
    vEndColor.field0_0x0.d[0] = 1.0;
    vCurColor.field0_0x0.d[3] = 1.0;
    vCurColor.field0_0x0.d[2] = 1.0;
    vCurColor.field0_0x0.d[1] = 1.0;
    vCurColor.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (fVar9,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vStartColor,
               &vEndColor,&vCurColor);
    Select__8ERShaderP3ERCi(this->m_BarRight,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStartColor.field0_0x0.d[1] = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vStartColor.field0_0x0.d[0] =
         ((this->m_vBarPos).field0_0x0.d[0] + this->m_fBarWidth * 0.5) -
         33.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vEndColor.field0_0x0.d[1] = 1.0;
    vEndColor.field0_0x0.d[0] = 1.0;
    vCurColor.field0_0x0.d[3] = 1.0;
    vCurColor.field0_0x0.d[2] = 1.0;
    vCurColor.field0_0x0.d[1] = 1.0;
    vCurColor.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (fVar9,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vStartColor,
               &vEndColor,&vCurColor);
    Select__8ERShaderP3ERCi(this->m_BarMiddle,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStartColor.field0_0x0.d[1] = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vStartColor.field0_0x0.d[0] =
         ((this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5) +
         32.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    vEndColor.field0_0x0.d[0] =
         (this->m_fBarWidth - 64.0 / (float)_pGfx->m_xscreen) * (float)_pGfx->m_xscreen * 0.03125;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vEndColor.field0_0x0.d[1] = 1.0;
    vCurColor.field0_0x0.d[3] = 1.0;
    vCurColor.field0_0x0.d[2] = 1.0;
    vCurColor.field0_0x0.d[1] = 1.0;
    vCurColor.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (fVar9,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vStartColor,
               &vEndColor,&vCurColor);
                    /* inlined from /eor/src2/engine/dataset/e_datasetman.h */
                    /* end of inlined section */
    if (fVar9 <= _datasetman.m_fLoadProgress) {
      fVar8 = _datasetman.m_fLoadProgress * 0.5 + 0.5;
    }
    if (this->m_fHighestProgress < fVar8) {
      this->m_fHighestProgress = fVar8;
    }
    fVar8 = this->m_fHighestProgress;
    if (fVar8 < 0.0) {
      return;
    }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vStartColor.field0_0x0.d[1] = 0.133;
    vStartColor.field0_0x0.d[2] = 0.32;
    vEndColor.field0_0x0.d[0] = 0.373;
    vEndColor.field0_0x0.d[1] = 0.871;
    vEndColor.field0_0x0.d[2] = 0.906;
    vEndColor.field0_0x0.d[3] = 1.0;
    vStartColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
    vStartColor.field0_0x0.d[3] = 1.0;
    if (fVar8 <= 0.0) {
      uVar7 = 0x3e08312700000000;
      vCurColor.field0_0x0.d[2] = 0.32;
LAB_001de7c0:
      vCurColor.field0_0x0.d[0] = (float)(int)uVar7;
      vCurColor.field0_0x0.d[1] = (float)(int)((ulong)uVar7 >> 0x20);
    }
    else {
      if (1.0 <= fVar8) {
        uVar7 = 0x3f5ef9db3ebef9db;
        vCurColor.field0_0x0.d[2] = 0.906;
        goto LAB_001de7c0;
      }
      vCurColor.field0_0x0.d[0] = fVar8 * 0.373 + 0.0;
      vCurColor.field0_0x0.d[1] = fVar8 * 0.738 + 0.133;
      vCurColor.field0_0x0.d[2] = fVar8 * 0.586 + 0.32;
    }
                    /* inlined from /eor/src2/engine/e_graphics.h */
    vCurColor.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
    local_f0.top = (this->m_vBarPos).field0_0x0.d[1];
    local_f0.left = (this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5;
                    /* inlined from /eor/src2/common/math/e_rect.h */
    fVar8 = 1.0;
                    /* end of inlined section */
    local_f0.bottom = local_f0.top + 32.0 / (float)_pGfx->m_yscreen;
    local_f0.right = local_f0.left + this->m_fHighestProgress * this->m_fBarWidth;
    uVar10 = 0;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    SetClip__7EWindowRCt5TRect1Zf(this->m_pClipWin,&local_f0);
    pEVar2 = this->m_pClipWin->__vtable;
    (*(code *)pEVar2->OutputCoordinatesChanged)
              ((int)&(this->m_pClipWin->m_mWindow).field0_0x0 +
               (int)*(short *)&pEVar2->InputCoordinatesChanged,prc);
    Select__8ERShaderP3ERCi(this->m_BarHighlightLeft,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0.top = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
    local_f0.left = (this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_e0 = fVar8;
    local_dc = fVar8;
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar10,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_f0,
               &local_e0,&vCurColor);
    Select__8ERShaderP3ERCi(this->m_BarHighlightRight,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0.top = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_f0.left =
         ((this->m_vBarPos).field0_0x0.d[0] + this->m_fBarWidth * 0.5) -
         33.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_e0 = fVar8;
    local_dc = fVar8;
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar10,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_f0,
               &local_e0,&vCurColor);
    Select__8ERShaderP3ERCi(this->m_BarHighlightMiddle,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_f0.top = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_f0.left =
         ((this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5) +
         32.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_e0 = (this->m_fBarWidth - 64.0 / (float)_pGfx->m_xscreen) * (float)_pGfx->m_xscreen *
               0.03125;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    local_dc = fVar8;
    (*(code *)prc->__vtable[1].ClipRect)
              (uVar10,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_f0,
               &local_e0,&vCurColor);
    (*(code *)(_app.m_pFullWindow)->__vtable->OutputCoordinatesChanged)
              ((int)&((_app.m_pFullWindow)->m_mWindow).field0_0x0 +
               (int)*(short *)&(_app.m_pFullWindow)->__vtable->InputCoordinatesChanged,prc);
    break;
  case '\a':
    Select__8ERShaderP3ERCi(this->m_pBackground,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    vStartColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vStartColor.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vEndColor.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vEndColor.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vCurColor.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    vCurColor.field0_0x0.d[1] = 1.0;
    local_f0.left = 1.0;
    local_f0.top = 0.0;
    local_a4 = 0x3f800000;
    local_a8 = 0x3f800000;
    local_ac = 0x3f800000;
    local_b0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vStartColor,
               &vEndColor,&vCurColor,&local_f0,&local_b0);
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
