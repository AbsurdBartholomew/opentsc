// STATUS: NOT STARTED

#include "e_3dwindow.h"

__vtbl_ptr_type E3DWindow virtual table[18] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E3DWindow::~E3DWindow,
		/* .__delta2 = */ 7608
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E3DWindow::Select,
		/* .__delta2 = */ 5744
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
		/* .__pfn = */ &EWindow::CastPortalWindow,
		/* .__delta2 = */ -24872
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E3DWindow::SetProjection,
		/* .__delta2 = */ 4800
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E3DWindow::SetProjection,
		/* .__delta2 = */ 4736
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E3DWindow::SetOrthoProjection,
		/* .__delta2 = */ 4864
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E3DWindow::SetLookAt,
		/* .__delta2 = */ 5104
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E3DWindow::SetLookAtPos,
		/* .__delta2 = */ 5016
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &E3DWindow::SetLookAt,
		/* .__delta2 = */ 4928
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

E3DWindow* E3DWindow::E3DWindow() {
	TRect<float> *this;
	TRect<float> &r;
	TRect<float> *this;
	TRect<float> &r;
	
  __7EWindow(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EWindow__vtable *)_vt_9E3DWindow;
  Id__5EMat4(&this->m_mProjection);
  Id__5EMat4(&this->m_mLookAt);
  Id__5EMat4(&this->m_mLookAtDotProjection);
                    /* inlined from /eor/src2/common/math/e_rect.h */
  (this->m_rViewportIn).left = (this->field0_0x0).m_rIn.left;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
  (this->m_rViewportIn).top = (this->field0_0x0).m_rIn.top;
  (this->m_rViewportIn).right = (this->field0_0x0).m_rIn.right;
  (this->m_rViewportIn).bottom = (this->field0_0x0).m_rIn.bottom;
  (this->m_rViewportOut).left = (this->field0_0x0).m_rOut.left;
  (this->m_rViewportOut).top = (this->field0_0x0).m_rOut.top;
  (this->m_rViewportOut).right = (this->field0_0x0).m_rOut.right;
  (this->m_rViewportOut).bottom = (this->field0_0x0).m_rOut.bottom;
  return this;
}

void E3DWindow::SetProjection(EMat4 &mProjection) {
  EWindow__vtable *pEVar1;
  
  __as__5EMat4RC5EMat4(&this->m_mProjection,mProjection);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[3].InputCoordinatesChanged)
            ((int)&(this->field0_0x0).m_mWindow.field0_0x0 +
             (int)*(short *)&pEVar1[3].WindowMatrixChanged);
  return;
}

void E3DWindow::SetProjection(float fovYDegrees, float aspect, float nearPlane, float farPlane) {
	EMat4 mProj;
	
  EWindow__vtable *pEVar1;
  EMat4 mProj;
  
  Projection__5EMat4ffff(&mProj,fovYDegrees,aspect,nearPlane,farPlane);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[2].WindowMatrixChanged)
            ((int)&(this->field0_0x0).m_mWindow.field0_0x0 + (int)*(short *)&pEVar1[2].Select,&mProj
            );
  return;
}

void E3DWindow::SetOrthoProjection(float left, float right, float bottom, float top, float nearPlane, float farPlane) {
	EMat4 mProj;
	
  EWindow__vtable *pEVar1;
  EMat4 mProj;
  
  Ortho__5EMat4ffffff(&mProj,left,right,bottom,top,nearPlane,farPlane);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[2].WindowMatrixChanged)
            ((int)&(this->field0_0x0).m_mWindow.field0_0x0 + (int)*(short *)&pEVar1[2].Select,&mProj
            );
  return;
}

void E3DWindow::SetLookAt(EMat4 &mLookAt) {
  EWindow__vtable *pEVar1;
  
  __as__5EMat4RC5EMat4(&this->m_mLookAt,mLookAt);
  Invert__5EMat4RC5EMat4(&this->m_mLookAtPos,mLookAt);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[3].SetRenderSurface)
            ((int)&(this->field0_0x0).m_mWindow.field0_0x0 +
             (int)*(short *)&pEVar1[3].OutputCoordinatesChanged);
  return;
}

void E3DWindow::SetLookAtPos(EMat4 &mLookAtPos) {
  EWindow__vtable *pEVar1;
  
  __as__5EMat4RC5EMat4(&this->m_mLookAtPos,mLookAtPos);
  Invert__5EMat4RC5EMat4(&this->m_mLookAt,mLookAtPos);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[3].SetRenderSurface)
            ((int)&(this->field0_0x0).m_mWindow.field0_0x0 +
             (int)*(short *)&pEVar1[3].OutputCoordinatesChanged);
  return;
}

