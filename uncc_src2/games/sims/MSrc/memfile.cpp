// STATUS: NOT STARTED

#include "memfile.h"

__vtbl_ptr_type MemFile virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &MemFile::~MemFile,
		/* .__delta2 = */ 16264
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ErrType MemFile::WriteBlock(void *buffer, int *blockSize) {
	int result;
	u32 newFilePos;
	void *newBuffer;
	
  bool bVar1;
  uchar *pDest;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  bVar1 = ValidFile__7MemFile(this);
  if (bVar1) {
    if (*(int *)&this->fWritable == 0) {
      iVar3 = -0x2d;
    }
    else {
      uVar4 = this->fFilePos + *blockSize;
      if (this->fBufferSize < uVar4) {
        uVar4 = uVar4 + 0x1000 & 0xfffff000;
        pDest = (uchar *)_memmanAlloc__FUiUi(uVar4,0x40);
        if (pDest == (uchar *)0x0) {
          iVar3 = *blockSize + (this->fBufferSize - uVar4);
          *blockSize = iVar3;
          if (iVar3 < 0) {
            *blockSize = 0;
          }
          iVar3 = -0x2e;
        }
        else {
          if (this->fBuffer == (uchar *)0x0) {
            this->fBuffer = pDest;
          }
          else {
            memcpy(pDest,this->fBuffer,this->fBufferSize);
            _memmanFree__FPv(this->fBuffer);
            this->fBuffer = pDest;
          }
          this->fBufferSize = uVar4;
        }
      }
      memcpy(this->fBuffer + this->fFilePos,buffer,*blockSize);
      uVar4 = this->fFilePos + *blockSize;
      this->fFilePos = uVar4;
      if (*blockSize != 0) {
        *(undefined4 *)&this->fDirty = 1;
        uVar2 = this->fEndOfFile;
        if (this->fEndOfFile <= uVar4) {
          uVar2 = uVar4;
        }
        this->fEndOfFile = uVar2;
      }
    }
  }
  else {
    iVar3 = -0x31;
  }
  return iVar3;
}

ErrType MemFile::GetFileSize(SInt32 *filesize) {
  bool bVar1;
  int iVar2;
  
  bVar1 = ValidFile__7MemFile(this);
  iVar2 = 0;
  if (bVar1) {
    *filesize = this->fEndOfFile;
  }
  else {
    iVar2 = -0x31;
  }
  return iVar2;
}

ErrType MemFile::SetFileSize(SInt32 filesize) {
	ErrType result;
	
  bool bVar1;
  int iVar2;
  
  iVar2 = 0;
  bVar1 = ValidFile__7MemFile(this);
  if (bVar1) {
    if (*(int *)&this->fWritable == 0) {
      iVar2 = -0x2d;
    }
    else if (filesize < 0) {
      iVar2 = -0x32;
    }
    else {
      this->fEndOfFile = filesize;
      this->fFilePos = filesize;
    }
  }
  else {
    iVar2 = -0x31;
  }
  return iVar2;
}

