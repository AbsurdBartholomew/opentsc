// STATUS: NOT STARTED

#include "e_rmovie.h"

__vtbl_ptr_type ERMovie virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::SafeDelete,
		/* .__delta2 = */ 10488
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::GetTypeInfo,
		/* .__delta2 = */ 10544
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::GetTypeName,
		/* .__delta2 = */ 10560
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::GetTypeKey,
		/* .__delta2 = */ 10576
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::GetTypeVersion,
		/* .__delta2 = */ 10592
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERMovie::~ERMovie,
		/* .__delta2 = */ -32088
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Read,
		/* .__delta2 = */ 9848
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Write,
		/* .__delta2 = */ 9808
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Init,
		/* .__delta2 = */ 10728
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10736
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10048
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ERMovie* ERMovie::ERMovie(EFile *pFile, u32 start, u32 length) {
  EGlobalManagerClient__vtable *pEVar1;
  EMovie *pEVar2;
  
  __9EResource(&this->field0_0x0);
  this->m_pFile = pFile;
  this->m_Start = start;
  this->m_Length = length;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_7ERMovie;
  this->m_pMovie = (EMovie *)0x0;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  pEVar2 = (EMovie *)
           (*(code *)pEVar1[9].ManagedShutdown)
                     ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[9].ManagedStartup)
  ;
  this->m_pMovie = pEVar2;
  (*(code *)pEVar2->__vtable->Stop)
            ((int)&pEVar2->m_MovieX + (int)*(short *)&pEVar2->__vtable->Start,pFile,start,length);
  return this;
}

void ERMovie::~ERMovie(int __in_chrg) {
	void *ptr;
	
  EGlobalManagerClient__vtable *pEVar1;
  EGraphics *pEVar2;
  
  pEVar2 = _pGfx;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_7ERMovie;
  pEVar1 = (pEVar2->field0_0x0).__vtable;
  (*(code *)pEVar1[10].EGlobalManagerClient)
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 10),this->m_pMovie);
  this->m_pMovie = (EMovie *)0x0;
  ___9EResource(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/e_rmovie.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ERMovie::Start(int x, int y) {
  EMovie__vtable *pEVar1;
  
  pEVar1 = this->m_pMovie->__vtable;
  (*(code *)pEVar1->IsFinished)((int)&this->m_pMovie->m_MovieX + (int)*(short *)&pEVar1->Reset,x,y);
  return;
}

void ERMovie::Stop() {
  EMovie__vtable *pEVar1;
  
  pEVar1 = this->m_pMovie->__vtable;
  (*(code *)pEVar1->EMovie)((int)&this->m_pMovie->m_MovieX + (int)*(short *)&pEVar1->Update);
  return;
}

void ERMovie::Reset() {
  EMovie__vtable *pEVar1;
  
  pEVar1 = this->m_pMovie->__vtable;
  (*(code *)pEVar1[1].Load)((int)&this->m_pMovie->m_MovieX + (int)*(short *)(pEVar1 + 1));
  return;
}

void ERMovie::Update() {
  EMovie__vtable *pEVar1;
  
  pEVar1 = this->m_pMovie->__vtable;
  (*(code *)pEVar1[1].IsFinished)((int)&this->m_pMovie->m_MovieX + (int)*(short *)&pEVar1[1].Reset);
  return;
}

bool ERMovie::IsFinished() {
  EMovie__vtable *pEVar1;
  undefined uVar2;
  
  pEVar1 = this->m_pMovie->__vtable;
  uVar2 = (*(code *)pEVar1[1].Stop)
                    ((int)&this->m_pMovie->m_MovieX + (int)*(short *)&pEVar1[1].Start);
  return (bool)uVar2;
}

void* ERMovie::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,4);
  return pvVar1;
}

void ERMovie::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}
