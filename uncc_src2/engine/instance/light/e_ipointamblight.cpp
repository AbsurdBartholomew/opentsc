// STATUS: NOT STARTED

#include "e_ipointamblight.h"

ETypeInfo *gpTypeInfo_EIPointAmbLight = NULL;

__vtbl_ptr_type EIPointAmbLight virtual table[32] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointAmbLight::SafeDelete,
		/* .__delta2 = */ -10440
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointAmbLight::GetTypeInfo,
		/* .__delta2 = */ -10384
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointAmbLight::GetTypeName,
		/* .__delta2 = */ -10368
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointAmbLight::GetTypeKey,
		/* .__delta2 = */ -10352
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointAmbLight::GetTypeVersion,
		/* .__delta2 = */ -10336
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointAmbLight::~EIPointAmbLight,
		/* .__delta2 = */ -10512
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointAmbLight::Read,
		/* .__delta2 = */ -12328
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointAmbLight::Write,
		/* .__delta2 = */ -12504
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
		/* .__pfn = */ &EIPointAmbLight::CalcLightOnSurface,
		/* .__delta2 = */ -12152
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointAmbLight::CalcLightOnPoint,
		/* .__delta2 = */ -11264
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointAmbLight::AddLightingToLightmapRow,
		/* .__delta2 = */ -11776
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointAmbLight::Setup,
		/* .__delta2 = */ -10824
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

ETypeInfo EIPointAmbLight::m_typeInfo;

EStream& operator<<(EStream &s, EIPointAmbLight *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIPointAmbLight *&pD) {
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
  *pD = (EIPointAmbLight *)pStorable;
  return s;
}

EIPointAmbLight* EIPointAmbLight::EIPointAmbLight() {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  
  __7EILight(&this->field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_15EIPointAmbLight;
  puVar1 = (undefined *)((int)&(this->m_vPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vPos & 7;
  puVar3 = (ulong *)((int)&this->m_vPos - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vPos).field0_0x0.d[2] = 0.0;
  this->m_falloffStartDistance = 10.0;
  this->m_falloffEndDistance = 20.0;
  *(undefined4 *)&this->m_distanceFalloffEnabled = 1;
  Setup__15EIPointAmbLight(this);
  return this;
}

void EIPointAmbLight::Write(EStream &s) {
	float d;
	float d;
	u8 v;
	
  EStream *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  uchar v;
  float local_40;
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
  pEVar1 = __ls__FR7EStreamRC5EVec3(s,&this->m_vPos);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
  local_40 = this->m_falloffStartDistance;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&local_40,4);
  d = this->m_falloffEndDistance;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&d,4);
  v = *(int *)&this->m_distanceFalloffEnabled != 0;
  (*(code *)pEVar1->__vtable[1].Write)
            (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].Read,&v,1);
  return;
}

void EIPointAmbLight::Read(EStream &s) {
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
  
                    /* end of inlined section */
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Read__7EILightR7EStream(&this->field0_0x0,s);
                    /* inlined from c:/eor/src2/engine/instance/light/e_ipointamblight.h */
                    /* end of inlined section */
  if (_15EIPointAmbLight_m_typeInfo.m_readVersion == 0) {
    pEVar1 = __rs__FR7EStreamR5EVec3(s,&this->m_vPos);
                    /* inlined from /eor/src2/common/storage/e_storage.h */
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_falloffStartDistance,4);
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,
               &this->m_falloffEndDistance,4);
    (*(code *)pEVar1->__vtable[1].GetPos)
              (&pEVar1->m_streamingStructure + *(short *)&pEVar1->__vtable[1].EStream,&v,1);
    *(uint *)&this->m_distanceFalloffEnabled = (uint)(v != '\0');
                    /* end of inlined section */
  }
  return;
}

