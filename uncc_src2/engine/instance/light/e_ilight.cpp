// STATUS: NOT STARTED

#include "e_ilight.h"

ETypeInfo *gpTypeInfo_EILight = NULL;

__vtbl_ptr_type EILight virtual table[32] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::SafeDelete,
		/* .__delta2 = */ 7920
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::GetTypeInfo,
		/* .__delta2 = */ 7976
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::GetTypeName,
		/* .__delta2 = */ 7992
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::GetTypeKey,
		/* .__delta2 = */ 8008
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::GetTypeVersion,
		/* .__delta2 = */ 8024
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::~EILight,
		/* .__delta2 = */ 7848
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::Read,
		/* .__delta2 = */ 7192
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::Write,
		/* .__delta2 = */ 6944
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::Init,
		/* .__delta2 = */ 7432
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
		/* .__pfn = */ &EILight::CalcLightOnSurface,
		/* .__delta2 = */ 8152
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::CalcLightOnPoint,
		/* .__delta2 = */ 8160
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::AddLightingToLightmapRow,
		/* .__delta2 = */ 8168
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::Setup,
		/* .__delta2 = */ 8176
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::BackCullTest,
		/* .__delta2 = */ 8184
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::CanCastShadows,
		/* .__delta2 = */ 8192
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EILight::GetShadowSourcePos,
		/* .__delta2 = */ 8200
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EILight::m_typeInfo;

EStream& operator<<(EStream &s, EILight *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EILight *&pD) {
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
  *pD = (EILight *)pStorable;
  return s;
}

EILight* EILight::EILight() {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  
  __9EInstance(&this->field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_7EILight;
  *(undefined4 *)&this->m_shadows = 1;
  *(undefined4 *)&this->m_on = 1;
  this->m_intensity = 1.0;
  *(undefined4 *)&this->m_sourceCastsShadows = 0;
  puVar1 = (undefined *)((int)&(this->m_vColor).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x3f8000003f800000U >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vColor & 7;
  puVar3 = (ulong *)((int)&this->m_vColor - uVar2);
  *puVar3 = 0x3f8000003f800000 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vColor).field0_0x0.d[2] = 1.0;
  this->m_pSource = (EInstance *)0x0;
  SetOverlapCauseFlags__9EInstanceUi(&this->field0_0x0,0x118);
  return this;
}

void EILight::Write(EStream &s) {
	EStream &s;
	u8 v;
	u8 v;
	u8 v;
	float d;
	
  EStream *s_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  uchar v;
  float d;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  Write__9EInstanceR7EStream(&this->field0_0x0,s);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  v = *(int *)&this->m_on != 0;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&v,1);
  v = *(int *)&this->m_shadows != 0;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&v,1);
  v = *(int *)&this->m_sourceCastsShadows != 0;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&v,1);
  d = this->m_intensity;
  (*(code *)s->__vtable[1].Write)(&s->m_streamingStructure + *(short *)&s->__vtable[1].Read,&d,4);
                    /* end of inlined section */
  s_00 = __ls__FR7EStreamRC5EVec3(s,&this->m_vColor);
  __ls__FR7EStreamP9EInstance(s_00,this->m_pSource);
  return;
}

void EILight::Read(EStream &s) {
	EStream &s;
	u8 v;
	u8 v;
	u8 v;
	
  EStream *s_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uchar v;
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
  Read__9EInstanceR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/instance/light/e_ilight.h */
                    /* end of inlined section */
  if (_7EILight_m_typeInfo.m_readVersion == 0) {
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&v,1);
    *(uint *)&this->m_on = (uint)(v != '\0');
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&v,1);
    *(uint *)&this->m_shadows = (uint)(v != '\0');
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&v,1);
    *(uint *)&this->m_sourceCastsShadows = (uint)(v != '\0');
    (*(code *)s->__vtable[1].GetPos)
              (&s->m_streamingStructure + *(short *)&s->__vtable[1].EStream,&this->m_intensity,4);
                    /* end of inlined section */
    s_00 = __rs__FR7EStreamR5EVec3(s,&this->m_vColor);
    __rs__FR7EStreamRP9EInstance(s_00,&this->m_pSource);
  }
  return;
}

void EILight::Init() {
	EInstance *this;
	
  EStorable__vtable *pEVar1;
  
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar1[6].SafeDelete)
            ((int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)(pEVar1 + 6));
  return;
}

