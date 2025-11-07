// STATUS: NOT STARTED

#include "CTGFilePS2.h"

struct CTGFileImpl : private CTGFile {
private:
	FileName msFilename;
	FILE *m_pFile;
	
public:
	CTGFileImpl& operator=();
	CTGFileImpl(HANDLE hFile, Sint32 nBase, Sint32 nSize, bool bWritable);
	CTGFileImpl();
	/* vtable[1] */ virtual CTGFileImpl(CTGFileImpl*, int, void);
	/* vtable[2] */ virtual Sint32 Read(void *pBuf, Sint32 nNumBytes);
	/* vtable[3] */ virtual Sint32 Write(void *pBuf, Sint32 nSize);
	/* vtable[4] */ virtual bool Seek(Sint32 nOffset);
	/* vtable[5] */ virtual Sint32 Tell();
	/* vtable[6] */ virtual Sint32 GetSize();
	/* vtable[7] */ virtual bool SetSize(Sint32 nSize);
	/* vtable[8] */ virtual bool IsWritable();
	/* vtable[9] */ virtual bool ReadBytes(unsigned char *pb, int n);
	/* vtable[10] */ virtual bool WriteBytes(unsigned char *pb, int n);
	/* vtable[11] */ virtual bool ReadByte(unsigned char *pb);
	/* vtable[12] */ virtual bool WriteByte(unsigned char b);
	/* vtable[13] */ virtual bool ReadInteger(int *pi);
	/* vtable[14] */ virtual bool WriteInteger(int i);
	/* vtable[15] */ virtual bool ReadFloat(float *pf);
	/* vtable[16] */ virtual bool WriteFloat(float f);
	/* vtable[17] */ virtual bool ReadString(char *buf, int size);
	/* vtable[18] */ virtual bool WriteString(char *buf);
	/* vtable[19] */ virtual bool Flush();
	/* vtable[20] */ virtual bool FlushCache();
	/* vtable[21] */ virtual char* GetName();
private:
	bool SeekPastEnd(Sint32 nOffset);
};

CTGFileManager CTGFileManager::sTheMgr = {
};

__vtbl_ptr_type CTGFileImpl virtual table[23] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::~CTGFileImpl,
		/* .__delta2 = */ 21744
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::Read,
		/* .__delta2 = */ 21968
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::Write,
		/* .__delta2 = */ 22016
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::Seek,
		/* .__delta2 = */ 22024
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::Tell,
		/* .__delta2 = */ 22104
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::GetSize,
		/* .__delta2 = */ 21840
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::SetSize,
		/* .__delta2 = */ 22152
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::IsWritable,
		/* .__delta2 = */ 21960
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::ReadBytes,
		/* .__delta2 = */ 22176
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::WriteBytes,
		/* .__delta2 = */ 22224
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::ReadByte,
		/* .__delta2 = */ 22288
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::WriteByte,
		/* .__delta2 = */ 22336
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::ReadInteger,
		/* .__delta2 = */ 22392
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::WriteInteger,
		/* .__delta2 = */ 22440
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::ReadFloat,
		/* .__delta2 = */ 22496
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::WriteFloat,
		/* .__delta2 = */ 22544
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::ReadString,
		/* .__delta2 = */ 22600
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::WriteString,
		/* .__delta2 = */ 22784
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::Flush,
		/* .__delta2 = */ 22160
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::FlushCache,
		/* .__delta2 = */ 22168
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFileImpl::GetName,
		/* .__delta2 = */ 23560
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type CTGFile virtual table[23] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &CTGFile::~CTGFile,
		/* .__delta2 = */ 21624
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
		/* .__pfn = */ &__pure_virtual,
		/* .__delta2 = */ -584
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void CTGFile::~CTGFile(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (CTGFile__vtable *)_vt_7CTGFile;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

CTGFileImpl* CTGFileImpl::CTGFileImpl(HANDLE hFile, Sint32 nBase, Sint32 nSize, bool bWritable) {
	CTGFile *this;
	
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (CTGFile__vtable *)_vt_11CTGFileImpl;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&(this->msFilename).field0_0x0,(this->msFilename).fChars,0x104);
                    /* end of inlined section */
  this->m_pFile = (__sFILE__432_30 *)0x0;
  return this;
}

