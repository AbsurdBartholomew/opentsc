// STATUS: NOT STARTED

#include "e_uimenu.h"

__vtbl_ptr_type EUIMenu virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::~EUIMenu,
		/* .__delta2 = */ 6896
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::Update,
		/* .__delta2 = */ 7424
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::Draw,
		/* .__delta2 = */ 8024
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
		/* .__pfn = */ &EUIMenu::SetBoxDims,
		/* .__delta2 = */ 8880
	},
	/* [6] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetBoxDims,
		/* .__delta2 = */ 8944
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
		/* .__pfn = */ &EUIMenu::OnButtonRepeat,
		/* .__delta2 = */ 11384
	},
	/* [10] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::OnStickRepeat,
		/* .__delta2 = */ 11496
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
		/* .__pfn = */ &EUIMenu::AddChild,
		/* .__delta2 = */ 11632
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
		/* .__pfn = */ &EUIMenu::RemoveAllOpts,
		/* .__delta2 = */ 7024
	},
	/* [15] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::RemoveOpt,
		/* .__delta2 = */ 8688
	},
	/* [16] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::AddOpt,
		/* .__delta2 = */ 8456
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetPositions,
		/* .__delta2 = */ 9000
	},
	/* [18] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetCurOpt,
		/* .__delta2 = */ 7336
	},
	/* [19] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetLayout,
		/* .__delta2 = */ 11688
	},
	/* [20] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::SetStick,
		/* .__delta2 = */ 11960
	},
	/* [21] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::NextItem,
		/* .__delta2 = */ 11968
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::PrevItem,
		/* .__delta2 = */ 12000
	},
	/* [23] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIMenu::ProcessStickAndButtonAutoRepeat,
		/* .__delta2 = */ 11080
	},
	/* [24] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EUIMenu* EUIMenu::EUIMenu(int _layout, int background_id, float optGap, float _yoff, float _xoff) {
  int iVar1;
  EUiMonitorAutoRepeat *pEVar2;
  float delay;
  
  __13EUIObjectNode(&this->field0_0x0);
  delay = 0.25;
  this->m_layout = _layout;
  *(undefined4 *)&this->m_bClampListTrav = 0;
  this->m_pBackgroundShader = (ERShader *)0x0;
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_7EUIMenu;
  InitBackground__7EUIMenuUi(this,background_id);
  iVar1 = (this->field0_0x0).m_activeCtrl;
  this->m_optgap = optGap;
  this->m_yoff = _yoff;
  this->m_xoff = _xoff;
  this->m_pulseTime = delay;
  this->m_stick = 0;
  this->m_pressed = 0;
  this->m_nOpts = 0;
  this->m_totalHeight = 0.0;
  this->m_totalWidth = 0.0;
  this->m_pCurOpt = (EUIObjectNode *)0x0;
  this->m_optJusty = 0;
  this->m_optJustx = 0;
  this->m_lastStickValue = 0.0;
  this->m_stickDirFactor = 1;
  this->m_ActivatedPad = iVar1;
  pEVar2 = (EUiMonitorAutoRepeat *)__builtin_new(0x104);
  pEVar2 = __20EUiMonitorAutoRepeatR13EUIObjectNodeff
                     (pEVar2,&this->field0_0x0,delay,this->m_pulseTime);
  (this->field0_0x0).m_pAutoRepeatMonitor = pEVar2;
  return this;
}

void EUIMenu::~EUIMenu(int __in_chrg) {
  EUiMonitorAutoRepeat *pEVar1;
  ERShader *this_00;
  
  (this->field0_0x0).__vtable = (EUIObjectNode__vtable *)_vt_7EUIMenu;
  pEVar1 = (this->field0_0x0).m_pAutoRepeatMonitor;
  if (pEVar1 != (EUiMonitorAutoRepeat *)0x0) {
    (*(code *)pEVar1->__vtable[1].EUiMonitorAutoRepeat)
              ((int)pEVar1->m_totalDt + *(short *)(pEVar1->__vtable + 1) + -0xc,3);
  }
  this_00 = this->m_pBackgroundShader;
  (this->field0_0x0).m_pAutoRepeatMonitor = (EUiMonitorAutoRepeat *)0x0;
  if (this_00 != (ERShader *)0x0) {
    DelRef__9EResource(&this_00->field0_0x0);
  }
  RemoveAllOpts__7EUIMenu(this);
  ___13EUIObjectNode(&this->field0_0x0,__in_chrg);
  return;
}

void EUIMenu::RemoveAllOpts() {
  RemoveAllChildren__13EUIObjectNode(&this->field0_0x0);
  this->m_pCurOpt = (EUIObjectNode *)0x0;
  this->m_nOpts = 0;
  this->m_totalHeight = 0.0;
  this->m_totalWidth = 0.0;
  return;
}

void EUIMenu::InitBackground(u32 shaderid) {
	NLIterator nli;
	u32 id;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	ETexture *this;
	ETexture *this;
	
  bool bVar1;
  ERShader *pEVar2;
  uint uVar3;
  uint uVar4;
  ENodeListNode *pEVar5;
  
                    /* inlined from /eor/src2/engine/resource/e_resource.h */
                    /* end of inlined section */
  if ((this->m_pBackgroundShader == (ERShader *)0x0) ||
     ((this->m_pBackgroundShader->field0_0x0).m_resId != shaderid)) {
    this->m_maxBackShdrSize[1] = 0;
    this->m_maxBackShdrSize[0] = 0;
    bVar1 = IsValid__16EResourceManagerUi(&_shaderman.field0_0x0,shaderid);
    pEVar2 = this->m_pBackgroundShader;
    if (bVar1) {
      if (pEVar2 != (ERShader *)0x0) {
        DelRef__9EResource(&pEVar2->field0_0x0);
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
      }
      pEVar2 = (ERShader *)
               AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,shaderid,(EFile *)0x0,0);
                    /* end of inlined section */
      this->m_pBackgroundShader = pEVar2;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
      pEVar5 = (pEVar2->m_rtextureList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
      if (pEVar5 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        uVar4 = pEVar5->data;
        while( true ) {
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
          uVar3 = (uint)*(ushort *)(*(int *)(uVar4 + 0x14) + 0x10);
                    /* end of inlined section */
          if (this->m_maxBackShdrSize[0] < uVar3) {
            this->m_maxBackShdrSize[0] = uVar3;
          }
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
          uVar4 = (uint)*(ushort *)(*(int *)(uVar4 + 0x14) + 0x12);
                    /* end of inlined section */
          if (this->m_maxBackShdrSize[1] < uVar4) {
            this->m_maxBackShdrSize[1] = uVar4;
          }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          pEVar5 = pEVar5->pNext;
                    /* end of inlined section */
          if (pEVar5 == (ENodeListNode *)0x0) break;
          uVar4 = pEVar5->data;
        }
      }
    }
    else if (pEVar2 == (ERShader *)0x0) {
      this->m_pBackgroundShader = (ERShader *)0x0;
    }
    else {
      DelRef__9EResource(&pEVar2->field0_0x0);
      this->m_pBackgroundShader = (ERShader *)0x0;
    }
  }
  return;
}

