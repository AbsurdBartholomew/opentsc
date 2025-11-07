// STATUS: NOT STARTED

#include "e_sdvector.h"

ETypeInfo *gpTypeInfo_ESDVector = NULL;

__vtbl_ptr_type ESDVector virtual table[14] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDVector::SafeDelete,
		/* .__delta2 = */ 23560
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDVector::GetTypeInfo,
		/* .__delta2 = */ 23616
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDVector::GetTypeName,
		/* .__delta2 = */ 23632
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDVector::GetTypeKey,
		/* .__delta2 = */ 23648
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDVector::GetTypeVersion,
		/* .__delta2 = */ 23664
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDVector::~ESDVector,
		/* .__delta2 = */ 23056
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDVector::Read,
		/* .__delta2 = */ 23208
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDVector::Write,
		/* .__delta2 = */ 23144
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDVector::GetName,
		/* .__delta2 = */ 23864
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDVector::GetTypeChar,
		/* .__delta2 = */ 23880
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDVector::Print,
		/* .__delta2 = */ 23288
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDVector::Test,
		/* .__delta2 = */ 23296
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ESDVector::m_typeInfo;

EStream& operator<<(EStream &s, ESDVector *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ESDVector *&pD) {
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
  *pD = (ESDVector *)pStorable;
  return s;
}

ESDVector* ESDVector::ESDVector() {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  
  __11EScriptData(&this->field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_9ESDVector;
  puVar1 = (undefined *)((int)&(this->m_v).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_v & 7;
  puVar3 = (ulong *)((int)&this->m_v - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_v).field0_0x0.d[2] = 0.0;
  return this;
}

void ESDVector::~ESDVector(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_9ESDVector;
  ___11EScriptData(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdvector.h */
    _allocBucketFree__FPvUiUi(this,0x14,0x14);
  }
                    /* end of inlined section */
  return;
}

void ESDVector::Write(EStream &s) {
  Write__11EScriptDataR7EStream(&this->field0_0x0,s);
  __ls__FR7EStreamRC5EVec3(s,&this->m_v);
  return;
}

void ESDVector::Read(EStream &s) {
  Read__11EScriptDataR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/script/data/e_sdvector.h */
                    /* end of inlined section */
  if (_9ESDVector_m_typeInfo.m_readVersion == 0) {
    __rs__FR7EStreamR5EVec3(s,&this->m_v);
  }
  return;
}

void ESDVector::Print() {
  return;
}

bool ESDVector::Test() {
  if ((this->m_v).field0_0x0.d[0] == 0.0) {
                    /* end of inlined section */
    if ((this->m_v).field0_0x0.d[1] != 0.0) {
      return true;
    }
                    /* end of inlined section */
    if ((this->m_v).field0_0x0.d[2] == 0.0) {
      return false;
    }
  }
  return true;
}

EVec3& ESDVector::GetParam(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = Pop__14EScriptContext(pContext);
                    /* end of inlined section */
  return (EVec3 *)(pEVar1 + 1);
}

EVec3& ESDVector::GetReturn(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
  pEVar1 = GetReturn__14EScriptContext(pContext);
  return (EVec3 *)(pEVar1 + 1);
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdvector.h */
    gpTypeInfo_ESDVector =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_9ESDVector_m_typeInfo,New__9ESDVector,0,"ESDVector",&_11EScriptData_m_typeInfo
                   );
                    /* end of inlined section */
  }
  return;
}

ESDVector* ESDVector::New() {
  ESDVector *pEVar1;
  
  pEVar1 = (ESDVector *)__nw__9ESDVectorUi(0x14);
  pEVar1 = __9ESDVector(pEVar1);
  return pEVar1;
}

void ESDVector::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ESDVector *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ESDVector::GetTypeInfo() {
  return &_9ESDVector_m_typeInfo;
}

char* ESDVector::GetTypeName() {
  return _9ESDVector_m_typeInfo.m_name;
}

u32 ESDVector::GetTypeKey() {
  return _9ESDVector_m_typeInfo.m_key;
}

u16 ESDVector::GetTypeVersion() {
  return _9ESDVector_m_typeInfo.m_version;
}

u16 ESDVector::GetReadVersion() {
  return _9ESDVector_m_typeInfo.m_readVersion;
}

ETypeInfo* ESDVector::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_9ESDVector_m_typeInfo,New__9ESDVector,version,"ESDVector",
                      &_11EScriptData_m_typeInfo);
  return pEVar1;
}

ESDVector* ESDVector::CreateCopy() {
  ESDVector *pEVar1;
  
  pEVar1 = (ESDVector *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* ESDVector::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x14,0x14);
  return pvVar1;
}

void* ESDVector::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void ESDVector::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x14,0x14);
  return;
}

char* ESDVector::GetName() {
  return "vector";
}

char ESDVector::GetTypeChar() {
  return 'v';
}

void global constructors keyed to gpTypeInfo_ESDVector() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