void CTGFileImpl::~CTGFileImpl(int __in_chrg) {
  (this->field0_0x0).__vtable = (CTGFile__vtable *)_vt_11CTGFileImpl;
  if (this->m_pFile != (__sFILE__432_30 *)0x0) {
    fclose(this->m_pFile);
  }
  this->m_pFile = (__sFILE__432_30 *)0x0;
  FlushCache__11CTGFileImpl(this);
  ___7CTGFile(&this->field0_0x0,__in_chrg);
  return;
}

Sint32 CTGFileImpl::GetSize() {
	Sint32 oldPos;
	Sint32 size;
	
  long lVar1;
  long lVar2;
  
  lVar1 = ftell(this->m_pFile);
  fseek(this->m_pFile,0,2);
  lVar2 = ftell(this->m_pFile);
  fseek(this->m_pFile,(long)(int)lVar1,0);
  return (int)lVar2;
}

bool CTGFileImpl::IsWritable() {
  return false;
}

Sint32 CTGFileImpl::Read(void *pBuf, Sint32 nNumBytes) {
  uint uVar1;
  
  if (this->m_pFile == (__sFILE__432_30 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fread(pBuf,1,nNumBytes,this->m_pFile);
  }
  return uVar1;
}

Sint32 CTGFileImpl::Write(void *pBuf, Sint32 nSize) {
  return 0;
}

bool CTGFileImpl::Seek(Sint32 nOffset) {
  fseek(this->m_pFile,(long)nOffset,0);
  return true;
}

bool CTGFileImpl::SeekPastEnd(Sint32 nOffset) {
  fseek(this->m_pFile,(long)nOffset,0);
  return false;
}

Sint32 CTGFileImpl::Tell() {
  int iVar1;
  long lVar2;
  
  iVar1 = 0;
  if (this->m_pFile != (__sFILE__432_30 *)0x0) {
    lVar2 = ftell(this->m_pFile);
    iVar1 = (int)lVar2;
  }
  return iVar1;
}

bool CTGFileImpl::SetSize(Sint32 nSize) {
  return false;
}

bool CTGFileImpl::Flush() {
  return false;
}

bool CTGFileImpl::FlushCache() {
  return true;
}

bool CTGFileImpl::ReadBytes(unsigned char *pb, int n) {
  CTGFile__vtable *pCVar1;
  long lVar2;
  
  pCVar1 = (this->field0_0x0).__vtable;
  lVar2 = (*(code *)pCVar1->Tell)((this->msFilename).fChars + *(short *)&pCVar1->Seek + -0xc,pb,n);
  return lVar2 != 0;
}

bool CTGFileImpl::WriteBytes(unsigned char *pb, int n) {
  CTGFile__vtable *pCVar1;
  int iVar2;
  
  pCVar1 = (this->field0_0x0).__vtable;
  iVar2 = (*(code *)pCVar1->SetSize)
                    ((this->msFilename).fChars + *(short *)&pCVar1->GetSize + -0xc,pb);
  return iVar2 == n;
}

bool CTGFileImpl::ReadByte(unsigned char *pb) {
  CTGFile__vtable *pCVar1;
  undefined uVar2;
  
  pCVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)pCVar1->Flush)
                    ((this->msFilename).fChars + *(short *)&pCVar1->WriteString + -0xc,pb,1);
  return (bool)uVar2;
}

bool CTGFileImpl::WriteByte(unsigned char b) {
  CTGFile__vtable *pCVar1;
  undefined uVar2;
  undefined8 unaff_retaddr;
  uchar local_20 [16];
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pCVar1 = (this->field0_0x0).__vtable;
  local_20[0] = b;
  uVar2 = (*(code *)pCVar1->GetName)
                    ((this->msFilename).fChars + *(short *)&pCVar1->FlushCache + -0xc,local_20,1);
  return (bool)uVar2;
}

