// STATUS: NOT STARTED

#include "gamestate.h"

short unsigned int _sNoCtrlMessageBuff[64] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0,
	/* [4] = */ 0,
	/* [5] = */ 0,
	/* [6] = */ 0,
	/* [7] = */ 0,
	/* [8] = */ 0,
	/* [9] = */ 0,
	/* [10] = */ 0,
	/* [11] = */ 0,
	/* [12] = */ 0,
	/* [13] = */ 0,
	/* [14] = */ 0,
	/* [15] = */ 0,
	/* [16] = */ 0,
	/* [17] = */ 0,
	/* [18] = */ 0,
	/* [19] = */ 0,
	/* [20] = */ 0,
	/* [21] = */ 0,
	/* [22] = */ 0,
	/* [23] = */ 0,
	/* [24] = */ 0,
	/* [25] = */ 0,
	/* [26] = */ 0,
	/* [27] = */ 0,
	/* [28] = */ 0,
	/* [29] = */ 0,
	/* [30] = */ 0,
	/* [31] = */ 0,
	/* [32] = */ 0,
	/* [33] = */ 0,
	/* [34] = */ 0,
	/* [35] = */ 0,
	/* [36] = */ 0,
	/* [37] = */ 0,
	/* [38] = */ 0,
	/* [39] = */ 0,
	/* [40] = */ 0,
	/* [41] = */ 0,
	/* [42] = */ 0,
	/* [43] = */ 0,
	/* [44] = */ 0,
	/* [45] = */ 0,
	/* [46] = */ 0,
	/* [47] = */ 0,
	/* [48] = */ 0,
	/* [49] = */ 0,
	/* [50] = */ 0,
	/* [51] = */ 0,
	/* [52] = */ 0,
	/* [53] = */ 0,
	/* [54] = */ 0,
	/* [55] = */ 0,
	/* [56] = */ 0,
	/* [57] = */ 0,
	/* [58] = */ 0,
	/* [59] = */ 0,
	/* [60] = */ 0,
	/* [61] = */ 0,
	/* [62] = */ 0,
	/* [63] = */ 0
};

bool IsSecondCtrlRequired() {
	SInt16 gameStage;
	
  bool bVar1;
  long lVar2;
  
  bVar1 = true;
  if (_globals._20_4_ == 0) {
                    /* inlined from c:/eor/src2/games/sims/ESRC/../MSrc/Globs.h */
                    /* end of inlined section */
                    /* end of inlined section */
    if (((_5Globs_pNeighborhood == (Neighborhood *)0x0) ||
        (lVar2 = (*(code *)_5Globs_pNeighborhood->__vtable->AddToFamily)
                           ((int)&_5Globs_pNeighborhood->__vtable +
                            (int)*(short *)&_5Globs_pNeighborhood->__vtable->RemoveFamily,1),
        lVar2 == 1)) ||
       ((bVar1 = true, lVar2 != 2 &&
        (((bVar1 = false, lVar2 == 0 &&
          (bVar1 = false, _globals._pSelectedSims[1] != (cXPerson__150_1300 *)0x0)) &&
         (bVar1 = true, _globals._pSelectedSims[0] == (cXPerson__150_1300 *)0x0)))))) {
      bVar1 = false;
    }
  }
  return bVar1;
}

EGameStateMan* EGameStateMan::EGameStateMan() {
	EUIObjectMover *this;
	EGraphics *this;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  EGraphics *pEVar4;
  ERShader *pEVar5;
  EWindow *pEVar6;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float fVar7;
  TRect_float_ local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
                    /* end of inlined section */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_fadeClock).m_startt = 0.0;
  (this->m_gameStateList).field0_0x0.m_l.m_pTail = (ENodeListNode *)0x0;
  (this->m_gameStateList).field0_0x0.m_l.m_pHead = (ENodeListNode *)0x0;
  (this->m_NextState).m_id = 0;
  (this->m_fadeClock).m_stopt = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_fadeClock).m_curtime = (this->m_fadeClock).m_startt;
                    /* end of inlined section */
  this->m_nliCurGame = (undefined1 *)0x0;
  puVar1 = (undefined *)((int)&(this->m_vBarPos).field0_0x0 + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | 0x3f4666663f000000U >> (7 - uVar2) * 8;
  uVar2 = (uint)&this->m_vBarPos & 7;
  puVar3 = (ulong *)((int)&this->m_vBarPos - uVar2);
  *puVar3 = 0x3f4666663f000000 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  this->m_fHighestProgress = 0.0;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  this->m_fBarWidth = 0.6;
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x55894b94,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_BarLeft = pEVar5;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xc5365605,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_BarMiddle = pEVar5;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xaf8676f7,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_BarRight = pEVar5;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xf0ba748c,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_BarHighlightLeft = pEVar5;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0x6005691d,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_BarHighlightMiddle = pEVar5;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xab549ef,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_BarHighlightRight = pEVar5;
                    /* inlined from /eor/src2/engine/shader/e_shaderman.h */
  pEVar5 = (ERShader *)
           AddRef__16EResourceManagerUiP5EFilei(&_shaderman.field0_0x0,0xda8131bb,(EFile *)0x0,0);
                    /* end of inlined section */
  this->m_Glow = pEVar5;
                    /* inlined from /eor/src2/engine/window/e_window.h */
  pEVar6 = (EWindow *)_memmanAlloc__FUiUi(0xa0,0x10);
                    /* end of inlined section */
  pEVar6 = __7EWindow(pEVar6);
  pEVar4 = _pGfx;
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  this->m_pClipWin = pEVar6;
  local_50.left = (this->m_vBarPos).field0_0x0.d[0];
  fVar7 = this->m_fBarWidth * 0.5;
  local_50.top = (this->m_vBarPos).field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  local_50.right = local_50.left + fVar7;
  local_50.left = local_50.left - fVar7;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  local_50.bottom = local_50.top + 32.0 / (float)pEVar4->m_yscreen;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  SetClip__7EWindowRCt5TRect1Zf(pEVar6,&local_50);
  return this;
}

void EGameStateMan::~EGameStateMan(int __in_chrg) {
	void *pAddress;
	
  EWindow *pEVar1;
  ERShader *pEVar2;
  
  while( true ) {
    if (this->m_BarLeft == (ERShader *)0x0) break;
    DelRef__9EResource(&this->m_BarLeft->field0_0x0);
    this->m_BarLeft = (ERShader *)0x0;
  }
  while (this->m_BarMiddle != (ERShader *)0x0) {
    DelRef__9EResource(&this->m_BarMiddle->field0_0x0);
    this->m_BarMiddle = (ERShader *)0x0;
  }
  pEVar2 = this->m_BarRight;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_BarRight = (ERShader *)0x0;
    pEVar2 = this->m_BarRight;
  }
  pEVar2 = this->m_BarHighlightLeft;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_BarHighlightLeft = (ERShader *)0x0;
    pEVar2 = this->m_BarHighlightLeft;
  }
  pEVar2 = this->m_BarHighlightMiddle;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_BarHighlightMiddle = (ERShader *)0x0;
    pEVar2 = this->m_BarHighlightMiddle;
  }
  pEVar2 = this->m_BarHighlightRight;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_BarHighlightRight = (ERShader *)0x0;
    pEVar2 = this->m_BarHighlightRight;
  }
  pEVar2 = this->m_Glow;
  while (pEVar2 != (ERShader *)0x0) {
    DelRef__9EResource(&pEVar2->field0_0x0);
    this->m_Glow = (ERShader *)0x0;
    pEVar2 = this->m_Glow;
  }
  pEVar1 = this->m_pClipWin;
  if (pEVar1 != (EWindow *)0x0) {
    (*(code *)pEVar1->__vtable->WindowMatrixChanged)
              ((int)&(pEVar1->m_mWindow).field0_0x0 + (int)*(short *)&pEVar1->__vtable->Select,3);
  }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  RemoveAll__9ENodeList(&(this->m_gameStateList).field0_0x0);
                    /* end of inlined section */
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EGameStateMan::SetState(EGameStateId newState) {
	NLIterator nli;
	NLIterator i;
	NLIterator i;
	EGameStateId *this;
	EGameStateId *this;
	EGameStateId *this;
	void *pAddress;
	
  EGlobalManagerClient__vtable *pEVar1;
  int iVar2;
  int iVar3;
  ENodeListNode *pEVar4;
  undefined8 unaff_s0;
  uint *puVar5;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_retaddr;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
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
  
  local_20 = (undefined4)unaff_s7;
  uStack_1c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s6;
  uStack_2c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  _globals._436_4_ = 1;
  pEVar1 = (_pGfx->field0_0x0).__vtable;
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_a0 = 0;
  local_9c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec3.h */
  local_98 = 0;
                    /* end of inlined section */
  (*(code *)pEVar1[4].EGlobalManagerClient)
            ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)(pEVar1 + 4),&local_a0,1);
  *(undefined4 *)&this->m_bInfadeout = 0;
  if (_globals._360_4_ == 0) {
    *(undefined4 *)this = 1;
  }
  BeginFadeIn__13EGameStateMan(this);
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar4 = (this->m_gameStateList).field0_0x0.m_l.m_pHead;
                    /* end of inlined section */
  if (pEVar4 != (ENodeListNode *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    puVar5 = (uint *)pEVar4->data;
                    /* end of inlined section */
    while (local_a0 = *puVar5, local_a0 != newState->m_id) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      pEVar4 = pEVar4->pNext;
                    /* end of inlined section */
      if (pEVar4 == (ENodeListNode *)0x0) {
        return;
      }
      puVar5 = (uint *)pEVar4->data;
    }
    if ((int *)this->m_nliCurGame == (int *)0x0) {
      this->m_nliCurGame = (undefined1 *)pEVar4;
    }
    else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
      iVar2 = *(int *)this->m_nliCurGame;
                    /* end of inlined section */
      iVar3 = *(int *)(iVar2 + 8);
      (**(code **)(iVar3 + 0x2c))(iVar2 + *(short *)(iVar3 + 0x28));
      DestroyOrphans__12EParticleMan(&_pclman);
      _globals._20_4_ = 0;
      FreeUnusedSegments__14EMemoryManagerb(&_memman,false);
      this->m_nliCurGame = (undefined1 *)pEVar4;
    }
    _globals._curGameState = (EGameStateId)newState->m_id;
    (**(code **)(puVar5[2] + 0x14))((int)puVar5 + (int)*(short *)(puVar5[2] + 0x10));
  }
  return;
}

