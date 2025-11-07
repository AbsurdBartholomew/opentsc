// STATUS: NOT STARTED

#include "QuickResFile.h"

__vtbl_ptr_type QuickResFile virtual table[38] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::~QuickResFile,
		/* .__delta2 = */ -8576
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::_dyncastimpl,
		/* .__delta2 = */ -7608
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::Create,
		/* .__delta2 = */ -8472
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::Delete,
		/* .__delta2 = */ -8464
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::Open,
		/* .__delta2 = */ -8456
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::CloseForReopen,
		/* .__delta2 = */ -8400
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::Reopen,
		/* .__delta2 = */ -8392
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::Close,
		/* .__delta2 = */ -8384
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::Update,
		/* .__delta2 = */ -8376
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::Writable,
		/* .__delta2 = */ -8368
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::GetFileName,
		/* .__delta2 = */ -8360
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::ValidFile,
		/* .__delta2 = */ -8200
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::CountTypes,
		/* .__delta2 = */ -8184
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::GetIndType,
		/* .__delta2 = */ -8176
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::Count,
		/* .__delta2 = */ -8168
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::GetByID,
		/* .__delta2 = */ -8160
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::GetByName,
		/* .__delta2 = */ -8152
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::GetByIndex,
		/* .__delta2 = */ -8144
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::GetByIDAndLanguage,
		/* .__delta2 = */ -8136
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::GetName,
		/* .__delta2 = */ -8128
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::GetResType,
		/* .__delta2 = */ -8096
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::GetID,
		/* .__delta2 = */ -8088
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::GetIndex,
		/* .__delta2 = */ -8080
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::GetLanguage,
		/* .__delta2 = */ -8072
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::FindUniqueName,
		/* .__delta2 = */ -8064
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::FindUniqueID,
		/* .__delta2 = */ -8032
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::Detach,
		/* .__delta2 = */ -8024
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::Load,
		/* .__delta2 = */ -8016
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::IsLittleEndian,
		/* .__delta2 = */ -8008
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::SetID,
		/* .__delta2 = */ -8000
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::Add,
		/* .__delta2 = */ -7992
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::AddWithLanguage,
		/* .__delta2 = */ -7984
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::Write,
		/* .__delta2 = */ -7976
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::Remove,
		/* .__delta2 = */ -7968
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::SetInfo,
		/* .__delta2 = */ -7960
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &QuickResFile::GetString,
		/* .__delta2 = */ -7952
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

QuickResFile* QuickResFile::QuickResFile() {
  __8iResFile(&this->field0_0x0);
  (this->field0_0x0).__vtable = (iResFile__0_3211__vtable *)_vt_12QuickResFile;
  return this;
}

void QuickResFile::~QuickResFile(int __in_chrg) {
  ObjectFolder__vtable *pOVar1;
  ObjectFolder *pOVar2;
  
  pOVar2 = _5Globs_pObjectFolder;
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (iResFile__0_3211__vtable *)_vt_12QuickResFile;
  pOVar1 = pOVar2->__vtable;
  (*(code *)pOVar1[1].DeleteUserSelectors)
            ((int)&pOVar2->__vtable + (int)*(short *)&pOVar1[1].FreeUnusedData,this);
  ___8iResFile(&this->field0_0x0,__in_chrg);
  return;
}

ErrType QuickResFile::Create(StringBuffer &path) {
  return -0x5f;
}

ErrType QuickResFile::Delete(StringBuffer &path) {
  return -0x5f;
}

ErrType QuickResFile::Open(StringBuffer &path) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pObjectFolder->__vtable[1].GetPersonGlobFile)
            ((int)&_5Globs_pObjectFolder->__vtable +
             (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].GetGlobFile,this);
  return 0;
}

ErrType QuickResFile::CloseForReopen() {
  return 0;
}

ErrType QuickResFile::Reopen() {
  return 0;
}

ErrType QuickResFile::Close() {
  return 0;
}

void QuickResFile::Update() {
  return;
}

bool QuickResFile::Writable() {
  return false;
}

