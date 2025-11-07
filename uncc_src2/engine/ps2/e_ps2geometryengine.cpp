// STATUS: NOT STARTED

#include "e_ps2geometryengine.h"

static float cPi = 3.14159274f;
static double cdPi = 3.1415927410125732;
static float cGravity = 32.2f;
static u32 cScratchPadBase = 0;
static u32 cScratchPadSize = 16384;
static EPs2GeometryEngineData *_pGE = 0x1100c000;

void geSetOutputBuffer(int which) {
  DAT_1100ce5c = which * 0xad + 0x297;
  return;
}

EPs2GEOutputBuffer* geGetOutputBuffer() {
  return (EPs2GEOutputBuffer *)(&DAT_1100c000 + (DAT_1100ce5c + -1) * 2);
}

void geSwapOutputBuffers() {
	int newIdx;
	
  EPs2GEOutputBuffer *pEVar1;
  int newIdx;
  
  pEVar1 = geGetOutputBuffer__Fv();
  newIdx = (int)(pEVar1 == (EPs2GEOutputBuffer *)&DAT_1100e960);
  geSetOutputBuffer__Fi(newIdx);
  pEVar1 = geGetOutputBuffer__Fv();
  DAT_1100c678 = pEVar1->verts;
  return;
}

void geSwapInputBuffers() {
  return;
}

void geResetInputBuffers() {
  return;
}

void geRecalcCombinedView() {
	EMat4 mViewport;
	
  EVec3 *pEVar1;
  EMat4 mViewport;
  
  __5EMat4(&mViewport);
  pEVar1 = __opR5EVec3__C5EVec4((EVec4 *)&DAT_1100c6f0);
  Scale__5EMat4RC5EVec3(&mViewport,pEVar1);
  pEVar1 = __opR5EVec3__C5EVec4((EVec4 *)&DAT_1100c700);
  PostTranslate__5EMat4RC5EVec3(&mViewport,pEVar1);
  SoftwareMult__5EMat4RC5EMat4T1((EMat4 *)&DAT_1100ce10,(EMat4 *)&DAT_1100c2e0,&mViewport);
  return;
}

void geUploadModelMatrices(EMat4 *mModelMats, int pos, int count) {
	EPs2GEModelMatrices *pmm;
	
  EMat4 *local_30;
  int local_28;
  EPs2GEModelMatrices *pmm;
  
  pmm = (EPs2GEModelMatrices *)(&DAT_1100c020 + pos * 0x20);
  local_30 = mModelMats;
  local_28 = count;
  do {
    __as__5EMat4RC5EMat4(&pmm->mModel,local_30);
    pmm = pmm + 1;
    local_30 = local_30 + 1;
    local_28 = local_28 + -1;
  } while (local_28 != 0);
  return;
}

void geRecalcModelMatricesUnweighted() {
	int i;
	EVec3 &v;
	float scaledMag;
	
  EVec4 *this;
  EVec3 *this_00;
  float fVar1;
  int i;
  EVec3 *v;
  float scaledMag;
  
  if ((DAT_1100c7a0 & 0x188) != 0) {
    for (i = 0; i < 3; i = i + 1) {
      this = __vc__5EMat4i((EMat4 *)&DAT_1100c320,i);
      this_00 = __opR5EVec3__C5EVec4(this);
      fVar1 = Mag__C5EVec3(this_00);
      if (fVar1 * 127.0 != 0.0) {
        __aml__5EVec3f(this_00,1.0 / (fVar1 * 127.0));
      }
    }
    if ((DAT_1100c7a0 & 0x180) != 0) {
      SoftwareMult__5EMat4RC5EMat4T1
                ((EMat4 *)&DAT_1100c3a0,(EMat4 *)&DAT_1100c320,(EMat4 *)&DAT_1100c2a0);
      SoftwareMult__5EMat4RC5EMat4T1
                ((EMat4 *)&DAT_1100cd40,(EMat4 *)&DAT_1100c020,(EMat4 *)&DAT_1100c2a0);
    }
  }
  if ((DAT_1100c7a0 & 8) != 0) {
    geRecalcLightData__Fv();
  }
  return;
}

void geVU1RecalcModelMatrixData(int pos, int count) {
	long long unsigned int buf[8];
	EVif vif;
	
  uint16 buf [8];
  EVif vif;
  
  __4EVif(&vif);
  Begin__4EVifPvi(&vif,buf,0x80);
  AddDmaTag__4EVifUiPvi(&vif,1,(void *)0x0,0);
  AddVifTag__4EVifUi(&vif,pvu1RecalcMatrices >> 3 | 0x15000000);
  AddVifTag__4EVifUi(&vif,pvu1SendInterrupt >> 3 | 0x15000000);
  AddDmaTag__4EVifUiPvi(&vif,6,(void *)0x0,0);
  End__4EVif(&vif);
  SyncDCache(buf,&vif);
  Send__4EVif(&vif);
  ___4EVif(&vif,2);
  return;
}

void geRecalcModelMatrixData(int pos, int count) {
	EMat4 *pmView;
	int i;
	EPs2GEModelMatrices *pmm;
	
  EMat4 *pmView;
  int i;
  EPs2GEModelMatrices *pmm;
  
  DAT_1100ce50 = DAT_1100c7a0;
  for (i = pos; i < pos + count; i = i + 1) {
    SoftwareMult__5EMat4RC5EMat4T1
              ((EMat4 *)(&DAT_1100c060 + i * 0x80),(EMat4 *)(&DAT_1100c020 + i * 0x20),
               (EMat4 *)&DAT_1100ce10);
  }
  SoftwareMult__5EMat4RC5EMat4T1
            ((EMat4 *)&DAT_1100c220,(EMat4 *)&DAT_1100c020,(EMat4 *)&DAT_1100c2e0);
  if ((DAT_1100c7a0 & 0x40) == 0) {
    geRecalcModelMatricesUnweighted__Fv();
  }
  return;
}

void geRecalcLookatTextureXForm() {
  if ((DAT_1100c7a0 & 0x180) != 0) {
    if ((DAT_1100c7a0 & 0x200) == 0) {
      __as__5EMat4RC5EMat4((EMat4 *)&DAT_1100c2a0,(EMat4 *)&DAT_1100c3e0);
    }
    else {
      SoftwareMult__5EMat4RC5EMat4T1
                ((EMat4 *)&DAT_1100c2a0,(EMat4 *)&DAT_1100c260,(EMat4 *)&DAT_1100c3e0);
    }
  }
  return;
}

void geRecalcLightData() {
  SoftwareMult__5EMat4RC5EMat4T1
            ((EMat4 *)&DAT_1100c360,(EMat4 *)&DAT_1100c320,(EMat4 *)&DAT_1100c710);
  return;
}

void geTriStripTesselated() {
	u32 nTris;
	EGEVert *v;
	EPs2GETransformedVert *pVerts[3];
	u32 a;
	u32 b;
	u32 c;
	
  uint uVar1;
  uint uVar2;
  int iVar3;
  EPs2GEOutputBuffer *pEVar4;
  EGEVert *v_00;
  uint nTris;
  EGEVert *v;
  EPs2GETransformedVert *pVerts [3];
  uint a;
  uint b;
  uint c;
  
  iVar3 = DAT_1100c680;
  nTris = *(uint *)(DAT_1100c680 + 4);
  DAT_1100c7a4 = DAT_1100c7a4 & 0xfffffffb | 3;
  DAT_1100c7a8 = DAT_1100c7a8 & 0xfffffffb | 3;
  v_00 = (EGEVert *)(DAT_1100c680 + 0x50);
  pEVar4 = geGetOutputBuffer__Fv();
  DAT_1100c678 = pEVar4->verts;
  geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
            (v_00,(EPs2GETransformedVert *)&DAT_1100c420,true);
  geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
            ((EGEVert *)(iVar3 + 0xa0),(EPs2GETransformedVert *)&DAT_1100c4b0,true);
  a = 0;
  b = 1;
  c = 2;
  v = (EGEVert *)(iVar3 + 0xf0);
  do {
    uVar1 = a;
    uVar2 = b;
    if ((a & 1) != 0) {
      uVar1 = b;
      uVar2 = a;
    }
    pVerts[1] = (EPs2GETransformedVert *)(&DAT_1100c420 + uVar2 * 0x90);
    pVerts[0] = (EPs2GETransformedVert *)(&DAT_1100c420 + uVar1 * 0x90);
    pVerts[2] = (EPs2GETransformedVert *)(&DAT_1100c420 + c * 0x90);
    geProcessVert__FP7EGEVertP21EPs2GETransformedVertb(v,pVerts[2],true);
    geDrawClippedTri__FPP21EPs2GETransformedVert(pVerts);
    a = b;
    b = c;
    c = c + 1 & 3;
    nTris = nTris - 1;
    v = v + 1;
  } while (nTris != 0);
  geFlushPrims__Fv();
  return;
}

void geTriStrip() {
	u32 nVerts;
	int n;
	EGEVert *v;
	EPs2GETransformedVert tv;
	EPs2GEGSEntry *pOutStart;
	
  int nVtxs;
  EPs2GEOutputBuffer *pEVar1;
  uint nVerts;
  int n;
  EGEVert *v;
  EPs2GETransformedVert tv;
  EPs2GEGSEntry__302_2188 *pOutStart;
  
  nVtxs = *(int *)(DAT_1100c680 + 4) + 2;
  DAT_1100c7a4 = *(undefined4 *)(DAT_1100c680 + 8);
  DAT_1100c7a8 = *(undefined4 *)(DAT_1100c680 + 0xc);
  v = (EGEVert *)(DAT_1100c680 + 0x50);
  __21EPs2GETransformedVert(&tv);
  pEVar1 = geGetOutputBuffer__Fv();
  DAT_1100c678 = pEVar1->verts;
  n = nVtxs;
  while (n = n + -1, n != -1) {
    geProcessVert__FP7EGEVertP21EPs2GETransformedVertb(v,&tv,false);
    DAT_1100c678->d_f32[0] = tv.d.tc[0].s;
    DAT_1100c678->d_f32[1] = tv.d.tc[0].t;
    DAT_1100c678->d_f32[2] = tv.d.tc[0].q;
    DAT_1100c678->d_u32[3] = tv.d.tc[0].unused;
    DAT_1100c678[1].d_f32[0] = tv.d.tc[1].s;
    *(float *)((int)DAT_1100c678 + 0x14) = tv.d.tc[1].t;
    *(float *)((int)DAT_1100c678 + 0x18) = tv.d.tc[1].q;
    *(uint *)((int)DAT_1100c678 + 0x1c) = tv.d.tc[1].unused;
    DAT_1100c678[2].d_u32[0] = tv.d.color[0];
    *(uint *)((int)DAT_1100c678 + 0x24) = tv.d.color[1];
    *(uint *)((int)DAT_1100c678 + 0x28) = tv.d.color[2];
    *(uint *)((int)DAT_1100c678 + 0x2c) = tv.d.color[3];
    DAT_1100c678[3].d_u32[0] = tv.d.screen[0];
    *(uint *)((int)DAT_1100c678 + 0x34) = tv.d.screen[1];
    *(uint *)((int)DAT_1100c678 + 0x38) = tv.d.screen[2];
    *(uint *)((int)DAT_1100c678 + 0x3c) = tv.d.screen[3];
    DAT_1100c678 = DAT_1100c678 + 4;
    v = v + 1;
  }
  geFlushTriStrip__FP13EPs2GEGSEntryii((EPs2GEGSEntry__302_2188 *)pEVar1->verts,4,nVtxs);
  return;
}

void geTriStrips() {
  return;
}

void geTriFan() {
	int nTris;
	EGEVert *v;
	EPs2GETransformedVert *pVerts[3];
	EPs2GETransformedVert *pTemp;
	
  int iVar1;
  EPs2GETransformedVert *pEVar2;
  EGEVert *v_00;
  int nTris;
  EGEVert *v;
  EPs2GETransformedVert *pVerts [3];
  EPs2GETransformedVert *pTemp;
  
  iVar1 = DAT_1100c680;
  nTris = *(int *)(DAT_1100c680 + 4);
  DAT_1100c7a4 = *(undefined4 *)(DAT_1100c680 + 8);
  DAT_1100c7a8 = *(undefined4 *)(DAT_1100c680 + 0xc);
  pVerts[0] = (EPs2GETransformedVert *)&DAT_1100c420;
  pVerts[1] = (EPs2GETransformedVert *)&DAT_1100c4b0;
  pVerts[2] = (EPs2GETransformedVert *)&DAT_1100c540;
  v_00 = (EGEVert *)(DAT_1100c680 + 0xa0);
  geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
            ((EGEVert *)(DAT_1100c680 + 0x50),(EPs2GETransformedVert *)&DAT_1100c420,true);
  geProcessVert__FP7EGEVertP21EPs2GETransformedVertb(v_00,pVerts[1],true);
  v = (EGEVert *)(iVar1 + 0xf0);
  do {
    geProcessVert__FP7EGEVertP21EPs2GETransformedVertb(v,pVerts[2],true);
    geDrawClippedTri__FPP21EPs2GETransformedVert(pVerts);
    pEVar2 = pVerts[1];
    pVerts[1] = pVerts[2];
    pVerts[2] = pEVar2;
    nTris = nTris + -1;
    v = v + 1;
  } while (nTris != 0);
  geFlushPrims__Fv();
  return;
}

