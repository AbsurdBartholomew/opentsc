// STATUS: NOT STARTED

#include "e_ps2filesce.h"

struct ESingleLock {
protected:
	ESyncObject *m_pObject;
	bool m_bAcquired;
	bool m_bAutoUnlock;
	
public:
	ESingleLock& operator=();
	ESingleLock();
	ESingleLock();
	bool Lock();
	bool Unlock();
	bool Unlock();
	bool IsLocked();
	ESingleLock(ESingleLock*, int, void);
};

struct _sifm_rpc_data {
	void *paddr;
	unsigned int pid;
	int tid;
	unsigned int mode;
};

typedef _sifm_rpc_data sceSifMRpcData;
typedef void (*sceSifMEndFunc)(/* parameters unknown */);

struct _sifm_client_data {
	_sifm_rpc_data rpcd;
	unsigned int command;
	void *buff;
	void *cbuff;
	sceSifMEndFunc func;
	void *para;
	void *serve;
	int sema;
	int unbind;
	int buffersize;
	int stacksize;
	int prio;
};

typedef _sifm_client_data sceSifMClientData;

struct sceInetAddress {
	int reserved;
	char data[12];
};

typedef sceInetAddress sceInetAddress_t;

struct sceInetParam {
	int type;
	int local_port;
	sceInetAddress remote_addr;
	int remote_port;
	int reserved[9];
};

typedef sceInetParam sceInetParam_t;

struct sceInetInfo {
	int cid;
	int proto;
	int recv_queue_length;
	int send_queue_length;
	sceInetAddress local_adr;
	int local_port;
	sceInetAddress remote_adr;
	int remote_port;
	int state;
	int reserved[4];
};

typedef sceInetInfo sceInetInfo_t;

struct sceInetPollFd {
	int cid;
	short int events;
	short int revents;
};

typedef sceInetPollFd sceInetPollFd_t;

struct sceInetIP_MREQ {
	sceInetAddress_t multiaddr;
	sceInetAddress_t interface;
};

typedef sceInetIP_MREQ sceInetIP_MREQ_t;

struct sceInetRoutingEntry {
	sceInetAddress dstaddr;
	sceInetAddress gateway;
	sceInetAddress genmask;
	int flags;
	int mss;
	int window;
	char interface[9];
};

typedef sceInetRoutingEntry sceInetRoutingEntry_t;

static char *g_pszDevicePrefix[8] = {
	/* [0] = */ 0x3cd2d0,
	/* [1] = */ 0x3cd2d0,
	/* [2] = */ 0x3cd2d8,
	/* [3] = */ 0x3cd2e8,
	/* [4] = */ 0x3cd2f8,
	/* [5] = */ 0x3cd2f8,
	/* [6] = */ 0x3cd308,
	/* [7] = */ NULL
};

__vtbl_ptr_type EPs2FileSCE virtual table[26] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::~EPs2FileSCE,
		/* .__delta2 = */ -7696
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::Read,
		/* .__delta2 = */ -6664
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::Write,
		/* .__delta2 = */ -6520
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::Seek,
		/* .__delta2 = */ -6400
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::Tell,
		/* .__delta2 = */ -6240
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::Flush,
		/* .__delta2 = */ -6144
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::GetLastError,
		/* .__delta2 = */ -6024
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::GetIOMode,
		/* .__delta2 = */ -5616
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::GetAccessMode,
		/* .__delta2 = */ -5608
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::GetDeviceType,
		/* .__delta2 = */ -5600
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::GetDrive,
		/* .__delta2 = */ -5592
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::GetPath,
		/* .__delta2 = */ -5584
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::GetName,
		/* .__delta2 = */ -5576
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::GetExt,
		/* .__delta2 = */ -5568
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::GetSystemHandle,
		/* .__delta2 = */ -5560
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::Destroy,
		/* .__delta2 = */ -7432
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::Open,
		/* .__delta2 = */ -7352
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::Close,
		/* .__delta2 = */ -6776
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::GetFD,
		/* .__delta2 = */ -5552
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::SetFD,
		/* .__delta2 = */ -5544
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::SetName,
		/* .__delta2 = */ -6136
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::SetMode,
		/* .__delta2 = */ -5536
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::SetDevice,
		/* .__delta2 = */ -5528
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPs2FileSCE::SetAccess,
		/* .__delta2 = */ -5520
	},
	/* [25] = */ {
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

static int g_mapModes[8] = {
	/* [0] = */ 0,
	/* [1] = */ 1,
	/* [2] = */ 1538,
	/* [3] = */ 1539,
	/* [4] = */ 0,
	/* [5] = */ 0,
	/* [6] = */ 770,
	/* [7] = */ 259
};

EPs2FileSCE* EPs2FileSCE::EPs2FileSCE() {
	EFile *this;
	
  (this->field0_0x0).__vtable = (EFile__vtable *)_vt_11EPs2FileSCE;
  this->m_nFD = -1;
  this->m_eMode = IOM_UNSPECIFIED;
  this->m_eDevice = DT_UNSPECIFIED;
  this->m_eAccess = AM_UNSPECIFIED;
  return this;
}

void EPs2FileSCE::~EPs2FileSCE(int __in_chrg) {
	EFile *this;
	void *pAddress;
	void *p;
	
                    /* inlined from /eor/src2/common/file/e_file.h */
                    /* end of inlined section */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EFile__vtable *)_vt_5EFile;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
    _allocBucketFree__FPvUiUi(this,0x31c,1);
  }
                    /* end of inlined section */
  return;
}

