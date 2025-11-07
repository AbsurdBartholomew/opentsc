// STATUS: NOT STARTED

#include "e_ps2ctrlmanager.h"

struct EControllerRead {
	float xstick[2];
	float ystick[2];
	unsigned char rawData[32];
	u32 buttons;
	u32 lastButtons;
	u32 wasDown;
	u32 lastWasDown;
	u32 released;
	u32 triggered;
};

struct EPs2ControllerManager : EControllerManager, private EThread {
protected:
	u8 *m_pReadBuffer;
	EMutex m_mutex;
	EInterruptHandler m_vblankHandler;
	EEvent m_vblankEvent;
	
public:
	EPs2ControllerManager& operator=();
	EPs2ControllerManager();
	EPs2ControllerManager();
	/* vtable[1] */ virtual EPs2ControllerManager(EPs2ControllerManager*, int, void);
	/* vtable[2] */ virtual void Update();
	/* vtable[3] */ virtual bool Init();
	/* vtable[4] */ virtual void Shutdown();
private:
	bool InitThread();
	void ShutdownThread();
	/* vtable[2] */ virtual void Main();
	/* vtable[5] */ virtual void UpdateControllerStatus();
	/* vtable[6] */ virtual void ReadControllers();
};

EPs2Controller **_ps2CtrlPads = NULL;
EControllerManager *_pCtrlMan = NULL;

EPs2ControllerManager _ps2ctrlman = {
	/* base class 0 = */ {
		/* .m_controllerToPlayer = */ {
			/* [0] = */ {
				/* .playerIndex = */ 0,
				/* .controllerIndex = */ 0
			},
			/* [1] = */ {
				/* .playerIndex = */ 0,
				/* .controllerIndex = */ 0
			},
			/* [2] = */ {
				/* .playerIndex = */ 0,
				/* .controllerIndex = */ 0
			},
			/* [3] = */ {
				/* .playerIndex = */ 0,
				/* .controllerIndex = */ 0
			},
			/* [4] = */ {
				/* .playerIndex = */ 0,
				/* .controllerIndex = */ 0
			},
			/* [5] = */ {
				/* .playerIndex = */ 0,
				/* .controllerIndex = */ 0
			},
			/* [6] = */ {
				/* .playerIndex = */ 0,
				/* .controllerIndex = */ 0
			},
			/* [7] = */ {
				/* .playerIndex = */ 0,
				/* .controllerIndex = */ 0
			}
		},
		/* .$vf2585 = */ NULL
	},
	/* base class 1 = */ {
		/* .m_threadId = */ 0,
		/* .m_pStack = */ NULL,
		/* .m_stackSize = */ 0,
		/* .m_stackAutoAllocated = */ false,
		/* .m_szName = */ NULL,
		/* .m_pLastThread = */ NULL,
		/* .m_pNextThread = */ NULL,
		/* .$vf897 = */ NULL
	},
	/* .m_pReadBuffer = */ NULL,
	/* .m_mutex = */ {
		/* base class 0 = */ {
			/* .$vf1686 = */ NULL
		},
		/* .m_sema = */ {
			/* base class 0 = */ {
				/* .$vf1686 = */ NULL
			},
			/* .m_id = */ 0,
			/* .m_maxCount = */ 0,
			/* .m_waits = */ 0,
			/* .m_count = */ 0
		}
	},
	/* .m_vblankHandler = */ {
		/* .m_id = */ 0,
		/* .m_cause = */ 0
	},
	/* .m_vblankEvent = */ {
		/* .m_sema = */ {
			/* base class 0 = */ {
				/* .$vf1686 = */ NULL
			},
			/* .m_id = */ 0,
			/* .m_maxCount = */ 0,
			/* .m_waits = */ 0,
			/* .m_count = */ 0
		}
	}
};

