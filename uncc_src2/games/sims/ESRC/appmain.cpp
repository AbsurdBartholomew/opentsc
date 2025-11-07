// STATUS: NOT STARTED

#include "appmain.h"

typedef struct {
	short int TimeZone;
	u_char Aspect;
	u_char DateNotation;
	u_char Language;
	u_char Spdif;
	u_char SummerTime;
	u_char TimeNotation;
} sceScfT10kConfig;

ESimsApp _app = {
	/* base class 0 = */ {
		/* base class 0 = */ {
			/* .m_threadId = */ 0,
			/* .m_pStack = */ NULL,
			/* .m_stackSize = */ 0,
			/* .m_stackAutoAllocated = */ false,
			/* .m_szName = */ NULL,
			/* .m_pLastThread = */ NULL,
			/* .m_pNextThread = */ NULL,
			/* .$vf897 = */ NULL
		},
		/* .m_done = */ false,
		/* .m_nArgc = */ 0,
		/* .m_ppszArgv = */ NULL,
		/* .m_appState = */ E_APPSTATE_NORMAL,
		/* .m_appNextState = */ E_APPSTATE_NORMAL,
		/* .m_pRMovie = */ NULL,
		/* .m_uNextMovieID = */ 0,
		/* .m_MovieX = */ 0,
		/* .m_MovieY = */ 0
	},
	/* .m_pGameStateMan = */ NULL,
	/* .m_prc = */ NULL,
	/* .m_bLoadedIntroDataSet = */ false,
	/* .m_pFullWindow = */ NULL,
	/* .m_pSplashScreenShader = */ NULL,
	/* .m_InitializationState = */ 0
};

static int _iAllocStage = 0;
static int _iAllocMemLeft = 0;
static void *_pNextAllocPtr = NULL;

__vtbl_ptr_type ESimsApp virtual table[21] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsApp::~ESimsApp,
		/* .__delta2 = */ 384
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::Main,
		/* .__delta2 = */ -12712
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsApp::GetDataDirectory,
		/* .__delta2 = */ 2832
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsApp::GetModuleDirectory,
		/* .__delta2 = */ 2848
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsApp::GetBuildVersion,
		/* .__delta2 = */ 624
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsApp::GetAppName,
		/* .__delta2 = */ 2816
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::PlayMovie,
		/* .__delta2 = */ -11992
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::StopMovie,
		/* .__delta2 = */ -11968
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::IsMoviePlaying,
		/* .__delta2 = */ -11960
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsApp::GetMovieAllocator,
		/* .__delta2 = */ 1984
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsApp::GetMovieAllocatorAlign,
		/* .__delta2 = */ 2000
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsApp::GetMovieDeallocator,
		/* .__delta2 = */ 2080
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsApp::GetEventTableSize,
		/* .__delta2 = */ 2864
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsApp::Init,
		/* .__delta2 = */ 640
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsApp::Update,
		/* .__delta2 = */ 1496
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::SystemInit,
		/* .__delta2 = */ -12448
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::SystemUpdate,
		/* .__delta2 = */ -12408
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::GetAppStackSize,
		/* .__delta2 = */ -11528
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESimsApp::Shutdown,
		/* .__delta2 = */ 424
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

u32 _TOTAL_FREE = 0;
u32 _LARGEST_FREE = 0;

ESimsApp* ESimsApp::ESimsApp() {
  __4EApp(&this->field0_0x0);
  this->m_pGameStateMan = (EGameStateMan *)0x0;
  (this->field0_0x0).field0_0x0.__vtable = (EThread__vtable *)_vt_8ESimsApp;
  *(undefined4 *)&this->m_bLoadedIntroDataSet = 0;
  this->m_pFullWindow = (EWindow *)0x0;
  return this;
}

void ESimsApp::~ESimsApp(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EThread__vtable *)_vt_8ESimsApp;
  ___4EApp(&this->field0_0x0,__in_chrg);
  return;
}

