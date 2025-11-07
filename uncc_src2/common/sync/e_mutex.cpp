// STATUS: NOT STARTED

#include "e_mutex.h"

__vtbl_ptr_type EMutex virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMutex::~EMutex,
		/* .__delta2 = */ 12312
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMutex::Acquire,
		/* .__delta2 = */ 12392
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMutex::Release,
		/* .__delta2 = */ 12424
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

EMutex* EMutex::EMutex() {
                    /* end of inlined section */
  __11ESyncObject(&this->field0_0x0);
  (this->field0_0x0).__vtable = (ESyncObject__vtable *)_vt_6EMutex;
  __10ESemaphore(&this->m_sema);
  Create__10ESemaphoreii(&this->m_sema,1,-1);
  return this;
}

void EMutex::~EMutex(int __in_chrg) {
  (this->field0_0x0).__vtable = (ESyncObject__vtable *)_vt_6EMutex;
  ___10ESemaphore(&this->m_sema,2);
  ___11ESyncObject(&this->field0_0x0,__in_chrg);
  return;
}

bool EMutex::Acquire(u32 nTimeout) {
  bool bVar1;
  
  bVar1 = Acquire__10ESemaphoreUi(&this->m_sema,nTimeout);
  return bVar1;
}

bool EMutex::Release() {
  bool bVar1;
  
  bVar1 = Release__10ESemaphore(&this->m_sema);
  return bVar1;
}

bool EMutex::iAcquire() {
  bool bVar1;
  
  bVar1 = iAcquire__10ESemaphore(&this->m_sema);
  return bVar1;
}

void EMutex::iRelease() {
  iRelease__10ESemaphore(&this->m_sema);
  return;
}

EMutex& EMutex::operator++() {
  ESyncObject__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,0xffffffffffffffff)
  ;
  return this;
}

EMutex& EMutex::operator++() {
  ESyncObject__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (**(code **)(pEVar1 + 1))
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1->Release,0xffffffffffffffff)
  ;
  return this;
}

EMutex& EMutex::operator--() {
  ESyncObject__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return this;
}

EMutex& EMutex::operator--() {
  ESyncObject__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].Acquire)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].ESyncObject);
  return this;
}
