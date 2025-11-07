// STATUS: NOT STARTED

#include "cursorfloortool.h"

void ESimsCursor::InitFloorTool(FloorTile &n) {
	TNodeList<CursorFloorTile *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	ESimsCursor *this;
	FloorTile &n;
	float x;
	float y;
	FloorTile &node;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ERShader *pEVar4;
  CursorFloorTile *pCVar5;
  ENodeListNode *pEVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  float x;
  float y;
  ulong uStack_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  null____pfn_or_delta2 nStack_3c;
  undefined4 local_30;
  null____pfn_or_delta2 nStack_2c;
  undefined4 local_20;
  null____pfn_or_delta2 nStack_1c;
  
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  nStack_2c = SUB84((ulong)unaff_s4 >> 0x20,0);
  local_40 = (undefined4)unaff_s3;
  nStack_3c = SUB84((ulong)unaff_s3 >> 0x20,0);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  local_20 = (undefined4)unaff_retaddr;
  nStack_1c = SUB84((ulong)unaff_retaddr >> 0x20,0);
                    /* end of inlined section */
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  this->m_mode = kFloorTool;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar6 = (this->m_floorList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  this->m_toolUnitPrice = n->cost;
  if (pEVar6 != (ENodeListNode *)0x0) {
    pCVar5 = (CursorFloorTile *)pEVar6->data;
    while( true ) {
      pEVar6 = pEVar6->pNext;
      if (pCVar5 != (CursorFloorTile *)0x0) {
        Cleanup__15CursorFloorTile(pCVar5);
        _memmanFree__FPv(pCVar5);
      }
      if (pEVar6 == (ENodeListNode *)0x0) break;
      pCVar5 = (CursorFloorTile *)pEVar6->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_floorList).field0_0x0);
  while (this->m_pFloorShd != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pFloorShd->field0_0x0);
    this->m_pFloorShd = (ERShader *)0x0;
  }
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,n->shaderID,(EFile *)0x0,0);
  x = (this->m_vPos).field0_0x0.d[0];
  y = (this->m_vPos).field0_0x0.d[1];
  this->m_pFloorShd = pEVar4;
  pCVar5 = (CursorFloorTile *)_memmanAlloc__FUiUi(0x50,0x10);
  pCVar5->m_node = n;
  pCVar5->m_pRect = (EDL *)0x0;
  Init__15CursorFloorTileff(pCVar5,x,y);
  AddTail__9ENodeListUi(&(this->m_floorList).field0_0x0,(uint)pCVar5);
                    /* end of inlined section */
  GetSnapPos__11ESimsCursor((ESimsCursor__15_1743 *)&uStack_80);
  puVar1 = (undefined *)((int)&(this->m_vCursorAnchor).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uStack_80 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vCursorAnchor & 7;
  puVar3 = (ulong *)((int)&this->m_vCursorAnchor - uVar2);
  *puVar3 = uStack_80 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  SetPos__15CursorFloorTileRC5EVec2(pCVar5,&this->m_vCursorAnchor);
  return;
}

void ESimsCursor::ExitFloorTool() {
	TNodeList<CursorFloorTile *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  CursorFloorTile *this_00;
  ENodeListNode *pEVar1;
  
  while (this->m_pFloorShd != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pFloorShd->field0_0x0);
    this->m_pFloorShd = (ERShader *)0x0;
  }
  pEVar1 = (this->m_floorList).field0_0x0.m_l.m_pHead;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  if (pEVar1 != (ENodeListNode *)0x0) {
    this_00 = (CursorFloorTile *)pEVar1->data;
    while( true ) {
      pEVar1 = pEVar1->pNext;
      if (this_00 != (CursorFloorTile *)0x0) {
        Cleanup__15CursorFloorTile(this_00);
        _memmanFree__FPv(this_00);
      }
      if (pEVar1 == (ENodeListNode *)0x0) break;
      this_00 = (CursorFloorTile *)pEVar1->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_floorList).field0_0x0);
                    /* end of inlined section */
  if (this->m_mode == kFloorTool) {
    this->m_mode = kDefault;
  }
  return;
}

void ESimsCursor::DrawCursorFloorList(ERC *prc) {
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  CursorFloorTile *this_00;
  ENodeListNode *pEVar1;
  
  Select__8ERShaderP3ERCi(this->m_pFloorShd,prc,0);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_floorList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    this_00 = (CursorFloorTile *)pEVar1->data;
    while( true ) {
      Draw__15CursorFloorTileP3ERC(this_00,prc);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      this_00 = (CursorFloorTile *)pEVar1->data;
    }
  }
  return;
}

void ESimsCursor::DrawFloorPrevew(ERC *prc) {
  if (this->m_pFloorShd != (ERShader *)0x0) {
    Select__8ERShaderP3ERCi(this->m_pFloorShd,prc,0);
    DrawPrevewRect__11ESimsCursorP3ERC(this,prc);
  }
  return;
}

void ESimsCursor::DrawDeletePrevew(ERC *prc) {
  if (_11ESimsCursor_m_pBuildToolGuideShd != (ERShader *)0x0) {
    Select__8ERShaderP3ERCi(_11ESimsCursor_m_pBuildToolGuideShd,prc,0);
    DrawPrevewRect__11ESimsCursorP3ERC(this,prc);
  }
  return;
}