ErrType MemFile::Create(StringBuffer &name) {
  bool bVar1;
  int iVar2;
  char *pcVar3;
  
  bVar1 = ValidFile__7MemFile(this);
  iVar2 = -0x2f;
  if (!bVar1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/CTGFile.h */
                    /* end of inlined section */
                    /* end of inlined section */
    pcVar3 = c_str__C12StringBuffer(name);
    bVar1 = FileExists__14CTGFileManagerPCc(&_14CTGFileManager_sTheMgr,pcVar3);
    if (bVar1) {
      iVar2 = -0x2b;
    }
    else {
      pcVar3 = c_str__C12StringBuffer(name);
      bVar1 = CreateFile__14CTGFileManagerPCc(&_14CTGFileManager_sTheMgr,pcVar3);
      iVar2 = -0x2a;
      if (bVar1) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

ErrType MemFile::Delete(StringBuffer &name) {
  bool bVar1;
  int iVar2;
  char *pcVar3;
  
  bVar1 = ValidFile__7MemFile(this);
  iVar2 = -0x2f;
  if (!bVar1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/CTGFile.h */
                    /* end of inlined section */
                    /* end of inlined section */
    pcVar3 = c_str__C12StringBuffer(name);
    bVar1 = FileExists__14CTGFileManagerPCc(&_14CTGFileManager_sTheMgr,pcVar3);
    if (bVar1) {
      pcVar3 = c_str__C12StringBuffer(name);
      bVar1 = DeleteFile__14CTGFileManagerPCc(&_14CTGFileManager_sTheMgr,pcVar3);
      iVar2 = -0x27;
      if (bVar1) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = -0x28;
    }
  }
  return iVar2;
}

MemFile* MemFile::MemFile() {
	StackString<260> *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
  this->__vtable = (MemFile__vtable *)_vt_7MemFile;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi((StringBuffer *)this,(this->fFilename).fChars,0x104);
                    /* end of inlined section */
  *(undefined4 *)&this->fDirty = 0;
  *(undefined4 *)&this->fWritable = 0;
  this->fBuffer = (uchar *)0x0;
  this->fEndOfFile = 0;
  this->fFilePos = 0;
  this->fBufferSize = 0;
  return this;
}

void MemFile::~MemFile(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (MemFile__vtable *)_vt_7MemFile;
  if (this->fBuffer != (uchar *)0x0) {
    Close__7MemFile(this);
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

ErrType MemFile::Open(StringBuffer &name) {
	CTGFile *file;
	StackString<260> *this;
	StringBuffer &other;
	
  bool bVar1;
  int iVar2;
  char *name_00;
  CTGFile *file;
  uint uVar3;
  uchar *puVar4;
  uint size;
  
  bVar1 = ValidFile__7MemFile(this);
  iVar2 = -0x2f;
  if (!bVar1) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/CTGFile.h */
                    /* end of inlined section */
                    /* end of inlined section */
    name_00 = c_str__C12StringBuffer(name);
    file = OpenFile__14CTGFileManagerPCcb(&_14CTGFileManager_sTheMgr,name_00,false);
    *(undefined4 *)&this->fDirty = 0;
    *(undefined4 *)&this->fWritable = 1;
    if (file != (CTGFile *)0x0) {
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
      copy__12StringBufferRC12StringBuffer((StringBuffer *)this,name);
                    /* end of inlined section */
      uVar3 = (*(code *)file->__vtable->ReadInteger)
                        ((int)&file->__vtable + (int)*(short *)&file->__vtable->WriteByte);
      this->fFilePos = 0;
      size = uVar3 + 0x1000 & 0xfffff000;
      this->fEndOfFile = uVar3;
      this->fBufferSize = size;
      puVar4 = (uchar *)_memmanAlloc__FUiUi(size,0x40);
      this->fBuffer = puVar4;
      if (puVar4 != (uchar *)0x0) {
        (*(code *)file->__vtable->Tell)
                  ((int)&file->__vtable + (int)*(short *)&file->__vtable->Seek,puVar4,
                   this->fEndOfFile);
        ReleaseFile__14CTGFileManagerP7CTGFile(&_14CTGFileManager_sTheMgr,file);
        return 0;
      }
      ReleaseFile__14CTGFileManagerP7CTGFile(&_14CTGFileManager_sTheMgr,file);
    }
    iVar2 = -0x32;
  }
  return iVar2;
}

ErrType MemFile::Close() {
	ErrType result;
	
  int iVar1;
  
  iVar1 = 0;
  if (this->fBuffer == (uchar *)0x0) {
    iVar1 = -0x31;
  }
  else {
    if ((*(int *)&this->fWritable != 0) && (*(int *)&this->fDirty != 0)) {
      Flush__7MemFile(this);
    }
    _memmanFree__FPv(this->fBuffer);
    this->fBuffer = (uchar *)0x0;
  }
  return iVar1;
}

ErrType MemFile::ReadBlock(void *buffer, int *blockSize) {
	ErrType result;
	int maxBytes;
	
  bool bVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  
  iVar2 = 0;
  bVar1 = ValidFile__7MemFile(this);
  if (bVar1) {
    iVar4 = this->fEndOfFile - this->fFilePos;
    if (iVar4 < 0) {
      *blockSize = 0;
      iVar2 = -0x30;
    }
    else {
      if (iVar4 < *blockSize) {
        *blockSize = iVar4;
        iVar2 = -0x30;
        puVar3 = this->fBuffer;
      }
      else {
        puVar3 = this->fBuffer;
      }
      memcpy(buffer,puVar3 + this->fFilePos,*blockSize);
      this->fFilePos = this->fFilePos + *blockSize;
    }
  }
  else {
    iVar2 = -0x31;
  }
  return iVar2;
}

ErrType MemFile::SetPos(SInt32 fromStart) {
  bool bVar1;
  int iVar2;
  
  bVar1 = ValidFile__7MemFile(this);
  iVar2 = -0x31;
  if (bVar1) {
    iVar2 = 0;
    if (fromStart < 0) {
      iVar2 = -0x32;
    }
    else {
      this->fFilePos = fromStart;
    }
  }
  return iVar2;
}

bool MemFile::ValidFile() {
  return this->fBuffer != (uchar *)0x0;
}

ErrType MemFile::Flush() {
	CTGFile *file;
	
  bool bVar1;
  int iVar2;
  char *name;
  CTGFile *file;
  
  bVar1 = ValidFile__7MemFile(this);
  if (bVar1) {
    iVar2 = 0;
    if (*(int *)&this->fWritable != 0) {
      if (*(int *)&this->fDirty != 0) {
                    /* end of inlined section */
                    /* end of inlined section */
        name = c_str__C12StringBuffer((StringBuffer *)this);
        file = OpenFile__14CTGFileManagerPCcb(&_14CTGFileManager_sTheMgr,name,true);
        if (file == (CTGFile *)0x0) {
          return 0;
        }
        (*(code *)file->__vtable->GetName)
                  ((int)&file->__vtable + (int)*(short *)&file->__vtable->FlushCache,this->fBuffer,
                   this->fEndOfFile);
        (*(code *)file->__vtable->ReadFloat)
                  ((int)&file->__vtable + (int)*(short *)&file->__vtable->WriteInteger,
                   this->fEndOfFile);
        ReleaseFile__14CTGFileManagerP7CTGFile(&_14CTGFileManager_sTheMgr,file);
        *(undefined4 *)&this->fDirty = 0;
      }
      iVar2 = 0;
    }
  }
  else {
    iVar2 = -0x31;
  }
  return iVar2;
}

ErrType MemFile::GetFileName(StringBuffer &name) {
  bool bVar1;
  int iVar2;
  
  bVar1 = ValidFile__7MemFile(this);
  iVar2 = -0x31;
  if (bVar1) {
    erase__12StringBuffer(name);
    append__12StringBufferRC12StringBufferi(name,(StringBuffer *)this,-1);
    iVar2 = 0;
  }
  return iVar2;
}

ErrType MemFile::Read1(SInt8 *val) {
	int nb;
	
  int iVar1;
  undefined8 unaff_retaddr;
  int nb;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  nb = 1;
  iVar1 = ReadBlock__7MemFilePvPi(this,val,&nb);
  return iVar1;
}

bool MemFile::Writable() {
  return SUB41(*(undefined4 *)&this->fWritable,0);
}
