// STATUS: NOT STARTED

#include "e_sdmatrix.h"

ETypeInfo *gpTypeInfo_ESDMatrix = NULL;

__vtbl_ptr_type ESDMatrix virtual table[14] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDMatrix::SafeDelete,
		/* .__delta2 = */ 27448
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDMatrix::GetTypeInfo,
		/* .__delta2 = */ 27504
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDMatrix::GetTypeName,
		/* .__delta2 = */ 27520
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDMatrix::GetTypeKey,
		/* .__delta2 = */ 27536
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDMatrix::GetTypeVersion,
		/* .__delta2 = */ 27552
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDMatrix::~ESDMatrix,
		/* .__delta2 = */ 27000
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDMatrix::Read,
		/* .__delta2 = */ 27152
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDMatrix::Write,
		/* .__delta2 = */ 27088
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDMatrix::GetName,
		/* .__delta2 = */ 27752
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDMatrix::GetTypeChar,
		/* .__delta2 = */ 27768
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDMatrix::Print,
		/* .__delta2 = */ 27232
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

ETypeInfo ESDMatrix::m_typeInfo;

EStream& operator<<(EStream &s, ESDMatrix *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ESDMatrix *&pD) {
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
  *pD = (ESDMatrix *)pStorable;
  return s;
}

ESDMatrix* ESDMatrix::ESDMatrix() {
  __11EScriptData(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_9ESDMatrix;
  Id__5EMat4(&this->m_m);
  return this;
}

void ESDMatrix::~ESDMatrix(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_9ESDMatrix;
  ___11EScriptData(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdmatrix.h */
    _allocBucketFree__FPvUiUi(this,0x50,0x1b);
  }
                    /* end of inlined section */
  return;
}

void ESDMatrix::Write(EStream &s) {
  Write__11EScriptDataR7EStream(&this->field0_0x0,s);
  __ls__FR7EStreamRC5EMat4(s,&this->m_m);
  return;
}

void ESDMatrix::Read(EStream &s) {
  Read__11EScriptDataR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/script/data/e_sdmatrix.h */
                    /* end of inlined section */
  if (_9ESDMatrix_m_typeInfo.m_readVersion == 0) {
    __rs__FR7EStreamR5EMat4(s,&this->m_m);
  }
  return;
}

void ESDMatrix::Print() {
  Print__C5EMat4(&this->m_m);
  return;
}

EMat4& ESDMatrix::GetParam(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = Pop__14EScriptContext(pContext);
                    /* end of inlined section */
  return (EMat4 *)(pEVar1 + 2);
}

EMat4& ESDMatrix::GetReturn(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
  pEVar1 = GetReturn__14EScriptContext(pContext);
  return (EMat4 *)(pEVar1 + 2);
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdmatrix.h */
    gpTypeInfo_ESDMatrix =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_9ESDMatrix_m_typeInfo,New__9ESDMatrix,0,"ESDMatrix",&_11EScriptData_m_typeInfo
                   );
                    /* end of inlined section */
  }
  return;
}

ESDMatrix* ESDMatrix::New() {
  ESDMatrix *pEVar1;
  
  pEVar1 = (ESDMatrix *)__nw__9ESDMatrixUi(0x50);
  pEVar1 = __9ESDMatrix(pEVar1);
  return pEVar1;
}

void ESDMatrix::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ESDMatrix *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ESDMatrix::GetTypeInfo() {
  return &_9ESDMatrix_m_typeInfo;
}

char* ESDMatrix::GetTypeName() {
  return _9ESDMatrix_m_typeInfo.m_name;
}

u32 ESDMatrix::GetTypeKey() {
  return _9ESDMatrix_m_typeInfo.m_key;
}

u16 ESDMatrix::GetTypeVersion() {
  return _9ESDMatrix_m_typeInfo.m_version;
}

u16 ESDMatrix::GetReadVersion() {
  return _9ESDMatrix_m_typeInfo.m_readVersion;
}

ETypeInfo* ESDMatrix::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_9ESDMatrix_m_typeInfo,New__9ESDMatrix,version,"ESDMatrix",
                      &_11EScriptData_m_typeInfo);
  return pEVar1;
}

ESDMatrix* ESDMatrix::CreateCopy() {
  ESDMatrix *pEVar1;
  
  pEVar1 = (ESDMatrix *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* ESDMatrix::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0x50,0x1b);
  return pvVar1;
}

void* ESDMatrix::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void ESDMatrix::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x50,0x1b);
  return;
}

char* ESDMatrix::GetName() {
  return "matrix";
}

char ESDMatrix::GetTypeChar() {
  return 'm';
}

void global constructors keyed to gpTypeInfo_ESDMatrix() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
