// STATUS: NOT STARTED

#include "e_window.h"

EWindow *EWindow::m_pCurrentWindow = NULL;
E3DWindow *EWindow::m_pCurrent3DWindow = NULL;
EPortalWindow *EWindow::m_pCurrentPortalWindow = NULL;

__vtbl_ptr_type EWindow virtual table[10] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EWindow::~EWindow,
		/* .__delta2 = */ -27424
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EWindow::Select,
		/* .__delta2 = */ -27192
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
		/* .__pfn = */ &EWindow::InputCoordinatesChanged,
		/* .__delta2 = */ -24896
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EWindow::OutputCoordinatesChanged,
		/* .__delta2 = */ -24888
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
		/* .__pfn = */ &EWindow::Cast3DWindow,
		/* .__delta2 = */ -24880
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
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EWindow* EWindow::EWindow() {
	EMat4 *this;
	TRect<float> *this;
	TRect<float> *this;
	TRect<float> *this;
	
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  this->__vtable = (EWindow__vtable *)_vt_7EWindow;
                    /* inlined from /eor/src2/common/math/e_rect.h */
  (this->m_rClipIn).left = 0.0;
  (this->m_rClipIn).top = 0.0;
  (this->m_rClipIn).right = 1.0;
  (this->m_rClipIn).bottom = 1.0;
  (this->m_rIn).left = (this->m_rClipIn).left;
  (this->m_rIn).top = (this->m_rClipIn).top;
  (this->m_rIn).right = (this->m_rClipIn).right;
  (this->m_rIn).bottom = (this->m_rClipIn).bottom;
  (this->m_rOut).left = (this->m_rIn).left;
  (this->m_rOut).top = (this->m_rIn).top;
  (this->m_rOut).right = (this->m_rIn).right;
  (this->m_rOut).bottom = (this->m_rIn).bottom;
                    /* end of inlined section */
  *(undefined4 *)&this->m_outputRectNeedsSetting = 1;
  CalcWindowMat__7EWindow(this);
  CalcClip__7EWindow(this);
  this->m_pRenderSurface = (ERenderSurface *)0x0;
  return this;
}

void EWindow::~EWindow(int __in_chrg) {
	void *p;
	
  bool bVar1;
  
  bVar1 = _7EWindow_m_pCurrentWindow == this;
  this->__vtable = (EWindow__vtable *)_vt_7EWindow;
  if (bVar1) {
    _7EWindow_m_pCurrentWindow = (EWindow *)0x0;
  }
  if (_7EWindow_m_pCurrent3DWindow == (E3DWindow *)this) {
    _7EWindow_m_pCurrent3DWindow = (E3DWindow *)0x0;
  }
  if (_7EWindow_m_pCurrentPortalWindow == (EPortalWindow *)this) {
    _7EWindow_m_pCurrentPortalWindow = (EPortalWindow *)0x0;
  }
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from c:/eor/src2/engine/window/e_window.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EWindow::SetRenderSurface(ERenderSurface *pRenderSurface) {
	EFloatRect rect;
	
  EGlobalManagerClient__vtable *pEVar1;
  TRect_float_ rect;
  
  if (this->m_pRenderSurface != pRenderSurface) {
    this->m_pRenderSurface = pRenderSurface;
    if (pRenderSurface == (ERenderSurface *)0x0) {
      pEVar1 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar1[5].EGlobalManagerClient)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 5),&rect);
    }
    else {
      (*(code *)pRenderSurface->__vtable->GetImageData)
                ((int)&pRenderSurface->m_xsize + (int)*(short *)&pRenderSurface->__vtable->GetFlags,
                 &rect);
    }
    SetOutputCoordinates__7EWindowRCt5TRect1Zf(this,&rect);
  }
  return;
}

