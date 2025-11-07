// STATUS: NOT STARTED

#include "e_rquickdata.h"

struct ERQTable<void> {
	char *pName;
	void *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct QD_IMAGE {
	char *pName;
	u32 uNumTables;
	ERQTable<void> table[1];
};

struct ERQTable<char> {
	char *pName;
	char *pData;
	char **ppRowNames;
	u32 uNumRows;
	u32 uRowSize;
};

struct EXPORT_DIRECTORY {
	u32 uDirSize;
	u32 uOffsImage;
	u32 uImageSize;
	u32 uOffsFixup;
	u32 uFixupSize;
	u32 uDefLoadAddr;
};

struct U32Reader {
	unsigned int m_uBuffer[16];
	u32 m_uBufferIndex;
	u32 m_uBufferEntries;
	u32 m_uFileEntries;
	EFile *m_pFile;
	bool m_bEOFReached;
	
	U32Reader& operator=();
	U32Reader();
	U32Reader();
	void Init();
	u32 GetNext();
};

__vtbl_ptr_type ERQuickdata virtual table[13] = {
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
		/* .__pfn = */ &ERQuickdata::~ERQuickdata,
		/* .__delta2 = */ -27672
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
		/* .__pfn = */ &ERQuickdata::Reload,
		/* .__delta2 = */ -27528
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ERQuickdata* ERQuickdata::ERQuickdata() {
  __9EResource(&this->field0_0x0);
  this->m_pImage = (QD_IMAGE *)0x0;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_11ERQuickdata;
  this->m_uImageSize = 0;
  return this;
}

void ERQuickdata::~ERQuickdata(int __in_chrg) {
	void *ptr;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_11ERQuickdata;
  reset__11ERQuickdata(this);
  ___9EResource(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/quickdata/e_rquickdata.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ERQuickdata::reset() {
  _memmanFree__FPv(this->m_pImage);
  this->m_uImageSize = 0;
  this->m_pImage = (QD_IMAGE *)0x0;
  return;
}

void ERQuickdata::Reload(EFile *pFile) {
                    /* inlined from c:/eor/src2/engine/quickdata/e_quickdataman.h */
                    /* end of inlined section */
  ReloadXImage__FP5EFilePvRUii(pFile,this->m_pImage,&this->m_uImageSize,_quickdataman.m_iLanguage);
  return;
}

void ERQuickdata::Load(EFile *pFile, int iLanguage) {
  QD_IMAGE *pQVar1;
  
  reset__11ERQuickdata(this);
  pQVar1 = (QD_IMAGE *)
           ReloadXImage__FP5EFilePvRUii(pFile,this->m_pImage,&this->m_uImageSize,iLanguage);
  this->m_pImage = pQVar1;
  if (pQVar1 != (QD_IMAGE *)0x0) {
    __as__7EStringPCc(&(this->field0_0x0).m_name,pQVar1->pName);
  }
  return;
}

int ERQuickdata::getTableIndex(int iMinIndex, int iMaxIndex, char *pName) {
	int iCmp;
	int iMiddle;
	
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar1 = iMaxIndex - iMinIndex;
    if (iVar1 < 0) {
      return -1;
    }
    if (iVar1 == 0) break;
    iVar2 = iMinIndex + iVar1 / 2;
    iVar1 = strcmp(pName,this->m_pImage->table[iVar2].pName);
    if (iVar1 == 0) {
      return iVar2;
    }
    if (iVar1 < 1) {
      iMaxIndex = iVar2 + -1;
    }
    else {
      iMinIndex = iVar2 + 1;
    }
  }
  iVar1 = strcmp(pName,this->m_pImage->table[iMinIndex].pName);
  if (iVar1 != 0) {
    return -1;
  }
  return iMinIndex;
}

void* ERQuickdata::getTable(char *pName) {
	void *result;
	int i;
	
  int iVar1;
  ERQTable_void_ *pEVar2;
  
  pEVar2 = (ERQTable_void_ *)0x0;
  iVar1 = getTableIndex__11ERQuickdataiiPCc(this,0,this->m_pImage->uNumTables - 1,pName);
  if (-1 < iVar1) {
    pEVar2 = this->m_pImage->table + iVar1;
  }
  return pEVar2;
}

int ERQuickdata::getRowIndex(int iMinIndex, int iMaxIndex, char *pName, char **ppRowNames) {
	int iCmp;
	int iMiddle;
	
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar1 = iMaxIndex - iMinIndex;
    if (iVar1 < 0) {
      return -1;
    }
    if (iVar1 == 0) break;
    iVar2 = iMinIndex + iVar1 / 2;
    iVar1 = strcmp(pName,ppRowNames[iVar2]);
    if (iVar1 == 0) {
      return iVar2;
    }
    if (iVar1 < 1) {
      iMaxIndex = iVar2 + -1;
    }
    else {
      iMinIndex = iVar2 + 1;
    }
  }
  iVar1 = strcmp(pName,ppRowNames[iMinIndex]);
  if (iVar1 != 0) {
    return -1;
  }
  return iMinIndex;
}

void* ERQuickdata::getRow(void *_pTable, char *pRowName) {
	void *result;
	char **ppRowNames;
	int i;
	
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar3 = (void *)0x0;
  if ((_pTable != (void *)0x0) && (*(char ***)((int)_pTable + 8) != (char **)0x0)) {
    iVar2 = *(int *)((int)_pTable + 0x10);
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    iVar1 = getRowIndex__11ERQuickdataiiPCcPCPCc
                      (0,*(int *)((int)_pTable + 0xc) + -1,pRowName,*(char ***)((int)_pTable + 8));
    if (-1 < iVar1) {
      pvVar3 = (void *)(*(int *)((int)_pTable + 4) + iVar1 * iVar2);
    }
  }
  return pvVar3;
}

u32 ERQuickdata::getStartAddr(int iIndex) {
	u32 result;
	
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  int iVar5;
  
  pvVar4 = this->m_pImage->table[iIndex].pData;
  if ((pvVar4 == (void *)0x0) && (iVar5 = iIndex + -1, 0 < iIndex)) {
    puVar3 = &this->m_pImage->table[iIndex + -1].uNumRows;
    do {
      pvVar4 = (void *)puVar3[-2];
      if (pvVar4 != (void *)0x0) {
        uVar2 = puVar3[1];
        if (uVar2 == 0) {
          uVar2 = 1;
        }
        return (uint)(void *)(uVar2 * *puVar3 + (int)pvVar4);
      }
      puVar3 = puVar3 + -5;
      bVar1 = 0 < iVar5;
      iVar5 = iVar5 + -1;
    } while (bVar1);
  }
  return (uint)pvVar4;
}

int ERQuickdata::findTableIndex(int iMinIndex, int iMaxIndex, void *pData) {
	int iCmp;
	int iMiddle;
	u32 uStartAddr;
	
  QD_IMAGE *pQVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  
  while( true ) {
    iVar3 = iMaxIndex - iMinIndex;
    if (iVar3 < 0) {
      return -1;
    }
    if (iVar3 == 0) break;
    iVar3 = iMinIndex + iVar3 / 2;
    pvVar2 = (void *)getStartAddr__11ERQuickdatai(this,iVar3);
    if (pData < pvVar2) {
      iMaxIndex = iVar3 + -1;
    }
    else {
      uVar4 = this->m_pImage->table[iVar3].uRowSize;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      if (pData < (void *)(uVar4 * this->m_pImage->table[iVar3].uNumRows + (int)pvVar2)) {
        return iVar3;
      }
      iMinIndex = iVar3 + 1;
    }
  }
  pQVar1 = this->m_pImage;
  pvVar2 = pQVar1->table[iMinIndex].pData;
  if ((pvVar2 == (void *)0x0) || (pData < pvVar2)) {
    return -1;
  }
  uVar4 = pQVar1->table[iMinIndex].uRowSize;
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  if (pData < (void *)(uVar4 * pQVar1->table[iMinIndex].uNumRows + (int)pvVar2)) {
    return iMinIndex;
  }
  return -1;
}

void* ERQuickdata::findRow(void *pData, u32 *pIndex) {
	int i;
	void *result;
	u32 uRowSize;
	
  QD_IMAGE *pQVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ERQTable_void_ *pEVar5;
  
  iVar2 = findTableIndex__11ERQuickdataiiPCv(this,0,this->m_pImage->uNumTables - 1,pData);
  pEVar5 = (ERQTable_void_ *)0x0;
  if (-1 < iVar2) {
    pQVar1 = this->m_pImage;
    uVar3 = pQVar1->table[iVar2].uRowSize;
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    iVar4 = (int)pData - (int)pQVar1->table[iVar2].pData;
    if (uVar3 == 0) {
      trap(7);
    }
    if (iVar4 % (int)uVar3 == 0) {
      *pIndex = iVar4 / (int)uVar3;
      pEVar5 = pQVar1->table + iVar2;
    }
  }
  return pEVar5;
}

static bool applyFixups(void *pImage, u32 uDiff, EFile *pFile, u32 uBaseOffs, EXPORT_DIRECTORY &directory) {
	bool result;
	U32Reader reader;
	u32 offs;
	EFile *pFile;
	u32 size;
	U32Reader *this;
	u32 result;
	u32 numToRead;
	u32 *pPtr;
	u32 counter;
	U32Reader *this;
	u32 result;
	u32 numToRead;
	U32Reader *this;
	u32 result;
	u32 numToRead;
	
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  U32Reader reader;
  
  memset(&reader,0,0x54);
  iVar6 = uBaseOffs + directory->uOffsFixup;
  iVar2 = (*(code *)pFile->__vtable->GetAccessMode)
                    ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetIOMode,iVar6,0);
  if (iVar6 != iVar2) {
    return false;
  }
  uVar7 = 0;
  reader.m_uFileEntries = directory->uFixupSize >> 2;
  reader.m_pFile = pFile;
  if (reader.m_uBufferEntries <= reader.m_uBufferIndex) {
    uVar3 = 0x10;
    if (reader.m_uFileEntries < 0x11) {
      uVar3 = reader.m_uFileEntries;
    }
    if (uVar3 != 0) {
      uVar3 = (*(code *)pFile->__vtable->Tell)
                        ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->Seek,&reader,
                         uVar3 << 2);
      reader.m_uBufferIndex = 0;
      reader.m_uBufferEntries = uVar3 >> 2;
      reader.m_uFileEntries = reader.m_uFileEntries - (uVar3 >> 2);
    }
    if (reader.m_uBufferEntries <= reader.m_uBufferIndex) {
      reader._80_4_ = 1;
      goto joined_r0x002a9af0;
    }
  }
  uVar7 = reader.m_uBuffer[reader.m_uBufferIndex];
  reader.m_uBufferIndex = reader.m_uBufferIndex + 1;
joined_r0x002a9af0:
  do {
    if (reader._80_4_ != 0) {
      return true;
    }
    uVar3 = uVar7 & 3;
    piVar5 = (int *)((int)pImage + uVar7);
    if (uVar3 == 1) {
      uVar3 = 0;
      if (reader.m_uBufferIndex < reader.m_uBufferEntries) {
LAB_002a9bbc:
        uVar3 = reader.m_uBuffer[reader.m_uBufferIndex];
        reader.m_uBufferIndex = reader.m_uBufferIndex + 1;
      }
      else {
        uVar4 = reader.m_uFileEntries;
        if (0x10 < reader.m_uFileEntries) {
          uVar4 = 0x10;
        }
        if (uVar4 != 0) {
          uVar4 = (*(code *)(reader.m_pFile)->__vtable->Tell)
                            ((int)&(reader.m_pFile)->__vtable +
                             (int)*(short *)&(reader.m_pFile)->__vtable->Seek,&reader,uVar4 << 2);
          reader.m_uBufferIndex = 0;
          reader.m_uBufferEntries = uVar4 >> 2;
          reader.m_uFileEntries = reader.m_uFileEntries - (uVar4 >> 2);
        }
        if (reader.m_uBufferIndex < reader.m_uBufferEntries) goto LAB_002a9bbc;
        reader._80_4_ = 1;
      }
      iVar2 = (uVar7 >> 2) - 1;
      if (uVar7 >> 2 != 0) {
        piVar5 = (int *)((int)pImage + iVar2 * 4 + uVar3);
        do {
          *piVar5 = *piVar5 + uDiff;
          bVar1 = iVar2 != 0;
          piVar5 = piVar5 + -1;
          iVar2 = iVar2 + -1;
        } while (bVar1);
      }
    }
    else if (uVar3 == 0) {
      *piVar5 = *piVar5 + uDiff;
    }
    else if (uVar3 == 2) {
      piVar5 = (int *)((uint)piVar5 & 0xfffffffc);
      piVar5[1] = piVar5[1] + uDiff;
      *piVar5 = *piVar5 + uDiff;
    }
    else if (uVar3 == 3) {
      piVar5 = (int *)((uint)piVar5 & 0xfffffffc);
      piVar5[2] = piVar5[2] + uDiff;
      piVar5[1] = piVar5[1] + uDiff;
      *piVar5 = *piVar5 + uDiff;
    }
    uVar7 = 0;
    if (reader.m_uBufferIndex < reader.m_uBufferEntries) {
LAB_002a9cd0:
      uVar7 = reader.m_uBuffer[reader.m_uBufferIndex];
      reader.m_uBufferIndex = reader.m_uBufferIndex + 1;
      goto joined_r0x002a9af0;
    }
    uVar3 = reader.m_uFileEntries;
    if (0x10 < reader.m_uFileEntries) {
      uVar3 = 0x10;
    }
    if (uVar3 != 0) {
      uVar3 = (*(code *)(reader.m_pFile)->__vtable->Tell)
                        ((int)&(reader.m_pFile)->__vtable +
                         (int)*(short *)&(reader.m_pFile)->__vtable->Seek,&reader,uVar3 << 2);
      reader.m_uBufferIndex = 0;
      reader.m_uBufferEntries = uVar3 >> 2;
      reader.m_uFileEntries = reader.m_uFileEntries - (uVar3 >> 2);
    }
    if (reader.m_uBufferIndex < reader.m_uBufferEntries) goto LAB_002a9cd0;
    reader._80_4_ = 1;
  } while( true );
}

