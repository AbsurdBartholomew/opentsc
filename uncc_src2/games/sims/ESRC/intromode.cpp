// STATUS: NOT STARTED

#include "intromode.h"

struct EBackdoorManager : EResourceManager {
	EBackdoorManager& operator=();
	EBackdoorManager();
	/* vtable[1] */ virtual EBackdoorManager(EBackdoorManager*, int, void);
private:
	EBackdoorManager();
public:
	u32 GetArcFileSize();
};

struct ERQTable<ArcFileSizes> {
	char *pName;
	ArcFileSizes *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

__vtbl_ptr_type EIntroMode virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIntroMode::~EIntroMode,
		/* .__delta2 = */ -22280
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIntroMode::Init,
		/* .__delta2 = */ -22184
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIntroMode::Update,
		/* .__delta2 = */ -21000
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIntroMode::Draw,
		/* .__delta2 = */ -19488
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIntroMode::Reset,
		/* .__delta2 = */ -21112
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

EIntroMode* EIntroMode::EIntroMode() {
	EGameState *this;
	EGameStateId *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
  (this->field0_0x0).m_state.m_id = 0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EGameState__vtable *)_vt_10EIntroMode;
  __11EDialogMenu(&this->m_DialogMenu);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  (this->field0_0x0).m_state.m_id = 3;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
  this->m_introdoneTime = 0.0;
  this->m_CurrentSubmode = 0;
  this->m_pGradient = (ERShader *)0x0;
  this->m_pDevelopedBy = (ERShader *)0x0;
  return this;
}

void EIntroMode::~EIntroMode(int __in_chrg) {
	EGameState *this;
	EGameStateId *this;
	void *pAddress;
	void *ptr;
	void *ptr;
	
  (this->field0_0x0).__vtable = (EGameState__vtable *)_vt_10EIntroMode;
  ___11EDialogMenu(&this->m_DialogMenu,2);
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
                    /* end of inlined section */
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

void EIntroMode::Init(int FromState) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ERShader *pEVar5;
  short *psVar6;
  ulong uVar7;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bMovieNeedsPlaying = 1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bArcFilesNeedOpening = 1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_introdoneTime = 0.0;
                    /* end of inlined section */
  this->m_CurrentSubmode = 0;
  *(undefined4 *)&this->m_bAlreadyCheckedMem = 0;
  this->m_CurrentLogo = 0;
  *(undefined4 *)&this->m_bMovieNeedsFading = 0;
  this->m_MemCardCheckState = 0;
  puVar1 = (undefined *)((int)&(this->m_vLine1PosEnd).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0x3e8ccccd3f000000U >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vLine1PosEnd & 7;
  puVar4 = (ulong *)((int)&this->m_vLine1PosEnd - uVar3);
  *puVar4 = 0x3e8ccccd3f000000 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine2PosEnd).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0x3ed9999a3f000000U >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vLine2PosEnd & 7;
  puVar4 = (ulong *)((int)&this->m_vLine2PosEnd - uVar3);
  *puVar4 = 0x3ed9999a3f000000 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine3PosEnd).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0x3f1333333f000000U >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vLine3PosEnd & 7;
  puVar4 = (ulong *)((int)&this->m_vLine3PosEnd - uVar3);
  *puVar4 = 0x3f1333333f000000 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine4PosEnd).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0x3f39999a3f000000U >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vLine4PosEnd & 7;
  puVar4 = (ulong *)((int)&this->m_vLine4PosEnd - uVar3);
  *puVar4 = 0x3f39999a3f000000 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine1PosStart).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0xbdcccccd3f000000U >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vLine1PosStart & 7;
  puVar4 = (ulong *)((int)&this->m_vLine1PosStart - uVar3);
  *puVar4 = -0x42333332c1000000 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine2PosStart).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0xbdcccccd3f000000U >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vLine2PosStart & 7;
  puVar4 = (ulong *)((int)&this->m_vLine2PosStart - uVar3);
  *puVar4 = -0x42333332c1000000 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine3PosStart).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0xbdcccccd3f000000U >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vLine3PosStart & 7;
  puVar4 = (ulong *)((int)&this->m_vLine3PosStart - uVar3);
  *puVar4 = -0x42333332c1000000 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine4PosStart).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0xbdcccccd3f000000U >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vLine4PosStart & 7;
  puVar4 = (ulong *)((int)&this->m_vLine4PosStart - uVar3);
  *puVar4 = -0x42333332c1000000 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine1PosStart).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar2 = (uint)&this->m_vLine1PosStart & 7;
  uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          0xffffffffffffffffU >> (uVar3 + 1) * 8 & 0xbdcccccd3f000000) & -1L << (8 - uVar2) * 8 |
          *(ulong *)((int)&this->m_vLine1PosStart - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine1Pos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vLine1Pos & 7;
  puVar4 = (ulong *)((int)&this->m_vLine1Pos - uVar3);
  *puVar4 = uVar7 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine2PosStart).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar2 = (uint)&this->m_vLine2PosStart & 7;
  uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8 |
          *(ulong *)((int)&this->m_vLine2PosStart - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine2Pos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vLine2Pos & 7;
  puVar4 = (ulong *)((int)&this->m_vLine2Pos - uVar3);
  *puVar4 = uVar7 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine3PosStart).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar2 = (uint)&this->m_vLine3PosStart & 7;
  uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8 |
          *(ulong *)((int)&this->m_vLine3PosStart - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine3Pos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vLine3Pos & 7;
  puVar4 = (ulong *)((int)&this->m_vLine3Pos - uVar3);
  *puVar4 = uVar7 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine4PosStart).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar2 = (uint)&this->m_vLine4PosStart & 7;
  uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8 |
          *(ulong *)((int)&this->m_vLine4PosStart - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&(this->m_vLine4Pos).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
  uVar3 = (uint)&this->m_vLine4Pos & 7;
  puVar4 = (ulong *)((int)&this->m_vLine4Pos - uVar3);
  *puVar4 = uVar7 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xe6469e7a,(EFile *)0x0,0);
  this->m_pGradient = pEVar5;
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x2a07c8b5,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_fAlpha = 0.0;
  this->m_pDevelopedBy = pEVar5;
  psVar6 = GetUiString__7EGlobalPCc(&_globals,"english_language");
  this->m_ppLanguages[0] = psVar6;
  psVar6 = GetUiString__7EGlobalPCc(&_globals,"french_language");
  this->m_ppLanguages[1] = psVar6;
  psVar6 = GetUiString__7EGlobalPCc(&_globals,"german_language");
  this->m_ppLanguages[2] = psVar6;
  psVar6 = GetUiString__7EGlobalPCc(&_globals,"italian_language");
  this->m_ppLanguages[3] = psVar6;
  psVar6 = GetUiString__7EGlobalPCc(&_globals,"spanish_language");
  this->m_ppLanguages[4] = psVar6;
  psVar6 = GetUiString__7EGlobalPCc(&_globals,"dutch_language");
  this->m_ppLanguages[5] = psVar6;
  psVar6 = GetUiString__7EGlobalPCc(&_globals,"danish_language");
  this->m_ppLanguages[6] = psVar6;
  psVar6 = GetUiString__7EGlobalPCc(&_globals,"swedish_language");
  this->m_ppLanguages[7] = psVar6;
  Init__11EDialogMenu(&this->m_DialogMenu);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  _globals._440_4_ = 0;
  return;
}