void EUIMenu::SetCurOpt(EUIObjectNode *pOpt) {
  if (this->m_pCurOpt != (EUIObjectNode *)0x0) {
    SetFlagsPropigate__13EUIObjectNodeUib(this->m_pCurOpt,8,false);
  }
  this->m_pCurOpt = pOpt;
  SetFlagsPropigate__13EUIObjectNodeUib(pOpt,8,true);
  return;
}

void EUIMenu::Update() {
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  EUIObjectNode__vtable *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((((this->field0_0x0).m_flags & 4) != 0) &&
     ((this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0)) {
    pEVar1 = this->m_pCurOpt->__vtable;
    (*(code *)pEVar1->SetBoxDims)
              ((int)&(this->m_pCurOpt->m_ChildList).field0_0x0.m_l.m_pHead +
               (int)*(short *)&pEVar1->SetPos);
    ProcessUserInput__7EUIMenu(this);
    if (((this->field0_0x0).m_flags & 0x40) != 0) {
      RemoveMarkedChildren__13EUIObjectNode(&this->field0_0x0);
    }
  }
  return;
}

int EUIMenu::GetDirection() {
  int iVar1;
  
  iVar1 = this->m_layout;
  if (-2 < iVar1) {
    if (iVar1 < 1) {
      this->m_choiceAxis = 1;
      this->m_btnNext = 0x4000;
      this->m_btnPrev = 0x1000;
      if (this->m_optJusty == 2) {
        this->m_btnPrev = 0x4000;
        this->m_stickDirFactor = -1;
        this->m_btnNext = 0x1000;
      }
    }
    else if (iVar1 < 3) {
      this->m_btnNext = 0x2000;
      this->m_btnPrev = 0x8000;
      this->m_choiceAxis = 0;
      if (this->m_optJustx == 2) {
        this->m_btnPrev = 0x2000;
        this->m_stickDirFactor = -1;
        this->m_btnNext = 0x8000;
      }
    }
  }
  return 0;
}

void EUIMenu::ListForward(bool sound) {
	EUIObjectNode *pNextCur;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	NLIterator i;
	void *pNode;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	NLIterator i;
	void *pNode;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  EUIObjectNode *pEVar1;
  undefined1 *puVar2;
  ENodeListNode *pEVar3;
  EUIObjectNode__vtable *pEVar4;
  
  if (1 < this->m_nOpts) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
    puVar2 = this->m_pCurOpt->m_listIr;
                    /* end of inlined section */
    while( true ) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
      pEVar3 = *(ENodeListNode **)(puVar2 + 8);
                    /* end of inlined section */
      if (pEVar3 == (ENodeListNode *)0x0) {
        pEVar3 = (this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead;
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = (EUIObjectNode *)pEVar3->data;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)pEVar1->m_flags >> 4 & 1U) != 0) break;
      puVar2 = pEVar1->m_listIr;
    }
    if (sound) {
      if (pEVar1 == this->m_pCurOpt) {
        pEVar4 = (this->field0_0x0).__vtable;
      }
      else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
        if (_13EUIObjectNode_m_uiSfxNext == (undefined1 *)0x0) {
          pEVar4 = (this->field0_0x0).__vtable;
        }
        else {
          (*(code *)_13EUIObjectNode_m_uiSfxNext)();
                    /* end of inlined section */
          pEVar4 = (this->field0_0x0).__vtable;
        }
      }
    }
    else {
      pEVar4 = (this->field0_0x0).__vtable;
    }
    (*(code *)pEVar4[2].OnButtonRepeat)
              ((int)this->m_maxBackShdrSize + *(short *)&pEVar4[2].StateChanged + -0x44,pEVar1);
  }
  return;
}

