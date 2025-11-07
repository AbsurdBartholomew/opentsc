// STATUS: NOT STARTED

#include "e_particleman.h"

EParticleMan _pclman = {
	/* .m_pclClasses = */ {
		/* [0] = */ {
			/* .size = */ 0
		},
		/* [1] = */ {
			/* .size = */ 0
		},
		/* [2] = */ {
			/* .size = */ 0
		},
		/* [3] = */ {
			/* .size = */ 0
		},
		/* [4] = */ {
			/* .size = */ 0
		}
	},
	/* .m_emitList = */ {
		/* .m_pHead = */ NULL,
		/* .m_pTail = */ NULL
	},
	/* .m_pNextUpdateEmit = */ NULL,
	/* .m_orphanParticles = */ {
		/* .m_pHead = */ NULL,
		/* .m_pTail = */ NULL
	},
	/* .m_pData = */ NULL,
	/* .m_nVtxs = */ 0,
	/* .m_init = */ false,
	/* .m_timeScale = */ 0.f,
	/* .$vf3978 = */ NULL
};

ERShader *EParticleMan::m_pLastRShader = NULL;

__vtbl_ptr_type EParticleMan virtual table[3] = {
	/* [0] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	},
	/* [1] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ &EParticleMan::~EParticleMan,
		/* .__delta2 = */ 15208
	},
	/* [2] = */ {
		/* .__delta = */ 0,
		/* .__index = */ 0,
		/* .__pfn = */ NULL,
		/* .__delta2 = */ 0
	}
};

EParticleMan* EParticleMan::EParticleMan() {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_emitList).m_pTail = (EIParticleEmit *)0x0;
                    /* end of inlined section */
  this->__vtable = (EParticleMan__vtable *)_vt_12EParticleMan;
  this->m_timeScale = 1.0;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_emitList).m_pHead = (EIParticleEmit *)0x0;
  (this->m_orphanParticles).m_pTail = (EParticle *)0x0;
  (this->m_orphanParticles).m_pHead = (EParticle *)0x0;
  return this;
}

void EParticleMan::Init() {
  this->m_pclClasses[0].size = 200;
  this->m_pclClasses[2].size = 0xe0;
  this->m_pclClasses[1].size = 0xd4;
  this->m_pclClasses[3].size = 0x120;
  this->m_pclClasses[4].size = 0xc4;
  return;
}

void EParticleMan::~EParticleMan(int __in_chrg) {
	void *pAddress;
	
  this->__vtable = (EParticleMan__vtable *)_vt_12EParticleMan;
  DestroyOrphans__12EParticleMan(this);
  if ((__in_chrg & 1U) != 0) {
                    /* inlined from /eor/src2/common/e_standard_heap.h */
    _memmanFree__FPv(this);
                    /* end of inlined section */
  }
  return;
}

