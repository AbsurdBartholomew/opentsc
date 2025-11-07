// STATUS: NOT STARTED

#include "charedmenuitems.h"

__vtbl_ptr_type ECharedDiamondMenuItem virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedDiamondMenuItem::~ECharedDiamondMenuItem,
		/* .__delta2 = */ 13768
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedDiamondMenuItem::Update,
		/* .__delta2 = */ 14424
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedDiamondMenuItem::Draw,
		/* .__delta2 = */ 13864
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetPos,
		/* .__delta2 = */ 2768
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3560
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3592
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::Message,
		/* .__delta2 = */ 3616
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::StateChanged,
		/* .__delta2 = */ 3672
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnButtonRepeat,
		/* .__delta2 = */ 3680
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnStickRepeat,
		/* .__delta2 = */ 3688
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::GetPos,
		/* .__delta2 = */ 3912
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::AddChild,
		/* .__delta2 = */ 3024
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::RemoveChild,
		/* .__delta2 = */ 3072
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

__vtbl_ptr_type ECharedTextMenuItem virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedTextMenuItem::~ECharedTextMenuItem,
		/* .__delta2 = */ 14824
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedTextMenuItem::Update,
		/* .__delta2 = */ 12696
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &ECharedTextMenuItem::Draw,
		/* .__delta2 = */ 12112
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetPos,
		/* .__delta2 = */ 2768
	},
	/* [5] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3560
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::SetBoxDims,
		/* .__delta2 = */ 3592
	},
	/* [7] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::Message,
		/* .__delta2 = */ 3616
	},
	/* [8] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::StateChanged,
		/* .__delta2 = */ 3672
	},
	/* [9] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnButtonRepeat,
		/* .__delta2 = */ 3680
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::OnStickRepeat,
		/* .__delta2 = */ 3688
	},
	/* [11] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::GetPos,
		/* .__delta2 = */ 3912
	},
	/* [12] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::AddChild,
		/* .__delta2 = */ 3024
	},
	/* [13] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::RemoveChild,
		/* .__delta2 = */ 3072
	},
	/* [14] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void ECharedTextMenuItem::Draw(ERC *prc) {
	EVec2 vTextSize;
	EVec2 vCenter;
	EUIObjectNode *this;
	EUIObjectNode *this;
	float fArrowOffset;
	ERFont *this;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	u16 *szString;
	
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ERFont *pEVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  EHashTableNode **ppEVar12;
  EVec2 vTextSize;
  EVec2 vCenter;
  float local_a0;
  float local_9c;
  EHashTableNode **local_90;
  EHashTableNode **local_8c;
  EHashTableNode **local_80;
  EHashTableNode **local_7c;
  EFontSize *local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_50 = (undefined4)unaff_s2;
  uStack_4c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_60 = (undefined4)unaff_s1;
  uStack_5c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s3;
  uStack_3c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (EFontSize *)unaff_s0;
  uStack_6c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 1 & 1U) != 0) {
    ppEVar12 = (EHashTableNode **)0x3f800000;
    SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    DoGetStringSize__6ERFontPvbP7EWindow
              ((ERFont *)&vTextSize,this->m_pFont,SUB41(this->m_szText,0),(EWindow *)&pGifTag1);
    uVar6 = _CYAN.field0_0x0.d[3];
    uVar5 = _CYAN.field0_0x0.d[2];
    uVar4 = _CYAN.field0_0x0._0_8_;
    uVar3 = _WHITE.field0_0x0.d[3];
    uVar2 = _WHITE.field0_0x0.d[2];
    uVar1 = _WHITE.field0_0x0._0_8_;
                    /* end of inlined section */
    fVar9 = (this->field0_0x0).m_pos.field0_0x0.d[2];
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    fVar8 = (this->field0_0x0).m_pos.field0_0x0.d[0] +
            (this->field0_0x0).m_WDH.field0_0x0.d[0] * 0.5;
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).m_flags >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar7 = this->m_pFont;
      (pEVar7->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
      (pEVar7->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar1 >> 0x20);
      (pEVar7->m_vColor).field0_0x0.d[2] = uVar2;
      (pEVar7->m_vColor).field0_0x0.d[3] = uVar3;
                    /* end of inlined section */
      pEVar7 = this->m_pFont;
    }
    else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      pEVar7 = this->m_pFont;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      (pEVar7->m_vColor).field0_0x0.d[0] = (float)_CYAN.field0_0x0._0_8_;
      (pEVar7->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar4 >> 0x20);
      (pEVar7->m_vColor).field0_0x0.d[2] = uVar5;
      (pEVar7->m_vColor).field0_0x0.d[3] = uVar6;
                    /* end of inlined section */
      uVar10 = 0;
      fVar11 = vTextSize.field0_0x0.d[0] * 0.5 + 0.01;
      Select__8ERShaderP3ERCi(this->m_pLeftArrowShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_9c = (this->field0_0x0).m_pos.field0_0x0.d[2] - 0.02;
      local_a0 = (fVar8 - fVar11) - 0.018;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_90 = ppEVar12;
      local_8c = ppEVar12;
      (*(code *)prc->__vtable[1].ClipRect)
                (uVar10,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_a0,
                 &local_90,&this->m_vLeftArrowColor);
      Select__8ERShaderP3ERCi(this->m_pRightArrowShdr,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_9c = (this->field0_0x0).m_pos.field0_0x0.d[2] - 0.02;
      local_a0 = fVar8 + fVar11;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_80 = ppEVar12;
      local_7c = ppEVar12;
      (*(code *)prc->__vtable[1].ClipRect)
                (uVar10,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_a0,
                 &local_80,&this->m_vRightArrowColor);
      pEVar7 = this->m_pFont;
    }
    Select__6ERFontP3ERC(pEVar7,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_a0 = fVar8;
    local_9c = fVar9 + vTextSize.field0_0x0.d[1] * 0.5;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (this->m_pFont,prc,this->m_szText,true,(EVec2 *)&local_a0,E_FAX_CENTER,E_FAY_CENTER,
               (EVec2 *)0x0);
  }
                    /* end of inlined section */
  return;
}

