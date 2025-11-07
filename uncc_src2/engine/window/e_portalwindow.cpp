// STATUS: NOT STARTED

#include "e_portalwindow.h"

__vtbl_ptr_type EPortalWindow virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPortalWindow::~EPortalWindow,
		/* .__delta2 = */ -576
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPortalWindow::Select,
		/* .__delta2 = */ -480
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EWindow::WindowMatrixChanged,
		/* .__delta2 = */ -24904
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E3DWindow::InputCoordinatesChanged,
		/* .__delta2 = */ 6016
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E3DWindow::OutputCoordinatesChanged,
		/* .__delta2 = */ 6048
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EWindow::SetRenderSurface,
		/* .__delta2 = */ -27328
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E3DWindow::Cast3DWindow,
		/* .__delta2 = */ 7680
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPortalWindow::CastPortalWindow,
		/* .__delta2 = */ 14776
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPortalWindow::SetProjection,
		/* .__delta2 = */ -240
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPortalWindow::SetProjection,
		/* .__delta2 = */ -128
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPortalWindow::SetOrthoProjection,
		/* .__delta2 = */ -120
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPortalWindow::SetLookAt,
		/* .__delta2 = */ -88
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPortalWindow::SetLookAtPos,
		/* .__delta2 = */ -40
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EPortalWindow::SetLookAt,
		/* .__delta2 = */ 8
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E3DWindow::ProjectionMatrixChanged,
		/* .__delta2 = */ 5584
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E3DWindow::LookAtMatrixChanged,
		/* .__delta2 = */ 5616
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void EBoundClipPlane::Build(EVec4 &vPlane) {
	int d;
	EVec4 *this;
	int value;
	
  undefined8 uVar1;
  EVec4 *pEVar2;
  uchar uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  uchar *puVar7;
  int iVar8;
  uchar uVar9;
  uchar uVar10;
  
  uVar1 = *(undefined8 *)&vPlane->field0_0x0;
  fVar5 = (vPlane->field0_0x0).d[2];
  fVar6 = (vPlane->field0_0x0).d[3];
  iVar8 = 0;
  (this->m_vPlane).field0_0x0.d[0] = (float)uVar1;
  (this->m_vPlane).field0_0x0.d[1] = (float)((ulong)uVar1 >> 0x20);
  (this->m_vPlane).field0_0x0.d[2] = fVar5;
  (this->m_vPlane).field0_0x0.d[3] = fVar6;
  uVar10 = '\f';
  puVar7 = this->m_farOffsets;
  uVar9 = '\f';
  do {
    pEVar2 = &this->m_vPlane;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    iVar4 = iVar8 << 2;
                    /* end of inlined section */
    iVar8 = iVar8 + 1;
    this = (EBoundClipPlane *)((int)&(this->m_vPlane).field0_0x0 + 4);
    uVar3 = (uchar)iVar4;
    if (0.0 < (pEVar2->field0_0x0).d[0]) {
      puVar7[-4] = uVar3;
      *puVar7 = uVar9;
    }
    else {
      *puVar7 = uVar3;
      puVar7[-4] = uVar10;
    }
    puVar7 = puVar7 + 1;
    uVar10 = uVar10 + '\x04';
    uVar9 = uVar9 + '\x04';
  } while (iVar8 < 3);
  return;
}

EPortalWindow* EPortalWindow::EPortalWindow() {
  bool bVar1;
  TLinkedList_EClipOccluder_88_92_ *pTVar2;
  int iVar3;
  
  __9E3DWindow(&this->field0_0x0);
  iVar3 = 0xf;
  (this->field0_0x0).field0_0x0.__vtable = (EWindow__vtable *)_vt_13EPortalWindow;
  pTVar2 = &this->m_contexts[0].m_occluderList;
  do {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    *(EClipPlane **)(pTVar2 + -2) = (EClipPlane *)0x0;
                    /* end of inlined section */
    iVar3 = iVar3 + -1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    ((TLinkedList_EClipPlane_68_72_ *)((int)(pTVar2 + -3) + 4))->m_pHead = (EClipPlane *)0x0;
    *(EClipPlane **)(pTVar2 + -1) = (EClipPlane *)0x0;
    *(undefined4 *)((int)(pTVar2 + -2) + 4) = 0;
    pTVar2->m_pTail = (EClipOccluder *)0x0;
    pTVar2->m_pHead = (EClipOccluder *)0x0;
                    /* end of inlined section */
    pTVar2 = pTVar2 + 0x1a;
  } while (iVar3 != -1);
                    /* end of inlined section */
  iVar3 = 3;
  do {
    bVar1 = iVar3 != -1;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  this->m_pcc = this->m_contexts;
  *(undefined4 *)&this->m_viewNeedsSettingUp = 1;
  this->m_nCurrentContext = 0;
  this->m_clipRatio = 1.0;
  this->m_contexts[0].m_fovYDegrees = 45.0;
  this->m_pcc->m_aspect = 1.333333;
  this->m_pcc->m_nearPlane = 1.0;
  this->m_pcc->m_farPlane = 1000.0;
  *(undefined4 *)&this->m_pcc->m_reverseCulling = 0;
  this->m_pcc->m_dataSize = 0;
  return this;
}

void EPortalWindow::~EPortalWindow(int __in_chrg) {
	E3DWindow *this;
	void *p;
	void *p;
	
  (this->field0_0x0).field0_0x0.__vtable = (EWindow__vtable *)_vt_13EPortalWindow;
  DeallocateData__13EPortalWindow(this);
  ___7EWindow((EWindow *)this,0);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/window/e_window.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EPortalWindow::Select(ERC *prc) {
  Select__9E3DWindowP3ERC(&this->field0_0x0,prc);
  (*(code *)prc->__vtable->Material)
            (this->m_clipRatio,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable->PointLight);
  return;
}

void EPortalWindow::DeallocateData() {
  EClipContext *pEVar1;
  int iVar2;
  int iVar3;
  
  do {
    ResetCurrentContext__13EPortalWindow(this);
    pEVar1 = this->m_pcc;
    iVar2 = this->m_nCurrentContext;
    iVar3 = iVar2 + -1;
    this->m_pcc = pEVar1 + -1;
    this->m_nCurrentContext = iVar3;
  } while (-1 < iVar3);
  this->m_nCurrentContext = iVar2;
  this->m_pcc = pEVar1;
  return;
}

void EPortalWindow::ResetCurrentContext() {
	EClipContext *pLast;
	
  EClipContext *pEVar1;
  
  Reset__12EClipContext(this->m_pcc);
  if (this->m_nCurrentContext == 0) {
    this->m_pcc->m_pData = (uchar *)this->m_dataBuffer;
  }
  else {
    pEVar1 = this->m_pcc;
    pEVar1->m_pData = pEVar1[-1].m_pData + pEVar1[-1].m_dataSize;
  }
  return;
}

void EPortalWindow::SetProjection(float fovYDegrees, float aspect, float nearPlane, float farPlane) {
	EMat4 mProj;
	
  EMat4 mProj;
  
  this->m_pcc->m_fovYDegrees = fovYDegrees;
  this->m_pcc->m_aspect = aspect;
  this->m_pcc->m_nearPlane = nearPlane;
  this->m_pcc->m_farPlane = farPlane;
  Projection__5EMat4ffff(&mProj,fovYDegrees,aspect,nearPlane,farPlane);
  SetProjection__9E3DWindowRC5EMat4(&this->field0_0x0,&mProj);
  *(undefined4 *)&this->m_viewNeedsSettingUp = 1;
  return;
}

void EPortalWindow::SetProjection(EMat4 &mProjection) {
  return;
}

void EPortalWindow::SetOrthoProjection(float left, float right, float bottom, float top, float nearPlane, float farPlane) {
  return;
}

void EPortalWindow::ViewChanged() {
  *(undefined4 *)&this->m_viewNeedsSettingUp = 1;
  this->m_pcc->m_dataSize = 0;
  return;
}

void EPortalWindow::SetLookAt(EVec3 &vEye, EVec3 &vTarget, EVec3 &vUp) {
  SetLookAt__9E3DWindowRC5EVec3N21(&this->field0_0x0,vEye,vTarget,vUp);
  ViewChanged__13EPortalWindow(this);
  return;
}

void EPortalWindow::SetLookAtPos(EMat4 &mLookAtPos) {
  SetLookAtPos__9E3DWindowRC5EMat4(&this->field0_0x0,mLookAtPos);
  ViewChanged__13EPortalWindow(this);
  return;
}

void EPortalWindow::SetLookAt(EMat4 &mLookAt) {
  SetLookAt__9E3DWindowRC5EMat4(&this->field0_0x0,mLookAt);
  ViewChanged__13EPortalWindow(this);
  return;
}

void EPortalWindow::SetReverseCulling(bool reverseCulling) {
  *(int *)&this->m_pcc->m_reverseCulling = (int)reverseCulling;
  ViewChanged__13EPortalWindow(this);
  return;
}

void EPortalWindow::SetClipRatio(float clipRatio) {
  this->m_clipRatio = clipRatio;
  ViewChanged__13EPortalWindow(this);
  return;
}

void EPortalWindow::GetViewParams(EVec3 &vEyeOut, float &fovYDegreesOut, float &aspectOut, float &nearPlaneOut, float &farPlaneOut) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  EClipContext *pEVar4;
  float fVar5;
  ulong *puVar6;
  ulong in_v1;
  ulong uVar7;
  
  pEVar4 = this->m_pcc;
  puVar1 = (undefined *)((int)&(pEVar4->m_vEye).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)pEVar4 & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)pEVar4 - uVar3) >> uVar3 * 8;
  fVar5 = (pEVar4->m_vEye).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&vEyeOut->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar6 = (ulong *)(puVar1 + -uVar2);
  *puVar6 = *puVar6 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  uVar2 = (uint)vEyeOut & 7;
  *(ulong *)((int)vEyeOut - uVar2) =
       uVar7 << uVar2 * 8 |
       *(ulong *)((int)vEyeOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (vEyeOut->field0_0x0).d[2] = fVar5;
  *fovYDegreesOut = this->m_pcc->m_fovYDegrees;
  *aspectOut = this->m_pcc->m_aspect;
  *nearPlaneOut = this->m_pcc->m_nearPlane;
  *farPlaneOut = this->m_pcc->m_farPlane;
  return;
}

