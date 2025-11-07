// STATUS: NOT STARTED

#include "e_uigridmenu.h"

__vtbl_ptr_type EUIGridMenu virtual table[28] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIGridMenu::~EUIGridMenu,
		/* .__delta2 = */ 17504
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIGridMenu::Update,
		/* .__delta2 = */ 15240
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
		/* .__pfn = */ &EUIGridMenu::AddChild,
		/* .__delta2 = */ 17544
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
		/* .__pfn = */ &EUIGridMenu::AddOpt,
		/* .__delta2 = */ 16112
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
		/* .__pfn = */ &EUIGridMenu::SetCurOpt,
		/* .__delta2 = */ 16192
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
		/* .__pfn = */ &EUIGridMenu::NextItem,
		/* .__delta2 = */ 17648
	},
	/* [22] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIGridMenu::PrevItem,
		/* .__delta2 = */ 17680
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
		/* .__pfn = */ &EUIGridMenu::SetStick,
		/* .__delta2 = */ 17304
	},
	/* [25] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIGridMenu::AddCol,
		/* .__delta2 = */ 16424
	},
	/* [26] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIGridMenu::SetCurCol,
		/* .__delta2 = */ 16240
	},
	/* [27] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

void EUIGridMenu::Update() {
	EUIObjectNode *pLastOpt;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIMenu *this;
	
  EUIObjectNode *pEVar1;
  EUIObjectNode *pEVar2;
  EUIObjectNode__vtable *pEVar3;
  uint uVar4;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  if ((this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead == (ENodeListNode *)0x0) {
    return;
  }
  pEVar1 = (this->field0_0x0).m_pCurOpt;
  ProcessUserInput__7EUIMenu(&this->field0_0x0);
  pEVar2 = (this->field0_0x0).m_pCurOpt;
  pEVar3 = pEVar2->__vtable;
  (*(code *)pEVar3->SetBoxDims)
            ((int)&(pEVar2->m_ChildList).field0_0x0.m_l.m_pHead + (int)*(short *)&pEVar3->SetPos);
                    /* inlined from c:/eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
  pEVar2 = (this->field0_0x0).m_pCurOpt;
                    /* inlined from c:/eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
  this->m_pCurRow = this->m_pCurCol->m_pCurOpt;
  if (pEVar1 != pEVar2) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
    if (_13EUIObjectNode_m_uiSfxNext == (undefined1 *)0x0) {
      uVar4 = (this->field0_0x0).field0_0x0.m_flags;
      goto LAB_002a3bf8;
    }
    (*(code *)_13EUIObjectNode_m_uiSfxNext)();
  }
                    /* end of inlined section */
  uVar4 = (this->field0_0x0).field0_0x0.m_flags;
LAB_002a3bf8:
  if ((uVar4 & 0x40) != 0) {
    RemoveMarkedChildren__13EUIObjectNode((EUIObjectNode *)this);
  }
  return;
}

void EUIGridMenu::GridForward() {
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
	
  int iVar1;
  EUIObjectNode__vtable *pEVar2;
  ENodeListNode *pEVar3;
  int iVar4;
  
  if (1 < (this->field0_0x0).m_nOpts) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
    pEVar3 = *(ENodeListNode **)(((this->field0_0x0).m_pCurOpt)->m_listIr + 8);
                    /* end of inlined section */
    if (pEVar3 == (ENodeListNode *)0x0) {
      pEVar3 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    iVar1 = pEVar3->data;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
    iVar4 = *(int *)(iVar1 + 0x10);
                    /* end of inlined section */
    while ((iVar4 >> 4 & 1U) == 0) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
      pEVar3 = *(ENodeListNode **)(*(int *)(iVar1 + 0xc) + 8);
                    /* end of inlined section */
      if (pEVar3 == (ENodeListNode *)0x0) {
        pEVar3 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      iVar1 = pEVar3->data;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
      iVar4 = *(int *)(iVar1 + 0x10);
    }
    (*(code *)pEVar2[3].GetPos)
              ((int)(this->field0_0x0).m_maxBackShdrSize +
               *(short *)&pEVar2[3].OnStickRepeat + -0x44,iVar1,1);
  }
  return;
}

