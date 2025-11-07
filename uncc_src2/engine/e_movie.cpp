// STATUS: NOT STARTED

#include "e_movie.h"

__vtbl_ptr_type EMovie virtual table[9] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMovie::Load,
		/* .__delta2 = */ -28232
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMovie::Start,
		/* .__delta2 = */ -28224
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMovie::Stop,
		/* .__delta2 = */ -28208
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMovie::Reset,
		/* .__delta2 = */ -28200
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMovie::IsFinished,
		/* .__delta2 = */ -28192
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMovie::Update,
		/* .__delta2 = */ -28392
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EMovie::~EMovie,
		/* .__delta2 = */ -28184
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void EMovie::Update() {
	ERC *pRC;
	
  EGlobalManagerClient__vtable *pEVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = (*(code *)this->__vtable[1].Stop)
                    ((int)&this->m_MovieX + (int)*(short *)&this->__vtable[1].Start);
  if (lVar3 == 0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    uVar4 = (*(code *)pEVar1[6].EGlobalManagerClient)
                      ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 6),0);
    iVar2 = *(int *)((int)uVar4 + 0x2c);
    (**(code **)(iVar2 + 0x1fc))((int)uVar4 + (int)*(short *)(iVar2 + 0x1f8),this);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[6].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[6].ManagedStartup,uVar4);
  }
  return;
}

bool EMovie::Load(EFile *pFile, u32 start, u32 length) {
  return false;
}

void EMovie::Start(int x, int y) {
  this->m_MovieY = y;
  this->m_MovieX = x;
  return;
}

void EMovie::Stop() {
  return;
}

void EMovie::Reset() {
  return;
}

bool EMovie::IsFinished() {
  return true;
}

void EMovie::~EMovie(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EMovie__vtable *)_vt_6EMovie;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

EMovie* EMovie::EMovie() {
  this->__vtable = (EMovie__vtable *)_vt_6EMovie;
  return this;
}