void EPortalWindow::SetupView() {
	EVec3 vs[7];
	int i;
	float y;
	float x;
	EVec3 vc[4];
	EVec3 vts[7];
	EVec3 vtc[4];
	EMat4 &mRight;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EMat4 &mRight;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  EClipContext *pEVar4;
  EClipContext *pEVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  EVec3 *pEVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  EVec3 vs [7];
  undefined auStack_17c [12];
  float local_170;
  float local_16c;
  float local_168;
  EVec3 vc [4];
  EVec3 vtc [4];
  EVec3 vts [7];
  
  *(undefined4 *)&this->m_viewNeedsSettingUp = 0;
  DeallocateData__13EPortalWindow(this);
                    /* end of inlined section */
  iVar9 = 5;
  do {
    bVar2 = iVar9 != -1;
    iVar9 = iVar9 + -1;
  } while (bVar2);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_168 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_16c = 0.0;
                    /* end of inlined section */
  pEVar10 = vs + 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_170 = 0.0;
                    /* end of inlined section */
  pEVar4 = this->m_pcc;
  vs[0].field0_0x0._0_8_ = 0;
  uVar11 = 0;
  puVar1 = (undefined *)((int)&vs[0].field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | 0UL >> (7 - uVar6) * 8;
  vs[0].field0_0x0._8_4_ = 0.0;
                    /* end of inlined section */
  fVar12 = pEVar4->m_farPlane;
  while( true ) {
    (pEVar10->field0_0x0).d[2] = -fVar12;
    pEVar10 = pEVar10 + 1;
    if ((int)(vs + 5) <= (int)pEVar10) break;
    fVar12 = pEVar4->m_farPlane;
  }
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
  fVar12 = tanf(this->m_pcc->m_fovYDegrees * 0.5 * 0.01745329);
  fVar13 = this->m_clipRatio;
  vc[3].field0_0x0._4_4_ = fVar12 * this->m_pcc->m_farPlane;
  vc[3].field0_0x0._0_4_ = vc[3].field0_0x0._4_4_ * this->m_pcc->m_aspect;
  vs[1].field0_0x0._4_4_ = fVar13 * vc[3].field0_0x0._4_4_;
  vs[2].field0_0x0._4_4_ = -fVar13 * vc[3].field0_0x0._4_4_;
  vs[3].field0_0x0._0_4_ = fVar13 * vc[3].field0_0x0._0_4_;
  vs[1].field0_0x0._0_4_ = -fVar13 * vc[3].field0_0x0._0_4_;
                    /* end of inlined section */
  iVar9 = 2;
  do {
    bVar2 = iVar9 != -1;
    iVar9 = iVar9 + -1;
  } while (bVar2);
  vc[1].field0_0x0._0_4_ = -vc[3].field0_0x0._0_4_;
  pEVar4 = this->m_pcc;
  vc[2].field0_0x0._4_4_ = -vc[3].field0_0x0._4_4_;
  pEVar10 = vc;
  iVar9 = 3;
  do {
                    /* end of inlined section */
    iVar9 = iVar9 + -1;
    (pEVar10->field0_0x0).d[2] = -pEVar4->m_farPlane;
    pEVar10 = pEVar10 + 1;
  } while (-1 < iVar9);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vtc[2].field0_0x0._8_4_ =
       vs[0].field0_0x0._0_4_ + vs[0].field0_0x0._0_4_ + vc[1].field0_0x0._0_4_ +
       vc[1].field0_0x0._0_4_;
                    /* end of inlined section */
  vc[0].field0_0x0._0_4_ = vc[1].field0_0x0._0_4_;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vtc[3].field0_0x0._0_4_ =
       vs[0].field0_0x0._4_4_ + vs[0].field0_0x0._4_4_ + vc[3].field0_0x0._4_4_ +
       vc[2].field0_0x0._4_4_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vtc[3].field0_0x0._4_4_ =
       vs[0].field0_0x0._8_4_ + vs[0].field0_0x0._8_4_ + vc[0].field0_0x0._8_4_ +
       vc[1].field0_0x0._8_4_;
                    /* end of inlined section */
  vc[0].field0_0x0._4_4_ = vc[3].field0_0x0._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vtc[1].field0_0x0._4_4_ = vtc[2].field0_0x0._8_4_ + vc[3].field0_0x0._0_4_;
  vtc[1].field0_0x0._8_4_ = vtc[3].field0_0x0._0_4_ + vc[2].field0_0x0._4_4_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vtc[2].field0_0x0._0_4_ = vtc[3].field0_0x0._4_4_ + vc[2].field0_0x0._8_4_;
                    /* end of inlined section */
  vc[2].field0_0x0._0_4_ = vc[3].field0_0x0._0_4_;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vtc[0].field0_0x0._0_4_ = vtc[1].field0_0x0._4_4_ + vc[3].field0_0x0._0_4_;
  vtc[0].field0_0x0._4_4_ = vtc[1].field0_0x0._8_4_ + vc[3].field0_0x0._4_4_;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vtc[0].field0_0x0._8_4_ = vtc[2].field0_0x0._0_4_ + vc[3].field0_0x0._8_4_;
                    /* end of inlined section */
  vc[1].field0_0x0._4_4_ = vc[2].field0_0x0._4_4_;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_170 = vtc[0].field0_0x0._0_4_ * 0.1666667;
  local_16c = vtc[0].field0_0x0._4_4_ * 0.1666667;
  vs[5].field0_0x0._8_4_ = vtc[0].field0_0x0._8_4_ * 0.1666667;
  local_168 = vs[5].field0_0x0._8_4_;
                    /* end of inlined section */
  uVar8 = CONCAT44(local_16c,local_170);
  puVar1 = (undefined *)((int)&vs[5].field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | uVar8 >> (7 - uVar6) * 8;
  uVar6 = (uint)(vs + 5) & 7;
  puVar7 = (ulong *)((int)(vs + 5) - uVar6);
  *puVar7 = uVar8 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vs[6].field0_0x0._0_4_ = 0;
                    /* end of inlined section */
  vs[6].field0_0x0._8_4_ = -this->m_pcc->m_nearPlane;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vs[6].field0_0x0._4_4_ = 0;
                    /* end of inlined section */
  iVar9 = 5;
  do {
    bVar2 = iVar9 != -1;
    iVar9 = iVar9 + -1;
  } while (bVar2);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  pEVar10 = vs;
  while( true ) {
    fVar12 = *(float *)pEVar10;
    fVar14 = (this->field0_0x0).m_mLookAtPos.field0_0x0.d[1][2];
    fVar13 = (this->field0_0x0).m_mLookAtPos.field0_0x0.d[2];
    fVar17 = *(float *)((int)pEVar10 + 8);
    fVar15 = (this->field0_0x0).m_mLookAtPos.field0_0x0.d[2][2];
    fVar16 = (this->field0_0x0).m_mLookAtPos.field0_0x0.d[3][2];
                    /* end of inlined section */
    uVar8 = CONCAT44(fVar12 * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[1] +
                     vs[0].field0_0x0._4_4_ * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[1][1] +
                     fVar17 * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[2][1] +
                     (this->field0_0x0).m_mLookAtPos.field0_0x0.d[3][1],
                     fVar12 * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[0] +
                     vs[0].field0_0x0._4_4_ * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[1][0] +
                     fVar17 * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[2][0] +
                     (this->field0_0x0).m_mLookAtPos.field0_0x0.d[3][0]);
    uVar6 = (uint)(undefined *)((int)pEVar10 + 0xf7U) & 7;
    puVar7 = (ulong *)((undefined *)((int)pEVar10 + 0xf7U) + -uVar6);
    *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | uVar8 >> (7 - uVar6) * 8;
    uVar6 = (uint)(float *)((int)pEVar10 + 0xf0) & 7;
    puVar7 = (ulong *)((int)(float *)((int)pEVar10 + 0xf0) - uVar6);
    *puVar7 = uVar8 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
    *(float *)((int)pEVar10 + 0xf8) =
         fVar12 * fVar13 + vs[0].field0_0x0._4_4_ * fVar14 + fVar17 * fVar15 + fVar16;
    if ((int)auStack_17c <= (int)(float *)((int)pEVar10 + 0xc)) break;
    vs[0].field0_0x0._4_4_ = *(float *)((int)pEVar10 + 0x10);
    pEVar10 = (EVec3 *)(float *)((int)pEVar10 + 0xc);
  }
  pEVar4 = this->m_pcc;
  puVar1 = (undefined *)((int)&(pEVar4->m_vEye).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | vts[0].field0_0x0._0_8_ >> (7 - uVar6) * 8;
  uVar6 = (uint)pEVar4 & 7;
  *(ulong *)((int)pEVar4 - uVar6) =
       vts[0].field0_0x0._0_8_ << uVar6 * 8 |
       *(ulong *)((int)pEVar4 - uVar6) & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (pEVar4->m_vEye).field0_0x0.d[2] = vts[0].field0_0x0._8_4_;
  pEVar4 = this->m_pcc;
  puVar1 = (undefined *)((int)&vts[5].field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  uVar3 = (uint)(vts + 5) & 7;
  uVar11 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
           uVar11 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)(vts + 5) - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(pEVar4->m_vFrustCenter).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | uVar11 >> (7 - uVar6) * 8;
  uVar6 = (uint)&pEVar4->m_vFrustCenter & 7;
  puVar7 = (ulong *)((int)&pEVar4->m_vFrustCenter - uVar6);
  *puVar7 = uVar11 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (pEVar4->m_vFrustCenter).field0_0x0.d[2] = vts[5].field0_0x0._8_4_;
  pEVar5 = this->m_pcc;
  puVar1 = (undefined *)((int)&vts[1].field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  uVar3 = (uint)(vts + 1) & 7;
  uVar11 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
           (long)(int)pEVar4 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)(vts + 1) - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&(pEVar5->m_vFrustCorner).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | uVar11 >> (7 - uVar6) * 8;
  uVar6 = (uint)&pEVar5->m_vFrustCorner & 7;
  puVar7 = (ulong *)((int)&pEVar5->m_vFrustCorner - uVar6);
  *puVar7 = uVar11 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (pEVar5->m_vFrustCorner).field0_0x0.d[2] = vts[1].field0_0x0._8_4_;
  pEVar4 = this->m_pcc;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_168 = (pEVar4->m_vFrustCenter).field0_0x0.d[2] - (pEVar4->m_vEye).field0_0x0.d[2];
  local_170 = (pEVar4->m_vFrustCenter).field0_0x0.d[0] - (pEVar4->m_vEye).field0_0x0.d[0];
  local_16c = (pEVar4->m_vFrustCenter).field0_0x0.d[1] - (pEVar4->m_vEye).field0_0x0.d[1];
                    /* end of inlined section */
  puVar1 = (undefined *)((int)&(pEVar4->m_vLookDir).field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | CONCAT44(local_16c,local_170) >> (7 - uVar6) * 8;
  uVar6 = (uint)&pEVar4->m_vLookDir & 7;
  puVar7 = (ulong *)((int)&pEVar4->m_vLookDir - uVar6);
  *puVar7 = CONCAT44(local_16c,local_170) << uVar6 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  (pEVar4->m_vLookDir).field0_0x0.d[2] = local_168;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  pEVar4 = this->m_pcc;
  fVar13 = (pEVar4->m_vLookDir).field0_0x0.d[0];
  fVar12 = (pEVar4->m_vLookDir).field0_0x0.d[1];
  fVar14 = (pEVar4->m_vLookDir).field0_0x0.d[2];
  vs[2].field0_0x0._0_4_ = vs[1].field0_0x0._0_4_;
  vs[3].field0_0x0._4_4_ = vs[2].field0_0x0._4_4_;
  vs[4].field0_0x0._0_4_ = vs[3].field0_0x0._0_4_;
  vs[4].field0_0x0._4_4_ = vs[1].field0_0x0._4_4_;
  fVar12 = sqrtf(fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14);
  if (fVar12 != 0.0) {
    fVar12 = 1.0 / fVar12;
    (pEVar4->m_vLookDir).field0_0x0.d[0] = (pEVar4->m_vLookDir).field0_0x0.d[0] * fVar12;
    fVar13 = (pEVar4->m_vLookDir).field0_0x0.d[2];
    (pEVar4->m_vLookDir).field0_0x0.d[1] = (pEVar4->m_vLookDir).field0_0x0.d[1] * fVar12;
    (pEVar4->m_vLookDir).field0_0x0.d[2] = fVar13 * fVar12;
  }
                    /* end of inlined section */
                    /* end of inlined section */
  iVar9 = 2;
  do {
    bVar2 = iVar9 != -1;
    iVar9 = iVar9 + -1;
  } while (bVar2);
  pEVar10 = vc;
  iVar9 = 3;
  do {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar13 = (pEVar10->field0_0x0).d[1];
                    /* end of inlined section */
    iVar9 = iVar9 + -1;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar12 = (pEVar10->field0_0x0).d[0];
    fVar14 = (pEVar10->field0_0x0).d[2];
    local_168 = fVar12 * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[2] +
                fVar13 * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[1][2] +
                fVar14 * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[2][2] +
                (this->field0_0x0).m_mLookAtPos.field0_0x0.d[3][2];
    local_170 = fVar12 * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[0] +
                fVar13 * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[1][0] +
                fVar14 * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[2][0] +
                (this->field0_0x0).m_mLookAtPos.field0_0x0.d[3][0];
    local_16c = fVar12 * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[1] +
                fVar13 * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[1][1] +
                fVar14 * (this->field0_0x0).m_mLookAtPos.field0_0x0.d[2][1] +
                (this->field0_0x0).m_mLookAtPos.field0_0x0.d[3][1];
                    /* end of inlined section */
    puVar1 = (undefined *)((int)&pEVar10[4].field0_0x0 + 7);
    uVar6 = (uint)puVar1 & 7;
    puVar7 = (ulong *)(puVar1 + -uVar6);
    *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | CONCAT44(local_16c,local_170) >> (7 - uVar6) * 8;
    uVar6 = (uint)(pEVar10 + 4) & 7;
    puVar7 = (ulong *)((int)(pEVar10 + 4) - uVar6);
    *puVar7 = CONCAT44(local_16c,local_170) << uVar6 * 8 |
              *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
    pEVar10[4].field0_0x0.d[2] = local_168;
    pEVar10 = pEVar10 + 1;
  } while (-1 < iVar9);
  puVar1 = (undefined *)((int)&this->m_vFrustCorners[0].field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 |
            CONCAT44(vtc[0].field0_0x0._4_4_,vtc[0].field0_0x0._0_4_) >> (7 - uVar6) * 8;
  uVar6 = (uint)this->m_vFrustCorners & 7;
  puVar7 = (ulong *)((int)this->m_vFrustCorners - uVar6);
  *puVar7 = CONCAT44(vtc[0].field0_0x0._4_4_,vtc[0].field0_0x0._0_4_) << uVar6 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  this->m_vFrustCorners[0].field0_0x0.d[2] = vtc[0].field0_0x0._8_4_;
  puVar1 = (undefined *)((int)&vtc[3].field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  uVar3 = (uint)(vtc + 3) & 7;
  uVar11 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
           (long)(int)local_168 & 0xffffffffffffffffU >> (uVar6 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)(vtc + 3) - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&this->m_vFrustCorners[1].field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | uVar11 >> (7 - uVar6) * 8;
  uVar6 = (uint)(this->m_vFrustCorners + 1) & 7;
  puVar7 = (ulong *)((int)(this->m_vFrustCorners + 1) - uVar6);
  *puVar7 = uVar11 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  this->m_vFrustCorners[1].field0_0x0.d[2] = vtc[3].field0_0x0._8_4_;
  puVar1 = (undefined *)((int)&vtc[1].field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  uVar3 = (uint)(vtc + 1) & 7;
  uVar11 = (*(long *)(puVar1 + -uVar6) << (7 - uVar6) * 8 |
           (long)(int)vtc[0].field0_0x0._8_4_ & 0xffffffffffffffffU >> (uVar6 + 1) * 8) &
           -1L << (8 - uVar3) * 8 | *(ulong *)((int)(vtc + 1) - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&this->m_vFrustCorners[2].field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | uVar11 >> (7 - uVar6) * 8;
  uVar6 = (uint)(this->m_vFrustCorners + 2) & 7;
  puVar7 = (ulong *)((int)(this->m_vFrustCorners + 2) - uVar6);
  *puVar7 = uVar11 << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  this->m_vFrustCorners[2].field0_0x0.d[2] = vtc[1].field0_0x0._8_4_;
  puVar1 = (undefined *)((int)&this->m_vFrustCorners[3].field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 |
            CONCAT44(vtc[2].field0_0x0._4_4_,vtc[2].field0_0x0._0_4_) >> (7 - uVar6) * 8;
  uVar6 = (uint)(this->m_vFrustCorners + 3) & 7;
  puVar7 = (ulong *)((int)(this->m_vFrustCorners + 3) - uVar6);
  *puVar7 = CONCAT44(vtc[2].field0_0x0._4_4_,vtc[2].field0_0x0._0_4_) << uVar6 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  this->m_vFrustCorners[3].field0_0x0.d[2] = vtc[2].field0_0x0._8_4_;
  puVar1 = (undefined *)((int)&this->m_vFrustCorners[4].field0_0x0 + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar6);
  *puVar7 = *puVar7 & -1L << (uVar6 + 1) * 8 | vts[0].field0_0x0._0_8_ >> (7 - uVar6) * 8;
  uVar6 = (uint)(this->m_vFrustCorners + 4) & 7;
  puVar7 = (ulong *)((int)(this->m_vFrustCorners + 4) - uVar6);
  *puVar7 = vts[0].field0_0x0._0_8_ << uVar6 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar6) * 8;
  this->m_vFrustCorners[4].field0_0x0.d[2] = vts[0].field0_0x0._8_4_;
  CalcOuterRadius__12EClipContext(this->m_pcc);
  *(undefined4 *)&this->m_pcc->m_reoriented = 1;
  AddClipPlanes__12EClipContextPC5EVec3ibT1(this->m_pcc,vts + 1,4,true,vts + 6);
  if (1.0 < this->m_clipRatio) {
    AddClipPlanes__12EClipContextPC5EVec3ibT1(this->m_pcc,vtc,4,true,(EVec3 *)0x0);
  }
  return;
}

EVec3& EPortalWindow::GetFrustCorner(EFrustCorner fc) {
  if (*(int *)&this->m_viewNeedsSettingUp != 0) {
    SetupView__13EPortalWindow(this);
  }
  return this->m_vFrustCorners + fc;
}

void EPortalWindow::AddClipPlane(EVec3 *vCorners) {
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  ulong *puVar6;
  EClipPlane *pPlane;
  ulong uVar7;
  EClipPlane *pEVar8;
  EVec3 *pEVar9;
  
  if (*(int *)&this->m_viewNeedsSettingUp != 0) {
    SetupView__13EPortalWindow(this);
  }
                    /* inlined from c:/eor/src2/engine/window/e_portalwindow.h */
  pPlane = (EClipPlane *)_allocBucketAlloc__FUiUi(0x50,0x1b);
                    /* end of inlined section */
  uVar7 = 1;
  do {
    bVar2 = uVar7 != 0xffffffffffffffff;
    uVar7 = (ulong)((int)uVar7 + -1);
  } while (bVar2);
                    /* end of inlined section */
  pEVar9 = vCorners + 3;
  pEVar8 = pPlane;
  do {
    puVar1 = (undefined *)((int)&vCorners->field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    uVar4 = (uint)vCorners & 7;
    uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
            uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
            *(ulong *)((int)vCorners - uVar4) >> uVar4 * 8;
    fVar5 = (vCorners->field0_0x0).d[2];
    puVar1 = (undefined *)((int)&pEVar8->vCorners[0].field0_0x0 + 7);
    uVar3 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar3);
    *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
    uVar3 = (uint)pEVar8 & 7;
    *(ulong *)((int)pEVar8 - uVar3) =
         uVar7 << uVar3 * 8 |
         *(ulong *)((int)pEVar8 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
    pEVar8->vCorners[0].field0_0x0.d[2] = fVar5;
    vCorners = vCorners + 1;
    uVar7 = (ulong)((int)vCorners < (int)pEVar9);
    pEVar8 = (EClipPlane *)(pEVar8->vCorners + 1);
  } while (uVar7 != 0);
  *(undefined4 *)&pPlane->cull = 0;
  SetUpClipPlane__12EClipContextP10EClipPlaneb(this->m_pcc,pPlane,false);
  return;
}

void EPortalWindow::Reset() {
  *(undefined4 *)&this->m_viewNeedsSettingUp = 1;
  return;
}

void EPortalWindow::CopyPlaneList(EPortalDef &portal, EClipPlaneList &src, EClipPlaneList &dest) {
	EClipPlane *pOldPlane;
	EClipPlane *pNewPlane;
	EMat4 &mRight;
	EMat4 &mRight;
	EVec3 vTemp;
	EVec3 &v;
	void *pNode;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  EClipPlane *pEVar5;
  ulong *puVar6;
  EClipPlane *pPlane;
  ulong uVar7;
  ulong uVar8;
  EClipPlane *pEVar9;
  EClipPlane *pEVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  EVec3 vTemp;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar5 = src->m_pHead; pEVar5 != (EClipPlane *)0x0; pEVar5 = pEVar5->pNext) {
    pPlane = (EClipPlane *)_allocBucketAlloc__FUiUi(0x50,0x1b);
                    /* end of inlined section */
    uVar7 = 1;
    do {
      bVar2 = uVar7 != 0xffffffffffffffff;
      uVar7 = (ulong)((int)uVar7 + -1);
    } while (bVar2);
                    /* end of inlined section */
    pEVar10 = pEVar5;
    pEVar9 = pPlane;
    do {
      puVar1 = (undefined *)((int)&pEVar10->vCorners[0].field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)pEVar10 & 7;
      uVar7 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)pEVar10 - uVar4) >> uVar4 * 8;
      fVar11 = pEVar10->vCorners[0].field0_0x0.d[2];
      puVar1 = (undefined *)((int)&pEVar9->vCorners[0].field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
      uVar3 = (uint)pEVar9 & 7;
      *(ulong *)((int)pEVar9 - uVar3) =
           uVar7 << uVar3 * 8 |
           *(ulong *)((int)pEVar9 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      pEVar9->vCorners[0].field0_0x0.d[2] = fVar11;
      pEVar10 = (EClipPlane *)(pEVar10->vCorners + 1);
      if ((portal->flags & 2) != 0) {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
        fVar13 = pEVar9->vCorners[0].field0_0x0.d[1];
        fVar12 = pEVar9->vCorners[0].field0_0x0.d[0];
        fVar16 = (portal->mReOrient).field0_0x0.d[1][2];
        fVar15 = (portal->mReOrient).field0_0x0.d[2];
        fVar11 = pEVar9->vCorners[0].field0_0x0.d[2];
        fVar17 = (portal->mReOrient).field0_0x0.d[2][2];
        fVar14 = (portal->mReOrient).field0_0x0.d[3][2];
        uVar7 = CONCAT44(fVar12 * (portal->mReOrient).field0_0x0.d[1] +
                         fVar13 * (portal->mReOrient).field0_0x0.d[1][1] +
                         fVar11 * (portal->mReOrient).field0_0x0.d[2][1] +
                         (portal->mReOrient).field0_0x0.d[3][1],
                         fVar12 * (portal->mReOrient).field0_0x0.d[0] +
                         fVar13 * (portal->mReOrient).field0_0x0.d[1][0] +
                         fVar11 * (portal->mReOrient).field0_0x0.d[2][0] +
                         (portal->mReOrient).field0_0x0.d[3][0]);
        puVar1 = (undefined *)((int)&pEVar9->vCorners[0].field0_0x0 + 7);
        uVar3 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar3);
        *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
        uVar3 = (uint)pEVar9 & 7;
        *(ulong *)((int)pEVar9 - uVar3) =
             uVar7 << uVar3 * 8 |
             *(ulong *)((int)pEVar9 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
        pEVar9->vCorners[0].field0_0x0.d[2] =
             fVar12 * fVar15 + fVar13 * fVar16 + fVar11 * fVar17 + fVar14;
      }
                    /* end of inlined section */
      uVar7 = (ulong)((int)pEVar10 < (int)&pEVar5->field_0x24);
      pEVar9 = (EClipPlane *)(pEVar9->vCorners + 1);
    } while (uVar7 != 0);
    if ((portal->flags & 1) != 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      uVar7 = *(ulong *)&pPlane->vCorners[1].field0_0x0;
      fVar12 = pPlane->vCorners[1].field0_0x0.d[2];
      puVar1 = (undefined *)((int)&pPlane->vCorners[2].field0_0x0 + 7);
                    /* end of inlined section */
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)(pPlane->vCorners + 2) & 7;
      uVar8 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
              (long)(int)(pPlane->vCorners + 1) & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
              -1L << (8 - uVar4) * 8 | *(ulong *)((int)(pPlane->vCorners + 2) - uVar4) >> uVar4 * 8;
      fVar11 = pPlane->vCorners[2].field0_0x0.d[2];
      puVar1 = (undefined *)((int)&pPlane->vCorners[1].field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
      uVar3 = (uint)(pPlane->vCorners + 1) & 7;
      puVar6 = (ulong *)((int)(pPlane->vCorners + 1) - uVar3);
      *puVar6 = uVar8 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      pPlane->vCorners[1].field0_0x0.d[2] = fVar11;
      puVar1 = (undefined *)((int)&pPlane->vCorners[2].field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar6 = (ulong *)(puVar1 + -uVar3);
      *puVar6 = *puVar6 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
      uVar3 = (uint)(pPlane->vCorners + 2) & 7;
      puVar6 = (ulong *)((int)(pPlane->vCorners + 2) - uVar3);
      *puVar6 = uVar7 << uVar3 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      pPlane->vCorners[2].field0_0x0.d[2] = fVar12;
    }
    *(undefined4 *)&pPlane->cull = *(undefined4 *)&pEVar5->cull;
    SetUpClipPlane__12EClipContextP10EClipPlaneb
              (this->m_pcc,pPlane,dest == &this->m_pcc->m_clipPlaneList);
  }
  return;
}

bool EPortalWindow::NearClipPoly(EVec3 *vIn, int inSides, EVec3 *vOut, int &outSides, int parentVis) {
	EVec4 &vPlane;
	unsigned int flags[7];
	u32 andFlags;
	u32 orFlags;
	int i;
	u32 behind;
	EVec4 *this;
	int inVertPos;
	u32 flag;
	u32 nextFlag;
	EVec4 *this;
	EVec3 *this;
	EVec3 &vPlaneNormal;
	EVec3 &vPointOnLine1;
	EVec3 &vPointOnLine2;
	EVec3 vLineDirection;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 &v;
	EVec3 &v;
	EVec3 *this;
	int i;
	
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  EClipPlane *pEVar4;
  ulong *puVar5;
  EVec3 *pEVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong in_t3;
  EVec3 *pEVar15;
  undefined8 unaff_s0;
  EVec4 *pEVar16;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  uint uVar17;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar18;
  uint flags [7];
  EVec3 vLineDirection;
  float local_d0;
  float local_cc;
  float local_c8;
  int local_c0;
  int local_b0;
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
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar14 = (ulong)(int)outSides;
  lVar13 = (long)(int)vOut;
  puVar11 = flags;
  local_60 = (int)unaff_s4;
  uStack_5c = (int)((ulong)unaff_s4 >> 0x20);
  local_70 = (int)unaff_s3;
  uStack_6c = (int)((ulong)unaff_s3 >> 0x20);
  local_80 = (int)unaff_s2;
  uStack_7c = (int)((ulong)unaff_s2 >> 0x20);
  local_10 = (int)unaff_retaddr;
  uStack_c = (int)((ulong)unaff_retaddr >> 0x20);
  local_20 = (int)unaff_s8;
  uStack_1c = (int)((ulong)unaff_s8 >> 0x20);
  local_30 = (int)unaff_s7;
  uStack_2c = (int)((ulong)unaff_s7 >> 0x20);
  local_40 = (int)unaff_s6;
  uStack_3c = (int)((ulong)unaff_s6 >> 0x20);
  local_50 = (int)unaff_s5;
  uStack_4c = (int)((ulong)unaff_s5 >> 0x20);
  local_90 = (int)unaff_s1;
  uStack_8c = (int)((ulong)unaff_s1 >> 0x20);
  local_a0 = (int)unaff_s0;
  uStack_9c = (int)((ulong)unaff_s0 >> 0x20);
  if ((parentVis & 1U) != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    uVar12 = 1;
    uVar17 = 0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar4 = (this->m_pcc->m_clipPlaneList).m_pHead;
                    /* end of inlined section */
    pEVar16 = &pEVar4->vPlane;
    pEVar6 = vIn;
    iVar10 = inSides;
    if (0 < inSides) {
      do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        uVar8 = (uint)((pEVar16->field0_0x0).d[0] * (pEVar6->field0_0x0).d[0] +
                       (pEVar4->vPlane).field0_0x0.d[1] * (pEVar6->field0_0x0).d[1] +
                       (pEVar4->vPlane).field0_0x0.d[2] * (pEVar6->field0_0x0).d[2] +
                       (pEVar4->vPlane).field0_0x0.d[3] < 0.0);
        *puVar11 = uVar8;
        uVar17 = uVar17 | uVar8;
        uVar12 = uVar12 & uVar8;
        puVar11 = puVar11 + 1;
        iVar10 = iVar10 + -1;
        pEVar6 = pEVar6 + 1;
      } while (iVar10 != 0);
    }
    if (uVar12 != 0) {
      return false;
    }
    if (uVar17 != 0) {
      *outSides = 0;
      if (inSides < 1) {
        return true;
      }
      iVar7 = 1;
      iVar10 = 0;
      do {
        iVar2 = iVar7 % inSides;
        local_c0 = iVar7;
        if (inSides == 0) {
          trap(7);
        }
        uVar17 = flags[iVar10];
        uVar12 = flags[iVar2];
        local_b0 = (int)lVar13;
        if (uVar17 == 0) {
          iVar7 = *outSides;
          pEVar6 = vIn + iVar10;
          uVar9 = iVar7 * 0xc + local_b0;
          puVar1 = (undefined *)((int)&pEVar6->field0_0x0 + 7);
          uVar8 = (uint)puVar1 & 7;
          uVar3 = (uint)pEVar6 & 7;
          in_t3 = (*(long *)(puVar1 + -uVar8) << (7 - uVar8) * 8 |
                  in_t3 & 0xffffffffffffffffU >> (uVar8 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                  *(ulong *)((int)pEVar6 - uVar3) >> uVar3 * 8;
          fVar18 = (pEVar6->field0_0x0).d[2];
          uVar8 = uVar9 + 7 & 7;
          puVar5 = (ulong *)((uVar9 + 7) - uVar8);
          *puVar5 = *puVar5 & -1L << (uVar8 + 1) * 8 | in_t3 >> (7 - uVar8) * 8;
          uVar8 = uVar9 & 7;
          *(ulong *)(uVar9 - uVar8) =
               in_t3 << uVar8 * 8 |
               *(ulong *)(uVar9 - uVar8) & 0xffffffffffffffffU >> (8 - uVar8) * 8;
          *(float *)(uVar9 + 8) = fVar18;
          *outSides = iVar7 + 1;
        }
        if (uVar17 != uVar12) {
                    /* end of inlined section */
          iVar7 = *outSides;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          pEVar15 = vIn + iVar10;
          pEVar6 = vIn + iVar2;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
          *outSides = iVar7 + 1;
          vLineDirection.field0_0x0.d[2] = (pEVar6->field0_0x0).d[2] - (pEVar15->field0_0x0).d[2];
          vLineDirection.field0_0x0.d[1] = (pEVar6->field0_0x0).d[1] - (pEVar15->field0_0x0).d[1];
          vLineDirection.field0_0x0.d[0] = (pEVar6->field0_0x0).d[0] - (pEVar15->field0_0x0).d[0];
          fVar18 = (pEVar16->field0_0x0).d[0] * vLineDirection.field0_0x0.d[0] +
                   (pEVar4->vPlane).field0_0x0.d[1] * vLineDirection.field0_0x0.d[1] +
                   (pEVar4->vPlane).field0_0x0.d[2] * vLineDirection.field0_0x0.d[2];
          uVar17 = iVar7 * 0xc + local_b0;
          if (fVar18 == 0.0) {
            puVar1 = (undefined *)((int)&pEVar15->field0_0x0 + 7);
            uVar12 = (uint)puVar1 & 7;
            uVar8 = (uint)pEVar15 & 7;
            uVar14 = (*(long *)(puVar1 + -uVar12) << (7 - uVar12) * 8 |
                     (long)iVar2 & 0xffffffffffffffffU >> (uVar12 + 1) * 8) & -1L << (8 - uVar8) * 8
                     | *(ulong *)((int)pEVar15 - uVar8) >> uVar8 * 8;
            fVar18 = (pEVar15->field0_0x0).d[2];
            uVar12 = uVar17 + 7 & 7;
            puVar5 = (ulong *)((uVar17 + 7) - uVar12);
            *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 | uVar14 >> (7 - uVar12) * 8;
            uVar12 = uVar17 & 7;
            *(ulong *)(uVar17 - uVar12) =
                 uVar14 << uVar12 * 8 |
                 *(ulong *)(uVar17 - uVar12) & 0xffffffffffffffffU >> (8 - uVar12) * 8;
            *(float *)(uVar17 + 8) = fVar18;
          }
          else {
            uStack_ac = (undefined4)((ulong)lVar13 >> 0x20);
            __ml__FfRC5EVec3((EVec3 *)&local_d0,
                             ((pEVar4->vCorners[0].field0_0x0.d[0] - (pEVar15->field0_0x0).d[0]) *
                              (pEVar16->field0_0x0).d[0] +
                              (pEVar4->vCorners[0].field0_0x0.d[1] - (pEVar15->field0_0x0).d[1]) *
                              (pEVar4->vPlane).field0_0x0.d[1] +
                             (pEVar4->vCorners[0].field0_0x0.d[2] - (pEVar15->field0_0x0).d[2]) *
                             (pEVar4->vPlane).field0_0x0.d[2]) / fVar18,&vLineDirection);
            fVar18 = (pEVar15->field0_0x0).d[2];
            uVar14 = CONCAT44((pEVar15->field0_0x0).d[1] + local_cc,
                              (pEVar15->field0_0x0).d[0] + local_d0);
            uVar12 = uVar17 + 7 & 7;
            puVar5 = (ulong *)((uVar17 + 7) - uVar12);
            *puVar5 = *puVar5 & -1L << (uVar12 + 1) * 8 | uVar14 >> (7 - uVar12) * 8;
            uVar12 = uVar17 & 7;
            *(ulong *)(uVar17 - uVar12) =
                 uVar14 << uVar12 * 8 |
                 *(ulong *)(uVar17 - uVar12) & 0xffffffffffffffffU >> (8 - uVar12) * 8;
            *(float *)(uVar17 + 8) = fVar18 + local_c8;
            lVar13 = CONCAT44(uStack_ac,local_b0);
          }
        }
                    /* end of inlined section */
        iVar7 = local_c0 + 1;
        iVar10 = local_c0;
      } while (local_c0 < inSides);
      return true;
    }
  }
  *outSides = inSides;
  if (0 < inSides) {
    do {
      puVar1 = (undefined *)((int)&vIn->field0_0x0 + 7);
      uVar17 = (uint)puVar1 & 7;
      uVar12 = (uint)vIn & 7;
      uVar14 = (*(long *)(puVar1 + -uVar17) << (7 - uVar17) * 8 |
               uVar14 & 0xffffffffffffffffU >> (uVar17 + 1) * 8) & -1L << (8 - uVar12) * 8 |
               *(ulong *)((int)vIn - uVar12) >> uVar12 * 8;
      fVar18 = (vIn->field0_0x0).d[2];
      uVar12 = (uint)lVar13;
      uVar17 = uVar12 + 7 & 7;
      puVar5 = (ulong *)((uVar12 + 7) - uVar17);
      *puVar5 = *puVar5 & -1L << (uVar17 + 1) * 8 | uVar14 >> (7 - uVar17) * 8;
      uVar17 = uVar12 & 7;
      *(ulong *)(uVar12 - uVar17) =
           uVar14 << uVar17 * 8 |
           *(ulong *)(uVar12 - uVar17) & 0xffffffffffffffffU >> (8 - uVar17) * 8;
      inSides = inSides + -1;
      *(float *)(uVar12 + 8) = fVar18;
      lVar13 = (long)(int)(uVar12 + 0xc);
      vIn = vIn + 1;
    } while (inSides != 0);
  }
  return true;
}

bool EPortalWindow::PushPortal(EPortalDef &portal, bool testBackCullingAndVisibility, u32 parentVis) {
	EVec3 vClippedVerts[7];
	EVec3 *vVerts;
	int nSides;
	EClipContext *plc;
	EClipOccluder *pOccluder;
	EVec3 &vLeft;
	EMat4 &mRight;
	EMat4 &mRight;
	EVec3 &vLeft;
	EVec3 &vLeft;
	EVec3 &vLeft;
	EVec3 &vLeft;
	EVec3 &vLeft;
	EVec3 vtp[7];
	int i;
	EMat4 &mRight;
	EOccluderDef occluder;
	int i;
	EMat4 &mRight;
	void *pNode;
	
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  EClipContext *pEVar4;
  EClipContext *pEVar5;
  EClipContext *pEVar6;
  EWindow__vtable *pEVar7;
  ulong *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  float (*paafVar12) [4] [4];
  ulong uVar13;
  undefined *puVar14;
  EClipOccluder *pEVar15;
  EOccluderDef *pEVar16;
  ulong uVar17;
  EPortalDef *vCorners;
  EClipOccluder *occluder_00;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  EMat4 *m;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  EVec3 vClippedVerts [7];
  EOccluderDef occluder;
  EMat4 EStack_e0;
  int nSides;
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
  
  uVar13 = (ulong)(int)parentVis;
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  uVar17 = uVar13;
  if (*(int *)&this->m_viewNeedsSettingUp != 0) {
    SetupView__13EPortalWindow(this);
  }
                    /* end of inlined section */
  iVar10 = 5;
  do {
    bVar9 = iVar10 != -1;
    iVar10 = iVar10 + -1;
  } while (bVar9);
  if (testBackCullingAndVisibility) {
    bVar9 = NearClipPoly__13EPortalWindowPC5EVec3iP5EVec3Rii
                      (this,portal->vCorners,portal->nCorners,vClippedVerts,&nSides,parentVis);
    if (!bVar9) {
      return (bool)0;
    }
    bVar9 = TestBackCullingAndVisibility__13EPortalWindowPC5EVec3iUi
                      (this,vClippedVerts,nSides,parentVis);
    if (!bVar9) {
      return (bool)0;
    }
    iVar10 = this->m_nCurrentContext;
    uVar17 = uVar13;
    vCorners = (EPortalDef *)vClippedVerts;
  }
  else {
    nSides = portal->nCorners;
    iVar10 = this->m_nCurrentContext;
    vCorners = portal;
  }
  uVar13 = (ulong)iVar10;
  if (uVar13 == 0xf) {
    return false;
  }
  pEVar4 = this->m_pcc;
  this->m_nCurrentContext = iVar10 + 1;
  this->m_pcc = pEVar4 + 1;
  ResetCurrentContext__13EPortalWindow(this);
  pEVar5 = this->m_pcc;
  puVar14 = (undefined *)((int)&(pEVar4->m_vEye).field0_0x0 + 7);
  uVar11 = (uint)puVar14 & 7;
  uVar2 = (uint)pEVar4 & 7;
  uVar13 = (*(long *)(puVar14 + -uVar11) << (7 - uVar11) * 8 |
           uVar13 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar2) * 8 |
           *(ulong *)((int)pEVar4 - uVar2) >> uVar2 * 8;
  fVar18 = (pEVar4->m_vEye).field0_0x0.d[2];
  puVar14 = (undefined *)((int)&(pEVar5->m_vEye).field0_0x0 + 7);
  uVar11 = (uint)puVar14 & 7;
  puVar8 = (ulong *)(puVar14 + -uVar11);
  *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | uVar13 >> (7 - uVar11) * 8;
  uVar11 = (uint)pEVar5 & 7;
  *(ulong *)((int)pEVar5 - uVar11) =
       uVar13 << uVar11 * 8 |
       *(ulong *)((int)pEVar5 - uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  (pEVar5->m_vEye).field0_0x0.d[2] = fVar18;
  pEVar5 = this->m_pcc;
  puVar14 = (undefined *)((int)&(pEVar4->m_vFrustCenter).field0_0x0 + 7);
  uVar11 = (uint)puVar14 & 7;
  uVar2 = (uint)&pEVar4->m_vFrustCenter & 7;
  uVar17 = (*(long *)(puVar14 + -uVar11) << (7 - uVar11) * 8 |
           uVar17 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar2) * 8 |
           *(ulong *)((int)&pEVar4->m_vFrustCenter - uVar2) >> uVar2 * 8;
  fVar18 = (pEVar4->m_vFrustCenter).field0_0x0.d[2];
  puVar14 = (undefined *)((int)&(pEVar5->m_vFrustCenter).field0_0x0 + 7);
  uVar11 = (uint)puVar14 & 7;
  puVar8 = (ulong *)(puVar14 + -uVar11);
  *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | uVar17 >> (7 - uVar11) * 8;
  uVar11 = (uint)&pEVar5->m_vFrustCenter & 7;
  puVar8 = (ulong *)((int)&pEVar5->m_vFrustCenter - uVar11);
  *puVar8 = uVar17 << uVar11 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  (pEVar5->m_vFrustCenter).field0_0x0.d[2] = fVar18;
  pEVar6 = this->m_pcc;
  puVar14 = (undefined *)((int)&(pEVar4->m_vFrustCorner).field0_0x0 + 7);
  uVar11 = (uint)puVar14 & 7;
  uVar2 = (uint)&pEVar4->m_vFrustCorner & 7;
  uVar17 = (*(long *)(puVar14 + -uVar11) << (7 - uVar11) * 8 |
           (long)(int)pEVar5 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar2) * 8 |
           *(ulong *)((int)&pEVar4->m_vFrustCorner - uVar2) >> uVar2 * 8;
  fVar18 = (pEVar4->m_vFrustCorner).field0_0x0.d[2];
  puVar14 = (undefined *)((int)&(pEVar6->m_vFrustCorner).field0_0x0 + 7);
  uVar11 = (uint)puVar14 & 7;
  puVar8 = (ulong *)(puVar14 + -uVar11);
  *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | uVar17 >> (7 - uVar11) * 8;
  uVar11 = (uint)&pEVar6->m_vFrustCorner & 7;
  puVar8 = (ulong *)((int)&pEVar6->m_vFrustCorner - uVar11);
  *puVar8 = uVar17 << uVar11 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  (pEVar6->m_vFrustCorner).field0_0x0.d[2] = fVar18;
  this->m_pcc->m_frustOuterRadius = pEVar4->m_frustOuterRadius;
  if ((portal->flags & 1) == 0) {
    uVar11 = *(uint *)&pEVar4->m_reverseCulling;
  }
  else {
    uVar11 = *(uint *)&pEVar4->m_reverseCulling ^ 1;
  }
  *(uint *)&this->m_pcc->m_reverseCulling = uVar11;
  if ((portal->flags & 2) != 0) {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    pEVar5 = this->m_pcc;
    fVar22 = (pEVar5->m_vEye).field0_0x0.d[1];
    fVar18 = (pEVar5->m_vEye).field0_0x0.d[0];
    fVar20 = (portal->mReOrient).field0_0x0.d[1][2];
    fVar19 = (portal->mReOrient).field0_0x0.d[2];
    fVar24 = (pEVar5->m_vEye).field0_0x0.d[2];
    fVar21 = (portal->mReOrient).field0_0x0.d[2][2];
    fVar23 = (portal->mReOrient).field0_0x0.d[3][2];
    uVar17 = CONCAT44(fVar18 * (portal->mReOrient).field0_0x0.d[1] +
                      fVar22 * (portal->mReOrient).field0_0x0.d[1][1] +
                      fVar24 * (portal->mReOrient).field0_0x0.d[2][1] +
                      (portal->mReOrient).field0_0x0.d[3][1],
                      fVar18 * (portal->mReOrient).field0_0x0.d[0] +
                      fVar22 * (portal->mReOrient).field0_0x0.d[1][0] +
                      fVar24 * (portal->mReOrient).field0_0x0.d[2][0] +
                      (portal->mReOrient).field0_0x0.d[3][0]);
    puVar14 = (undefined *)((int)&(pEVar5->m_vEye).field0_0x0 + 7);
    uVar11 = (uint)puVar14 & 7;
    puVar8 = (ulong *)(puVar14 + -uVar11);
    *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | uVar17 >> (7 - uVar11) * 8;
    uVar11 = (uint)pEVar5 & 7;
    *(ulong *)((int)pEVar5 - uVar11) =
         uVar17 << uVar11 * 8 |
         *(ulong *)((int)pEVar5 - uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    (pEVar5->m_vEye).field0_0x0.d[2] = fVar18 * fVar19 + fVar22 * fVar20 + fVar24 * fVar21 + fVar23;
    pEVar5 = this->m_pcc;
    fVar18 = (pEVar5->m_vFrustCenter).field0_0x0.d[0];
    fVar22 = (pEVar5->m_vFrustCenter).field0_0x0.d[1];
    fVar19 = (portal->mReOrient).field0_0x0.d[2];
    fVar24 = (portal->mReOrient).field0_0x0.d[1][2];
    fVar21 = (pEVar5->m_vFrustCenter).field0_0x0.d[2];
    fVar20 = (portal->mReOrient).field0_0x0.d[2][2];
    fVar23 = (portal->mReOrient).field0_0x0.d[3][2];
    uVar17 = CONCAT44(fVar18 * (portal->mReOrient).field0_0x0.d[1] +
                      fVar22 * (portal->mReOrient).field0_0x0.d[1][1] +
                      fVar21 * (portal->mReOrient).field0_0x0.d[2][1] +
                      (portal->mReOrient).field0_0x0.d[3][1],
                      fVar18 * (portal->mReOrient).field0_0x0.d[0] +
                      fVar22 * (portal->mReOrient).field0_0x0.d[1][0] +
                      fVar21 * (portal->mReOrient).field0_0x0.d[2][0] +
                      (portal->mReOrient).field0_0x0.d[3][0]);
    puVar14 = (undefined *)((int)&(pEVar5->m_vFrustCenter).field0_0x0 + 7);
    uVar11 = (uint)puVar14 & 7;
    puVar8 = (ulong *)(puVar14 + -uVar11);
    *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | uVar17 >> (7 - uVar11) * 8;
    uVar11 = (uint)&pEVar5->m_vFrustCenter & 7;
    puVar8 = (ulong *)((int)&pEVar5->m_vFrustCenter - uVar11);
    *puVar8 = uVar17 << uVar11 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    (pEVar5->m_vFrustCenter).field0_0x0.d[2] =
         fVar18 * fVar19 + fVar22 * fVar24 + fVar21 * fVar20 + fVar23;
    pEVar5 = this->m_pcc;
    fVar19 = (pEVar5->m_vFrustCorner).field0_0x0.d[1];
    fVar18 = (pEVar5->m_vFrustCorner).field0_0x0.d[0];
    fVar20 = (pEVar5->m_vFrustCorner).field0_0x0.d[2];
    occluder.vCorners[0].field0_0x0._8_4_ =
         fVar18 * (portal->mReOrient).field0_0x0.d[2] +
         fVar19 * (portal->mReOrient).field0_0x0.d[1][2] +
         fVar20 * (portal->mReOrient).field0_0x0.d[2][2] + (portal->mReOrient).field0_0x0.d[3][2];
    occluder.vCorners[0].field0_0x0._0_4_ =
         fVar18 * (portal->mReOrient).field0_0x0.d[0] +
         fVar19 * (portal->mReOrient).field0_0x0.d[1][0] +
         fVar20 * (portal->mReOrient).field0_0x0.d[2][0] + (portal->mReOrient).field0_0x0.d[3][0];
    occluder.vCorners[0].field0_0x0._4_4_ =
         fVar18 * (portal->mReOrient).field0_0x0.d[1] +
         fVar19 * (portal->mReOrient).field0_0x0.d[1][1] +
         fVar20 * (portal->mReOrient).field0_0x0.d[2][1] + (portal->mReOrient).field0_0x0.d[3][1];
    puVar14 = (undefined *)((int)&(pEVar5->m_vFrustCorner).field0_0x0 + 7);
    uVar11 = (uint)puVar14 & 7;
    puVar8 = (ulong *)(puVar14 + -uVar11);
    *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 |
              CONCAT44(occluder.vCorners[0].field0_0x0._4_4_,occluder.vCorners[0].field0_0x0._0_4_)
              >> (7 - uVar11) * 8;
    uVar11 = (uint)&pEVar5->m_vFrustCorner & 7;
    puVar8 = (ulong *)((int)&pEVar5->m_vFrustCorner - uVar11);
    *puVar8 = CONCAT44(occluder.vCorners[0].field0_0x0._4_4_,occluder.vCorners[0].field0_0x0._0_4_)
              << uVar11 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
    (pEVar5->m_vFrustCorner).field0_0x0.d[2] = occluder.vCorners[0].field0_0x0._8_4_;
                    /* end of inlined section */
    CalcOuterRadius__12EClipContext(this->m_pcc);
  }
  CopyPlaneList__13EPortalWindowRC10EPortalDefRt11TLinkedList3Z10EClipPlaneUi68Ui72T2
            (this,portal,&pEVar4->m_clipPlaneList,&this->m_pcc->m_clipPlaneList);
  CopyPlaneList__13EPortalWindowRC10EPortalDefRt11TLinkedList3Z10EClipPlaneUi68Ui72T2
            (this,portal,&pEVar4->m_portalPlaneList,&this->m_pcc->m_portalPlaneList);
  if ((portal->flags & 2) == 0) {
    AddClipPlanes__12EClipContextPC5EVec3ibT1
              (this->m_pcc,vCorners->vCorners,nSides,false,(EVec3 *)0x0);
    *(undefined4 *)&this->m_pcc->m_reoriented = 0;
  }
  else {
    m = &(this->field0_0x0).m_mLookAt;
                    /* end of inlined section */
    iVar10 = 5;
    do {
      bVar9 = iVar10 != -1;
      iVar10 = iVar10 + -1;
    } while (bVar9);
    iVar10 = 0;
    if (0 < nSides) {
      puVar14 = (undefined *)((int)&occluder.vCorners[1].field0_0x0 + 4);
      do {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
        fVar19 = vCorners->vCorners[0].field0_0x0.d[1];
                    /* end of inlined section */
        iVar10 = iVar10 + 1;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
        fVar18 = vCorners->vCorners[0].field0_0x0.d[0];
        fVar20 = vCorners->vCorners[0].field0_0x0.d[2];
                    /* end of inlined section */
        vCorners = (EPortalDef *)(vCorners->vCorners + 1);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
        occluder.vCorners[0].field0_0x0._8_4_ =
             fVar18 * (portal->mReOrient).field0_0x0.d[2] +
             fVar19 * (portal->mReOrient).field0_0x0.d[1][2] +
             fVar20 * (portal->mReOrient).field0_0x0.d[2][2] +
             (portal->mReOrient).field0_0x0.d[3][2];
        occluder.vCorners[0].field0_0x0._0_4_ =
             fVar18 * (portal->mReOrient).field0_0x0.d[0] +
             fVar19 * (portal->mReOrient).field0_0x0.d[1][0] +
             fVar20 * (portal->mReOrient).field0_0x0.d[2][0] +
             (portal->mReOrient).field0_0x0.d[3][0];
        occluder.vCorners[0].field0_0x0._4_4_ =
             fVar18 * (portal->mReOrient).field0_0x0.d[1] +
             fVar19 * (portal->mReOrient).field0_0x0.d[1][1] +
             fVar20 * (portal->mReOrient).field0_0x0.d[2][1] +
             (portal->mReOrient).field0_0x0.d[3][1];
                    /* end of inlined section */
        uVar17 = CONCAT44(occluder.vCorners[0].field0_0x0._4_4_,
                          occluder.vCorners[0].field0_0x0._0_4_);
        puVar1 = puVar14 + 7;
        uVar11 = (uint)puVar1 & 7;
        *(ulong *)(puVar1 + -uVar11) =
             *(ulong *)(puVar1 + -uVar11) & -1L << (uVar11 + 1) * 8 | uVar17 >> (7 - uVar11) * 8;
        uVar11 = (uint)puVar14 & 7;
        *(ulong *)(puVar14 + -uVar11) =
             uVar17 << uVar11 * 8 |
             *(ulong *)(puVar14 + -uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
        *(float *)(puVar14 + 8) = occluder.vCorners[0].field0_0x0._8_4_;
        puVar14 = puVar14 + 0xc;
      } while (iVar10 < nSides);
    }
    AddClipPlanes__12EClipContextPC5EVec3ibT1
              (this->m_pcc,(EVec3 *)((int)&occluder.vCorners[1].field0_0x0 + 4),nSides,false,
               (EVec3 *)0x0);
    __as__5EMat4RC5EMat4(&this->m_pcc[-1].m_mLookAt,m);
    pEVar7 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
    sVar3 = *(short *)&pEVar7[3].EWindow;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    paafVar12 = __opRA3_A3_f__5EMat4(&EStack_e0);
    sceVu0MulMatrix(paafVar12,m,&portal->mReOrient);
                    /* end of inlined section */
    (*(code *)pEVar7[3].Select)
              ((int)&(this->field0_0x0).field0_0x0.m_mWindow.field0_0x0 + (int)sVar3,&EStack_e0);
    *(undefined4 *)&this->m_viewNeedsSettingUp = 0;
    *(undefined4 *)&this->m_pcc->m_reoriented = 1;
  }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  occluder_00 = (pEVar4->m_occluderList).m_pHead;
                    /* end of inlined section */
  if (occluder_00 != (EClipOccluder *)0x0) {
                    /* inlined from c:/eor/src2/engine/window/e_portalwindow.h */
    uVar11 = portal->flags;
    while( true ) {
                    /* end of inlined section */
      for (iVar10 = 4; iVar10 != -1; iVar10 = iVar10 + -1) {
      }
      iVar10 = 0;
      if ((uVar11 & 2) == 0) {
        AddOccluder__13EPortalWindowRC12EOccluderDefbUi(this,&occluder_00->o,true,0x15);
                    /* end of inlined section */
        occluder_00 = occluder_00->pNext;
      }
      else {
        occluder.nCorners = *(int *)&occluder_00->o;
        pEVar15 = occluder_00;
        pEVar16 = &occluder;
        if (0 < *(int *)&occluder_00->o) {
          do {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
            fVar20 = (pEVar15->o).vCorners[0].field0_0x0.d[1];
                    /* end of inlined section */
            iVar10 = iVar10 + 1;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
            fVar19 = (pEVar15->o).vCorners[0].field0_0x0.d[0];
            fVar23 = (portal->mReOrient).field0_0x0.d[1][2];
            fVar18 = (portal->mReOrient).field0_0x0.d[2];
            fVar22 = (pEVar15->o).vCorners[0].field0_0x0.d[2];
            fVar24 = (portal->mReOrient).field0_0x0.d[2][2];
            fVar21 = (portal->mReOrient).field0_0x0.d[3][2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
            uVar17 = CONCAT44(fVar19 * (portal->mReOrient).field0_0x0.d[1] +
                              fVar20 * (portal->mReOrient).field0_0x0.d[1][1] +
                              fVar22 * (portal->mReOrient).field0_0x0.d[2][1] +
                              (portal->mReOrient).field0_0x0.d[3][1],
                              fVar19 * (portal->mReOrient).field0_0x0.d[0] +
                              fVar20 * (portal->mReOrient).field0_0x0.d[1][0] +
                              fVar22 * (portal->mReOrient).field0_0x0.d[2][0] +
                              (portal->mReOrient).field0_0x0.d[3][0]);
            puVar14 = (undefined *)((int)&pEVar16->vCorners[0].field0_0x0 + 7);
            uVar11 = (uint)puVar14 & 7;
            puVar8 = (ulong *)(puVar14 + -uVar11);
            *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | uVar17 >> (7 - uVar11) * 8;
            uVar11 = (uint)pEVar16 & 7;
            *(ulong *)((int)pEVar16 - uVar11) =
                 uVar17 << uVar11 * 8 |
                 *(ulong *)((int)pEVar16 - uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
            pEVar16->vCorners[0].field0_0x0.d[2] =
                 fVar19 * fVar18 + fVar20 * fVar23 + fVar22 * fVar24 + fVar21;
            pEVar15 = (EClipOccluder *)((pEVar15->o).vCorners + 1);
            pEVar16 = (EOccluderDef *)(pEVar16->vCorners + 1);
          } while (iVar10 < occluder.nCorners);
        }
        AddOccluder__13EPortalWindowRC12EOccluderDefbUi(this,&occluder,true,0x15);
        occluder_00 = occluder_00->pNext;
      }
      if (occluder_00 == (EClipOccluder *)0x0) break;
      uVar11 = portal->flags;
    }
  }
  return true;
}

void EPortalWindow::PopPortal() {
  int iVar1;
  EClipContext *pEVar2;
  EWindow__vtable *pEVar3;
  
  iVar1 = *(int *)&this->m_pcc->m_reoriented;
  ResetCurrentContext__13EPortalWindow(this);
  pEVar2 = this->m_pcc;
  this->m_pcc = pEVar2 + -1;
  this->m_nCurrentContext = this->m_nCurrentContext + -1;
  if (iVar1 != 0) {
    pEVar3 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar3[3].Select)
              ((int)&(this->field0_0x0).field0_0x0.m_mWindow.field0_0x0 +
               (int)*(short *)&pEVar3[3].EWindow,&pEVar2[-1].m_mLookAt);
  }
  return;
}

void EPortalWindow::CalcMirrorMatrix(EPortalDef &portal) {
	EVec3 vNormal;
	EVec3 vAxis;
	int axis;
	float angle;
	EVec3 vRotAxis;
	EMat4 mThere;
	EVec3 vScale;
	EMat4 mBack;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	int value;
	
  float (*paafVar1) [4] [4];
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  int iVar2;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  EVec3 vNormal;
  EVec3 vAxis;
  EVec3 vRotAxis;
  EMat4 mThere;
  EVec3 vScale;
  EMat4 mBack;
  EMat4 EStack_d0;
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
  
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar8 = portal->vCorners[1].field0_0x0.d[0];
  fVar5 = portal->vCorners[1].field0_0x0.d[1] - portal->vCorners[0].field0_0x0.d[1];
  fVar7 = portal->vCorners[1].field0_0x0.d[2] - portal->vCorners[0].field0_0x0.d[2];
  fVar6 = fVar8 - portal->vCorners[0].field0_0x0.d[0];
  fVar8 = portal->vCorners[2].field0_0x0.d[0] - fVar8;
  fVar4 = portal->vCorners[2].field0_0x0.d[2] - portal->vCorners[1].field0_0x0.d[2];
  fVar3 = portal->vCorners[2].field0_0x0.d[1] - portal->vCorners[1].field0_0x0.d[1];
  vNormal.field0_0x0.d[1] = fVar7 * fVar8 - fVar6 * fVar4;
  vNormal.field0_0x0.d[0] = fVar5 * fVar4 - fVar7 * fVar3;
  vNormal.field0_0x0.d[2] = fVar6 * fVar3 - fVar5 * fVar8;
  fVar3 = sqrtf(vNormal.field0_0x0.d[0] * vNormal.field0_0x0.d[0] +
                vNormal.field0_0x0.d[1] * vNormal.field0_0x0.d[1] +
                vNormal.field0_0x0.d[2] * vNormal.field0_0x0.d[2]);
  if (fVar3 != 0.0) {
    fVar3 = 1.0 / fVar3;
    vNormal.field0_0x0.d[0] = vNormal.field0_0x0.d[0] * fVar3;
    vNormal.field0_0x0.d[2] = vNormal.field0_0x0.d[2] * fVar3;
    vNormal.field0_0x0.d[1] = vNormal.field0_0x0.d[1] * fVar3;
  }
  fVar4 = 1.0;
                    /* end of inlined section */
  iVar2 = 2;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vAxis.field0_0x0.d[1] = 0.0;
  vAxis.field0_0x0.d[2] = 1.0;
                    /* end of inlined section */
  fVar5 = acosf(vNormal.field0_0x0.d[0] * 0.0 + vNormal.field0_0x0.d[1] * 0.0 +
                vNormal.field0_0x0.d[2] * 1.0);
                    /* inlined from /eor/src2/common/e_standard_macros.h */
                    /* end of inlined section */
  fVar3 = fVar4;
  if (3.054327 < fVar5) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    iVar2 = 1;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vAxis.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
    fVar5 = acosf(vNormal.field0_0x0.d[0] * 0.0 + vNormal.field0_0x0.d[1] * fVar4);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    vAxis.field0_0x0.d[1] = fVar4;
  }
  vRotAxis.field0_0x0.d[0] =
       vNormal.field0_0x0.d[1] * vAxis.field0_0x0.d[2] -
       vNormal.field0_0x0.d[2] * vAxis.field0_0x0.d[1];
  vRotAxis.field0_0x0.d[1] =
       vNormal.field0_0x0.d[2] * 0.0 - vNormal.field0_0x0.d[0] * vAxis.field0_0x0.d[2];
  vRotAxis.field0_0x0.d[2] =
       vNormal.field0_0x0.d[0] * vAxis.field0_0x0.d[1] - vNormal.field0_0x0.d[1] * 0.0;
  fVar4 = sqrtf(vRotAxis.field0_0x0.d[0] * vRotAxis.field0_0x0.d[0] +
                vRotAxis.field0_0x0.d[1] * vRotAxis.field0_0x0.d[1] +
                vRotAxis.field0_0x0.d[2] * vRotAxis.field0_0x0.d[2]);
  if (fVar4 != 0.0) {
    fVar4 = fVar3 / fVar4;
    vRotAxis.field0_0x0.d[0] = vRotAxis.field0_0x0.d[0] * fVar4;
    vRotAxis.field0_0x0.d[2] = vRotAxis.field0_0x0.d[2] * fVar4;
    vRotAxis.field0_0x0.d[1] = vRotAxis.field0_0x0.d[1] * fVar4;
  }
                    /* end of inlined section */
  Rotate__5EMat4RC5EVec3f(&mThere,&vRotAxis,fVar5);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vScale.field0_0x0.d[0] = -portal->vCorners[0].field0_0x0.d[0];
  vScale.field0_0x0.d[1] = -portal->vCorners[0].field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vScale.field0_0x0.d[2] = -portal->vCorners[0].field0_0x0.d[2];
                    /* end of inlined section */
  PreTranslate__5EMat4RC5EVec3(&mThere,&vScale);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vScale.field0_0x0.d[1] = fVar3;
  vScale.field0_0x0.d[2] = fVar3;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  vScale.field0_0x0.d[iVar2] = -1.0;
  vScale.field0_0x0.d[0] = fVar3;
  PostScale__5EMat4RC5EVec3(&mThere,&vScale);
  Rotate__5EMat4RC5EVec3f(&mBack,&vRotAxis,-fVar5);
  PostTranslate__5EMat4RC5EVec3(&mBack,portal->vCorners);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  paafVar1 = __opRA3_A3_f__5EMat4(&EStack_d0);
  sceVu0MulMatrix(paafVar1,&mBack,&mThere);
                    /* end of inlined section */
  __as__5EMat4RC5EMat4(&portal->mReOrient,&EStack_d0);
  return;
}

bool EPortalWindow::TestBackCull(EVec3 *vCorners) {
	EVec4 vtp[3];
	int i;
	EVec3 &vIn;
	EVec4 &vOut;
	EVec3 &v;
	EVec4 &vOut;
	int i;
	int value;
	EVec4 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	EVec4 *this;
	
  bool bVar1;
  EMat4__null___1__1 *pEVar2;
  EMat4__null___1__1 *pEVar3;
  EMat4__null___1__1 *pEVar4;
  EMat4__null___1__1 *pEVar5;
  int iVar6;
  int iVar7;
  EVec3 *pEVar8;
  EMat4 *pEVar9;
  EVec4 *pEVar10;
  EVec4 *pEVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  EVec4 vtp [3];
  
                    /* end of inlined section */
  iVar6 = 1;
  do {
    bVar1 = iVar6 != -1;
    iVar6 = iVar6 + -1;
  } while (bVar1);
  iVar6 = 0;
  do {
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    iVar12 = 3;
                    /* end of inlined section */
    pEVar8 = vCorners + iVar6;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar15 = (pEVar8->field0_0x0).d[2];
                    /* end of inlined section */
    pEVar10 = vtp + iVar6;
                    /* inlined from /eor/src2/common/math/e_mat4.h */
    fVar13 = (pEVar8->field0_0x0).d[0];
    iVar7 = iVar6 + 1;
    fVar14 = (pEVar8->field0_0x0).d[1];
    pEVar9 = &(this->field0_0x0).m_mLookAtDotProjection;
    pEVar11 = pEVar10;
    do {
      pEVar2 = &pEVar9->field0_0x0;
      iVar12 = iVar12 + -1;
      pEVar3 = &pEVar9->field0_0x0;
      pEVar4 = &pEVar9->field0_0x0;
      pEVar5 = &pEVar9->field0_0x0;
      pEVar9 = (EMat4 *)((int)&pEVar9->field0_0x0 + 4);
      (pEVar11->field0_0x0).d[0] =
           fVar13 * pEVar2->d[0] + fVar14 * pEVar3->d[1][0] + fVar15 * pEVar4->d[2][0] +
           pEVar5->d[3][0];
      pEVar11 = (EVec4 *)((int)&pEVar11->field0_0x0 + 4);
    } while (-1 < iVar12);
                    /* end of inlined section */
    fVar13 = 1.0 / vtp[iVar6].field0_0x0.d[3];
    fVar15 = vtp[iVar6].field0_0x0.d[1];
    fVar14 = vtp[iVar6].field0_0x0.d[2];
    (pEVar10->field0_0x0).d[0] = (pEVar10->field0_0x0).d[0] * fVar13;
    vtp[iVar6].field0_0x0.d[2] = fVar14 * fVar13;
    vtp[iVar6].field0_0x0.d[1] = fVar15 * fVar13;
    iVar6 = iVar7;
  } while (iVar7 < 3);
                    /* end of inlined section */
  return 0.0 <= (vtp[1].field0_0x0._0_4_ - vtp[0].field0_0x0._0_4_) *
                (vtp[2].field0_0x0._4_4_ - vtp[1].field0_0x0._4_4_) -
                (vtp[1].field0_0x0._4_4_ - vtp[0].field0_0x0._4_4_) *
                (vtp[2].field0_0x0._0_4_ - vtp[1].field0_0x0._0_4_);
}

bool EPortalWindow::AddOccluder(EOccluderDef &occluder, bool testBackCullingAndVisibility, u32 parentVis) {
	EVec3 vClippedVerts[7];
	EVec3 *vVerts;
	int nSides;
	EClipOccluder *pOldOccluder;
	int i;
	EClipOccluder *pNext;
	bool occluded;
	EClipPlane *pPlane;
	int nPoints;
	void *pNode;
	int i;
	EVec4 *this;
	EVec3 &v;
	void *pNode;
	
  undefined *puVar1;
  EClipPlane **ppEVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  EClipOccluder *pEVar6;
  ulong *puVar7;
  bool bVar8;
  int iVar9;
  EClipOccluder *pOccluder;
  EVec3 *pEVar10;
  ulong uVar11;
  EClipPlane *pEVar12;
  EClipOccluder *pEVar13;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  EVec3 vClippedVerts [7];
  int nSides;
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
  
  local_30 = (undefined4)unaff_s3;
  uStack_2c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s2;
  uStack_3c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s1;
  uStack_4c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_60 = (undefined4)unaff_s0;
  uStack_5c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if (*(int *)&this->m_viewNeedsSettingUp != 0) {
    SetupView__13EPortalWindow(this);
  }
                    /* end of inlined section */
  iVar9 = 5;
  do {
    bVar8 = iVar9 != -1;
    iVar9 = iVar9 + -1;
  } while (bVar8);
  if (testBackCullingAndVisibility) {
    bVar8 = NearClipPoly__13EPortalWindowPC5EVec3iP5EVec3Rii
                      (this,occluder->vCorners,occluder->nCorners,vClippedVerts,&nSides,parentVis);
    if ((!bVar8) ||
       (bVar8 = TestBackCullingAndVisibility__13EPortalWindowPC5EVec3iUi
                          (this,vClippedVerts,nSides,parentVis),
       occluder = (EOccluderDef *)vClippedVerts, !bVar8)) {
      return false;
    }
  }
  else {
    nSides = occluder->nCorners;
  }
                    /* inlined from c:/eor/src2/engine/window/e_portalwindow.h */
  this->m_pcc->m_dataSize = 0;
  pOccluder = (EClipOccluder *)_allocBucketAlloc__FUiUi(0x60,0x2b);
                    /* end of inlined section */
  iVar9 = 4;
  do {
    bVar8 = iVar9 != -1;
    iVar9 = iVar9 + -1;
  } while (bVar8);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (pOccluder->planeList).m_pTail = (EClipPlane *)0x0;
  (pOccluder->planeList).m_pHead = (EClipPlane *)0x0;
                    /* end of inlined section */
  uVar11 = (ulong)nSides;
  (pOccluder->o).nCorners = nSides;
  iVar9 = 0;
  pEVar13 = pOccluder;
  if (0 < nSides) {
    do {
      puVar1 = (undefined *)((int)&occluder->vCorners[0].field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      uVar4 = (uint)occluder & 7;
      uVar11 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
               uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)occluder - uVar4) >> uVar4 * 8;
      fVar5 = occluder->vCorners[0].field0_0x0.d[2];
      puVar1 = (undefined *)((int)&(pEVar13->o).vCorners[0].field0_0x0 + 7);
      uVar3 = (uint)puVar1 & 7;
      puVar7 = (ulong *)(puVar1 + -uVar3);
      *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
      uVar3 = (uint)pEVar13 & 7;
      *(ulong *)((int)pEVar13 - uVar3) =
           uVar11 << uVar3 * 8 |
           *(ulong *)((int)pEVar13 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
      iVar9 = iVar9 + 1;
      (pEVar13->o).vCorners[0].field0_0x0.d[2] = fVar5;
      uVar11 = (ulong)(iVar9 < nSides);
      occluder = (EOccluderDef *)(occluder->vCorners + 1);
      pEVar13 = (EClipOccluder *)((pEVar13->o).vCorners + 1);
    } while (uVar11 != 0);
  }
  SetUpClipOccluder__13EPortalWindowP13EClipOccluder(this,pOccluder);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar13 = (this->m_pcc->m_occluderList).m_pHead;
                    /* end of inlined section */
  if (pEVar13 == pOccluder) {
    return true;
  }
                    /* end of inlined section */
  pEVar6 = pEVar13->pNext;
  do {
    bVar8 = true;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    pEVar12 = (pOccluder->planeList).m_pHead;
    do {
      ppEVar2 = &pEVar12->pNext;
      for (iVar9 = 0; iVar9 < (pEVar13->o).nCorners; iVar9 = iVar9 + 1) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        pEVar10 = (pEVar13->o).vCorners + iVar9;
                    /* end of inlined section */
        if (0.0 < (pEVar12->vPlane).field0_0x0.d[0] * (pEVar10->field0_0x0).d[0] +
                  (pEVar12->vPlane).field0_0x0.d[1] * (pEVar10->field0_0x0).d[1] +
                  (pEVar12->vPlane).field0_0x0.d[2] * (pEVar10->field0_0x0).d[2] +
                  (pEVar12->vPlane).field0_0x0.d[3]) {
          bVar8 = false;
          break;
        }
      }
                    /* end of inlined section */
      pEVar12 = *ppEVar2;
    } while (*ppEVar2 != (EClipPlane *)0x0);
    if (bVar8) {
      RemoveAndDeleteClipOccluder__12EClipContextP13EClipOccluder(this->m_pcc,pEVar13);
    }
    if (pEVar6 == pOccluder) {
      return true;
    }
    pEVar13 = pEVar6;
    pEVar6 = pEVar6->pNext;
  } while( true );
}

void EPortalWindow::PrepareForUse() {
	float *pd;
	EClipPlane *pPlane;
	EClipOccluder *pOccluder;
	EVec4 *this;
	void *pNode;
	EVec4 *this;
	void *pNode;
	EClipPlane *pOccluderPlane;
	EVec4 *this;
	void *pNode;
	void *pNode;
	
  EClipContext *pEVar1;
  float fVar2;
  uchar *puVar3;
  EClipPlane *pEVar4;
  EClipOccluder *pEVar5;
  float *pfVar6;
  
  if (*(int *)&this->m_viewNeedsSettingUp == 0) {
    pEVar1 = this->m_pcc;
  }
  else {
    SetupView__13EPortalWindow(this);
    pEVar1 = this->m_pcc;
  }
  pfVar6 = (float *)pEVar1->m_pData;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  for (pEVar4 = (pEVar1->m_clipPlaneList).m_pHead; pEVar4 != (EClipPlane *)0x0;
      pEVar4 = pEVar4->pNext) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    *pfVar6 = (pEVar4->vPlane).field0_0x0.d[0];
    pfVar6[1] = (pEVar4->vPlane).field0_0x0.d[1];
    pfVar6[2] = (pEVar4->vPlane).field0_0x0.d[2];
    pfVar6[3] = (pEVar4->vPlane).field0_0x0.d[3];
    pfVar6 = pfVar6 + 4;
                    /* end of inlined section */
  }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = this->m_pcc;
  pEVar4 = (pEVar1->m_portalPlaneList).m_pHead;
                    /* end of inlined section */
  if (pEVar4 == (EClipPlane *)0x0) {
    puVar3 = pEVar1->m_pData;
  }
  else {
    do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      *pfVar6 = (pEVar4->vPlane).field0_0x0.d[0];
      pfVar6[1] = (pEVar4->vPlane).field0_0x0.d[1];
      pfVar6[2] = (pEVar4->vPlane).field0_0x0.d[2];
      pfVar6[3] = (pEVar4->vPlane).field0_0x0.d[3];
                    /* end of inlined section */
      pEVar4 = pEVar4->pNext;
      pfVar6 = pfVar6 + 4;
    } while (pEVar4 != (EClipPlane *)0x0);
    pEVar1 = this->m_pcc;
    puVar3 = pEVar1->m_pData;
  }
  pEVar1->m_clipDataSize = (int)pfVar6 - (int)puVar3;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar5 = (this->m_pcc->m_occluderList).m_pHead;
                    /* end of inlined section */
  if (pEVar5 == (EClipOccluder *)0x0) {
    pEVar1 = this->m_pcc;
  }
  else {
    fVar2 = (float)pEVar5->nPlanes;
    while( true ) {
      *pfVar6 = fVar2;
      pfVar6 = pfVar6 + 1;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
      for (pEVar4 = (pEVar5->planeList).m_pHead; pEVar4 != (EClipPlane *)0x0; pEVar4 = pEVar4->pNext
          ) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        *pfVar6 = (pEVar4->vPlane).field0_0x0.d[0];
        pfVar6[1] = (pEVar4->vPlane).field0_0x0.d[1];
        pfVar6[2] = (pEVar4->vPlane).field0_0x0.d[2];
        pfVar6[3] = (pEVar4->vPlane).field0_0x0.d[3];
        pfVar6 = pfVar6 + 4;
                    /* end of inlined section */
      }
                    /* end of inlined section */
      pEVar5 = pEVar5->pNext;
      if (pEVar5 == (EClipOccluder *)0x0) break;
      fVar2 = (float)pEVar5->nPlanes;
    }
    pEVar1 = this->m_pcc;
  }
  pEVar1->m_dataSize = (int)pfVar6 - (int)pEVar1->m_pData;
  return;
}

u32 EPortalWindow::GetRootVisFlags() {
	u32 rootVis;
	
  EClipContext *pEVar1;
  uint uVar2;
  
  if (this->m_pcc->m_dataSize == 0) {
    PrepareForUse__13EPortalWindow(this);
    pEVar1 = this->m_pcc;
  }
  else {
    pEVar1 = this->m_pcc;
  }
  uVar2 = 9;
  if (pEVar1->m_nPortalPlanes != 0) {
    uVar2 = 5;
  }
  if (pEVar1->m_nOccluders == 0) {
    uVar2 = uVar2 | 0x20;
  }
  else {
    uVar2 = uVar2 | 0x10;
  }
  return uVar2;
}

u32 EPortalWindow::Test(EBoundSphere &sphere, u32 parentVis) {
	float negRadius;
	u32 visFlags;
	EVec3 *this;
	bool sphereTotalVis;
	EVec3 *this;
	EVec3 &v;
	bool portalTotalVis;
	EVec4 *pvClipPlane;
	int nPlanes;
	EVec4 *this;
	EVec3 &v;
	bool clipTotalVis;
	EVec4 *pvClipPlane;
	int nPlanes;
	EVec4 *this;
	EVec3 &v;
	bool occludeTotalVis;
	u32 *pnPlanes;
	int nOccluders;
	bool passedAllPlanes;
	bool notFailedAnyPlane;
	int nPlanes;
	EVec4 *pvClipPlane;
	EVec4 *this;
	EVec3 &v;
	
  bool bVar1;
  bool bVar2;
  bool bVar3;
  EClipContext *pEVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pEVar4 = this->m_pcc;
  if (pEVar4->m_dataSize == 0) {
    PrepareForUse__13EPortalWindow(this);
    pEVar4 = this->m_pcc;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar8 = (sphere->vCenter).field0_0x0.d[0];
  fVar12 = (sphere->vCenter).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar9 = fVar8 - (pEVar4->m_vEye).field0_0x0.d[0];
  fVar13 = (sphere->vCenter).field0_0x0.d[2];
  fVar10 = fVar12 - (pEVar4->m_vEye).field0_0x0.d[1];
                    /* end of inlined section */
  fVar14 = sphere->radius;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar11 = fVar13 - (pEVar4->m_vEye).field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  uVar7 = parentVis;
  if (fVar14 * fVar14 <= fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11) {
    fVar9 = -fVar14;
    uVar7 = parentVis & 0x2a;
    if ((parentVis & 5) != 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar8 = fVar8 - (pEVar4->m_vFrustCenter).field0_0x0.d[0];
      fVar13 = fVar13 - (pEVar4->m_vFrustCenter).field0_0x0.d[2];
      fVar12 = fVar12 - (pEVar4->m_vFrustCenter).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
      fVar10 = pEVar4->m_frustOuterRadius + fVar14;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar8 = fVar8 * fVar8 + fVar12 * fVar12 + fVar13 * fVar13;
                    /* end of inlined section */
      bVar3 = false;
      if (fVar10 * fVar10 <= fVar8) {
        return 0;
      }
      fVar14 = pEVar4->m_frustInnerRadius - fVar14;
      if ((0.0 < fVar14) && (fVar8 <= fVar14 * fVar14)) {
        bVar3 = true;
      }
      if (bVar3) {
        uVar7 = uVar7 | 10;
      }
      else {
        bVar3 = true;
        if ((parentVis & 4) != 0) {
          iVar6 = this->m_pcc->m_nPortalPlanes + -1;
          pfVar5 = (float *)(this->m_pcc->m_pData + 0x60);
          if (iVar6 != -1) {
            do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
              fVar8 = *pfVar5 * (sphere->vCenter).field0_0x0.d[0] +
                      pfVar5[1] * (sphere->vCenter).field0_0x0.d[1] +
                      pfVar5[2] * (sphere->vCenter).field0_0x0.d[2] + pfVar5[3];
                    /* end of inlined section */
              if (fVar8 <= fVar9) {
                return 0;
              }
              if (fVar8 < sphere->radius) {
                bVar3 = false;
              }
              iVar6 = iVar6 + -1;
              pfVar5 = pfVar5 + 4;
            } while (iVar6 != -1);
          }
          if (bVar3) {
            uVar7 = uVar7 | 8;
          }
          else {
            uVar7 = uVar7 | 4;
          }
        }
        bVar3 = true;
        if ((parentVis & 1) != 0) {
          iVar6 = 5;
          pfVar5 = (float *)this->m_pcc->m_pData;
          do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
            fVar8 = pfVar5[4] * (sphere->vCenter).field0_0x0.d[0] +
                    pfVar5[5] * (sphere->vCenter).field0_0x0.d[1] +
                    pfVar5[6] * (sphere->vCenter).field0_0x0.d[2] + pfVar5[7];
                    /* end of inlined section */
            if (fVar8 <= fVar9) {
              return 0;
            }
            if (fVar8 < sphere->radius) {
              bVar3 = false;
            }
            iVar6 = iVar6 + -1;
            pfVar5 = pfVar5 + 4;
          } while (iVar6 != 0);
          if (bVar3) {
            uVar7 = uVar7 | 2;
          }
          else {
            uVar7 = uVar7 | 1;
          }
        }
      }
    }
    bVar3 = true;
    if ((parentVis & 0x10) != 0) {
      pEVar4 = this->m_pcc;
      iVar6 = pEVar4->m_nOccluders + -1;
      pfVar5 = (float *)(pEVar4->m_pData + pEVar4->m_clipDataSize);
      if (iVar6 != -1) {
        do {
          fVar8 = *pfVar5;
          bVar1 = true;
          pfVar5 = pfVar5 + 1;
          bVar2 = true;
          do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
            fVar12 = *pfVar5 * (sphere->vCenter).field0_0x0.d[0] +
                     pfVar5[1] * (sphere->vCenter).field0_0x0.d[1] +
                     pfVar5[2] * (sphere->vCenter).field0_0x0.d[2] + pfVar5[3];
                    /* end of inlined section */
            if ((fVar12 <= sphere->radius) && (bVar1 = false, fVar12 <= fVar9)) {
              bVar2 = false;
              break;
            }
            fVar8 = (float)((int)fVar8 + -1);
            pfVar5 = pfVar5 + 4;
          } while (fVar8 != 0.0);
          if (bVar1) {
            return 0;
          }
          iVar6 = iVar6 + -1;
          if (bVar2) {
            bVar3 = false;
          }
        } while (iVar6 != -1);
      }
      if (bVar3) {
        uVar7 = uVar7 | 0x20;
      }
      else {
        uVar7 = uVar7 | 0x10;
      }
    }
  }
  return uVar7;
}

u32 EPortalWindow::Test(EVec3 *vPoints, int nPoints, u32 parentVis) {
	u32 visFlags;
	bool clipTotalVis;
	EVec4 *pvClipPlane;
	int nPlanes;
	bool notAnyVis;
	EVec3 *pv;
	int pointCount;
	EVec4 *this;
	EVec3 &v;
	bool clipTotalVis;
	EVec4 *pvClipPlane;
	int nPlanes;
	bool notAnyVis;
	EVec3 *pv;
	int pointCount;
	EVec4 *this;
	EVec3 &v;
	bool occludeTotalVis;
	u32 *pnPlanes;
	int nOccluders;
	bool allPtsPassedAllPlanes;
	bool noPlaneWithAllPtsFailed;
	int nPlanes;
	EVec4 *pvClipPlane;
	bool allPtsFailed;
	EVec3 *pv;
	int pointCount;
	EVec4 *this;
	EVec3 &v;
	
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  EClipContext *pEVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  EVec3 *pEVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  
  if (this->m_pcc->m_dataSize == 0) {
    PrepareForUse__13EPortalWindow(this);
  }
  uVar14 = parentVis & 0x2a;
  if ((parentVis & 4) != 0) {
    bVar6 = true;
    iVar12 = this->m_pcc->m_nPortalPlanes;
    pfVar10 = (float *)(this->m_pcc->m_pData + 0x60);
    while (iVar12 = iVar12 + -1, iVar12 != -1) {
      bVar5 = true;
      pEVar9 = vPoints;
      iVar11 = nPoints;
      do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        if (0.0 <= *pfVar10 * (pEVar9->field0_0x0).d[0] + pfVar10[1] * (pEVar9->field0_0x0).d[1] +
                   pfVar10[2] * (pEVar9->field0_0x0).d[2] + pfVar10[3]) {
          bVar5 = false;
        }
        else {
          bVar6 = false;
        }
        iVar11 = iVar11 + -1;
        pEVar9 = pEVar9 + 1;
      } while (iVar11 != 0);
      if (bVar5) {
        return 0;
      }
      pfVar10 = pfVar10 + 4;
    }
    if (bVar6) {
      uVar14 = uVar14 | 8;
    }
    else {
      uVar14 = uVar14 | 4;
    }
  }
  bVar6 = true;
  if ((parentVis & 1) != 0) {
    iVar12 = 6;
    pfVar10 = (float *)this->m_pcc->m_pData;
    do {
      bVar5 = true;
      pEVar9 = vPoints;
      iVar11 = nPoints;
      do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        if (0.0 <= *pfVar10 * (pEVar9->field0_0x0).d[0] + pfVar10[1] * (pEVar9->field0_0x0).d[1] +
                   pfVar10[2] * (pEVar9->field0_0x0).d[2] + pfVar10[3]) {
          bVar5 = false;
        }
        else {
          bVar6 = false;
        }
        iVar11 = iVar11 + -1;
        pEVar9 = pEVar9 + 1;
      } while (iVar11 != 0);
      iVar12 = iVar12 + -1;
      if (bVar5) {
        return 0;
      }
      pfVar10 = pfVar10 + 4;
    } while (iVar12 != 0);
    if (bVar6) {
      uVar14 = uVar14 | 2;
    }
    else {
      uVar14 = uVar14 | 1;
    }
  }
  bVar6 = true;
  if ((parentVis & 0x10) != 0) {
    pEVar4 = this->m_pcc;
    iVar12 = pEVar4->m_nOccluders;
    pfVar10 = (float *)(pEVar4->m_pData + pEVar4->m_clipDataSize);
    while (iVar12 = iVar12 + -1, iVar12 != -1) {
      fVar13 = *pfVar10;
      bVar5 = true;
      pfVar10 = pfVar10 + 1;
      bVar8 = true;
      do {
        fVar13 = (float)((int)fVar13 + -1);
        pfVar1 = pfVar10 + 3;
        fVar15 = *pfVar10;
        bVar7 = true;
        pfVar2 = pfVar10 + 1;
        pfVar3 = pfVar10 + 2;
        pfVar10 = pfVar10 + 4;
        pEVar9 = vPoints;
        iVar11 = nPoints;
        do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
          if (fVar15 * (pEVar9->field0_0x0).d[0] + *pfVar2 * (pEVar9->field0_0x0).d[1] +
              *pfVar3 * (pEVar9->field0_0x0).d[2] + *pfVar1 <= 0.0) {
            bVar7 = false;
          }
          else {
            bVar5 = false;
          }
          iVar11 = iVar11 + -1;
          pEVar9 = pEVar9 + 1;
        } while (iVar11 != 0);
        if (bVar7) {
          bVar8 = false;
        }
      } while (fVar13 != 0.0);
      if (bVar5) {
        return 0;
      }
      if (bVar8) {
        bVar6 = false;
      }
    }
    if (bVar6) {
      uVar14 = uVar14 | 0x20;
    }
    else {
      uVar14 = uVar14 | 0x10;
    }
  }
  return uVar14;
}

u32 EPortalWindow::IntermediateTest(EVec3 *vPoints, int nPoints, bool skipNearPlane, u32 parentVis) {
	u32 visFlags;
	bool clipTotalVis;
	EClipPlane *pPlane;
	bool notAnyVis;
	EVec3 *pv;
	int pointCount;
	EVec3 &v;
	void *pNode;
	bool clipTotalVis;
	EClipPlane *pPlane;
	void *pNode;
	bool notAnyVis;
	EVec3 *pv;
	int pointCount;
	EVec3 &v;
	void *pNode;
	bool occludeTotalVis;
	EClipOccluder *pOccluder;
	bool allPtsPassedAllPlanes;
	bool noPlaneWithAllPtsFailed;
	EClipPlane *pOccluderPlane;
	bool allPtsFailed;
	EVec3 *pv;
	int pointCount;
	EVec3 &v;
	void *pNode;
	void *pNode;
	
  EVec4 *pEVar1;
  EClipPlane *pEVar2;
  EClipOccluder *pEVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  EVec4 *pEVar8;
  EVec4 *pEVar9;
  EVec4 *pEVar10;
  int iVar11;
  EVec3 *pEVar12;
  uint uVar13;
  
  if (*(int *)&this->m_viewNeedsSettingUp != 0) {
    SetupView__13EPortalWindow(this);
  }
  uVar13 = parentVis & 0x2a;
  if ((parentVis & 4) != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    bVar5 = true;
                    /* end of inlined section */
    for (pEVar2 = (this->m_pcc->m_portalPlaneList).m_pHead; pEVar2 != (EClipPlane *)0x0;
        pEVar2 = pEVar2->pNext) {
      bVar4 = true;
      pEVar12 = vPoints;
      iVar11 = nPoints;
      do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        if (0.0 <= (pEVar2->vPlane).field0_0x0.d[0] * (pEVar12->field0_0x0).d[0] +
                   (pEVar2->vPlane).field0_0x0.d[1] * (pEVar12->field0_0x0).d[1] +
                   (pEVar2->vPlane).field0_0x0.d[2] * (pEVar12->field0_0x0).d[2] +
                   (pEVar2->vPlane).field0_0x0.d[3]) {
          bVar4 = false;
        }
        else {
          bVar5 = false;
        }
        iVar11 = iVar11 + -1;
        pEVar12 = pEVar12 + 1;
      } while (iVar11 != 0);
      if (bVar4) {
        return 0;
      }
                    /* end of inlined section */
    }
    if (bVar5) {
      uVar13 = uVar13 | 8;
    }
    else {
      uVar13 = uVar13 | 4;
    }
  }
  bVar5 = true;
  if ((parentVis & 1) != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    pEVar2 = (this->m_pcc->m_clipPlaneList).m_pHead;
    if (skipNearPlane) {
                    /* end of inlined section */
      pEVar2 = pEVar2->pNext;
    }
    for (; pEVar2 != (EClipPlane *)0x0; pEVar2 = pEVar2->pNext) {
      bVar4 = true;
      pEVar12 = vPoints;
      iVar11 = nPoints;
      do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
        if (0.0 <= (pEVar2->vPlane).field0_0x0.d[0] * (pEVar12->field0_0x0).d[0] +
                   (pEVar2->vPlane).field0_0x0.d[1] * (pEVar12->field0_0x0).d[1] +
                   (pEVar2->vPlane).field0_0x0.d[2] * (pEVar12->field0_0x0).d[2] +
                   (pEVar2->vPlane).field0_0x0.d[3]) {
          bVar4 = false;
        }
        else {
          bVar5 = false;
        }
        iVar11 = iVar11 + -1;
        pEVar12 = pEVar12 + 1;
      } while (iVar11 != 0);
      if (bVar4) {
        return 0;
      }
                    /* end of inlined section */
    }
    if (bVar5) {
      uVar13 = uVar13 | 2;
    }
    else {
      uVar13 = uVar13 | 1;
    }
  }
  if ((parentVis & 0x10) != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar3 = (this->m_pcc->m_occluderList).m_pHead;
    bVar5 = true;
                    /* end of inlined section */
    while (pEVar3 != (EClipOccluder *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
      pEVar2 = (pEVar3->planeList).m_pHead;
                    /* end of inlined section */
      bVar4 = true;
      bVar7 = true;
      while (pEVar2 != (EClipPlane *)0x0) {
        pEVar1 = &pEVar2->vPlane;
        pEVar8 = &pEVar2->vPlane;
        bVar6 = true;
        pEVar9 = &pEVar2->vPlane;
        pEVar10 = &pEVar2->vPlane;
        pEVar2 = pEVar2->pNext;
        pEVar12 = vPoints;
        iVar11 = nPoints;
        do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
          if ((pEVar1->field0_0x0).d[0] * (pEVar12->field0_0x0).d[0] +
              (pEVar9->field0_0x0).d[1] * (pEVar12->field0_0x0).d[1] +
              (pEVar10->field0_0x0).d[2] * (pEVar12->field0_0x0).d[2] + (pEVar8->field0_0x0).d[3] <=
              0.0) {
            bVar6 = false;
          }
          else {
            bVar4 = false;
          }
          iVar11 = iVar11 + -1;
          pEVar12 = pEVar12 + 1;
        } while (iVar11 != 0);
        if (bVar6) {
          bVar7 = false;
        }
      }
      if (bVar4) {
        return 0;
      }
      pEVar3 = pEVar3->pNext;
      if (bVar7) {
        bVar5 = false;
      }
    }
    if (bVar5) {
      uVar13 = uVar13 | 0x20;
    }
    else {
      uVar13 = uVar13 | 0x10;
    }
  }
  return uVar13;
}

bool EPortalWindow::TestBackCullingAndVisibility(EVec3 *vCorners, int nCorners, u32 parentVis) {
  bool bVar1;
  uint uVar2;
  
  bVar1 = TestBackCull__13EPortalWindowPC5EVec3(this,vCorners);
  if (bVar1) {
    if ((parentVis != 0x2a) &&
       (uVar2 = IntermediateTest__13EPortalWindowPC5EVec3ibUi
                          (this,vCorners,nCorners,false,parentVis), uVar2 == 0)) {
      return false;
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

void EPortalWindow::SetUpClipOccluder(EClipOccluder *pOccluder) {
	EClipPlane *pMainPlane;
	int a;
	int b;
	EVec4 *this;
	EVec3 *vPoints;
	EVec4 *this;
	EVec3 &v;
	EVec4 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec4 *this;
	EVec3 *this;
	TLinkedList<EClipPlane,68,72> *this;
	EClipPlane *pNewNode;
	EClipPlane *pNode;
	void *pNode;
	TLinkedList<EClipOccluder,88,92> *this;
	EClipOccluder *pNewNode;
	EClipOccluder *pNode;
	void *pNode;
	int eo;
	int i;
	int next;
	EVec3 vCorners[2];
	EClipPlane *pPlane;
	int c;
	int d;
	EVec4 *this;
	EVec3 *vPoints;
	EVec4 *this;
	EVec3 &v;
	EVec4 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec4 *this;
	EVec3 *this;
	TLinkedList<EClipPlane,68,72> *this;
	EClipPlane *pNewNode;
	EClipPlane *pNode;
	void *pNode;
	
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  EClipPlane *pEVar4;
  EClipContext *pEVar5;
  EClipOccluder *pEVar6;
  ulong *puVar7;
  EClipPlane *pEVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  EVec3 *pEVar13;
  int iVar14;
  EVec3 *pEVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong in_t3;
  ulong uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  EVec3 vCorners [2];
  int local_c0;
  
                    /* inlined from c:/eor/src2/engine/window/e_portalwindow.h */
  uVar16 = 0x1b;
  pEVar8 = (EClipPlane *)_allocBucketAlloc__FUiUi(0x50,0x1b);
                    /* end of inlined section */
  iVar9 = 1;
  do {
    bVar2 = iVar9 != -1;
    iVar9 = iVar9 + -1;
  } while (bVar2);
                    /* end of inlined section */
  if (*(int *)&this->m_pcc->m_reverseCulling == 0) {
    iVar14 = 1;
    iVar9 = 2;
  }
  else {
    iVar14 = 2;
    iVar9 = 1;
  }
  puVar1 = (undefined *)((int)&(pOccluder->o).vCorners[0].field0_0x0 + 7);
  uVar11 = (uint)puVar1 & 7;
  uVar3 = (uint)pOccluder & 7;
  uVar16 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
           uVar16 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)pOccluder - uVar3) >> uVar3 * 8;
  fVar21 = (pOccluder->o).vCorners[0].field0_0x0.d[2];
  puVar1 = (undefined *)((int)&pEVar8->vCorners[0].field0_0x0 + 7);
  uVar11 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar11);
  *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | uVar16 >> (7 - uVar11) * 8;
  uVar11 = (uint)pEVar8 & 7;
  *(ulong *)((int)pEVar8 - uVar11) =
       uVar16 << uVar11 * 8 |
       *(ulong *)((int)pEVar8 - uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  pEVar8->vCorners[0].field0_0x0.d[2] = fVar21;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
  pEVar15 = (pOccluder->o).vCorners + iVar14;
  puVar1 = (undefined *)((int)&pEVar15->field0_0x0 + 7);
  uVar11 = (uint)puVar1 & 7;
  uVar3 = (uint)pEVar15 & 7;
  uVar16 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
           (long)(int)fVar21 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)pEVar15 - uVar3) >> uVar3 * 8;
  fVar21 = (pEVar15->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&pEVar8->vCorners[1].field0_0x0 + 7);
  uVar11 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar11);
  *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | uVar16 >> (7 - uVar11) * 8;
  uVar11 = (uint)(pEVar8->vCorners + 1) & 7;
  puVar7 = (ulong *)((int)(pEVar8->vCorners + 1) - uVar11);
  *puVar7 = uVar16 << uVar11 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  pEVar8->vCorners[1].field0_0x0.d[2] = fVar21;
  pEVar15 = (pOccluder->o).vCorners + iVar9;
  puVar1 = (undefined *)((int)&pEVar15->field0_0x0 + 7);
  uVar11 = (uint)puVar1 & 7;
  uVar3 = (uint)pEVar15 & 7;
  uVar16 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
           in_t3 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)((int)pEVar15 - uVar3) >> uVar3 * 8;
  fVar21 = (pEVar15->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&pEVar8->vCorners[2].field0_0x0 + 7);
  uVar11 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar11);
  *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | uVar16 >> (7 - uVar11) * 8;
  uVar11 = (uint)(pEVar8->vCorners + 2) & 7;
  puVar7 = (ulong *)((int)(pEVar8->vCorners + 2) - uVar11);
  *puVar7 = uVar16 << uVar11 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  pEVar8->vCorners[2].field0_0x0.d[2] = fVar21;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  vCorners[1].field0_0x0._4_4_ =
       pEVar8->vCorners[1].field0_0x0.d[0] - pEVar8->vCorners[0].field0_0x0.d[0];
  vCorners[1].field0_0x0._8_4_ =
       pEVar8->vCorners[1].field0_0x0.d[1] - pEVar8->vCorners[0].field0_0x0.d[1];
  fVar23 = pEVar8->vCorners[1].field0_0x0.d[2] - pEVar8->vCorners[0].field0_0x0.d[2];
  fVar24 = pEVar8->vCorners[1].field0_0x0.d[2] - pEVar8->vCorners[2].field0_0x0.d[2];
  fVar22 = pEVar8->vCorners[1].field0_0x0.d[0] - pEVar8->vCorners[2].field0_0x0.d[0];
  fVar21 = pEVar8->vCorners[1].field0_0x0.d[1] - pEVar8->vCorners[2].field0_0x0.d[1];
  vCorners[0].field0_0x0._8_4_ =
       vCorners[1].field0_0x0._4_4_ * fVar21 - vCorners[1].field0_0x0._8_4_ * fVar22;
  vCorners[0].field0_0x0._0_8_ =
       CONCAT44(fVar23 * fVar22 - vCorners[1].field0_0x0._4_4_ * fVar24,
                vCorners[1].field0_0x0._8_4_ * fVar24 - fVar23 * fVar21);
  uVar16 = (ulong)(int)vCorners[0].field0_0x0._8_4_;
  puVar1 = (undefined *)((int)&(pEVar8->vPlane).field0_0x0 + 7);
  uVar11 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar11);
  *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | vCorners[0].field0_0x0._0_8_ >> (7 - uVar11) * 8;
  uVar11 = (uint)&pEVar8->vPlane & 7;
  puVar7 = (ulong *)((int)&pEVar8->vPlane - uVar11);
  *puVar7 = vCorners[0].field0_0x0._0_8_ << uVar11 * 8 |
            *puVar7 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
  (pEVar8->vPlane).field0_0x0.d[2] = vCorners[0].field0_0x0._8_4_;
  fVar22 = (pEVar8->vPlane).field0_0x0.d[0];
  fVar21 = (pEVar8->vPlane).field0_0x0.d[1];
  fVar23 = (pEVar8->vPlane).field0_0x0.d[2];
  fVar21 = sqrtf(fVar22 * fVar22 + fVar21 * fVar21 + fVar23 * fVar23);
  if (fVar21 != 0.0) {
    fVar21 = 1.0 / fVar21;
    (pEVar8->vPlane).field0_0x0.d[0] = (pEVar8->vPlane).field0_0x0.d[0] * fVar21;
    fVar22 = (pEVar8->vPlane).field0_0x0.d[2];
    (pEVar8->vPlane).field0_0x0.d[1] = (pEVar8->vPlane).field0_0x0.d[1] * fVar21;
    (pEVar8->vPlane).field0_0x0.d[2] = fVar22 * fVar21;
  }
  fVar21 = (pEVar8->vPlane).field0_0x0.d[1];
  (pEVar8->vPlane).field0_0x0.d[3] = 1.0;
  (pEVar8->vPlane).field0_0x0.d[3] =
       -(pEVar8->vCorners[0].field0_0x0.d[0] * (pEVar8->vPlane).field0_0x0.d[0] +
         pEVar8->vCorners[0].field0_0x0.d[1] * fVar21 +
        pEVar8->vCorners[0].field0_0x0.d[2] * (pEVar8->vPlane).field0_0x0.d[2]);
  pEVar8->pLast = (pOccluder->planeList).m_pTail;
  pEVar4 = (pOccluder->planeList).m_pTail;
  if (pEVar4 == (EClipPlane *)0x0) {
    (pOccluder->planeList).m_pHead = pEVar8;
  }
  else {
    pEVar4->pNext = pEVar8;
  }
  pEVar8->pNext = (EClipPlane *)0x0;
  (pOccluder->planeList).m_pTail = pEVar8;
  pEVar5 = this->m_pcc;
  pOccluder->pLast = (pEVar5->m_occluderList).m_pTail;
  pEVar6 = (pEVar5->m_occluderList).m_pTail;
  if (pEVar6 == (EClipOccluder *)0x0) {
    (pEVar5->m_occluderList).m_pHead = pOccluder;
  }
  else {
    pEVar6->pNext = pOccluder;
  }
  pOccluder->pNext = (EClipOccluder *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (pEVar5->m_occluderList).m_pTail = pOccluder;
                    /* end of inlined section */
  this->m_pcc->m_nOccluders = this->m_pcc->m_nOccluders + 1;
  pOccluder->nPlanes = 1;
  iVar9 = (pOccluder->o).nCorners;
  iVar14 = 0;
  while( true ) {
    local_c0 = iVar14 + 1;
    uVar19 = (ulong)local_c0;
    if (iVar14 < iVar9) {
      do {
        if (iVar9 == 0) {
          trap(7);
        }
        iVar9 = (iVar14 + 1) % iVar9;
        iVar20 = iVar14 + 2;
                    /* end of inlined section */
        iVar10 = 0;
        do {
          bVar2 = iVar10 != -1;
          iVar10 = iVar10 + -1;
        } while (bVar2);
        uVar17 = 5;
        pEVar15 = (pOccluder->o).vCorners + iVar14;
        puVar1 = (undefined *)((int)&pEVar15->field0_0x0 + 7);
        uVar11 = (uint)puVar1 & 7;
        uVar3 = (uint)pEVar15 & 7;
        vCorners[0].field0_0x0._0_8_ =
             (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
             uVar16 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)pEVar15 - uVar3) >> uVar3 * 8;
        vCorners[0].field0_0x0._8_4_ = (pEVar15->field0_0x0).d[2];
        uVar18 = (ulong)(int)vCorners[0].field0_0x0._8_4_;
        puVar1 = (undefined *)((int)&vCorners[0].field0_0x0 + 7);
        uVar11 = (uint)puVar1 & 7;
        puVar7 = (ulong *)(puVar1 + -uVar11);
        *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 |
                  vCorners[0].field0_0x0._0_8_ >> (7 - uVar11) * 8;
        pEVar13 = (pOccluder->o).vCorners + iVar9;
        puVar1 = (undefined *)((int)&pEVar13->field0_0x0 + 7);
        uVar11 = (uint)puVar1 & 7;
        uVar3 = (uint)pEVar13 & 7;
        uVar12 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
                 (long)(int)pEVar15 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) &
                 -1L << (8 - uVar3) * 8 | *(ulong *)((int)pEVar13 - uVar3) >> uVar3 * 8;
        vCorners[1].field0_0x0._8_4_ = (pEVar13->field0_0x0).d[2];
        uVar16 = (ulong)(int)vCorners[1].field0_0x0._8_4_;
        puVar1 = (undefined *)((int)&vCorners[1].field0_0x0 + 7);
        uVar11 = (uint)puVar1 & 7;
        puVar7 = (ulong *)(puVar1 + -uVar11);
        *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | uVar12 >> (7 - uVar11) * 8;
        uVar11 = (uint)(vCorners + 1) & 7;
        puVar7 = (ulong *)((int)(vCorners + 1) - uVar11);
        *puVar7 = uVar12 << uVar11 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
        uVar11 = IntermediateTest__13EPortalWindowPC5EVec3ibUi(this,vCorners,2,true,5);
        if (uVar11 != 0) {
                    /* inlined from c:/eor/src2/engine/window/e_portalwindow.h */
          pEVar8 = (EClipPlane *)_allocBucketAlloc__FUiUi(0x50,0x1b);
                    /* end of inlined section */
          iVar10 = 1;
          do {
            bVar2 = iVar10 != -1;
            iVar10 = iVar10 + -1;
          } while (bVar2);
                    /* end of inlined section */
          pEVar5 = this->m_pcc;
          iVar10 = iVar9;
          if (*(int *)&pEVar5->m_reverseCulling != 0) {
            iVar10 = iVar14;
            iVar14 = iVar9;
          }
          puVar1 = (undefined *)((int)&(pEVar5->m_vEye).field0_0x0 + 7);
          uVar11 = (uint)puVar1 & 7;
          uVar3 = (uint)pEVar5 & 7;
          uVar12 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
                   uVar17 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)pEVar5 - uVar3) >> uVar3 * 8;
          fVar21 = (pEVar5->m_vEye).field0_0x0.d[2];
          uVar16 = (ulong)(int)fVar21;
          puVar1 = (undefined *)((int)&pEVar8->vCorners[0].field0_0x0 + 7);
          uVar11 = (uint)puVar1 & 7;
          puVar7 = (ulong *)(puVar1 + -uVar11);
          *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | uVar12 >> (7 - uVar11) * 8;
          uVar11 = (uint)pEVar8 & 7;
          *(ulong *)((int)pEVar8 - uVar11) =
               uVar12 << uVar11 * 8 |
               *(ulong *)((int)pEVar8 - uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
          pEVar8->vCorners[0].field0_0x0.d[2] = fVar21;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
          pEVar15 = (pOccluder->o).vCorners + iVar14;
          pEVar13 = (pOccluder->o).vCorners + iVar10;
          puVar1 = (undefined *)((int)&pEVar15->field0_0x0 + 7);
          uVar11 = (uint)puVar1 & 7;
          uVar3 = (uint)pEVar15 & 7;
          uVar19 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
                   uVar19 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)pEVar15 - uVar3) >> uVar3 * 8;
          fVar21 = (pEVar15->field0_0x0).d[2];
          puVar1 = (undefined *)((int)&pEVar8->vCorners[1].field0_0x0 + 7);
          uVar11 = (uint)puVar1 & 7;
          puVar7 = (ulong *)(puVar1 + -uVar11);
          *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | uVar19 >> (7 - uVar11) * 8;
          uVar11 = (uint)(pEVar8->vCorners + 1) & 7;
          puVar7 = (ulong *)((int)(pEVar8->vCorners + 1) - uVar11);
          *puVar7 = uVar19 << uVar11 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
          pEVar8->vCorners[1].field0_0x0.d[2] = fVar21;
          puVar1 = (undefined *)((int)&pEVar13->field0_0x0 + 7);
          uVar11 = (uint)puVar1 & 7;
          uVar3 = (uint)pEVar13 & 7;
          uVar12 = (*(long *)(puVar1 + -uVar11) << (7 - uVar11) * 8 |
                   uVar18 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                   *(ulong *)((int)pEVar13 - uVar3) >> uVar3 * 8;
          fVar21 = (pEVar13->field0_0x0).d[2];
          puVar1 = (undefined *)((int)&pEVar8->vCorners[2].field0_0x0 + 7);
          uVar11 = (uint)puVar1 & 7;
          puVar7 = (ulong *)(puVar1 + -uVar11);
          *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | uVar12 >> (7 - uVar11) * 8;
          uVar11 = (uint)(pEVar8->vCorners + 2) & 7;
          puVar7 = (ulong *)((int)(pEVar8->vCorners + 2) - uVar11);
          *puVar7 = uVar12 << uVar11 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
          pEVar8->vCorners[2].field0_0x0.d[2] = fVar21;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar26 = pEVar8->vCorners[1].field0_0x0.d[0] - pEVar8->vCorners[0].field0_0x0.d[0];
          fVar25 = pEVar8->vCorners[1].field0_0x0.d[1] - pEVar8->vCorners[0].field0_0x0.d[1];
          fVar24 = pEVar8->vCorners[1].field0_0x0.d[2] - pEVar8->vCorners[0].field0_0x0.d[2];
          fVar23 = pEVar8->vCorners[1].field0_0x0.d[2] - pEVar8->vCorners[2].field0_0x0.d[2];
          fVar22 = pEVar8->vCorners[1].field0_0x0.d[0] - pEVar8->vCorners[2].field0_0x0.d[0];
          fVar21 = pEVar8->vCorners[1].field0_0x0.d[1] - pEVar8->vCorners[2].field0_0x0.d[1];
          uVar12 = CONCAT44(fVar24 * fVar22 - fVar26 * fVar23,fVar25 * fVar23 - fVar24 * fVar21);
          puVar1 = (undefined *)((int)&(pEVar8->vPlane).field0_0x0 + 7);
          uVar11 = (uint)puVar1 & 7;
          puVar7 = (ulong *)(puVar1 + -uVar11);
          *puVar7 = *puVar7 & -1L << (uVar11 + 1) * 8 | uVar12 >> (7 - uVar11) * 8;
          uVar11 = (uint)&pEVar8->vPlane & 7;
          puVar7 = (ulong *)((int)&pEVar8->vPlane - uVar11);
          *puVar7 = uVar12 << uVar11 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
          (pEVar8->vPlane).field0_0x0.d[2] = fVar26 * fVar21 - fVar25 * fVar22;
          fVar23 = (pEVar8->vPlane).field0_0x0.d[0];
          fVar21 = (pEVar8->vPlane).field0_0x0.d[1];
          fVar22 = (pEVar8->vPlane).field0_0x0.d[2];
          fVar21 = sqrtf(fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22);
          if (fVar21 == 0.0) {
            (pEVar8->vPlane).field0_0x0.d[3] = 1.0;
          }
          else {
            fVar21 = 1.0 / fVar21;
            (pEVar8->vPlane).field0_0x0.d[0] = (pEVar8->vPlane).field0_0x0.d[0] * fVar21;
            fVar22 = (pEVar8->vPlane).field0_0x0.d[2];
            (pEVar8->vPlane).field0_0x0.d[1] = (pEVar8->vPlane).field0_0x0.d[1] * fVar21;
            (pEVar8->vPlane).field0_0x0.d[2] = fVar22 * fVar21;
            (pEVar8->vPlane).field0_0x0.d[3] = 1.0;
          }
          (pEVar8->vPlane).field0_0x0.d[3] =
               -(pEVar8->vCorners[0].field0_0x0.d[0] * (pEVar8->vPlane).field0_0x0.d[0] +
                 pEVar8->vCorners[0].field0_0x0.d[1] * (pEVar8->vPlane).field0_0x0.d[1] +
                pEVar8->vCorners[0].field0_0x0.d[2] * (pEVar8->vPlane).field0_0x0.d[2]);
          pEVar8->pLast = (pOccluder->planeList).m_pTail;
          pEVar4 = (pOccluder->planeList).m_pTail;
          if (pEVar4 == (EClipPlane *)0x0) {
            (pOccluder->planeList).m_pHead = pEVar8;
          }
          else {
            pEVar4->pNext = pEVar8;
          }
          pEVar8->pNext = (EClipPlane *)0x0;
          (pOccluder->planeList).m_pTail = pEVar8;
                    /* end of inlined section */
          pOccluder->nPlanes = pOccluder->nPlanes + 1;
        }
        iVar9 = (pOccluder->o).nCorners;
        iVar14 = iVar20;
      } while (iVar20 < iVar9);
    }
    if (1 < local_c0) break;
    iVar9 = (pOccluder->o).nCorners;
    iVar14 = local_c0;
  }
  return;
}

