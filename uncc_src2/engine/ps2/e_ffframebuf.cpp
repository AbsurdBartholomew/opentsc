// STATUS: NOT STARTED

#include "e_ffframebuf.h"

typedef union {
	u_long128 ul128;
	long unsigned int ul64[2];
	unsigned int ui32[4];
	sceVu0FVECTOR fvect;
} QWdata;

typedef struct {
	QWdata GIFtag;
	QWdata data[4];
	u_int size;
} GIFTagData;

static int _lastAlpha = -1;
static GIFTagData _bluralpha;

void CalcFrameBufferPositions(fsAABuff *buff, short int dispW, short int dispH, short int dispPSM) {
	int size;
	
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  iVar4 = 0x46;
  uVar3 = 0x46;
  if (dispPSM == 2) {
LAB_002d6c30:
    if (dispH == 0x1c0) {
      iVar4 = 0x46;
    }
    else {
      uVar2 = 0x8c;
      if (dispH != 0x200) {
        buff->dispFBP0 = 0;
        goto LAB_002d6c88;
      }
      iVar4 = 0x50;
    }
LAB_002d6c80:
    uVar2 = (ushort)(iVar4 << 1);
    uVar1 = (ushort)iVar4;
  }
  else {
    if ((short)dispPSM < 3) {
      if (-1 < (short)dispPSM) {
        if (dispH == 0x1c0) {
          iVar4 = 0x8c;
        }
        else {
          uVar2 = 0x8c;
          if (dispH != 0x200) {
            buff->dispFBP0 = 0;
            goto LAB_002d6c88;
          }
          iVar4 = 0xa0;
        }
      }
      goto LAB_002d6c80;
    }
    uVar2 = 0x8c;
    uVar1 = 0x46;
    if (dispPSM == 10) goto LAB_002d6c30;
  }
  uVar3 = uVar1;
  buff->dispFBP0 = 0;
LAB_002d6c88:
  buff->zFBP = uVar2;
  buff->dispFBP1 = uVar3;
  return;
}

void SetupFS_AA_buffer(fsAABuff *buff, short int dispW, short int dispH, short int dispPSM, short int ztest, short int zPSM, short int clear, float horizontalBlur) {
  buff->dispW = dispW;
  buff->dispH = dispH;
  buff->dispPSM = dispPSM;
  buff->zPSM = zPSM;
  CalcFrameBufferPositions__FP8fsAABuffsss(buff,dispW,dispH,dispPSM);
  SetDispBuffers__FP8fsAABuffsssssf
            (buff,dispW,dispH,dispPSM,buff->dispFBP0,buff->dispFBP1,horizontalBlur);
  SetDrawBuffersSmall__FP8fsAABuffsssssssss
            (buff,dispW,dispH,dispPSM,buff->dispFBP0,buff->dispFBP1,buff->zFBP,ztest,
             (int)(short)zPSM,(int)(short)clear);
  return;
}