void ESimsApp::Shutdown() {
  EWindow *pEVar1;
  
  BeginSaveGame__7EGlobal(&_globals);
  Shutdown__5Globs(globs);
  DeleteAllStates__13EGameStateMan(this->m_pGameStateMan);
  if (this->m_pGameStateMan == (EGameStateMan *)0x0) {
    this->m_pGameStateMan = (EGameStateMan *)0x0;
  }
  else {
    ___13EGameStateMan(this->m_pGameStateMan,3);
    this->m_pGameStateMan = (EGameStateMan *)0x0;
  }
  Reset__7EGlobal(&_globals);
  DestroyOrphans__12EParticleMan(&_pclman);
  Shutdown__16EResourceManager(&_rletexman.field0_0x0);
  if (*(int *)&this->m_bLoadedIntroDataSet != 0) {
    DelRef__16EResourceManagerUi(&_datasetman.field0_0x0,0xed510790);
    *(undefined4 *)&this->m_bLoadedIntroDataSet = 0;
  }
  pEVar1 = this->m_pFullWindow;
  if (pEVar1 != (EWindow *)0x0) {
    (*(code *)pEVar1->__vtable->WindowMatrixChanged)
              ((int)&(pEVar1->m_mWindow).field0_0x0 + (int)*(short *)&pEVar1->__vtable->Select,3);
  }
  return;
}

char* ESimsApp::GetBuildVersion() {
  return "EoR PS2 Sims Build 1.11.10.3-1f";
}