void EUIGridMenu::GridBackward() {
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
	
  uint uVar1;
  EUIObjectNode__vtable *pEVar2;
  ENodeListNode *pEVar3;
  int iVar4;
  
  if (1 < (this->field0_0x0).m_nOpts) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
    pEVar3 = *(ENodeListNode **)(((this->field0_0x0).m_pCurOpt)->m_listIr + 4);
                    /* end of inlined section */
    if (pEVar3 == (ENodeListNode *)0x0) {
      pEVar3 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail;
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar1 = pEVar3->data;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
    iVar4 = *(int *)(uVar1 + 0x10);
                    /* end of inlined section */
    while ((iVar4 >> 4 & 1U) == 0) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
      pEVar3 = *(ENodeListNode **)(*(int *)(uVar1 + 0xc) + 4);
                    /* end of inlined section */
      if (pEVar3 == (ENodeListNode *)0x0) {
        pEVar3 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail;
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      uVar1 = pEVar3->data;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
      iVar4 = *(int *)(uVar1 + 0x10);
    }
    (*(code *)pEVar2[3].GetPos)
              ((int)(this->field0_0x0).m_maxBackShdrSize +
               *(short *)&pEVar2[3].OnStickRepeat + -0x44,uVar1,0xffffffffffffffff);
  }
  return;
}

bool EUIGridMenu::SetCurRow(EUIMenu *pCol, int idx, int dir) {
	EUIObjectNode *pRow;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	EUIObjectNode *this;
	EUIObjectNode *pCurCol;
	EUIObjectNode *pNextCol;
	bool done;
	int nLoops;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *pNext;
	EUIObjectNode *pLast;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	NLIterator i;
	void *pNode;
	EUIObjectNode *this;
	EUIObjectNode *pChild;
	EUIObjectNode *pNextRow;
	EUIObjectNode *this;
	EUIMenu *this;
	
  EUIObjectNode__vtable *pEVar1;
  bool bVar2;
  EUIObjectNode *pEVar3;
  undefined1 *puVar4;
  int iVar5;
  EUIMenu *pEVar6;
  ENodeListNode *pEVar7;
  EUIMenu *this_00;
  int iVar8;
  
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if ((EUIGridMenu *)(pCol->field0_0x0).m_pParent == this) {
    if (pCol == (EUIMenu *)0x0) {
      return false;
    }
    pEVar3 = FindChildById__13EUIObjectNodeUi(&pCol->field0_0x0,idx);
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
    if ((pEVar3 != (EUIObjectNode *)0x0) && (((int)pEVar3->m_flags >> 4 & 1U) != 0)) {
      pEVar1 = (pCol->field0_0x0).__vtable;
      (*(code *)pEVar1[2].OnButtonRepeat)
                ((int)pCol->m_maxBackShdrSize + *(short *)&pEVar1[2].StateChanged + -0x44);
      return true;
    }
    bVar2 = false;
    iVar8 = 0;
    do {
      if (dir == -1) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
        pEVar7 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
        if (pEVar7 == (ENodeListNode *)0x0) {
          pEVar6 = (EUIMenu *)0x0;
        }
        else {
          pEVar6 = (EUIMenu *)pEVar7->data;
        }
                    /* end of inlined section */
        if (pCol != pEVar6) goto LAB_002a3e20;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
        pEVar7 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail;
LAB_002a3e10:
        this_00 = (EUIMenu *)0x0;
        if (pEVar7 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
          this_00 = (EUIMenu *)pEVar7->data;
        }
      }
      else {
LAB_002a3e20:
        if (dir == 1) {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
          pEVar7 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pTail;
          if (pEVar7 == (ENodeListNode *)0x0) {
            pEVar6 = (EUIMenu *)0x0;
          }
          else {
            pEVar6 = (EUIMenu *)pEVar7->data;
          }
                    /* end of inlined section */
          if (pCol == pEVar6) {
                    /* end of inlined section */
            pEVar7 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
            goto LAB_002a3e10;
          }
          puVar4 = (pCol->field0_0x0).m_listIr;
        }
        else {
          puVar4 = (pCol->field0_0x0).m_listIr;
        }
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
        pEVar6 = (EUIMenu *)0x0;
        if (*(EUIMenu ***)(puVar4 + 8) != (EUIMenu **)0x0) {
          pEVar6 = **(EUIMenu ***)(puVar4 + 8);
        }
        this_00 = (EUIMenu *)0x0;
        if (*(EUIMenu ***)(puVar4 + 4) != (EUIMenu **)0x0) {
          this_00 = **(EUIMenu ***)(puVar4 + 4);
        }
                    /* end of inlined section */
        if (dir != -1) {
          this_00 = pEVar6;
        }
      }
      if (this_00 == pCol) {
        return false;
      }
      pEVar3 = FindChildById__13EUIObjectNodeUi(&this_00->field0_0x0,idx);
      if (pEVar3 == (EUIObjectNode *)0x0) {
        iVar5 = (this->field0_0x0).m_nOpts;
      }
      else {
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
        if (((int)pEVar3->m_flags >> 4 & 1U) != 0) {
          pEVar1 = (this_00->field0_0x0).__vtable;
          (*(code *)pEVar1[2].OnButtonRepeat)
                    ((int)this_00->m_maxBackShdrSize + *(short *)&pEVar1[2].StateChanged + -0x44);
          this->m_pCurCol = this_00;
          (this->field0_0x0).m_pCurOpt = &this_00->field0_0x0;
          return true;
        }
                    /* inlined from c:/eor/src2/engine/ui/e_uimenu.h */
        iVar5 = (this->field0_0x0).m_nOpts;
      }
                    /* end of inlined section */
      iVar8 = iVar8 + 1;
      if (iVar5 <= iVar8) {
        bVar2 = true;
      }
      pCol = this_00;
    } while (!bVar2);
  }
  return false;
}

