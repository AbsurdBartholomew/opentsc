// STATUS: NOT STARTED

#include "e_ps2engine.h"

struct _PROFHDR {
	unsigned int interval;
	unsigned int startpc;
	unsigned int endpc;
	unsigned int mask;
	unsigned int flags;
	unsigned int buffptr;
	unsigned int bufflen;
	unsigned int ptr;
};

typedef _PROFHDR PROFHDR;

struct _PROFSAMPLE {
	unsigned int pc;
};

typedef _PROFSAMPLE PROFSAMPLE;

EPs2Engine _ps2engine = {
	/* base class 0 = */ {
		/* base class 0 = */ {
			/* .$vf1727 = */ NULL
		},
		/* .m_initialized = */ false,
		/* .m_frameRateSmoothing = */ false,
		/* .m_frameClock = */ {
			/* .m_pData = */ NULL
		},
		/* .m_frameEvent = */ {
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
		/* .m_cpuClock = */ {
			/* .m_pData = */ NULL
		},
		/* .m_retraceHistoryCpu = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0
		},
		/* .m_retraceHistoryRend = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0
		},
		/* .m_retraceHistoryPos = */ 0
	},
	/* .m_iopModulePrefix = */ {
		/* .m_p = */ NULL
	},
	/* .m_PCFileServerIP = */ {
		/* .m_p = */ NULL
	}
};

EEngine *_pEngine = NULL;

__vtbl_ptr_type EPs2Engine virtual table[17] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Engine::~EPs2Engine,
		/* .__delta2 = */ 26104
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
		/* .__pfn = */ &EPs2Engine::Init,
		/* .__delta2 = */ 26232
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Engine::EnterMovieMode,
		/* .__delta2 = */ 28640
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2Engine::ExitMovieMode,
		/* .__delta2 = */ 28872
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
		/* .__pfn = */ &EPs2Engine::Reboot,
		/* .__delta2 = */ 28576
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

static float cPi = 3.14159274f;
static double cdPi = 3.1415927410125732;
static float cGravity = 32.2f;
static u32 cScratchPadBase = 0;
static u32 cScratchPadSize = 16384;
int _iSoundThread = 0;

EPs2Engine* EPs2Engine::EPs2Engine() {
  __7EEngine(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.__vtable = (EGlobalManagerClient__vtable *)_vt_10EPs2Engine;
  __7EString(&this->m_iopModulePrefix);
  __7EString(&this->m_PCFileServerIP);
  _pEngine = &this->field0_0x0;
  return this;
}

void EPs2Engine::~EPs2Engine(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EGlobalManagerClient__vtable *)_vt_10EPs2Engine;
  ___7EString(&this->m_PCFileServerIP,2);
  ___7EString(&this->m_iopModulePrefix,2);
  ___7EEngine(&this->field0_0x0,__in_chrg);
  return;
}

bool EPs2Engine::Init() {
	char *szIOPParm;
	
  bool bVar1;
  char *szIOPParm;
  
  bVar1 = InitializeIOP__10EPs2Engine(this);
  if (bVar1) {
    bVar1 = LoadIopModule__10EPs2EnginePCcPiT1(this,"eorps2io",(int *)0x0,"");
    if (bVar1) {
      sceCdDiskReady(0);
      Init__17EExceptionHandler(&_exceptionhandler);
      bVar1 = Init__7EEngine(&this->field0_0x0);
      if (bVar1) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

bool EPs2Engine::InitializeIOP() {
	EString iopReplacePath;
	char pszArg[128];
	int nPri1;
	int nPri2;
	
  bool bVar1;
  char *pcVar2;
  long lVar3;
  EString iopReplacePath;
  char pszArg [128];
  int nPri1;
  int nPri2;
  
  SetupIopModulePrefix__10EPs2Engine(this);
  sceSifInitRpc(0);
  sceSifInitIopHeap();
  bVar1 = SetCDMode__10EPs2Engine(this);
  if (bVar1) {
    __pl__C7EStringPCc(&iopReplacePath,(char *)&this->m_iopModulePrefix);
    do {
      pcVar2 = __opPc__C7EString(&iopReplacePath);
      lVar3 = sceSifRebootIop(pcVar2);
    } while (lVar3 == 0);
    do {
      lVar3 = sceSifSyncIop();
    } while (lVar3 == 0);
    sceSifInitRpc(0);
    sceSifInitIopHeap();
    sceSifLoadFileReset();
    sceFsReset();
    bVar1 = SetCDMode__10EPs2Engine(this);
    if (bVar1) {
      sprintf(pszArg,"thpri=%d,%d");
      bVar1 = LoadIopModule__10EPs2EnginePCcPiT1(this,"libsd",(int *)0x0,"");
      if (bVar1) {
        bVar1 = LoadIopModule__10EPs2EnginePCcPiT1(this,"sdrdrv",(int *)0x0,pszArg);
        if (bVar1) {
          bVar1 = LoadIopModule__10EPs2EnginePCcPiT1(this,"sio2man",(int *)0x0,"");
          if (bVar1) {
            bVar1 = LoadIopModule__10EPs2EnginePCcPiT1(this,"padman",(int *)0x0,"");
            if (bVar1) {
              sceSdRemoteInit();
              sceSdRemote(1,0x8000,0);
              _iSoundThread = sceSdRemoteCallbackInit(0x5f);
              ___7EString(&iopReplacePath,2);
              bVar1 = true;
            }
            else {
              ___7EString(&iopReplacePath,2);
              bVar1 = false;
            }
          }
          else {
            ___7EString(&iopReplacePath,2);
            bVar1 = false;
          }
        }
        else {
          ___7EString(&iopReplacePath,2);
          bVar1 = false;
        }
      }
      else {
        ___7EString(&iopReplacePath,2);
        bVar1 = false;
      }
    }
    else {
      ___7EString(&iopReplacePath,2);
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

bool EPs2Engine::InitializeProfiler() {
	bool bRet;
	void *profdata;
	
  void *__s;
  long lVar1;
  bool bRet;
  void *profdata;
  
  __s = _memmanAlloc__FUiUi(0x8000,0x10);
  memset(__s,0,0x8000);
  bRet = LoadIopModule__10EPs2EnginePCcPiT1(this,"snprofil",(int *)0x0,"");
  if (bRet) {
    lVar1 = snProfInit(75000,__s,0x8000);
    bRet = lVar1 != 0;
  }
  return bRet;
}

bool EPs2Engine::SetCDMode() {
  long lVar1;
  
  lVar1 = sceCdInit(0);
  if (0 < lVar1) {
    sceCdMmode(1);
  }
  return true;
}

void EPs2Engine::SetupIopModulePrefix() {
  __as__7EStringPCc(&this->m_iopModulePrefix,"cdrom0:\\");
  return;
}

bool EPs2Engine::LoadIopModule(char *szName, int *pRet, char *szArgs) {
	u32 retries;
	int nRet;
	EString strPath;
	
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  uint retries;
  int nRet;
  EString strPath;
  EString aEStack_80 [4];
  EString aEStack_70 [4];
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
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  retries = 0xffffffff;
  __7EStringPCc(aEStack_70,szName);
  MakeUpper__7EString(aEStack_70);
  __pl__C7EStringRC7EString(aEStack_80,&this->m_iopModulePrefix);
  __pl__C7EStringPCc(&strPath,(char *)aEStack_80);
  ___7EString(aEStack_80,2);
  ___7EString(aEStack_70,2);
  __apl__7EStringPCc(&strPath,";1");
  do {
    pcVar1 = __opPc__C7EString(&strPath);
    sVar3 = strlen(szArgs);
    iVar2 = sceSifLoadModule(pcVar1,(int)sVar3 + 1,szArgs);
    retries = retries - 1;
    if (retries == 0xffffffff) break;
  } while (iVar2 < 0);
  if (pRet != (int *)0x0) {
    *pRet = iVar2;
  }
  ___7EString(&strPath,2);
  return retries != 0xffffffff;
}

bool EPs2Engine::UnloadIopModule(char *szName, int *pRet) {
	EString moduleName;
	s32 ret_search;
	s32 ret_stop;
	s32 ret_unload;
	s32 result;
	s32 moduleId;
	
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EString moduleName;
  int ret_search;
  int ret_stop;
  int ret_unload;
  int result;
  int moduleId;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  __7EStringPCc(&moduleName,szName);
  pcVar2 = __opPc__C7EString(&moduleName);
  iVar3 = sceSifSearchModuleByName(pcVar2);
  if (((iVar3 < 0) ||
      (moduleId = iVar3, iVar3 = sceSifStopModule(iVar3,1,0x3c2410,&result), iVar3 < 0)) ||
     (iVar3 = sceSifUnloadModule(moduleId), iVar3 < 0)) {
    ___7EString(&moduleName,2);
    bVar1 = false;
  }
  else {
    if (pRet != (int *)0x0) {
      *pRet = iVar3;
    }
    ___7EString(&moduleName,2);
    bVar1 = true;
  }
  return bVar1;
}

bool EPs2Engine::InitMemoryManager() {
	u32 memoryStart;
	u32 freeStart;
	u32 extra;
	u32 heapSize;
	void *pHeapMem;
	
  void *pAddress;
  uint memoryStart;
  uint freeStart;
  uint extra;
  uint heapSize;
  void *pHeapMem;
  
  pAddress = sbrk(0x1b1a690);
  Init__14EMemoryManagerPvii(&_memman,pAddress,0x1b1a690,0);
  return true;
}

void EPs2Engine::InitFileServerIP() {
  return;
}

void EPs2Engine::Reboot() {
  PS2Reboot__Fv();
  return;
}

void EPs2Engine::EnterMovieMode() {
  EGlobalManagerClient__vtable *pEVar1;
  undefined4 uVar2;
  
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  EnterMovieMode__9EPs2Audio(&_ps2Audio);
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  if (_iVideoMode == 1) {
    uVar2 = 0x200;
  }
  else {
    uVar2 = 0x1c0;
  }
  (*(code *)pEVar1[4].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[4].ManagedStartup,0x280,
             uVar2,1,0);
  return;
}

void EPs2Engine::ExitMovieMode() {
  EGlobalManagerClient__vtable *pEVar1;
  undefined4 uVar2;
  
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  (*(code *)pEVar1[3].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
  ExitMovieMode__9EPs2Audio(&_ps2Audio);
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  if (_iVideoMode == 1) {
    uVar2 = 0x200;
  }
  else {
    uVar2 = 0x1c0;
  }
  (*(code *)pEVar1[4].ManagedShutdown)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[4].ManagedStartup,0x280,
             uVar2,0,1);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___10EPs2Engine(&_ps2engine,2);
    }
    else {
      __10EPs2Engine(&_ps2engine);
    }
  }
  return;
}

EString* EString::EString() {
  SetToNull__7EString(this);
  return this;
}

EString* EString::EString(char *szSource) {
  MakeCopy__7EStringPCc(this,szSource);
  return this;
}

void EString::~EString(int __in_chrg) {
  Deallocate__7EStringPc(this,this->m_p);
  if ((__in_chrg & 1U) != 0) {
    __builtin_delete(this);
  }
  return;
}

char* EString::operator char *() {
  return this->m_p;
}

EString EString::operator+(char *sz) {
  char *szSource1;
  char *in_a2_lo;
  
  szSource1 = __opPc__C7EString((EString *)sz);
  __7EStringPCcT1(this,szSource1,in_a2_lo);
  return (EString)(char *)this;
}

EString EString::operator+(EString &s) {
  char *szSource1;
  char *szSource2;
  EString *in_a2_lo;
  
  szSource1 = __opPc__C7EString(s);
  szSource2 = __opPc__C7EString(in_a2_lo);
  __7EStringPCcT1(this,szSource1,szSource2);
  return (EString)(char *)this;
}

char* EPs2Engine::GetIOPModulePrefix() {
  char *pcVar1;
  
  pcVar1 = __opPc__C7EString(&this->m_iopModulePrefix);
  return pcVar1;
}

char* EPs2Engine::GetFileServerIP() {
  char *pcVar1;
  
  pcVar1 = __opPc__C7EString(&this->m_PCFileServerIP);
  return pcVar1;
}

void __builtin_delete(void *pAddress) {
  _memmanFree__FPv(pAddress);
  return;
}

void global constructors keyed to _ps2engine() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _ps2engine() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