void ESimsApp::Init() {
	int language;
	int SimsLanguage;
	int iLanguage;
	void *ptr;
	void *ptr;
	void *ptr;
	void *ptr;
	void *ptr;
	
  EGlobalManagerClient__vtable *pEVar1;
  EGameStateMan *pEVar2;
  EIntroMode *pEVar3;
  ELiveMode *pEVar4;
  ENeighborhoodMode *pEVar5;
  EStartMode *pEVar6;
  EEorCreditsMode *pEVar7;
  EWindow *pEVar8;
  undefined8 uVar9;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  TRect_float_ local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  Init__16EResourceManagerPCc(&_rletexman.field0_0x0,"rletextures");
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
  __16EResourceManager_m_bTraceEnabled = 1;
                    /* end of inlined section */
  uVar9 = sceScfGetLanguage();
  switch(uVar9) {
  default:
    _quickdataman.m_iLanguage = 0;
    break;
  case 2:
    _quickdataman.m_iLanguage = 1;
    break;
  case 3:
    _quickdataman.m_iLanguage = 4;
    break;
  case 4:
    _quickdataman.m_iLanguage = 2;
    break;
  case 5:
    _quickdataman.m_iLanguage = 3;
    break;
  case 6:
    _quickdataman.m_iLanguage = 5;
  }
                    /* inlined from /eor/src2/engine/quickdata/e_quickdataman.h */
  __16EResourceManager_m_bTraceEnabled = 0;
  AddRef__16EResourceManagerUiP5EFilei(&_datasetman.field0_0x0,0xed510790,(EFile *)0x0,0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/resource/e_resourceman.h */
  __16EResourceManager_m_bTraceEnabled = 1;
                    /* end of inlined section */
  *(undefined4 *)&this->m_bLoadedIntroDataSet = 1;
  LoadIntroRequirements__7EGlobal(&_globals);
  pEVar2 = (EGameStateMan *)__builtin_new(0x60);
  pEVar2 = __13EGameStateMan(pEVar2);
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
  this->m_pGameStateMan = pEVar2;
  pEVar3 = (EIntroMode *)_memmanAlloc__FUiUi(0x93c,0x10);
  memset(pEVar3,0,0x93c);
                    /* end of inlined section */
  pEVar3 = __10EIntroMode(pEVar3);
  AddState__13EGameStateManP10EGameState(this->m_pGameStateMan,&pEVar3->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
  pEVar4 = (ELiveMode *)_memmanAlloc__FUiUi(0x210,0x10);
  memset(pEVar4,0,0x210);
                    /* end of inlined section */
  pEVar4 = __9ELiveMode(pEVar4);
  AddState__13EGameStateManP10EGameState(this->m_pGameStateMan,&pEVar4->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
  pEVar5 = (ENeighborhoodMode *)_memmanAlloc__FUiUi(0x3390,0x10);
  memset(pEVar5,0,0x3390);
                    /* end of inlined section */
  pEVar5 = __17ENeighborhoodMode(pEVar5);
  AddState__13EGameStateManP10EGameState(this->m_pGameStateMan,&pEVar5->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
  pEVar6 = (EStartMode *)_memmanAlloc__FUiUi(0x54,0x10);
  memset(pEVar6,0,0x54);
                    /* end of inlined section */
  pEVar6 = __10EStartMode(pEVar6);
  AddState__13EGameStateManP10EGameState(this->m_pGameStateMan,&pEVar6->field0_0x0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
  pEVar7 = (EEorCreditsMode *)_memmanAlloc__FUiUi(0x1c4,0x10);
  memset(pEVar7,0,0x1c4);
                    /* end of inlined section */
  pEVar7 = __15EEorCreditsMode(pEVar7);
  AddState__13EGameStateManP10EGameState(this->m_pGameStateMan,&pEVar7->field0_0x0);
  pEVar1 = (_pGfx->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_50 = 0;
  local_4c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_48 = 0;
                    /* end of inlined section */
  (*(code *)pEVar1[4].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 4),&local_50,1);
                    /* inlined from /eor/src2/engine/instance/light/e_ilightmap.h */
  _10EILightmap_m_pfnAllocAlign = AllocAlign__17ESimScratchPadManUiUi;
  _10EILightmap_m_pfnFree = Free__17ESimScratchPadManPv;
                    /* end of inlined section */
  InitHeap__17ESimScratchPadMan();
  this->m_InitializationState = 0;
                    /* inlined from /eor/src2/engine/window/e_window.h */
  pEVar8 = (EWindow *)_memmanAlloc__FUiUi(0xa0,0x10);
                    /* end of inlined section */
  pEVar8 = __7EWindow(pEVar8);
  this->m_pFullWindow = pEVar8;
  if (pEVar8 != (EWindow *)0x0) {
                    /* inlined from /eor/src2/common/math/e_rect.h */
    local_40.left = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
    local_40.top = 0.0;
    local_40.bottom = 1.0;
                    /* end of inlined section */
    local_40.right = 1.0;
    SetClip__7EWindowRCt5TRect1Zf(pEVar8,&local_40);
  }
  return;
}

void ESimsApp::initContinue() {
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  EGameStateId local_30 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  LoadSimulatorGlobs__8ESimsApp(this);
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  local_30[0].m_id = 3;
                    /* end of inlined section */
  SetState__13EGameStateManG12EGameStateId(this->m_pGameStateMan,local_30);
  return;
}

void ESimsApp::LoadSimulatorGlobs() {
  InitPerformanceCounter__Fv();
  return;
}

void PS2Reboot() {
  if (_pAudio != (EAudio__0_3277 *)0x0) {
    (*(code *)_pAudio->__vtable->RemoveEvent)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->AddEvent);
  }
  scePadEnd();
  sceSifExitCmd();
  LoadExecPS2(0x35f409,0,0);
  return;
}

void ESimsApp::Update() {
	ERC *prc;
	EWindow win;
	ERC *prc;
	
  EGlobalManagerClient__vtable *pEVar1;
  int iVar2;
  undefined8 uVar3;
  ERC *prc;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EWindow win;
  undefined4 local_80;
  undefined4 local_7c;
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
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if (this->m_InitializationState < 3) {
    if ((uint)this->m_InitializationState < 2) {
      __7EWindow(&win);
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      uVar3 = (*(code *)pEVar1[6].EGlobalManagerClient)
                        ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 6),0);
      prc = (ERC *)uVar3;
      Select__7EWindowP3ERC(&win,prc);
      Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_7c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_80 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_6c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_70 = 0x3f800000;
      local_60 = 0;
      local_5c = 0x3f800000;
      local_50 = 0x3f800000;
      local_4c = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].DisplayList)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_80,&local_70,
                 &local_60,&local_50,&local_40);
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[6].ManagedShutdown)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[6].ManagedStartup,uVar3
                );
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[3].ManagedShutdown)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
      ___7EWindow(&win,2);
      iVar2 = this->m_InitializationState;
    }
    else {
      initContinue__8ESimsApp(this);
      iVar2 = this->m_InitializationState;
    }
    this->m_InitializationState = iVar2 + 1;
  }
  else {
    Update__13EGameStateMan(this->m_pGameStateMan);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    if (((this->field0_0x0).m_appState == E_APPSTATE_NORMAL) &&
       (_5Globs_pSound != (cSoundPlayer *)0x0)) {
                    /* end of inlined section */
      Update__12cSoundPlayer(_5Globs_pSound);
    }
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    uVar3 = (*(code *)pEVar1[6].EGlobalManagerClient)
                      ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 6),0);
    this->m_prc = (ERC *)uVar3;
    Draw__13EGameStateManP3ERC(this->m_pGameStateMan,(ERC *)uVar3);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[6].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[6].ManagedStartup,uVar3);
    this->m_prc = (ERC *)0x0;
  }
  return;
}

FnAlloc ESimsApp::GetMovieAllocator() {
  return DefaultAlloc__FUi;
}

