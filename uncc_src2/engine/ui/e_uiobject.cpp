// STATUS: NOT STARTED

#include "e_uiobject.h"

float EUIObjectNode::SAFE_LEFT = 0.035f;
float EUIObjectNode::SAFE_TOP = 0.04f;
float EUIObjectNode::SAFE_RIGHT = 0.965f;
float EUIObjectNode::SAFE_BOTTOM = 0.95f;
UISfxFunPtr EUIObjectNode::m_uiSfxSelect = NULL;
UISfxFunPtr EUIObjectNode::m_uiSfxBack = NULL;
UISfxFunPtr EUIObjectNode::m_uiSfxNext = NULL;
UISfxFunPtr EUIObjectNode::m_uiSfxError = NULL;

__vtbl_ptr_type EUIObjectNode virtual table[15] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::~EUIObjectNode,
		/* .__delta2 = */ 2144
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::Update,
		/* .__delta2 = */ 2272
	},
	/* [3] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EUIObjectNode::Draw,
		/* .__delta2 = */ 2408
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

EUIObjectNode* EUIObjectNode::EUIObjectNode() {
	TNodeList<EUIObjectNode *> *this;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	TLinkedList<ENodeListNode,4,8> *this;
	EUIObjectNode *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
                    /* end of inlined section */
  this->__vtable = (EUIObjectNode__vtable *)_vt_13EUIObjectNode;
  this->m_flags = 0x16;
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
  (this->m_WDH).field0_0x0.d[0] = 0.9299999;
  (this->m_WDH).field0_0x0.d[2] = 0.91;
  (this->m_ChildList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_ChildList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
                    /* end of inlined section */
  this->m_activeCtrl = 0;
  this->m_pAutoRepeatMonitor = (EUiMonitorAutoRepeat *)0x0;
  this->m_pParent = (EUIObjectNode *)0x0;
  this->m_listIr = (undefined1 *)0x0;
  puVar1 = (undefined *)((int)&(this->m_pos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x3d0f5c29UL >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_pos & 7;
  puVar3 = (ulong *)((int)&this->m_pos - uVar2);
  *puVar3 = 0x3d0f5c29L << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_pos).field0_0x0.d[2] = 0.04;
  return this;
}

void EUIObjectNode::~EUIObjectNode(int __in_chrg) {
	TNodeList<EUIObjectNode *> *this;
	ENodeList *this;
	void *pAddress;
	void *pAddress;
	
  EUiMonitorAutoRepeat *pEVar1;
  
  this->__vtable = (EUIObjectNode__vtable *)_vt_13EUIObjectNode;
  pEVar1 = this->m_pAutoRepeatMonitor;
  if (pEVar1 != (EUiMonitorAutoRepeat *)0x0) {
    (*(code *)pEVar1->__vtable[1].EUiMonitorAutoRepeat)
              ((int)pEVar1->m_totalDt + *(short *)(pEVar1->__vtable + 1) + -0xc,3);
  }
  RemoveAllChildren__13EUIObjectNode(this);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList((ENodeList *)this);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EUIObjectNode::Update() {
	EUIObjectNode *this;
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)this->m_flags >> 2 & 1U) != 0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar2 = (this->m_ChildList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
    if (pEVar2 == (ENodeListNode *)0x0) {
      uVar1 = this->m_flags;
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      uVar1 = pEVar2->data;
      while( true ) {
                    /* end of inlined section */
        (**(code **)(*(int *)(uVar1 + 0x38) + 0x14))
                  (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x38) + 0x10));
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
        if (pEVar2 == (ENodeListNode *)0x0) break;
        uVar1 = pEVar2->data;
      }
      uVar1 = this->m_flags;
    }
    if ((uVar1 & 0x40) != 0) {
      RemoveMarkedChildren__13EUIObjectNode(this);
    }
  }
  return;
}

void EUIObjectNode::Draw(ERC *prc) {
	EUIObjectNode *this;
	
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
                    /* end of inlined section */
  if (((int)this->m_flags >> 1 & 1U) != 0) {
    DrawChildren__13EUIObjectNodeP3ERC(this,prc);
  }
  return;
}