void* LoadXImage(char *pszName, int iExtraImage) {
	EFile *pFile;
	void *pRet;
	
  bool bVar1;
  void *pvVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  EFile *pFile;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pFile = (EFile *)0x0;
  pvVar2 = (void *)0x0;
  bVar1 = Create__11EFileSystemRP5EFilePCcT2Q25EFile10DeviceTypeQ25EFile10AccessMode
                    (&_eorFileSys.field0_0x0,&pFile,pszName,"rb",DT_DEFAULT,AM_RANDOM_ACCESS);
  if (bVar1) {
    pvVar2 = LoadXImage__FP5EFilei(pFile,iExtraImage);
    Destroy__11EFileSystemRP5EFile(&_eorFileSys.field0_0x0,&pFile);
  }
  return pvVar2;
}

void* LoadXImage(EFile *pFile, int iExtraImage) {
	u32 uAllocSize;
	
  void *pvVar1;
  undefined8 unaff_retaddr;
  uint uAllocSize;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  uAllocSize = 0;
  pvVar1 = ReloadXImage__FP5EFilePvRUii(pFile,(void *)0x0,&uAllocSize,iExtraImage);
  return pvVar1;
}

void* ReloadXImage(EFile *pFile, void *pOrig, u32 &uOrigSize, int iExtraImage) {
	void *result;
	EXPORT_DIRECTORY dir;
	EXPORT_DIRECTORY edir;
	u32 uAllocSize;
	u32 uBaseOffs;
	u32 uExImageSize;
	int i;
	EXPORT_DIRECTORY xdir;
	
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  bool bVar4;
  uint uBaseOffs;
  int iVar5;
  void *pImage;
  uint uVar6;
  uint uVar7;
  long lVar8;
  EFile__vtable *pEVar9;
  int iVar10;
  void *pImage_00;
  uint uVar11;
  EXPORT_DIRECTORY dir;
  EXPORT_DIRECTORY edir;
  EXPORT_DIRECTORY xdir;
  void *local_b0;
  uint *local_ac;
  
  uVar11 = 0;
  uBaseOffs = (*(code *)pFile->__vtable->GetDrive)
                        ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetDeviceType);
  lVar8 = (*(code *)pFile->__vtable->Tell)
                    ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->Seek,&dir,0x18);
  uVar7 = dir.uImageSize;
  pImage = (void *)0x0;
  if ((lVar8 == 0x18) && (pImage = (void *)0x0, dir.uDirSize == 0x18)) {
    edir._0_8_ = (ulong)edir.uDirSize;
    edir._8_8_ = (ulong)edir.uOffsFixup << 0x20;
    iVar5 = (int)(dir.uOffsImage - 0x18) / 0x18;
    if ((iVar5 <= iExtraImage) && (iExtraImage = -1, iVar5 != 0)) {
      iExtraImage = 0;
    }
    local_b0 = pOrig;
    local_ac = uOrigSize;
    if (iExtraImage < 0) {
      edir._0_8_ = (ulong)edir.uDirSize;
      edir._8_8_ = (ulong)edir.uOffsFixup << 0x20;
LAB_002a9f54:
      iVar5 = (*(code *)pFile->__vtable->GetAccessMode)
                        ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetIOMode,
                         uBaseOffs + dir.uOffsImage,0);
      pImage = (void *)0x0;
      if (uBaseOffs + dir.uOffsImage == iVar5) {
        if ((local_b0 == (void *)0x0) || (*local_ac == 0)) {
          pImage = _memmanAlloc__FUiUi(uVar7,4);
        }
        else {
          pImage = local_b0;
          if (uVar7 != *local_ac) {
            return (void *)0x0;
          }
        }
        if (pImage != (void *)0x0) {
          *local_ac = uVar7;
          uVar6 = (*(code *)pFile->__vtable->Tell)
                            ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->Seek,pImage,
                             dir.uImageSize);
          if ((dir.uImageSize == uVar6) &&
             (((int)pImage - dir.uDefLoadAddr == 0 ||
              (bVar4 = applyFixups__FPvUiP5EFileUiRC16EXPORT_DIRECTORY
                                 (pImage,(int)pImage - dir.uDefLoadAddr,pFile,uBaseOffs,&dir), bVar4
              )))) {
            if (iExtraImage < 0) {
              return pImage;
            }
            iVar5 = (*(code *)pFile->__vtable->GetAccessMode)
                              ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetIOMode,
                               uBaseOffs + edir.uOffsImage,0);
            if (uBaseOffs + edir.uOffsImage == iVar5) {
              pImage_00 = (void *)((int)pImage + (uVar7 - uVar11));
              uVar7 = (*(code *)pFile->__vtable->Tell)
                                ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->Seek,
                                 pImage_00,edir.uImageSize);
              if (edir.uImageSize == uVar7) {
                if ((int)pImage - dir.uDefLoadAddr == 0) {
                  return pImage;
                }
                bVar4 = applyFixups__FPvUiP5EFileUiRC16EXPORT_DIRECTORY
                                  (pImage_00,(int)pImage - dir.uDefLoadAddr,pFile,uBaseOffs,&edir);
                if (bVar4) {
                  return pImage;
                }
              }
            }
          }
          _memmanFree__FPv(pImage);
          pImage = (void *)0x0;
        }
      }
    }
    else {
      iVar10 = 0;
      pEVar9 = pFile->__vtable;
      while ((lVar8 = (*(code *)pEVar9->Tell)
                                ((int)&pFile->__vtable + (int)*(short *)&pEVar9->Seek,&xdir,0x18),
             uVar3 = xdir._16_8_, pImage = (void *)0x0, lVar8 == 0x18 && (xdir.uDirSize == 0x18))) {
        if (uVar11 <= xdir.uImageSize) {
          uVar11 = xdir.uImageSize;
        }
        if (iVar10 == iExtraImage) {
          edir._0_8_ = CONCAT44(xdir.uOffsImage,0x18);
          edir._8_8_ = CONCAT44(xdir.uOffsFixup,xdir.uImageSize);
          puVar1 = (undefined *)((int)&edir.uOffsImage + 3);
          uVar6 = (uint)puVar1 & 7;
          puVar2 = (ulong *)(puVar1 + -uVar6);
          *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | edir._0_8_ >> (7 - uVar6) * 8;
          puVar1 = (undefined *)((int)&edir.uOffsFixup + 3);
          uVar6 = (uint)puVar1 & 7;
          puVar2 = (ulong *)(puVar1 + -uVar6);
          *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | edir._8_8_ >> (7 - uVar6) * 8;
          puVar1 = (undefined *)((int)&edir.uDefLoadAddr + 3);
          uVar6 = (uint)puVar1 & 7;
          puVar2 = (ulong *)(puVar1 + -uVar6);
          *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | uVar3 >> (7 - uVar6) * 8;
          edir._16_8_ = uVar3;
        }
        iVar10 = iVar10 + 1;
        if (iVar5 <= iVar10) {
          uVar7 = (uVar7 + 3 & 0xfffffffc) + uVar11;
          goto LAB_002a9f54;
        }
        pEVar9 = pFile->__vtable;
      }
    }
  }
  return pImage;
}

void* ERQuickdata::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,4);
  return pvVar1;
}

void ERQuickdata::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

void* ERQuickdata::GetImage() {
  return this->m_pImage;
}

u32 ERQuickdata::GetImageSize() {
  return this->m_uImageSize;
}
