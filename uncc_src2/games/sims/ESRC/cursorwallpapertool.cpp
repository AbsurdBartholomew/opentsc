// STATUS: NOT STARTED

#include "cursorwallpapertool.h"

TilePtDir _PerpTilePointTab[9] = {
	/* [0] = */ kNW,
	/* [1] = */ kSE,
	/* [2] = */ kSW,
	/* [3] = */ kNE,
	/* [4] = */ kW,
	/* [5] = */ kE,
	/* [6] = */ kN,
	/* [7] = */ kS,
	/* [8] = */ kNone
};

float _wallpaperOff = -0.25f;

void ForcePointDir(CTilePt &c0, CTilePt &c1) {
	CTilePt c0P;
	CTilePt c1P;
	Int minY;
	Int minX;
	float slope;
	CTilePt vt;
	CTilePt vt;
	
  bool bVar1;
  char cVar2;
  int iVar3;
  CTilePt c0P;
  CTilePt c1P;
  CTilePt vt;
  
  __7CTilePtRC7CTilePt(&c0P,c0);
  __7CTilePtRC7CTilePt(&c1P,c1);
  if (c0P.mX == c1P.mX) {
    cVar2 = c1P.mY;
    if ((long)(int)c0P.mY < (long)c1P.mY) {
      cVar2 = c0P.mY;
    }
    if ((long)(int)c1P.mY < (long)(int)c0P.mY) {
      c1P.mY = c0P.mY;
    }
    c0P.mY = cVar2;
    bVar1 = __ne__C7CTilePtRC7CTilePt(&c0P,c0);
    if (bVar1) {
      c0P.mY = c0P.mY + '\x01';
      c1P.mY = c1P.mY + '\x01';
    }
  }
  else {
    iVar3 = (int)c0P.mY;
    if ((long)iVar3 == (long)c1P.mY) {
      cVar2 = c1P.mX;
      if (c0P.mX < c1P.mX) {
        cVar2 = c0P.mX;
      }
      if (c1P.mX < c0P.mX) {
        c1P.mX = c0P.mX;
      }
      c0P.mX = cVar2;
      bVar1 = __ne__C7CTilePtRC7CTilePt(&c0P,c0);
      if (bVar1) {
        c0P.mX = c0P.mX + '\x01';
        c1P.mX = c1P.mX + '\x01';
      }
    }
    else {
      if (0.0 < (float)(c1P.mY - iVar3) / (float)((int)c1P.mX - (int)c0P.mX)) {
        if (c1P.mX < c0P.mX) {
          __7CTilePtRC7CTilePt(&vt,&c0P);
          __as__7CTilePtRC7CTilePt(&c0P,&c1P);
          __as__7CTilePtRC7CTilePt(&c1P,&vt);
          ___7CTilePt(&vt,2);
        }
        bVar1 = __ne__C7CTilePtRC7CTilePt(&c0P,c0);
        if (!bVar1) goto LAB_00126f98;
        c0P.mX = c0P.mX + '\x01';
        c1P.mX = c1P.mX + '\x01';
      }
      else {
        if ((long)c1P.mY < (long)iVar3) {
          __7CTilePtRC7CTilePt(&vt,&c0P);
          __as__7CTilePtRC7CTilePt(&c0P,&c1P);
          __as__7CTilePtRC7CTilePt(&c1P,&vt);
          ___7CTilePt(&vt,2);
        }
        bVar1 = __ne__C7CTilePtRC7CTilePt(&c0P,c0);
        if (!bVar1) goto LAB_00126f98;
        c0P.mX = c0P.mX + -1;
        c1P.mX = c1P.mX + -1;
      }
      c0P.mY = c0P.mY + '\x01';
      c1P.mY = c1P.mY + '\x01';
    }
  }
LAB_00126f98:
  __as__7CTilePtRC7CTilePt(c0,&c0P);
  __as__7CTilePtRC7CTilePt(c1,&c1P);
  ___7CTilePt(&c1P,2);
  ___7CTilePt(&c0P,2);
  return;
}

int GetPaperRefundOnWall(WallPattern pattern) {
	unsigned int n;
	
  WallTile **ppWVar1;
  uint uVar2;
  WallTile *pWVar3;
  float fVar4;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  ppWVar1 = ((_globals._pWallSet)->field0_0x0).pData;
  if (ppWVar1 == (WallTile **)0x0) {
    pWVar3 = (WallTile *)0x0;
  }
  else {
    pWVar3 = ppWVar1[-1];
  }
                    /* end of inlined section */
  if ((int)pattern < (int)((int)&pWVar3[-1].category + 3)) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    uVar2 = ((_globals._pWallSet)->field0_0x0).pData[pattern]->cost;
    if ((int)uVar2 < 0) {
      fVar4 = (float)(uVar2 & 1 | uVar2 >> 1);
      fVar4 = fVar4 + fVar4;
    }
    else {
      fVar4 = (float)uVar2;
    }
    return (int)(fVar4 * 0.8);
  }
  return 0;
}

int GetPaperCostAtPoint(bool bDoRefund, s32 price, TileWallsSegment theSeg, TileWalls &theWalls, DiagonalSideSelector side) {
  bool bVar1;
  WallPattern pattern;
  int iVar2;
  
  bVar1 = HasWallNotFence__C9TileWalls16TileWallsSegment(theWalls,theSeg);
  if (bVar1) {
    if (bDoRefund) {
      pattern = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                          (theWalls,theSeg,side);
      iVar2 = GetPaperRefundOnWall__F11WallPattern(pattern);
      price = -iVar2;
    }
  }
  else {
    price = 0;
  }
  return price;
}

void ESimsCursor::BeginPaperTool(WallTile &node) {
  uint uVar1;
  ERShader *pEVar2;
  
  this->m_mode = kPaperTool;
  while (this->m_pWPaperShd != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pWPaperShd->field0_0x0);
    this->m_pWPaperShd = (ERShader *)0x0;
  }
  uVar1 = node->cost;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_pToolResMap = node;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_toolUnitPrice = uVar1;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar2 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei
                     (&_shaderman.field0_0x0,node->shaderID,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pWPaperShd = pEVar2;
  return;
}

void ESimsCursor::ExitPaperTool() {
	ESimsCursor *this;
	
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
  if (this->m_mode == kPaperTool) {
    this->m_mode = kDefault;
  }
  while (this->m_pWPaperShd != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pWPaperShd->field0_0x0);
    this->m_pWPaperShd = (ERShader *)0x0;
  }
  return;
}

