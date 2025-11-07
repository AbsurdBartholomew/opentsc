// STATUS: NOT STARTED

#include "FloatConstants.h"

struct FloatConstantsImpl : FloatConstants {
	FloatConstantsData *m_pData;
	
	FloatConstantsImpl& operator=();
	FloatConstantsImpl();
	FloatConstantsImpl();
	/* vtable[1] */ virtual FloatConstantsImpl(FloatConstantsImpl*, int, void);
	/* vtable[2] */ virtual float Get(char *name, float defaultValue, bool addNew);
	/* vtable[3] */ virtual bool Has(char *name);
	/* vtable[4] */ virtual void Load(iResFile *file, SInt16 id);
	static FloatConstantItem* findItem(/* parameters unknown */);
};

__vtbl_ptr_type FloatConstantsImpl virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FloatConstantsImpl::~FloatConstantsImpl,
		/* .__delta2 = */ 4112
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FloatConstantsImpl::Get,
		/* .__delta2 = */ 3424
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FloatConstantsImpl::Has,
		/* .__delta2 = */ 3512
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FloatConstantsImpl::Load,
		/* .__delta2 = */ 3584
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type FloatConstants virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &FloatConstants::~FloatConstants,
		/* .__delta2 = */ 3272
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void FloatConstants::~FloatConstants(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (FloatConstants__vtable *)_vt_14FloatConstants;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

FloatConstants* FloatConstants::CreateInstance() {
  FloatConstants *pFVar1;
  
  pFVar1 = (FloatConstants *)__builtin_new(8);
  pFVar1->__vtable = (FloatConstants__vtable *)_vt_18FloatConstantsImpl;
  return pFVar1;
}

void FloatConstants::DestroyInstance(FloatConstants *pInstance) {
  if (pInstance != (FloatConstants *)0x0) {
    (*(code *)pInstance->__vtable->Has)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Get,3);
  }
  return;
}

float FloatConstantsImpl::Get(char *name, float defaultValue, bool addNew) {
	float result;
	FloatConstantItem *item;
	
  FloatConstantItem *pFVar1;
  char *pcVar2;
  
  if (this->m_pData != (FloatConstantsData *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pFVar1 = (this->m_pData->field0_0x0).pData;
    pcVar2 = (char *)0x0;
    if (pFVar1 != (FloatConstantItem *)0x0) {
      pcVar2 = pFVar1[-1].fName;
    }
                    /* end of inlined section */
    pFVar1 = findItem__18FloatConstantsImplPC17FloatConstantItemT1PCc
                       (pFVar1,pFVar1 + (int)pcVar2,name);
    if (pFVar1 != (FloatConstantItem *)0x0) {
      defaultValue = pFVar1->fValue;
    }
  }
  return defaultValue;
}

bool FloatConstantsImpl::Has(char *name) {
	bool result;
	
  bool bVar1;
  FloatConstantItem *pFVar2;
  char *pcVar3;
  
  bVar1 = false;
  if (this->m_pData != (FloatConstantsData *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pFVar2 = (this->m_pData->field0_0x0).pData;
    pcVar3 = (char *)0x0;
    if (pFVar2 != (FloatConstantItem *)0x0) {
      pcVar3 = pFVar2[-1].fName;
    }
                    /* end of inlined section */
    pFVar2 = findItem__18FloatConstantsImplPC17FloatConstantItemT1PCc
                       (pFVar2,pFVar2 + (int)pcVar3,name);
    bVar1 = pFVar2 != (FloatConstantItem *)0x0;
  }
  return bVar1;
}

void FloatConstantsImpl::Load(iResFile *file, SInt16 id) {
	iResFile *this;
	VECTOR<FloatConstantsData> *this;
	
  ResFile *pRVar1;
  FloatConstantsData *pFVar2;
  int iVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
                    /* end of inlined section */
  if ((file != (iResFile__6_5027 *)0x0) && (pRVar1 = file->fResData, pRVar1 != (ResFile *)0x0)) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pFVar2 = (pRVar1->FCNS).pData;
    iVar3 = 0;
    if (pFVar2 != (FloatConstantsData *)0x0) {
      iVar3 = pFVar2[-1].resID;
    }
                    /* end of inlined section */
    pFVar2 = FindRes__H1ZC18FloatConstantsData_PX01T0i_PX01
                       (pFVar2,(pRVar1->FCNS).pData + iVar3,(int)(short)id);
    this->m_pData = pFVar2;
  }
  return;
}

FloatConstantItem* FloatConstantsImpl::findItem(FloatConstantItem *begin, FloatConstantItem *end, char *name) {
	int iCmp;
	FloatConstantItem *middle;
	
  int iVar1;
  int iVar2;
  FloatConstantItem *pFVar3;
  
  while( true ) {
    pFVar3 = end;
    iVar2 = (int)pFVar3 - (int)begin;
    iVar1 = iVar2 >> 3;
    if (iVar1 < 1) {
      return (FloatConstantItem *)0x0;
    }
    if (iVar1 == 1) break;
    end = begin + (iVar1 - (iVar2 >> 0x1f) >> 1);
    iVar1 = strcmp(name,end->fName);
    if (iVar1 == 0) {
      return end;
    }
    if (0 < iVar1) {
      begin = end + 1;
      end = pFVar3;
    }
  }
  iVar1 = strcmp(begin->fName,name);
  if (iVar1 == 0) {
    return begin;
  }
  return (FloatConstantItem *)0x0;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}

FloatConstantsData* FloatConstantsData * FindRes<FloatConstantsData>(FloatConstantsData *begin, FloatConstantsData *end, int resID) {
	int iCmp;
	FloatConstantsData *middle;
	
  FloatConstantsData *pFVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    pFVar1 = end;
    iVar3 = (int)pFVar1 - (int)begin;
    iVar2 = iVar3 >> 3;
    if (iVar2 < 1) {
      return (FloatConstantsData *)0x0;
    }
    if (iVar2 == 1) break;
    end = begin + (iVar2 - (iVar3 >> 0x1f) >> 1);
    if (resID == end->resID) {
      return end;
    }
    if (0 < resID - end->resID) {
      begin = end + 1;
      end = pFVar1;
    }
  }
  pFVar1 = (FloatConstantsData *)0x0;
  if (begin->resID == resID) {
    pFVar1 = begin;
  }
  return pFVar1;
}

FloatConstants* FloatConstants::FloatConstants() {
  this->__vtable = (FloatConstants__vtable *)_vt_14FloatConstants;
  return this;
}

FloatConstantsImpl* FloatConstantsImpl::FloatConstantsImpl() {
	FloatConstants *this;
	
  (this->field0_0x0).__vtable = (FloatConstants__vtable *)_vt_18FloatConstantsImpl;
  return this;
}

void FloatConstantsImpl::~FloatConstantsImpl(int __in_chrg) {
  (this->field0_0x0).__vtable = (FloatConstants__vtable *)_vt_18FloatConstantsImpl;
  ___14FloatConstants(&this->field0_0x0,__in_chrg);
  return;
}
