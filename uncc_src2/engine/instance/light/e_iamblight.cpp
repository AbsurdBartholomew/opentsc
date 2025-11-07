// STATUS: NOT STARTED

#include "e_iamblight.h"

ETypeInfo *gpTypeInfo_EIAmbLight = NULL;

__vtbl_ptr_type EIAmbLight virtual table[32] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIAmbLight::SafeDelete,
		/* .__delta2 = */ 14616
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIAmbLight::GetTypeInfo,
		/* .__delta2 = */ 14672
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIAmbLight::GetTypeName,
		/* .__delta2 = */ 14688
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIAmbLight::GetTypeKey,
		/* .__delta2 = */ 14704
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIAmbLight::GetTypeVersion,
		/* .__delta2 = */ 14720
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIAmbLight::~EIAmbLight,
		/* .__delta2 = */ 14520
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
		/* .__pfn = */ &EIAmbLight::CalcLightOnSurface,
		/* .__delta2 = */ 13872
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIAmbLight::CalcLightOnPoint,
		/* .__delta2 = */ 14112
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIAmbLight::AddLightingToLightmapRow,
		/* .__delta2 = */ 13976
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIAmbLight::Setup,
		/* .__delta2 = */ 14256
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

ETypeInfo EIAmbLight::m_typeInfo;

EStream& operator<<(EStream &s, EIAmbLight *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIAmbLight *&pD) {
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
  *pD = (EIAmbLight *)pStorable;
  return s;
}

void EIAmbLight::CalcLightOnSurface(EVec3 &vReceiverPos, EVec3 &vReceiverNormal, EVec3 &vColorOut, bool resetPrevious) {
	EVec3 &vVec;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  float local_10;
  float local_c;
  float local_8;
  
  if (*(int *)&(this->field0_0x0).m_on == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_8 = 0.0;
    local_c = 0.0;
    local_10 = 0.0;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    local_c = (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_10 = local_c * (this->field0_0x0).m_vColor.field0_0x0.d[0];
    local_8 = local_c * (this->field0_0x0).m_vColor.field0_0x0.d[2];
    local_c = local_c * (this->field0_0x0).m_vColor.field0_0x0.d[1];
                    /* end of inlined section */
  }
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(local_c,local_10) >> (7 - uVar2) * 8;
  uVar2 = (uint)vColorOut & 7;
  *(ulong *)((int)vColorOut - uVar2) =
       CONCAT44(local_c,local_10) << uVar2 * 8 |
       *(ulong *)((int)vColorOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vColorOut->field0_0x0).d[2] = local_8;
  return;
}

void EIAmbLight::AddLightingToLightmapRow(EVec3 &vStartPos, EVec3 &vPixelDelta, EVec3 &vReceiverNormal, int nPixels, u8 *pixels, u8 *shadowMaskPixels) {
	unsigned int intColor[3];
	u8 *pixel;
	int c;
	
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint intColor [3];
  
  GetScaledIntColor__7EILightfPUi(&this->field0_0x0,1.0,intColor);
  iVar5 = nPixels + -1;
  while( true ) {
    iVar4 = 2;
    puVar3 = intColor;
    do {
      iVar1 = *puVar3;
      iVar4 = iVar4 + -1;
      puVar3 = (uint *)((int *)puVar3 + 1);
      uVar2 = 0xff;
      if ((uint)*pixels + iVar1 < 0x100) {
        uVar2 = (uint)*pixels + iVar1;
      }
      *pixels = (byte)uVar2;
      pixels = pixels + 1;
    } while (-1 < iVar4);
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
  }
  return;
}

void EIAmbLight::CalcLightOnPoint(EVec3 &vReceiverPos, EVec3 &vColorOut, EVec3 &vDirectionOut) {
	EVec3 &vVec;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  float local_10;
  float local_c;
  float local_8;
  
  if (*(int *)&(this->field0_0x0).m_on == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_8 = 0.0;
    local_c = 0.0;
    local_10 = 0.0;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    local_c = (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_10 = local_c * (this->field0_0x0).m_vColor.field0_0x0.d[0];
    local_8 = local_c * (this->field0_0x0).m_vColor.field0_0x0.d[2];
    local_c = local_c * (this->field0_0x0).m_vColor.field0_0x0.d[1];
                    /* end of inlined section */
  }
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(local_c,local_10) >> (7 - uVar2) * 8;
  uVar2 = (uint)vColorOut & 7;
  *(ulong *)((int)vColorOut - uVar2) =
       CONCAT44(local_c,local_10) << uVar2 * 8 |
       *(ulong *)((int)vColorOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vColorOut->field0_0x0).d[2] = local_8;
  puVar1 = (undefined *)((int)&vDirectionOut->field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)vDirectionOut & 7;
  *(ulong *)((int)vDirectionOut - uVar2) =
       0L << uVar2 * 8 |
       *(ulong *)((int)vDirectionOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vDirectionOut->field0_0x0).d[2] = 0.0;
  return;
}

void EIAmbLight::Setup() {
	EBound3 b;
	EVec3 *this;
	
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong in_t1;
  EBound3 b;
  
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  uVar4 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar4);
  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
  uVar4 = (uint)&b.vMax & 7;
  puVar6 = (ulong *)((int)&b.vMax - uVar4);
  *puVar6 = 0L << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  b.vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  uVar3 = (uint)&b.vMax & 7;
  puVar2 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
  uVar5 = (uint)puVar2 & 7;
  puVar6 = (ulong *)(puVar2 + -uVar5);
  *puVar6 = *puVar6 & -1L << (uVar5 + 1) * 8 |
            ((*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
             in_t1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar3) * 8 |
            *(ulong *)((int)&b.vMax - uVar3) >> uVar3 * 8) >> (7 - uVar5) * 8;
  b.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  b.vMin.field0_0x0._0_8_ = CONCAT44(DAT_003c697c,DAT_003c697c);
  puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar4);
  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
  b.vMin.field0_0x0.d[2] = DAT_003c697c;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar4);
  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 |
            CONCAT44(DAT_003c6980,DAT_003c6980) >> (7 - uVar4) * 8;
  uVar4 = (uint)&b.vMax & 7;
  puVar6 = (ulong *)((int)&b.vMax - uVar4);
  *puVar6 = CONCAT44(DAT_003c6980,DAT_003c6980) << uVar4 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  b.vMax.field0_0x0.d[2] = DAT_003c6980;
  SetBounds__9EInstanceRC7EBound3((EInstance *)this,&b);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_iamblight.h */
    gpTypeInfo_EIAmbLight =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_10EIAmbLight_m_typeInfo,New__10EIAmbLight,0,"EIAmbLight",&_7EILight_m_typeInfo
                   );
                    /* end of inlined section */
  }
  return;
}