void ESimsCursor::DrawPrevewRect(ERC *prc) {
	int x0;
	int y0;
	int x1;
	int y1;
	float l;
	float r;
	float t;
	float b;
	float w;
	float h;
	EHouse *this;
	ERC *this;
	float x;
	float y;
	float x;
	float y;
	float y;
	float x;
	float y;
	EVec4 *this;
	float x;
	float x;
	float y;
	float x;
	float y;
	
  undefined8 uVar1;
  undefined8 uVar2;
  EHouse__26_3190 *pEVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  int x1;
  int y1;
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
  
  pEVar3 = _globals._pCurHouse;
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/eorhouse.h */
                    /* end of inlined section */
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_40 = (undefined4)unaff_retaddr;
  uStack_3c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  iVar20 = (int)((this->m_vCursorAnchor).field0_0x0.d[0] -
                ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[0]);
  iVar16 = (int)((this->m_vCursorAnchor).field0_0x0.d[1] -
                ((_globals._pCurHouse)->m_vHouse_off).field0_0x0.d[1]);
  GetSnapPos__11ESimsCursorRiT1((ESimsCursor__15_1743 *)this,&x1,&y1);
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
  iVar10 = x1;
  if (iVar20 <= x1) {
    iVar10 = iVar20;
  }
  if (x1 <= iVar20) {
    x1 = iVar20;
  }
  iVar20 = y1;
  if (y1 <= iVar16) {
    iVar20 = iVar16;
  }
  if (iVar16 <= y1) {
    y1 = iVar16;
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar21 = (pEVar3->m_vHouse_off).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar19 = (pEVar3->m_vHouse_off).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
  fVar23 = ((float)iVar10 - 0.5) + fVar19;
  fVar19 = (float)x1 + 0.5 + fVar19;
  fVar22 = ((float)y1 - 0.5) + fVar21;
  fVar21 = (float)iVar20 + 0.5 + fVar21;
  fVar18 = fVar19 - fVar23;
  fVar17 = fVar21 - fVar22;
  uVar24 = (int)fVar18 * (uint)(1.0 < fVar18) | (uint)(1.0 >= fVar18) * 0x3f800000;
                    /* inlined from /eor/src2/engine/e_dl.h */
  uVar25 = (int)fVar17 * (uint)(1.0 < fVar17) | (uint)(1.0 >= fVar17) * 0x3f800000;
  puVar4 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x140,0x10);
                    /* end of inlined section */
  *(undefined4 *)(puVar4 + 3) = 0x7f;
  *(undefined4 *)((int)puVar4 + 0x3c) = 0x80;
  *(undefined4 *)(puVar4 + 6) = 0x80;
  *(undefined4 *)((int)puVar4 + 0x34) = 0x80;
  *(undefined4 *)(puVar4 + 7) = 0x80;
  *(undefined4 *)(puVar4 + 2) = 0;
  *(undefined4 *)((int)puVar4 + 0x14) = 0;
  *(undefined4 *)((int)puVar4 + 0x1c) = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(uint *)(puVar4 + 4) = uVar24;
  *(uint *)((int)puVar4 + 0x24) = uVar25;
  *(float *)puVar4 = fVar19;
  *(float *)((int)puVar4 + 4) = fVar22;
  *(undefined4 *)(puVar4 + 1) = 0x3d4ccccd;
  puVar9 = puVar4 + 10;
  puVar8 = puVar4;
  do {
    puVar7 = puVar8;
    puVar11 = puVar9;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar5 = *(undefined4 *)(puVar7 + 1);
    uVar6 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar12 = *(undefined4 *)(puVar7 + 3);
    uVar13 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar5;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar6;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar12;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar13;
    puVar8 = puVar7 + 4;
    puVar9 = puVar11 + 4;
  } while (puVar8 != puVar4 + 8);
  uVar1 = *puVar8;
  uVar5 = *(undefined4 *)(puVar7 + 5);
  uVar6 = *(undefined4 *)((int)puVar7 + 0x2c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar5;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)(puVar4 + 0xe) = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(uint *)((int)puVar4 + 0x74) = uVar25;
  *(float *)(puVar4 + 10) = fVar23;
  *(float *)((int)puVar4 + 0x54) = fVar22;
  *(undefined4 *)(puVar4 + 0xb) = 0x3d4ccccd;
  puVar9 = puVar4;
  puVar8 = puVar4 + 0x14;
  do {
    puVar11 = puVar8;
    puVar7 = puVar9;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar5 = *(undefined4 *)(puVar7 + 1);
    uVar6 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar12 = *(undefined4 *)(puVar7 + 2);
    uVar13 = *(undefined4 *)((int)puVar7 + 0x14);
    uVar14 = *(undefined4 *)(puVar7 + 3);
    uVar15 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar5;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar6;
    *(undefined4 *)(puVar11 + 2) = uVar12;
    *(undefined4 *)((int)puVar11 + 0x14) = uVar13;
    *(undefined4 *)(puVar11 + 3) = uVar14;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar15;
    puVar9 = puVar7 + 4;
    puVar8 = puVar11 + 4;
  } while (puVar9 != puVar4 + 8);
  uVar1 = *puVar9;
  uVar5 = *(undefined4 *)(puVar7 + 5);
  uVar6 = *(undefined4 *)((int)puVar7 + 0x2c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar5;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(uint *)(puVar4 + 0x18) = uVar24;
  *(undefined4 *)((int)puVar4 + 0xc4) = 0;
  *(float *)(puVar4 + 0x14) = fVar19;
  *(float *)((int)puVar4 + 0xa4) = fVar21;
  *(undefined4 *)(puVar4 + 0x15) = 0x3d4ccccd;
  puVar9 = puVar4;
  puVar8 = puVar4 + 0x1e;
  do {
    puVar11 = puVar8;
    puVar7 = puVar9;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar5 = *(undefined4 *)(puVar7 + 1);
    uVar6 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar12 = *(undefined4 *)(puVar7 + 3);
    uVar13 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar11 = (int)uVar1;
    *(int *)((int)puVar11 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar11 + 1) = uVar5;
    *(undefined4 *)((int)puVar11 + 0xc) = uVar6;
    *(int *)(puVar11 + 2) = (int)uVar2;
    *(int *)((int)puVar11 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar11 + 3) = uVar12;
    *(undefined4 *)((int)puVar11 + 0x1c) = uVar13;
    puVar9 = puVar7 + 4;
    puVar8 = puVar11 + 4;
  } while (puVar9 != puVar4 + 8);
  uVar1 = *puVar9;
  uVar5 = *(undefined4 *)(puVar7 + 5);
  uVar6 = *(undefined4 *)((int)puVar7 + 0x2c);
  *(int *)(puVar11 + 4) = (int)uVar1;
  *(int *)((int)puVar11 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar11 + 5) = uVar5;
  *(undefined4 *)((int)puVar11 + 0x2c) = uVar6;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar4 + 0x22) = 0;
  *(undefined4 *)((int)puVar4 + 0x114) = 0;
  *(float *)(puVar4 + 0x1e) = fVar23;
  *(float *)((int)puVar4 + 0xf4) = fVar21;
  *(undefined4 *)(puVar4 + 0x1f) = 0x3d4ccccd;
                    /* end of inlined section */
  (*(code *)prc->__vtable->ZTest)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar4,4);
  return;
}