EFile* EPs2FileSCE::Creator(EFile *pFile, char *pszFileName, char *pszMode, DeviceType eDevice, AccessMode eAccess) {
	bool bCreator;
	EPs2FileSCE *pEPS2FileSCE;
	
  EFile__vtable *pEVar1;
  bool bVar2;
  EPs2FileSCE *this;
  long lVar3;
  
  bVar2 = pFile == (EFile *)0x0;
  if (bVar2) {
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
    this = (EPs2FileSCE *)_allocBucketAlloc__FUiUi(0x31c,1);
                    /* end of inlined section */
    pFile = (EFile *)__11EPs2FileSCE(this);
  }
  pEVar1 = (((EPs2FileSCE *)pFile)->field0_0x0).__vtable;
  lVar3 = (*(code *)pEVar1[2].EFile)
                    ((char *)((int)pFile + 0x18) + *(short *)(pEVar1 + 2) + -0x18,pszFileName,
                     pszMode,eDevice,eAccess);
  if (lVar3 == 0) {
    if ((bVar2) && ((EPs2FileSCE *)pFile != (EPs2FileSCE *)0x0)) {
      pEVar1 = (((EPs2FileSCE *)pFile)->field0_0x0).__vtable;
      (*(code *)pEVar1->Write)((char *)((int)pFile + 0x18) + *(short *)&pEVar1->Read + -0x18,3);
    }
    pFile = (EFile *)0x0;
  }
  return pFile;
}

void EPs2FileSCE::Destroy() {
  EFile__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[2].Write)(this->m_pszDrive + *(short *)&pEVar1[2].Read + -0x18);
  if (this != (EPs2FileSCE *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1->Write)(this->m_pszDrive + *(short *)&pEVar1->Read + -0x18,3);
  }
  return;
}

bool EPs2FileSCE::Open(char *pszFileName, char *pszMode, DeviceType eDevice, AccessMode eAccess) {
	bool bResult;
	IOMode eMode;
	char *pszPrefixedName;
	char *pszNameInUpper;
	char *pszPathPrefix;
	int nFD;
	EPs2FileSCE *this;
	int nError;
	void *pAddress;
	void *pAddress;
	
  EFile__vtable *pEVar1;
  char *str;
  char *__dest;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  int iVar7;
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
  char *local_bc;
  AccessMode local_b8;
  bool bResult;
  char *pszPathPrefix;
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
  
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
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
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  _bResult = 0;
  if ((eDevice == DT_DVD) && (*pszFileName != '\\')) {
    pszPathPrefix = "\\";
  }
  else {
    pszPathPrefix = "";
  }
  local_bc = pszMode;
  local_b8 = eAccess;
  sVar2 = strlen(pszFileName);
  sVar3 = strlen(g_pszDevicePrefix[eDevice]);
                    /* inlined from ps2/e_ps2filesystem.h */
                    /* end of inlined section */
                    /* inlined from ps2/e_ps2filesystem.h */
                    /* end of inlined section */
  sVar4 = strlen(_eorFileSys.m_pszHostIPAddress);
                    /* inlined from e_standard_heap.h */
                    /* end of inlined section */
                    /* inlined from e_standard_heap.h */
  str = (char *)_memmanAlloc__FUiUi((int)sVar2 + (int)sVar3 + 2 + (int)sVar4,4);
  __dest = (char *)_memmanAlloc__FUiUi(0x101,4);
                    /* end of inlined section */
  if ((str != (char *)0x0) && (__dest != (char *)0x0)) {
    strncpy(__dest,pszFileName,0x100);
    strupr(__dest);
    sprintf(str,g_pszDevicePrefix[eDevice]);
    ParseMode__11EFileSystemPCcRQ25EFile6IOMode(&_eorFileSys.field0_0x0,local_bc,&eMode);
    lVar5 = sceOpen(str,g_mapModes[eMode]);
    pEVar1 = (this->field0_0x0).__vtable;
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
    iVar7 = -(int)lVar5;
    if (-1 < lVar5) {
      iVar7 = 0;
    }
    this->m_nLastError = iVar7;
                    /* end of inlined section */
    lVar6 = (*(code *)pEVar1->GetSystemHandle)(this->m_pszDrive + *(short *)&pEVar1->GetExt + -0x18)
    ;
    if (lVar6 == 0) {
      pEVar1 = (this->field0_0x0).__vtable;
      _bResult = 1;
      (*(code *)pEVar1[2].GetLastError)(this->m_pszDrive + *(short *)&pEVar1[2].Flush + -0x18,lVar5)
      ;
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1[2].GetDrive)
                (this->m_pszDrive + *(short *)&pEVar1[2].GetDeviceType + -0x18,eMode);
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1[2].GetName)(this->m_pszDrive + *(short *)&pEVar1[2].GetPath + -0x18,eDevice);
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1[2].GetSystemHandle)
                (this->m_pszDrive + *(short *)&pEVar1[2].GetExt + -0x18,local_b8);
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1[2].GetAccessMode)
                (this->m_pszDrive + *(short *)&pEVar1[2].GetIOMode + -0x18,__dest);
    }
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(__dest);
    _memmanFree__FPv(str);
  }
                    /* end of inlined section */
  return SUB41(_bResult,0);
}