void EIPointAmbLight::CalcLightOnSurface(EVec3 &vReceiverPos, EVec3 &vReceiverNormal, EVec3 &vColorOut, bool resetPrevious) {
	float distanceFactor;
	EVec3 vDelta;
	float distance;
	EVec3 *this;
	EVec3 &v;
	float u;
	float u;
	EVec3 &vVec;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  EVec3 vDelta;
  
  if (*(int *)&(this->field0_0x0).m_on == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vDelta.field0_0x0.d[2] = 0.0;
    vDelta.field0_0x0.d[1] = 0.0;
    vDelta.field0_0x0.d[0] = 0.0;
    goto LAB_002cd1d4;
  }
  if (*(int *)&this->m_distanceFalloffEnabled == 0) {
LAB_002cd18c:
    fVar4 = 1.0;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar6 = (vReceiverPos->field0_0x0).d[0] - (this->m_vPos).field0_0x0.d[0];
    fVar5 = (vReceiverPos->field0_0x0).d[1] - (this->m_vPos).field0_0x0.d[1];
    fVar4 = (vReceiverPos->field0_0x0).d[2] - (this->m_vPos).field0_0x0.d[2];
    fVar4 = sqrtf(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
                    /* end of inlined section */
    fVar5 = this->m_falloffEndDistance;
    if (fVar5 <= fVar4) {
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
    if (fVar4 <= this->m_falloffStartDistance) goto LAB_002cd18c;
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
    fVar4 = (fVar5 - fVar4) / (fVar5 - this->m_falloffStartDistance);
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
    fVar4 = fVar4 * -2.0 * fVar4 * fVar4 + fVar4 * 3.0 * fVar4;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  fVar4 = fVar4 * (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vDelta.field0_0x0.d[2] = fVar4 * (this->field0_0x0).m_vColor.field0_0x0.d[2];
  vDelta.field0_0x0.d[0] = fVar4 * (this->field0_0x0).m_vColor.field0_0x0.d[0];
  vDelta.field0_0x0.d[1] = fVar4 * (this->field0_0x0).m_vColor.field0_0x0.d[1];
                    /* end of inlined section */
LAB_002cd1d4:
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
            CONCAT44(vDelta.field0_0x0.d[1],vDelta.field0_0x0.d[0]) >> (7 - uVar2) * 8;
  uVar2 = (uint)vColorOut & 7;
  *(ulong *)((int)vColorOut - uVar2) =
       CONCAT44(vDelta.field0_0x0.d[1],vDelta.field0_0x0.d[0]) << uVar2 * 8 |
       *(ulong *)((int)vColorOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vColorOut->field0_0x0).d[2] = vDelta.field0_0x0.d[2];
  return;
}

void EIPointAmbLight::AddLightingToLightmapRow(EVec3 &vStartPos, EVec3 &vPixelDelta, EVec3 &vReceiverNormal, int nPixels, u8 *pixels, u8 *shadowMaskPixels) {
	EVec3 vPos;
	u8 *pixel;
	EVec3 &v;
	float pixelIntensity;
	EVec3 vDelta;
	float distance;
	EVec3 *this;
	unsigned int intColor[3];
	int c;
	EVec3 &v;
	
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EVec3 vPos;
  uint intColor [3];
  
  fVar7 = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vPos.field0_0x0.d[2] = (vStartPos->field0_0x0).d[2];
  vPos.field0_0x0.d[0] = (vStartPos->field0_0x0).d[0];
  vPos.field0_0x0.d[1] = (vStartPos->field0_0x0).d[1];
  do {
                    /* end of inlined section */
    fVar8 = 1.0;
    fVar6 = 1.0;
    if (*(int *)&this->m_distanceFalloffEnabled != 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      intColor[0] = (uint)((this->m_vPos).field0_0x0.d[0] - vPos.field0_0x0.d[0]);
      intColor[1] = (uint)((this->m_vPos).field0_0x0.d[1] - vPos.field0_0x0.d[1]);
      intColor[2] = (uint)((this->m_vPos).field0_0x0.d[2] - vPos.field0_0x0.d[2]);
      fVar5 = sqrtf((float)intColor[0] * (float)intColor[0] +
                    (float)intColor[1] * (float)intColor[1] +
                    (float)intColor[2] * (float)intColor[2]);
                    /* end of inlined section */
      fVar6 = fVar8;
      if ((fVar5 != fVar7) && (*(int *)&this->m_distanceFalloffEnabled != 0)) {
        fVar8 = this->m_falloffEndDistance;
        if (fVar8 <= fVar5) {
          fVar6 = 0.0;
        }
        else if (this->m_falloffStartDistance < fVar5) {
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
          fVar6 = (fVar8 - fVar5) / (fVar8 - this->m_falloffStartDistance);
                    /* inlined from /eor/src2/common/math/e_math.h */
          fVar6 = fVar6 * -2.0 * fVar6 * fVar6 + fVar6 * 3.0 * fVar6;
        }
      }
    }
                    /* end of inlined section */
    if (fVar7 < fVar6) {
      GetScaledIntColor__7EILightfPUi(&this->field0_0x0,fVar6,intColor);
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
      fVar6 = (vPixelDelta->field0_0x0).d[0];
    }
    else {
      pixels = pixels + 3;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar6 = (vPixelDelta->field0_0x0).d[0];
    }
                    /* end of inlined section */
    nPixels = nPixels + -1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vPos.field0_0x0.d[0] = vPos.field0_0x0.d[0] + fVar6;
    vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + (vPixelDelta->field0_0x0).d[1];
    vPos.field0_0x0.d[2] = vPos.field0_0x0.d[2] + (vPixelDelta->field0_0x0).d[2];
                    /* end of inlined section */
  } while (nPixels != 0);
  return;
}

void EIPointAmbLight::CalcLightOnPoint(EVec3 &vReceiverPos, EVec3 &vColorOut, EVec3 &vDirectionOut) {
	float distanceFactor;
	EVec3 vDelta;
	float distance;
	EVec3 *this;
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
  EVec3 vDelta;
  
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
  if (*(int *)&(this->field0_0x0).m_on == 0) {
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
  if (*(int *)&this->m_distanceFalloffEnabled != 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar7 = (vReceiverPos->field0_0x0).d[0] - (this->m_vPos).field0_0x0.d[0];
    fVar6 = (vReceiverPos->field0_0x0).d[1] - (this->m_vPos).field0_0x0.d[1];
    fVar5 = (vReceiverPos->field0_0x0).d[2] - (this->m_vPos).field0_0x0.d[2];
    fVar5 = sqrtf(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
                    /* end of inlined section */
    fVar6 = this->m_falloffEndDistance;
    if (fVar6 <= fVar5) {
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
    if (this->m_falloffStartDistance < fVar5) {
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
      fVar5 = (fVar6 - fVar5) / (fVar6 - this->m_falloffStartDistance);
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
      fVar5 = fVar5 * -2.0 * fVar5 * fVar5 + fVar5 * 3.0 * fVar5;
      goto LAB_002cd534;
    }
  }
  fVar5 = 1.0;
LAB_002cd534:
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar6 = (this->field0_0x0).m_vColor.field0_0x0.d[2];
                    /* end of inlined section */
  fVar5 = fVar5 * (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar4 = CONCAT44(fVar5 * (this->field0_0x0).m_vColor.field0_0x0.d[1],
                   fVar5 * (this->field0_0x0).m_vColor.field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)vColorOut & 7;
  *(ulong *)((int)vColorOut - uVar2) =
       uVar4 << uVar2 * 8 |
       *(ulong *)((int)vColorOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vColorOut->field0_0x0).d[2] = fVar5 * fVar6;
  return;
}

void EIPointAmbLight::Setup() {
	EBound3 b;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  EBound3 b;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  iVar3 = *(int *)&this->m_distanceFalloffEnabled;
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_bound3.h */
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | 0UL >> (7 - uVar4) * 8;
  uVar4 = (uint)&b.vMax & 7;
  puVar5 = (ulong *)((int)&b.vMax - uVar4);
  *puVar5 = 0L << uVar4 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
  b.vMax.field0_0x0.d[2] = 0.0;
  puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  uVar2 = (uint)&b.vMax & 7;
  b.vMin.field0_0x0._0_8_ =
       *(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 & -1L << (8 - uVar2) * 8 |
       *(ulong *)((int)&b.vMax - uVar2) >> uVar2 * 8;
  puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
  uVar4 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar4);
  *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
  b.vMin.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  if (iVar3 == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    b.vMin.field0_0x0._0_8_ = CONCAT44(DAT_003c5d78,DAT_003c5d78);
    puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
    b.vMin.field0_0x0.d[2] = DAT_003c5d78;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
              CONCAT44(DAT_003c5d7c,DAT_003c5d7c) >> (7 - uVar4) * 8;
    uVar4 = (uint)&b.vMax & 7;
    puVar5 = (ulong *)((int)&b.vMax - uVar4);
    *puVar5 = CONCAT44(DAT_003c5d7c,DAT_003c5d7c) << uVar4 * 8 |
              *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    b.vMax.field0_0x0.d[2] = DAT_003c5d7c;
  }
  else {
    Compute__7EBound3RC5EVec3f(&b,&this->m_vPos,this->m_falloffEndDistance);
  }
  SetBounds__9EInstanceRC7EBound3((EInstance *)this,&b);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_ipointamblight.h */
    gpTypeInfo_EIPointAmbLight =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_15EIPointAmbLight_m_typeInfo,New__15EIPointAmbLight,0,"EIPointAmbLight",
                    &_7EILight_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void EIPointAmbLight::~EIPointAmbLight(int __in_chrg) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_ilight.h */
  ___9EInstance((EInstance *)this,__in_chrg);
  return;
}

EIPointAmbLight* EIPointAmbLight::New() {
  EIPointAmbLight *pEVar1;
  
  pEVar1 = (EIPointAmbLight *)__builtin_new(0xbc);
  pEVar1 = __15EIPointAmbLight(pEVar1);
  return pEVar1;
}

void EIPointAmbLight::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIPointAmbLight *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EIPointAmbLight::GetTypeInfo() {
  return &_15EIPointAmbLight_m_typeInfo;
}

char* EIPointAmbLight::GetTypeName() {
  return _15EIPointAmbLight_m_typeInfo.m_name;
}

u32 EIPointAmbLight::GetTypeKey() {
  return _15EIPointAmbLight_m_typeInfo.m_key;
}

u16 EIPointAmbLight::GetTypeVersion() {
  return _15EIPointAmbLight_m_typeInfo.m_version;
}

u16 EIPointAmbLight::GetReadVersion() {
  return _15EIPointAmbLight_m_typeInfo.m_readVersion;
}

ETypeInfo* EIPointAmbLight::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_15EIPointAmbLight_m_typeInfo,New__15EIPointAmbLight,version,
                      "EIPointAmbLight",&_7EILight_m_typeInfo);
  return pEVar1;
}

EIPointAmbLight* EIPointAmbLight::CreateCopy() {
  EIPointAmbLight *pEVar1;
  
  pEVar1 = (EIPointAmbLight *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

void global constructors keyed to gpTypeInfo_EIPointAmbLight() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