void EClipContext::Reset() {
	TLinkedList<EClipPlane,68,72> *this;
	EClipPlane *pNode;
	TLinkedList<EClipPlane,68,72> *this;
	EClipPlane *pNext;
	void *pNode;
	void *p;
	TLinkedList<EClipPlane,68,72> *this;
	TLinkedList<EClipPlane,68,72> *this;
	EClipPlane *pNode;
	TLinkedList<EClipPlane,68,72> *this;
	EClipPlane *pNext;
	void *pNode;
	void *p;
	TLinkedList<EClipPlane,68,72> *this;
	EClipOccluder *pNode;
	EClipOccluder *pNext;
	void *pNode;
	EClipOccluder *this;
	TLinkedList<EClipPlane,68,72> *this;
	EClipPlane *pNode;
	TLinkedList<EClipPlane,68,72> *this;
	EClipPlane *pNext;
	void *pNode;
	void *p;
	TLinkedList<EClipPlane,68,72> *this;
	
  EClipPlane *pEVar1;
  EClipOccluder *pEVar2;
  EClipPlane *pEVar3;
  EClipOccluder *p;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_clipPlaneList).m_pHead;
  while (pEVar3 != (EClipPlane *)0x0) {
    pEVar1 = pEVar3->pNext;
    _allocBucketFree__FPvUiUi(pEVar3,0x50,0x1b);
    pEVar3 = pEVar1;
  }
  (this->m_clipPlaneList).m_pHead = (EClipPlane *)0x0;
  (this->m_clipPlaneList).m_pTail = (EClipPlane *)0x0;
                    /* end of inlined section */
  this->m_nPortalPlanes = 0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_portalPlaneList).m_pHead;
  while (pEVar3 != (EClipPlane *)0x0) {
    pEVar1 = pEVar3->pNext;
    _allocBucketFree__FPvUiUi(pEVar3,0x50,0x1b);
    pEVar3 = pEVar1;
  }
  (this->m_portalPlaneList).m_pHead = (EClipPlane *)0x0;
  (this->m_portalPlaneList).m_pTail = (EClipPlane *)0x0;
                    /* end of inlined section */
  this->m_nOccluders = 0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  p = (this->m_occluderList).m_pHead;
  if (p == (EClipOccluder *)0x0) {
    (this->m_occluderList).m_pHead = (EClipOccluder *)0x0;
  }
  else {
    do {
      pEVar2 = p->pNext;
      if (p != (EClipOccluder *)0x0) {
        pEVar3 = (p->planeList).m_pHead;
        while (pEVar3 != (EClipPlane *)0x0) {
          pEVar1 = pEVar3->pNext;
          _allocBucketFree__FPvUiUi(pEVar3,0x50,0x1b);
          pEVar3 = pEVar1;
        }
        (p->planeList).m_pHead = (EClipPlane *)0x0;
        (p->planeList).m_pTail = (EClipPlane *)0x0;
        __dl__13EClipOccluderPv(p);
      }
      p = pEVar2;
    } while (pEVar2 != (EClipOccluder *)0x0);
    (this->m_occluderList).m_pHead = (EClipOccluder *)0x0;
  }
  (this->m_occluderList).m_pTail = (EClipOccluder *)0x0;
                    /* end of inlined section */
  this->m_dataSize = 0;
  return;
}