void EUIGridMenu::AddOpt(EUIObjectNode *pOpt, EVec3 pPos) {
	EVec3 &v;
	
  EUIObjectNode__vtable *pEVar1;
  undefined8 unaff_retaddr;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_18 = (pPos->field0_0x0).d[2];
  local_20 = (pPos->field0_0x0).d[0];
  local_1c = (pPos->field0_0x0).d[1];
                    /* end of inlined section */
  pEVar1 = (this->m_pCurCol->field0_0x0).__vtable;
  (*(code *)pEVar1[2].SetBoxDims)
            ((int)this->m_pCurCol->m_maxBackShdrSize + *(short *)&pEVar1[2].SetPos + -0x44,pOpt,
             &local_20);
  return;
}

void EUIGridMenu::SetCurOpt(EUIObjectNode *pOpt) {
  EUIObjectNode__vtable *pEVar1;
  
  pEVar1 = (this->m_pCurCol->field0_0x0).__vtable;
  (*(code *)pEVar1[2].OnButtonRepeat)
            ((int)this->m_pCurCol->m_maxBackShdrSize + *(short *)&pEVar1[2].StateChanged + -0x44,
             pOpt);
  return;
}

void EUIGridMenu::SetCurCol(EUIMenu *pOpt, int dir) {
	int lastid;
	EUIObjectNode *this;
	
  EUIObjectNode *pEVar1;
  uint idx;
  
  if (this->m_pCurCol == (EUIMenu *)0x0) {
    idx = 0;
  }
  else {
                    /* inlined from c:/eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
    idx = this->m_pCurCol->m_pCurOpt->m_id;
  }
  pEVar1 = (this->field0_0x0).m_pCurOpt;
  if (pEVar1 != (EUIObjectNode *)0x0) {
    SetFlagsPropigate__13EUIObjectNodeUib(pEVar1,8,false);
  }
  (this->field0_0x0).m_pCurOpt = &pOpt->field0_0x0;
  this->m_pCurCol = pOpt;
  SetCurRow__11EUIGridMenuP7EUIMenuii(this,pOpt,idx,dir);
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
  pEVar1 = (this->field0_0x0).m_pCurOpt;
  (*(code *)pEVar1->__vtable[1].Draw)
            ((int)&(pEVar1->m_ChildList).field0_0x0.m_l.m_pHead +
             (int)*(short *)&pEVar1->__vtable[1].Update,8,1);
  pEVar1->m_flags = pEVar1->m_flags | 8;
  return;
}

void EUIGridMenu::AddCol(EUIMenu *pCol) {
	EUIMenu *this;
	u32 id;
	
  EUIObjectNode__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
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
                    /* inlined from c:/eor/src2/engine/ui/e_uimenu.h */
                    /* end of inlined section */
  if (pCol->m_layout != 0) {
    pEVar1 = (pCol->field0_0x0).__vtable;
    (*(code *)pEVar1[2].GetPos)
              ((int)pCol->m_maxBackShdrSize + *(short *)&pEVar1[2].OnStickRepeat + -0x44,0,0,1);
  }
  AddChild__13EUIObjectNodeP13EUIObjectNode((EUIObjectNode *)this,&pCol->field0_0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar1 = (pCol->field0_0x0).__vtable;
  local_38 = 0;
  local_40 = 0;
  local_3c = 0;
  (*(code *)pEVar1->OnButtonRepeat)
            ((int)pCol->m_maxBackShdrSize + *(short *)&pEVar1->StateChanged + -0x44,&local_40);
                    /* end of inlined section */
  if ((this->field0_0x0).m_pCurOpt == (EUIObjectNode *)0x0) {
    (this->field0_0x0).m_pCurOpt = &pCol->field0_0x0;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
    pEVar1 = (pCol->field0_0x0).__vtable;
    (*(code *)pEVar1[1].Draw)
              ((int)pCol->m_maxBackShdrSize + *(short *)&pEVar1[1].Update + -0x44,8,1);
                    /* end of inlined section */
    (pCol->field0_0x0).m_flags = (pCol->field0_0x0).m_flags | 8;
  }
  else {
    SetFlagsPropigate__13EUIObjectNodeUib(&pCol->field0_0x0,8,false);
  }
  SetFlagsPropigate__13EUIObjectNodeUib(&pCol->field0_0x0,2,true);
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
  (pCol->field0_0x0).m_id = (this->field0_0x0).m_nOpts;
                    /* end of inlined section */
  (this->field0_0x0).m_nOpts = (this->field0_0x0).m_nOpts + 1;
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  (this->field0_0x0).m_totalHeight =
       (this->field0_0x0).m_totalHeight + (pCol->field0_0x0).m_WDH.field0_0x0.d[2];
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  (this->field0_0x0).m_totalWidth =
       (this->field0_0x0).m_totalWidth + (pCol->field0_0x0).m_WDH.field0_0x0.d[0];
  (*(code *)pEVar1[2].Message)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  if (this->m_pCurCol == (EUIMenu *)0x0) {
    this->m_pCurCol = (EUIMenu *)(this->field0_0x0).m_pCurOpt;
  }
  return;
}

void EUIGridMenu::SetOptGapXY(float x, float y) {
	NLIterator nli;
	EUIMenu *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	float gap;
	
  EUIObjectNode__vtable *pEVar1;
  int iVar2;
  ENodeListNode *pEVar3;
  
                    /* inlined from c:/eor/src2/engine/ui/e_uimenu.h */
  (this->field0_0x0).m_optgap = x;
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar1[2].Message)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  pEVar3 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar3 == (ENodeListNode *)0x0) {
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    iVar2 = pEVar3->data;
    while( true ) {
      *(float *)(iVar2 + 0x70) = y;
      (**(code **)(*(int *)(iVar2 + 0x38) + 0x8c))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0x38) + 0x88));
      pEVar3 = pEVar3->pNext;
                    /* end of inlined section */
      if (pEVar3 == (ENodeListNode *)0x0) break;
      iVar2 = pEVar3->data;
    }
    pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  }
  (*(code *)pEVar1[2].Message)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar1[2].SetBoxDims + -0x44);
  return;
}