void EUIMenu::ListBackward(bool sound) {
	EUIObjectNode *pNextCur;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	NLIterator i;
	ENodeListNode *pNode;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	NLIterator i;
	ENodeListNode *pNode;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  EUIObjectNode *pEVar1;
  undefined1 *puVar2;
  ENodeListNode *pEVar3;
  EUIObjectNode__vtable *pEVar4;
  
  if (1 < this->m_nOpts) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
    puVar2 = this->m_pCurOpt->m_listIr;
                    /* end of inlined section */
    while( true ) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
      pEVar3 = *(ENodeListNode **)(puVar2 + 4);
                    /* end of inlined section */
      if (pEVar3 == (ENodeListNode *)0x0) {
        pEVar3 = (this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pTail;
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = (EUIObjectNode *)pEVar3->data;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      if (((int)pEVar1->m_flags >> 4 & 1U) != 0) break;
      puVar2 = pEVar1->m_listIr;
    }
    if (sound) {
      if (pEVar1 == this->m_pCurOpt) {
        pEVar4 = (this->field0_0x0).__vtable;
      }
      else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
        if (_13EUIObjectNode_m_uiSfxNext == (undefined1 *)0x0) {
          pEVar4 = (this->field0_0x0).__vtable;
        }
        else {
          (*(code *)_13EUIObjectNode_m_uiSfxNext)();
                    /* end of inlined section */
          pEVar4 = (this->field0_0x0).__vtable;
        }
      }
    }
    else {
      pEVar4 = (this->field0_0x0).__vtable;
    }
    (*(code *)pEVar4[2].OnButtonRepeat)
              ((int)this->m_maxBackShdrSize + *(short *)&pEVar4[2].StateChanged + -0x44,pEVar1);
  }
  return;
}

void EUIMenu::Draw(ERC *prc) {
	EUIObjectNode *this;
	float absratiox;
	float absratioy;
	EGraphics *this;
	EGraphics *this;
	float x;
	float y;
	EUIObjectNode *this;
	
  uint uVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float fVar2;
  float fVar3;
  float local_60;
  float local_5c;
  float local_50;
  float local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_20 = (undefined4)unaff_s1;
  uStack_1c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_s0;
  uStack_2c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)(this->field0_0x0).m_flags >> 1 & 1U) != 0) {
    if (this->m_pBackgroundShader != (ERShader *)0x0) {
      Select__8ERShaderP3ERCi(this->m_pBackgroundShader,prc,0);
                    /* inlined from e_graphics.h */
                    /* end of inlined section */
      uVar1 = this->m_maxBackShdrSize[0];
                    /* end of inlined section */
      if ((int)uVar1 < 0) {
        fVar2 = (float)(uVar1 & 1 | uVar1 >> 1);
        fVar2 = fVar2 + fVar2;
      }
      else {
        fVar2 = (float)uVar1;
      }
                    /* inlined from e_graphics.h */
                    /* end of inlined section */
      uVar1 = this->m_maxBackShdrSize[1];
                    /* inlined from e_graphics.h */
                    /* end of inlined section */
      if ((int)uVar1 < 0) {
        fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
        fVar3 = fVar3 + fVar3;
      }
      else {
        fVar3 = (float)uVar1;
      }
      local_50 = (this->field0_0x0).m_WDH.field0_0x0.d[0] / (fVar2 / (float)_pGfx->m_xscreen);
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_60 = (this->field0_0x0).m_pos.field0_0x0.d[0];
      local_5c = (this->field0_0x0).m_pos.field0_0x0.d[2];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_4c = (this->field0_0x0).m_WDH.field0_0x0.d[2] / (fVar3 / (float)_pGfx->m_yscreen);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      if (((int)(this->field0_0x0).m_flags >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_40 = 0x3f266666;
        local_38 = 0x3f266666;
        local_3c = 0x3f266666;
      }
      else {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
        local_38 = 0x3f800000;
        local_3c = 0x3f800000;
                    /* end of inlined section */
        local_40 = 0x3f800000;
      }
      local_34 = 0x3f800000;
                    /* end of inlined section */
      (*(code *)prc->__vtable[1].ClipRect)
                (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_60,&local_50
                 ,&local_40);
    }
    DrawChildren__13EUIObjectNodeP3ERC(&this->field0_0x0,prc);
  }
  return;
}

