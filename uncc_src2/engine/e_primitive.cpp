// STATUS: NOT STARTED

#include "e_primitive.h"

void EPrimitive::Torus(ERC *prc, float circleRadius, float tubeRadius, int circleRes, int tubeRes, int uTextureRepeat, int vTextureRepeat) {
	EGEVert *verts;
	int cCirc;
	int cTube;
	float angle;
	EMat4 m;
	float x;
	float x;
	float tangle;
	EGEVert *pVert;
	EVec3 vPos;
	EVec3 vNormal;
	EVec3 vVertNormal;
	EVec4 *this;
	EVec3 vR;
	int cn;
	int value;
	int nVerts;
	ERC *this;
	unsigned int size;
	unsigned int size;
	int column;
	float u;
	float v1;
	float v2;
	float x;
	float y;
	float x;
	float y;
	
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pAddress;
  undefined4 *puVar4;
  EVec3 *pEVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float *pfVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float x;
  EMat4 m;
  EVec3 vPos;
  EVec3 vNormal;
  EVec3 vVertNormal;
  EVec3 vR;
  ERC *this;
  int nVerts;
  uint size;
  
  iVar26 = 0;
  pAddress = _memmanAlloc__FUiUi(tubeRes * circleRes * 0x50,4);
  if (0 < circleRes) {
    do {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vPos.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      vPos.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
      iVar25 = 0;
      iVar27 = iVar26 + 1;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
      vPos.field0_0x0.d[0] = circleRadius;
      Translate__5EMat4RC5EVec3(&m,&vPos);
                    /* end of inlined section */
      PostRotateZ__5EMat4f(&m,((float)iVar26 * 6.283185) / (float)circleRes);
      if (0 < tubeRes) {
        do {
          x = ((float)iVar25 * 6.283185) / (float)tubeRes;
          pfVar24 = (float *)((iVar26 * tubeRes + iVar25) * 0x50 + (int)pAddress);
          fVar28 = cosf(x);
          vPos.field0_0x0.d[0] = tubeRadius * fVar28;
          vPos.field0_0x0.d[1] = 0.0;
          fVar28 = sinf(x);
          uVar3 = vPos.field0_0x0.d[1];
          uVar2 = vPos.field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
          vNormal.field0_0x0.d[2] = tubeRadius * fVar28;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
          *pfVar24 = vPos.field0_0x0.d[0] * m.field0_0x0.d[0][0] +
                     vPos.field0_0x0.d[1] * m.field0_0x0.d[1][0] +
                     vNormal.field0_0x0.d[2] * m.field0_0x0.d[2][0] + m.field0_0x0.d[3][0];
          pfVar24[1] = vPos.field0_0x0.d[0] * m.field0_0x0.d[0][1] +
                       vPos.field0_0x0.d[1] * m.field0_0x0.d[1][1] +
                       vNormal.field0_0x0.d[2] * m.field0_0x0.d[2][1] + m.field0_0x0.d[3][1];
          pfVar24[2] = vPos.field0_0x0.d[0] * m.field0_0x0.d[0][2] +
                       vPos.field0_0x0.d[1] * m.field0_0x0.d[1][2] +
                       vNormal.field0_0x0.d[2] * m.field0_0x0.d[2][2] + m.field0_0x0.d[3][2];
          vNormal.field0_0x0.d[0] = vPos.field0_0x0.d[0];
          vNormal.field0_0x0.d[1] = vPos.field0_0x0.d[1];
          vPos.field0_0x0.d[2] = vNormal.field0_0x0.d[2];
          fVar28 = sqrtf(vPos.field0_0x0.d[0] * vPos.field0_0x0.d[0] +
                         vPos.field0_0x0.d[1] * vPos.field0_0x0.d[1] +
                         vNormal.field0_0x0.d[2] * vNormal.field0_0x0.d[2]);
          if (fVar28 != 0.0) {
            fVar28 = 1.0 / fVar28;
            vNormal.field0_0x0.d[0] = uVar2 * fVar28;
            vNormal.field0_0x0.d[2] = vNormal.field0_0x0.d[2] * fVar28;
            vNormal.field0_0x0.d[1] = uVar3 * fVar28;
          }
                    /* end of inlined section */
          iVar25 = iVar25 + 1;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
          pfVar9 = pfVar24 + 4;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
          pEVar5 = &vVertNormal;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
          iVar14 = 2;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
          vVertNormal.field0_0x0.d[0] =
               vNormal.field0_0x0.d[0] * m.field0_0x0.d[0][0] +
               vNormal.field0_0x0.d[1] * m.field0_0x0.d[1][0] +
               vNormal.field0_0x0.d[2] * m.field0_0x0.d[2][0];
          vVertNormal.field0_0x0.d[2] =
               vNormal.field0_0x0.d[0] * m.field0_0x0.d[0][2] +
               vNormal.field0_0x0.d[1] * m.field0_0x0.d[1][2] +
               vNormal.field0_0x0.d[2] * m.field0_0x0.d[2][2];
          vVertNormal.field0_0x0.d[1] =
               vNormal.field0_0x0.d[0] * m.field0_0x0.d[0][1] +
               vNormal.field0_0x0.d[1] * m.field0_0x0.d[1][1] +
               vNormal.field0_0x0.d[2] * m.field0_0x0.d[2][1];
          do {
                    /* end of inlined section */
            fVar28 = (pEVar5->field0_0x0).d[0] * 127.0;
            if (-127.0 <= fVar28) {
              fVar28 = (float)(int)(char)(int)(float)((int)fVar28 * (uint)(fVar28 < 127.0) |
                                                     (uint)(fVar28 >= 127.0) * 0x42fe0000);
            }
            else {
              fVar28 = -NAN;
            }
            *pfVar9 = fVar28;
            pEVar5 = (EVec3 *)((int)&pEVar5->field0_0x0 + 4);
            iVar14 = iVar14 + -1;
            pfVar9 = pfVar9 + 1;
          } while (-1 < iVar14);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          pfVar24[8] = 0.0;
                    /* end of inlined section */
          pfVar24[7] = 0.0;
          pfVar24[0xc] = 1.793662e-43;
          pfVar24[0xd] = 1.793662e-43;
          pfVar24[0xe] = 1.793662e-43;
          pfVar24[0xf] = 1.793662e-43;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          pfVar24[0xb] = 0.0;
          pfVar24[9] = 0.0;
                    /* end of inlined section */
          pfVar24[10] = 0.0;
        } while (iVar25 < tubeRes);
      }
      iVar26 = iVar27;
    } while (iVar27 < circleRes);
  }
  if (0 < tubeRes) {
    iVar26 = 0;
    do {
      if (tubeRes == 0) {
        trap(7);
      }
      iVar25 = iVar26 + 1;
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
      iVar27 = 0;
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_dl.h */
      puVar4 = (undefined4 *)
               Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,(circleRes + 1) * 0xa0,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
      if (-1 < circleRes) {
        pfVar24 = (float *)(puVar4 + 8);
        m.field0_0x0.d[0][1] = ((float)vTextureRepeat * (float)iVar26) / (float)tubeRes;
        puVar16 = puVar4;
        puVar17 = puVar4;
        do {
          iVar14 = iVar27 % circleRes;
          fVar28 = (float)iVar27;
          if (circleRes == 0) {
            trap(7);
          }
          iVar27 = iVar27 + 1;
          m.field0_0x0.d[0][0] = ((float)uTextureRepeat * fVar28) / (float)circleRes;
          puVar10 = (undefined4 *)((iVar14 * tubeRes + iVar25 % tubeRes) * 0x50 + (int)pAddress);
          puVar12 = puVar10;
          puVar13 = puVar16;
          do {
            puVar15 = puVar13;
            puVar11 = puVar12;
            uVar18 = puVar11[1];
            uVar19 = puVar11[2];
            uVar20 = puVar11[3];
            uVar1 = *(undefined8 *)(puVar11 + 4);
            uVar22 = puVar11[6];
            uVar23 = puVar11[7];
            *puVar15 = *puVar11;
            puVar15[1] = uVar18;
            puVar15[2] = uVar19;
            puVar15[3] = uVar20;
            puVar15[4] = (int)uVar1;
            puVar15[5] = (int)((ulong)uVar1 >> 0x20);
            puVar15[6] = uVar22;
            puVar15[7] = uVar23;
            puVar12 = puVar11 + 8;
            puVar13 = puVar15 + 8;
          } while (puVar12 != puVar10 + 0x10);
          uVar18 = puVar11[9];
          uVar19 = puVar11[10];
          uVar20 = puVar11[0xb];
          puVar15[8] = *puVar12;
          puVar15[9] = uVar18;
          puVar15[10] = uVar19;
          puVar15[0xb] = uVar20;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          *pfVar24 = m.field0_0x0.d[0][0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          puVar6 = (undefined8 *)((iVar14 * tubeRes + iVar26) * 0x50 + (int)pAddress);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          pfVar24[1] = ((float)vTextureRepeat * (float)iVar25) / (float)tubeRes;
                    /* end of inlined section */
          puVar12 = puVar17 + 0x14;
          puVar8 = puVar6;
          do {
            puVar7 = puVar8;
            puVar13 = puVar12;
            uVar1 = *puVar7;
            uVar18 = *(undefined4 *)(puVar7 + 1);
            uVar19 = *(undefined4 *)((int)puVar7 + 0xc);
            uVar20 = *(undefined4 *)(puVar7 + 2);
            uVar22 = *(undefined4 *)((int)puVar7 + 0x14);
            uVar23 = *(undefined4 *)(puVar7 + 3);
            uVar21 = *(undefined4 *)((int)puVar7 + 0x1c);
            *puVar13 = (int)uVar1;
            puVar13[1] = (int)((ulong)uVar1 >> 0x20);
            puVar13[2] = uVar18;
            puVar13[3] = uVar19;
            puVar13[4] = uVar20;
            puVar13[5] = uVar22;
            puVar13[6] = uVar23;
            puVar13[7] = uVar21;
            puVar8 = puVar7 + 4;
            puVar12 = puVar13 + 8;
          } while (puVar8 != puVar6 + 8);
          uVar1 = *puVar8;
          uVar18 = *(undefined4 *)(puVar7 + 5);
          uVar19 = *(undefined4 *)((int)puVar7 + 0x2c);
          puVar13[8] = (int)uVar1;
          puVar13[9] = (int)((ulong)uVar1 >> 0x20);
          puVar13[10] = uVar18;
          puVar13[0xb] = uVar19;
          puVar17 = puVar17 + 0x28;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          puVar16 = puVar16 + 0x28;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          pfVar24[0x14] = m.field0_0x0.d[0][0];
          pfVar24[0x15] = m.field0_0x0.d[0][1];
          pfVar24 = pfVar24 + 0x28;
                    /* end of inlined section */
        } while (iVar27 <= circleRes);
      }
      (*(code *)prc->__vtable->TriIndexed)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar4,
                 (circleRes + 1) * 2);
      iVar26 = iVar25;
    } while (iVar25 < tubeRes);
  }
  _memmanFree__FPv(pAddress);
  return;
}