void ESimsCursor::DrawRoomFillPrevew(ERC *prc) {
	int x;
	int y;
	CTilePt ctpt;
	UInt16 roomID;
	RoomManager *pRoomman;
	Room *pRoom;
	RoomImpl *pRoomImpl;
	Room *r1;
	Room *r2;
	Sides s1;
	Sides s2;
	CTilePt *it;
	RoomImpl *this;
	EHouse *this;
	float x;
	float y;
	float l;
	float r;
	float t;
	float b;
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
  EHouse__26_3190 *pEVar3;
  RoomManager *pRVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 unaff_s0;
  CTilePt *this_00;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  CTilePt *pCVar23;
  undefined8 unaff_s5;
  EVec2 *pEVar24;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  CTilePt ctpt;
  int y;
  int x;
  Room *r1;
  Room *r2;
  Sides s1;
  Sides s2;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
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
  
  local_b0 = (undefined4)unaff_s3;
  uStack_ac = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_c0 = (undefined4)unaff_s2;
  uStack_bc = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_d0 = (undefined4)unaff_s1;
  uStack_cc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_e0 = (undefined4)unaff_s0;
  uStack_dc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_50 = (undefined4)unaff_retaddr;
  uStack_4c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s8;
  uStack_5c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_70 = (undefined4)unaff_s7;
  uStack_6c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_80 = (undefined4)unaff_s6;
  uStack_7c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_90 = (undefined4)unaff_s5;
  uStack_8c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_a0 = (undefined4)unaff_s4;
  uStack_9c = (undefined4)((ulong)unaff_s4 >> 0x20);
  GetSnapPos__11ESimsCursorRiT1((ESimsCursor__15_1743 *)this,&y,&x);
  __7CTilePtiii(&ctpt,x,y,1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  lVar11 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                     ((int)&_5Globs_pFixedWorld->__vtable +
                      (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,&ctpt);
  pRVar4 = _5Globs_pRoomManager;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  if (lVar11 == 0xfffb) {
                    /* end of inlined section */
    (*(code *)_5Globs_pRoomManager->__vtable[1].GetRoomManagerImpl)
              ((int)&_5Globs_pRoomManager->__vtable +
               (int)*(short *)&_5Globs_pRoomManager->__vtable[1].RoomManager,&ctpt,&r1,&r2,&s1,&s2);
    lVar11 = (*(code *)r1->__vtable->GetObjectDensity)
                       ((int)&r1->__vtable + (int)*(short *)&r1->__vtable->InvalidateRoom);
  }
  if (pRVar4 == (RoomManager *)0x0) {
    lVar12 = 0;
  }
  else {
    lVar12 = (*(code *)pRVar4->__vtable->ClearRoomPartitions)
                       ((int)&pRVar4->__vtable + (int)*(short *)&pRVar4->__vtable->GetHouse,lVar11);
  }
  lVar13 = 0;
  if (lVar12 != 0) {
    iVar5 = *(int *)lVar12;
    lVar13 = (**(code **)(iVar5 + 0x3c))((int)(int *)lVar12 + (int)*(short *)(iVar5 + 0x38));
  }
                    /* inlined from ../MSrc/roomsimpl.h */
                    /* end of inlined section */
  if (((lVar13 != 0) && (iVar5 = (int)lVar13, lVar11 != 0)) &&
     (this_00 = *(CTilePt **)(iVar5 + 8), this_00 != *(CTilePt **)(iVar5 + 0xc))) {
    if (this->m_pFloorShd == (ERShader *)0x0) {
      ___7CTilePt(&ctpt,2);
      return;
    }
    Select__8ERShaderP3ERCi(this->m_pFloorShd,prc,0);
    pEVar3 = _globals._pCurHouse;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
    pEVar24 = &(_globals._pCurHouse)->m_vHouse_off;
    if (this_00 != *(CTilePt **)(iVar5 + 0xc)) {
      uVar29 = 0x3d4ccccd;
      uVar30 = 0;
      do {
        pCVar23 = this_00 + 1;
        iVar6 = GetY__C7CTilePt(this_00);
        iVar7 = GetX__C7CTilePt(this_00);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        fVar25 = (pEVar24->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        fVar26 = (pEVar3->m_vHouse_off).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
        fVar27 = (float)iVar6 + 0.5 + fVar25;
        fVar25 = ((float)iVar6 - 0.5) + fVar25;
        fVar28 = ((float)iVar7 - 0.5) + fVar26;
                    /* inlined from /eor/src2/engine/e_dl.h */
        fVar26 = (float)iVar7 + 0.5 + fVar26;
        puVar8 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x140,0x10);
                    /* end of inlined section */
        *(undefined4 *)(puVar8 + 6) = 0x80;
        *(undefined4 *)(puVar8 + 3) = 0x7f;
        *(undefined4 *)((int)puVar8 + 0x34) = 0x80;
        *(undefined4 *)(puVar8 + 7) = 0x80;
        *(undefined4 *)((int)puVar8 + 0x3c) = 0x80;
        *(undefined4 *)(puVar8 + 2) = 0;
        *(undefined4 *)((int)puVar8 + 0x14) = 0;
        *(undefined4 *)((int)puVar8 + 0x1c) = 0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        *(undefined4 *)(puVar8 + 4) = 0x3f800000;
        *(undefined4 *)((int)puVar8 + 0x24) = 0x3f800000;
        *(float *)puVar8 = fVar27;
        *(float *)((int)puVar8 + 4) = fVar28;
        *(undefined4 *)(puVar8 + 1) = uVar29;
        puVar15 = puVar8 + 10;
        puVar10 = puVar8;
        do {
          puVar9 = puVar10;
          puVar14 = puVar15;
          uVar1 = *puVar9;
                    /* end of inlined section */
          uVar16 = *(undefined4 *)(puVar9 + 1);
          uVar17 = *(undefined4 *)((int)puVar9 + 0xc);
          uVar2 = puVar9[2];
          uVar18 = *(undefined4 *)(puVar9 + 3);
          uVar19 = *(undefined4 *)((int)puVar9 + 0x1c);
          *(int *)puVar14 = (int)uVar1;
          *(int *)((int)puVar14 + 4) = (int)((ulong)uVar1 >> 0x20);
          *(undefined4 *)(puVar14 + 1) = uVar16;
          *(undefined4 *)((int)puVar14 + 0xc) = uVar17;
          *(int *)(puVar14 + 2) = (int)uVar2;
          *(int *)((int)puVar14 + 0x14) = (int)((ulong)uVar2 >> 0x20);
          *(undefined4 *)(puVar14 + 3) = uVar18;
          *(undefined4 *)((int)puVar14 + 0x1c) = uVar19;
          puVar10 = puVar9 + 4;
          puVar15 = puVar14 + 4;
        } while (puVar10 != puVar8 + 8);
        uVar16 = *(undefined4 *)((int)puVar9 + 0x24);
        uVar17 = *(undefined4 *)(puVar9 + 5);
        uVar18 = *(undefined4 *)((int)puVar9 + 0x2c);
        *(undefined4 *)(puVar14 + 4) = *(undefined4 *)puVar10;
        *(undefined4 *)((int)puVar14 + 0x24) = uVar16;
        *(undefined4 *)(puVar14 + 5) = uVar17;
        *(undefined4 *)((int)puVar14 + 0x2c) = uVar18;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        *(undefined4 *)(puVar8 + 0xe) = 0;
        *(undefined4 *)((int)puVar8 + 0x74) = 0x3f800000;
        *(float *)(puVar8 + 10) = fVar25;
        *(float *)((int)puVar8 + 0x54) = fVar28;
        *(undefined4 *)(puVar8 + 0xb) = uVar29;
        puVar15 = puVar8;
        puVar10 = puVar8 + 0x14;
        do {
          puVar14 = puVar10;
          puVar9 = puVar15;
                    /* end of inlined section */
          uVar16 = *(undefined4 *)((int)puVar9 + 4);
          uVar17 = *(undefined4 *)(puVar9 + 1);
          uVar18 = *(undefined4 *)((int)puVar9 + 0xc);
          uVar19 = *(undefined4 *)(puVar9 + 2);
          uVar20 = *(undefined4 *)((int)puVar9 + 0x14);
          uVar21 = *(undefined4 *)(puVar9 + 3);
          uVar22 = *(undefined4 *)((int)puVar9 + 0x1c);
          *(undefined4 *)puVar14 = *(undefined4 *)puVar9;
          *(undefined4 *)((int)puVar14 + 4) = uVar16;
          *(undefined4 *)(puVar14 + 1) = uVar17;
          *(undefined4 *)((int)puVar14 + 0xc) = uVar18;
          *(undefined4 *)(puVar14 + 2) = uVar19;
          *(undefined4 *)((int)puVar14 + 0x14) = uVar20;
          *(undefined4 *)(puVar14 + 3) = uVar21;
          *(undefined4 *)((int)puVar14 + 0x1c) = uVar22;
          puVar15 = puVar9 + 4;
          puVar10 = puVar14 + 4;
        } while (puVar15 != puVar8 + 8);
        uVar1 = *puVar15;
        uVar16 = *(undefined4 *)(puVar9 + 5);
        uVar17 = *(undefined4 *)((int)puVar9 + 0x2c);
        *(int *)(puVar14 + 4) = (int)uVar1;
        *(int *)((int)puVar14 + 0x24) = (int)((ulong)uVar1 >> 0x20);
        *(undefined4 *)(puVar14 + 5) = uVar16;
        *(undefined4 *)((int)puVar14 + 0x2c) = uVar17;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        *(undefined4 *)(puVar8 + 0x18) = 0x3f800000;
        *(undefined4 *)((int)puVar8 + 0xc4) = 0;
        *(float *)(puVar8 + 0x14) = fVar27;
        *(float *)((int)puVar8 + 0xa4) = fVar26;
        *(undefined4 *)(puVar8 + 0x15) = uVar29;
        puVar15 = puVar8;
        puVar10 = puVar8 + 0x1e;
        do {
          puVar14 = puVar10;
          puVar9 = puVar15;
          uVar1 = *puVar9;
                    /* end of inlined section */
          uVar16 = *(undefined4 *)(puVar9 + 1);
          uVar17 = *(undefined4 *)((int)puVar9 + 0xc);
          uVar2 = puVar9[2];
          uVar18 = *(undefined4 *)(puVar9 + 3);
          uVar19 = *(undefined4 *)((int)puVar9 + 0x1c);
          *(int *)puVar14 = (int)uVar1;
          *(int *)((int)puVar14 + 4) = (int)((ulong)uVar1 >> 0x20);
          *(undefined4 *)(puVar14 + 1) = uVar16;
          *(undefined4 *)((int)puVar14 + 0xc) = uVar17;
          *(int *)(puVar14 + 2) = (int)uVar2;
          *(int *)((int)puVar14 + 0x14) = (int)((ulong)uVar2 >> 0x20);
          *(undefined4 *)(puVar14 + 3) = uVar18;
          *(undefined4 *)((int)puVar14 + 0x1c) = uVar19;
          puVar15 = puVar9 + 4;
          puVar10 = puVar14 + 4;
        } while (puVar15 != puVar8 + 8);
        uVar16 = *(undefined4 *)((int)puVar9 + 0x24);
        uVar17 = *(undefined4 *)(puVar9 + 5);
        uVar18 = *(undefined4 *)((int)puVar9 + 0x2c);
        *(undefined4 *)(puVar14 + 4) = *(undefined4 *)puVar15;
        *(undefined4 *)((int)puVar14 + 0x24) = uVar16;
        *(undefined4 *)(puVar14 + 5) = uVar17;
        *(undefined4 *)((int)puVar14 + 0x2c) = uVar18;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        *(undefined4 *)(puVar8 + 0x22) = uVar30;
        *(undefined4 *)((int)puVar8 + 0x114) = 0;
        *(float *)(puVar8 + 0x1e) = fVar25;
        *(float *)((int)puVar8 + 0xf4) = fVar26;
        *(undefined4 *)(puVar8 + 0x1f) = uVar29;
                    /* end of inlined section */
        (*(code *)prc->__vtable->ZTest)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
        (*(code *)prc->__vtable->TriIndexed)
                  ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar8,4);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
        this_00 = pCVar23;
      } while (pCVar23 != *(CTilePt **)(iVar5 + 0xc));
    }
  }
  ___7CTilePt(&ctpt,2);
  return;
}

void CursorFloorTile::Init(float x, float y) {
	ERC *prc;
	float x;
	float y;
	float y;
	float x;
	
  EGlobalManagerClient__vtable *pEVar1;
  EDL *pEVar2;
  undefined8 uVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float local_60;
  float local_5c;
  undefined4 local_58;
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
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  uVar3 = (*(code *)pEVar1[6].EGlobalManagerClient)
                    ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 6),1);
  Rect__10EPrimitiveP3ERCff((ERC *)uVar3,1.0,1.0);
  pEVar1 = (_pGfx->field0_0x0).__vtable;
  pEVar2 = (EDL *)(*(code *)pEVar1[6].ManagedShutdown)
                            ((int)&(_pGfx->field0_0x0).__vtable +
                             (int)*(short *)&pEVar1[6].ManagedStartup,uVar3);
  this->m_pRect = pEVar2;
  Id__5EMat4(&this->m_mPos);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  local_58 = 0x3d4ccccd;
  local_60 = x;
  local_5c = y;
  Translate__5EMat4RC5EVec3(&this->m_mPos,(EVec3 *)&local_60);
  return;
}