void EWindow::Select(ERC *prc) {
	EFloatRect rOut;
	ERC *this;
	ERC *this;
	
  ERenderSurface *pEVar1;
  EGlobalManagerClient__vtable *pEVar2;
  void *pvVar3;
  EMat4 *this_00;
  TRect_float_ rOut;
  
  if (*(int *)&this->m_outputRectNeedsSetting != 0) {
                    /* end of inlined section */
    pEVar1 = this->m_pRenderSurface;
    if (pEVar1 == (ERenderSurface *)0x0) {
      pEVar2 = (_pGfx->field0_0x0).__vtable;
      (*(code *)pEVar2[5].EGlobalManagerClient)
                ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar2 + 5),&rOut);
    }
    else {
      (*(code *)pEVar1->__vtable->GetImageData)
                ((int)&pEVar1->m_xsize + (int)*(short *)&pEVar1->__vtable->GetFlags);
    }
    SetOutputCoordinates__7EWindowRCt5TRect1Zf(this,&rOut);
    *(undefined4 *)&this->m_outputRectNeedsSetting = 0;
  }
  _7EWindow_m_pCurrentWindow = this;
  _7EWindow_m_pCurrent3DWindow =
       (E3DWindow *)
       (*(code *)this->__vtable[1].SetRenderSurface)
                 ((int)&(this->m_mWindow).field0_0x0 +
                  (int)*(short *)&this->__vtable[1].OutputCoordinatesChanged);
  _7EWindow_m_pCurrentPortalWindow =
       (EPortalWindow *)
       (*(code *)this->__vtable[1].CastPortalWindow)
                 ((int)&(this->m_mWindow).field0_0x0 +
                  (int)*(short *)&this->__vtable[1].Cast3DWindow);
                    /* inlined from e_dl.h */
                    /* end of inlined section */
                    /* inlined from e_dl.h */
  pvVar3 = Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x10,0x10);
  this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
  if ((pvVar3 != (void *)0x0) && (this_00 != (EMat4 *)0x0)) {
    pEVar2 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar2[5].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar2[5].ManagedStartup,pvVar3,
               &this->m_rClipOutClamped,&this->m_rOut);
    (*(code *)prc->__vtable->DirectRect)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->RectList,pvVar3);
    __as__5EMat4RC5EMat4(this_00,&this->m_mWindow);
    (*(code *)prc->__vtable->SetBlendMode)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->SetCombineMode,this_00);
  }
  return;
}

void EWindow::TransformToPixel(EVec2 &vIn, EVec2 &vOut) {
	EVec2 vDevice;
	EWindow *this;
	EVec2 &vIn;
	EVec2 *this;
	EMat4 *this;
	EMat4 *this;
	EVec2 *this;
	EMat4 *this;
	EMat4 *this;
	
  EVec2 vDevice;
  
                    /* inlined from c:/eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/window/e_window.h */
  vDevice.field0_0x0.d[0] =
       (vIn->field0_0x0).d[0] * (this->m_mWindow).field0_0x0.d[0] +
       (this->m_mWindow).field0_0x0.d[3][0];
  vDevice.field0_0x0.d[1] =
       (vIn->field0_0x0).d[1] * (this->m_mWindow).field0_0x0.d[1][1] +
       (this->m_mWindow).field0_0x0.d[3][1];
                    /* end of inlined section */
  DeviceToPixelCoordinates__12EPs2GraphicsRC5EVec2RCt5TRect1ZfR5EVec2
            (&_ps2gfx,&vDevice,&this->m_rOut,vOut);
  return;
}

void EWindow::CalcWindowMat() {
	float xScale;
	float inWidth;
	float yScale;
	float inHeight;
	TRect<float> *this;
	TRect<float> *this;
	EMat4 *this;
	EMat4 *this;
	float x;
	float y;
	float y;
	float x;
	EMat4 *this;
	float x;
	float y;
	float y;
	float x;
	
  undefined8 unaff_s0;
  undefined8 unaff_retaddr;
  float fVar1;
  float fVar2;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_rect.h */
  fVar2 = (this->m_rIn).right - (this->m_rIn).left;
                    /* end of inlined section */
  if (fVar2 == 0.0) {
    fVar2 = 1.0;
    fVar1 = (this->m_rIn).top;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    fVar2 = ((this->m_rOut).right - (this->m_rOut).left) / fVar2;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
    fVar1 = (this->m_rIn).top;
  }
  fVar1 = (this->m_rIn).bottom - fVar1;
                    /* end of inlined section */
  if (fVar1 == 0.0) {
    fVar1 = 1.0;
    local_40 = (this->m_rIn).left;
  }
  else {
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
    fVar1 = ((this->m_rOut).bottom - (this->m_rOut).top) / fVar1;
    local_40 = (this->m_rIn).left;
  }
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_mat4.h */
                    /* end of inlined section */
  local_40 = -local_40;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_38 = 0;
                    /* end of inlined section */
  local_3c = -(this->m_rIn).top;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  Translate__5EMat4RC5EVec3(&this->m_mWindow,(EVec3 *)&local_40);
  local_38 = 0x3f800000;
  local_40 = fVar2;
  local_3c = fVar1;
  PostScale__5EMat4RC5EVec3(&this->m_mWindow,(EVec3 *)&local_40);
  local_40 = (this->m_rOut).left;
  local_3c = (this->m_rOut).top;
  local_38 = 0;
  PostTranslate__5EMat4RC5EVec3(&this->m_mWindow,(EVec3 *)&local_40);
                    /* end of inlined section */
  (*(code *)this->__vtable->Cast3DWindow)
            ((int)&(this->m_mWindow).field0_0x0 + (int)*(short *)&this->__vtable->SetRenderSurface);
  return;
}