void EPrimitive::Sphere(ERC *prc, EBoundSphere &sphere, int res, int uTextureRepeat, int vTextureRepeat, EVec4 vColor) {
	float invRes;
	EVec4 *this;
	EVec4 *this;
	int i;
	int z;
	float zu;
	float zup1;
	float zpos;
	float zposp1;
	float xrad;
	float xradp1;
	int nVerts;
	ERC *this;
	unsigned int size;
	unsigned int size;
	int x;
	float xu;
	float cosfxu;
	float sinfxu;
	float xpos;
	float ypos;
	float xposp1;
	float yposp1;
	EGEVert *pv;
	EGEVert *pvp1;
	EVec3 vModel;
	EVec3 vNormal;
	int cn;
	int col;
	float x;
	float y;
	float z;
	EVec3 &v;
	EVec4 *this;
	int value;
	int value;
	int value;
	EVec4 *this;
	int value;
	float x;
	float y;
	float z;
	EVec3 &v;
	EVec4 *this;
	int value;
	int value;
	int value;
	EVec4 *this;
	int value;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  EVec4__null___1__1 *pEVar5;
  undefined8 *puVar6;
  int iVar7;
  EVec4 *pEVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  EVec3 *pEVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  EVec3 *pEVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  EVec3 vModel;
  EVec3 vNormal;
  ERC *this;
  int local_13c;
  int local_138;
  int local_134;
  float invRes;
  int nVerts;
  int local_128;
  uint size;
  int local_120;
  int local_11c;
  
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  iVar9 = 3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  fVar22 = (vColor->field0_0x0).d[1];
  fVar27 = (vColor->field0_0x0).d[2];
  fVar26 = (vColor->field0_0x0).d[3];
  (vColor->field0_0x0).d[0] = (vColor->field0_0x0).d[0] * 128.0;
  (vColor->field0_0x0).d[1] = fVar22 * 128.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (vColor->field0_0x0).d[2] = fVar27 * 128.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (vColor->field0_0x0).d[3] = fVar26 * 128.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  pEVar8 = vColor;
  do {
    fVar26 = (pEVar8->field0_0x0).d[0];
    fVar22 = 0.0;
    if (0.0 <= fVar26) {
      fVar22 = (float)((int)fVar26 * (uint)(fVar26 < 255.0) | (uint)(fVar26 >= 255.0) * 0x437f0000);
    }
    (pEVar8->field0_0x0).d[0] = fVar22;
    iVar9 = iVar9 + -1;
    pEVar8 = (EVec4 *)((int)&pEVar8->field0_0x0 + 4);
  } while (-1 < iVar9);
                    /* end of inlined section */
  local_11c = 0;
  invRes = 1.0 / (float)res;
  if (0 < res) {
    local_128 = res + 1;
    nVerts = local_128 * 2;
    size = local_128 * 0xa0;
    local_120 = res * 0xa0;
    iVar9 = 1;
    this = prc;
    local_13c = res;
    local_138 = uTextureRepeat;
    local_134 = vTextureRepeat;
    do {
      iVar19 = 0;
      fVar33 = (float)local_11c * invRes;
      fVar34 = (float)iVar9 * invRes;
      fVar22 = sinf((fVar33 - 0.5) * 3.141593);
      fVar22 = fVar22 * sphere->radius;
      fVar26 = sinf((fVar34 - 0.5) * 3.141593);
      fVar26 = fVar26 * sphere->radius;
      fVar27 = sinf(fVar33 * 3.141593);
      fVar23 = sinf(fVar34 * 3.141593);
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_dl.h */
      puVar6 = (undefined8 *)Alloc__11EAllocGroupUii(&this->m_pdl->m_allocGroup,size,0x10);
                    /* end of inlined section */
                    /* end of inlined section */
      local_11c = iVar9;
      if (0 < local_128) {
        do {
          fVar32 = (float)iVar19 * invRes;
          fVar30 = fVar32 * 6.283185;
          fVar24 = cosf(fVar30);
          fVar24 = fVar24 * sphere->radius;
          fVar30 = sinf(fVar30);
          fVar31 = fVar24 * fVar23;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          vNormal.field0_0x0.d[0] = fVar24 * fVar27;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar28 = (sphere->vCenter).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar24 = (sphere->vCenter).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          fVar30 = -(-fVar30 * sphere->radius);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          fVar29 = fVar30 * fVar23;
          vNormal.field0_0x0.d[1] = fVar30 * fVar27;
          puVar21 = puVar6 + iVar19 * 0x14;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          puVar20 = puVar6 + iVar19 * 0x14 + 10;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          *(float *)puVar20 = vNormal.field0_0x0.d[0] + (sphere->vCenter).field0_0x0.d[0];
          *(float *)((int)puVar20 + 4) = vNormal.field0_0x0.d[1] + fVar28;
          *(float *)(puVar20 + 1) = fVar22 + fVar24;
          vNormal.field0_0x0.d[2] = fVar22;
          fVar24 = sqrtf(vNormal.field0_0x0.d[0] * vNormal.field0_0x0.d[0] +
                         vNormal.field0_0x0.d[1] * vNormal.field0_0x0.d[1] + fVar22 * fVar22);
          if (fVar24 != 0.0) {
            fVar24 = 1.0 / fVar24;
            vNormal.field0_0x0.d[0] = vNormal.field0_0x0.d[0] * fVar24;
            vNormal.field0_0x0.d[2] = vNormal.field0_0x0.d[2] * fVar24;
            vNormal.field0_0x0.d[1] = vNormal.field0_0x0.d[1] * fVar24;
          }
                    /* end of inlined section */
          fVar30 = (float)local_138;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          fVar24 = (float)local_134;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          pEVar12 = &vNormal;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          iVar19 = iVar19 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          puVar11 = puVar20 + 6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vNormal.field0_0x0._0_8_ =
               CONCAT44(vNormal.field0_0x0.d[1] * 127.0,vNormal.field0_0x0.d[0] * 127.0);
                    /* end of inlined section */
          puVar18 = puVar21 + 2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vNormal.field0_0x0.d[2] = vNormal.field0_0x0.d[2] * 127.0;
                    /* end of inlined section */
          puVar13 = puVar21 + 6;
          puVar10 = puVar20 + 2;
          iVar9 = 2;
          pEVar17 = pEVar12;
          do {
                    /* end of inlined section */
            fVar28 = (pEVar17->field0_0x0).d[0];
            iVar7 = -0x7f;
            if (-127.0 <= fVar28) {
                    /* end of inlined section */
              if (fVar28 <= 127.0) {
                    /* end of inlined section */
                iVar7 = (int)(char)(int)fVar28;
              }
              else {
                iVar7 = 0x7f;
              }
            }
            *(int *)puVar10 = iVar7;
            pEVar17 = (EVec3 *)((int)&pEVar17->field0_0x0 + 4);
            iVar9 = iVar9 + -1;
            puVar10 = (undefined8 *)((int)puVar10 + 4);
          } while (-1 < iVar9);
          iVar9 = 3;
          pEVar8 = vColor;
          do {
            pEVar5 = &pEVar8->field0_0x0;
                    /* end of inlined section */
            iVar9 = iVar9 + -1;
            pEVar8 = (EVec4 *)((int)&pEVar8->field0_0x0 + 4);
            *(int *)puVar11 = (int)pEVar5->d[0];
            puVar11 = (undefined8 *)((int)puVar11 + 4);
          } while (-1 < iVar9);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          *(undefined4 *)(puVar20 + 4) = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          *(undefined4 *)((int)puVar20 + 0x2c) = 0;
          *(undefined4 *)((int)puVar20 + 0x24) = 0;
          *(undefined4 *)(puVar20 + 5) = 0;
                    /* end of inlined section */
          *(float *)((int)puVar20 + 0x24) = fVar33 * fVar24;
          *(float *)(puVar20 + 4) = fVar32 * fVar30;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar25 = (sphere->vCenter).field0_0x0.d[1];
          fVar28 = (sphere->vCenter).field0_0x0.d[2];
          *(float *)puVar21 = fVar31 + (sphere->vCenter).field0_0x0.d[0];
          *(float *)((int)puVar21 + 4) = fVar29 + fVar25;
          *(float *)(puVar21 + 1) = fVar26 + fVar28;
                    /* end of inlined section */
          vNormal.field0_0x0._0_8_ = CONCAT44(fVar29,fVar31);
          puVar1 = (undefined *)((int)&vNormal.field0_0x0 + 7);
          uVar2 = (uint)puVar1 & 7;
          puVar3 = (ulong *)(puVar1 + -uVar2);
          *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
                    (ulong)vNormal.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vNormal.field0_0x0.d[2] = fVar26;
          fVar28 = sqrtf(fVar31 * fVar31 + fVar29 * fVar29 + fVar26 * fVar26);
          if (fVar28 != 0.0) {
            fVar28 = 1.0 / fVar28;
            vNormal.field0_0x0.d[2] = vNormal.field0_0x0.d[2] * fVar28;
            vNormal.field0_0x0._0_8_ =
                 CONCAT44(vNormal.field0_0x0.d[1] * fVar28,vNormal.field0_0x0.d[0] * fVar28);
          }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          iVar9 = 2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vNormal.field0_0x0._0_8_ =
               CONCAT44(vNormal.field0_0x0.d[1] * 127.0,vNormal.field0_0x0.d[0] * 127.0);
          vNormal.field0_0x0.d[2] = vNormal.field0_0x0.d[2] * 127.0;
          do {
                    /* end of inlined section */
            fVar28 = (pEVar12->field0_0x0).d[0];
            iVar7 = -0x7f;
            if (-127.0 <= fVar28) {
                    /* end of inlined section */
              if (fVar28 <= 127.0) {
                    /* end of inlined section */
                iVar7 = (int)(char)(int)fVar28;
              }
              else {
                iVar7 = 0x7f;
              }
            }
            *(int *)puVar18 = iVar7;
            pEVar12 = (EVec3 *)((int)&pEVar12->field0_0x0 + 4);
            iVar9 = iVar9 + -1;
            puVar18 = (undefined8 *)((int)puVar18 + 4);
          } while (-1 < iVar9);
          iVar9 = 3;
          pEVar8 = vColor;
          do {
            pEVar5 = &pEVar8->field0_0x0;
                    /* end of inlined section */
            iVar9 = iVar9 + -1;
            pEVar8 = (EVec4 *)((int)&pEVar8->field0_0x0 + 4);
            *(int *)puVar13 = (int)pEVar5->d[0];
            puVar13 = (undefined8 *)((int)puVar13 + 4);
          } while (-1 < iVar9);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          *(undefined4 *)(puVar21 + 4) = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          *(undefined4 *)((int)puVar21 + 0x2c) = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          *(undefined4 *)((int)puVar21 + 0x24) = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          *(undefined4 *)(puVar21 + 5) = 0;
                    /* end of inlined section */
          *(float *)((int)puVar21 + 0x24) = fVar34 * fVar24;
          *(float *)(puVar21 + 4) = fVar32 * fVar30;
        } while (iVar19 < local_128);
      }
      uVar4 = *puVar6;
      uVar14 = *(undefined4 *)(puVar6 + 1);
      uVar15 = *(undefined4 *)((int)puVar6 + 0xc);
      puVar16 = (undefined4 *)(local_120 + (int)puVar6);
      *puVar16 = (int)uVar4;
      puVar16[1] = (int)((ulong)uVar4 >> 0x20);
      puVar16[2] = uVar14;
      puVar16[3] = uVar15;
      uVar4 = puVar6[10];
      uVar14 = *(undefined4 *)(puVar6 + 0xb);
      uVar15 = *(undefined4 *)((int)puVar6 + 0x5c);
      puVar16[0x14] = (int)uVar4;
      puVar16[0x15] = (int)((ulong)uVar4 >> 0x20);
      puVar16[0x16] = uVar14;
      puVar16[0x17] = uVar15;
      (*(code *)this->__vtable->TriIndexed)
                ((int)&this->m_pdl + (int)*(short *)&this->__vtable->TriStrip,puVar6,nVerts);
      iVar9 = local_11c + 1;
    } while (local_11c < local_13c);
  }
  return;
}