void geTriList() {
	int nTris;
	EGEVert *v;
	int i;
	
  int nTris;
  EGEVert *v;
  int i;
  
  nTris = *(int *)(DAT_1100c680 + 4);
  DAT_1100c7a4 = *(undefined4 *)(DAT_1100c680 + 8);
  DAT_1100c7a8 = *(undefined4 *)(DAT_1100c680 + 0xc);
  v = (EGEVert *)(DAT_1100c680 + 0x50);
  do {
    for (i = 0; i < 3; i = i + 1) {
      geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
                (v,(EPs2GETransformedVert *)(&DAT_1100c420 + i * 0x90),true);
      v = v + 1;
    }
    geDrawClippedTri__FPP21EPs2GETransformedVert((EPs2GETransformedVert **)&DAT_1100c660);
    nTris = nTris + -1;
  } while (nTris != 0);
  geFlushPrims__Fv();
  return;
}

void geQuadList() {
	int nQuads;
	EGEVert *v;
	int i;
	
  int nQuads;
  EGEVert *v;
  int i;
  
  nQuads = *(int *)(DAT_1100c680 + 4);
  DAT_1100c7a4 = *(undefined4 *)(DAT_1100c680 + 8);
  DAT_1100c7a8 = *(undefined4 *)(DAT_1100c680 + 0xc);
  v = (EGEVert *)(DAT_1100c680 + 0x50);
  do {
    for (i = 0; i < 4; i = i + 1) {
      geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
                (v,(EPs2GETransformedVert *)(&DAT_1100c420 + i * 0x90),true);
      v = v + 1;
    }
    geDrawClippedTri__FPP21EPs2GETransformedVert((EPs2GETransformedVert **)&DAT_1100c660);
    geDrawClippedTri__FPP21EPs2GETransformedVert((EPs2GETransformedVert **)&DAT_1100c66c);
    nQuads = nQuads + -1;
  } while (nQuads != 0);
  geFlushPrims__Fv();
  return;
}

void geLineList() {
	int nLines;
	EGEVert *v;
	int i;
	
  EPs2GEOutputBuffer *pEVar1;
  int nLines;
  EGEVert *v;
  int i;
  
  nLines = *(int *)(DAT_1100c680 + 4);
  DAT_1100c7a4 = *(undefined4 *)(DAT_1100c680 + 8);
  DAT_1100c7a8 = *(undefined4 *)(DAT_1100c680 + 0xc);
  v = (EGEVert *)(DAT_1100c680 + 0x50);
  pEVar1 = geGetOutputBuffer__Fv();
  DAT_1100c678 = pEVar1->verts;
  do {
    for (i = 0; i < 2; i = i + 1) {
      geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
                (v,(EPs2GETransformedVert *)(&DAT_1100c420 + i * 0x90),true);
      v = v + 1;
    }
    geDrawClippedLine__FPP21EPs2GETransformedVert((EPs2GETransformedVert **)&DAT_1100c660);
    nLines = nLines + -1;
  } while (nLines != 0);
  geFlushPrims__Fv();
  return;
}

void geLineStrip() {
	int nLines;
	EGEVert *v;
	int toggle;
	
  int iVar1;
  EPs2GEOutputBuffer *pEVar2;
  EGEVert *v_00;
  int nLines;
  EGEVert *v;
  int toggle;
  
  iVar1 = DAT_1100c680;
  nLines = *(int *)(DAT_1100c680 + 4);
  DAT_1100c7a4 = *(undefined4 *)(DAT_1100c680 + 8);
  DAT_1100c7a8 = *(undefined4 *)(DAT_1100c680 + 0xc);
  v_00 = (EGEVert *)(DAT_1100c680 + 0x50);
  pEVar2 = geGetOutputBuffer__Fv();
  DAT_1100c678 = pEVar2->verts;
  geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
            (v_00,(EPs2GETransformedVert *)&DAT_1100c4b0,true);
  toggle = 0;
  v = (EGEVert *)(iVar1 + 0xa0);
  do {
    geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
              (v,(EPs2GETransformedVert *)(&DAT_1100c420 + toggle * 0x90),true);
    geDrawClippedLine__FPP21EPs2GETransformedVert((EPs2GETransformedVert **)&DAT_1100c660);
    toggle = (int)(toggle == 0);
    nLines = nLines + -1;
    v = v + 1;
  } while (nLines != 0);
  geFlushPrims__Fv();
  return;
}

void geSpriteList() {
	int nSprites;
	EGEVert *v;
	int i;
	
  EPs2GEOutputBuffer *pEVar1;
  int nSprites;
  EGEVert *v;
  int i;
  
  nSprites = *(int *)(DAT_1100c680 + 4);
  DAT_1100c7a4 = *(undefined4 *)(DAT_1100c680 + 8);
  DAT_1100c7a8 = *(undefined4 *)(DAT_1100c680 + 0xc);
  v = (EGEVert *)(DAT_1100c680 + 0x50);
  pEVar1 = geGetOutputBuffer__Fv();
  DAT_1100c678 = pEVar1->verts;
  do {
    for (i = 0; i < 2; i = i + 1) {
      geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
                (v,(EPs2GETransformedVert *)(&DAT_1100c420 + i * 0x90),true);
      v = v + 1;
    }
    geDrawClippedSprite__FPP21EPs2GETransformedVert((EPs2GETransformedVert **)&DAT_1100c660);
    nSprites = nSprites + -1;
  } while (nSprites != 0);
  geFlushPrims__Fv();
  return;
}

void geRectList() {
	int nRects;
	float *pf;
	float *pfParams;
	EVec4 vColor;
	u32 z;
	int i;
	
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  EPs2GEOutputBuffer *pEVar5;
  EVec4 *pEVar6;
  float *pfVar7;
  EPs2GEGSEntry__208_2108 *pEVar8;
  int nRects;
  float *pf;
  float *pfParams;
  EVec4 vColor;
  uint z;
  int i;
  
  iVar3 = DAT_1100c680;
  nRects = *(int *)(DAT_1100c680 + 0x10);
  DAT_1100c7a4 = DAT_1100c7a4 | 6;
  DAT_1100c7a8 = DAT_1100c7a8 | 6;
  pf = (float *)(DAT_1100c680 + 0x50);
  __5EVec4(&vColor);
  pfVar4 = __vc__5EVec4i(&vColor,0);
  *pfVar4 = *(float *)(iVar3 + 0x20);
  pfVar4 = __vc__5EVec4i(&vColor,1);
  *pfVar4 = *(float *)(iVar3 + 0x24);
  pfVar4 = __vc__5EVec4i(&vColor,2);
  *pfVar4 = *(float *)(iVar3 + 0x28);
  pfVar4 = __vc__5EVec4i(&vColor,3);
  *pfVar4 = *(float *)(iVar3 + 0x2c);
  uVar2 = *(undefined4 *)(DAT_1100c680 + 0x18);
  pEVar5 = geGetOutputBuffer__Fv();
  DAT_1100c678 = pEVar5->verts;
  do {
    DAT_1100c678->d_u32[0] = (uint)pf[4];
    DAT_1100c678->d_u32[1] = (uint)pf[5];
    DAT_1100c678->d_u32[2] = 0x3f800000;
    DAT_1100c678->d_u32[3] = 0;
    pEVar8 = DAT_1100c678 + 1;
    puVar1 = (undefined8 *)((int)DAT_1100c678 + 0x18);
    DAT_1100c678 = pEVar8;
    *puVar1 = 0;
    pEVar8->d_u64[0] = 0;
    DAT_1100c678 = DAT_1100c678 + 1;
    for (i = 0; i < 4; i = i + 1) {
      pfVar4 = __vc__5EVec4i(&vColor,i);
      DAT_1100c678->d_u32[i] = (int)*pfVar4;
    }
    DAT_1100c678 = DAT_1100c678 + 1;
    for (i = 0; i < 2; i = i + 1) {
      pEVar6 = __vc__5EMat4i((EMat4 *)&DAT_1100c7c0,i);
      pfVar4 = __vc__5EVec4i(pEVar6,i);
      pEVar6 = __vc__5EMat4i((EMat4 *)&DAT_1100c7c0,3);
      pfVar7 = __vc__5EVec4i(pEVar6,i);
      DAT_1100c678->d_u32[i] = (int)(pf[i] * *pfVar4 + *pfVar7);
    }
    DAT_1100c678->d_u32[2] = uVar2;
    DAT_1100c678->d_u32[3] = 0x10;
    DAT_1100c678 = DAT_1100c678 + 1;
    DAT_1100c678->d_u32[0] = (uint)pf[6];
    DAT_1100c678->d_u32[1] = (uint)pf[7];
    DAT_1100c678->d_u32[2] = 0x3f800000;
    DAT_1100c678->d_u32[3] = 0;
    pEVar8 = DAT_1100c678 + 1;
    puVar1 = (undefined8 *)((int)DAT_1100c678 + 0x18);
    DAT_1100c678 = pEVar8;
    *puVar1 = 0;
    pEVar8->d_u64[0] = 0;
    DAT_1100c678 = DAT_1100c678 + 1;
    for (i = 0; i < 4; i = i + 1) {
      pfVar4 = __vc__5EVec4i(&vColor,i);
      DAT_1100c678->d_u32[i] = (int)*pfVar4;
    }
    DAT_1100c678 = DAT_1100c678 + 1;
    for (i = 0; i < 2; i = i + 1) {
      pEVar6 = __vc__5EMat4i((EMat4 *)&DAT_1100c7c0,i);
      pfVar4 = __vc__5EVec4i(pEVar6,i);
      pEVar6 = __vc__5EMat4i((EMat4 *)&DAT_1100c7c0,3);
      pfVar7 = __vc__5EVec4i(pEVar6,i);
      DAT_1100c678->d_u32[i] = (int)(pf[i + 2] * *pfVar4 + *pfVar7);
    }
    DAT_1100c678->d_u32[2] = uVar2;
    DAT_1100c678->d_u32[3] = 0x10;
    DAT_1100c678 = DAT_1100c678 + 1;
    pf = pf + 8;
    nRects = nRects + -1;
  } while (nRects != 0);
  geFlushPrims__Fv();
  return;
}

void gePointList() {
	int nPoints;
	EGEVert *v;
	
  EPs2GEOutputBuffer *pEVar1;
  int nPoints;
  EGEVert *v;
  
  nPoints = *(int *)(DAT_1100c680 + 4);
  DAT_1100c7a4 = *(undefined4 *)(DAT_1100c680 + 8);
  DAT_1100c7a8 = *(undefined4 *)(DAT_1100c680 + 0xc);
  v = (EGEVert *)(DAT_1100c680 + 0x50);
  pEVar1 = geGetOutputBuffer__Fv();
  DAT_1100c678 = pEVar1->verts;
  do {
    geProcessVert__FP7EGEVertP21EPs2GETransformedVertb
              (v,(EPs2GETransformedVert *)&DAT_1100c420,true);
    geDrawClippedPoint__FPP21EPs2GETransformedVert((EPs2GETransformedVert **)&DAT_1100c660);
    nPoints = nPoints + -1;
    v = v + 1;
  } while (nPoints != 0);
  geFlushPrims__Fv();
  return;
}

void geFlushPrims() {
	u128 *pOutPos;
	EPs2GEOutputBuffer *pOutBuffer;
	int nBytes;
	sceGifTag *pGifTag;
	u64 *p64;
	u32 nLoops;
	bool twoPass;
	
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  EPs2GEOutputBuffer *pDList;
  uint uVar5;
  uint16 *pOutPos;
  EPs2GEOutputBuffer *pOutBuffer;
  int nBytes;
  sceGifTag__194_1601 *pGifTag;
  ulong *p64;
  uint nLoops;
  bool twoPass;
  
  puVar4 = DAT_1100c678;
  pDList = geGetOutputBuffer__Fv();
  uVar5 = (int)puVar4 + (-0x40 - (int)pDList);
  geSwapInputBuffers__Fv();
  geSwapOutputBuffers__Fv();
  if (uVar5 != 0) {
    *(undefined4 *)puVar4 = 0;
    *(undefined4 *)((int)puVar4 + 4) = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined4 *)((int)puVar4 + 0xc) = 0;
    *puVar4 = *puVar4 & 0xffffffffffff8000 | 1;
    *puVar4 = *puVar4 | 0x8000;
    *puVar4 = *puVar4 & 0xfffffffffffffff | 0x1000000000000000;
    puVar4[1] = puVar4[1] & 0xfffffffffffffff0 | 0xe;
    puVar4[2] = 0xabc;
    puVar4[3] = 0x60;
    (pDList->dmaHeader).d_u32[0] = (uVar5 >> 4) + 5 | 0x70000000;
    (pDList->primReg).d_u32[0] = DAT_1100c7a4 & 0x7ff;
    uVar3 = DAT_1100c008._4_4_;
    uVar2 = (uint)DAT_1100c008;
    uVar1 = DAT_1100c000;
    (pDList->gsHeader).d_u32[0] = (uint)DAT_1100c000;
    (pDList->gsHeader).d_u32[1] = (uint)((ulong)uVar1 >> 0x20);
    (pDList->gsHeader).d_u32[2] = uVar2;
    (pDList->gsHeader).d_u32[3] = uVar3;
    (pDList->gsHeader).d_u64[0] =
         (pDList->gsHeader).d_u64[0] & 0xffffffffffff0000 | (ulong)(uVar5 >> 6);
    SendGSDisplayList__12EPs2GraphicsPvii(&_ps2gfx,pDList,0,1);
    if ((DAT_1100c7a0 >> 5 & 1U) != 0) {
      (pDList->primReg).d_u32[0] = DAT_1100c7a8 & 0x7ff;
      uVar3 = DAT_1100c018._4_4_;
      uVar2 = (uint)DAT_1100c018;
      uVar1 = DAT_1100c010;
      (pDList->gsHeader).d_u32[0] = (uint)DAT_1100c010;
      (pDList->gsHeader).d_u32[1] = (uint)((ulong)uVar1 >> 0x20);
      (pDList->gsHeader).d_u32[2] = uVar2;
      (pDList->gsHeader).d_u32[3] = uVar3;
      (pDList->gsHeader).d_u64[0] =
           (pDList->gsHeader).d_u64[0] & 0xffffffffffff0000 | (ulong)(uVar5 >> 6);
      SendGSDisplayList__12EPs2GraphicsPvii(&_ps2gfx,pDList,0,1);
    }
  }
  return;
}