void ESimsCursor::PaperToolUpdate() {
	EController *pPad;
	u32 butts;
	bool bRoomFill;
	
  undefined *puVar1;
  EController *this_00;
  ulong *puVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  ulong uStack_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  null____pfn_or_delta2 nStack_1c;
  undefined4 local_10;
  null____pfn_or_delta2 nStack_c;
  
  local_20 = (undefined4)unaff_s3;
  nStack_1c = SUB84((ulong)unaff_s3 >> 0x20,0);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  nStack_c = SUB84((ulong)unaff_retaddr >> 0x20,0);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  this_00 = _ctrlPads[*(int *)&this->field_0x30];
  uVar4 = GetPressed__11EControlleri(this_00,3);
  if (uVar4 != 0) {
    this->m_wallPaperSide = (uint)(this->m_wallPaperSide == 0);
  }
  uVar4 = GetDownButtons__11EControlleri(this_00,-1);
  if ((uVar4 & 0xc) == 0) {
    uVar5 = GetReleased__11EControlleri(this_00,0x40);
    if (uVar5 == 0) {
      uVar5 = GetReleased__11EControlleri(this_00,0x80);
      if (uVar5 == 0) {
        if ((uVar4 & 0xc0) != 0) {
          return;
        }
        SnapToWallVert__11ESimsCursorR5EVec2((ESimsCursor__15_1743 *)this,&this->m_vCursorAnchor);
        GetSnapPos__11ESimsCursor((ESimsCursor__15_1743 *)&uStack_60);
        puVar1 = (undefined *)((int)&(this->m_vCursorAnchorCenter).field0_0x0 + 7);
        uVar4 = (uint)puVar1 & 7;
        puVar2 = (ulong *)(puVar1 + -uVar4);
        *puVar2 = *puVar2 & -1L << (uVar4 + 1) * 8 | uStack_60 >> (7 - uVar4) * 8;
        uVar4 = (uint)&this->m_vCursorAnchorCenter & 7;
        puVar2 = (ulong *)((int)&this->m_vCursorAnchorCenter - uVar4);
        *puVar2 = uStack_60 << uVar4 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        return;
      }
      bVar3 = FinalizePaperDel__11ESimsCursor(this);
    }
    else {
      bVar3 = FinalizePaperPlacement__11ESimsCursor(this);
                    /* end of inlined section */
    }
  }
  else {
    uVar4 = GetReleased__11EControlleri(_ctrlPads[*(int *)&this->field_0x30],0x40);
    if (uVar4 == 0) {
      return;
    }
    bVar3 = FinalizePaperForRoom__11ESimsCursor(this);
                    /* end of inlined section */
  }
  if (bVar3 == false) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
  }
  return;
}

void ESimsCursor::DrawPaperPreview(ERC *prc) {
	EVec2 v0;
	EVec2 v1;
	EVec3 vOff;
	int tilerep;
	ERC *this;
	float x;
	float y;
	float x;
	float y;
	EVec4 *this;
	float x;
	float y;
	float x;
	float y;
	
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  float fVar16;
  EVec2 v0;
  EVec2 v1;
  EVec3 vOff;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  v0.field0_0x0.d[0] = (this->m_vCursorAnchor).field0_0x0.d[0];
  v0.field0_0x0.d[1] = (this->m_vCursorAnchor).field0_0x0.d[1];
                    /* end of inlined section */
  FindWallDragVert__11ESimsCursorRC5EVec2R5EVec2(this,&v0,&v1);
  Select__8ERShaderP3ERCi(_11ESimsCursor_m_pWallUnderConstructionShd,prc,0);
  GetSideOfWall__11ESimsCursorRC5EVec2T1P5EVec3(this,&v0,&v1,&vOff);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar16 = sqrtf((v0.field0_0x0.d[0] - v1.field0_0x0.d[0]) *
                 (v0.field0_0x0.d[0] - v1.field0_0x0.d[0]) +
                 (v0.field0_0x0.d[1] - v1.field0_0x0.d[1]) *
                 (v0.field0_0x0.d[1] - v1.field0_0x0.d[1]));
                    /* end of inlined section */
  iVar15 = (int)fVar16;
  if (0.5 <= fVar16 - (float)iVar15) {
    iVar15 = iVar15 + 1;
  }
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
  if (iVar15 < 1) {
    iVar15 = 1;
  }
                    /* inlined from /eor/src2/engine/e_dl.h */
  puVar4 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x140,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(undefined4 *)((int)puVar4 + 0x3c) = 0x80;
  *(undefined4 *)(puVar4 + 6) = 0x80;
  *(undefined4 *)((int)puVar4 + 0x14) = 0x7f;
  *(undefined4 *)((int)puVar4 + 0x34) = 0x80;
  *(undefined4 *)(puVar4 + 7) = 0x80;
  *(undefined4 *)(puVar4 + 2) = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((int)puVar4 + 0x1c) = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar4 + 4) = 0x3f800000;
  *(float *)((int)puVar4 + 0x24) = (float)-iVar15;
  *(float *)puVar4 = v0.field0_0x0.d[0] + vOff.field0_0x0.d[0];
  *(float *)((int)puVar4 + 4) = v0.field0_0x0.d[1] + vOff.field0_0x0.d[1];
  *(float *)(puVar4 + 1) = vOff.field0_0x0.d[2] + 3.0;
  puVar3 = puVar4 + 10;
  puVar10 = puVar4;
  do {
    puVar9 = puVar10;
    puVar11 = puVar3;
    uVar1 = *puVar9;
                    /* end of inlined section */
    uVar5 = *(undefined4 *)(puVar9 + 1);
    uVar6 = *(undefined4 *)((int)puVar9 + 0xc);
    uVar2 = puVar9[2];
    uVar7 = *(undefined4 *)(puVar9 + 3);
    uVar8 = *(undefined4 *)((int)puVar9 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar5;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar6;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar7;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar8;
    puVar10 = puVar9 + 4;
    puVar3 = puVar11 + 4;
  } while (puVar10 != puVar4 + 8);
                    /* end of inlined section */
  uVar5 = *(undefined4 *)((int)puVar9 + 0x24);
  uVar6 = *(undefined4 *)(puVar9 + 5);
  uVar7 = *(undefined4 *)((int)puVar9 + 0x2c);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  *(undefined4 *)(puVar11 + 4) = *(undefined4 *)puVar10;
  *(undefined4 *)((int)puVar11 + 0x24) = uVar5;
  *(undefined4 *)(puVar11 + 5) = uVar6;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar7;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)(puVar4 + 0xe) = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  *(float *)(puVar4 + 10) = v1.field0_0x0.d[0] + vOff.field0_0x0.d[0];
  *(float *)((int)puVar4 + 0x54) = v1.field0_0x0.d[1] + vOff.field0_0x0.d[1];
  *(float *)(puVar4 + 0xb) = vOff.field0_0x0.d[2] + 3.0;
  puVar3 = puVar4 + 0x14;
  puVar10 = puVar4;
  do {
    puVar9 = puVar10;
    puVar11 = puVar3;
                    /* end of inlined section */
    uVar5 = *(undefined4 *)((int)puVar9 + 4);
    uVar6 = *(undefined4 *)(puVar9 + 1);
    uVar7 = *(undefined4 *)((int)puVar9 + 0xc);
    uVar8 = *(undefined4 *)(puVar9 + 2);
    uVar12 = *(undefined4 *)((int)puVar9 + 0x14);
    uVar13 = *(undefined4 *)(puVar9 + 3);
    uVar14 = *(undefined4 *)((int)puVar9 + 0x1c);
    *(undefined4 *)puVar11 = *(undefined4 *)puVar9;
    *(undefined4 *)((int)puVar11 + 4) = uVar5;
    *(undefined4 *)(puVar11 + 1) = uVar6;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar7;
    *(undefined4 *)(puVar11 + 2) = uVar8;
    *(undefined4 *)((int)puVar11 + 0x14) = uVar12;
    *(undefined4 *)(puVar11 + 3) = uVar13;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar14;
    puVar10 = puVar9 + 4;
    puVar3 = puVar11 + 4;
  } while (puVar10 != puVar4 + 8);
  uVar1 = *puVar10;
  uVar5 = *(undefined4 *)(puVar9 + 5);
  uVar6 = *(undefined4 *)((int)puVar9 + 0x2c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar5;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar4 + 0x18) = 0;
  *(float *)((int)puVar4 + 0xc4) = (float)-iVar15;
  *(float *)(puVar4 + 0x14) = v0.field0_0x0.d[0] + vOff.field0_0x0.d[0];
  *(float *)((int)puVar4 + 0xa4) = v0.field0_0x0.d[1] + vOff.field0_0x0.d[1];
  *(float *)(puVar4 + 0x15) = vOff.field0_0x0.d[2] + 0.05;
  puVar3 = puVar4 + 0x1e;
  puVar10 = puVar4;
  do {
    puVar9 = puVar10;
    puVar11 = puVar3;
    uVar1 = *puVar9;
                    /* end of inlined section */
    uVar5 = *(undefined4 *)(puVar9 + 1);
    uVar6 = *(undefined4 *)((int)puVar9 + 0xc);
    uVar2 = puVar9[2];
    uVar7 = *(undefined4 *)(puVar9 + 3);
    uVar8 = *(undefined4 *)((int)puVar9 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar5;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar6;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar7;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar8;
    puVar10 = puVar9 + 4;
    puVar3 = puVar11 + 4;
  } while (puVar10 != puVar4 + 8);
  uVar5 = *(undefined4 *)((int)puVar9 + 0x24);
  uVar6 = *(undefined4 *)(puVar9 + 5);
  uVar7 = *(undefined4 *)((int)puVar9 + 0x2c);
  *(undefined4 *)(puVar11 + 4) = *(undefined4 *)puVar10;
  *(undefined4 *)((int)puVar11 + 0x24) = uVar5;
  *(undefined4 *)(puVar11 + 5) = uVar6;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar7;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar4 + 0x22) = 0;
  *(undefined4 *)((int)puVar4 + 0x114) = 0;
  *(float *)(puVar4 + 0x1e) = v1.field0_0x0.d[0] + vOff.field0_0x0.d[0];
  *(float *)((int)puVar4 + 0xf4) = v1.field0_0x0.d[1] + vOff.field0_0x0.d[1];
  *(float *)(puVar4 + 0x1f) = vOff.field0_0x0.d[2] + 0.05;
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(this->m_pWPaperShd,prc,0);
  (*(code *)prc->__vtable->ZTest)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar4,4);
  return;
}

