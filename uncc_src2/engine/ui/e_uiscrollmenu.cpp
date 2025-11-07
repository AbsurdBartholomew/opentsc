// STATUS: NOT STARTED

#include "e_uiscrollmenu.h"

__vtbl_ptr_type EUIScrollMenu virtual table[25] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::~EUIScrollMenu,
		/* .__delta2 = */ -3168
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::Update,
		/* .__delta2 = */ -2696
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::Draw,
		/* .__delta2 = */ -2936
	},
	/* [4] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::SetPos,
		/* .__delta2 = */ 416
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
		/* .__pfn = */ &EUIScrollMenu::StateChanged,
		/* .__delta2 = */ 472
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
		/* .__pfn = */ &EUIScrollMenu::RemoveAllOpts,
		/* .__delta2 = */ -3056
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
		/* .__pfn = */ &EUIScrollMenu::AddOpt,
		/* .__delta2 = */ -3008
	},
	/* [17] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::SetPositions,
		/* .__delta2 = */ -2176
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
		/* .__pfn = */ &EUIScrollMenu::SetLayout,
		/* .__delta2 = */ 360
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
		/* .__pfn = */ &EUIScrollMenu::NextItem,
		/* .__delta2 = */ 536
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIScrollMenu::PrevItem,
		/* .__delta2 = */ 568
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

EUIScrollMenu* EUIScrollMenu::EUIScrollMenu(int _layout, int background_id, float optGap, float _yoff, float _xoff, int backid, int forewardid, bool clampAtEnds) {
  __7EUIMenuiifff(&this->field0_0x0,_layout,background_id,optGap,_yoff,_xoff);
  this->m_pMorePrompts[0] = (ERShader *)0x0;
  this->m_pMorePrompts[1] = (ERShader *)0x0;
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_13EUIScrollMenu;
  InitMorePrompts__13EUIScrollMenuii(this,backid,forewardid);
  *(int *)&this->m_clampAtEnds = (int)clampAtEnds;
  this->m_startOff = 0.0;
  (this->field0_0x0).m_pCurOpt = (EUIObjectNode *)0x0;
  this->m_pFirstVis = (EUIObjectNode *)0x0;
  this->m_pLastVis = (EUIObjectNode *)0x0;
  return this;
}

void EUIScrollMenu::~EUIScrollMenu(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_13EUIScrollMenu;
  if (this->m_pMorePrompts[0] != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pMorePrompts[0]->field0_0x0);
  }
  if (this->m_pMorePrompts[1] == (ERShader *)0x0) {
    this->m_pMorePrompts[1] = (ERShader *)0x0;
  }
  else {
    DelRef__9EResource(&this->m_pMorePrompts[1]->field0_0x0);
    this->m_pMorePrompts[1] = (ERShader *)0x0;
  }
  this->m_pMorePrompts[0] = (ERShader *)0x0;
  ___7EUIMenu(&this->field0_0x0,__in_chrg);
  return;
}

void EUIScrollMenu::RemoveAllOpts() {
  RemoveAllOpts__7EUIMenu(&this->field0_0x0);
  this->m_pLastVis = (EUIObjectNode *)0x0;
  this->m_pFirstVis = (EUIObjectNode *)0x0;
  return;
}