void EUIGridMenu::SetColBackShader(int id) {
	NLIterator nli;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EUIMenu *this_00;
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    this_00 = (EUIMenu *)pEVar1->data;
    while( true ) {
      InitBackground__7EUIMenuUi(this_00,id);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar1 = pEVar1->pNext;
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      this_00 = (EUIMenu *)pEVar1->data;
    }
  }
  return;
}

void EUIGridMenu::SetColumnDims(EVec2 &_WH) {
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	EVec2 &v;
	
  int iVar1;
  EUIObjectNode__vtable *pEVar2;
  ENodeListNode *pEVar3;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float local_50;
  float local_4c;
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar3 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    iVar1 = pEVar3->data;
    while( true ) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_50 = (_WH->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
      local_4c = (_WH->field0_0x0).d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
      (**(code **)(*(int *)(iVar1 + 0x38) + 0x34))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x38) + 0x30),&local_50);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar3 = pEVar3->pNext;
                    /* end of inlined section */
      if (pEVar3 == (ENodeListNode *)0x0) break;
      iVar1 = pEVar3->data;
    }
  }
  pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar2[2].SetBoxDims + -0x44);
  return;
}

void EUIGridMenu::SetRowDims(EVec2 &_WH) {
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	EUIObjectNode *pChild;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	void *pNode;
	
  int *piVar1;
  EUIObjectNode__vtable *pEVar2;
  int **ppiVar3;
  int iVar4;
  int iVar5;
  ENodeListNode *pEVar6;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar6 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar6 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    ppiVar3 = (int **)pEVar6->data;
    while( true ) {
      iVar5 = 0;
      if (*ppiVar3 != (int *)0x0) {
        iVar5 = **ppiVar3;
      }
                    /* end of inlined section */
      if (iVar5 == 0) {
        pEVar6 = pEVar6->pNext;
      }
      else {
        iVar4 = *(int *)(iVar5 + 0x38);
        while( true ) {
          (**(code **)(iVar4 + 0x34))(iVar5 + *(short *)(iVar4 + 0x30),_WH);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
          piVar1 = *(int **)(*(int *)(iVar5 + 0xc) + 8);
          iVar5 = 0;
          if (piVar1 != (int *)0x0) {
            iVar5 = *piVar1;
          }
                    /* end of inlined section */
          if (iVar5 == 0) break;
          iVar4 = *(int *)(iVar5 + 0x38);
        }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar6 = pEVar6->pNext;
      }
                    /* end of inlined section */
      if (pEVar6 == (ENodeListNode *)0x0) break;
      ppiVar3 = (int **)pEVar6->data;
    }
  }
  pEVar2 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar2[2].Message)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar2[2].SetBoxDims + -0x44);
  return;
}

