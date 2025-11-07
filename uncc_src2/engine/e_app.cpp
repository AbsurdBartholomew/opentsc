// STATUS: NOT STARTED

#include "e_app.h"

EApp *_pApp = NULL;

__vtbl_ptr_type EApp virtual table[21] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::~EApp,
		/* .__delta2 = */ -12808
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
		/* .__pfn = */ &EApp::GetDataDirectory,
		/* .__delta2 = */ -12760
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::GetModuleDirectory,
		/* .__delta2 = */ -11600
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::GetBuildVersion,
		/* .__delta2 = */ -11584
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::GetAppName,
		/* .__delta2 = */ -11568
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
		/* .__pfn = */ &EApp::GetMovieAllocator,
		/* .__delta2 = */ -11648
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::GetMovieAllocatorAlign,
		/* .__delta2 = */ -11616
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::GetMovieDeallocator,
		/* .__delta2 = */ -11632
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::GetEventTableSize,
		/* .__delta2 = */ -11552
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::Init,
		/* .__delta2 = */ -11544
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EApp::Update,
		/* .__delta2 = */ -11536
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
		/* .__pfn = */ &EApp::Shutdown,
		/* .__delta2 = */ -11520
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EApp* EApp::EApp() {
  __7EThread(&this->field0_0x0);
  *(undefined4 *)&this->m_done = 0;
  this->m_appState = E_APPSTATE_NORMAL;
  (this->field0_0x0).__vtable = (EThread__vtable *)_vt_4EApp;
  this->m_appNextState = E_APPSTATE_NORMAL;
  this->m_pRMovie = (ERMovie *)0x0;
  this->m_uNextMovieID = 0;
  _pApp = this;
  return this;
}

void EApp::~EApp(int __in_chrg) {
  (this->field0_0x0).__vtable = (EThread__vtable *)_vt_4EApp;
  _pApp = (EApp__0_919 *)0x0;
  ___7EThread(&this->field0_0x0,__in_chrg);
  return;
}

char* EApp::GetDataDirectory() {
	char *pszDataPath;
	
  char *pcVar1;
  
  pcVar1 = GetArg__C4EAppPCc(this,"-dp");
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "\\eor\\src2\\games\\testdata\\test.out\\data\\";
  }
  return pcVar1;
}

void EApp::Main() {
  EGlobalManagerClient__vtable *pEVar1;
  EThread__vtable *pEVar2;
  long lVar3;
  
  pEVar1 = (_pEngine->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[2].EGlobalManagerClient)
                    ((int)_pEngine->m_retraceHistoryCpu + *(short *)(pEVar1 + 2) + -0x28);
  if (lVar3 != 0) {
    pEVar2 = (this->field0_0x0).__vtable;
    (**(code **)(pEVar2 + 0xb))
              ((int)&(this->field0_0x0).m_threadId + (int)*(short *)&pEVar2[10].Main);
    pEVar2 = (this->field0_0x0).__vtable;
    do {
      (*(code *)pEVar2[0xb].Main)
                ((int)&(this->field0_0x0).m_threadId + (int)*(short *)&pEVar2[0xb].EThread);
      pEVar2 = (this->field0_0x0).__vtable;
    } while (*(int *)&this->m_done == 0);
    (**(code **)(pEVar2 + 0xd))
              ((int)&(this->field0_0x0).m_threadId + (int)*(short *)&pEVar2[0xc].Main);
    pEVar1 = (_pEngine->field0_0x0).__vtable;
    (*(code *)pEVar1[5].EGlobalManagerClient)
              ((int)_pEngine->m_retraceHistoryCpu + *(short *)(pEVar1 + 5) + -0x28);
  }
  return;
}

void EApp::CreateAndStartAppThread() {
	EThread *this;
	
  EThread__vtable *pEVar1;
  int stackSize;
  
  pEVar1 = (this->field0_0x0).__vtable;
  stackSize = (*(code *)pEVar1[0xc].EThread)
                        ((int)&(this->field0_0x0).m_threadId + (int)*(short *)(pEVar1 + 0xc));
  Create__7EThreadiiPv(&this->field0_0x0,0x62,stackSize,(void *)0x0);
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
  (this->field0_0x0).m_szName = "Application";
  Start__7EThread(&this->field0_0x0);
  return;
}

void EApp::SystemInit() {
  EThread__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[9].Main)((int)&(this->field0_0x0).m_threadId + (int)*(short *)&pEVar1[9].EThread)
  ;
  return;
}