bool CTGFileImpl::ReadInteger(int *pi) {
  CTGFile__vtable *pCVar1;
  undefined uVar2;
  
  pCVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)pCVar1->Flush)
                    ((this->msFilename).fChars + *(short *)&pCVar1->WriteString + -0xc,pi,4);
  return (bool)uVar2;
}

bool CTGFileImpl::WriteInteger(int i) {
  CTGFile__vtable *pCVar1;
  undefined uVar2;
  undefined8 unaff_retaddr;
  int local_20 [4];
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pCVar1 = (this->field0_0x0).__vtable;
  local_20[0] = i;
  uVar2 = (*(code *)pCVar1->GetName)
                    ((this->msFilename).fChars + *(short *)&pCVar1->FlushCache + -0xc,local_20,4);
  return (bool)uVar2;
}

bool CTGFileImpl::ReadFloat(float *pf) {
  CTGFile__vtable *pCVar1;
  undefined uVar2;
  
  pCVar1 = (this->field0_0x0).__vtable;
  uVar2 = (*(code *)pCVar1->Flush)
                    ((this->msFilename).fChars + *(short *)&pCVar1->WriteString + -0xc,pf,4);
  return (bool)uVar2;
}

bool CTGFileImpl::WriteFloat(float f) {
  CTGFile__vtable *pCVar1;
  undefined uVar2;
  undefined8 unaff_retaddr;
  float local_20 [4];
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  pCVar1 = (this->field0_0x0).__vtable;
  local_20[0] = f;
  uVar2 = (*(code *)pCVar1->GetName)
                    ((this->msFilename).fChars + *(short *)&pCVar1->FlushCache + -0xc,local_20,4);
  return (bool)uVar2;
}

bool CTGFileImpl::ReadString(char *buf, int size) {
	unsigned char bytelen;
	int len;
	
  long lVar1;
  CTGFile__vtable *pCVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uchar bytelen;
  int len;
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
  pCVar2 = (this->field0_0x0).__vtable;
  lVar1 = (*(code *)pCVar2[1].CTGFile)
                    ((this->msFilename).fChars + *(short *)(pCVar2 + 1) + -0xc,&bytelen,size);
  if (lVar1 != 0) {
    if (bytelen == 0xff) {
      pCVar2 = (this->field0_0x0).__vtable;
      (*(code *)pCVar2[1].Tell)
                ((this->msFilename).fChars + *(short *)&pCVar2[1].Seek + -0xc,(uint)&bytelen | 4);
      pCVar2 = (this->field0_0x0).__vtable;
    }
    else {
      len = (int)bytelen;
      pCVar2 = (this->field0_0x0).__vtable;
    }
    lVar1 = (*(code *)pCVar2->Flush)
                      ((this->msFilename).fChars + *(short *)&pCVar2->WriteString + -0xc,buf,len);
    if (lVar1 != 0) {
      buf[len] = '\0';
      return true;
    }
  }
  return false;
}

bool CTGFileImpl::WriteString(char *buf) {
	int len;
	
  short sVar1;
  CTGFile__vtable *pCVar2;
  undefined uVar3;
  code *pcVar4;
  size_t sVar5;
  ulong uVar7;
  long lVar6;
  
  sVar5 = strlen(buf);
  if ((long)sVar5 < 0xff) {
    pCVar2 = (this->field0_0x0).__vtable;
    sVar1 = *(short *)&pCVar2[1].Read;
    pcVar4 = (code *)pCVar2[1].Write;
    uVar7 = sVar5 & 0xff;
  }
  else {
    pCVar2 = (this->field0_0x0).__vtable;
    lVar6 = (*(code *)pCVar2[1].Write)
                      ((this->msFilename).fChars + *(short *)&pCVar2[1].Read + -0xc,0xff);
    if (lVar6 == 0) {
      return false;
    }
    pCVar2 = (this->field0_0x0).__vtable;
    sVar1 = *(short *)&pCVar2[1].GetSize;
    pcVar4 = (code *)pCVar2[1].SetSize;
    uVar7 = sVar5;
  }
  lVar6 = (*pcVar4)((this->msFilename).fChars + sVar1 + -0xc,uVar7);
  if (lVar6 == 0) {
    return false;
  }
  pCVar2 = (this->field0_0x0).__vtable;
  uVar3 = (*(code *)pCVar2->GetName)
                    ((this->msFilename).fChars + *(short *)&pCVar2->FlushCache + -0xc,buf,sVar5);
  return (bool)uVar3;
}