void E3DWindow::SetLookAt(EVec3 &vEye, EVec3 &vTarget, EVec3 &vUp) {
  EWindow__vtable *pEVar1;
  
  LookAtPos__5EMat4RC5EVec3N21(&this->m_mLookAtPos,vEye,vTarget,vUp);
  Invert__5EMat4RC5EMat4(&this->m_mLookAt,&this->m_mLookAtPos);
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[3].SetRenderSurface)
            ((int)&(this->field0_0x0).m_mWindow.field0_0x0 +
             (int)*(short *)&pEVar1[3].OutputCoordinatesChanged);
  return;
}

void E3DWindow::SetViewport(EFloatRect &rect) {
	TRect<float> *this;
	TRect<float> &r;
	
                    /* inlined from /eor/src2/common/math/e_rect.h */
  (this->m_rViewportIn).left = rect->left;
  (this->m_rViewportIn).top = rect->top;
  (this->m_rViewportIn).right = rect->right;
                    /* end of inlined section */
  (this->m_rViewportIn).bottom = rect->bottom;
  CalcViewport__9E3DWindow(this);
  SetClip__7EWindowRCt5TRect1Zf(&this->field0_0x0,rect);
  return;
}

void E3DWindow::CalcViewport() {
	EWindow *this;
	float xIn;
	float yIn;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EWindow *this;
	float xIn;
	float yIn;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
                    /* inlined from c:/eor/src2/engine/window/e_window.h */
  fVar4 = (this->field0_0x0).m_mWindow.field0_0x0.d[0];
  fVar7 = (this->field0_0x0).m_mWindow.field0_0x0.d[1][1];
  fVar3 = (this->m_rViewportIn).top;
  fVar1 = (this->m_rViewportIn).right;
  fVar2 = (this->m_rViewportIn).bottom;
  fVar6 = (this->field0_0x0).m_mWindow.field0_0x0.d[3][0];
  fVar5 = (this->field0_0x0).m_mWindow.field0_0x0.d[3][1];
  (this->m_rViewportOut).left = (this->m_rViewportIn).left * fVar4 + fVar6;
  (this->m_rViewportOut).right = fVar1 * fVar4 + fVar6;
  (this->m_rViewportOut).bottom = fVar2 * fVar7 + fVar5;
                    /* end of inlined section */
  (this->m_rViewportOut).top = fVar3 * fVar7 + fVar5;
  CalcViewportStructures__9E3DWindow(this);
  return;
}

void E3DWindow::CalcViewportInv() {
	EWindow *this;
	float xIn;
	float yIn;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EWindow *this;
	float xIn;
	float yIn;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
                    /* inlined from c:/eor/src2/engine/window/e_window.h */
  fVar4 = (this->field0_0x0).m_mWindow.field0_0x0.d[3][0];
  fVar7 = (this->field0_0x0).m_mWindow.field0_0x0.d[3][1];
  fVar3 = (this->m_rViewportOut).top;
  fVar1 = (this->m_rViewportOut).right;
  fVar2 = (this->m_rViewportOut).bottom;
  fVar6 = (this->field0_0x0).m_mWindow.field0_0x0.d[0];
  fVar5 = (this->field0_0x0).m_mWindow.field0_0x0.d[1][1];
  (this->m_rViewportIn).left = ((this->m_rViewportOut).left - fVar4) / fVar6;
  (this->m_rViewportIn).right = (fVar1 - fVar4) / fVar6;
  (this->m_rViewportIn).bottom = (fVar2 - fVar7) / fVar5;
                    /* end of inlined section */
  (this->m_rViewportIn).top = (fVar3 - fVar7) / fVar5;
  CalcViewportStructures__9E3DWindow(this);
  return;
}

void E3DWindow::CalcViewportStructures() {
  ComputeViewport__9EGraphicsR9EViewportRCt5TRect1Zf(_pGfx,&this->m_vpIn,&this->m_rViewportIn);
  ComputeViewport__9EGraphicsR9EViewportRCt5TRect1Zf(_pGfx,&this->m_vpOut,&this->m_rViewportOut);
  return;
}

void E3DWindow::ProjectionMatrixChanged() {
  CalcLookAtDotProjection__9E3DWindow(this);
  return;
}

void E3DWindow::LookAtMatrixChanged() {
  CalcLookAtDotProjection__9E3DWindow(this);
  return;
}