FnAllocAlign ESimsApp::GetMovieAllocatorAlign() {
  EResource *pEVar1;
  code *pcVar2;
  
  pEVar1 = GetRef__16EResourceManagerUi(&_quickdataman.field0_0x0,0xc33db41);
  _iAllocMemLeft = 0;
  _iAllocStage = 0;
  _pNextAllocPtr = (void *)0x0;
  if (pEVar1 == (EResource *)0x0) {
    pcVar2 = DefaultAllocAlign__FUiUi;
  }
  else {
    pcVar2 = MovieAllocMemAlign__8ESimsAppUiUi;
  }
  return pcVar2;
}

FnFree ESimsApp::GetMovieDeallocator() {
  if (_iAllocStage == 0) {
    return DefaultFree__FPv;
  }
  return MovieFreeMem__8ESimsAppPv;
}

void* ESimsApp::MovieAllocMemAlign(u32 size, u32 alignment) {
	void *result;
	u32 align;
	void *pImage;
	u32 align;
	void *pImage;
	u32 align;
	
  EStorable__vtable *pEVar1;
  EResource *pEVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (_iAllocStage == 1) {
    uVar4 = alignment - ((uint)_pNextAllocPtr & alignment - 1);
    if (uVar4 == alignment) {
      uVar4 = 0;
    }
    uVar6 = size + uVar4;
    pvVar3 = (void *)((int)_pNextAllocPtr + uVar4);
    if ((uint)_iAllocMemLeft < uVar6) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pEORGlobals->__vtable[1].CreateWardrobe)
                ((int)_5Globs_pEORGlobals->_pSelectedSims +
                 *(short *)&_5Globs_pEORGlobals->__vtable[1].SetCam + -0x24);
      pvVar3 = AllocateScratchMemory__5GlobsPCvPCci
                         (_pApp,"c:/eor/src2/games/sims/ESRC/appmain.cpp",0x2f0);
      uVar5 = alignment - ((uint)pvVar3 & alignment - 1);
      _iAllocMemLeft = 0x100000;
      _iAllocStage = 2;
      if (uVar5 == alignment) {
        uVar5 = 0;
      }
      uVar6 = (uVar6 - uVar4) + uVar5;
      pvVar3 = (void *)((int)pvVar3 + uVar5);
    }
    _iAllocMemLeft = _iAllocMemLeft - uVar6;
    _pNextAllocPtr = (void *)((int)pvVar3 + uVar6);
    return pvVar3;
  }
  if (_iAllocStage < 2) {
    if (_iAllocStage == 0) {
      pEVar2 = GetRef__16EResourceManagerUi(&_quickdataman.field0_0x0,0xc33db41);
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
      pEVar1 = pEVar2[1].field0_0x0.__vtable;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
      _iAllocMemLeft = (int)pEVar2[1].m_name.m_p;
                    /* end of inlined section */
      _iAllocStage = 1;
      uVar4 = alignment - ((uint)pEVar1 & alignment - 1);
      if (uVar4 == alignment) {
        uVar4 = 0;
      }
      pvVar3 = &pEVar1->field_0x0 + uVar4;
LAB_001009ac:
      _iAllocMemLeft = _iAllocMemLeft - (size + uVar4);
      _pNextAllocPtr = (void *)((int)pvVar3 + size + uVar4);
      return pvVar3;
    }
  }
  else if (_iAllocStage == 2) {
    uVar4 = alignment - ((uint)_pNextAllocPtr & alignment - 1);
    if (uVar4 == alignment) {
      uVar4 = 0;
    }
    pvVar3 = (void *)((int)_pNextAllocPtr + uVar4);
    goto LAB_001009ac;
  }
  pvVar3 = _memmanAlloc__FUiUi(size,alignment);
  return pvVar3;
}

void ESimsApp::MovieFreeMem(void *p) {
  if (_iAllocStage != 0) {
    if (1 < _iAllocStage) {
      FreeScratchMemory__5GlobsPCv(_pApp);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pEORGlobals->__vtable[1].CreateUnlockDialog)
                ((int)_5Globs_pEORGlobals->_pSelectedSims +
                 *(short *)&_5Globs_pEORGlobals->__vtable[1].CreateVanityMirror + -0x24);
    }
    _iAllocStage = 0;
    Reload__16EResourceManagerUi(&_quickdataman.field0_0x0,0xc33db41);
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

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___8ESimsApp(&_app,2);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/appmain.cpp */
      __8ESimsApp(&_app);
    }
  }
  return;
}

char* ESimsApp::GetAppName() {
  return "The Sims For PS2";
}

char* ESimsApp::GetDataDirectory() {
  return "./data";
}

char* ESimsApp::GetModuleDirectory() {
  return ".";
}

int ESimsApp::GetEventTableSize() {
  return 0;
}

void global constructors keyed to _app() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _app() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