int ESimsCursor::GetPaperLineCost(bool &bDidPaper, CTilePt &c0, CTilePt &c1, TilePtDir tileDir, WallPattern pattern, DiagonalSideSelector side) {
	cFixedWorld *gWorld;
	TileWallsSegment theSeg;
	s32 totalCost;
	bool doRefund;
	bool done;
	CTilePt inTile;
	TileWalls theWalls;
	
  cFixedWorld *pcVar1;
  bool bVar2;
  bool bVar3;
  TileWallsSegment inSeg;
  cFixedWorld__vtable *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  CTilePt inTile;
  TileWalls theWalls;
  CTilePt aCStack_d0 [5];
  ESimsCursor__16_2000 *local_c0;
  CTilePt *local_bc;
  DiagonalSideSelector local_b8;
  int totalCost;
  bool doRefund;
  int local_ac;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
  pcVar1 = _5Globs_pFixedWorld;
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  _doRefund = (uint)(pattern == kSheetRockPattern);
  local_c0 = this;
  local_bc = c1;
  local_b8 = side;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  inSeg = DirToWallSeg__9TileWalls9TilePtDir(tileDir);
  totalCost = 0;
  *(undefined4 *)bDidPaper = 0;
  bVar3 = false;
  __7CTilePtRC7CTilePt(&inTile,c0);
  local_ac = tileDir * 3;
  pcVar4 = pcVar1->__vtable;
  while( true ) {
    (*(code *)pcVar4->ComputeArchValue)
              (&theWalls,(int)&pcVar1->__vtable + (int)*(short *)&pcVar4->ComputeRooms,&inTile);
    bVar2 = HasWallNotFence__C9TileWalls16TileWallsSegment(&theWalls,inSeg);
    if (bVar2) {
      *(undefined4 *)bDidPaper = 1;
      iVar5 = GetPaperCostAtPoint__Fbi16TileWallsSegmentRC9TileWallsQ29TileWalls20DiagonalSideSelector
                        (SUB41(_doRefund,0),local_c0->m_toolUnitPrice,inSeg,&theWalls,local_b8);
      totalCost = totalCost + iVar5;
    }
    __pl__C7CTilePtRC7CTilePt(aCStack_d0,&inTile);
    __as__7CTilePtRC7CTilePt(&inTile,aCStack_d0);
    ___7CTilePt(aCStack_d0,2);
    inTile.mLevel = '\x01';
    lVar6 = (*(code *)pcVar1->__vtable->SetWall)
                      ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetWall,&inTile);
    if (lVar6 != 0) {
      bVar3 = true;
    }
    if (!bVar3) {
      bVar3 = __eq__C7CTilePtRC7CTilePt(&inTile,local_bc);
    }
    ___9TileWalls(&theWalls,2);
    if (bVar3) break;
    pcVar4 = pcVar1->__vtable;
  }
  if ((_globals.Cheats._4_4_ != 0) || (bVar3 = IsBuildHouseMode__7EGlobal(&_globals), bVar3)) {
    ___7CTilePt(&inTile,2);
    totalCost = 0;
  }
  else {
    ___7CTilePt(&inTile,2);
  }
  return totalCost;
}

void EorGetAdjacentTile(TileWallsSegment &theSeg, int whichSide, DiagonalSideSelector &side, CTilePt &out0, CTilePt &out1) {
	TilePtDir perpDir;
	
  TilePtDir TVar1;
  DiagonalSideSelector DVar2;
  TileWallsSegment TVar3;
  DiagonalSideSelector DVar4;
  
  TVar1 = GetTileDirection__11ESimsCursorRC7CTilePtT1(out0,out1);
  TVar3 = *theSeg;
  TVar1 = _PerpTilePointTab[TVar1];
  if (TVar3 == kHorizDiag) {
    DVar2 = kBottom;
    DVar4 = kTop;
  }
  else {
    DVar2 = kLeft;
    if (TVar3 != kVertDiag) {
      if (TVar3 == kTopLeft) {
        if (whichSide == 0) {
          TVar3 = GetOppositeSegment__9TileWalls16TileWallsSegment(kTopLeft);
          *theSeg = TVar3;
          __ami__7CTilePtRC7CTilePt(out0,_7CTilePt_sDirections + TVar1);
          __ami__7CTilePtRC7CTilePt(out1,_7CTilePt_sDirections + TVar1);
          return;
        }
        TVar3 = *theSeg;
      }
      else {
        TVar3 = *theSeg;
      }
      if (TVar3 != kTopRight) {
        return;
      }
      if (whichSide != 1) {
        return;
      }
      TVar3 = GetOppositeSegment__9TileWalls16TileWallsSegment(kTopRight);
      *theSeg = TVar3;
      __apl__7CTilePtRC7CTilePt(out0,_7CTilePt_sDirections + TVar1);
      __apl__7CTilePtRC7CTilePt(out1,_7CTilePt_sDirections + TVar1);
      return;
    }
    DVar4 = kRight;
  }
  if (whichSide != 0) {
    DVar2 = DVar4;
  }
  *side = DVar2;
  return;
}

