// STATUS: NOT STARTED

#include "e_sdint.h"

ETypeInfo *gpTypeInfo_ESDInt = NULL;

__vtbl_ptr_type ESDInt virtual table[14] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDInt::SafeDelete,
		/* .__delta2 = */ 28440
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDInt::GetTypeInfo,
		/* .__delta2 = */ 28496
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDInt::GetTypeName,
		/* .__delta2 = */ 28512
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDInt::GetTypeKey,
		/* .__delta2 = */ 28528
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDInt::GetTypeVersion,
		/* .__delta2 = */ 28544
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDInt::~ESDInt,
		/* .__delta2 = */ 27960
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDInt::Read,
		/* .__delta2 = */ 28136
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDInt::Write,
		/* .__delta2 = */ 28048
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDInt::GetName,
		/* .__delta2 = */ 28744
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDInt::GetTypeChar,
		/* .__delta2 = */ 28760
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDInt::Print,
		/* .__delta2 = */ 28232
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDInt::Test,
		/* .__delta2 = */ 28240
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ESDInt::m_typeInfo;

EStream& operator<<(EStream &s, ESDInt *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ESDInt *&pD) {
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
  *pD = (ESDInt *)pStorable;
  return s;
}

ESDInt* ESDInt::ESDInt() {
  __11EScriptData(&this->field0_0x0);
  this->m_i = 0;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_6ESDInt;
  return this;
}

void ESDInt::~ESDInt(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_6ESDInt;
  ___11EScriptData(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdint.h */
    _allocBucketFree__FPvUiUi(this,0xc,0xc);
  }
                    /* end of inlined section */
  return;
}

void ESDInt::Write(EStream &s) {
	EStream &s;
	int d;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  int d;
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
  d = this->m_i;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&d,4);
  return;
}

void ESDInt::Read(EStream &s) {
	EStream &s;
	
  Read__11EScriptDataR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/script/data/e_sdint.h */
                    /* end of inlined section */
  if (_6ESDInt_m_typeInfo.m_readVersion == 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_i,4);
                    /* end of inlined section */
  }
  return;
}

void ESDInt::Print() {
  return;
}

bool ESDInt::Test() {
  return this->m_i != 0;
}

int& ESDInt::GetParam(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = Pop__14EScriptContext(pContext);
                    /* end of inlined section */
  return (int *)(pEVar1 + 1);
}

int& ESDInt::GetReturn(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
  pEVar1 = GetReturn__14EScriptContext(pContext);
  return (int *)(pEVar1 + 1);
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdint.h */
    gpTypeInfo_ESDInt =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_6ESDInt_m_typeInfo,New__6ESDInt,0,"ESDInt",&_11EScriptData_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ESDInt* ESDInt::New() {
  ESDInt *pEVar1;
  
  pEVar1 = (ESDInt *)__nw__6ESDIntUi(0xc);
  pEVar1 = __6ESDInt(pEVar1);
  return pEVar1;
}

void ESDInt::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ESDInt *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ESDInt::GetTypeInfo() {
  return &_6ESDInt_m_typeInfo;
}

char* ESDInt::GetTypeName() {
  return _6ESDInt_m_typeInfo.m_name;
}

u32 ESDInt::GetTypeKey() {
  return _6ESDInt_m_typeInfo.m_key;
}

u16 ESDInt::GetTypeVersion() {
  return _6ESDInt_m_typeInfo.m_version;
}

u16 ESDInt::GetReadVersion() {
  return _6ESDInt_m_typeInfo.m_readVersion;
}

ETypeInfo* ESDInt::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_6ESDInt_m_typeInfo,New__6ESDInt,version,"ESDInt",&_11EScriptData_m_typeInfo)
  ;
  return pEVar1;
}

ESDInt* ESDInt::CreateCopy() {
  ESDInt *pEVar1;
  
  pEVar1 = (ESDInt *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* ESDInt::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0xc,0xc);
  return pvVar1;
}

void* ESDInt::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void ESDInt::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0xc,0xc);
  return;
}

char* ESDInt::GetName() {
  return "int";
}

char ESDInt::GetTypeChar() {
  return 'i';
}

void global constructors keyed to gpTypeInfo_ESDInt() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