EGEVert* EPrimitive::SpherePacked(ERC *prc, EBoundSphere &sphere, int res, int uTextureRepeat, int vTextureRepeat, EVec4 vColor) {
	EGEVert *rval;
	float invRes;
	EVec4 *this;
	EVec4 *this;
	int i;
	int z;
	float zu;
	float zup1;
	float zpos;
	float zposp1;
	float xrad;
	float xradp1;
	int nVerts;
	int align;
	float *pXYZ;
	float *pTC;
	u8 *pColor;
	ERC *this;
	unsigned int size;
	unsigned int size;
	int x;
	float xu;
	float cosfxu;
	float sinfxu;
	float xpos;
	float ypos;
	float xposp1;
	float yposp1;
	EGEVert *pv;
	EGEVert *pvp1;
	EVec3 vModel;
	EVec3 vNormal;
	int cn;
	int col;
	float x;
	float y;
	float z;
	EVec3 &v;
	EVec4 *this;
	int value;
	int value;
	int value;
	EVec4 *this;
	int value;
	float x;
	float y;
	float z;
	EVec3 &v;
	EVec4 *this;
	int value;
	int value;
	int value;
	EVec4 *this;
	int value;
	ERC *this;
	ERC *this;
	ERC *this;
	int i;
	
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  EVec4__null___1__1 *pEVar4;
  EGEVert *pEVar5;
  int iVar6;
  EVec4 *pEVar7;
  float *pfVar8;
  float *pfVar9;
  undefined *puVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  EVec3 *pEVar14;
  uint *puVar15;
  undefined *puVar16;
  undefined4 *puVar17;
  EVec3 *pEVar18;
  int *piVar19;
  int iVar20;
  EGEVert *pEVar21;
  float *pfVar22;
  EGEVert *pEVar23;
  float *pfVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  EVec3 vModel;
  EVec3 vNormal;
  ERC *this;
  int local_13c;
  int local_138;
  int local_134;
  EGEVert *rval;
  float invRes;
  int nVerts;
  int local_124;
  uint size;
  int local_11c;
  int align;
  int local_114;
  
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  iVar11 = 3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  fVar25 = (vColor->field0_0x0).d[1];
  fVar30 = (vColor->field0_0x0).d[2];
  fVar29 = (vColor->field0_0x0).d[3];
  (vColor->field0_0x0).d[0] = (vColor->field0_0x0).d[0] * 128.0;
  (vColor->field0_0x0).d[1] = fVar25 * 128.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (vColor->field0_0x0).d[2] = fVar30 * 128.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  (vColor->field0_0x0).d[3] = fVar29 * 128.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  pEVar7 = vColor;
  do {
    fVar29 = (pEVar7->field0_0x0).d[0];
    fVar25 = 0.0;
    if (0.0 <= fVar29) {
      fVar25 = (float)((int)fVar29 * (uint)(fVar29 < 255.0) | (uint)(fVar29 >= 255.0) * 0x437f0000);
    }
    (pEVar7->field0_0x0).d[0] = fVar25;
    iVar11 = iVar11 + -1;
    pEVar7 = (EVec4 *)((int)&pEVar7->field0_0x0 + 4);
  } while (-1 < iVar11);
                    /* end of inlined section */
  local_114 = 0;
  rval = (EGEVert *)0x0;
  invRes = 1.0 / (float)res;
  if (0 < res) {
    local_124 = res + 1;
    nVerts = local_124 * 2;
    size = local_124 * 0xa0;
    local_11c = res * 0xa0;
    align = nVerts + 3U & 0xfffffffc;
    iVar11 = 1;
    this = prc;
    local_13c = res;
    local_138 = uTextureRepeat;
    local_134 = vTextureRepeat;
    do {
      iVar20 = 0;
      fVar36 = (float)local_114 * invRes;
      fVar37 = (float)iVar11 * invRes;
      fVar25 = sinf((fVar36 - 0.5) * 3.141593);
      fVar25 = fVar25 * sphere->radius;
      fVar29 = sinf((fVar37 - 0.5) * 3.141593);
      fVar29 = fVar29 * sphere->radius;
      fVar30 = sinf(fVar36 * 3.141593);
      fVar26 = sinf(fVar37 * 3.141593);
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_dl.h */
      pEVar5 = (EGEVert *)Alloc__11EAllocGroupUii(&this->m_pdl->m_allocGroup,size,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
      if (rval == (EGEVert *)0x0) {
        rval = pEVar5;
      }
      local_114 = iVar11;
      if (0 < local_124) {
        do {
          fVar35 = (float)iVar20 * invRes;
          fVar33 = fVar35 * 6.283185;
          fVar27 = cosf(fVar33);
          fVar27 = fVar27 * sphere->radius;
          fVar33 = sinf(fVar33);
          fVar34 = fVar27 * fVar26;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          vNormal.field0_0x0.d[0] = fVar27 * fVar30;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar31 = (sphere->vCenter).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar27 = (sphere->vCenter).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          fVar33 = -(-fVar33 * sphere->radius);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          fVar32 = fVar33 * fVar26;
          vNormal.field0_0x0.d[1] = fVar33 * fVar30;
          pEVar23 = pEVar5 + iVar20 * 2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          pEVar21 = pEVar5 + iVar20 * 2 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          (pEVar21->vModel).field0_0x0.d[0] =
               vNormal.field0_0x0.d[0] + (sphere->vCenter).field0_0x0.d[0];
          (pEVar21->vModel).field0_0x0.d[1] = vNormal.field0_0x0.d[1] + fVar31;
          (pEVar21->vModel).field0_0x0.d[2] = fVar25 + fVar27;
          vNormal.field0_0x0.d[2] = fVar25;
          fVar27 = sqrtf(vNormal.field0_0x0.d[0] * vNormal.field0_0x0.d[0] +
                         vNormal.field0_0x0.d[1] * vNormal.field0_0x0.d[1] + fVar25 * fVar25);
          if (fVar27 != 0.0) {
            fVar27 = 1.0 / fVar27;
            vNormal.field0_0x0.d[0] = vNormal.field0_0x0.d[0] * fVar27;
            vNormal.field0_0x0.d[2] = vNormal.field0_0x0.d[2] * fVar27;
            vNormal.field0_0x0.d[1] = vNormal.field0_0x0.d[1] * fVar27;
          }
                    /* end of inlined section */
          fVar33 = (float)local_138;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          fVar27 = (float)local_134;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          pEVar14 = &vNormal;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          iVar20 = iVar20 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          puVar13 = pEVar21->color;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vNormal.field0_0x0._0_8_ =
               CONCAT44(vNormal.field0_0x0.d[1] * 127.0,vNormal.field0_0x0.d[0] * 127.0);
                    /* end of inlined section */
          piVar19 = pEVar23->normal;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vNormal.field0_0x0.d[2] = vNormal.field0_0x0.d[2] * 127.0;
                    /* end of inlined section */
          puVar15 = pEVar23->color;
          piVar12 = pEVar21->normal;
          iVar11 = 2;
          pEVar18 = pEVar14;
          do {
                    /* end of inlined section */
            fVar31 = (pEVar18->field0_0x0).d[0];
            iVar6 = -0x7f;
            if (-127.0 <= fVar31) {
                    /* end of inlined section */
              if (fVar31 <= 127.0) {
                    /* end of inlined section */
                iVar6 = (int)(char)(int)fVar31;
              }
              else {
                iVar6 = 0x7f;
              }
            }
            *piVar12 = iVar6;
            pEVar18 = (EVec3 *)((int)&pEVar18->field0_0x0 + 4);
            iVar11 = iVar11 + -1;
            piVar12 = piVar12 + 1;
          } while (-1 < iVar11);
          iVar11 = 3;
          pEVar7 = vColor;
          do {
            pEVar4 = &pEVar7->field0_0x0;
                    /* end of inlined section */
            iVar11 = iVar11 + -1;
            pEVar7 = (EVec4 *)((int)&pEVar7->field0_0x0 + 4);
            *puVar13 = (int)pEVar4->d[0];
            puVar13 = puVar13 + 1;
          } while (-1 < iVar11);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          (pEVar21->tc).field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          (pEVar21->tc).field0_0x0.d[3] = 0.0;
          (pEVar21->tc).field0_0x0.d[1] = 0.0;
          (pEVar21->tc).field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
          (pEVar21->tc).field0_0x0.d[1] = fVar36 * fVar27;
          (pEVar21->tc).field0_0x0.d[0] = fVar35 * fVar33;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar28 = (sphere->vCenter).field0_0x0.d[1];
          fVar31 = (sphere->vCenter).field0_0x0.d[2];
          (pEVar23->vModel).field0_0x0.d[0] = fVar34 + (sphere->vCenter).field0_0x0.d[0];
          (pEVar23->vModel).field0_0x0.d[1] = fVar32 + fVar28;
          (pEVar23->vModel).field0_0x0.d[2] = fVar29 + fVar31;
                    /* end of inlined section */
          vNormal.field0_0x0._0_8_ = CONCAT44(fVar32,fVar34);
          puVar16 = (undefined *)((int)&vNormal.field0_0x0 + 7);
          uVar1 = (uint)puVar16 & 7;
          puVar2 = (ulong *)(puVar16 + -uVar1);
          *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 |
                    (ulong)vNormal.field0_0x0._0_8_ >> (7 - uVar1) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vNormal.field0_0x0.d[2] = fVar29;
          fVar31 = sqrtf(fVar34 * fVar34 + fVar32 * fVar32 + fVar29 * fVar29);
          if (fVar31 != 0.0) {
            fVar31 = 1.0 / fVar31;
            vNormal.field0_0x0.d[2] = vNormal.field0_0x0.d[2] * fVar31;
            vNormal.field0_0x0._0_8_ =
                 CONCAT44(vNormal.field0_0x0.d[1] * fVar31,vNormal.field0_0x0.d[0] * fVar31);
          }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          iVar11 = 2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          vNormal.field0_0x0._0_8_ =
               CONCAT44(vNormal.field0_0x0.d[1] * 127.0,vNormal.field0_0x0.d[0] * 127.0);
          vNormal.field0_0x0.d[2] = vNormal.field0_0x0.d[2] * 127.0;
          do {
                    /* end of inlined section */
            fVar31 = (pEVar14->field0_0x0).d[0];
            iVar6 = -0x7f;
            if (-127.0 <= fVar31) {
                    /* end of inlined section */
              if (fVar31 <= 127.0) {
                    /* end of inlined section */
                iVar6 = (int)(char)(int)fVar31;
              }
              else {
                iVar6 = 0x7f;
              }
            }
            *piVar19 = iVar6;
            pEVar14 = (EVec3 *)((int)&pEVar14->field0_0x0 + 4);
            iVar11 = iVar11 + -1;
            piVar19 = piVar19 + 1;
          } while (-1 < iVar11);
          iVar11 = 3;
          pEVar7 = vColor;
          do {
            pEVar4 = &pEVar7->field0_0x0;
                    /* end of inlined section */
            iVar11 = iVar11 + -1;
            pEVar7 = (EVec4 *)((int)&pEVar7->field0_0x0 + 4);
            *puVar15 = (int)pEVar4->d[0];
            puVar15 = puVar15 + 1;
          } while (-1 < iVar11);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          (pEVar23->tc).field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          (pEVar23->tc).field0_0x0.d[3] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          (pEVar23->tc).field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          (pEVar23->tc).field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
          (pEVar23->tc).field0_0x0.d[1] = fVar37 * fVar27;
          (pEVar23->tc).field0_0x0.d[0] = fVar35 * fVar33;
        } while (iVar20 < local_124);
      }
      uVar3 = *(undefined8 *)&(pEVar5->vModel).field0_0x0;
      fVar25 = (pEVar5->vModel).field0_0x0.d[2];
      fVar29 = (pEVar5->vModel).field0_0x0.d[3];
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
      puVar17 = (undefined4 *)((int)pEVar5->normal + local_11c + -0x10);
      *puVar17 = (int)uVar3;
      puVar17[1] = (int)((ulong)uVar3 >> 0x20);
      puVar17[2] = fVar25;
      puVar17[3] = fVar29;
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
      fVar25 = pEVar5[1].vModel.field0_0x0.d[1];
      fVar29 = pEVar5[1].vModel.field0_0x0.d[2];
      fVar30 = pEVar5[1].vModel.field0_0x0.d[3];
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
      puVar17[0x14] = pEVar5[1].vModel.field0_0x0.d[0];
      puVar17[0x15] = fVar25;
      puVar17[0x16] = fVar29;
      puVar17[0x17] = fVar30;
                    /* inlined from c:/eor/src2/engine/e_dl.h */
      pfVar8 = (float *)Alloc__11EAllocGroupUii(&this->m_pdl->m_allocGroup,align << 4,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_dl.h */
      pfVar9 = (float *)Alloc__11EAllocGroupUii(&this->m_pdl->m_allocGroup,align << 3,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_dl.h */
      puVar10 = (undefined *)Alloc__11EAllocGroupUii(&this->m_pdl->m_allocGroup,align << 2,0x10);
                    /* end of inlined section */
      iVar11 = nVerts;
      pfVar22 = pfVar8;
      pfVar24 = pfVar9;
      puVar16 = puVar10;
      if (0 < nVerts) {
        do {
                    /* end of inlined section */
          iVar11 = iVar11 + -1;
          *pfVar22 = (pEVar5->vModel).field0_0x0.d[0];
          pfVar22[1] = (pEVar5->vModel).field0_0x0.d[1];
          pfVar22[2] = (pEVar5->vModel).field0_0x0.d[2];
          pfVar22[3] = 0.0;
          *pfVar24 = (pEVar5->tc).field0_0x0.d[0];
          pfVar24[1] = (pEVar5->tc).field0_0x0.d[1];
          *puVar16 = *(undefined *)pEVar5->color;
          puVar16[1] = *(undefined *)(pEVar5->color + 1);
          puVar16[2] = *(undefined *)(pEVar5->color + 2);
          puVar13 = pEVar5->color;
          pEVar5 = pEVar5 + 1;
          puVar16[3] = *(undefined *)(puVar13 + 3);
          pfVar22 = pfVar22 + 4;
          pfVar24 = pfVar24 + 2;
          puVar16 = puVar16 + 4;
        } while (iVar11 != 0);
      }
      (*(code *)this->__vtable->TriFan)
                ((int)&this->m_pdl + (int)*(short *)&this->__vtable->Vertex,nVerts,pfVar8,pfVar9,
                 puVar10,0,0);
      iVar11 = local_114 + 1;
    } while (local_114 < local_13c);
  }
  return rval;
}

void EPrimitive::Rect(ERC *prc, float xsize, float ysize) {
	ERC *this;
	float x;
	float y;
	float y;
	EVec4 *this;
	float x;
	
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
  fVar15 = ysize * 0.5;
  fVar16 = xsize * 0.5;
                    /* inlined from c:/eor/src2/engine/e_dl.h */
  puVar3 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x140,0x10);
                    /* end of inlined section */
  *(undefined4 *)(puVar3 + 3) = 0x7f;
  *(undefined4 *)((int)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 6) = 0x80;
  *(undefined4 *)((int)puVar3 + 0x34) = 0x80;
  *(undefined4 *)(puVar3 + 7) = 0x80;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((int)puVar3 + 0x14) = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar3 + 4) = 0x3f800000;
  *(undefined4 *)((int)puVar3 + 0x24) = 0x3f800000;
  *(float *)puVar3 = fVar16;
  *(float *)((int)puVar3 + 4) = fVar15;
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar8 = puVar3 + 10;
  puVar7 = puVar3;
  do {
    puVar6 = puVar7;
    puVar9 = puVar8;
    uVar1 = *puVar6;
                    /* end of inlined section */
    uVar4 = *(undefined4 *)(puVar6 + 1);
    uVar5 = *(undefined4 *)((int)puVar6 + 0xc);
    uVar2 = puVar6[2];
    uVar10 = *(undefined4 *)(puVar6 + 3);
    uVar11 = *(undefined4 *)((int)puVar6 + 0x1c);
    *(int *)puVar9 = (int)uVar1;
    *(int *)((int)puVar9 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar9 + 1) = uVar4;
    *(undefined4 *)((int)puVar9 + 0xc) = uVar5;
    *(int *)(puVar9 + 2) = (int)uVar2;
    *(int *)((int)puVar9 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar9 + 3) = uVar10;
    *(undefined4 *)((int)puVar9 + 0x1c) = uVar11;
    puVar7 = puVar6 + 4;
    puVar8 = puVar9 + 4;
  } while (puVar7 != puVar3 + 8);
  uVar4 = *(undefined4 *)((int)puVar6 + 0x24);
  uVar5 = *(undefined4 *)(puVar6 + 5);
  uVar10 = *(undefined4 *)((int)puVar6 + 0x2c);
  *(undefined4 *)(puVar9 + 4) = *(undefined4 *)puVar7;
  *(undefined4 *)((int)puVar9 + 0x24) = uVar4;
  *(undefined4 *)(puVar9 + 5) = uVar5;
  *(undefined4 *)((int)puVar9 + 0x2c) = uVar10;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)(puVar3 + 0xe) = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)((int)puVar3 + 0x74) = 0x3f800000;
  *(float *)(puVar3 + 10) = -fVar16;
  *(float *)((int)puVar3 + 0x54) = fVar15;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar8 = puVar3;
  puVar7 = puVar3 + 0x14;
  do {
    puVar9 = puVar7;
    puVar6 = puVar8;
                    /* end of inlined section */
    uVar4 = *(undefined4 *)((int)puVar6 + 4);
    uVar5 = *(undefined4 *)(puVar6 + 1);
    uVar10 = *(undefined4 *)((int)puVar6 + 0xc);
    uVar11 = *(undefined4 *)(puVar6 + 2);
    uVar12 = *(undefined4 *)((int)puVar6 + 0x14);
    uVar13 = *(undefined4 *)(puVar6 + 3);
    uVar14 = *(undefined4 *)((int)puVar6 + 0x1c);
    *(undefined4 *)puVar9 = *(undefined4 *)puVar6;
    *(undefined4 *)((int)puVar9 + 4) = uVar4;
    *(undefined4 *)(puVar9 + 1) = uVar5;
    *(undefined4 *)((int)puVar9 + 0xc) = uVar10;
    *(undefined4 *)(puVar9 + 2) = uVar11;
    *(undefined4 *)((int)puVar9 + 0x14) = uVar12;
    *(undefined4 *)(puVar9 + 3) = uVar13;
    *(undefined4 *)((int)puVar9 + 0x1c) = uVar14;
    puVar8 = puVar6 + 4;
    puVar7 = puVar9 + 4;
  } while (puVar8 != puVar3 + 8);
                    /* end of inlined section */
  uVar4 = *(undefined4 *)((int)puVar6 + 0x24);
  uVar5 = *(undefined4 *)(puVar6 + 5);
  uVar10 = *(undefined4 *)((int)puVar6 + 0x2c);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(undefined4 *)(puVar9 + 4) = *(undefined4 *)puVar8;
  *(undefined4 *)((int)puVar9 + 0x24) = uVar4;
  *(undefined4 *)(puVar9 + 5) = uVar5;
  *(undefined4 *)((int)puVar9 + 0x2c) = uVar10;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar3 + 0x18) = 0x3f800000;
  *(undefined4 *)((int)puVar3 + 0xc4) = 0;
  *(float *)(puVar3 + 0x14) = fVar16;
  *(float *)((int)puVar3 + 0xa4) = -fVar15;
  *(undefined4 *)(puVar3 + 0x15) = 0;
  puVar8 = puVar3;
  puVar7 = puVar3 + 0x1e;
  do {
    puVar9 = puVar7;
    puVar6 = puVar8;
    uVar1 = *puVar6;
                    /* end of inlined section */
    uVar4 = *(undefined4 *)(puVar6 + 1);
    uVar5 = *(undefined4 *)((int)puVar6 + 0xc);
    uVar2 = puVar6[2];
    uVar10 = *(undefined4 *)(puVar6 + 3);
    uVar11 = *(undefined4 *)((int)puVar6 + 0x1c);
    *(int *)puVar9 = (int)uVar1;
    *(int *)((int)puVar9 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar9 + 1) = uVar4;
    *(undefined4 *)((int)puVar9 + 0xc) = uVar5;
    *(int *)(puVar9 + 2) = (int)uVar2;
    *(int *)((int)puVar9 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar9 + 3) = uVar10;
    *(undefined4 *)((int)puVar9 + 0x1c) = uVar11;
    puVar8 = puVar6 + 4;
    puVar7 = puVar9 + 4;
  } while (puVar8 != puVar3 + 8);
  uVar4 = *(undefined4 *)((int)puVar6 + 0x24);
  uVar5 = *(undefined4 *)(puVar6 + 5);
  uVar10 = *(undefined4 *)((int)puVar6 + 0x2c);
  *(undefined4 *)(puVar9 + 4) = *(undefined4 *)puVar8;
  *(undefined4 *)((int)puVar9 + 0x24) = uVar4;
  *(undefined4 *)(puVar9 + 5) = uVar5;
  *(undefined4 *)((int)puVar9 + 0x2c) = uVar10;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar3 + 0x22) = 0;
  *(undefined4 *)((int)puVar3 + 0x114) = 0;
  *(float *)(puVar3 + 0x1e) = -fVar16;
  *(float *)((int)puVar3 + 0xf4) = -fVar15;
  *(undefined4 *)(puVar3 + 0x1f) = 0;
                    /* end of inlined section */
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar3,4);
  return;
}