void EUIGridMenu::SetStick(int stick) {
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  int iVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  (this->field0_0x0).m_stick = stick;
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    iVar1 = pEVar2->data;
    while( true ) {
      (**(code **)(*(int *)(iVar1 + 0x38) + 0xa4))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x38) + 0xa0),stick);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      iVar1 = pEVar2->data;
    }
  }
  return;
}

EUIGridMenu* EUIGridMenu::EUIGridMenu() {
  __7EUIMenuiifff(&this->field0_0x0,-1,0,0.05,0.0,0.0);
  (this->field0_0x0).m_optJusty = 1;
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_11EUIGridMenu;
  (this->field0_0x0).m_layout = 1;
  (this->field0_0x0).m_optJustx = 0;
  this->m_pCurCol = (EUIMenu *)0x0;
  this->m_pCurRow = (EUIObjectNode *)0x0;
  return this;
}

void EUIGridMenu::~EUIGridMenu(int __in_chrg) {
  (this->field0_0x0).field0_0x0.__vtable = (EUIObjectNode__vtable *)_vt_11EUIGridMenu;
  ___7EUIMenu(&this->field0_0x0,__in_chrg);
  return;
}

void EUIGridMenu::AddChild(EUIObjectNode *pChild) {
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
  pEVar1 = (this->field0_0x0).field0_0x0.__vtable;
  (*(code *)pEVar1[2].SetBoxDims)
            ((int)(this->field0_0x0).m_maxBackShdrSize + *(short *)&pEVar1[2].SetPos + -0x44,pChild,
             &local_20);
  return;
}

EUIMenu* EUIGridMenu::GetCurCol() {
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  EUIMenu *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  pEVar1 = (EUIMenu *)0x0;
  if ((this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0) {
    pEVar1 = this->m_pCurCol;
  }
  return pEVar1;
}

EUIObjectNode* EUIGridMenu::GetCurRow() {
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	
  EUIObjectNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
                    /* end of inlined section */
  pEVar1 = (EUIObjectNode *)0x0;
  if ((this->field0_0x0).field0_0x0.m_ChildList.field0_0x0.m_l.m_pHead != (ENodeListNode *)0x0) {
    pEVar1 = this->m_pCurRow;
  }
  return pEVar1;
}

void EUIGridMenu::NextItem() {
  GridForward__11EUIGridMenu(this);
  return;
}

void EUIGridMenu::PrevItem() {
  GridBackward__11EUIGridMenu(this);
  return;
}