void E3DWindow::CalcLookAtDotProjection() {
	EMat4 *this;
	EMat4 &l;
	EMat4 &r;
	EMat4 &m;
	EMat4 *this;
	EMat4 &l;
	EMat4 &r;
	
  float (*paafVar1) [4] [4];
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  EMat4 EStack_70;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  paafVar1 = __opRA3_A3_f__5EMat4(&EStack_70);
  sceVu0MulMatrix(paafVar1,&this->m_mProjection,&this->m_mLookAt);
  __as__5EMat4RC5EMat4(&this->m_mLookAtDotProjection,&EStack_70);
                    /* end of inlined section */
  CalcViewportStructures__9E3DWindow(this);
  return;
}

void E3DWindow::Select(ERC *prc) {
	ERC *this;
	ERC *this;
	ERC *this;
	
  float *pfVar1;
  EMat4 *this_00;
  EMat4 *this_01;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* inlined from e_dl.h */
                    /* end of inlined section */
                    /* inlined from e_dl.h */
  pfVar1 = (float *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x20,0x10);
  this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
  this_01 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
  if (((pfVar1 != (float *)0x0) && (this_00 != (EMat4 *)0x0)) && (this_01 != (EMat4 *)0x0)) {
    fVar2 = (this->m_vpOut).vScale.field0_0x0.d[1];
    fVar3 = (this->m_vpOut).vScale.field0_0x0.d[2];
    fVar4 = (this->m_vpOut).vScale.field0_0x0.d[3];
    *pfVar1 = (this->m_vpOut).vScale.field0_0x0.d[0];
    pfVar1[1] = fVar2;
    pfVar1[2] = fVar3;
    pfVar1[3] = fVar4;
    fVar2 = (this->m_vpOut).vOffset.field0_0x0.d[1];
    fVar3 = (this->m_vpOut).vOffset.field0_0x0.d[2];
    fVar4 = (this->m_vpOut).vOffset.field0_0x0.d[3];
    pfVar1[4] = (this->m_vpOut).vOffset.field0_0x0.d[0];
    pfVar1[5] = fVar2;
    pfVar1[6] = fVar3;
    pfVar1[7] = fVar4;
    (*(code *)prc->__vtable->Lights)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RestoreState,pfVar1);
    __as__5EMat4RC5EMat4(this_00,&this->m_mLookAt);
    (*(code *)prc->__vtable->RenderSurface)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->AlphaTest,this_00);
    __as__5EMat4RC5EMat4(this_01,&this->m_mProjection);
    (*(code *)prc->__vtable->SaveImageData)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->Debug,this_01);
  }
  Select__7EWindowP3ERC(&this->field0_0x0,prc);
  return;
}

void E3DWindow::InputCoordinatesChanged() {
  CalcViewportInv__9E3DWindow(this);
  return;
}

void E3DWindow::OutputCoordinatesChanged() {
  CalcViewport__9E3DWindow(this);
  return;
}

