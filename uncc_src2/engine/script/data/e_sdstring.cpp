// STATUS: NOT STARTED

#include "e_sdstring.h"

ETypeInfo *gpTypeInfo_ESDString = NULL;

__vtbl_ptr_type ESDString virtual table[14] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDString::SafeDelete,
		/* .__delta2 = */ 24536
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDString::GetTypeInfo,
		/* .__delta2 = */ 24592
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDString::GetTypeName,
		/* .__delta2 = */ 24608
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDString::GetTypeKey,
		/* .__delta2 = */ 24624
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDString::GetTypeVersion,
		/* .__delta2 = */ 24640
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDString::~ESDString,
		/* .__delta2 = */ 24080
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDString::Read,
		/* .__delta2 = */ 24248
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDString::Write,
		/* .__delta2 = */ 24184
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDString::GetName,
		/* .__delta2 = */ 24840
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDString::GetTypeChar,
		/* .__delta2 = */ 24856
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDString::Print,
		/* .__delta2 = */ 24328
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDString::Test,
		/* .__delta2 = */ 24336
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ESDString::m_typeInfo;

EStream& operator<<(EStream &s, ESDString *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ESDString *&pD) {
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
  *pD = (ESDString *)pStorable;
  return s;
}

ESDString* ESDString::ESDString() {
  __11EScriptData(&this->field0_0x0);
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_9ESDString;
  SetToNull__7EString(&this->m_s);
                    /* end of inlined section */
  return this;
}

void ESDString::~ESDString(int __in_chrg) {
	void *p;
	
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_9ESDString;
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
  Deallocate__7EStringPc(&this->m_s,(this->m_s).m_p);
                    /* end of inlined section */
  ___11EScriptData(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdstring.h */
    _allocBucketFree__FPvUiUi(this,0xc,0xc);
  }
                    /* end of inlined section */
  return;
}

void ESDString::Write(EStream &s) {
  Write__11EScriptDataR7EStream(&this->field0_0x0,s);
  __ls__FR7EStreamRC7EString(s,&this->m_s);
  return;
}

void ESDString::Read(EStream &s) {
  Read__11EScriptDataR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/script/data/e_sdstring.h */
                    /* end of inlined section */
  if (_9ESDString_m_typeInfo.m_readVersion == 0) {
    __rs__FR7EStreamR7EString(s,&this->m_s);
  }
  return;
}

void ESDString::Print() {
  return;
}

bool ESDString::Test() {
                    /* inlined from /eor/src2/common/datastruc/e_string.h */
                    /* end of inlined section */
  return *(this->m_s).m_p != '\0';
}

EString& ESDString::GetParam(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = Pop__14EScriptContext(pContext);
                    /* end of inlined section */
  return (EString *)(pEVar1 + 1);
}

EString& ESDString::GetReturn(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
  pEVar1 = GetReturn__14EScriptContext(pContext);
  return (EString *)(pEVar1 + 1);
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdstring.h */
    gpTypeInfo_ESDString =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_9ESDString_m_typeInfo,New__9ESDString,0,"ESDString",&_11EScriptData_m_typeInfo
                   );
                    /* end of inlined section */
  }
  return;
}

ESDString* ESDString::New() {
  ESDString *pEVar1;
  
  pEVar1 = (ESDString *)__nw__9ESDStringUi(0xc);
  pEVar1 = __9ESDString(pEVar1);
  return pEVar1;
}

void ESDString::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ESDString *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ESDString::GetTypeInfo() {
  return &_9ESDString_m_typeInfo;
}

char* ESDString::GetTypeName() {
  return _9ESDString_m_typeInfo.m_name;
}

u32 ESDString::GetTypeKey() {
  return _9ESDString_m_typeInfo.m_key;
}

u16 ESDString::GetTypeVersion() {
  return _9ESDString_m_typeInfo.m_version;
}

u16 ESDString::GetReadVersion() {
  return _9ESDString_m_typeInfo.m_readVersion;
}

ETypeInfo* ESDString::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_9ESDString_m_typeInfo,New__9ESDString,version,"ESDString",
                      &_11EScriptData_m_typeInfo);
  return pEVar1;
}

ESDString* ESDString::CreateCopy() {
  ESDString *pEVar1;
  
  pEVar1 = (ESDString *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* ESDString::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0xc,0xc);
  return pvVar1;
}

void* ESDString::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void ESDString::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0xc,0xc);
  return;
}

char* ESDString::GetName() {
  return "string";
}

char ESDString::GetTypeChar() {
  return 's';
}

void global constructors keyed to gpTypeInfo_ESDString() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