void CursorFloorTile::Draw(ERC *prc) {
	ERC *this;
	
  EMat4 *this_00;
  
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
  this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
  __as__5EMat4RC5EMat4(this_00,&this->m_mPos);
  (*(code *)prc->__vtable->SetMipMap)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,this_00);
  (*(code *)prc->__vtable->DisableRasterModes)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->EnableRasterModes,this->m_pRect);
  return;
}

void CursorFloorTile::Cleanup() {
  EGlobalManagerClient__vtable *pEVar1;
  
  while (this->m_pRect != (EDL *)0x0) {
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[7].EGlobalManagerClient)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 7),this->m_pRect);
    this->m_pRect = (EDL *)0x0;
  }
  return;
}

void CursorFloorTile::SetPos(EVec2 &v) {
	EVec2 *this;
	EVec2 *this;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Id__5EMat4(&this->m_mPos);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_3c = (v->field0_0x0).d[1];
  local_40 = (v->field0_0x0).d[0];
  local_38 = 0x3d4ccccd;
  Translate__5EMat4RC5EVec3(&this->m_mPos,(EVec3 *)&local_40);
  return;
}

bool CanPlaceFloor(CTilePt &point, FloorPattern floor) {
	ObjectIterator i;
	CTilePt &location;
	
  bool bVar1;
  ulong uVar2;
  ObjectIterator i;
  
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  uVar2 = (*(code *)_5Globs_pFixedWorld->__vtable[1].GetFloorLayer)
                    ((int)&_5Globs_pFixedWorld->__vtable +
                     (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].OutOfGrid,point);
  bVar1 = false;
  if ((uVar2 & 0x21) == 1) {
    if (floor != kNoFloor) {
                    /* inlined from ../MSrc/objectiterator.h */
      init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&i,point,kAll);
                    /* end of inlined section */
      if (i.fCurrent == (cXObject__15_2008 *)0x0) {
        return true;
      }
      do {
        uVar2 = (*(code *)(i.fCurrent)->__vtable->ReconType)
                          ((int)&(i.fCurrent)->_vb3534 +
                           (int)*(short *)&(i.fCurrent)->__vtable->ReconStream,0x2a);
        if (((uVar2 ^ 1) & 1) != 0) {
          return false;
        }
        __pp__14ObjectIterator(&i);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
      } while (i.fCurrent != (cXObject__15_2008 *)0x0);
    }
    bVar1 = true;
  }
  return bVar1;
}

int GetFloorCost(FloorPattern pattern) {
	unsigned int n;
	
  FloorTile **ppFVar1;
  FloorTile *pFVar2;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  ppFVar1 = ((_globals._pFloorSet)->field0_0x0).pData;
  if (ppFVar1 == (FloorTile **)0x0) {
    pFVar2 = (FloorTile *)0x0;
  }
  else {
    pFVar2 = ppFVar1[-1];
  }
                    /* end of inlined section */
  if ((int)pattern < (int)pFVar2) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    return ((_globals._pFloorSet)->field0_0x0).pData[pattern]->cost;
  }
  return 0;
}