void EIntroMode::openArcFiles() {
	EBackdoorManager *pManager;
	EBackdoorManager *this;
	EBackdoorManager *this;
	EBackdoorManager *this;
	
  EFile *pEVar1;
  EFile__vtable *pEVar2;
  EAudioSampleManager *pEVar3;
  
                    /* end of inlined section */
  OpenArchiveFile__16EResourceManager(&_modelman.field0_0x0);
  OpenArchiveFile__16EResourceManager(&_rletexman.field0_0x0);
  OpenArchiveFile__16EResourceManager(&_movieman.field0_0x0);
  OpenArchiveFile__16EResourceManager(&_pAudiosampleman->field0_0x0);
  OpenArchiveFile__16EResourceManager(&_audiostreamman.field0_0x0);
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
  getTable__11ERQuickdataPCc(_globals.m_pUiData,"ArcFileSizes");
                    /* end of inlined section */
  if (_movieman.field0_0x0.m_pArchiveFile != (EFile *)0x0) {
    (*(code *)(_movieman.field0_0x0.m_pArchiveFile)->__vtable->GetAccessMode)
              ((int)&(_movieman.field0_0x0.m_pArchiveFile)->__vtable +
               (int)*(short *)&(_movieman.field0_0x0.m_pArchiveFile)->__vtable->GetIOMode,0,2);
    (*(code *)(_movieman.field0_0x0.m_pArchiveFile)->__vtable->GetDrive)
              ((int)&(_movieman.field0_0x0.m_pArchiveFile)->__vtable +
               (int)*(short *)&(_movieman.field0_0x0.m_pArchiveFile)->__vtable->GetDeviceType);
    (*(code *)(_movieman.field0_0x0.m_pArchiveFile)->__vtable->GetAccessMode)
              ((int)&(_movieman.field0_0x0.m_pArchiveFile)->__vtable +
               (int)*(short *)&(_movieman.field0_0x0.m_pArchiveFile)->__vtable->GetIOMode,0,0);
  }
  pEVar3 = _pAudiosampleman;
  pEVar1 = (_pAudiosampleman->field0_0x0).m_pArchiveFile;
  if (pEVar1 != (EFile *)0x0) {
    (*(code *)pEVar1->__vtable->GetAccessMode)
              ((int)&pEVar1->__vtable + (int)*(short *)&pEVar1->__vtable->GetIOMode,0,2);
    pEVar1 = (pEVar3->field0_0x0).m_pArchiveFile;
    pEVar2 = pEVar1->__vtable;
    (*(code *)pEVar2->GetDrive)((int)&pEVar1->__vtable + (int)*(short *)&pEVar2->GetDeviceType);
    pEVar1 = (pEVar3->field0_0x0).m_pArchiveFile;
    pEVar2 = pEVar1->__vtable;
    (*(code *)pEVar2->GetAccessMode)((int)&pEVar1->__vtable + (int)*(short *)&pEVar2->GetIOMode,0,0)
    ;
  }
  if (_audiostreamman.field0_0x0.m_pArchiveFile != (EFile *)0x0) {
    (*(code *)(_audiostreamman.field0_0x0.m_pArchiveFile)->__vtable->GetAccessMode)
              ((int)&(_audiostreamman.field0_0x0.m_pArchiveFile)->__vtable +
               (int)*(short *)&(_audiostreamman.field0_0x0.m_pArchiveFile)->__vtable->GetIOMode,0,2)
    ;
    (*(code *)(_audiostreamman.field0_0x0.m_pArchiveFile)->__vtable->GetDrive)
              ((int)&(_audiostreamman.field0_0x0.m_pArchiveFile)->__vtable +
               (int)*(short *)&(_audiostreamman.field0_0x0.m_pArchiveFile)->__vtable->GetDeviceType)
    ;
    (*(code *)(_audiostreamman.field0_0x0.m_pArchiveFile)->__vtable->GetAccessMode)
              ((int)&(_audiostreamman.field0_0x0.m_pArchiveFile)->__vtable +
               (int)*(short *)&(_audiostreamman.field0_0x0.m_pArchiveFile)->__vtable->GetIOMode,0,0)
    ;
  }
  return;
}