void EWindow::CalcClip() {
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
  float fVar8;
  float fVar9;
  
                    /* inlined from c:/eor/src2/engine/window/e_window.h */
  fVar4 = (this->m_mWindow).field0_0x0.d[0];
  fVar8 = (this->m_mWindow).field0_0x0.d[1][1];
  fVar2 = (this->m_rClipIn).top;
  fVar1 = (this->m_rClipIn).bottom;
  fVar6 = (this->m_mWindow).field0_0x0.d[3][0];
  fVar5 = (this->m_mWindow).field0_0x0.d[3][1];
                    /* end of inlined section */
  fVar9 = (this->m_rOut).right;
                    /* inlined from c:/eor/src2/engine/window/e_window.h */
  fVar3 = (this->m_rClipIn).left * fVar4 + fVar6;
                    /* end of inlined section */
  fVar7 = (this->m_rOut).left;
                    /* inlined from c:/eor/src2/engine/window/e_window.h */
  fVar6 = (this->m_rClipIn).right * fVar4 + fVar6;
  (this->m_rClipOut).left = fVar3;
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/window/e_window.h */
  (this->m_rClipOut).right = fVar6;
  (this->m_rClipOut).bottom = fVar1 * fVar8 + fVar5;
                    /* end of inlined section */
  (this->m_rClipOut).top = fVar2 * fVar8 + fVar5;
  if (fVar7 < fVar9) {
    fVar1 = (float)((int)fVar7 * (uint)(fVar3 < fVar7) | (int)fVar3 * (uint)(fVar3 >= fVar7));
    fVar6 = (float)((int)fVar9 * (uint)(fVar9 < fVar6) | (int)fVar6 * (uint)(fVar9 >= fVar6));
  }
  else {
    fVar1 = (float)((int)fVar7 * (uint)(fVar7 < fVar3) | (int)fVar3 * (uint)(fVar7 >= fVar3));
    fVar6 = (float)((int)fVar9 * (uint)(fVar6 < fVar9) | (int)fVar6 * (uint)(fVar6 >= fVar9));
  }
  (this->m_rClipOutClamped).left = fVar1;
  (this->m_rClipOutClamped).right = fVar6;
  fVar1 = (this->m_rOut).bottom;
  fVar2 = (this->m_rOut).top;
  fVar6 = (this->m_rClipOut).top;
  if (fVar2 < fVar1) {
    fVar3 = (this->m_rClipOut).bottom;
    fVar2 = (float)((int)fVar2 * (uint)(fVar6 < fVar2) | (int)fVar6 * (uint)(fVar6 >= fVar2));
    fVar6 = (float)((int)fVar1 * (uint)(fVar1 < fVar3) | (int)fVar3 * (uint)(fVar1 >= fVar3));
  }
  else {
    fVar3 = (this->m_rClipOut).bottom;
    fVar2 = (float)((int)fVar2 * (uint)(fVar2 < fVar6) | (int)fVar6 * (uint)(fVar2 >= fVar6));
    fVar6 = (float)((int)fVar1 * (uint)(fVar3 < fVar1) | (int)fVar3 * (uint)(fVar3 >= fVar1));
  }
  (this->m_rClipOutClamped).top = fVar2;
  (this->m_rClipOutClamped).bottom = fVar6;
  return;
}

void EWindow::CalcClipInv() {
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
  fVar4 = (this->m_mWindow).field0_0x0.d[3][0];
  fVar7 = (this->m_mWindow).field0_0x0.d[3][1];
  fVar3 = (this->m_rClipOut).top;
  fVar1 = (this->m_rClipOut).right;
  fVar2 = (this->m_rClipOut).bottom;
  fVar6 = (this->m_mWindow).field0_0x0.d[0];
  fVar5 = (this->m_mWindow).field0_0x0.d[1][1];
  (this->m_rClipIn).left = ((this->m_rClipOut).left - fVar4) / fVar6;
  (this->m_rClipIn).right = (fVar1 - fVar4) / fVar6;
  (this->m_rClipIn).bottom = (fVar2 - fVar7) / fVar5;
  (this->m_rClipIn).top = (fVar3 - fVar7) / fVar5;
  return;
}