int GetFloorRefund(FloorPattern pattern) {
	unsigned int n;
	
  FloorTile **ppFVar1;
  uint uVar2;
  FloorTile *pFVar3;
  float fVar4;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  ppFVar1 = ((_globals._pFloorSet)->field0_0x0).pData;
  if (ppFVar1 == (FloorTile **)0x0) {
    pFVar3 = (FloorTile *)0x0;
  }
  else {
    pFVar3 = ppFVar1[-1];
  }
                    /* end of inlined section */
  if ((int)pattern < (int)((int)&pFVar3[-1].category + 3)) {
                    /* inlined from /eor/src2/common/datastruc/e_qdatatypes.h */
                    /* end of inlined section */
    uVar2 = ((_globals._pFloorSet)->field0_0x0).pData[pattern]->cost;
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

int GetTotalRefundOnTile(CTilePt &point) {
	FloorPattern floor;
	TileWallStorage &walls;
	TileWallStorage *this;
	FloorPattern patB;
	
  byte bVar1;
  FloorPattern pattern;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  pattern = (*(code *)_5Globs_pFixedWorld->__vtable->GetVertexConfig)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->IsOutside,point);
  pbVar2 = (byte *)(*(code *)_5Globs_pFixedWorld->__vtable[1].DoCommand)
                             ((int)&_5Globs_pFixedWorld->__vtable +
                              (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].Load,point);
                    /* inlined from ../MSrc/tilewallstorage.h */
                    /* end of inlined section */
  if ((*pbVar2 & 0x30) == 0) {
    iVar3 = GetFloorRefund__F12FloorPattern(pattern);
  }
  else {
    bVar1 = pbVar2[4];
    iVar3 = GetFloorRefund__F12FloorPattern((uint)pbVar2[2]);
    iVar4 = GetFloorRefund__F12FloorPattern((uint)bVar1);
    iVar3 = (iVar3 + iVar4) / 2;
  }
  return -iVar3;
}

s32 GetNewFloorCost(bool &bPlacedFloor, int startx, int stopx, int starty, int stopy, FloorPattern pattern) {
	s32 totalCost;
	int k;
	int j;
	CTilePt ctpt;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CTilePt ctpt;
  
  iVar5 = 0;
  *(undefined4 *)bPlacedFloor = 0;
  if (startx <= stopx) {
    do {
      iVar4 = startx + 1;
      iVar3 = starty;
      if (starty <= stopy) {
        do {
          __7CTilePtiii(&ctpt,startx,iVar3,1);
          bVar1 = CanPlaceFloor__FRC7CTilePt12FloorPattern(&ctpt,pattern);
          if (bVar1) {
            *(undefined4 *)bPlacedFloor = 1;
            iVar2 = GetFloorCost__F12FloorPattern(pattern);
            iVar5 = iVar5 + iVar2;
          }
          ___7CTilePt(&ctpt,2);
          iVar3 = iVar3 + 1;
        } while (iVar3 <= stopy);
      }
      startx = iVar4;
    } while (iVar4 <= stopx);
  }
  iVar3 = 0;
  if (_globals.Cheats._4_4_ == 0) {
    bVar1 = IsBuildHouseMode__7EGlobal(&_globals);
    iVar3 = 0;
    if (!bVar1) {
      iVar3 = iVar5;
    }
  }
  return iVar3;
}

s32 GetTotalFloorRefund(bool &bPlacedFloor, int startx, int stopx, int starty, int stopy, FloorPattern pattern) {
	s32 totalCost;
	int k;
	int j;
	CTilePt ctpt;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CTilePt ctpt;
  
  iVar5 = 0;
  *(undefined4 *)bPlacedFloor = 0;
  if (startx <= stopx) {
    do {
      iVar4 = startx + 1;
      iVar3 = starty;
      if (starty <= stopy) {
        do {
          __7CTilePtiii(&ctpt,startx,iVar3,1);
          bVar1 = CanPlaceFloor__FRC7CTilePt12FloorPattern(&ctpt,pattern);
          if (bVar1) {
            *(undefined4 *)bPlacedFloor = 1;
            iVar2 = GetTotalRefundOnTile__FRC7CTilePt(&ctpt);
            iVar5 = iVar5 + iVar2;
          }
          ___7CTilePt(&ctpt,2);
          iVar3 = iVar3 + 1;
        } while (iVar3 <= stopy);
      }
      startx = iVar4;
    } while (iVar4 <= stopx);
  }
  iVar3 = 0;
  if (_globals.Cheats._4_4_ == 0) {
    bVar1 = IsBuildHouseMode__7EGlobal(&_globals);
    iVar3 = 0;
    if (!bVar1) {
      iVar3 = iVar5;
    }
  }
  return iVar3;
}

s32 GetTotalRoomFillCost__FRbP4RoomRCt6vector2Z7CTilePtZt23__malloc_alloc_template1i012FloorPattern(bool &bDidFloor, Room *pRoom, vector<CTilePt,__malloc_alloc_template<0> > &tiles, FloorPattern pattern) {
	bool brefund;
	s32 totalCost;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	int pos;
	TileWalls walls;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	unsigned int n;
	vector<CTilePt,__malloc_alloc_template<0> > *this;
	DiagonalSideSelector A;
	DiagonalSideSelector B;
	
  bool bVar1;
  bool bVar2;
  RoomImpl *pRoom_00;
  FloorPattern FVar3;
  int iVar4;
  DiagonalSideSelector inSelector;
  int iVar5;
  undefined8 unaff_s0;
  CTilePt *point;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int iVar6;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  int iVar7;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  TileWalls walls;
  DiagonalSideSelector A;
  DiagonalSideSelector B;
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
  
                    /* inlined from ../MSrc/Vector.h */
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
                    /* end of inlined section */
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  bVar2 = pattern != kNoFloor;
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  *(undefined4 *)bDidFloor = 0;
                    /* inlined from ../MSrc/Vector.h */
  iVar6 = ((int)tiles->finish - (int)tiles->start) * -0x55555555;
                    /* end of inlined section */
  iVar5 = 0;
  if (0 < iVar6) {
    iVar7 = 0;
    do {
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/Vector.h */
      point = (CTilePt *)(&tiles->start->mX + iVar7);
                    /* end of inlined section */
      bVar1 = CanPlaceFloor__FRC7CTilePt12FloorPattern(point,pattern);
      if (bVar1) {
        *(undefined4 *)bDidFloor = 1;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
                  (&walls,(int)&_5Globs_pFixedWorld->__vtable +
                          (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,point);
        bVar1 = HasDiagonal__C9TileWalls(&walls);
        if (bVar1) {
          A = kNotSpecified;
          B = kNotSpecified;
          pRoom_00 = (RoomImpl *)
                     (*(code *)pRoom->__vtable->IsBathroom)
                               ((int)&pRoom->__vtable + (int)*(short *)&pRoom->__vtable->IsBedroom);
          CheckDiagForRoomContainment__FP8RoomImplRC7CTilePtR9TileWallsRQ29TileWalls20DiagonalSideSelectorT3
                    (pRoom_00,point,&walls,&A,&B);
          inSelector = B;
          if ((A == kNotSpecified) || (inSelector = A, B == kNotSpecified)) {
            if (bVar2) {
LAB_00125cd8:
              iVar4 = GetFloorCost__F12FloorPattern(pattern);
              iVar5 = iVar5 + iVar4;
              goto LAB_00125d30;
            }
          }
          else {
            if (bVar2) goto LAB_00125cd8;
            FVar3 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(&walls,B);
            iVar4 = GetFloorRefund__F12FloorPattern(FVar3);
            iVar5 = iVar5 - iVar4 / 2;
            inSelector = A;
          }
          FVar3 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(&walls,inSelector);
          iVar4 = GetFloorRefund__F12FloorPattern(FVar3);
          iVar5 = iVar5 - iVar4 / 2;
        }
        else {
          if (bVar2) goto LAB_00125cd8;
          iVar4 = GetTotalRefundOnTile__FRC7CTilePt(point);
          iVar5 = iVar5 + iVar4;
        }
LAB_00125d30:
        ___9TileWalls(&walls,2);
      }
      iVar6 = iVar6 + -1;
      iVar7 = iVar7 + 3;
    } while (iVar6 != 0);
  }
  iVar6 = 0;
  if (_globals.Cheats._4_4_ == 0) {
    bVar2 = IsBuildHouseMode__7EGlobal(&_globals);
    iVar6 = 0;
    if (!bVar2) {
      iVar6 = iVar5;
    }
  }
  return iVar6;
}

void ESimsCursor::FloorUpdate() {
	EController *pPad;
	u32 butts;
	bool bRoomFill;
	FloorPattern newid;
	int x;
	int y;
	CTilePt ctpt;
	UInt16 roomID;
	Room *pRoom;
	RoomImpl *pRoomImpl;
	CTilePt *it;
	RoomImpl *this;
	bool floorPlaced;
	s32 totalCost;
	s32 dollars;
	bool bfreeItems;
	FloorPattern newid;
	int x;
	int y;
	int startx;
	int starty;
	int stopx;
	int stopy;
	bool floorPlaced;
	s32 totalCost;
	s32 dollars;
	bool bfreeItems;
	int k;
	int j;
	CTilePt ctpt;
	TileWalls wall;
	DiagonalSideSelector A;
	DiagonalSideSelector B;
	int x;
	int y;
	int startx;
	int starty;
	int stopx;
	int stopy;
	bool floorPlaced;
	s32 totalCost;
	s32 dollars;
	bool bfreeItems;
	int k;
	int j;
	CTilePt ctpt;
	TileWalls wall;
	DiagonalSideSelector A;
	DiagonalSideSelector B;
	
  undefined *puVar1;
  EController *this_00;
  ENodeListNode *pEVar2;
  CursorFloorTile *this_01;
  ulong *puVar3;
  float fVar4;
  ERModel *x_00;
  cFixedWorld *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FloorPattern FVar9;
  int iVar10;
  int iVar11;
  CFloorArray *pCVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  DiagonalSideSelector DVar17;
  CTilePt *where;
  DiagonalSideSelector DVar18;
  undefined8 unaff_s0;
  Room *pRoom;
  undefined8 unaff_s1;
  ERModel *y_00;
  int y_01;
  undefined8 unaff_s2;
  RoomImpl *pRoom_00;
  undefined8 unaff_s3;
  long lVar19;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  ERModel *pEVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  CTilePt ctpt;
  TileWalls wall;
  TileWalls TStack_160;
  TileWalls TStack_120;
  ERShader *local_e0;
  ERModel *local_dc;
  ERModel *local_d8;
  ERModel *local_d4;
  ERModel *local_d0;
  ERModel *local_cc;
  int x;
  int y;
  bool floorPlaced;
  ERModel *local_bc;
  ERModel *local_b8;
  int starty;
  int totalCost;
  ERModel *local_ac;
  ERParticleType *local_a0;
  ENodeListNode *pEStack_9c;
  ENodeListNode *local_90;
  WallTile *pWStack_8c;
  undefined4 local_80;
  int iStack_7c;
  float local_70;
  WallStyle WStack_6c;
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
  
  local_70 = (float)unaff_s3;
  WStack_6c = (WallStyle)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  iStack_7c = (int)((ulong)unaff_s2 >> 0x20);
  local_90 = (ENodeListNode *)unaff_s1;
  pWStack_8c = (WallTile *)((ulong)unaff_s1 >> 0x20);
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
  local_a0 = (ERParticleType *)unaff_s0;
  pEStack_9c = (ENodeListNode *)((ulong)unaff_s0 >> 0x20);
  this_00 = _ctrlPads[*(int *)&this->field_0x30];
  uVar8 = GetDownButtons__11EControlleri(this_00,-1);
  if ((uVar8 & 0xc) != 0) {
    uVar8 = GetReleased__11EControlleri(_ctrlPads[*(int *)&this->field_0x30],0x40);
    if (uVar8 == 0) {
      return;
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar2 = (this->m_floorList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    if (pEVar2 == (ENodeListNode *)0x0) {
      return;
    }
                    /* end of inlined section */
    FVar9 = GetMaxisIndex__C15CursorFloorTile((CursorFloorTile *)pEVar2->data);
    GetSnapPos__11ESimsCursorRiT1((ESimsCursor__15_1743 *)this,(int *)&local_e0,(int *)&local_dc);
    __7CTilePtiii(&ctpt,(int)local_dc,(int)local_e0,1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    lVar15 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                       ((int)&_5Globs_pFixedWorld->__vtable +
                        (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,&ctpt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    if (_5Globs_pRoomManager == (RoomManager *)0x0) {
      lVar16 = 0;
    }
    else {
      lVar16 = (*(code *)_5Globs_pRoomManager->__vtable->ClearRoomPartitions)
                         ((int)&_5Globs_pRoomManager->__vtable +
                          (int)*(short *)&_5Globs_pRoomManager->__vtable->GetHouse,lVar15);
    }
    lVar19 = 0;
    pRoom = (Room *)lVar16;
    if (lVar16 != 0) {
      lVar19 = (*(code *)pRoom->__vtable->IsBathroom)
                         ((int)&pRoom->__vtable + (int)*(short *)&pRoom->__vtable->IsBedroom);
    }
    if (lVar19 != 0) {
      pRoom_00 = (RoomImpl *)lVar19;
                    /* inlined from ../MSrc/roomsimpl.h */
                    /* end of inlined section */
      if ((lVar15 != 0) &&
         (where = (pRoom_00->fRoomList).start, where != (pRoom_00->fRoomList).finish)) {
        local_d8 = (ERModel *)0x0;
        bVar7 = false;
        iVar10 = GetTotalRoomFillCost__FRbP4RoomRCt6vector2Z7CTilePtZt23__malloc_alloc_template1i012FloorPattern
                           ((bool *)&local_d8,pRoom,&pRoom_00->fRoomList,FVar9);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        iVar11 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                           ((int)&_5Globs_pSimulator->__vtable +
                            (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
        if (_globals.Cheats._4_4_ == 0) {
          bVar6 = IsBuildHouseMode__7EGlobal(&_globals);
          if (bVar6) {
            bVar7 = true;
          }
        }
        else {
          bVar7 = true;
        }
        if ((bVar7) || (iVar10 <= iVar11)) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
          pCVar12 = (CFloorArray *)
                    (*(code *)_5Globs_pFixedWorld->__vtable->SetFlags)
                              ((int)&_5Globs_pFixedWorld->__vtable +
                               (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFlags);
          SaveFloorLayer__17ESimScratchPadManR11CFloorArray(pCVar12);
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
          if (where != (pRoom_00->fRoomList).finish) {
            do {
              SetFloor__11ESimsCursorRC7CTilePt12FloorPatternP8RoomImpl(this,where,FVar9,pRoom_00);
              where = where + 1;
                    /* inlined from ../MSrc/Vector.h */
                    /* end of inlined section */
            } while (where != (pRoom_00->fRoomList).finish);
          }
          bVar7 = TestCreateFloors__7EIFloor();
          if (bVar7) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
            (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,7);
            if (FVar9 == kNoFloor) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
              PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x994e8974);
            }
            else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
              PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xb2ad3ecd);
                    /* end of inlined section */
            }
                    /* end of inlined section */
            UpdateLot__11ESimsCursor();
          }
          else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
            pCVar12 = (CFloorArray *)
                      (*(code *)_5Globs_pFixedWorld->__vtable->SetFlags)
                                ((int)&_5Globs_pFixedWorld->__vtable +
                                 (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFlags,
                                 _5Globs_pFixedWorld,iVar10);
            RestoreFloorLayer__17ESimScratchPadManR11CFloorArray(pCVar12);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
            PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
          }
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
        }
      }
    }
    ___7CTilePt(&ctpt,2);
    return;
  }
  uVar13 = GetReleased__11EControlleri(this_00,0x40);
  if (uVar13 == 0) {
                    /* end of inlined section */
    uVar13 = GetReleased__11EControlleri(this_00,0x80);
    if (uVar13 == 0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = (this->m_floorList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) {
        return;
      }
                    /* end of inlined section */
      this_01 = (CursorFloorTile *)pEVar2->data;
      if ((uVar8 & 0xc0) == 0) {
        GetSnapPos__11ESimsCursor((ESimsCursor__15_1743 *)&ctpt);
        puVar1 = (undefined *)((int)&(this->m_vCursorAnchor).field0_0x0 + 7);
        uVar8 = (uint)puVar1 & 7;
        puVar3 = (ulong *)(puVar1 + -uVar8);
        *puVar3 = *puVar3 & -1L << (uVar8 + 1) * 8 | _ctpt >> (7 - uVar8) * 8;
        uVar8 = (uint)&this->m_vCursorAnchor & 7;
        puVar3 = (ulong *)((int)&this->m_vCursorAnchor - uVar8);
        *puVar3 = _ctpt << uVar8 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      }
                    /* end of inlined section */
      SetPos__15CursorFloorTileRC5EVec2(this_01,(EVec2 *)&this->m_vPos);
      return;
    }
    GetSnapPos__11ESimsCursorRiT1((ESimsCursor__15_1743 *)this,&x,&y);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pCVar12 = (CFloorArray *)
              (*(code *)_5Globs_pFixedWorld->__vtable->SetFlags)
                        ((int)&_5Globs_pFixedWorld->__vtable +
                         (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFlags);
    SaveFloorLayer__17ESimScratchPadManR11CFloorArray(pCVar12);
    fVar24 = (float)y;
    fVar23 = (this->m_vCursorAnchor).field0_0x0.d[1];
    fVar22 = fVar24;
    if (fVar23 <= fVar24) {
      fVar22 = fVar23;
    }
                    /* end of inlined section */
    iVar10 = (int)fVar22;
    fVar22 = (float)x;
    fVar21 = (this->m_vCursorAnchor).field0_0x0.d[0];
    fVar4 = fVar22;
    if (fVar21 <= fVar22) {
      fVar4 = fVar21;
    }
    starty = (int)fVar4;
                    /* end of inlined section */
    if (fVar24 <= fVar23) {
      fVar24 = fVar23;
    }
                    /* end of inlined section */
    if (fVar22 <= fVar21) {
      fVar22 = fVar21;
    }
                    /* end of inlined section */
    iVar14 = (int)fVar22;
    _floorPlaced = (ERModel *)0x0;
    bVar7 = false;
    totalCost = GetTotalFloorRefund__FRbiiii12FloorPattern
                          (&floorPlaced,iVar10,(int)fVar24,starty,iVar14,kNoFloor);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar11 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                       ((int)&_5Globs_pSimulator->__vtable +
                        (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
    if (_globals.Cheats._4_4_ == 0) {
      bVar6 = IsBuildHouseMode__7EGlobal(&_globals);
      if (bVar6) {
        bVar7 = true;
      }
    }
    else {
      bVar7 = true;
    }
    if ((!bVar7) && (iVar11 < totalCost)) goto LAB_00126734;
    while (iVar11 = iVar10, iVar11 <= (int)fVar24) {
      iVar10 = iVar11 + 1;
      if (starty <= iVar14) {
        y_01 = starty;
        do {
          __7CTilePtiii(&ctpt,iVar11,y_01,1);
          bVar7 = CanPlaceFloor__FRC7CTilePt12FloorPattern(&ctpt,kNoFloor);
          if (bVar7) {
            bVar7 = CanPlaceFloor__FRC7CTilePt12FloorPattern(&ctpt,kNoFloor);
            pcVar5 = _5Globs_pFixedWorld;
            if (bVar7) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
              (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
                        (&wall,(int)&_5Globs_pFixedWorld->__vtable +
                               (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,&ctpt);
              bVar7 = HasDiagonal__C9TileWalls(&wall);
              if (bVar7) {
                bVar7 = HasWall__C9TileWalls16TileWallsSegment(&wall,kVertDiag);
                DVar18 = kLeft;
                if (bVar7) {
                  DVar17 = kRight;
                }
                else {
                  DVar18 = kTop;
                  DVar17 = kBottom;
                }
                SetFloorValue__9TileWalls12FloorPatternQ29TileWalls20DiagonalSideSelector
                          (&wall,kNoFloor,DVar17);
                SetFloorValue__9TileWalls12FloorPatternQ29TileWalls20DiagonalSideSelector
                          (&wall,kNoFloor,DVar18);
                __9TileWallsRC9TileWalls(&TStack_120,&wall);
                (*(code *)pcVar5->__vtable->GetLightLayer)
                          ((int)&pcVar5->__vtable + (int)*(short *)&pcVar5->__vtable->GetWallManager
                           ,&ctpt,&TStack_120);
                (*(code *)pcVar5->__vtable->AnalyzeWallVertex)
                          ((int)&pcVar5->__vtable +
                           (int)*(short *)&pcVar5->__vtable->SetVertexConfig,&ctpt,0xff);
              }
              else {
                (*(code *)pcVar5->__vtable->AnalyzeWallVertex)
                          ((int)&pcVar5->__vtable +
                           (int)*(short *)&pcVar5->__vtable->SetVertexConfig,&ctpt,0);
              }
              ___9TileWalls(&wall,2);
            }
          }
          ___7CTilePt(&ctpt,2);
          y_01 = y_01 + 1;
        } while (y_01 <= iVar14);
      }
    }
    bVar7 = TestCreateFloors__7EIFloor();
    pEVar20 = (ERModel *)totalCost;
    if (bVar7) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,7,totalCost);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      goto LAB_001266f4;
    }
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar2 = (this->m_floorList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    if (pEVar2 == (ENodeListNode *)0x0) {
      return;
    }
                    /* end of inlined section */
    FVar9 = GetMaxisIndex__C15CursorFloorTile((CursorFloorTile *)pEVar2->data);
    GetSnapPos__11ESimsCursorRiT1((ESimsCursor__15_1743 *)this,(int *)&local_d4,(int *)&local_d0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pCVar12 = (CFloorArray *)
              (*(code *)_5Globs_pFixedWorld->__vtable->SetFlags)
                        ((int)&_5Globs_pFixedWorld->__vtable +
                         (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFlags);
    SaveFloorLayer__17ESimScratchPadManR11CFloorArray(pCVar12);
    fVar24 = (float)(int)local_d0;
    fVar23 = (this->m_vCursorAnchor).field0_0x0.d[1];
    fVar22 = fVar24;
    if (fVar23 <= fVar24) {
      fVar22 = fVar23;
    }
                    /* end of inlined section */
    pEVar20 = (ERModel *)(int)fVar22;
    fVar22 = (float)(int)local_d4;
    fVar21 = (this->m_vCursorAnchor).field0_0x0.d[0];
    fVar4 = fVar22;
    if (fVar21 <= fVar22) {
      fVar4 = fVar21;
    }
    local_bc = (ERModel *)(int)fVar4;
                    /* end of inlined section */
    if (fVar24 <= fVar23) {
      fVar24 = fVar23;
    }
    iVar10 = (int)fVar24;
                    /* end of inlined section */
    if (fVar22 <= fVar21) {
      fVar22 = fVar21;
    }
    iVar11 = (int)fVar22;
                    /* end of inlined section */
    local_cc = (ERModel *)0x0;
    if (FVar9 == kNoFloor) {
      local_b8 = (ERModel *)
                 GetTotalFloorRefund__FRbiiii12FloorPattern
                           ((bool *)&local_cc,(int)pEVar20,iVar10,(int)local_bc,iVar11,kNoFloor);
    }
    else {
      local_b8 = (ERModel *)
                 GetNewFloorCost__FRbiiii12FloorPattern
                           ((bool *)&local_cc,(int)pEVar20,iVar10,(int)local_bc,iVar11,FVar9);
    }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    bVar7 = false;
    iVar14 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                       ((int)&_5Globs_pSimulator->__vtable +
                        (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
    if (_globals.Cheats._4_4_ == 0) {
      bVar6 = IsBuildHouseMode__7EGlobal(&_globals);
      if (bVar6) {
        bVar7 = true;
      }
    }
    else {
      bVar7 = true;
    }
    if ((!bVar7) && (iVar14 < (int)local_b8)) goto LAB_00126734;
    while (y_00 = local_bc, x_00 = pEVar20, local_bc = y_00, (int)x_00 <= iVar10) {
      local_ac = (ERModel *)((int)&(x_00->field0_0x0).field0_0x0.__vtable + 1);
      pEVar20 = local_ac;
      if ((int)y_00 <= iVar11) {
        do {
          __7CTilePtiii(&ctpt,(int)x_00,(int)y_00,1);
          bVar7 = CanPlaceFloor__FRC7CTilePt12FloorPattern(&ctpt,FVar9);
          pcVar5 = _5Globs_pFixedWorld;
          if (bVar7) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
            (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
                      (&wall,(int)&_5Globs_pFixedWorld->__vtable +
                             (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,&ctpt);
            bVar7 = HasDiagonal__C9TileWalls(&wall);
            if (bVar7) {
              bVar7 = HasWall__C9TileWalls16TileWallsSegment(&wall,kVertDiag);
              DVar18 = kLeft;
              if (bVar7) {
                DVar17 = kRight;
              }
              else {
                DVar18 = kTop;
                DVar17 = kBottom;
              }
              SetFloorValue__9TileWalls12FloorPatternQ29TileWalls20DiagonalSideSelector
                        (&wall,FVar9,DVar17);
              SetFloorValue__9TileWalls12FloorPatternQ29TileWalls20DiagonalSideSelector
                        (&wall,FVar9,DVar18);
              __9TileWallsRC9TileWalls(&TStack_160,&wall);
              (*(code *)pcVar5->__vtable->GetLightLayer)
                        ((int)&pcVar5->__vtable + (int)*(short *)&pcVar5->__vtable->GetWallManager,
                         &ctpt,&TStack_160);
              (*(code *)pcVar5->__vtable->AnalyzeWallVertex)
                        ((int)&pcVar5->__vtable + (int)*(short *)&pcVar5->__vtable->SetVertexConfig,
                         &ctpt,0xff);
            }
            else {
              (*(code *)pcVar5->__vtable->AnalyzeWallVertex)
                        ((int)&pcVar5->__vtable + (int)*(short *)&pcVar5->__vtable->SetVertexConfig,
                         &ctpt,FVar9);
            }
            ___9TileWalls(&wall,2);
          }
          ___7CTilePt(&ctpt,2);
          y_00 = (ERModel *)((int)&(y_00->field0_0x0).field0_0x0.__vtable + 1);
          pEVar20 = local_ac;
        } while ((int)y_00 <= iVar11);
      }
    }
    bVar7 = TestCreateFloors__7EIFloor();
    pEVar20 = local_b8;
    if (bVar7) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,7);
      if (FVar9 != kNoFloor) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xb2ad3ecd);
                    /* end of inlined section */
        goto LAB_001266fc;
      }
LAB_001266f4:
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x994e8974);
LAB_001266fc:
                    /* end of inlined section */
      UpdateLot__11ESimsCursor();
      return;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pCVar12 = (CFloorArray *)
            (*(code *)_5Globs_pFixedWorld->__vtable->SetFlags)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetFlags,_5Globs_pFixedWorld,
                       pEVar20);
  RestoreFloorLayer__17ESimScratchPadManR11CFloorArray(pCVar12);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
LAB_00126734:
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
  return;
                    /* end of inlined section */
}

void CheckDiagForRoomContainment(RoomImpl *pRoom, CTilePt &where, TileWalls &walls, DiagonalSideSelector &A, DiagonalSideSelector &B) {
	bool leftIn;
	bool rightIn;
	
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  DiagonalSideSelector DVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  CTilePt aCStack_90 [5];
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
  local_20 = (undefined4)unaff_s6;
  uStack_1c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_30 = (undefined4)unaff_s5;
  uStack_2c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  *A = kNotSpecified;
  *B = kNotSpecified;
  bVar1 = HasDiagonal__C9TileWalls(walls);
  if (bVar1) {
    iVar3 = GetX__C7CTilePt(where);
    iVar4 = GetY__C7CTilePt(where);
    __7CTilePtiii(aCStack_90,iVar3 + -1,iVar4,1);
    bVar1 = IsTileInRoom__8RoomImplRC7CTilePt(pRoom,aCStack_90);
    ___7CTilePt(aCStack_90,2);
    iVar3 = GetX__C7CTilePt(where);
    iVar4 = GetY__C7CTilePt(where);
    __7CTilePtiii(aCStack_90,iVar3 + 1,iVar4,1);
    bVar2 = IsTileInRoom__8RoomImplRC7CTilePt(pRoom,aCStack_90);
    ___7CTilePt(aCStack_90,2);
    if (bVar1) {
      bVar1 = HasWall__C9TileWalls16TileWallsSegment(walls,kHorizDiag);
      DVar5 = kTop;
      if (!bVar1) {
        DVar5 = kLeft;
      }
      *A = DVar5;
    }
    if (bVar2) {
      bVar1 = HasWall__C9TileWalls16TileWallsSegment(walls,kHorizDiag);
      DVar5 = kBottom;
      if (!bVar1) {
        DVar5 = kRight;
      }
      *B = DVar5;
    }
  }
  return;
}

void ESimsCursor::SetFloor(CTilePt &where, FloorPattern newid, RoomImpl *pRoom) {
	TileWalls walls;
	DiagonalSideSelector A;
	DiagonalSideSelector B;
	
  bool bVar1;
  DiagonalSideSelector inSelector;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  TileWalls walls;
  TileWalls TStack_90;
  DiagonalSideSelector A;
  DiagonalSideSelector B;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  bVar1 = CanPlaceFloor__FRC7CTilePt12FloorPattern(where,newid);
  if (bVar1) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
              (&walls,(int)&_5Globs_pFixedWorld->__vtable +
                      (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,where);
    bVar1 = HasDiagonal__C9TileWalls(&walls);
    if (bVar1) {
      A = kNotSpecified;
      B = kNotSpecified;
      CheckDiagForRoomContainment__FP8RoomImplRC7CTilePtR9TileWallsRQ29TileWalls20DiagonalSideSelectorT3
                (pRoom,where,&walls,&A,&B);
      inSelector = B;
      if ((A == kNotSpecified) || (inSelector = A, B == kNotSpecified)) {
        SetFloorValue__9TileWalls12FloorPatternQ29TileWalls20DiagonalSideSelector
                  (&walls,newid,inSelector);
      }
      else {
        SetFloorValue__9TileWalls12FloorPatternQ29TileWalls20DiagonalSideSelector(&walls,newid,B);
        SetFloorValue__9TileWalls12FloorPatternQ29TileWalls20DiagonalSideSelector(&walls,newid,A);
      }
      __9TileWallsRC9TileWalls(&TStack_90,&walls);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pFixedWorld->__vtable->GetLightLayer)
                ((int)&_5Globs_pFixedWorld->__vtable +
                 (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWallManager,where,&TStack_90);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pFixedWorld->__vtable->AnalyzeWallVertex)
                ((int)&_5Globs_pFixedWorld->__vtable +
                 (int)*(short *)&_5Globs_pFixedWorld->__vtable->SetVertexConfig,where,0xff);
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pFixedWorld->__vtable->AnalyzeWallVertex)
                ((int)&_5Globs_pFixedWorld->__vtable +
                 (int)*(short *)&_5Globs_pFixedWorld->__vtable->SetVertexConfig,where,newid);
    }
    ___9TileWalls(&walls,2);
  }
  return;
}

s32 ESimsCursor::_GetkFloorToolValue() {
	FloorPattern newid;
	EController *pPad;
	bool bRoomFill;
	int x;
	int y;
	CTilePt ctpt;
	UInt16 roomID;
	Room *pRoom;
	RoomImpl *pRoomImpl;
	bool floorPlaced;
	s32 totalCost;
	RoomImpl *this;
	int x;
	int y;
	int startx;
	int starty;
	int stopx;
	int stopy;
	bool floorPlaced;
	s32 totalCost;
	
  ENodeListNode *pEVar1;
  CursorFloorTile *this_00;
  EController *this_01;
  float fVar2;
  float fVar3;
  FloorPattern pattern;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  Room *pRoom;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  CTilePt ctpt;
  int local_90;
  int local_8c;
  undefined4 local_88;
  int x;
  int y;
  bool floorPlaced;
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
  
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_floorList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  iVar5 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((pEVar1 != (ENodeListNode *)0x0) &&
     (this_00 = (CursorFloorTile *)pEVar1->data, this_00 != (CursorFloorTile *)0x0)) {
    pattern = GetMaxisIndex__C15CursorFloorTile(this_00);
    this_01 = _ctrlPads[*(int *)&this->field_0x30];
    uVar4 = GetDownButtons__11EControlleri(this_01,-1);
    if ((uVar4 & 0xc) == 0) {
      GetSnapPos__11ESimsCursorRiT1((ESimsCursor__15_1743 *)this,&x,&y);
      fVar11 = (float)y;
      fVar9 = (this->m_vCursorAnchor).field0_0x0.d[1];
      fVar2 = fVar11;
      if (fVar9 <= fVar11) {
        fVar2 = fVar9;
      }
                    /* end of inlined section */
      fVar12 = (float)x;
      fVar10 = (this->m_vCursorAnchor).field0_0x0.d[0];
      fVar3 = fVar12;
      if (fVar10 <= fVar12) {
        fVar3 = fVar10;
      }
                    /* end of inlined section */
      if (fVar11 <= fVar9) {
        fVar11 = fVar9;
      }
                    /* end of inlined section */
      if (fVar12 <= fVar10) {
        fVar12 = fVar10;
      }
                    /* end of inlined section */
      _floorPlaced = 0;
      uVar4 = GetDownButtons__11EControlleri(this_01,0x80);
      if (uVar4 != 0) {
        pattern = kNoFloor;
      }
      if (pattern == kNoFloor) {
        iVar5 = GetTotalFloorRefund__FRbiiii12FloorPattern
                          (&floorPlaced,(int)fVar2,(int)fVar11,(int)fVar3,(int)fVar12,kNoFloor);
      }
      else {
        iVar5 = GetNewFloorCost__FRbiiii12FloorPattern
                          (&floorPlaced,(int)fVar2,(int)fVar11,(int)fVar3,(int)fVar12,pattern);
      }
    }
    else {
      GetSnapPos__11ESimsCursorRiT1((ESimsCursor__15_1743 *)this,&local_90,&local_8c);
      __7CTilePtiii(&ctpt,local_8c,local_90,1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      lVar6 = (*(code *)_5Globs_pFixedWorld->__vtable[1].OutOfBounds)
                        ((int)&_5Globs_pFixedWorld->__vtable +
                         (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetMaxSize,&ctpt);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      if (_5Globs_pRoomManager == (RoomManager *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (*(code *)_5Globs_pRoomManager->__vtable->ClearRoomPartitions)
                          ((int)&_5Globs_pRoomManager->__vtable +
                           (int)*(short *)&_5Globs_pRoomManager->__vtable->GetHouse,lVar6);
      }
      lVar8 = 0;
      pRoom = (Room *)lVar7;
      if (lVar7 != 0) {
        lVar8 = (*(code *)pRoom->__vtable->IsBathroom)
                          ((int)&pRoom->__vtable + (int)*(short *)&pRoom->__vtable->IsBedroom);
      }
      if ((lVar8 == 0) || (lVar6 == 0)) {
        ___7CTilePt(&ctpt,2);
        iVar5 = 0;
      }
      else {
                    /* end of inlined section */
        local_88 = 0;
        iVar5 = GetTotalRoomFillCost__FRbP4RoomRCt6vector2Z7CTilePtZt23__malloc_alloc_template1i012FloorPattern
                          ((bool *)&local_88,pRoom,
                           (vector_CTilePt___malloc_alloc_template_0___ *)((int)lVar8 + 8),pattern);
        ___7CTilePt(&ctpt,2);
      }
    }
  }
  return iVar5;
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
