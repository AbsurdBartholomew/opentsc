// STATUS: NOT STARTED

#include "ObjFnTable.h"

struct ObjFnTableImpl : ObjFnTable {
	ObjFnData *m_pFunction;
	ObjFnData *m_pRTFunction;
	
	ObjFnTableImpl& operator=();
	ObjFnTableImpl();
	ObjFnTableImpl();
	/* vtable[1] */ virtual ObjFnTableImpl(ObjFnTableImpl*, int, void);
	/* vtable[2] */ virtual void BuildFromOldEntries(ObjDefinition *def);
	/* vtable[3] */ virtual SInt16 GetTreeID(ObjEntryPoint ep);
	/* vtable[4] */ virtual SInt16 GetCheckTreeID(ObjEntryPoint ep);
	/* vtable[5] */ virtual ErrType Load(iResFile *file, SInt16 id);
};

__vtbl_ptr_type ObjFnTableImpl virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjFnTableImpl::~ObjFnTableImpl,
		/* .__delta2 = */ 31656
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjFnTableImpl::BuildFromOldEntries,
		/* .__delta2 = */ 31984
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjFnTableImpl::GetTreeID,
		/* .__delta2 = */ 31752
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjFnTableImpl::GetCheckTreeID,
		/* .__delta2 = */ 31808
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjFnTableImpl::Load,
		/* .__delta2 = */ 31864
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ObjFnTable virtual table[7] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ObjFnTable::~ObjFnTable,
		/* .__delta2 = */ 32552
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

ObjFnTable* ObjFnTable::CreateInstance() {
  ObjFnTableImpl *pOVar1;
  
  pOVar1 = (ObjFnTableImpl *)__builtin_new(0xc);
  pOVar1 = __14ObjFnTableImpl(pOVar1);
  return &pOVar1->field0_0x0;
}

void ObjFnTable::DestroyInstance(ObjFnTable *pInstance) {
  if (pInstance != (ObjFnTable *)0x0) {
    (*(code *)pInstance->__vtable->GetTreeID)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->BuildFromOldEntries,
               3);
  }
  return;
}

ObjFnTableImpl* ObjFnTableImpl::ObjFnTableImpl() {
	ObjFnTable *this;
	
  this->m_pFunction = (ObjFnData *)0x0;
  (this->field0_0x0).__vtable = (ObjFnTable__vtable *)_vt_14ObjFnTableImpl;
  this->m_pRTFunction = (ObjFnData *)0x0;
  return this;
}