void QuickResFile::GetFileName(StringBuffer &name) {
	char *result;
	u32 index;
	ERQTable<ResFile> *pTable;
	
  ERQuickdata *this_00;
  void *pvVar1;
  char *str;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uint index;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  erase__12StringBuffer(name);
  if ((this->field0_0x0).fResData != (ResFile *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/Globs.h */
                    /* end of inlined section */
    this_00 = (ERQuickdata *)
              (*(code *)_5Globs_pObjectFolder->__vtable[1].CalcPerformanceCost)
                        ((int)&_5Globs_pObjectFolder->__vtable +
                         (int)*(short *)&_5Globs_pObjectFolder->__vtable[1].GetBaseMemoryCost);
                    /* inlined from /eor/src2/engine/quickdata/e_rquickdata.h */
    pvVar1 = findRow__11ERQuickdataPCvPUi(this_00,(this->field0_0x0).fResData,&index);
    str = (char *)0x0;
    if (pvVar1 != (void *)0x0) {
      if (*(int *)((int)pvVar1 + 8) != 0) {
        str = *(char **)(index * 4 + *(int *)((int)pvVar1 + 8));
      }
    }
                    /* end of inlined section */
    if (str != (char *)0x0) {
      copy__12StringBufferPCc(name,str);
    }
  }
  return;
}

bool QuickResFile::ValidFile() {
  return (this->field0_0x0).fResData != (ResFile *)0x0;
}

SInt16 QuickResFile::CountTypes() {
  return 0;
}

SInt32 QuickResFile::GetIndType(SInt16 index) {
  return 0;
}

SInt16 QuickResFile::Count(SInt32 type) {
  return 0;
}

HandleNode* QuickResFile::GetByID(SInt32 type, SInt16 id, SwizzleProc Swizzler) {
  return (HandleNode *)0x0;
}

HandleNode* QuickResFile::GetByName(SInt32 type, StringBuffer &name, SwizzleProc Swizzler) {
  return (HandleNode *)0x0;
}

HandleNode* QuickResFile::GetByIndex(SInt32 type, SInt16 index, SwizzleProc Swizzler) {
  return (HandleNode *)0x0;
}

HandleNode* QuickResFile::GetByIDAndLanguage(SInt32 type, SInt16 id, char langCode, SwizzleProc Swizzler) {
  return (HandleNode *)0x0;
}

void QuickResFile::GetName(HandleNode *res, StringBuffer &name) {
  erase__12StringBuffer(name);
  return;
}

SInt32 QuickResFile::GetResType(HandleNode *res) {
  return 0;
}

void QuickResFile::GetID(HandleNode *res, SInt16 *id) {
  *id = 0;
  return;
}

void QuickResFile::GetIndex(HandleNode *res, SInt16 *index) {
  *index = 0;
  return;
}

char QuickResFile::GetLanguage(HandleNode *res) {
  return '\0';
}

void QuickResFile::FindUniqueName(SInt32 resType, StringBuffer &name) {
  erase__12StringBuffer(name);
  return;
}

SInt16 QuickResFile::FindUniqueID(SInt32 rType) {
  return 0;
}

void QuickResFile::Detach(HandleNode *res) {
  return;
}

void QuickResFile::Load(HandleNode *res) {
  return;
}

bool QuickResFile::IsLittleEndian(HandleNode *res) {
  return true;
}

void QuickResFile::SetID(HandleNode *res, SInt16 id) {
  return;
}

void QuickResFile::Add(HandleNode *theHandle, SInt32 rType, SInt16 rID, StringBuffer &rName, bool littleEndian) {
  return;
}

void QuickResFile::AddWithLanguage(HandleNode *theHandle, SInt32 rType, SInt16 rID, StringBuffer &rName, char langCode, bool littleEndian) {
  return;
}

void QuickResFile::Write(HandleNode *res) {
  return;
}

void QuickResFile::Remove(HandleNode *res) {
  return;
}

void QuickResFile::SetInfo(HandleNode *res, SInt16 id, StringBuffer &name, char language) {
  return;
}

void QuickResFile::GetString(StringBuffer &str, SInt16 resID, SInt16 index) {
	AStringSet *pStringSet;
	VECTOR<AStringSet> *this;
	VECTOR<const char *> *this;
	char *ptr;
	VECTOR<const char *> *this;
	unsigned int n;
	VECTOR<const char *> *this;
	
  ResFile *pRVar1;
  char **ppcVar2;
  AStringSet *pAVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)(short)index;
  erase__12StringBuffer(str);
  pRVar1 = (this->field0_0x0).fResData;
  if (pRVar1 != (ResFile *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
    pAVar3 = (pRVar1->stringSet).pData;
    iVar5 = 0;
    if (pAVar3 != (AStringSet *)0x0) {
      iVar5 = *(int *)&pAVar3[-1].resID;
    }
                    /* end of inlined section */
    pAVar3 = FindRes__H1ZC10AStringSet_PX01T0i_PX01
                       (pAVar3,(pRVar1->stringSet).pData + iVar5,(int)(short)resID);
    if ((pAVar3 != (AStringSet *)0x0) && (0 < iVar6)) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
      ppcVar2 = (pAVar3->field0_0x0).pData;
      pcVar4 = (char *)0x0;
      if (ppcVar2 != (char **)0x0) {
        pcVar4 = ppcVar2[-1];
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
      if ((iVar6 <= (int)pcVar4) && (ppcVar2[iVar6 + -1] != (char *)0x0)) {
        append__12StringBufferPCci(str,ppcVar2[iVar6 + -1],-1);
      }
    }
  }
  return;
}

AStringSet* AStringSet * FindRes<AStringSet>(AStringSet *begin, AStringSet *end, int resID) {
	int iCmp;
	AStringSet *middle;
	
  int iVar1;
  AStringSet *pAVar2;
  int iVar3;
  
  while( true ) {
    pAVar2 = end;
    iVar1 = ((int)pAVar2 - (int)begin) * -0x55555555;
    iVar3 = iVar1 >> 2;
    if (iVar3 < 1) {
      return (AStringSet *)0x0;
    }
    if (iVar3 == 1) break;
    end = begin + (iVar3 - (iVar1 >> 0x1f) >> 1);
    if (resID == (short)end->resID) {
      return end;
    }
    if (0 < resID - (short)end->resID) {
      begin = end + 1;
      end = pAVar2;
    }
  }
  pAVar2 = (AStringSet *)0x0;
  if ((long)(short)begin->resID == (long)resID) {
    pAVar2 = begin;
  }
  return pAVar2;
}

void* QuickResFile::_dyncastimpl(SCID id) {
	iResFile *this;
	SCID id;
	
  QuickResFile__182_935 *pQVar1;
  
  if (id == QuickResFileID) {
    return this;
  }
                    /* end of inlined section */
  pQVar1 = (QuickResFile__182_935 *)0x0;
  if (id == iResFileID) {
    pQVar1 = this;
  }
  return pQVar1;
}