bool ESimsCursor::SubmitPaperLine(EVec2 &v0, EVec2 &v1, WallPattern pattern) {
	CTilePt c0;
	CTilePt c1;
	TilePtDir tileDir;
	TileWallsSegment theSeg;
	CTilePt inTile;
	CTilePt endPoint;
	DiagonalSideSelector side;
	bool bDidPaper;
	s32 totalCost;
	bool bfreeItems;
	s32 dollars;
	cFixedWorld *gWorld;
	int nwallsadded;
	bool done;
	TileWalls theWalls;
	
  cFixedWorld *pcVar1;
  bool bVar2;
  bool bVar3;
  TilePtDir inDir;
  int iVar4;
  int iVar5;
  cFixedWorld__vtable *pcVar6;
  long lVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  CTilePt c0;
  CTilePt c1;
  CTilePt inTile;
  CTilePt endPoint;
  TileWalls theWalls;
  TileWalls TStack_f0;
  TileWallsSegment theSeg;
  DiagonalSideSelector side;
  bool bDidPaper;
  int local_a4;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  __7CTilePt(&c0);
  __7CTilePt(&c1);
  ConvertVertsToTiles__11ESimsCursorRC5EVec2T1R7CTilePtT3(v0,v1,&c0,&c1);
  ForcePointDir__FR7CTilePtT0(&c0,&c1);
  inDir = GetTileDirection__11ESimsCursorRC7CTilePtT1(&c0,&c1);
  if (inDir != kNone) {
    bVar3 = false;
    theSeg = DirToWallSeg__9TileWalls9TilePtDir(inDir);
    iVar4 = this->m_wallPaperSide;
    __7CTilePtRC7CTilePt(&inTile,&c0);
    __7CTilePtRC7CTilePt(&endPoint,&c1);
    side = kNotSpecified;
    EorGetAdjacentTile__FR16TileWallsSegmentiRQ29TileWalls20DiagonalSideSelectorR7CTilePtT3
              (&theSeg,(uint)(iVar4 == 0),&side,&inTile,&endPoint);
    _bDidPaper = 0;
    iVar4 = GetPaperLineCost__11ESimsCursorRbRC7CTilePtT29TilePtDir11WallPatternQ29TileWalls20DiagonalSideSelector
                      (this,&bDidPaper,&c0,&c1,inDir,pattern,side);
    if (_globals.Cheats._4_4_ == 0) {
      bVar2 = IsBuildHouseMode__7EGlobal(&_globals);
      if (bVar2) {
        bVar3 = true;
      }
    }
    else {
      bVar3 = true;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar5 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
    if ((bVar3) || (iVar4 <= iVar5)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,7,iVar4);
      if (this->m_toolUnitPrice == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x994e8974);
                    /* end of inlined section */
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xb2ad3ecd);
                    /* end of inlined section */
      }
      pcVar1 = _5Globs_pFixedWorld;
      local_a4 = inDir * 3;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar4 = 0;
      bVar3 = false;
      pcVar6 = _5Globs_pFixedWorld->__vtable;
      while( true ) {
        (*(code *)pcVar6->ComputeArchValue)
                  (&theWalls,(int)&pcVar1->__vtable + (int)*(short *)&pcVar6->ComputeRooms,&inTile);
        bVar2 = HasWall__C9TileWalls16TileWallsSegment(&theWalls,theSeg);
        if (bVar2) {
          SetPattern__9TileWalls11WallPattern16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                    (&theWalls,pattern,theSeg,side);
          __9TileWallsRC9TileWalls(&TStack_f0,&theWalls);
          (*(code *)pcVar1->__vtable->GetLightLayer)
                    ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetWallManager,
                     &inTile,&TStack_f0);
        }
        __pl__C7CTilePtRC7CTilePt((CTilePt *)&TStack_f0,&inTile);
        __as__7CTilePtRC7CTilePt(&inTile,(CTilePt *)&TStack_f0);
        ___7CTilePt((CTilePt *)&TStack_f0,2);
        inTile.mLevel = '\x01';
        lVar7 = (*(code *)pcVar1->__vtable->SetWall)
                          ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetWall,
                           &inTile);
        if (lVar7 != 0) {
          bVar3 = true;
        }
        if (bVar3) {
          pcVar6 = pcVar1->__vtable;
        }
        else {
          bVar3 = __eq__C7CTilePtRC7CTilePt(&inTile,&endPoint);
          pcVar6 = pcVar1->__vtable;
        }
        iVar4 = iVar4 + 1;
        iVar5 = (*(code *)pcVar6->GetFloor)
                          ((int)&pcVar1->__vtable + (int)*(short *)&pcVar6->GetFloorLayer);
        if (iVar5 <= iVar4) break;
        ___9TileWalls(&theWalls,2);
        if (bVar3) goto LAB_00127dc4;
        pcVar6 = pcVar1->__vtable;
      }
      ___9TileWalls(&theWalls,2);
LAB_00127dc4:
      ___7CTilePt(&endPoint,2);
      ___7CTilePt(&inTile,2);
      ___7CTilePt(&c1,2);
      ___7CTilePt(&c0,2);
      return true;
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
    ___7CTilePt(&endPoint,2);
    ___7CTilePt(&inTile,2);
  }
  ___7CTilePt(&c1,2);
  ___7CTilePt(&c0,2);
  return false;
}