void SetDispBuffers(fsAABuff *buff, short int w, short int h, short int psm, short int fbp0, short int fbp1, float horizontalBlur) {
  ulong uVar1;
  tGS_DISPFB2__223_629 tVar2;
  tGS_DISPLAY2__223_636 tVar3;
  
  sceGsSetDefDispEnv(buff,psm,w,h,0,0);
  tVar3 = (buff->disp0).display;
  tVar2 = (buff->disp0).dispfb;
  (buff->disp0).pmode.field_0x1 = 0x80;
  uVar1 = ((long)(int)(((uint)((ulong)tVar3 >> 0x2c) & 0x7ff) - 1) & 0x7ffU) << 0x2c;
  (buff->disp0).display = (tGS_DISPLAY2__223_636)((ulong)tVar3 & 0xff800fffffffffff | uVar1);
  (buff->disp0).dispfb =
       (tGS_DISPFB2__223_629)
       ((ulong)tVar2 & 0xffc007fffffffe00 | (long)(int)(short)fbp0 & 0x1ffU | 0x80000000000);
  (buff->disp0).pmode = (tGS_PMODE__223_601)((ulong)(buff->disp0).pmode | 3);
  (buff->disp0).dispfb1 =
       (tGS_DISPFB1__223_615)((ulong)tVar2 & 0xfffffffffffffe00 | (long)(int)(short)fbp0 & 0x1ffU);
  (buff->disp0).display1 = (tGS_DISPLAY1__223_622)tVar3;
  (buff->disp0).display =
       (tGS_DISPLAY2__223_636)
       ((ulong)tVar3 & 0xff800ffffffff000 | uVar1 |
       (long)(int)((*(uint *)&(buff->disp0).display & 0xfff) + (int)(horizontalBlur * 3.0)) & 0xfffU
       );
  sceGsSetDefDispEnv(&buff->disp1,psm,w,h,0,0);
  tVar3 = (buff->disp1).display;
  (buff->disp1).pmode.field_0x1 = 0x80;
  tVar2 = (buff->disp1).dispfb;
  uVar1 = ((long)(int)(((uint)((ulong)tVar3 >> 0x2c) & 0x7ff) - 1) & 0x7ffU) << 0x2c;
  (buff->disp1).display = (tGS_DISPLAY2__223_636)((ulong)tVar3 & 0xff800fffffffffff | uVar1);
  (buff->disp1).dispfb =
       (tGS_DISPFB2__223_629)
       ((ulong)tVar2 & 0xffc007fffffffe00 | (long)(int)(short)fbp1 & 0x1ffU | 0x80000000000);
  (buff->disp1).pmode = (tGS_PMODE__223_601)((ulong)(buff->disp1).pmode | 3);
  (buff->disp1).display =
       (tGS_DISPLAY2__223_636)
       ((ulong)tVar3 & 0xff800ffffffff000 | uVar1 |
       (long)(int)((*(uint *)&(buff->disp1).display & 0xfff) + (int)(horizontalBlur * 3.0)) & 0xfffU
       );
  (buff->disp1).dispfb1 =
       (tGS_DISPFB1__223_615)((ulong)tVar2 & 0xfffffffffffffe00 | (long)(int)(short)fbp1 & 0x1ffU);
  (buff->disp1).display1 = (tGS_DISPLAY1__223_622)tVar3;
  return;
}

void SetDrawBuffersSmall(fsAABuff *buff, short int w, short int h, short int psm, short int fbp0, short int fbp1, short int zbp, short int ztest, int zpsm, int clear) {
	short int zpsm;
	
  ulong uVar1;
  sceGsZbuf__258_1030 sVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)(short)w;
  iVar5 = (int)(short)h;
  uVar3 = (ulong)(short)zpsm;
  sceGsSetDefDrawEnv(&buff->drawSmall0,psm,iVar4,iVar5,ztest,uVar3);
  (buff->drawSmall0).frame1 =
       (sceGsFrame__258_834)
       ((ulong)(buff->drawSmall0).frame1 & 0xfffffffffffffe00 | (long)(int)(short)fbp0 & 0x1ffU);
  if (ztest == 0) {
    (buff->drawSmall0).zbuf1 =
         (sceGsZbuf__258_1030)((long)(short)zbp | (uVar3 & 0xf) << 0x18 | 0x100000000);
  }
  else {
    (buff->drawSmall0).zbuf1 = (sceGsZbuf__258_1030)((long)(short)zbp | (uVar3 & 0xf) << 0x18);
  }
  *(undefined4 *)&buff->giftagDrawSmall0 = 0;
  *(undefined4 *)&(buff->giftagDrawSmall0).field_0x4 = 0;
  *(undefined4 *)&(buff->giftagDrawSmall0).field_0x8 = 0;
  *(undefined4 *)&(buff->giftagDrawSmall0).field_0xc = 0;
  uVar1 = *(ulong *)&buff->giftagDrawSmall0;
  *(ulong *)&(buff->giftagDrawSmall0).field_0x8 =
       *(ulong *)&(buff->giftagDrawSmall0).field_0x8 & 0xfffffffffffffff0 | 0xe;
  *(ulong *)&buff->giftagDrawSmall0 = uVar1 & 0xfffffffffff8000 | 0x100000000000800e;
  sceGsSetDefClear(&buff->clearSmall0,ztest,0x800 - (iVar4 >> 1),0x800 - (iVar5 >> 1),iVar4,iVar5,0,
                   0);
  sceGsSetDefDrawEnv(&buff->drawSmall1,psm,iVar4,iVar5,ztest,uVar3);
  (buff->drawSmall1).frame1 =
       (sceGsFrame__258_834)
       ((ulong)(buff->drawSmall1).frame1 & 0xfffffffffffffe00 | (long)(int)(short)fbp1 & 0x1ffU);
  if (ztest == 0) {
    sVar2 = (sceGsZbuf__258_1030)((long)(short)zbp | (uVar3 & 0xf) << 0x18 | 0x100000000);
  }
  else {
    sVar2 = (sceGsZbuf__258_1030)((long)(short)zbp | (uVar3 & 0xf) << 0x18);
  }
  (buff->drawSmall1).zbuf1 = sVar2;
  *(undefined4 *)&buff->giftagDrawSmall1 = 0;
  *(undefined4 *)&(buff->giftagDrawSmall1).field_0x4 = 0;
  *(undefined4 *)&(buff->giftagDrawSmall1).field_0x8 = 0;
  *(undefined4 *)&(buff->giftagDrawSmall1).field_0xc = 0;
  uVar3 = *(ulong *)&buff->giftagDrawSmall1;
  *(ulong *)&(buff->giftagDrawSmall1).field_0x8 =
       *(ulong *)&(buff->giftagDrawSmall1).field_0x8 & 0xfffffffffffffff0 | 0xe;
  *(ulong *)&buff->giftagDrawSmall1 = uVar3 & 0xfffffffffff8000 | 0x100000000000800e;
  sceGsSetDefClear(&buff->clearSmall1,ztest,0x800 - (iVar4 >> 1),0x800 - (iVar5 >> 1),iVar4,iVar5,0,
                   0);
  return;
}

