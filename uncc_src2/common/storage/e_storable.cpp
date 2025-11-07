// STATUS: NOT STARTED

#include "e_storable.h"

ETypeInfo *gpTypeInfo_EStorable = NULL;

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

ETypeInfo EStorable::m_typeInfo;

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

EStorable* EStorable::CreateCopy() {
	void *pData;
	EStorable *pNewDataStructure;
	EMemoryWriteStream writeStream;
	EMemoryReadStream readStream;
	void *pData;
	
  uchar *p;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EMemoryReadStream readStream;
  EStorable *pNewDataStructure;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  __18EMemoryWriteStream((EMemoryWriteStream *)&readStream);
  __ls__FR7EStreamP9EStorable(&readStream.field0_0x0,this);
  p = (uchar *)AllocAndCopyToBuffer__C18EMemoryWriteStream((EMemoryWriteStream *)&readStream);
  ___18EMemoryWriteStream((EMemoryWriteStream *)&readStream,2);
                    /* inlined from c:/eor/src2/common/storage/e_memorystream.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_memorystream.h */
  readStream.field0_0x0.__vtable = (EStream__vtable *)_vt_17EMemoryReadStream;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  readStream.field0_0x0._0_4_ = 0;
                    /* end of inlined section */
  readStream.m_pos = 0;
  readStream.m_pData = p;
  __rs__FR7EStreamRP9EStorable(&readStream.field0_0x0,&pNewDataStructure);
                    /* inlined from c:/eor/src2/common/storage/e_storage.h */
  readStream.field0_0x0.__vtable = (EStream__vtable *)_vt_7EStream;
                    /* end of inlined section */
  FreeBuffer__18EMemoryWriteStreamPv(p);
  return pNewDataStructure;
}

void EStorable::AssertValid(ETypeInfo *pType) {
  IsDerivedFrom__9EStorableP9ETypeInfo(this,pType);
  return;
}

bool EStorable::IsDerivedFrom(ETypeInfo *pType) {
  bool bVar1;
  ETypeInfo *this_00;
  
  if (this == (EStorable *)0x0) {
    bVar1 = false;
  }
  else {
    this_00 = (ETypeInfo *)
              (*(code *)this->__vtable->GetTypeVersion)
                        ((int)&this->__vtable + (int)*(short *)&this->__vtable->GetTypeKey);
    bVar1 = IsDerivedFrom__9ETypeInfoP9ETypeInfo(this_00,pType);
  }
  return bVar1;
}

bool EStorable::IsExactType(ETypeInfo *pType) {
  bool bVar1;
  ETypeInfo *pEVar2;
  
  if (this == (EStorable *)0x0) {
    bVar1 = false;
  }
  else {
    pEVar2 = (ETypeInfo *)
             (*(code *)this->__vtable->GetTypeVersion)
                       ((int)&this->__vtable + (int)*(short *)&this->__vtable->GetTypeKey);
    bVar1 = pEVar2 == pType;
  }
  return bVar1;
}

EStorable* EStorable::DynamicCast(ETypeInfo *pType) {
  bool bVar1;
  
  if (this == (EStorable *)0x0) {
    this = (EStorable *)0x0;
  }
  else {
    bVar1 = IsDerivedFrom__9EStorableP9ETypeInfo(this,pType);
    if (!bVar1) {
      this = (EStorable *)0x0;
    }
  }
  return this;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/common/storage/e_storable.h */
    gpTypeInfo_EStorable =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_9EStorable_m_typeInfo,New__9EStorable,0,"EStorable",&_9EStorable_m_typeInfo);
                    /* end of inlined section */
  }
  return;
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

EStorable* EStorable::New() {
  EStorable *pEVar1;
  
  pEVar1 = (EStorable *)__builtin_new(4);
  pEVar1->__vtable = (EStorable__vtable *)_vt_9EStorable;
  return pEVar1;
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
                    /* inlined from e_standard_heap.h */
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

void global constructors keyed to gpTypeInfo_EStorable() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
