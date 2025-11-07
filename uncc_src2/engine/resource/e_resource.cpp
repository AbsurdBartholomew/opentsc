// STATUS: NOT STARTED

#include "e_resource.h"

ETypeInfo *gpTypeInfo_EResource = NULL;

__vtbl_ptr_type EResource virtual table[13] = {
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
		/* .__pfn = */ &EResource::~EResource,
		/* .__delta2 = */ 9696
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

__vtbl_ptr_type EStorable virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::SafeDelete,
		/* .__delta2 = */ 10264
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeInfo,
		/* .__delta2 = */ 10320
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeName,
		/* .__delta2 = */ 10336
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeKey,
		/* .__delta2 = */ 10352
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::GetTypeVersion,
		/* .__delta2 = */ 10368
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::~EStorable,
		/* .__delta2 = */ 10384
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::Read,
		/* .__delta2 = */ 10432
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EStorable::Write,
		/* .__delta2 = */ 10440
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EResource::m_typeInfo;

EStream& operator<<(EStream &s, EResource *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,&pD->field0_0x0);
  return pEVar1;
}

EStream& operator>>(EStream &s, EResource *&pD) {
	EStorable *pStorable;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EStorable *pStorable;
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
  __rs__FR7EStreamRP9EStorable(s,&pStorable);
  *pD = (EResource *)pStorable;
  return s;
}

EResource* EResource::EResource() {
	EStorable *this;
	
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EResource;
  SetToNull__7EString(&this->m_name);
                    /* end of inlined section */
  this->m_nRefs = 1;
  this->m_pManager = (EResourceManager *)0x0;
  return this;
}

void EResource::~EResource(int __in_chrg) {
	EStorable *this;
	int __in_chrg;
	void *pAddress;
	
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EResource;
  if (this->m_pManager != (EResourceManager *)0x0) {
    ResourceDestructing__16EResourceManagerP9EResource(this->m_pManager,this);
  }
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  Deallocate__7EStringPc(&this->m_name,(this->m_name).m_p);
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EResource::Write(EStream &s) {
  __ls__FR7EStreamRC7EString(s,&this->m_name);
  return;
}

void EResource::Read(EStream &s) {
	EStorable *this;
	EStream &s;
	
                    /* inlined from c:/eor/src2/engine/resource/e_resource.h */
                    /* end of inlined section */
  if (_9EResource_m_typeInfo.m_readVersion == 0) {
    __rs__FR7EStreamR7EString(s,&this->m_name);
  }
  return;
}

void EResource::DelRef() {
  EStorable__vtable *pEVar1;
  int iVar2;
  
  if (this->m_pManager == (EResourceManager *)0x0) {
    iVar2 = this->m_nRefs + -1;
    this->m_nRefs = iVar2;
    if (iVar2 == 0) {
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1->GetTypeName)
                ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1->GetTypeInfo);
    }
  }
  else {
    DelRef__16EResourceManagerP9EResource(this->m_pManager,this);
  }
  return;
}

void EResource::AddRef() {
  if (this->m_pManager == (EResourceManager *)0x0) {
    this->m_nRefs = this->m_nRefs + 1;
  }
  else {
    AddRef__16EResourceManagerP9EResource(this->m_pManager,this);
  }
  return;
}

void EResource::Reload(EFile *pFile) {
	EFileStream s;
	
  EStorable__vtable *pEVar1;
  int pos;
  EFileStream s;
  
  __11EFileStream(&s);
  pos = (*(code *)pFile->__vtable->GetDrive)
                  ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->GetDeviceType);
  Attach__11EFileStreamP5EFile15FSReadWriteModeib(&s,pFile,FS_READ,pos,false);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[2].GetTypeName)
            ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[2].GetTypeInfo,&s);
  ___11EFileStream(&s,2);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/resource/e_resource.h */
    gpTypeInfo_EResource =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_9EResource_m_typeInfo,New__9EResource,0,"EResource",&_9EStorable_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void EStorable::SafeDelete() {
  if (this != (EStorable *)0x0) {
    (*(code *)this->__vtable[1].GetTypeKey)
              ((int)&this->__vtable + (int)*(short *)&this->__vtable[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EStorable::GetTypeInfo() {
  return &_9EStorable_m_typeInfo;
}

char* EStorable::GetTypeName() {
  return _9EStorable_m_typeInfo.m_name;
}

u32 EStorable::GetTypeKey() {
  return _9EStorable_m_typeInfo.m_key;
}

u16 EStorable::GetTypeVersion() {
  return _9EStorable_m_typeInfo.m_version;
}

void EStorable::~EStorable(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
  }
                    /* end of inlined section */
  return;
}

void EStorable::Read(EStream &s) {
  return;
}

void EStorable::Write(EStream &s) {
  return;
}

EResource* EResource::New() {
  EResource *pEVar1;
  
  pEVar1 = (EResource *)__builtin_new(0x14);
  pEVar1 = __9EResource(pEVar1);
  return pEVar1;
}

void EResource::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EResource *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EResource::GetTypeInfo() {
  return &_9EResource_m_typeInfo;
}

char* EResource::GetTypeName() {
  return _9EResource_m_typeInfo.m_name;
}

u32 EResource::GetTypeKey() {
  return _9EResource_m_typeInfo.m_key;
}

u16 EResource::GetTypeVersion() {
  return _9EResource_m_typeInfo.m_version;
}

u16 EResource::GetReadVersion() {
  return _9EResource_m_typeInfo.m_readVersion;
}

ETypeInfo* EResource::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_9EResource_m_typeInfo,New__9EResource,version,"EResource",
                      &_9EStorable_m_typeInfo);
  return pEVar1;
}

EResource* EResource::CreateCopy() {
  EResource *pEVar1;
  
  pEVar1 = (EResource *)CreateCopy__9EStorable(&this->field0_0x0);
  return pEVar1;
}

u32 EResource::GetResId() {
  return this->m_resId;
}

void EResource::Init() {
  return;
}

void EResource::Reload(EStream &s) {
  return;
}

void global constructors keyed to gpTypeInfo_EResource() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