void EPs2FileSCE::Close() {
	EPs2FileSCE *this;
	
  EFile__vtable *pEVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  pEVar1 = (this->field0_0x0).__vtable;
  uVar3 = (*(code *)pEVar1[2].Tell)(this->m_pszDrive + *(short *)&pEVar1[2].Seek + -0x18);
  lVar4 = sceClose(uVar3);
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).__vtable;
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
  iVar2 = -(int)lVar4;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
  if (-1 < lVar4) {
    iVar2 = 0;
  }
  this->m_nLastError = iVar2;
                    /* end of inlined section */
  (*(code *)pEVar1[2].GetAccessMode)
            (this->m_pszDrive + *(short *)&pEVar1[2].GetIOMode + -0x18,0x3cd2d0);
  return;
}

unsigned int EPs2FileSCE::Read(void *pBuffer, unsigned int nSize) {
	int nRead;
	EPs2FileSCE *this;
	int nError;
	int _ret_;
	
  EFile__vtable *pEVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  do {
    pEVar1 = (this->field0_0x0).__vtable;
    uVar3 = (*(code *)pEVar1[2].Tell)(this->m_pszDrive + *(short *)&pEVar1[2].Seek + -0x18);
    lVar4 = sceRead(uVar3,pBuffer,nSize);
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
    iVar2 = -(int)lVar4;
    if (-1 < lVar4) {
      iVar2 = 0;
    }
                    /* end of inlined section */
    this->m_nLastError = iVar2;
  } while (lVar4 < 0);
  lVar5 = 0;
  if (-1 < lVar4) {
    lVar5 = lVar4;
  }
  return (uint)lVar5;
}

unsigned int EPs2FileSCE::Write(void *pBuffer, unsigned int nSize) {
	int nWritten;
	EPs2FileSCE *this;
	int nError;
	int _ret_;
	
  EFile__vtable *pEVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  pEVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)pEVar1[2].Tell)(this->m_pszDrive + *(short *)&pEVar1[2].Seek + -0x18);
  lVar3 = sceWrite(uVar2,pBuffer,nSize);
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
  iVar4 = -(int)lVar3;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
  if (-1 < lVar3) {
    iVar4 = 0;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
  this->m_nLastError = iVar4;
                    /* end of inlined section */
  if (-1 >= lVar3) {
    lVar3 = 0;
  }
  return (uint)lVar3;
}

unsigned int EPs2FileSCE::Seek(int nOffset, SeekType eMode) {
	int nWhere;
	int nRet;
	EPs2FileSCE *this;
	int nError;
	int _ret_;
	
  undefined8 uVar1;
  long lVar2;
  EFile__vtable *pEVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (eMode == ST_CURRENT) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    if (1 < (int)eMode) {
      if (eMode != ST_END) {
        pEVar3 = (this->field0_0x0).__vtable;
        goto LAB_0032e74c;
      }
      uVar5 = 2;
    }
  }
  pEVar3 = (this->field0_0x0).__vtable;
