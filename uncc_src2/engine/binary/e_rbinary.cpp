// STATUS: NOT STARTED

#include "e_rbinary.h"

ETypeInfo *gpTypeInfo_ERBinary = NULL;

__vtbl_ptr_type ERBinary virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERBinary::SafeDelete,
		/* .__delta2 = */ -16152
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERBinary::GetTypeInfo,
		/* .__delta2 = */ -16096
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERBinary::GetTypeName,
		/* .__delta2 = */ -16080
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERBinary::GetTypeKey,
		/* .__delta2 = */ -16064
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERBinary::GetTypeVersion,
		/* .__delta2 = */ -16048
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERBinary::~ERBinary,
		/* .__delta2 = */ -16768
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERBinary::Read,
		/* .__delta2 = */ -16536
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERBinary::Write,
		/* .__delta2 = */ -16648
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

ETypeInfo ERBinary::m_typeInfo;

EStream& operator<<(EStream &s, ERBinary *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERBinary *&pD) {
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
  *pD = (ERBinary *)pStorable;
  return s;
}

ERBinary* ERBinary::ERBinary() {
  __9EResource(&this->field0_0x0);
  this->m_pData = (void *)0x0;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_8ERBinary;
  this->m_size = 0;
  return this;
}

void ERBinary::~ERBinary(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_8ERBinary;
  Deallocate__8ERBinary(this);
  ___9EResource(&this->field0_0x0,__in_chrg);
  return;
}

void ERBinary::Deallocate() {
  _memmanFree__FPv(this->m_pData);
  this->m_size = 0;
  this->m_pData = (void *)0x0;
  return;
}

void ERBinary::Write(EStream &s) {
	EStream &s;
	unsigned int d;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uint d;
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
  Write__9EResourceR7EStream(&this->field0_0x0,s);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  d = this->m_size;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&d,4);
                    /* end of inlined section */
  (*(code *)s->__vtable[1].Write)
            (&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,this->m_pData,this->m_size);
  return;
}

void ERBinary::Read(EStream &s) {
	EStream &s;
	
  void *pvVar1;
  
  Deallocate__8ERBinary(this);
  Read__9EResourceR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/binary/e_rbinary.h */
                    /* end of inlined section */
  if (_8ERBinary_m_typeInfo.m_readVersion == 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_size,4);
                    /* end of inlined section */
    pvVar1 = _memmanAlloc__FUiUi(this->m_size,4);
    this->m_pData = pvVar1;
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,pvVar1,this->m_size);
  }
  return;
}

void ERBinary::Load(EFile *pFile, u32 uLength) {
  void *pvVar1;
  
  Deallocate__8ERBinary(this);
  this->m_size = uLength;
  pvVar1 = _memmanAlloc__FUiUi(uLength,4);
  this->m_pData = pvVar1;
  (*(code *)pFile->__vtable->Tell)
            ((int)&pFile->__vtable + (int)*(short *)&pFile->__vtable->Seek,pvVar1,this->m_size);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/binary/e_rbinary.h */
    gpTypeInfo_ERBinary =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_8ERBinary_m_typeInfo,New__8ERBinary,0,"ERBinary",&_9EResource_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ERBinary* ERBinary::New() {
  ERBinary *pEVar1;
  
  pEVar1 = (ERBinary *)__builtin_new(0x1c);
  pEVar1 = __8ERBinary(pEVar1);
  return pEVar1;
}

void ERBinary::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERBinary *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ERBinary::GetTypeInfo() {
  return &_8ERBinary_m_typeInfo;
}

char* ERBinary::GetTypeName() {
  return _8ERBinary_m_typeInfo.m_name;
}

u32 ERBinary::GetTypeKey() {
  return _8ERBinary_m_typeInfo.m_key;
}

u16 ERBinary::GetTypeVersion() {
  return _8ERBinary_m_typeInfo.m_version;
}

u16 ERBinary::GetReadVersion() {
  return _8ERBinary_m_typeInfo.m_readVersion;
}

ETypeInfo* ERBinary::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_8ERBinary_m_typeInfo,New__8ERBinary,version,"ERBinary",
                      &_9EResource_m_typeInfo);
  return pEVar1;
}

ERBinary* ERBinary::CreateCopy() {
  ERBinary *pEVar1;
  
  pEVar1 = (ERBinary *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* ERBinary::GetData() {
  return this->m_pData;
}

u32 ERBinary::GetSize() {
  return this->m_size;
}

void global constructors keyed to gpTypeInfo_ERBinary() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