void EPrimitive::Grid(ERC *prc, float xsize, float ysize, int xdivisions, int ydivisions, int uTextureRepeat, int vTextureRepeat) {
	float xstart;
	float xfinish;
	float ustart;
	float ufinish;
	float ystart;
	float yfinish;
	float vfinish;
	int y;
	float yu;
	float yup1;
	float ypos;
	float yposp1;
	float ytexv;
	float ytexvp1;
	ERC *this;
	unsigned int size;
	unsigned int size;
	int x;
	float xu;
	float xpos;
	float xtexu;
	EGEVert *pv;
	EGEVert *pvp1;
	float x;
	float y;
	EVec4 *this;
	float x;
	float y;
	EVec4 *this;
	
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar28 = xsize * 0.5;
  fVar26 = ysize * 0.5;
  fVar25 = xsize * -0.5;
  fVar20 = (float)vTextureRepeat;
  if (0 < ydivisions) {
    fVar27 = ysize * -0.5 - fVar26;
    iVar14 = 0;
    iVar5 = 1;
    do {
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
      fVar21 = (float)iVar14 / (float)ydivisions;
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
      fVar19 = (float)iVar5 / (float)ydivisions;
      fVar22 = fVar19 * fVar20;
      fVar19 = fVar19 * fVar27;
      fVar24 = fVar21 * fVar20 + 0.0;
      fVar21 = fVar26 + fVar21 * fVar27;
                    /* inlined from c:/eor/src2/engine/e_dl.h */
      pvVar6 = Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,xdivisions * 0xa0 + 0xa0,0x10);
      iVar14 = 0;
                    /* end of inlined section */
      if (-1 < xdivisions) {
        do {
          fVar23 = (float)iVar14;
          iVar2 = iVar14 * 0xa0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          iVar14 = iVar14 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
          puVar7 = (undefined8 *)((int)pvVar6 + iVar2);
          puVar13 = (undefined4 *)((int)pvVar6 + iVar2 + 0x50);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          *(float *)puVar7 = fVar25 + (fVar23 / (float)xdivisions) * (fVar28 - fVar25);
          *(float *)((int)puVar7 + 4) = fVar21;
          *(undefined4 *)(puVar7 + 1) = 0;
          *(float *)(puVar7 + 4) =
               (fVar23 / (float)xdivisions) * ((float)uTextureRepeat - 0.0) + 0.0;
                    /* end of inlined section */
          *(undefined4 *)((int)puVar7 + 0x3c) = 0x80;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          *(float *)((int)puVar7 + 0x24) = fVar24;
                    /* end of inlined section */
          *(undefined4 *)(puVar7 + 7) = 0x80;
          *(undefined4 *)((int)puVar7 + 0x34) = 0x80;
          *(undefined4 *)(puVar7 + 6) = 0x80;
          *(undefined4 *)((int)puVar7 + 0x14) = 0;
          *(undefined4 *)(puVar7 + 2) = 0;
          *(undefined4 *)(puVar7 + 3) = 0x7f;
          puVar11 = puVar7;
          puVar4 = puVar13;
          do {
            puVar12 = puVar4;
            puVar10 = puVar11;
            uVar3 = *puVar10;
            uVar8 = *(undefined4 *)(puVar10 + 1);
            uVar9 = *(undefined4 *)((int)puVar10 + 0xc);
            uVar15 = *(undefined4 *)(puVar10 + 2);
            uVar16 = *(undefined4 *)((int)puVar10 + 0x14);
            uVar17 = *(undefined4 *)(puVar10 + 3);
            uVar18 = *(undefined4 *)((int)puVar10 + 0x1c);
            *puVar12 = (int)uVar3;
            puVar12[1] = (int)((ulong)uVar3 >> 0x20);
            puVar12[2] = uVar8;
            puVar12[3] = uVar9;
            puVar12[4] = uVar15;
            puVar12[5] = uVar16;
            puVar12[6] = uVar17;
            puVar12[7] = uVar18;
            puVar11 = puVar10 + 4;
            puVar4 = puVar12 + 8;
          } while (puVar11 != puVar7 + 8);
          uVar3 = *puVar11;
          uVar8 = *(undefined4 *)(puVar10 + 5);
          uVar9 = *(undefined4 *)((int)puVar10 + 0x2c);
          puVar12[8] = (int)uVar3;
          puVar12[9] = (int)((ulong)uVar3 >> 0x20);
          puVar12[10] = uVar8;
          puVar12[0xb] = uVar9;
          puVar13[9] = fVar22 + 0.0;
          puVar13[1] = fVar26 + fVar19;
        } while (iVar14 <= xdivisions);
      }
      (*(code *)prc->__vtable->TriIndexed)
                ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,pvVar6,
                 (xdivisions + 1) * 2);
      bVar1 = iVar5 < ydivisions;
      iVar14 = iVar5;
      iVar5 = iVar5 + 1;
    } while (bVar1);
  }
  return;
}

void EPrimitive::WireRect(ERC *prc, float xsize, float ysize, EVec4 vColor) {
	ERC *this;
	EVec4 *this;
	EVec4 *this;
	int i;
	int col;
	EVec4 *this;
	int value;
	float x;
	float y;
	float y;
	float x;
	
  undefined8 uVar1;
  undefined8 uVar2;
  EVec4__null___1__1 *pEVar3;
  undefined8 *puVar4;
  EVec4 *pEVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  (*(code *)prc->__vtable[1].Vertex)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriIndexed)
  ;
  (*(code *)prc->__vtable->EndCommand)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,8);
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
  fVar19 = ysize * 0.5;
                    /* inlined from c:/eor/src2/engine/e_dl.h */
  fVar20 = xsize * 0.5;
  puVar4 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,400,0x10);
  fVar17 = (vColor->field0_0x0).d[1];
  iVar8 = 3;
  fVar18 = (vColor->field0_0x0).d[2];
  fVar16 = (vColor->field0_0x0).d[3];
  (vColor->field0_0x0).d[0] = (vColor->field0_0x0).d[0] * 128.0;
  (vColor->field0_0x0).d[1] = fVar17 * 128.0;
  (vColor->field0_0x0).d[2] = fVar18 * 128.0;
  (vColor->field0_0x0).d[3] = fVar16 * 128.0;
  pEVar5 = vColor;
  do {
    fVar17 = (pEVar5->field0_0x0).d[0];
    fVar16 = 0.0;
    if (0.0 <= fVar17) {
      fVar16 = (float)((int)fVar17 * (uint)(fVar17 < 255.0) | (uint)(fVar17 >= 255.0) * 0x437f0000);
    }
    (pEVar5->field0_0x0).d[0] = fVar16;
    iVar8 = iVar8 + -1;
    pEVar5 = (EVec4 *)((int)&pEVar5->field0_0x0 + 4);
  } while (-1 < iVar8);
                    /* end of inlined section */
  puVar13 = puVar4 + 8;
  puVar6 = puVar4 + 6;
  iVar8 = 3;
  do {
    pEVar3 = &vColor->field0_0x0;
                    /* end of inlined section */
    iVar8 = iVar8 + -1;
    vColor = (EVec4 *)((int)&vColor->field0_0x0 + 4);
    *(int *)puVar6 = (int)pEVar3->d[0];
    puVar6 = (undefined8 *)((int)puVar6 + 4);
  } while (-1 < iVar8);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(undefined4 *)(puVar4 + 3) = 0x7f;
  *(undefined4 *)(puVar4 + 2) = 0;
  *(undefined4 *)((int)puVar4 + 0x14) = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar4 + 4) = 0x3f800000;
  *(undefined4 *)((int)puVar4 + 0x24) = 0x3f800000;
  *(float *)puVar4 = fVar20;
  *(float *)((int)puVar4 + 4) = fVar19;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar6 = puVar4 + 10;
  puVar7 = puVar4;
  do {
    puVar9 = puVar6;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar11 = *(undefined4 *)(puVar7 + 1);
    uVar12 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar14 = *(undefined4 *)(puVar7 + 3);
    uVar15 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar9 = (int)uVar1;
    *(int *)((int)puVar9 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar9 + 1) = uVar11;
    *(undefined4 *)((int)puVar9 + 0xc) = uVar12;
    *(int *)(puVar9 + 2) = (int)uVar2;
    *(int *)((int)puVar9 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar9 + 3) = uVar14;
    *(undefined4 *)((int)puVar9 + 0x1c) = uVar15;
    puVar7 = puVar7 + 4;
    puVar6 = puVar9 + 4;
  } while (puVar7 != puVar13);
  uVar1 = *puVar13;
  uVar11 = *(undefined4 *)(puVar4 + 9);
  uVar12 = *(undefined4 *)((int)puVar4 + 0x4c);
  *(int *)(puVar9 + 4) = (int)uVar1;
  *(int *)((int)puVar9 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar9 + 5) = uVar11;
  *(undefined4 *)((int)puVar9 + 0x2c) = uVar12;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(undefined4 *)((int)puVar4 + 0x74) = 0x3f800000;
  *(float *)(puVar4 + 10) = -fVar20;
  *(float *)((int)puVar4 + 0x54) = fVar19;
  *(undefined4 *)(puVar4 + 0xb) = 0;
  puVar6 = puVar4;
  puVar7 = puVar4 + 0x14;
  do {
    puVar9 = puVar7;
    uVar1 = *puVar6;
                    /* end of inlined section */
    uVar14 = *(undefined4 *)(puVar6 + 1);
    uVar15 = *(undefined4 *)((int)puVar6 + 0xc);
    uVar2 = puVar6[2];
    uVar11 = *(undefined4 *)(puVar6 + 3);
    uVar12 = *(undefined4 *)((int)puVar6 + 0x1c);
    *(int *)puVar9 = (int)uVar1;
    *(int *)((int)puVar9 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar9 + 1) = uVar14;
    *(undefined4 *)((int)puVar9 + 0xc) = uVar15;
    *(int *)(puVar9 + 2) = (int)uVar2;
    *(int *)((int)puVar9 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar9 + 3) = uVar11;
    *(undefined4 *)((int)puVar9 + 0x1c) = uVar12;
    puVar6 = puVar6 + 4;
    puVar7 = puVar9 + 4;
  } while (puVar6 != puVar13);
  uVar1 = *puVar13;
  uVar11 = *(undefined4 *)(puVar4 + 9);
  uVar12 = *(undefined4 *)((int)puVar4 + 0x4c);
  *(int *)(puVar9 + 4) = (int)uVar1;
  *(int *)((int)puVar9 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar9 + 5) = uVar11;
  *(undefined4 *)((int)puVar9 + 0x2c) = uVar12;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar4 + 0x18) = 0;
  *(undefined4 *)((int)puVar4 + 0xc4) = 0;
  *(float *)(puVar4 + 0x14) = -fVar20;
  *(float *)((int)puVar4 + 0xa4) = -fVar19;
  *(undefined4 *)(puVar4 + 0x15) = 0;
  puVar6 = puVar4;
  puVar7 = puVar4 + 0x1e;
  do {
    puVar9 = puVar7;
    uVar1 = *puVar6;
                    /* end of inlined section */
    uVar11 = *(undefined4 *)(puVar6 + 1);
    uVar12 = *(undefined4 *)((int)puVar6 + 0xc);
    uVar2 = puVar6[2];
    uVar14 = *(undefined4 *)(puVar6 + 3);
    uVar15 = *(undefined4 *)((int)puVar6 + 0x1c);
    *(int *)puVar9 = (int)uVar1;
    *(int *)((int)puVar9 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar9 + 1) = uVar11;
    *(undefined4 *)((int)puVar9 + 0xc) = uVar12;
    *(int *)(puVar9 + 2) = (int)uVar2;
    *(int *)((int)puVar9 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar9 + 3) = uVar14;
    *(undefined4 *)((int)puVar9 + 0x1c) = uVar15;
    puVar6 = puVar6 + 4;
    puVar7 = puVar9 + 4;
  } while (puVar6 != puVar13);
  uVar1 = *puVar13;
                    /* end of inlined section */
  uVar11 = *(undefined4 *)(puVar4 + 9);
  uVar12 = *(undefined4 *)((int)puVar4 + 0x4c);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(int *)(puVar9 + 4) = (int)uVar1;
  *(int *)((int)puVar9 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar9 + 5) = uVar11;
  *(undefined4 *)((int)puVar9 + 0x2c) = uVar12;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar4 + 0x22) = 0x3f800000;
  *(undefined4 *)((int)puVar4 + 0x114) = 0;
  *(float *)(puVar4 + 0x1e) = fVar20;
  *(float *)((int)puVar4 + 0xf4) = -fVar19;
  *(undefined4 *)(puVar4 + 0x1f) = 0;
  puVar6 = puVar4 + 0x28;
  puVar7 = puVar4;
  do {
    puVar9 = puVar7;
    puVar10 = puVar6;
    uVar1 = *puVar9;
                    /* end of inlined section */
    uVar11 = *(undefined4 *)(puVar9 + 1);
    uVar12 = *(undefined4 *)((int)puVar9 + 0xc);
    uVar2 = puVar9[2];
    uVar14 = *(undefined4 *)(puVar9 + 3);
    uVar15 = *(undefined4 *)((int)puVar9 + 0x1c);
    *(int *)puVar10 = (int)uVar1;
    *(int *)((int)puVar10 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar10 + 1) = uVar11;
    *(undefined4 *)((int)puVar10 + 0xc) = uVar12;
    *(int *)(puVar10 + 2) = (int)uVar2;
    *(int *)((int)puVar10 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar10 + 3) = uVar14;
    *(undefined4 *)((int)puVar10 + 0x1c) = uVar15;
    puVar7 = puVar9 + 4;
    puVar6 = puVar10 + 4;
  } while (puVar7 != puVar13);
  uVar1 = *puVar7;
  uVar11 = *(undefined4 *)(puVar9 + 5);
  uVar12 = *(undefined4 *)((int)puVar9 + 0x2c);
  *(int *)(puVar10 + 4) = (int)uVar1;
  *(int *)((int)puVar10 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar10 + 5) = uVar11;
  *(undefined4 *)((int)puVar10 + 0x2c) = uVar12;
  (*(code *)prc->__vtable->Scissor)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->ClipRect,puVar4,5);
  (*(code *)prc->__vtable[1].TriList)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriFan);
  return;
}