LAB_0032e74c:
  uVar1 = (*(code *)pEVar3[2].Tell)(this->m_pszDrive + *(short *)&pEVar3[2].Seek + -0x18);
  lVar2 = sceLseek(uVar1,nOffset,uVar5);
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
  iVar4 = -(int)lVar2;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
  if (-1 < lVar2) {
    iVar4 = 0;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
  this->m_nLastError = iVar4;
                    /* end of inlined section */
  if (-1 >= lVar2) {
    lVar2 = 0;
  }
  return (uint)lVar2;
}

unsigned int EPs2FileSCE::Tell() {
	int nRet;
	EPs2FileSCE *this;
	int nError;
	int _ret_;
	
  EFile__vtable *pEVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  pEVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)pEVar1[2].Tell)(this->m_pszDrive + *(short *)&pEVar1[2].Seek + -0x18);
  lVar3 = sceLseek(uVar2,0,1);
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
  iVar4 = -(int)lVar3;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
  if (lVar3 < 0) {
                    /* end of inlined section */
    lVar3 = 0;
  }
  else {
    iVar4 = 0;
  }
                    /* inlined from c:/eor/src2/common/ps2/e_ps2filesce.h */
  this->m_nLastError = iVar4;
                    /* end of inlined section */
  return (uint)lVar3;
}

bool EPs2FileSCE::Flush() {
  return false;
}

void EPs2FileSCE::SetName(char *pszFileName) {
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

ErrorCode EPs2FileSCE::GetLastError() {
  int iVar1;
  
  iVar1 = this->m_nLastError;
  if (iVar1 == 0x13) {
    return ER_DEVICE_NOT_FOUND;
  }
  if (iVar1 < 0x14) {
    if (iVar1 == 9) {
      return ER_INVALID_HANDLE;
    }
    if (iVar1 < 10) {
      if (iVar1 == 2) {
        return ER_FILE_NOT_FOUND;
      }
      if (iVar1 < 3) {
        if (iVar1 == 0) {
          return ER_NONE;
        }
      }
      else if (iVar1 == 5) {
        return ER_IO_FAULT;
      }
    }
    else {
      if (iVar1 == 0xd) {
        return ER_ACCESS_DENIED;
      }
      if (iVar1 < 0xe) {
        if (iVar1 == 0xc) {
          return ER_OUTOFMEMORY;
        }
      }
      else if (iVar1 == 0x11) {
        return ER_FILE_EXISTS;
      }
    }
  }
  else {
    if (iVar1 == 0x1c) {
      return ER_DEVICE_FULL;
    }
    if (iVar1 < 0x1d) {
      if (iVar1 == 0x16) {
        return ER_INVALID_ARGUMENT;
      }
      if ((0x16 < iVar1) && (iVar1 == 0x18)) {
        return ER_TOO_MANY_OPEN_FILES;
      }
    }
    else {
      if (iVar1 == 0x1fb) {
        return ER_FILE_EXISTS;
      }
      if (iVar1 < 0x1fc) {
        if (iVar1 == 0x1e) {
          return ER_WRITE_PROTECT;
        }
      }
      else if (iVar1 == 0x1fc) {
        return ER_FILE_NOT_FOUND;
      }
    }
  }
  return ER_UNKNOWN;
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

IOMode EPs2FileSCE::GetIOMode() {
  return this->m_eMode;
}

AccessMode EPs2FileSCE::GetAccessMode() {
  return this->m_eAccess;
}

DeviceType EPs2FileSCE::GetDeviceType() {
  return this->m_eDevice;
}

char* EPs2FileSCE::GetDrive() {
  return this->m_pszDrive;
}

char* EPs2FileSCE::GetPath() {
  return this->m_pszDir;
}

char* EPs2FileSCE::GetName() {
  return this->m_pszName;
}

char* EPs2FileSCE::GetExt() {
  return this->m_pszExt;
}

void* EPs2FileSCE::GetSystemHandle() {
  return (void *)this->m_nFD;
}

int EPs2FileSCE::GetFD() {
  return this->m_nFD;
}

void EPs2FileSCE::SetFD(int nFD) {
  this->m_nFD = nFD;
  return;
}

void EPs2FileSCE::SetMode(IOMode eMode) {
  this->m_eMode = eMode;
  return;
}

void EPs2FileSCE::SetDevice(DeviceType eDevice) {
  this->m_eDevice = eDevice;
  return;
}

void EPs2FileSCE::SetAccess(AccessMode eAccess) {
  this->m_eAccess = eAccess;
  return;
}

void* EPs2FileSCE::operator new() {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x31c,1);
  return pvVar1;
}

void EPs2FileSCE::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x31c,1);
  return;
}

void EPs2FileSCE::SetLastError(int nError) {
  int iVar1;
  
  iVar1 = -nError;
  if (-1 < nError) {
    iVar1 = 0;
  }
  this->m_nLastError = iVar1;
  return;
}