void EClipContext::CalcOuterRadius() {
	EVec3 vLookDir;
	EVec3 *this;
	EVec3 &v;
	EVec3 &v;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  EVec3 vLookDir;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar4 = (this->m_vFrustCenter).field0_0x0.d[0] - (this->m_vEye).field0_0x0.d[0];
  fVar1 = (this->m_vFrustCenter).field0_0x0.d[1] - (this->m_vEye).field0_0x0.d[1];
  fVar2 = (this->m_vFrustCenter).field0_0x0.d[2] - (this->m_vEye).field0_0x0.d[2];
  fVar2 = sqrtf(fVar4 * fVar4 + fVar1 * fVar1 + fVar2 * fVar2);
  fVar1 = (this->m_vFrustCenter).field0_0x0.d[1] - (this->m_vFrustCorner).field0_0x0.d[1];
  fVar3 = (this->m_vFrustCenter).field0_0x0.d[0] - (this->m_vFrustCorner).field0_0x0.d[0];
  fVar4 = (this->m_vFrustCenter).field0_0x0.d[2] - (this->m_vFrustCorner).field0_0x0.d[2];
  fVar1 = sqrtf(fVar3 * fVar3 + fVar1 * fVar1 + fVar4 * fVar4);
                    /* end of inlined section */
  this->m_frustOuterRadius =
       (float)((int)fVar1 * (uint)(fVar2 < fVar1) | (int)fVar2 * (uint)(fVar2 >= fVar1));
  return;
}

