// STATUS: NOT STARTED

#include "e_engine.h"

int _evenodd = 0;
int _framecount = 0;
int _retracecount = 0;
int _d_retraces = 1;
float _dt = 0.0166666675f;
float _invdt = 60.f;
int _fps = 60;
float _cputime = 0.0166666675f;
float _rendtime = 0.0166666675f;
double _time = 0;

EClock _sysclock = {
	/* .m_pData = */ NULL
};

EMat4 _mId = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [2] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [3] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* . = */ {
			/* ._00 = */ 0.f,
			/* ._01 = */ 0.f,
			/* ._02 = */ 0.f,
			/* ._03 = */ 0.f,
			/* ._10 = */ 0.f,
			/* ._11 = */ 0.f,
			/* ._12 = */ 0.f,
			/* ._13 = */ 0.f,
			/* ._20 = */ 0.f,
			/* ._21 = */ 0.f,
			/* ._22 = */ 0.f,
			/* ._23 = */ 0.f,
			/* ._30 = */ 0.f,
			/* ._31 = */ 0.f,
			/* ._32 = */ 0.f,
			/* ._33 = */ 0.f
		}
	}
};

EQuat _qId = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f,
			/* .w = */ 0.f
		}
	}
};

EVec3 _vZero = {
	/* . = */ {
		/* .d = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f
		},
		/* . = */ {
			/* .x = */ 0.f,
			/* .y = */ 0.f,
			/* .z = */ 0.f
		}
	}
};

EVec3 _vAxes[3] = {
	/* [0] = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f
			}
		}
	},
	/* [1] = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f
			}
		}
	},
	/* [2] = */ {
		/* . = */ {
			/* .d = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f
			},
			/* . = */ {
				/* .x = */ 0.f,
				/* .y = */ 0.f,
				/* .z = */ 0.f
			}
		}
	}
};

__vtbl_ptr_type EEngine virtual table[17] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::~EEngine,
		/* .__delta2 = */ 31864
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::ManagedStartup,
		/* .__delta2 = */ -30840
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::ManagedShutdown,
		/* .__delta2 = */ 32040
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::Init,
		/* .__delta2 = */ 32064
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::EnterMovieMode,
		/* .__delta2 = */ -32648
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::ExitMovieMode,
		/* .__delta2 = */ -32640
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::PreFrameUpdate,
		/* .__delta2 = */ -32632
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::PostFrameUpdate,
		/* .__delta2 = */ -32216
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::Idle,
		/* .__delta2 = */ -31136
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::ShutdownThreads,
		/* .__delta2 = */ 32312
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::Reboot,
		/* .__delta2 = */ -30848
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::InitSubsystems,
		/* .__delta2 = */ -32072
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::InitFileSystem,
		/* .__delta2 = */ -31824
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::InitResourceManagers,
		/* .__delta2 = */ -31784
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EEngine::ShutdownResourceManagers,
		/* .__delta2 = */ -31392
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EGlobalManagerClient virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobalManagerClient::~EGlobalManagerClient,
		/* .__delta2 = */ 22192
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobalManagerClient::ManagedStartup,
		/* .__delta2 = */ 22312
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EGlobalManagerClient::ManagedShutdown,
		/* .__delta2 = */ 22320
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

float _retracetime = 0.f;

