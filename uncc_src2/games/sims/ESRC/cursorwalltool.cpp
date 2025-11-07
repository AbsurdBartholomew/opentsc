// STATUS: NOT STARTED

#include "cursorwalltool.h"

// warning: multiple differing types with the same name (name not equal)
struct cXMTObject : virtual cXObject {
	cXObject *$vb2197;
	__vtbl_ptr_type *$vf3808;
	
	cXMTObject& operator=();
	cXMTObject();
protected:
	cXMTObject();
	/* vtable[1] */ virtual cXMTObject(cXMTObject*, int, void);
	void setMTObjectImpl();
	void setCursorObjectImpl();
	void setPortalImpl();
public:
	/* vtable[1] */ virtual void Initialize();
	/* vtable[2] */ virtual cXMTObject* GetFirstMultiTileObject();
	/* vtable[3] */ virtual cXMTObject* GetNextMultiTileObject();
	/* vtable[32] */ virtual void Pickup();
	/* vtable[33] */ virtual bool CanPlace();
	/* vtable[34] */ virtual void Place();
	/* vtable[4] */ virtual void Reset();
	/* vtable[5] */ virtual void AssignOffsets();
	/* vtable[131] */ virtual SInt32 ReconType();
	/* vtable[6] */ virtual void PostLoad(cXMTObject*, int, void);
	/* vtable[7] */ virtual void SetMultiObjectData();
	/* vtable[8] */ virtual void DirtyAll();
	/* vtable[9] */ virtual bool IsDynamic();
	/* vtable[10] */ virtual void MergeInPlace();
	/* vtable[11] */ virtual void RemoveFromDynamic();
	/* vtable[12] */ virtual cXMTObjectImpl* GetMTObjectImplementation();
	cXMTObjectImpl* CAST_IMPL();
};

int _WorldDirLookupTab[3][3] = {
	/* [0] = */ {
		/* [0] = */ 0,
		/* [1] = */ 6,
		/* [2] = */ 4
	},
	/* [1] = */ {
		/* [0] = */ 0,
		/* [1] = */ 2,
		/* [2] = */ 3
	},
	/* [2] = */ {
		/* [0] = */ 1,
		/* [1] = */ 5,
		/* [2] = */ 7
	}
};

u32 GetFencePriceFromStyle(WallStyle style) {
	int i;
	FenceData *pData;
	unsigned int n;
	
  FenceData **ppFVar1;
  int iVar2;
  FenceData *pFVar3;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  ppFVar1 = ((_globals._pFenceSet)->field0_0x0).pData;
  pFVar3 = (FenceData *)0x0;
  if (ppFVar1 != (FenceData **)0x0) {
    pFVar3 = ppFVar1[-1];
  }
  iVar2 = 0;
  if (0 < (int)pFVar3) {
    ppFVar1 = ((_globals._pFenceSet)->field0_0x0).pData;
    do {
                    /* end of inlined section */
      iVar2 = iVar2 + 1;
      if (style == (*ppFVar1)->type) {
                    /* end of inlined section */
        return (*ppFVar1)->cost;
      }
      ppFVar1 = ppFVar1 + 1;
    } while (iVar2 < (int)pFVar3);
  }
  return 10;
}

void ESimsCursor::BeginWallTool(WallStyle style, u32 cost) {
	WallStyle in;
	u32 shaderID;
	u32 id;
	
  bool bVar1;
  uint uVar2;
  ERShader *pEVar3;
  uint id;
  
                    /* inlined from ../MSrc/wallStyles.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/wallStyles.h */
  this->m_fenctype = style;
  if ((((style == kFenceStyle1) || (style == kFenceStyle2)) || (style == kFenceStyle3)) ||
     (bVar1 = false, style == kFenceStyle4)) {
    bVar1 = true;
  }
                    /* end of inlined section */
  if (bVar1) {
    this->m_mode = kFenceTool;
    id = 0xdb6a33bd;
    if (style == kFenceStyle2) {
      id = 0x10fe3d7a;
    }
    else if (style == kFenceStyle3) {
      id = 0x9f057195;
    }
    uVar2 = GetFencePriceFromStyle__F9WallStyle(style);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
    this->m_toolUnitPrice = uVar2;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar3 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,id,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pWPaperShd = pEVar3;
  }
  else {
    pEVar3 = this->m_pWPaperShd;
    while (pEVar3 != (ERShader *)0x0) {
      DelRef__9EResource(&pEVar3->field0_0x0);
      this->m_pWPaperShd = (ERShader *)0x0;
      pEVar3 = this->m_pWPaperShd;
    }
    this->m_mode = kWallTool;
  }
  return;
}

s32 ESimsCursor::_GetkFenceToolValue() {
  int iVar1;
  
  iVar1 = _GetkWallToolValue__11ESimsCursor(this);
  return iVar1;
}

s32 ESimsCursor::_GetkWallToolValue() {
	EController *pPad;
	bool bRoomFill;
	EVec2 v0;
	EVec2 v1;
	float l;
	float r;
	float t;
	float b;
	EVec2 vLT;
	EVec2 vRT;
	EVec2 vRB;
	EVec2 vLB;
	bool bCanAddWall[4];
	s32 totalCost;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	int i;
	EVec2 v1;
	bool dummy;
	
  EController *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int *bCanAddAWall;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  EVec2 v1;
  float local_e0;
  float local_dc;
  EVec2 vLT;
  EVec2 vRT;
  EVec2 vRB;
  EVec2 vLB;
  bool bCanAddWall [4];
  bool abStack_8c [4];
  bool abStack_88 [4];
  bool abStack_84 [4];
  bool dummy;
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
  
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  this_00 = _ctrlPads[*(int *)&this->field_0x30];
  uVar1 = GetDownButtons__11EControlleri(this_00,-1);
  if ((uVar1 & 0xc) == 0) {
    FindWallDragVert__11ESimsCursorRC5EVec2R5EVec2(this,&this->m_vCursorAnchor,&v1);
    uVar1 = GetDownButtons__11EControlleri(this_00,0x80);
    iVar5 = GetWallLineCost__11ESimsCursorRC5EVec2T1RbbT4
                      (this,&this->m_vCursorAnchor,&v1,&dummy,true,uVar1 != 0);
  }
  else {
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    v1.field0_0x0.d[0] = (this->m_vCursorAnchor).field0_0x0.d[0];
    v1.field0_0x0.d[1] = (this->m_vCursorAnchor).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    SnapToWallVert__11ESimsCursorR5EVec2((ESimsCursor__15_1743 *)this,(EVec2 *)&local_e0);
    vLT.field0_0x0.d[0] = local_e0;
    if (v1.field0_0x0.d[0] <= local_e0) {
      vLT.field0_0x0.d[0] = v1.field0_0x0.d[0];
    }
                    /* end of inlined section */
    vRT.field0_0x0.d[0] = local_e0;
    if (local_e0 <= v1.field0_0x0.d[0]) {
      vRT.field0_0x0.d[0] = v1.field0_0x0.d[0];
    }
                    /* end of inlined section */
    vLT.field0_0x0.d[1] = local_dc;
    if (v1.field0_0x0.d[1] <= local_dc) {
      vLT.field0_0x0.d[1] = v1.field0_0x0.d[1];
    }
                    /* end of inlined section */
    vRB.field0_0x0.d[1] = v1.field0_0x0.d[1];
    if (v1.field0_0x0.d[1] < local_dc) {
      vRB.field0_0x0.d[1] = local_dc;
    }
                    /* end of inlined section */
    bCanAddAWall = (int *)bCanAddWall;
    vRT.field0_0x0.d[1] = vLT.field0_0x0.d[1];
    vRB.field0_0x0.d[0] = vRT.field0_0x0.d[0];
    vLB.field0_0x0.d[0] = vLT.field0_0x0.d[0];
    vLB.field0_0x0.d[1] = vRB.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* end of inlined section */
    iVar2 = GetWallLineCost__11ESimsCursorRC5EVec2T1RbbT4
                      (this,&vLT,&vRT,(bool *)bCanAddAWall,true,false);
    iVar3 = GetWallLineCost__11ESimsCursorRC5EVec2T1RbbT4(this,&vRT,&vRB,abStack_8c,true,false);
    iVar4 = GetWallLineCost__11ESimsCursorRC5EVec2T1RbbT4(this,&vLB,&vRB,abStack_88,true,false);
    iVar5 = GetWallLineCost__11ESimsCursorRC5EVec2T1RbbT4(this,&vLB,&vLT,abStack_84,true,false);
    iVar5 = iVar2 + iVar3 + iVar4 + iVar5;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      if (*bCanAddAWall == 0) {
        return 0;
      }
      bCanAddAWall = bCanAddAWall + 1;
    } while (iVar2 < 4);
  }
  return iVar5;
}

void ESimsCursor::ExitWallTool() {
	ESimsCursor *this;
	
  bool bVar1;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/games/sims/ESRC/cursor.h */
  bVar1 = false;
  if ((this->m_mode == kWallTool) || (this->m_mode == kFenceTool)) {
    bVar1 = true;
  }
                    /* end of inlined section */
  if (bVar1) {
    this->m_mode = kDefault;
    GlobalDispatch__Fsi(0x90,0);
    GlobalDispatch__Fsi(0x100,0);
    GlobalDispatch__Fsi(0xef,1);
    while (this->m_pWPaperShd != (ERShader *)0x0) {
      DelRef__9EResource(&this->m_pWPaperShd->field0_0x0);
      this->m_pWPaperShd = (ERShader *)0x0;
    }
  }
  return;
}

void ESimsCursor::WallToolUpdate() {
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
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  ulong uStack_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  null____pfn_or_delta2 nStack_2c;
  undefined4 local_20;
  null____pfn_or_delta2 nStack_1c;
  undefined4 local_10;
  null____pfn_or_delta2 nStack_c;
  
  local_20 = (undefined4)unaff_s4;
  nStack_1c = SUB84((ulong)unaff_s4 >> 0x20,0);
  local_30 = (undefined4)unaff_s3;
  nStack_2c = SUB84((ulong)unaff_s3 >> 0x20,0);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  nStack_c = SUB84((ulong)unaff_retaddr >> 0x20,0);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  this_00 = _ctrlPads[*(int *)&this->field_0x30];
  uVar4 = GetDownButtons__11EControlleri(this_00,-1);
  bVar3 = (uVar4 & 0xc) == 0;
  if ((bVar3) ||
     (uVar5 = GetReleased__11EControlleri(_ctrlPads[*(int *)&this->field_0x30],0x40), uVar5 == 0)) {
    uVar5 = GetReleased__11EControlleri(this_00,0x40);
    if (uVar5 == 0) {
      uVar5 = GetReleased__11EControlleri(this_00,0x80);
      if (uVar5 == 0) {
        if (((uVar4 & 0xc0) == 0) && (bVar3)) {
          SnapToWallVert__11ESimsCursorR5EVec2((ESimsCursor__15_1743 *)this,&this->m_vCursorAnchor);
          GetSnapPos__11ESimsCursor((ESimsCursor__15_1743 *)&uStack_70);
          puVar1 = (undefined *)((int)&(this->m_vCursorAnchorCenter).field0_0x0 + 7);
          uVar4 = (uint)puVar1 & 7;
          puVar2 = (ulong *)(puVar1 + -uVar4);
          *puVar2 = *puVar2 & -1L << (uVar4 + 1) * 8 | uStack_70 >> (7 - uVar4) * 8;
          uVar4 = (uint)&this->m_vCursorAnchorCenter & 7;
          puVar2 = (ulong *)((int)&this->m_vCursorAnchorCenter - uVar4);
          *puVar2 = uStack_70 << uVar4 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        }
      }
      else {
        FinalizeWallDel__11ESimsCursor(this);
      }
    }
    else {
      FinalizeWallPlacement__11ESimsCursor(this);
    }
  }
  else {
    FinalizeRoom__11ESimsCursor(this);
  }
  return;
}

