// STATUS: NOT STARTED

#include "CatalogResource.h"

struct CatalogResourceImpl : CatalogResource {
	ELocString fName;
	ELocString fDesc;
	ELocString fShortName;
	static c16 *pDefault;
	
	CatalogResourceImpl& operator=();
	CatalogResourceImpl();
	/* vtable[1] */ virtual CatalogResourceImpl(CatalogResourceImpl*, int, void);
	CatalogResourceImpl();
	/* vtable[2] */ virtual ErrType Load(ObjSelector *pSel, SInt16 id, bool attemptAlternateLanguages);
	/* vtable[3] */ virtual ELocString GetName();
	/* vtable[4] */ virtual ELocString GetDescription();
	/* vtable[5] */ virtual ELocString GetShortName();
};

c16 *CatalogResourceImpl::pDefault = 0x3be990;

__vtbl_ptr_type CatalogResourceImpl virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CatalogResourceImpl::~CatalogResourceImpl,
		/* .__delta2 = */ -26176
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CatalogResourceImpl::Load,
		/* .__delta2 = */ -26416
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CatalogResourceImpl::GetName,
		/* .__delta2 = */ -26088
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CatalogResourceImpl::GetDescription,
		/* .__delta2 = */ -26080
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CatalogResourceImpl::GetShortName,
		/* .__delta2 = */ -26072
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type CatalogResource virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CatalogResource::~CatalogResource,
		/* .__delta2 = */ -26064
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

CatalogResource* CatalogResource::CreateInstance() {
  CatalogResource *pCVar1;
  
  pCVar1 = (CatalogResource *)__builtin_new(0x10);
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
  pCVar1->__vtable = (CatalogResource__vtable *)_vt_19CatalogResourceImpl;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  pCVar1[3].__vtable = (CatalogResource__vtable *)&_19CatalogResourceImpl_pDefault;
  pCVar1[1].__vtable = (CatalogResource__vtable *)&_19CatalogResourceImpl_pDefault;
  pCVar1[2].__vtable = (CatalogResource__vtable *)&_19CatalogResourceImpl_pDefault;
                    /* end of inlined section */
  return pCVar1;
}

void CatalogResource::DestroyInstance(CatalogResource *pInstance) {
  if (pInstance != (CatalogResource *)0x0) {
    (*(code *)pInstance->__vtable->GetName)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,3);
  }
  return;
}

ErrType CatalogResourceImpl::Load(ObjSelector *pSel, SInt16 id, bool attemptAlternateLanguages) {
	CatalogData *pCatalogData;
	VECTOR<CatalogData> *this;
	
  CatalogData *pCVar1;
  int iVar2;
  short **ppsVar3;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/ObjSelector.h */
  pCVar1 = (pSel->fResData->catalog).pData;
  ppsVar3 = (short **)0x0;
  if (pCVar1 != (CatalogData *)0x0) {
    ppsVar3 = pCVar1[-1].shortName.ptr;
  }
                    /* end of inlined section */
  pCVar1 = FindRes__H1ZC11CatalogData_PX01T0i_PX01
                     (pCVar1,(pSel->fResData->catalog).pData + (int)ppsVar3,(int)(short)id);
  if (pCVar1 == (CatalogData *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    (this->fName).ptr = (pCVar1->name).ptr;
    (this->fDesc).ptr = (pCVar1->description).ptr;
    (this->fShortName).ptr = (pCVar1->shortName).ptr;
  }
  return iVar2;
}

CatalogData* CatalogData * FindRes<CatalogData>(CatalogData *begin, CatalogData *end, int resID) {
	int iCmp;
	CatalogData *middle;
	
  CatalogData *pCVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    pCVar1 = end;
    iVar3 = (int)pCVar1 - (int)begin;
    iVar2 = iVar3 >> 4;
    if (iVar2 < 1) {
      return (CatalogData *)0x0;
    }
    if (iVar2 == 1) break;
    end = begin + (iVar2 - (iVar3 >> 0x1f) >> 1);
    if (resID == end->resID) {
      return end;
    }
    if (0 < resID - end->resID) {
      begin = end + 1;
      end = pCVar1;
    }
  }
  pCVar1 = (CatalogData *)0x0;
  if (begin->resID == resID) {
    pCVar1 = begin;
  }
  return pCVar1;
}

void CatalogResourceImpl::~CatalogResourceImpl(int __in_chrg) {
	CatalogResource *this;
	void *pAddress;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/CatalogResource.h */
  (this->field0_0x0).__vtable = (CatalogResource__vtable *)_vt_15CatalogResource;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

CatalogResourceImpl* CatalogResourceImpl::CatalogResourceImpl() {
	CatalogResource *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  (this->fShortName).ptr = &_19CatalogResourceImpl_pDefault;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (CatalogResource__vtable *)_vt_19CatalogResourceImpl;
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  (this->fName).ptr = &_19CatalogResourceImpl_pDefault;
  (this->fDesc).ptr = &_19CatalogResourceImpl_pDefault;
  return this;
}

ELocString CatalogResourceImpl::GetName() {
  return (ELocString)(this->fName).ptr;
}

ELocString CatalogResourceImpl::GetDescription() {
  return (ELocString)(this->fDesc).ptr;
}

ELocString CatalogResourceImpl::GetShortName() {
  return (ELocString)(this->fShortName).ptr;
}

void CatalogResource::~CatalogResource(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (CatalogResource__vtable *)_vt_15CatalogResource;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}