void EUIObjectNode::DrawChildren(ERC *prc) {
	NLIterator nli;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_ChildList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar1 = pEVar2->data;
    while( true ) {
                    /* end of inlined section */
      if ((*(int *)(uVar1 + 0x10) >> 1 & 1U) != 0) {
        (**(code **)(*(int *)(uVar1 + 0x38) + 0x1c))
                  (uVar1 + (int)*(short *)(*(int *)(uVar1 + 0x38) + 0x18),prc);
      }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar2->data;
    }
  }
  return;
}

void EUIObjectNode::SetFlagsPropigate(u32 mask, bool on) {
	NLIterator nli;
	EUIObjectNode *this;
	u32 mask;
	bool on;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  EUIObjectNode *this_00;
  ENodeListNode *pEVar2;
  
                    /* inlined from c:/eor/src2/engine/ui/e_uiobject.h */
  (*(code *)this->__vtable[1].Draw)
            ((int)&(this->m_ChildList).field0_0x0.m_l.m_pHead +
             (int)*(short *)&this->__vtable[1].Update);
  if (on) {
    uVar1 = this->m_flags | mask;
  }
  else {
    uVar1 = this->m_flags & ~mask;
  }
  this->m_flags = uVar1;
  pEVar2 = (this->m_ChildList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    this_00 = (EUIObjectNode *)pEVar2->data;
    while( true ) {
      SetFlagsPropigate__13EUIObjectNodeUib(this_00,mask,on);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      this_00 = (EUIObjectNode *)pEVar2->data;
    }
  }
  return;
}

EUIObjectNode* EUIObjectNode::FindChildById(u32 Id) {
	NLIterator nli;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EUIObjectNode *pEVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_ChildList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    pEVar1 = (EUIObjectNode *)pEVar2->data;
    while( true ) {
                    /* end of inlined section */
      if (pEVar1->m_id == Id) {
        return pEVar1;
      }
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if (pEVar2 == (ENodeListNode *)0x0) break;
      pEVar1 = (EUIObjectNode *)pEVar2->data;
    }
  }
  return (EUIObjectNode *)0x0;
}

void EUIObjectNode::SetPos(EVec3 &Pos) {
	EVec3 vOldPosP;
	NLIterator nli;
	EVec3 &v;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	EVec3 *this;
	EVec3 *this;
	
  undefined *puVar1;
  uint uVar2;
  float fVar3;
  ulong *puVar4;
  uint uVar5;
  ulong in_v1;
  ulong uVar6;
  ENodeListNode *pEVar7;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_retaddr;
  float fVar8;
  float fVar9;
  float fVar10;
  EVec3 vOldPosP;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
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
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_20 = (undefined4)unaff_s2;
  uStack_1c = (undefined4)((ulong)unaff_s2 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  fVar9 = (this->m_pos).field0_0x0.d[0];
  fVar8 = (this->m_pos).field0_0x0.d[1];
  fVar10 = (this->m_pos).field0_0x0.d[2];
  puVar1 = (undefined *)((int)&Pos->field0_0x0 + 7);
                    /* end of inlined section */
  uVar5 = (uint)puVar1 & 7;
  uVar2 = (uint)Pos & 7;
  uVar6 = (*(long *)(puVar1 + -uVar5) << (7 - uVar5) * 8 |
          in_v1 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar2) * 8 |
          *(ulong *)((int)Pos - uVar2) >> uVar2 * 8;
  fVar3 = (Pos->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_pos).field0_0x0 + 7);
  uVar5 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar5);
  *puVar4 = *puVar4 & -1L << (uVar5 + 1) * 8 | uVar6 >> (7 - uVar5) * 8;
  uVar5 = (uint)&this->m_pos & 7;
  puVar4 = (ulong *)((int)&this->m_pos - uVar5);
  *puVar4 = uVar6 << uVar5 * 8 | *puVar4 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  (this->m_pos).field0_0x0.d[2] = fVar3;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar7 = (this->m_ChildList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar7 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar5 = pEVar7->data;
    while( true ) {
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_50 = *(float *)(uVar5 + 0x24) - fVar9;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_4c = *(float *)(uVar5 + 0x28) - fVar8;
      local_48 = *(float *)(uVar5 + 0x2c) - fVar10;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
      local_60 = (this->m_pos).field0_0x0.d[0] + local_50;
      local_5c = (this->m_pos).field0_0x0.d[1] + local_4c;
      local_58 = (this->m_pos).field0_0x0.d[2] + local_48;
                    /* end of inlined section */
      (**(code **)(*(int *)(uVar5 + 0x38) + 0x24))
                (uVar5 + (int)*(short *)(*(int *)(uVar5 + 0x38) + 0x20),&local_60);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar7 = pEVar7->pNext;
                    /* end of inlined section */
      if (pEVar7 == (ENodeListNode *)0x0) break;
      uVar5 = pEVar7->data;
    }
  }
  return;
}

