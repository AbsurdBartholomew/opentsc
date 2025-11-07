// STATUS: NOT STARTED

#include "e_frag.h"

EFrameAllocGroup _frag = {
	/* base class 0 = */ {
		/* .$vf1727 = */ NULL
	},
	/* .m_ag = */ {
		/* [0] = */ {
			/* .m_allocList = */ {
				/* base class 0 = */ {
					/* .m_l = */ {
						/* .m_pHead = */ NULL,
						/* .m_pTail = */ NULL
					}
				}
			},
			/* .m_pos = */ 0
		},
		/* [1] = */ {
			/* .m_allocList = */ {
				/* base class 0 = */ {
					/* .m_l = */ {
						/* .m_pHead = */ NULL,
						/* .m_pTail = */ NULL
					}
				}
			},
			/* .m_pos = */ 0
		}
	},
	/* .m_evenodd = */ 0
};

__vtbl_ptr_type EFrameAllocGroup virtual table[5] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFrameAllocGroup::~EFrameAllocGroup,
		/* .__delta2 = */ -9024
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
		/* .__pfn = */ &EFrameAllocGroup::ManagedShutdown,
		/* .__delta2 = */ -8824
	},
	/* [4] = */ {
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

void EFrameAllocGroup::~EFrameAllocGroup(int __in_chrg) {
	EGlobalManagerClient *this;
	EAllocGroup *this;
	TNodeList<void *> *this;
	ENodeList *this;
	void *pAddress;
	void *pAddress;
	EGlobalManagerClient *this;
	int __in_chrg;
	void *pAddress;
	
  bool bVar1;
  EAllocGroup *this_00;
  
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  bVar1 = __14EGlobalManager_m_shutdownComplete == 0;
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_16EFrameAllocGroup;
  if (bVar1) {
    Shutdown__14EGlobalManager();
  }
                    /* end of inlined section */
  if ((this != (EFrameAllocGroup *)0xfffffffc) && (this->m_ag != (EAllocGroup *)&this->m_evenodd)) {
    this_00 = this->m_ag + 1;
    do {
      DeallocateAll__11EAllocGroup(this_00);
      RemoveAll__9ENodeList((ENodeList *)this_00);
                    /* end of inlined section */
      bVar1 = this->m_ag != this_00;
      this_00 = this_00 + -1;
    } while (bVar1);
  }
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
  Shutdown__20EGlobalManagerClient(&this->field0_0x0);
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EFrameAllocGroup::ManagedShutdown() {
  DeallocateAll__11EAllocGroup(this->m_ag);
  DeallocateAll__11EAllocGroup(this->m_ag + 1);
  return;
}

void EFrameAllocGroup::Update() {
  uint uVar1;
  
  uVar1 = (uint)(this->m_evenodd == 0);
  this->m_evenodd = uVar1;
  DeallocateAll__11EAllocGroup(this->m_ag + uVar1);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  int iVar1;
  EAllocGroup *this;
  
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___16EFrameAllocGroup(&_frag,2);
    }
    else {
                    /* inlined from c:/eor/src2/engine/e_frag.h */
      _frag.field0_0x0.__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
      this = _frag.m_ag;
      Register__14EGlobalManagerP20EGlobalManagerClienti(&_frag.field0_0x0,2);
      iVar1 = 1;
      _frag.field0_0x0.__vtable = (EGlobalManagerClient__vtable *)_vt_16EFrameAllocGroup;
      do {
        iVar1 = iVar1 + -1;
        __11EAllocGroup(this);
        this = this + 1;
      } while (iVar1 != -1);
                    /* end of inlined section */
      _frag.m_evenodd = 0;
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

EFrameAllocGroup* EFrameAllocGroup::EFrameAllocGroup() {
	EGlobalManagerClient *this;
	
  EAllocGroup *this_00;
  int iVar1;
  
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
                    /* end of inlined section */
  this_00 = this->m_ag;
                    /* inlined from /eor/src2/common/util/e_globalmanagerclient.h */
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_20EGlobalManagerClient;
  iVar1 = 1;
  Register__14EGlobalManagerP20EGlobalManagerClienti(&this->field0_0x0,2);
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EGlobalManagerClient__vtable *)_vt_16EFrameAllocGroup;
  do {
    iVar1 = iVar1 + -1;
    __11EAllocGroup(this_00);
    this_00 = this_00 + 1;
  } while (iVar1 != -1);
  this->m_evenodd = 0;
  return this;
}

void* EFrameAllocGroup::Alloc(unsigned int size, int alignment) {
  void *pvVar1;
  
  pvVar1 = Alloc__11EAllocGroupUii(this->m_ag + this->m_evenodd,size,alignment);
  return pvVar1;
}

void global constructors keyed to _frag() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _frag() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
