// STATUS: NOT STARTED

#include "e_ipointlight.h"

ETypeInfo *gpTypeInfo_EIPointLight = NULL;

__vtbl_ptr_type EIPointLight virtual table[32] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::SafeDelete,
		/* .__delta2 = */ -13040
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::GetTypeInfo,
		/* .__delta2 = */ -12984
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::GetTypeName,
		/* .__delta2 = */ -12968
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::GetTypeKey,
		/* .__delta2 = */ -12952
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::GetTypeVersion,
		/* .__delta2 = */ -12936
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::~EIPointLight,
		/* .__delta2 = */ -13112
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::Read,
		/* .__delta2 = */ -15656
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::Write,
		/* .__delta2 = */ -15832
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
		/* .__pfn = */ &EIPointLight::CalcLightOnSurface,
		/* .__delta2 = */ -15480
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::CalcLightOnPoint,
		/* .__delta2 = */ -14168
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::AddLightingToLightmapRow,
		/* .__delta2 = */ -14928
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::Setup,
		/* .__delta2 = */ -13552
	},
	/* [28] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::BackCullTest,
		/* .__delta2 = */ -13320
	},
	/* [29] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::CanCastShadows,
		/* .__delta2 = */ -12808
	},
	/* [30] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EIPointLight::GetShadowSourcePos,
		/* .__delta2 = */ -12800
	},
	/* [31] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

ETypeInfo EIPointLight::m_typeInfo;

EStream& operator<<(EStream &s, EIPointLight *pD) {
  EStream *pEVar1;
  
  pEVar1 = __ls__FR7EStreamP9EStorable(s,(EStorable *)pD);
  return pEVar1;
}

EStream& operator>>(EStream &s, EIPointLight *&pD) {
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
  *pD = (EIPointLight *)pStorable;
  return s;
}

EIPointLight* EIPointLight::EIPointLight() {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  
  __7EILight(&this->field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).field0_0x0.field0_0x0.__vtable = (EStorable__vtable *)_vt_12EIPointLight;
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
  Setup__12EIPointLight(this);
  return this;
}

void EIPointLight::Write(EStream &s) {
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

void EIPointLight::Read(EStream &s) {
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
                    /* inlined from c:/eor/src2/engine/instance/light/e_ipointlight.h */
                    /* end of inlined section */
  if (_12EIPointLight_m_typeInfo.m_readVersion == 0) {
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

void EIPointLight::CalcLightOnSurface(EVec3 &vReceiverPos, EVec3 &vReceiverNormal, EVec3 &vColorOut, bool resetPrevious) {
	EVec3 vDelta;
	float distance;
	float distanceFactor;
	float dot;
	EVec3 *this;
	EVec3 &v;
	EVec3 &vVec;
	float u;
	float u;
	EVec3 *this;
	EVec3 &vVec;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EVec3 vDelta;
  float local_50;
  float local_48;
  
  if (*(int *)&(this->field0_0x0).m_on == 0) {
LAB_002cc574:
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
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar8 = (vReceiverPos->field0_0x0).d[0] - (this->m_vPos).field0_0x0.d[0];
    fVar5 = (vReceiverPos->field0_0x0).d[1] - (this->m_vPos).field0_0x0.d[1];
    fVar4 = (vReceiverPos->field0_0x0).d[2] - (this->m_vPos).field0_0x0.d[2];
    fVar6 = sqrtf(fVar8 * fVar8 + fVar5 * fVar5 + fVar4 * fVar4);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    if (fVar6 == 0.0) {
      fVar4 = (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_50 = fVar4 * (this->field0_0x0).m_vColor.field0_0x0.d[0];
      local_48 = fVar4 * (this->field0_0x0).m_vColor.field0_0x0.d[2];
      fVar4 = fVar4 * (this->field0_0x0).m_vColor.field0_0x0.d[1];
                    /* end of inlined section */
    }
    else {
      if (*(int *)&this->m_distanceFalloffEnabled == 0) {
LAB_002cc4d4:
        fVar7 = 1.0;
      }
      else {
        fVar7 = this->m_falloffEndDistance;
        if (fVar7 <= fVar6) {
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
        if (fVar6 <= this->m_falloffStartDistance) goto LAB_002cc4d4;
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
        fVar7 = (fVar7 - fVar6) / (fVar7 - this->m_falloffStartDistance);
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
        fVar7 = fVar7 * -2.0 * fVar7 * fVar7 + fVar7 * 3.0 * fVar7;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar6 = -((vReceiverNormal->field0_0x0).d[0] * fVar8 +
                (vReceiverNormal->field0_0x0).d[1] * fVar5 +
               (vReceiverNormal->field0_0x0).d[2] * fVar4) / fVar6;
      if (fVar6 <= 0.0) goto LAB_002cc574;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar4 = fVar6 * fVar7 * (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_48 = fVar4 * (this->field0_0x0).m_vColor.field0_0x0.d[2];
      local_50 = fVar4 * (this->field0_0x0).m_vColor.field0_0x0.d[0];
      fVar4 = fVar4 * (this->field0_0x0).m_vColor.field0_0x0.d[1];
    }
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(fVar4,local_50) >> (7 - uVar2) * 8;
    uVar2 = (uint)vColorOut & 7;
    *(ulong *)((int)vColorOut - uVar2) =
         CONCAT44(fVar4,local_50) << uVar2 * 8 |
         *(ulong *)((int)vColorOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (vColorOut->field0_0x0).d[2] = local_48;
  }
  return;
}

void EIPointLight::AddLightingToLightmapRow(EVec3 &vStartPos, EVec3 &vPixelDelta, EVec3 &vReceiverNormal, int nPixels, u8 *pixels, u8 *shadowMaskPixels) {
	EVec3 vPos;
	u8 *pixel;
	u8 *shadowMaskPixel;
	float falloffEndDistanceSq;
	float scaledIntensity;
	EVec3 &v;
	EVec3 vDelta;
	float distanceSq;
	EVec3 *this;
	float pixelIntensity;
	float distance;
	float dot;
	EVec3 *this;
	int c;
	int value;
	EVec3 &v;
	
  EVec3__null___1__1 *pEVar1;
  EVec3 *pEVar2;
  int iVar3;
  byte *pbVar4;
  float fVar5;
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
  
  fVar10 = 0.0;
  fVar12 = this->m_falloffEndDistance * this->m_falloffEndDistance;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vPos.field0_0x0.d[2] = (vStartPos->field0_0x0).d[2];
                    /* end of inlined section */
  fVar13 = (this->field0_0x0).m_intensity * 128.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vPos.field0_0x0.d[0] = (vStartPos->field0_0x0).d[0];
  vPos.field0_0x0.d[1] = (vStartPos->field0_0x0).d[1];
  pbVar4 = shadowMaskPixels;
  do {
                    /* end of inlined section */
    if (shadowMaskPixels == (uchar *)0x0) {
      fVar5 = (this->m_vPos).field0_0x0.d[1];
LAB_002cc658:
      fVar6 = (this->m_vPos).field0_0x0.d[0] - vPos.field0_0x0.d[0];
      fVar5 = fVar5 - vPos.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar8 = (this->m_vPos).field0_0x0.d[2] - vPos.field0_0x0.d[2];
                    /* end of inlined section */
      fVar9 = fVar6 * fVar6 + fVar5 * fVar5 + fVar8 * fVar8;
      if ((*(int *)&this->m_distanceFalloffEnabled != 0) && (fVar12 < fVar9)) goto LAB_002cc824;
      fVar11 = fVar13;
      if (shadowMaskPixels != (uchar *)0x0) {
        fVar11 = fVar13 * 0.003921569 * (float)(uint)*pbVar4;
      }
      fVar9 = sqrtf(fVar9);
      if (fVar9 != fVar10) {
        if (*(int *)&this->m_distanceFalloffEnabled != 0) {
          fVar7 = this->m_falloffEndDistance;
          if (fVar7 <= fVar9) {
            fVar11 = 0.0;
          }
          else if (this->m_falloffStartDistance < fVar9) {
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
            fVar7 = (fVar7 - fVar9) / (fVar7 - this->m_falloffStartDistance);
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
            fVar11 = fVar11 * (fVar7 * -2.0 * fVar7 * fVar7 + fVar7 * 3.0 * fVar7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          }
        }
        fVar5 = (vReceiverNormal->field0_0x0).d[0] * fVar6 +
                (vReceiverNormal->field0_0x0).d[1] * fVar5 +
                (vReceiverNormal->field0_0x0).d[2] * fVar8;
                    /* end of inlined section */
        if (fVar5 <= fVar10) {
          fVar11 = 0.0;
        }
        else {
          fVar11 = fVar11 * (fVar5 / fVar9);
        }
      }
      if (fVar11 <= fVar10) goto LAB_002cc824;
      pEVar2 = &(this->field0_0x0).m_vColor;
      iVar3 = 2;
      do {
                    /* end of inlined section */
        iVar3 = iVar3 + -1;
        pEVar1 = &pEVar2->field0_0x0;
        pEVar2 = (EVec3 *)((int)&pEVar2->field0_0x0 + 4);
        fVar5 = pEVar1->d[0] * fVar11 + (float)(uint)*pixels;
        *pixels = (byte)(int)(float)((int)fVar5 * (uint)(fVar5 < 255.0) |
                                    (uint)(fVar5 >= 255.0) * 0x437f0000);
        pixels = pixels + 1;
      } while (-1 < iVar3);
      fVar5 = (vPixelDelta->field0_0x0).d[0];
    }
    else {
      if (*pbVar4 != 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        fVar5 = (this->m_vPos).field0_0x0.d[1];
        goto LAB_002cc658;
      }
LAB_002cc824:
      pixels = pixels + 3;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar5 = (vPixelDelta->field0_0x0).d[0];
    }
                    /* end of inlined section */
    pbVar4 = pbVar4 + 4;
    nPixels = nPixels + -1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vPos.field0_0x0.d[0] = vPos.field0_0x0.d[0] + fVar5;
    vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + (vPixelDelta->field0_0x0).d[1];
    vPos.field0_0x0.d[2] = vPos.field0_0x0.d[2] + (vPixelDelta->field0_0x0).d[2];
                    /* end of inlined section */
    if (nPixels == 0) {
      return;
    }
  } while( true );
}

void EIPointLight::CalcLightOnPoint(EVec3 &vReceiverPos, EVec3 &vColorOut, EVec3 &vDirectionOut) {
	EVec3 vDelta;
	float distance;
	float distanceFactor;
	EVec3 *this;
	EVec3 &v;
	EVec3 &vVec;
	float u;
	float u;
	EVec3 &vVec;
	float scaler;
	
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
  EVec3 vDelta;
  float local_50;
  float local_4c;
  float local_48;
  
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
  fVar11 = (vReceiverPos->field0_0x0).d[0] - (this->m_vPos).field0_0x0.d[0];
  fVar8 = (vReceiverPos->field0_0x0).d[1] - (this->m_vPos).field0_0x0.d[1];
  fVar6 = (vReceiverPos->field0_0x0).d[2] - (this->m_vPos).field0_0x0.d[2];
  fVar9 = sqrtf(fVar11 * fVar11 + fVar8 * fVar8 + fVar6 * fVar6);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  if (fVar9 == 0.0) {
                    /* end of inlined section */
    local_4c = (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    local_50 = local_4c * (this->field0_0x0).m_vColor.field0_0x0.d[0];
    local_48 = local_4c * (this->field0_0x0).m_vColor.field0_0x0.d[2];
    local_4c = local_4c * (this->field0_0x0).m_vColor.field0_0x0.d[1];
                    /* end of inlined section */
LAB_002cc98c:
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | CONCAT44(local_4c,local_50) >> (7 - uVar3) * 8;
    uVar3 = (uint)vColorOut & 7;
    *(ulong *)((int)vColorOut - uVar3) =
         CONCAT44(local_4c,local_50) << uVar3 * 8 |
         *(ulong *)((int)vColorOut - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (vColorOut->field0_0x0).d[2] = local_48;
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
LAB_002cca18:
      fVar10 = 1.0;
    }
    else {
      fVar10 = this->m_falloffEndDistance;
      if (fVar10 <= fVar9) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_48 = 0.0;
        local_4c = 0.0;
        local_50 = 0.0;
        goto LAB_002cc98c;
      }
      if (fVar9 <= this->m_falloffStartDistance) goto LAB_002cca18;
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
      fVar10 = (fVar10 - fVar9) / (fVar10 - this->m_falloffStartDistance);
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
      fVar10 = fVar10 * -2.0 * fVar10 * fVar10 + fVar10 * 3.0 * fVar10;
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar10 = fVar10 * (this->field0_0x0).m_intensity;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar7 = (this->field0_0x0).m_vColor.field0_0x0.d[2];
    fVar9 = 1.0 / fVar9;
                    /* end of inlined section */
    uVar5 = CONCAT44(fVar10 * (this->field0_0x0).m_vColor.field0_0x0.d[1],
                     fVar10 * (this->field0_0x0).m_vColor.field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&vColorOut->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
    uVar3 = (uint)vColorOut & 7;
    *(ulong *)((int)vColorOut - uVar3) =
         uVar5 << uVar3 * 8 |
         *(ulong *)((int)vColorOut - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (vColorOut->field0_0x0).d[2] = fVar10 * fVar7;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar5 = CONCAT44(fVar8 * fVar9,fVar11 * fVar9);
    puVar1 = (undefined *)((int)&vDirectionOut->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
    uVar3 = (uint)vDirectionOut & 7;
    *(ulong *)((int)vDirectionOut - uVar3) =
         uVar5 << uVar3 * 8 |
         *(ulong *)((int)vDirectionOut - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    (vDirectionOut->field0_0x0).d[2] = fVar6 * fVar9;
  }
  return;
}

void EIPointLight::Setup() {
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
    b.vMin.field0_0x0._0_8_ = CONCAT44(DAT_003c5bc0,DAT_003c5bc0);
    puVar1 = (undefined *)((int)&b.vMin.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)b.vMin.field0_0x0._0_8_ >> (7 - uVar4) * 8;
    b.vMin.field0_0x0.d[2] = DAT_003c5bc0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&b.vMax.field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar5 = (ulong *)(puVar1 + -uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 |
              CONCAT44(DAT_003c5bc4,DAT_003c5bc4) >> (7 - uVar4) * 8;
    uVar4 = (uint)&b.vMax & 7;
    puVar5 = (ulong *)((int)&b.vMax - uVar4);
    *puVar5 = CONCAT44(DAT_003c5bc4,DAT_003c5bc4) << uVar4 * 8 |
              *puVar5 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    b.vMax.field0_0x0.d[2] = DAT_003c5bc4;
  }
  else {
    Compute__7EBound3RC5EVec3f(&b,&this->m_vPos,this->m_falloffEndDistance);
  }
  SetBounds__9EInstanceRC7EBound3((EInstance *)this,&b);
  return;
}

bool EIPointLight::BackCullTest(EVec3 &vPointOnSurface, EVec3 &vSurfaceNormal) {
	EVec3 *this;
	EVec3 &v;
	EVec3 &v;
	
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  return 0.0 < ((this->m_vPos).field0_0x0.d[0] - (vPointOnSurface->field0_0x0).d[0]) *
               (vSurfaceNormal->field0_0x0).d[0] +
               ((this->m_vPos).field0_0x0.d[1] - (vPointOnSurface->field0_0x0).d[1]) *
               (vSurfaceNormal->field0_0x0).d[1] +
               ((this->m_vPos).field0_0x0.d[2] - (vPointOnSurface->field0_0x0).d[2]) *
               (vSurfaceNormal->field0_0x0).d[2];
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p != 0)) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_ipointlight.h */
    gpTypeInfo_EIPointLight =
         Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                   (&_12EIPointLight_m_typeInfo,New__12EIPointLight,0,"EIPointLight",
                    &_7EILight_m_typeInfo);
                    /* end of inlined section */
  }
  return;
}

void EIPointLight::~EIPointLight(int __in_chrg) {
                    /* inlined from c:/eor/src2/engine/instance/light/e_ilight.h */
  ___9EInstance((EInstance *)this,__in_chrg);
  return;
}

EIPointLight* EIPointLight::New() {
  EIPointLight *pEVar1;
  
  pEVar1 = (EIPointLight *)__builtin_new(0xbc);
  pEVar1 = __12EIPointLight(pEVar1);
  return pEVar1;
}

void EIPointLight::SafeDelete() {
  EStorable__vtable *pEVar1;
  
  if (this != (EIPointLight *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.field0_0x0.__vtable;
    (*(code *)pEVar1[1].GetTypeKey)
              ((int)((this->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
               (int)*(short *)&pEVar1[1].GetTypeName,3);
  }
  return;
}

ETypeInfo* EIPointLight::GetTypeInfo() {
  return &_12EIPointLight_m_typeInfo;
}

char* EIPointLight::GetTypeName() {
  return _12EIPointLight_m_typeInfo.m_name;
}

u32 EIPointLight::GetTypeKey() {
  return _12EIPointLight_m_typeInfo.m_key;
}

u16 EIPointLight::GetTypeVersion() {
  return _12EIPointLight_m_typeInfo.m_version;
}

u16 EIPointLight::GetReadVersion() {
  return _12EIPointLight_m_typeInfo.m_readVersion;
}

ETypeInfo* EIPointLight::RegisterType(u16 version) {
  ETypeInfo *pEVar1;
  
  pEVar1 = Register__9ETypeInfoPFv_P9EStorableUsPCcP9ETypeInfo
                     (&_12EIPointLight_m_typeInfo,New__12EIPointLight,version,"EIPointLight",
                      &_7EILight_m_typeInfo);
  return pEVar1;
}

EIPointLight* EIPointLight::CreateCopy() {
  EIPointLight *pEVar1;
  
  pEVar1 = (EIPointLight *)CreateCopy__9EStorable((EStorable *)this);
  return pEVar1;
}

bool EIPointLight::CanCastShadows() {
  return true;
}

EVec3 EIPointLight::GetShadowSourcePos() {
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

void global constructors keyed to gpTypeInfo_EIPointLight() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
