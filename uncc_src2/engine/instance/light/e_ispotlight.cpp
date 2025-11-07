// STATUS: NOT STARTED

#include "e_ispotlight.h"

ETypeInfo *gpTypeInfo_EISpotLight = NULL;

__vtbl_ptr_type EISpotLight virtual table[32] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::SafeDelete,
		/* .__delta2 = */ -16368
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::GetTypeInfo,
		/* .__delta2 = */ -16312
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::GetTypeName,
		/* .__delta2 = */ -16296
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::GetTypeKey,
		/* .__delta2 = */ -16280
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::GetTypeVersion,
		/* .__delta2 = */ -16264
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::~EISpotLight,
		/* .__delta2 = */ -16440
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::Read,
		/* .__delta2 = */ -20024
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::Write,
		/* .__delta2 = */ -20288
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
		/* .__pfn = */ &EISpotLight::CalcLightOnSurface,
		/* .__delta2 = */ -19776
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::CalcLightOnPoint,
		/* .__delta2 = */ -18112
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::AddLightingToLightmapRow,
		/* .__delta2 = */ -18976
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::Setup,
		/* .__delta2 = */ -17320
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::BackCullTest,
		/* .__delta2 = */ -16696
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::CanCastShadows,
		/* .__delta2 = */ -16136
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EISpotLight::GetShadowSourcePos,
		/* .__delta2 = */ -16128
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EISpotLight::m_typeInfo;

EStream& operator<<(EStream &s, EISpotLight *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EISpotLight *&pD) {
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
  *pD = (EISpotLight *)pStorable;
  return s;
}

EISpotLight* EISpotLight::EISpotLight() {
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  
  __7EILight(&this->field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vDir).field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_11EISpotLight;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vDir).field0_0x0.d[2] = -1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (this->m_vDir).field0_0x0.d[1] = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vPos & 7;
  puVar3 = (ulong *)((int)&this->m_vPos - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vPos).field0_0x0.d[2] = 0.0;
  this->m_falloffStartDistance = 10.0;
  this->m_falloffEndDistance = 20.0;
  this->m_falloffStartAngle = 0.5235988;
  this->m_falloffEndAngle = 0.7853982;
  *(undefined4 *)&this->m_distanceFalloffEnabled = 1;
  Setup__11EISpotLight(this);
  return this;
}

void EISpotLight::Write(EStream &s) {
	float d;
	float d;
	float d;
	float d;
	u8 v;
	
  EStream *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uchar v;
  float local_40;
  float local_3c;
  float local_38;
  float d;
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
  Write__7EILightR7EStream(&this->field0_0x0,s);
  pEVar1 = __ls__FR7EStreamRC5EVec3(s,&this->m_vDir);
  pEVar1 = __ls__FR7EStreamRC5EVec3(pEVar1,&this->m_vPos);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_40 = this->m_falloffStartDistance;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&local_40,4);
  local_3c = this->m_falloffEndDistance;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&local_3c,4);
  local_38 = this->m_falloffStartAngle;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&local_38,4);
  d = this->m_falloffEndAngle;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&d,4);
  v = *(int *)&this->m_distanceFalloffEnabled != 0;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&v,1);
  return;
}

void EISpotLight::Read(EStream &s) {
	u8 v;
	
  EStream *pEVar1;
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
  Read__7EILightR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/instance/light/e_ispotlight.h */
                    /* end of inlined section */
  if (_11EISpotLight_m_typeInfo.m_readVersion == 0) {
    pEVar1 = __rs__FR7EStreamR5EVec3(s,&this->m_vDir);
    pEVar1 = __rs__FR7EStreamR5EVec3(pEVar1,&this->m_vPos);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_falloffStartDistance,4);
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_falloffEndDistance,4);
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_falloffStartAngle,4);
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_falloffEndAngle,4);
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,&v,1);
    *(uint *)&this->m_distanceFalloffEnabled = (uint)(v != '\0');
                    /* end of inlined section */
  }
  return;
}