void EUIScrollMenu::AddOpt(EUIObjectNode *pOpt, EVec3 pos) {
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EVec3 &v;
	
  undefined8 unaff_retaddr;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  if ((this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead == (ENodeListNode *)0x0) {
    this->m_pFirstVis = pOpt;
    this->m_pLastVis = pOpt;
  }
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_18 = (pos->field0_0x0).d[2];
  local_20 = (pos->field0_0x0).d[0];
  local_1c = (pos->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  AddOpt__7EUIMenuP13EUIObjectNodeG5EVec3(&this->field0_0x0,pOpt,(EVec3 *)&local_20);
  return;
}

void EUIScrollMenu::Draw(ERC *prc) {
	EUIObjectNode *this;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  ENodeListNode *pEVar1;
  EUIObjectNode *pEVar2;
  EUIObjectNode *pEVar3;
  
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((((((int)(this->field0_0x0).field0_0x0.m_flags >> 1 & 1U) != 0) &&
       (Draw__7EUIMenuP3ERC(&this->field0_0x0,prc), this->m_pMorePrompts[0] != (ERShader *)0x0)) &&
      (this->m_pMorePrompts[1] != (ERShader *)0x0)) &&
     ((((int)(this->field0_0x0).field0_0x0.m_flags >> 2 & 1U) != 0 &&
      (pEVar1 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead,
      pEVar1 != (ENodeListNode *)0x0)))) {
    pEVar3 = (this->field0_0x0).m_pCurOpt;
    if (pEVar3 == this->m_pFirstVis) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
      if ((*(int *)(pEVar1->data + 0x10) >> 1 & 1U) == 0) {
        DrawPrompt__13EUIScrollMenuP3ERCi(this,prc,0);
        pEVar3 = (this->field0_0x0).m_pCurOpt;
      }
      else {
        pEVar3 = (this->field0_0x0).m_pCurOpt;
      }
      pEVar2 = this->m_pLastVis;
    }
    else {
      pEVar2 = this->m_pLastVis;
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    if ((pEVar3 == pEVar2) &&
       ((*(int *)(((this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail)->data + 0x10)
         >> 1 & 1U) == 0)) {
      DrawPrompt__13EUIScrollMenuP3ERCi(this,prc,1);
    }
  }
  return;
}

void EUIScrollMenu::Update() {
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  EUIObjectNode *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((((int)(this->field0_0x0).field0_0x0.m_flags >> 2 & 1U) != 0) &&
     ((this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0)) {
    pEVar1 = (this->field0_0x0).m_pCurOpt;
    pEVar2 = pEVar1->__vtable;
    (*(code *)pEVar2->SetBoxDims)
              ((int)&(pEVar1->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)&pEVar2->SetPos);
    ProcessUserInput__7EUIMenu(&this->field0_0x0);
    if (((this->field0_0x0).field0_0x0.m_flags & 0x40) != 0) {
      RemoveMarkedChildren__13EUIObjectNode((EUIObjectNode *)this);
    }
  }
  return;
}

void EUIScrollMenu::ListForward() {
	EUIObjectNode *pLastCurOpt;
	EUIObjectNode *this;
	NLIterator i;
	void *pNode;
	EUIObjectNode *this;
	NLIterator i;
	void *pNode;
	EUIObjectNode *pNext;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	NLIterator i;
	void *pNode;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  EUIObjectNode **ppEVar1;
  EUIObjectNode__vtable *pEVar2;
  EUIObjectNode *pEVar3;
  
  pEVar3 = (this->field0_0x0).m_pCurOpt;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((((*(int *)(pEVar3->m_listIr + 8) != 0) || (*(int *)&this->m_clampAtEnds == 0)) &&
      (ListForward__7EUIMenub(&this->field0_0x0,true), pEVar3 != (this->field0_0x0).m_pCurOpt)) &&
     (pEVar3 == this->m_pLastVis)) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (*(int *)(pEVar3->m_listIr + 8) == 0) {
                    /* end of inlined section */
      pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
      this->m_pFirstVis =
           (EUIObjectNode *)((this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead)->data
      ;
      (*(code *)pEVar2[2].Message)
                ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar2[2].SetBoxDims + -0x44
                );
    }
    else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
      ppEVar1 = *(EUIObjectNode ***)(this->m_pFirstVis->m_listIr + 8);
      if (ppEVar1 == (EUIObjectNode **)0x0) {
        pEVar3 = (EUIObjectNode *)0x0;
      }
      else {
        pEVar3 = *ppEVar1;
      }
                    /* end of inlined section */
      this->m_pFirstVis = pEVar3;
      pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
      (*(code *)pEVar2[2].Message)
                ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar2[2].SetBoxDims + -0x44
                );
    }
  }
  return;
}

void EUIScrollMenu::ListBackward() {
	EUIObjectNode *pLastCurOpt;
	EUIObjectNode *this;
	NLIterator i;
	ENodeListNode *pNode;
	EUIObjectNode *this;
	NLIterator i;
	ENodeListNode *pNode;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  EUIObjectNode *pEVar1;
  EUIObjectNode__vtable *pEVar2;
  
  pEVar1 = (this->field0_0x0).m_pCurOpt;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if ((((*(int *)(pEVar1->m_listIr + 4) != 0) || (*(int *)&this->m_clampAtEnds == 0)) &&
      (ListBackward__7EUIMenub(&this->field0_0x0,true), pEVar1 != (this->field0_0x0).m_pCurOpt)) &&
     (pEVar1 == this->m_pFirstVis)) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if (*(EUIObjectNode ***)(pEVar1->m_listIr + 4) == (EUIObjectNode **)0x0) {
                    /* end of inlined section */
      pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
      this->m_pFirstVis =
           (EUIObjectNode *)((this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail)->data
      ;
      (*(code *)pEVar2[2].Message)
                ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar2[2].SetBoxDims + -0x44
                );
    }
    else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
      pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
      this->m_pFirstVis = **(EUIObjectNode ***)(pEVar1->m_listIr + 4);
      (*(code *)pEVar2[2].Message)
                ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar2[2].SetBoxDims + -0x44
                );
    }
  }
  return;
}

