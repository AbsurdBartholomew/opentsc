// STATUS: NOT STARTED

#include "e_idirlight.h"

ETypeInfo *gpTypeInfo_EIDirLight = NULL;

__vtbl_ptr_type EIDirLight virtual table[32] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIDirLight::SafeDelete,
		/* .__delta2 = */ 10520
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIDirLight::GetTypeInfo,
		/* .__delta2 = */ 10576
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIDirLight::GetTypeName,
		/* .__delta2 = */ 10592
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIDirLight::GetTypeKey,
		/* .__delta2 = */ 10608
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIDirLight::GetTypeVersion,
		/* .__delta2 = */ 10624
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIDirLight::~EIDirLight,
		/* .__delta2 = */ 10448
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIDirLight::Read,
		/* .__delta2 = */ 9480
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIDirLight::Write,
		/* .__delta2 = */ 9416
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
		/* .__pfn = */ &EIDirLight::CalcLightOnSurface,
		/* .__delta2 = */ 9560
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIDirLight::CalcLightOnPoint,
		/* .__delta2 = */ 9920
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIDirLight::AddLightingToLightmapRow,
		/* .__delta2 = */ 9736
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIDirLight::Setup,
		/* .__delta2 = */ 10104
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIDirLight::BackCullTest,
		/* .__delta2 = */ 10288
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

ETypeInfo EIDirLight::m_typeInfo;

EStream& operator<<(EStream &s, EIDirLight *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIDirLight *&pD) {
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
  *pD = (EIDirLight *)pStorable;
  return s;
}

EIDirLight* EIDirLight::EIDirLight() {
	EVec3 *this;
	
  __7EILight(&this->field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vDir).field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_10EIDirLight;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vDir).field0_0x0.d[2] = -1.0;
  (this->m_vDir).field0_0x0.d[1] = 0.0;
  return this;
}

void EIDirLight::Write(EStream &s) {
  Write__7EILightR7EStream(&this->field0_0x0,s);
  __ls__FR7EStreamRC5EVec3(s,&this->m_vDir);
  return;
}

void EIDirLight::Read(EStream &s) {
  Read__7EILightR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/instance/light/e_idirlight.h */
                    /* end of inlined section */
  if (_10EIDirLight_m_typeInfo.m_readVersion == 0) {
    __rs__FR7EStreamR5EVec3(s,&this->m_vDir);
  }
  return;
}

