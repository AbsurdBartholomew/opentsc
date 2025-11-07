// STATUS: NOT STARTED

#include "e_syncobject.h"

__vtbl_ptr_type ESyncObject virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESyncObject::~ESyncObject,
		/* .__delta2 = */ -30392
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

ESyncObject* ESyncObject::ESyncObject() {
  this->__vtable = (ESyncObject__vtable *)_vt_11ESyncObject;
  return this;
}

void ESyncObject::~ESyncObject(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (ESyncObject__vtable *)_vt_11ESyncObject;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

bool ESyncObject::Release(u32 nCount, u32 *pPrevCount) {
  short sVar1;
  undefined uVar2;
  
  sVar1 = *(short *)&this->__vtable[1].ESyncObject;
  uVar2 = (*(code *)this->__vtable[1].Acquire)((int)&this->__vtable + (int)sVar1,sVar1,pPrevCount);
  return (bool)uVar2;
}