void PutDispBuffer(fsAABuff *buff, int bufferNum, int both) {
  ulong uVar1;
  
  if (bufferNum == 0) {
    if (both == 0) {
      uVar1 = (ulong)(buff->disp0).pmode & 0xfffffffffffffffe;
    }
    else {
      uVar1 = (ulong)(buff->disp0).pmode | 1;
    }
    (buff->disp0).pmode = (tGS_PMODE__223_601)(uVar1 | 2);
    REG_GS_PMODE = (buff->disp0).pmode;
    REG_GS_SMODE2 = (buff->disp0).smode2;
    REG_GS_DISPFB2 = (buff->disp0).dispfb;
    REG_GS_DISPLAY2 = (buff->disp0).display;
    REG_GS_BGCOLOR = (buff->disp0).bgcolor;
    REG_GS_DISPLAY1 = (buff->disp0).display1;
    REG_GS_DISPFB1 = (buff->disp0).dispfb1;
    return;
  }
  if (both == 0) {
    uVar1 = (ulong)(buff->disp1).pmode & 0xfffffffffffffffe;
  }
  else {
    uVar1 = (ulong)(buff->disp1).pmode | 1;
  }
  (buff->disp1).pmode = (tGS_PMODE__223_601)(uVar1 | 2);
  REG_GS_PMODE = (buff->disp1).pmode;
  REG_GS_SMODE2 = (buff->disp1).smode2;
  REG_GS_DISPFB2 = (buff->disp1).dispfb;
  REG_GS_DISPLAY2 = (buff->disp1).display;
  REG_GS_BGCOLOR = (buff->disp1).bgcolor;
  REG_GS_DISPLAY1 = (buff->disp1).display1;
  REG_GS_DISPFB1 = (buff->disp1).dispfb1;
  return;
}

void PutDrawBufferSmall(fsAABuff *buff, int bufferNum, int clear) {
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  
  if (clear == 0) {
    uVar2 = *(ulong *)&buff->giftagDrawSmall0;
    uVar1 = *(ulong *)&buff->giftagDrawSmall1;
    iVar3 = 8;
  }
  else {
    uVar2 = *(ulong *)&buff->giftagDrawSmall0;
    uVar1 = *(ulong *)&buff->giftagDrawSmall1;
    iVar3 = 0xe;
  }
  *(ulong *)&buff->giftagDrawSmall0 = uVar2 & 0xffffffffffff8000 | (long)iVar3;
  *(ulong *)&buff->giftagDrawSmall1 = uVar1 & 0xffffffffffff8000 | (long)iVar3;
  FlushCache(0);
  WaitGS__12EPs2Graphics(&_ps2gfx);
  if (bufferNum == 0) {
    sceGsPutDrawEnv(&buff->giftagDrawSmall0);
  }
  else {
    sceGsPutDrawEnv(&buff->giftagDrawSmall1);
  }
  return;
}