void EPrimitive::Axis(ERC *prc, float size) {
	ERC *this;
	float x;
	EVec4 *this;
	float y;
	float z;
	
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_dl.h */
  puVar3 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x1e0,0x10);
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].Vertex)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriIndexed)
  ;
  (*(code *)prc->__vtable->FlushQueuedMatrices)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->GeometrySetup,1);
  (*(code *)prc->__vtable[1].TriStrip)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriStrip,0,0);
  *(undefined4 *)((int)puVar3 + 0x34) = 0;
  *(undefined4 *)((int)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 6) = 0x80;
  *(undefined4 *)(puVar3 + 7) = 0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)puVar3 = 0;
  *(undefined4 *)((int)puVar3 + 4) = 0;
  *(undefined4 *)(puVar3 + 1) = 0;
  puVar7 = puVar3 + 10;
  puVar4 = puVar3;
  do {
    puVar6 = puVar4;
    puVar5 = puVar7;
    uVar1 = *puVar6;
                    /* end of inlined section */
    uVar8 = *(undefined4 *)(puVar6 + 1);
    uVar9 = *(undefined4 *)((int)puVar6 + 0xc);
    uVar2 = puVar6[2];
    uVar10 = *(undefined4 *)(puVar6 + 3);
    uVar11 = *(undefined4 *)((int)puVar6 + 0x1c);
    *(int *)puVar5 = (int)uVar1;
    *(int *)((int)puVar5 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar5 + 1) = uVar8;
    *(undefined4 *)((int)puVar5 + 0xc) = uVar9;
    *(int *)(puVar5 + 2) = (int)uVar2;
    *(int *)((int)puVar5 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar5 + 3) = uVar10;
    *(undefined4 *)((int)puVar5 + 0x1c) = uVar11;
    puVar4 = puVar6 + 4;
    puVar7 = puVar5 + 4;
  } while (puVar4 != puVar3 + 8);
  uVar1 = *puVar4;
  uVar8 = *(undefined4 *)(puVar6 + 5);
  uVar9 = *(undefined4 *)((int)puVar6 + 0x2c);
  *(int *)(puVar5 + 4) = (int)uVar1;
  *(int *)((int)puVar5 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar5 + 5) = uVar8;
  *(undefined4 *)((int)puVar5 + 0x2c) = uVar9;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(float *)(puVar3 + 10) = size;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)((int)puVar3 + 0x54) = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar7 = puVar3 + 0x14;
  puVar4 = puVar3;
  do {
    puVar6 = puVar4;
    puVar5 = puVar7;
    uVar1 = *puVar6;
                    /* end of inlined section */
    uVar8 = *(undefined4 *)(puVar6 + 1);
    uVar9 = *(undefined4 *)((int)puVar6 + 0xc);
    uVar10 = *(undefined4 *)(puVar6 + 2);
    uVar11 = *(undefined4 *)((int)puVar6 + 0x14);
    uVar12 = *(undefined4 *)(puVar6 + 3);
    uVar13 = *(undefined4 *)((int)puVar6 + 0x1c);
    *(int *)puVar5 = (int)uVar1;
    *(int *)((int)puVar5 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar5 + 1) = uVar8;
    *(undefined4 *)((int)puVar5 + 0xc) = uVar9;
    *(undefined4 *)(puVar5 + 2) = uVar10;
    *(undefined4 *)((int)puVar5 + 0x14) = uVar11;
    *(undefined4 *)(puVar5 + 3) = uVar12;
    *(undefined4 *)((int)puVar5 + 0x1c) = uVar13;
    puVar4 = puVar6 + 4;
    puVar7 = puVar5 + 4;
  } while (puVar4 != puVar3 + 8);
  uVar1 = *puVar4;
  uVar8 = *(undefined4 *)(puVar6 + 5);
  uVar9 = *(undefined4 *)((int)puVar6 + 0x2c);
  *(int *)(puVar5 + 4) = (int)uVar1;
  *(int *)((int)puVar5 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar5 + 5) = uVar8;
  *(undefined4 *)((int)puVar5 + 0x2c) = uVar9;
  *(undefined4 *)((int)puVar3 + 0xdc) = 0x80;
  *(undefined4 *)(puVar3 + 0x1a) = 0;
  *(undefined4 *)((int)puVar3 + 0xd4) = 0x80;
  *(undefined4 *)(puVar3 + 0x1b) = 0;
  puVar7 = puVar3 + 0x14;
  puVar4 = puVar3 + 0x1e;
  do {
    puVar6 = puVar4;
    puVar5 = puVar7;
    uVar1 = *puVar5;
    uVar8 = *(undefined4 *)(puVar5 + 1);
    uVar9 = *(undefined4 *)((int)puVar5 + 0xc);
    uVar2 = puVar5[2];
    uVar10 = *(undefined4 *)(puVar5 + 3);
    uVar11 = *(undefined4 *)((int)puVar5 + 0x1c);
    *(int *)puVar6 = (int)uVar1;
    *(int *)((int)puVar6 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar6 + 1) = uVar8;
    *(undefined4 *)((int)puVar6 + 0xc) = uVar9;
    *(int *)(puVar6 + 2) = (int)uVar2;
    *(int *)((int)puVar6 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar6 + 3) = uVar10;
    *(undefined4 *)((int)puVar6 + 0x1c) = uVar11;
    puVar7 = puVar5 + 4;
    puVar4 = puVar6 + 4;
  } while (puVar7 != puVar3 + 0x1c);
  uVar8 = *(undefined4 *)((int)puVar5 + 0x24);
  uVar9 = *(undefined4 *)(puVar5 + 5);
  uVar10 = *(undefined4 *)((int)puVar5 + 0x2c);
  *(undefined4 *)(puVar6 + 4) = *(undefined4 *)puVar7;
  *(undefined4 *)((int)puVar6 + 0x24) = uVar8;
  *(undefined4 *)(puVar6 + 5) = uVar9;
  *(undefined4 *)((int)puVar6 + 0x2c) = uVar10;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x1e) = 0;
  *(float *)((int)puVar3 + 0xf4) = size;
  *(undefined4 *)(puVar3 + 0x1f) = 0;
  puVar7 = puVar3;
  puVar4 = puVar3 + 0x28;
  do {
    puVar5 = puVar4;
    puVar6 = puVar7;
    uVar1 = *puVar6;
                    /* end of inlined section */
    uVar8 = *(undefined4 *)(puVar6 + 1);
    uVar9 = *(undefined4 *)((int)puVar6 + 0xc);
    uVar2 = puVar6[2];
    uVar10 = *(undefined4 *)(puVar6 + 3);
    uVar11 = *(undefined4 *)((int)puVar6 + 0x1c);
    *(int *)puVar5 = (int)uVar1;
    *(int *)((int)puVar5 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar5 + 1) = uVar8;
    *(undefined4 *)((int)puVar5 + 0xc) = uVar9;
    *(int *)(puVar5 + 2) = (int)uVar2;
    *(int *)((int)puVar5 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar5 + 3) = uVar10;
    *(undefined4 *)((int)puVar5 + 0x1c) = uVar11;
    puVar7 = puVar6 + 4;
    puVar4 = puVar5 + 4;
  } while (puVar7 != puVar3 + 8);
  uVar8 = *(undefined4 *)((int)puVar6 + 0x24);
  uVar9 = *(undefined4 *)(puVar6 + 5);
  uVar10 = *(undefined4 *)((int)puVar6 + 0x2c);
  *(undefined4 *)(puVar5 + 4) = *(undefined4 *)puVar7;
  *(undefined4 *)((int)puVar5 + 0x24) = uVar8;
  *(undefined4 *)(puVar5 + 5) = uVar9;
  *(undefined4 *)((int)puVar5 + 0x2c) = uVar10;
  *(undefined4 *)((int)puVar3 + 0x17c) = 0x80;
  *(undefined4 *)(puVar3 + 0x2e) = 0;
  *(undefined4 *)((int)puVar3 + 0x174) = 0;
  *(undefined4 *)(puVar3 + 0x2f) = 0x80;
  puVar7 = puVar3 + 0x28;
  puVar4 = puVar3 + 0x32;
  do {
    puVar6 = puVar4;
    puVar5 = puVar7;
    uVar1 = *puVar5;
    uVar8 = *(undefined4 *)(puVar5 + 1);
    uVar9 = *(undefined4 *)((int)puVar5 + 0xc);
    uVar10 = *(undefined4 *)(puVar5 + 2);
    uVar11 = *(undefined4 *)((int)puVar5 + 0x14);
    uVar12 = *(undefined4 *)(puVar5 + 3);
    uVar13 = *(undefined4 *)((int)puVar5 + 0x1c);
    *(int *)puVar6 = (int)uVar1;
    *(int *)((int)puVar6 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar6 + 1) = uVar8;
    *(undefined4 *)((int)puVar6 + 0xc) = uVar9;
    *(undefined4 *)(puVar6 + 2) = uVar10;
    *(undefined4 *)((int)puVar6 + 0x14) = uVar11;
    *(undefined4 *)(puVar6 + 3) = uVar12;
    *(undefined4 *)((int)puVar6 + 0x1c) = uVar13;
    puVar7 = puVar5 + 4;
    puVar4 = puVar6 + 4;
  } while (puVar7 != puVar3 + 0x30);
  uVar1 = *puVar7;
  uVar8 = *(undefined4 *)(puVar5 + 5);
  uVar9 = *(undefined4 *)((int)puVar5 + 0x2c);
  *(int *)(puVar6 + 4) = (int)uVar1;
  *(int *)((int)puVar6 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar6 + 5) = uVar8;
  *(undefined4 *)((int)puVar6 + 0x2c) = uVar9;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x32) = 0;
  *(undefined4 *)((int)puVar3 + 0x194) = 0;
  *(float *)(puVar3 + 0x33) = size;
                    /* end of inlined section */
  (*(code *)prc->__vtable->ClipRatio)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Viewport,puVar3,6);
  (*(code *)prc->__vtable[1].TriList)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriFan);
  return;
}

void EPrimitive::Vector(ERC *prc, EVec3 vStart, EVec3 vEnd, EVec4 vColor) {
	EVec3 vDelta;
	float deltaMag;
	EVec3 vCross[2];
	EVec3 vZCross;
	float zCrossMag;
	EVec3 vArrowPos;
	ERC *this;
	EVec4 *this;
	EVec4 *this;
	int i;
	int i;
	EGEVert &v;
	int col;
	EVec4 *this;
	int value;
	int norm;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 &v;
	float scaler;
	float scaler;
	EVec3 &vA;
	EVec3 &vB;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	int a;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong *puVar4;
  EVec4__null___1__1 *pEVar5;
  EVec3__null___1__1 *pEVar6;
  undefined8 uVar7;
  float *pfVar8;
  EVec4 *pEVar9;
  int iVar10;
  EVec3 *pEVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  EVec3 vDelta;
  EVec3 vCross [2];
  EVec3 vZCross;
  EVec3 vArrowPos;
  
  (*(code *)prc->__vtable[1].Vertex)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriIndexed)
  ;
  (*(code *)prc->__vtable->EndCommand)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,8);
                    /* inlined from c:/eor/src2/engine/e_dl.h */
  pfVar8 = (float *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x3c0,0x10);
  fVar21 = (vColor->field0_0x0).d[1];
  fVar20 = (vColor->field0_0x0).d[2];
  fVar16 = (vColor->field0_0x0).d[3];
  (vColor->field0_0x0).d[0] = (vColor->field0_0x0).d[0] * 128.0;
  iVar12 = 3;
  (vColor->field0_0x0).d[1] = fVar21 * 128.0;
  (vColor->field0_0x0).d[2] = fVar20 * 128.0;
  (vColor->field0_0x0).d[3] = fVar16 * 128.0;
  pEVar9 = vColor;
  do {
    fVar20 = (pEVar9->field0_0x0).d[0];
    fVar16 = 0.0;
    if (0.0 <= fVar20) {
      fVar16 = (float)((int)fVar20 * (uint)(fVar20 < 255.0) | (uint)(fVar20 >= 255.0) * 0x437f0000);
    }
    (pEVar9->field0_0x0).d[0] = fVar16;
    iVar12 = iVar12 + -1;
    pEVar9 = (EVec4 *)((int)&pEVar9->field0_0x0 + 4);
  } while (-1 < iVar12);
                    /* end of inlined section */
  iVar12 = 0;
  do {
    iVar14 = 3;
    iVar10 = iVar12 + 1;
    pfVar13 = pfVar8 + iVar12 * 0x14 + 0xc;
    pEVar9 = vColor;
    do {
      pEVar5 = &pEVar9->field0_0x0;
                    /* end of inlined section */
      iVar14 = iVar14 + -1;
      pEVar9 = (EVec4 *)((int)&pEVar9->field0_0x0 + 4);
      *pfVar13 = (float)(int)pEVar5->d[0];
      pfVar13 = pfVar13 + 1;
    } while (-1 < iVar14);
    iVar14 = 2;
    pfVar13 = pfVar8 + iVar12 * 0x14 + 6;
    do {
      *pfVar13 = 0.0;
      iVar14 = iVar14 + -1;
      pfVar13 = pfVar13 + -1;
    } while (-1 < iVar14);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    pfVar8[iVar12 * 0x14 + 8] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    pfVar8[iVar12 * 0x14 + 0xb] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    pfVar8[iVar12 * 0x14 + 9] = 0.0;
                    /* end of inlined section */
    pfVar8[iVar12 * 0x14 + 10] = 0.0;
    iVar12 = iVar10;
  } while (iVar10 < 0xc);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *pfVar8 = (vStart->field0_0x0).d[0];
  pfVar8[1] = (vStart->field0_0x0).d[1];
  pfVar8[2] = (vStart->field0_0x0).d[2];
  pfVar8[0x78] = (vEnd->field0_0x0).d[0];
  pfVar8[0x79] = (vEnd->field0_0x0).d[1];
  pfVar8[0x7a] = (vEnd->field0_0x0).d[2];
                    /* end of inlined section */
  fVar16 = (float)*(undefined8 *)(pfVar8 + 0x78);
  pfVar8[0x14] = fVar16;
  fVar20 = (float)((ulong)*(undefined8 *)(pfVar8 + 0x78) >> 0x20);
  pfVar8[0x15] = fVar20;
  pfVar8[0x16] = pfVar8[0x7a];
  pfVar8[0x17] = pfVar8[0x7b];
  pfVar8[0x3c] = fVar16;
  pfVar8[0x3d] = fVar20;
  pfVar8[0x3e] = pfVar8[0x7a];
  pfVar8[0x3f] = pfVar8[0x7b];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar21 = (vEnd->field0_0x0).d[0] - (vStart->field0_0x0).d[0];
  fVar22 = (vEnd->field0_0x0).d[1] - (vStart->field0_0x0).d[1];
  fVar16 = (vEnd->field0_0x0).d[2] - (vStart->field0_0x0).d[2];
  fVar17 = sqrtf(fVar21 * fVar21 + fVar22 * fVar22 + fVar16 * fVar16);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar20 = 1.0 / fVar17;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar16 = fVar16 * fVar20;
  fVar21 = fVar21 * fVar20;
  fVar22 = fVar22 * fVar20;
                    /* end of inlined section */
  iVar12 = 0;
  do {
    bVar2 = iVar12 != -1;
    iVar12 = iVar12 + -1;
  } while (bVar2);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar20 = 1.0;
  vArrowPos.field0_0x0._0_8_ = 0;
  vArrowPos.field0_0x0.d[2] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar23 = fVar22 * 1.0 - fVar16 * 0.0;
  fVar18 = fVar16 * 0.0 - fVar21 * 1.0;
  fVar15 = fVar21 * 0.0 - fVar22 * 0.0;
  fVar19 = sqrtf(fVar23 * fVar23 + fVar18 * fVar18 + fVar15 * fVar15);
                    /* end of inlined section */
  if (fVar19 == 0.0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vArrowPos.field0_0x0.d[2] = 0.0;
    vArrowPos.field0_0x0._0_8_ = ZEXT48((uint)fVar20);
    puVar1 = (undefined *)((int)&vCross[0].field0_0x0 + 7);
                    /* end of inlined section */
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | (ulong)((uint)fVar20 >> (7 - uVar3) * 8);
    vCross[0].field0_0x0._0_8_ = vArrowPos.field0_0x0._0_8_;
    vCross[0].field0_0x0._8_4_ = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vArrowPos.field0_0x0._0_8_ = (ulong)(uint)fVar20 << 0x20;
    vArrowPos.field0_0x0.d[2] = 0.0;
    puVar1 = (undefined *)((int)&vCross[1].field0_0x0 + 7);
                    /* end of inlined section */
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
              (ulong)vArrowPos.field0_0x0._0_8_ >> (7 - uVar3) * 8;
    uVar3 = (uint)(vCross + 1) & 7;
    puVar4 = (ulong *)((int)(vCross + 1) - uVar3);
    *puVar4 = vArrowPos.field0_0x0._0_8_ << uVar3 * 8 |
              *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    vCross[1].field0_0x0._8_4_ = 0.0;
    fVar16 = (vStart->field0_0x0).d[2];
  }
  else {
    fVar19 = fVar20 / fVar19;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar23 = fVar23 * fVar19;
    vCross[0].field0_0x0._8_4_ = fVar15 * fVar19;
    fVar18 = fVar18 * fVar19;
    vArrowPos.field0_0x0.d[2] = vCross[0].field0_0x0._8_4_;
    vArrowPos.field0_0x0._0_8_ = CONCAT44(fVar18,fVar23);
    vCross[0].field0_0x0._0_8_ = vArrowPos.field0_0x0._0_8_;
    puVar1 = (undefined *)((int)&vCross[0].field0_0x0 + 7);
                    /* end of inlined section */
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
              (ulong)vArrowPos.field0_0x0._0_8_ >> (7 - uVar3) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar15 = sqrtf(fVar23 * fVar23 + fVar18 * fVar18 +
                   vCross[0].field0_0x0._8_4_ * vCross[0].field0_0x0._8_4_);
    if (fVar15 != 0.0) {
      fVar15 = fVar20 / fVar15;
      vCross[0].field0_0x0._8_4_ = vCross[0].field0_0x0._8_4_ * fVar15;
      vCross[0].field0_0x0._0_8_ =
           CONCAT44(vCross[0].field0_0x0._4_4_ * fVar15,vCross[0].field0_0x0._0_4_ * fVar15);
    }
    vCross[1].field0_0x0._8_4_ =
         vCross[0].field0_0x0._0_4_ * fVar22 - vCross[0].field0_0x0._4_4_ * fVar21;
    vArrowPos.field0_0x0.d[2] = vCross[1].field0_0x0._8_4_;
    vArrowPos.field0_0x0._0_8_ =
         CONCAT44(vCross[0].field0_0x0._8_4_ * fVar21 - vCross[0].field0_0x0._0_4_ * fVar16,
                  vCross[0].field0_0x0._4_4_ * fVar16 - vCross[0].field0_0x0._8_4_ * fVar22);
    uVar7 = vArrowPos.field0_0x0._0_8_;
    puVar1 = (undefined *)((int)&vCross[1].field0_0x0 + 7);
                    /* end of inlined section */
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 |
              (ulong)vArrowPos.field0_0x0._0_8_ >> (7 - uVar3) * 8;
    uVar3 = (uint)(vCross + 1) & 7;
    puVar4 = (ulong *)((int)(vCross + 1) - uVar3);
    *puVar4 = uVar7 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar16 = sqrtf(vCross[1].field0_0x0._0_4_ * vCross[1].field0_0x0._0_4_ +
                   vCross[1].field0_0x0._4_4_ * vCross[1].field0_0x0._4_4_ +
                   vCross[1].field0_0x0._8_4_ * vCross[1].field0_0x0._8_4_);
    if (fVar16 == 0.0) {
      fVar16 = (vStart->field0_0x0).d[2];
    }
    else {
      fVar20 = fVar20 / fVar16;
      vCross[1].field0_0x0._0_4_ = vCross[1].field0_0x0._0_4_ * fVar20;
      vCross[1].field0_0x0._8_4_ = vCross[1].field0_0x0._8_4_ * fVar20;
      vCross[1].field0_0x0._4_4_ = vCross[1].field0_0x0._4_4_ * fVar20;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar16 = (vStart->field0_0x0).d[2];
    }
  }
                    /* end of inlined section */
  pfVar13 = pfVar8 + 0x50;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pEVar11 = vCross;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  iVar12 = 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar20 = (vStart->field0_0x0).d[0] + ((vEnd->field0_0x0).d[0] - (vStart->field0_0x0).d[0]) * 0.75;
  vArrowPos.field0_0x0.d[2] = fVar16 + ((vEnd->field0_0x0).d[2] - fVar16) * 0.75;
  fVar16 = (vStart->field0_0x0).d[1] + ((vEnd->field0_0x0).d[1] - (vStart->field0_0x0).d[1]) * 0.75;
                    /* end of inlined section */
  fVar17 = fVar17 * 0.0625;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  puVar1 = (undefined *)((int)&vArrowPos.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | CONCAT44(fVar16,fVar20) >> (7 - uVar3) * 8;
  vArrowPos.field0_0x0._0_8_ = CONCAT44(fVar16,fVar20);
  do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    iVar12 = iVar12 + -1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar21 = (pEVar11->field0_0x0).d[1];
    fVar22 = (pEVar11->field0_0x0).d[2];
    pfVar13[-0x28] = fVar20 + fVar17 * (pEVar11->field0_0x0).d[0];
    pfVar13[-0x27] = fVar16 + fVar17 * fVar21;
    pfVar13[-0x26] = vArrowPos.field0_0x0.d[2] + fVar17 * fVar22;
    pEVar6 = &pEVar11->field0_0x0;
    fVar21 = (pEVar11->field0_0x0).d[1];
    fVar22 = (pEVar11->field0_0x0).d[2];
                    /* end of inlined section */
    pEVar11 = pEVar11 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    *pfVar13 = fVar20 - fVar17 * pEVar6->d[0];
    pfVar13[1] = fVar16 - fVar17 * fVar21;
    pfVar13[2] = vArrowPos.field0_0x0.d[2] - fVar17 * fVar22;
                    /* end of inlined section */
    pfVar13 = pfVar13 + 0x3c;
  } while (-1 < iVar12);
  pfVar8[0xa0] = (float)*(undefined8 *)(pfVar8 + 0x28);
  pfVar8[0xa1] = (float)((ulong)*(undefined8 *)(pfVar8 + 0x28) >> 0x20);
  pfVar8[0xa2] = pfVar8[0x2a];
  pfVar8[0xa3] = pfVar8[0x2b];
  pfVar8[0xb4] = (float)*(undefined8 *)(pfVar8 + 100);
  pfVar8[0xb5] = (float)((ulong)*(undefined8 *)(pfVar8 + 100) >> 0x20);
  pfVar8[0xb6] = pfVar8[0x66];
  pfVar8[0xb7] = pfVar8[0x67];
  pfVar8[200] = (float)*(undefined8 *)(pfVar8 + 0x50);
  pfVar8[0xc9] = (float)((ulong)*(undefined8 *)(pfVar8 + 0x50) >> 0x20);
  pfVar8[0xca] = pfVar8[0x52];
  pfVar8[0xcb] = pfVar8[0x53];
  pfVar8[0xdc] = (float)*(undefined8 *)(pfVar8 + 0x8c);
  pfVar8[0xdd] = (float)((ulong)*(undefined8 *)(pfVar8 + 0x8c) >> 0x20);
  pfVar8[0xde] = pfVar8[0x8e];
  pfVar8[0xdf] = pfVar8[0x8f];
  (*(code *)prc->__vtable->Scissor)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->ClipRect,pfVar8,2);
  (*(code *)prc->__vtable->Scissor)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->ClipRect,pfVar8 + 0x28,3);
  (*(code *)prc->__vtable->Scissor)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->ClipRect,pfVar8 + 100,7);
  (*(code *)prc->__vtable[1].TriList)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriFan);
  return;
}

