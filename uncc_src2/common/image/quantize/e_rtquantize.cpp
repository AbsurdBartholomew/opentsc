// STATUS: NOT STARTED

#include "e_rtquantize.h"

ERTQuantize* ERTQuantize::ERTQuantize() {
  bool bVar1;
  int iVar2;
  
                    /* end of inlined section */
  iVar2 = 0xfe;
  do {
    bVar1 = iVar2 != -1;
    iVar2 = iVar2 + -1;
  } while (bVar1);
                    /* end of inlined section */
  this->m_mode = 0;
  this->m_pFreeNodeHead = (void *)0x0;
  this->m_pSegHead = (void *)0x0;
  return this;
}

void ERTQuantize::~ERTQuantize(int __in_chrg) {
	void *pAddress;
	
  Deallocate__11ERTQuantize(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void ERTQuantize::Deallocate() {
	void *pSeg;
	void *pNextSeg;
	
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  this->m_pFreeNodeHead = (void *)0x0;
  puVar2 = (undefined4 *)this->m_pSegHead;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    (*(code *)this->m_pfnFree)(puVar2);
    puVar2 = puVar1;
  }
  this->m_pSegHead = (void *)0x0;
  return;
}

void ERTQuantize::Init(u32 maxColors, u32 maxMemUsage, FnAlloc pfnAlloc, FnFree pfnFree, bool YUVColorSpace) {
	int nodesPerSeg;
	EVec3 vTrans;
	EVec3 vScale;
	int cc;
	
  uint uVar1;
  int *piVar2;
  int iVar3;
  EMat4 *this_00;
  EVec3 vTrans;
  EVec3 vScale;
  
  Deallocate__11ERTQuantize(this);
  if ((pfnAlloc == (undefined1 *)0x0) || (pfnFree == (undefined1 *)0x0)) {
    this->m_pfnAlloc = DefaultAlloc__11ERTQuantizeUi;
    this->m_pfnFree = DefaultFree__11ERTQuantizePv;
  }
  else {
    this->m_pfnAlloc = pfnAlloc;
    this->m_pfnFree = pfnFree;
  }
  this_00 = &this->m_mTrans;
  uVar1 = 0x100;
  if (maxColors < 0x101) {
    uVar1 = maxColors;
  }
  this->m_nNodes = 0;
  this->m_maxColors = uVar1;
  this->m_maxNodes = (maxMemUsage >> 0xc) * 0x34 - 10;
  Id__5EMat4(this_00);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  vTrans.field0_0x0.d[2] = 127.5;
  vScale.field0_0x0.d[0] = 1.0;
  vScale.field0_0x0.d[2] = 0.3333333;
  (this->m_mTrans).field0_0x0.d[0] = 0.299;
  (this->m_mTrans).field0_0x0.d[1][0] = 0.587;
  (this->m_mTrans).field0_0x0.d[2][0] = 0.114;
  (this->m_mTrans).field0_0x0.d[1] = -0.1474;
  (this->m_mTrans).field0_0x0.d[1][1] = -0.2895;
  (this->m_mTrans).field0_0x0.d[2][1] = 0.4369;
  (this->m_mTrans).field0_0x0.d[2] = 0.615;
  (this->m_mTrans).field0_0x0.d[1][2] = -0.515;
  (this->m_mTrans).field0_0x0.d[2][2] = -0.1;
  vTrans.field0_0x0.d[0] = 0.0;
  vTrans.field0_0x0.d[1] = 127.5;
  vScale.field0_0x0.d[1] = 0.3333333;
  PostTranslate__5EMat4RC5EVec3(this_00,&vTrans);
  PostScale__5EMat4RC5EVec3(this_00,&vScale);
  Invert__5EMat4RC5EMat4(&this->m_mInvTrans,this_00);
  InitializeCube__11ERTQuantize(this);
  iVar3 = 0x1fe;
  piVar2 = &this->m_cache[0x1fe].data;
  do {
    *piVar2 = 0;
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + -2;
  } while (-1 < iVar3);
  *(int *)&this->m_YUVColorSpace = (int)YUVColorSpace;
  this->m_mode = 1;
  return;
}

void* ERTQuantize::DefaultAlloc(u32 size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,4);
  return pvVar1;
}

