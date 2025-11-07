// STATUS: NOT STARTED

#include "e_ps2fileiop.h"

static char *g_pszDevicePrefix[8] = {
	/* [0] = */ 0x3cd4a0,
	/* [1] = */ 0x3cd4a0,
	/* [2] = */ 0x3cd4a8,
	/* [3] = */ 0x3cd4b8,
	/* [4] = */ 0x3cd4c8,
	/* [5] = */ 0x3cd4c8,
	/* [6] = */ NULL,
	/* [7] = */ NULL
};

__vtbl_ptr_type EPs2FileIOP virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::~EPs2FileIOP,
		/* .__delta2 = */ -5208
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::Read,
		/* .__delta2 = */ -4176
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::Write,
		/* .__delta2 = */ -3744
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::Seek,
		/* .__delta2 = */ -3736
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::Tell,
		/* .__delta2 = */ -3560
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::Flush,
		/* .__delta2 = */ -3568
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::GetLastError,
		/* .__delta2 = */ -3256
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::GetIOMode,
		/* .__delta2 = */ -3248
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::GetAccessMode,
		/* .__delta2 = */ -3240
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::GetDeviceType,
		/* .__delta2 = */ -3232
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::GetDrive,
		/* .__delta2 = */ -3224
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::GetPath,
		/* .__delta2 = */ -3216
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::GetName,
		/* .__delta2 = */ -3208
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::GetExt,
		/* .__delta2 = */ -3200
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::GetSystemHandle,
		/* .__delta2 = */ -3192
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::Destroy,
		/* .__delta2 = */ -4904
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::Open,
		/* .__delta2 = */ -4824
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::Close,
		/* .__delta2 = */ -4248
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::GetFD,
		/* .__delta2 = */ -3184
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::SetFD,
		/* .__delta2 = */ -3176
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::SetMode,
		/* .__delta2 = */ -3168
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::SetDevice,
		/* .__delta2 = */ -3160
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileIOP::SetAccess,
		/* .__delta2 = */ -3152
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EFile virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFile::~EFile,
		/* .__delta2 = */ 27792
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void* EPs2FileIOP::operator new(unsigned int size) {
	void *result;
	
  void *__s;
  
  __s = _allocBucketAlloc__FUiUi(size,(int)size % 0x35);
  memset(__s,0,(long)(int)size);
  return __s;
}

void EPs2FileIOP::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x358,8);
  return;
}

EPs2FileIOP* EPs2FileIOP::EPs2FileIOP() {
	EFile *this;
	
  (this->field0_0x0).__vtable = (EFile__vtable *)_vt_11EPs2FileIOP;
  __6EMutex(&this->m_theMutex);
  this->m_nBufferPos = -1;
  this->m_uHandle = 0;
  this->m_nFileSize = -1;
  this->m_nBytesInBuffer = -1;
  this->m_nPos = 0;
  this->m_pBuffer = (void *)0x0;
  return this;
}

