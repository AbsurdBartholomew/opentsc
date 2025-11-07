// STATUS: NOT STARTED

#include "e_scriptdata.h"

ETypeInfo *gpTypeInfo_EScriptData = NULL;

__vtbl_ptr_type EScriptData virtual table[14] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptData::SafeDelete,
		/* .__delta2 = */ 8712
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptData::GetTypeInfo,
		/* .__delta2 = */ 8768
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptData::GetTypeName,
		/* .__delta2 = */ 8784
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptData::GetTypeKey,
		/* .__delta2 = */ 8800
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptData::GetTypeVersion,
		/* .__delta2 = */ 8816
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptData::~EScriptData,
		/* .__delta2 = */ 8192
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptData::Read,
		/* .__delta2 = */ 8248
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptData::Write,
		/* .__delta2 = */ 8240
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptData::GetName,
		/* .__delta2 = */ 8944
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptData::GetTypeChar,
		/* .__delta2 = */ 8960
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptData::Print,
		/* .__delta2 = */ 8968
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EScriptData::Test,
		/* .__delta2 = */ 8336
	},
	/* [13] = */ {
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

ETypeInfo EScriptData::m_typeInfo;

EStream& operator<<(EStream &s, EScriptData *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,&pD->field0_0x0);
  return pEVar1;
}

EStream& operator>>(EStream &s, EScriptData *&pD) {
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
  *pD = (EScriptData *)pStorable;
  return s;
}

EScriptData* EScriptData::EScriptData() {
	EStorable *this;
	
  this->m_nRefs = 0;
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_11EScriptData;
  return this;
}

void EScriptData::~EScriptData(int __in_chrg) {
	EStorable *this;
	void *pAddress;
	
                    /* inlined from /eor/src2/common/storage/e_storable.h */
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EScriptData::Write(EStream &s) {
  return;
}

void EScriptData::Read(EStream &s) {
	EStream &s;
	int nRefs;
	EStream &s;
	
  undefined8 unaff_retaddr;
  int nRefs;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from c:/eor/src2/engine/script/data/e_scriptdata.h */
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* end of inlined section */
  if (((ushort)_11EScriptData_m_typeInfo.m_readVersion < 2) &&
     (_11EScriptData_m_typeInfo.m_readVersion == 0)) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&nRefs,4);
  }
  return;
}

bool EScriptData::Test() {
  return false;
}

void EScriptData::DelRef() {
  EStorable__vtable *pEVar1;
  int iVar2;
  
  iVar2 = this->m_nRefs + -1;
  this->m_nRefs = iVar2;
  if (iVar2 == 0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1->GetTypeName)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1->GetTypeInfo);
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/script/data/e_scriptdata.h */
    gpTypeInfo_EScriptData =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_11EScriptData_m_typeInfo,New__11EScriptData,1,"EScriptData",
                    &_9EStorable_m_typeInfo);
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

EScriptData* EScriptData::New() {
  EScriptData *pEVar1;
  
  pEVar1 = (EScriptData *)__builtin_new(8);
  pEVar1 = __11EScriptData(pEVar1);
  return pEVar1;
}

void EScriptData::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EScriptData *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EScriptData::GetTypeInfo() {
  return &_11EScriptData_m_typeInfo;
}

char* EScriptData::GetTypeName() {
  return _11EScriptData_m_typeInfo.m_name;
}

u32 EScriptData::GetTypeKey() {
  return _11EScriptData_m_typeInfo.m_key;
}

u16 EScriptData::GetTypeVersion() {
  return _11EScriptData_m_typeInfo.m_version;
}

u16 EScriptData::GetReadVersion() {
  return _11EScriptData_m_typeInfo.m_readVersion;
}

ETypeInfo* EScriptData::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_11EScriptData_m_typeInfo,New__11EScriptData,version,"EScriptData",
                      &_9EStorable_m_typeInfo);
  return pEVar1;
}

EScriptData* EScriptData::CreateCopy() {
  EScriptData *pEVar1;
  
  pEVar1 = (EScriptData *)CreateCopy__9EStorable(&this->field0_0x0);
  return pEVar1;
}

char* EScriptData::GetName() {
  return "<error>";
}

char EScriptData::GetTypeChar() {
  return ' ';
}

void EScriptData::Print() {
  return;
}

void EScriptData::AddRef() {
  this->m_nRefs = this->m_nRefs + 1;
  return;
}

int EScriptData::GetRefCount() {
  return this->m_nRefs;
}

void global constructors keyed to gpTypeInfo_EScriptData() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