void ERTQuantize::DefaultFree(void *p) {
  _memmanFree__FPv(p);
  return;
}

void ERTQuantize::InitializeCube() {
	u32 number_pixels;
	u32 max_shift;
	u32 level;
	
  uint uVar1;
  ERTQNode *pEVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s0;
  uStack_1c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  this->m_depth = 10;
  uVar3 = 0x28;
  uVar1 = 0xffffffff;
  do {
    uVar1 = uVar1 >> 1;
    uVar3 = uVar3 - 1;
  } while (uVar1 != 0);
  uVar1 = 0;
  puVar4 = this->m_shift;
  do {
    *puVar4 = uVar3;
    uVar1 = uVar1 + 1;
    if (uVar3 != 0) {
      uVar3 = uVar3 - 1;
    }
    puVar4 = puVar4 + 1;
  } while (uVar1 <= this->m_depth);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_30 = 0x43800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_28 = 0x43800000;
                    /* end of inlined section */
                    /* end of inlined section */
  local_2c = 0x43800000;
  pEVar2 = InitializeNode__11ERTQuantizeUcUiP8ERTQNodeRC5EVec3
                     (this,'\0',0,(ERTQNode *)0x0,(EVec3 *)&local_30);
  this->m_root = pEVar2;
  pEVar2->parent = pEVar2;
  this->m_root->number_colors = 0xffffffff;
  this->m_nColors = 0;
  return;
}

ERTQNode* ERTQuantize::InitializeNode(u8 id, u32 level, ERTQNode *parent, EVec3 &vMidColor) {
	ERTQNode *node;
	ERTQuantize *this;
	ERTQNode *p;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ERTQNode *pEVar6;
  ulong uVar7;
  int iVar8;
  
                    /* inlined from c:/eor/src2/common/image/quantize/e_rtquantize.h */
  pEVar6 = (ERTQNode *)this->m_pFreeNodeHead;
  if (pEVar6 == (ERTQNode *)0x0) {
    pEVar6 = (ERTQNode *)AllocNewSeg__11ERTQuantize(this);
  }
  else {
    this->m_pFreeNodeHead = pEVar6->parent;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/image/quantize/e_rtquantize.h */
                    /* end of inlined section */
  iVar8 = 8;
  uVar7 = (ulong)(int)&pEVar6->number_colors;
  this->m_nNodes = this->m_nNodes + 1;
  pEVar6->parent = parent;
  do {
    *(undefined4 *)uVar7 = 0;
    iVar8 = iVar8 + -1;
    uVar7 = (ulong)(int)((undefined4 *)uVar7 + -1);
  } while (-1 < iVar8);
  pEVar6->id = id;
  pEVar6->level = (uchar)level;
  pEVar6->children = 0;
  puVar1 = (undefined *)((int)&vMidColor->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)vMidColor & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar7 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)vMidColor - uVar3) >> uVar3 * 8;
  fVar4 = (vMidColor->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(pEVar6->vMidColor).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)&pEVar6->vMidColor & 7;
  puVar5 = (ulong *)((int)&pEVar6->vMidColor - uVar2);
  *puVar5 = uVar7 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (pEVar6->vMidColor).field0_0x0.d[2] = fVar4;
  pEVar6->number_colors = 0;
  pEVar6->number_unique = 0;
  puVar1 = (undefined *)((int)&(pEVar6->vTotalColor).field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&pEVar6->vTotalColor & 7;
  puVar5 = (ulong *)((int)&pEVar6->vTotalColor - uVar2);
  *puVar5 = 0L << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (pEVar6->vTotalColor).field0_0x0.d[2] = 0.0;
  return pEVar6;
}