void EPrimitive::Cube(ERC *prc, float size) {
	int c;
	ERC *this;
	int i;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	int j;
	float scaler;
	
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_dl.h */
  pfVar1 = (float *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x780,0x10);
                    /* end of inlined section */
  iVar3 = 0x17;
  pfVar2 = pfVar1;
  do {
    pfVar2[0xc] = 1.793662e-43;
    iVar3 = iVar3 + -1;
    pfVar2[0xd] = 1.793662e-43;
    pfVar2[0xe] = 1.793662e-43;
    pfVar2[0xf] = 1.793662e-43;
    pfVar2 = pfVar2 + 0x14;
  } while (-1 < iVar3);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *pfVar1 = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  pfVar1[1] = -1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  pfVar1[2] = -1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  iVar3 = 3;
  pfVar1[8] = 0.0;
  pfVar1[9] = 0.0;
  pfVar1[10] = 0.0;
  pfVar1[0xb] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x14] = -1.0;
  pfVar1[0x15] = -1.0;
  pfVar1[0x16] = -1.0;
                    /* end of inlined section */
  pfVar1[0x1c] = 1.0;
  pfVar1[0x1d] = 0.0;
  pfVar1[0x1e] = 0.0;
  pfVar1[0x1f] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x28] = 1.0;
  pfVar1[0x29] = 1.0;
  pfVar1[0x2a] = -1.0;
                    /* end of inlined section */
  pfVar1[0x30] = 0.0;
  pfVar1[0x31] = 1.0;
  pfVar1[0x32] = 0.0;
  pfVar1[0x33] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x3c] = -1.0;
  pfVar1[0x3d] = 1.0;
  pfVar1[0x3e] = -1.0;
                    /* end of inlined section */
  pfVar1[0x44] = 1.0;
  pfVar1[0x45] = 1.0;
  pfVar1[0x46] = 0.0;
  pfVar1[0x47] = 0.0;
  pfVar2 = pfVar1;
  do {
    pfVar2[4] = 0.0;
    iVar3 = iVar3 + -1;
    pfVar2[5] = 0.0;
    pfVar2[6] = -NAN;
    pfVar2 = pfVar2 + 0x14;
  } while (-1 < iVar3);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pfVar2 = pfVar1 + 0x50;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  iVar3 = 3;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x50] = 1.0;
  pfVar1[0x51] = 1.0;
  pfVar1[0x52] = -1.0;
                    /* end of inlined section */
  pfVar1[0x58] = 0.0;
  pfVar1[0x59] = 0.0;
  pfVar1[0x5a] = 0.0;
  pfVar1[0x5b] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[100] = -1.0;
  pfVar1[0x65] = 1.0;
  pfVar1[0x66] = -1.0;
                    /* end of inlined section */
  pfVar1[0x6c] = 1.0;
  pfVar1[0x6d] = 0.0;
  pfVar1[0x6e] = 0.0;
  pfVar1[0x6f] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x78] = 1.0;
  pfVar1[0x79] = 1.0;
  pfVar1[0x7a] = 1.0;
                    /* end of inlined section */
  pfVar1[0x80] = 0.0;
  pfVar1[0x81] = 1.0;
  pfVar1[0x82] = 0.0;
  pfVar1[0x83] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x8c] = -1.0;
  pfVar1[0x8d] = 1.0;
  pfVar1[0x8e] = 1.0;
                    /* end of inlined section */
  pfVar1[0x94] = 1.0;
  pfVar1[0x95] = 1.0;
  pfVar1[0x96] = 0.0;
  pfVar1[0x97] = 0.0;
  do {
    pfVar2[4] = 0.0;
    iVar3 = iVar3 + -1;
    pfVar2[5] = 1.779649e-43;
    pfVar2[6] = 0.0;
    pfVar2 = pfVar2 + 0x14;
  } while (-1 < iVar3);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pfVar2 = pfVar1 + 0xa0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  iVar3 = 3;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0xa0] = 1.0;
  pfVar1[0xa1] = 1.0;
  pfVar1[0xa2] = 1.0;
                    /* end of inlined section */
  pfVar1[0xa8] = 1.0;
  pfVar1[0xa9] = 1.0;
  pfVar1[0xaa] = 0.0;
  pfVar1[0xab] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0xb4] = -1.0;
  pfVar1[0xb5] = 1.0;
  pfVar1[0xb6] = 1.0;
                    /* end of inlined section */
  pfVar1[0xbc] = 0.0;
  pfVar1[0xbd] = 1.0;
  pfVar1[0xbe] = 0.0;
  pfVar1[0xbf] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[200] = 1.0;
  pfVar1[0xc9] = -1.0;
  pfVar1[0xca] = 1.0;
                    /* end of inlined section */
  pfVar1[0xd0] = 1.0;
  pfVar1[0xd1] = 0.0;
  pfVar1[0xd2] = 0.0;
  pfVar1[0xd3] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0xdc] = -1.0;
  pfVar1[0xdd] = -1.0;
  pfVar1[0xde] = 1.0;
                    /* end of inlined section */
  pfVar1[0xe4] = 0.0;
  pfVar1[0xe5] = 0.0;
  pfVar1[0xe6] = 0.0;
  pfVar1[0xe7] = 0.0;
  do {
    pfVar2[4] = 0.0;
    iVar3 = iVar3 + -1;
    pfVar2[5] = 0.0;
    pfVar2[6] = 1.779649e-43;
    pfVar2 = pfVar2 + 0x14;
  } while (-1 < iVar3);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pfVar2 = pfVar1 + 0xf0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  iVar3 = 3;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0xf0] = 1.0;
  pfVar1[0xf1] = -1.0;
  pfVar1[0xf2] = 1.0;
                    /* end of inlined section */
  pfVar1[0xf8] = 1.0;
  pfVar1[0xf9] = 1.0;
  pfVar1[0xfa] = 0.0;
  pfVar1[0xfb] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x104] = -1.0;
  pfVar1[0x105] = -1.0;
  pfVar1[0x106] = 1.0;
                    /* end of inlined section */
  pfVar1[0x10c] = 0.0;
  pfVar1[0x10d] = 1.0;
  pfVar1[0x10e] = 0.0;
  pfVar1[0x10f] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x118] = 1.0;
  pfVar1[0x119] = -1.0;
  pfVar1[0x11a] = -1.0;
                    /* end of inlined section */
  pfVar1[0x120] = 1.0;
  pfVar1[0x121] = 0.0;
  pfVar1[0x122] = 0.0;
  pfVar1[0x123] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[300] = -1.0;
  pfVar1[0x12d] = -1.0;
  pfVar1[0x12e] = -1.0;
                    /* end of inlined section */
  pfVar1[0x134] = 0.0;
  pfVar1[0x135] = 0.0;
  pfVar1[0x136] = 0.0;
  pfVar1[0x137] = 0.0;
  do {
    pfVar2[4] = 0.0;
    iVar3 = iVar3 + -1;
    pfVar2[5] = -NAN;
    pfVar2[6] = 0.0;
    pfVar2 = pfVar2 + 0x14;
  } while (-1 < iVar3);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pfVar2 = pfVar1 + 0x140;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  iVar3 = 3;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x140] = 1.0;
  pfVar1[0x141] = -1.0;
  pfVar1[0x142] = 1.0;
                    /* end of inlined section */
  pfVar1[0x148] = 0.0;
  pfVar1[0x149] = 1.0;
  pfVar1[0x14a] = 0.0;
  pfVar1[0x14b] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x154] = 1.0;
  pfVar1[0x155] = -1.0;
  pfVar1[0x156] = -1.0;
                    /* end of inlined section */
  pfVar1[0x15c] = 0.0;
  pfVar1[0x15d] = 0.0;
  pfVar1[0x15e] = 0.0;
  pfVar1[0x15f] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x168] = 1.0;
  pfVar1[0x169] = 1.0;
  pfVar1[0x16a] = 1.0;
                    /* end of inlined section */
  pfVar1[0x170] = 1.0;
  pfVar1[0x171] = 1.0;
  pfVar1[0x172] = 0.0;
  pfVar1[0x173] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x17c] = 1.0;
  pfVar1[0x17d] = 1.0;
  pfVar1[0x17e] = -1.0;
                    /* end of inlined section */
  pfVar1[0x184] = 1.0;
  pfVar1[0x185] = 0.0;
  pfVar1[0x186] = 0.0;
  pfVar1[0x187] = 0.0;
  do {
    pfVar2[4] = 1.779649e-43;
    iVar3 = iVar3 + -1;
    pfVar2[5] = 0.0;
    pfVar2[6] = 0.0;
    pfVar2 = pfVar2 + 0x14;
  } while (-1 < iVar3);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  pfVar2 = pfVar1 + 400;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  iVar3 = 3;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[400] = -1.0;
  pfVar1[0x191] = -1.0;
  pfVar1[0x192] = -1.0;
                    /* end of inlined section */
  pfVar1[0x198] = 1.0;
  pfVar1[0x199] = 0.0;
  pfVar1[0x19a] = 0.0;
  pfVar1[0x19b] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x1a4] = -1.0;
  pfVar1[0x1a5] = -1.0;
  pfVar1[0x1a6] = 1.0;
                    /* end of inlined section */
  pfVar1[0x1ac] = 1.0;
  pfVar1[0x1ad] = 1.0;
  pfVar1[0x1ae] = 0.0;
  pfVar1[0x1af] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x1b8] = -1.0;
  pfVar1[0x1b9] = 1.0;
  pfVar1[0x1ba] = -1.0;
                    /* end of inlined section */
  pfVar1[0x1c0] = 0.0;
  pfVar1[0x1c1] = 0.0;
  pfVar1[0x1c2] = 0.0;
  pfVar1[0x1c3] = 0.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pfVar1[0x1cc] = -1.0;
  pfVar1[0x1cd] = 1.0;
  pfVar1[0x1ce] = 1.0;
                    /* end of inlined section */
  pfVar1[0x1d4] = 0.0;
  pfVar1[0x1d5] = 1.0;
  pfVar1[0x1d6] = 0.0;
  pfVar1[0x1d7] = 0.0;
  do {
    pfVar2[4] = -NAN;
    iVar3 = iVar3 + -1;
    pfVar2[5] = 0.0;
    pfVar2[6] = 0.0;
    pfVar2 = pfVar2 + 0x14;
  } while (-1 < iVar3);
  iVar3 = 0x17;
  pfVar2 = pfVar1;
  do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
    iVar3 = iVar3 + -1;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    *pfVar2 = *pfVar2 * size;
    pfVar2[1] = pfVar2[1] * size;
    pfVar2[2] = pfVar2[2] * size;
    pfVar2[3] = pfVar2[3] * size;
                    /* end of inlined section */
    pfVar2 = pfVar2 + 0x14;
  } while (-1 < iVar3);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,pfVar1,4);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,pfVar1 + 0x50,4);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,pfVar1 + 0xa0,4);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,pfVar1 + 0xf0,4);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,pfVar1 + 0x140,4);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,pfVar1 + 400,4);
  return;
}

