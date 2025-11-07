// STATUS: NOT STARTED

#include "e_igameinstance.h"

ETypeInfo *gpTypeInfo_EIGameInstance = NULL;

__vtbl_ptr_type EIGameInstance virtual table[30] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::SafeDelete,
		/* .__delta2 = */ 8952
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::GetTypeInfo,
		/* .__delta2 = */ 9008
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::GetTypeName,
		/* .__delta2 = */ 9024
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::GetTypeKey,
		/* .__delta2 = */ 9040
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::GetTypeVersion,
		/* .__delta2 = */ 9056
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::~EIGameInstance,
		/* .__delta2 = */ 8736
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Read,
		/* .__delta2 = */ -8544
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Write,
		/* .__delta2 = */ -8776
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Init,
		/* .__delta2 = */ -5208
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Update,
		/* .__delta2 = */ -5200
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::VisibilityTest,
		/* .__delta2 = */ -5192
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::Draw,
		/* .__delta2 = */ -5184
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::DrawWireFrame,
		/* .__delta2 = */ -5176
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetOrient,
		/* .__delta2 = */ -5168
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetUpdatePriority,
		/* .__delta2 = */ -5160
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollidePointWithInstance,
		/* .__delta2 = */ -5152
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideSphereWithInstance,
		/* .__delta2 = */ -5144
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CollideTest,
		/* .__delta2 = */ -5136
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::CalcLights3,
		/* .__delta2 = */ -7600
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetBoundSphere,
		/* .__delta2 = */ -8224
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::GetTriggerList,
		/* .__delta2 = */ -5104
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::ReadInstanceData,
		/* .__delta2 = */ -5096
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EInstance::SetLevel,
		/* .__delta2 = */ -5088
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::Damage,
		/* .__delta2 = */ 9184
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::PlatformOrient,
		/* .__delta2 = */ 9192
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::GetAbsolutePosition,
		/* .__delta2 = */ 9200
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::UserFunc,
		/* .__delta2 = */ 8776
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIGameInstance::ExecScript,
		/* .__delta2 = */ 8784
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EIGameInstance::m_typeInfo;

EStream& operator<<(EStream &s, EIGameInstance *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIGameInstance *&pD) {
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
  *pD = (EIGameInstance *)pStorable;
  return s;
}

EIGameInstance* EIGameInstance::EIGameInstance() {
  __9EInstance(&this->field0_0x0);
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_14EIGameInstance;
  return this;
}

void EIGameInstance::~EIGameInstance(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_14EIGameInstance;
  ___9EInstance(&this->field0_0x0,__in_chrg);
  return;
}

bool EIGameInstance::UserFunc(void *pVoid) {
  return false;
}

void EIGameInstance::ExecScript(ERScript *pScript, EScriptParams *pParams) {
  if (pScript != (ERScript *)0x0) {
    Run__13EScriptEngineP8ERScriptP9EInstanceP13EScriptParams
              (&_scriptEngine,pScript,&this->field0_0x0,pParams);
  }
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/instance/e_igameinstance.h */
    gpTypeInfo_EIGameInstance =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_14EIGameInstance_m_typeInfo,New__14EIGameInstance,0,"EIGameInstance",
                    &_9EInstance_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

EIGameInstance* EIGameInstance::New() {
  EIGameInstance *pEVar1;
  
  pEVar1 = (EIGameInstance *)__builtin_new(0x84);
  pEVar1 = __14EIGameInstance(pEVar1);
  return pEVar1;
}

void EIGameInstance::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIGameInstance *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar1[1].GetTypeName
               ,3);
  }
  return;
}

ETypeInfo* EIGameInstance::GetTypeInfo() {
  return &_14EIGameInstance_m_typeInfo;
}

char* EIGameInstance::GetTypeName() {
  return _14EIGameInstance_m_typeInfo.m_name;
}

u32 EIGameInstance::GetTypeKey() {
  return _14EIGameInstance_m_typeInfo.m_key;
}

u16 EIGameInstance::GetTypeVersion() {
  return _14EIGameInstance_m_typeInfo.m_version;
}

u16 EIGameInstance::GetReadVersion() {
  return _14EIGameInstance_m_typeInfo.m_readVersion;
}

ETypeInfo* EIGameInstance::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_14EIGameInstance_m_typeInfo,New__14EIGameInstance,version,"EIGameInstance",
                      &_9EInstance_m_typeInfo);
  return pEVar1;
}

EIGameInstance* EIGameInstance::CreateCopy() {
  EIGameInstance *pEVar1;
  
  pEVar1 = (EIGameInstance *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void EIGameInstance::Damage(int damage, EInstance *pCause, u32 hitType, ECollisionInfo *ci, float power) {
  return;
}

void EIGameInstance::PlatformOrient(EMat4 &mLast, EMat4 &mCurrent) {
  return;
}

bool EIGameInstance::GetAbsolutePosition(EVec3 &vPos) {
  return false;
}

void global constructors keyed to gpTypeInfo_EIGameInstance() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