void EISpotLight::CalcLightOnSurface(EVec3 &vReceiverPos, EVec3 &vReceiverNormal, EVec3 &vColorOut, bool resetPrevious) {
	EVec3 vDelta;
	float distance;
	float distanceFactor;
	EVec3 vDir;
	float dot;
	EVec3 *this;
	EVec3 &v;
	EVec3 &vVec;
	float u;
	float u;
	float scaler;
	EVec3 *this;
	float angleDot;
	float angleFactor;
	EVec3 &v;
	float u;
	float u;
	EVec3 &vVec;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  EVec3 vDelta;
  EVec3 vDir;
  
  if (*(int *)&(this->field0_0x0).m_on == 0) goto LAB_002cb5a0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar12 = (vReceiverPos->field0_0x0).d[0] - (this->m_vPos).field0_0x0.d[0];
  fVar6 = (vReceiverPos->field0_0x0).d[1] - (this->m_vPos).field0_0x0.d[1];
  fVar5 = (vReceiverPos->field0_0x0).d[2] - (this->m_vPos).field0_0x0.d[2];
  fVar7 = sqrtf(fVar12 * fVar12 + fVar6 * fVar6 + fVar5 * fVar5);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  if (fVar7 == 0.0) {
    fVar7 = (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar5 = (this->field0_0x0).m_vColor.field0_0x0.d[2];
                    /* end of inlined section */
    uVar4 = CONCAT44(fVar7 * (this->field0_0x0).m_vColor.field0_0x0.d[1],
                     fVar7 * (this->field0_0x0).m_vColor.field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
    uVar2 = (uint)vColorOut & 7;
    *(ulong *)((int)vColorOut - uVar2) =
         uVar4 << uVar2 * 8 |
         *(ulong *)((int)vColorOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (vColorOut->field0_0x0).d[2] = fVar7 * fVar5;
    return;
  }
  if (*(int *)&this->m_distanceFalloffEnabled == 0) {
LAB_002cb42c:
    fVar8 = 1.0;
  }
  else {
    fVar8 = this->m_falloffEndDistance;
    if (fVar8 <= fVar7) {
      puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
      uVar2 = (uint)vColorOut & 7;
      *(ulong *)((int)vColorOut - uVar2) =
           0L << uVar2 * 8 |
           *(ulong *)((int)vColorOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      (vColorOut->field0_0x0).d[2] = 0.0;
      return;
    }
    if (fVar7 <= this->m_falloffStartDistance) goto LAB_002cb42c;
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
    fVar8 = (fVar8 - fVar7) / (fVar8 - this->m_falloffStartDistance);
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
    fVar8 = fVar8 * -2.0 * fVar8 * fVar8 + fVar8 * 3.0 * fVar8;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar9 = 1.0;
  fVar7 = 1.0 / fVar7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar11 = -((vReceiverNormal->field0_0x0).d[0] * fVar12 * fVar7 +
             (vReceiverNormal->field0_0x0).d[1] * fVar6 * fVar7 +
            (vReceiverNormal->field0_0x0).d[2] * fVar5 * fVar7);
  if (0.0 < fVar11) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar10 = this->m_cosFalloffEndAngle;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar5 = fVar12 * fVar7 * (this->m_vDir).field0_0x0.d[0] +
            fVar6 * fVar7 * (this->m_vDir).field0_0x0.d[1] +
            fVar5 * fVar7 * (this->m_vDir).field0_0x0.d[2];
                    /* end of inlined section */
    if (fVar10 < fVar5) {
      if (fVar5 < this->m_cosFalloffStartAngle) {
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
        fVar5 = (fVar5 - fVar10) / (this->m_cosFalloffStartAngle - fVar10);
                    /* inlined from /eor/src2/common/math/e_math.h */
        fVar9 = fVar5 * -2.0 * fVar5 * fVar5 + fVar5 * 3.0 * fVar5;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar5 = (this->field0_0x0).m_vColor.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar7 = fVar11 * fVar9 * fVar8 * (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar4 = CONCAT44(fVar7 * (this->field0_0x0).m_vColor.field0_0x0.d[1],
                       fVar7 * (this->field0_0x0).m_vColor.field0_0x0.d[0]);
      puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
      uVar2 = (uint)vColorOut & 7;
      *(ulong *)((int)vColorOut - uVar2) =
           uVar4 << uVar2 * 8 |
           *(ulong *)((int)vColorOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      (vColorOut->field0_0x0).d[2] = fVar7 * fVar5;
      return;
    }
    puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
    uVar2 = (uint)vColorOut & 7;
    *(ulong *)((int)vColorOut - uVar2) =
         0L << uVar2 * 8 |
         *(ulong *)((int)vColorOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (vColorOut->field0_0x0).d[2] = 0.0;
    return;
  }
LAB_002cb5a0:
  puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)vColorOut & 7;
  *(ulong *)((int)vColorOut - uVar2) =
       0L << uVar2 * 8 | *(ulong *)((int)vColorOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  (vColorOut->field0_0x0).d[2] = 0.0;
  return;
}

void EISpotLight::AddLightingToLightmapRow(EVec3 &vStartPos, EVec3 &vPixelDelta, EVec3 &vReceiverNormal, int nPixels, u8 *pixels, u8 *shadowMaskPixels) {
	EVec3 vPos;
	u8 *pixel;
	u8 *shadowMaskPixel;
	EVec3 &v;
	float pixelIntensity;
	EVec3 vDelta;
	float distance;
	EVec3 &v;
	EVec3 vDir;
	float dot;
	float scaler;
	EVec3 *this;
	float angleDot;
	EVec3 &v;
	float u;
	float u;
	unsigned int intColor[3];
	int c;
	EVec3 &v;
	
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  byte *pbVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  EVec3 vPos;
  EVec3 vDelta;
  uint intColor [3];
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vPos.field0_0x0.d[2] = (vStartPos->field0_0x0).d[2];
  vPos.field0_0x0.d[0] = (vStartPos->field0_0x0).d[0];
  vPos.field0_0x0.d[1] = (vStartPos->field0_0x0).d[1];
                    /* end of inlined section */
  fVar11 = 0.0;
  fVar13 = -2.0;
  pbVar5 = shadowMaskPixels;
  do {
    if ((shadowMaskPixels == (uchar *)0x0) || (*pbVar5 != 0)) {
      fVar12 = 1.0;
      if (shadowMaskPixels != (uchar *)0x0) {
        fVar12 = (float)(uint)*pbVar5 * 0.003921569;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar10 = vPos.field0_0x0.d[0] - (this->m_vPos).field0_0x0.d[0];
      fVar7 = vPos.field0_0x0.d[1] - (this->m_vPos).field0_0x0.d[1];
      fVar6 = vPos.field0_0x0.d[2] - (this->m_vPos).field0_0x0.d[2];
      fVar8 = sqrtf(fVar10 * fVar10 + fVar7 * fVar7 + fVar6 * fVar6);
                    /* end of inlined section */
      if (fVar8 != fVar11) {
        if (*(int *)&this->m_distanceFalloffEnabled != 0) {
          fVar9 = this->m_falloffEndDistance;
          if (fVar9 <= fVar8) {
            fVar12 = 0.0;
          }
          else if (this->m_falloffStartDistance < fVar8) {
            fVar9 = (fVar9 - fVar8) / (fVar9 - this->m_falloffStartDistance);
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
            fVar12 = fVar12 * (fVar9 * fVar13 * fVar9 * fVar9 + fVar9 * 3.0 * fVar9);
          }
        }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar8 = 1.0 / fVar8;
        intColor[0] = (uint)(fVar10 * fVar8);
        intColor[1] = (uint)(fVar7 * fVar8);
        intColor[2] = (uint)(fVar6 * fVar8);
                    /* end of inlined section */
        fVar6 = -((vReceiverNormal->field0_0x0).d[0] * (float)intColor[0] +
                  (vReceiverNormal->field0_0x0).d[1] * (float)intColor[1] +
                 (vReceiverNormal->field0_0x0).d[2] * (float)intColor[2]);
        if (fVar11 < fVar6) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          fVar12 = fVar12 * fVar6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          fVar8 = this->m_cosFalloffEndAngle;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar6 = (float)intColor[0] * (this->m_vDir).field0_0x0.d[0] +
                  (float)intColor[1] * (this->m_vDir).field0_0x0.d[1] +
                  (float)intColor[2] * (this->m_vDir).field0_0x0.d[2];
                    /* end of inlined section */
          if (fVar8 < fVar6) {
            if (fVar6 < this->m_cosFalloffStartAngle) {
              fVar6 = (fVar6 - fVar8) / (this->m_cosFalloffStartAngle - fVar8);
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
              fVar12 = fVar12 * (fVar6 * fVar13 * fVar6 * fVar6 + fVar6 * 3.0 * fVar6);
            }
            goto LAB_002cb850;
          }
        }
        fVar12 = 0.0;
      }
LAB_002cb850:
      if (fVar12 <= fVar11) goto LAB_002cb8b8;
      GetScaledIntColor__7EILightfPUi(&this->field0_0x0,fVar12,intColor);
      puVar4 = intColor;
      iVar3 = 2;
      do {
        uVar1 = *puVar4;
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + 1;
        uVar2 = 0xff;
        if (*pixels + uVar1 < 0x100) {
          uVar2 = *pixels + uVar1;
        }
        *pixels = (byte)uVar2;
        pixels = pixels + 1;
      } while (-1 < iVar3);
      fVar12 = (vPixelDelta->field0_0x0).d[0];
    }
    else {
LAB_002cb8b8:
      pixels = pixels + 3;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar12 = (vPixelDelta->field0_0x0).d[0];
    }
                    /* end of inlined section */
    nPixels = nPixels + -1;
    pbVar5 = pbVar5 + 4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vPos.field0_0x0.d[0] = vPos.field0_0x0.d[0] + fVar12;
    vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + (vPixelDelta->field0_0x0).d[1];
    vPos.field0_0x0.d[2] = vPos.field0_0x0.d[2] + (vPixelDelta->field0_0x0).d[2];
                    /* end of inlined section */
    if (nPixels == 0) {
      return;
    }
  } while( true );
}

void EISpotLight::CalcLightOnPoint(EVec3 &vReceiverPos, EVec3 &vColorOut, EVec3 &vDirectionOut) {
	EVec3 vDelta;
	float distance;
	float distanceFactor;
	EVec3 vDir;
	float angleDot;
	float angleFactor;
	EVec3 *this;
	EVec3 &v;
	EVec3 &vVec;
	float u;
	float u;
	float scaler;
	EVec3 &v;
	float u;
	float u;
	EVec3 &vVec;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  EVec3 vDelta;
  EVec3 vDir;
  
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
    uVar5 = *(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 & -1L << (8 - uVar2) * 8 |
            *(ulong *)((int)vDirectionOut - uVar2) >> uVar2 * 8;
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
    return;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar13 = (vReceiverPos->field0_0x0).d[0] - (this->m_vPos).field0_0x0.d[0];
  fVar7 = (vReceiverPos->field0_0x0).d[1] - (this->m_vPos).field0_0x0.d[1];
  fVar6 = (vReceiverPos->field0_0x0).d[2] - (this->m_vPos).field0_0x0.d[2];
  fVar8 = sqrtf(fVar13 * fVar13 + fVar7 * fVar7 + fVar6 * fVar6);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  if (fVar8 == 0.0) {
                    /* end of inlined section */
    fVar6 = (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vDir.field0_0x0.d[0] = fVar6 * (this->field0_0x0).m_vColor.field0_0x0.d[0];
    vDir.field0_0x0.d[2] = fVar6 * (this->field0_0x0).m_vColor.field0_0x0.d[2];
    vDir.field0_0x0.d[1] = fVar6 * (this->field0_0x0).m_vColor.field0_0x0.d[1];
                    /* end of inlined section */
LAB_002cba24:
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
              CONCAT44(vDir.field0_0x0.d[1],vDir.field0_0x0.d[0]) >> (7 - uVar3) * 8;
    uVar3 = (uint)vColorOut & 7;
    *(ulong *)((int)vColorOut - uVar3) =
         CONCAT44(vDir.field0_0x0.d[1],vDir.field0_0x0.d[0]) << uVar3 * 8 |
         *(ulong *)((int)vColorOut - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (vColorOut->field0_0x0).d[2] = vDir.field0_0x0.d[2];
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
  }
  else {
    if (*(int *)&this->m_distanceFalloffEnabled == 0) {
LAB_002cbab0:
      fVar9 = 1.0;
    }
    else {
      fVar9 = this->m_falloffEndDistance;
      if (fVar9 <= fVar8) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vDir.field0_0x0.d[2] = 0.0;
        vDir.field0_0x0.d[1] = 0.0;
        vDir.field0_0x0.d[0] = 0.0;
        goto LAB_002cba24;
      }
      if (fVar8 <= this->m_falloffStartDistance) goto LAB_002cbab0;
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
      fVar9 = (fVar9 - fVar8) / (fVar9 - this->m_falloffStartDistance);
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
      fVar9 = fVar9 * -2.0 * fVar9 * fVar9 + fVar9 * 3.0 * fVar9;
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar11 = 1.0;
    fVar8 = 1.0 / fVar8;
                    /* end of inlined section */
    fVar12 = this->m_cosFalloffEndAngle;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar10 = fVar13 * fVar8 * (this->m_vDir).field0_0x0.d[0] +
             fVar7 * fVar8 * (this->m_vDir).field0_0x0.d[1] +
             fVar6 * fVar8 * (this->m_vDir).field0_0x0.d[2];
                    /* end of inlined section */
    if (fVar10 <= fVar12) {
      puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar3 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar3);
      *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
      uVar3 = (uint)vColorOut & 7;
      *(ulong *)((int)vColorOut - uVar3) =
           0L << uVar3 * 8 |
           *(ulong *)((int)vColorOut - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      (vColorOut->field0_0x0).d[2] = 0.0;
    }
    else {
      if (fVar10 < this->m_cosFalloffStartAngle) {
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
        fVar11 = (fVar10 - fVar12) / (this->m_cosFalloffStartAngle - fVar12);
                    /* inlined from /eor/src2/common/math/e_math.h */
        fVar11 = fVar11 * -2.0 * fVar11 * fVar11 + fVar11 * 3.0 * fVar11;
      }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar10 = (this->field0_0x0).m_vColor.field0_0x0.d[2];
                    /* end of inlined section */
      fVar9 = fVar11 * fVar9 * (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar5 = CONCAT44(fVar9 * (this->field0_0x0).m_vColor.field0_0x0.d[1],
                       fVar9 * (this->field0_0x0).m_vColor.field0_0x0.d[0]);
      puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar3);
      *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
      uVar3 = (uint)vColorOut & 7;
      *(ulong *)((int)vColorOut - uVar3) =
           uVar5 << uVar3 * 8 |
           *(ulong *)((int)vColorOut - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      (vColorOut->field0_0x0).d[2] = fVar9 * fVar10;
      uVar5 = CONCAT44(fVar7 * fVar8,fVar13 * fVar8);
      puVar1 = (undefined *)((int)&vDirectionOut->field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar3);
      *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
      uVar3 = (uint)vDirectionOut & 7;
      *(ulong *)((int)vDirectionOut - uVar3) =
           uVar5 << uVar3 * 8 |
           *(ulong *)((int)vDirectionOut - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      (vDirectionOut->field0_0x0).d[2] = fVar6 * fVar8;
    }
  }
  return;
}

void EISpotLight::Setup() {
	EBound3 b;
	float ninety;
	int d;
	EVec3 vAxis;
	int value;
	EVec3 &v;
	int value;
	int value;
	int value;
	int value;
	int value;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  EVec3 *pEVar5;
  EBound3 *pEVar6;
  EVec3 *pEVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  EBound3 b;
  EVec3 vAxis;
  
  pEVar6 = &b;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vAxis.field0_0x0.d[2] = 0.0;
  vAxis.field0_0x0.d[1] = 0.0;
  vAxis.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
  iVar8 = *(int *)&this->m_distanceFalloffEnabled;
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | 0UL >> (7 - uVar3) * 8;
  uVar3 = (uint)&b.vMax & 7;
  puVar4 = (ulong *)((int)&b.vMax - uVar3);
  *puVar4 = 0L << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  b.vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  uVar2 = (uint)&b.vMax & 7;
  b.vMin.field0_0x0._0_8_ =
       *(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 & -1L << (8 - uVar2) * 8 |
       *(ulong *)((int)&b.vMax - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar3) * 8;
  b.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  pEVar7 = &vAxis;
  if (iVar8 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vAxis.field0_0x0.d[2] = DAT_003c59f4;
    vAxis.field0_0x0.d[1] = DAT_003c59f4;
    vAxis.field0_0x0.d[0] = DAT_003c59f4;
                    /* end of inlined section */
    b.vMin.field0_0x0._0_8_ = CONCAT44(DAT_003c59f4,DAT_003c59f4);
    puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar3) * 8;
    b.vMin.field0_0x0.d[2] = DAT_003c59f4;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vAxis.field0_0x0.d[2] = DAT_003c59f8;
    vAxis.field0_0x0.d[1] = DAT_003c59f8;
    vAxis.field0_0x0.d[0] = DAT_003c59f8;
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
              CONCAT44(DAT_003c59f8,DAT_003c59f8) >> (7 - uVar3) * 8;
    uVar3 = (uint)&b.vMax & 7;
    puVar4 = (ulong *)((int)&b.vMax - uVar3);
    *puVar4 = CONCAT44(DAT_003c59f8,DAT_003c59f8) << uVar3 * 8 |
              *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    b.vMax.field0_0x0.d[2] = DAT_003c59f8;
                    /* end of inlined section */
  }
  else {
    Compute__7EBound3RC5EVec3f(&b,&this->m_vPos,this->m_falloffEndDistance);
  }
                    /* inlined from /eor/src2/common/e_standard_macros.h */
  fVar10 = 1.570796;
                    /* end of inlined section */
  fVar11 = 1.0;
  pEVar5 = &this->m_vPos;
  iVar8 = 2;
  do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vAxis.field0_0x0.d[2] = 0.0;
    vAxis.field0_0x0.d[1] = 0.0;
    vAxis.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
    (pEVar7->field0_0x0).d[0] = fVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar9 = acosf(vAxis.field0_0x0.d[0] * (this->m_vDir).field0_0x0.d[0] +
                  vAxis.field0_0x0.d[1] * (this->m_vDir).field0_0x0.d[1] +
                  vAxis.field0_0x0.d[2] * (this->m_vDir).field0_0x0.d[2]);
    if (this->m_falloffEndAngle * 0.5 + fVar10 <= fVar9) {
                    /* end of inlined section */
      *(float *)((int)pEVar6 + 0xc) = (pEVar5->field0_0x0).d[0];
    }
    else {
      (pEVar7->field0_0x0).d[0] = -1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar9 = acosf(vAxis.field0_0x0.d[0] * (this->m_vDir).field0_0x0.d[0] +
                    vAxis.field0_0x0.d[1] * (this->m_vDir).field0_0x0.d[1] +
                    vAxis.field0_0x0.d[2] * (this->m_vDir).field0_0x0.d[2]);
      if (this->m_falloffEndAngle * 0.5 + fVar10 <= fVar9) {
                    /* end of inlined section */
        *(float *)pEVar6 = (pEVar5->field0_0x0).d[0];
      }
    }
    pEVar6 = (EBound3 *)((int)pEVar6 + 4);
    pEVar5 = (EVec3 *)((int)&pEVar5->field0_0x0 + 4);
    iVar8 = iVar8 + -1;
    pEVar7 = (EVec3 *)((int)&pEVar7->field0_0x0 + 4);
  } while (-1 < iVar8);
  SetBounds__9EInstanceRC7EBound3((EInstance *)this,&b);
  fVar10 = cosf(this->m_falloffStartAngle * 0.5);
  this->m_cosFalloffStartAngle = fVar10;
  fVar10 = cosf(this->m_falloffEndAngle * 0.5);
  this->m_cosFalloffEndAngle = fVar10;
  return;
}

bool EISpotLight::BackCullTest(EVec3 &vPointOnSurface, EVec3 &vSurfaceNormal) {
	EVec3 *this;
	EVec3 &v;
	EVec3 &v;
	EVec3 *this;
	EVec3 &v;
	
  bool bVar1;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  bVar1 = false;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  if ((0.0 < ((this->m_vPos).field0_0x0.d[0] - (vPointOnSurface->field0_0x0).d[0]) *
             (vSurfaceNormal->field0_0x0).d[0] +
             ((this->m_vPos).field0_0x0.d[1] - (vPointOnSurface->field0_0x0).d[1]) *
             (vSurfaceNormal->field0_0x0).d[1] +
             ((this->m_vPos).field0_0x0.d[2] - (vPointOnSurface->field0_0x0).d[2]) *
             (vSurfaceNormal->field0_0x0).d[2]) &&
     ((this->m_vDir).field0_0x0.d[0] * (vSurfaceNormal->field0_0x0).d[0] +
      (this->m_vDir).field0_0x0.d[1] * (vSurfaceNormal->field0_0x0).d[1] +
      (this->m_vDir).field0_0x0.d[2] * (vSurfaceNormal->field0_0x0).d[2] <
      this->m_cosFalloffEndAngle)) {
    bVar1 = true;
  }
  return bVar1;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_ispotlight.h */
    gpTypeInfo_EISpotLight =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_11EISpotLight_m_typeInfo,New__11EISpotLight,0,"EISpotLight",
                    &_7EILight_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void EISpotLight::~EISpotLight(int __in_chrg) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_ilight.h */
  ___9EInstance((EInstance *)this,__in_chrg);
  return;
}

EISpotLight* EISpotLight::New() {
  EISpotLight *pEVar1;
  
  pEVar1 = (EISpotLight *)__builtin_new(0xd8);
  pEVar1 = __11EISpotLight(pEVar1);
  return pEVar1;
}

void EISpotLight::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EISpotLight *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EISpotLight::GetTypeInfo() {
  return &_11EISpotLight_m_typeInfo;
}

char* EISpotLight::GetTypeName() {
  return _11EISpotLight_m_typeInfo.m_name;
}

u32 EISpotLight::GetTypeKey() {
  return _11EISpotLight_m_typeInfo.m_key;
}

u16 EISpotLight::GetTypeVersion() {
  return _11EISpotLight_m_typeInfo.m_version;
}

u16 EISpotLight::GetReadVersion() {
  return _11EISpotLight_m_typeInfo.m_readVersion;
}

ETypeInfo* EISpotLight::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_11EISpotLight_m_typeInfo,New__11EISpotLight,version,"EISpotLight",
                      &_7EILight_m_typeInfo);
  return pEVar1;
}

EISpotLight* EISpotLight::CreateCopy() {
  EISpotLight *pEVar1;
  
  pEVar1 = (EISpotLight *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

bool EISpotLight::CanCastShadows() {
  return true;
}

EVec3 EISpotLight::GetShadowSourcePos() {
	EVec3 *this;
	EVec3 &v;
	
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[0] = (this->m_vPos).field0_0x0.d[0];
  (__return_storage_ptr__->field0_0x0).d[1] = (this->m_vPos).field0_0x0.d[1];
  (__return_storage_ptr__->field0_0x0).d[2] = (this->m_vPos).field0_0x0.d[2];
  return __return_storage_ptr__;
}

void global constructors keyed to gpTypeInfo_EISpotLight() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