EEngine* EEngine::EEngine() {
	EGlobalManagerClient *this;
	EEvent *this;
	int r;
	
  int *piVar1;
  int *piVar2;
  int iVar3;
  
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
  Register__14EGlobalManagerP20EGlobalManagerClienti(&this->field0_0x0,5);
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_7EEngine;
  __6EClock(&this->m_frameClock);
                    /* inlined from /eor/src2/common/sync/e_event.h */
  __10ESemaphore(&(this->m_frameEvent).m_sema);
  Create__10ESemaphoreii(&(this->m_frameEvent).m_sema,2,0);
                    /* end of inlined section */
  __6EClock(&this->m_cpuClock);
  iVar3 = _iVideoMode;
  *(undefined4 *)&this->m_initialized = 0;
  _retracetime = 0.01666667;
  *(undefined4 *)&this->m_frameRateSmoothing = 1;
  if (iVar3 == 1) {
    _retracetime = 0.02;
  }
  Id__5EMat4(&_mId);
                    /* inlined from /eor/src2/common/math/e_quat.h */
  _qId.field0_0x0.d[0] = 0.0;
  _vAxes[2].field0_0x0._8_4_ = 0x3f800000;
  _qId.field0_0x0.d[3] = 1.0;
  _vZero.field0_0x0.d[1] = 0.0;
  _vZero.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  _vAxes[0].field0_0x0._0_4_ = 0x3f800000;
                    /* end of inlined section */
  piVar2 = this->m_retraceHistoryRend;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  _vAxes[1].field0_0x0._8_4_ = 0;
                    /* end of inlined section */
  piVar1 = this->m_retraceHistoryCpu;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  _vAxes[2].field0_0x0._0_4_ = 0;
                    /* end of inlined section */
  iVar3 = 2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  _vAxes[2].field0_0x0._4_4_ = 0;
  _qId.field0_0x0.d[2] = 0.0;
  _qId.field0_0x0.d[1] = 0.0;
  _vZero.field0_0x0.d[2] = 0.0;
  _vAxes[0].field0_0x0._4_4_ = 0;
  _vAxes[0].field0_0x0._8_4_ = 0;
  _vAxes[1].field0_0x0._0_4_ = 0;
  _vAxes[1].field0_0x0._4_4_ = 0x3f800000;
  do {
                    /* end of inlined section */
    *piVar1 = 1;
    iVar3 = iVar3 + -1;
    *piVar2 = 1;
    piVar1 = piVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (-1 < iVar3);
  this->m_retraceHistoryPos = 0;
  return this;
}

void EEngine::~EEngine(int __in_chrg) {
	EGlobalManagerClient *this;
	EEvent *this;
	void *pAddress;
	EGlobalManagerClient *this;
	int __in_chrg;
	void *pAddress;
	
  bool bVar1;
  
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  bVar1 = __14EGlobalManager_m_shutdownComplete == 0;
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_7EEngine;
  if (bVar1) {
    Shutdown__14EGlobalManager();
  }
                    /* end of inlined section */
  ___6EClock(&this->m_cpuClock,2);
                    /* inlined from /eor/src2/common/sync/e_event.h */
  Destroy__10ESemaphore(&(this->m_frameEvent).m_sema);
  ___10ESemaphore(&(this->m_frameEvent).m_sema,2);
                    /* end of inlined section */
  ___6EClock(&this->m_frameClock,2);
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
  Shutdown__20EGlobalManagerClient(&this->field0_0x0);
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EEngine::ManagedShutdown() {
  _pEngine = (EEngine *)0x0;
  return;
}

void EEngine::Line() {
  return;
}

bool EEngine::Init() {
	EEvent *this;
	
  EThread__vtable *pEVar1;
  EGlobalManagerClient__vtable *pEVar2;
  uint tableDepth;
  long lVar3;
  
  Line__7EEngine(this);
  PrintBanner__7EEngine(this);
  Line__7EEngine(this);
  PrintConfiguration__7EEngine(this);
  Line__7EEngine(this);
  pEVar1 = (_pApp->field0_0x0).__vtable;
  tableDepth = (**(code **)(pEVar1 + 9))
                         ((int)&(_pApp->field0_0x0).m_threadId + (int)*(short *)&pEVar1[8].Main);
  Init__13EEventManagerUi(&_eventman,tableDepth);
  Line__7EEngine(this);
  pEVar2 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar2[6].EGlobalManagerClient)
                    ((int)this->m_retraceHistoryCpu + *(short *)(pEVar2 + 6) + -0x28);
  if (lVar3 != 0) {
                    /* end of inlined section */
    Line__7EEngine(this);
    PrintAllThreads__7EThread();
    Line__7EEngine(this);
    Start__6EClock(&_sysclock);
    Start__6EClock(&this->m_frameClock);
                    /* inlined from /eor/src2/common/sync/e_event.h */
    Release__10ESemaphore(&(this->m_frameEvent).m_sema);
    Release__10ESemaphore(&(this->m_frameEvent).m_sema);
                    /* end of inlined section */
    *(undefined4 *)&this->m_initialized = 1;
    LinkFix__Fv();
  }
  return lVar3 != 0;
}

void EEngine::ShutdownThreads() {
  EGlobalManagerClient__vtable *pEVar1;
  
  if (_pCtrlMan != (EControllerManager *)0x0) {
    (*(code *)_pCtrlMan->__vtable[1].Shutdown)
              ((int)&_pCtrlMan->m_controllerToPlayer[0].playerIndex +
               (int)*(short *)&_pCtrlMan->__vtable[1].Init);
  }
  if (_pAudio == (EAudio__0_3277 *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
  }
  else {
    (*(code *)_pAudio->__vtable->RemoveEvent)
              ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->AddEvent);
                    /* end of inlined section */
    pEVar1 = (this->field0_0x0).__vtable;
  }
  (*(code *)pEVar1[7].ManagedShutdown)
            ((int)this->m_retraceHistoryCpu + *(short *)&pEVar1[7].ManagedStartup + -0x28);
  Shutdown__13EEventManager(&_eventman);
  return;
}

void EEngine::RetraceUpdate(float frameTime) {
	int cpuRetraces;
	int rendRetraces;
	int maxCpu;
	int maxRend;
	int cpuTotal;
	int rendTotal;
	int smoothCpu;
	int smoothRend;
	int r;
	int cpu;
	int rend;
	
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  if (*(int *)&this->m_frameRateSmoothing == 0) {
    fVar10 = ceilf(frameTime / _retracetime);
    _d_retraces = (int)fVar10;
  }
  else {
    fVar10 = ceilf(_cputime / _retracetime);
    iVar8 = (int)fVar10;
    if (iVar8 < 1) {
      iVar8 = 1;
    }
    else if (0xf < iVar8) {
      iVar8 = 0xf;
    }
    fVar10 = ceilf(_rendtime / _retracetime);
    iVar9 = (int)fVar10;
    if (iVar9 < 1) {
      iVar7 = 1;
    }
    else {
      iVar7 = 0xf;
      if (iVar9 < 0x10) {
        iVar7 = iVar9;
      }
    }
    piVar2 = this->m_retraceHistoryCpu;
    piVar3 = this->m_retraceHistoryRend;
    piVar2[this->m_retraceHistoryPos] = iVar8;
    iVar8 = 1;
    iVar9 = 1;
    iVar6 = 0;
    iVar5 = 0;
    iVar4 = 2;
    piVar3[this->m_retraceHistoryPos] = iVar7;
    this->m_retraceHistoryPos = (this->m_retraceHistoryPos + 1) % 3;
    do {
      iVar7 = *piVar3;
      iVar4 = iVar4 + -1;
      iVar1 = *piVar2;
      piVar3 = piVar3 + 1;
      piVar2 = piVar2 + 1;
      if (iVar9 <= iVar7) {
        iVar9 = iVar7;
      }
      if (iVar8 <= iVar1) {
        iVar8 = iVar1;
      }
      iVar6 = iVar6 + iVar1;
      iVar5 = iVar5 + iVar9;
    } while (-1 < iVar4);
    _d_retraces = ((iVar6 - iVar8) + 1) / 2;
    iVar8 = ((iVar5 - iVar9) + 1) / 2;
    if (_d_retraces <= iVar8) {
      _d_retraces = iVar8;
    }
  }
  _retracecount = _retracecount + _d_retraces;
  return;
}

int EEngine::GetMinRatraces() {
  int iVar1;
  
  iVar1 = 1;
  if (*(int *)&this->m_frameRateSmoothing != 0) {
    iVar1 = _d_retraces;
  }
  return iVar1;
}

void EEngine::EnterMovieMode() {
  return;
}

void EEngine::ExitMovieMode() {
  return;
}

void EEngine::PreFrameUpdate() {
	float frameTime;
	
  EGlobalManagerClient__vtable *pEVar1;
  float frameTime;
  
                    /* inlined from /eor/src2/common/sync/e_event.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_event.h */
  Acquire__10ESemaphoreUi(&(this->m_frameEvent).m_sema,0xffffffff);
                    /* end of inlined section */
  Start__6EClock(&this->m_cpuClock);
  _framecount = _framecount + 1;
  _evenodd = (int)(_evenodd == 0);
  frameTime = GetSec__6EClock(&this->m_frameClock);
  Start__6EClock(&this->m_frameClock);
  _time = (long)((double)_time + (double)frameTime);
  RetraceUpdate__7EEnginef(this,frameTime);
  _dt = frameTime;
  if (*(int *)&this->m_frameRateSmoothing != 0) {
    _dt = (float)_d_retraces * _retracetime;
  }
  _invdt = 0.0;
  if (_dt != 0.0) {
    _invdt = 1.0 / _dt;
  }
  Update__16EFrameAllocGroup(&_frag);
  (**(code **)(_pCtrlMan->__vtable + 1))
            ((int)&_pCtrlMan->m_controllerToPlayer[0].playerIndex +
             (int)*(short *)&_pCtrlMan->__vtable->Shutdown);
  (*(code *)_pAudio->__vtable->StopMusic)
            ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->PlayMusic);
  UpdateVibration__8EVibrate(&_forceFeedback);
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[2].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[2].ManagedStartup);
  Update__6ETweak(&_tweak);
  (*(code *)_pResLoader->__vtable->NewDataFiles)
            ((int)&_pResLoader->__vtable +
             (int)*(short *)&_pResLoader->__vtable->FindResourceManager);
  Update__13EEventManager(&_eventman);
  return;
}