void ObjFnTableImpl::~ObjFnTableImpl(int __in_chrg) {
	ObjFnTable *this;
	int __in_chrg;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (ObjFnTable__vtable *)_vt_14ObjFnTableImpl;
                    /* inlined from /eor/src2/common/e_standard_heap.h */
  _memmanFree__FPv(this->m_pRTFunction);
  (this->field0_0x0).__vtable = (ObjFnTable__vtable *)_vt_10ObjFnTable;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

SInt16 ObjFnTableImpl::GetTreeID(ObjEntryPoint ep) {
	Sint16 result;
	
  ObjFnData *pOVar1;
  ushort uVar2;
  
  uVar2 = 0;
  if (ep < kOEP_numEntryPoints) {
    pOVar1 = this->m_pFunction;
    if ((pOVar1 != (ObjFnData *)0x0) || (pOVar1 = this->m_pRTFunction, pOVar1 != (ObjFnData *)0x0))
    {
      uVar2 = pOVar1->fTreeID[ep];
    }
  }
  return uVar2;
}

SInt16 ObjFnTableImpl::GetCheckTreeID(ObjEntryPoint ep) {
	Sint16 result;
	
  ObjFnData *pOVar1;
  ushort uVar2;
  
  uVar2 = 0;
  if (ep < kOEP_numEntryPoints) {
    pOVar1 = this->m_pFunction;
    if ((pOVar1 != (ObjFnData *)0x0) || (pOVar1 = this->m_pRTFunction, pOVar1 != (ObjFnData *)0x0))
    {
      uVar2 = pOVar1->fCheckTreeID[ep];
    }
  }
  return uVar2;
}

ErrType ObjFnTableImpl::Load(iResFile *file, SInt16 id) {
	iResFile *this;
	VECTOR<ObjFnData> *this;
	
  ResFile *pRVar1;
  ObjFnData *pOVar2;
  int iVar3;
  
  if (file != (iResFile__0_3211 *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/ResFile.h */
    pRVar1 = file->fResData;
                    /* end of inlined section */
    if (pRVar1 == (ResFile *)0x0) {
      return -0x62;
    }
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pOVar2 = (pRVar1->OBJf).pData;
    iVar3 = 0;
    if (pOVar2 != (ObjFnData *)0x0) {
      iVar3 = *(int *)(pOVar2[-1].fCheckTreeID + 0x1c);
    }
                    /* end of inlined section */
    pOVar2 = FindRes__H1ZC9ObjFnData_PX01T0i_PX01
                       (pOVar2,(pRVar1->OBJf).pData + iVar3,(int)(short)id);
    this->m_pFunction = pOVar2;
    if (pOVar2 != (ObjFnData *)0x0) {
      return 0;
    }
  }
  return -0x62;
}

void ObjFnTableImpl::BuildFromOldEntries(ObjDefinition *def) {
  ObjFnData *pOVar1;
  
  if (this->m_pRTFunction == (ObjFnData *)0x0) {
    pOVar1 = (ObjFnData *)__builtin_new(0x7c);
    this->m_pRTFunction = pOVar1;
  }
  memset(this->m_pRTFunction,0,0x7c);
  this->m_pRTFunction->fTreeID[0] = def->initTreeID_unused;
  this->m_pRTFunction->fTreeID[1] = def->mainTreeID_unused;
  this->m_pRTFunction->fTreeID[2] = def->loadTreeID_unused;
  this->m_pRTFunction->fTreeID[3] = def->cleanupTreeID_unused;
  this->m_pRTFunction->fTreeID[4] = def->queueSkippedTreeID_unused;
  this->m_pRTFunction->fTreeID[5] = def->allowIntersectionTreeID_unused;
  this->m_pRTFunction->fTreeID[6] = def->wallAdjacencyChangedTreeID_unused;
  this->m_pRTFunction->fTreeID[7] = def->roomChangedTreeID_unused;
  this->m_pRTFunction->fTreeID[8] = def->mtAdjUpdateTreeID_unused;
  this->m_pRTFunction->fTreeID[9] = def->placementTreeID_unused;
  this->m_pRTFunction->fTreeID[10] = def->pickupTreeID_unused;
  this->m_pRTFunction->fTreeID[0xb] = def->userPlacementTreeID_unused;
  this->m_pRTFunction->fTreeID[0xc] = def->userPickupTreeID_unused;
  this->m_pRTFunction->fTreeID[0xd] = def->levelInfoRequestTreeID_unused;
  this->m_pRTFunction->fTreeID[0xe] = def->servingSurfaceTreeID_unused;
  this->m_pRTFunction->fTreeID[0xf] = def->portalTreeID_unused;
  this->m_pRTFunction->fTreeID[0x10] = def->gardeningTreeID_unused;
  this->m_pRTFunction->fTreeID[0x11] = def->washHandsTreeID_unused;
  this->m_pRTFunction->fTreeID[0x12] = def->prepTreeID_unused;
  this->m_pRTFunction->fTreeID[0x13] = def->cookTreeID_unused;
  this->m_pRTFunction->fTreeID[0x14] = def->surfaceTreeID_unused;
  this->m_pRTFunction->fTreeID[0x15] = def->disposeTreeID_unused;
  this->m_pRTFunction->fTreeID[0x16] = def->foodTreeID_unused;
  this->m_pRTFunction->fTreeID[0x17] = def->pickupFromSlotTreeID_unused;
  this->m_pRTFunction->fTreeID[0x18] = def->washDishTreeID_unused;
  this->m_pRTFunction->fTreeID[0x19] = def->eatingSurfaceTreeID_unused;
  this->m_pRTFunction->fTreeID[0x1a] = def->sitTreeID_unused;
  this->m_pRTFunction->fTreeID[0x1b] = def->standTreeID_unused;
  this->m_pRTFunction->fTreeID[0x1c] = def->cleanTreeID_unused;
  this->m_pRTFunction->fTreeID[0x1d] = def->repairTreeID_unused;
  return;
}

ObjFnData* ObjFnData * FindRes<ObjFnData>(ObjFnData *begin, ObjFnData *end, int resID) {
	int iCmp;
	ObjFnData *middle;
	
  int iVar1;
  ObjFnData *pOVar2;
  int iVar3;
  
  while( true ) {
    pOVar2 = end;
    iVar1 = ((int)pOVar2 - (int)begin) * -0x42108421;
    iVar3 = iVar1 >> 2;
    if (iVar3 < 1) {
      return (ObjFnData *)0x0;
    }
    if (iVar3 == 1) break;
    end = begin + (iVar3 - (iVar1 >> 0x1f) >> 1);
    if (resID == end->resID) {
      return end;
    }
    if (0 < resID - end->resID) {
      begin = end + 1;
      end = pOVar2;
    }
  }
  pOVar2 = (ObjFnData *)0x0;
  if (begin->resID == resID) {
    pOVar2 = begin;
  }
  return pOVar2;
}

void ObjFnTable::~ObjFnTable(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (ObjFnTable__vtable *)_vt_10ObjFnTable;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}