void EPs2FileIOP::~EPs2FileIOP(int __in_chrg) {
	EFile *this;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (EFile__vtable *)_vt_11EPs2FileIOP;
  FreeIOBuffer__11EPs2FileIOP(this);
  ___6EMutex(&this->m_theMutex,2);
                    /* inlined from /eor/src2/common/file/e_file.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/file/e_file.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EFile__vtable *)_vt_5EFile;
  if ((__in_chrg & 1U) != 0) {
    __dl__11EPs2FileIOPPv(this);
  }
  return;
}

EFile* EPs2FileIOP::Creator(EFile *pFile, char *pszFileName, char *pszMode, DeviceType eDevice, AccessMode eAccess) {
	bool bCreator;
	EPs2FileIOP *pEPS2FileIOP;
	
  EFile__vtable *pEVar1;
  bool bVar2;
  EPs2FileIOP *this;
  long lVar3;
  
  bVar2 = pFile == (EFile *)0x0;
  if (bVar2) {
    this = (EPs2FileIOP *)__nw__11EPs2FileIOPUi(0x358);
    pFile = (EFile *)__11EPs2FileIOP(this);
  }
  if (((EPs2FileIOP *)pFile != (EPs2FileIOP *)0x0) &&
     (pEVar1 = (((EPs2FileIOP *)pFile)->field0_0x0).__vtable,
     lVar3 = (*(code *)pEVar1[2].EFile)
                       ((char *)((int)pFile + 0x54) + *(short *)(pEVar1 + 2) + -0x54,pszFileName,
                        pszMode,eDevice,eAccess), lVar3 == 0)) {
    if (bVar2) {
      pEVar1 = (((EPs2FileIOP *)pFile)->field0_0x0).__vtable;
      (*(code *)pEVar1->Write)((char *)((int)pFile + 0x54) + *(short *)&pEVar1->Read + -0x54,3);
    }
    pFile = (EFile *)0x0;
  }
  return pFile;
}

void EPs2FileIOP::Destroy() {
  EFile__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[2].Write)(this->m_pszDrive + *(short *)&pEVar1[2].Read + -0x54);
  if (this != (EPs2FileIOP *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1->Write)(this->m_pszDrive + *(short *)&pEVar1->Read + -0x54,3);
  }
  return;
}

bool EPs2FileIOP::Open(char *pszFileName, char *pszMode, DeviceType eDevice, AccessMode eAccess) {
	bool bResult;
	IOMode eMode;
	char *pszPrefixedName;
	char *pszNameInUpper;
	char *pszPathPrefix;
	void *pAddress;
	void *pAddress;
	
  EFile__vtable *pEVar1;
  bool bVar2;
  void *pvVar3;
  char *str;
  char *__dest;
  uint uVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  IOMode eMode;
  char *local_ac;
  AccessMode local_a8;
  bool bResult;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  _bResult = 0;
  local_ac = pszMode;
  local_a8 = eAccess;
  if (this->m_pBuffer == (void *)0x0) {
    pvVar3 = _memmanAlloc__FUiUi(0x1000,0x100);
    this->m_pBuffer = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_0032ef30;
  }
  sVar5 = strlen(pszFileName);
  sVar6 = strlen(g_pszDevicePrefix[eDevice]);
                    /* inlined from ps2/e_ps2filesystem.h */
                    /* end of inlined section */
                    /* inlined from ps2/e_ps2filesystem.h */
                    /* end of inlined section */
  sVar7 = strlen(_eorFileSys.m_pszHostIPAddress);
                    /* inlined from e_standard_heap.h */
                    /* end of inlined section */
                    /* inlined from e_standard_heap.h */
  str = (char *)_memmanAlloc__FUiUi((int)sVar5 + (int)sVar6 + 1 + (int)sVar7,4);
  __dest = (char *)_memmanAlloc__FUiUi(0x101,4);
                    /* end of inlined section */
  if ((str != (char *)0x0) && (__dest != (char *)0x0)) {
    strncpy(__dest,pszFileName,0x100);
    strupr(__dest);
    sprintf(str,g_pszDevicePrefix[eDevice]);
    ParseMode__11EFileSystemPCcRQ25EFile6IOMode(&_eorFileSys.field0_0x0,local_ac,&eMode);
    uVar4 = OpenStream__16EPs2IOPInterfacePCc(&_ps2IOPInterface,str);
    this->m_uHandle = uVar4;
    if (uVar4 != 0) {
      bVar2 = AllocIOBuffer__11EPs2FileIOP(this);
      if (bVar2) {
        pEVar1 = (this->field0_0x0).__vtable;
        _bResult = 1;
        (*(code *)pEVar1[2].GetAccessMode)
                  (this->m_pszDrive + *(short *)&pEVar1[2].GetIOMode + -0x54,eMode);
        pEVar1 = (this->field0_0x0).__vtable;
        (*(code *)pEVar1[2].GetDrive)
                  (this->m_pszDrive + *(short *)&pEVar1[2].GetDeviceType + -0x54,eDevice);
        pEVar1 = (this->field0_0x0).__vtable;
        (*(code *)pEVar1[2].GetName)
                  (this->m_pszDrive + *(short *)&pEVar1[2].GetPath + -0x54,local_a8);
        SetName__11EPs2FileIOPPCc(this,__dest);
      }
      else if (this->m_uHandle != 0) {
        CloseStream__16EPs2IOPInterfaceUi(&_ps2IOPInterface,this->m_uHandle);
      }
    }
    if (str != (char *)0x0) {
                    /* inlined from e_standard_heap.h */
      _memmanFree__FPv(str);
    }
                    /* end of inlined section */
    if (__dest == (char *)0x0) {
      return (bool)(char)_bResult;
    }
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(__dest);
  }
LAB_0032ef30:
                    /* end of inlined section */
  return (bool)(char)_bResult;
}

void EPs2FileIOP::Close() {
  CloseStream__16EPs2IOPInterfaceUi(&_ps2IOPInterface,this->m_uHandle);
  this->m_uHandle = 0;
  SetName__11EPs2FileIOPPCc(this,"");
  return;
}

unsigned int EPs2FileIOP::Read(void *pBuffer, unsigned int nSize) {
	unsigned int nRead;
	unsigned int nLeftToRead;
	u8 *pCurrentOutPos;
	unsigned int nStartPos;
	unsigned int nRead;
	
  uint uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (nSize != 0) {
    Acquire__6EMutexUi(&this->m_theMutex,0xffffffff);
    lVar2 = this->m_nPos;
    do {
      FillBuffer__11EPs2FileIOP(this);
      uVar1 = ReadFromBuffer__11EPs2FileIOPPvUi(this,pBuffer,nSize);
      nSize = nSize - uVar1;
      pBuffer = (void *)((int)pBuffer + uVar1);
      if (nSize == 0) break;
    } while (this->m_nBytesInBuffer == 0x1000);
    uVar1 = *(int *)&this->m_nPos - (int)lVar2;
    Release__6EMutex(&this->m_theMutex);
  }
  return uVar1;
}

