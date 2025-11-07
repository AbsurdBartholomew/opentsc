// STATUS: NOT STARTED

#include "resfile.h"

iResFile *iResFile::sFileList = NULL;

__vtbl_ptr_type iResFile virtual table[38] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &iResFile::~iResFile,
		/* .__delta2 = */ -14808
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &iResFile::_dyncastimpl,
		/* .__delta2 = */ -13824
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
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &iResFile::GetByIDAndLanguage,
		/* .__delta2 = */ -13912
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &iResFile::GetLanguage,
		/* .__delta2 = */ -14104
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [32] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &iResFile::AddWithLanguage,
		/* .__delta2 = */ -14056
	},
	/* [33] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [34] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [35] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
	},
	/* [36] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &iResFile::GetString,
		/* .__delta2 = */ -14592
	},
	/* [37] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void iResFile::Link() {
  this->fNextFile = _8iResFile_sFileList;
  _8iResFile_sFileList = this;
  return;
}

void iResFile::Unlink() {
	iResFile **srch;
	
  iResFile__0_3211 *piVar1;
  iResFile__0_3211 *piVar2;
  
  piVar2 = (iResFile__0_3211 *)&_8iResFile_sFileList;
  if (_8iResFile_sFileList != (iResFile__0_3211 *)0x0) {
    do {
      piVar1 = piVar2->fNextFile;
      if (piVar1 == this) {
        piVar2->fNextFile = piVar1->fNextFile;
        return;
      }
      piVar2 = piVar1;
    } while (piVar1->fNextFile != (iResFile__0_3211 *)0x0);
  }
  return;
}

iResFile* iResFile::iResFile() {
  this->fResData = (ResFile *)0x0;
  this->__vtable = (iResFile__0_3211__vtable *)_vt_8iResFile;
  Link__8iResFile(this);
  SetError__8iResFilei(this,0);
  return this;
}

void iResFile::~iResFile(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (iResFile__0_3211__vtable *)_vt_8iResFile;
  Unlink__8iResFile(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

ErrType iResFile::GetError() {
  return this->fLastError;
}

void iResFile::SetError(ErrType err) {
  this->fLastError = err;
  return;
}

void iResFile::Release(HandleNode *res) {
	HandleNode *mem;
	
  int iVar1;
  
  (*(code *)this->__vtable[1].GetByIndex)
            ((int)&this->fNextFile + (int)*(short *)&this->__vtable[1].GetByName);
  iVar1 = GetError__8iResFile(this);
                    /* inlined from c:/eor/src2/games/sims/MSrc/MHandle.h */
  if ((iVar1 == 0) && (res != (HandleNode *)0x0)) {
    if (*(int *)&res->owned != 0) {
      free(res->ptr);
    }
    free(res);
                    /* end of inlined section */
  }
  return;
}

void iResFile::GetString(StringBuffer &str, SInt16 resID, SInt16 index) {
	AUTOPTR<StringSet> tempStrs;
	
  short sVar1;
  StringSet *pInstance;
  char *str_00;
  AUTOPTR_StringSet_ tempStrs;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9StringSetP9StringSet((StringSet *)0x0);
  pInstance = CreateInstance__9StringSet();
                    /* end of inlined section */
  (*(code *)pInstance->__vtable[1].InsertString)
            ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable[1].SetString,this,resID
             ,0);
  erase__12StringBuffer(str);
  if (0 < (short)index) {
                    /* end of inlined section */
    sVar1 = (*(code *)pInstance->__vtable->GetNativeString)
                      ((int)&pInstance->__vtable + (int)*(short *)&pInstance->__vtable->GetLocString
                       ,0xffffffffffffffff);
    if ((short)index <= sVar1) {
                    /* end of inlined section */
      str_00 = (char *)(*(code *)pInstance->__vtable->RemoveString)
                                 ((int)&pInstance->__vtable +
                                  (int)*(short *)&pInstance->__vtable->InsertString,index,
                                  0xffffffffffffffff);
      append__12StringBufferPCci(str,str_00,-1);
    }
  }
                    /* inlined from c:/eor/src2/games/sims/MSrc/TAutoPtr.h */
  DestroyInstance__9StringSetP9StringSet(pInstance);
  return;
}

ErrType iResFile::Open(StringBuffer &path, OpenFlags openFlags) {
	ErrType err;
	
  long lVar1;
  
                    /* end of inlined section */
  if (((openFlags & 2) == 0) ||
     ((lVar1 = (*(code *)this->__vtable->Update)
                         ((int)&this->fNextFile + (int)*(short *)&this->__vtable->Close),
      lVar1 == -0x28 &&
      (lVar1 = (*(code *)this->__vtable->Reopen)
                         ((int)&this->fNextFile + (int)*(short *)&this->__vtable->CloseForReopen,
                          path), lVar1 == 0)))) {
    lVar1 = (*(code *)this->__vtable->GetFileName)
                      ((int)&this->fNextFile + (int)*(short *)&this->__vtable->Writable,path);
    if ((lVar1 != 0) &&
       (((openFlags & 1) != 0 &&
        (lVar1 = (*(code *)this->__vtable->Reopen)
                           ((int)&this->fNextFile + (int)*(short *)&this->__vtable->CloseForReopen,
                            path), lVar1 == 0)))) {
      lVar1 = (*(code *)this->__vtable->GetFileName)
                        ((int)&this->fNextFile + (int)*(short *)&this->__vtable->Writable,path);
    }
  }
  return (int)lVar1;
}

char iResFile::GetLanguage(HandleNode *res) {
	SInt16 id;
	
  undefined8 unaff_retaddr;
  ushort id;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  (*(code *)this->__vtable[1].Close)
            ((int)&this->fNextFile + (int)*(short *)&this->__vtable[1].Reopen,res,&id);
  return '\0';
}

void iResFile::AddWithLanguage(HandleNode *theHandle, SInt32 rType, SInt16 rID, StringBuffer &rName, char langCode, bool littleEndian) {
	ResourceName empty;
	
  StackString_64_ empty;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&empty.field0_0x0,(char *)((uint)&empty | 8),0x40);
                    /* end of inlined section */
  (*(code *)this->__vtable[1].FindUniqueID)
            ((int)&this->fNextFile + (int)*(short *)&this->__vtable[1].FindUniqueName,theHandle,
             rType,rID,&empty,littleEndian);
  return;
}

HandleNode* iResFile::GetByIDAndLanguage(SInt32 type, SInt16 id, char langCode, SwizzleProc Swizzler) {
  HandleNode *pHVar1;
  
  if (langCode == '\0') {
    pHVar1 = (HandleNode *)
             (*(code *)this->__vtable->Write)
                       ((int)&this->fNextFile + (int)*(short *)&this->__vtable->AddWithLanguage,type
                        ,id,Swizzler);
  }
  else {
    SetError__8iResFilei(this,-0x5b);
    pHVar1 = (HandleNode *)0x0;
  }
  return pHVar1;
}

void* iResFile::_dyncastimpl(SCID id) {
  iResFile__0_3211 *piVar1;
  
  piVar1 = (iResFile__0_3211 *)0x0;
  if (id == iResFileID) {
    piVar1 = this;
  }
  return piVar1;
}

ResFile* iResFile::GetResFileData() {
  return this->fResData;
}

void iResFile::SetResFileData(ResFile *pData) {
  this->fResData = pData;
  return;
}