void EApp::SystemUpdate() {
  EGlobalManagerClient__vtable *pEVar1;
  EEngine *pEVar2;
  bool bVar3;
  ERMovie *pEVar4;
  EThread__vtable *pEVar5;
  EAppState EVar6;
  
  if (this->m_appState == E_APPSTATE_MOVIEPLAY) {
    if (this->m_appNextState == E_APPSTATE_MOVIEPLAY) {
      EVar6 = this->m_appNextState;
    }
    else {
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[3].ManagedShutdown)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
      pEVar1 = (_pEngine->field0_0x0).__vtable;
      (*(code *)pEVar1[3].EGlobalManagerClient)
                ((int)_pEngine->m_retraceHistoryCpu + *(short *)(pEVar1 + 3) + -0x28);
      if (this->m_pRMovie == (ERMovie *)0x0) {
        EVar6 = this->m_appNextState;
      }
      else {
        Stop__7ERMovie(this->m_pRMovie);
        DelRef__16EResourceManagerP9EResource(&_movieman.field0_0x0,&this->m_pRMovie->field0_0x0);
        this->m_pRMovie = (ERMovie *)0x0;
        EVar6 = this->m_appNextState;
      }
    }
  }
  else {
    EVar6 = this->m_appNextState;
  }
  if (EVar6 == E_APPSTATE_NEXTMOVIEPLAY) {
    (*(code *)_pAudio->__vtable->BindVoice)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->FreeVoice);
                    /* inlined from c:/eor/src2/engine/e_movieman.h */
    pEVar4 = (ERMovie *)
             AddRef__16EResourceManagerUiP5EFilei
                       (&_movieman.field0_0x0,this->m_uNextMovieID,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pRMovie = pEVar4;
    pEVar1 = (_pEngine->field0_0x0).__vtable;
    (*(code *)pEVar1[2].ManagedShutdown)
              ((int)_pEngine->m_retraceHistoryCpu + *(short *)&pEVar1[2].ManagedStartup + -0x28);
    Start__7ERMovieii(this->m_pRMovie,this->m_MovieX,this->m_MovieY);
    this->m_uNextMovieID = 0;
    this->m_appNextState = E_APPSTATE_MOVIEPLAY;
    EVar6 = this->m_appNextState;
  }
  else {
    EVar6 = this->m_appNextState;
  }
  pEVar2 = _pEngine;
  this->m_appState = EVar6;
  pEVar1 = (pEVar2->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)pEVar2->m_retraceHistoryCpu + *(short *)&pEVar1[3].ManagedStartup + -0x28);
  if (this->m_pRMovie == (ERMovie *)0x0) {
    pEVar5 = (this->field0_0x0).__vtable;
  }
  else {
    Update__7ERMovie(this->m_pRMovie);
    pEVar5 = (this->field0_0x0).__vtable;
  }
  (*(code *)pEVar5[10].EThread)((int)&(this->field0_0x0).m_threadId + (int)*(short *)(pEVar5 + 10));
  pEVar1 = (_pEngine->field0_0x0).__vtable;
  (*(code *)pEVar1[4].EGlobalManagerClient)
            ((int)_pEngine->m_retraceHistoryCpu + *(short *)(pEVar1 + 4) + -0x28);
  if ((this->m_pRMovie != (ERMovie *)0x0) && (bVar3 = IsFinished__7ERMovie(this->m_pRMovie), bVar3))
  {
    this->m_appNextState = E_APPSTATE_NORMAL;
  }
  return;
}

void EApp::PlayMovie(u32 resid, int x, int y) {
  this->m_MovieY = y;
  this->m_uNextMovieID = resid;
  this->m_appNextState = E_APPSTATE_NEXTMOVIEPLAY;
  this->m_MovieX = x;
  return;
}

void EApp::StopMovie() {
  this->m_appNextState = E_APPSTATE_NORMAL;
  return;
}

bool EApp::IsMoviePlaying() {
  return this->m_appState + ~E_APPSTATE_NORMAL < 2;
}

void EApp::SetArgs(int nArgc, char **ppszArgv) {
  this->m_ppszArgv = ppszArgv;
  this->m_nArgc = nArgc;
  return;
}

char* EApp::GetArg(char *pszFlag) {
	int iArg;
	char *pszArg;
	EString strFlag;
	char *szSource;
	EString strArg;
	
  char **ppcVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  EString strFlag;
  EString strArg;
  
  pcVar2 = (char *)0x0;
  if (pszFlag == (char *)0x0) {
    pcVar2 = *this->m_ppszArgv;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
    MakeCopy__7EStringPCc(&strFlag,pszFlag);
                    /* end of inlined section */
    iVar4 = 0;
    MakeUpper__7EString(&strFlag);
    if (0 < this->m_nArgc) {
      ppcVar1 = this->m_ppszArgv;
      while( true ) {
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
        MakeCopy__7EStringPCc(&strArg,ppcVar1[iVar4]);
                    /* end of inlined section */
        MakeUpper__7EString(&strArg);
        pcVar2 = strstr(strArg.m_p,strFlag.m_p);
        if (pcVar2 != (char *)0x0) break;
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
        iVar4 = iVar4 + 1;
        Deallocate__7EStringPc(&strArg,strArg.m_p);
                    /* end of inlined section */
        if (this->m_nArgc <= iVar4) goto LAB_002dd24c;
        ppcVar1 = this->m_ppszArgv;
      }
      sVar3 = strlen(pszFlag);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
      pcVar2 = this->m_ppszArgv[iVar4] + (int)sVar3;
      Deallocate__7EStringPc(&strArg,strArg.m_p);
                    /* end of inlined section */
    }
LAB_002dd24c:
    Deallocate__7EStringPc(&strFlag,strFlag.m_p);
  }
                    /* end of inlined section */
  return pcVar2;
}

FnAlloc EApp::GetMovieAllocator() {
  return DefaultAlloc__FUi;
}

FnFree EApp::GetMovieDeallocator() {
  return DefaultFree__FPv;
}

FnAllocAlign EApp::GetMovieAllocatorAlign() {
  return DefaultAllocAlign__FUiUi;
}

char* EApp::GetModuleDirectory() {
  return "\\eor\\bin\\iop";
}

char* EApp::GetBuildVersion() {
  return "EOR Engine v2.0 built 10:48:31 Oct  3 2002 ";
}

char* EApp::GetAppName() {
  return "Untitled";
}

int EApp::GetEventTableSize() {
  return 8;
}

void EApp::Init() {
  return;
}

void EApp::Update() {
  return;
}

int EApp::GetAppStackSize() {
  return 0x10000;
}

void EApp::Shutdown() {
  return;
}