void ESimsCursor::FindWallDragVert(EVec2 &vStart, EVec2 &vOutPos) {
	EVec2 vEnd;
	EVec2 vStTEnd;
	float ratio1;
	float ratio2;
	float sgn0;
	float sgn1;
	float snapBound;
	EVec2 &v;
	EVec2 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  EVec2 *pEVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  EVec2 vEnd;
  EVec2 vStTEnd;
  
  SnapToWallVert__11ESimsCursorR5EVec2((ESimsCursor__15_1743 *)this,&vEnd);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar5 = &vStTEnd;
  vStTEnd.field0_0x0.d[0] = vEnd.field0_0x0.d[0] - (vStart->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vStTEnd.field0_0x0.d[1] = vEnd.field0_0x0.d[1] - (vStart->field0_0x0).d[1];
                    /* end of inlined section */
  fVar6 = 1.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  if (vStTEnd.field0_0x0.d[0] < 0.0) {
    fVar6 = -1.0;
  }
                    /* end of inlined section */
  fVar8 = 1.0;
  if (vStTEnd.field0_0x0.d[1] < 0.0) {
    fVar8 = -1.0;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar10 = ABS(vStTEnd.field0_0x0.d[0] / vStTEnd.field0_0x0.d[1]);
  fVar9 = ABS(vStTEnd.field0_0x0.d[1] / vStTEnd.field0_0x0.d[0]);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_math.h */
                    /* end of inlined section */
  fVar7 = (1.0 / (vStTEnd.field0_0x0.d[0] * vStTEnd.field0_0x0.d[0] +
                 vStTEnd.field0_0x0.d[1] * vStTEnd.field0_0x0.d[1])) * -0.5 + 0.25 + 0.5;
  if (fVar10 == 1.0) {
    puVar1 = (undefined *)((int)&vOutPos->field0_0x0 + 7);
    uVar2 = (uint)puVar1 & 7;
    puVar3 = (ulong *)(puVar1 + -uVar2);
    *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
              CONCAT44(vEnd.field0_0x0.d[1],vEnd.field0_0x0.d[0]) >> (7 - uVar2) * 8;
    uVar2 = (uint)vOutPos & 7;
    *(ulong *)((int)vOutPos - uVar2) =
         CONCAT44(vEnd.field0_0x0.d[1],vEnd.field0_0x0.d[0]) << uVar2 * 8 |
         *(ulong *)((int)vOutPos - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
    return;
  }
  if (fVar10 < fVar7) {
                    /* end of inlined section */
    vStTEnd.field0_0x0.d[0] = 0.0;
  }
  else if ((fVar10 < fVar7) || (1.0 <= fVar10)) {
    if (fVar9 < fVar7) {
                    /* end of inlined section */
      vStTEnd.field0_0x0.d[1] = 0.0;
    }
    else {
      if (fVar9 < fVar7) {
        fVar6 = (vStart->field0_0x0).d[1];
        goto LAB_00129794;
      }
      if (fVar9 < 1.0) {
                    /* end of inlined section */
        pEVar5 = (EVec2 *)((int)&vStTEnd.field0_0x0 + 4);
        if (0.0 <= vStTEnd.field0_0x0.d[0]) {
                    /* end of inlined section */
          fVar8 = fVar8 * vStTEnd.field0_0x0.d[0];
        }
        else {
                    /* end of inlined section */
          fVar8 = fVar8 * -vStTEnd.field0_0x0.d[0];
        }
        goto LAB_0012978c;
      }
    }
  }
  else {
                    /* end of inlined section */
    if (0.0 <= vStTEnd.field0_0x0.d[1]) {
                    /* end of inlined section */
      fVar8 = fVar6 * vStTEnd.field0_0x0.d[1];
    }
    else {
                    /* end of inlined section */
      fVar8 = fVar6 * -vStTEnd.field0_0x0.d[1];
    }
LAB_0012978c:
    (pEVar5->field0_0x0).d[0] = fVar8;
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar6 = (vStart->field0_0x0).d[1];
LAB_00129794:
                    /* end of inlined section */
  uVar4 = CONCAT44(fVar6 + vStTEnd.field0_0x0.d[1],
                   (vStart->field0_0x0).d[0] + vStTEnd.field0_0x0.d[0]);
  puVar1 = (undefined *)((int)&vOutPos->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
  uVar2 = (uint)vOutPos & 7;
  *(ulong *)((int)vOutPos - uVar2) =
       uVar4 << uVar2 * 8 |
       *(ulong *)((int)vOutPos - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  return;
}

void ESimsCursor::DrawWallPreview(ERC *prc) {
	EVec2 &v0;
	EVec2 v1;
	int tilerep;
	EVec2 *this;
	ERC *this;
	EVec2 *this;
	EVec2 *this;
	float x;
	float y;
	EVec2 *this;
	EVec2 *this;
	float x;
	float y;
	float ftilerep;
	EResource *this;
	
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  EVec2 v1;
  
  FindWallDragVert__11ESimsCursorRC5EVec2R5EVec2(this,&this->m_vCursorAnchor,&v1);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar17 = (this->m_vCursorAnchor).field0_0x0.d[0] - v1.field0_0x0.d[0];
  fVar15 = (this->m_vCursorAnchor).field0_0x0.d[1] - v1.field0_0x0.d[1];
  fVar15 = sqrtf(fVar17 * fVar17 + fVar15 * fVar15);
                    /* end of inlined section */
  iVar16 = (int)fVar15;
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
  if (iVar16 < 1) {
    iVar16 = 1;
  }
  puVar4 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x140,0x10);
                    /* end of inlined section */
  *(undefined4 *)((int)puVar4 + 0x14) = 0x7f;
  *(undefined4 *)((int)puVar4 + 0x3c) = 0x80;
  *(undefined4 *)(puVar4 + 6) = 0x80;
  *(undefined4 *)((int)puVar4 + 0x34) = 0x80;
  *(undefined4 *)(puVar4 + 7) = 0x80;
  *(undefined4 *)(puVar4 + 2) = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((int)puVar4 + 0x1c) = 0;
  uVar18 = 0x40400000;
  fVar15 = (this->m_vCursorAnchor).field0_0x0.d[1];
  if (this->m_mode == kFenceTool) {
    uVar18 = 0x3f800000;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  puVar8 = puVar4 + 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(float *)puVar4 = (this->m_vCursorAnchor).field0_0x0.d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(float *)((int)puVar4 + 4) = fVar15;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar4 + 1) = uVar18;
  puVar3 = puVar4 + 10;
  puVar5 = puVar4;
  do {
    puVar7 = puVar5;
    puVar6 = puVar3;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar9 = *(undefined4 *)(puVar7 + 1);
    uVar10 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar11 = *(undefined4 *)(puVar7 + 2);
    uVar12 = *(undefined4 *)((int)puVar7 + 0x14);
    uVar13 = *(undefined4 *)(puVar7 + 3);
    uVar14 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar6 = (int)uVar1;
    *(int *)((int)puVar6 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar6 + 1) = uVar9;
    *(undefined4 *)((int)puVar6 + 0xc) = uVar10;
    *(undefined4 *)(puVar6 + 2) = uVar11;
    *(undefined4 *)((int)puVar6 + 0x14) = uVar12;
    *(undefined4 *)(puVar6 + 3) = uVar13;
    *(undefined4 *)((int)puVar6 + 0x1c) = uVar14;
    puVar5 = puVar7 + 4;
    puVar3 = puVar6 + 4;
  } while (puVar5 != puVar8);
  uVar1 = *puVar5;
  uVar9 = *(undefined4 *)(puVar7 + 5);
  uVar10 = *(undefined4 *)((int)puVar7 + 0x2c);
  *(int *)(puVar6 + 4) = (int)uVar1;
  *(int *)((int)puVar6 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar6 + 5) = uVar9;
  *(undefined4 *)((int)puVar6 + 0x2c) = uVar10;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(float *)(puVar4 + 10) = v1.field0_0x0.d[0];
  *(float *)((int)puVar4 + 0x54) = v1.field0_0x0.d[1];
  *(undefined4 *)(puVar4 + 0xb) = uVar18;
  puVar3 = puVar4 + 0x14;
  puVar5 = puVar4;
  do {
    puVar7 = puVar3;
    uVar1 = *puVar5;
                    /* end of inlined section */
    uVar18 = *(undefined4 *)(puVar5 + 1);
    uVar9 = *(undefined4 *)((int)puVar5 + 0xc);
    uVar2 = puVar5[2];
    uVar10 = *(undefined4 *)(puVar5 + 3);
    uVar11 = *(undefined4 *)((int)puVar5 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar18;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar9;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar10;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar11;
    puVar5 = puVar5 + 4;
    puVar3 = puVar7 + 4;
  } while (puVar5 != puVar8);
  uVar18 = *(undefined4 *)((int)puVar4 + 0x44);
  uVar9 = *(undefined4 *)(puVar4 + 9);
  uVar10 = *(undefined4 *)((int)puVar4 + 0x4c);
  *(undefined4 *)(puVar7 + 4) = *(undefined4 *)puVar8;
  *(undefined4 *)((int)puVar7 + 0x24) = uVar18;
  *(undefined4 *)(puVar7 + 5) = uVar9;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar10;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar15 = (this->m_vCursorAnchor).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(float *)(puVar4 + 0x14) = (this->m_vCursorAnchor).field0_0x0.d[0];
  *(float *)((int)puVar4 + 0xa4) = fVar15;
  *(undefined4 *)(puVar4 + 0x15) = 0x3d4ccccd;
  puVar3 = puVar4 + 0x1e;
  puVar5 = puVar4;
  do {
    puVar7 = puVar5;
    puVar6 = puVar3;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar18 = *(undefined4 *)(puVar7 + 1);
    uVar9 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar10 = *(undefined4 *)(puVar7 + 3);
    uVar11 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar6 = (int)uVar1;
    *(int *)((int)puVar6 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar6 + 1) = uVar18;
    *(undefined4 *)((int)puVar6 + 0xc) = uVar9;
    *(int *)(puVar6 + 2) = (int)uVar2;
    *(int *)((int)puVar6 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar6 + 3) = uVar10;
    *(undefined4 *)((int)puVar6 + 0x1c) = uVar11;
    puVar5 = puVar7 + 4;
    puVar3 = puVar6 + 4;
  } while (puVar5 != puVar8);
  uVar1 = *puVar5;
  uVar18 = *(undefined4 *)(puVar7 + 5);
  uVar9 = *(undefined4 *)((int)puVar7 + 0x2c);
  *(int *)(puVar6 + 4) = (int)uVar1;
  *(int *)((int)puVar6 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar6 + 5) = uVar18;
  *(undefined4 *)((int)puVar6 + 0x2c) = uVar9;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(float *)(puVar4 + 0x1e) = v1.field0_0x0.d[0];
  *(float *)((int)puVar4 + 0xf4) = v1.field0_0x0.d[1];
  *(undefined4 *)(puVar4 + 0x1f) = 0x3d4ccccd;
                    /* end of inlined section */
  if (this->m_mode == kWallTool) {
    Select__8ERShaderP3ERCi(_11ESimsCursor_m_pWallUnderConstructionShd,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    *(undefined4 *)(puVar4 + 4) = 0x3f800000;
    *(float *)((int)puVar4 + 0x24) = (float)-iVar16;
    *(undefined4 *)(puVar4 + 0xe) = 0x3f800000;
    *(undefined4 *)((int)puVar4 + 0x74) = 0;
    *(undefined4 *)(puVar4 + 0x18) = 0;
    *(float *)((int)puVar4 + 0xc4) = (float)-iVar16;
    *(undefined4 *)(puVar4 + 0x22) = 0;
                    /* end of inlined section */
    *(undefined4 *)((int)puVar4 + 0x114) = 0;
  }
  else {
    Select__8ERShaderP3ERCi(this->m_pWPaperShd,prc,0);
    fVar15 = (float)iVar16;
    if (this->m_mode == kFenceTool) {
                    /* inlined from /eor/src2/engine/resource/e_resource.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/resource/e_resource.h */
                    /* end of inlined section */
      if ((this->m_pWPaperShd->field0_0x0).m_resId == 0xdb6a33bd) {
        fVar15 = fVar15 + fVar15;
      }
      else {
        fVar15 = fVar15 * 0.5 + fVar15 * 0.5;
      }
    }
    else {
      fVar15 = fVar15 + fVar15;
    }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    *(float *)(puVar4 + 4) = fVar15;
    *(undefined4 *)((int)puVar4 + 0x24) = 0x3f800000;
    *(undefined4 *)(puVar4 + 0xe) = 0;
    *(undefined4 *)((int)puVar4 + 0x74) = 0x3f800000;
    *(float *)(puVar4 + 0x18) = fVar15;
    *(undefined4 *)((int)puVar4 + 0xc4) = 0;
    *(undefined4 *)(puVar4 + 0x22) = 0;
    *(undefined4 *)((int)puVar4 + 0x114) = 0;
  }
                    /* end of inlined section */
  (*(code *)prc->__vtable->ZTest)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar4,4);
  return;
}

void ESimsCursor::DrawWallDelPreview(ERC *prc) {
	EVec2 &v0;
	EVec2 v1;
	int tilerep;
	EVec2 *this;
	ERC *this;
	EVec2 *this;
	EVec2 *this;
	float x;
	float y;
	EVec2 *this;
	EVec2 *this;
	float x;
	float y;
	ERC *this;
	float x;
	float y;
	float y;
	float x;
	
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  EMat4 *this_00;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  int iVar16;
  float fVar17;
  EVec2 v1;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_90;
  float local_8c;
  undefined4 local_88;
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
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_50 = (undefined4)unaff_s3;
  uStack_4c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s2;
  uStack_5c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s4;
  uStack_3c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s1;
  uStack_6c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_80 = (undefined4)unaff_s0;
  uStack_7c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  Select__8ERShaderP3ERCi(_11ESimsCursor_m_pBuildToolGuideShd,prc,0);
  FindWallDragVert__11ESimsCursorRC5EVec2R5EVec2(this,&this->m_vCursorAnchor,&v1);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_a0 = (this->m_vCursorAnchor).field0_0x0.d[0] - v1.field0_0x0.d[0];
  local_9c = (this->m_vCursorAnchor).field0_0x0.d[1] - v1.field0_0x0.d[1];
  fVar17 = sqrtf(local_a0 * local_a0 + local_9c * local_9c);
                    /* end of inlined section */
  iVar16 = (int)fVar17;
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/e_dl.h */
  if (iVar16 < 1) {
    iVar16 = 1;
  }
  puVar3 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x140,0x10);
                    /* end of inlined section */
  *(undefined4 *)((int)puVar3 + 0x14) = 0x7f;
  *(undefined4 *)((int)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 6) = 0x80;
  *(undefined4 *)((int)puVar3 + 0x34) = 0x80;
  *(undefined4 *)(puVar3 + 7) = 0x80;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((int)puVar3 + 0x1c) = 0;
  local_88 = 0x40400000;
  if (this->m_mode == kFenceTool) {
    local_88 = 0x3f800000;
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  puVar6 = puVar3 + 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)(puVar3 + 4) = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(float *)((int)puVar3 + 0x24) = (float)-iVar16;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_90 = (this->m_vCursorAnchor).field0_0x0.d[0];
  local_8c = (this->m_vCursorAnchor).field0_0x0.d[1];
  *(float *)puVar3 = local_90;
  *(float *)((int)puVar3 + 4) = local_8c;
  *(undefined4 *)(puVar3 + 1) = local_88;
  puVar5 = puVar3 + 10;
  puVar4 = puVar3;
  do {
    puVar7 = puVar4;
    puVar8 = puVar5;
                    /* end of inlined section */
    uVar9 = *(undefined4 *)((int)puVar7 + 4);
    uVar10 = *(undefined4 *)(puVar7 + 1);
    uVar11 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar12 = *(undefined4 *)(puVar7 + 2);
    uVar13 = *(undefined4 *)((int)puVar7 + 0x14);
    uVar14 = *(undefined4 *)(puVar7 + 3);
    uVar15 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(undefined4 *)puVar8 = *(undefined4 *)puVar7;
    *(undefined4 *)((int)puVar8 + 4) = uVar9;
    *(undefined4 *)(puVar8 + 1) = uVar10;
    *(undefined4 *)((int)puVar8 + 0xc) = uVar11;
    *(undefined4 *)(puVar8 + 2) = uVar12;
    *(undefined4 *)((int)puVar8 + 0x14) = uVar13;
    *(undefined4 *)(puVar8 + 3) = uVar14;
    *(undefined4 *)((int)puVar8 + 0x1c) = uVar15;
    puVar4 = puVar7 + 4;
    puVar5 = puVar8 + 4;
  } while (puVar4 != puVar6);
                    /* end of inlined section */
  uVar9 = *(undefined4 *)((int)puVar7 + 0x24);
  uVar10 = *(undefined4 *)(puVar7 + 5);
  uVar11 = *(undefined4 *)((int)puVar7 + 0x2c);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  *(undefined4 *)(puVar8 + 4) = *(undefined4 *)puVar4;
  *(undefined4 *)((int)puVar8 + 0x24) = uVar9;
  *(undefined4 *)(puVar8 + 5) = uVar10;
  *(undefined4 *)((int)puVar8 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar3 + 0xe) = 0x3f800000;
  *(undefined4 *)((int)puVar3 + 0x74) = 0;
  *(float *)(puVar3 + 10) = v1.field0_0x0.d[0];
  *(float *)((int)puVar3 + 0x54) = v1.field0_0x0.d[1];
  *(undefined4 *)(puVar3 + 0xb) = local_88;
  puVar5 = puVar3 + 0x14;
  puVar4 = puVar3;
  do {
    puVar7 = puVar5;
    uVar1 = *puVar4;
                    /* end of inlined section */
    uVar9 = *(undefined4 *)(puVar4 + 1);
    uVar10 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar11 = *(undefined4 *)(puVar4 + 3);
    uVar12 = *(undefined4 *)((int)puVar4 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar9;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar10;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar11;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar12;
    puVar4 = puVar4 + 4;
    puVar5 = puVar7 + 4;
  } while (puVar4 != puVar6);
  uVar9 = *(undefined4 *)((int)puVar3 + 0x44);
  uVar10 = *(undefined4 *)(puVar3 + 9);
  uVar11 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(undefined4 *)(puVar7 + 4) = *(undefined4 *)puVar6;
  *(undefined4 *)((int)puVar7 + 0x24) = uVar9;
  *(undefined4 *)(puVar7 + 5) = uVar10;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar3 + 0x18) = 0;
  *(float *)((int)puVar3 + 0xc4) = (float)-iVar16;
  fVar17 = (this->m_vCursorAnchor).field0_0x0.d[1];
  *(float *)(puVar3 + 0x14) = (this->m_vCursorAnchor).field0_0x0.d[0];
  *(float *)((int)puVar3 + 0xa4) = fVar17;
  *(undefined4 *)(puVar3 + 0x15) = 0x3d4ccccd;
  puVar5 = puVar3;
  puVar4 = puVar3 + 0x1e;
  do {
    puVar8 = puVar4;
    puVar7 = puVar5;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar9 = *(undefined4 *)(puVar7 + 1);
    uVar10 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar11 = *(undefined4 *)(puVar7 + 3);
    uVar12 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar8 = (int)uVar1;
    *(int *)((int)puVar8 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar8 + 1) = uVar9;
    *(undefined4 *)((int)puVar8 + 0xc) = uVar10;
    *(int *)(puVar8 + 2) = (int)uVar2;
    *(int *)((int)puVar8 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar8 + 3) = uVar11;
    *(undefined4 *)((int)puVar8 + 0x1c) = uVar12;
    puVar5 = puVar7 + 4;
    puVar4 = puVar8 + 4;
  } while (puVar5 != puVar6);
  uVar9 = *(undefined4 *)((int)puVar7 + 0x24);
  uVar10 = *(undefined4 *)(puVar7 + 5);
  uVar11 = *(undefined4 *)((int)puVar7 + 0x2c);
  *(undefined4 *)(puVar8 + 4) = *(undefined4 *)puVar5;
  *(undefined4 *)((int)puVar8 + 0x24) = uVar9;
  *(undefined4 *)(puVar8 + 5) = uVar10;
  *(undefined4 *)((int)puVar8 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  *(undefined4 *)(puVar3 + 0x22) = 0;
  *(undefined4 *)((int)puVar3 + 0x114) = 0;
  local_a0 = v1.field0_0x0.d[0];
  local_9c = v1.field0_0x0.d[1];
  local_98 = 0x3d4ccccd;
  *(float *)(puVar3 + 0x1e) = v1.field0_0x0.d[0];
  *(float *)((int)puVar3 + 0xf4) = v1.field0_0x0.d[1];
  *(undefined4 *)(puVar3 + 0x1f) = 0x3d4ccccd;
                    /* end of inlined section */
  (*(code *)prc->__vtable->ZTest)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar3,4);
  Select__8ERShaderP3ERCi(_11ESimsCursor_m_pBuildToolGuideShd,prc,0);
                    /* inlined from /eor/src2/engine/e_dl.h */
  this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
  Id__5EMat4(this_00);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  local_9c = (this->m_vCursorAnchor).field0_0x0.d[1];
  local_a0 = (this->m_vCursorAnchor).field0_0x0.d[0];
  local_98 = 0x3d4ccccd;
  Translate__5EMat4RC5EVec3(this_00,(EVec3 *)&local_a0);
                    /* end of inlined section */
  (*(code *)prc->__vtable->SetMipMap)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,this_00);
  Rect__10EPrimitiveP3ERCff(prc,1.0,1.0);
  return;
}

void ESimsCursor::DrawWallRoomPreview(ERC *prc) {
	EVec2 v0;
	EVec2 v1;
	float l;
	float r;
	float t;
	float b;
	float w;
	float h;
	ERC *this;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	ERC *this;
	float x;
	float y;
	float y;
	float x;
	
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  EMat4 *this_00;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
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
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  EVec2 v0;
  EVec2 v1;
  float local_160;
  float local_15c;
  undefined8 *local_150;
  undefined8 *local_14c;
  undefined8 *local_148;
  undefined8 *local_144;
  undefined8 *local_140;
  undefined8 *local_13c;
  undefined8 *local_138;
  undefined8 *local_134;
  undefined8 *local_130;
  undefined8 *local_12c;
  undefined8 *local_128;
  undefined8 *local_124;
  undefined8 *local_120;
  EVec3 *local_11c;
  undefined8 *local_118;
  undefined8 *local_114;
  undefined8 *local_110;
  undefined8 *local_10c;
  undefined8 *local_108;
  undefined8 *local_104;
  undefined8 *local_100;
  undefined8 *local_fc;
  undefined8 *local_f8;
  undefined8 *local_f4;
  undefined8 *local_f0;
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
  
  local_70 = (undefined4)unaff_s7;
  uStack_6c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_b0 = (undefined4)unaff_s3;
  uStack_ac = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_retaddr;
  uStack_4c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_60 = (undefined4)unaff_s8;
  uStack_5c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_80 = (undefined4)unaff_s6;
  uStack_7c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_90 = (undefined4)unaff_s5;
  uStack_8c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_a0 = (undefined4)unaff_s4;
  uStack_9c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_c0 = (undefined4)unaff_s2;
  uStack_bc = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_d0 = (undefined4)unaff_s1;
  uStack_cc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_e0 = (undefined4)unaff_s0;
  uStack_dc = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar14 = (this->m_vCursorAnchor).field0_0x0.d[0];
  fVar15 = (this->m_vCursorAnchor).field0_0x0.d[1];
                    /* end of inlined section */
  SnapToWallVert__11ESimsCursorR5EVec2((ESimsCursor__15_1743 *)this,&v1);
  uVar16 = v1.field0_0x0.d[0];
  if (fVar14 <= v1.field0_0x0.d[0]) {
    uVar16 = fVar14;
  }
                    /* end of inlined section */
  if (v1.field0_0x0.d[0] <= fVar14) {
    v1.field0_0x0.d[0] = fVar14;
  }
                    /* end of inlined section */
  uVar17 = v1.field0_0x0.d[1];
  if (fVar15 <= v1.field0_0x0.d[1]) {
    uVar17 = fVar15;
  }
                    /* end of inlined section */
  if (v1.field0_0x0.d[1] <= fVar15) {
    v1.field0_0x0.d[1] = fVar15;
  }
                    /* end of inlined section */
  fVar15 = v1.field0_0x0.d[0] - uVar16;
  fVar14 = v1.field0_0x0.d[1] - uVar17;
                    /* inlined from /eor/src2/engine/e_dl.h */
                    /* end of inlined section */
  fVar15 = (float)((int)fVar15 * (uint)(1.0 < fVar15) | (uint)(1.0 >= fVar15) * 0x3f800000);
  uVar9 = 0x40400000;
                    /* inlined from /eor/src2/engine/e_dl.h */
  fVar14 = (float)((int)fVar14 * (uint)(1.0 < fVar14) | (uint)(1.0 >= fVar14) * 0x3f800000);
  puVar3 = (undefined8 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x500,0x10);
                    /* end of inlined section */
  *(undefined4 *)((int)puVar3 + 0x14) = 0x7f;
  *(undefined4 *)((int)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 6) = 0x80;
  *(undefined4 *)((int)puVar3 + 0x34) = 0x80;
  *(undefined4 *)(puVar3 + 7) = 0x80;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((int)puVar3 + 0x1c) = 0;
  if (this->m_mode == kFenceTool) {
    uVar9 = 0x3f800000;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_14c = puVar3 + 0x28;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_f0 = puVar3 + 0x50;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_124 = puVar3 + 100;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)puVar3 = v1.field0_0x0.d[0];
                    /* end of inlined section */
  local_108 = puVar3 + 0x6e;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_f4 = puVar3 + 0x78;
  puVar8 = puVar3 + 8;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)((int)puVar3 + 4) = uVar17;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  local_140 = puVar3 + 0x82;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  *(undefined4 *)(puVar3 + 1) = uVar9;
                    /* end of inlined section */
  local_12c = puVar3 + 0x8c;
  local_110 = puVar3 + 0x96;
  local_13c = puVar3 + 4;
  local_128 = puVar3 + 0xe;
  local_10c = puVar3 + 0x18;
  local_f8 = puVar3 + 0x22;
  local_144 = puVar3 + 0x2c;
  local_130 = puVar3 + 0x36;
  local_114 = puVar3 + 0x40;
  local_fc = puVar3 + 0x4a;
  local_148 = puVar3 + 0x54;
  local_134 = puVar3 + 0x5e;
  local_118 = puVar3 + 0x68;
  local_100 = puVar3 + 0x72;
  local_150 = puVar3 + 0x7c;
  local_138 = puVar3 + 0x86;
  local_120 = puVar3 + 0x90;
  local_104 = puVar3 + 0x9a;
  local_11c = (EVec3 *)&local_160;
  puVar5 = puVar3 + 10;
  puVar4 = puVar3;
  do {
    puVar7 = puVar4;
    puVar6 = puVar5;
    uVar1 = *puVar7;
    uVar10 = *(undefined4 *)(puVar7 + 1);
    uVar11 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar12 = *(undefined4 *)(puVar7 + 3);
    uVar13 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar6 = (int)uVar1;
    *(int *)((int)puVar6 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar6 + 1) = uVar10;
    *(undefined4 *)((int)puVar6 + 0xc) = uVar11;
    *(int *)(puVar6 + 2) = (int)uVar2;
    *(int *)((int)puVar6 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar6 + 3) = uVar12;
    *(undefined4 *)((int)puVar6 + 0x1c) = uVar13;
    puVar4 = puVar7 + 4;
    puVar5 = puVar6 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar4;
  uVar10 = *(undefined4 *)(puVar7 + 5);
  uVar11 = *(undefined4 *)((int)puVar7 + 0x2c);
  *(int *)(puVar6 + 4) = (int)uVar1;
  *(int *)((int)puVar6 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar6 + 5) = uVar10;
  *(undefined4 *)((int)puVar6 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 10) = uVar16;
  *(undefined4 *)((int)puVar3 + 0x54) = uVar17;
  *(undefined4 *)(puVar3 + 0xb) = uVar9;
  puVar5 = puVar3 + 0x14;
  puVar4 = puVar3;
  do {
    puVar7 = puVar5;
    uVar1 = *puVar4;
                    /* end of inlined section */
    uVar10 = *(undefined4 *)(puVar4 + 1);
    uVar11 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar12 = *(undefined4 *)(puVar4 + 3);
    uVar13 = *(undefined4 *)((int)puVar4 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar10;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar11;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar12;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar13;
    puVar4 = puVar4 + 4;
    puVar5 = puVar7 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar8;
                    /* end of inlined section */
  uVar10 = *(undefined4 *)(puVar3 + 9);
  uVar11 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(int *)(puVar7 + 4) = (int)uVar1;
  *(int *)((int)puVar7 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar7 + 5) = uVar10;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x14) = v1.field0_0x0.d[0];
  *(undefined4 *)((int)puVar3 + 0xa4) = uVar17;
  *(undefined4 *)(puVar3 + 0x15) = 0x3d4ccccd;
  puVar5 = puVar3;
  puVar4 = puVar3 + 0x1e;
  do {
    puVar7 = puVar4;
    uVar1 = *puVar5;
                    /* end of inlined section */
    uVar10 = *(undefined4 *)(puVar5 + 1);
    uVar11 = *(undefined4 *)((int)puVar5 + 0xc);
    uVar2 = puVar5[2];
    uVar12 = *(undefined4 *)(puVar5 + 3);
    uVar13 = *(undefined4 *)((int)puVar5 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar10;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar11;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar12;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar13;
    puVar5 = puVar5 + 4;
    puVar4 = puVar7 + 4;
  } while (puVar5 != puVar8);
  uVar1 = *puVar8;
                    /* end of inlined section */
  uVar10 = *(undefined4 *)(puVar3 + 9);
  uVar11 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(int *)(puVar7 + 4) = (int)uVar1;
  *(int *)((int)puVar7 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar7 + 5) = uVar10;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x1e) = uVar16;
  *(undefined4 *)((int)puVar3 + 0xf4) = uVar17;
  *(undefined4 *)(puVar3 + 0x1f) = 0x3d4ccccd;
                    /* end of inlined section */
  (*(code *)prc->__vtable->ZTest)((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RecalcMatrices);
  puVar5 = local_14c;
  puVar4 = puVar3;
  do {
    puVar7 = puVar5;
    uVar1 = *puVar4;
    uVar10 = *(undefined4 *)(puVar4 + 1);
    uVar11 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar12 = *(undefined4 *)(puVar4 + 3);
    uVar13 = *(undefined4 *)((int)puVar4 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar10;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar11;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar12;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar13;
    puVar4 = puVar4 + 4;
    puVar5 = puVar7 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar8;
  uVar10 = *(undefined4 *)(puVar3 + 9);
  uVar11 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(int *)(puVar7 + 4) = (int)uVar1;
  *(int *)((int)puVar7 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar7 + 5) = uVar10;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x28) = v1.field0_0x0.d[0];
  *(undefined4 *)((int)local_14c + 4) = v1.field0_0x0.d[1];
  *(undefined4 *)(local_14c + 1) = uVar9;
  puVar5 = puVar3 + 0x32;
  puVar4 = puVar3;
  do {
    puVar7 = puVar5;
    uVar1 = *puVar4;
                    /* end of inlined section */
    uVar12 = *(undefined4 *)(puVar4 + 1);
    uVar13 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar10 = *(undefined4 *)(puVar4 + 3);
    uVar11 = *(undefined4 *)((int)puVar4 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar12;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar13;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar10;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar11;
    puVar4 = puVar4 + 4;
    puVar5 = puVar7 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar8;
  uVar10 = *(undefined4 *)(puVar3 + 9);
  uVar11 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(int *)(puVar7 + 4) = (int)uVar1;
  *(int *)((int)puVar7 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar7 + 5) = uVar10;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x32) = uVar16;
  *(undefined4 *)((int)puVar3 + 0x194) = v1.field0_0x0.d[1];
  *(undefined4 *)(puVar3 + 0x33) = uVar9;
  puVar5 = puVar3 + 0x3c;
  puVar4 = puVar3;
  do {
    puVar7 = puVar5;
    uVar1 = *puVar4;
                    /* end of inlined section */
    uVar12 = *(undefined4 *)(puVar4 + 1);
    uVar13 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar10 = *(undefined4 *)(puVar4 + 3);
    uVar11 = *(undefined4 *)((int)puVar4 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar12;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar13;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar10;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar11;
    puVar4 = puVar4 + 4;
    puVar5 = puVar7 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar8;
                    /* end of inlined section */
  uVar10 = *(undefined4 *)(puVar3 + 9);
  uVar11 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(int *)(puVar7 + 4) = (int)uVar1;
  *(int *)((int)puVar7 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar7 + 5) = uVar10;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x3c) = v1.field0_0x0.d[0];
  *(undefined4 *)((int)puVar3 + 0x1e4) = v1.field0_0x0.d[1];
  *(undefined4 *)(puVar3 + 0x3d) = 0x3d4ccccd;
  puVar5 = puVar3 + 0x46;
  puVar4 = puVar3;
  do {
    puVar7 = puVar5;
    uVar1 = *puVar4;
                    /* end of inlined section */
    uVar12 = *(undefined4 *)(puVar4 + 1);
    uVar13 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar10 = *(undefined4 *)(puVar4 + 3);
    uVar11 = *(undefined4 *)((int)puVar4 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar12;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar13;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar10;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar11;
    puVar4 = puVar4 + 4;
    puVar5 = puVar7 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar8;
                    /* end of inlined section */
  uVar10 = *(undefined4 *)(puVar3 + 9);
  uVar11 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(int *)(puVar7 + 4) = (int)uVar1;
  *(int *)((int)puVar7 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar7 + 5) = uVar10;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x46) = uVar16;
  *(undefined4 *)((int)puVar3 + 0x234) = v1.field0_0x0.d[1];
  *(undefined4 *)(puVar3 + 0x47) = 0x3d4ccccd;
  puVar5 = local_f0;
  puVar4 = puVar3;
  do {
    puVar7 = puVar5;
    uVar1 = *puVar4;
                    /* end of inlined section */
    uVar12 = *(undefined4 *)(puVar4 + 1);
    uVar13 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar10 = *(undefined4 *)(puVar4 + 3);
    uVar11 = *(undefined4 *)((int)puVar4 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar12;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar13;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar10;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar11;
    puVar4 = puVar4 + 4;
    puVar5 = puVar7 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar8;
  uVar10 = *(undefined4 *)(puVar3 + 9);
  uVar11 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(int *)(puVar7 + 4) = (int)uVar1;
  *(int *)((int)puVar7 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar7 + 5) = uVar10;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x50) = uVar16;
  *(undefined4 *)((int)local_f0 + 4) = uVar17;
  *(undefined4 *)(local_f0 + 1) = uVar9;
  puVar5 = puVar3 + 0x5a;
  puVar4 = puVar3;
  do {
    puVar7 = puVar5;
    uVar1 = *puVar4;
                    /* end of inlined section */
    uVar10 = *(undefined4 *)(puVar4 + 1);
    uVar11 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar12 = *(undefined4 *)(puVar4 + 3);
    uVar13 = *(undefined4 *)((int)puVar4 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar10;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar11;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar12;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar13;
    puVar4 = puVar4 + 4;
    puVar5 = puVar7 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar8;
  uVar10 = *(undefined4 *)(puVar3 + 9);
  uVar11 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(int *)(puVar7 + 4) = (int)uVar1;
  *(int *)((int)puVar7 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar7 + 5) = uVar10;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x5a) = uVar16;
  *(undefined4 *)((int)puVar3 + 0x2d4) = v1.field0_0x0.d[1];
  *(undefined4 *)(puVar3 + 0x5b) = uVar9;
  puVar5 = local_124;
  puVar4 = puVar3;
  do {
    puVar7 = puVar5;
    uVar1 = *puVar4;
                    /* end of inlined section */
    uVar10 = *(undefined4 *)(puVar4 + 1);
    uVar11 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar12 = *(undefined4 *)(puVar4 + 3);
    uVar13 = *(undefined4 *)((int)puVar4 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar10;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar11;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar12;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar13;
    puVar4 = puVar4 + 4;
    puVar5 = puVar7 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar8;
                    /* end of inlined section */
  uVar10 = *(undefined4 *)(puVar3 + 9);
  uVar11 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(int *)(puVar7 + 4) = (int)uVar1;
  *(int *)((int)puVar7 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar7 + 5) = uVar10;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 100) = uVar16;
  *(undefined4 *)((int)local_124 + 4) = uVar17;
  *(undefined4 *)(local_124 + 1) = 0x3d4ccccd;
  puVar5 = local_108;
  puVar4 = puVar3;
  do {
    puVar7 = puVar5;
    uVar1 = *puVar4;
                    /* end of inlined section */
    uVar10 = *(undefined4 *)(puVar4 + 1);
    uVar11 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar12 = *(undefined4 *)(puVar4 + 3);
    uVar13 = *(undefined4 *)((int)puVar4 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar10;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar11;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar12;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar13;
    puVar4 = puVar4 + 4;
    puVar5 = puVar7 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar8;
                    /* end of inlined section */
  uVar10 = *(undefined4 *)(puVar3 + 9);
  uVar11 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(int *)(puVar7 + 4) = (int)uVar1;
  *(int *)((int)puVar7 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar7 + 5) = uVar10;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x6e) = uVar16;
  *(undefined4 *)((int)local_108 + 4) = v1.field0_0x0.d[1];
  *(undefined4 *)(local_108 + 1) = 0x3d4ccccd;
  puVar5 = local_f4;
  puVar4 = puVar3;
  do {
    puVar7 = puVar5;
    uVar1 = *puVar4;
                    /* end of inlined section */
    uVar10 = *(undefined4 *)(puVar4 + 1);
    uVar11 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar12 = *(undefined4 *)(puVar4 + 3);
    uVar13 = *(undefined4 *)((int)puVar4 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar10;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar11;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar12;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar13;
    puVar4 = puVar4 + 4;
    puVar5 = puVar7 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar8;
  uVar10 = *(undefined4 *)(puVar3 + 9);
  uVar11 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(int *)(puVar7 + 4) = (int)uVar1;
  *(int *)((int)puVar7 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar7 + 5) = uVar10;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x78) = v1.field0_0x0.d[0];
  *(undefined4 *)((int)local_f4 + 4) = uVar17;
  *(undefined4 *)(local_f4 + 1) = uVar9;
  puVar5 = local_140;
  puVar4 = puVar3;
  do {
    puVar7 = puVar5;
    uVar1 = *puVar4;
                    /* end of inlined section */
    uVar10 = *(undefined4 *)(puVar4 + 1);
    uVar11 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar12 = *(undefined4 *)(puVar4 + 3);
    uVar13 = *(undefined4 *)((int)puVar4 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar10;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar11;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar12;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar13;
    puVar4 = puVar4 + 4;
    puVar5 = puVar7 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar8;
  uVar10 = *(undefined4 *)(puVar3 + 9);
  uVar11 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(int *)(puVar7 + 4) = (int)uVar1;
  *(int *)((int)puVar7 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar7 + 5) = uVar10;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar11;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x82) = v1.field0_0x0.d[0];
  *(undefined4 *)((int)local_140 + 4) = v1.field0_0x0.d[1];
  *(undefined4 *)(local_140 + 1) = uVar9;
  puVar5 = local_12c;
  puVar4 = puVar3;
  do {
    puVar7 = puVar5;
    uVar1 = *puVar4;
                    /* end of inlined section */
    uVar9 = *(undefined4 *)(puVar4 + 1);
    uVar10 = *(undefined4 *)((int)puVar4 + 0xc);
    uVar2 = puVar4[2];
    uVar11 = *(undefined4 *)(puVar4 + 3);
    uVar12 = *(undefined4 *)((int)puVar4 + 0x1c);
    *(int *)puVar7 = (int)uVar1;
    *(int *)((int)puVar7 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar7 + 1) = uVar9;
    *(undefined4 *)((int)puVar7 + 0xc) = uVar10;
    *(int *)(puVar7 + 2) = (int)uVar2;
    *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar7 + 3) = uVar11;
    *(undefined4 *)((int)puVar7 + 0x1c) = uVar12;
    puVar4 = puVar4 + 4;
    puVar5 = puVar7 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar8;
                    /* end of inlined section */
  uVar9 = *(undefined4 *)(puVar3 + 9);
  uVar10 = *(undefined4 *)((int)puVar3 + 0x4c);
  *(int *)(puVar7 + 4) = (int)uVar1;
  *(int *)((int)puVar7 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar7 + 5) = uVar9;
  *(undefined4 *)((int)puVar7 + 0x2c) = uVar10;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x8c) = v1.field0_0x0.d[0];
  *(undefined4 *)((int)local_12c + 4) = uVar17;
  *(undefined4 *)(local_12c + 1) = 0x3d4ccccd;
  puVar5 = local_110;
  puVar4 = puVar3;
  do {
    puVar7 = puVar4;
    puVar6 = puVar5;
    uVar1 = *puVar7;
                    /* end of inlined section */
    uVar9 = *(undefined4 *)(puVar7 + 1);
    uVar10 = *(undefined4 *)((int)puVar7 + 0xc);
    uVar2 = puVar7[2];
    uVar11 = *(undefined4 *)(puVar7 + 3);
    uVar12 = *(undefined4 *)((int)puVar7 + 0x1c);
    *(int *)puVar6 = (int)uVar1;
    *(int *)((int)puVar6 + 4) = (int)((ulong)uVar1 >> 0x20);
    *(undefined4 *)(puVar6 + 1) = uVar9;
    *(undefined4 *)((int)puVar6 + 0xc) = uVar10;
    *(int *)(puVar6 + 2) = (int)uVar2;
    *(int *)((int)puVar6 + 0x14) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(puVar6 + 3) = uVar11;
    *(undefined4 *)((int)puVar6 + 0x1c) = uVar12;
    puVar4 = puVar7 + 4;
    puVar5 = puVar6 + 4;
  } while (puVar4 != puVar8);
  uVar1 = *puVar4;
                    /* end of inlined section */
  uVar9 = *(undefined4 *)(puVar7 + 5);
  uVar10 = *(undefined4 *)((int)puVar7 + 0x2c);
  *(int *)(puVar6 + 4) = (int)uVar1;
  *(int *)((int)puVar6 + 0x24) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(puVar6 + 5) = uVar9;
  *(undefined4 *)((int)puVar6 + 0x2c) = uVar10;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  *(undefined4 *)(puVar3 + 0x96) = v1.field0_0x0.d[0];
  *(undefined4 *)((int)local_110 + 4) = v1.field0_0x0.d[1];
  *(undefined4 *)(local_110 + 1) = 0x3d4ccccd;
                    /* end of inlined section */
  if (this->m_mode == kFenceTool) {
    Select__8ERShaderP3ERCi(this->m_pWPaperShd,prc,0);
    fVar15 = fVar15 + fVar15;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar14 = fVar14 + fVar14;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    *(float *)(puVar3 + 4) = fVar15;
    *(undefined4 *)((int)local_13c + 4) = 0x3f800000;
    *(undefined4 *)(puVar3 + 0xe) = 0;
    *(undefined4 *)((int)local_128 + 4) = 0x3f800000;
    *(float *)(puVar3 + 0x18) = fVar15;
    *(undefined4 *)((int)local_10c + 4) = 0;
    *(undefined4 *)(puVar3 + 0x22) = 0;
    *(undefined4 *)((int)local_f8 + 4) = 0;
    *(float *)(puVar3 + 0x2c) = fVar15;
    *(undefined4 *)((int)local_144 + 4) = 0x3f800000;
    *(undefined4 *)(puVar3 + 0x36) = 0;
    *(undefined4 *)((int)local_130 + 4) = 0x3f800000;
    *(float *)(puVar3 + 0x40) = fVar15;
    *(undefined4 *)((int)local_114 + 4) = 0;
    *(undefined4 *)(puVar3 + 0x4a) = 0;
    *(undefined4 *)((int)local_fc + 4) = 0;
    *(float *)(puVar3 + 0x54) = fVar14;
    *(undefined4 *)((int)local_148 + 4) = 0x3f800000;
    *(undefined4 *)(puVar3 + 0x5e) = 0;
    *(undefined4 *)((int)local_134 + 4) = 0x3f800000;
    *(float *)(puVar3 + 0x68) = fVar14;
    *(undefined4 *)((int)local_118 + 4) = 0;
    *(undefined4 *)(puVar3 + 0x72) = 0;
    *(undefined4 *)((int)local_100 + 4) = 0;
    *(float *)(puVar3 + 0x7c) = fVar14;
    *(undefined4 *)((int)local_150 + 4) = 0x3f800000;
    *(undefined4 *)(puVar3 + 0x86) = 0;
    *(undefined4 *)((int)local_138 + 4) = 0x3f800000;
    *(float *)(puVar3 + 0x90) = fVar14;
    *(undefined4 *)((int)local_120 + 4) = 0;
    *(undefined4 *)(puVar3 + 0x9a) = 0;
    *(undefined4 *)((int)local_104 + 4) = 0;
  }
  else {
    Select__8ERShaderP3ERCi(_11ESimsCursor_m_pWallUnderConstructionShd,prc,0);
    fVar15 = -fVar15;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
    fVar14 = -fVar14;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    *(undefined4 *)(puVar3 + 4) = 0x3f800000;
    *(float *)((int)local_13c + 4) = fVar15;
    *(undefined4 *)(puVar3 + 0xe) = 0x3f800000;
    *(undefined4 *)((int)local_128 + 4) = 0;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    *(float *)((int)local_10c + 4) = fVar15;
    *(undefined4 *)(puVar3 + 0x22) = 0;
    *(undefined4 *)((int)local_f8 + 4) = 0;
    *(undefined4 *)(puVar3 + 0x2c) = 0x3f800000;
    *(float *)((int)local_144 + 4) = fVar15;
    *(undefined4 *)(puVar3 + 0x36) = 0x3f800000;
    *(undefined4 *)((int)local_130 + 4) = 0;
    *(undefined4 *)(puVar3 + 0x40) = 0;
    *(float *)((int)local_114 + 4) = fVar15;
    *(undefined4 *)(puVar3 + 0x4a) = 0;
    *(undefined4 *)((int)local_fc + 4) = 0;
    *(undefined4 *)(puVar3 + 0x54) = 0x3f800000;
    *(float *)((int)local_148 + 4) = fVar14;
    *(undefined4 *)(puVar3 + 0x5e) = 0x3f800000;
    *(undefined4 *)((int)local_134 + 4) = 0;
    *(undefined4 *)(puVar3 + 0x68) = 0;
    *(float *)((int)local_118 + 4) = fVar14;
    *(undefined4 *)(puVar3 + 0x72) = 0;
    *(undefined4 *)((int)local_100 + 4) = 0;
    *(undefined4 *)(puVar3 + 0x7c) = 0x3f800000;
    *(float *)((int)local_150 + 4) = fVar14;
    *(undefined4 *)(puVar3 + 0x86) = 0x3f800000;
    *(undefined4 *)((int)local_138 + 4) = 0;
    *(undefined4 *)(puVar3 + 0x90) = 0;
    *(float *)((int)local_120 + 4) = fVar14;
    *(undefined4 *)(puVar3 + 0x9a) = 0;
                    /* end of inlined section */
    *(undefined4 *)((int)local_104 + 4) = 0;
  }
                    /* end of inlined section */
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,puVar3,4);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,local_14c,4);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,local_f0,4);
  (*(code *)prc->__vtable->TriIndexed)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->TriStrip,local_f4,4);
  Select__8ERShaderP3ERCi(_11ESimsCursor_m_pBuildToolGuideShd,prc,0);
                    /* inlined from /eor/src2/engine/e_dl.h */
  this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
  Id__5EMat4(this_00);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  local_15c = (this->m_vCursorAnchor).field0_0x0.d[1];
  local_160 = (this->m_vCursorAnchor).field0_0x0.d[0];
  (local_11c->field0_0x0).d[2] = 0.05;
  Translate__5EMat4RC5EVec3(this_00,local_11c);
                    /* end of inlined section */
  (*(code *)prc->__vtable->SetMipMap)
            ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,this_00);
  Rect__10EPrimitiveP3ERCff(prc,1.0,1.0);
  return;
}

TilePtDir ESimsCursor::GetTileDirection(CTilePt &origin, CTilePt &end) {
	TilePtDir dir;
	int delta_x;
	int end_row;
	int end_column;
	int orig_row;
	int orig_column;
	int diff_x;
	int diff_y;
	int diff_cols;
	int diff_rows;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  TilePtDir TVar14;
  TilePtDir TVar15;
  
  bVar1 = __eq__C7CTilePtRC7CTilePt(origin,end);
  TVar15 = kNone;
  if (!bVar1) {
    iVar2 = GetX__C7CTilePt(origin);
    iVar3 = GetY__C7CTilePt(origin);
    iVar4 = GetX__C7CTilePt(end);
    iVar5 = GetY__C7CTilePt(end);
    iVar6 = GetRow__C7CTilePt(end);
    iVar7 = GetColumn__C7CTilePt(end);
    iVar8 = GetRow__C7CTilePt(origin);
    iVar9 = GetColumn__C7CTilePt(origin);
    iVar10 = abs(iVar4 - iVar2);
    iVar11 = abs(iVar5 - iVar3);
    iVar12 = abs(iVar7 - iVar9);
    iVar12 = iVar12 / 2;
    iVar13 = abs(iVar6 - iVar8);
    iVar13 = iVar13 / 2;
    if (((iVar10 < iVar11) && (iVar10 <= iVar12)) && (iVar10 <= iVar13)) {
      TVar15 = (uint)(-1 < iVar5 - iVar3);
    }
    else if (((iVar11 < iVar10) && (iVar11 <= iVar12)) && (iVar11 <= iVar13)) {
      TVar15 = kSE;
      if (iVar4 - iVar2 < 0) {
        TVar15 = kNW;
      }
    }
    else {
      if (((iVar12 < iVar10) && (iVar12 < iVar11)) && (bVar1 = iVar6 < iVar8, iVar12 < iVar13)) {
        TVar15 = kS;
        TVar14 = kN;
      }
      else {
        bVar1 = iVar7 < iVar9;
        TVar15 = kE;
        TVar14 = kW;
      }
      if (bVar1) {
        TVar15 = TVar14;
      }
    }
  }
  return TVar15;
}

bool ESimsCursor::KillArchitecturalObject(CTilePt &inWhere, TileWallsSegment seg, int &refund) {
	bool result;
	cXObject *obj;
	ObjectIterator i;
	cXObject *thisobj;
	SInt16 wflags;
	Int invRotation;
	TileWallsSegment rotseg;
	
  short sVar1;
  ObjectModule__vtable *pOVar2;
  ObjectModule__vtable **ppOVar3;
  cXObject__15_2008 *pcVar4;
  int iVar5;
  TileWallsSegment TVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  cXObject__15_2008 *pcVar10;
  ObjectIterator i;
  
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
                    /* inlined from ../MSrc/objectiterator.h */
  *refund = 0;
  init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&i,inWhere,kAll);
                    /* end of inlined section */
  while (pcVar4 = i.fCurrent, pcVar10 = (cXObject__15_2008 *)0x0,
        i.fCurrent != (cXObject__15_2008 *)0x0) {
                    /* end of inlined section */
    lVar7 = (*(code *)(i.fCurrent)->__vtable[1].Pickup)
                      ((int)&(i.fCurrent)->_vb3534 + (int)*(short *)&(i.fCurrent)->__vtable[1].Turn)
    ;
    if ((lVar7 == 8) &&
       (lVar7 = (*(code *)pcVar4->__vtable[1].Pickup)
                          ((int)&pcVar4->_vb3534 + (int)*(short *)&pcVar4->__vtable[1].Turn),
       lVar7 != 2)) {
      uVar8 = (*(code *)pcVar4->__vtable->ReconType)
                        ((int)&pcVar4->_vb3534 + (int)*(short *)&pcVar4->__vtable->ReconStream,0xd);
      iVar5 = (*(code *)pcVar4->__vtable->ReconType)
                        ((int)&pcVar4->_vb3534 + (int)*(short *)&pcVar4->__vtable->ReconStream,1);
      TVar6 = RotateSegment__9TileWalls16TileWallsSegmenti(seg,(8U - iVar5 & 7) >> 1);
      pcVar10 = pcVar4;
      if (((((TVar6 == kTopLeft) && ((uVar8 & 8) != 0)) ||
           ((TVar6 == kBottomLeft && ((uVar8 & 4) != 0)))) ||
          ((TVar6 == kTopRight && ((uVar8 & 1) != 0)))) ||
         ((TVar6 == kBottomRight && ((uVar8 & 2) != 0)))) break;
    }
    __pp__14ObjectIterator(&i);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
  }
  if (pcVar10 != (cXObject__15_2008 *)0x0) {
    iVar5 = (*(code *)pcVar10->__vtable[1].GetChildAnimTable)
                      ((int)&pcVar10->_vb3534 +
                       (int)*(short *)&pcVar10->__vtable[1].GetAdultAnimTable);
    *refund = *refund + (int)((float)iVar5 * kRefundRate + 0.5);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    pOVar2 = _5Globs_pObjectModule->__vtable;
    sVar1 = *(short *)&pOVar2->GetNumObjects;
    ppOVar3 = &_5Globs_pObjectModule->__vtable;
    uVar9 = (*(code *)pcVar10->__vtable[1].UserCanPlace)
                      ((int)&pcVar10->_vb3534 + (int)*(short *)&pcVar10->__vtable[1].IsPartOfMe);
    (*(code *)pOVar2->CheckIntegrity)((int)ppOVar3 + (int)sVar1,uVar9);
  }
  return pcVar10 != (cXObject__15_2008 *)0x0;
}

void ESimsCursor::DeleteWallAtTile(CTilePt &inTile, TileWalls &theWalls, TileWallsSegment theSeg) {
	cFixedWorld *gWorld;
	CTilePt adjTile;
	int refund;
	WallStyle style;
	WallStyle in;
	WallStyle in;
	DiagonalSideSelector sel;
	
  short sVar1;
  cFixedWorld__vtable *pcVar2;
  cFixedWorld *pcVar3;
  bool bVar4;
  WallStyle WVar5;
  FloorPattern FVar6;
  long lVar7;
  DiagonalSideSelector inSelector;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  CTilePt adjTile;
  TileWalls TStack_c0;
  int refund;
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
  
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  bVar4 = CanChangeTileDelete__11ESimsCursorRC7CTilePt16TileWallsSegment(this,inTile,theSeg);
  pcVar3 = _5Globs_pFixedWorld;
  if (bVar4) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    __7CTilePt(&adjTile);
    refund = 0;
    WVar5 = GetStyle__C9TileWalls16TileWallsSegment(theWalls,theSeg);
                    /* inlined from ../MSrc/wallStyles.h */
    if ((((WVar5 == kDoorStyle) || (WVar5 == kDoorLeftStyle)) || (WVar5 == kDoorRightStyle)) ||
       ((WVar5 == kFrenchDoorStyle || (bVar4 = false, WVar5 == kCustomDoorStyle)))) {
      bVar4 = true;
    }
                    /* end of inlined section */
                    /* inlined from ../MSrc/wallStyles.h */
                    /* end of inlined section */
    if ((bVar4) || (WVar5 == kCustomWindowStyle)) {
      KillArchitecturalObject__11ESimsCursorRC7CTilePt16TileWallsSegmentRi(inTile,theSeg,&refund);
    }
    if (((theSeg == kHorizDiag) || (theSeg == kVertDiag)) &&
       (lVar7 = (*(code *)pcVar3->__vtable->GetVertexConfig)
                          ((int)&pcVar3->__vtable + (int)*(short *)&pcVar3->__vtable->IsOutside,
                           inTile), lVar7 == 0xff)) {
      pcVar2 = pcVar3->__vtable;
      inSelector = kBottom;
      sVar1 = *(short *)&pcVar2->SetVertexConfig;
      if (theSeg != kHorizDiag) {
        inSelector = kRight;
      }
      FVar6 = GetFloorValue__C9TileWallsQ29TileWalls20DiagonalSideSelector(theWalls,inSelector);
      (*(code *)pcVar2->AnalyzeWallVertex)((int)&pcVar3->__vtable + (int)sVar1,inTile,FVar6);
    }
    RemoveWall__9TileWalls16TileWallsSegment(theWalls,theSeg);
    __9TileWallsRC9TileWalls(&TStack_c0,theWalls);
    (*(code *)pcVar3->__vtable->GetLightLayer)
              ((int)&pcVar3->__vtable + (int)*(short *)&pcVar3->__vtable->GetWallManager,inTile,
               &TStack_c0);
    ___7CTilePt(&adjTile,2);
  }
  return;
}

bool ESimsCursor::LegalWallTile(CTilePt &in, TileWallsSegment inSeg) {
	cFixedWorld *gWorld;
	CTilePt adjTile;
	int j;
	ObjectIterator i;
	cXObject *anObj;
	cXMTObject *mtObject;
	cXObject *ptr;
	
  short sVar1;
  int iVar2;
  cXObject__15_2008 *pcVar3;
  cFixedWorld *pcVar4;
  bool bVar5;
  int *piVar6;
  long lVar8;
  CTilePt *location;
  int iVar9;
  CTilePt adjTile;
  ObjectIterator i;
  code *pcVar7;
  
  pcVar4 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  if (inSeg == kNoWalls) {
    lVar8 = (*(code *)_5Globs_pFixedWorld->__vtable->SetWall)
                      ((int)&_5Globs_pFixedWorld->__vtable +
                       (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetWall);
    if (lVar8 == 0) {
      lVar8 = (*(code *)pcVar4->__vtable[1].MayEditTile)
                        ((int)&pcVar4->__vtable + (int)*(short *)&pcVar4->__vtable[1].GetLightLayer,
                         in);
      bVar5 = true;
      if (lVar8 == 0) {
        bVar5 = false;
      }
    }
    else {
      bVar5 = false;
    }
  }
  else {
    __7CTilePtRC7CTilePt(&adjTile,in);
    GetAdjacentTile__9TileWalls16TileWallsSegmentP7CTilePt(inSeg,&adjTile);
    lVar8 = (*(code *)pcVar4->__vtable->SetWall)
                      ((int)&pcVar4->__vtable + (int)*(short *)&pcVar4->__vtable->GetWall,in);
    if (((lVar8 == 0) &&
        (lVar8 = (*(code *)pcVar4->__vtable->SetWall)
                           ((int)&pcVar4->__vtable + (int)*(short *)&pcVar4->__vtable->GetWall,
                            &adjTile), lVar8 == 0)) &&
       (lVar8 = (*(code *)pcVar4->__vtable[1].MayEditTile)
                          ((int)&pcVar4->__vtable +
                           (int)*(short *)&pcVar4->__vtable[1].GetLightLayer,in), lVar8 != 0)) {
      lVar8 = (*(code *)pcVar4->__vtable[1].MayEditTile)
                        ((int)&pcVar4->__vtable + (int)*(short *)&pcVar4->__vtable[1].GetLightLayer,
                         &adjTile);
      iVar9 = 0;
      if (lVar8 != 0) {
        do {
          location = &adjTile;
          if (iVar9 == 0) {
            location = in;
          }
          init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&i,location,kAll);
          pcVar3 = i.fCurrent;
                    /* end of inlined section */
          while (i.fCurrent = pcVar3, pcVar3 != (cXObject__15_2008 *)0x0) {
                    /* end of inlined section */
            lVar8 = (*(code *)pcVar3->__vtable->ReconType)
                              ((int)&pcVar3->_vb3534 + (int)*(short *)&pcVar3->__vtable->ReconStream
                               ,0x22);
            if (lVar8 == 0) {
              lVar8 = (*(code *)pcVar3->__vtable[1].Pickup)
                                ((int)&pcVar3->_vb3534 + (int)*(short *)&pcVar3->__vtable[1].Turn);
              if ((lVar8 == 2) ||
                 (lVar8 = (*(code *)pcVar3->__vtable->ReconType)
                                    ((int)&pcVar3->_vb3534 +
                                     (int)*(short *)&pcVar3->__vtable->ReconStream,0x3e), 0 < lVar8)
                 ) goto LAB_0012b228;
                    /* inlined from ../MSrc/SCID.h */
              if (pcVar3 == (cXObject__15_2008 *)0x0) {
                piVar6 = (int *)0x0;
              }
              else {
                piVar6 = (int *)_dyncastimpl__7TreeSim4SCID(pcVar3->_vb3534,cXMTObjectID);
              }
                    /* end of inlined section */
              if (piVar6 != (int *)0x0) {
                sVar1 = *(short *)(piVar6[1] + 0x10);
                pcVar7 = *(code **)(piVar6[1] + 0x14);
                while (piVar6 = (int *)(*pcVar7)((int)piVar6 + (int)sVar1), piVar6 != (int *)0x0) {
                  iVar2 = *(int *)(*piVar6 + 4);
                  lVar8 = (**(code **)(iVar2 + 0x20c))
                                    (*piVar6 + (int)*(short *)(iVar2 + 0x208),0x3e);
                  if (0 < lVar8) goto LAB_0012b228;
                  sVar1 = *(short *)(piVar6[1] + 0x18);
                  pcVar7 = *(code **)(piVar6[1] + 0x1c);
                }
              }
            }
            __pp__14ObjectIterator(&i);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
            pcVar3 = i.fCurrent;
          }
          bVar5 = __eq__C7CTilePtRC7CTilePt(&adjTile,in);
          iVar9 = iVar9 + 1;
          if ((bVar5) || (1 < iVar9)) {
            ___7CTilePt(&adjTile,2);
            return true;
          }
        } while( true );
      }
    }
LAB_0012b228:
    ___7CTilePt(&adjTile,2);
    bVar5 = false;
  }
  return bVar5;
}

bool ESimsCursor::AddWallAtTile(CTilePt &inTile, TileWalls &theWalls, TileWallsSegment theSeg) {
	cFixedWorld *gWorld;
	int refund;
	CTilePt adjTile;
	TileWallsSegment adjSeg;
	TileWalls adjWalls;
	WallStyle style;
	WallStyle in;
	WallStyle in;
	
  cFixedWorld *pcVar1;
  bool bVar2;
  WallStyle WVar3;
  TileWallsSegment inSeg;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_retaddr;
  CTilePt adjTile;
  TileWalls adjWalls;
  TileWalls TStack_b0;
  int refund;
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
  
  local_20 = (undefined4)unaff_s4;
  uStack_1c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  bVar2 = CanChangeTileAdd__11ESimsCursorRC7CTilePt16TileWallsSegment(this,inTile,theSeg);
  pcVar1 = _5Globs_pFixedWorld;
  if (bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    bVar2 = HasWall__C9TileWalls16TileWallsSegment(theWalls,theSeg);
    refund = 0;
                    /* inlined from ../MSrc/Function.h */
                    /* end of inlined section */
    if ((bVar2) &&
       (WVar3 = GetStyle__C9TileWalls16TileWallsSegment(theWalls,theSeg), this->m_fenctype == WVar3)
       ) {
      WVar3 = GetStyle__C9TileWalls16TileWallsSegment(theWalls,theSeg);
                    /* inlined from ../MSrc/wallStyles.h */
      if ((((WVar3 == kDoorStyle) || (WVar3 == kDoorLeftStyle)) || (WVar3 == kDoorRightStyle)) ||
         ((WVar3 == kFrenchDoorStyle || (bVar2 = false, WVar3 == kCustomDoorStyle)))) {
        bVar2 = true;
      }
                    /* end of inlined section */
                    /* inlined from ../MSrc/wallStyles.h */
                    /* end of inlined section */
      if ((bVar2) || (bVar2 = true, WVar3 == kCustomWindowStyle)) {
        bVar2 = KillArchitecturalObject__11ESimsCursorRC7CTilePt16TileWallsSegmentRi
                          (inTile,theSeg,&refund);
        if (bVar2) {
          (*(code *)pcVar1->__vtable->ComputeArchValue)
                    (&adjTile,(int)&pcVar1->__vtable +
                              (int)*(short *)&pcVar1->__vtable->ComputeRooms,inTile);
          __as__9TileWallsRC9TileWalls(theWalls,(TileWalls *)&adjTile);
          ___9TileWalls((TileWalls *)&adjTile,2);
          __9TileWallsRC9TileWalls((TileWalls *)&adjTile,theWalls);
          (*(code *)pcVar1->__vtable->GetLightLayer)
                    ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetWallManager,
                     inTile,&adjTile);
        }
        bVar2 = true;
      }
    }
    else {
      AddWall__9TileWalls16TileWallsSegment(theWalls,theSeg);
      SetStyle__9TileWalls9WallStyle16TileWallsSegment(theWalls,this->m_fenctype,theSeg);
      SetPattern__9TileWalls11WallPattern16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                (theWalls,kSheetRockPattern,theSeg,kNotSpecified);
      __9TileWallsRC9TileWalls((TileWalls *)&adjTile,theWalls);
      (*(code *)pcVar1->__vtable->GetLightLayer)
                ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetWallManager,inTile,
                 &adjTile);
      __7CTilePtRC7CTilePt(&adjTile,inTile);
      GetAdjacentTile__9TileWalls16TileWallsSegmentP7CTilePt(theSeg,&adjTile);
      inSeg = GetOppositeSegment__9TileWalls16TileWallsSegment(theSeg);
      (*(code *)pcVar1->__vtable->ComputeArchValue)
                (&adjWalls,(int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->ComputeRooms,
                 &adjTile);
      SetPattern__9TileWalls11WallPattern16TileWallsSegmentQ29TileWalls20DiagonalSideSelector
                (&adjWalls,kSheetRockPattern,inSeg,kNotSpecified);
      __9TileWallsRC9TileWalls(&TStack_b0,&adjWalls);
      (*(code *)pcVar1->__vtable->GetLightLayer)
                ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetWallManager,&adjTile,
                 &TStack_b0);
      ___9TileWalls(&adjWalls,2);
      ___7CTilePt(&adjTile,2);
      bVar2 = true;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

void ESimsCursor::ConvertVertsToTiles(EVec2 &va, EVec2 &vb, CTilePt &c0, CTilePt &c1) {
	EVec2 v0;
	EVec2 v1;
	EVec2 vUL;
	EVec2 v0v1;
	int signx;
	int signy;
	EVec2 &v;
	EVec2 &v;
	EVec2 *this;
	EVec2 &v;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  EVec2 v0;
  EVec2 v1;
  EVec2 vUL;
  EVec2 v0v1;
  
  iVar5 = 1;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  v0.field0_0x0.d[1] = (va->field0_0x0).d[1] + 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar8 = (va->field0_0x0).d[0] - 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar10 = (vb->field0_0x0).d[1] - (va->field0_0x0).d[1];
  fVar9 = (vb->field0_0x0).d[0] - (va->field0_0x0).d[0];
  v1.field0_0x0 = (EVec2__null___1__1)(EVec2__null___1__1)(vb->field0_0x0).field1;
                    /* end of inlined section */
  v0.field0_0x0 = (EVec2__null___1__1)CONCAT44(v0.field0_0x0.d[1],fVar8);
  puVar1 = (undefined *)((int)&v0.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)v0.field0_0x0 >> (7 - uVar2) * 8;
  fVar7 = v1.field0_0x0.d[0] - 0.5;
  fVar6 = v1.field0_0x0.d[1] + 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  v1.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar6,fVar7);
  puVar1 = (undefined *)((int)&v1.field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)v1.field0_0x0 >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  if (fVar9 < 0.0) {
    iVar5 = -1;
  }
                    /* end of inlined section */
  iVar4 = 1;
  if (fVar10 < 0.0) {
    iVar4 = -1;
  }
                    /* end of inlined section */
                    /* end of inlined section */
  if ((fVar9 == 0.0) || (fVar10 == 0.0)) {
    if (fVar9 == 0.0) {
      if (0 < iVar4) {
                    /* end of inlined section */
        v0.field0_0x0 = (EVec2__null___1__1)CONCAT44(v0.field0_0x0.d[1] + 1.0,fVar8);
        v1.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar6 + 1.0,fVar7);
                    /* end of inlined section */
      }
LAB_0012b7c8:
                    /* end of inlined section */
      fVar7 = v0.field0_0x0.d[1] - 1.0;
      fVar6 = v1.field0_0x0.d[1] - 1.0;
    }
    else {
      if (iVar5 < 1) {
                    /* end of inlined section */
        v0.field0_0x0 = (EVec2__null___1__1)CONCAT44(v0.field0_0x0.d[1] - 1.0,fVar8 - 1.0);
        v1.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar6 - 1.0,fVar7 - 1.0);
      }
      else {
                    /* end of inlined section */
        v0.field0_0x0 = (EVec2__null___1__1)CONCAT44(v0.field0_0x0.d[1] - 1.0,fVar8);
        v1.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar6 - 1.0,fVar7);
      }
                    /* end of inlined section */
      fVar7 = v0.field0_0x0.d[1] + 1.0;
      fVar6 = v1.field0_0x0.d[1] + 1.0;
    }
    v0.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar7,v0.field0_0x0.d[0] + 1.0);
    v1.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar6,v1.field0_0x0.d[0] + 1.0);
  }
  else if ((iVar5 < 0) && (iVar4 < 0)) {
                    /* end of inlined section */
    v0.field0_0x0 = (EVec2__null___1__1)CONCAT44(v0.field0_0x0.d[1] - 1.0,fVar8);
    v1.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar6 - 1.0,fVar7);
  }
  else {
    if (iVar5 < 1) goto LAB_0012b82c;
    if (iVar4 < 0) goto LAB_0012b7c8;
    if (0 < iVar4) {
                    /* end of inlined section */
      v0.field0_0x0 = (EVec2__null___1__1)CONCAT44(v0.field0_0x0.d[1],fVar8 + 1.0);
      v1.field0_0x0 = (EVec2__null___1__1)CONCAT44(fVar6,fVar7 + 1.0);
    }
  }
                    /* end of inlined section */
LAB_0012b82c:
  Set__7CTilePtiii(c0,(int)v0.field0_0x0.d[1],(int)v0.field0_0x0.d[0],1);
  Set__7CTilePtiii(c1,(int)v1.field0_0x0.d[1],(int)v1.field0_0x0.d[0],1);
  return;
}

bool ESimsCursor::FinalizeWallPlacement() {
	EVec2 &v0;
	EVec2 v1;
	bool canDel;
	s32 totalCost;
	s32 dollars;
	bool bfreeItems;
	
  bool bVar1;
  bool bVar2;
  CWallArray *pCVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_s0;
  EVec2 *vStart;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  EVec2 v1;
  bool canDel;
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
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  vStart = &this->m_vCursorAnchor;
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  FindWallDragVert__11ESimsCursorRC5EVec2R5EVec2(this,vStart,&v1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pCVar3 = (CWallArray *)
           (*(code *)_5Globs_pFixedWorld->__vtable->SetLightEntry)
                     ((int)&_5Globs_pFixedWorld->__vtable +
                      (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetLightEntry);
  SaveWallLayer__17ESimScratchPadManR10CWallArray(pCVar3);
  _canDel = 0;
  iVar4 = GetWallLineCost__11ESimsCursorRC5EVec2T1RbbT4(this,vStart,&v1,&canDel,true,false);
  bVar2 = false;
  if (_canDel != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar5 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
    if ((_globals.Cheats._4_4_ != 0) || (bVar1 = IsBuildHouseMode__7EGlobal(&_globals), bVar1)) {
      bVar2 = true;
    }
    if ((bVar2) || (iVar4 <= iVar5)) {
      SubmitLine__11ESimsCursorRC5EVec2T1bT3(this,vStart,&v1,true,false);
      bVar2 = PreviewWallBuild__5ERoomb
                        ((_globals._pCurHouse)->m_pWallMan2,this->m_mode == kFenceTool);
      if (!bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
        PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
        pCVar3 = (CWallArray *)
                 (*(code *)_5Globs_pFixedWorld->__vtable->SetLightEntry)
                           ((int)&_5Globs_pFixedWorld->__vtable +
                            (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetLightEntry);
        RestoreWallLayer__17ESimScratchPadManR10CWallArray(pCVar3);
        return false;
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,7,iVar4);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xb2ad3ecd);
                    /* end of inlined section */
      UpdateLot__11ESimsCursor();
      return true;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
  return false;
                    /* end of inlined section */
}

s32 ESimsCursor::GetWallLineCost(EVec2 &v0, EVec2 &v1, bool &bCanAddAWall, bool bAddWall, bool bDeleteWall) {
	cFixedWorld *gWorld;
	CTilePt c0;
	CTilePt c1;
	TilePtDir tileDir;
	TileWallsSegment theSeg;
	bool done;
	CTilePt inTile;
	Sint32 totalCost;
	TileWalls walls;
	u32 oldvalue;
	
  cFixedWorld *pcVar1;
  bool bVar2;
  bool bVar3;
  TilePtDir inDir;
  TileWallsSegment inSeg;
  WallStyle style;
  uint uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  CTilePt c0;
  CTilePt c1;
  CTilePt inTile;
  TileWalls walls;
  
  *(undefined4 *)bCanAddAWall = 0;
  pcVar1 = _5Globs_pFixedWorld;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  __7CTilePt(&c0);
  __7CTilePt(&c1);
  ConvertVertsToTiles__11ESimsCursorRC5EVec2T1R7CTilePtT3(v0,v1,&c0,&c1);
  inDir = GetTileDirection__11ESimsCursorRC7CTilePtT1(&c0,&c1);
                    /* inlined from ../MSrc/Function.h */
                    /* end of inlined section */
  if (inDir != kNone) {
    bVar3 = false;
    inSeg = DirToWallSeg__9TileWalls9TilePtDir(inDir);
    iVar6 = 0;
    __7CTilePtRC7CTilePt(&inTile,&c0);
    do {
      if (bDeleteWall) {
        bVar2 = CanChangeTileDelete__11ESimsCursorRC7CTilePt16TileWallsSegment(this,&inTile,inSeg);
        if (bVar2) {
          *(undefined4 *)bCanAddAWall = 1;
          if (this->m_mode == kWallTool) {
            iVar6 = iVar6 + -0x38;
          }
          else {
            (*(code *)pcVar1->__vtable->ComputeArchValue)
                      (&walls,(int)&pcVar1->__vtable +
                              (int)*(short *)&pcVar1->__vtable->ComputeRooms,&inTile);
            style = GetStyle__C9TileWalls16TileWallsSegment(&walls,inSeg);
            uVar4 = GetFencePriceFromStyle__F9WallStyle(style);
            if ((int)uVar4 < 0) {
              fVar7 = (float)(uVar4 & 1 | uVar4 >> 1);
              fVar7 = fVar7 + fVar7;
            }
            else {
              fVar7 = (float)uVar4;
            }
            iVar6 = iVar6 - (int)(fVar7 * 0.8);
            ___9TileWalls(&walls,2);
          }
        }
      }
      else {
        bVar2 = CanChangeTileAdd__11ESimsCursorRC7CTilePt16TileWallsSegment(this,&inTile,inSeg);
        if (bVar2) {
          *(undefined4 *)bCanAddAWall = 1;
          if (this->m_mode == kWallTool) {
            iVar6 = iVar6 + 0x46;
          }
          else {
            iVar6 = iVar6 + this->m_toolUnitPrice;
          }
        }
      }
      __pl__C7CTilePtRC7CTilePt((CTilePt *)&walls,&inTile);
      __as__7CTilePtRC7CTilePt(&inTile,(CTilePt *)&walls);
      ___7CTilePt((CTilePt *)&walls,2);
      inTile.mLevel = '\x01';
      lVar5 = (*(code *)pcVar1->__vtable->SetWall)
                        ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetWall,&inTile)
      ;
      if (lVar5 != 0) {
        bVar3 = true;
      }
    } while ((!bVar3) && (bVar3 = __eq__C7CTilePtRC7CTilePt(&inTile,&c1), !bVar3));
    if ((_globals.Cheats._4_4_ == 0) && (bVar3 = IsBuildHouseMode__7EGlobal(&_globals), !bVar3)) {
      ___7CTilePt(&inTile,2);
      ___7CTilePt(&c1,2);
      ___7CTilePt(&c0,2);
      return iVar6;
    }
    ___7CTilePt(&inTile,2);
  }
  ___7CTilePt(&c1,2);
  ___7CTilePt(&c0,2);
  return 0;
}

bool ESimsCursor::FinalizeRoom() {
	EVec2 v0;
	EVec2 v1;
	float l;
	float r;
	float t;
	float b;
	EVec2 vLT;
	EVec2 vRT;
	EVec2 vRB;
	EVec2 vLB;
	bool bCanAddWall[4];
	s32 dollars;
	s32 totalCost;
	bool bfreeItems;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	float x;
	float y;
	int i;
	
  bool bVar1;
  bool bVar2;
  CWallArray *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  int *bCanAddAWall;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar9;
  EVec2 v0;
  EVec2 v1;
  EVec2 vLT;
  EVec2 vRT;
  EVec2 vRB;
  EVec2 vLB;
  bool bCanAddWall [4];
  bool abStack_ac [4];
  bool abStack_a8 [4];
  bool abStack_a4 [4];
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
  
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
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
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar9 = (this->m_vCursorAnchor).field0_0x0.d[0];
  vRB.field0_0x0.d[1] = (this->m_vCursorAnchor).field0_0x0.d[1];
                    /* end of inlined section */
  SnapToWallVert__11ESimsCursorR5EVec2((ESimsCursor__15_1743 *)this,&v1);
  vLT.field0_0x0.d[0] = v1.field0_0x0.d[0];
  if (fVar9 <= v1.field0_0x0.d[0]) {
    vLT.field0_0x0.d[0] = fVar9;
  }
                    /* end of inlined section */
  if (v1.field0_0x0.d[0] <= fVar9) {
    v1.field0_0x0.d[0] = fVar9;
  }
                    /* end of inlined section */
  vLT.field0_0x0.d[1] = v1.field0_0x0.d[1];
  if (vRB.field0_0x0.d[1] <= v1.field0_0x0.d[1]) {
    vLT.field0_0x0.d[1] = vRB.field0_0x0.d[1];
  }
                    /* end of inlined section */
  if (vRB.field0_0x0.d[1] < v1.field0_0x0.d[1]) {
    vRB.field0_0x0.d[1] = v1.field0_0x0.d[1];
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vRT.field0_0x0.d[0] = v1.field0_0x0.d[0];
  vRT.field0_0x0.d[1] = vLT.field0_0x0.d[1];
  vRB.field0_0x0.d[0] = v1.field0_0x0.d[0];
  vLB.field0_0x0.d[0] = vLT.field0_0x0.d[0];
  vLB.field0_0x0.d[1] = vRB.field0_0x0.d[1];
  pCVar3 = (CWallArray *)
           (*(code *)_5Globs_pFixedWorld->__vtable->SetLightEntry)
                     ((int)&_5Globs_pFixedWorld->__vtable +
                      (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetLightEntry);
  SaveWallLayer__17ESimScratchPadManR10CWallArray(pCVar3);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar4 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                    ((int)&_5Globs_pSimulator->__vtable +
                     (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
  bCanAddAWall = (int *)bCanAddWall;
  iVar5 = GetWallLineCost__11ESimsCursorRC5EVec2T1RbbT4
                    (this,&vLT,&vRT,(bool *)bCanAddAWall,true,false);
  iVar6 = GetWallLineCost__11ESimsCursorRC5EVec2T1RbbT4(this,&vRT,&vRB,abStack_ac,true,false);
  iVar7 = GetWallLineCost__11ESimsCursorRC5EVec2T1RbbT4(this,&vLB,&vRB,abStack_a8,true,false);
  iVar8 = GetWallLineCost__11ESimsCursorRC5EVec2T1RbbT4(this,&vLB,&vLT,abStack_a4,true,false);
  iVar8 = iVar5 + iVar6 + iVar7 + iVar8;
  iVar5 = 0;
  do {
    iVar5 = iVar5 + 1;
    if (*bCanAddAWall == 0) goto LAB_0012c01c;
    bCanAddAWall = bCanAddAWall + 1;
  } while (iVar5 < 4);
  bVar2 = false;
  if ((_globals.Cheats._4_4_ != 0) || (bVar1 = IsBuildHouseMode__7EGlobal(&_globals), bVar1)) {
    bVar2 = true;
  }
  if ((bVar2) || (iVar8 <= iVar4)) {
                    /* end of inlined section */
    SubmitLine__11ESimsCursorRC5EVec2T1bT3(this,&vLT,&vRT,true,false);
    SubmitLine__11ESimsCursorRC5EVec2T1bT3(this,&vRT,&vRB,true,false);
    SubmitLine__11ESimsCursorRC5EVec2T1bT3(this,&vLB,&vRB,true,false);
    SubmitLine__11ESimsCursorRC5EVec2T1bT3(this,&vLB,&vLT,true,false);
    bVar2 = PreviewWallBuild__5ERoomb((_globals._pCurHouse)->m_pWallMan2,this->m_mode == kFenceTool)
    ;
    if (bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,7,iVar8);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0xb2ad3ecd);
                    /* end of inlined section */
      UpdateLot__11ESimsCursor();
      bVar2 = true;
    }
    else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
      pCVar3 = (CWallArray *)
               (*(code *)_5Globs_pFixedWorld->__vtable->SetLightEntry)
                         ((int)&_5Globs_pFixedWorld->__vtable +
                          (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetLightEntry);
      RestoreWallLayer__17ESimScratchPadManR10CWallArray(pCVar3);
      bVar2 = false;
    }
  }
  else {
LAB_0012c01c:
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
    PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
    bVar2 = false;
                    /* end of inlined section */
  }
  return bVar2;
}

bool PreviewNRooms() {
	int nRooms;
	RoomManagerImpl *pRoommanImpl;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > roomItr;
	RoomManagerImpl *this;
	__rb_tree_node<pair<const short unsigned int,RoomImpl *> > *x;
	RoomManagerImpl *this;
	__rb_tree_const_iterator<pair<const short unsigned int,RoomImpl *> > *this;
	__rb_tree_base_iterator *this;
	__rb_tree_node_base *y;
	
  int iVar1;
  __rb_tree_base_iterator _Var2;
  long lVar3;
  __rb_tree_base_iterator _Var4;
  __rb_tree_node_base *p_Var5;
  int iVar6;
  __rb_tree_node_base **pp_Var7;
  __rb_tree_const_iterator_pair_const_short_unsigned_int_RoomImpl_____ roomItr;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar6 = 0;
  (*(code *)_5Globs_pFixedWorld->__vtable[1].SetVertexConfig)
            ((int)&_5Globs_pFixedWorld->__vtable +
             (int)*(short *)&_5Globs_pFixedWorld->__vtable[1].GetVertexConfig,0);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  iVar1 = (*(code *)_5Globs_pRoomManager->__vtable->GetRoomCount)
                    ((int)&_5Globs_pRoomManager->__vtable +
                     (int)*(short *)&_5Globs_pRoomManager->__vtable->ComputeCutaway);
                    /* inlined from ../MSrc/Tree.h */
  roomItr.field0_0x0.node = *(__rb_tree_base_iterator *)(*(int *)(iVar1 + 4) + 8);
                    /* end of inlined section */
  pp_Var7 = (__rb_tree_node_base **)(iVar1 + 4);
  if (roomItr.field0_0x0.node != (__rb_tree_base_iterator)*(__rb_tree_node_base **)(iVar1 + 4)) {
                    /* inlined from ../MSrc/roomsimpl.h */
    p_Var5 = ((__rb_tree_node_base *)((int)roomItr.field0_0x0.node + 0x10))->parent;
    while( true ) {
      lVar3 = (**(code **)(*(int *)p_Var5 + 0x4c))
                        (&p_Var5->color + *(short *)(*(int *)p_Var5 + 0x48));
      if (lVar3 != 0) {
        lVar3 = (**(code **)(*(int *)p_Var5 + 100))
                          (&p_Var5->color + *(short *)(*(int *)p_Var5 + 0x60));
        if (lVar3 == 0) {
          iVar6 = iVar6 + 1;
        }
      }
      _Var2.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0xc);
      if (_Var2.node == (__rb_tree_node_base *)0x0) {
        _Var2.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 4);
        if (roomItr.field0_0x0.node == (__rb_tree_base_iterator)(_Var2.node)->right) {
          do {
            roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
            _Var2.node = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 4);
          } while (roomItr.field0_0x0.node == (__rb_tree_base_iterator)(_Var2.node)->right);
        }
        if (*(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0xc) != _Var2.node) {
          roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
        }
                    /* end of inlined section */
        _Var4.node = *pp_Var7;
      }
      else if ((_Var2.node)->left == (__rb_tree_node_base *)0x0) {
        _Var4.node = *pp_Var7;
        roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
      }
      else {
        do {
          _Var2.node = (_Var2.node)->left;
        } while ((_Var2.node)->left != (__rb_tree_node_base *)0x0);
        _Var4.node = *pp_Var7;
        roomItr.field0_0x0.node = (__rb_tree_base_iterator)(__rb_tree_base_iterator)_Var2.node;
      }
                    /* inlined from ../MSrc/Tree.h */
                    /* end of inlined section */
      if (roomItr.field0_0x0.node == (__rb_tree_base_iterator)_Var4.node) break;
      p_Var5 = *(__rb_tree_node_base **)((int)roomItr.field0_0x0.node + 0x14);
    }
  }
  return iVar6 < 0x14;
}

bool ESimsCursor::FinalizeWallDel() {
	EVec2 &v0;
	EVec2 v1;
	bool canDel;
	s32 totalCost;
	s32 dollars;
	bool bfreeItems;
	CTilePt c0;
	CTilePt c1;
	
  bool bVar1;
  bool bVar2;
  CWallArray *pCVar3;
  int iVar4;
  int iVar5;
  TilePtDir inDir;
  TileWallsSegment seg;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  EVec2 *vStart;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  EVec2 v1;
  CTilePt c0;
  CTilePt c1;
  bool canDel;
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
  
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  vStart = &this->m_vCursorAnchor;
  local_20 = (undefined4)unaff_s5;
  uStack_1c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s4;
  uStack_2c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_70 = (undefined4)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
  FindWallDragVert__11ESimsCursorRC5EVec2R5EVec2(this,vStart,&v1);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  pCVar3 = (CWallArray *)
           (*(code *)_5Globs_pFixedWorld->__vtable->SetLightEntry)
                     ((int)&_5Globs_pFixedWorld->__vtable +
                      (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetLightEntry);
  SaveWallLayer__17ESimScratchPadManR10CWallArray(pCVar3);
  _canDel = 0;
  iVar4 = GetWallLineCost__11ESimsCursorRC5EVec2T1RbbT4(this,vStart,&v1,&canDel,true,true);
  bVar2 = false;
  if (_canDel != 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
    iVar5 = (*(code *)_5Globs_pSimulator->__vtable->GetObjectsValue)
                      ((int)&_5Globs_pSimulator->__vtable +
                       (int)*(short *)&_5Globs_pSimulator->__vtable->SetArchValue);
    if ((_globals.Cheats._4_4_ != 0) || (bVar1 = IsBuildHouseMode__7EGlobal(&_globals), bVar1)) {
      bVar2 = true;
    }
    if ((bVar2) || (iVar4 <= iVar5)) {
      SubmitLine__11ESimsCursorRC5EVec2T1bT3(this,vStart,&v1,true,true);
      bVar2 = PreviewNRooms__Fv();
      if ((bVar2) &&
         (bVar2 = PreviewWallBuild__5ERoomb
                            ((_globals._pCurHouse)->m_pWallMan2,this->m_mode == kFenceTool), !bVar2)
         ) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        pCVar3 = (CWallArray *)
                 (*(code *)_5Globs_pFixedWorld->__vtable->SetLightEntry)
                           ((int)&_5Globs_pFixedWorld->__vtable +
                            (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetLightEntry);
        RestoreWallLayer__17ESimScratchPadManR10CWallArray(pCVar3);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
        pCVar3 = (CWallArray *)
                 (*(code *)_5Globs_pFixedWorld->__vtable->SetLightEntry)
                           ((int)&_5Globs_pFixedWorld->__vtable +
                            (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetLightEntry);
        SaveWallLayer__17ESimScratchPadManR10CWallArray(pCVar3);
        __7CTilePt(&c0);
        __7CTilePt(&c1);
        ConvertVertsToTiles__11ESimsCursorRC5EVec2T1R7CTilePtT3(vStart,&v1,&c0,&c1);
        inDir = GetTileDirection__11ESimsCursorRC7CTilePtT1(&c0,&c1);
        seg = DirToWallSeg__9TileWalls9TilePtDir(inDir);
        DeleteERoomWallContainingSegment__5ERoom16TileWallsSegmentR7CTilePtT2
                  ((_globals._pCurHouse)->m_pWallMan2,seg,&c0,&c1);
        bVar2 = PreviewWallBuild__5ERoomb
                          ((_globals._pCurHouse)->m_pWallMan2,this->m_mode == kFenceTool);
        if (!bVar2) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
          PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
                    /* end of inlined section */
          pCVar3 = (CWallArray *)
                   (*(code *)_5Globs_pFixedWorld->__vtable->SetLightEntry)
                             ((int)&_5Globs_pFixedWorld->__vtable +
                              (int)*(short *)&_5Globs_pFixedWorld->__vtable->GetLightEntry);
          RestoreWallLayer__17ESimScratchPadManR10CWallArray(pCVar3);
          ___7CTilePt(&c1,2);
          ___7CTilePt(&c0,2);
          return false;
        }
        ___7CTilePt(&c1,2);
        ___7CTilePt(&c0,2);
      }
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
      (*(code *)_5Globs_pSimulator->__vtable->GetProbe)
                ((int)&_5Globs_pSimulator->__vtable +
                 (int)*(short *)&_5Globs_pSimulator->__vtable->SetObjectsValue,7,iVar4);
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
      PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x994e8974);
                    /* end of inlined section */
      UpdateLot__11ESimsCursor();
      return true;
    }
  }
                    /* inlined from c:/eor/src2/games/sims/ESRC/euiaudio.h */
  PlayUiSound__8EUiAudioUi(_8EUiAudio__pUiAudioMan,0x3804219f);
  return false;
                    /* end of inlined section */
}

bool ESimsCursor::SubmitLine(EVec2 &v0, EVec2 &v1, bool bAddWall, bool bDeleteWall) {
	cFixedWorld *gWorld;
	CTilePt c0;
	CTilePt c1;
	TilePtDir tileDir;
	bool done;
	CTilePt inTile;
	int nwallsadded;
	TileWallsSegment theSeg;
	TileWalls theWalls;
	
  cFixedWorld *pcVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  TilePtDir inDir;
  TileWallsSegment inSeg;
  cFixedWorld__vtable *pcVar7;
  int iVar8;
  long lVar9;
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
  TileWalls theWalls;
  CTilePt aCStack_c0 [5];
  int local_b0;
  int local_ac;
  int nwallsadded;
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
  
  pcVar1 = _5Globs_pFixedWorld;
  local_20 = (undefined4)unaff_s8;
  uStack_1c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s7;
  uStack_2c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_b0 = (int)bAddWall;
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_ac = (int)bDeleteWall;
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  __7CTilePt(&c0);
  __7CTilePt(&c1);
  ConvertVertsToTiles__11ESimsCursorRC5EVec2T1R7CTilePtT3(v0,v1,&c0,&c1);
  inDir = GetTileDirection__11ESimsCursorRC7CTilePtT1(&c0,&c1);
                    /* inlined from ../MSrc/Function.h */
                    /* end of inlined section */
  if (inDir == kNone) {
LAB_0012c780:
    ___7CTilePt(&c1,2);
    ___7CTilePt(&c0,2);
    bVar6 = true;
  }
  else {
    bVar6 = false;
    __7CTilePtRC7CTilePt(&inTile,&c0);
    inSeg = DirToWallSeg__9TileWalls9TilePtDir(inDir);
    nwallsadded = 0;
    local_a4 = inDir * 3;
    pcVar7 = pcVar1->__vtable;
    while( true ) {
      (*(code *)pcVar7->ComputeArchValue)
                (&theWalls,(int)&pcVar1->__vtable + (int)*(short *)&pcVar7->ComputeRooms,&inTile);
      bVar3 = CanAdd__C9TileWalls16TileWallsSegment(&theWalls,inSeg);
      cVar5 = inTile.mX;
      if (!bVar3) break;
      if (local_b0 != 0) {
        if ((((inTile.mX < '\0') ||
             (cVar4 = (*(code *)pcVar1->__vtable->GetFloor)
                                ((int)&pcVar1->__vtable +
                                 (int)*(short *)&pcVar1->__vtable->GetFloorLayer), cVar2 = inTile.mY
             , cVar4 < cVar5)) || (inTile.mY < '\0')) ||
           (cVar5 = (*(code *)pcVar1->__vtable->GetFloor)
                              ((int)&pcVar1->__vtable +
                               (int)*(short *)&pcVar1->__vtable->GetFloorLayer), cVar5 < cVar2))
        break;
        if (local_ac == 0) {
          AddWallAtTile__11ESimsCursorRC7CTilePtR9TileWalls16TileWallsSegment
                    (this,&inTile,&theWalls,inSeg);
        }
        else {
          DeleteWallAtTile__11ESimsCursorRC7CTilePtR9TileWalls16TileWallsSegment
                    (this,&inTile,&theWalls,inSeg);
        }
      }
      __pl__C7CTilePtRC7CTilePt(aCStack_c0,&inTile);
      __as__7CTilePtRC7CTilePt(&inTile,aCStack_c0);
      ___7CTilePt(aCStack_c0,2);
      inTile.mLevel = '\x01';
      lVar9 = (*(code *)pcVar1->__vtable->SetWall)
                        ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetWall,&inTile)
      ;
      if (lVar9 != 0) {
        bVar6 = true;
      }
      if (!bVar6) {
        bVar6 = __eq__C7CTilePtRC7CTilePt(&inTile,&c1);
      }
      nwallsadded = nwallsadded + 1;
      iVar8 = (*(code *)pcVar1->__vtable->GetFloor)
                        ((int)&pcVar1->__vtable + (int)*(short *)&pcVar1->__vtable->GetFloorLayer);
      if (iVar8 <= nwallsadded) {
        ___9TileWalls(&theWalls,2);
LAB_0012c778:
        ___7CTilePt(&inTile,2);
        goto LAB_0012c780;
      }
      ___9TileWalls(&theWalls,2);
      if (bVar6) goto LAB_0012c778;
      pcVar7 = pcVar1->__vtable;
    }
    ___9TileWalls(&theWalls,2);
    ___7CTilePt(&inTile,2);
    ___7CTilePt(&c1,2);
    ___7CTilePt(&c0,2);
    bVar6 = false;
  }
  return bVar6;
}

bool ESimsCursor::CanChangeTileAdd(CTilePt &inTile, TileWallsSegment inSeg) {
	TileWallsSegment theSeg;
	cFixedWorld *gWorld;
	TileWalls theWalls;
	WallStyle style;
	WallStyle in;
	bool canAdd;
	ObjectIterator i;
	SInt16 wflags;
	Int invRotation;
	TileWallsSegment rotseg;
	CTilePt neighbor;
	CTilePt worldNeighbor;
	TileWallsSegment theNeighborSeg;
	SInt16 wflags;
	Int invRotation;
	TileWallsSegment rotseg;
	
  undefined *puVar1;
  cFixedWorld__vtable *pcVar2;
  uint uVar3;
  ulong *puVar4;
  cFixedWorld *pcVar5;
  bool bVar6;
  WallStyle WVar7;
  cXObject__15_2008 *pcVar8;
  int iVar9;
  TileWallsSegment TVar10;
  TileWallsSegment TVar11;
  long lVar12;
  ulong uVar13;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  TileWalls theWalls;
  ObjectIterator i;
  CTilePt neighbor;
  CTilePt worldNeighbor;
  ObjectIterator OStack_a0;
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
  
  pcVar5 = _5Globs_pFixedWorld;
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
            (&theWalls,
             (int)&_5Globs_pFixedWorld->__vtable +
             (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,inTile);
  bVar6 = HasWall__C9TileWalls16TileWallsSegment(&theWalls,inSeg);
  if (bVar6) {
    if (this->m_mode == kFenceTool) {
      WVar7 = GetStyle__C9TileWalls16TileWallsSegment(&theWalls,inSeg);
                    /* inlined from ../MSrc/wallStyles.h */
      if ((((WVar7 == kFenceStyle1) || (WVar7 == kFenceStyle2)) || (WVar7 == kFenceStyle3)) ||
         (bVar6 = false, WVar7 == kFenceStyle4)) {
        bVar6 = true;
      }
                    /* end of inlined section */
      if (((bVar6) &&
          (WVar7 = GetStyle__C9TileWalls16TileWallsSegment(&theWalls,inSeg),
          this->m_fenctype == WVar7)) ||
         (bVar6 = CanChangeTileDelete__11ESimsCursorRC7CTilePt16TileWallsSegment(this,inTile,inSeg),
         !bVar6)) goto LAB_0012cc48;
    }
    else {
      bVar6 = HasWallNotFence__C9TileWalls16TileWallsSegment(&theWalls,inSeg);
      if (bVar6) goto LAB_0012cc48;
    }
  }
  bVar6 = LegalWallTile__11ESimsCursorRC7CTilePt16TileWallsSegment(this,inTile,inSeg);
  if ((!bVar6) ||
     (pcVar2 = pcVar5->__vtable,
     lVar12 = (*(code *)pcVar2[1].MayEditTile)
                        ((int)&pcVar5->__vtable + (int)*(short *)&pcVar2[1].GetLightLayer,inTile),
     lVar12 == 0)) {
LAB_0012cc48:
    ___9TileWalls(&theWalls,2);
    return false;
  }
  bVar6 = CanAdd__C9TileWalls16TileWallsSegment(&theWalls,inSeg);
  if (!bVar6) goto LAB_0012cc34;
                    /* inlined from ../MSrc/objectiterator.h */
  init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&i,inTile,kAll);
                    /* end of inlined section */
  if (inSeg == kHorizDiag) {
LAB_0012c968:
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
    while (i.fCurrent != (cXObject__15_2008 *)0x0) {
      lVar12 = (*(code *)(i.fCurrent)->__vtable[1].Pickup)
                         ((int)&(i.fCurrent)->_vb3534 +
                          (int)*(short *)&(i.fCurrent)->__vtable[1].Turn);
      if (lVar12 != 9) {
        bVar6 = false;
        pcVar8 = i.fCurrent;
        goto LAB_0012c994;
      }
      __pp__14ObjectIterator(&i);
    }
  }
  else {
    if (0x10 < (int)inSeg) {
      if (inSeg != kVertDiag) goto LAB_0012cc34;
      goto LAB_0012c968;
    }
    if ((2 < (int)inSeg) || (pcVar8 = i.fCurrent, (int)inSeg < 1)) goto LAB_0012cc34;
LAB_0012c994:
                    /* end of inlined section */
    while (pcVar8 != (cXObject__15_2008 *)0x0) {
                    /* end of inlined section */
      lVar12 = (*(code *)(i.fCurrent)->__vtable[1].Pickup)
                         ((int)&(i.fCurrent)->_vb3534 +
                          (int)*(short *)&(i.fCurrent)->__vtable[1].Turn);
      if (lVar12 != 2) {
        uVar13 = (*(code *)(i.fCurrent)->__vtable->ReconType)
                           ((int)&(i.fCurrent)->_vb3534 +
                            (int)*(short *)&(i.fCurrent)->__vtable->ReconStream,0xd);
        iVar9 = (*(code *)(i.fCurrent)->__vtable->ReconType)
                          ((int)&(i.fCurrent)->_vb3534 +
                           (int)*(short *)&(i.fCurrent)->__vtable->ReconStream,1);
        TVar10 = RotateSegment__9TileWalls16TileWallsSegmenti(inSeg,(8U - iVar9 & 7) >> 1);
        if ((TVar10 == kTopLeft) && ((uVar13 & 0x800) != 0)) {
          bVar6 = false;
          break;
        }
        if ((TVar10 == kBottomLeft) && ((uVar13 & 0x400) != 0)) {
          bVar6 = false;
          break;
        }
        if ((TVar10 == kTopRight) && ((uVar13 & 0x100) != 0)) {
          bVar6 = false;
          break;
        }
        if ((TVar10 == kBottomRight) && ((uVar13 & 0x200) != 0)) {
          bVar6 = false;
          break;
        }
      }
      __pp__14ObjectIterator(&i);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
      pcVar8 = i.fCurrent;
    }
  }
  if (bVar6 != false) {
    __7CTilePtRC7CTilePt(&neighbor,inTile);
    if (inSeg == kTopLeft) {
      __7CTilePt9TilePtDiri(&worldNeighbor,kNW,0);
      __apl__7CTilePtRC7CTilePt(&neighbor,&worldNeighbor);
      ___7CTilePt(&worldNeighbor,2);
    }
    else {
      __7CTilePt9TilePtDiri(&worldNeighbor,kNE,0);
      __apl__7CTilePtRC7CTilePt(&neighbor,&worldNeighbor);
      ___7CTilePt(&worldNeighbor,2);
    }
    __7CTilePtRC7CTilePt(&worldNeighbor,&neighbor);
    TVar10 = RotateSegment__9TileWalls16TileWallsSegmenti(inSeg,2);
                    /* inlined from ../MSrc/objectiterator.h */
    init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&OStack_a0,&worldNeighbor,kAll);
    puVar1 = (undefined *)((int)&i.fCurrent + 3);
                    /* end of inlined section */
    uVar3 = (uint)puVar1 & 7;
    puVar4 = (ulong *)(puVar1 + -uVar3);
    *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | OStack_a0._0_8_ >> (7 - uVar3) * 8;
                    /* inlined from ../MSrc/objectiterator.h */
    i.fCurrent = (cXObject__15_2008 *)(OStack_a0._0_8_ >> 0x20);
    i._0_8_ = OStack_a0._0_8_;
                    /* end of inlined section */
    while (i.fCurrent != (cXObject__15_2008 *)0x0) {
      lVar12 = (*(code *)(i.fCurrent)->__vtable[1].Pickup)
                         ((int)&(i.fCurrent)->_vb3534 +
                          (int)*(short *)&(i.fCurrent)->__vtable[1].Turn);
      if (lVar12 != 2) {
        uVar13 = (*(code *)(i.fCurrent)->__vtable->ReconType)
                           ((int)&(i.fCurrent)->_vb3534 +
                            (int)*(short *)&(i.fCurrent)->__vtable->ReconStream,0xd);
        iVar9 = (*(code *)(i.fCurrent)->__vtable->ReconType)
                          ((int)&(i.fCurrent)->_vb3534 +
                           (int)*(short *)&(i.fCurrent)->__vtable->ReconStream,1);
        TVar11 = RotateSegment__9TileWalls16TileWallsSegmenti(TVar10,(8U - iVar9 & 7) >> 1);
        if ((TVar11 == kTopLeft) && ((uVar13 & 0x800) != 0)) {
          bVar6 = false;
          break;
        }
        if ((TVar11 == kBottomLeft) && ((uVar13 & 0x400) != 0)) {
          bVar6 = false;
          break;
        }
        if ((TVar11 == kTopRight) && ((uVar13 & 0x100) != 0)) {
          bVar6 = false;
          break;
        }
        if ((TVar11 == kBottomRight) && ((uVar13 & 0x200) != 0)) {
          bVar6 = false;
          break;
        }
      }
      __pp__14ObjectIterator(&i);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
    }
    ___7CTilePt(&worldNeighbor,2);
    ___7CTilePt(&neighbor,2);
  }
LAB_0012cc34:
  ___9TileWalls(&theWalls,2);
  return bVar6;
}

bool ESimsCursor::CanChangeTileDelete(CTilePt &inTile, TileWallsSegment inSeg) {
	TileWalls theWalls;
	bool hasWallNotFence;
	bool hasWall;
	bool hasFence;
	bool canDelete;
	ObjectIterator i;
	cXObject *thisobj;
	SInt16 wflags;
	Int invRotation;
	TileWallsSegment rotseg;
	CTilePt neighbor;
	TileWallsSegment theNeighborSeg;
	ObjectIterator j;
	SInt16 wflags;
	Int invRotation;
	TileWallsSegment rotseg;
	
  bool bVar1;
  cXObject__15_2008 *pcVar2;
  bool bVar3;
  bool bVar4;
  WallStyle WVar5;
  TileWallsSegment TVar6;
  int iVar7;
  TileWallsSegment TVar8;
  long lVar9;
  ulong uVar10;
  cXObject__15_2008__vtable *pcVar11;
  TileWalls theWalls;
  ObjectIterator i;
  CTilePt neighbor;
  ObjectIterator j;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
  (*(code *)_5Globs_pFixedWorld->__vtable->ComputeArchValue)
            (&theWalls,
             (int)&_5Globs_pFixedWorld->__vtable +
             (int)*(short *)&_5Globs_pFixedWorld->__vtable->ComputeRooms,inTile);
  bVar3 = HasWallNotFence__C9TileWalls16TileWallsSegment(&theWalls,inSeg);
  bVar4 = HasWall__C9TileWalls16TileWallsSegment(&theWalls,inSeg);
  if (bVar4) {
    WVar5 = GetStyle__C9TileWalls16TileWallsSegment(&theWalls,inSeg);
                    /* inlined from ../MSrc/wallStyles.h */
    if ((((WVar5 == kFenceStyle1) || (WVar5 == kFenceStyle2)) || (WVar5 == kFenceStyle3)) ||
       (bVar1 = false, WVar5 == kFenceStyle4)) {
      bVar1 = true;
    }
                    /* end of inlined section */
    if (((bVar4) && ((this->m_mode != kWallTool || (bVar3)))) &&
       ((this->m_mode != kFenceTool || (bVar1)))) {
      bVar3 = true;
      if (((inSeg != kHorizDiag) && ((int)inSeg < 0x11)) && (((int)inSeg < 3 && (0 < (int)inSeg))))
      {
                    /* inlined from ../MSrc/objectiterator.h */
        init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&i,inTile,kAll);
                    /* end of inlined section */
        while (pcVar2 = i.fCurrent, i.fCurrent != (cXObject__15_2008 *)0x0) {
          lVar9 = (*(code *)(i.fCurrent)->__vtable[1].Pickup)
                            ((int)&(i.fCurrent)->_vb3534 +
                             (int)*(short *)&(i.fCurrent)->__vtable[1].Turn);
          pcVar11 = pcVar2->__vtable;
          if (lVar9 == 8) {
            lVar9 = (*(code *)pcVar11->GetNextObjectSibling)
                              ((int)&pcVar2->_vb3534 + (int)*(short *)&pcVar11->GetContainedSlotNum)
            ;
            if (lVar9 == 0) {
              bVar3 = false;
              break;
            }
            pcVar11 = pcVar2->__vtable;
          }
          lVar9 = (*(code *)pcVar11[1].Pickup)
                            ((int)&pcVar2->_vb3534 + (int)*(short *)&pcVar11[1].Turn);
          if ((lVar9 != 8) &&
             (lVar9 = (*(code *)pcVar2->__vtable[1].Pickup)
                                ((int)&pcVar2->_vb3534 + (int)*(short *)&pcVar2->__vtable[1].Turn),
             lVar9 != 2)) {
            uVar10 = (*(code *)pcVar2->__vtable->ReconType)
                               ((int)&pcVar2->_vb3534 +
                                (int)*(short *)&pcVar2->__vtable->ReconStream,0xd);
            iVar7 = (*(code *)pcVar2->__vtable->ReconType)
                              ((int)&pcVar2->_vb3534 + (int)*(short *)&pcVar2->__vtable->ReconStream
                               ,1);
            TVar6 = RotateSegment__9TileWalls16TileWallsSegmenti(inSeg,(8U - iVar7 & 7) >> 1);
            if ((TVar6 == kTopLeft) && ((uVar10 & 8) != 0)) {
              bVar3 = false;
              break;
            }
            if ((TVar6 == kBottomLeft) && ((uVar10 & 4) != 0)) {
              bVar3 = false;
              break;
            }
            if ((TVar6 == kTopRight) && ((uVar10 & 1) != 0)) {
              bVar3 = false;
              break;
            }
            if ((TVar6 == kBottomRight) && ((uVar10 & 2) != 0)) {
              bVar3 = false;
              break;
            }
          }
          __pp__14ObjectIterator(&i);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
        }
        if (bVar3) {
          __7CTilePtRC7CTilePt(&neighbor,inTile);
          if (inSeg == kTopLeft) {
            __apl__7CTilePtRC7CTilePt(&neighbor,_7CTilePt_sDirections + 2);
          }
          else {
            __apl__7CTilePtRC7CTilePt(&neighbor,_7CTilePt_sDirections);
          }
          TVar6 = RotateSegment__9TileWalls16TileWallsSegmenti(inSeg,2);
                    /* inlined from ../MSrc/objectiterator.h */
          init__14ObjectIteratorRC7CTilePtQ214ObjectIterator11IterateType(&j,&neighbor,kAll);
          pcVar2 = j.fCurrent;
                    /* end of inlined section */
          while (pcVar2 != (cXObject__15_2008 *)0x0) {
                    /* end of inlined section */
            j.fCurrent = pcVar2;
            lVar9 = (*(code *)pcVar2->__vtable[1].Pickup)
                              ((int)&pcVar2->_vb3534 + (int)*(short *)&pcVar2->__vtable[1].Turn);
            if ((lVar9 != 8) &&
               (lVar9 = (*(code *)pcVar2->__vtable[1].Pickup)
                                  ((int)&pcVar2->_vb3534 + (int)*(short *)&pcVar2->__vtable[1].Turn)
               , lVar9 != 2)) {
              uVar10 = (*(code *)pcVar2->__vtable->ReconType)
                                 ((int)&pcVar2->_vb3534 +
                                  (int)*(short *)&pcVar2->__vtable->ReconStream,0xd);
              iVar7 = (*(code *)pcVar2->__vtable->ReconType)
                                ((int)&pcVar2->_vb3534 +
                                 (int)*(short *)&pcVar2->__vtable->ReconStream,1);
              TVar8 = RotateSegment__9TileWalls16TileWallsSegmenti(TVar6,(8U - iVar7 & 7) >> 1);
              if ((TVar8 == kTopLeft) && ((uVar10 & 8) != 0)) {
                bVar3 = false;
                break;
              }
              if ((TVar8 == kBottomLeft) && ((uVar10 & 4) != 0)) {
                bVar3 = false;
                break;
              }
              if ((TVar8 == kTopRight) && ((uVar10 & 1) != 0)) {
                bVar3 = false;
                break;
              }
              if ((TVar8 == kBottomRight) && ((uVar10 & 2) != 0)) {
                bVar3 = false;
                break;
              }
            }
            __pp__14ObjectIterator(&j);
                    /* inlined from ../MSrc/objectiterator.h */
                    /* end of inlined section */
            pcVar2 = j.fCurrent;
          }
          ___7CTilePt(&neighbor,2);
        }
      }
      ___9TileWalls(&theWalls,2);
      return bVar3;
    }
  }
  ___9TileWalls(&theWalls,2);
  return false;
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