void ECharedTextMenuItem::Update() {
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  EUIObjectNode__vtable *pEVar1;
  EUIVirtualCtrl__vtable *pEVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 2 & 1U) == 0) {
    return;
  }
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[1].EUIObjectNode)
            ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
             (int)*(short *)(pEVar1 + 1),this,this->m_nCameraMessage);
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 3 & 1U) != 0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].EUIObjectNode)
              ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar1 + 1),this,0x40);
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[1].EUIObjectNode)
              ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar1 + 1),this,0x3f);
  }
  if (this->m_nCurrentButton == 0) {
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (*(code *)pEVar2[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,
                       (this->field0_0x0).m_activeCtrl,0x2000);
    if (lVar6 == 0) {
      pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
      lVar6 = (*(code *)pEVar2[1].GetBut)
                        ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2[1].ClearBut + -4,
                         (this->field0_0x0).m_activeCtrl,0x8000);
      if (lVar6 != 0) {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
        if (_13EUIObjectNode_m_uiSfxNext != (undefined1 *)0x0) {
          (*(code *)_13EUIObjectNode_m_uiSfxNext)();
                    /* end of inlined section */
        }
        this->m_nCurrentButton = 0x8000;
        if (this->m_nPrevMessage != 0) {
          pEVar1 = (this->field0_0x0).__vtable;
          (*(code *)pEVar1[1].EUIObjectNode)
                    ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                     (int)*(short *)(pEVar1 + 1),this);
        }
        uVar4 = _CYAN.field0_0x0.d[3];
        uVar3 = _CYAN.field0_0x0.d[2];
        uVar5 = _CYAN.field0_0x0._0_8_;
        (this->m_vLeftArrowColor).field0_0x0.d[0] = (float)_CYAN.field0_0x0._0_8_;
        (this->m_vLeftArrowColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
        (this->m_vLeftArrowColor).field0_0x0.d[2] = uVar3;
        (this->m_vLeftArrowColor).field0_0x0.d[3] = uVar4;
      }
    }
    else {
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
      if (_13EUIObjectNode_m_uiSfxNext != (undefined1 *)0x0) {
        (*(code *)_13EUIObjectNode_m_uiSfxNext)();
                    /* end of inlined section */
      }
      this->m_nCurrentButton = 0x2000;
      if (this->m_nNextMessage != 0) {
        pEVar1 = (this->field0_0x0).__vtable;
        (*(code *)pEVar1[1].EUIObjectNode)
                  ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                   (int)*(short *)(pEVar1 + 1),this);
      }
      uVar4 = _CYAN.field0_0x0.d[3];
      uVar3 = _CYAN.field0_0x0.d[2];
      uVar5 = _CYAN.field0_0x0._0_8_;
      (this->m_vRightArrowColor).field0_0x0.d[0] = (float)_CYAN.field0_0x0._0_8_;
      (this->m_vRightArrowColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
      (this->m_vRightArrowColor).field0_0x0.d[2] = uVar3;
      (this->m_vRightArrowColor).field0_0x0.d[3] = uVar4;
    }
  }
  else {
    pEVar2 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar6 = (**(code **)(pEVar2 + 1))
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar2->GetBut + -4,
                       (this->field0_0x0).m_activeCtrl);
    uVar4 = _WHITE.field0_0x0.d[3];
    uVar3 = _WHITE.field0_0x0.d[2];
    if (lVar6 == 0) {
      fVar7 = (float)((ulong)_WHITE.field0_0x0._0_8_ >> 0x20);
      if (this->m_nCurrentButton == 0x2000) {
        (this->m_vRightArrowColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
        (this->m_vRightArrowColor).field0_0x0.d[1] = fVar7;
        (this->m_vRightArrowColor).field0_0x0.d[2] = uVar3;
        (this->m_vRightArrowColor).field0_0x0.d[3] = uVar4;
      }
      else {
        if (this->m_nCurrentButton != 0x8000) {
          this->m_nCurrentButton = 0;
          goto LAB_0010338c;
        }
        (this->m_vLeftArrowColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
        (this->m_vLeftArrowColor).field0_0x0.d[1] = fVar7;
        (this->m_vLeftArrowColor).field0_0x0.d[2] = uVar3;
        (this->m_vLeftArrowColor).field0_0x0.d[3] = uVar4;
      }
      this->m_nCurrentButton = 0;
    }
  }
LAB_0010338c:
  Update__13EUIObjectNode(&this->field0_0x0);
  return;
}