void PutCopySprite(sceGifTag *spriteTag) {
	u_int vcnt;
	
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = REG_DMAC_2_GIF_CHCR;
  while ((uVar2 & 0x100) != 0) {
    bVar1 = 0x1000000 < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar1) {
      printf("SPRITE:Error starting DMA: DMA Ch.2 does not terminate\r\n");
    }
    uVar2 = REG_DMAC_2_GIF_CHCR;
  }
  REG_DMAC_2_GIF_QWC = (*(ushort *)spriteTag & 0x7fff) + 1;
  if (((uint)spriteTag & 0x70000000) == 0x70000000) {
    uVar2 = (uint)spriteTag & 0xfffffff | 0x80000000;
  }
  else {
    uVar2 = (uint)spriteTag & 0xfffffff;
  }
  REG_DMAC_2_GIF_MADR = uVar2;
  REG_DMAC_2_GIF_CHCR = 0x101;
  return;
}

void SetCopyPreviousFrameSprite(fsAABuff *buff, gsDrawDecalSprite *spriteStruct, int oddFrame, EMotionBlur &mb) {
	int ialpha;
	short int offset;
	float fDispW;
	float fDispH;
	float xs;
	float ys;
	EMat4 mOrient;
	float scaleCenterX2;
	float scaleCenterY2;
	EVec3 vUL;
	EVec3 vLR;
	EVec3 vULt;
	EVec3 vLRt;
	int left;
	int top;
	int right;
	int bottom;
	EVec3 *this;
	float x;
	float y;
	float y;
	float x;
	
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EMat4 mOrient;
  EVec3 vUL;
  EVec3 vLR;
  EVec3 vULt;
  EVec3 vLRt;
  
  fVar5 = mb->alpha;
  iVar4 = 0x80;
  if (0.0 <= fVar5) {
    iVar4 = 0x80 - (int)((float)((int)fVar5 * (uint)(fVar5 < 1.0) |
                                (uint)(fVar5 >= 1.0) * 0x3f800000) * 128.0);
  }
  SetBlurAmountAlpha__Fi(iVar4);
  *(undefined4 *)&spriteStruct->giftag0 = 0;
  *(undefined4 *)&(spriteStruct->giftag0).field_0x4 = 0;
  *(undefined4 *)&(spriteStruct->giftag0).field_0x8 = 0;
  *(undefined4 *)&(spriteStruct->giftag0).field_0xc = 0;
  uVar3 = *(ulong *)&(spriteStruct->giftag0).field_0x8;
  *(ulong *)&spriteStruct->giftag0 =
       *(ulong *)&spriteStruct->giftag0 & 0x3fffffff8000 | 0x100000000000800a;
  *(ulong *)&(spriteStruct->giftag0).field_0x8 = uVar3 & 0xfffffffffffffff0 | 0xe;
  spriteStruct->tex1addr = 0x14;
  spriteStruct->tex0addr = 6;
  spriteStruct->rgbaq0addr = 1;
  spriteStruct->uv1addr = 3;
  spriteStruct->xyz1addr = 5;
  spriteStruct->testbaddr = 0x47;
  spriteStruct->testb = 0x70000;
  spriteStruct->testaaddr = 0x47;
  spriteStruct->primaddr = 0;
  spriteStruct->uv0addr = 3;
  spriteStruct->xyz0addr = 5;
  spriteStruct->testa = 0;
  if (oddFrame == 0) {
    uVar2 = buff->dispW;
    uVar3 = 0xaa8000000;
    uVar1 = buff->dispFBP1;
  }
  else {
    uVar2 = buff->dispW;
    uVar3 = 0x2a8000000;
    uVar1 = buff->dispFBP0;
  }
  spriteStruct->tex0 =
       (sceGsTex0__258_939)
       ((long)(short)uVar1 << 5 | ((long)(int)(uint)(uVar2 >> 6) & 0x3fU) << 0xe |
        (long)(short)buff->dispPSM << 0x14 | uVar3);
  if ((mb->scaleX == 1.0) && (mb->scaleY == 1.0)) {
    spriteStruct->tex1 = (sceGsTex1__258_946)0x100000201;
  }
  else {
    spriteStruct->tex1 = (sceGsTex1__258_946)0x100000261;
  }
  spriteStruct->prim = 0x156;
  spriteStruct->rgbaq0 = 0x3f80000080808080;
  spriteStruct->xyz0 =
       (long)((short)buff->dispW * -8 + 0x8000) | (long)((short)buff->dispH * -8 + 0x8000) << 0x10 |
       0x271000000000;
  spriteStruct->xyz1 =
       (long)((short)buff->dispW * 8 + 0x8000) | (long)((short)buff->dispH * 8 + 0x8000) << 0x10 |
       0x271000000000;
  iVar4 = 8;
  if ((short)buff->dispH < 0x101) {
    iVar4 = (uint)(oddFrame != 0) << 4;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
  fVar8 = (float)((int)(short)buff->dispH << 4);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vUL.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  fVar7 = (float)((int)(short)buff->dispW << 4);
  vUL.field0_0x0.d[0] = -mb->scaleCenterX;
  vUL.field0_0x0.d[1] = -mb->scaleCenterY;
  fVar6 = (1.0 / mb->scaleX) * fVar7;
  fVar5 = (1.0 / mb->scaleY) * fVar8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  Translate__5EMat4RC5EVec3(&mOrient,&vUL);
  vUL.field0_0x0.d[2] = 1.0;
  vUL.field0_0x0.d[0] = fVar6;
  vUL.field0_0x0.d[1] = fVar5;
  PostScale__5EMat4RC5EVec3(&mOrient,&vUL);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vUL.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
  vUL.field0_0x0.d[1] = mb->scaleCenterY * fVar8 + mb->offsetY * fVar8;
  vUL.field0_0x0.d[0] = mb->scaleCenterX * fVar7 + mb->offsetX * fVar7;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  PostTranslate__5EMat4RC5EVec3(&mOrient,&vUL);
  vUL.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vUL.field0_0x0.d[1] = 0.0;
  vUL.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  spriteStruct->uv1 =
       (long)((int)(mOrient.field0_0x0.d[0][0] * 1.0 + mOrient.field0_0x0.d[1][0] * 1.0 +
                   mOrient.field0_0x0.d[3][0]) + 8) |
       (long)((int)(mOrient.field0_0x0.d[0][1] * 1.0 + mOrient.field0_0x0.d[1][1] * 1.0 +
                   mOrient.field0_0x0.d[3][1]) + iVar4) << 0x10;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  spriteStruct->uv0 =
       (long)((int)(mOrient.field0_0x0.d[0][0] * 0.0 + mOrient.field0_0x0.d[1][0] * 0.0 +
                    mOrient.field0_0x0.d[2][0] * 0.0 + mOrient.field0_0x0.d[3][0]) + 8) |
       (long)((int)(mOrient.field0_0x0.d[0][1] * 0.0 + mOrient.field0_0x0.d[1][1] * 0.0 +
                    mOrient.field0_0x0.d[2][1] * 0.0 + mOrient.field0_0x0.d[3][1]) + iVar4) << 0x10;
  FlushCache(0);
  return;
}

void SetBlurAmountAlpha(int alpha) {
	GIFTagData *pGIFAlpha;
	
  if ((long)alpha != (long)_lastAlpha) {
    _bluralpha.data[0]._0_8_ = (long)alpha << 0x20 | 100;
    _bluralpha.GIFtag.ul64[0] = 0x1000000000008004;
    _bluralpha.data[0]._8_8_ = 0x42;
    _bluralpha.data[1]._8_8_ = 0x3b;
    _bluralpha.data[1]._0_8_ = 0x8000000080;
    _bluralpha.data[2]._8_8_ = 0x49;
    _bluralpha.data[3]._8_8_ = 0x4a;
    _bluralpha.GIFtag.ul64[1] = 0xe;
    _bluralpha.data[2]._0_8_ = 0;
    _bluralpha.data[3]._0_8_ = 0;
    FlushCache(0);
    _lastAlpha = alpha;
  }
  SendGSDisplayList__12EPs2GraphicsPvii(&_ps2gfx,&_bluralpha,5,0);
  return;
}
