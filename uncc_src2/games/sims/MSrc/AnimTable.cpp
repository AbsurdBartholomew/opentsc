// STATUS: NOT STARTED

#include "AnimTable.h"

struct ERQTable<AnimRef> {
	char *pName;
	AnimRef *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct AnimTableImpl : AnimTable {
	iResFile *m_pResFile;
	AnimRefTable *m_pAnimRefTable;
	
	AnimTableImpl& operator=();
	AnimTableImpl();
	AnimTableImpl();
	/* vtable[1] */ virtual AnimTableImpl(AnimTableImpl*, int, void);
	/* vtable[2] */ virtual ErrType Load(iResFile *file, SInt16 resID);
	/* vtable[3] */ virtual SInt16 GetID();
	/* vtable[4] */ virtual iResFile* GetFile();
	/* vtable[5] */ virtual SkillNameID GetEntry(SInt16 entryNum);
	/* vtable[7] */ virtual SInt16 CountEntries();
	/* vtable[6] */ virtual char* GetEntryName(SInt16 entryNum);
};

__vtbl_ptr_type AnimTableImpl virtual table[9] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &AnimTableImpl::~AnimTableImpl,
		/* .__delta2 = */ 21504
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &AnimTableImpl::Load,
		/* .__delta2 = */ 21552
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &AnimTableImpl::GetID,
		/* .__delta2 = */ 21912
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &AnimTableImpl::GetFile,
		/* .__delta2 = */ 21928
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &AnimTableImpl::GetEntry,
		/* .__delta2 = */ 21672
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &AnimTableImpl::GetEntryName,
		/* .__delta2 = */ 21968
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &AnimTableImpl::CountEntries,
		/* .__delta2 = */ 21936
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type AnimTable virtual table[9] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &AnimTable::~AnimTable,
		/* .__delta2 = */ 21864
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

char* castSkillToString(SkillNameID sName) {
	char *result;
	AnimRef *pData;
	char *result;
	AnimRef *pData;
	u32 index;
	ERQTable<AnimRef> *pTable;
	
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
  if (sName != (AnimRef *)0x0) {
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

AnimTable* AnimTable::CreateInstance() {
  AnimTableImpl *pAVar1;
  
  pAVar1 = (AnimTableImpl *)__builtin_new(0xc);
  pAVar1 = __13AnimTableImpl(pAVar1);
  return &pAVar1->field0_0x0;
}

void AnimTable::DestroyInstance(AnimTable *pInstance) {
  if (pInstance != (AnimTable *)0x0) {
    (*(code *)pInstance->__vtable->GetID)
              ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->Load,3);
  }
  return;
}

AnimTableImpl* AnimTableImpl::AnimTableImpl() {
	AnimTable *this;
	
  this->m_pResFile = (iResFile__0_3211 *)0x0;
  (this->field0_0x0).__vtable = (AnimTable__vtable *)_vt_13AnimTableImpl;
  this->m_pAnimRefTable = (AnimRefTable *)0x0;
  return this;
}

void AnimTableImpl::~AnimTableImpl(int __in_chrg) {
	AnimTable *this;
	void *pAddress;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/AnimTable.h */
  (this->field0_0x0).__vtable = (AnimTable__vtable *)_vt_9AnimTable;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

ErrType AnimTableImpl::Load(iResFile *file, SInt16 resID) {
	AnimRefTable *pAnim;
	iResFile *this;
	VECTOR<AnimRefTable> *this;
	
  AnimRefTable *pAVar1;
  int iVar2;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/resfile.h */
  pAVar1 = (file->fResData->animTables).pData;
  iVar2 = 0;
  if (pAVar1 != (AnimRefTable *)0x0) {
    iVar2 = *(int *)&pAVar1[-1].resID;
  }
                    /* end of inlined section */
  pAVar1 = FindRes__H1ZC12AnimRefTable_PX01T0i_PX01
                     (pAVar1,(file->fResData->animTables).pData + iVar2,(int)(short)resID);
  if (pAVar1 == (AnimRefTable *)0x0) {
    iVar2 = -1;
  }
  else {
    this->m_pResFile = file;
    iVar2 = 0;
    this->m_pAnimRefTable = pAVar1;
  }
  return iVar2;
}

SkillNameID AnimTableImpl::GetEntry(SInt16 entryNum) {
	VECTOR<AnimRef *> *this;
	VECTOR<AnimRef *> *this;
	unsigned int n;
	VECTOR<AnimRef *> *this;
	
  AnimRef **ppAVar1;
  AnimRef *pAVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  ppAVar1 = (this->m_pAnimRefTable->field0_0x0).pData;
  if (ppAVar1 == (AnimRef **)0x0) {
    pAVar2 = (AnimRef *)0x0;
  }
  else {
    pAVar2 = ppAVar1[-1];
  }
                    /* end of inlined section */
  if ((int)(short)entryNum < (int)pAVar2) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    return (this->m_pAnimRefTable->field0_0x0).pData[(short)entryNum];
  }
  return (AnimRef *)0x0;
}

AnimRefTable* AnimRefTable * FindRes<AnimRefTable>(AnimRefTable *begin, AnimRefTable *end, int resID) {
	int iCmp;
	AnimRefTable *middle;
	
  AnimRefTable *pAVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    pAVar1 = end;
    iVar3 = (int)pAVar1 - (int)begin;
    iVar2 = iVar3 >> 3;
    if (iVar2 < 1) {
      return (AnimRefTable *)0x0;
    }
    if (iVar2 == 1) break;
    end = begin + (iVar2 - (iVar3 >> 0x1f) >> 1);
    if (resID == (short)end->resID) {
      return end;
    }
    if (0 < resID - (short)end->resID) {
      begin = end + 1;
      end = pAVar1;
    }
  }
  pAVar1 = (AnimRefTable *)0x0;
  if ((long)(short)begin->resID == (long)resID) {
    pAVar1 = begin;
  }
  return pAVar1;
}

void AnimTable::~AnimTable(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (AnimTable__vtable *)_vt_9AnimTable;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

SInt16 AnimTableImpl::GetID() {
  return this->m_pAnimRefTable->resID;
}

iResFile* AnimTableImpl::GetFile() {
  return this->m_pResFile;
}

SInt16 AnimTableImpl::CountEntries() {
	VECTOR<AnimRef *> *this;
	
  AnimRef **ppAVar1;
  ushort uVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
  ppAVar1 = (this->m_pAnimRefTable->field0_0x0).pData;
  if (ppAVar1 == (AnimRef **)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ushort)ppAVar1[-1];
  }
                    /* end of inlined section */
  return uVar2;
}

char* AnimTableImpl::GetEntryName(SInt16 entryNum) {
  return (char *)0x0;
}
