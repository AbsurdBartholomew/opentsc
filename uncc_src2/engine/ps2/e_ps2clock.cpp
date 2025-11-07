// STATUS: NOT STARTED

#include "e_ps2clock.h"

EPs2ClockMan _ps2ClockMan = {
	/* base class 0 = */ {
		/* .$vf2342 = */ NULL
	},
	/* .m_lastCounter = */ 0,
	/* .m_nWraps = */ 0
};

EClockMan *_pClockMan = NULL;

__vtbl_ptr_type EPs2ClockMan virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ClockMan::~EPs2ClockMan,
		/* .__delta2 = */ 23944
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ClockMan::Init,
		/* .__delta2 = */ 23192
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ClockMan::Update,
		/* .__delta2 = */ 23200
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ClockMan::Start,
		/* .__delta2 = */ 23288
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ClockMan::GetInstanceData,
		/* .__delta2 = */ 23808
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ClockMan::FreeInstanceData,
		/* .__delta2 = */ 23840
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ClockMan::GetSec,
		/* .__delta2 = */ 23400
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2ClockMan::GetSecDouble,
		/* .__delta2 = */ 23584
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EClockMan virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EClockMan::~EClockMan,
		/* .__delta2 = */ 23992
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
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EPs2ClockMan* EPs2ClockMan::EPs2ClockMan() {
	EClockMan *this;
	
  (this->field0_0x0).__vtable = (EClockMan__vtable *)_vt_12EPs2ClockMan;
  this->m_lastCounter = 0;
  this->m_nWraps = 0;
  _pClockMan = (EClockMan *)&_ps2ClockMan;
  return this;
}

void EPs2ClockMan::Init() {
  return;
}

void EPs2ClockMan::Update() {
	u32 counter;
	
  uint uVar1;
  
  DIntr();
  uVar1 = REG_RCNT3_COUNT;
  if (uVar1 < this->m_lastCounter) {
    this->m_nWraps = this->m_nWraps + 1;
  }
  this->m_lastCounter = uVar1;
  EIntr();
  return;
}

void EPs2ClockMan::Start(void *pVoid) {
	EPs2ClockData *pData;
	u32 counter;
	
  uint uVar1;
  
  DIntr();
  uVar1 = REG_RCNT3_COUNT;
  if (uVar1 < this->m_lastCounter) {
    this->m_nWraps = this->m_nWraps + 1;
    this->m_lastCounter = uVar1;
  }
  else {
    this->m_lastCounter = uVar1;
  }
  *(uint *)((int)pVoid + 4) = uVar1;
  *(uint *)pVoid = this->m_nWraps;
  EIntr();
  return;
}

float EPs2ClockMan::GetSec(void *pVoid) {
	EPs2ClockData *pData;
	u32 counter;
	u32 nWraps;
	int nWrapCount;
	int nCounts;
	float wrapTime;
	float counterTime;
	
  uint uVar1;
  uint uVar2;
  
  DIntr();
  uVar2 = REG_RCNT3_COUNT;
  if (uVar2 < this->m_lastCounter) {
    this->m_nWraps = this->m_nWraps + 1;
    this->m_lastCounter = uVar2;
  }
  else {
    this->m_lastCounter = uVar2;
  }
  uVar1 = this->m_nWraps;
  EIntr();
                    /* WARNING: Load size is inaccurate */
  return (float)(uVar1 - *pVoid) * 4.06 + (float)(uVar2 - *(int *)((int)pVoid + 4)) * 6.195068e-05;
}

double EPs2ClockMan::GetSecDouble(void *pVoid) {
	EPs2ClockData *pData;
	u32 counter;
	u32 nWraps;
	int nCounts;
	
  uint uVar1;
  uint uVar2;
  
  DIntr();
  uVar2 = REG_RCNT3_COUNT;
  if (uVar2 < this->m_lastCounter) {
    this->m_nWraps = this->m_nWraps + 1;
    this->m_lastCounter = uVar2;
  }
  else {
    this->m_lastCounter = uVar2;
  }
  uVar1 = this->m_nWraps;
  EIntr();
                    /* WARNING: Load size is inaccurate */
  return (long)((double)(long)(int)(uVar1 - *pVoid) * 4.059999942779541 +
               (double)(long)(int)(uVar2 - *(int *)((int)pVoid + 4)) * 6.195068272063509e-05);
}

void* EPs2ClockMan::GetInstanceData() {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(8,4);
  return pvVar1;
}

void EPs2ClockMan::FreeInstanceData(void *data) {
  _memmanFree__FPv(data);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
                    /* inlined from e_clock.h */
                    /* end of inlined section */
                    /* inlined from e_clock.h */
      _ps2ClockMan.field0_0x0.__vtable = (EClockMan__vtable *)_vt_9EClockMan;
    }
    else {
      __12EPs2ClockMan(&_ps2ClockMan);
    }
  }
  return;
}

void EPs2ClockMan::~EPs2ClockMan(int __in_chrg) {
	EClockMan *this;
	void *pAddress;
	
                    /* inlined from e_clock.h */
  (this->field0_0x0).__vtable = (EClockMan__vtable *)_vt_9EClockMan;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EClockMan::~EClockMan(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EClockMan__vtable *)_vt_9EClockMan;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void global constructors keyed to _ps2ClockMan() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _ps2ClockMan() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