void EUIObjectNode::SetIterator(EUIObjectNode *pChild, NLIterator itr) {
  pChild->m_listIr = itr;
  return;
}

void EUIObjectNode::AddChild(EUIObjectNode *pChild) {
	TNodeList<EUIObjectNode *> *this;
	EUIObjectNode *data;
	
  undefined1 *puVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  pChild->m_pParent = this;
  puVar1 = AddTail__9ENodeListUi((ENodeList *)this,(uint)pChild);
                    /* end of inlined section */
  pChild->m_listIr = puVar1;
  return;
}

void EUIObjectNode::RemoveChild(EUIObjectNode *pChild) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  pChild->m_pParent = (EUIObjectNode *)0x0;
  Remove__9ENodeListP17NLIteratorPtrType((ENodeList *)this,pChild->m_listIr);
                    /* end of inlined section */
  pChild->m_listIr = (undefined1 *)0x0;
  return;
}

void EUIObjectNode::MarkChildForRemoval(EUIObjectNode *pChild) {
  pChild->m_flags = pChild->m_flags | 0x20;
  this->m_flags = this->m_flags | 0x40;
  return;
}

void EUIObjectNode::RemoveAllChildren() {
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  uint *puVar1;
  EUIObjectNode__vtable *pEVar2;
  ENodeListNode *pEVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_ChildList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar3 != (ENodeListNode *)0x0) {
                    /* end of inlined section */
    pEVar2 = this->__vtable;
    while( true ) {
      puVar1 = &pEVar3->data;
                    /* end of inlined section */
      pEVar3 = pEVar3->pNext;
      (*(code *)pEVar2[1].RemoveChild)
                ((int)&(this->m_ChildList).field0_0x0.m_l.m_pHead +
                 (int)*(short *)&pEVar2[1].AddChild,*puVar1);
      if (pEVar3 == (ENodeListNode *)0x0) break;
      pEVar2 = this->__vtable;
    }
  }
  return;
}

void EUIObjectNode::SetActiveController(u32 ctrl) {
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	
  EUIObjectNode *this_00;
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_ChildList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  this->m_activeCtrl = ctrl;
  if (pEVar1 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    this_00 = (EUIObjectNode *)pEVar1->data;
    while( true ) {
      if (this_00 == (EUIObjectNode *)0x0) {
        pEVar1 = pEVar1->pNext;
      }
      else {
        SetActiveController__13EUIObjectNodeUi(this_00,ctrl);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        pEVar1 = pEVar1->pNext;
      }
                    /* end of inlined section */
      if (pEVar1 == (ENodeListNode *)0x0) break;
      this_00 = (EUIObjectNode *)pEVar1->data;
    }
  }
  return;
}

void EUIObjectNode::RemoveMarkedChildren() {
	NLIterator nli;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  uint uVar1;
  ENodeListNode *pEVar2;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar2 = (this->m_ChildList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar2 == (ENodeListNode *)0x0) {
    uVar1 = this->m_flags;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    uVar1 = pEVar2->data;
    while( true ) {
      pEVar2 = pEVar2->pNext;
                    /* end of inlined section */
      if ((*(uint *)(uVar1 + 0x10) & 0x20) != 0) {
        *(uint *)(uVar1 + 0x10) = *(uint *)(uVar1 + 0x10) & 0xffffffdf;
        (*(code *)this->__vtable[1].RemoveChild)
                  ((int)&(this->m_ChildList).field0_0x0.m_l.m_pHead +
                   (int)*(short *)&this->__vtable[1].AddChild,uVar1);
      }
      if (pEVar2 == (ENodeListNode *)0x0) break;
      uVar1 = pEVar2->data;
    }
    uVar1 = this->m_flags;
  }
  this->m_flags = uVar1 & 0xffffffbf;
  return;
}