void EWindow::SetClip(EFloatRect &rect) {
	TRect<float> *this;
	TRect<float> &r;
	
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
  (this->m_rClipIn).left = rect->left;
  (this->m_rClipIn).top = rect->top;
  (this->m_rClipIn).right = rect->right;
                    /* end of inlined section */
  (this->m_rClipIn).bottom = rect->bottom;
  CalcClip__7EWindow(this);
  return;
}

void EWindow::SetInputCoordinates(EFloatRect &rect) {
	TRect<float> *this;
	TRect<float> &r;
	TRect<float> *this;
	TRect<float> &r;
	
  bool bVar1;
  
                    /* inlined from /eor/src2/common/math/e_rect.h */
  bVar1 = false;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
  if ((this->m_rIn).left == rect->left) {
    if ((this->m_rIn).top != rect->top) {
      bVar1 = true;
      goto LAB_00299a88;
    }
    if ((this->m_rIn).right != rect->right) {
      bVar1 = true;
      goto LAB_00299a88;
    }
    if ((this->m_rIn).bottom == rect->bottom) goto LAB_00299a88;
  }
  bVar1 = true;
LAB_00299a88:
                    /* end of inlined section */
  if (bVar1) {
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
    (this->m_rIn).left = rect->left;
    (this->m_rIn).top = rect->top;
    (this->m_rIn).right = rect->right;
                    /* end of inlined section */
    (this->m_rIn).bottom = rect->bottom;
    CalcWindowMat__7EWindow(this);
    CalcClipInv__7EWindow(this);
    (**(code **)(this->__vtable + 1))
              ((int)&(this->m_mWindow).field0_0x0 + (int)*(short *)&this->__vtable->CastPortalWindow
              );
  }
  return;
}

void EWindow::SetOutputCoordinates(EFloatRect &rect) {
	TRect<float> *this;
	TRect<float> &r;
	TRect<float> *this;
	TRect<float> &r;
	
  bool bVar1;
  
                    /* inlined from /eor/src2/common/math/e_rect.h */
  bVar1 = false;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
  if ((this->m_rOut).left == rect->left) {
    if ((this->m_rOut).top != rect->top) {
      bVar1 = true;
      goto LAB_00299b60;
    }
    if ((this->m_rOut).right != rect->right) {
      bVar1 = true;
      goto LAB_00299b60;
    }
    if ((this->m_rOut).bottom == rect->bottom) goto LAB_00299b60;
  }
  bVar1 = true;
LAB_00299b60:
                    /* end of inlined section */
  if (bVar1) {
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_rect.h */
    (this->m_rOut).left = rect->left;
    (this->m_rOut).top = rect->top;
    (this->m_rOut).right = rect->right;
                    /* end of inlined section */
    (this->m_rOut).bottom = rect->bottom;
    CalcWindowMat__7EWindow(this);
    CalcClip__7EWindow(this);
    (*(code *)this->__vtable[1].Select)
              ((int)&(this->m_mWindow).field0_0x0 + (int)*(short *)&this->__vtable[1].EWindow);
  }
  return;
}

void* EWindow::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(size,0x10);
  return pvVar1;
}

void EWindow::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

void EWindow::SetInputCoordinatesAndClip(EFloatRect &rect) {
  SetInputCoordinates__7EWindowRCt5TRect1Zf(this,rect);
  SetClip__7EWindowRCt5TRect1Zf(this,rect);
  return;
}

void EWindow::SetRect(EFloatRect &rect) {
  SetInputCoordinates__7EWindowRCt5TRect1Zf(this,rect);
  SetOutputCoordinates__7EWindowRCt5TRect1Zf(this,rect);
  SetClip__7EWindowRCt5TRect1Zf(this,rect);
  return;
}