void* ERTQuantize::AllocNewSeg() {
	void *p;
	void *pSeg;
	
  void *pvVar1;
  long lVar2;
  void **ppvVar3;
  void **ppvVar4;
  void **ppvVar5;
  
  lVar2 = (*(code *)this->m_pfnAlloc)(0x1000);
  ppvVar4 = (void **)lVar2;
  if (lVar2 == 0) {
    ppvVar5 = (void **)0x0;
  }
  else {
    ppvVar5 = ppvVar4 + 0x13;
    ppvVar3 = ppvVar4 + 0x3dc;
    *ppvVar4 = this->m_pSegHead;
    this->m_pSegHead = ppvVar4;
    pvVar1 = this->m_pFreeNodeHead;
    while( true ) {
      *ppvVar3 = pvVar1;
      this->m_pFreeNodeHead = ppvVar3;
      ppvVar3 = ppvVar3 + -0x13;
      if ((int)ppvVar3 < (int)(ppvVar4 + 0x26)) break;
      pvVar1 = this->m_pFreeNodeHead;
    }
  }
  return ppvVar5;
}

void ERTQuantize::AddPixel(unsigned char *color) {
	u32 packedColor;
	ERTQCacheNode &cn;
	
  int iVar1;
  ERTQCacheNode *cn;
  uint uVar2;
  
  uVar2 = (uint)*(uint3 *)color;
  cn = this->m_cache + uVar2 % 0x1ff;
  if (cn->color == uVar2) {
    iVar1 = cn->data + 1;
  }
  else {
    if (cn->data != 0) {
      FlushAdd__11ERTQuantizeR13ERTQCacheNode(this,cn);
    }
    iVar1 = 1;
    cn->color = uVar2;
  }
  cn->data = iVar1;
  return;
}

void ERTQuantize::FlushAdd(ERTQCacheNode &cn) {
	unsigned char color[3];
	EVec3 vYuv;
	
  uchar color [3];
  EVec3 vYuv;
  
  color[0] = *(uchar *)&cn->color;
  color[1] = (uchar)(cn->color >> 8);
  color[2] = (uchar)(cn->color >> 0x10);
  TransformToYuv__11ERTQuantizePUcR5EVec3(this,color,&vYuv);
  Classify__11ERTQuantizeRC5EVec3i(this,&vYuv,cn->data);
  return;
}

void ERTQuantize::TransformToYuv(unsigned char *colorIn, EVec3 &vYuvOut) {
	EVec3 vInColor;
	EMat4 &mRight;
	EVec3 *this;
	int i;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  EVec3 vInColor;
  
  if (*(int *)&this->m_YUVColorSpace == 0) {
                    /* end of inlined section */
    (vYuvOut->field0_0x0).d[0] = (float)(uint)*colorIn;
    (vYuvOut->field0_0x0).d[1] = (float)(uint)colorIn[1];
    (vYuvOut->field0_0x0).d[2] = (float)(uint)colorIn[2];
  }
  else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    fVar6 = (float)(uint)*colorIn;
    fVar10 = (float)(uint)colorIn[2];
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    fVar9 = (float)(uint)colorIn[1];
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    iVar5 = 2;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar7 = (this->m_mTrans).field0_0x0.d[2];
    fVar11 = (this->m_mTrans).field0_0x0.d[1][2];
    fVar8 = (this->m_mTrans).field0_0x0.d[2][2];
    fVar12 = (this->m_mTrans).field0_0x0.d[3][2];
                    /* end of inlined section */
    uVar4 = CONCAT44(fVar6 * (this->m_mTrans).field0_0x0.d[1] +
                     fVar9 * (this->m_mTrans).field0_0x0.d[1][1] +
                     fVar10 * (this->m_mTrans).field0_0x0.d[2][1] +
                     (this->m_mTrans).field0_0x0.d[3][1],
                     fVar6 * (this->m_mTrans).field0_0x0.d[0] +
                     fVar9 * (this->m_mTrans).field0_0x0.d[1][0] +
                     fVar10 * (this->m_mTrans).field0_0x0.d[2][0] +
                     (this->m_mTrans).field0_0x0.d[3][0]);
    puVar1 = (undefined *)((int)&vYuvOut->field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
    uVar2 = (uint)vYuvOut & 7;
    *(ulong *)((int)vYuvOut - uVar2) =
         uVar4 << uVar2 * 8 |
         *(ulong *)((int)vYuvOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (vYuvOut->field0_0x0).d[2] = fVar6 * fVar7 + fVar9 * fVar11 + fVar10 * fVar8 + fVar12;
    do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar7 = (vYuvOut->field0_0x0).d[0];
      fVar6 = 0.0;
      if (0.0 <= fVar7) {
        fVar6 = (float)((int)fVar7 * (uint)(fVar7 < 255.0) | (uint)(fVar7 >= 255.0) * 0x437f0000);
      }
      (vYuvOut->field0_0x0).d[0] = fVar6;
      iVar5 = iVar5 + -1;
      vYuvOut = (EVec3 *)((int)&vYuvOut->field0_0x0 + 4);
    } while (-1 < iVar5);
  }
  return;
}