void EIAmbLight::~EIAmbLight(int __in_chrg) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_ilight.h */
  ___9EInstance((EInstance *)this,__in_chrg);
  return;
}

EIAmbLight* EIAmbLight::New() {
  EILight *this;
  
  this = (EILight *)__builtin_new(0xa4);
  __7EILight(this);
  (this->field0_0x0).field0_0x0.__vtable = (EStorable__vtable *)_vt_10EIAmbLight;
  return (EIAmbLight *)this;
}

void EIAmbLight::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIAmbLight *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EIAmbLight::GetTypeInfo() {
  return &_10EIAmbLight_m_typeInfo;
}

char* EIAmbLight::GetTypeName() {
  return _10EIAmbLight_m_typeInfo.m_name;
}

u32 EIAmbLight::GetTypeKey() {
  return _10EIAmbLight_m_typeInfo.m_key;
}

u16 EIAmbLight::GetTypeVersion() {
  return _10EIAmbLight_m_typeInfo.m_version;
}

u16 EIAmbLight::GetReadVersion() {
  return _10EIAmbLight_m_typeInfo.m_readVersion;
}

ETypeInfo* EIAmbLight::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_10EIAmbLight_m_typeInfo,New__10EIAmbLight,version,"EIAmbLight",
                      &_7EILight_m_typeInfo);
  return pEVar1;
}

EIAmbLight* EIAmbLight::CreateCopy() {
  EIAmbLight *pEVar1;
  
  pEVar1 = (EIAmbLight *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void global constructors keyed to gpTypeInfo_EIAmbLight() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