void EUIObjectNode::SetPos(EVec2 &pos) {
	EVec2 *this;
	EVec2 *this;
	
  undefined8 unaff_retaddr;
  float local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_18 = (pos->field0_0x0).d[1];
  local_20 = (pos->field0_0x0).d[0];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_1c = 0;
                    /* end of inlined section */
  (*(code *)this->__vtable->OnButtonRepeat)
            ((int)&(this->m_ChildList).field0_0x0.m_l.m_pHead +
             (int)*(short *)&this->__vtable->StateChanged,&local_20);
  return;
}

void EUIObjectNode::SetBoxDims(EVec3 &dims) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  ulong *puVar5;
  ulong in_v0;
  ulong uVar6;
  
  puVar1 = (undefined *)((int)&dims->field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)dims & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)dims - uVar3) >> uVar3 * 8;
  fVar4 = (dims->field0_0x0).d[2];
  puVar1 = (undefined *)((int)&(this->m_WDH).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar2);
  *puVar5 = *puVar5 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_WDH & 7;
  puVar5 = (ulong *)((int)&this->m_WDH - uVar2);
  *puVar5 = uVar6 << uVar2 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  (this->m_WDH).field0_0x0.d[2] = fVar4;
  return;
}

void EUIObjectNode::SetBoxDims(EVec2 &dims) {
	EVec2 *this;
	EVec2 *this;
	
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (this->m_WDH).field0_0x0.d[0] = (dims->field0_0x0).d[0];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  (this->m_WDH).field0_0x0.d[2] = (dims->field0_0x0).d[1];
  return;
}

void EUIObjectNode::Message(EUIObjectNode *pChild, u32 messId) {
  EUIObjectNode *pEVar1;
  
  pEVar1 = this->m_pParent;
  if (pEVar1 != (EUIObjectNode *)0x0) {
    (*(code *)pEVar1->__vtable[1].EUIObjectNode)
              ((int)&(pEVar1->m_ChildList).field0_0x0.m_l.m_pHead +
               (int)*(short *)(pEVar1->__vtable + 1),this,messId);
  }
  return;
}

void EUIObjectNode::StateChanged(u32 state, bool on) {
  return;
}

void EUIObjectNode::OnButtonRepeat(int buttonId) {
  return;
}

void EUIObjectNode::OnStickRepeat(int stickId, int axisId, int direction) {
  return;
}

void EUIObjectNode::SetName(EString &szId) {
  return;
}

char* EUIObjectNode::GetName() {
  return (char *)0x0;
}

void EUIObjectNode::SetId(u32 id) {
  this->m_id = id;
  return;
}

u32 EUIObjectNode::GetFlags() {
  return this->m_flags;
}

bool EUIObjectNode::HasFlags(u32 mask) {
  return (this->m_flags & mask) != 0;
}

void EUIObjectNode::SetFlags(u32 mask, bool on) {
  uint uVar1;
  
  (*(code *)this->__vtable[1].Draw)
            ((int)&(this->m_ChildList).field0_0x0.m_l.m_pHead +
             (int)*(short *)&this->__vtable[1].Update);
  if (on) {
    uVar1 = this->m_flags | mask;
  }
  else {
    uVar1 = this->m_flags & ~mask;
  }
  this->m_flags = uVar1;
  return;
}

bool EUIObjectNode::GetVis() {
  return (bool)((byte)((int)this->m_flags >> 1) & 1);
}

bool EUIObjectNode::GetActive() {
  return (bool)((byte)((int)this->m_flags >> 2) & 1);
}

bool EUIObjectNode::GetSelected() {
  return (bool)((byte)((int)this->m_flags >> 3) & 1);
}

bool EUIObjectNode::GetSelectable() {
  return (bool)((byte)((int)this->m_flags >> 4) & 1);
}

EVec3& EUIObjectNode::GetPos() {
  return &this->m_pos;
}

int EUIObjectNode::GetActiveCtrl() {
  return this->m_activeCtrl;
}

int EUIObjectNode::GetId() {
  return this->m_id;
}

float EUIObjectNode::GetHeight() {
  return (this->m_WDH).field0_0x0.d[2];
}

float EUIObjectNode::GetWidth() {
  return (this->m_WDH).field0_0x0.d[0];
}

float EUIObjectNode::GetDepth() {
  return (this->m_WDH).field0_0x0.d[1];
}

EVec3& EUIObjectNode::GetWDH() {
  return &this->m_WDH;
}

EUIObjectNode* EUIObjectNode::GetParent() {
  return this->m_pParent;
}