void EWindow::Transform(EVec2 &vIn, EVec2 &vOut) {
	EVec2 *this;
	EVec2 *this;
	EMat4 *this;
	EMat4 *this;
	EVec2 *this;
	EVec2 *this;
	EMat4 *this;
	EMat4 *this;
	
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (vOut->field0_0x0).d[0] =
       (vIn->field0_0x0).d[0] * (this->m_mWindow).field0_0x0.d[0] +
       (this->m_mWindow).field0_0x0.d[3][0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (vOut->field0_0x0).d[1] =
       (vIn->field0_0x0).d[1] * (this->m_mWindow).field0_0x0.d[1][1] +
       (this->m_mWindow).field0_0x0.d[3][1];
  return;
}

void EWindow::Transform(float xIn, float yIn, float &xOut, float &yOut) {
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	
  *xOut = xIn * (this->m_mWindow).field0_0x0.d[0] + (this->m_mWindow).field0_0x0.d[3][0];
  *yOut = yIn * (this->m_mWindow).field0_0x0.d[1][1] + (this->m_mWindow).field0_0x0.d[3][1];
  return;
}

void EWindow::TransformInv(EVec2 &vIn, EVec2 &vOut) {
	EVec2 *this;
	EVec2 *this;
	EMat4 *this;
	EMat4 *this;
	EVec2 *this;
	EVec2 *this;
	EMat4 *this;
	EMat4 *this;
	
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (vOut->field0_0x0).d[0] =
       ((vIn->field0_0x0).d[0] - (this->m_mWindow).field0_0x0.d[3][0]) /
       (this->m_mWindow).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (vOut->field0_0x0).d[1] =
       ((vIn->field0_0x0).d[1] - (this->m_mWindow).field0_0x0.d[3][1]) /
       (this->m_mWindow).field0_0x0.d[1][1];
  return;
}

void EWindow::TransformInv(float xIn, float yIn, float &xOut, float &yOut) {
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	EMat4 *this;
	
  *xOut = (xIn - (this->m_mWindow).field0_0x0.d[3][0]) / (this->m_mWindow).field0_0x0.d[0];
  *yOut = (yIn - (this->m_mWindow).field0_0x0.d[3][1]) / (this->m_mWindow).field0_0x0.d[1][1];
  return;
}

void EWindow::TransformScale(float xScaleIn, float yScaleIn, float &xScaleOut, float &yScaleOut) {
	EMat4 *this;
	EMat4 *this;
	
  *xScaleOut = xScaleIn * (this->m_mWindow).field0_0x0.d[0];
  *yScaleOut = yScaleIn * (this->m_mWindow).field0_0x0.d[1][1];
  return;
}

void EWindow::TransformScale(EVec2 &vScaleIn, EVec2 &vScaleOut) {
	EVec2 *this;
	EVec2 *this;
	EMat4 *this;
	EVec2 *this;
	EVec2 *this;
	EMat4 *this;
	
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (vScaleOut->field0_0x0).d[0] = (vScaleIn->field0_0x0).d[0] * (this->m_mWindow).field0_0x0.d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (vScaleOut->field0_0x0).d[1] = (vScaleIn->field0_0x0).d[1] * (this->m_mWindow).field0_0x0.d[1][1];
  return;
}

bool EWindow::ClipTest(EVec2 &v) {
	EVec2 *this;
	EVec2 *this;
	
  bool bVar1;
  
  bVar1 = ClipTest__7EWindowff(this,(v->field0_0x0).d[0],(v->field0_0x0).d[1]);
  return bVar1;
}

bool EWindow::ClipTest(float x, float y) {
  bool bVar1;
  
  bVar1 = false;
  if (((((this->m_rClipIn).left <= x) && (x < (this->m_rClipIn).right)) &&
      ((this->m_rClipIn).top <= y)) && (y < (this->m_rClipIn).bottom)) {
    bVar1 = true;
  }
  return bVar1;
}

bool EWindow::ClipTest(EFloatRect &rect) {
	TRect<float> *this;
	TRect<float> &r;
	
  byte bVar1;
  
                    /* inlined from /eor/src2/common/math/e_rect.h */
  bVar1 = 0;
  if (((((this->m_rClipIn).left <= rect->left) && (rect->right <= (this->m_rClipIn).right)) &&
      ((this->m_rClipIn).top <= rect->top)) && (rect->bottom <= (this->m_rClipIn).bottom)) {
    bVar1 = 1;
  }
                    /* end of inlined section */
  return (bool)(bVar1 ^ 1);
}

EWindow* EWindow::GetCurrentWindow() {
  return _7EWindow_m_pCurrentWindow;
}

E3DWindow* EWindow::GetCurrent3DWindow() {
  return _7EWindow_m_pCurrent3DWindow;
}

EPortalWindow* EWindow::GetCurrentPortalWindow() {
  return _7EWindow_m_pCurrentPortalWindow;
}

void EWindow::WindowMatrixChanged() {
  return;
}

void EWindow::InputCoordinatesChanged() {
  return;
}

void EWindow::OutputCoordinatesChanged() {
  return;
}

E3DWindow* EWindow::Cast3DWindow() {
  return (E3DWindow *)0x0;
}

EPortalWindow* EWindow::CastPortalWindow() {
  return (EPortalWindow *)0x0;
}