void ECharedTextMenuItem::Init() {
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ERShader *pEVar4;
  ERFont *pEVar5;
  
  this->m_nCurrentButton = 0;
  uVar3 = _WHITE.field0_0x0.d[3];
  uVar2 = _WHITE.field0_0x0.d[2];
  uVar1 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  (this->m_vLeftArrowColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
  (this->m_vLeftArrowColor).field0_0x0.d[1] = (float)((ulong)uVar1 >> 0x20);
  (this->m_vLeftArrowColor).field0_0x0.d[2] = uVar2;
  (this->m_vLeftArrowColor).field0_0x0.d[3] = uVar3;
  uVar3 = _WHITE.field0_0x0.d[3];
  uVar2 = _WHITE.field0_0x0.d[2];
  uVar1 = _WHITE.field0_0x0._0_8_;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
                    /* end of inlined section */
  this->m_nNextMessage = 0;
  this->m_nPrevMessage = 0;
  this->m_nCameraMessage = 0x28;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  (this->m_vRightArrowColor).field0_0x0.d[0] = (float)uVar1;
  (this->m_vRightArrowColor).field0_0x0.d[1] = (float)((ulong)uVar1 >> 0x20);
  (this->m_vRightArrowColor).field0_0x0.d[2] = uVar2;
  (this->m_vRightArrowColor).field0_0x0.d[3] = uVar3;
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xa25eba9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pBlankShdr = pEVar4;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xe3e852f9,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pLeftArrowShdr = pEVar4;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar4 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x19e76f9a,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pRightArrowShdr = pEVar4;
                    /* inlined from /eor/src2/engine/font/e_fontman.h */
  pEVar5 = (ERFont *)
           AddRef__16EResourceManagerUiP5EFilei(&_fontman.field0_0x0,0xdf7f0b17,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pFont = pEVar5;
  return;
}

void ECharedTextMenuItem::CleanUp() {
  DelRef__9EResource(&this->m_pFont->field0_0x0);
  this->m_pFont = (ERFont *)0x0;
  DelRef__9EResource(&this->m_pBlankShdr->field0_0x0);
  this->m_pBlankShdr = (ERShader *)0x0;
  DelRef__9EResource(&this->m_pLeftArrowShdr->field0_0x0);
  this->m_pLeftArrowShdr = (ERShader *)0x0;
  DelRef__9EResource(&this->m_pRightArrowShdr->field0_0x0);
  this->m_pRightArrowShdr = (ERShader *)0x0;
  return;
}

void ECharedTextMenuItem::SetText(c16 *szText) {
  this->m_szText = szText;
  return;
}

float ECharedTextMenuItem::GetWidth() {
	EVec2 vTextSize;
	
  EVec2 vTextSize;
  
  SetSize__6ERFontffb(this->m_pFont,14.0,1.0,true);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
  DoGetStringSize__6ERFontPvbP7EWindow
            ((ERFont *)&vTextSize,this->m_pFont,SUB41(this->m_szText,0),(EWindow *)&pGifTag1);
                    /* end of inlined section */
  return vTextSize.field0_0x0.d[0] + 0.056;
}

ECharedDiamondMenuItem* ECharedDiamondMenuItem::ECharedDiamondMenuItem(int nMessage) {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ERModel *pEVar4;
  
  __13EUIObjectNode(&this->field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_22ECharedDiamondMenuItem;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
  this->m_fDiamondRot = 0.0;
  puVar1 = (undefined *)((int)&(this->m_vDiamondPos).field0_0x0 + 7);
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vDiamondPos & 7;
  puVar3 = (ulong *)((int)&this->m_vDiamondPos - uVar2);
  *puVar3 = 0L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_vDiamondPos).field0_0x0.d[2] = 0.0;
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
                    /* end of inlined section */
  this->m_nSimIndex = '\0';
                    /* inlined from /eor/src2/engine/model/e_modelman.h */
  pEVar4 = (ERModel *)
           AddRef__16EResourceManagerUiP5EFilei(&_modelman.field0_0x0,0x6d1f0956,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_pDiamondModel = pEVar4;
  this->m_nSelectedMessage = (uchar)nMessage;
  return this;
}

void ECharedDiamondMenuItem::~ECharedDiamondMenuItem(int __in_chrg) {
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_22ECharedDiamondMenuItem;
  DelRef__16EResourceManagerUi(&_modelman.field0_0x0,0x6d1f0956);
  this->m_pDiamondModel = (ERModel *)0x0;
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void ECharedDiamondMenuItem::Draw(ERC *prc) {
	EUIObjectNode *this;
	EUIObjectNode *this;
	ERC *this;
	float x;
	float y;
	ERC *this;
	
  uint uVar1;
  ulong *puVar2;
  EMat4 *this_00;
  void *pvVar3;
  ERC__vtable *pEVar4;
  float fVar5;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
  uVar1 = (this->field0_0x0).m_flags;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((((int)uVar1 >> 1 & 1U) != 0) && (((int)uVar1 >> 3 & 1U) != 0)) {
                    /* inlined from /eor/src2/engine/e_rc.h */
    this_00 = (EMat4 *)Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x40,0x10);
                    /* end of inlined section */
    Id__5EMat4(this_00);
    RotateZ__5EMat4f(this_00,this->m_fDiamondRot);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar5 = (this->m_vDiamondPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    (this_00->field0_0x0).d[3][0] = (this->m_vDiamondPos).field0_0x0.d[0];
    (this_00->field0_0x0).d[3][1] = fVar5;
    (this_00->field0_0x0).d[3][2] = 2.1;
                    /* end of inlined section */
    PreScale__5EMat4f(this_00,this->m_pDiamondModel->m_scaler);
                    /* inlined from /eor/src2/engine/e_dl.h */
    pvVar3 = Alloc__11EAllocGroupUii(&prc->m_pdl->m_allocGroup,0x30,0x10);
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar1 = (int)pvVar3 + 7U & 7;
    puVar2 = (ulong *)(((int)pvVar3 + 7U) - uVar1);
    *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | 0x3f8000003f19999aU >> (7 - uVar1) * 8;
    uVar1 = (uint)pvVar3 & 7;
    *(ulong *)((int)pvVar3 - uVar1) =
         0x3f8000003f19999a << uVar1 * 8 |
         *(ulong *)((int)pvVar3 - uVar1) & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    *(undefined4 *)((int)pvVar3 + 8) = 0x3f19999a;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar1 = (int)pvVar3 + 0x17U & 7;
    puVar2 = (ulong *)(((int)pvVar3 + 0x17U) - uVar1);
    *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | 0x3f19999a3f19999aU >> (7 - uVar1) * 8;
    uVar1 = (int)pvVar3 + 0x10U & 7;
    puVar2 = (ulong *)(((int)pvVar3 + 0x10U) - uVar1);
    *puVar2 = 0x3f19999a3f19999a << uVar1 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    *(undefined4 *)((int)pvVar3 + 0x18) = 0x3f19999a;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
    uVar1 = (int)pvVar3 + 0x27U & 7;
    puVar2 = (ulong *)(((int)pvVar3 + 0x27U) - uVar1);
    *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | 0x4120000041200000U >> (7 - uVar1) * 8;
    uVar1 = (int)pvVar3 + 0x20U & 7;
    puVar2 = (ulong *)(((int)pvVar3 + 0x20U) - uVar1);
    *puVar2 = 0x4120000041200000 << uVar1 * 8 | *puVar2 & 0xffffffffffffffffU >> (8 - uVar1) * 8;
    *(undefined4 *)((int)pvVar3 + 0x28) = 0xc1300000;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
    fVar5 = sqrtf(*(float *)((int)pvVar3 + 0x20) * *(float *)((int)pvVar3 + 0x20) +
                  *(float *)((int)pvVar3 + 0x24) * *(float *)((int)pvVar3 + 0x24) +
                  *(float *)((int)pvVar3 + 0x28) * *(float *)((int)pvVar3 + 0x28));
    if (fVar5 == 0.0) {
      pEVar4 = prc->__vtable;
    }
    else {
      fVar5 = 1.0 / fVar5;
      *(float *)((int)pvVar3 + 0x20) = *(float *)((int)pvVar3 + 0x20) * fVar5;
      *(float *)((int)pvVar3 + 0x24) = *(float *)((int)pvVar3 + 0x24) * fVar5;
      *(float *)((int)pvVar3 + 0x28) = *(float *)((int)pvVar3 + 0x28) * fVar5;
                    /* end of inlined section */
      pEVar4 = prc->__vtable;
    }
    (*(code *)pEVar4[1].LineList)((int)&prc->m_pdl + (int)*(short *)&pEVar4[1].QuadList,pvVar3,1);
    (*(code *)prc->__vtable->SetMipMap)
              ((int)&prc->m_pdl + (int)*(short *)&prc->__vtable->MipMapSetup,this_00);
    Draw__7ERModelP3ERCUi(this->m_pDiamondModel,prc,6);
  }
  return;
}

void ECharedDiamondMenuItem::Update() {
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  EUIVirtualCtrl__vtable *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 2 & 1U) != 0) {
    fVar4 = 0.0;
    fVar5 = this->m_fDiamondRot + _dt * 3.0;
    this->m_fDiamondRot = fVar5;
    if (0.0 <= fVar5) {
      if (fVar5 <= 6.283185) {
        fVar4 = fVar5;
      }
    }
    else {
      fVar4 = 6.283185;
    }
    this->m_fDiamondRot = fVar4;
    if (6.2 < fVar4) {
      this->m_fDiamondRot = fVar4 - 6.2;
    }
    pEVar1 = ((_globals.m_pCtrlPad)->field0_0x0).__vtable;
    lVar3 = (*(code *)pEVar1[1].GetBut)
                      ((int)(_globals.m_pCtrlPad)->m_pressed + *(short *)&pEVar1[1].ClearBut + -4,
                       (this->field0_0x0).m_activeCtrl,0x40);
    if (lVar3 != 0) {
      pEVar2 = (this->field0_0x0).__vtable;
      (*(code *)pEVar2[1].EUIObjectNode)
                ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)(pEVar2 + 1),this,this->m_nSelectedMessage);
    }
                    /* inlined from /eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (((int)(this->field0_0x0).m_flags >> 3 & 1U) != 0) {
      pEVar2 = (this->field0_0x0).__vtable;
      (*(code *)pEVar2[1].EUIObjectNode)
                ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)(pEVar2 + 1),this,0x40);
      pEVar2 = (this->field0_0x0).__vtable;
      (*(code *)pEVar2[1].EUIObjectNode)
                ((int)&(this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead +
                 (int)*(short *)(pEVar2 + 1),this,0x41);
    }
  }
  return;
}

ECharedTextMenuItem* ECharedTextMenuItem::ECharedTextMenuItem() {
  __13EUIObjectNode(&this->field0_0x0);
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_19ECharedTextMenuItem;
  Init__19ECharedTextMenuItem(this);
  return this;
}

void ECharedTextMenuItem::~ECharedTextMenuItem(int __in_chrg) {
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_19ECharedTextMenuItem;
  CleanUp__19ECharedTextMenuItem(this);
  ___13EUIObjectNode(&this->field0_0x0,0);
  if ((__in_chrg & 1U) != 0) {
    __dl__19ECharedTextMenuItemPv(this);
  }
  return;
}

void* ECharedTextMenuItem::operator new(unsigned int size) {
  void *pvVar1;
  
  pvVar1 = _memmanAlloc__FUiUi(0x90,0x10);
  return pvVar1;
}

void ECharedTextMenuItem::operator delete(void *p) {
  _memmanFree__FPv(p);
  return;
}

void ECharedTextMenuItem::SetMessages(u32 nNext, u32 nPrev) {
  this->m_nPrevMessage = nPrev;
  this->m_nNextMessage = nNext;
  return;
}

void ECharedTextMenuItem::SetCameraMessage(u32 nNew) {
  this->m_nCameraMessage = nNew;
  return;
}

u32 ECharedTextMenuItem::GetCameraMessage() {
  return this->m_nCameraMessage;
}

void ECharedDiamondMenuItem::SetPosition(EVec3 vNewPos) {
	EVec3 *this;
	EVec3 *this;
	
  (this->m_vDiamondPos).field0_0x0.d[0] = (vNewPos->field0_0x0).d[0];
  (this->m_vDiamondPos).field0_0x0.d[1] = (vNewPos->field0_0x0).d[1];
  return;
}

void ECharedDiamondMenuItem::SetCharacterIndex(int nNewIndex) {
  this->m_nSimIndex = (uchar)nNewIndex;
  return;
}

int ECharedDiamondMenuItem::GetSimIndex() {
  return (int)this->m_nSimIndex;
}

EVec2 ECharedDiamondMenuItem::GetPosition() {
	EVec2 *this;
	
  int in_a1_lo;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead = *(ENodeListNode **)(in_a1_lo + 0x40);
  (this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pTail = *(ENodeListNode **)(in_a1_lo + 0x44);
  return (EVec2)(EVec2__null___1__1)(long)(int)this;
}