void EEngine::PostFrameUpdate() {
  EGlobalManagerClient__vtable *pEVar1;
  
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 3));
  _cputime = GetSec__6EClock(&this->m_cpuClock);
  return;
}

void EEngine::FrameComplete() {
  EThread__vtable *pEVar1;
  
  pEVar1 = (_pSched->field0_0x0).__vtable;
  (**(code **)(pEVar1 + 5))
            ((int)&(_pSched->field0_0x0).m_threadId + (int)*(short *)&pEVar1[4].Main,
             &this->m_frameEvent);
  return;
}

void EEngine::PrintBanner() {
  return;
}

void EEngine::PrintConfiguration() {
  return;
}

bool EEngine::InitSubsystems() {
  EGlobalManagerClient__vtable *pEVar1;
  bool bVar2;
  long lVar3;
  
  pEVar1 = (this->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[6].ManagedShutdown)
                    ((int)this->m_retraceHistoryCpu + *(short *)&pEVar1[6].ManagedStartup + -0x28);
  bVar2 = false;
  if (lVar3 != 0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    lVar3 = (*(code *)pEVar1[2].EGlobalManagerClient)
                      ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 2));
    bVar2 = false;
    if (lVar3 != 0) {
      lVar3 = (*(code *)_pCtrlMan->__vtable[1].Update)
                        ((int)&_pCtrlMan->m_controllerToPlayer[0].playerIndex +
                         (int)*(short *)&_pCtrlMan->__vtable[1].EControllerManager);
      bVar2 = false;
      if (lVar3 != 0) {
        lVar3 = (*(code *)_pMemoryCard->__vtable->SaveDataS)
                          ((int)&_pMemoryCard->__vtable +
                           (int)*(short *)&_pMemoryCard->__vtable->LoadDataS);
        if (lVar3 == 0) {
          bVar2 = false;
        }
        else {
          (*(code *)_pAudio->__vtable->Flush)
                    ((int)&_pAudio->__vtable + (int)*(short *)&_pAudio->__vtable->Update);
          Init__12EParticleMan(&_pclman);
          Init__13EScriptEngine(&_scriptEngine);
          pEVar1 = (this->field0_0x0).__vtable;
          lVar3 = (*(code *)pEVar1[7].EGlobalManagerClient)
                            ((int)this->m_retraceHistoryCpu + *(short *)(pEVar1 + 7) + -0x28);
          bVar2 = lVar3 != 0;
        }
      }
    }
  }
  return bVar2;
}