void ESimsCursor::DrawPaperDelPreview(ERC *prc) {
	EVec2 v0;
	EVec2 v1;
	EVec3 vOff;
	int tilerep;
	ERC *this;
	float x;
	float y;
	float x;
	float y;
	EVec4 *this;
	float x;
	float y;
	float x;
	float y;
	
  undefined8 uVar1;
  undefined8 uVar2;
  ERShader *this_00;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  float fVar16;
  EVec2 v0;
  EVec2 v1;
  EVec3 vOff;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  v0.field0_0x0.d[0] = (this->m_vCursorAnchor).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  v0.field0_0x0.d[1] = (this->m_vCursorAnchor).field0_0x0.d[1];
                    /* end of inlined section */
  FindWallDragVert__11ESimsCursorRC5EVec2R5EVec2(this,&v0,&v1);
  GetSideOfWall__11ESimsCursorRC5EVec2T1P5EVec3(this,&v0,&v1,&vOff);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar16 = sqrtf((v0.field0_0x0.d[0] - v1.field0_0x0.d[0]) *
                 (v0.field0_0x0.d[0] - v1.field0_0x0.d[0]) +
                 (v0.field0_0x0.d[1] - v1.field0_0x0.d[1]) *
                 (v0.field0_0x0.d[1] - v1.field0_0x0.d[1]));
                    /* end of inlined section */
  iVar15 = (int)fVar16;
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
  if (iVar15 < 1) {
    iVar15 = 1;
  }
  puVar4 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x140,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(undefined4 *)((int)puVar4 + 0x3c) = 0x80;
  *(undefined4 *)(puVar4 + 6) = 0x80;
  *(undefined4 *)((int)puVar4 + 0x14) = 0x7f;
  *(undefined4 *)((int)puVar4 + 0x34) = 0x80;
  *(undefined4 *)(puVar4 + 7) = 0x80;
  *(undefined4 *)(puVar4 + 2) = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((int)puVar4 + 0x1c) = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar4 + 4) = 0x3f800000;
  *(float *)((int)puVar4 + 0x24) = (float)-iVar15;
  *(float *)puVar4 = v0.field0_0x0.d[0] + vOff.field0_0x0.d[0];
  *(float *)((int)puVar4 + 4) = v0.field0_0x0.d[1] + vOff.field0_0x0.d[1];
  *(float *)(puVar4 + 1) = vOff.field0_0x0.d[2] + 3.0;
  puVar3 = puVar4 + 10;
  puVar10 = puVar4;
  do {
    puVar9 = puVar10;
    puVar11 = puVar3;
    uVar1 = *puVar9;
                    /* end of inlined section */
    uVar5 = *(undefined4 *)(puVar9 + 1);
    uVar6 = *(undefined4 *)((int)puVar9 + 0xc);
    uVar2 = puVar9[2];
    uVar7 = *(undefined4 *)(puVar9 + 3);
    uVar8 = *(undefined4 *)((int)puVar9 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar5;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar6;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar7;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar8;
    puVar10 = puVar9 + 4;
    puVar3 = puVar11 + 4;
  } while (puVar10 != puVar4 + 8);
                    /* end of inlined section */
  uVar5 = *(undefined4 *)((int)puVar9 + 0x24);
  uVar6 = *(undefined4 *)(puVar9 + 5);
  uVar7 = *(undefined4 *)((int)puVar9 + 0x2c);
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  *(undefined4 *)(puVar11 + 4) = *(undefined4 *)puVar10;
  *(undefined4 *)((int)puVar11 + 0x24) = uVar5;
  *(undefined4 *)(puVar11 + 5) = uVar6;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar7;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)(puVar4 + 0xe) = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  *(float *)(puVar4 + 10) = v1.field0_0x0.d[0] + vOff.field0_0x0.d[0];
  *(float *)((int)puVar4 + 0x54) = v1.field0_0x0.d[1] + vOff.field0_0x0.d[1];
  *(float *)(puVar4 + 0xb) = vOff.field0_0x0.d[2] + 3.0;
  puVar3 = puVar4 + 0x14;
  puVar10 = puVar4;
  do {
    puVar9 = puVar10;
    puVar11 = puVar3;
                    /* end of inlined section */
    uVar5 = *(undefined4 *)((int)puVar9 + 4);
    uVar6 = *(undefined4 *)(puVar9 + 1);
    uVar7 = *(undefined4 *)((int)puVar9 + 0xc);
    uVar8 = *(undefined4 *)(puVar9 + 2);
    uVar12 = *(undefined4 *)((int)puVar9 + 0x14);
    uVar13 = *(undefined4 *)(puVar9 + 3);
    uVar14 = *(undefined4 *)((int)puVar9 + 0x1c);
    *(undefined4 *)puVar11 = *(undefined4 *)puVar9;
    *(undefined4 *)((int)puVar11 + 4) = uVar5;
    *(undefined4 *)(puVar11 + 1) = uVar6;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar7;
    *(undefined4 *)(puVar11 + 2) = uVar8;
    *(undefined4 *)((int)puVar11 + 0x14) = uVar12;
    *(undefined4 *)(puVar11 + 3) = uVar13;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar14;
    puVar10 = puVar9 + 4;
    puVar3 = puVar11 + 4;
  } while (puVar10 != puVar4 + 8);
  uVar1 = *puVar10;
  uVar5 = *(undefined4 *)(puVar9 + 5);
  uVar6 = *(undefined4 *)((int)puVar9 + 0x2c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar5;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar4 + 0x18) = 0;
  *(float *)((int)puVar4 + 0xc4) = (float)-iVar15;
  *(float *)(puVar4 + 0x14) = v0.field0_0x0.d[0] + vOff.field0_0x0.d[0];
  *(float *)((int)puVar4 + 0xa4) = v0.field0_0x0.d[1] + vOff.field0_0x0.d[1];
  *(float *)(puVar4 + 0x15) = vOff.field0_0x0.d[2] + 0.05;
  puVar3 = puVar4 + 0x1e;
  puVar10 = puVar4;
  do {
    puVar9 = puVar10;
    puVar11 = puVar3;
    uVar1 = *puVar9;
                    /* end of inlined section */
    uVar5 = *(undefined4 *)(puVar9 + 1);
    uVar6 = *(undefined4 *)((int)puVar9 + 0xc);
    uVar2 = puVar9[2];
    uVar7 = *(undefined4 *)(puVar9 + 3);
    uVar8 = *(undefined4 *)((int)puVar9 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar5;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar6;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar7;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar8;
    puVar10 = puVar9 + 4;
    puVar3 = puVar11 + 4;
  } while (puVar10 != puVar4 + 8);
  uVar5 = *(undefined4 *)((int)puVar9 + 0x24);
  uVar6 = *(undefined4 *)(puVar9 + 5);
  uVar7 = *(undefined4 *)((int)puVar9 + 0x2c);
  *(undefined4 *)(puVar11 + 4) = *(undefined4 *)puVar10;
  *(undefined4 *)((int)puVar11 + 0x24) = uVar5;
  *(undefined4 *)(puVar11 + 5) = uVar6;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar7;
  this_00 = _11ESimsCursor_m_pWallUnderConstructionShd;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)(puVar4 + 0x22) = 0;
  *(undefined4 *)((int)puVar4 + 0x114) = 0;
  *(float *)(puVar4 + 0x1e) = v1.field0_0x0.d[0] + vOff.field0_0x0.d[0];
  *(float *)((int)puVar4 + 0xf4) = v1.field0_0x0.d[1] + vOff.field0_0x0.d[1];
                    /* end of inlined section */
  *(float *)(puVar4 + 0x1f) = vOff.field0_0x0.d[2] + 0.05;
  Select__8ERShaderP3ERCi(this_00,prc,0);
  (*(code *)prc->__vtable->ZTest)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar4,4);
  return;
}

UInt16 GetRoomIdFromPoint(CTilePt &wherePt) {
	cFixedWorld *gWorld;
	UInt16 room;
	RoomManager *room_mgr;
	Room *r1;
	Room *r2;
	Sides s1;
	Sides s2;
	TileWalls walls;
	
  cFixedWorld__vtable *pcVar1;
  cFixedWorld *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  TileWalls walls;
  Room *r1;
  Room *r2;
  Sides s1;
  Sides s2;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  pcVar2 = _5Globs_pFixedWorld;
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar3 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,wherePt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar4 = 0;
  if ((_5Globs_pRoomManager != (RoomManager *)0x0) && (lVar4 = lVar3, lVar3 == 0xfffb)) {
    (*(code *)_5Globs_pRoomManager->__vtable[1].GetRoomManagerImpl)
              ((int)&_5Globs_pRoomManager->__vtable +
               (int)*(short *)&_5Globs_pRoomManager->__vtable[1].RoomManager,wherePt,&r1,&r2,&s1,&s2
              );
    pcVar1 = pcVar2->__vtable;
    (*(code *)pcVar1->ComputeArchValue)
              (&walls,(int)&pcVar2->__vtable + (int)*(short *)&pcVar1->ComputeRooms,wherePt);
    HasWall__C9TileWalls16TileWallsSegment(&walls,kVertDiag);
    lVar4 = (*(code *)r1->__vtable->GetObjectDensity)
                      ((int)&r1->__vtable + (int)*(short *)&r1->__vtable->InvalidateRoom);
    ___9TileWalls(&walls,2);
  }
  return (short)lVar4;
}

void ESimsCursor::DrawPaperRoomPreview(ERC *prc) {
	EHouse *ehouse;
	ERoom *eroom;
	int x;
	int y;
	CTilePt wherePt;
	
  short room;
  undefined8 unaff_s0;
  ERoom *this_00;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  CTilePt wherePt;
  int y;
  int x;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  this_00 = (ERoom *)0x0;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (_globals._pCurHouse != (EHouse__26_3190 *)0x0) {
    this_00 = (_globals._pCurHouse)->m_pWallMan2;
  }
  if (this_00 != (ERoom *)0x0) {
    Select__8ERShaderP3ERCi(this->m_pWPaperShd,prc,0);
    GetSnapPos__11ESimsCursorRiT1((ESimsCursor__15_1743 *)this,&y,&x);
    __7CTilePtiii(&wherePt,x,y,1);
    room = GetRoomIdFromPoint__FR7CTilePt(&wherePt);
    DrawWallpaperPreview__5ERoomP3ERCUs(this_00,prc,room);
    ___7CTilePt(&wherePt,2);
  }
  return;
}

int ComputeRoomCost(u32 shader, short unsigned int room) {
  bool bVar1;
  int iVar2;
  
  if ((_globals.Cheats._4_4_ != 0) || (bVar1 = IsBuildHouseMode__7EGlobal(&_globals), bVar1)) {
    iVar2 = 0;
  }
  else {
    iVar2 = GetWallPaperCost__5ERoomUiUs((_globals._pCurHouse)->m_pWallMan2,shader,room);
  }
  return iVar2;
}

