// STATUS: NOT STARTED

#include "e_rhavokmodel.h"

ETypeInfo *gpTypeInfo_ERHavokModel = NULL;

__vtbl_ptr_type ERHavokModel virtual table[13] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERHavokModel::SafeDelete,
		/* .__delta2 = */ 4656
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERHavokModel::GetTypeInfo,
		/* .__delta2 = */ 4712
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERHavokModel::GetTypeName,
		/* .__delta2 = */ 4728
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERHavokModel::GetTypeKey,
		/* .__delta2 = */ 4744
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERHavokModel::GetTypeVersion,
		/* .__delta2 = */ 4760
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERHavokModel::~ERHavokModel,
		/* .__delta2 = */ 4472
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERHavokModel::Read,
		/* .__delta2 = */ 4512
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERHavokModel::Write,
		/* .__delta2 = */ 4520
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Init,
		/* .__delta2 = */ 10728
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ERHavokModel::Reload,
		/* .__delta2 = */ 4528
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EResource::Reload,
		/* .__delta2 = */ 10048
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo ERHavokModel::m_typeInfo;

EStream& operator<<(EStream &s, ERHavokModel *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, ERHavokModel *&pD) {
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
  *pD = (ERHavokModel *)pStorable;
  return s;
}

ERHavokModel* ERHavokModel::ERHavokModel() {
  __9EResource(&this->field0_0x0);
  *(undefined4 *)&this->m_owns = 1;
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_12ERHavokModel;
  this->m_numGeometries = 0;
  this->m_isLevel = 0;
  return this;
}

void ERHavokModel::~ERHavokModel(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_12ERHavokModel;
  ___9EResource(&this->field0_0x0,__in_chrg);
  return;
}

void ERHavokModel::Read(EStream &s) {
  return;
}

void ERHavokModel::Write(EStream &s) {
  return;
}

void ERHavokModel::Reload(EStream &s) {
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/havok/e_rhavokmodel.h */
    gpTypeInfo_ERHavokModel =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_12ERHavokModel_m_typeInfo,New__12ERHavokModel,0,"ERHavokModel",
                    &_9EResource_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

ERHavokModel* ERHavokModel::New() {
  ERHavokModel *pEVar1;
  
  pEVar1 = (ERHavokModel *)__builtin_new(0x20);
  pEVar1 = __12ERHavokModel(pEVar1);
  return pEVar1;
}

void ERHavokModel::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (ERHavokModel *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)&(this->field0_0x0).field0_0x0.__vtable + (int)*(short *)&pEVar1[1].GetTypeName,
               3);
  }
  return;
}

ETypeInfo* ERHavokModel::GetTypeInfo() {
  return &_12ERHavokModel_m_typeInfo;
}

char* ERHavokModel::GetTypeName() {
  return _12ERHavokModel_m_typeInfo.m_name;
}

u32 ERHavokModel::GetTypeKey() {
  return _12ERHavokModel_m_typeInfo.m_key;
}

u16 ERHavokModel::GetTypeVersion() {
  return _12ERHavokModel_m_typeInfo.m_version;
}

u16 ERHavokModel::GetReadVersion() {
  return _12ERHavokModel_m_typeInfo.m_readVersion;
}

ETypeInfo* ERHavokModel::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_12ERHavokModel_m_typeInfo,New__12ERHavokModel,version,"ERHavokModel",
                      &_9EResource_m_typeInfo);
  return pEVar1;
}

ERHavokModel* ERHavokModel::CreateCopy() {
  ERHavokModel *pEVar1;
  
  pEVar1 = (ERHavokModel *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

int ERHavokModel::IsLevel() {
  return this->m_isLevel;
}

void ERHavokModel::SetLevel(bool level) {
  this->m_isLevel = (int)level;
  return;
}

int ERHavokModel::GetNumGeometries() {
  return this->m_numGeometries;
}

void global constructors keyed to gpTypeInfo_ERHavokModel() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
