// STATUS: NOT STARTED

#include "CoordConversions.h"

VecNum AltToIso(VecNum &inAlt) {
	static float k1Over2Root6;
	
  float fVar1;
  
  if (__tmp_0_1051 == 0) {
    fVar1 = sqrtf(6.0);
    __tmp_0_1051 = 1;
    k1Over2Root6_1050 = 1.0 / (fVar1 + fVar1);
  }
  return *inAlt * k1Over2Root6_1050;
}

VecNum IsoToAlt(VecNum &inIso) {
	static float k2Root6;
	
  float fVar1;
  
  if (__tmp_1_1056 == 0) {
    fVar1 = sqrtf(6.0);
    k2Root6_1055 = fVar1 + fVar1;
    __tmp_1_1056 = 1;
  }
  return *inIso * k2Root6_1055;
}

VecNum AltToWorld(VecNum &inAlt) {
  float fVar1;
  
  fVar1 = AltToIso__FRCf(inAlt);
  return fVar1 * 3.0;
}

VecNum WorldToAlt(VecNum &inWorldZ) {
  undefined8 unaff_retaddr;
  float fVar1;
  float local_20 [4];
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20[0] = *inWorldZ * 0.3333333;
  fVar1 = IsoToAlt__FRCf(local_20);
  return fVar1;
}

EVec3 IsoToWorld(VecNum &tileX, VecNum &tileY, VecNum &inAlt) {
	EVec3 *this;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *tileY;
  fVar3 = 3.0;
  fVar2 = AltToWorld__FRCf(inAlt);
  fVar1 = *tileX;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[0] = fVar4 * 3.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[1] = fVar2;
  (__return_storage_ptr__->field0_0x0).d[2] = fVar1 * fVar3;
  return __return_storage_ptr__;
}

EVec3 IsoFracsToWorld(VecNum &x, VecNum &y, VecNum &inAlt) {
	EVec3 *this;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *y;
  fVar3 = 0.1875;
  fVar2 = AltToWorld__FRCf(inAlt);
  fVar1 = *x;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[0] = fVar4 * 0.1875;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[1] = fVar2;
  (__return_storage_ptr__->field0_0x0).d[2] = fVar1 * fVar3;
  return __return_storage_ptr__;
}

EVec3 IsoToWorld(FTilePt &inLoc, VecNum &inAlt) {
	EVec3 *this;
	
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = (inLoc->y).whole;
  fVar3 = 0.1875;
  fVar2 = AltToWorld__FRCf(inAlt);
  iVar1 = (inLoc->x).whole;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[0] = (float)iVar4 * 0.1875;
  (__return_storage_ptr__->field0_0x0).d[1] = fVar2;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (__return_storage_ptr__->field0_0x0).d[2] = (float)iVar1 * fVar3;
  return __return_storage_ptr__;
}

FTilePt WorldToIso(EVec3 &inLoc) {
	FTilePt aPt;
	float x;
	float y;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  float *in_a1_lo;
  float fVar4;
  float fVar5;
  FTilePt aPt;
  
  fVar5 = in_a1_lo[2] * 5.333333;
  if (fVar5 < 0.0) {
    fVar5 = ceilf(fVar5 - 0.5);
  }
  else {
    fVar5 = floorf(fVar5 + 0.5);
  }
  fVar4 = *in_a1_lo * 5.333333;
  if (fVar4 < 0.0) {
    fVar4 = ceilf(fVar4 - 0.5);
  }
  else {
    fVar4 = floorf(fVar4 + 0.5);
  }
  puVar1 = (undefined *)((int)&inLoc->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44((int)fVar5,(int)fVar4) >> (7 - uVar2) * 8;
  uVar2 = (uint)inLoc & 7;
  *(ulong *)((int)inLoc - uVar2) =
       CONCAT44((int)fVar5,(int)fVar4) << uVar2 * 8 |
       *(ulong *)((int)inLoc - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  return (FTilePt)(long)(int)inLoc;
}

EMat4 ObjectRotationTf(int inDirection) {
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  float local_30 [4];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30[0] = ((float)inDirection * 0.125 + (float)inDirection * 0.125) * 3.141593;
  RotationTf__F12RotationAxisRCf(__return_storage_ptr__,kYAxis,local_30);
  return __return_storage_ptr__;
}

EMat4 RotationTf(RotationAxis inAxis, VecNum &inAngle) {
	float c;
	float s;
	EMat4 result;
	float y;
	float z;
	float z;
	float x;
	float x;
	float z;
	float x;
	float y;
	float y;
	EMat4 *this;
	
  float fVar1;
  float fVar2;
  EMat4 result;
  float local_60;
  float local_58;
  
  fVar1 = cosf(*inAngle);
  fVar2 = sinf(*inAngle);
  if (inAxis == kYAxis) {
                    /* end of inlined section */
    result.field0_0x0.d[0][2] = -fVar2;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    result.field0_0x0.d[0][1] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    result.field0_0x0.d[1][0] = 0.0;
    result.field0_0x0.d[1][1] = 1.0;
    local_60 = fVar2;
    local_58 = fVar1;
LAB_00268f4c:
                    /* end of inlined section */
    result.field0_0x0.d[1][2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    result.field0_0x0.d[2][0] = local_60;
    result.field0_0x0.d[2][1] = 0.0;
    result.field0_0x0.d[2][2] = local_58;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    result.field0_0x0.d[0][0] = fVar1;
LAB_00268f64:
                    /* end of inlined section */
    result.field0_0x0.d[2][3] = 0.0;
    result.field0_0x0.d[1][3] = 0.0;
    result.field0_0x0.d[0][3] = 0.0;
    result.field0_0x0.d[3][0] = 0.0;
    result.field0_0x0.d[3][1] = 0.0;
    result.field0_0x0.d[3][2] = 0.0;
    result.field0_0x0.d[3][3] = 1.0;
  }
  else {
    if ((int)inAxis < 2) {
      if (inAxis == kXAxis) {
        result.field0_0x0.d[2][1] = -fVar2;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        result.field0_0x0.d[0][0] = 1.0;
        result.field0_0x0.d[0][1] = 0.0;
        result.field0_0x0.d[0][2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        result.field0_0x0.d[1][0] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        result.field0_0x0.d[2][0] = 0.0;
        result.field0_0x0.d[1][1] = fVar1;
        result.field0_0x0.d[1][2] = fVar2;
        result.field0_0x0.d[2][2] = fVar1;
        goto LAB_00268f64;
      }
    }
    else if (inAxis == kZAxis) {
                    /* end of inlined section */
      result.field0_0x0.d[1][0] = -fVar2;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      result.field0_0x0.d[0][2] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_60 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_58 = 1.0;
      result.field0_0x0.d[0][1] = fVar2;
      result.field0_0x0.d[1][1] = fVar1;
      goto LAB_00268f4c;
    }
    Id__5EMat4(&result);
  }
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  __as__5EMat4RC5EMat4(__return_storage_ptr__,&result);
                    /* end of inlined section */
  return __return_storage_ptr__;
}