void EUIMenu::AddOpt(EUIObjectNode *pOpt, EVec3 pos) {
	EUIObjectNode *this;
	u32 id;
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  EUIObjectNode__vtable *pEVar1;
  
  AddChild__13EUIObjectNodeP13EUIObjectNode(&this->field0_0x0,pOpt);
  (*(code *)pOpt->__vtable->OnButtonRepeat)
            ((int)&(pOpt->m_ChildList).field0_0x0.m_l.m_pHead +
             (int)*(short *)&pOpt->__vtable->StateChanged,pos);
  if (this->m_pCurOpt == (EUIObjectNode *)0x0) {
    pEVar1 = (this->field0_0x0).__vtable;
    (*(code *)pEVar1[2].OnButtonRepeat)
              ((int)this->m_maxBackShdrSize + *(short *)&pEVar1[2].StateChanged + -0x44,pOpt);
  }
  else {
    SetFlagsPropigate__13EUIObjectNodeUib(pOpt,8,false);
  }
  SetFlagsPropigate__13EUIObjectNodeUib(pOpt,2,true);
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
  pOpt->m_id = this->m_nOpts;
                    /* end of inlined section */
  this->m_nOpts = this->m_nOpts + 1;
  pEVar1 = (this->field0_0x0).__vtable;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  this->m_totalHeight = this->m_totalHeight + (pOpt->m_WDH).field0_0x0.d[2];
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  this->m_totalWidth = this->m_totalWidth + (pOpt->m_WDH).field0_0x0.d[0];
  (*(code *)pEVar1[2].Message)
            ((int)this->m_maxBackShdrSize + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  return;
}

void EUIMenu::RemoveOpt(EUIObjectNode *pOpt) {
	NLIterator nli;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	u32 id;
	
  EUIObjectNode__vtable *pEVar1;
  EUIObjectNode *pEVar2;
  uint uVar3;
  ENodeListNode *pEVar4;
  
  RemoveChild__13EUIObjectNodeP13EUIObjectNode(&this->field0_0x0,pOpt);
  if (pOpt == this->m_pCurOpt) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
    pEVar4 = (this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead;
    if (pEVar4 == (ENodeListNode *)0x0) {
      pEVar2 = (EUIObjectNode *)0x0;
    }
    else {
      pEVar2 = (EUIObjectNode *)pEVar4->data;
    }
                    /* end of inlined section */
    this->m_pCurOpt = pEVar2;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar4 = (this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead;
  }
  else {
    pEVar4 = (this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead;
  }
                    /* end of inlined section */
  this->m_nOpts = 0;
  this->m_totalWidth = 0.0;
  this->m_totalHeight = 0.0;
  if (pEVar4 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar3 = pEVar4->data;
    while( true ) {
      *(int *)(uVar3 + 0x14) = this->m_nOpts;
                    /* end of inlined section */
      this->m_nOpts = this->m_nOpts + 1;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      this->m_totalHeight = this->m_totalHeight + *(float *)(uVar3 + 0x20);
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      this->m_totalWidth = this->m_totalWidth + *(float *)(uVar3 + 0x18);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar4 = pEVar4->pNext;
                    /* end of inlined section */
      if (pEVar4 == (ENodeListNode *)0x0) break;
      uVar3 = pEVar4->data;
    }
  }
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[2].Message)
            ((int)this->m_maxBackShdrSize + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  return;
}

void EUIMenu::SetBoxDims(EVec3 &dims) {
	EUIObjectNode *this;
	
  undefined *puVar1;
  EVec3 *pEVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  EUIObjectNode__vtable *pEVar6;
  ulong *puVar7;
  ulong in_v0;
  ulong uVar8;
  
  puVar1 = (undefined *)((int)&dims->field0_0x0 + 7);
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
  uVar3 = (uint)puVar1 & 7;
  uVar4 = (uint)dims & 7;
  uVar8 = (*(long *)(puVar1 + -uVar3) << (7 - uVar3) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
          *(ulong *)((int)dims - uVar4) >> uVar4 * 8;
  fVar5 = (dims->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->field0_0x0).m_WDH.field0_0x0 + 7);
  uVar3 = (uint)puVar1 & 7;
  puVar7 = (ulong *)(puVar1 + -uVar3);
  *puVar7 = *puVar7 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
  pEVar2 = &(this->field0_0x0).m_WDH;
  uVar3 = (uint)pEVar2 & 7;
  puVar7 = (ulong *)((int)pEVar2 - uVar3);
  *puVar7 = uVar8 << uVar3 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
  (this->field0_0x0).m_WDH.field0_0x0.d[2] = fVar5;
                    /* end of inlined section */
  pEVar6 = (this->field0_0x0).__vtable;
  (*(code *)pEVar6[2].Message)
            ((int)this->m_maxBackShdrSize + *(short *)&pEVar6[2].SetBoxDims + -0x44);
  return;
}

void EUIMenu::SetBoxDims(EVec2 &dims) {
	EUIObjectNode *this;
	EVec2 &dims;
	EVec2 *this;
	EVec2 *this;
	
  EUIObjectNode__vtable *pEVar1;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->field0_0x0).m_WDH.field0_0x0.d[0] = (dims->field0_0x0).d[0];
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  (this->field0_0x0).m_WDH.field0_0x0.d[2] = (dims->field0_0x0).d[1];
                    /* end of inlined section */
  (*(code *)pEVar1[2].Message)
            ((int)this->m_maxBackShdrSize + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  return;
}

void EUIMenu::SetPositions() {
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  int iVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if ((this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0) {
    iVar1 = this->m_layout;
    if (iVar1 == 0) {
      SetupVertLayout__7EUIMenu(this);
    }
    else if (0 < iVar1) {
      if (iVar1 == 1) {
        SetupHorizLayout__7EUIMenu(this);
      }
      else if (iVar1 == 2) {
        SetupWheelLayout__7EUIMenu(this);
      }
    }
  }
  return;
}

void EUIMenu::SetupVertLayout() {
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	EVec3 newPos;
	EVec3 prevPos;
	f32 lastHeight;
	f32 mWidth;
	f32 mHeight;
	f32 cWidth;
	f32 cHeight;
	NLIterator i;
	NLIterator i;
	EUIObjectNode *this;
	NLIterator i;
	ENodeListNode *pNode;
	EUIObjectNode *this;
	EUIObjectNode *this;
	NLIterator i;
	ENodeListNode *pNode;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	NLIterator i;
	ENodeListNode *pNode;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ENodeListNode *pEVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  EVec3 newPos;
  EVec3 prevPos;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar11 = (this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar11 == (ENodeListNode *)0x0) {
    return;
  }
  fVar15 = 0.5;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  uVar10 = pEVar11->data;
  do {
    newPos.field0_0x0.d[2] = 0.0;
    newPos.field0_0x0.d[1] = 0.0;
    newPos.field0_0x0.d[0] = 0.0;
    prevPos.field0_0x0.d[2] = 0.0;
    prevPos.field0_0x0._0_8_ = 0;
    iVar8 = *(int *)(uVar10 + 0xc);
                    /* end of inlined section */
    if (*(int **)(iVar8 + 4) != (int *)0x0) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
      iVar8 = **(int **)(iVar8 + 4);
                    /* end of inlined section */
      iVar4 = *(int *)(iVar8 + 0x38);
      uVar9 = (ulong)iVar4;
      uVar6 = (**(code **)(iVar4 + 0x5c))(iVar8 + *(short *)(iVar4 + 0x58));
      uVar2 = uVar6 + 7 & 7;
      uVar3 = uVar6 & 7;
      prevPos.field0_0x0._0_8_ =
           (*(long *)((uVar6 + 7) - uVar2) << (7 - uVar2) * 8 |
           uVar9 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)(uVar6 - uVar3) >> uVar3 * 8;
      prevPos.field0_0x0.d[2] = *(float *)(uVar6 + 8);
      puVar1 = (undefined *)((int)&prevPos.field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 |
                (ulong)prevPos.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      iVar8 = *(int *)(uVar10 + 0xc);
    }
                    /* end of inlined section */
    fVar16 = 0.0;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    if (*(int **)(iVar8 + 4) == (int *)0x0) {
      iVar8 = this->m_optJustx;
    }
    else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
      fVar16 = *(float *)(**(int **)(iVar8 + 4) + 0x20);
                    /* end of inlined section */
      iVar8 = this->m_optJustx;
    }
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
    fVar12 = (this->field0_0x0).m_WDH.field0_0x0.d[0];
    fVar14 = (this->field0_0x0).m_WDH.field0_0x0.d[2];
                    /* end of inlined section */
    fVar13 = *(float *)(uVar10 + 0x20);
    if (iVar8 == 0) {
                    /* end of inlined section */
      newPos.field0_0x0.d[0] =
           (this->field0_0x0).m_pos.field0_0x0.d[0] + this->m_xoff +
           (fVar12 - *(float *)(uVar10 + 0x18)) * fVar15;
    }
    else if (iVar8 == 1) {
                    /* end of inlined section */
      newPos.field0_0x0.d[0] = (this->field0_0x0).m_pos.field0_0x0.d[0] + this->m_xoff;
    }
    else if (iVar8 == 2) {
                    /* end of inlined section */
      newPos.field0_0x0.d[0] =
           ((this->field0_0x0).m_pos.field0_0x0.d[0] + fVar12) -
           (this->m_xoff + *(float *)(uVar10 + 0x18));
    }
    else {
                    /* end of inlined section */
      pfVar7 = (float *)(**(code **)(*(int *)(uVar10 + 0x38) + 0x5c))
                                  (uVar10 + (int)*(short *)(*(int *)(uVar10 + 0x38) + 0x58));
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      newPos.field0_0x0.d[0] = *pfVar7;
    }
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (*(int *)(*(int *)(uVar10 + 0xc) + 4) == 0) {
      iVar8 = this->m_optJusty;
      if (iVar8 == 0) {
                    /* end of inlined section */
        newPos.field0_0x0.d[2] =
             (this->field0_0x0).m_pos.field0_0x0.d[2] + this->m_yoff +
             (fVar14 - (this->m_totalHeight + (float)this->m_nOpts * this->m_optgap)) * fVar15;
      }
      else {
        if (iVar8 == 1) {
                    /* end of inlined section */
          fVar16 = (this->field0_0x0).m_pos.field0_0x0.d[2];
          fVar12 = this->m_yoff;
          goto LAB_002a2590;
        }
        if (iVar8 == 2) {
                    /* end of inlined section */
          newPos.field0_0x0.d[2] =
               (this->field0_0x0).m_pos.field0_0x0.d[2] + this->m_yoff + (fVar14 - fVar13);
        }
        else {
                    /* end of inlined section */
          iVar8 = (**(code **)(*(int *)(uVar10 + 0x38) + 0x5c))
                            (uVar10 + (int)*(short *)(*(int *)(uVar10 + 0x38) + 0x58));
                    /* end of inlined section */
          newPos.field0_0x0.d[2] = *(float *)(iVar8 + 8);
        }
      }
    }
    else {
                    /* end of inlined section */
      fVar12 = this->m_optgap;
      fVar16 = prevPos.field0_0x0.d[2] + fVar16;
LAB_002a2590:
      newPos.field0_0x0.d[2] = fVar16 + fVar12;
    }
    (**(code **)(*(int *)(uVar10 + 0x38) + 0x24))
              (uVar10 + (int)*(short *)(*(int *)(uVar10 + 0x38) + 0x20),&newPos);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar11 = pEVar11->pNext;
                    /* end of inlined section */
    if (pEVar11 == (ENodeListNode *)0x0) {
      return;
    }
    uVar10 = pEVar11->data;
  } while( true );
}

void EUIMenu::SetupHorizLayout() {
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	EVec3 newPos;
	EVec3 prevPos;
	f32 lastWidth;
	f32 mWidth;
	f32 mHeight;
	f32 cWidth;
	f32 cHeight;
	NLIterator i;
	NLIterator i;
	EUIObjectNode *this;
	NLIterator i;
	ENodeListNode *pNode;
	EUIObjectNode *this;
	EUIObjectNode *this;
	NLIterator i;
	ENodeListNode *pNode;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	NLIterator i;
	ENodeListNode *pNode;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  ulong uVar9;
  uint uVar10;
  ENodeListNode *pEVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  EVec3 newPos;
  EVec3 prevPos;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar11 = (this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar11 == (ENodeListNode *)0x0) {
    return;
  }
  fVar15 = 0.5;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  uVar10 = pEVar11->data;
  do {
    newPos.field0_0x0.d[2] = 0.0;
    newPos.field0_0x0.d[1] = 0.0;
    newPos.field0_0x0.d[0] = 0.0;
    prevPos.field0_0x0.d[2] = 0.0;
    prevPos.field0_0x0._0_8_ = 0;
    iVar7 = *(int *)(uVar10 + 0xc);
                    /* end of inlined section */
    if (*(int **)(iVar7 + 4) != (int *)0x0) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
      iVar7 = **(int **)(iVar7 + 4);
                    /* end of inlined section */
      iVar4 = *(int *)(iVar7 + 0x38);
      uVar9 = (ulong)iVar4;
      uVar6 = (**(code **)(iVar4 + 0x5c))(iVar7 + *(short *)(iVar4 + 0x58));
      uVar2 = uVar6 + 7 & 7;
      uVar3 = uVar6 & 7;
      prevPos.field0_0x0._0_8_ =
           (*(long *)((uVar6 + 7) - uVar2) << (7 - uVar2) * 8 |
           uVar9 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
           *(ulong *)(uVar6 - uVar3) >> uVar3 * 8;
      prevPos.field0_0x0.d[2] = *(float *)(uVar6 + 8);
      puVar1 = (undefined *)((int)&prevPos.field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar2);
      *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 |
                (ulong)prevPos.field0_0x0._0_8_ >> (7 - uVar2) * 8;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      iVar7 = *(int *)(uVar10 + 0xc);
    }
                    /* end of inlined section */
    fVar16 = 0.0;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    if (*(int **)(iVar7 + 4) == (int *)0x0) {
      iVar7 = this->m_optJusty;
    }
    else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
      fVar16 = *(float *)(**(int **)(iVar7 + 4) + 0x18);
                    /* end of inlined section */
      iVar7 = this->m_optJusty;
    }
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
    fVar13 = (this->field0_0x0).m_WDH.field0_0x0.d[0];
    fVar12 = (this->field0_0x0).m_WDH.field0_0x0.d[2];
    fVar14 = *(float *)(uVar10 + 0x18);
                    /* end of inlined section */
    if (iVar7 == 0) {
                    /* end of inlined section */
      newPos.field0_0x0.d[2] =
           (this->field0_0x0).m_pos.field0_0x0.d[2] + this->m_yoff +
           (fVar12 - *(float *)(uVar10 + 0x20)) * fVar15;
    }
    else if (iVar7 == 1) {
                    /* end of inlined section */
      newPos.field0_0x0.d[2] = (this->field0_0x0).m_pos.field0_0x0.d[2] + this->m_yoff;
    }
    else if (iVar7 == 2) {
                    /* end of inlined section */
      newPos.field0_0x0.d[2] =
           ((this->field0_0x0).m_pos.field0_0x0.d[2] + fVar12) -
           (this->m_yoff + *(float *)(uVar10 + 0x20));
    }
    else {
                    /* end of inlined section */
      iVar7 = (**(code **)(*(int *)(uVar10 + 0x38) + 0x5c))
                        (uVar10 + (int)*(short *)(*(int *)(uVar10 + 0x38) + 0x58));
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      newPos.field0_0x0.d[2] = *(float *)(iVar7 + 8);
    }
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (*(int *)(*(int *)(uVar10 + 0xc) + 4) == 0) {
      iVar7 = this->m_optJustx;
      if (iVar7 == 0) {
                    /* end of inlined section */
        newPos.field0_0x0.d[0] =
             (this->field0_0x0).m_pos.field0_0x0.d[0] + this->m_xoff +
             (fVar13 - (this->m_totalWidth + (float)this->m_nOpts * this->m_optgap)) * fVar15;
      }
      else {
        if (iVar7 == 1) {
                    /* end of inlined section */
          fVar16 = (this->field0_0x0).m_pos.field0_0x0.d[0];
          fVar12 = this->m_xoff;
          goto LAB_002a27fc;
        }
        if (iVar7 == 2) {
                    /* end of inlined section */
          newPos.field0_0x0.d[0] =
               (this->field0_0x0).m_pos.field0_0x0.d[0] + this->m_xoff + (fVar13 - fVar14);
        }
        else {
                    /* end of inlined section */
          pfVar8 = (float *)(**(code **)(*(int *)(uVar10 + 0x38) + 0x5c))
                                      (uVar10 + (int)*(short *)(*(int *)(uVar10 + 0x38) + 0x58));
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          newPos.field0_0x0.d[0] = *pfVar8;
                    /* end of inlined section */
        }
      }
LAB_002a2824:
      iVar7 = *(int *)(uVar10 + 0x38);
    }
    else {
      if ((uint)this->m_optJustx < 2) {
                    /* end of inlined section */
        fVar12 = this->m_optgap;
        fVar16 = prevPos.field0_0x0.d[0] + fVar16;
LAB_002a27fc:
        newPos.field0_0x0.d[0] = fVar16 + fVar12;
        goto LAB_002a2824;
      }
      if (this->m_optJustx == 2) {
                    /* end of inlined section */
        newPos.field0_0x0.d[0] = prevPos.field0_0x0.d[0] - (fVar14 + this->m_optgap);
        goto LAB_002a2824;
      }
      iVar7 = *(int *)(uVar10 + 0x38);
    }
    (**(code **)(iVar7 + 0x24))(uVar10 + (int)*(short *)(iVar7 + 0x20),&newPos);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar11 = pEVar11->pNext;
                    /* end of inlined section */
    if (pEVar11 == (ENodeListNode *)0x0) {
      return;
    }
    uVar10 = pEVar11->data;
  } while( true );
}

void EUIMenu::SetupWheelLayout() {
	float theta;
	float rad;
	float nCurOpt;
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	EVec3 newPos;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  EVec3 newPos;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->field0_0x0).m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  fVar4 = (this->field0_0x0).m_WDH.field0_0x0.d[0] * 0.5;
  fVar6 = 0.0;
  fVar7 = 6.283185 / (float)this->m_nOpts;
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    fVar5 = fVar7 * 0.0;
    while( true ) {
      uVar1 = pEVar2->data;
      newPos.field0_0x0.d[2] = 0.0;
                    /* end of inlined section */
      fVar6 = fVar6 + 1.0;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      newPos.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      newPos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
      fVar3 = cosf(fVar5 - 1.570796);
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      newPos.field0_0x0.d[0] =
           ((this->field0_0x0).m_pos.field0_0x0.d[0] + fVar4 * (fVar3 + 1.0)) -
           *(float *)(uVar1 + 0x18) * 0.5;
      fVar5 = sinf(fVar5 - 1.570796);
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      newPos.field0_0x0.d[2] =
           ((this->field0_0x0).m_pos.field0_0x0.d[2] + fVar4 * (fVar5 + 1.0)) -
           *(float *)(uVar1 + 0x20) * 0.5;
      (**(code **)(*(int *)(uVar1 + 0x38) + 0x24))
                (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x38) + 0x20),&newPos);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      fVar5 = fVar6 * fVar7;
    }
  }
  return;
}