CTGFileManager* CTGFileManager::CTGFileManager() {
  return this;
}

void CTGFileManager::~CTGFileManager(int __in_chrg) {
	void *pAddress;
	
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

bool CTGFileManager::Init() {
  return true;
}

void CTGFileManager::Shutdown() {
  return;
}

CTGFile* CTGFileManager::OpenFile(char *name, bool bWritable) {
	FileName sName;
	FILE *pFile;
	char *str;
	CTGFileImpl *pTemp;
	
  __sFILE__432_30 *p_Var1;
  CTGDump *pCVar2;
  CTGFileImpl *pCVar3;
  char *mode;
  StackString_260_ sName;
  
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
  __12StringBufferPcUi(&sName.field0_0x0,(char *)((uint)&sName | 8),0x104);
  append__12StringBufferPCci(&sName.field0_0x0,name,-1);
                    /* end of inlined section */
  if (bWritable) {
    mode = "r+b";
  }
  else {
    mode = "rb";
  }
  p_Var1 = fopen(name,mode);
  if (p_Var1 == (__sFILE__432_30 *)0x0) {
    pCVar3 = (CTGFileImpl *)0x0;
  }
  else {
    pCVar2 = __ls__7CTGDumpPCc(&ctgDump,"c:/eor/src2/games/sims/MSrc/CTGFilePS2.cpp");
    pCVar2 = __ls__7CTGDumpPCc(pCVar2,"(");
    pCVar2 = __ls__7CTGDumpi(pCVar2,0x144);
    pCVar2 = __ls__7CTGDumpPCc(pCVar2,"): Opened \"");
    pCVar2 = __ls__7CTGDumpPCc(pCVar2,name);
    __ls__7CTGDumpPCc(pCVar2,"\n");
    pCVar3 = (CTGFileImpl *)__builtin_new(0x114);
    pCVar3 = __11CTGFileImplPviib(pCVar3,(void *)0x0,0,0,false);
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
                    /* end of inlined section */
    pCVar3->m_pFile = p_Var1;
                    /* inlined from c:/eor/src2/games/sims/MSrc/StringBuffer.h */
    copy__12StringBufferRC12StringBuffer(&(pCVar3->msFilename).field0_0x0,&sName.field0_0x0);
                    /* end of inlined section */
  }
  return &pCVar3->field0_0x0;
}

void CTGFileManager::ReleaseFile(CTGFile *file) {
  if (file != (CTGFile *)0x0) {
    (*(code *)file->__vtable->Write)((int)&file->__vtable + (int)*(short *)&file->__vtable->Read,3);
  }
  return;
}

bool CTGFileManager::CreateFile(char *name) {
  return true;
}

bool CTGFileManager::DeleteFile(char *name) {
  return true;
}

bool CTGFileManager::MoveFile(char *fromName, char *toName) {
  return true;
}

bool CTGFileManager::CopyFile(char *fromName, char *toName) {
  return true;
}

bool CTGFileManager::FileExists(char *name) {
	FILE *pFile;
	
  __sFILE__432_30 *stream;
  
  stream = fopen(name,"rb");
  if (stream != (__sFILE__432_30 *)0x0) {
    fclose(stream);
  }
  return stream != (__sFILE__432_30 *)0x0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___14CTGFileManager(&_14CTGFileManager_sTheMgr,2);
    }
    else {
      __14CTGFileManager(&_14CTGFileManager_sTheMgr);
    }
  }
  return;
}

CTGFile* CTGFile::CTGFile() {
  this->__vtable = (CTGFile__vtable *)_vt_7CTGFile;
  return this;
}

char* CTGFileImpl::GetName() {
  char *pcVar1;
  
  pcVar1 = c_str__C12StringBuffer(&(this->msFilename).field0_0x0);
  return pcVar1;
}

void global constructors keyed to CTGFileManager::sTheMgr() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to CTGFileManager::sTheMgr() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
