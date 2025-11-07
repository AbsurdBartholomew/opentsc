// STATUS: NOT STARTED

#include "e_sdpointer.h"

ETypeInfo *gpTypeInfo_ESDPointer = NULL;

__vtbl_ptr_type ESDPointer virtual table[14] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDPointer::SafeDelete,
		/* .__delta2 = */ 26480
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDPointer::GetTypeInfo,
		/* .__delta2 = */ 26536
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDPointer::GetTypeName,
		/* .__delta2 = */ 26552
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDPointer::GetTypeKey,
		/* .__delta2 = */ 26568
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDPointer::GetTypeVersion,
		/* .__delta2 = */ 26584
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDPointer::~ESDPointer,
		/* .__delta2 = */ 26040
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDPointer::Read,
		/* .__delta2 = */ 26192
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDPointer::Write,
		/* .__delta2 = */ 26128
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDPointer::GetName,
		/* .__delta2 = */ 26784
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDPointer::GetTypeChar,
		/* .__delta2 = */ 26800
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDPointer::Print,
		/* .__delta2 = */ 26272
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDPointer::Test,
		/* .__delta2 = */ 26280
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ESDPointer::m_typeInfo;

EStream& operator<<(EStream &s, ESDPointer *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ESDPointer *&pD) {
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
  *pD = (ESDPointer *)pStorable;
  return s;
}

ESDPointer* ESDPointer::ESDPointer() {
  __11EScriptData(&this->field0_0x0);
  this->m_p = (EInstance *)0x0;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_10ESDPointer;
  return this;
}

void ESDPointer::~ESDPointer(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_10ESDPointer;
  ___11EScriptData(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdpointer.h */
    _allocBucketFree__FPvUiUi(this,0xc,0xc);
  }
                    /* end of inlined section */
  return;
}

void ESDPointer::Write(EStream &s) {
  Write__11EScriptDataR7EStream(&this->field0_0x0,s);
  __ls__FR7EStreamP9EInstance(s,this->m_p);
  return;
}

void ESDPointer::Read(EStream &s) {
  Read__11EScriptDataR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/script/data/e_sdpointer.h */
                    /* end of inlined section */
  if (_10ESDPointer_m_typeInfo.m_readVersion == 0) {
    __rs__FR7EStreamRP9EInstance(s,&this->m_p);
  }
  return;
}

void ESDPointer::Print() {
  return;
}

bool ESDPointer::Test() {
  return this->m_p != (EInstance *)0x0;
}

EInstance*& ESDPointer::GetParam(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = Pop__14EScriptContext(pContext);
                    /* end of inlined section */
  return (EInstance **)(pEVar1 + 1);
}

EInstance*& ESDPointer::GetReturn(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
  pEVar1 = GetReturn__14EScriptContext(pContext);
  return (EInstance **)(pEVar1 + 1);
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdpointer.h */
    gpTypeInfo_ESDPointer =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_10ESDPointer_m_typeInfo,New__10ESDPointer,0,"ESDPointer",
                    &_11EScriptData_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ESDPointer* ESDPointer::New() {
  ESDPointer *pEVar1;
  
  pEVar1 = (ESDPointer *)__nw__10ESDPointerUi(0xc);
  pEVar1 = __10ESDPointer(pEVar1);
  return pEVar1;
}

void ESDPointer::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ESDPointer *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ESDPointer::GetTypeInfo() {
  return &_10ESDPointer_m_typeInfo;
}

char* ESDPointer::GetTypeName() {
  return _10ESDPointer_m_typeInfo.m_name;
}

u32 ESDPointer::GetTypeKey() {
  return _10ESDPointer_m_typeInfo.m_key;
}

u16 ESDPointer::GetTypeVersion() {
  return _10ESDPointer_m_typeInfo.m_version;
}

u16 ESDPointer::GetReadVersion() {
  return _10ESDPointer_m_typeInfo.m_readVersion;
}

ETypeInfo* ESDPointer::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_10ESDPointer_m_typeInfo,New__10ESDPointer,version,"ESDPointer",
                      &_11EScriptData_m_typeInfo);
  return pEVar1;
}

ESDPointer* ESDPointer::CreateCopy() {
  ESDPointer *pEVar1;
  
  pEVar1 = (ESDPointer *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* ESDPointer::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0xc,0xc);
  return pvVar1;
}

void* ESDPointer::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void ESDPointer::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0xc,0xc);
  return;
}

char* ESDPointer::GetName() {
  return "pointer";
}

char ESDPointer::GetTypeChar() {
  return 'p';
}

void global constructors keyed to gpTypeInfo_ESDPointer() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