bool EPs2FileIOP::FillBuffer() {
	int bufferPos;
	
  int iVar1;
  long nFilePos;
  
  nFilePos = (long)(int)((uint)this->m_nPos & 0xfffff000);
  if (this->m_nBufferPos != nFilePos) {
    iVar1 = ReadStream__16EPs2IOPInterfaceUiiPvl
                      (&_ps2IOPInterface,this->m_uHandle,0x1000,this->m_pBuffer,nFilePos);
    this->m_nBufferPos = nFilePos;
    this->m_nBytesInBuffer = (long)iVar1;
  }
  return true;
}

unsigned int EPs2FileIOP::ReadFromBuffer(void *pBuffer, unsigned int nSize) {
	unsigned int nBufferOffset;
	unsigned int nCopyFromBuffer;
	
  uint uVar1;
  ulong uVar2;
  
  uVar1 = (uint)this->m_nPos & 0xfff;
  uVar2 = (ulong)(int)(*(int *)&this->m_nBytesInBuffer - uVar1);
  if ((ulong)(long)(int)nSize < uVar2) {
    uVar2 = (long)(int)nSize;
  }
  if (uVar2 != 0) {
    memcpy(pBuffer,(void *)((int)this->m_pBuffer + uVar1),(uint)uVar2);
    this->m_nPos = this->m_nPos + (uVar2 & 0xffffffff);
  }
  return (uint)uVar2;
}

unsigned int EPs2FileIOP::Write(void *pBuffer, unsigned int nSize) {
  return 0;
}

unsigned int EPs2FileIOP::Seek(int nOffset, SeekType eMode) {
	EFSState state;
	
  long lVar1;
  EFSState state;
  
  if (eMode == ST_CURRENT) {
    lVar1 = this->m_nPos;
  }
  else {
    if ((int)eMode < 2) {
      if (eMode != ST_SET) {
        return (uint)this->m_nPos;
      }
      this->m_nPos = (long)nOffset;
      goto LAB_0032f1ec;
    }
    if (eMode != ST_END) {
      return (uint)this->m_nPos;
    }
    if (this->m_nFileSize < 0) {
      GetStreamState__16EPs2IOPInterfaceUi(&state,&_ps2IOPInterface,this->m_uHandle);
      this->m_nFileSize = (ulong)state.length;
      lVar1 = this->m_nFileSize;
    }
    else {
      lVar1 = this->m_nFileSize;
    }
  }
  this->m_nPos = nOffset + lVar1;
LAB_0032f1ec:
  return (uint)this->m_nPos;
}

bool EPs2FileIOP::Flush() {
  return false;
}

unsigned int EPs2FileIOP::Tell() {
  return (uint)this->m_nPos;
}

void EPs2FileIOP::SetName(char *pszFileName) {
  size_t sVar1;
  char *ext;
  
  ext = this->m_pszExt;
  SplitPath__FPCcPcN31(pszFileName,this->m_pszDrive,this->m_pszDir,this->m_pszName,ext);
  sVar1 = strlen(ext);
  if ((sVar1 != 0) && (this->m_pszExt[0] == '.')) {
    strcpy(ext,this->m_pszExt + 1);
  }
  return;
}

bool EPs2FileIOP::AllocIOBuffer() {
  void *pvVar1;
  
  pvVar1 = this->m_pBuffer;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = _memmanAlloc__FUiUi(0x1000,0x100);
    this->m_pBuffer = pvVar1;
    pvVar1 = this->m_pBuffer;
  }
  return pvVar1 != (void *)0x0;
}

void EPs2FileIOP::FreeIOBuffer() {
  _memmanFree__FPv(this->m_pBuffer);
  this->m_pBuffer = (void *)0x0;
  return;
}

void EFile::~EFile(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EFile__vtable *)_vt_5EFile;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

ErrorCode EPs2FileIOP::GetLastError() {
  return ER_NONE;
}

IOMode EPs2FileIOP::GetIOMode() {
  return this->m_eMode;
}

AccessMode EPs2FileIOP::GetAccessMode() {
  return this->m_eAccess;
}

DeviceType EPs2FileIOP::GetDeviceType() {
  return this->m_eDevice;
}

char* EPs2FileIOP::GetDrive() {
  return this->m_pszDrive;
}

char* EPs2FileIOP::GetPath() {
  return this->m_pszDir;
}

char* EPs2FileIOP::GetName() {
  return this->m_pszName;
}

char* EPs2FileIOP::GetExt() {
  return this->m_pszExt;
}

void* EPs2FileIOP::GetSystemHandle() {
  return (void *)this->m_uHandle;
}

int EPs2FileIOP::GetFD() {
  return this->m_uHandle;
}

void EPs2FileIOP::SetFD(int nFD) {
  this->m_uHandle = nFD;
  return;
}

void EPs2FileIOP::SetMode(IOMode eMode) {
  this->m_eMode = eMode;
  return;
}

void EPs2FileIOP::SetDevice(DeviceType eDevice) {
  this->m_eDevice = eDevice;
  return;
}

void EPs2FileIOP::SetAccess(AccessMode eAccess) {
  this->m_eAccess = eAccess;
  return;
}