void EUIScrollMenu::SetPositions() {
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  int iVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if ((this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0) {
    iVar1 = (this->field0_0x0).m_layout;
    if (iVar1 == 0) {
      SetupVertLayout__13EUIScrollMenu(this);
    }
    else if ((0 < iVar1) && (iVar1 == 1)) {
      SetupHorizLayout__13EUIScrollMenu(this);
    }
  }
  return;
}

void EUIScrollMenu::SetupVertLayout() {
	NLIterator itr;
	NLIterator nli;
	f32 mWidth;
	f32 cWidth;
	f32 cHeight;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EVec3 newPos;
	f32 nexty;
	NLIterator i;
	NLIterator i;
	f32 lasty;
	EUIObjectNode *this;
	NLIterator i;
	ENodeListNode *pNode;
	NLIterator itr;
	NLIterator i;
	NLIterator i;
	
  float *pfVar1;
  int iVar2;
  EUIObjectNode *pEVar3;
  EUIObjectNode *pEVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  EVec3 newPos;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar4 = (EUIObjectNode *)(this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar4 != (EUIObjectNode *)0x0) {
                    /* end of inlined section */
    pEVar3 = this->m_pFirstVis;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    while (pEVar3 != *(EUIObjectNode **)&pEVar4->m_ChildList) {
                    /* end of inlined section */
      SetFlagsPropigate__13EUIObjectNodeUib(*(EUIObjectNode **)&pEVar4->m_ChildList,2,false);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar4 = pEVar4->m_pParent;
                    /* end of inlined section */
      pEVar3 = this->m_pFirstVis;
    }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
    fVar7 = (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0];
    iVar2 = ((this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead)->data;
    fVar5 = *(float *)(iVar2 + 0x20);
                    /* end of inlined section */
    fVar6 = *(float *)(iVar2 + 0x18);
    if (pEVar4 != (EUIObjectNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar3 = *(EUIObjectNode **)&pEVar4->m_ChildList;
      while( true ) {
                    /* end of inlined section */
        SetFlagsPropigate__13EUIObjectNodeUib(pEVar3,2,true);
        iVar2 = (this->field0_0x0).m_optJustx;
        this->m_pLastVis = pEVar3;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        newPos.field0_0x0.d[2] = 0.0;
        newPos.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
        newPos.field0_0x0.d[0] = 0.0;
        if (iVar2 == 0) {
                    /* end of inlined section */
          newPos.field0_0x0.d[0] =
               (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + (this->field0_0x0).m_xoff +
               (fVar7 - fVar6) * 0.5;
        }
        else if (iVar2 == 1) {
                    /* end of inlined section */
          newPos.field0_0x0.d[0] =
               (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + (this->field0_0x0).m_xoff;
        }
        else if (iVar2 == 2) {
                    /* end of inlined section */
          newPos.field0_0x0.d[0] =
               ((this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + fVar7) -
               ((this->field0_0x0).m_xoff + fVar6);
        }
        else {
                    /* end of inlined section */
          pfVar1 = (float *)(*(code *)pEVar3->__vtable[1].OnButtonRepeat)
                                      ((int)&(pEVar3->m_ChildList).field0_0x0.m_l.m_pHead +
                                       (int)*(short *)&pEVar3->__vtable[1].StateChanged);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
          newPos.field0_0x0.d[0] = *pfVar1;
        }
        if (pEVar3 == this->m_pFirstVis) {
                    /* end of inlined section */
          newPos.field0_0x0.d[2] =
               (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + (this->field0_0x0).m_yoff +
               this->m_startOff;
        }
        else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
          iVar2 = 0;
          if (*(int **)(pEVar3->m_listIr + 4) != (int *)0x0) {
            iVar2 = **(int **)(pEVar3->m_listIr + 4);
          }
                    /* end of inlined section */
          iVar2 = (**(code **)(*(int *)(iVar2 + 0x38) + 0x5c))
                            (iVar2 + *(short *)(*(int *)(iVar2 + 0x38) + 0x58));
          newPos.field0_0x0.d[2] = *(float *)(iVar2 + 8) + fVar5 + (this->field0_0x0).m_optgap;
        }
        (*(code *)pEVar3->__vtable->OnButtonRepeat)
                  ((int)&(pEVar3->m_ChildList).field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar3->__vtable->StateChanged,&newPos);
        if ((this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] +
            (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2] <
            newPos.field0_0x0.d[2] + fVar5 + (this->field0_0x0).m_optgap) {
          pEVar4 = this->m_pLastVis;
          goto LAB_0029f9a4;
        }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar4 = pEVar4->m_pParent;
                    /* end of inlined section */
        if (pEVar4 == (EUIObjectNode *)0x0) break;
        pEVar3 = *(EUIObjectNode **)&pEVar4->m_ChildList;
      }
    }
    pEVar4 = this->m_pLastVis;
LAB_0029f9a4:
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    if (((pEVar4 != (EUIObjectNode *)0x0) && (pEVar4->m_listIr != (undefined1 *)0x0)) &&
       (pEVar4 = *(EUIObjectNode **)(pEVar4->m_listIr + 8), pEVar4 != (EUIObjectNode *)0x0)) {
                    /* end of inlined section */
      pEVar3 = *(EUIObjectNode **)&pEVar4->m_ChildList;
      while( true ) {
        SetFlagsPropigate__13EUIObjectNodeUib(pEVar3,2,false);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar4 = pEVar4->m_pParent;
                    /* end of inlined section */
        if (pEVar4 == (EUIObjectNode *)0x0) break;
        pEVar3 = *(EUIObjectNode **)&pEVar4->m_ChildList;
      }
    }
  }
  return;
}

void EUIScrollMenu::SetupHorizLayout() {
	NLIterator itr;
	NLIterator nli;
	f32 mHeight;
	f32 cWidth;
	f32 cHeight;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EVec3 newPos;
	f32 nextx;
	NLIterator i;
	NLIterator i;
	f32 lastx;
	EUIObjectNode *this;
	NLIterator i;
	ENodeListNode *pNode;
	NLIterator itr;
	NLIterator i;
	NLIterator i;
	
  int iVar1;
  float *pfVar2;
  EUIObjectNode *pEVar3;
  EUIObjectNode *pEVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  EVec3 newPos;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar4 = (EUIObjectNode *)(this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar4 != (EUIObjectNode *)0x0) {
                    /* end of inlined section */
    pEVar3 = this->m_pFirstVis;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    while (pEVar3 != *(EUIObjectNode **)&pEVar4->m_ChildList) {
                    /* end of inlined section */
      SetFlagsPropigate__13EUIObjectNodeUib(*(EUIObjectNode **)&pEVar4->m_ChildList,2,false);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar4 = pEVar4->m_pParent;
                    /* end of inlined section */
      pEVar3 = this->m_pFirstVis;
    }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
    fVar7 = (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2];
    iVar1 = ((this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead)->data;
    fVar5 = *(float *)(iVar1 + 0x20);
                    /* end of inlined section */
    fVar6 = *(float *)(iVar1 + 0x18);
    if (pEVar4 != (EUIObjectNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar3 = *(EUIObjectNode **)&pEVar4->m_ChildList;
      while( true ) {
                    /* end of inlined section */
        SetFlagsPropigate__13EUIObjectNodeUib(pEVar3,2,true);
        iVar1 = (this->field0_0x0).m_optJusty;
        this->m_pLastVis = pEVar3;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
        newPos.field0_0x0.d[2] = 0.0;
        newPos.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
        newPos.field0_0x0.d[0] = 0.0;
        if (iVar1 == 0) {
          newPos.field0_0x0.d[2] =
               (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + (this->field0_0x0).m_yoff +
               (fVar7 - fVar5) * 0.5;
        }
        else if (iVar1 == 1) {
          newPos.field0_0x0.d[2] =
               (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + (this->field0_0x0).m_yoff;
        }
        else if (iVar1 == 2) {
          newPos.field0_0x0.d[2] =
               ((this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + fVar7) -
               ((this->field0_0x0).m_yoff + fVar5);
        }
        else {
          iVar1 = (*(code *)pEVar3->__vtable[1].OnButtonRepeat)
                            ((int)&(pEVar3->m_ChildList).field0_0x0.m_l.m_pHead +
                             (int)*(short *)&pEVar3->__vtable[1].StateChanged);
          newPos.field0_0x0.d[2] = *(float *)(iVar1 + 8);
        }
        if (pEVar3 == this->m_pFirstVis) {
          newPos.field0_0x0.d[0] =
               (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + (this->field0_0x0).m_xoff +
               this->m_startOff;
        }
        else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
          iVar1 = 0;
          if (*(int **)(pEVar3->m_listIr + 4) != (int *)0x0) {
            iVar1 = **(int **)(pEVar3->m_listIr + 4);
          }
                    /* end of inlined section */
          pfVar2 = (float *)(**(code **)(*(int *)(iVar1 + 0x38) + 0x5c))
                                      (iVar1 + *(short *)(*(int *)(iVar1 + 0x38) + 0x58));
          newPos.field0_0x0.d[0] = *pfVar2 + fVar6 + (this->field0_0x0).m_optgap;
        }
        (*(code *)pEVar3->__vtable->OnButtonRepeat)
                  ((int)&(pEVar3->m_ChildList).field0_0x0.m_l.m_pHead +
                   (int)*(short *)&pEVar3->__vtable->StateChanged,&newPos);
        if ((this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] +
            (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0] <
            newPos.field0_0x0.d[0] + fVar6 + (this->field0_0x0).m_optgap) {
          pEVar4 = this->m_pLastVis;
          goto LAB_0029fbd4;
        }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar4 = pEVar4->m_pParent;
                    /* end of inlined section */
        if (pEVar4 == (EUIObjectNode *)0x0) break;
        pEVar3 = *(EUIObjectNode **)&pEVar4->m_ChildList;
      }
    }
    pEVar4 = this->m_pLastVis;
LAB_0029fbd4:
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    if (((pEVar4 != (EUIObjectNode *)0x0) && (pEVar4->m_listIr != (undefined1 *)0x0)) &&
       (pEVar4 = *(EUIObjectNode **)(pEVar4->m_listIr + 8), pEVar4 != (EUIObjectNode *)0x0)) {
                    /* end of inlined section */
      pEVar3 = *(EUIObjectNode **)&pEVar4->m_ChildList;
      while( true ) {
        SetFlagsPropigate__13EUIObjectNodeUib(pEVar3,2,false);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar4 = pEVar4->m_pParent;
                    /* end of inlined section */
        if (pEVar4 == (EUIObjectNode *)0x0) break;
        pEVar3 = *(EUIObjectNode **)&pEVar4->m_ChildList;
      }
    }
  }
  return;
}

void EUIScrollMenu::InitMorePrompts(int backid, int forewardid) {
	u32 id;
	u32 id;
	
  bool bVar1;
  ERShader *pEVar2;
  
  if (this->m_pMorePrompts[0] != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pMorePrompts[0]->field0_0x0);
  }
  if (this->m_pMorePrompts[1] != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_pMorePrompts[1]->field0_0x0);
  }
  bVar1 = IsValid__16EResourceManagerUi(&_shaderman.field0_0x0,backid);
  if (bVar1) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar2 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,backid,(EFile *)0x0,0);
                    /* end of inlined section */
  }
  else {
    pEVar2 = (ERShader *)0x0;
  }
  this->m_pMorePrompts[0] = pEVar2;
  bVar1 = IsValid__16EResourceManagerUi(&_shaderman.field0_0x0,forewardid);
  if (bVar1) {
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
    pEVar2 = (ERShader *)
             AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,forewardid,(EFile *)0x0,0);
                    /* end of inlined section */
    this->m_pMorePrompts[1] = pEVar2;
  }
  else {
    this->m_pMorePrompts[1] = (ERShader *)0x0;
  }
  return;
}

void EUIScrollMenu::DrawPrompt(ERC *prc, int which) {
	ETexture *ptxt;
	float w;
	float h;
	ETexture *this;
	EGraphics *this;
	ETexture *this;
	EUIObjectNode *this;
	EUIObjectNode *this;
	
  int iVar1;
  int iVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar3;
  float fVar4;
  float local_90;
  float local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
                    /* inlined from e_graphics.h */
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  iVar1 = *(int *)(((this->m_pMorePrompts[which]->m_rtextureList).field0_0x0.m_l.m_pHead)->data +
                  0x14);
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/texture/e_texture.h */
                    /* end of inlined section */
  fVar4 = (float)(uint)*(ushort *)(iVar1 + 0x10) / (float)_pGfx->m_xscreen;
  iVar2 = (this->field0_0x0).m_layout;
  fVar3 = (float)(uint)*(ushort *)(iVar1 + 0x12) / (float)_pGfx->m_yscreen;
  if (iVar2 == 0) {
    Select__8ERShaderP3ERCi(this->m_pMorePrompts[which],prc,0);
    if (which == 0) {
                    /* end of inlined section */
      fVar4 = fVar4 - (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0];
      if (fVar4 < 0.0) {
                    /* end of inlined section */
        fVar4 = -fVar4;
      }
      local_90 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + fVar4 * 0.5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_8c = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] - (fVar3 + 0.004);
                    /* end of inlined section */
    }
    else {
                    /* end of inlined section */
      fVar4 = fVar4 - (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0];
      if (fVar4 < 0.0) {
                    /* end of inlined section */
        fVar4 = -fVar4;
      }
      local_90 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] + fVar4 * 0.5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      local_8c = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] +
                 (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2] + (this->field0_0x0).m_optgap +
                 0.004;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    }
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.m_flags >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_80 = 0x3f266666;
      local_78 = 0x3f266666;
      local_7c = 0x3f266666;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_78 = 0x3f800000;
      local_7c = 0x3f800000;
                    /* end of inlined section */
      local_80 = 0x3f800000;
    }
    local_74 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_64 = 0x3f800000;
    local_68 = 0x3f800000;
    local_6c = 0x3f800000;
    local_70 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_90,&local_80,
               &local_70);
  }
  else if ((0 < iVar2) && (iVar2 == 1)) {
    Select__8ERShaderP3ERCi(this->m_pMorePrompts[which],prc,0);
    if (which == 0) {
                    /* end of inlined section */
      fVar3 = fVar3 - (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2];
      local_90 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] - (fVar4 + 0.004);
      if (fVar3 < 0.0) {
                    /* end of inlined section */
        fVar3 = -fVar3;
      }
      local_8c = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + fVar3 * 0.5;
                    /* end of inlined section */
    }
    else {
                    /* end of inlined section */
      fVar3 = fVar3 - (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[2];
      local_90 = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[0] +
                 (this->field0_0x0).field0_0x0.m_WDH.field0_0x0.d[0] + (this->field0_0x0).m_optgap +
                 0.004;
      if (fVar3 < 0.0) {
                    /* end of inlined section */
        fVar3 = -fVar3;
      }
      local_8c = (this->field0_0x0).field0_0x0.m_pos.field0_0x0.d[2] + fVar3 * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    }
                    /* end of inlined section */
    if (((int)(this->field0_0x0).field0_0x0.m_flags >> 3 & 1U) == 0) {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_80 = 0x3f266666;
      local_78 = 0x3f266666;
      local_7c = 0x3f266666;
    }
    else {
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
      local_78 = 0x3f800000;
      local_7c = 0x3f800000;
                    /* end of inlined section */
      local_80 = 0x3f800000;
    }
    local_74 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_54 = 0x3f800000;
    local_58 = 0x3f800000;
    local_5c = 0x3f800000;
    local_60 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].ClipRect)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_90,&local_80,
               &local_60);
  }
  return;
}

