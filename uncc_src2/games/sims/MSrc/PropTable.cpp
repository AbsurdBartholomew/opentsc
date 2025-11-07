// STATUS: NOT STARTED

#include "PropTable.h"

struct ERQTable<PropRef> {
	char *pName;
	PropRef *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct PropTableImpl : PropTable {
	iResFile *m_pResFile;
	PropRefTable *m_pPropRefTable;
	
	PropTableImpl& operator=();
	PropTableImpl();
	PropTableImpl();
	/* vtable[1] */ virtual PropTableImpl(PropTableImpl*, int, void);
	/* vtable[2] */ virtual ErrType Load(iResFile *file, SInt16 resID);
	/* vtable[3] */ virtual SInt16 GetID();
	/* vtable[4] */ virtual iResFile* GetFile();
	/* vtable[5] */ virtual PropNameID GetEntry(SInt16 entryNum);
	/* vtable[7] */ virtual SInt16 CountEntries();
	/* vtable[6] */ virtual char* GetEntryName(SInt16 entryNum);
};

__vtbl_ptr_type PropTableImpl virtual table[9] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &PropTableImpl::~PropTableImpl,
		/* .__delta2 = */ -7312
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &PropTableImpl::Load,
		/* .__delta2 = */ -7264
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &PropTableImpl::GetID,
		/* .__delta2 = */ -6904
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &PropTableImpl::GetFile,
		/* .__delta2 = */ -6888
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &PropTableImpl::GetEntry,
		/* .__delta2 = */ -7144
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &PropTableImpl::GetEntryName,
		/* .__delta2 = */ -6848
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &PropTableImpl::CountEntries,
		/* .__delta2 = */ -6880
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type PropTable virtual table[9] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &PropTable::~PropTable,
		/* .__delta2 = */ -6952
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

char* castPropToString(PropNameID sName) {
	char *result;
	PropRef *pData;
	char *result;
	PropRef *pData;
	u32 index;
	ERQTable<PropRef> *pTable;
	
  ERQuickdata *this;
  void *pvVar1;
  char *pcVar2;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  uint index;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  pcVar2 = (char *)0x0;
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (sName != (PropRef *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    this = (ERQuickdata *)
           (*(code *)_5Globs_pObjectFolder->__vtable[1].CalcPerformanceCost)
                     ((int)&_5Globs_pObjectFolder->__vtable +
                      (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].GetBaseMemoryCost);
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pvVar1 = findRow__11ERQuickdataPCvPUi(this,sName,&index);
    if (pvVar1 == (void *)0x0) {
      pcVar2 = (char *)0x0;
    }
    else if (*(int *)((int)pvVar1 + 8) == 0) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = *(char **)(index * 4 + *(int *)((int)pvVar1 + 8));
    }
  }
                    /* end of inlined section */
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "?";
  }
  return pcVar2;
}

PropTable* PropTable::CreateInstance() {
  PropTableImpl *pPVar1;
  
  pPVar1 = (PropTableImpl *)__builtin_new(0xc);
  pPVar1 = __13PropTableImpl(pPVar1);
  return &pPVar1->field0_0x0;
}

void PropTable::DestroyInstance(PropTable *pInstance) {
  if (pInstance != (PropTable *)0x0) {
    (*(code *)pInstance->__vtable->GetID)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,3);
  }
  return;
}

PropTableImpl* PropTableImpl::PropTableImpl() {
	PropTable *this;
	
  this->m_pResFile = (iResFile__0_3211 *)0x0;
  (this->field0_0x0).__vtable = (PropTable__vtable *)_vt_13PropTableImpl;
  this->m_pPropRefTable = (PropRefTable *)0x0;
  return this;
}

void PropTableImpl::~PropTableImpl(int __in_chrg) {
	PropTable *this;
	void *pAddress;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/PropTable.h */
  (this->field0_0x0).__vtable = (PropTable__vtable *)_vt_9PropTable;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

ErrType PropTableImpl::Load(iResFile *file, SInt16 resID) {
	PropRefTable *pProp;
	iResFile *this;
	VECTOR<PropRefTable> *this;
	
  PropRefTable *pPVar1;
  int iVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/resfile.h */
  pPVar1 = (file->fResData->propTables).pData;
  iVar2 = 0;
  if (pPVar1 != (PropRefTable *)0x0) {
    iVar2 = *(int *)&pPVar1[-1].resID;
  }
                    /* end of inlined section */
  pPVar1 = FindRes__H1ZC12PropRefTable_PX01T0i_PX01
                     (pPVar1,(file->fResData->propTables).pData + iVar2,(int)(short)resID);
  if (pPVar1 == (PropRefTable *)0x0) {
    iVar2 = -1;
  }
  else {
    this->m_pResFile = file;
    iVar2 = 0;
    this->m_pPropRefTable = pPVar1;
  }
  return iVar2;
}

PropNameID PropTableImpl::GetEntry(SInt16 entryNum) {
	VECTOR<PropRef *> *this;
	VECTOR<PropRef *> *this;
	unsigned int n;
	VECTOR<PropRef *> *this;
	
  PropRef **ppPVar1;
  PropRef *pPVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  ppPVar1 = (this->m_pPropRefTable->field0_0x0).pData;
  if (ppPVar1 == (PropRef **)0x0) {
    pPVar2 = (PropRef *)0x0;
  }
  else {
    pPVar2 = ppPVar1[-1];
  }
                    /* end of inlined section */
  if ((int)(short)entryNum < (int)pPVar2) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    return (this->m_pPropRefTable->field0_0x0).pData[(short)entryNum];
  }
  return (PropRef *)0x0;
}

PropRefTable* PropRefTable * FindRes<PropRefTable>(PropRefTable *begin, PropRefTable *end, int resID) {
	int iCmp;
	PropRefTable *middle;
	
  PropRefTable *pPVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    pPVar1 = end;
    iVar3 = (int)pPVar1 - (int)begin;
    iVar2 = iVar3 >> 3;
    if (iVar2 < 1) {
      return (PropRefTable *)0x0;
    }
    if (iVar2 == 1) break;
    end = begin + (iVar2 - (iVar3 >> 0x1f) >> 1);
    if (resID == (short)end->resID) {
      return end;
    }
    if (0 < resID - (short)end->resID) {
      begin = end + 1;
      end = pPVar1;
    }
  }
  pPVar1 = (PropRefTable *)0x0;
  if ((long)(short)begin->resID == (long)resID) {
    pPVar1 = begin;
  }
  return pPVar1;
}

void PropTable::~PropTable(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (PropTable__vtable *)_vt_9PropTable;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

SInt16 PropTableImpl::GetID() {
  return this->m_pPropRefTable->resID;
}

iResFile* PropTableImpl::GetFile() {
  return this->m_pResFile;
}

SInt16 PropTableImpl::CountEntries() {
	VECTOR<PropRef *> *this;
	
  PropRef **ppPVar1;
  ushort uVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  ppPVar1 = (this->m_pPropRefTable->field0_0x0).pData;
  if (ppPVar1 == (PropRef **)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ushort)ppPVar1[-1];
  }
                    /* end of inlined section */
  return uVar2;
}

char* PropTableImpl::GetEntryName(SInt16 entryNum) {
  return (char *)0x0;
}