void EPrimitive::WireBox(ERC *prc, EBound3 &boundBox, EVec4 vColor) {
	ERC *this;
	EVec4 *this;
	EVec4 *this;
	int i;
	int cc;
	EVec4 *this;
	int value;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	ERC *this;
	
  undefined8 uVar1;
  undefined8 uVar2;
  EVec4__null___1__1 *pEVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  EVec4 *pEVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  (*(code *)prc->__vtable[1].Vertex)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriIndexed)
  ;
  (*(code *)prc->__vtable->EndCommand)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,8);
                    /* inlined from c:/eor/src2/engine/e_dl.h */
  puVar5 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,800,0x10);
  fVar20 = (vColor->field0_0x0).d[1];
  iVar9 = 3;
  fVar21 = (vColor->field0_0x0).d[2];
  fVar19 = (vColor->field0_0x0).d[3];
  (vColor->field0_0x0).d[0] = (vColor->field0_0x0).d[0] * 128.0;
  (vColor->field0_0x0).d[1] = fVar20 * 128.0;
  (vColor->field0_0x0).d[2] = fVar21 * 128.0;
  (vColor->field0_0x0).d[3] = fVar19 * 128.0;
  pEVar6 = vColor;
  do {
    fVar20 = (pEVar6->field0_0x0).d[0];
    fVar19 = 0.0;
    if (0.0 <= fVar20) {
      fVar19 = (float)((int)fVar20 * (uint)(fVar20 < 255.0) | (uint)(fVar20 >= 255.0) * 0x437f0000);
    }
    (pEVar6->field0_0x0).d[0] = fVar19;
    iVar9 = iVar9 + -1;
    pEVar6 = (EVec4 *)((int)&pEVar6->field0_0x0 + 4);
  } while (-1 < iVar9);
                    /* end of inlined section */
  puVar18 = puVar5 + 8;
  puVar10 = puVar5 + 6;
  iVar9 = 3;
  do {
    pEVar3 = &vColor->field0_0x0;
                    /* end of inlined section */
    iVar9 = iVar9 + -1;
    vColor = (EVec4 *)((int)&vColor->field0_0x0 + 4);
    *(uint *)puVar10 = (int)pEVar3->d[0] & 0xff;
    puVar10 = (undefined8 *)((int)puVar10 + 4);
  } while (-1 < iVar9);
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined4 *)((int)puVar5 + 0x14) = 0;
  *(undefined4 *)(puVar5 + 3) = 0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)(puVar5 + 4) = 0;
  *(undefined4 *)((int)puVar5 + 0x2c) = 0;
  *(undefined4 *)((int)puVar5 + 0x24) = 0;
  *(undefined4 *)(puVar5 + 5) = 0;
  fVar20 = (boundBox->vMax).field0_0x0.d[1];
  fVar19 = (boundBox->vMin).field0_0x0.d[2];
  *(float *)puVar5 = (boundBox->vMin).field0_0x0.d[0];
  *(float *)((int)puVar5 + 4) = fVar20;
  *(float *)(puVar5 + 1) = fVar19;
  puVar10 = puVar5 + 10;
  puVar7 = puVar5;
  do {
    puVar11 = puVar10;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar14 = *(undefined4 *)(puVar7 + 1);
    uVar15 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar16 = *(undefined4 *)(puVar7 + 3);
    uVar17 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar14;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar15;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar16;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar17;
    puVar7 = puVar7 + 4;
    puVar10 = puVar11 + 4;
  } while (puVar7 != puVar18);
  uVar1 = *puVar18;
  uVar14 = *(undefined4 *)(puVar5 + 9);
  uVar15 = *(undefined4 *)((int)puVar5 + 0x4c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar14;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar15;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar20 = (boundBox->vMax).field0_0x0.d[1];
  fVar19 = (boundBox->vMin).field0_0x0.d[2];
  *(float *)(puVar5 + 10) = (boundBox->vMax).field0_0x0.d[0];
  *(float *)((int)puVar5 + 0x54) = fVar20;
  *(float *)(puVar5 + 0xb) = fVar19;
  puVar10 = puVar5 + 0x14;
  puVar7 = puVar5;
  do {
    puVar11 = puVar10;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar16 = *(undefined4 *)(puVar7 + 1);
    uVar17 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar14 = *(undefined4 *)(puVar7 + 3);
    uVar15 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar16;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar17;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar14;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar15;
    puVar7 = puVar7 + 4;
    puVar10 = puVar11 + 4;
  } while (puVar7 != puVar18);
  uVar1 = *puVar18;
  uVar14 = *(undefined4 *)(puVar5 + 9);
  uVar15 = *(undefined4 *)((int)puVar5 + 0x4c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar14;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar15;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar20 = (boundBox->vMax).field0_0x0.d[1];
  fVar19 = (boundBox->vMax).field0_0x0.d[2];
  *(float *)(puVar5 + 0x14) = (boundBox->vMax).field0_0x0.d[0];
  *(float *)((int)puVar5 + 0xa4) = fVar20;
  *(float *)(puVar5 + 0x15) = fVar19;
  puVar10 = puVar5;
  puVar7 = puVar5 + 0x1e;
  do {
    puVar11 = puVar7;
    uVar1 = *puVar10;
                    /* end of inlined section */
    uVar14 = *(undefined4 *)(puVar10 + 1);
    uVar15 = *(undefined4 *)((int)puVar10 + 0xc);
    uVar2 = puVar10[2];
    uVar16 = *(undefined4 *)(puVar10 + 3);
    uVar17 = *(undefined4 *)((int)puVar10 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar14;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar15;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar16;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar17;
    puVar10 = puVar10 + 4;
    puVar7 = puVar11 + 4;
  } while (puVar10 != puVar18);
  uVar1 = *puVar18;
  uVar14 = *(undefined4 *)(puVar5 + 9);
  uVar15 = *(undefined4 *)((int)puVar5 + 0x4c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar14;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar15;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar20 = (boundBox->vMax).field0_0x0.d[1];
  fVar19 = (boundBox->vMax).field0_0x0.d[2];
  *(float *)(puVar5 + 0x1e) = (boundBox->vMin).field0_0x0.d[0];
  *(float *)((int)puVar5 + 0xf4) = fVar20;
  *(float *)(puVar5 + 0x1f) = fVar19;
  puVar10 = puVar5 + 0x28;
  puVar7 = puVar5;
  do {
    puVar11 = puVar10;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar14 = *(undefined4 *)(puVar7 + 1);
    uVar15 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar16 = *(undefined4 *)(puVar7 + 3);
    uVar17 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar14;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar15;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar16;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar17;
    puVar7 = puVar7 + 4;
    puVar10 = puVar11 + 4;
  } while (puVar7 != puVar18);
  uVar1 = *puVar18;
  uVar14 = *(undefined4 *)(puVar5 + 9);
  uVar15 = *(undefined4 *)((int)puVar5 + 0x4c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar14;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar15;
  puVar10 = puVar5 + 0x32;
  puVar7 = puVar5;
  do {
    puVar11 = puVar10;
    uVar1 = *puVar7;
    uVar14 = *(undefined4 *)(puVar7 + 1);
    uVar15 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar16 = *(undefined4 *)(puVar7 + 3);
    uVar17 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar14;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar15;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar16;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar17;
    puVar7 = puVar7 + 4;
    puVar10 = puVar11 + 4;
  } while (puVar7 != puVar18);
  uVar1 = *puVar18;
  uVar14 = *(undefined4 *)(puVar5 + 9);
  uVar15 = *(undefined4 *)((int)puVar5 + 0x4c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar14;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar15;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar20 = (boundBox->vMin).field0_0x0.d[1];
  fVar19 = (boundBox->vMin).field0_0x0.d[2];
  *(float *)(puVar5 + 0x32) = (boundBox->vMin).field0_0x0.d[0];
  *(float *)((int)puVar5 + 0x194) = fVar20;
  *(float *)(puVar5 + 0x33) = fVar19;
  puVar10 = puVar5 + 0x3c;
  puVar7 = puVar5;
  do {
    puVar11 = puVar10;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar14 = *(undefined4 *)(puVar7 + 1);
    uVar15 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar16 = *(undefined4 *)(puVar7 + 3);
    uVar17 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar14;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar15;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar16;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar17;
    puVar7 = puVar7 + 4;
    puVar10 = puVar11 + 4;
  } while (puVar7 != puVar18);
  uVar1 = *puVar18;
  uVar14 = *(undefined4 *)(puVar5 + 9);
  uVar15 = *(undefined4 *)((int)puVar5 + 0x4c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar14;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar15;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar20 = (boundBox->vMin).field0_0x0.d[1];
  fVar19 = (boundBox->vMin).field0_0x0.d[2];
  *(float *)(puVar5 + 0x3c) = (boundBox->vMax).field0_0x0.d[0];
  *(float *)((int)puVar5 + 0x1e4) = fVar20;
  *(float *)(puVar5 + 0x3d) = fVar19;
  puVar10 = puVar5 + 0x46;
  puVar7 = puVar5;
  do {
    puVar11 = puVar10;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar14 = *(undefined4 *)(puVar7 + 1);
    uVar15 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar16 = *(undefined4 *)(puVar7 + 3);
    uVar17 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar14;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar15;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar16;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar17;
    puVar7 = puVar7 + 4;
    puVar10 = puVar11 + 4;
  } while (puVar7 != puVar18);
  uVar1 = *puVar18;
  uVar14 = *(undefined4 *)(puVar5 + 9);
  uVar15 = *(undefined4 *)((int)puVar5 + 0x4c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar14;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar15;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar20 = (boundBox->vMin).field0_0x0.d[1];
  fVar19 = (boundBox->vMax).field0_0x0.d[2];
  *(float *)(puVar5 + 0x46) = (boundBox->vMax).field0_0x0.d[0];
  *(float *)((int)puVar5 + 0x234) = fVar20;
  *(float *)(puVar5 + 0x47) = fVar19;
  puVar10 = puVar5;
  puVar7 = puVar5 + 0x50;
  do {
    puVar12 = puVar7;
    puVar11 = puVar10;
    uVar1 = *puVar11;
                    /* end of inlined section */
    uVar14 = *(undefined4 *)(puVar11 + 1);
    uVar15 = *(undefined4 *)((int)puVar11 + 0xc);
    uVar2 = puVar11[2];
    uVar16 = *(undefined4 *)(puVar11 + 3);
    uVar17 = *(undefined4 *)((int)puVar11 + 0x1c);
    *(int *)puVar12 = (int)uVar1;
    *(int *)((int)puVar12 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar12 + 1) = uVar14;
    *(undefined4 *)((int)puVar12 + 0xc) = uVar15;
    *(int *)(puVar12 + 2) = (int)uVar2;
    *(int *)((int)puVar12 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar12 + 3) = uVar16;
    *(undefined4 *)((int)puVar12 + 0x1c) = uVar17;
    puVar10 = puVar11 + 4;
    puVar7 = puVar12 + 4;
  } while (puVar10 != puVar18);
  uVar1 = *puVar10;
  uVar14 = *(undefined4 *)(puVar11 + 5);
  uVar15 = *(undefined4 *)((int)puVar11 + 0x2c);
  *(int *)(puVar12 + 4) = (int)uVar1;
  *(int *)((int)puVar12 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar12 + 5) = uVar14;
  *(undefined4 *)((int)puVar12 + 0x2c) = uVar15;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar19 = (boundBox->vMax).field0_0x0.d[2];
  fVar20 = (boundBox->vMin).field0_0x0.d[1];
  *(float *)(puVar5 + 0x50) = (boundBox->vMin).field0_0x0.d[0];
  *(float *)((int)puVar5 + 0x284) = fVar20;
  *(float *)(puVar5 + 0x51) = fVar19;
  puVar10 = puVar5 + 0x32;
  puVar18 = puVar5 + 0x5a;
  do {
    puVar11 = puVar18;
    puVar7 = puVar10;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar14 = *(undefined4 *)(puVar7 + 1);
    uVar15 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar16 = *(undefined4 *)(puVar7 + 3);
    uVar17 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar14;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar15;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar16;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar17;
    puVar10 = puVar7 + 4;
    puVar18 = puVar11 + 4;
  } while (puVar10 != puVar5 + 0x3a);
  uVar1 = *puVar10;
  uVar14 = *(undefined4 *)(puVar7 + 5);
  uVar15 = *(undefined4 *)((int)puVar7 + 0x2c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar14;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar15;
  (*(code *)prc->__vtable->Scissor)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->ClipRect,puVar5,10);
                    /* inlined from c:/eor/src2/engine/e_dl.h */
  puVar8 = (undefined4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x1e0,0x10);
                    /* end of inlined section */
  puVar10 = puVar5 + 10;
  puVar4 = puVar8;
  do {
    puVar13 = puVar4;
    puVar18 = puVar10;
    uVar1 = *puVar18;
    uVar14 = *(undefined4 *)(puVar18 + 1);
    uVar15 = *(undefined4 *)((int)puVar18 + 0xc);
    uVar2 = puVar18[2];
    uVar16 = *(undefined4 *)(puVar18 + 3);
    uVar17 = *(undefined4 *)((int)puVar18 + 0x1c);
    *puVar13 = (int)uVar1;
    puVar13[1] = (int)((ulong)uVar1 >> 0x20);
    puVar13[2] = uVar14;
    puVar13[3] = uVar15;
    puVar13[4] = (int)uVar2;
    puVar13[5] = (int)((ulong)uVar2 >> 0x20);
    puVar13[6] = uVar16;
    puVar13[7] = uVar17;
    puVar10 = puVar18 + 4;
    puVar4 = puVar13 + 8;
  } while (puVar10 != puVar5 + 0x12);
  uVar1 = *puVar10;
  uVar14 = *(undefined4 *)(puVar18 + 5);
  uVar15 = *(undefined4 *)((int)puVar18 + 0x2c);
  puVar13[8] = (int)uVar1;
  puVar13[9] = (int)((ulong)uVar1 >> 0x20);
  puVar13[10] = uVar14;
  puVar13[0xb] = uVar15;
  puVar10 = puVar5 + 0x3c;
  puVar4 = puVar8 + 0x14;
  do {
    puVar13 = puVar4;
    puVar18 = puVar10;
    uVar1 = *puVar18;
    uVar14 = *(undefined4 *)(puVar18 + 1);
    uVar15 = *(undefined4 *)((int)puVar18 + 0xc);
    uVar2 = puVar18[2];
    uVar16 = *(undefined4 *)(puVar18 + 3);
    uVar17 = *(undefined4 *)((int)puVar18 + 0x1c);
    *puVar13 = (int)uVar1;
    puVar13[1] = (int)((ulong)uVar1 >> 0x20);
    puVar13[2] = uVar14;
    puVar13[3] = uVar15;
    puVar13[4] = (int)uVar2;
    puVar13[5] = (int)((ulong)uVar2 >> 0x20);
    puVar13[6] = uVar16;
    puVar13[7] = uVar17;
    puVar10 = puVar18 + 4;
    puVar4 = puVar13 + 8;
  } while (puVar10 != puVar5 + 0x44);
  uVar1 = *puVar10;
  uVar14 = *(undefined4 *)(puVar18 + 5);
  uVar15 = *(undefined4 *)((int)puVar18 + 0x2c);
  puVar13[8] = (int)uVar1;
  puVar13[9] = (int)((ulong)uVar1 >> 0x20);
  puVar13[10] = uVar14;
  puVar13[0xb] = uVar15;
  puVar10 = puVar5 + 0x14;
  puVar4 = puVar8 + 0x28;
  do {
    puVar13 = puVar4;
    puVar18 = puVar10;
    uVar1 = *puVar18;
    uVar16 = *(undefined4 *)(puVar18 + 1);
    uVar17 = *(undefined4 *)((int)puVar18 + 0xc);
    uVar2 = puVar18[2];
    uVar14 = *(undefined4 *)(puVar18 + 3);
    uVar15 = *(undefined4 *)((int)puVar18 + 0x1c);
    *puVar13 = (int)uVar1;
    puVar13[1] = (int)((ulong)uVar1 >> 0x20);
    puVar13[2] = uVar16;
    puVar13[3] = uVar17;
    puVar13[4] = (int)uVar2;
    puVar13[5] = (int)((ulong)uVar2 >> 0x20);
    puVar13[6] = uVar14;
    puVar13[7] = uVar15;
    puVar10 = puVar18 + 4;
    puVar4 = puVar13 + 8;
  } while (puVar10 != puVar5 + 0x1c);
  uVar1 = *puVar10;
  uVar14 = *(undefined4 *)(puVar18 + 5);
  uVar15 = *(undefined4 *)((int)puVar18 + 0x2c);
  puVar13[8] = (int)uVar1;
  puVar13[9] = (int)((ulong)uVar1 >> 0x20);
  puVar13[10] = uVar14;
  puVar13[0xb] = uVar15;
  puVar10 = puVar5 + 0x46;
  puVar4 = puVar8 + 0x3c;
  do {
    puVar13 = puVar4;
    puVar18 = puVar10;
    uVar1 = *puVar18;
    uVar14 = *(undefined4 *)(puVar18 + 1);
    uVar15 = *(undefined4 *)((int)puVar18 + 0xc);
    uVar2 = puVar18[2];
    uVar16 = *(undefined4 *)(puVar18 + 3);
    uVar17 = *(undefined4 *)((int)puVar18 + 0x1c);
    *puVar13 = (int)uVar1;
    puVar13[1] = (int)((ulong)uVar1 >> 0x20);
    puVar13[2] = uVar14;
    puVar13[3] = uVar15;
    puVar13[4] = (int)uVar2;
    puVar13[5] = (int)((ulong)uVar2 >> 0x20);
    puVar13[6] = uVar16;
    puVar13[7] = uVar17;
    puVar10 = puVar18 + 4;
    puVar4 = puVar13 + 8;
  } while (puVar10 != puVar5 + 0x4e);
  uVar1 = *puVar10;
  uVar14 = *(undefined4 *)(puVar18 + 5);
  uVar15 = *(undefined4 *)((int)puVar18 + 0x2c);
  puVar13[8] = (int)uVar1;
  puVar13[9] = (int)((ulong)uVar1 >> 0x20);
  puVar13[10] = uVar14;
  puVar13[0xb] = uVar15;
  puVar4 = puVar8 + 0x50;
  puVar10 = puVar5 + 0x1e;
  do {
    puVar18 = puVar10;
    puVar13 = puVar4;
    uVar1 = *puVar18;
    uVar14 = *(undefined4 *)(puVar18 + 1);
    uVar15 = *(undefined4 *)((int)puVar18 + 0xc);
    uVar2 = puVar18[2];
    uVar16 = *(undefined4 *)(puVar18 + 3);
    uVar17 = *(undefined4 *)((int)puVar18 + 0x1c);
    *puVar13 = (int)uVar1;
    puVar13[1] = (int)((ulong)uVar1 >> 0x20);
    puVar13[2] = uVar14;
    puVar13[3] = uVar15;
    puVar13[4] = (int)uVar2;
    puVar13[5] = (int)((ulong)uVar2 >> 0x20);
    puVar13[6] = uVar16;
    puVar13[7] = uVar17;
    puVar10 = puVar18 + 4;
    puVar4 = puVar13 + 8;
  } while (puVar10 != puVar5 + 0x26);
  uVar1 = *puVar10;
  uVar14 = *(undefined4 *)(puVar18 + 5);
  uVar15 = *(undefined4 *)((int)puVar18 + 0x2c);
  puVar13[8] = (int)uVar1;
  puVar13[9] = (int)((ulong)uVar1 >> 0x20);
  puVar13[10] = uVar14;
  puVar13[0xb] = uVar15;
  puVar4 = puVar8 + 100;
  puVar10 = puVar5 + 0x50;
  do {
    puVar18 = puVar10;
    puVar13 = puVar4;
    uVar1 = *puVar18;
    uVar16 = *(undefined4 *)(puVar18 + 1);
    uVar17 = *(undefined4 *)((int)puVar18 + 0xc);
    uVar2 = puVar18[2];
    uVar14 = *(undefined4 *)(puVar18 + 3);
    uVar15 = *(undefined4 *)((int)puVar18 + 0x1c);
    *puVar13 = (int)uVar1;
    puVar13[1] = (int)((ulong)uVar1 >> 0x20);
    puVar13[2] = uVar16;
    puVar13[3] = uVar17;
    puVar13[4] = (int)uVar2;
    puVar13[5] = (int)((ulong)uVar2 >> 0x20);
    puVar13[6] = uVar14;
    puVar13[7] = uVar15;
    puVar10 = puVar18 + 4;
    puVar4 = puVar13 + 8;
  } while (puVar10 != puVar5 + 0x58);
  uVar1 = *puVar10;
  uVar14 = *(undefined4 *)(puVar18 + 5);
  uVar15 = *(undefined4 *)((int)puVar18 + 0x2c);
  puVar13[8] = (int)uVar1;
  puVar13[9] = (int)((ulong)uVar1 >> 0x20);
  puVar13[10] = uVar14;
  puVar13[0xb] = uVar15;
  (*(code *)prc->__vtable->ClipRatio)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Viewport,puVar8,6);
  (*(code *)prc->__vtable[1].TriList)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriFan);
  return;
}

void EPrimitive::WireCircle(ERC *prc, float radius, int axis, EVec4 vColor, int res, EVec3 vOffset) {
	int nVerts;
	float resInc;
	EVec4 *this;
	EVec4 *this;
	int i;
	ERC *this;
	int i;
	EGEVert &v;
	float angle;
	int firstD;
	int col;
	EVec4 *this;
	int value;
	int d;
	EVec4 *this;
	int value;
	EVec3 *this;
	int value;
	EVec4 *this;
	int value;
	EVec3 *this;
	int value;
	EVec4 *this;
	int value;
	EVec3 *this;
	int value;
	
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  EVec4__null___1__1 *pEVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  EVec4 *pEVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float *in_t0_lo;
  float *pfVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  EVec3 *this;
  int nVerts;
  
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  iVar8 = 3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  fVar18 = (vColor->field0_0x0).d[1];
  fVar20 = (vColor->field0_0x0).d[2];
  fVar19 = (vColor->field0_0x0).d[3];
  (vColor->field0_0x0).d[0] = (vColor->field0_0x0).d[0] * 128.0;
  (vColor->field0_0x0).d[1] = fVar18 * 128.0;
  (vColor->field0_0x0).d[2] = fVar20 * 128.0;
  (vColor->field0_0x0).d[3] = fVar19 * 128.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  pEVar7 = vColor;
  do {
    fVar19 = (pEVar7->field0_0x0).d[0];
    fVar18 = 0.0;
    if (0.0 <= fVar19) {
      fVar18 = (float)((int)fVar19 * (uint)(fVar19 < 255.0) | (uint)(fVar19 >= 255.0) * 0x437f0000);
    }
    (pEVar7->field0_0x0).d[0] = fVar18;
    iVar8 = iVar8 + -1;
    pEVar7 = (EVec4 *)((int)&pEVar7->field0_0x0 + 4);
  } while (-1 < iVar8);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_rc.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_dl.h */
  puVar5 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,(res + 1) * 0x50,0x10);
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/e_dl.h */
                    /* end of inlined section */
  iVar8 = 0;
  if (-1 < res) {
    do {
      puVar17 = puVar5 + iVar8 * 10;
      if (iVar8 == res) {
        puVar10 = puVar5;
        do {
          puVar6 = puVar10;
          puVar9 = puVar17;
          uVar1 = *puVar6;
          uVar12 = *(undefined4 *)(puVar6 + 1);
          uVar13 = *(undefined4 *)((int)puVar6 + 0xc);
          uVar2 = puVar6[2];
          uVar14 = *(undefined4 *)(puVar6 + 3);
          uVar15 = *(undefined4 *)((int)puVar6 + 0x1c);
          *(int *)puVar9 = (int)uVar1;
          *(int *)((int)puVar9 + 4) = (int)((ulong)uVar1 >> 0x20);
          *(undefined4 *)(puVar9 + 1) = uVar12;
          *(undefined4 *)((int)puVar9 + 0xc) = uVar13;
          *(int *)(puVar9 + 2) = (int)uVar2;
          *(int *)((int)puVar9 + 0x14) = (int)((ulong)uVar2 >> 0x20);
          *(undefined4 *)(puVar9 + 3) = uVar14;
          *(undefined4 *)((int)puVar9 + 0x1c) = uVar15;
          puVar10 = puVar6 + 4;
          puVar17 = puVar9 + 4;
        } while (puVar10 != puVar5 + 8);
        uVar1 = *puVar10;
        uVar12 = *(undefined4 *)(puVar6 + 5);
        uVar13 = *(undefined4 *)((int)puVar6 + 0x2c);
        *(int *)(puVar9 + 4) = (int)uVar1;
        *(int *)((int)puVar9 + 0x24) = (int)((ulong)uVar1 >> 0x20);
        *(undefined4 *)(puVar9 + 5) = uVar12;
        *(undefined4 *)((int)puVar9 + 0x2c) = uVar13;
      }
      else {
        puVar10 = puVar17 + 6;
        iVar11 = 3;
        pEVar7 = vColor;
        do {
          pEVar4 = &pEVar7->field0_0x0;
                    /* end of inlined section */
          iVar11 = iVar11 + -1;
          pEVar7 = (EVec4 *)((int)&pEVar7->field0_0x0 + 4);
          *(int *)puVar10 = (int)pEVar4->d[0];
          puVar10 = (undefined8 *)((int)puVar10 + 4);
        } while (-1 < iVar11);
        *(undefined4 *)(puVar17 + 2) = 0;
        fVar18 = (float)iVar8 * (6.283185 / (float)res);
        *(undefined4 *)((int)puVar17 + 0x14) = 0;
        *(undefined4 *)(puVar17 + 3) = 0;
        bVar3 = true;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        *(undefined4 *)(puVar17 + 4) = 0;
                    /* end of inlined section */
        iVar11 = 0;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        *(undefined4 *)((int)puVar17 + 0x2c) = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        *(undefined4 *)((int)puVar17 + 0x24) = 0;
        *(undefined4 *)(puVar17 + 5) = 0;
        pfVar16 = in_t0_lo;
        do {
          if (iVar11 == axis) {
                    /* end of inlined section */
            *(float *)puVar17 = *pfVar16;
          }
          else {
            if (bVar3) {
              bVar3 = false;
              fVar19 = sinf(fVar18);
              fVar19 = radius * fVar19;
            }
            else {
                    /* end of inlined section */
              fVar19 = cosf(fVar18);
              fVar19 = radius * fVar19;
            }
            *(float *)puVar17 = *pfVar16 + fVar19;
          }
          iVar11 = iVar11 + 1;
          puVar17 = (undefined8 *)((int)puVar17 + 4);
          pfVar16 = pfVar16 + 1;
        } while (iVar11 < 3);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= res);
  }
  (*(code *)prc->__vtable->Scissor)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->ClipRect,puVar5,res + 1);
  return;
}

void EPrimitive::WireSphere(ERC *prc, EBoundSphere &sphere, EVec4 vColor, int res, int isoparms) {
	int d;
	int i;
	float fa;
	EVec3 vPos;
	int value;
	EVec4 &v;
	EVec3 &v;
	
  bool bVar1;
  int iVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int axis;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar3;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar4;
  float fVar5;
  float fVar6;
  EVec3 vPos;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  int local_c0;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s6;
  uStack_4c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s4;
  uStack_6c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_80 = (undefined4)unaff_s3;
  uStack_7c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_c0 = isoparms + 1;
  local_90 = (undefined4)unaff_s2;
  uStack_8c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s1;
  uStack_9c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s7;
  uStack_3c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s5;
  uStack_5c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_b0 = (undefined4)unaff_s0;
  uStack_ac = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar5 = 1.0;
  (*(code *)prc->__vtable[1].Vertex)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriIndexed)
  ;
  (*(code *)prc->__vtable->EndCommand)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->BeginCommand,8);
  (*(code *)prc->__vtable[1].TriStrip)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriStrip,0,0);
  axis = 0;
  do {
    iVar3 = axis + 1;
    if (0 < isoparms) {
      fVar6 = (float)local_c0;
      iVar2 = 1;
      do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        vPos.field0_0x0.d[2] = 0.0;
        vPos.field0_0x0.d[1] = 0.0;
        vPos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
        fVar4 = ((float)iVar2 / fVar6 + (float)iVar2 / fVar6) - fVar5;
        vPos.field0_0x0.d[axis] = sphere->radius * fVar4;
        fVar4 = fabsf(fVar4);
        fVar4 = asinf(fVar4);
        fVar4 = cosf(fVar4);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_d0 = vPos.field0_0x0.d[0] + (sphere->vCenter).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        local_cc = vPos.field0_0x0.d[1] + (sphere->vCenter).field0_0x0.d[1];
        local_e0 = (vColor->field0_0x0).d[0];
        local_c8 = vPos.field0_0x0.d[2] + (sphere->vCenter).field0_0x0.d[2];
        local_dc = (vColor->field0_0x0).d[1];
        local_d8 = (vColor->field0_0x0).d[2];
        local_d4 = (vColor->field0_0x0).d[3];
                    /* end of inlined section */
        WireCircle__10EPrimitiveP3ERCfiG5EVec4iG5EVec3
                  (prc,sphere->radius * fVar4,axis,(EVec4 *)&local_e0,res,
                   (EVec3)CONCAT48(vPos.field0_0x0.d[2],
                                   CONCAT44(vPos.field0_0x0.d[1],vPos.field0_0x0.d[0])));
        bVar1 = iVar2 < isoparms;
        iVar2 = iVar2 + 1;
      } while (bVar1);
    }
    axis = iVar3;
  } while (iVar3 < 3);
  (*(code *)prc->__vtable[1].TriList)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].TriFan);
  return;
}