bool ESimsCursor::FinalizePaperForRoom() {
	int x;
	int y;
	CTilePt wherePt;
	UInt16 room;
	cFixedWorld *gWorld;
	RoomManager *room_mgr;
	Room *pRoom;
	RoomImpl *pRoomImpl;
	CTilePt *i;
	WallPattern pattern;
	s32 totalCost;
	s32 dollars;
	bool bfreeItems;
	RoomImpl *this;
	CTilePt thePt;
	TileWalls walls;
	TileWallsSegment aSeg;
	DiagonalSideSelector aSel[2];
	int sel_count;
	CTilePt wherePt;
	Room *r1;
	Room *r2;
	Sides s1;
	Sides s2;
	int i;
	
  bool bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  TileWallsSegment inSegment;
  DiagonalSideSelector DVar6;
  long lVar7;
  CTilePt *in;
  DiagonalSideSelector *pDVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  DiagonalSideSelector *pDVar9;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  CTilePt aCStack_160 [5];
  CTilePt thePt;
  TileWalls walls;
  DiagonalSideSelector aSel [2];
  CTilePt wherePt;
  int y;
  int x;
  Room *r1;
  Room *r2;
  Sides s1;
  Sides s2;
  ESimsCursor__16_2000 *local_c8;
  short room;
  cFixedWorld *gWorld;
  RoomManager *room_mgr;
  CTilePt **local_b8;
  WallPattern pattern;
  TileWalls *local_b0;
  CTilePt *local_ac;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_c8 = this;
  GetSnapPos__11ESimsCursorRiT1((ESimsCursor__15_1743 *)this,&y,&x);
  __7CTilePtiii(aCStack_160,x,y,1);
  sVar3 = GetRoomIdFromPoint__FR7CTilePt(aCStack_160);
  _room = (int)sVar3;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
  gWorld = _5Globs_pFixedWorld;
                    /* end of inlined section */
  room_mgr = _5Globs_pRoomManager;
  if (_5Globs_pRoomManager != (RoomManager *)0x0) {
    lVar7 = (*(code *)_5Globs_pRoomManager->__vtable->ClearRoomPartitions)
                      ((int)&_5Globs_pRoomManager->__vtable +
                       (int)*(short *)&_5Globs_pRoomManager->__vtable->GetHouse,_room);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      iVar4 = *(int *)lVar7;
      lVar7 = (**(code **)(iVar4 + 0x3c))((int)(int *)lVar7 + (int)*(short *)(iVar4 + 0x38));
    }
    if (lVar7 != 0) {
                    /* end of inlined section */
                    /* inlined from ../MSrc/roomsimpl.h */
      local_b8 = (CTilePt **)((int)lVar7 + 8);
                    /* end of inlined section */
      bVar1 = false;
                    /* inlined from ../MSrc/roomsimpl.h */
                    /* end of inlined section */
      pattern = GetWallIndex__7EGlobalPC8WallTile(&_globals,local_c8->m_pToolResMap);
      iVar4 = ComputeRoomCost__FUiUs(local_c8->m_pToolResMap->shaderID,(short)_room);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      iVar5 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                        ((int)&_5Globs_pSimulator->__vtable +
                         (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
      if (_globals.Cheats._4_4_ == 0) {
        bVar2 = IsBuildHouseMode__7EGlobal(&_globals);
        if (bVar2) {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) || (iVar4 <= iVar5)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                  ((int)&_5Globs_pSimulator->__vtable +
                   (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,7,iVar4);
        if (local_c8->m_toolUnitPrice == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x994e8974);
                    /* inlined from ../MSrc/Vector.h */
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xb2ad3ecd);
                    /* end of inlined section */
        }
                    /* end of inlined section */
        if (*local_b8 != local_b8[1]) {
          in = *local_b8;
          local_b0 = &walls;
          do {
            __7CTilePtRC7CTilePt(&thePt,in);
            local_ac = in + 1;
            lVar7 = (*(code *)gWorld->__vtable[1].Save)
                              ((int)&gWorld->__vtable +
                               (int)*(short *)&gWorld->__vtable[1].cFixedWorld,&thePt);
            if (lVar7 != 0) {
              iVar4 = 0;
              (*(code *)gWorld->__vtable->ComputeArchValue)
                        (local_b0,(int)&gWorld->__vtable +
                                  (int)*(short *)&gWorld->__vtable->ComputeRooms,&thePt);
              memset(aSel,0,8);
              inSegment = First__C9TileWalls(local_b0);
              if (inSegment != kNoWalls) {
                do {
                  if ((inSegment == kHorizDiag) || (inSegment == kVertDiag)) {
                    __7CTilePtRC7CTilePt(&wherePt,&thePt);
                    r1 = (Room *)0x0;
                    r2 = (Room *)0x0;
                    lVar7 = (*(code *)room_mgr->__vtable[1].GetRoomManagerImpl)
                                      ((int)&room_mgr->__vtable +
                                       (int)*(short *)&room_mgr->__vtable[1].RoomManager,&wherePt,
                                       &r1,&r2,&s1,&s2);
                    if (lVar7 == 0) {
                      if (inSegment == kHorizDiag) {
                        iVar5 = iVar4 + 1;
                        aSel[iVar4] = kTop;
                        iVar4 = iVar4 + 2;
                        aSel[iVar5] = kBottom;
                      }
                      else {
                        aSel[iVar4] = kLeft;
                        aSel[iVar4 + 1] = kRight;
                        iVar4 = iVar4 + 2;
                      }
                    }
                    else {
                      if ((r1 != (Room *)0x0) &&
                         (iVar5 = (*(code *)r1->__vtable->GetObjectDensity)
                                            ((int)&r1->__vtable +
                                             (int)*(short *)&r1->__vtable->InvalidateRoom),
                         iVar5 == _room)) {
                        if (s1 == kLeft) {
                          pDVar8 = aSel + iVar4;
                          iVar4 = iVar4 + 1;
                          *pDVar8 = kLeft;
                        }
                        else {
                          DVar6 = kBottom;
                          if (s1 == kRight) {
                            pDVar8 = aSel + iVar4;
                            iVar4 = iVar4 + 1;
                            *pDVar8 = kRight;
                          }
                          else {
                            if (s1 == kAbove) {
                              DVar6 = kTop;
                            }
                            else if (s1 != kBelow) {
                              if (inSegment == kHorizDiag) {
                                iVar5 = iVar4 + 1;
                                aSel[iVar4] = kTop;
                                iVar4 = iVar4 + 2;
                                aSel[iVar5] = kBottom;
                              }
                              else {
                                iVar5 = iVar4 + 1;
                                aSel[iVar4] = kLeft;
                                iVar4 = iVar4 + 2;
                                aSel[iVar5] = kRight;
                              }
                              goto LAB_001287d8;
                            }
                            pDVar8 = aSel + iVar4;
                            iVar4 = iVar4 + 1;
                            *pDVar8 = DVar6;
                          }
                        }
                      }
LAB_001287d8:
                      if (((r2 != (Room *)0x0) && (r2 != r1)) &&
                         (iVar5 = (*(code *)r2->__vtable->GetObjectDensity)
                                            ((int)&r2->__vtable +
                                             (int)*(short *)&r2->__vtable->InvalidateRoom),
                         iVar5 == _room)) {
                        if (s2 == kLeft) {
                          pDVar8 = aSel + iVar4;
                          iVar4 = iVar4 + 1;
                          *pDVar8 = kLeft;
                        }
                        else {
                          DVar6 = kBottom;
                          if (s2 == kRight) {
                            pDVar8 = aSel + iVar4;
                            iVar4 = iVar4 + 1;
                            *pDVar8 = kRight;
                          }
                          else {
                            if (s2 == kAbove) {
                              DVar6 = kTop;
                            }
                            else if (s2 != kBelow) goto LAB_001288d4;
                            pDVar8 = aSel + iVar4;
                            iVar4 = iVar4 + 1;
                            *pDVar8 = DVar6;
                          }
                        }
                      }
                    }
LAB_001288d4:
                    ___7CTilePt(&wherePt,2);
                  }
                  else {
                    iVar4 = 1;
                  }
                  if (0 < iVar4) {
                    pDVar9 = aSel;
                    /* inlined from ../MSrc/Function.h */
                    pDVar8 = aSel;
                    iVar5 = iVar4;
                    DVar6 = aSel[0];
                    while( true ) {
                      if (DVar6 == kNotSpecified) {
                        DVar6 = *pDVar8;
                      }
                      else {
                        DVar6 = RotateDiagonal__9TileWallsQ29TileWalls20DiagonalSideSelectori
                                          (*pDVar8,0);
                        *pDVar8 = DVar6;
                        DVar6 = *pDVar8;
                      }
                      pDVar8 = pDVar8 + 1;
                      pDVar9 = pDVar9 + 1;
                      iVar5 = iVar5 + -1;
                      ChangeTile__11ESimsCursorRC7CTilePt11WallPattern16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                                (local_c8,&thePt,pattern,inSegment,DVar6);
                      if (iVar5 == 0) break;
                      DVar6 = *pDVar9;
                    }
                  }
                  inSegment = Next__C9TileWalls16TileWallsSegment(&walls,inSegment);
                } while (inSegment != kNoWalls);
              }
              ___9TileWalls(&walls,2);
            }
            ___7CTilePt(&thePt,2);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
            in = local_ac;
          } while (local_ac != local_b8[1]);
        }
        UpdateLot__11ESimsCursor();
        ___7CTilePt(aCStack_160,2);
        return true;
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
    }
  }
                    /* end of inlined section */
  ___7CTilePt(aCStack_160,2);
  return false;
}

bool ESimsCursor::FinalizePaperDel() {
	EVec2 v0;
	EVec2 v1;
	bool ret;
	
  bool bVar1;
  EVec2 v0;
  EVec2 v1;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  v0.field0_0x0.d[0] = (this->m_vCursorAnchor).field0_0x0.d[0];
  v0.field0_0x0.d[1] = (this->m_vCursorAnchor).field0_0x0.d[1];
                    /* end of inlined section */
  FindWallDragVert__11ESimsCursorRC5EVec2R5EVec2(this,&v0,&v1);
  bVar1 = SubmitPaperLine__11ESimsCursorRC5EVec2T111WallPattern(this,&v0,&v1,kSheetRockPattern);
  if (bVar1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pRoomManager->__vtable->RoomScoreChanged)
              ((int)&_5Globs_pRoomManager->__vtable +
               (int)*(short *)&_5Globs_pRoomManager->__vtable->RoomLightingChanged,0);
    UpdateLot__11ESimsCursor();
  }
  return bVar1;
}

