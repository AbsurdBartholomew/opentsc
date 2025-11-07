// STATUS: NOT STARTED

#include "e_havokworld.h"

bool _Physics = true;
bool _UseFastSubSpace = true;
ETypeInfo *gpTypeInfo_EHavokWorld = NULL;

__vtbl_ptr_type EHavokWorld virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHavokWorld::SafeDelete,
		/* .__delta2 = */ 15384
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHavokWorld::GetTypeInfo,
		/* .__delta2 = */ 15440
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHavokWorld::GetTypeName,
		/* .__delta2 = */ 15456
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHavokWorld::GetTypeKey,
		/* .__delta2 = */ 15472
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHavokWorld::GetTypeVersion,
		/* .__delta2 = */ 15488
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHavokWorld::~EHavokWorld,
		/* .__delta2 = */ 15000
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHavokWorld::Read,
		/* .__delta2 = */ 15048
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EHavokWorld::Write,
		/* .__delta2 = */ 15056
	},
	/* [9] = */ {
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

ETypeInfo EHavokWorld::m_typeInfo;

EStream& operator<<(EStream &s, EHavokWorld *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,&pD->field0_0x0);
  return pEVar1;
}

EStream& operator>>(EStream &s, EHavokWorld *&pD) {
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
  *pD = (EHavokWorld *)pStorable;
  return s;
}

EHavokWorld* EHavokWorld::EHavokWorld() {
	EStorable *this;
	
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_11EHavokWorld;
  return this;
}

void EHavokWorld::~EHavokWorld(int __in_chrg) {
	EStorable *this;
	void *pAddress;
	
                    /* inlined from /eor/src2/common/storage/e_storable.h */
  (this->field0_0x0).__vtable = (EStorable__vtable *)_vt_9EStorable;
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

void EHavokWorld::Read(EStream &s) {
  return;
}

void EHavokWorld::Write(EStream &s) {
  return;
}

void EHavokWorld::Init(char *szLevelName) {
  return;
}

void EHavokWorld::Update() {
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/havok/e_havokworld.h */
    gpTypeInfo_EHavokWorld =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_11EHavokWorld_m_typeInfo,New__11EHavokWorld,0,"EHavokWorld",
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

EHavokWorld* EHavokWorld::New() {
  EHavokWorld *pEVar1;
  
  pEVar1 = (EHavokWorld *)__builtin_new(8);
  pEVar1 = __11EHavokWorld(pEVar1);
  return pEVar1;
}

void EHavokWorld::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EHavokWorld *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).__vtable + (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EHavokWorld::GetTypeInfo() {
  return &_11EHavokWorld_m_typeInfo;
}

char* EHavokWorld::GetTypeName() {
  return _11EHavokWorld_m_typeInfo.m_name;
}

u32 EHavokWorld::GetTypeKey() {
  return _11EHavokWorld_m_typeInfo.m_key;
}

u16 EHavokWorld::GetTypeVersion() {
  return _11EHavokWorld_m_typeInfo.m_version;
}

u16 EHavokWorld::GetReadVersion() {
  return _11EHavokWorld_m_typeInfo.m_readVersion;
}

ETypeInfo* EHavokWorld::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_11EHavokWorld_m_typeInfo,New__11EHavokWorld,version,"EHavokWorld",
                      &_9EStorable_m_typeInfo);
  return pEVar1;
}

EHavokWorld* EHavokWorld::CreateCopy() {
  EHavokWorld *pEVar1;
  
  pEVar1 = (EHavokWorld *)CreateCopy__9EStorable(&this->field0_0x0);
  return pEVar1;
}

void global constructors keyed to _Physics() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