__vtbl_ptr_type EPs2ControllerManager::EThread virtual table[4] = {
	/* [0] = */ {
		/* .__delta = */ -68,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ -68,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ControllerManager::~EPs2ControllerManager,
		/* .__delta2 = */ -28808
	},
	/* [2] = */ {
		/* .__delta = */ -68,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ControllerManager::Main,
		/* .__delta2 = */ -27776
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EPs2ControllerManager virtual table[8] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ControllerManager::~EPs2ControllerManager,
		/* .__delta2 = */ -28808
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ControllerManager::Update,
		/* .__delta2 = */ -28616
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ControllerManager::Init,
		/* .__delta2 = */ -28512
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ControllerManager::Shutdown,
		/* .__delta2 = */ -28000
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ControllerManager::UpdateControllerStatus,
		/* .__delta2 = */ -27696
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ControllerManager::ReadControllers,
		/* .__delta2 = */ -27536
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EPs2ControllerManager* EPs2ControllerManager::EPs2ControllerManager() {
	EEvent *this;
	
  __18EControllerManager(&this->field0_0x0);
                    /* inlined from /eor/src2/common/sync/e_event.h */
                    /* end of inlined section */
  __7EThread((EThread *)&this->field_0x44);
  *(__vtbl_ptr_type **)&this->field_0x60 = _vt_21EPs2ControllerManager_7EThread;
  (this->field0_0x0).__vtable = (EControllerManager__vtable *)_vt_21EPs2ControllerManager;
  __6EMutex(&this->m_mutex);
  __17EInterruptHandler(&this->m_vblankHandler);
                    /* inlined from /eor/src2/common/sync/e_event.h */
  __10ESemaphore(&(this->m_vblankEvent).m_sema);
  Create__10ESemaphoreii(&(this->m_vblankEvent).m_sema,1,0);
  _pCtrlMan = &this->field0_0x0;
                    /* end of inlined section */
  this->m_pReadBuffer = (uchar *)0x0;
  return this;
}

void EPs2ControllerManager::~EPs2ControllerManager(int __in_chrg) {
	EEvent *this;
	void *pAddress;
	EControllerManager *this;
	int __in_chrg;
	void *pAddress;
	
  *(__vtbl_ptr_type **)&this->field_0x60 = _vt_21EPs2ControllerManager_7EThread;
  (this->field0_0x0).__vtable = (EControllerManager__vtable *)_vt_21EPs2ControllerManager;
  Destroy__17EInterruptHandler(&this->m_vblankHandler);
                    /* inlined from /eor/src2/common/sync/e_event.h */
                    /* end of inlined section */
  _memmanFree__FPv(this->m_pReadBuffer);
                    /* inlined from /eor/src2/common/sync/e_event.h */
  Destroy__10ESemaphore(&(this->m_vblankEvent).m_sema);
  ___10ESemaphore(&(this->m_vblankEvent).m_sema,2);
                    /* end of inlined section */
  ___17EInterruptHandler(&this->m_vblankHandler,2);
  ___6EMutex(&this->m_mutex,2);
  ___7EThread((EThread *)&this->field_0x44,0);
                    /* inlined from e_ctrlmanager.h */
  (this->field0_0x0).__vtable = (EControllerManager__vtable *)_vt_18EControllerManager;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EPs2ControllerManager::Update() {
	EMutex *this;
	
  ESyncObject__vtable *pEVar1;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
  (**(code **)(pEVar1 + 1))
            ((undefined *)((int)(&this->field0_0x0 + 1) + *(short *)&pEVar1->Release + 0x24),
             0xffffffffffffffff);
                    /* end of inlined section */
  Update__18EControllerManager(&this->field0_0x0);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar1 = (this->m_mutex).field0_0x0.__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((undefined *)((int)(&this->field0_0x0 + 1) + *(short *)&pEVar1[1].ESyncObject + 0x24));
  return;
}

bool EPs2ControllerManager::Init() {
	bool bSuccess;
	EPs2ControllerInitInfo initInfo;
	EController *pCtrlTemp;
	int i2;
	
  EController__vtable *pEVar1;
  bool bVar2;
  uchar *puVar3;
  EController *pEVar4;
  EController **ppEVar5;
  int iVar6;
  EPs2Controller **ppEVar7;
  int iVar8;
  EPs2ControllerInitInfo initInfo;
  
  bVar2 = Init__18EControllerManager(&this->field0_0x0);
  if (bVar2) {
    iVar8 = 0;
    scePadInit(0);
    puVar3 = (uchar *)_memmanAlloc__FUiUi(0x20,0x40);
    this->m_pReadBuffer = puVar3;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2ctrl.h */
                    /* end of inlined section */
    ppEVar5 = _ctrlPads;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2ctrl.h */
    initInfo.slot = -1;
                    /* end of inlined section */
    _ps2CtrlPads = (EPs2Controller **)_ctrlPads;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2ctrl.h */
    initInfo.port = -1;
    initInfo.pDmaBuffer = (uint16 *)0x0;
                    /* end of inlined section */
    do {
      pEVar4 = (EController *)__builtin_new(0x2bb0);
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2ctrl.h */
      __11EController(pEVar4);
      ppEVar7 = _ps2CtrlPads;
                    /* end of inlined section */
      iVar6 = iVar8 + 3;
      if (-1 < iVar8) {
        iVar6 = iVar8;
      }
      initInfo.port = iVar6 >> 2;
      *ppEVar5 = pEVar4;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2ctrl.h */
      pEVar4->__vtable = (EController__vtable *)_vt_14EPs2Controller;
      pEVar4[1].m_controllerData.buttons = 0xffffffff;
                    /* end of inlined section */
      initInfo.slot = iVar8 + initInfo.port * -4;
      ppEVar7 = ppEVar7 + iVar8;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2ctrl.h */
      pEVar4[1].m_status = -1;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2ctrl.h */
      pEVar4[1].m_controllerData.wasUp = 0;
                    /* end of inlined section */
      iVar8 = iVar8 + 1;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2ctrl.h */
      pEVar4[1].m_controllerData.lastWasDown = 0;
                    /* end of inlined section */
      ppEVar5 = ppEVar5 + 1;
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2ctrl.h */
      pEVar4[1].m_controllerData.wasDown = 0;
      pEVar4[1].m_controllerData.lastButtons = 0;
      pEVar4[1].m_controllerData.lastPressed = 0;
      pEVar4[1].m_controllerData.released = 0;
      pEVar4[1].m_controllerData.pressed = 0;
      pEVar4[1].m_controllerData.lastWasUp = 0;
      pEVar4[1].m_controllerData.nPressed[0] = 0;
      pEVar4[1].m_controllerData.lastReleased = 0;
                    /* end of inlined section */
      pEVar1 = ((*ppEVar7)->field0_0x0).__vtable;
      (*(code *)pEVar1[2].EController)
                ((int)((*ppEVar7)->field0_0x0).m_controllerData.nPressed +
                 *(short *)(pEVar1 + 2) + -0x30,&initInfo);
      pEVar4 = _ctrlPads[1];
    } while (iVar8 < 8);
    _ctrlPads[1] = _ctrlPads[4];
    _ps2CtrlPads[1] = _ps2CtrlPads[4];
    _ctrlPads[4] = pEVar4;
    _ps2CtrlPads[4] = (EPs2Controller *)pEVar4;
    bVar2 = InitThread__21EPs2ControllerManager(this);
  }
  return bVar2;
}

bool EPs2ControllerManager::InitThread() {
	bool bSuccess;
	EThread *this;
	
  bool bVar1;
  
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
  Create__17EInterruptHandlerR6EEventi(&this->m_vblankHandler,&this->m_vblankEvent,0x20000002);
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_thread.h */
  *(char **)&this->field_0x54 = "Ps2ControllerUpdate";
                    /* end of inlined section */
  bVar1 = Create__7EThreadiiPv((EThread *)&this->field_0x44,0x5f,0x700,(void *)0x0);
  if (bVar1) {
    Start__7EThread((EThread *)&this->field_0x44);
  }
  return bVar1;
}

void EPs2ControllerManager::Shutdown() {
	int i;
	int j;
	
  bool bVar1;
  EController__vtable *pEVar2;
  EPs2Controller *pEVar3;
  int iVar4;
  
  iVar4 = 0;
  ShutdownThread__21EPs2ControllerManager(this);
  do {
    pEVar2 = (_ps2CtrlPads[iVar4]->field0_0x0).__vtable;
    (**(code **)(pEVar2 + 5))
              ((int)(_ps2CtrlPads[iVar4]->field0_0x0).m_controllerData.nPressed +
               *(short *)&pEVar2[4].RefreshContext + -0x30);
    pEVar3 = _ps2CtrlPads[iVar4];
    if (pEVar3 != (EPs2Controller *)0x0) {
      pEVar2 = (pEVar3->field0_0x0).__vtable;
      (**(code **)(pEVar2 + 1))
                ((int)(pEVar3->field0_0x0).m_controllerData.nPressed +
                 *(short *)&pEVar2->RefreshContext + -0x30,3);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  iVar4 = 0;
  do {
    bVar1 = -1 < iVar4;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  Shutdown__18EControllerManager(&this->field0_0x0);
  return;
}

void EPs2ControllerManager::ShutdownThread() {
  Destroy__17EInterruptHandler(&this->m_vblankHandler);
  return;
}

void EPs2ControllerManager::Main() {
  EControllerManager__vtable *pEVar1;
  
  do {
                    /* inlined from /eor/src2/common/sync/e_event.h */
    Acquire__10ESemaphoreUi(&(this->m_vblankEvent).m_sema,0xffffffff);
                    /* end of inlined section */
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[2].EControllerManager)
              ((int)&(this->field0_0x0).m_controllerToPlayer[0].playerIndex +
               (int)*(short *)(pEVar1 + 2));
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[2].Init)
              ((int)&(this->field0_0x0).m_controllerToPlayer[0].playerIndex +
               (int)*(short *)&pEVar1[2].Update);
  } while( true );
}

void EPs2ControllerManager::UpdateControllerStatus() {
	int i;
	EMutex *this;
	
  EController__vtable *pEVar1;
  ESyncObject__vtable *pEVar2;
  int iVar3;
  
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
  pEVar2 = (this->m_mutex).field0_0x0.__vtable;
  iVar3 = 0;
  while( true ) {
    (**(code **)(pEVar2 + 1))
              ((undefined *)((int)(&this->field0_0x0 + 1) + *(short *)&pEVar2->Release + 0x24),
               0xffffffffffffffff);
                    /* end of inlined section */
    pEVar1 = (_ps2CtrlPads[iVar3]->field0_0x0).__vtable;
    (**(code **)(pEVar1 + 3))
              ((int)(_ps2CtrlPads[iVar3]->field0_0x0).m_controllerData.nPressed +
               *(short *)&pEVar1[2].RefreshContext + -0x30);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
    pEVar2 = (this->m_mutex).field0_0x0.__vtable;
    (*(code *)pEVar2[1].Acquire)
              ((undefined *)((int)(&this->field0_0x0 + 1) + *(short *)&pEVar2[1].ESyncObject + 0x24)
              );
                    /* end of inlined section */
    if (7 < iVar3 + 1) break;
    pEVar2 = (this->m_mutex).field0_0x0.__vtable;
    iVar3 = iVar3 + 1;
  }
  return;
}

void EPs2ControllerManager::ReadControllers() {
	int i;
	EController *this;
	EMutex *this;
	
  EPs2Controller *pEVar1;
  ESyncObject__vtable *pEVar2;
  EController__vtable *pEVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
                    /* inlined from e_ctrl.h */
    pEVar1 = _ps2CtrlPads[iVar4];
                    /* end of inlined section */
    if (((pEVar1->field0_0x0).m_status >> 1 & 1U) == 0) {
      pEVar2 = (this->m_mutex).field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
      (**(code **)(pEVar2 + 1))
                ((undefined *)((int)(&this->field0_0x0 + 1) + *(short *)&pEVar2->Release + 0x24),
                 0xffffffffffffffff);
                    /* end of inlined section */
      ClearAllData__11EController(&_ps2CtrlPads[iVar4]->field0_0x0);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
      pEVar2 = (this->m_mutex).field0_0x0.__vtable;
      (*(code *)pEVar2[1].Acquire)
                ((undefined *)
                 ((int)(&this->field0_0x0 + 1) + *(short *)&pEVar2[1].ESyncObject + 0x24));
                    /* end of inlined section */
    }
    else {
      pEVar3 = (pEVar1->field0_0x0).__vtable;
      (*(code *)pEVar3[3].RefreshContext)
                ((int)(pEVar1->field0_0x0).m_controllerData.nPressed +
                 *(short *)&pEVar3[3].EController + -0x30,this->m_pReadBuffer);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
      pEVar2 = (this->m_mutex).field0_0x0.__vtable;
      (**(code **)(pEVar2 + 1))
                ((undefined *)((int)(&this->field0_0x0 + 1) + *(short *)&pEVar2->Release + 0x24),
                 0xffffffffffffffff);
                    /* end of inlined section */
      pEVar3 = (_ps2CtrlPads[iVar4]->field0_0x0).__vtable;
      (*(code *)pEVar3[4].EController)
                ((int)(_ps2CtrlPads[iVar4]->field0_0x0).m_controllerData.nPressed +
                 *(short *)(pEVar3 + 4) + -0x30,this->m_pReadBuffer);
                    /* inlined from /eor/src2/common/sync/e_mutex.h */
      pEVar2 = (this->m_mutex).field0_0x0.__vtable;
      (*(code *)pEVar2[1].Acquire)
                ((undefined *)
                 ((int)(&this->field0_0x0 + 1) + *(short *)&pEVar2[1].ESyncObject + 0x24));
                    /* end of inlined section */
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___21EPs2ControllerManager(&_ps2ctrlman,2);
    }
    else {
      __21EPs2ControllerManager(&_ps2ctrlman);
    }
  }
  return;
}

void global constructors keyed to _ps2CtrlPads() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _ps2CtrlPads() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