bool ESimsCursor::FinalizePaperPlacement() {
	EVec2 v0;
	EVec2 v1;
	bool ret;
	
  bool bVar1;
  WallPattern pattern;
  EVec2 v0;
  EVec2 v1;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  v0.field0_0x0.d[0] = (this->m_vCursorAnchor).field0_0x0.d[0];
  v0.field0_0x0.d[1] = (this->m_vCursorAnchor).field0_0x0.d[1];
                    /* end of inlined section */
  FindWallDragVert__11ESimsCursorRC5EVec2R5EVec2(this,&v0,&v1);
  pattern = GetWallIndex__7EGlobalPC8WallTile(&_globals,this->m_pToolResMap);
  bVar1 = SubmitPaperLine__11ESimsCursorRC5EVec2T111WallPattern(this,&v0,&v1,pattern);
  if (bVar1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pRoomManager->__vtable->RoomScoreChanged)
              ((int)&_5Globs_pRoomManager->__vtable +
               (int)*(short *)&_5Globs_pRoomManager->__vtable->RoomLightingChanged,0);
    UpdateLot__11ESimsCursor();
  }
  return bVar1;
}

void ESimsCursor::AddPaperAtTile(CTilePt &inTile, TileWalls &thePapers, TileWallsSegment theSeg, DiagonalSideSelector inSel) {
  WallPattern pattern;
  
  pattern = GetWallIndex__7EGlobalPC8WallTile(&_globals,this->m_pToolResMap);
  ChangeTile__11ESimsCursorRC7CTilePt11WallPattern16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
            (this,inTile,pattern,theSeg,inSel);
  return;
}

void ESimsCursor::DeletePaperAtTile(CTilePt &inTile, TileWalls &thePapers, TileWallsSegment theSeg, DiagonalSideSelector inSel) {
  ChangeTile__11ESimsCursorRC7CTilePt11WallPattern16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
            (this,inTile,kSheetRockPattern,theSeg,inSel);
  return;
}