void ERTQuantize::TransformFromYUV(EVec3 &vYuvIn, unsigned char *colorOut) {
	EVec3 vRgbOut;
	EVec3 &vLeft;
	EMat4 &mRight;
	int i;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  uchar uVar1;
  EVec3 *pEVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  EVec3 vRgbOut;
  
  pEVar2 = &vRgbOut;
  if (*(int *)&this->m_YUVColorSpace == 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar4 = (vYuvIn->field0_0x0).d[0];
                    /* end of inlined section */
    uVar1 = '\0';
                    /* end of inlined section */
    if ((fVar4 < 0.0) || (uVar1 = 0xff, 255.0 < fVar4)) {
      *colorOut = uVar1;
    }
    else {
                    /* end of inlined section */
      *colorOut = (uchar)(int)fVar4;
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar4 = (vYuvIn->field0_0x0).d[1];
                    /* end of inlined section */
    uVar1 = '\0';
                    /* end of inlined section */
    if ((fVar4 < 0.0) || (uVar1 = 0xff, 255.0 < fVar4)) {
      colorOut[1] = uVar1;
    }
    else {
                    /* end of inlined section */
      colorOut[1] = (uchar)(int)fVar4;
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar4 = (vYuvIn->field0_0x0).d[2];
                    /* end of inlined section */
    uVar1 = '\0';
                    /* end of inlined section */
    if ((fVar4 < 0.0) || (uVar1 = 0xff, 255.0 < fVar4)) {
      colorOut[2] = uVar1;
    }
    else {
                    /* end of inlined section */
      colorOut[2] = (uchar)(int)fVar4;
    }
  }
  else {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar4 = (vYuvIn->field0_0x0).d[0];
    fVar5 = (vYuvIn->field0_0x0).d[1];
    iVar3 = 2;
    fVar6 = (vYuvIn->field0_0x0).d[2];
    vRgbOut.field0_0x0.d[0] =
         fVar4 * (this->m_mInvTrans).field0_0x0.d[0] +
         fVar5 * (this->m_mInvTrans).field0_0x0.d[1][0] +
         fVar6 * (this->m_mInvTrans).field0_0x0.d[2][0] + (this->m_mInvTrans).field0_0x0.d[3][0];
    vRgbOut.field0_0x0.d[2] =
         fVar4 * (this->m_mInvTrans).field0_0x0.d[2] +
         fVar5 * (this->m_mInvTrans).field0_0x0.d[1][2] +
         fVar6 * (this->m_mInvTrans).field0_0x0.d[2][2] + (this->m_mInvTrans).field0_0x0.d[3][2];
    vRgbOut.field0_0x0.d[1] =
         fVar4 * (this->m_mInvTrans).field0_0x0.d[1] +
         fVar5 * (this->m_mInvTrans).field0_0x0.d[1][1] +
         fVar6 * (this->m_mInvTrans).field0_0x0.d[2][1] + (this->m_mInvTrans).field0_0x0.d[3][1];
    do {
      fVar5 = *(float *)pEVar2;
      fVar4 = 0.0;
      if (0.0 <= fVar5) {
        fVar4 = (float)((int)fVar5 * (uint)(fVar5 < 255.0) | (uint)(fVar5 >= 255.0) * 0x437f0000);
      }
      *(float *)pEVar2 = fVar4;
      iVar3 = iVar3 + -1;
      pEVar2 = (EVec3 *)((int)pEVar2 + 4);
    } while (-1 < iVar3);
                    /* end of inlined section */
    *colorOut = (uchar)(int)vRgbOut.field0_0x0.d[0];
    colorOut[1] = (uchar)(int)vRgbOut.field0_0x0.d[1];
    colorOut[2] = (uchar)(int)vRgbOut.field0_0x0.d[2];
  }
  return;
}

void ERTQuantize::Classify(EVec3 &vColor, int count) {
	ERTQNode *node;
	u32 level;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	float bisect;
	EVec3 vMidColor;
	int m;
	int value;
	int value;
	EVec3 *this;
	EVec3 *this;
	
  uint *puVar1;
  uint uVar2;
  ERTQNode *pEVar3;
  EVec3 *pEVar4;
  EVec3 *pEVar5;
  uint uVar6;
  ERTQNode *parent;
  uint level;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  EVec3 vMidColor;
  
  if (this->m_maxNodes < this->m_nNodes) {
    do {
      PruneLevel__11ERTQuantizeP8ERTQNode(this,this->m_root);
      this->m_depth = this->m_depth - 1;
    } while (this->m_maxNodes < this->m_nNodes);
  }
  level = 1;
  parent = this->m_root;
  if (this->m_depth != 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar7 = (vColor->field0_0x0).d[0];
    while( true ) {
                    /* end of inlined section */
      uVar2 = (uint)((parent->vMidColor).field0_0x0.d[0] < fVar7);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      if ((parent->vMidColor).field0_0x0.d[1] < (vColor->field0_0x0).d[1]) {
        uVar2 = uVar2 | 2;
      }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      if ((parent->vMidColor).field0_0x0.d[2] < (vColor->field0_0x0).d[2]) {
        uVar2 = uVar2 | 4;
      }
      if (parent->child[uVar2] == (ERTQNode *)0x0) {
        uVar6 = 0;
        pEVar5 = &parent->vMidColor;
        fVar7 = 256.0 / (float)(1 << (level & 0x1f));
        parent->children = parent->children | (ushort)(1 << uVar2);
        pEVar4 = &vMidColor;
        do {
                    /* end of inlined section */
          if (((int)uVar2 >> (uVar6 & 0x1f) & 1U) == 0) {
            fVar8 = (pEVar5->field0_0x0).d[0] - fVar7;
          }
          else {
            fVar8 = (pEVar5->field0_0x0).d[0] + fVar7;
          }
          *(float *)pEVar4 = fVar8;
          uVar6 = uVar6 + 1;
          pEVar5 = (EVec3 *)((int)&pEVar5->field0_0x0 + 4);
          pEVar4 = (EVec3 *)((int)pEVar4 + 4);
        } while ((int)uVar6 < 3);
        pEVar3 = InitializeNode__11ERTQuantizeUcUiP8ERTQNodeRC5EVec3
                           (this,(uchar)uVar2,level,parent,&vMidColor);
        parent->child[uVar2] = pEVar3;
        if (pEVar3 == (ERTQNode *)0x0) {
          return;
        }
        if (level == this->m_depth) {
          this->m_nColors = this->m_nColors + 1;
        }
      }
      parent = parent->child[uVar2];
      puVar1 = this->m_shift + level;
      level = level + 1;
      parent->number_colors = parent->number_colors + (count << (*puVar1 & 0x1f));
      if (this->m_depth < level) break;
      fVar7 = (vColor->field0_0x0).d[0];
    }
  }
  fVar9 = (float)count;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  parent->number_unique = parent->number_unique + count;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = (vColor->field0_0x0).d[2];
  fVar7 = (vColor->field0_0x0).d[1];
  (parent->vTotalColor).field0_0x0.d[0] =
       (parent->vTotalColor).field0_0x0.d[0] + (vColor->field0_0x0).d[0] * fVar9;
  fVar10 = (parent->vTotalColor).field0_0x0.d[2];
  (parent->vTotalColor).field0_0x0.d[1] = (parent->vTotalColor).field0_0x0.d[1] + fVar7 * fVar9;
  (parent->vTotalColor).field0_0x0.d[2] = fVar10 + fVar8 * fVar9;
                    /* end of inlined section */
  return;
}

void ERTQuantize::PruneLevel(ERTQNode *node) {
	u32 id;
	
  ERTQNode **ppEVar1;
  uint uVar2;
  
  if (node->children != 0) {
    uVar2 = 0;
    ppEVar1 = node->child;
    do {
      if (((int)(uint)(ushort)node->children >> (uVar2 & 0x1f) & 1U) != 0) {
        PruneLevel__11ERTQuantizeP8ERTQNode(this,*ppEVar1);
      }
      uVar2 = uVar2 + 1;
      ppEVar1 = ppEVar1 + 1;
    } while (uVar2 < 9);
  }
  if ((uint)node->level == this->m_depth) {
    PruneChild__11ERTQuantizeP8ERTQNode(this,node);
  }
  return;
}

void ERTQuantize::PruneChild(ERTQNode *node) {
	ERTQNode *parent;
	EVec3 *this;
	EVec3 &v;
	ERTQuantize *this;
	ERTQNode *p;
	
  ERTQNode *pEVar1;
  float fVar2;
  
  pEVar1 = node->parent;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  pEVar1->children = pEVar1->children & ~(ushort)(1 << (node->id & 0x1f));
  pEVar1->child[node->id] = (ERTQNode *)0x0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar2 = (pEVar1->vTotalColor).field0_0x0.d[0];
                    /* end of inlined section */
  pEVar1->number_unique = pEVar1->number_unique + node->number_unique;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  (pEVar1->vTotalColor).field0_0x0.d[0] = fVar2 + (node->vTotalColor).field0_0x0.d[0];
  fVar2 = (pEVar1->vTotalColor).field0_0x0.d[2];
  (pEVar1->vTotalColor).field0_0x0.d[1] =
       (pEVar1->vTotalColor).field0_0x0.d[1] + (node->vTotalColor).field0_0x0.d[1];
  (pEVar1->vTotalColor).field0_0x0.d[2] = fVar2 + (node->vTotalColor).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/common/image/quantize/e_rtquantize.h */
  this->m_nNodes = this->m_nNodes - 1;
  if (node != (ERTQNode *)0x0) {
    node->parent = (ERTQNode *)this->m_pFreeNodeHead;
    this->m_pFreeNodeHead = node;
  }
  return;
}

void ERTQuantize::Compute() {
	int cc;
	
  ERTQuantize *cn;
  int iVar1;
  
  iVar1 = 0x1fe;
  cn = this;
  do {
    if (cn->m_cache[0].data != 0) {
      FlushAdd__11ERTQuantizeR13ERTQCacheNode(this,cn->m_cache);
    }
    cn->m_cache[0].data = -1;
    iVar1 = iVar1 + -1;
    cn = (ERTQuantize *)(cn->m_cache + 1);
  } while (-1 < iVar1);
  Reduction__11ERTQuantize(this);
  this->m_nColors = 0;
  MColormap__11ERTQuantizeP8ERTQNode(this,this->m_root);
  this->m_mode = 2;
  return;
}

void ERTQuantize::Reduction() {
  uint uVar1;
  
  if (this->m_maxColors < this->m_nColors) {
    this->m_nextPruningThreshold = 1;
    uVar1 = this->m_nextPruningThreshold;
    while( true ) {
      this->m_nextPruningThreshold = 0xffffffff;
      this->m_nColors = 0;
      this->m_pruningThreshold = uVar1;
      Reduce__11ERTQuantizeP8ERTQNode(this,this->m_root);
      if (this->m_nColors <= this->m_maxColors) break;
      uVar1 = this->m_nextPruningThreshold;
    }
  }
  return;
}

void ERTQuantize::Reduce(ERTQNode *node) {
	u32 id;
	
  ERTQNode **ppEVar1;
  uint uVar2;
  
  if (node->children != 0) {
    uVar2 = 0;
    ppEVar1 = node->child;
    do {
      if (((int)(uint)(ushort)node->children >> (uVar2 & 0x1f) & 1U) != 0) {
        Reduce__11ERTQuantizeP8ERTQNode(this,*ppEVar1);
      }
      uVar2 = uVar2 + 1;
      ppEVar1 = ppEVar1 + 1;
    } while (uVar2 < 9);
  }
  if (node->number_unique == 0) {
    uVar2 = node->number_colors;
  }
  else {
    this->m_nColors = this->m_nColors + 1;
    uVar2 = node->number_colors;
  }
  if (uVar2 < this->m_nextPruningThreshold) {
    if (uVar2 <= this->m_pruningThreshold) goto LAB_0031f2f0;
    this->m_nextPruningThreshold = uVar2;
    uVar2 = node->number_colors;
  }
  else {
    uVar2 = node->number_colors;
  }
  if (this->m_pruningThreshold < uVar2) {
    return;
  }
LAB_0031f2f0:
  PruneChild__11ERTQuantizeP8ERTQNode(this,node);
  return;
}

void ERTQuantize::MColormap(ERTQNode *node) {
	u32 id;
	float unique;
	EVec3 *this;
	float scaler;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ERTQNode **ppEVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  if (node->children != 0) {
    uVar6 = 0;
    ppEVar5 = node->child;
    do {
      if (((int)(uint)(ushort)node->children >> (uVar6 & 0x1f) & 1U) != 0) {
        MColormap__11ERTQuantizeP8ERTQNode(this,*ppEVar5);
      }
      uVar6 = uVar6 + 1;
      ppEVar5 = ppEVar5 + 1;
    } while (uVar6 < 9);
  }
  uVar6 = node->number_unique;
  if (uVar6 != 0) {
    if ((int)uVar6 < 0) {
      fVar7 = (float)(uVar6 & 1 | uVar6 >> 1);
      fVar7 = fVar7 + fVar7;
    }
    else {
      fVar7 = (float)uVar6;
    }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar6 = this->m_nColors;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar7 = 1.0 / fVar7;
    fVar8 = (node->vTotalColor).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar4 = CONCAT44((node->vTotalColor).field0_0x0.d[1] * fVar7,
                     (node->vTotalColor).field0_0x0.d[0] * fVar7);
    puVar1 = (undefined *)((int)&this->m_colormap[uVar6].field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
    uVar2 = (uint)(this->m_colormap + uVar6) & 7;
    puVar3 = (ulong *)((int)(this->m_colormap + uVar6) - uVar2);
    *puVar3 = uVar4 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    this->m_colormap[uVar6].field0_0x0.d[2] = fVar8 * fVar7;
    uVar6 = this->m_nColors;
    node->color_number = (uchar)uVar6;
    this->m_nColors = uVar6 + 1;
  }
  return;
}

int ERTQuantize::GetPaletteSize() {
  return this->m_nColors;
}

void ERTQuantize::GetPaletteEntry(int index, unsigned char *colorOut) {
  TransformFromYUV__11ERTQuantizeRC5EVec3PUc(this,this->m_colormap + index,colorOut);
  return;
}

int ERTQuantize::GetClosestColor(unsigned char *color) {
	u32 packedColor;
	ERTQCacheNode &cn;
	EVec3 vColor;
	float mindistance;
	u32 closest;
	EVec3 *this;
	u32 i;
	ERTQNode *node;
	u32 id;
	
  undefined *puVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  EVec3 *pEVar5;
  uint uVar6;
  ERTQNode *pEVar7;
  uint uVar8;
  uint uVar9;
  ERTQCacheNode *pEVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  EVec3 vColor;
  
  uVar11 = (uint)*(uint3 *)color;
  pEVar10 = this->m_cache + uVar11 % 0x1ff;
  if ((pEVar10->color == uVar11) && (pEVar10->data != -1)) {
    iVar4 = pEVar10->data;
  }
  else {
    TransformToYuv__11ERTQuantizePUcR5EVec3(this,color,&vColor);
    fVar12 = DAT_003cce54;
    uVar3 = this->m_nColors;
    if (uVar3 < 0x11) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar6 = 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      uVar9 = 0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar13 = this->m_colormap[0].field0_0x0.d[1] - vColor.field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar14 = this->m_colormap[0].field0_0x0.d[0] - vColor.field0_0x0.d[0];
      fVar12 = this->m_colormap[0].field0_0x0.d[2] - vColor.field0_0x0.d[2];
                    /* end of inlined section */
      if (1 < uVar3) {
        pEVar5 = this->m_colormap;
        fVar12 = fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12;
        uVar8 = uVar9;
        do {
          pEVar5 = pEVar5 + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar15 = (pEVar5->field0_0x0).d[0] - vColor.field0_0x0.d[0];
          fVar13 = (pEVar5->field0_0x0).d[1] - vColor.field0_0x0.d[1];
          fVar14 = (pEVar5->field0_0x0).d[2] - vColor.field0_0x0.d[2];
          fVar13 = fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14;
                    /* end of inlined section */
          uVar9 = uVar6;
          if (fVar12 <= fVar13) {
            fVar13 = fVar12;
            uVar9 = uVar8;
          }
          uVar6 = uVar6 + 1;
          fVar12 = fVar13;
          uVar8 = uVar9;
        } while (uVar6 < uVar3);
      }
      this->m_color_number = uVar9;
    }
    else {
      pEVar7 = this->m_root;
      while( true ) {
                    /* end of inlined section */
        uVar3 = (uint)((pEVar7->vMidColor).field0_0x0.d[0] < vColor.field0_0x0.d[0]);
                    /* end of inlined section */
        if ((pEVar7->vMidColor).field0_0x0.d[1] < vColor.field0_0x0.d[1]) {
          uVar3 = uVar3 | 2;
        }
                    /* end of inlined section */
        if ((pEVar7->vMidColor).field0_0x0.d[2] < vColor.field0_0x0.d[2]) {
          uVar3 = uVar3 | 4;
        }
        if ((((int)(uint)(ushort)pEVar7->children >> uVar3 ^ 1U) & 1) != 0) break;
        pEVar7 = pEVar7->child[uVar3];
      }
      puVar1 = (undefined *)((int)&(this->m_vColor).field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar2 = (ulong *)(puVar1 + -uVar3);
      *puVar2 = *puVar2 & -1L << (uVar3 + 1) * 8 |
                CONCAT44(vColor.field0_0x0.d[1],vColor.field0_0x0.d[0]) >> (7 - uVar3) * 8;
      uVar3 = (uint)&this->m_vColor & 7;
      puVar2 = (ulong *)((int)&this->m_vColor - uVar3);
      *puVar2 = CONCAT44(vColor.field0_0x0.d[1],vColor.field0_0x0.d[0]) << uVar3 * 8 |
                *puVar2 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      (this->m_vColor).field0_0x0.d[2] = vColor.field0_0x0.d[2];
      this->m_distance = fVar12;
      ClosestColor__11ERTQuantizeP8ERTQNode(this,pEVar7->parent);
    }
    pEVar10->color = uVar11;
    pEVar10->data = this->m_color_number;
    iVar4 = pEVar10->data;
  }
  return iVar4;
}

void ERTQuantize::ClosestColor(ERTQNode *node) {
	u32 id;
	EVec3 &v;
	
  EVec3 *pEVar1;
  ERTQNode **ppEVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (node->children != 0) {
    uVar3 = 0;
    ppEVar2 = node->child;
    do {
      if (((int)(uint)(ushort)node->children >> (uVar3 & 0x1f) & 1U) != 0) {
        ClosestColor__11ERTQuantizeP8ERTQNode(this,*ppEVar2);
      }
      uVar3 = uVar3 + 1;
      ppEVar2 = ppEVar2 + 1;
    } while (uVar3 < 9);
  }
  if (node->number_unique != 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    pEVar1 = this->m_colormap + node->color_number;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar4 = (pEVar1->field0_0x0).d[1] - (this->m_vColor).field0_0x0.d[1];
    fVar6 = (pEVar1->field0_0x0).d[0] - (this->m_vColor).field0_0x0.d[0];
    fVar5 = (pEVar1->field0_0x0).d[2] - (this->m_vColor).field0_0x0.d[2];
    fVar4 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
                    /* end of inlined section */
    if (fVar4 < this->m_distance) {
      this->m_distance = fVar4;
      this->m_color_number = (uint)node->color_number;
    }
  }
  return;
}