void EIntroMode::Reset(int ToState) {
  this->m_introdoneTime = 0.0;
  while( true ) {
    if (this->m_pGradient == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_pGradient->field0_0x0);
    this->m_pGradient = (ERShader *)0x0;
  }
  while (this->m_pDevelopedBy != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pDevelopedBy->field0_0x0);
    this->m_pDevelopedBy = (ERShader *)0x0;
  }
  Reset__11EDialogMenu(&this->m_DialogMenu);
  return;
}

void EIntroMode::Update() {
	EUIObjectMover HermiteBlend;
	int nReturn;
	int nLanguage;
	bool bChanged;
	s8 nX;
	s8 nY;
	EGraphics *this;
	int xoffset;
	int yoffset;
	int iLanguage;
	float vol;
	
  EUIVirtualCtrl__vtable *pEVar1;
  bool bVar2;
  EGraphics *pEVar3;
  bool bVar4;
  short *psVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar10;
  float fVar11;
  EUIObjectMover HermiteBlend;
  undefined8 local_70;
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
  
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
  this->m_introdoneTime = this->m_introdoneTime + _dt;
                    /* end of inlined section */
  switch(this->m_CurrentSubmode) {
  case 0:
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
    _globals._440_4_ = 1;
                    /* end of inlined section */
    if (*(int *)&this->m_bAlreadyCheckedMem == 0) {
      SetLoadConfigMode__12ESimsMemCard(_globals.m_pMemCard);
      *(undefined4 *)&this->m_bAlreadyCheckedMem = 1;
      return;
    }
    if (*(int *)_globals.m_pMemCard != 1) {
      if (_iVideoMode == 0) {
        (_globals.m_pOptionsRecon)->m_nLanguageIndex = '\0';
        this->m_CurrentSubmode = 2;
        _globals._440_4_ = 0;
        return;
      }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      this->m_CurrentSubmode = 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_70._0_4_ = 0x3e4ccccd;
                    /* end of inlined section */
                    /* end of inlined section */
      local_70._4_4_ = 0x3e4ccccd;
      psVar5 = GetUiString__7EGlobalPCc(&_globals,"choose_language");
      SetupDialog__11EDialogMenuG5EVec2fiPPCUsPCUsb
                (&this->m_DialogMenu,(EVec2 *)&local_70,0.6,8,this->m_ppLanguages,psVar5,false);
      return;
    }
    if ((_globals.m_pOptionsRecon)->m_nLanguageIndex == -1) {
      if (_iVideoMode == 0) {
        (_globals.m_pOptionsRecon)->m_nLanguageIndex = '\0';
        goto LAB_0016af24;
      }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      this->m_CurrentSubmode = 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_70._0_4_ = 0x3e4ccccd;
                    /* end of inlined section */
                    /* end of inlined section */
      local_70._4_4_ = 0x3e4ccccd;
      psVar5 = GetUiString__7EGlobalPCc(&_globals,"choose_language");
      SetupDialog__11EDialogMenuG5EVec2fiPPCUsPCUsb
                (&this->m_DialogMenu,(EVec2 *)&local_70,0.6,8,this->m_ppLanguages,psVar5,false);
    }
    else {
LAB_0016af24:
      this->m_CurrentSubmode = 2;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
      _globals._440_4_ = 0;
                    /* end of inlined section */
    }
    lVar7 = (long)(_globals.m_pOptionsRecon)->m_nScreenAdjustX;
    bVar4 = lVar7 < -0x19;
    if (bVar4) {
      lVar7 = -0x19;
    }
    bVar2 = 0x19 < lVar7;
    lVar8 = (long)(_globals.m_pOptionsRecon)->m_nScreenAdjustY;
    if (bVar2) {
      lVar7 = 0x19;
    }
    lVar9 = lVar8;
    if (lVar8 < -0x19) {
      lVar9 = -0x19;
    }
    iVar6 = (int)lVar9;
    if (0x19 < lVar8) {
      iVar6 = 0x19;
    }
    if (0x19 < lVar8 || (lVar8 < -0x19 || (bVar2 || bVar4))) {
      (_globals.m_pOptionsRecon)->m_nScreenAdjustX = (char)lVar7;
      (_globals.m_pOptionsRecon)->m_nScreenAdjustY = (char)iVar6;
    }
                    /* inlined from /eor/src2/engine/e_graphics.h */
    pEVar3 = _pGfx;
    _pGfx->m_yoffset = iVar6;
                    /* end of inlined section */
    pEVar3->m_xoffset = (int)lVar7;
    break;
  case 1:
    iVar6 = DialogUpdate__11EDialogMenu(&this->m_DialogMenu);
    if (-1 < iVar6) {
      _quickdataman.m_iLanguage = iVar6;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
                    /* end of inlined section */
      Reload__16EResourceManagerUi(&_quickdataman.field0_0x0,0xa173a1ee);
      (_globals.m_pOptionsRecon)->m_nLanguageIndex = (char)iVar6;
      this->m_CurrentSubmode = 2;
                    /* end of inlined section */
      _globals._440_4_ = 0;
    }
    break;
  case 2:
    if (*(int *)&this->m_bMovieNeedsPlaying == 0) {
      bVar4 = IsMoviePlaying__4EApp(&_app.field0_0x0);
      if (!bVar4) {
        this->m_CurrentSubmode = 3;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
        *(undefined4 *)&this->m_bMovieNeedsPlaying = 1;
        this->m_introdoneTime = 0.0;
                    /* end of inlined section */
        _globals._440_4_ = 0;
      }
    }
    else {
      (*(code *)_pAudio->__vtable[1].InitAudio)
                (0x3f800000,(int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].EAudio);
      PlayMovie__4EAppUiii(&_app.field0_0x0,0xd5aec993,-1,-1);
      *(undefined4 *)&this->m_bMovieNeedsPlaying = 0;
    }
    break;
  case 3:
    fVar10 = this->m_introdoneTime;
    if (0.33 < fVar10) {
      this->m_CurrentSubmode = 4;
      this->m_fAlpha = 1.0;
      this->m_introdoneTime = 0.0;
      return;
    }
    fVar11 = 3.0;
    goto LAB_0016b21c;
  case 4:
    if (*(int *)&this->m_bArcFilesNeedOpening != 0) {
      openArcFiles__10EIntroMode(this);
      *(undefined4 *)&this->m_bArcFilesNeedOpening = 0;
    }
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar7 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,0,
                       0x800);
    fVar11 = this->m_introdoneTime;
    if (lVar7 == 0) {
LAB_0016b1a8:
      if (fVar11 < 3.0) {
        return;
      }
    }
    else if (fVar11 < 5.0) {
      fVar11 = this->m_introdoneTime;
      goto LAB_0016b1a8;
    }
    this->m_introdoneTime = 0.0;
    this->m_CurrentSubmode = 5;
    break;
  case 5:
    if (0.33 < this->m_introdoneTime) {
      this->m_introdoneTime = 0.0;
      this->m_CurrentSubmode = 6;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
      _globals._440_4_ = 1;
                    /* end of inlined section */
      this->m_fAlpha = 0.0;
      return;
    }
    fVar11 = 0.33 - this->m_introdoneTime;
    fVar10 = 3.0;
LAB_0016b21c:
    this->m_fAlpha = fVar11 * fVar10;
    if (fVar11 * fVar10 < 0.0) {
      this->m_fAlpha = 0.0;
    }
    if (1.0 < this->m_fAlpha) {
      this->m_fAlpha = 1.0;
    }
    break;
  case 6:
    if (*(int *)&this->m_bMovieNeedsPlaying == 0) {
      pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar7 = (*(code *)pEVar1[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                         0,0x800);
      if (lVar7 != 0) {
        *(undefined4 *)&this->m_bMovieNeedsFading = 1;
      }
      if (*(int *)&this->m_bMovieNeedsFading != 0) {
        fVar11 = (float)(*(code *)_pAudio->__vtable[1].Update)
                                  ((int)&_pAudio->__vtable +
                                   (int)*(short *)&_pAudio->__vtable[1].Shutdown);
        fVar11 = fVar11 - (_dt + _dt);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
          StopMovie__4EApp(&_app.field0_0x0);
        }
        (*(code *)_pAudio->__vtable[1].InitAudio)
                  (fVar11,(int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].EAudio);
      }
      bVar4 = IsMoviePlaying__4EApp(&_app.field0_0x0);
      if (!bVar4) {
        this->m_CurrentSubmode = 7;
        *(undefined4 *)&this->m_bMovieNeedsPlaying = 1;
        this->m_introdoneTime = 0.0;
      }
    }
    else {
      (*(code *)_pAudio->__vtable[1].InitAudio)
                (0x3f800000,(int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable[1].EAudio);
      PlayMovie__4EAppUiii(&_app.field0_0x0,0xb5968ed8,-1,-1);
      *(undefined4 *)&this->m_bMovieNeedsFading = 0;
      *(undefined4 *)&this->m_bMovieNeedsPlaying = 0;
    }
    break;
  case 7:
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
    local_70._0_4_ = 4;
                    /* end of inlined section */
    SetState__13EGameStateManG12EGameStateId(_app.m_pGameStateMan,(EGameStateId *)&local_70);
    if (_app._76_4_ != 0) {
      DelRef__16EResourceManagerUi(&_datasetman.field0_0x0,0xed510790);
      _app._76_4_ = 0;
    }
  }
  return;
}

