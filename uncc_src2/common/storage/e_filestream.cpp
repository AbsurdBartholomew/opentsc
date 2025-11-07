// STATUS: NOT STARTED

#include "e_filestream.h"

__vtbl_ptr_type EFileStream virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFileStream::~EFileStream,
		/* .__delta2 = */ -25616
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFileStream::GetPos,
		/* .__delta2 = */ -25032
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFileStream::Read,
		/* .__delta2 = */ -25328
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EFileStream::Write,
		/* .__delta2 = */ -25216
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type EStream virtual table[6] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStream::~EStream,
		/* .__delta2 = */ -11288
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

EFileStream* EFileStream::EFileStream() {
	EStream *this;
	
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  *(undefined4 *)&this->field0_0x0 = 0;
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EStream__vtable *)_vt_11EFileStream;
  this->m_pFile = (EFile *)0x0;
  return this;
}

void EFileStream::~EFileStream(int __in_chrg) {
	EStream *this;
	int __in_chrg;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (EStream__vtable *)_vt_11EFileStream;
  Close__11EFileStream(this);
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  (this->field0_0x0).__vtable = (EStream__vtable *)_vt_7EStream;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

bool EFileStream::Open(char *filename, FSReadWriteMode mode) {
	char *szMode;
	
  bool bVar1;
  char *pszMode;
  
  Close__11EFileStream(this);
  this->m_mode = mode;
  if (mode == FS_READ) {
    pszMode = "rb";
  }
  else {
    pszMode = "wb";
  }
  *(undefined4 *)&this->m_bOwn = 1;
  bVar1 = Create__11EFileSystemRP5EFilePCcT2Q25EFile10DeviceTypeQ25EFile10AccessMode
                    (&_eorFileSys.field0_0x0,&this->m_pFile,filename,pszMode,DT_DEFAULT,
                     AM_RANDOM_ACCESS);
  return bVar1;
}

void EFileStream::Close() {
  if ((this->m_pFile != (EFile *)0x0) && (*(int *)&this->m_bOwn != 0)) {
    Destroy__11EFileSystemRP5EFile(&_eorFileSys.field0_0x0,&this->m_pFile);
    this->m_pFile = (EFile *)0x0;
  }
  return;
}

int EFileStream::Read(void *pData, int size) {
	int read;
	
  EFile__vtable *pEVar1;
  long lVar2;
  
  if (pData == (void *)0x0) {
    pEVar1 = this->m_pFile->__vtable;
    lVar2 = (*(code *)pEVar1->GetAccessMode)
                      ((int)&this->m_pFile->__vtable + (int)*(short *)&pEVar1->GetIOMode,size,1);
    if (lVar2 != 0) {
      size = 0;
    }
  }
  else {
    pEVar1 = this->m_pFile->__vtable;
    size = (*(code *)pEVar1->Tell)((int)&this->m_pFile->__vtable + (int)*(short *)&pEVar1->Seek);
  }
  return size;
}

int EFileStream::Write(void *pData, int size) {
  EFile__vtable *pEVar1;
  int iVar2;
  
  pEVar1 = this->m_pFile->__vtable;
  iVar2 = (*(code *)pEVar1->GetLastError)
                    ((int)&this->m_pFile->__vtable + (int)*(short *)&pEVar1->Flush,pData,size);
  return iVar2;
}

void EFileStream::Attach(EFile *pFile, FSReadWriteMode mode, int pos, bool bOwn) {
  Close__11EFileStream(this);
  *(int *)&this->m_bOwn = (int)bOwn;
  this->m_mode = mode;
  this->m_pFile = pFile;
  if (pFile != (EFile *)0x0) {
    (*(code *)pFile->__vtable->GetAccessMode)
              ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetIOMode,pos,0);
  }
  return;
}

void EFileStream::Detach() {
  this->m_pFile = (EFile *)0x0;
  return;
}

int EFileStream::GetPos() {
  EFile__vtable *pEVar1;
  int iVar2;
  
  pEVar1 = this->m_pFile->__vtable;
  iVar2 = (*(code *)pEVar1->GetDrive)
                    ((int)&this->m_pFile->__vtable + (int)*(short *)&pEVar1->GetDeviceType);
  return iVar2;
}

void EStream::~EStream(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EStream__vtable *)_vt_7EStream;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}