bool EEngine::InitFileSystem() {
  bool bVar1;
  
  bVar1 = Init__14EPs2FileSystemQ25EFile10DeviceType(&_eorFileSys,DT_DEFAULT);
  return bVar1;
}

bool EEngine::InitResourceManagers() {
  EResourceManager__vtable *pEVar1;
  
  (*(code *)_pResLoader->__vtable->Update)
            ((int)&_pResLoader->__vtable + (int)*(short *)&_pResLoader->__vtable->TerminateThread);
  Init__16EResourceManagerPCc(&_animman.field0_0x0,"animations");
  Init__16EResourceManagerPCc(&_binaryman.field0_0x0,"binaries");
  Init__16EResourceManagerPCc(&_characterman.field0_0x0,"characters");
  Init__16EResourceManagerPCc(&_datasetman.field0_0x0,"datasets");
  Init__16EResourceManagerPCc(&_fontman.field0_0x0,"fonts");
  Init__16EResourceManagerPCc(&_igroupman.field0_0x0,"instancegroups");
  Init__16EResourceManagerPCc(&_levelman.field0_0x0,"levels");
  Init__16EResourceManagerPCc(&_modelman.field0_0x0,"models");
  Init__16EResourceManagerPCc(&_particletypeman.field0_0x0,"particletypes");
  Init__16EResourceManagerPCc(&_quickdataman.field0_0x0,"quickdatas");
  Init__16EResourceManagerPCc(&_scriptman.field0_0x0,"scripts");
  Init__16EResourceManagerPCc(&_shaderman.field0_0x0,"shaders");
  Init__16EResourceManagerPCc(&_textureman.field0_0x0,"textures");
  Init__16EResourceManagerPCc(&_movieman.field0_0x0,"movies");
  pEVar1 = (_pAudiosampleman->field0_0x0).__vtable;
  (*(code *)pEVar1->AllocateAndLoadResource)
            ((int)&(_pAudiosampleman->field0_0x0).m_dataMutex.field0_0x0.__vtable +
             (int)*(short *)&pEVar1->AllocateAndLoadResource,0x3c72d8);
  Init__16EResourceManagerPCc(&_audiostreamman.field0_0x0,"audiostreams");
  return true;
}