void EGameStateMan::AddState(EGameState *pState) {
	EGameState *data;
	
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  AddTail__9ENodeListUi(&(this->m_gameStateList).field0_0x0,(uint)pState);
                    /* end of inlined section */
  pState->m_pStateMan = this;
  return;
}

void EGameStateMan::SoftReset() {
  int iVar1;
  int iVar2;
  
  if ((int *)this->m_nliCurGame != (int *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    iVar1 = *(int *)this->m_nliCurGame;
                    /* end of inlined section */
    iVar2 = *(int *)(iVar1 + 8);
    (**(code **)(iVar2 + 0x2c))(iVar1 + *(short *)(iVar2 + 0x28),0);
  }
  this->m_nliCurGame = (undefined1 *)0x0;
  Reset__7EGlobal(&_globals);
  SetDefaults__7EGlobal(&_globals);
  FreeUnusedSegments__14EMemoryManagerb(&_memman,false);
  return;
}

void EGameStateMan::DeleteAllStates() {
	TNodeList<EGameState *> *this;
	NLIterator i;
	ENodeList *this;
	TLinkedList<ENodeListNode,4,8> *this;
	NLIterator i;
	NLIterator next;
	NLIterator i;
	void *pNode;
	NLIterator i;
	NLIterator i;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  ENodeListNode *pEVar4;
  
  if ((int *)this->m_nliCurGame != (int *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    iVar1 = *(int *)this->m_nliCurGame;
                    /* end of inlined section */
    iVar2 = *(int *)(iVar1 + 8);
    (**(code **)(iVar2 + 0x2c))(iVar1 + *(short *)(iVar2 + 0x28),0);
  }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar4 = (this->m_gameStateList).field0_0x0.m_l.m_pHead;
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
  this->m_nliCurGame = (undefined1 *)0x0;
  if (pEVar4 != (ENodeListNode *)0x0) {
    uVar3 = pEVar4->data;
    while( true ) {
      pEVar4 = pEVar4->pNext;
      if (uVar3 != 0) {
        (**(code **)(*(int *)(uVar3 + 8) + 0xc))(uVar3 + (int)*(short *)(*(int *)(uVar3 + 8) + 8),3)
        ;
      }
      if (pEVar4 == (ENodeListNode *)0x0) break;
      uVar3 = pEVar4->data;
    }
  }
  RemoveAll__9ENodeList(&(this->m_gameStateList).field0_0x0);
                    /* end of inlined section */
  Reset__7EGlobal(&_globals);
  return;
}

void EGameStateMan::Update() {
	bool ctrl0valid;
	bool ctrl1valid;
	ESimsMemCard *this;
	EController *this;
	bool bStable;
	bool bSupported;
	EController *this;
	bool bStable;
	bool bSupported;
	EController *this;
	bool bStable;
	bool bSupported;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	EUIObjectMover *this;
	
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  uint **ppuVar4;
  uint uVar5;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_retaddr;
  EGameStateId local_60 [4];
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
  
  local_50 = (undefined4)unaff_s0;
  uStack_4c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_20 = (undefined4)unaff_s3;
  uStack_1c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_40 = (undefined4)unaff_s1;
  uStack_3c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_10 = (undefined4)unaff_retaddr;
  uStack_c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_30 = (undefined4)unaff_s2;
  uStack_2c = (undefined4)((ulong)unaff_s2 >> 0x20);
  *(undefined4 *)this = 0;
  Update__11Controllpad(_globals.m_pCtrlPad);
                    /* inlined from c:/eor/src2/games/sims/ESRC/simsmemcard.h */
                    /* end of inlined section */
  if ((_globals.m_pMemCard == (ESimsMemCard *)0x0) ||
     (*(int *)&(_globals.m_pMemCard)->m_bOverride != 1)) {
    if (_globals._188_4_ == 0) {
                    /* inlined from /eor/src2/engine/e_ctrl.h */
      uVar5 = 0;
      if ((_ctrlPads[1]->m_status >> 2 & 1U) != 0) {
        uVar5 = _ctrlPads[1]->m_status & 1;
      }
                    /* end of inlined section */
      if (uVar5 != 0) {
        _globals._188_4_ = 1;
      }
    }
    bVar2 = ListenForController__7EGlobal(&_globals);
    if (bVar2) {
                    /* inlined from /eor/src2/engine/e_ctrl.h */
      uVar5 = 0;
      if ((_ctrlPads[0]->m_status >> 2 & 1U) != 0) {
        uVar5 = _ctrlPads[0]->m_status & 1;
      }
                    /* end of inlined section */
      bVar2 = uVar5 != 0;
    }
    else {
      bVar2 = true;
    }
    bVar3 = IsSecondCtrlRequired__Fv();
    if (bVar3) {
                    /* inlined from /eor/src2/engine/e_ctrl.h */
      uVar5 = 0;
      if ((_ctrlPads[1]->m_status >> 2 & 1U) != 0) {
        uVar5 = _ctrlPads[1]->m_status & 1;
      }
                    /* end of inlined section */
      bVar3 = uVar5 != 0;
    }
    else {
      bVar3 = true;
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
    if (((bVar2) && (bVar3)) || (**(int **)(_app.m_pGameStateMan)->m_nliCurGame == 5)) {
      if (_globals.m_pCheats == (ECheats *)0x0) {
        ppuVar4 = (uint **)this->m_nliCurGame;
      }
      else {
        Update__7ECheats(_globals.m_pCheats);
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
        ppuVar4 = (uint **)this->m_nliCurGame;
      }
                    /* end of inlined section */
                    /* end of inlined section */
      puVar1 = *ppuVar4;
      if (*(int *)&this->m_bInfadeout == 0) {
        if (*(int *)&this->m_bInfadein == 0) {
          (**(code **)(puVar1[2] + 0x1c))((int)puVar1 + (int)*(short *)(puVar1[2] + 0x18));
          return;
        }
        local_60[0].m_id = *puVar1;
      }
      else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/gamestate.h */
        local_60[0].m_id = *puVar1;
      }
                    /* end of inlined section */
                    /* end of inlined section */
      if (local_60[0].m_id == 2) {
        (**(code **)(puVar1[2] + 0x1c))((int)puVar1 + (int)*(short *)(puVar1[2] + 0x18));
      }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
      if ((this->m_fadeClock).m_curtime == (this->m_fadeClock).m_stopt) {
        if (*(int *)&this->m_bInfadeout == 0) {
          if (*(int *)&this->m_bInfadein != 0) {
            *(undefined4 *)&this->m_bInfadeout = 0;
            *(undefined4 *)&this->m_bInfadein = 0;
          }
        }
        else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
          local_60[0].m_id = (this->m_NextState).m_id;
                    /* end of inlined section */
                    /* end of inlined section */
          SetState__13EGameStateManG12EGameStateId(this,local_60);
        }
      }
    }
  }
  else {
    Update__12ESimsMemCard(_globals.m_pMemCard);
                    /* inlined from c:/eor/src2/games/sims/ESRC/simsmemcard.h */
                    /* end of inlined section */
    if (*(int *)&(_globals.m_pMemCard)->m_bOverride == 0) {
      *(undefined4 *)this = 1;
    }
  }
  return;
}

void EGameStateMan::Draw(ERC *prc) {
	bool ctrl0valid;
	bool ctrl1valid;
	EController *this;
	bool bStable;
	bool bSupported;
	EController *this;
	bool bStable;
	bool bSupported;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	NLIterator i;
	u32 total;
	u32 largest;
	short unsigned int sMemStr[256];
	char sTemp[256];
	ERFont *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EVec2 *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  EGlobalManagerClient__vtable *pEVar1;
  ERFont *pEVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  EGraphics *pEVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  short *psVar11;
  int *piVar12;
  uint uVar13;
  char *pRef;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_retaddr;
  float fVar14;
  float local_400;
  float local_3fc;
  undefined8 local_3f0;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  short sMemStr [256];
  char sTemp [256];
  uint total;
  uint largest;
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
  
  local_40 = (undefined4)unaff_s6;
  uStack_3c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_80 = (undefined4)unaff_s2;
  uStack_7c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_90 = (undefined4)unaff_s1;
  uStack_8c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_50 = (undefined4)unaff_s5;
  uStack_4c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_60 = (undefined4)unaff_s4;
  uStack_5c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_70 = (undefined4)unaff_s3;
  uStack_6c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_a0 = (undefined4)unaff_s0;
  uStack_9c = (undefined4)((ulong)unaff_s0 >> 0x20);
  if ((*(int *)this == 1) &&
     ((*(code *)(_app.m_pFullWindow)->__vtable->OutputCoordinatesChanged)
                ((int)&((_app.m_pFullWindow)->m_mWindow).field0_0x0 +
                 (int)*(short *)&(_app.m_pFullWindow)->__vtable->InputCoordinatesChanged),
     _globals.m_pBlackShader != (ERShader *)0x0)) {
    Select__8ERShaderP3ERCi(_globals.m_pBlackShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    local_3fc = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_400 = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_3f0._4_4_ = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_3f0._0_4_ = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_3e0 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    local_3dc = 0x3f800000;
    local_3d0 = 0x3f800000;
    local_3cc = 0;
    local_3b4 = 0x3f800000;
    local_3b8 = 0x3f800000;
    local_3bc = 0x3f800000;
    local_3c0 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_400,
               &local_3f0,&local_3e0,&local_3d0,&local_3c0);
    pEVar1 = (_pGfx->field0_0x0).__vtable;
    (*(code *)pEVar1[3].ManagedShutdown)
              ((int)&(_pGfx->field0_0x0).__vtable + (int)*(short *)&pEVar1[3].ManagedStartup);
    return;
  }
  if (_globals.m_pMemCard == (ESimsMemCard *)0x0) {
    iVar10 = *(int *)&this->m_bInfadein;
  }
  else {
                    /* inlined from c:/eor/src2/games/sims/ESRC/simsmemcard.h */
                    /* end of inlined section */
    if (*(int *)&(_globals.m_pMemCard)->m_bOverride == 1) {
      Draw__12ESimsMemCardP3ERC(_globals.m_pMemCard,prc);
      return;
    }
    iVar10 = *(int *)&this->m_bInfadein;
  }
  if ((iVar10 != 0) || (*(int *)&this->m_bInfadeout != 0)) {
    DoFade__13EGameStateManP3ERC(this,prc);
  }
  bVar7 = ListenForController__7EGlobal(&_globals);
  if (bVar7) {
                    /* inlined from /eor/src2/engine/e_ctrl.h */
    uVar13 = 0;
    if ((_ctrlPads[0]->m_status >> 2 & 1U) != 0) {
      uVar13 = _ctrlPads[0]->m_status & 1;
    }
                    /* end of inlined section */
    bVar7 = uVar13 != 0;
  }
  else {
    bVar7 = true;
  }
  bVar8 = IsSecondCtrlRequired__Fv();
  if (bVar8) {
                    /* inlined from /eor/src2/engine/e_ctrl.h */
    uVar13 = 0;
    if ((_ctrlPads[1]->m_status >> 2 & 1U) != 0) {
      uVar13 = _ctrlPads[1]->m_status & 1;
    }
                    /* end of inlined section */
    bVar8 = uVar13 != 0;
  }
  else {
    bVar8 = true;
  }
  if ((bVar7) && (bVar8)) {
    piVar12 = (int *)this->m_nliCurGame;
  }
  else {
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    local_400 = **(float **)(_app.m_pGameStateMan)->m_nliCurGame;
                    /* end of inlined section */
    if (local_400 != 7.006492e-45) {
      bVar9 = IsMoviePlaying__4EApp(&_app.field0_0x0);
      if (bVar9) goto LAB_0015d898;
      if (_globals.m_pVibrate != (EVibrate *)0x0) {
        StopAllVibration__8EVibrate(_globals.m_pVibrate);
      }
      (*(code *)(_app.m_pFullWindow)->__vtable->OutputCoordinatesChanged)
                ((int)&((_app.m_pFullWindow)->m_mWindow).field0_0x0 +
                 (int)*(short *)&(_app.m_pFullWindow)->__vtable->InputCoordinatesChanged,prc);
      if (bVar7) {
        if (!bVar8) goto LAB_0015d840;
LAB_0015d874:
        psVar11 = GetUiString__7EGlobalPCc(&_globals,"no controller message pt1 and pt2");
        DrawNoCtrlMessage__13EGameStateManP3ERCPCUs(this,prc,psVar11);
      }
      else {
        if (bVar8) {
          pRef = "no controller message";
        }
        else {
LAB_0015d840:
          if (!bVar7) goto LAB_0015d874;
          pRef = "no controller message pt2";
        }
        psVar11 = GetUiString__7EGlobalPCc(&_globals,pRef);
        DrawNoCtrlMessage__13EGameStateManP3ERCPCUs(this,prc,psVar11);
      }
      goto LAB_0015d898;
    }
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
    piVar12 = (int *)this->m_nliCurGame;
  }
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_nodelist.h */
                    /* end of inlined section */
  iVar10 = *(int *)(*piVar12 + 8);
  (**(code **)(iVar10 + 0x24))(*piVar12 + (int)*(short *)(iVar10 + 0x20),prc);
  if ((_globals._380_4_ == 1) && (*(int *)this == 0)) {
    DrawGenericTransitionScreen__13EGameStateManP3ERC(this,prc);
  }
  if ((_globals._360_4_ == 1) || ((_globals._384_4_ == 1 && (*(int *)this == 0)))) {
    DrawStoryModeTransScreen__13EGameStateManP3ERCb(this,prc,true);
  }
LAB_0015d898:
  if (_globals.Cheats._8_4_ != 0) {
    FreeMem__14EMemoryManagerPUiT1(&_memman,&total,&largest);
    sprintf(sTemp,"total: %d, largest: %d");
    CopyCharStrToWString__FPCcPUsUi(sTemp,sMemStr,0x100);
    fVar14 = 0.15;
    Select__6ERFontP3ERC(_globals.m_pFont,prc);
    SetSize__6ERFontffb(_globals.m_pFont,18.0,1.0,true);
    pEVar6 = _pGfx;
    uVar5 = _BLACK.field0_0x0.d[3];
    uVar4 = _BLACK.field0_0x0.d[2];
    uVar3 = _BLACK.field0_0x0._0_8_;
    pEVar2 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
    (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
    (pEVar2->m_vColor).field0_0x0.d[2] = uVar4;
    (pEVar2->m_vColor).field0_0x0.d[3] = uVar5;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_3fc = 1.0 / (float)pEVar6->m_yscreen + fVar14;
    local_400 = 1.0 / (float)pEVar6->m_xscreen + 0.5;
    local_3f0._0_4_ = local_400;
    local_3f0._4_4_ = local_3fc;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,sMemStr,true,(EVec2 *)&local_3f0,E_FAX_CENTER,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_3fc = fVar14 - 1.0 / (float)_pGfx->m_yscreen;
    local_400 = 0.5 - 1.0 / (float)_pGfx->m_xscreen;
    local_3f0._0_4_ = local_400;
    local_3f0._4_4_ = local_3fc;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,sMemStr,true,(EVec2 *)&local_3f0,E_FAX_CENTER,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_3fc = 1.0 / (float)_pGfx->m_yscreen + fVar14;
    local_400 = 0.5 - 1.0 / (float)_pGfx->m_xscreen;
    local_3f0._0_4_ = local_400;
    local_3f0._4_4_ = local_3fc;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,sMemStr,true,(EVec2 *)&local_3f0,E_FAX_CENTER,E_FAY_TOP,
               (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
    local_3fc = fVar14 - 1.0 / (float)_pGfx->m_yscreen;
    local_400 = 1.0 / (float)_pGfx->m_xscreen + 0.5;
    local_3f0._0_4_ = local_400;
    local_3f0._4_4_ = local_3fc;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,sMemStr,true,(EVec2 *)&local_3f0,E_FAX_CENTER,E_FAY_TOP,
               (EVec2 *)0x0);
    uVar5 = _YELLOW.field0_0x0.d[3];
    uVar4 = _YELLOW.field0_0x0.d[2];
    uVar3 = _YELLOW.field0_0x0._0_8_;
    pEVar2 = _globals.m_pFont;
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_YELLOW.field0_0x0._0_8_;
    (pEVar2->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar3 >> 0x20);
    (pEVar2->m_vColor).field0_0x0.d[2] = uVar4;
    (pEVar2->m_vColor).field0_0x0.d[3] = uVar5;
    local_3f0._0_4_ = 0.5;
    local_400 = 0.5;
    local_3fc = fVar14;
    local_3f0._4_4_ = fVar14;
    DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
              (_globals.m_pFont,prc,sMemStr,true,(EVec2 *)&local_3f0,E_FAX_CENTER,E_FAY_TOP,
               (EVec2 *)0x0);
  }
  return;
}

void EGameStateMan::DrawNoCtrlMessage(ERC *prc, c16 *messageId) {
	EVec2 vS;
	ERFont &font;
	EVec2 vPos;
	bool gotline;
	float fStartx;
	float flineinc;
	EVec2 vTL;
	EVec2 vBR;
	float fClipW;
	c16 *pPos;
	float x;
	float y;
	float x;
	float y;
	int i;
	c16 *pBuffPos;
	int cPos0;
	int nCharsInWord;
	EVec2 vOldPos;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  bool bVar1;
  ERFont *this_00;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  bool bVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  int iVar10;
  undefined8 unaff_s4;
  short *psVar11;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ENodeListNode *pEVar17;
  ENodeListNode *pEVar18;
  EVec2 vS;
  EVec2 vPos;
  EVec2 vTL;
  EVec2 vBR;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  float local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  float local_144;
  EVec2 vOldPos;
  EHashTableNode **local_130;
  EStorable__vtable *local_12c;
  ENodeListNode *local_128;
  ENodeListNode *local_124;
  float local_120;
  float local_11c;
  undefined local_110 [20];
  EStorable__vtable *local_fc;
  EFontSize *local_f0;
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
  
  local_e0 = (undefined4)unaff_s0;
  uStack_dc = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_60 = (undefined4)unaff_s8;
  uStack_5c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_80 = (undefined4)unaff_s6;
  uStack_7c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_c0 = (undefined4)unaff_s2;
  uStack_bc = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_d0 = (undefined4)unaff_s1;
  uStack_cc = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_50 = (undefined4)unaff_retaddr;
  uStack_4c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_70 = (undefined4)unaff_s7;
  uStack_6c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_90 = (undefined4)unaff_s5;
  uStack_8c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_a0 = (undefined4)unaff_s4;
  uStack_9c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_b0 = (undefined4)unaff_s3;
  uStack_ac = (undefined4)((ulong)unaff_s3 >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  fVar15 = 2.0;
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  pEVar17 = (ENodeListNode *)0x3f000000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vS.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vS.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTL.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTL.field0_0x0.d[1] = 1.0;
  local_150 = 0x3f0e978d;
  vBR.field0_0x0.d[0] = 1.0;
  vBR.field0_0x0.d[1] = 0.0;
  local_148 = 0x3f624dd3;
  local_14c = 0x3f11a9fc;
  local_160 = 0x3e805532;
  local_15c = 0x3e8318fc;
  local_158 = 0x3ecbac71;
  local_154 = fVar15 * 0.45;
                    /* end of inlined section */
  local_144 = fVar15;
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&vS,&vPos,&vTL,&vBR,
             &local_160);
  this_00 = _globals.m_pFont;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vS.field0_0x0.d[0] = 0.01;
                    /* end of inlined section */
  vS.field0_0x0.d[1] = 0.01;
  SetSize__6ERFontffb(_globals.m_pFont,24.0,1.0,true);
  Select__6ERFontP3ERC(this_00,prc);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vPos.field0_0x0.d[1] = 0.25;
  pEVar18 = pEVar17;
  vPos.field0_0x0.d[0] = (float)pEVar17;
                    /* end of inlined section */
  fVar12 = GetLineSpacing__6ERFontP7EWindow(_globals.m_pFont,(EWindow *)0x0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar14 = _13EUIObjectNode_SAFE_RIGHT - _13EUIObjectNode_SAFE_LEFT;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  fVar13 = vS.field0_0x0.d[0] * 12.0;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vTL.field0_0x0.d[1] = _13EUIObjectNode_SAFE_TOP;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vBR.field0_0x0.d[1] = _13EUIObjectNode_SAFE_BOTTOM;
  vTL.field0_0x0.d[0] = _13EUIObjectNode_SAFE_LEFT;
                    /* end of inlined section */
  vBR.field0_0x0.d[0] = _13EUIObjectNode_SAFE_RIGHT;
  if (*messageId != 0) {
    local_f0 = (EFontSize *)local_110;
    fVar16 = 0.0025;
    do {
      iVar9 = 0;
      memset(_sNoCtrlMessageBuff,0,0x80);
      psVar11 = _sNoCtrlMessageBuff;
      bVar1 = false;
      iVar10 = 0;
      sVar5 = *messageId;
      if (*messageId != 0) {
        do {
          _sNoCtrlMessageBuff[0] = sVar5;
          if (*messageId == 10) {
            messageId = messageId + 1;
            bVar1 = true;
          }
          else {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
            bVar6 = Isspace__FUs(*messageId);
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
            if (bVar6) {
              iVar10 = iVar9;
            }
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
            DoGetStringSize__6ERFontPvbP7EWindow
                      ((ERFont *)&vOldPos,_globals.m_pFont,true,(EWindow *)&pGifTag1);
                    /* end of inlined section */
            iVar8 = iVar9 - iVar10;
            if (fVar14 - fVar13 < vOldPos.field0_0x0.d[0]) {
              bVar1 = true;
              if (iVar8 != 0) {
                if (iVar9 == iVar8) {
                  iVar8 = 0;
                  messageId = messageId + -1;
                }
                else {
                  iVar9 = iVar9 - iVar8;
                }
                messageId = messageId + -iVar8;
              }
              psVar7 = _sNoCtrlMessageBuff + iVar9;
              iVar9 = iVar9 + -1;
              *psVar7 = 0;
            }
            iVar9 = iVar9 + 1;
            psVar11 = psVar11 + 1;
            messageId = messageId + 1;
            if (0x3d < iVar9) break;
          }
          if ((*messageId == 0) || (bVar1)) break;
          *psVar11 = *messageId;
          sVar5 = _sNoCtrlMessageBuff[0];
        } while( true );
      }
      uVar4 = _BLACK.field0_0x0.d[3];
      uVar3 = _BLACK.field0_0x0.d[2];
      uVar2 = _BLACK.field0_0x0._0_8_;
      if ((bVar1) || (_sNoCtrlMessageBuff[0] != 0)) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
        _sNoCtrlMessageBuff[iVar9] = 0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        (this_00->m_vColor).field0_0x0.d[0] = (float)uVar2;
        (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
        (this_00->m_vColor).field0_0x0.d[2] = uVar3;
        (this_00->m_vColor).field0_0x0.d[3] = uVar4;
        local_12c = (EStorable__vtable *)0x3ba3d70a;
        local_130 = (EHashTableNode **)0x3ba3d70a;
        vOldPos.field0_0x0.d[0] = vPos.field0_0x0.d[0] + 0.005;
        vOldPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + 0.005;
        local_120 = vOldPos.field0_0x0.d[0];
        local_11c = vOldPos.field0_0x0.d[1];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this_00,prc,_sNoCtrlMessageBuff,true,(EVec2 *)&local_120,E_FAX_CENTER,E_FAY_TOP,
                   (EVec2 *)0x0);
        uVar4 = _CYAN.field0_0x0.d[3];
        uVar3 = _CYAN.field0_0x0.d[2];
        uVar2 = _CYAN.field0_0x0._0_8_;
        vOldPos.field0_0x0.d[0] = vPos.field0_0x0.d[0];
        vOldPos.field0_0x0.d[1] = vPos.field0_0x0.d[1];
        (this_00->m_vColor).field0_0x0.d[0] = (float)_CYAN.field0_0x0._0_8_;
        (this_00->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar2 >> 0x20);
        (this_00->m_vColor).field0_0x0.d[2] = uVar3;
        (this_00->m_vColor).field0_0x0.d[3] = uVar4;
        local_130 = (EHashTableNode **)vPos.field0_0x0.d[0];
        local_12c = (EStorable__vtable *)vPos.field0_0x0.d[1];
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this_00,prc,_sNoCtrlMessageBuff,true,(EVec2 *)&local_130,E_FAX_CENTER,E_FAY_TOP,
                   &vPos);
        (this_00->m_vColor).field0_0x0.d[0] = fVar15;
        (this_00->m_vColor).field0_0x0.d[1] = fVar15;
        (this_00->m_vColor).field0_0x0.d[2] = (float)pEVar18;
        (this_00->m_vColor).field0_0x0.d[3] = (float)pEVar18;
        local_f0->m_size = (int)fVar16;
        local_130 = (EHashTableNode **)(vOldPos.field0_0x0.d[0] - fVar16);
        local_12c = (EStorable__vtable *)(vOldPos.field0_0x0.d[1] - local_110._4_4_);
        local_128 = pEVar18;
        local_124 = pEVar18;
        local_110._0_4_ = fVar16;
        local_110._16_4_ = local_130;
        local_fc = local_12c;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (this_00,prc,_sNoCtrlMessageBuff,true,(EVec2 *)(local_110 + 0x10),E_FAX_CENTER,
                   E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
        vPos.field0_0x0.d[1] = vPos.field0_0x0.d[1] + fVar12;
        vPos.field0_0x0.d[0] = (float)pEVar17;
      }
    } while (*messageId != 0);
  }
  return;
}

void EGameStateMan::BeginFadeIn() {
	EUIObjectMover *this;
	
  float fVar1;
  float fVar2;
  
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bInfadein = 1;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_fadeClock).m_curtime = 0.0;
  (this->m_fadeClock).m_startt = 0.0;
  (this->m_fadeClock).m_stopt = 0.5;
  fVar1 = (this->m_fadeClock).m_curtime;
  fVar2 = (this->m_fadeClock).m_startt;
  if (fVar2 <= fVar1) {
    fVar2 = (float)((int)fVar1 * (uint)(fVar1 < 0.5) | (uint)(fVar1 >= 0.5) * 0x3f000000);
  }
  (this->m_fadeClock).m_curtime = fVar2;
                    /* end of inlined section */
  (this->m_NextState).m_id = 0;
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
  return;
}

void EGameStateMan::BeginFadeout(EGameStateId newState) {
	EUIObjectMover *this;
	EGameStateId *this;
	void *pAddress;
	
  float fVar1;
  float fVar2;
  
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
  *(undefined4 *)&this->m_bInfadeout = 1;
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  (this->m_fadeClock).m_curtime = 0.0;
  (this->m_fadeClock).m_startt = 0.0;
  (this->m_fadeClock).m_stopt = 0.5;
  fVar1 = (this->m_fadeClock).m_curtime;
  fVar2 = (this->m_fadeClock).m_startt;
  if (fVar2 <= fVar1) {
    fVar2 = (float)((int)fVar1 * (uint)(fVar1 < 0.5) | (uint)(fVar1 >= 0.5) * 0x3f000000);
  }
  (this->m_fadeClock).m_curtime = fVar2;
                    /* end of inlined section */
  (this->m_NextState).m_id = newState->m_id;
  return;
}

void EGameStateMan::DoFade(ERC *prc) {
	float a;
	float b;
	EUIObjectMover *this;
	EUIObjectMover *this;
	float startpos;
	float stopPos;
	float dt;
	float b;
	float a;
	float u;
	float w;
	
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  
                    /* inlined from c:/eor/src2/games/sims/ESRC/global.h */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  local_40 = (undefined4)unaff_s0;
  uStack_3c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_s1;
  uStack_2c = (undefined4)((ulong)unaff_s1 >> 0x20);
                    /* end of inlined section */
  local_20 = (undefined4)unaff_retaddr;
  uStack_1c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  fVar1 = (this->m_fadeClock).m_curtime + _dt;
  (this->m_fadeClock).m_curtime = fVar1;
  fVar2 = (this->m_fadeClock).m_startt;
  if (fVar2 <= fVar1) {
    fVar2 = (this->m_fadeClock).m_stopt;
    fVar2 = (float)((int)fVar1 * (uint)(fVar1 < fVar2) | (int)fVar2 * (uint)(fVar1 >= fVar2));
  }
  (this->m_fadeClock).m_curtime = fVar2;
                    /* end of inlined section */
  fVar2 = 0.0;
  fVar1 = 0.0;
  if (*(int *)&this->m_bInfadeout == 0) {
    if (*(int *)&this->m_bInfadein != 0) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar1 = 1.0;
  }
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  fVar3 = (this->m_fadeClock).m_stopt;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/ui/e_uiobjectmover.h */
  this->m_fadeAlpha =
       fVar2 + (1.0 - (fVar3 - (this->m_fadeClock).m_curtime) /
                      (fVar3 - (this->m_fadeClock).m_startt)) * (fVar1 - fVar2);
                    /* end of inlined section */
  Select__8ERShaderP3ERCi(_globals.m_pWhiteShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_44 = this->m_fadeAlpha;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_8c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_90 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_7c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_80 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_70 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_6c = 0x3f800000;
  local_60 = 0x3f800000;
  local_5c = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
                    /* end of inlined section */
  (*(code *)prc->__vtable[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&local_90,&local_80,
             &local_70,&local_60,&local_50);
  return;
}

void EGameStateMan::DrawStoryModeTransScreen(ERC *prc, bool DrawText) {
	float height;
	EVec2 Pos;
	EVec2 DrawPos;
	short unsigned int LineBuff[128];
	c16 *CharPtr;
	short unsigned int WordBuff[128];
	c16 *WordBuffPtr;
	EVec2 Dimensions;
	ERFont *this;
	ERFont *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	EGraphics *this;
	ERFont *this;
	ERC *prc;
	ERFont *this;
	ERFont *this;
	ERC *prc;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  ERFont *pEVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  EGraphics *pEVar8;
  EStorable__vtable *pEVar9;
  short *psVar10;
  undefined8 unaff_s0;
  short *psVar11;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_s6;
  undefined8 unaff_s7;
  undefined8 unaff_s8;
  undefined8 unaff_retaddr;
  EStorable__vtable *pEVar12;
  EVec2 Pos;
  EVec2 DrawPos;
  EVec2 Dimensions;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  short LineBuff [128];
  short WordBuff [128];
  undefined local_f0 [20];
  EStorable__vtable *local_dc;
  EGameStateMan *local_d0;
  int local_c0;
  int iStack_bc;
  EHashTableNode **local_b0;
  uint uStack_ac;
  EFontSize *local_a0;
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
  
  local_60 = (undefined4)unaff_s6;
  uStack_5c = (undefined4)((ulong)unaff_s6 >> 0x20);
  local_a0 = (EFontSize *)unaff_s2;
  uStack_9c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_b0 = (EHashTableNode **)unaff_s1;
  uStack_ac = (uint)((ulong)unaff_s1 >> 0x20);
  local_c0 = (int)unaff_s0;
  iStack_bc = (int)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
  local_40 = (undefined4)unaff_s8;
  uStack_3c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_50 = (undefined4)unaff_s7;
  uStack_4c = (undefined4)((ulong)unaff_s7 >> 0x20);
  local_70 = (undefined4)unaff_s5;
  uStack_6c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_80 = (undefined4)unaff_s4;
  uStack_7c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_90 = (undefined4)unaff_s3;
  uStack_8c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_d0 = this;
  (*(code *)(_app.m_pFullWindow)->__vtable->OutputCoordinatesChanged)
            ((int)&((_app.m_pFullWindow)->m_mWindow).field0_0x0 +
             (int)*(short *)&(_app.m_pFullWindow)->__vtable->InputCoordinatesChanged);
  if (_globals.m_pStoryModeTransitionShader != (ERShader *)0x0) {
    Select__8ERShaderP3ERCi(_globals.m_pStoryModeTransitionShader,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
    Pos.field0_0x0.d[1] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Pos.field0_0x0.d[0] = 0.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DrawPos.field0_0x0.d[1] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    DrawPos.field0_0x0.d[0] = 1.0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
    Dimensions.field0_0x0 = (EVec2__null___1__1)(null___1__1)0x3f80000000000000;
    local_310 = 0x3f800000;
    local_30c = 0;
    local_2f4 = 0x3f800000;
    local_2f8 = 0x3f800000;
    local_2fc = 0x3f800000;
    local_300 = 0x3f800000;
                    /* end of inlined section */
    (*(code *)prc->__vtable[1].DisplayList)
              (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].SpriteList,&Pos,&DrawPos,
               &Dimensions,&local_310,&local_300);
  }
  if ((_globals.m_pStoryModeTransitionText != (short *)0x0) && (DrawText)) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* end of inlined section */
    SetSize__6ERFontffb(_globals.m_pFont,30.0,1.0,true);
    uVar7 = _WHITE.field0_0x0.d[3];
    uVar6 = _WHITE.field0_0x0.d[2];
    uVar5 = _WHITE.field0_0x0._0_8_;
    pEVar4 = _globals.m_pFont;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
    ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
    (pEVar4->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
    (pEVar4->m_vColor).field0_0x0.d[2] = uVar6;
    (pEVar4->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
    Select__6ERFontP3ERC(_globals.m_pFont,prc);
    Pos.field0_0x0.d[1] = 0.1;
    Pos.field0_0x0.d[0] = 0.1;
    LineBuff[0] = 0;
    psVar10 = WordBuff;
    if (*_globals.m_pStoryModeTransitionText != 0) {
      pEVar12 = (EStorable__vtable *)0x3f000000;
      psVar11 = _globals.m_pStoryModeTransitionText;
      WordBuff[0] = *_globals.m_pStoryModeTransitionText;
      while( true ) {
        psVar10 = psVar10 + 1;
        if (*psVar11 == 0x20) {
          *psVar10 = 0;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          DoGetStringSize__6ERFontPvbP7EWindow
                    ((ERFont *)local_f0,_globals.m_pFont,true,(EWindow *)&pGifTag1);
          pEVar9 = local_f0._0_4_;
          pEVar8 = _pGfx;
          uVar7 = _BLACK.field0_0x0.d[3];
          uVar6 = _BLACK.field0_0x0.d[2];
          uVar5 = _BLACK.field0_0x0._0_8_;
          pEVar4 = _globals.m_pFont;
                    /* end of inlined section */
          Dimensions.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_f0._4_4_,local_f0._0_4_);
          puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
          uVar2 = (uint)puVar1 & 7;
          puVar3 = (ulong *)(puVar1 + -uVar2);
          *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 |
                    (ulong)Dimensions.field0_0x0 >> (7 - uVar2) * 8;
          if (0.9 < Pos.field0_0x0.d[0] + (float)pEVar9) {
            if (LineBuff[0] != 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
              ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
              (pEVar4->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
              (pEVar4->m_vColor).field0_0x0.d[2] = uVar6;
              (pEVar4->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
              DrawPos.field0_0x0.d[0] = 1.0 / (float)pEVar8->m_xscreen + (float)pEVar12;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              DrawPos.field0_0x0.d[1] = Pos.field0_0x0.d[1] + 1.0 / (float)pEVar8->m_yscreen;
              local_f0._16_4_ = DrawPos.field0_0x0.d[0];
              local_dc = (EStorable__vtable *)DrawPos.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
              DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                        (_globals.m_pFont,prc,LineBuff,true,(EVec2 *)(local_f0 + 0x10),E_FAX_CENTER,
                         E_FAY_TOP,(EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
              DrawPos.field0_0x0.d[0] = (float)pEVar12 - 1.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
              DrawPos.field0_0x0.d[1] = Pos.field0_0x0.d[1] - 1.0 / (float)_pGfx->m_yscreen;
              local_f0._0_4_ = (EStorable__vtable *)DrawPos.field0_0x0.d[0];
              local_f0._4_4_ = (char *)DrawPos.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
              DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                        (_globals.m_pFont,prc,LineBuff,true,(EVec2 *)local_f0,E_FAX_CENTER,E_FAY_TOP
                         ,(EVec2 *)0x0);
              uVar7 = _WHITE.field0_0x0.d[3];
              uVar6 = _WHITE.field0_0x0.d[2];
              uVar5 = _WHITE.field0_0x0._0_8_;
              pEVar4 = _globals.m_pFont;
              ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
              (pEVar4->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
              (pEVar4->m_vColor).field0_0x0.d[2] = uVar6;
              (pEVar4->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
              local_f0._4_4_ = (char *)Pos.field0_0x0.d[1];
              DrawPos.field0_0x0.d[1] = Pos.field0_0x0.d[1];
              DrawPos.field0_0x0._0_4_ = pEVar12;
              local_f0._0_4_ = pEVar12;
              DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                        (_globals.m_pFont,prc,LineBuff,true,(EVec2 *)local_f0,E_FAX_CENTER,E_FAY_TOP
                         ,(EVec2 *)0x0);
                    /* end of inlined section */
              LineBuff[0] = 0;
            }
            Pos.field0_0x0.d[1] = Pos.field0_0x0.d[1] + 0.05;
            Pos.field0_0x0.d[0] = 0.1;
          }
          CatWsAToBuff__FPCUsPUsUi(WordBuff,LineBuff,0x80);
          Pos.field0_0x0.d[0] = Pos.field0_0x0.d[0] + Dimensions.field0_0x0.d[0];
          psVar10 = WordBuff;
        }
        psVar11 = psVar11 + 1;
        if (*psVar11 == 0) break;
        *psVar10 = *psVar11;
      }
    }
    *psVar10 = 0;
    if (psVar10 != WordBuff) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
      DoGetStringSize__6ERFontPvbP7EWindow
                ((ERFont *)local_f0,_globals.m_pFont,SUB41(WordBuff,0),(EWindow *)&pGifTag1);
      pEVar12 = local_f0._0_4_;
      pEVar8 = _pGfx;
      uVar7 = _BLACK.field0_0x0.d[3];
      uVar6 = _BLACK.field0_0x0.d[2];
      uVar5 = _BLACK.field0_0x0._0_8_;
      pEVar4 = _globals.m_pFont;
                    /* end of inlined section */
      Dimensions.field0_0x0 = (EVec2__null___1__1)CONCAT44(local_f0._4_4_,local_f0._0_4_);
      puVar1 = (undefined *)((int)&Dimensions.field0_0x0 + 7);
      uVar2 = (uint)puVar1 & 7;
      puVar3 = (ulong *)(puVar1 + -uVar2);
      *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)Dimensions.field0_0x0 >> (7 - uVar2) * 8;
      if (0.9 < Pos.field0_0x0.d[0] + (float)pEVar12) {
        if (LineBuff[0] != 0) {
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
          ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
          (pEVar4->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
          (pEVar4->m_vColor).field0_0x0.d[2] = uVar6;
          (pEVar4->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
          pEVar12 = (EStorable__vtable *)0x3f000000;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          DrawPos.field0_0x0.d[0] = 1.0 / (float)pEVar8->m_xscreen + 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          DrawPos.field0_0x0.d[1] = Pos.field0_0x0.d[1] + 1.0 / (float)pEVar8->m_yscreen;
          local_f0._0_4_ = (EStorable__vtable *)DrawPos.field0_0x0.d[0];
          local_f0._4_4_ = (char *)DrawPos.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                    (_globals.m_pFont,prc,LineBuff,true,(EVec2 *)local_f0,E_FAX_CENTER,E_FAY_TOP,
                     (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
          DrawPos.field0_0x0.d[0] = (float)pEVar12 - 1.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
          DrawPos.field0_0x0.d[1] = Pos.field0_0x0.d[1] - 1.0 / (float)_pGfx->m_yscreen;
          local_f0._0_4_ = (EStorable__vtable *)DrawPos.field0_0x0.d[0];
          local_f0._4_4_ = (char *)DrawPos.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                    (_globals.m_pFont,prc,LineBuff,true,(EVec2 *)local_f0,E_FAX_CENTER,E_FAY_TOP,
                     (EVec2 *)0x0);
          uVar7 = _WHITE.field0_0x0.d[3];
          uVar6 = _WHITE.field0_0x0.d[2];
          uVar5 = _WHITE.field0_0x0._0_8_;
          pEVar4 = _globals.m_pFont;
          ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
          (pEVar4->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
          (pEVar4->m_vColor).field0_0x0.d[2] = uVar6;
          (pEVar4->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
          local_f0._4_4_ = (char *)Pos.field0_0x0.d[1];
          DrawPos.field0_0x0.d[1] = Pos.field0_0x0.d[1];
          DrawPos.field0_0x0.d[0] = (float)pEVar12;
          local_f0._0_4_ = pEVar12;
          DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                    (_globals.m_pFont,prc,LineBuff,true,(EVec2 *)local_f0,E_FAX_CENTER,E_FAY_TOP,
                     (EVec2 *)0x0);
                    /* end of inlined section */
          LineBuff[0] = 0;
        }
        Pos.field0_0x0.d[1] = Pos.field0_0x0.d[1] + 0.05;
        Pos.field0_0x0.d[0] = 0.1;
      }
      CatWsAToBuff__FPCUsPUsUi(WordBuff,LineBuff,0x80);
      pEVar8 = _pGfx;
      uVar7 = _BLACK.field0_0x0.d[3];
      uVar6 = _BLACK.field0_0x0.d[2];
      uVar5 = _BLACK.field0_0x0._0_8_;
      pEVar4 = _globals.m_pFont;
      if (LineBuff[0] != 0) {
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
        ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_BLACK.field0_0x0._0_8_;
        (pEVar4->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
        (pEVar4->m_vColor).field0_0x0.d[2] = uVar6;
        (pEVar4->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
        pEVar12 = (EStorable__vtable *)0x3f000000;
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
        DrawPos.field0_0x0.d[0] = 1.0 / (float)pEVar8->m_xscreen + 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        DrawPos.field0_0x0.d[1] = Pos.field0_0x0.d[1] + 1.0 / (float)pEVar8->m_yscreen;
        local_f0._0_4_ = (EStorable__vtable *)DrawPos.field0_0x0.d[0];
        local_f0._4_4_ = (char *)DrawPos.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (_globals.m_pFont,prc,LineBuff,true,(EVec2 *)local_f0,E_FAX_CENTER,E_FAY_TOP,
                   (EVec2 *)0x0);
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
        DrawPos.field0_0x0.d[0] = (float)pEVar12 - 1.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
        DrawPos.field0_0x0.d[1] = Pos.field0_0x0.d[1] - 1.0 / (float)_pGfx->m_yscreen;
        local_f0._0_4_ = (EStorable__vtable *)DrawPos.field0_0x0.d[0];
        local_f0._4_4_ = (char *)DrawPos.field0_0x0.d[1];
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (_globals.m_pFont,prc,LineBuff,true,(EVec2 *)local_f0,E_FAX_CENTER,E_FAY_TOP,
                   (EVec2 *)0x0);
        uVar7 = _WHITE.field0_0x0.d[3];
        uVar6 = _WHITE.field0_0x0.d[2];
        uVar5 = _WHITE.field0_0x0._0_8_;
        pEVar4 = _globals.m_pFont;
        ((_globals.m_pFont)->m_vColor).field0_0x0.d[0] = (float)_WHITE.field0_0x0._0_8_;
        (pEVar4->m_vColor).field0_0x0.d[1] = (float)((ulong)uVar5 >> 0x20);
        (pEVar4->m_vColor).field0_0x0.d[2] = uVar6;
        (pEVar4->m_vColor).field0_0x0.d[3] = uVar7;
                    /* end of inlined section */
                    /* inlined from /eor/src2/engine/font/e_rfont.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
        local_f0._4_4_ = (char *)Pos.field0_0x0.d[1];
        DrawPos.field0_0x0.d[1] = Pos.field0_0x0.d[1];
        DrawPos.field0_0x0.d[0] = (float)pEVar12;
        local_f0._0_4_ = pEVar12;
        DoDrawAlign__6ERFontP3ERCPvbG5EVec211EFontAlignX11EFontAlignYP5EVec2
                  (_globals.m_pFont,prc,LineBuff,true,(EVec2 *)local_f0,E_FAX_CENTER,E_FAY_TOP,
                   (EVec2 *)0x0);
                    /* end of inlined section */
        LineBuff[0] = 0;
      }
    }
  }
  if (_globals.m_GenTransitionLoadPercent <= 1.0) {
    DrawLoadingBar__13EGameStateManP3ERC(local_d0,prc);
  }
  return;
}

void EGameStateMan::DrawGenericTransitionScreen(ERC *prc) {
  ERC__vtable *pEVar1;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_retaddr;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
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
  (*(code *)(_app.m_pFullWindow)->__vtable->OutputCoordinatesChanged)
            ((int)&((_app.m_pFullWindow)->m_mWindow).field0_0x0 +
             (int)*(short *)&(_app.m_pFullWindow)->__vtable->InputCoordinatesChanged);
  if (_globals.m_pGenericTransShader == (ERShader *)0x0) {
    Select__8ERShaderP3ERCi(_globals.m_pBlackShader,prc,0);
    pEVar1 = prc->__vtable;
  }
  else {
    Select__8ERShaderP3ERCi(_globals.m_pGenericTransShader,prc,0);
    pEVar1 = prc->__vtable;
  }
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  local_7c = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_80 = 0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_6c = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_70 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_60 = 0;
  local_5c = 0x3f800000;
  local_50 = 0x3f800000;
  local_4c = 0;
  local_34 = 0x3f800000;
  local_38 = 0x3f800000;
  local_3c = 0x3f800000;
  local_40 = 0x3f800000;
                    /* end of inlined section */
  (*(code *)pEVar1[1].DisplayList)
            (0,(int)&prc->m_pdl + (int)*(short *)&pEVar1[1].SpriteList,&local_80,&local_70,&local_60
             ,&local_50,&local_40);
  DrawLoadingBar__13EGameStateManP3ERC(this,prc);
  return;
}

void EGameStateMan::DrawLoadingBar(ERC *prc) {
	float fProgress;
	float y;
	EGraphics *this;
	float y;
	EGraphics *this;
	float y;
	EVec4 vStartColor;
	EVec4 vEndColor;
	EVec4 vCurColor;
	EGraphics *this;
	float y;
	EGraphics *this;
	float y;
	EGraphics *this;
	float y;
	
  EWindow__vtable *pEVar1;
  undefined8 uVar2;
  undefined8 unaff_s0;
  undefined8 unaff_s1;
  undefined8 unaff_s2;
  undefined8 unaff_s3;
  undefined8 unaff_s4;
  undefined8 unaff_s5;
  undefined8 unaff_retaddr;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  EVec4 vStartColor;
  EVec4 vEndColor;
  EVec4 vCurColor;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  TRect_float_ local_c0;
  float local_b0;
  float local_ac;
  float local_a0;
  float local_9c;
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
  
  local_40 = (undefined4)unaff_s5;
  uStack_3c = (undefined4)((ulong)unaff_s5 >> 0x20);
  local_50 = (undefined4)unaff_s4;
  uStack_4c = (undefined4)((ulong)unaff_s4 >> 0x20);
  local_60 = (undefined4)unaff_s3;
  uStack_5c = (undefined4)((ulong)unaff_s3 >> 0x20);
  local_70 = (undefined4)unaff_s2;
  uStack_6c = (undefined4)((ulong)unaff_s2 >> 0x20);
  local_80 = (undefined4)unaff_s1;
  uStack_7c = (undefined4)((ulong)unaff_s1 >> 0x20);
  local_90 = (undefined4)unaff_s0;
  uStack_8c = (undefined4)((ulong)unaff_s0 >> 0x20);
  local_30 = (undefined4)unaff_retaddr;
  uStack_2c = (undefined4)((ulong)unaff_retaddr >> 0x20);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vStartColor.field0_0x0.d[3] = 1.0;
                    /* end of inlined section */
  (*(code *)(_app.m_pFullWindow)->__vtable->OutputCoordinatesChanged)
            ((int)&((_app.m_pFullWindow)->m_mWindow).field0_0x0 +
             (int)*(short *)&(_app.m_pFullWindow)->__vtable->InputCoordinatesChanged);
  Select__8ERShaderP3ERCi(this->m_BarLeft,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vStartColor.field0_0x0.d[1] = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
  vStartColor.field0_0x0.d[0] = (this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vEndColor.field0_0x0.d[0] = vStartColor.field0_0x0.d[3];
  vEndColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[3];
  vCurColor.field0_0x0.d[0] = vStartColor.field0_0x0.d[3];
  vCurColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[3];
  vCurColor.field0_0x0.d[2] = vStartColor.field0_0x0.d[3];
  vCurColor.field0_0x0.d[3] = vStartColor.field0_0x0.d[3];
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vStartColor,&vEndColor
             ,&vCurColor);
  Select__8ERShaderP3ERCi(this->m_BarRight,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vStartColor.field0_0x0.d[1] = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vStartColor.field0_0x0.d[0] =
       ((this->m_vBarPos).field0_0x0.d[0] + this->m_fBarWidth * 0.5) -
       33.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vEndColor.field0_0x0.d[0] = vStartColor.field0_0x0.d[3];
  vEndColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[3];
  local_d0 = vStartColor.field0_0x0.d[3];
  local_cc = vStartColor.field0_0x0.d[3];
  local_c8 = vStartColor.field0_0x0.d[3];
  local_c4 = vStartColor.field0_0x0.d[3];
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vStartColor,&vEndColor
             ,&local_d0);
  Select__8ERShaderP3ERCi(this->m_BarMiddle,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  vStartColor.field0_0x0.d[1] = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vStartColor.field0_0x0.d[0] =
       ((this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5) +
       32.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vEndColor.field0_0x0.d[0] =
       (this->m_fBarWidth - 64.0 / (float)_pGfx->m_xscreen) * (float)_pGfx->m_xscreen * 0.03125;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  vEndColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[3];
  vCurColor.field0_0x0.d[0] = vStartColor.field0_0x0.d[3];
  vCurColor.field0_0x0.d[1] = vStartColor.field0_0x0.d[3];
  vCurColor.field0_0x0.d[2] = vStartColor.field0_0x0.d[3];
  vCurColor.field0_0x0.d[3] = vStartColor.field0_0x0.d[3];
  (*(code *)prc->__vtable[1].ClipRect)
            (0,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&vStartColor,&vEndColor
             ,&vCurColor);
  fVar3 = _globals.m_GenTransitionLoadPercent;
  if (_globals.m_GenTransitionLoadPercent < 0.01) {
    fVar3 = 0.01;
  }
  if (this->m_fHighestProgress < fVar3) {
    this->m_fHighestProgress = fVar3;
  }
  if (fVar3 < 0.0) {
    return;
  }
                    /* inlined from /eor/src2/common/math/e_vec4.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec4.h */
  vStartColor.field0_0x0.d[1] = 0.133;
  vStartColor.field0_0x0.d[2] = 0.32;
  vEndColor.field0_0x0.d[0] = 0.373;
  vStartColor.field0_0x0.d[0] = 0.0;
  vEndColor.field0_0x0.d[1] = 0.871;
  vEndColor.field0_0x0.d[2] = 0.906;
                    /* end of inlined section */
  if (fVar3 <= 0.0) {
    uVar2 = 0x3e08312700000000;
    vCurColor.field0_0x0.d[2] = 0.32;
  }
  else {
    if (fVar3 < vStartColor.field0_0x0.d[3]) {
      vCurColor.field0_0x0.d[0] = fVar3 * 0.373 + 0.0;
      vCurColor.field0_0x0.d[1] = fVar3 * 0.738 + 0.133;
      vCurColor.field0_0x0.d[2] = fVar3 * 0.586 + 0.32;
      goto LAB_0015ed00;
    }
    uVar2 = 0x3f5ef9db3ebef9db;
    vCurColor.field0_0x0.d[2] = 0.906;
  }
  vCurColor.field0_0x0.d[0] = (float)(int)uVar2;
  vCurColor.field0_0x0.d[1] = (float)(int)((ulong)uVar2 >> 0x20);
LAB_0015ed00:
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
  local_c0.top = (this->m_vBarPos).field0_0x0.d[1];
  local_c0.left = (this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5;
                    /* inlined from /eor/src2/common/math/e_rect.h */
  fVar4 = 1.0;
                    /* end of inlined section */
  uVar5 = 0;
  local_c0.right = local_c0.left + fVar3 * this->m_fBarWidth;
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  local_c0.bottom = local_c0.top + 32.0 / (float)_pGfx->m_yscreen;
  vEndColor.field0_0x0.d[3] = vStartColor.field0_0x0.d[3];
  vCurColor.field0_0x0.d[3] = vStartColor.field0_0x0.d[3];
                    /* inlined from /eor/src2/common/math/e_rect.h */
                    /* end of inlined section */
  SetClip__7EWindowRCt5TRect1Zf(this->m_pClipWin,&local_c0);
  pEVar1 = this->m_pClipWin->__vtable;
  (*(code *)pEVar1->OutputCoordinatesChanged)
            ((int)&(this->m_pClipWin->m_mWindow).field0_0x0 +
             (int)*(short *)&pEVar1->InputCoordinatesChanged,prc);
  Select__8ERShaderP3ERCi(this->m_BarHighlightLeft,prc,0);
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0.top = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
  local_c0.left = (this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_b0 = fVar4;
  local_ac = fVar4;
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar5,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_b0
             ,&vCurColor);
  Select__8ERShaderP3ERCi(this->m_BarHighlightRight,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0.top = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_c0.left =
       ((this->m_vBarPos).field0_0x0.d[0] + this->m_fBarWidth * 0.5) -
       33.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_a0 = fVar4;
  local_9c = fVar4;
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar5,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_a0
             ,&vCurColor);
  Select__8ERShaderP3ERCi(this->m_BarHighlightMiddle,prc,0);
                    /* inlined from /eor/src2/engine/e_graphics.h */
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
  local_c0.top = (this->m_vBarPos).field0_0x0.d[1];
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_c0.left =
       ((this->m_vBarPos).field0_0x0.d[0] - this->m_fBarWidth * 0.5) +
       32.0 / (float)_pGfx->m_xscreen;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_b0 = (this->m_fBarWidth - 64.0 / (float)_pGfx->m_xscreen) * (float)_pGfx->m_xscreen *
             0.03125;
                    /* inlined from /eor/src2/common/math/e_vec2.h */
                    /* end of inlined section */
  local_ac = fVar4;
  (*(code *)prc->__vtable[1].ClipRect)
            (uVar5,(int)&prc->m_pdl + (int)*(short *)&prc->__vtable[1].ClipRatio,&local_c0,&local_b0
             ,&vCurColor);
  (*(code *)(_app.m_pFullWindow)->__vtable->OutputCoordinatesChanged)
            ((int)&((_app.m_pFullWindow)->m_mWindow).field0_0x0 +
             (int)*(short *)&(_app.m_pFullWindow)->__vtable->InputCoordinatesChanged,prc);
  return;
}
