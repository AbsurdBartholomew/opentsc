// STATUS: NOT STARTED

#include "e_semaphore.h"

int _semaphoreBreakId = -1;

__vtbl_ptr_type ESemaphore virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESemaphore::~ESemaphore,
		/* .__delta2 = */ -2240
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESemaphore::Acquire,
		/* .__delta2 = */ -1912
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESemaphore::Release,
		/* .__delta2 = */ -1744
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESyncObject::Release,
		/* .__delta2 = */ -30344
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ESemaphore* ESemaphore::ESemaphore() {
  __11ESyncObject(&this->field0_0x0);
  this->m_id = -1;
  (this->field0_0x0).__vtable = (ESyncObject__vtable *)_vt_10ESemaphore;
  return this;
}

ESemaphore* ESemaphore::ESemaphore(int maxCount, int initialCount) {
  __11ESyncObject(&this->field0_0x0);
  (this->field0_0x0).__vtable = (ESyncObject__vtable *)_vt_10ESemaphore;
  this->m_id = -1;
  Create__10ESemaphoreii(this,maxCount,initialCount);
  return this;
}

void ESemaphore::~ESemaphore(int __in_chrg) {
  (this->field0_0x0).__vtable = (ESyncObject__vtable *)_vt_10ESemaphore;
  if (-1 < this->m_id) {
    Destroy__10ESemaphore(this);
  }
  ___11ESyncObject(&this->field0_0x0,__in_chrg);
  return;
}

void ESemaphore::SetBreakId(int id) {
  _semaphoreBreakId = id;
  return;
}

ESemaphore* ESemaphore::GetObject(int id) {
	SemaParam param;
	
  SemaParam param;
  
  ReferSemaStatus(id,&param);
  return (ESemaphore *)param.option;
}

bool ESemaphore::IsCreated() {
  return (bool)((byte)~(byte)((uint)this->m_id >> 0x18) >> 7);
}

bool ESemaphore::Create(int maxCount, int initialCount) {
	SemaParam param;
	int id;
	
  long lVar1;
  int iVar2;
  SemaParam param;
  
  iVar2 = maxCount;
  if (initialCount != -1) {
    iVar2 = initialCount;
  }
  param.maxCount = 1;
  param.initCount = 1;
  param.option = (uint)this;
  lVar1 = CreateSema(&param);
  if (-1 < lVar1) {
    this->m_count = iVar2;
    this->m_id = (int)lVar1;
    this->m_maxCount = maxCount;
    this->m_waits = 0;
  }
  return -1 < lVar1;
}

void ESemaphore::Destroy() {
  DeleteSema(this->m_id);
  this->m_id = -1;
  return;
}

bool ESemaphore::Acquire(u32 nTimeout) {
	bool ret;
	
  bool bVar1;
  int iVar2;
  
  DIntr();
  if (nTimeout == 0xffffffff) {
    iVar2 = this->m_count;
    while (iVar2 == 0) {
      this->m_waits = this->m_waits + 1;
      EIntr();
      WaitSema(this->m_id);
      DIntr();
      iVar2 = this->m_count;
    }
  }
  bVar1 = this->m_count != 0;
  if (bVar1) {
    this->m_count = this->m_count + -1;
  }
  EIntr();
  return bVar1;
}

bool ESemaphore::Release() {
  DIntr();
  if (this->m_count < this->m_maxCount) {
    this->m_count = this->m_count + 1;
  }
  if (this->m_waits == 0) {
    EIntr();
  }
  else {
    this->m_waits = this->m_waits + -1;
    EIntr();
    SignalSema(this->m_id);
  }
  return true;
}

bool ESemaphore::iAcquire() {
	bool ret;
	
  if (this->m_count != 0) {
    this->m_count = this->m_count + -1;
    return true;
  }
  return false;
}

void ESemaphore::iRelease() {
  if (this->m_count < this->m_maxCount) {
    this->m_count = this->m_count + 1;
  }
  if (this->m_waits != 0) {
    this->m_waits = this->m_waits + -1;
    iSignalSema(this->m_id);
  }
  return;
}

int ESemaphore::GetCurrentCount() {
  return this->m_count;
}

int ESemaphore::GetMaxCount() {
  return this->m_maxCount;
}

ESemaphore& ESemaphore::operator++() {
  ESyncObject__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,0xffffffffffffffff)
  ;
  return this;
}

ESemaphore& ESemaphore::operator++() {
  ESyncObject__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,0xffffffffffffffff)
  ;
  return this;
}

ESemaphore& ESemaphore::operator--() {
  ESyncObject__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return this;
}

ESemaphore& ESemaphore::operator--() {
  ESyncObject__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return this;
}