float EILight::GetMonoIntensity() {
  return this->m_intensity *
         ((this->m_vColor).field0_0x0.d[0] * 0.299 + (this->m_vColor).field0_0x0.d[1] * 0.587 +
         (this->m_vColor).field0_0x0.d[2] * 0.114);
}

void EILight::GetScaledIntColor(float scaler, unsigned int *intOut) {
	EVec3 vScaledColor;
	EVec3 *this;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  EVec3 vScaledColor;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar1 = 0xff;
  fVar4 = scaler * this->m_intensity * 128.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar2 = (this->m_vColor).field0_0x0.d[0] * fVar4;
  fVar3 = (this->m_vColor).field0_0x0.d[2] * fVar4;
  fVar4 = (this->m_vColor).field0_0x0.d[1] * fVar4;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  if (fVar2 <= 255.0) {
                    /* end of inlined section */
    uVar1 = (uint)fVar2;
  }
  *intOut = uVar1;
  uVar1 = 0xff;
  if (fVar4 <= 255.0) {
                    /* end of inlined section */
    uVar1 = (uint)fVar4;
  }
  intOut[1] = uVar1;
  uVar1 = 0xff;
  if (fVar3 <= 255.0) {
                    /* end of inlined section */
    uVar1 = (uint)fVar3;
  }
  intOut[2] = uVar1;
  return;
}

bool EILight::Raytrace(EVec3 &vStart, EVec3 &vEnd, bool resetPrevious) {
	ECollisionInfo ci;
	
  bool bVar1;
  ECollisionInfo ci;
  
  bVar1 = CollidePoint__7ERLevelR14ECollisionInfoRC5EVec3T2UibP9EInstanceT5
                    ((this->field0_0x0).m_pLevel,&ci,vStart,vEnd,0x100,true,&this->field0_0x0,
                     resetPrevious);
  return !bVar1;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_ilight.h */
    gpTypeInfo_EILight =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_7EILight_m_typeInfo,New__7EILight,0,"EILight",&_9EInstance_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void EILight::~EILight(int __in_chrg) {
  ___9EInstance(&this->field0_0x0,__in_chrg);
  return;
}

EILight* EILight::New() {
  EILight *pEVar1;
  
  pEVar1 = (EILight *)__builtin_new(0xa4);
  pEVar1 = __7EILight(pEVar1);
  return pEVar1;
}

void EILight::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EILight *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar1[1].GetTypeName
               ,3);
  }
  return;
}

ETypeInfo* EILight::GetTypeInfo() {
  return &_7EILight_m_typeInfo;
}

char* EILight::GetTypeName() {
  return _7EILight_m_typeInfo.m_name;
}

u32 EILight::GetTypeKey() {
  return _7EILight_m_typeInfo.m_key;
}

u16 EILight::GetTypeVersion() {
  return _7EILight_m_typeInfo.m_version;
}

u16 EILight::GetReadVersion() {
  return _7EILight_m_typeInfo.m_readVersion;
}

ETypeInfo* EILight::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_7EILight_m_typeInfo,New__7EILight,version,"EILight",&_9EInstance_m_typeInfo)
  ;
  return pEVar1;
}

EILight* EILight::CreateCopy() {
  EILight *pEVar1;
  
  pEVar1 = (EILight *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void EILight::CalcLightOnSurface(EVec3 &vReceiverPos, EVec3 &vReceiverNormal, EVec3 &vColorOut, bool resetPrevious) {
  return;
}

void EILight::CalcLightOnPoint(EVec3 &vReceiverPos, EVec3 &vColorOut, EVec3 &vDirectionOut) {
  return;
}

void EILight::AddLightingToLightmapRow(EVec3 &vStartPos, EVec3 &vPixelDelta, EVec3 &vReceiverNormal, int nPixels, u8 *pixels, u8 *shadowMaskPixels) {
  return;
}

void EILight::Setup() {
  return;
}

bool EILight::BackCullTest(EVec3 &vPointOnSurface, EVec3 &vSurfaceNormal) {
  return true;
}

bool EILight::CanCastShadows() {
  return false;
}

EVec3 EILight::GetShadowSourcePos() {
	EVec3 *this;
	
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[2] = 0.0;
  (__return_storage_ptr__->field0_0x0).d[1] = 0.0;
  (__return_storage_ptr__->field0_0x0).d[0] = 0.0;
  return __return_storage_ptr__;
}

void global constructors keyed to gpTypeInfo_EILight() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