void EUIMenu::ProcessStickAndButtonEvents(EControllerContext *pPadContext) {
	int i1;
	int i2;
	float stickVal;
	
  EUIObjectNode__vtable *pEVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  
  if ((this->m_stick & 4) != 0) {
    for (iVar4 = 0; iVar2 = GetPressedCount__18EControllerContexti(pPadContext,this->m_btnPrev),
        iVar4 < iVar2; iVar4 = iVar4 + 1) {
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1[3].Draw)((int)this->m_maxBackShdrSize + *(short *)&pEVar1[3].Update + -0x44);
    }
    for (iVar4 = 0; iVar2 = GetPressedCount__18EControllerContexti(pPadContext,this->m_btnNext),
        iVar4 < iVar2; iVar4 = iVar4 + 1) {
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1[3].EUIObjectNode)
                ((int)this->m_maxBackShdrSize + *(short *)(pEVar1 + 3) + -0x44);
    }
  }
  if ((this->m_stick & 3) != 0) {
    fVar5 = GetStick__18EControllerContextii
                      (pPadContext,(uint)((this->m_stick & 2) != 0),this->m_choiceAxis);
    lVar3 = fabs((long)(double)fVar5);
    iVar4 = dpcmp(lVar3,0x3fe0000000000000);
    if (iVar4 < 1) {
      this->m_lastStickValue = fVar5;
    }
    else {
      lVar3 = fabs((long)(double)this->m_lastStickValue);
      iVar4 = dpcmp(lVar3,0x3fe0000000000000);
      if (iVar4 < 0) {
        if (this->m_choiceAxis == 1) {
          fVar5 = -fVar5;
        }
        pEVar1 = (this->field0_0x0).__vtable;
        if (0.0 < fVar5) {
          (*(code *)pEVar1[3].EUIObjectNode)
                    ((int)this->m_maxBackShdrSize + *(short *)(pEVar1 + 3) + -0x44);
          this->m_lastStickValue = fVar5;
        }
        else {
          (*(code *)pEVar1[3].Draw)
                    ((int)this->m_maxBackShdrSize + *(short *)&pEVar1[3].Update + -0x44);
          this->m_lastStickValue = fVar5;
        }
      }
      else {
        this->m_lastStickValue = fVar5;
      }
    }
  }
  return;
}