void EUIObjectNode::SetParent(EUIObjectNode *pChild) {
  pChild->m_pParent = this;
  return;
}

bool EUIObjectNode::NotHead(EUIObjectNode *pChild) {
	NLIterator i;
	ENodeListNode *pNode;
	
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  return *(int *)(pChild->m_listIr + 4) != 0;
}

bool EUIObjectNode::NotTail(EUIObjectNode *pChild) {
	NLIterator i;
	void *pNode;
	
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  return *(int *)(pChild->m_listIr + 8) != 0;
}

bool EUIObjectNode::IsChild(EUIObjectNode *pChild) {
  return pChild->m_pParent == this;
}

EUIObjectNode* EUIObjectNode::GetHead() {
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_ChildList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar1 == (ENodeListNode *)0x0) {
    return (EUIObjectNode *)0x0;
  }
  return (EUIObjectNode *)pEVar1->data;
}

EUIObjectNode* EUIObjectNode::GetTail() {
  ENodeListNode *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_ChildList).field0_0x0.m_l.m_pTail;
                    /* end of inlined section */
  if (pEVar1 == (ENodeListNode *)0x0) {
    return (EUIObjectNode *)0x0;
  }
  return (EUIObjectNode *)pEVar1->data;
}

EUIObjectNode* EUIObjectNode::GetLast(EUIObjectNode *pChild) {
	NLIterator i;
	ENodeListNode *pNode;
	
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if (*(EUIObjectNode ***)(pChild->m_listIr + 4) == (EUIObjectNode **)0x0) {
    return (EUIObjectNode *)0x0;
  }
  return **(EUIObjectNode ***)(pChild->m_listIr + 4);
}

EUIObjectNode* EUIObjectNode::GetNext(EUIObjectNode *pChild) {
	NLIterator i;
	void *pNode;
	
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  if (*(EUIObjectNode ***)(pChild->m_listIr + 8) == (EUIObjectNode **)0x0) {
    return (EUIObjectNode *)0x0;
  }
  return **(EUIObjectNode ***)(pChild->m_listIr + 8);
}

NLIterator EUIObjectNode::GetNLI() {
  return this->m_listIr;
}

void EUIObjectNode::BindSelect(UISfxFunPtr pFun) {
  _13EUIObjectNode_m_uiSfxSelect = pFun;
  return;
}

void EUIObjectNode::BindBack(UISfxFunPtr pFun) {
  _13EUIObjectNode_m_uiSfxBack = pFun;
  return;
}

void EUIObjectNode::BindNext(UISfxFunPtr pFun) {
  _13EUIObjectNode_m_uiSfxNext = pFun;
  return;
}

void EUIObjectNode::BindError(UISfxFunPtr pFun) {
  _13EUIObjectNode_m_uiSfxError = pFun;
  return;
}

void EUIObjectNode::UnBindSelect() {
  _13EUIObjectNode_m_uiSfxSelect = (undefined1 *)0x0;
  return;
}

void EUIObjectNode::UnBindBack() {
  _13EUIObjectNode_m_uiSfxBack = (undefined1 *)0x0;
  return;
}

void EUIObjectNode::UnBindNext() {
  _13EUIObjectNode_m_uiSfxNext = (undefined1 *)0x0;
  return;
}

void EUIObjectNode::UnBindError() {
  _13EUIObjectNode_m_uiSfxError = (undefined1 *)0x0;
  return;
}

void EUIObjectNode::PlaySelect() {
  if (_13EUIObjectNode_m_uiSfxSelect != (undefined1 *)0x0) {
    (*(code *)_13EUIObjectNode_m_uiSfxSelect)();
  }
  return;
}

void EUIObjectNode::PlayBack() {
  if (_13EUIObjectNode_m_uiSfxBack != (undefined1 *)0x0) {
    (*(code *)_13EUIObjectNode_m_uiSfxBack)();
  }
  return;
}

void EUIObjectNode::PlayNext() {
  if (_13EUIObjectNode_m_uiSfxNext != (undefined1 *)0x0) {
    (*(code *)_13EUIObjectNode_m_uiSfxNext)();
  }
  return;
}

void EUIObjectNode::PlayError() {
  if (_13EUIObjectNode_m_uiSfxError != (undefined1 *)0x0) {
    (*(code *)_13EUIObjectNode_m_uiSfxError)();
  }
  return;
}