void EUIScrollMenu::SetLayout(int layout, int justx, int justy) {
	EUIMenu *this;
	
  EUIObjectNode__vtable *pEVar1;
  
                    /* inlined from c:/eor/src2/engine/ui/e_uimenu.h */
  (this->field0_0x0).m_optJustx = justx;
  (this->field0_0x0).m_optJusty = justy;
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
                    /* end of inlined section */
  (this->field0_0x0).m_layout = layout;
                    /* inlined from c:/eor/src2/engine/ui/e_uimenu.h */
  (*(code *)pEVar1[2].Message)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  return;
}

void EUIScrollMenu::SetPos(EVec3 &Pos) {
  EUIObjectNode__vtable *pEVar1;
  
  SetPos__13EUIObjectNodeRC5EVec3((EUIObjectNode *)this,Pos);
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar1[2].Message)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  return;
}

void EUIScrollMenu::StateChanged(u32 state, bool on) {
  EUIObjectNode__vtable *pEVar1;
  
  if ((on) && (state == 2)) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar1[2].Message)
              ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  }
  return;
}

void EUIScrollMenu::NextItem() {
  ListForward__13EUIScrollMenu(this);
  return;
}

void EUIScrollMenu::PrevItem() {
  ListBackward__13EUIScrollMenu(this);
  return;
}