void EUIMenu::ProcessStickAndButtonAutoRepeat(int ctrlIndex) {
  if ((this->m_stick & 4) != 0) {
    UpdateButtons__20EUiMonitorAutoRepeati((this->field0_0x0).m_pAutoRepeatMonitor,ctrlIndex);
  }
  if ((this->m_stick & 3) != 0) {
    UpdateSticks__20EUiMonitorAutoRepeati((this->field0_0x0).m_pAutoRepeatMonitor,ctrlIndex);
  }
  return;
}

void EUIMenu::ProcessUserInput() {
	int iCtrlStart;
	int iCtrlEnd;
	int i;
	EControllerContext *pPadContext;
	
  EControllerContext *pPadContext;
  EUIObjectNode__vtable *pEVar1;
  int ctrlIndex;
  int iVar2;
  int iVar3;
  
  iVar3 = (this->field0_0x0).m_activeCtrl;
  ctrlIndex = iVar3;
  if (iVar3 == -1) {
    ctrlIndex = 0;
    iVar3 = 7;
  }
  if (iVar3 < ctrlIndex) {
    pEVar1 = (this->field0_0x0).__vtable;
  }
  else {
    do {
      pPadContext = LockControllerFocus__18EControllerManagerib(_pCtrlMan,ctrlIndex,true);
      GetDirection__7EUIMenu(this);
      ProcessStickAndButtonEvents__7EUIMenuP18EControllerContext(this,pPadContext);
      iVar2 = ctrlIndex + 1;
      ReleaseControllerFocus__18EControllerManagerib(_pCtrlMan,ctrlIndex,true);
      ctrlIndex = iVar2;
    } while (iVar2 <= iVar3);
    pEVar1 = (this->field0_0x0).__vtable;
  }
  (*(code *)pEVar1[3].SetBoxDims)
            ((int)this->m_maxBackShdrSize + *(short *)&pEVar1[3].SetPos + -0x44,
             (this->field0_0x0).m_activeCtrl);
  return;
}