void EClipContext::CalcInnerRadiusFromPlaneList(EClipPlaneList &list) {
	EClipPlane *pcp;
	EClipPlane &plane;
	EVec3 &vPoint;
	EVec3 &v;
	EVec4 *this;
	void *pNode;
	
  EClipPlane *pEVar1;
  float fVar2;
  float fVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = list->m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (EClipPlane *)0x0) {
    fVar3 = (this->m_vFrustCenter).field0_0x0.d[0];
                    /* inlined from c:/eor/src2/engine/window/e_portalwindow.h */
    do {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      fVar2 = (pEVar1->vPlane).field0_0x0.d[0] * fVar3 +
              (pEVar1->vPlane).field0_0x0.d[1] * (this->m_vFrustCenter).field0_0x0.d[1] +
              (pEVar1->vPlane).field0_0x0.d[2] * (this->m_vFrustCenter).field0_0x0.d[2] +
              (pEVar1->vPlane).field0_0x0.d[3];
                    /* end of inlined section */
      if (fVar2 < this->m_frustInnerRadius) {
        this->m_frustInnerRadius = fVar2;
      }
                    /* end of inlined section */
      pEVar1 = pEVar1->pNext;
    } while (pEVar1 != (EClipPlane *)0x0);
  }
  return;
}

