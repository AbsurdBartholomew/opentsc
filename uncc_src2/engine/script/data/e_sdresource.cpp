// STATUS: NOT STARTED

#include "e_sdresource.h"

ETypeInfo *gpTypeInfo_ESDResource = NULL;

__vtbl_ptr_type ESDResource virtual table[14] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDResource::SafeDelete,
		/* .__delta2 = */ 25528
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDResource::GetTypeInfo,
		/* .__delta2 = */ 25584
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDResource::GetTypeName,
		/* .__delta2 = */ 25600
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDResource::GetTypeKey,
		/* .__delta2 = */ 25616
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDResource::GetTypeVersion,
		/* .__delta2 = */ 25632
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDResource::~ESDResource,
		/* .__delta2 = */ 25048
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDResource::Read,
		/* .__delta2 = */ 25224
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDResource::Write,
		/* .__delta2 = */ 25136
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDResource::GetName,
		/* .__delta2 = */ 25832
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDResource::GetTypeChar,
		/* .__delta2 = */ 25848
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDResource::Print,
		/* .__delta2 = */ 25320
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ESDResource::Test,
		/* .__delta2 = */ 25328
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ESDResource::m_typeInfo;

EStream& operator<<(EStream &s, ESDResource *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ESDResource *&pD) {
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
  *pD = (ESDResource *)pStorable;
  return s;
}

ESDResource* ESDResource::ESDResource() {
  __11EScriptData(&this->field0_0x0);
  this->m_r = 0;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_11ESDResource;
  return this;
}

void ESDResource::~ESDResource(int __in_chrg) {
	void *p;
	
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_11ESDResource;
  ___11EScriptData(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdresource.h */
    _allocBucketFree__FPvUiUi(this,0xc,0xc);
  }
                    /* end of inlined section */
  return;
}

void ESDResource::Write(EStream &s) {
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
  Write__11EScriptDataR7EStream(&this->field0_0x0,s);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  d = this->m_r;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&d,4);
  return;
}

void ESDResource::Read(EStream &s) {
	EStream &s;
	
  Read__11EScriptDataR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/script/data/e_sdresource.h */
                    /* end of inlined section */
  if (_11ESDResource_m_typeInfo.m_readVersion == 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_r,4);
                    /* end of inlined section */
  }
  return;
}

void ESDResource::Print() {
  return;
}

bool ESDResource::Test() {
  return this->m_r != 0;
}

u32& ESDResource::GetParam(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
                    /* inlined from /eor/src2/engine/script/e_scriptcontext.h */
  pEVar1 = Pop__14EScriptContext(pContext);
                    /* end of inlined section */
  return (uint *)(pEVar1 + 1);
}

u32& ESDResource::GetReturn(EScriptContext *pContext) {
  EScriptData *pEVar1;
  
  pEVar1 = GetReturn__14EScriptContext(pContext);
  return (uint *)(pEVar1 + 1);
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/script/data/e_sdresource.h */
    gpTypeInfo_ESDResource =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_11ESDResource_m_typeInfo,New__11ESDResource,0,"ESDResource",
                    &_11EScriptData_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ESDResource* ESDResource::New() {
  ESDResource *pEVar1;
  
  pEVar1 = (ESDResource *)__nw__11ESDResourceUi(0xc);
  pEVar1 = __11ESDResource(pEVar1);
  return pEVar1;
}

void ESDResource::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ESDResource *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ESDResource::GetTypeInfo() {
  return &_11ESDResource_m_typeInfo;
}

char* ESDResource::GetTypeName() {
  return _11ESDResource_m_typeInfo.m_name;
}

u32 ESDResource::GetTypeKey() {
  return _11ESDResource_m_typeInfo.m_key;
}

u16 ESDResource::GetTypeVersion() {
  return _11ESDResource_m_typeInfo.m_version;
}

u16 ESDResource::GetReadVersion() {
  return _11ESDResource_m_typeInfo.m_readVersion;
}

ETypeInfo* ESDResource::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_11ESDResource_m_typeInfo,New__11ESDResource,version,"ESDResource",
                      &_11EScriptData_m_typeInfo);
  return pEVar1;
}

ESDResource* ESDResource::CreateCopy() {
  ESDResource *pEVar1;
  
  pEVar1 = (ESDResource *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void* ESDResource::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _allocBucketAlloc__FUiUi(0xc,0xc);
  return pvVar1;
}

void* ESDResource::operator new(void *p) {
  void *in_a1_lo;
  
  return in_a1_lo;
}

void ESDResource::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0xc,0xc);
  return;
}

char* ESDResource::GetName() {
  return "resource";
}

char ESDResource::GetTypeChar() {
  return 'r';
}

void global constructors keyed to gpTypeInfo_ESDResource() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