void EUIMenu::OnButtonRepeat(int buttonId) {
  EUIObjectNode__vtable *pEVar1;
  
  if ((this->m_stick & 4) != 0) {
    if (buttonId == this->m_btnPrev) {
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1[3].Draw)((int)this->m_maxBackShdrSize + *(short *)&pEVar1[3].Update + -0x44);
    }
    else if (buttonId == this->m_btnNext) {
      pEVar1 = (this->field0_0x0).__vtable;
      (*(code *)pEVar1[3].EUIObjectNode)
                ((int)this->m_maxBackShdrSize + *(short *)(pEVar1 + 3) + -0x44);
    }
  }
  return;
}

void EUIMenu::OnStickRepeat(int stickId, int axisId, int direction) {
  int iVar1;
  EUIObjectNode__vtable *pEVar2;
  
  if (((this->m_stick & 1) == 0) || (stickId != 0)) {
    if ((this->m_stick & 2) == 0) {
      return;
    }
    if (stickId != 1) {
      return;
    }
    iVar1 = this->m_choiceAxis;
  }
  else {
    iVar1 = this->m_choiceAxis;
  }
  if (axisId == iVar1) {
    pEVar2 = (this->field0_0x0).__vtable;
    if (this->m_stickDirFactor * direction < 0) {
      (*(code *)pEVar2[3].Draw)((int)this->m_maxBackShdrSize + *(short *)&pEVar2[3].Update + -0x44);
    }
    else {
      (*(code *)pEVar2[3].EUIObjectNode)
                ((int)this->m_maxBackShdrSize + *(short *)(pEVar2 + 3) + -0x44);
    }
  }
  return;
}

