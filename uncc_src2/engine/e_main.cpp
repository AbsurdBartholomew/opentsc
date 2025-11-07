// STATUS: NOT STARTED

#include "e_main.h"

EThread _idleThread = {
	/* .m_threadId = */ 0,
	/* .m_pStack = */ NULL,
	/* .m_stackSize = */ 0,
	/* .m_stackAutoAllocated = */ false,
	/* .m_szName = */ NULL,
	/* .m_pLastThread = */ NULL,
	/* .m_pNextThread = */ NULL,
	/* .$vf897 = */ NULL
};

int main(int argc, char **argv) {
  EGlobalManagerClient__vtable *pEVar1;
  
  __main();
  Startup__14EGlobalManager();
  SetArgs__4EAppiPPc(_pApp,argc,argv);
  AttachToCallingThread__7EThread(&_idleThread);
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/sync/e_thread.h */
                    /* end of inlined section */
  _idleThread.m_szName = "Idle";
  CreateAndStartAppThread__4EApp(_pApp);
  SetPriority__7EThreadi(&_idleThread,100);
  pEVar1 = (_pEngine->field0_0x0).__vtable;
  (*(code *)pEVar1[4].ManagedShutdown)
            ((int)_pEngine->m_retraceHistoryCpu + *(short *)&pEVar1[4].ManagedStartup + -0x28);
  return 0;
}

int InitHeap() {
  bool bVar1;
  
  bVar1 = InitMemoryManager__10EPs2Engine();
  return (int)bVar1;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___7EThread(&_idleThread,2);
    }
    else {
      __7EThread(&_idleThread);
    }
  }
  return;
}

void global constructors keyed to _idleThread() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _idleThread() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