void EIntroMode::Draw(ERC *prc) {
	float v;
	
  int iVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* end of inlined section */
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  iVar1 = this->m_CurrentSubmode;
  if (iVar1 == 1) {
    Select__8ERShaderP3ERCi(this->m_pGradient,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_9c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_a0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_8c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_90 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_60 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_5c = 0x3f800000;
    local_50 = 0x3f800000;
    local_4c = 0;
    local_34 = 0x3f800000;
    local_38 = 0x3f800000;
    local_3c = 0x3f800000;
    local_40 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_a0,&local_90,
               &local_60,&local_50,&local_40);
    DialogDraw__11EDialogMenuP3ERCb(&this->m_DialogMenu,prc,false);
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_9c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_a0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_8c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_90 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_80 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_7c = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_6c = 0;
      local_70 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].DisplayList)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_a0,
                 &local_90,&local_80,&local_70,0x35f4d0);
    }
  }
  else if ((iVar1 < 6) && (2 < iVar1)) {
    Select__8ERShaderP3ERCi(this->m_pDevelopedBy,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_a0 = 0x3dcccccd;
                    /* end of inlined section */
    local_8c = 0x3f800000;
    local_9c = 0;
    if (_iVideoMode == 1) {
      local_8c = 0x3f924925;
    }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_80 = this->m_fAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_90 = 0x3f800000;
                    /* end of inlined section */
    local_7c = local_80;
    local_78 = local_80;
    local_74 = local_80;
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_a0,&local_90,
               &local_80);
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