void EClipContext::CalcInnerRadius() {
  this->m_frustInnerRadius = this->m_frustOuterRadius;
  CalcInnerRadiusFromPlaneList__12EClipContextRt11TLinkedList3Z10EClipPlaneUi68Ui72
            (this,&this->m_clipPlaneList);
  CalcInnerRadiusFromPlaneList__12EClipContextRt11TLinkedList3Z10EClipPlaneUi68Ui72
            (this,&this->m_portalPlaneList);
  return;
}

void EClipContext::AddClipPlanes(EVec3 *vCorners, int nCorners, bool frust, EVec3 *pvNearPoint) {
	EClipPlane *pTail;
	bool originalFrust;
	int i;
	EClipPlane *pcp;
	EVec3 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 vTemp;
	EVec3 &v;
	EClipPlane *pcp;
	int v1;
	int v2;
	int eo;
	int j;
	EClipPlane *pcp;
	int v1;
	int v2;
	EClipPlane *pFirstNewPlane;
	EClipPlane *pFirstFrustPlane;
	void *pNode;
	void *pNode;
	void *pNode;
	void *pNode;
	void *pNode;
	
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  EClipPlane *pEVar7;
  int iVar8;
  int iVar9;
  EVec3 *pEVar10;
  EVec3 *pEVar11;
  int iVar12;
  ulong uVar13;
  ulong in_t1;
  ulong in_t2;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  EVec3 vTemp;
  void *pNode;
  bool originalFrust;
  
  pNode = (void *)0x0;
  _originalFrust = 0;
  if (frust) {
    if (pvNearPoint != (EVec3 *)0x0) {
      _originalFrust = 1;
                    /* inlined from c:/eor/src2/engine/window/e_portalwindow.h */
      iVar9 = 0;
      do {
        uVar13 = 0x1b;
        pEVar7 = (EClipPlane *)_allocBucketAlloc__FUiUi(0x50,0x1b);
        iVar14 = iVar9 + 1;
                    /* end of inlined section */
        iVar8 = 1;
        do {
          bVar2 = iVar8 != -1;
          iVar8 = iVar8 + -1;
        } while (bVar2);
                    /* end of inlined section */
        if (iVar9 == 0) {
          puVar1 = (undefined *)((int)&pvNearPoint->field0_0x0 + 7);
          uVar4 = (uint)puVar1 & 7;
          uVar5 = (uint)pvNearPoint & 7;
          uVar13 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
                   in_t2 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                   *(ulong *)((int)pvNearPoint - uVar5) >> uVar5 * 8;
          fVar15 = (pvNearPoint->field0_0x0).d[2];
          puVar1 = (undefined *)((int)&pEVar7->vCorners[0].field0_0x0 + 7);
          uVar4 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar4);
          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
          uVar4 = (uint)pEVar7 & 7;
          *(ulong *)((int)pEVar7 - uVar4) =
               uVar13 << uVar4 * 8 |
               *(ulong *)((int)pEVar7 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          pEVar7->vCorners[0].field0_0x0.d[2] = fVar15;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar17 = vCorners[3].field0_0x0.d[2];
          fVar16 = (vCorners->field0_0x0).d[2];
          fVar15 = (pvNearPoint->field0_0x0).d[2];
                    /* end of inlined section */
          uVar13 = CONCAT44((pvNearPoint->field0_0x0).d[1] +
                            ((vCorners->field0_0x0).d[1] - vCorners[3].field0_0x0.d[1]),
                            (pvNearPoint->field0_0x0).d[0] +
                            ((vCorners->field0_0x0).d[0] - vCorners[3].field0_0x0.d[0]));
          puVar1 = (undefined *)((int)&pEVar7->vCorners[1].field0_0x0 + 7);
          uVar4 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar4);
          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
          uVar4 = (uint)(pEVar7->vCorners + 1) & 7;
          puVar6 = (ulong *)((int)(pEVar7->vCorners + 1) - uVar4);
          *puVar6 = uVar13 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          pEVar7->vCorners[1].field0_0x0.d[2] = fVar15 + (fVar16 - fVar17);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          fVar15 = vCorners[3].field0_0x0.d[2];
          fVar17 = vCorners[2].field0_0x0.d[2];
          fVar16 = (pvNearPoint->field0_0x0).d[2];
                    /* end of inlined section */
          in_t2 = CONCAT44((pvNearPoint->field0_0x0).d[1] +
                           (vCorners[2].field0_0x0.d[1] - vCorners[3].field0_0x0.d[1]),
                           (pvNearPoint->field0_0x0).d[0] +
                           (vCorners[2].field0_0x0.d[0] - vCorners[3].field0_0x0.d[0]));
          puVar1 = (undefined *)((int)&pEVar7->vCorners[2].field0_0x0 + 7);
          uVar4 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar4);
          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | in_t2 >> (7 - uVar4) * 8;
          uVar4 = (uint)(pEVar7->vCorners + 2) & 7;
          puVar6 = (ulong *)((int)(pEVar7->vCorners + 2) - uVar4);
          *puVar6 = in_t2 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          pEVar7->vCorners[2].field0_0x0.d[2] = fVar16 + (fVar17 - fVar15);
          iVar9 = *(int *)&this->m_reverseCulling;
        }
        else {
          puVar1 = (undefined *)((int)&vCorners[3].field0_0x0 + 7);
          uVar4 = (uint)puVar1 & 7;
          uVar5 = (uint)(vCorners + 3) & 7;
          uVar13 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
                   uVar13 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                   *(ulong *)((int)(vCorners + 3) - uVar5) >> uVar5 * 8;
          fVar15 = vCorners[3].field0_0x0.d[2];
          puVar1 = (undefined *)((int)&pEVar7->vCorners[0].field0_0x0 + 7);
          uVar4 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar4);
          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
          uVar4 = (uint)pEVar7 & 7;
          *(ulong *)((int)pEVar7 - uVar4) =
               uVar13 << uVar4 * 8 |
               *(ulong *)((int)pEVar7 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          pEVar7->vCorners[0].field0_0x0.d[2] = fVar15;
          puVar1 = (undefined *)((int)&vCorners[2].field0_0x0 + 7);
          uVar4 = (uint)puVar1 & 7;
          uVar5 = (uint)(vCorners + 2) & 7;
          in_t2 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
                  in_t2 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                  *(ulong *)((int)(vCorners + 2) - uVar5) >> uVar5 * 8;
          fVar15 = vCorners[2].field0_0x0.d[2];
          puVar1 = (undefined *)((int)&pEVar7->vCorners[1].field0_0x0 + 7);
          uVar4 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar4);
          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | in_t2 >> (7 - uVar4) * 8;
          uVar4 = (uint)(pEVar7->vCorners + 1) & 7;
          puVar6 = (ulong *)((int)(pEVar7->vCorners + 1) - uVar4);
          *puVar6 = in_t2 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          pEVar7->vCorners[1].field0_0x0.d[2] = fVar15;
          puVar1 = (undefined *)((int)&vCorners->field0_0x0 + 7);
          uVar4 = (uint)puVar1 & 7;
          uVar5 = (uint)vCorners & 7;
          uVar13 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
                   uVar13 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                   *(ulong *)((int)vCorners - uVar5) >> uVar5 * 8;
          fVar15 = (vCorners->field0_0x0).d[2];
          puVar1 = (undefined *)((int)&pEVar7->vCorners[2].field0_0x0 + 7);
          uVar4 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar4);
          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
          uVar4 = (uint)(pEVar7->vCorners + 2) & 7;
          puVar6 = (ulong *)((int)(pEVar7->vCorners + 2) - uVar4);
          *puVar6 = uVar13 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          pEVar7->vCorners[2].field0_0x0.d[2] = fVar15;
          iVar9 = *(int *)&this->m_reverseCulling;
        }
        if (iVar9 != 0) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          in_t2 = *(ulong *)&pEVar7->vCorners[1].field0_0x0;
          fVar16 = pEVar7->vCorners[1].field0_0x0.d[2];
          puVar1 = (undefined *)((int)&pEVar7->vCorners[2].field0_0x0 + 7);
                    /* end of inlined section */
          uVar4 = (uint)puVar1 & 7;
          uVar5 = (uint)(pEVar7->vCorners + 2) & 7;
          uVar13 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
                   uVar13 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                   *(ulong *)((int)(pEVar7->vCorners + 2) - uVar5) >> uVar5 * 8;
          fVar15 = pEVar7->vCorners[2].field0_0x0.d[2];
          puVar1 = (undefined *)((int)&pEVar7->vCorners[1].field0_0x0 + 7);
          uVar4 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar4);
          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
          uVar4 = (uint)(pEVar7->vCorners + 1) & 7;
          puVar6 = (ulong *)((int)(pEVar7->vCorners + 1) - uVar4);
          *puVar6 = uVar13 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          pEVar7->vCorners[1].field0_0x0.d[2] = fVar15;
          puVar1 = (undefined *)((int)&pEVar7->vCorners[2].field0_0x0 + 7);
          uVar4 = (uint)puVar1 & 7;
          puVar6 = (ulong *)(puVar1 + -uVar4);
          *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | in_t2 >> (7 - uVar4) * 8;
          uVar4 = (uint)(pEVar7->vCorners + 2) & 7;
          puVar6 = (ulong *)((int)(pEVar7->vCorners + 2) - uVar4);
          *puVar6 = in_t2 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
          pEVar7->vCorners[2].field0_0x0.d[2] = fVar16;
        }
        *(undefined4 *)&pEVar7->cull = 0;
        SetUpClipPlane__12EClipContextP10EClipPlaneb(this,pEVar7,true);
        iVar9 = iVar14;
      } while (iVar14 < 2);
    }
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pNode = (this->m_portalPlaneList).m_pTail;
    uVar13 = 0x50;
    pEVar7 = (EClipPlane *)_allocBucketAlloc__FUiUi(0x50,0x1b);
                    /* end of inlined section */
    iVar9 = 1;
    do {
      bVar2 = iVar9 != -1;
      iVar9 = iVar9 + -1;
    } while (bVar2);
    puVar1 = (undefined *)((int)&vCorners->field0_0x0 + 7);
                    /* end of inlined section */
    uVar4 = (uint)puVar1 & 7;
    uVar5 = (uint)vCorners & 7;
    uVar13 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
             uVar13 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
             *(ulong *)((int)vCorners - uVar5) >> uVar5 * 8;
    fVar15 = (vCorners->field0_0x0).d[2];
    puVar1 = (undefined *)((int)&pEVar7->vCorners[0].field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
    uVar4 = (uint)pEVar7 & 7;
    *(ulong *)((int)pEVar7 - uVar4) =
         uVar13 << uVar4 * 8 |
         *(ulong *)((int)pEVar7 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    pEVar7->vCorners[0].field0_0x0.d[2] = fVar15;
    if (*(int *)&this->m_reverseCulling == 0) {
      iVar9 = 1;
      iVar8 = 2;
    }
    else {
      iVar9 = 2;
      iVar8 = 1;
    }
    pEVar11 = vCorners + iVar9;
    puVar1 = (undefined *)((int)&pEVar11->field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar5 = (uint)pEVar11 & 7;
    uVar13 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
             in_t1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
             *(ulong *)((int)pEVar11 - uVar5) >> uVar5 * 8;
    fVar15 = (pEVar11->field0_0x0).d[2];
    puVar1 = (undefined *)((int)&pEVar7->vCorners[1].field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
    uVar4 = (uint)(pEVar7->vCorners + 1) & 7;
    puVar6 = (ulong *)((int)(pEVar7->vCorners + 1) - uVar4);
    *puVar6 = uVar13 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    pEVar7->vCorners[1].field0_0x0.d[2] = fVar15;
    pEVar10 = vCorners + iVar8;
    puVar1 = (undefined *)((int)&pEVar10->field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    uVar5 = (uint)pEVar10 & 7;
    uVar13 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
             (long)(int)pEVar11 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
             *(ulong *)((int)pEVar10 - uVar5) >> uVar5 * 8;
    fVar15 = (pEVar10->field0_0x0).d[2];
    in_t1 = (ulong)(int)fVar15;
    puVar1 = (undefined *)((int)&pEVar7->vCorners[2].field0_0x0 + 7);
    uVar4 = (uint)puVar1 & 7;
    puVar6 = (ulong *)(puVar1 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
    uVar4 = (uint)(pEVar7->vCorners + 2) & 7;
    puVar6 = (ulong *)((int)(pEVar7->vCorners + 2) - uVar4);
    *puVar6 = uVar13 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    pEVar7->vCorners[2].field0_0x0.d[2] = fVar15;
    *(undefined4 *)&pEVar7->cull = 0;
    SetUpClipPlane__12EClipContextP10EClipPlaneb(this,pEVar7,false);
  }
  iVar9 = 0;
  do {
    iVar8 = iVar9 + 1;
    if (iVar9 < nCorners) {
                    /* inlined from c:/eor/src2/engine/window/e_portalwindow.h */
      do {
        pEVar7 = (EClipPlane *)_allocBucketAlloc__FUiUi(0x50,0x1b);
        iVar14 = iVar9 + 2;
                    /* end of inlined section */
        uVar13 = 1;
        do {
          bVar2 = uVar13 != 0xffffffffffffffff;
          uVar13 = (ulong)((int)uVar13 + -1);
        } while (bVar2);
                    /* end of inlined section */
        iVar3 = (iVar9 + 1) % nCorners;
        puVar1 = (undefined *)((int)&(this->m_vEye).field0_0x0 + 7);
        uVar4 = (uint)puVar1 & 7;
        uVar5 = (uint)this & 7;
        uVar13 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
                 uVar13 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                 *(ulong *)((int)this - uVar5) >> uVar5 * 8;
        fVar15 = (this->m_vEye).field0_0x0.d[2];
        puVar1 = (undefined *)((int)&pEVar7->vCorners[0].field0_0x0 + 7);
        uVar4 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar4);
        *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
        uVar4 = (uint)pEVar7 & 7;
        *(ulong *)((int)pEVar7 - uVar4) =
             uVar13 << uVar4 * 8 |
             *(ulong *)((int)pEVar7 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        pEVar7->vCorners[0].field0_0x0.d[2] = fVar15;
        if (nCorners == 0) {
          trap(7);
        }
        iVar12 = iVar3;
        if (*(int *)&this->m_reverseCulling != 0) {
          iVar12 = iVar9;
          iVar9 = iVar3;
        }
        pEVar10 = vCorners + iVar9;
        puVar1 = (undefined *)((int)&pEVar10->field0_0x0 + 7);
        uVar4 = (uint)puVar1 & 7;
        uVar5 = (uint)pEVar10 & 7;
        uVar13 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
                 in_t1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
                 *(ulong *)((int)pEVar10 - uVar5) >> uVar5 * 8;
        fVar15 = (pEVar10->field0_0x0).d[2];
        puVar1 = (undefined *)((int)&pEVar7->vCorners[1].field0_0x0 + 7);
        uVar4 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar4);
        *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
        uVar4 = (uint)(pEVar7->vCorners + 1) & 7;
        puVar6 = (ulong *)((int)(pEVar7->vCorners + 1) - uVar4);
        *puVar6 = uVar13 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        pEVar7->vCorners[1].field0_0x0.d[2] = fVar15;
        pEVar11 = vCorners + iVar12;
        puVar1 = (undefined *)((int)&pEVar11->field0_0x0 + 7);
        uVar4 = (uint)puVar1 & 7;
        uVar5 = (uint)pEVar11 & 7;
        uVar13 = (*(long *)(puVar1 + -uVar4) << (7 - uVar4) * 8 |
                 (long)(int)pEVar10 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) &
                 -1L << (8 - uVar5) * 8 | *(ulong *)((int)pEVar11 - uVar5) >> uVar5 * 8;
        fVar15 = (pEVar11->field0_0x0).d[2];
        in_t1 = (ulong)(int)fVar15;
        puVar1 = (undefined *)((int)&pEVar7->vCorners[2].field0_0x0 + 7);
        uVar4 = (uint)puVar1 & 7;
        puVar6 = (ulong *)(puVar1 + -uVar4);
        *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
        uVar4 = (uint)(pEVar7->vCorners + 2) & 7;
        puVar6 = (ulong *)((int)(pEVar7->vCorners + 2) - uVar4);
        *puVar6 = uVar13 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
        pEVar7->vCorners[2].field0_0x0.d[2] = fVar15;
        *(uint *)&pEVar7->cull = _originalFrust ^ 1;
        SetUpClipPlane__12EClipContextP10EClipPlaneb(this,pEVar7,SUB41(_originalFrust,0));
        iVar9 = iVar14;
      } while (iVar14 < nCorners);
    }
    iVar9 = iVar8;
  } while (iVar8 < 2);
  if (!frust) {
    if (pNode == (void *)0x0) {
      pEVar7 = (this->m_portalPlaneList).m_pHead;
    }
    else {
                    /* end of inlined section */
      pEVar7 = *(EClipPlane **)((int)pNode + 0x48);
    }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
    ClipClipPlanes__12EClipContextP10EClipPlaneN31
              (this,pEVar7,(EClipPlane *)0x0,((this->m_clipPlaneList).m_pHead)->pNext->pNext,
               (EClipPlane *)0x0);
    if (pNode != (void *)0x0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
      pEVar7 = (this->m_portalPlaneList).m_pHead;
                    /* end of inlined section */
      ClipClipPlanes__12EClipContextP10EClipPlaneN31
                (this,*(EClipPlane **)((int)pNode + 0x48),(EClipPlane *)0x0,pEVar7,
                 *(EClipPlane **)((int)pNode + 0x48));
      ClipClipPlanes__12EClipContextP10EClipPlaneN31
                (this,pEVar7,*(EClipPlane **)((int)pNode + 0x48),*(EClipPlane **)((int)pNode + 0x48)
                 ,(EClipPlane *)0x0);
    }
  }
  CalcInnerRadius__12EClipContext(this);
  return;
}

void EClipContext::ClipClipPlanes(EClipPlane *pFirstToTest, EClipPlane *pTestEnd, EClipPlane *pFirstCompare, EClipPlane *pCompareEnd) {
	EClipPlane *pTest;
	EClipPlane *pNext;
	void *pNode;
	EClipPlane *pCompare;
	EVec4 *this;
	EVec3 &v;
	EVec3 &v;
	void *pNode;
	
  EClipPlane *pEVar1;
  int iVar2;
  EVec4 *pEVar3;
  EClipPlane *pEVar4;
  float fVar5;
  
  if (pFirstToTest == pTestEnd) {
    return;
  }
                    /* end of inlined section */
  iVar2 = *(int *)&pFirstToTest->cull;
  do {
    pEVar1 = pFirstToTest->pNext;
    if ((iVar2 != 0) && (pFirstCompare != pCompareEnd)) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      pEVar3 = &pFirstCompare->vPlane;
      pEVar4 = pFirstCompare;
      do {
        fVar5 = (pEVar4->vPlane).field0_0x0.d[0];
                    /* end of inlined section */
        if (fVar5 * pFirstToTest->vCorners[1].field0_0x0.d[0] +
            (pEVar3->field0_0x0).d[1] * pFirstToTest->vCorners[1].field0_0x0.d[1] +
            (pEVar3->field0_0x0).d[2] * pFirstToTest->vCorners[1].field0_0x0.d[2] +
            (pEVar3->field0_0x0).d[3] <= 0.0) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
          if (fVar5 * pFirstToTest->vCorners[2].field0_0x0.d[0] +
              (pEVar3->field0_0x0).d[1] * pFirstToTest->vCorners[2].field0_0x0.d[1] +
              (pEVar3->field0_0x0).d[2] * pFirstToTest->vCorners[2].field0_0x0.d[2] +
              (pEVar3->field0_0x0).d[3] <= 0.0) {
            if (pFirstToTest == pCompareEnd) {
              pCompareEnd = pEVar1;
            }
            RemoveAndDeleteClipPlane__12EClipContextP10EClipPlane(this,pFirstToTest);
            break;
          }
                    /* end of inlined section */
          pEVar4 = pEVar4->pNext;
        }
        else {
          pEVar4 = pEVar4->pNext;
        }
        pEVar3 = &pEVar4->vPlane;
      } while (pEVar4 != pCompareEnd);
    }
    if (pEVar1 == pTestEnd) {
      return;
    }
    iVar2 = *(int *)&pEVar1->cull;
    pFirstToTest = pEVar1;
  } while( true );
}

void EClipContext::SetUpClipPlane(EClipPlane *pPlane, bool frust) {
	EVec4 *this;
	EVec3 *vPoints;
	EVec4 *this;
	EVec3 &v;
	EVec3 *this;
	EVec3 &v;
	EVec4 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec4 *this;
	EVec3 *this;
	TLinkedList<EClipPlane,68,72> *this;
	EClipPlane *pNewNode;
	EClipPlane *pNode;
	void *pNode;
	TLinkedList<EClipPlane,68,72> *this;
	EClipPlane *pNewNode;
	EClipPlane *pNode;
	void *pNode;
	
  undefined *puVar1;
  EClipPlane *pEVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  fVar10 = pPlane->vCorners[1].field0_0x0.d[0];
  fVar8 = pPlane->vCorners[1].field0_0x0.d[1] - pPlane->vCorners[0].field0_0x0.d[1];
  fVar11 = pPlane->vCorners[1].field0_0x0.d[2] - pPlane->vCorners[0].field0_0x0.d[2];
  fVar9 = fVar10 - pPlane->vCorners[0].field0_0x0.d[0];
  fVar10 = fVar10 - pPlane->vCorners[2].field0_0x0.d[0];
  fVar7 = pPlane->vCorners[1].field0_0x0.d[2] - pPlane->vCorners[2].field0_0x0.d[2];
  fVar6 = pPlane->vCorners[1].field0_0x0.d[1] - pPlane->vCorners[2].field0_0x0.d[1];
  uVar5 = CONCAT44(fVar11 * fVar10 - fVar9 * fVar7,fVar8 * fVar7 - fVar11 * fVar6);
  puVar1 = (undefined *)((int)&(pPlane->vPlane).field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | uVar5 >> (7 - uVar3) * 8;
  uVar3 = (uint)&pPlane->vPlane & 7;
  puVar4 = (ulong *)((int)&pPlane->vPlane - uVar3);
  *puVar4 = uVar5 << uVar3 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (pPlane->vPlane).field0_0x0.d[2] = fVar9 * fVar6 - fVar8 * fVar10;
  fVar7 = (pPlane->vPlane).field0_0x0.d[0];
  fVar6 = (pPlane->vPlane).field0_0x0.d[1];
  fVar8 = (pPlane->vPlane).field0_0x0.d[2];
  fVar6 = sqrtf(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8);
  if (fVar6 != 0.0) {
    fVar6 = 1.0 / fVar6;
    (pPlane->vPlane).field0_0x0.d[0] = (pPlane->vPlane).field0_0x0.d[0] * fVar6;
    fVar7 = (pPlane->vPlane).field0_0x0.d[2];
    (pPlane->vPlane).field0_0x0.d[1] = (pPlane->vPlane).field0_0x0.d[1] * fVar6;
    (pPlane->vPlane).field0_0x0.d[2] = fVar7 * fVar6;
  }
  fVar6 = (pPlane->vPlane).field0_0x0.d[1];
  (pPlane->vPlane).field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
  (pPlane->vPlane).field0_0x0.d[3] =
       -(pPlane->vCorners[0].field0_0x0.d[0] * (pPlane->vPlane).field0_0x0.d[0] +
         pPlane->vCorners[0].field0_0x0.d[1] * fVar6 +
        pPlane->vCorners[0].field0_0x0.d[2] * (pPlane->vPlane).field0_0x0.d[2]);
  if (frust) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pPlane->pLast = (this->m_clipPlaneList).m_pTail;
    pEVar2 = (this->m_clipPlaneList).m_pTail;
    if (pEVar2 == (EClipPlane *)0x0) {
      (this->m_clipPlaneList).m_pHead = pPlane;
    }
    else {
      pEVar2->pNext = pPlane;
    }
    pPlane->pNext = (EClipPlane *)0x0;
                    /* end of inlined section */
    (this->m_clipPlaneList).m_pTail = pPlane;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pPlane->pLast = (this->m_portalPlaneList).m_pTail;
    pEVar2 = (this->m_portalPlaneList).m_pTail;
    if (pEVar2 == (EClipPlane *)0x0) {
      (this->m_portalPlaneList).m_pHead = pPlane;
    }
    else {
      pEVar2->pNext = pPlane;
    }
    pPlane->pNext = (EClipPlane *)0x0;
    (this->m_portalPlaneList).m_pTail = pPlane;
                    /* end of inlined section */
    this->m_nPortalPlanes = this->m_nPortalPlanes + 1;
  }
  return;
}

void EClipContext::RemoveAndDeleteClipPlane(EClipPlane *pPlane) {
	TLinkedList<EClipPlane,68,72> *this;
	EClipPlane *pNode;
	void *pNode;
	EClipPlane *pNode;
	void *pNode;
	void *pNode;
	EClipPlane *pNode;
	void *pNode;
	EClipPlane *pNode;
	EClipPlane *pNode;
	void *p;
	
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  if ((this->m_portalPlaneList).m_pHead == pPlane) {
    (this->m_portalPlaneList).m_pHead = pPlane->pNext;
  }
  else {
    pPlane->pLast->pNext = pPlane->pNext;
  }
  if ((this->m_portalPlaneList).m_pTail == pPlane) {
    (this->m_portalPlaneList).m_pTail = pPlane->pLast;
  }
  else {
    pPlane->pNext->pLast = pPlane->pLast;
  }
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/window/e_portalwindow.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/window/e_portalwindow.h */
  this->m_nPortalPlanes = this->m_nPortalPlanes + -1;
  _allocBucketFree__FPvUiUi(pPlane,0x50,0x1b);
  return;
}

void EClipContext::RemoveAndDeleteClipOccluder(EClipOccluder *pOccluder) {
	TLinkedList<EClipOccluder,88,92> *this;
	EClipOccluder *pNode;
	void *pNode;
	EClipOccluder *pNode;
	void *pNode;
	void *pNode;
	EClipOccluder *pNode;
	void *pNode;
	EClipOccluder *pNode;
	EClipOccluder *pNode;
	EClipOccluder *this;
	TLinkedList<EClipPlane,68,72> *this;
	EClipPlane *pNode;
	TLinkedList<EClipPlane,68,72> *this;
	EClipPlane *pNext;
	void *pNode;
	void *p;
	TLinkedList<EClipPlane,68,72> *this;
	
  EClipPlane *pEVar1;
  EClipPlane *pAddress;
  
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  if ((this->m_occluderList).m_pHead == pOccluder) {
    (this->m_occluderList).m_pHead = pOccluder->pNext;
  }
  else {
    pOccluder->pLast->pNext = pOccluder->pNext;
  }
  if ((this->m_occluderList).m_pTail == pOccluder) {
    (this->m_occluderList).m_pTail = pOccluder->pLast;
  }
  else {
    pOccluder->pNext->pLast = pOccluder->pLast;
  }
                    /* end of inlined section */
  this->m_nOccluders = this->m_nOccluders + -1;
  if (pOccluder != (EClipOccluder *)0x0) {
                    /* inlined from c:/eor/src2/engine/window/e_portalwindow.h */
    pAddress = (pOccluder->planeList).m_pHead;
    while (pAddress != (EClipPlane *)0x0) {
      pEVar1 = pAddress->pNext;
      _allocBucketFree__FPvUiUi(pAddress,0x50,0x1b);
      pAddress = pEVar1;
    }
    (pOccluder->planeList).m_pHead = (EClipPlane *)0x0;
    (pOccluder->planeList).m_pTail = (EClipPlane *)0x0;
    __dl__13EClipOccluderPv(pOccluder);
  }
                    /* end of inlined section */
  return;
}

EVec3 operator*(float scaler, EVec3 &vVec) {
	EVec3 *this;
	
  float fVar1;
  float fVar2;
  
  fVar1 = (vVec->field0_0x0).d[0];
  fVar2 = (vVec->field0_0x0).d[1];
  (__return_storage_ptr__->field0_0x0).d[2] = scaler * (vVec->field0_0x0).d[2];
  (__return_storage_ptr__->field0_0x0).d[0] = scaler * fVar1;
  (__return_storage_ptr__->field0_0x0).d[1] = scaler * fVar2;
  return __return_storage_ptr__;
}

sceVu0FMATRIX& EMat4::operator float (&)[3][3]() {
  return (float (*) [4] [4])this;
}

void EClipOccluder::operator delete(void *p) {
  _allocBucketFree__FPvUiUi(p,0x60,0x2b);
  return;
}

float EPortalWindow::GetClipRatio() {
  return this->m_clipRatio;
}

EVec3& EPortalWindow::GetLookDir() {
  return &this->m_pcc->m_vLookDir;
}

EPortalWindow* EPortalWindow::CastPortalWindow() {
  return this;
}
