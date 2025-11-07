// STATUS: NOT STARTED

#include "e_ps2raudiosample.h"

__vtbl_ptr_type ERSampledata virtual table[13] = {
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
		/* .__pfn = */ &ERSampledata::~ERSampledata,
		/* .__delta2 = */ 15352
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
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10048
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void* VAGheader::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size + 0x3f & 0xffffffc0,0x40);
  return pvVar1;
}

void VAGheader::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

ERSampledata* ERSampledata::ERSampledata() {
  __9EResource(&this->field0_0x0);
  this->m_pHeader = (VAGheader *)0x0;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_12ERSampledata;
  return this;
}

void ERSampledata::~ERSampledata(int __in_chrg) {
	void *ptr;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_12ERSampledata;
  OnDelRef__22EPS2AudioSampleManagerP12ERSampledata(&_ps2audiosampleman,this);
  __dl__9VAGheaderPv(this->m_pHeader);
  this->m_pHeader = (VAGheader *)0x0;
  ___9EResource(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/engine/audiosample/e_raudiosample.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ERSampledata::Load(EFile *pFile) {
	EFSRead desc;
	ESleep sleeper;
	int result;
	int retcode;
	
  VAGheader *pVVar1;
  uint uVar2;
  int iVar3;
  EFile__vtable *pEVar4;
  int iVar5;
  EFSRead desc;
  ESleep sleeper;
  
  __6ESleep(&sleeper);
  iVar5 = 0;
  pVVar1 = (VAGheader *)__nw__9VAGheaderUi(0x40);
  this->m_pHeader = pVVar1;
  desc.field0_0x0._8_8_ = CONCAT71(desc.field0_0x0._9_7_,10);
  desc.field0_0x0._8_8_ = desc.field0_0x0._8_8_ & 0xffffffffffc0ffff;
  desc.field0_0x0.size = 0x28;
  uVar2 = (*(code *)pFile->__vtable->GetDrive)
                    ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetDeviceType);
  desc.flags = 0;
  desc.field0_0x0._8_8_ = desc.field0_0x0._8_8_ & 0xffffffff | (ulong)uVar2 << 0x20;
  desc.field0_0x0.id =
       (*(code *)pFile->__vtable[1].GetExt)
                 ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable[1].GetName);
  desc.addr = this->m_pHeader;
  desc.numBytes = 0x40;
  SyncDCache(desc.addr,(char *)((int)desc.addr + 0x30) + 0xf);
  do {
    iVar3 = ReadStream__16EPs2IOPInterfaceRC7EFSRead(&_ps2IOPInterface,&desc);
    if (iVar3 < 1) {
      if (-1 < iVar3) {
        pEVar4 = pFile->__vtable;
        goto LAB_002b3d88;
      }
      Sleep__6ESleepUi(&sleeper,10);
    }
    else {
      iVar5 = iVar5 + iVar3;
      desc.addr = (void *)((int)desc.addr + iVar3);
      desc.numBytes = desc.numBytes - iVar3;
      desc.field0_0x0._8_8_ =
           desc.field0_0x0._8_8_ & 0xffffffff | (ulong)(desc.field0_0x0.pos + iVar3) << 0x20;
    }
  } while (iVar5 < 0x40);
  pEVar4 = pFile->__vtable;
LAB_002b3d88:
  (*(code *)pEVar4->GetAccessMode)
            ((int)&pFile->__vtable + (int)*(short *)&pEVar4->GetIOMode,iVar5,1);
  this->m_pHeader->filler[0] = '\0';
  __as__7EStringPCc(&(this->field0_0x0).m_name,this->m_pHeader->name);
  ___6ESleep(&sleeper,2);
  return;
}

void* ERSampledata::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,4);
  return pvVar1;
}

void ERSampledata::operator delete(void *ptr) {
  _memmanFree__FPv(ptr);
  return;
}

ESampleHeader& ERSampledata::GetSampleHeader() {
  return this->m_pHeader;
}
