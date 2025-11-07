// STATUS: NOT STARTED

#include "e_sdfloat.h"

ETypeInfo *gpTypeInfo_ESDFloat = NULL;

__vtbl_ptr_type ESDFloat virtual table[14] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDFloat::SafeDelete,
		/* .__delta2 = */ 29456
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDFloat::GetTypeInfo,
		/* .__delta2 = */ 29512
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDFloat::GetTypeName,
		/* .__delta2 = */ 29528
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDFloat::GetTypeKey,
		/* .__delta2 = */ 29544
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDFloat::GetTypeVersion,
		/* .__delta2 = */ 29560
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDFloat::~ESDFloat,
		/* .__delta2 = */ 28952
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDFloat::Read,
		/* .__delta2 = */ 29128
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDFloat::Write,
		/* .__delta2 = */ 29040
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDFloat::GetName,
		/* .__delta2 = */ 29760
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDFloat::GetTypeChar,
		/* .__delta2 = */ 29776
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDFloat::Print,
		/* .__delta2 = */ 29224
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDFloat::Test,
		/* .__delta2 = */ 29232
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ESDFloat::m_typeInfo;

EStream& operator<<(EStream &s, ESDFloat *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ESDFloat *&pD) {
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
  *pD = (ESDFloat *)pStorable;
  return s;
}

ESDFloat* ESDFloat::ESDFloat() {
  __11EScriptData(&this->field0_0x0);
  this->m_f = 0.0;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_8ESDFloat;
  return this;
}

void ESDFloat::~ESDFloat(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_8ESDFloat;
  ___11EScriptData(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdfloat.h */
    _allocBucketFree__FPvUiUi(this,0xc,0xc);
  }
                    /* end of inlined section */
  return;
}

void ESDFloat::Write(EStream &s) {
	EStream &s;
	float d;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float d;
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
  Write__11EScriptDataR7EStream(&this->field0_0x0,s);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  d = this->m_f;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&d,4);
  return;
}

void ESDFloat::Read(EStream &s) {
	EStream &s;
	
  Read__11EScriptDataR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/script/data/e_sdfloat.h */
                    /* end of inlined section */
  if (_8ESDFloat_m_typeInfo.m_readVersion == 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_f,4);
                    /* end of inlined section */
  }
  return;
}

void ESDFloat::Print() {
  return;
}

bool ESDFloat::Test() {
  return this->m_f != 0.0;
}

float& ESDFloat::GetParam(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = Pop__14EScriptContext(pContext);
                    /* end of inlined section */
  return (float *)(pEVar1 + 1);
}

float& ESDFloat::GetReturn(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
  pEVar1 = GetReturn__14EScriptContext(pContext);
  return (float *)(pEVar1 + 1);
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdfloat.h */
    gpTypeInfo_ESDFloat =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_8ESDFloat_m_typeInfo,New__8ESDFloat,0,"ESDFloat",&_11EScriptData_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ESDFloat* ESDFloat::New() {
  ESDFloat *pEVar1;
  
  pEVar1 = (ESDFloat *)__nw__8ESDFloatUi(0xc);
  pEVar1 = __8ESDFloat(pEVar1);
  return pEVar1;
}

void ESDFloat::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ESDFloat *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ESDFloat::GetTypeInfo() {
  return &_8ESDFloat_m_typeInfo;
}

char* ESDFloat::GetTypeName() {
  return _8ESDFloat_m_typeInfo.m_name;
}

u32 ESDFloat::GetTypeKey() {
  return _8ESDFloat_m_typeInfo.m_key;
}

u16 ESDFloat::GetTypeVersion() {
  return _8ESDFloat_m_typeInfo.m_version;
}

u16 ESDFloat::GetReadVersion() {
  return _8ESDFloat_m_typeInfo.m_readVersion;
}

ETypeInfo* ESDFloat::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_8ESDFloat_m_typeInfo,New__8ESDFloat,version,"ESDFloat",
                      &_11EScriptData_m_typeInfo);
  return pEVar1;
}

ESDFloat* ESDFloat::CreateCopy() {
  ESDFloat *pEVar1;
  
  pEVar1 = (ESDFloat *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* ESDFloat::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0xc,0xc);
  return pvVar1;
}

void* ESDFloat::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void ESDFloat::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0xc,0xc);
  return;
}

char* ESDFloat::GetName() {
  return "float";
}

char ESDFloat::GetTypeChar() {
  return 'f';
}

void global constructors keyed to gpTypeInfo_ESDFloat() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