void EEngine::ShutdownResourceManagers() {
  EResourceManager__vtable *pEVar1;
  
  Shutdown__16EResourceManager(&_datasetman.field0_0x0);
  pEVar1 = (_pAudiosampleman->field0_0x0).__vtable;
  (*(code *)pEVar1[1].EResourceManager)
            ((int)&(_pAudiosampleman->field0_0x0).m_dataMutex.field0_0x0.__vtable +
             (int)*(short *)(pEVar1 + 1));
  Shutdown__16EResourceManager(&_audiostreamman.field0_0x0);
  Shutdown__16EResourceManager(&_scriptman.field0_0x0);
  Shutdown__16EResourceManager(&_quickdataman.field0_0x0);
  Shutdown__16EResourceManager(&_particletypeman.field0_0x0);
  Shutdown__16EResourceManager(&_binaryman.field0_0x0);
  Shutdown__16EResourceManager(&_movieman.field0_0x0);
  Shutdown__16EResourceManager(&_animman.field0_0x0);
  Shutdown__16EResourceManager(&_levelman.field0_0x0);
  Shutdown__16EResourceManager(&_igroupman.field0_0x0);
  Shutdown__16EResourceManager(&_characterman.field0_0x0);
  Shutdown__16EResourceManager(&_modelman.field0_0x0);
  Shutdown__16EResourceManager(&_fontman.field0_0x0);
  Shutdown__16EResourceManager(&_shaderman.field0_0x0);
  Shutdown__16EResourceManager(&_textureman.field0_0x0);
  (*(code *)_pResLoader->__vtable->AddManager)
            ((int)&_pResLoader->__vtable + (int)*(short *)&_pResLoader->__vtable->Flush);
  return;
}

void EEngine::Idle() {
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  bool bVar1;
  int iVar2;
  
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___6EClock(&_sysclock,2);
    }
    else {
      __6EClock(&_sysclock);
                    /* end of inlined section */
      iVar2 = 1;
      do {
        bVar1 = iVar2 != -1;
        iVar2 = iVar2 + -1;
      } while (bVar1);
    }
  }
  return;
}

void EGlobalManagerClient::~EGlobalManagerClient(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
  Shutdown__20EGlobalManagerClient(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EGlobalManagerClient::Shutdown() {
  if (__14EGlobalManager_m_shutdownComplete == 0) {
    Shutdown__14EGlobalManager();
  }
  return;
}

bool EGlobalManagerClient::ManagedStartup() {
  return true;
}

void EGlobalManagerClient::ManagedShutdown() {
  return;
}

void EEngine::EnableFrameRateSmoothing(bool enable) {
  *(int *)&this->m_frameRateSmoothing = (int)enable;
  return;
}

void EEngine::Reboot() {
  return;
}

bool EEngine::ManagedStartup() {
  return true;
}

void global constructors keyed to _evenodd() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _evenodd() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