void geProcessVert(EGEVert *v, EPs2GETransformedVert *tv, bool clipped) {
  geTransformVert__FP7EGEVertP21EPs2GETransformedVertb(v,tv,clipped);
  geProjectVert__FP21EPs2GETransformedVertb(tv,clipped);
  return;
}

static void geTransformVert(EGEVert *v, EPs2GETransformedVert *tv, bool clipped) {
	EVec4 vModel;
	EVec4 vWorld;
	EVec4 vNormal;
	EVec4 vWorldNormal;
	int matrixOffset;
	int index;
	EMat4 mModelRot;
	EVec4 vWeightScaler;
	int cm;
	u32 weight;
	float fweight;
	EPs2GEModelMatrices *pmm;
	EVec4 vMatWorld;
	int p;
	int d2;
	EVec4 vLightDots;
	EVec4 vTC;
	EVec3 vViewPos;
	EVec3 vViewNormal;
	float viewAngleDot;
	EVec3 vReflect;
	float reflectMag;
	EMat4 *pModelView;
	int p;
	int d5;
	EVec4 vNormal;
	EVec4 vLightDots;
	EVec4 vTC;
	EVec3 vWorldPos;
	EVec3 vViewPos;
	EVec3 vWorldNormal;
	EVec3 vViewNormal;
	float viewAngleDot;
	EVec3 vReflect;
	float reflectMag;
	EVec3 vLightPos;
	EVec3 vDist;
	float distSq;
	float invLightRadSq;
	float strength;
	EVec3 vColorAdd;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  float *pfVar5;
  float *pfVar6;
  EVec4 *pEVar7;
  uint *puVar8;
  EVec2 *pEVar9;
  float *pfVar10;
  EVec3 *pEVar11;
  EVec2 *pEVar12;
  ulong uVar13;
  ulong in_a3;
  float fVar14;
  EVec4 vModel;
  EVec4 vWorld;
  EVec4 EStack_280;
  EVec4 EStack_270;
  int matrixOffset;
  int index;
  EMat4 mModelRot;
  EVec4 vWeightScaler;
  int cm;
  int p;
  float reflectMag;
  EMat4 *pModelView;
  EVec3 vReflect;
  EVec3 vViewNormal;
  EVec3 vWorldNormal;
  EVec3 vViewPos;
  float fStack_1b4;
  EVec3 vWorldPos;
  float viewAngleDot;
  EVec3 vColorAdd;
  EVec4 vNormal;
  float strength;
  
  __5EVec4(&vModel);
  pfVar5 = __vc__5EVec4i(&vModel,0);
  pfVar6 = __vc__5EVec4i(&v->vModel,0);
  *pfVar5 = *pfVar6;
  pfVar5 = __vc__5EVec4i(&vModel,1);
  pfVar6 = __vc__5EVec4i(&v->vModel,1);
  *pfVar5 = *pfVar6;
  pfVar5 = __vc__5EVec4i(&vModel,2);
  pfVar6 = __vc__5EVec4i(&v->vModel,2);
  *pfVar5 = *pfVar6;
  pfVar5 = __vc__5EVec4i(&vModel,3);
  *pfVar5 = 1.0;
  if ((DAT_1100c7a0 & 0x40) == 0) {
    if (clipped) {
      pModelView = (EMat4 *)&DAT_1100c220;
    }
    else {
      pModelView = (EMat4 *)&DAT_1100c060;
    }
    uVar13 = (ulong)(int)pModelView;
    SoftwareMult__C5EMat4RC5EVec4(&vNormal,pModelView,&vModel);
    (tv->vEye).field0_0x0.d[0] = vNormal.field0_0x0.d[0];
    (tv->vEye).field0_0x0.d[1] = vNormal.field0_0x0.d[1];
    (tv->vEye).field0_0x0.d[2] = vNormal.field0_0x0.d[2];
    (tv->vEye).field0_0x0.d[3] = vNormal.field0_0x0.d[3];
    for (p = 0; p < 2; p = p + 1) {
      pEVar9 = __opR5EVec2__C5EVec4(&v->tc);
      puVar1 = (undefined *)((int)&pEVar9->field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)pEVar9 & 7;
      uVar13 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
               uVar13 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
               *(ulong *)((int)pEVar9 - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&tv->vTC[p].field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar13 >> (7 - uVar2) * 8;
      uVar2 = (uint)(tv->vTC + p) & 7;
      puVar4 = (ulong *)((int)(tv->vTC + p) - uVar2);
      *puVar4 = uVar13 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    }
    for (cm = 0; cm < 4; cm = cm + 1) {
      pfVar5 = __vc__5EVec4i(&tv->vColor,cm);
      puVar8 = v->color + cm;
      if ((int)*puVar8 < 0) {
        fVar14 = (float)(*puVar8 & 1 | *puVar8 >> 1);
        fVar14 = fVar14 + fVar14;
      }
      else {
        fVar14 = (float)*puVar8;
      }
      *pfVar5 = fVar14;
    }
    if ((DAT_1100c7a0 & 0x188) != 0) {
      __5EVec4(&vNormal);
      pfVar5 = __vc__5EVec4i(&vNormal,0);
      *pfVar5 = (float)v->normal[0];
      pfVar5 = __vc__5EVec4i(&vNormal,1);
      uVar13 = (ulong)(int)pfVar5;
      *pfVar5 = (float)v->normal[1];
      pfVar5 = __vc__5EVec4i(&vNormal,2);
      *pfVar5 = (float)v->normal[2];
      pfVar5 = __vc__5EVec4i(&vNormal,3);
      *pfVar5 = 1.0;
      if ((DAT_1100c7a0 & 8) != 0) {
        __5EVec4((EVec4 *)&vColorAdd);
        SoftwareMult__C5EMat4RC5EVec4((EVec4 *)&vViewPos,(EMat4 *)&DAT_1100c360,&vNormal);
        vColorAdd.field0_0x0.d[0] = vViewPos.field0_0x0.d[0];
        vColorAdd.field0_0x0.d[1] = vViewPos.field0_0x0.d[1];
        vColorAdd.field0_0x0.d[2] = vViewPos.field0_0x0.d[2];
        Clamp__5EVec4ff((EVec4 *)&vColorAdd,0.0,1.0);
        SoftwareMult__C5EMat4RC5EVec4((EVec4 *)&vViewPos,(EMat4 *)&DAT_1100c750,(EVec4 *)&vColorAdd)
        ;
        (tv->vColor).field0_0x0.d[0] = vViewPos.field0_0x0.d[0];
        (tv->vColor).field0_0x0.d[1] = vViewPos.field0_0x0.d[1];
        (tv->vColor).field0_0x0.d[2] = vViewPos.field0_0x0.d[2];
        (tv->vColor).field0_0x0.d[3] = fStack_1b4;
        (tv->vColor).field0_0x0.d[3] = 128.0;
        Clamp__5EVec4ff(&tv->vColor,0.0,255.0);
      }
      if ((DAT_1100c7a0 & 0x180) != 0) {
        __5EVec4((EVec4 *)&vColorAdd);
        if (DAT_1100c7ac == 1) {
          SoftwareMult__C5EMat4RC5EVec4((EVec4 *)&vViewPos,(EMat4 *)&DAT_1100c3a0,&vNormal);
          vColorAdd.field0_0x0.d[0] = vViewPos.field0_0x0.d[0];
          vColorAdd.field0_0x0.d[1] = vViewPos.field0_0x0.d[1];
          vColorAdd.field0_0x0.d[2] = vViewPos.field0_0x0.d[2];
        }
        else if (DAT_1100c7ac == 0) {
          SoftwareMult__C5EMat4RC5EVec4((EVec4 *)&vViewPos,(EMat4 *)&DAT_1100cd40,&vModel);
          vColorAdd.field0_0x0.d[0] = vViewPos.field0_0x0.d[0];
          vColorAdd.field0_0x0.d[1] = vViewPos.field0_0x0.d[1];
          vColorAdd.field0_0x0.d[2] = vViewPos.field0_0x0.d[2];
        }
        else if (DAT_1100c7ac == 2) {
          SoftwareMult__C5EMat4RC5EVec4((EVec4 *)&vViewPos,(EMat4 *)&DAT_1100c3e0,&v->tc);
          vColorAdd.field0_0x0.d[0] = vViewPos.field0_0x0.d[0];
          vColorAdd.field0_0x0.d[1] = vViewPos.field0_0x0.d[1];
          vColorAdd.field0_0x0.d[2] = vViewPos.field0_0x0.d[2];
        }
        else if (DAT_1100c7ac == 4) {
          SoftwareMult__C5EMat4RC5EVec4((EVec4 *)&vViewPos,(EMat4 *)&DAT_1100c020,&vModel);
          pEVar11 = __opR5EVec3__C5EVec4((EVec4 *)&vViewPos);
          __5EVec3RC5EVec3(&vWorldPos,pEVar11);
          __ml__FRC5EVec3RC5EMat4(&vViewPos,&vWorldPos,(EMat4 *)&DAT_1100cd80);
          uVar13 = (ulong)(int)&vWorldNormal;
          SoftwareMult__C5EMat4RC5EVec4((EVec4 *)&vViewNormal,(EMat4 *)&DAT_1100c320,&vNormal);
          pEVar11 = __opR5EVec3__C5EVec4((EVec4 *)&vViewNormal);
          __5EVec3RC5EVec3(&vWorldNormal,pEVar11);
          __ml__FRC5EVec3RC5EMat4(&vViewNormal,&vWorldNormal,(EMat4 *)&DAT_1100c260);
          fVar14 = __ml__C5EVec3RC5EVec3(&vViewPos,&vViewNormal);
          __ml__FfRC5EVec3((EVec3 *)&vWeightScaler,fVar14 + fVar14,&vViewNormal);
          __mi__C5EVec3RC5EVec3(&vReflect,&vViewPos,(EVec3 *)&vWeightScaler);
          fVar14 = Mag__C5EVec3(&vReflect);
          pfVar5 = __vc__5EVec3i(&vReflect,2);
          *pfVar5 = *pfVar5 + fVar14;
          Normalize__5EVec3(&vReflect);
          __5EVec4RC5EVec3(&EStack_270,&vReflect);
          SoftwareMult__C5EMat4RC5EVec4(&vWeightScaler,(EMat4 *)&DAT_1100c3e0,&EStack_270);
          vColorAdd.field0_0x0.d[0] = vWeightScaler.field0_0x0.d[0];
          vColorAdd.field0_0x0.d[1] = vWeightScaler.field0_0x0.d[1];
          vColorAdd.field0_0x0.d[2] = vWeightScaler.field0_0x0.d[2];
        }
        if ((DAT_1100c7a0 & 0x400) != 0) {
          Project__5EVec4((EVec4 *)&vColorAdd);
        }
        if ((DAT_1100c7a0 & 0x80) != 0) {
          pEVar9 = __opR5EVec2__C5EVec4((EVec4 *)&vColorAdd);
          puVar1 = (undefined *)((int)&pEVar9->field0_0x0 + 7);
          uVar2 = (uint)puVar1 & 7;
          uVar3 = (uint)pEVar9 & 7;
          uVar13 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                   uVar13 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)pEVar9 - uVar3) >> uVar3 * 8;
          puVar1 = (undefined *)((int)&tv->vTC[0].field0_0x0 + 7);
          uVar2 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar2);
          *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar13 >> (7 - uVar2) * 8;
          uVar2 = (uint)tv->vTC & 7;
          puVar4 = (ulong *)((int)tv->vTC - uVar2);
          *puVar4 = uVar13 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        }
        if ((DAT_1100c7a0 & 0x100) != 0) {
          pEVar9 = __opR5EVec2__C5EVec4((EVec4 *)&vColorAdd);
          puVar1 = (undefined *)((int)&pEVar9->field0_0x0 + 7);
          uVar2 = (uint)puVar1 & 7;
          uVar3 = (uint)pEVar9 & 7;
          uVar13 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                   uVar13 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)pEVar9 - uVar3) >> uVar3 * 8;
          puVar1 = (undefined *)((int)&tv->vTC[1].field0_0x0 + 7);
          uVar2 = (uint)puVar1 & 7;
          puVar4 = (ulong *)(puVar1 + -uVar2);
          *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar13 >> (7 - uVar2) * 8;
          uVar2 = (uint)(tv->vTC + 1) & 7;
          puVar4 = (ulong *)((int)(tv->vTC + 1) - uVar2);
          *puVar4 = uVar13 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
        }
      }
    }
  }
  else {
    __5EVec4f(&vWorld,0.0);
    __5EVec4(&EStack_280);
    pfVar5 = __vc__5EVec4i(&EStack_280,0);
    *pfVar5 = (float)v->normal[0];
    pfVar5 = __vc__5EVec4i(&EStack_280,1);
    *pfVar5 = (float)v->normal[1];
    pfVar5 = __vc__5EVec4i(&EStack_280,2);
    *pfVar5 = (float)v->normal[2];
    pfVar5 = __vc__5EVec4i(&EStack_280,3);
    *pfVar5 = 1.0;
    __5EVec4(&EStack_270);
    pfVar5 = __vc__5EVec4i(&EStack_270,3);
    *pfVar5 = 0.0;
    pfVar5 = __vc__5EVec4i(&v->vModel,3);
    matrixOffset = (uint)*pfVar5 & 0x7fff;
    index = (uint)matrixOffset >> 3;
    __5EMat4RC5EMat4(&mModelRot,(EMat4 *)(&DAT_1100c020 + index * 0x20));
    pEVar7 = __vc__5EMat4i(&mModelRot,3);
    __5EVec4ffff(&vWeightScaler,0.0,0.0,0.0,1.0);
    (pEVar7->field0_0x0).d[0] = vWeightScaler.field0_0x0.d[0];
    (pEVar7->field0_0x0).d[1] = vWeightScaler.field0_0x0.d[1];
    (pEVar7->field0_0x0).d[2] = vWeightScaler.field0_0x0.d[2];
    (pEVar7->field0_0x0).d[3] = vWeightScaler.field0_0x0.d[3];
    SoftwareMult__C5EMat4RC5EVec4R5EVec4(&mModelRot,&EStack_280,&EStack_270);
    Normalize3__5EVec4(&EStack_270);
    for (cm = 0; cm < 4; cm = cm + 1) {
      uVar2 = v->weights[cm];
      if (uVar2 != 0) {
        if ((int)uVar2 < 0) {
          fVar14 = (float)(uVar2 & 1 | uVar2 >> 1);
          fVar14 = fVar14 + fVar14;
        }
        else {
          fVar14 = (float)uVar2;
        }
        __5EVec4(&vWeightScaler);
        SoftwareMult__C5EMat4RC5EVec4R5EVec4
                  ((EMat4 *)(&DAT_1100c020 + cm * 0x20),&vModel,&vWeightScaler);
        __aml__5EVec4f(&vWeightScaler,fVar14);
        __apl__5EVec4RC5EVec4(&vWorld,&vWeightScaler);
      }
    }
    __5EVec4ffff(&vWeightScaler,0.003921569,0.003921569,0.003921569,0.003921569);
    Mult__5EVec4RC5EVec4T1(&vWorld,&vWorld,&vWeightScaler);
    if (clipped) {
      SoftwareMult__C5EMat4RC5EVec4R5EVec4((EMat4 *)&DAT_1100c2e0,&vWorld,&tv->vEye);
    }
    else {
      SoftwareMult__C5EMat4RC5EVec4R5EVec4((EMat4 *)&DAT_1100ce10,&vWorld,&tv->vEye);
    }
    for (pModelView = (EMat4 *)0x0; (int)pModelView < 2;
        pModelView = (EMat4 *)((int)&pModelView->field0_0x0 + 1)) {
      pEVar9 = __opR5EVec2__C5EVec4(&v->tc);
      puVar1 = (undefined *)((int)&pEVar9->field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      uVar3 = (uint)pEVar9 & 7;
      in_a3 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
              *(ulong *)((int)pEVar9 - uVar3) >> uVar3 * 8;
      puVar1 = (undefined *)((int)&tv->vTC[(int)pModelView].field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar4 = (ulong *)(puVar1 + -uVar2);
      *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | in_a3 >> (7 - uVar2) * 8;
      uVar2 = (uint)(tv->vTC + (int)pModelView) & 7;
      puVar4 = (ulong *)((int)(tv->vTC + (int)pModelView) - uVar2);
      *puVar4 = in_a3 << uVar2 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    }
    for (p = 0; p < 4; p = p + 1) {
      pfVar5 = __vc__5EVec4i(&tv->vColor,p);
      puVar8 = v->color + p;
      if ((int)*puVar8 < 0) {
        fVar14 = (float)(*puVar8 & 1 | *puVar8 >> 1);
        fVar14 = fVar14 + fVar14;
      }
      else {
        fVar14 = (float)*puVar8;
      }
      *pfVar5 = fVar14;
    }
    if ((DAT_1100c7a0 & 8) != 0) {
      __5EVec4((EVec4 *)&vReflect);
      SoftwareMult__C5EMat4RC5EVec4R5EVec4((EMat4 *)&DAT_1100c710,&EStack_270,(EVec4 *)&vReflect);
      Clamp__5EVec4ff((EVec4 *)&vReflect,0.0,1.0);
      SoftwareMult__C5EMat4RC5EVec4R5EVec4((EMat4 *)&DAT_1100c750,(EVec4 *)&vReflect,&tv->vColor);
      (tv->vColor).field0_0x0.d[3] = 128.0;
      Clamp__5EVec4ff(&tv->vColor,0.0,255.0);
    }
    if ((DAT_1100c7a0 & 0x180) != 0) {
      __5EVec4((EVec4 *)&vReflect);
      if (DAT_1100c7ac == 1) {
        SoftwareMult__C5EMat4RC5EVec4((EVec4 *)&vViewNormal,(EMat4 *)&DAT_1100c2a0,&EStack_270);
        vReflect.field0_0x0.d[0] = vViewNormal.field0_0x0.d[0];
        vReflect.field0_0x0.d[1] = vViewNormal.field0_0x0.d[1];
        vReflect.field0_0x0.d[2] = vViewNormal.field0_0x0.d[2];
      }
      else if (DAT_1100c7ac == 0) {
        SoftwareMult__C5EMat4RC5EVec4((EVec4 *)&vViewNormal,(EMat4 *)&DAT_1100c2a0,&vWorld);
        vReflect.field0_0x0.d[0] = vViewNormal.field0_0x0.d[0];
        vReflect.field0_0x0.d[1] = vViewNormal.field0_0x0.d[1];
        vReflect.field0_0x0.d[2] = vViewNormal.field0_0x0.d[2];
      }
      else if (DAT_1100c7ac == 2) {
        SoftwareMult__C5EMat4RC5EVec4((EVec4 *)&vViewNormal,(EMat4 *)&DAT_1100c3e0,&v->tc);
        vReflect.field0_0x0.d[0] = vViewNormal.field0_0x0.d[0];
        vReflect.field0_0x0.d[1] = vViewNormal.field0_0x0.d[1];
        vReflect.field0_0x0.d[2] = vViewNormal.field0_0x0.d[2];
      }
      else if (DAT_1100c7ac == 4) {
        SoftwareMult__C5EMat4RC5EVec4((EVec4 *)&vWorldNormal,(EMat4 *)&DAT_1100cd80,&vWorld);
        pEVar11 = __opR5EVec3__C5EVec4((EVec4 *)&vWorldNormal);
        __5EVec3RC5EVec3(&vViewNormal,pEVar11);
        SoftwareMult__C5EMat4RC5EVec4((EVec4 *)&vViewPos,(EMat4 *)&DAT_1100c260,&EStack_270);
        pEVar11 = __opR5EVec3__C5EVec4((EVec4 *)&vViewPos);
        __5EVec3RC5EVec3(&vWorldNormal,pEVar11);
        fVar14 = __ml__C5EVec3RC5EVec3(&vViewNormal,&vWorldNormal);
        __ml__FfRC5EVec3(&vWorldPos,fVar14 + fVar14,&vWorldNormal);
        __mi__C5EVec3RC5EVec3(&vViewPos,&vViewNormal,&vWorldPos);
        fVar14 = Mag__C5EVec3(&vViewPos);
        pfVar5 = __vc__5EVec3i(&vViewPos,2);
        *pfVar5 = *pfVar5 + fVar14;
        Normalize__5EVec3(&vViewPos);
        __5EVec4RC5EVec3(&vNormal,&vViewPos);
        SoftwareMult__C5EMat4RC5EVec4((EVec4 *)&vColorAdd,(EMat4 *)&DAT_1100c3e0,&vNormal);
        vReflect.field0_0x0.d[0] = vColorAdd.field0_0x0.d[0];
        vReflect.field0_0x0.d[1] = vColorAdd.field0_0x0.d[1];
        vReflect.field0_0x0.d[2] = vColorAdd.field0_0x0.d[2];
      }
      if ((DAT_1100c7a0 & 0x400) != 0) {
        Project__5EVec4((EVec4 *)&vReflect);
      }
      if ((DAT_1100c7a0 & 0x80) != 0) {
        pEVar9 = __opR5EVec2__C5EVec4((EVec4 *)&vReflect);
        pEVar12 = tv->vTC;
        puVar1 = (undefined *)((int)&pEVar9->field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        uVar3 = (uint)pEVar9 & 7;
        uVar13 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                 (long)(int)pEVar12 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                 -1L << (8 - uVar3) * 8 | *(ulong *)((int)pEVar9 - uVar3) >> uVar3 * 8;
        puVar1 = (undefined *)((int)&tv->vTC[0].field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar13 >> (7 - uVar2) * 8;
        uVar2 = (uint)pEVar12 & 7;
        *(ulong *)((int)pEVar12 - uVar2) =
             uVar13 << uVar2 * 8 |
             *(ulong *)((int)pEVar12 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      }
      if ((DAT_1100c7a0 & 0x100) != 0) {
        pEVar9 = __opR5EVec2__C5EVec4((EVec4 *)&vReflect);
        pEVar12 = tv->vTC + 1;
        puVar1 = (undefined *)((int)&pEVar9->field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        uVar3 = (uint)pEVar9 & 7;
        uVar13 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
                 (long)(int)pEVar12 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) &
                 -1L << (8 - uVar3) * 8 | *(ulong *)((int)pEVar9 - uVar3) >> uVar3 * 8;
        puVar1 = (undefined *)((int)&tv->vTC[1].field0_0x0 + 7);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar13 >> (7 - uVar2) * 8;
        uVar2 = (uint)pEVar12 & 7;
        *(ulong *)((int)pEVar12 - uVar2) =
             uVar13 << uVar2 * 8 |
             *(ulong *)((int)pEVar12 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      }
    }
  }
  if ((DAT_1100c7a0 & 0x10) != 0) {
    pfVar5 = __vc__5EVec4i((EVec4 *)&DAT_1100c790,0);
    pfVar6 = __vc__5EVec4i((EVec4 *)&DAT_1100c790,1);
    pfVar10 = __vc__5EVec4i((EVec4 *)&DAT_1100c790,2);
    __5EVec3fff(&vWorldPos,*pfVar5,*pfVar6,*pfVar10);
    pEVar11 = __opR5EVec3__C5EVec4(&vModel);
    __mi__C5EVec3RC5EVec3((EVec3 *)&vNormal,&vWorldPos,pEVar11);
    fVar14 = MagSq__C5EVec3((EVec3 *)&vNormal);
    pfVar5 = __vc__5EVec4i((EVec4 *)&DAT_1100c790,3);
    strength = 1.0 - fVar14 * *pfVar5;
    if (strength < 0.0) {
      strength = 0.0;
    }
    pEVar7 = __vc__5EMat4i((EMat4 *)&DAT_1100c750,2);
    __ml__FfRC5EVec4((EVec4 *)&vViewPos,strength,pEVar7);
    pEVar11 = __opR5EVec3__C5EVec4((EVec4 *)&vViewPos);
    __5EVec3RC5EVec3(&vColorAdd,pEVar11);
    pfVar5 = __vc__5EVec4i(&tv->vColor,0);
    pfVar6 = __vc__5EVec3i(&vColorAdd,0);
    *pfVar5 = *pfVar5 + *pfVar6;
    pfVar5 = __vc__5EVec4i(&tv->vColor,1);
    pfVar6 = __vc__5EVec3i(&vColorAdd,1);
    *pfVar5 = *pfVar5 + *pfVar6;
    pfVar5 = __vc__5EVec4i(&tv->vColor,2);
    pfVar6 = __vc__5EVec3i(&vColorAdd,2);
    *pfVar5 = *pfVar5 + *pfVar6;
    Clamp__5EVec4ff(&tv->vColor,0.0,255.0);
    pfVar5 = __vc__5EVec4i(&tv->vColor,0);
    v->color[0] = (int)*pfVar5;
    pfVar5 = __vc__5EVec4i(&tv->vColor,1);
    v->color[1] = (int)*pfVar5;
    pfVar5 = __vc__5EVec4i(&tv->vColor,2);
    v->color[2] = (int)*pfVar5;
  }
  pfVar5 = __vc__5EVec4i(&v->vModel,3);
  tv->adc = (uint)*pfVar5 & 0x8000;
  return;
}

static void geProjectVert(EPs2GETransformedVert *tv, bool clipped) {
	float invW;
	EVec4 vInvW;
	float q;
	int p;
	
  float *pfVar1;
  float fVar2;
  float invW;
  EVec4 vInvW;
  float q;
  int p;
  
  pfVar1 = __vc__5EVec4i(&tv->vEye,3);
  if (*pfVar1 == 0.0) {
    __as__5EVec4f(&tv->vScreen,0.0);
  }
  else {
    pfVar1 = __vc__5EVec4i(&tv->vEye,3);
    fVar2 = 1.0 / *pfVar1;
    __5EVec4(&vInvW);
    pfVar1 = __vc__5EVec4i(&vInvW,0);
    *pfVar1 = fVar2;
    pfVar1 = __vc__5EVec4i(&vInvW,1);
    *pfVar1 = fVar2;
    pfVar1 = __vc__5EVec4i(&vInvW,2);
    *pfVar1 = fVar2;
    pfVar1 = __vc__5EVec4i(&vInvW,3);
    *pfVar1 = 1.0;
    Mult__5EVec4RC5EVec4T1(&tv->vScreen,&tv->vEye,&vInvW);
    if (clipped) {
      Mult__5EVec4RC5EVec4T1(&tv->vScreen,&tv->vScreen,(EVec4 *)&DAT_1100c6f0);
      __apl__5EVec4RC5EVec4(&tv->vScreen,(EVec4 *)&DAT_1100c700);
    }
    ToS32s__5EVec4Pi(&tv->vColor,(int *)(tv->d).color);
    ToS32s__5EVec4Pi(&tv->vScreen,(int *)(tv->d).screen);
    if ((tv->adc == 0) || (clipped)) {
      (tv->d).screen[3] = 0;
    }
    else {
      (tv->d).screen[3] = 0x8000;
    }
    fVar2 = fVar2 * DAT_1100cd3c;
    for (p = 0; p < 2; p = p + 1) {
      pfVar1 = __vc__5EVec2i(tv->vTC + p,0);
      (tv->d).tc[p].s = *pfVar1 * fVar2;
      pfVar1 = __vc__5EVec2i(tv->vTC + p,1);
      (tv->d).tc[p].t = *pfVar1 * fVar2;
      (tv->d).tc[p].q = fVar2;
      (tv->d).tc[p].unused = 0;
    }
  }
  return;
}

static u32 geClipVert(EVec4 &vEye) {
	u32 flags;
	float absw;
	float nabsw;
	float x;
	float y;
	float z;
	
  float fVar1;
  float fVar2;
  float fVar3;
  uint flags;
  float absw;
  float nabsw;
  float x;
  float y;
  float z;
  
  flags = 0;
  fVar1 = __vc__C5EVec4i(vEye,3);
  fVar1 = fabsf(fVar1);
  fVar3 = -fVar1;
  fVar2 = __vc__C5EVec4i(vEye,0);
  if (fVar2 < fVar3) {
    flags = 2;
  }
  else if (fVar1 < fVar2) {
    flags = 1;
  }
  fVar2 = __vc__C5EVec4i(vEye,1);
  if (fVar2 < fVar3) {
    flags = flags | 8;
  }
  else if (fVar1 < fVar2) {
    flags = flags | 4;
  }
  fVar2 = __vc__C5EVec4i(vEye,2);
  if (fVar2 < fVar3) {
    flags = flags | 0x20;
  }
  else if (fVar1 < fVar2) {
    flags = flags | 0x10;
  }
  return flags;
}

static void geInterpolateVert(float u, EPs2GETransformedVert *pNewVert, EPs2GETransformedVert *pv1, EPs2GETransformedVert *pv2) {
	int ctc;
	
  int ctc;
  
  for (ctc = 0; ctc < 2; ctc = ctc + 1) {
    Blend__5EVec2fRC5EVec2T2(pNewVert->vTC + ctc,u,pv1->vTC + ctc,pv2->vTC + ctc);
  }
  Blend__5EVec4fRC5EVec4T2(&pNewVert->vEye,u,&pv1->vEye,&pv2->vEye);
  Blend__5EVec4fRC5EVec4T2(&pNewVert->vColor,u,&pv1->vColor,&pv2->vColor);
  return;
}

static void geClipLine(int nPlane, EPs2GETransformedVert *pNewVert, EPs2GETransformedVert *pv1, EPs2GETransformedVert *pv2) {
	EPs2GEClipPlane *pPlane;
	int dim;
	float invplane;
	float a;
	float b;
	float numerat;
	float k;
	float denom;
	float q;
	EVec4 vClipRatioPos;
	EPs2GETransformedVert *pTemp;
	
  int value;
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EPs2GETransformedVert *local_d8;
  EPs2GETransformedVert *local_d4;
  EPs2GETransformedVert *pTemp;
  int dim;
  float invplane;
  float a;
  float b;
  float numerat;
  float k;
  float denom;
  float q;
  EVec4 vClipRatioPos;
  EVec4 EStack_90;
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
  
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s8;
  uStack_4c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pfVar1 = __vc__5EVec4i(&pv1->vEye,0);
  pfVar2 = __vc__5EVec4i(&pv2->vEye,0);
  local_d8 = pv2;
  local_d4 = pv1;
  if (*pfVar1 <= *pfVar2) {
    local_d8 = pv1;
    local_d4 = pv2;
  }
  value = (&DAT_1100c690)[nPlane * 4];
  fVar6 = (float)(&DAT_1100c69c)[nPlane * 4];
  pfVar1 = __vc__5EVec4i(&local_d4->vEye,3);
  pfVar2 = __vc__5EVec4i(&local_d8->vEye,3);
  fVar7 = *pfVar1;
  fVar4 = *pfVar2;
  pfVar1 = __vc__5EVec4i(&local_d8->vEye,3);
  fVar5 = *pfVar1;
  pfVar1 = __vc__5EVec4i(&local_d8->vEye,value);
  fVar8 = *pfVar1;
  pfVar1 = __vc__5EVec4i(&local_d8->vEye,value);
  pfVar2 = __vc__5EVec4i(&local_d4->vEye,value);
  fVar4 = (fVar7 - fVar4) * fVar6 + (*pfVar1 - *pfVar2);
  if (fVar4 == 0.0) {
    q = 0.0;
  }
  else {
    fVar4 = (fVar8 - fVar6 * fVar5) / fVar4;
    if (0.0 <= fVar4) {
      q = (float)((int)fVar4 * (uint)(fVar4 < 1.0) | (uint)(fVar4 >= 1.0) * 0x3f800000);
    }
    else {
      q = 0.0;
    }
  }
  geInterpolateVert__FfP21EPs2GETransformedVertN21(q,pNewVert,local_d8,local_d4);
  geProjectVert__FP21EPs2GETransformedVertb(pNewVert,true);
  __5EVec4(&vClipRatioPos);
  Mult__5EVec4RC5EVec4T1(&vClipRatioPos,&pNewVert->vEye,(EVec4 *)&DAT_1100c7b0);
  pfVar1 = __vc__5EVec4i(&pNewVert->vEye,3);
  __ml__FfRC5EVec4(&EStack_90,*pfVar1,(EVec4 *)&DAT_1100ff90);
  __apl__5EVec4RC5EVec4(&vClipRatioPos,&EStack_90);
  uVar3 = geClipVert__FRC5EVec4(&vClipRatioPos);
  pNewVert->clipFlags = uVar3;
  return;
}

static bool geBackCull(EPs2GETransformedVert **pVerts) {
	EVec4 &v0;
	EVec4 &v1;
	EVec4 &v2;
	float dx1;
	float dy1;
	float dx2;
	float dy2;
	float crossZ;
	bool backFacing;
	
  EPs2GETransformedVert *pEVar1;
  EPs2GETransformedVert *pEVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  EVec4 *this;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  EVec4 *v0;
  EVec4 *v1;
  EVec4 *v2;
  float dx1;
  float dy1;
  float dx2;
  float dy2;
  float crossZ;
  bool backFacing;
  
  pEVar1 = *pVerts;
  this = &pVerts[1]->vScreen;
  pEVar2 = pVerts[2];
  pfVar3 = __vc__5EVec4i(this,0);
  pfVar4 = __vc__5EVec4i(&pEVar1->vScreen,0);
  fVar9 = *pfVar3;
  fVar6 = *pfVar4;
  pfVar3 = __vc__5EVec4i(this,1);
  pfVar4 = __vc__5EVec4i(&pEVar1->vScreen,1);
  fVar10 = *pfVar3;
  fVar7 = *pfVar4;
  pfVar3 = __vc__5EVec4i(&pEVar2->vScreen,0);
  pfVar4 = __vc__5EVec4i(this,0);
  fVar11 = *pfVar3;
  fVar8 = *pfVar4;
  pfVar3 = __vc__5EVec4i(&pEVar2->vScreen,1);
  pfVar4 = __vc__5EVec4i(this,1);
  bVar5 = 0.0 <= (fVar9 - fVar6) * (*pfVar3 - *pfVar4) - (fVar10 - fVar7) * (fVar11 - fVar8);
  if ((DAT_1100c7a0 & 2) == 0) {
    bVar5 = !bVar5;
  }
  return bVar5;
}

void geDrawClippedTri(EPs2GETransformedVert **pVerts) {
	bool needsCulling;
	u32 and;
	u32 or;
	int cVert;
	u32 flags;
	u32 or2;
	int cVert2;
	EVec4 vClipRatioPos;
	u32 flags;
	int extraVertCount;
	int maxExtraVerts;
	EPs2GETransformedVert extraVerts[12];
	int maxTotalVertCount;
	EPs2GETransformedVert *pInVerts[9];
	EPs2GETransformedVert *pOutVerts[9];
	int inVertCount;
	u32 planeFlag;
	int v;
	int cPlane;
	int outVertCount;
	int inVertPos;
	EPs2GETransformedVert *pv;
	EPs2GETransformedVert *pnv;
	u32 vflag;
	u32 nvflag;
	EPs2GETransformedVert *pNewVert;
	int cOutVert;
	
  bool bVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  EPs2GETransformedVert *pEVar5;
  bool needsCulling;
  uint and;
  uint or;
  int cVert;
  uint or2;
  int cVert2;
  EVec4 vClipRatioPos;
  EVec4 EStack_810;
  int extraVertCount;
  int maxExtraVerts;
  EPs2GETransformedVert extraVerts [12];
  int maxTotalVertCount;
  EPs2GETransformedVert *pInVerts [9];
  EPs2GETransformedVert *pOutVerts [9];
  int inVertCount;
  int v;
  uint planeFlag;
  int cPlane;
  int outVertCount;
  int inVertPos;
  EPs2GETransformedVert *pv;
  EPs2GETransformedVert *pnv;
  uint vflag;
  uint nvflag;
  int cOutVert;
  
  if ((pVerts[2]->adc & 0x8000) == 0) {
    bVar1 = (DAT_1100c7a0 & 6) == 0;
    if ((DAT_1100c7a0 & 0x2001) != 0) {
      and = 0xffffffff;
      or = 0;
      for (cVert = 0; cVert < 3; cVert = cVert + 1) {
        uVar2 = geClipVert__FRC5EVec4(&pVerts[cVert]->vEye);
        and = and & uVar2;
        or = or | uVar2;
      }
      if (and != 0) {
        return;
      }
      if ((or != 0) || ((DAT_1100c7a0 & 0x2000) != 0)) {
        or2 = 0;
        for (cVert2 = 0; cVert2 < 3; cVert2 = cVert2 + 1) {
          __5EVec4(&vClipRatioPos);
          Mult__5EVec4RC5EVec4T1(&vClipRatioPos,&pVerts[cVert2]->vEye,(EVec4 *)&DAT_1100c7b0);
          pfVar3 = __vc__5EVec4i(&pVerts[cVert2]->vEye,3);
          __ml__FfRC5EVec4(&EStack_810,*pfVar3,(EVec4 *)&DAT_1100ff90);
          __apl__5EVec4RC5EVec4(&vClipRatioPos,&EStack_810);
          extraVertCount = geClipVert__FRC5EVec4(&vClipRatioPos);
          pVerts[cVert2]->clipFlags = extraVertCount;
          or2 = or2 | extraVertCount;
        }
        if (or2 != 0) {
          extraVertCount = 0;
          maxExtraVerts = 0xc;
          pEVar5 = extraVerts;
          iVar4 = 0xb;
          do {
            __21EPs2GETransformedVert(pEVar5);
            pEVar5 = pEVar5 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != -1);
          inVertCount = 3;
          for (v = 0; v < 3; v = v + 1) {
            pInVerts[v] = pVerts[v];
          }
          planeFlag = 0x20;
          cPlane = 0;
          do {
            if (5 < cPlane) {
              if ((!bVar1) && (bVar1 = geBackCull__FPP21EPs2GETransformedVert(pInVerts), bVar1)) {
                return;
              }
              geAddTriFan__FPP21EPs2GETransformedVerti(pInVerts,inVertCount + -2);
              return;
            }
            if ((or2 & planeFlag) != 0) {
              outVertCount = 0;
              for (inVertPos = 0; iVar4 = extraVertCount, inVertPos < inVertCount;
                  inVertPos = inVertPos + 1) {
                pv = pInVerts[inVertPos];
                if (inVertCount == 0) {
                  trap(7);
                }
                pnv = pInVerts[(inVertPos + 1) % inVertCount];
                vflag = pv->clipFlags & planeFlag;
                nvflag = pnv->clipFlags & planeFlag;
                if (vflag == 0) {
                  pOutVerts[outVertCount] = pv;
                  outVertCount = outVertCount + 1;
                }
                if (vflag != nvflag) {
                  pEVar5 = extraVerts + extraVertCount;
                  extraVertCount = extraVertCount + 1;
                  geClipLine__FiP21EPs2GETransformedVertN21(cPlane,pEVar5,pv,pnv);
                  or2 = or2 | extraVerts[iVar4].clipFlags;
                  pOutVerts[outVertCount] = pEVar5;
                  outVertCount = outVertCount + 1;
                }
              }
              if (outVertCount == 0) {
                return;
              }
              for (cOutVert = 0; cOutVert < outVertCount; cOutVert = cOutVert + 1) {
                pInVerts[cOutVert] = pOutVerts[cOutVert];
              }
              inVertCount = outVertCount;
            }
            planeFlag = planeFlag >> 1;
            cPlane = cPlane + 1;
          } while( true );
        }
      }
    }
    if ((bVar1) || (bVar1 = geBackCull__FPP21EPs2GETransformedVert(pVerts), !bVar1)) {
      geAddTriFan__FPP21EPs2GETransformedVerti(pVerts,1);
    }
  }
  return;
}

void geAddTriFan(EPs2GETransformedVert **pVerts, int nTris) {
	EVec4 *pVert0Data;
	EPs2GETransformedVert **pLastVert;
	EPs2GETransformedVert **pThisVert;
	EVec4 *pLastVertData;
	EVec4 *pThisVertData;
	
  EPs2GETransformedVert *pEVar1;
  EPs2GETransformedVert *pEVar2;
  undefined8 uVar3;
  EPs2GEOutputBuffer *pEVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int local_cc;
  EVec4 *pVert0Data;
  EPs2GETransformedVert **pLastVert;
  EPs2GETransformedVert **pThisVert;
  EVec4 *pLastVertData;
  EVec4 *pThisVertData;
  
  pEVar1 = *pVerts;
  pLastVert = pVerts + 1;
  pThisVert = pVerts + 2;
  local_cc = nTris;
  do {
    uVar3 = *(undefined8 *)(pEVar1->d).tc;
    fVar5 = (pEVar1->d).tc[0].q;
    uVar6 = (pEVar1->d).tc[0].unused;
    DAT_1100c678->d_u32[0] = (uint)uVar3;
    DAT_1100c678->d_u32[1] = (uint)((ulong)uVar3 >> 0x20);
    DAT_1100c678->d_u32[2] = (uint)fVar5;
    DAT_1100c678->d_u32[3] = uVar6;
    uVar3 = *(undefined8 *)((pEVar1->d).tc + 1);
    fVar5 = (pEVar1->d).tc[1].q;
    uVar6 = (pEVar1->d).tc[1].unused;
    DAT_1100c678[1].d_u32[0] = (uint)uVar3;
    *(int *)((int)DAT_1100c678 + 0x14) = (int)((ulong)uVar3 >> 0x20);
    *(float *)((int)DAT_1100c678 + 0x18) = fVar5;
    *(uint *)((int)DAT_1100c678 + 0x1c) = uVar6;
    uVar3 = *(undefined8 *)(pEVar1->d).color;
    uVar6 = (pEVar1->d).color[2];
    uVar7 = (pEVar1->d).color[3];
    DAT_1100c678[2].d_u32[0] = (uint)uVar3;
    *(int *)((int)DAT_1100c678 + 0x24) = (int)((ulong)uVar3 >> 0x20);
    *(uint *)((int)DAT_1100c678 + 0x28) = uVar6;
    *(uint *)((int)DAT_1100c678 + 0x2c) = uVar7;
    uVar3 = *(undefined8 *)(pEVar1->d).screen;
    uVar6 = (pEVar1->d).screen[2];
    uVar7 = (pEVar1->d).screen[3];
    DAT_1100c678[3].d_u32[0] = (uint)uVar3;
    *(int *)((int)DAT_1100c678 + 0x34) = (int)((ulong)uVar3 >> 0x20);
    *(uint *)((int)DAT_1100c678 + 0x38) = uVar6;
    *(uint *)((int)DAT_1100c678 + 0x3c) = uVar7;
    pEVar2 = *pLastVert;
    pLastVert = pLastVert + 1;
    uVar3 = *(undefined8 *)(pEVar2->d).tc;
    fVar5 = (pEVar2->d).tc[0].q;
    uVar6 = (pEVar2->d).tc[0].unused;
    DAT_1100c678[4].d_u32[0] = (uint)uVar3;
    *(int *)((int)DAT_1100c678 + 0x44) = (int)((ulong)uVar3 >> 0x20);
    *(float *)((int)DAT_1100c678 + 0x48) = fVar5;
    *(uint *)((int)DAT_1100c678 + 0x4c) = uVar6;
    uVar3 = *(undefined8 *)((pEVar2->d).tc + 1);
    fVar5 = (pEVar2->d).tc[1].q;
    uVar6 = (pEVar2->d).tc[1].unused;
    DAT_1100c678[5].d_u32[0] = (uint)uVar3;
    *(int *)((int)DAT_1100c678 + 0x54) = (int)((ulong)uVar3 >> 0x20);
    *(float *)((int)DAT_1100c678 + 0x58) = fVar5;
    *(uint *)((int)DAT_1100c678 + 0x5c) = uVar6;
    uVar3 = *(undefined8 *)(pEVar2->d).color;
    uVar6 = (pEVar2->d).color[2];
    uVar7 = (pEVar2->d).color[3];
    DAT_1100c678[6].d_u32[0] = (uint)uVar3;
    *(int *)((int)DAT_1100c678 + 100) = (int)((ulong)uVar3 >> 0x20);
    *(uint *)((int)DAT_1100c678 + 0x68) = uVar6;
    *(uint *)((int)DAT_1100c678 + 0x6c) = uVar7;
    uVar3 = *(undefined8 *)(pEVar2->d).screen;
    uVar6 = (pEVar2->d).screen[2];
    uVar7 = (pEVar2->d).screen[3];
    DAT_1100c678[7].d_u32[0] = (uint)uVar3;
    *(int *)((int)DAT_1100c678 + 0x74) = (int)((ulong)uVar3 >> 0x20);
    *(uint *)((int)DAT_1100c678 + 0x78) = uVar6;
    *(uint *)((int)DAT_1100c678 + 0x7c) = uVar7;
    pEVar2 = *pThisVert;
    pThisVert = pThisVert + 1;
    uVar3 = *(undefined8 *)(pEVar2->d).tc;
    fVar5 = (pEVar2->d).tc[0].q;
    uVar6 = (pEVar2->d).tc[0].unused;
    DAT_1100c678[8].d_u32[0] = (uint)uVar3;
    *(int *)((int)DAT_1100c678 + 0x84) = (int)((ulong)uVar3 >> 0x20);
    *(float *)((int)DAT_1100c678 + 0x88) = fVar5;
    *(uint *)((int)DAT_1100c678 + 0x8c) = uVar6;
    uVar3 = *(undefined8 *)((pEVar2->d).tc + 1);
    fVar5 = (pEVar2->d).tc[1].q;
    uVar6 = (pEVar2->d).tc[1].unused;
    DAT_1100c678[9].d_u32[0] = (uint)uVar3;
    *(int *)((int)DAT_1100c678 + 0x94) = (int)((ulong)uVar3 >> 0x20);
    *(float *)((int)DAT_1100c678 + 0x98) = fVar5;
    *(uint *)((int)DAT_1100c678 + 0x9c) = uVar6;
    uVar3 = *(undefined8 *)(pEVar2->d).color;
    uVar6 = (pEVar2->d).color[2];
    uVar7 = (pEVar2->d).color[3];
    DAT_1100c678[10].d_u32[0] = (uint)uVar3;
    *(int *)((int)DAT_1100c678 + 0xa4) = (int)((ulong)uVar3 >> 0x20);
    *(uint *)((int)DAT_1100c678 + 0xa8) = uVar6;
    *(uint *)((int)DAT_1100c678 + 0xac) = uVar7;
    uVar3 = *(undefined8 *)(pEVar2->d).screen;
    uVar6 = (pEVar2->d).screen[2];
    uVar7 = (pEVar2->d).screen[3];
    DAT_1100c678[0xb].d_u32[0] = (uint)uVar3;
    *(int *)((int)DAT_1100c678 + 0xb4) = (int)((ulong)uVar3 >> 0x20);
    *(uint *)((int)DAT_1100c678 + 0xb8) = uVar6;
    *(uint *)((int)DAT_1100c678 + 0xbc) = uVar7;
    DAT_1100c678 = DAT_1100c678 + 0xc;
    local_cc = local_cc + -1;
  } while (local_cc != 0);
  pEVar4 = geGetOutputBuffer__Fv();
  if (pEVar4->pFlushPos < DAT_1100c678) {
    geFlushPrims__Fv();
  }
  return;
}

static void geDrawClippedLine(EPs2GETransformedVert **pVerts) {
	u32 and;
	u32 or;
	int cVert;
	u32 flags;
	u32 or2;
	int cVert2;
	EVec4 vClipRatioPos;
	u32 flags;
	EPs2GETransformedVert newVerts[2];
	u32 planeFlag;
	EPs2GETransformedVert *pClippedVerts[2];
	int cPlane;
	int cVert3;
	EPs2GETransformedVert *pnv;
	
  uint uVar1;
  float *pfVar2;
  int iVar3;
  EPs2GETransformedVert *this;
  uint and;
  uint or;
  int cVert;
  uint or2;
  int cVert2;
  EVec4 vClipRatioPos;
  EVec4 EStack_1c0;
  uint planeFlag;
  EPs2GETransformedVert newVerts [2];
  int cPlane;
  int cVert3;
  EPs2GETransformedVert *pnv;
  
  if ((DAT_1100c7a0 & 1) != 0) {
    and = 0xffffffff;
    or = 0;
    for (cVert = 0; cVert < 2; cVert = cVert + 1) {
      uVar1 = geClipVert__FRC5EVec4(&pVerts[cVert]->vEye);
      and = and & uVar1;
      or = or | uVar1;
    }
    if (and != 0) {
      return;
    }
    if (or != 0) {
      or2 = 0;
      for (cVert2 = 0; cVert2 < 2; cVert2 = cVert2 + 1) {
        __5EVec4(&vClipRatioPos);
        Mult__5EVec4RC5EVec4T1(&vClipRatioPos,&pVerts[cVert2]->vEye,(EVec4 *)&DAT_1100c7b0);
        pfVar2 = __vc__5EVec4i(&pVerts[cVert2]->vEye,3);
        __ml__FfRC5EVec4(&EStack_1c0,*pfVar2,(EVec4 *)&DAT_1100ff90);
        __apl__5EVec4RC5EVec4(&vClipRatioPos,&EStack_1c0);
        planeFlag = geClipVert__FRC5EVec4(&vClipRatioPos);
        pVerts[cVert2]->clipFlags = planeFlag;
        or2 = or2 | planeFlag;
      }
      if (or2 != 0) {
        this = newVerts;
        iVar3 = 1;
        do {
          __21EPs2GETransformedVert(this);
          this = this + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != -1);
        memcpy(newVerts,*pVerts,0x90);
        memcpy(newVerts + 1,pVerts[1],0x90);
        planeFlag = 0x20;
        cPlane = 0;
        while( true ) {
          if (5 < cPlane) {
            vClipRatioPos.field0_0x0.d[0] = (float)newVerts;
            vClipRatioPos.field0_0x0.d[1] = (float)(newVerts + 1);
            geAddVerts__FPP21EPs2GETransformedVerti((EPs2GETransformedVert **)&vClipRatioPos,2);
            return;
          }
          if ((or2 & planeFlag) != 0) {
            for (cVert3 = 0; cVert3 < 2; cVert3 = cVert3 + 1) {
              if ((newVerts[cVert3].clipFlags & planeFlag) != 0) {
                geClipLine__FiP21EPs2GETransformedVertN21
                          (cPlane,newVerts + cVert3,newVerts,newVerts + 1);
                or2 = or2 | newVerts[cVert3].clipFlags;
              }
            }
          }
          if ((newVerts[0].clipFlags & newVerts[1].clipFlags) != 0) break;
          planeFlag = planeFlag >> 1;
          cPlane = cPlane + 1;
        }
        return;
      }
    }
  }
  geAddVerts__FPP21EPs2GETransformedVerti(pVerts,2);
  return;
}

void geDrawClippedSprite(EPs2GETransformedVert **pVerts) {
	u32 and;
	u32 or;
	EPs2GETransformedVert newVerts[2];
	u32 planeFlag;
	EPs2GETransformedVert *pClippedVerts[2];
	int cVert;
	u32 flags;
	int cPlane;
	int whichClipped;
	
  uint uVar1;
  int iVar2;
  EPs2GETransformedVert *this;
  uint and;
  uint or;
  int cVert;
  uint planeFlag;
  EPs2GETransformedVert newVerts [2];
  int cPlane;
  int whichClipped;
  EPs2GETransformedVert *pClippedVerts [2];
  
  if (DAT_1100c7a0 == 0) {
    geAddVerts__FPP21EPs2GETransformedVerti(pVerts,2);
  }
  else {
    and = 0xffffffff;
    or = 0;
    for (cVert = 0; cVert < 2; cVert = cVert + 1) {
      uVar1 = geClipVert__FRC5EVec4(&pVerts[cVert]->vEye);
      pVerts[cVert]->clipFlags = uVar1;
      and = and & uVar1;
      or = or | uVar1;
    }
    if (and == 0) {
      if (or == 0) {
        geAddVerts__FPP21EPs2GETransformedVerti(pVerts,2);
      }
      else {
        this = newVerts;
        iVar2 = 1;
        do {
          __21EPs2GETransformedVert(this);
          this = this + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != -1);
        memcpy(newVerts,*pVerts,0x90);
        memcpy(newVerts + 1,pVerts[1],0x90);
        planeFlag = 0x20;
        for (cPlane = 0; cPlane < 6; cPlane = cPlane + 1) {
          if ((or & planeFlag) != 0) {
            geClipLine__FiP21EPs2GETransformedVertN21
                      (cPlane,newVerts + ((newVerts[0].clipFlags & planeFlag) == 0),newVerts,
                       newVerts + 1);
          }
          planeFlag = planeFlag >> 1;
        }
        pClippedVerts[0] = newVerts;
        pClippedVerts[1] = newVerts + 1;
        geAddVerts__FPP21EPs2GETransformedVerti(pClippedVerts,2);
      }
    }
  }
  return;
}

static void geDrawClippedPoint(EPs2GETransformedVert **pVerts) {
	u32 flags;
	
  uint uVar1;
  uint flags;
  
  if (((DAT_1100c7a0 & 1) == 0) || (uVar1 = geClipVert__FRC5EVec4(&(*pVerts)->vEye), uVar1 == 0)) {
    geAddVerts__FPP21EPs2GETransformedVerti(pVerts,1);
  }
  return;
}

static void geAddVerts(EPs2GETransformedVert **pVerts, int nVerts) {
	EPs2GETransformedVert *pCurVert;
	EVec4 *pCurVertData;
	
  undefined8 uVar1;
  EPs2GEOutputBuffer *pEVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  int local_6c;
  EPs2GETransformedVert *pCurVert;
  EVec4 *pCurVertData;
  
  local_6c = nVerts;
  pCurVert = *pVerts;
  do {
    uVar1 = *(undefined8 *)(pCurVert->d).tc;
    fVar3 = (pCurVert->d).tc[0].q;
    uVar4 = (pCurVert->d).tc[0].unused;
    DAT_1100c678->d_u32[0] = (uint)uVar1;
    DAT_1100c678->d_u32[1] = (uint)((ulong)uVar1 >> 0x20);
    DAT_1100c678->d_u32[2] = (uint)fVar3;
    DAT_1100c678->d_u32[3] = uVar4;
    uVar1 = *(undefined8 *)((pCurVert->d).tc + 1);
    fVar3 = (pCurVert->d).tc[1].q;
    uVar4 = (pCurVert->d).tc[1].unused;
    DAT_1100c678[1].d_u32[0] = (uint)uVar1;
    *(int *)((int)DAT_1100c678 + 0x14) = (int)((ulong)uVar1 >> 0x20);
    *(float *)((int)DAT_1100c678 + 0x18) = fVar3;
    *(uint *)((int)DAT_1100c678 + 0x1c) = uVar4;
    uVar1 = *(undefined8 *)(pCurVert->d).color;
    uVar4 = (pCurVert->d).color[2];
    uVar5 = (pCurVert->d).color[3];
    DAT_1100c678[2].d_u32[0] = (uint)uVar1;
    *(int *)((int)DAT_1100c678 + 0x24) = (int)((ulong)uVar1 >> 0x20);
    *(uint *)((int)DAT_1100c678 + 0x28) = uVar4;
    *(uint *)((int)DAT_1100c678 + 0x2c) = uVar5;
    uVar1 = *(undefined8 *)(pCurVert->d).screen;
    uVar4 = (pCurVert->d).screen[2];
    uVar5 = (pCurVert->d).screen[3];
    DAT_1100c678[3].d_u32[0] = (uint)uVar1;
    *(int *)((int)DAT_1100c678 + 0x34) = (int)((ulong)uVar1 >> 0x20);
    *(uint *)((int)DAT_1100c678 + 0x38) = uVar4;
    *(uint *)((int)DAT_1100c678 + 0x3c) = uVar5;
    DAT_1100c678 = DAT_1100c678 + 4;
    local_6c = local_6c + -1;
    pCurVert = pCurVert + 1;
  } while (local_6c != 0);
  pEVar2 = geGetOutputBuffer__Fv();
  if (pEVar2->pFlushPos < DAT_1100c678) {
    geFlushPrims__Fv();
  }
  return;
}

static void geClipTriStrip(EPs2GEGSEntry *pOutStart, EPs2GEGSEntry *pEnd, int nOutRegs) {
	EPs2GEGSEntry *pCur;
	bool needsTesselation;
	EPs2GEGSEntry *pModelXYZ;
	EVec4 vModelXYZW;
	EVec4 vEyeXYZW;
	u32 flags;
	u32 verts1ago;
	u32 verts2ago;
	bool reject;
	EVec4 vModelXYZW;
	EVec4 vEyeXYZW;
	u32 flags;
	u32 andVal;
	
  EPs2GEGSEntry__302_2188 *pEVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  EPs2GEGSEntry__302_2188 *pCur;
  bool needsTesselation;
  EPs2GEGSEntry__302_2188 *pModelXYZ;
  EVec4 vModelXYZW;
  EVec4 vEyeXYZW;
  uint verts1ago;
  uint verts2ago;
  bool reject;
  uint flags;
  uint andVal;
  
  if ((DAT_1100c7a0 & 0x2040) == 0) {
    bVar2 = false;
    pModelXYZ = DAT_1100c680 + 5;
    pCur = pOutStart;
    do {
      if (pCur == pEnd) goto LAB_00314104;
      pCur = pCur + nOutRegs;
      __5EVec4ffff(&vModelXYZW,pModelXYZ->d_f32[0],pModelXYZ->d_f32[1],pModelXYZ->d_f32[2],1.0);
      __5EVec4(&vEyeXYZW);
      Mult__C5EMat4RC5EVec4R5EVec4((EMat4 *)&DAT_1100c220,&vModelXYZW,&vEyeXYZW);
      pModelXYZ = pModelXYZ + 5;
      pfVar3 = __vc__5EVec4i(&vEyeXYZW,0);
      pfVar4 = __vc__5EVec4i((EVec4 *)&DAT_1100c7b0,0);
      *pfVar3 = *pfVar3 * *pfVar4;
      pfVar3 = __vc__5EVec4i(&vEyeXYZW,1);
      pfVar4 = __vc__5EVec4i((EVec4 *)&DAT_1100c7b0,1);
      *pfVar3 = *pfVar3 * *pfVar4;
      pfVar3 = __vc__5EVec4i(&vEyeXYZW,2);
      pfVar4 = __vc__5EVec4i((EVec4 *)&DAT_1100c7b0,2);
      *pfVar3 = *pfVar3 * *pfVar4;
      uVar5 = geClipVert__FRC5EVec4(&vEyeXYZW);
    } while (uVar5 == 0);
    bVar2 = true;
LAB_00314104:
    if (bVar2) {
      verts1ago = 0xffffffff;
      verts2ago = 0xffffffff;
      bVar2 = true;
      pCur = pOutStart;
      pEVar1 = DAT_1100c680;
      while (pModelXYZ = pEVar1 + 5, pCur != pEnd) {
        pCur = pCur + nOutRegs;
        __5EVec4ffff(&vModelXYZW,pModelXYZ->d_f32[0],*(float *)((int)pEVar1 + 0x54),
                     *(float *)((int)pEVar1 + 0x58),1.0);
        __5EVec4(&vEyeXYZW);
        Mult__C5EMat4RC5EVec4R5EVec4((EMat4 *)&DAT_1100c220,&vModelXYZW,&vEyeXYZW);
        uVar5 = geClipVert__FRC5EVec4(&vEyeXYZW);
        if ((uVar5 & verts1ago & verts2ago) == 0) {
          bVar2 = false;
          break;
        }
        verts2ago = verts1ago;
        verts1ago = uVar5;
        pEVar1 = pModelXYZ;
      }
      if (!bVar2) {
        geTriStripTesselated__Fv();
      }
    }
    else {
      geFlushPrims__Fv();
    }
  }
  else {
    geTriStripTesselated__Fv();
  }
  return;
}

static void geFlushTriStrip(EPs2GEGSEntry *pOutStart, int nOutRegs, int nVtxs) {
	EPs2GEGSEntry *pEnd;
	
  EPs2GEGSEntry__302_2188 *pEnd;
  
  if ((DAT_1100c7a0 & 0x2001) == 0) {
    geFlushPrims__Fv();
  }
  else {
    geClipTriStrip__FP13EPs2GEGSEntryT0i(pOutStart,DAT_1100c678,nOutRegs);
  }
  return;
}

void geVertex() {
  return;
}

void geTriIndexed() {
  return;
}

float& EVec2::operator[](int value) {
  return (this->field0_0x0).d + value;
}

EVec2& EVec2::Blend(float u, EVec2 &vA, EVec2 &vB) {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EVec2__null___1__1 aEStack_a0 [2];
  EVec2 aEStack_90 [2];
  EVec2 aEStack_80 [2];
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
  
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s8;
  uStack_2c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  __mi__C5EVec2RC5EVec2(aEStack_80,vB);
  __ml__C5EVec2f(aEStack_90,u);
  __pl__C5EVec2RC5EVec2((EVec2 *)&aEStack_a0[0].field1,vA);
  puVar1 = (undefined *)((int)&this->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)aEStack_a0[0] >> (7 - uVar2) * 8;
  uVar2 = (uint)this & 7;
  *(ulong *)((int)this - uVar2) =
       (long)aEStack_a0[0] << uVar2 * 8 |
       *(ulong *)((int)this - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  return this;
}

EVec3* EVec3::EVec3(float x, float y, float z) {
  (this->field0_0x0).d[0] = x;
  (this->field0_0x0).d[1] = y;
  (this->field0_0x0).d[2] = z;
  return this;
}

EVec3* EVec3::EVec3(EVec3 &v) {
  (this->field0_0x0).d[0] = (v->field0_0x0).d[0];
  (this->field0_0x0).d[1] = (v->field0_0x0).d[1];
  (this->field0_0x0).d[2] = (v->field0_0x0).d[2];
  return this;
}

float& EVec3::operator[](int value) {
  return (this->field0_0x0).d + value;
}

EVec3 EVec3::operator-(EVec3 &v) {
  __5EVec3fff(__return_storage_ptr__,(this->field0_0x0).d[0] - (v->field0_0x0).d[0],
              (this->field0_0x0).d[1] - (v->field0_0x0).d[1],
              (this->field0_0x0).d[2] - (v->field0_0x0).d[2]);
  return __return_storage_ptr__;
}

EVec3& EVec3::operator*=(float scaler) {
  (this->field0_0x0).d[0] = (this->field0_0x0).d[0] * scaler;
  (this->field0_0x0).d[1] = (this->field0_0x0).d[1] * scaler;
  (this->field0_0x0).d[2] = (this->field0_0x0).d[2] * scaler;
  return this;
}

float EVec3::operator*(EVec3 &v) {
  return (this->field0_0x0).d[0] * (v->field0_0x0).d[0] +
         (this->field0_0x0).d[1] * (v->field0_0x0).d[1] +
         (this->field0_0x0).d[2] * (v->field0_0x0).d[2];
}

float EVec3::MagSq() {
  return (this->field0_0x0).d[0] * (this->field0_0x0).d[0] +
         (this->field0_0x0).d[1] * (this->field0_0x0).d[1] +
         (this->field0_0x0).d[2] * (this->field0_0x0).d[2];
}

float EVec3::Mag() {
  float fVar1;
  
  fVar1 = MagSq__C5EVec3(this);
  fVar1 = sqrtf(fVar1);
  return fVar1;
}

EVec3& EVec3::Normalize() {
	float mag;
	
  float scaler;
  float mag;
  
  scaler = Mag__C5EVec3(this);
  if (scaler != 0.0) {
    __adv__5EVec3f(this,scaler);
  }
  return this;
}

EVec3 operator*(float scaler, EVec3 &vVec) {
  __5EVec3fff(__return_storage_ptr__,scaler * (vVec->field0_0x0).d[0],
              scaler * (vVec->field0_0x0).d[1],scaler * (vVec->field0_0x0).d[2]);
  return __return_storage_ptr__;
}

EVec4* EVec4::EVec4() {
  return this;
}

EVec4* EVec4::EVec4(float v) {
  (this->field0_0x0).d[3] = v;
  (this->field0_0x0).d[2] = v;
  (this->field0_0x0).d[1] = v;
  (this->field0_0x0).d[0] = v;
  return this;
}

EVec4* EVec4::EVec4(float x, float y, float z, float w) {
  (this->field0_0x0).d[0] = x;
  (this->field0_0x0).d[1] = y;
  (this->field0_0x0).d[2] = z;
  (this->field0_0x0).d[3] = w;
  return this;
}

EVec4* EVec4::EVec4(EVec3 &v) {
  (this->field0_0x0).d[0] = (v->field0_0x0).d[0];
  (this->field0_0x0).d[1] = (v->field0_0x0).d[1];
  (this->field0_0x0).d[2] = (v->field0_0x0).d[2];
  (this->field0_0x0).d[3] = 1.0;
  return this;
}

EVec4& EVec4::operator=(float v) {
  (this->field0_0x0).d[0] = v;
  (this->field0_0x0).d[1] = v;
  (this->field0_0x0).d[2] = v;
  (this->field0_0x0).d[3] = v;
  return this;
}

float& EVec4::operator[](int value) {
  return (this->field0_0x0).d + value;
}

float EVec4::operator[](int value) {
  return (this->field0_0x0).d[value];
}

EVec2& EVec4::operator EVec2 &() {
  return (EVec2 *)this;
}

EVec3& EVec4::operator EVec3 &() {
  return (EVec3 *)this;
}

EVec4& EVec4::operator+=(EVec4 &v) {
  (this->field0_0x0).d[0] = (this->field0_0x0).d[0] + (v->field0_0x0).d[0];
  (this->field0_0x0).d[1] = (this->field0_0x0).d[1] + (v->field0_0x0).d[1];
  (this->field0_0x0).d[2] = (this->field0_0x0).d[2] + (v->field0_0x0).d[2];
  (this->field0_0x0).d[3] = (this->field0_0x0).d[3] + (v->field0_0x0).d[3];
  return this;
}

EVec4& EVec4::operator*=(float scaler) {
  (this->field0_0x0).d[0] = (this->field0_0x0).d[0] * scaler;
  (this->field0_0x0).d[1] = (this->field0_0x0).d[1] * scaler;
  (this->field0_0x0).d[2] = (this->field0_0x0).d[2] * scaler;
  (this->field0_0x0).d[3] = (this->field0_0x0).d[3] * scaler;
  return this;
}

EVec4& EVec4::Mult(EVec4 &vL, EVec4 &vR) {
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  undefined8 local_60;
  float fStack_58;
  float fStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  Mult__C5EVec4RC5EVec4((EVec4 *)&local_60,vL,vR);
  (this->field0_0x0).d[0] = (float)local_60;
  (this->field0_0x0).d[1] = (float)((ulong)local_60 >> 0x20);
  (this->field0_0x0).d[2] = fStack_58;
  (this->field0_0x0).d[3] = fStack_54;
  return this;
}

EVec4& EVec4::Normalize3() {
  Normalize__5EVec3((EVec3 *)this);
  (this->field0_0x0).d[3] = 1.0;
  return this;
}

EVec4& EVec4::Project() {
	float invW;
	
  float fVar1;
  float invW;
  
  if ((this->field0_0x0).d[3] == 0.0) {
    __as__5EVec4f(this,0.0);
  }
  else {
    fVar1 = 1.0 / (this->field0_0x0).d[3];
    (this->field0_0x0).d[0] = (this->field0_0x0).d[0] * fVar1;
    (this->field0_0x0).d[1] = (this->field0_0x0).d[1] * fVar1;
    (this->field0_0x0).d[2] = (this->field0_0x0).d[2] * fVar1;
    (this->field0_0x0).d[3] = 1.0;
  }
  return this;
}

EVec4& EVec4::Blend(float u, EVec4 &vA, EVec4 &vB) {
	int i;
	
  float fVar1;
  float fVar2;
  float fVar3;
  int i;
  
  for (i = 0; i < 4; i = i + 1) {
    fVar1 = __vc__C5EVec4i(vA,i);
    fVar2 = __vc__C5EVec4i(vB,i);
    fVar3 = __vc__C5EVec4i(vA,i);
    (this->field0_0x0).d[i] = fVar1 + (fVar2 - fVar3) * u;
  }
  return this;
}

void EVec4::ToS32s(int *v) {
	int i;
	
  int i;
  
  for (i = 0; i < 4; i = i + 1) {
    v[i] = (int)(this->field0_0x0).d[i];
  }
  return;
}

void EVec4::Clamp(float low, float high) {
	int i;
	
  float fVar1;
  int i;
  
  for (i = 0; i < 4; i = i + 1) {
    fVar1 = low;
    if (low <= (this->field0_0x0).d[i]) {
      fVar1 = (this->field0_0x0).d[i];
      fVar1 = (float)((int)high * (uint)(high < fVar1) | (int)fVar1 * (uint)(high >= fVar1));
    }
    (this->field0_0x0).d[i] = fVar1;
  }
  return;
}

EVec4 operator*(float scaler, EVec4 &vVec) {
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = __vc__C5EVec4i(vVec,0);
  fVar1 = scaler * fVar1;
  fVar2 = __vc__C5EVec4i(vVec,1);
  fVar3 = __vc__C5EVec4i(vVec,2);
  fVar3 = scaler * fVar3;
  fVar4 = __vc__C5EVec4i(vVec,3);
  __5EVec4ffff(__return_storage_ptr__,fVar1,scaler * fVar2,fVar3,scaler * fVar4);
  return __return_storage_ptr__;
}

EMat4* EMat4::EMat4() {
  return this;
}

EMat4* EMat4::EMat4(EMat4 &m) {
  __as__5EMat4RC5EMat4(this,m);
  return this;
}

EVec4& EMat4::operator[](int row) {
  return (EVec4 *)((int)&this->field0_0x0 + row * 0x10);
}

void EMat4::Mult(EVec4 &vIn, EVec4 &vOut) {
  float *pfVar1;
  
  pfVar1 = __opPf__5EVec4(vOut);
  sceVu0ApplyMatrix(pfVar1,this,vIn);
  return;
}

EVec3 operator*(EVec3 &vLeft, EMat4 &mRight) {
  __5EVec3fff(__return_storage_ptr__,
              (vLeft->field0_0x0).d[0] * (mRight->field0_0x0).d[0] +
              (vLeft->field0_0x0).d[1] * (mRight->field0_0x0).d[1][0] +
              (vLeft->field0_0x0).d[2] * (mRight->field0_0x0).d[2][0] + (mRight->field0_0x0).d[3][0]
              ,(vLeft->field0_0x0).d[0] * (mRight->field0_0x0).d[1] +
               (vLeft->field0_0x0).d[1] * (mRight->field0_0x0).d[1][1] +
               (vLeft->field0_0x0).d[2] * (mRight->field0_0x0).d[2][1] +
               (mRight->field0_0x0).d[3][1],
              (vLeft->field0_0x0).d[0] * (mRight->field0_0x0).d[2] +
              (vLeft->field0_0x0).d[1] * (mRight->field0_0x0).d[1][2] +
              (vLeft->field0_0x0).d[2] * (mRight->field0_0x0).d[2][2] + (mRight->field0_0x0).d[3][2]
             );
  return __return_storage_ptr__;
}

EVec4 EMat4::SoftwareMult(EVec4 &v) {
  __5EVec4ffff(__return_storage_ptr__,
               (v->field0_0x0).d[0] * (this->field0_0x0).d[0] +
               (v->field0_0x0).d[1] * (this->field0_0x0).d[1][0] +
               (v->field0_0x0).d[2] * (this->field0_0x0).d[2][0] +
               (v->field0_0x0).d[3] * (this->field0_0x0).d[3][0],
               (v->field0_0x0).d[0] * (this->field0_0x0).d[1] +
               (v->field0_0x0).d[1] * (this->field0_0x0).d[1][1] +
               (v->field0_0x0).d[2] * (this->field0_0x0).d[2][1] +
               (v->field0_0x0).d[3] * (this->field0_0x0).d[3][1],
               (v->field0_0x0).d[0] * (this->field0_0x0).d[2] +
               (v->field0_0x0).d[1] * (this->field0_0x0).d[1][2] +
               (v->field0_0x0).d[2] * (this->field0_0x0).d[2][2] +
               (v->field0_0x0).d[3] * (this->field0_0x0).d[3][2],
               (v->field0_0x0).d[0] * (this->field0_0x0).d[3] +
               (v->field0_0x0).d[1] * (this->field0_0x0).d[1][3] +
               (v->field0_0x0).d[2] * (this->field0_0x0).d[2][3] +
               (v->field0_0x0).d[3] * (this->field0_0x0).d[3][3]);
  return __return_storage_ptr__;
}

void EMat4::SoftwareMult(EVec4 &vIn, EVec4 &vOut) {
  (vOut->field0_0x0).d[0] =
       (vIn->field0_0x0).d[0] * (this->field0_0x0).d[0] +
       (vIn->field0_0x0).d[1] * (this->field0_0x0).d[1][0] +
       (vIn->field0_0x0).d[2] * (this->field0_0x0).d[2][0] +
       (vIn->field0_0x0).d[3] * (this->field0_0x0).d[3][0];
  (vOut->field0_0x0).d[1] =
       (vIn->field0_0x0).d[0] * (this->field0_0x0).d[1] +
       (vIn->field0_0x0).d[1] * (this->field0_0x0).d[1][1] +
       (vIn->field0_0x0).d[2] * (this->field0_0x0).d[2][1] +
       (vIn->field0_0x0).d[3] * (this->field0_0x0).d[3][1];
  (vOut->field0_0x0).d[2] =
       (vIn->field0_0x0).d[0] * (this->field0_0x0).d[2] +
       (vIn->field0_0x0).d[1] * (this->field0_0x0).d[1][2] +
       (vIn->field0_0x0).d[2] * (this->field0_0x0).d[2][2] +
       (vIn->field0_0x0).d[3] * (this->field0_0x0).d[3][2];
  (vOut->field0_0x0).d[3] =
       (vIn->field0_0x0).d[0] * (this->field0_0x0).d[3] +
       (vIn->field0_0x0).d[1] * (this->field0_0x0).d[1][3] +
       (vIn->field0_0x0).d[2] * (this->field0_0x0).d[2][3] +
       (vIn->field0_0x0).d[3] * (this->field0_0x0).d[3][3];
  return;
}

EPs2GETransformedVert* EPs2GETransformedVert::EPs2GETransformedVert() {
  int iVar1;
  EVec2 *this_00;
  
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2geometryengine.cpp */
                    /* end of inlined section */
  __5EVec4(&this->vEye);
  __5EVec4(&this->vScreen);
  __5EVec4(&this->vColor);
  this_00 = this->vTC;
  iVar1 = 1;
  do {
    __5EVec2(this_00);
    this_00 = this_00 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
                    /* inlined from c:/eor/src2/engine/ps2/e_ps2geometryengine.cpp */
  return this;
}

EVec2* EVec2::EVec2() {
  return this;
}

EVec2 EVec2::operator+(EVec2 &v) {
  float *in_a2_lo;
  
  __5EVec2ff(this,(v->field0_0x0).d[0] + *in_a2_lo,(v->field0_0x0).d[1] + in_a2_lo[1]);
  return (EVec2)(EVec2__null___1__1)(long)(int)this;
}

EVec2 EVec2::operator-(EVec2 &v) {
  float *in_a2_lo;
  
  __5EVec2ff(this,(v->field0_0x0).d[0] - *in_a2_lo,(v->field0_0x0).d[1] - in_a2_lo[1]);
  return (EVec2)(EVec2__null___1__1)(long)(int)this;
}

EVec2 EVec2::operator*(float scaler) {
  float *in_a1_lo;
  
  __5EVec2ff(this,scaler * *in_a1_lo,scaler * in_a1_lo[1]);
  return (EVec2)(EVec2__null___1__1)(long)(int)this;
}

EVec3& EVec3::operator/=(float scaler) {
	float invScaler;
	
  float fVar1;
  float invScaler;
  
  fVar1 = 1.0 / scaler;
  (this->field0_0x0).d[0] = (this->field0_0x0).d[0] * fVar1;
  (this->field0_0x0).d[1] = (this->field0_0x0).d[1] * fVar1;
  (this->field0_0x0).d[2] = (this->field0_0x0).d[2] * fVar1;
  return this;
}

float* EVec4::operator float *() {
  return (float *)this;
}

EVec4 EVec4::Mult(EVec4 &v) {
  __5EVec4ffff(__return_storage_ptr__,(this->field0_0x0).d[0] * (v->field0_0x0).d[0],
               (this->field0_0x0).d[1] * (v->field0_0x0).d[1],
               (this->field0_0x0).d[2] * (v->field0_0x0).d[2],
               (this->field0_0x0).d[3] * (v->field0_0x0).d[3]);
  return __return_storage_ptr__;
}

EVec2* EVec2::EVec2(float x, float y) {
  (this->field0_0x0).d[0] = x;
  (this->field0_0x0).d[1] = y;
  return this;
}