void EParticleMan::DestroyOrphans() {
	EParticle *pPcl;
	EParticle *pNext;
	
  EParticle *pEVar1;
  EStorable__vtable *pEVar2;
  EParticle *pEVar3;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar3 = (this->m_orphanParticles).m_pHead;
                    /* end of inlined section */
  if (pEVar3 != (EParticle *)0x0) {
    pEVar2 = (pEVar3->field0_0x0).field0_0x0.__vtable;
    while( true ) {
      pEVar1 = pEVar3->m_pNext;
      (*(code *)pEVar2[5].GetTypeKey)
                ((int)((pEVar3->field0_0x0).m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar2[5].GetTypeName);
      if (pEVar1 == (EParticle *)0x0) break;
      pEVar2 = (pEVar1->field0_0x0).field0_0x0.__vtable;
      pEVar3 = pEVar1;
    }
  }
  return;
}

void EParticleMan::Update() {
	float dt;
	EParticle *pPcl;
	EIParticleEmit *pEmit;
	EParticleMan *this;
	EParticle *pNext;
	
  EParticle *pEVar1;
  EIParticleEmit *pEVar2;
  EStorable__vtable *pEVar3;
  EParticle *pEVar4;
  EIParticleEmit *pEVar5;
  float fVar6;
  
                    /* inlined from c:/eor/src2/engine/particle/e_particleman.h */
  pEVar4 = (this->m_orphanParticles).m_pHead;
                    /* end of inlined section */
  fVar6 = _dt * this->m_timeScale;
  if (pEVar4 != (EParticle *)0x0) {
    pEVar3 = (pEVar4->field0_0x0).field0_0x0.__vtable;
    while( true ) {
      pEVar1 = pEVar4->m_pNext;
      (*(code *)pEVar3[5].Write)
                (fVar6,(int)((pEVar4->field0_0x0).m_otd.m_minPos + -7) +
                       (int)*(short *)&pEVar3[5].Read);
      if (pEVar1 == (EParticle *)0x0) break;
      pEVar3 = (pEVar1->field0_0x0).field0_0x0.__vtable;
      pEVar4 = pEVar1;
    }
  }
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar5 = (this->m_emitList).m_pHead;
                    /* end of inlined section */
  if (pEVar5 == (EIParticleEmit *)0x0) {
    this->m_pNextUpdateEmit = (EIParticleEmit *)0x0;
  }
  else {
    pEVar2 = pEVar5->pNext;
    while( true ) {
      this->m_pNextUpdateEmit = pEVar2;
      pEVar3 = (pEVar5->field0_0x0).field0_0x0.field0_0x0.__vtable;
      (*(code *)pEVar3[2].GetTypeName)
                ((int)((pEVar5->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar3[2].GetTypeInfo);
      pEVar5 = this->m_pNextUpdateEmit;
      if (pEVar5 == (EIParticleEmit *)0x0) break;
      pEVar2 = pEVar5->pNext;
    }
    this->m_pNextUpdateEmit = (EIParticleEmit *)0x0;
  }
  return;
}

void EParticleMan::Draw(ERC *pRC) {
	EParticle *pPcl;
	EPortalWindow *pWin;
	EIParticleEmit *pEmit;
	u32 visFlags;
	u32 renderFlags;
	
  EIParticleEmit *pEVar1;
  EPortalWindow *pEVar2;
  EStorable__vtable *pEVar3;
  ulong uVar4;
  undefined8 uVar5;
  EParticle *pEVar6;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar6 = (this->m_orphanParticles).m_pHead;
                    /* end of inlined section */
  _12EParticleMan_m_pLastRShader = (ERShader *)0x0;
  if (pEVar6 != (EParticle *)0x0) {
    pEVar3 = (pEVar6->field0_0x0).field0_0x0.__vtable;
    while( true ) {
      (*(code *)pEVar3[6].GetTypeVersion)
                ((int)((pEVar6->field0_0x0).m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar3[6].GetTypeKey,pRC);
      pEVar6 = pEVar6->m_pNext;
      if (pEVar6 == (EParticle *)0x0) break;
      pEVar3 = (pEVar6->field0_0x0).field0_0x0.__vtable;
    }
  }
  pEVar2 = _7EWindow_m_pCurrentPortalWindow;
                    /* inlined from /eor/src2/engine/window/e_window.h */
                    /* end of inlined section */
  for (pEVar1 = (this->m_emitList).m_pHead; pEVar1 != (EIParticleEmit *)0x0; pEVar1 = pEVar1->pNext)
  {
    if (pEVar2 == (EPortalWindow *)0x0) {
      uVar4 = 0x15;
    }
    else {
      pEVar3 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.__vtable;
      uVar4 = (*(code *)pEVar3[2].GetTypeVersion)
                        ((int)((pEVar1->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                         (int)*(short *)&pEVar3[2].GetTypeKey,pEVar2,0x15);
    }
    if (uVar4 != 0) {
      pEVar3 = (pEVar1->field0_0x0).field0_0x0.field0_0x0.__vtable;
      uVar5 = 4;
      if ((uVar4 & 1) != 0) {
        uVar5 = 5;
      }
      (*(code *)pEVar3[2].Read)
                ((int)((pEVar1->field0_0x0).field0_0x0.m_otd.m_minPos + -7) +
                 (int)*(short *)&pEVar3[2].EStorable,pRC,uVar5);
    }
  }
  return;
}

EParticle* EParticleMan::Get(int type) {
	EParticle *pNew;
	
  EParticle *pEVar1;
  
  if ((uint)type < 5) {
                    /* WARNING: Could not recover jumptable at 0x002c3dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pEVar1 = (EParticle *)(*(code *)(&PTR_LAB_003c5090)[type])();
    return pEVar1;
  }
                    /* end of inlined section */
  uRam000000b4 = 0;
  return (EParticle *)0x0;
}

void EParticleMan::Free(EParticle *pPcl, int type) {
	EParticle *pNode;
	void *pNode;
	EParticle *pNode;
	void *pNode;
	void *pNode;
	EParticle *pNode;
	void *pNode;
	EParticle *pNode;
	EParticle *pNode;
	
  EParticle **ppEVar1;
  EStorable__vtable *pEVar2;
  
  ppEVar1 = (EParticle **)pPcl->m_pOwnerList;
  if (ppEVar1 != (EParticle **)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    if (*ppEVar1 == pPcl) {
      *ppEVar1 = pPcl->m_pNext;
    }
    else {
      pPcl->m_pLast->m_pNext = pPcl->m_pNext;
    }
    if (ppEVar1[1] == pPcl) {
      ppEVar1[1] = pPcl->m_pLast;
    }
    else {
      pPcl->m_pNext->m_pLast = pPcl->m_pLast;
    }
  }
                    /* end of inlined section */
  if (pPcl != (EParticle *)0x0) {
    pEVar2 = (pPcl->field0_0x0).field0_0x0.__vtable;
    (*(code *)pEVar2[1].GetTypeKey)
              ((int)((pPcl->field0_0x0).m_otd.m_minPos + -7) + (int)*(short *)&pEVar2[1].GetTypeName
               ,3);
  }
  return;
}

void EParticleMan::AddEmit(EIParticleEmit *pEmit) {
	EIParticleEmit *pEmitter;
	TLinkedList<EIParticleEmit,288,284> *this;
	EIParticleEmit *pNewNode;
	EIParticleEmit *pNode;
	void *pNode;
	
  EIParticleEmit *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pEVar1 = (this->m_emitList).m_pHead;
  while( true ) {
                    /* end of inlined section */
    if (pEVar1 == (EIParticleEmit *)0x0) {
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
      pEmit->pLast = (this->m_emitList).m_pTail;
      pEVar1 = (this->m_emitList).m_pTail;
      if (pEVar1 == (EIParticleEmit *)0x0) {
        (this->m_emitList).m_pHead = pEmit;
      }
      else {
        pEVar1->pNext = pEmit;
      }
      pEmit->pNext = (EIParticleEmit *)0x0;
      (this->m_emitList).m_pTail = pEmit;
                    /* end of inlined section */
      return;
    }
    if (pEVar1 == pEmit) break;
    pEVar1 = pEVar1->pNext;
  }
  return;
}

void EParticleMan::RemoveEmit(EIParticleEmit *pEmit) {
	TLinkedList<EIParticleEmit,288,284> *this;
	EIParticleEmit *pNode;
	void *pNode;
	EIParticleEmit *pNode;
	void *pNode;
	void *pNode;
	EIParticleEmit *pNode;
	void *pNode;
	EIParticleEmit *pNode;
	EIParticleEmit *pNode;
	
  EIParticleEmit *pEVar1;
  
  if (pEmit == this->m_pNextUpdateEmit) {
    this->m_pNextUpdateEmit = pEmit->pNext;
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
    pEVar1 = (this->m_emitList).m_pHead;
  }
  else {
    pEVar1 = (this->m_emitList).m_pHead;
  }
  if (pEVar1 == pEmit) {
    (this->m_emitList).m_pHead = pEmit->pNext;
  }
  else {
    pEmit->pLast->pNext = pEmit->pNext;
  }
  if ((this->m_emitList).m_pTail != pEmit) {
    pEmit->pNext->pLast = pEmit->pLast;
    return;
  }
  (this->m_emitList).m_pTail = pEmit->pLast;
  return;
}

void EParticleMan::AddOrphan(EParticle *pPcl) {
	TLinkedList<EParticle,184,188> *this;
	EParticle *pNewNode;
	EParticle *pNode;
	void *pNode;
	
  EParticle *pEVar1;
  
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  pPcl->m_pLast = (this->m_orphanParticles).m_pTail;
  pEVar1 = (this->m_orphanParticles).m_pTail;
  if (pEVar1 == (EParticle *)0x0) {
    (this->m_orphanParticles).m_pHead = pPcl;
  }
  else {
    pEVar1->m_pNext = pPcl;
  }
  pPcl->m_pNext = (EParticle *)0x0;
                    /* end of inlined section */
                    /* inlined from /eor/src2/common/datastruc/e_linkedlist.h */
  (this->m_orphanParticles).m_pTail = pPcl;
                    /* end of inlined section */
  pPcl->m_pOwnerList = &this->m_orphanParticles;
  return;
}

void EParticleMan::Emit(char *szName, EVec3 &vPos, EVec3 &vVel, ERLevel *pLevel) {
  EStorable__vtable *pEVar1;
  EResource *pEVar2;
  
                    /* inlined from c:/eor/src2/engine/particle/e_particletypeman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/particle/e_particletypeman.h */
  pEVar2 = AddRef__16EResourceManagerPCcP5EFilei(&_particletypeman.field0_0x0,szName,(EFile *)0x0,0)
  ;
                    /* end of inlined section */
  pEVar1 = (pEVar2->field0_0x0).__vtable;
  (**(code **)(pEVar1 + 3))
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)&pEVar1[2].Write,vPos,vVel,pLevel)
  ;
  return;
}

void EParticleMan::Emit(int id, EVec3 &vPos, EVec3 &vVel, ERLevel *pLevel) {
  EStorable__vtable *pEVar1;
  EResource *pEVar2;
  
                    /* inlined from c:/eor/src2/engine/particle/e_particletypeman.h */
                    /* end of inlined section */
                    /* inlined from c:/eor/src2/engine/particle/e_particletypeman.h */
  pEVar2 = AddRef__16EResourceManagerUiP5EFilei(&_particletypeman.field0_0x0,id,(EFile *)0x0,0);
                    /* end of inlined section */
  pEVar1 = (pEVar2->field0_0x0).__vtable;
  (**(code **)(pEVar1 + 3))
            ((int)&(pEVar2->field0_0x0).__vtable + (int)*(short *)&pEVar1[2].Write,vPos,vVel,pLevel)
  ;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if (__priority == 0xffff) {
    if (__initialize_p == 0) {
      ___12EParticleMan(&_pclman,2);
    }
    else {
      __12EParticleMan(&_pclman);
    }
  }
  return;
}

void EParticleMan::SetTimeScale(float scale) {
  this->m_timeScale = scale;
  return;
}

float EParticleMan::GetTimeScale() {
  return this->m_timeScale;
}

void global constructors keyed to _pclman() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

void global destructors keyed to _pclman() {
  __static_initialization_and_destruction_0(0,0xffff);
  return;
}