void E3DWindow::CalcTextureProjection(EMat4 &mOut) {
	EMat4 mOffset;
	EMat4 *this;
	
  float (*paafVar1) [4] [4];
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  undefined4 uVar2;
  EMat4 mOffset;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  EMat4 EStack_90;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  __as__5EMat4RC5EMat4(mOut,&this->m_mLookAtDotProjection);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  uVar2 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_a0 = 0x3f000000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_9c = 0xbf000000;
                    /* end of inlined section */
  local_98 = 0x3f800000;
  Scale__5EMat4RC5EVec3(&mOffset,(EVec3 *)&local_a0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_a0 = 0x3f000000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_9c = 0x3f000000;
  local_98 = uVar2;
                    /* end of inlined section */
  PostTranslate__5EMat4RC5EVec3(&mOffset,(EVec3 *)&local_a0);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  paafVar1 = __opRA3_A3_f__5EMat4(&EStack_90);
  sceVu0MulMatrix(paafVar1,&mOffset,&this->m_mLookAtDotProjection);
  __as__5EMat4RC5EMat4(mOut,&EStack_90);
  return;
}

bool E3DWindow::TransformToScreen(EVec3 &vWorld, EVec2 &vScreenOut) {
	EVec4 vEye;
	EVec3 &v;
	EVec4 vOut;
	float q;
	int d;
	EVec2 *this;
	int value;
	int value;
	int value;
	int value;
	
  EVec4 *pEVar1;
  EVec4__null___1__1 *pEVar2;
  bool bVar3;
  EVec4 *pEVar4;
  EViewport *pEVar5;
  EVec4 *pEVar6;
  int iVar7;
  float fVar8;
  EVec4 vEye;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  EVec4 vOut;
  
                    /* end of inlined section */
  pEVar4 = &vEye;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
  local_58 = (vWorld->field0_0x0).d[2];
  local_60 = (vWorld->field0_0x0).d[0];
  local_5c = (vWorld->field0_0x0).d[1];
  local_54 = 0x3f800000;
  sceVu0ApplyMatrix(&vOut,&this->m_mLookAtDotProjection,&local_60);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vEye.field0_0x0.d[0] = vOut.field0_0x0.d[0];
  vEye.field0_0x0.d[1] = vOut.field0_0x0.d[1];
  vEye.field0_0x0.d[2] = vOut.field0_0x0.d[2];
                    /* end of inlined section */
  vEye.field0_0x0.d[3] = vOut.field0_0x0.d[3];
  if (0.0 < vOut.field0_0x0.d[3]) {
                    /* end of inlined section */
    pEVar5 = &this->m_vpIn;
    pEVar6 = &(this->m_vpIn).vOffset;
    iVar7 = 1;
    do {
                    /* end of inlined section */
      fVar8 = *(float *)pEVar4;
      iVar7 = iVar7 + -1;
      pEVar1 = &pEVar5->vScale;
      pEVar4 = (EVec4 *)((int)pEVar4 + 4);
      pEVar2 = &pEVar6->field0_0x0;
      pEVar6 = (EVec4 *)((int)&pEVar6->field0_0x0 + 4);
      pEVar5 = (EViewport *)((int)&(pEVar5->vScale).field0_0x0 + 4);
      (vScreenOut->field0_0x0).d[0] =
           fVar8 * (1.0 / vOut.field0_0x0.d[3]) * (pEVar1->field0_0x0).d[0] + pEVar2->d[0];
      vScreenOut = (EVec2 *)((int)&vScreenOut->field0_0x0 + 4);
    } while (-1 < iVar7);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

bool E3DWindow::BackCullTest(EVec3 *vCorners) {
	EVec4 vt[3];
	float vdelta1x;
	float vdelta1y;
	float vdelta2x;
	float vdelta2y;
	float crossz;
	int v;
	float q;
	EVec4 vOut;
	
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  EVec4 *pEVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  EVec4 vt [3];
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  EVec4 vOut;
  
  pEVar6 = vt;
                    /* end of inlined section */
  iVar5 = 1;
  do {
    bVar1 = iVar5 != -1;
    iVar5 = iVar5 + -1;
  } while (bVar1);
  fVar10 = 0.0;
  iVar5 = 0;
  do {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_b0 = (vCorners->field0_0x0).d[0];
    local_ac = (vCorners->field0_0x0).d[1];
    local_a8 = (vCorners->field0_0x0).d[2];
    local_a4 = 0x3f800000;
    sceVu0ApplyMatrix(&vOut,&this->m_mLookAtDotProjection,&local_b0);
    uVar4 = vOut.field0_0x0.d[3];
    uVar3 = vOut.field0_0x0.d[2];
    uVar2 = vOut.field0_0x0.d[1];
                    /* end of inlined section */
    *(float *)pEVar6 = vOut.field0_0x0.d[0];
    *(float *)((int)pEVar6 + 4) = uVar2;
    *(float *)((int)pEVar6 + 8) = uVar3;
    *(float *)((int)pEVar6 + 0xc) = uVar4;
    if (*(float *)((int)pEVar6 + 0xc) <= fVar10) {
      return true;
    }
    fVar7 = 1.0 / *(float *)((int)pEVar6 + 0xc);
    iVar5 = iVar5 + 1;
    fVar9 = (this->m_vpIn).vScale.field0_0x0.d[0];
    vCorners = vCorners + 1;
    fVar8 = (this->m_vpIn).vOffset.field0_0x0.d[0];
    *(float *)((int)pEVar6 + 4) =
         *(float *)((int)pEVar6 + 4) * fVar7 * (this->m_vpIn).vScale.field0_0x0.d[1] +
         (this->m_vpIn).vOffset.field0_0x0.d[1];
    *(float *)pEVar6 = *(float *)pEVar6 * fVar7 * fVar9 + fVar8;
    pEVar6 = (EVec4 *)((int)pEVar6 + 0x10);
  } while (iVar5 < 3);
  return (vt[1].field0_0x0._0_4_ - vt[0].field0_0x0._0_4_) *
         (vt[2].field0_0x0._4_4_ - vt[1].field0_0x0._4_4_) -
         (vt[1].field0_0x0._4_4_ - vt[0].field0_0x0._4_4_) *
         (vt[2].field0_0x0._0_4_ - vt[1].field0_0x0._0_4_) < 0.0;
}

bool E3DWindow::TransformToWorld(EVec2 &vScreen, EVec3 &vWorldOut) {
	EVec2 vView;
	float right;
	float bottom;
	EVec2 *this;
	EVec2 *this;
	EMat4 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  EVec2 vView;
  float right;
  float bottom;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar7 = ((vScreen->field0_0x0).d[0] - (this->m_vpIn).vOffset.field0_0x0.d[0]) /
          (this->m_vpIn).vScale.field0_0x0.d[0];
  fVar5 = ((vScreen->field0_0x0).d[1] - (this->m_vpIn).vOffset.field0_0x0.d[1]) /
          (this->m_vpIn).vScale.field0_0x0.d[1];
  if (-1.0 <= fVar7) {
                    /* end of inlined section */
    if (1.0 < fVar7) {
      return false;
    }
                    /* end of inlined section */
    if (fVar5 < -1.0) {
      return false;
    }
                    /* end of inlined section */
    if (fVar5 <= 1.0) {
      GetFOVLengths__9E3DWindowPfT1(this,&right,&bottom);
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
      fVar7 = fVar7 * right;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
      fVar5 = fVar5 * bottom;
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      fVar8 = (this->m_mLookAtPos).field0_0x0.d[2];
      fVar9 = (this->m_mLookAtPos).field0_0x0.d[1][2];
      fVar6 = (this->m_mLookAtPos).field0_0x0.d[2][2];
                    /* end of inlined section */
      uVar4 = CONCAT44(((this->m_mLookAtPos).field0_0x0.d[1] * fVar7 +
                       (this->m_mLookAtPos).field0_0x0.d[1][1] * fVar5) -
                       (this->m_mLookAtPos).field0_0x0.d[2][1],
                       ((this->m_mLookAtPos).field0_0x0.d[0] * fVar7 +
                       (this->m_mLookAtPos).field0_0x0.d[1][0] * fVar5) -
                       (this->m_mLookAtPos).field0_0x0.d[2][0]);
      puVar1 = (undefined *)((int)&vWorldOut->field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar4 >> (7 - uVar2) * 8;
      uVar2 = (uint)vWorldOut & 7;
      *(ulong *)((int)vWorldOut - uVar2) =
           uVar4 << uVar2 * 8 |
           *(ulong *)((int)vWorldOut - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
      (vWorldOut->field0_0x0).d[2] = (fVar8 * fVar7 + fVar9 * fVar5) - fVar6;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      fVar5 = sqrtf((vWorldOut->field0_0x0).d[0] * (vWorldOut->field0_0x0).d[0] +
                    (vWorldOut->field0_0x0).d[1] * (vWorldOut->field0_0x0).d[1] +
                    (vWorldOut->field0_0x0).d[2] * (vWorldOut->field0_0x0).d[2]);
      if (fVar5 == 0.0) {
        return true;
      }
      fVar5 = 1.0 / fVar5;
      fVar6 = (vWorldOut->field0_0x0).d[1];
      fVar7 = (vWorldOut->field0_0x0).d[2];
      (vWorldOut->field0_0x0).d[0] = (vWorldOut->field0_0x0).d[0] * fVar5;
      (vWorldOut->field0_0x0).d[2] = fVar7 * fVar5;
      (vWorldOut->field0_0x0).d[1] = fVar6 * fVar5;
      return true;
    }
  }
  return false;
}

void E3DWindow::GetNearFar(float *nearPlane, float *farPlane) {
	float a;
	float b;
	
  float fVar1;
  float fVar2;
  
  fVar2 = (this->m_mProjection).field0_0x0.d[3][2];
  fVar1 = (this->m_mProjection).field0_0x0.d[2][2];
  *nearPlane = -(fVar2 + fVar1 * fVar2) / (1.0 - fVar1 * fVar1);
  *farPlane = fVar2 / (fVar1 + 1.0);
  return;
}

void E3DWindow::GetFOVLengths(float *right, float *bottom) {
  *bottom = 1.0 / (this->m_mProjection).field0_0x0.d[1][1];
  *right = 1.0 / (this->m_mProjection).field0_0x0.d[0];
  return;
}

sceVu0FMATRIX& EMat4::operator float (&)[3][3]() {
  return (float (*) [4] [4])this;
}

void E3DWindow::~E3DWindow(int __in_chrg) {
	void *p;
	
                    /* inlined from c:/eor/src2/engine/window/e_3dwindow.cpp */
  ___7EWindow(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    _memmanFree__FPv(this);
  }
  return;
}

E3DWindow* E3DWindow::Cast3DWindow() {
  return this;
}