void ESimsCursor::ChangeTile(CTilePt &inTile, WallPattern pattern, TileWallsSegment inSegment, DiagonalSideSelector inSel) {
	cFixedWorld *gWorld;
	TileWalls theWalls;
	
  cFixedWorld__vtable *pcVar1;
  cFixedWorld *pcVar2;
  WallPattern WVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  TileWalls theWalls;
  TileWalls TStack_a0;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
  pcVar2 = _5Globs_pFixedWorld;
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
            (&theWalls,
             (int)&_5Globs_pFixedWorld->__vtable +
             (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,inTile);
  WVar3 = GetPattern__C9TileWalls16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                    (&theWalls,inSegment,inSel);
  if (WVar3 == pattern) {
    ___9TileWalls(&theWalls,2);
  }
  else {
    SetPattern__9TileWalls11WallPattern16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
              (&theWalls,pattern,inSegment,inSel);
    __9TileWallsRC9TileWalls(&TStack_a0,&theWalls);
    pcVar1 = pcVar2->__vtable;
    (*(code *)pcVar1->GetLightLayer)
              ((int)&pcVar2->__vtable + (int)*(short *)&pcVar1->GetWallManager,inTile,&TStack_a0);
    ___9TileWalls(&theWalls,2);
  }
  return;
}

int ESimsCursor::GetSideOfWall(EVec2 &v0, EVec2 &v1, EVec3 *vOut) {
	EVec2 v0P;
	EVec2 v1P;
	EVec2 vdir;
	EVec2 vnorm;
	EVec2 &v;
	EVec2 &v;
	float minY;
	float maxY;
	float minX;
	float maxX;
	float slope;
	EVec2 vt;
	EVec2 vt;
	float scaler;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  EVec2__null___1__1 EVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  EVec2 v0P;
  EVec2 v1P;
  EVec2 vt;
  EVec2 vnorm;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar7 = (v1->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vt.field0_0x0.d[0] = (v0->field0_0x0).d[0];
  vt.field0_0x0.d[1] = (v0->field0_0x0).d[1];
  fVar8 = (v1->field0_0x0).d[1];
  v0P = *(EVec2 *)&(v1->field0_0x0).field1;
                    /* end of inlined section */
  v1P.field0_0x0 = (EVec2__null___1__1)(EVec2__null___1__1)v0P;
  v0P.field0_0x0.d[0] = SUB84((v0->field0_0x0).field1,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  if (vt.field0_0x0.d[0] == fVar7) {
    v0P.field0_0x0 =
         (EVec2__null___1__1)
         CONCAT44((int)fVar8 * (uint)(fVar8 < vt.field0_0x0.d[1]) |
                  (int)vt.field0_0x0.d[1] * (uint)(fVar8 >= vt.field0_0x0.d[1]),vt.field0_0x0.d[0]);
    v1P.field0_0x0 =
         (EVec2__null___1__1)
         CONCAT44((int)fVar8 * (uint)(vt.field0_0x0.d[1] < fVar8) |
                  (int)vt.field0_0x0.d[1] * (uint)(vt.field0_0x0.d[1] >= fVar8),fVar7);
  }
  else if (vt.field0_0x0.d[1] == fVar8) {
    v0P.field0_0x0 =
         (EVec2__null___1__1)
         CONCAT44(vt.field0_0x0.d[1],
                  (int)fVar7 * (uint)(fVar7 < vt.field0_0x0.d[0]) |
                  (int)vt.field0_0x0.d[0] * (uint)(fVar7 >= vt.field0_0x0.d[0]));
    v1P.field0_0x0 =
         (EVec2__null___1__1)
         CONCAT44(fVar8,(int)fVar7 * (uint)(vt.field0_0x0.d[0] < fVar7) |
                        (int)vt.field0_0x0.d[0] * (uint)(vt.field0_0x0.d[0] >= fVar7));
  }
  else {
    if (0.0 < (fVar8 - vt.field0_0x0.d[1]) / (fVar7 - vt.field0_0x0.d[0])) {
      bVar4 = fVar7 < vt.field0_0x0.d[0];
                    /* end of inlined section */
    }
    else {
      bVar4 = fVar8 < vt.field0_0x0.d[1];
    }
    EVar5.field1 = (v0->field0_0x0).field1;
    if (!bVar4) goto LAB_00128d64;
    puVar1 = (undefined *)((int)&v0P.field0_0x0 + 7);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)v0P.field0_0x0 >> (7 - uVar2) * 8;
    v1P.field0_0x0 = (EVec2__null___1__1)CONCAT44(vt.field0_0x0.d[1],vt.field0_0x0.d[0]);
    puVar1 = (undefined *)((int)&v1P.field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)v1P.field0_0x0 >> (7 - uVar2) * 8;
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  EVar5 = v0P.field0_0x0;
LAB_00128d64:
  v0P.field0_0x0 = (EVec2__null___1__1)(EVec2__null___1__1)EVar5.field1;
  vnorm.field0_0x0.d[0] = v1P.field0_0x0.d[1] - v0P.field0_0x0.d[1];
                    /* end of inlined section */
  vnorm.field0_0x0.d[1] = -(v1P.field0_0x0.d[0] - v0P.field0_0x0.d[0]);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar7 = sqrtf(vnorm.field0_0x0.d[0] * vnorm.field0_0x0.d[0] +
                vnorm.field0_0x0.d[1] * vnorm.field0_0x0.d[1]);
  if (fVar7 != 0.0) {
    vnorm.field0_0x0.d[0] = vnorm.field0_0x0.d[0] * (1.0 / fVar7);
    vnorm.field0_0x0.d[1] = vnorm.field0_0x0.d[1] * (1.0 / fVar7);
  }
  fVar7 = vnorm.field0_0x0.d[0] * _wallpaperOff;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar8 = vnorm.field0_0x0.d[1] * _wallpaperOff;
                    /* end of inlined section */
  if (this->m_wallPaperSide == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    (vOut->field0_0x0).d[2] = 0.0;
    (vOut->field0_0x0).d[0] = fVar7;
    (vOut->field0_0x0).d[1] = fVar8;
                    /* end of inlined section */
    iVar6 = this->m_wallPaperSide;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    (vOut->field0_0x0).d[0] = fVar7;
    (vOut->field0_0x0).d[1] = fVar8;
    (vOut->field0_0x0).d[2] = 0.0;
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&vOut->field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | CONCAT44(-fVar8,-fVar7) >> (7 - uVar2) * 8;
    uVar2 = (uint)vOut & 7;
    *(ulong *)((int)vOut - uVar2) =
         CONCAT44(-fVar8,-fVar7) << uVar2 * 8 |
         *(ulong *)((int)vOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    (vOut->field0_0x0).d[2] = -0.0;
    iVar6 = this->m_wallPaperSide;
  }
  return iVar6;
}

s32 ESimsCursor::_GetkPaperToolValue() {
	EController *pPad;
	bool bRoomFill;
	int x;
	int y;
	CTilePt wherePt;
	EVec2 v0;
	EVec2 v1;
	CTilePt c0;
	CTilePt c1;
	TilePtDir tileDir;
	CTilePt inTile;
	CTilePt endPoint;
	bool bDidPaper;
	WallPattern pattern;
	
  EController *this_00;
  short room;
  uint uVar1;
  int iVar2;
  TilePtDir tileDir;
  WallPattern WVar3;
  WallPattern pattern;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  CTilePt c0;
  EVec2 v0;
  EVec2 v1;
  CTilePt c1;
  CTilePt inTile;
  CTilePt endPoint;
  int y;
  int x;
  bool bDidPaper;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  this_00 = _ctrlPads[*(int *)&this->field_0x30];
  uVar1 = GetDownButtons__11EControlleri(this_00,-1);
  if ((uVar1 & 0xc) == 0) {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    v0.field0_0x0.d[0] = (this->m_vCursorAnchor).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    v0.field0_0x0.d[1] = (this->m_vCursorAnchor).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    FindWallDragVert__11ESimsCursorRC5EVec2R5EVec2(this,&v0,&v1);
    __7CTilePt(&c0);
    __7CTilePt(&c1);
    ConvertVertsToTiles__11ESimsCursorRC5EVec2T1R7CTilePtT3(&v0,&v1,&c0,&c1);
    ForcePointDir__FR7CTilePtT0(&c0,&c1);
    tileDir = GetTileDirection__11ESimsCursorRC7CTilePtT1(&c0,&c1);
    if (tileDir == kNone) {
      ___7CTilePt(&c1,2);
      ___7CTilePt(&c0,2);
      return 0;
    }
    __7CTilePtRC7CTilePt(&inTile,&c0);
    __7CTilePtRC7CTilePt(&endPoint,&c1);
    _bDidPaper = 0;
    WVar3 = GetWallIndex__7EGlobalPC8WallTile(&_globals,this->m_pToolResMap);
    uVar1 = GetDownButtons__11EControlleri(this_00,0x80);
    pattern = kSheetRockPattern;
    if (uVar1 == 0) {
      pattern = WVar3;
    }
    iVar2 = GetPaperLineCost__11ESimsCursorRbRC7CTilePtT29TilePtDir11WallPatternQ29TileWalls20DiagonalSideSelector
                      (this,&bDidPaper,&c0,&c1,tileDir,pattern,kNotSpecified);
    ___7CTilePt(&endPoint,2);
    ___7CTilePt(&inTile,2);
    ___7CTilePt(&c1,2);
  }
  else {
    GetSnapPos__11ESimsCursorRiT1((ESimsCursor__15_1743 *)this,&y,&x);
    __7CTilePtiii(&c0,x,y,1);
    room = GetRoomIdFromPoint__FR7CTilePt(&c0);
    iVar2 = ComputeRoomCost__FUiUs(this->m_pToolResMap->shaderID,room);
  }
  ___7CTilePt(&c0,2);
  return iVar2;
}

bool bool lexicographical_compare<signed char *, signed char *>(signed char *first1, signed char *last1, signed char *first2, signed char *last2) {
  char cVar1;
  char cVar2;
  
  do {
    if ((first1 == last1) || (first2 == last2)) {
      return first1 == last1 && first2 != last2;
    }
    cVar1 = *first1;
    cVar2 = *first2;
    if (cVar1 < cVar2) {
      return true;
    }
    first1 = first1 + 1;
    first2 = first2 + 1;
  } while (cVar1 <= cVar2);
  return false;
}