void EIDirLight::CalcLightOnSurface(EVec3 &vReceiverPos, EVec3 &vReceiverNormal, EVec3 &vColorOut, bool resetPrevious) {
	float dot;
	EVec3 *this;
	EVec3 &v;
	EVec3 &vVec;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  float local_10;
  float local_c;
  float local_8;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  if ((*(int *)&(this->field0_0x0).m_on == 0) ||
     (local_c = -((vReceiverNormal->field0_0x0).d[0] * (this->m_vDir).field0_0x0.d[0] +
                  (vReceiverNormal->field0_0x0).d[1] * (this->m_vDir).field0_0x0.d[1] +
                 (vReceiverNormal->field0_0x0).d[2] * (this->m_vDir).field0_0x0.d[2]),
     local_c <= 0.0)) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_8 = 0.0;
    local_c = 0.0;
    local_10 = 0.0;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    local_c = local_c * (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_8 = local_c * (this->field0_0x0).m_vColor.field0_0x0.d[2];
    local_10 = local_c * (this->field0_0x0).m_vColor.field0_0x0.d[0];
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

void EIDirLight::AddLightingToLightmapRow(EVec3 &vStartPos, EVec3 &vPixelDelta, EVec3 &vReceiverNormal, int nPixels, u8 *pixels, u8 *shadowMaskPixels) {
	unsigned int intColor[3];
	u8 *pixel;
	EVec3 *this;
	EVec3 &v;
	int c;
	
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint intColor [3];
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  GetScaledIntColor__7EILightfPUi
            (&this->field0_0x0,
             -((vReceiverNormal->field0_0x0).d[0] * (this->m_vDir).field0_0x0.d[0] +
               (vReceiverNormal->field0_0x0).d[1] * (this->m_vDir).field0_0x0.d[1] +
              (vReceiverNormal->field0_0x0).d[2] * (this->m_vDir).field0_0x0.d[2]),intColor);
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

void EIDirLight::CalcLightOnPoint(EVec3 &vReceiverPos, EVec3 &vColorOut, EVec3 &vDirectionOut) {
	EVec3 &vVec;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  
  if (*(int *)&(this->field0_0x0).m_on == 0) {
    puVar1 = (undefined *)((int)&vDirectionOut->field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
    uVar3 = (uint)vDirectionOut & 7;
    *(ulong *)((int)vDirectionOut - uVar3) =
         0L << uVar3 * 8 |
         *(ulong *)((int)vDirectionOut - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (vDirectionOut->field0_0x0).d[2] = 0.0;
    puVar1 = (undefined *)((int)&vDirectionOut->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar2 = (uint)vDirectionOut & 7;
    uVar5 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            (long)(int)vReceiverPos & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
            -1L << (8 - uVar2) * 8 | *(ulong *)((int)vDirectionOut - uVar2) >> uVar2 * 8;
    fVar6 = (vDirectionOut->field0_0x0).d[2];
    puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
    uVar3 = (uint)vColorOut & 7;
    *(ulong *)((int)vColorOut - uVar3) =
         uVar5 << uVar3 * 8 |
         *(ulong *)((int)vColorOut - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (vColorOut->field0_0x0).d[2] = fVar6;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar7 = (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar6 = (this->field0_0x0).m_vColor.field0_0x0.d[2];
                    /* end of inlined section */
    uVar5 = CONCAT44(fVar7 * (this->field0_0x0).m_vColor.field0_0x0.d[1],
                     fVar7 * (this->field0_0x0).m_vColor.field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
    uVar3 = (uint)vColorOut & 7;
    *(ulong *)((int)vColorOut - uVar3) =
         uVar5 << uVar3 * 8 |
         *(ulong *)((int)vColorOut - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (vColorOut->field0_0x0).d[2] = fVar7 * fVar6;
    puVar1 = (undefined *)((int)&(this->m_vDir).field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar2 = (uint)&this->m_vDir & 7;
    uVar5 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            uVar5 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)&this->m_vDir - uVar2) >> uVar2 * 8;
    fVar6 = (this->m_vDir).field0_0x0.d[2];
    puVar1 = (undefined *)((int)&vDirectionOut->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
    uVar3 = (uint)vDirectionOut & 7;
    *(ulong *)((int)vDirectionOut - uVar3) =
         uVar5 << uVar3 * 8 |
         *(ulong *)((int)vDirectionOut - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (vDirectionOut->field0_0x0).d[2] = fVar6;
  }
  return;
}

void EIDirLight::Setup() {
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
  b.vMin.field0_0x0._0_8_ = CONCAT44(DAT_003c6634,DAT_003c6634);
  puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar4);
  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
  b.vMin.field0_0x0.d[2] = DAT_003c6634;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar4);
  *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 |
            CONCAT44(DAT_003c6638,DAT_003c6638) >> (7 - uVar4) * 8;
  uVar4 = (uint)&b.vMax & 7;
  puVar6 = (ulong *)((int)&b.vMax - uVar4);
  *puVar6 = CONCAT44(DAT_003c6638,DAT_003c6638) << uVar4 * 8 |
            *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  b.vMax.field0_0x0.d[2] = DAT_003c6638;
  SetBounds__9EInstanceRC7EBound3((EInstance *)this,&b);
  return;
}

bool EIDirLight::BackCullTest(EVec3 &vPointOnSurface, EVec3 &vSurfaceNormal) {
	EVec3 *this;
	EVec3 &v;
	
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  return (this->m_vDir).field0_0x0.d[0] * (vSurfaceNormal->field0_0x0).d[0] +
         (this->m_vDir).field0_0x0.d[1] * (vSurfaceNormal->field0_0x0).d[1] +
         (this->m_vDir).field0_0x0.d[2] * (vSurfaceNormal->field0_0x0).d[2] < 0.0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_idirlight.h */
    gpTypeInfo_EIDirLight =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_10EIDirLight_m_typeInfo,New__10EIDirLight,0,"EIDirLight",&_7EILight_m_typeInfo
                   );
                    /* end of inlined section */
  }
  return;
}

void EIDirLight::~EIDirLight(int __in_chrg) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_ilight.h */
  ___9EInstance((EInstance *)this,__in_chrg);
  return;
}

EIDirLight* EIDirLight::New() {
  EIDirLight *pEVar1;
  
  pEVar1 = (EIDirLight *)__builtin_new(0xb0);
  pEVar1 = __10EIDirLight(pEVar1);
  return pEVar1;
}

void EIDirLight::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIDirLight *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EIDirLight::GetTypeInfo() {
  return &_10EIDirLight_m_typeInfo;
}

char* EIDirLight::GetTypeName() {
  return _10EIDirLight_m_typeInfo.m_name;
}

u32 EIDirLight::GetTypeKey() {
  return _10EIDirLight_m_typeInfo.m_key;
}

u16 EIDirLight::GetTypeVersion() {
  return _10EIDirLight_m_typeInfo.m_version;
}

u16 EIDirLight::GetReadVersion() {
  return _10EIDirLight_m_typeInfo.m_readVersion;
}

ETypeInfo* EIDirLight::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_10EIDirLight_m_typeInfo,New__10EIDirLight,version,"EIDirLight",
                      &_7EILight_m_typeInfo);
  return pEVar1;
}

EIDirLight* EIDirLight::CreateCopy() {
  EIDirLight *pEVar1;
  
  pEVar1 = (EIDirLight *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void global constructors keyed to gpTypeInfo_EIDirLight() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