void EUIMenu::AddChild(EUIObjectNode *pChild) {
  EUIObjectNode__vtable *pEVar1;
  undefined8 unaff_retaddr;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
                    /* end of inlined section */
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[2].SetBoxDims)
            ((int)this->m_maxBackShdrSize + *(short *)&pEVar1[2].SetPos + -0x44,pChild,&local_20);
  return;
}

void EUIMenu::SetLayout(int layout, int justx, int justy) {
  this->m_layout = layout;
  SetOptJust__7EUIMenuii(this,justx,justy);
  return;
}

void EUIMenu::SetOptGap(float gap) {
  EUIObjectNode__vtable *pEVar1;
  
  this->m_optgap = gap;
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[2].Message)
            ((int)this->m_maxBackShdrSize + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  return;
}

void EUIMenu::SetYOffset(float yoff) {
  EUIObjectNode__vtable *pEVar1;
  
  this->m_yoff = yoff;
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[2].Message)
            ((int)this->m_maxBackShdrSize + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  return;
}

void EUIMenu::SetXOffset(float xoff) {
  EUIObjectNode__vtable *pEVar1;
  
  this->m_xoff = xoff;
  pEVar1 = (this->field0_0x0).__vtable;
  (*(code *)pEVar1[2].Message)
            ((int)this->m_maxBackShdrSize + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  return;
}

void EUIMenu::SetPulseTime(float time) {
  this->m_pulseTime = time;
  return;
}

EUIObjectNode* EUIMenu::GetCurOpt() {
  return this->m_pCurOpt;
}

int EUIMenu::GetNOpts() {
  return this->m_nOpts;
}

int EUIMenu::GetLayout() {
  return this->m_layout;
}

float EUIMenu::GetOptGap() {
  return this->m_optgap;
}

void EUIMenu::SetOptJust(int justx, int justy) {
  EUIObjectNode__vtable *pEVar1;
  
  this->m_optJusty = justy;
  pEVar1 = (this->field0_0x0).__vtable;
  this->m_optJustx = justx;
  (*(code *)pEVar1[2].Message)
            ((int)this->m_maxBackShdrSize + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  return;
}

void EUIMenu::SetStick(u32 stick) {
  this->m_stick = stick;
  return;
}

void EUIMenu::NextItem() {
  ListForward__7EUIMenub(this,true);
  return;
}

void EUIMenu::PrevItem() {
  ListBackward__7EUIMenub(this,true);
  return;
}

void EUIMenu::SetListTravClamp(bool on) {
  *(int *)&this->m_bClampListTrav = (int)on;
  return;
}
